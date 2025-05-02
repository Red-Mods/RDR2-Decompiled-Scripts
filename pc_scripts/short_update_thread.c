//Decompiled with MagicRDR v1.0
//Function Count : 453
//Statics Count : 120
//Natives Count : 532
//Parameters Count : 0

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	struct<2> Local_2 = { 0, 0 } ;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	float fLocal_8 = 0.0f;
	int iLocal_9 = 0;
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
	struct<8> Local_20[6];
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	bool bLocal_118 = false;
	float fLocal_119 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_5 = 31;
	iLocal_6 = 33;
	iLocal_7 = 1;
	fLocal_8 = 2.0f;
	Function_448(&(Local_20[08]));
	Function_311(&(Local_20[18]));
	Function_192(&(Local_20[38]));
	Function_142(&(Local_20[58]));
	Function_108(&(Local_20[48]));
	Function_2(&(Local_20[28]));
	while ((!Function_1(256) && !IS_EXITFLAG_SET()) && !IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
	{
		WAIT(false);
	}
	iVar0 = 0;
	while (iVar0 <= Local_20)
	{
		if (Local_20[iVar08].f_56 || !Global_53524.f_44)
		{
			Call_Loc(Local_20[iVar08]);
			Local_20[iVar08].f_60 = 1;
		}
		else
		{
			Local_20[iVar08].f_60 = 0;
		}
		iVar0++;
	}
	while (!IS_EXITFLAG_SET())
	{
		SET_DEBUG_DRAW(((Global_47267[5] || Global_47267[6]) || Global_47267[7]));
		iVar0 = 0;
		while (iVar0 <= Local_20)
		{
			if (Local_20[iVar08].f_56 | 1)
			{
				if (bLocal_118)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&Local_20[iVar08] + 24);
					PRINTSTRING(": ");
					fLocal_119 = GET_PROFILE_TIME();
				}
				Call_Loc(StackVal);
				if (bLocal_118)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_119));
					PRINTNL();
				}
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Local_20)
	{
		if (Local_20[iVar08].f_60)
		{
			Call_Loc(Local_20[iVar08].f_16);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1(int iParam0) //Position: 0x172 / 370
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_2(struct<57> Param0) //Position: 0x18E / 398
{
	strcpy(&Param0 + 24, "EVENT-MONITOR", 16);
	Param0 = 29095;
	*(&Param0 + 8) = 530;
	*(&Param0 + 16) = 461;
	Param0.f_56 = 1;
	return;
}

void Function_3() //Position: 0x1CD / 461
{
	var uVar0;
	
	if (IS_ITERATOR_VALID(&Global_39613))
	{
		DESTROY_ITERATOR(&Global_39613);
	}
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		RELEASE_LAYOUT_REF(&uVar0);
	}
	return;
}

int Function_4() //Position: 0x212 / 530
{
	var uVar0;
	
	Function_106(0);
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		return 0;
	}
	uVar0 = START_OBJECT_ITERATOR(&Global_39613);
	while (IS_OBJECT_VALID(&uVar0))
	{
		Function_105(GET_EVENT_FROM_OBJECT(&uVar0), 0);
		Function_87(GET_EVENT_FROM_OBJECT(&uVar0));
		Function_67(GET_EVENT_FROM_OBJECT(&uVar0));
		Function_63(GET_EVENT_FROM_OBJECT(&uVar0));
		Function_62(GET_EVENT_FROM_OBJECT(&uVar0));
		Function_42(GET_EVENT_FROM_OBJECT(&uVar0));
		Function_30(GET_EVENT_FROM_OBJECT(&uVar0));
		uVar0 = OBJECT_ITERATOR_NEXT(&Global_39613);
	}
	Function_5();
	return 0;
}

void Function_5() //Position: 0x28D / 653
{
	bool bVar0;
	
	bVar0 = GET_WEAPON_IN_HAND(&Global_54076);
	if (SHIFT_RIGHT(Global_77931, 8) & 255 >= 0)
	{
		Function_24(bVar0);
	}
	if (Global_77931 & 255 >= 0)
	{
		Function_23(bVar0);
	}
	if (Function_22(Global_77931, 0x40000000))
	{
		Function_6(135, 1, 0, 0);
	}
	if (Function_22(Global_77931, 0x20000000))
	{
		Function_6(134, 1, 0, 0);
	}
	if (Function_22(Global_77931, 0x10000000))
	{
		Function_6(136, 1, 0, 0);
	}
	if (Function_22(Global_77931, 0x8000000))
	{
		Function_6(137, 1, 0, 0);
	}
	Global_77931 = 0;
	return;
}

int Function_6(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x326 / 806
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_21(iParam0, TO_FLOAT(bParam1), 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_8(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_7(iParam0);
	return 1;
}

void Function_7(bool bParam0) //Position: 0x54E / 1358
{
	switch (bParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_8(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x5EC / 1516
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_13(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_10(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_9(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_9() //Position: 0xC2A / 3114
{
	int iVar0;
	
	return &iVar0;
}

var Function_10(int iParam0) //Position: 0xC33 / 3123
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_11(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xC44 / 3140
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_12(char* cParam0) //Position: 0xD3B / 3387
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_13(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xD56 / 3414
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_14(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_14(int iParam0, int iParam1) //Position: 0xDBD / 3517
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_15(int iParam0, bool bParam1) //Position: 0xDCF / 3535
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xDE1 / 3553
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_17(int iParam0) //Position: 0xF15 / 3861
{
	return Global_55480[iParam016].f_96;
}

float Function_18(int iParam0) //Position: 0xF24 / 3876
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_19(int iParam0) //Position: 0xF5D / 3933
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_20(int iParam0) //Position: 0xF9A / 3994
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

int Function_21(int iParam0, bool bParam1, bool bParam2) //Position: 0x1134 / 4404
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

bool Function_22(bool bParam0, int iParam1) //Position: 0x1378 / 4984
{
	return (bParam0 && iParam1) == 0;
}

void Function_23(bool bParam0) //Position: 0x1385 / 4997
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
			Function_6(49, 1, 0, 0);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_6(iVar0, 1, 0, 0);
	return;
}

void Function_24(bool bParam0) //Position: 0x13D5 / 5077
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
			Function_6(89, 1, 0, 0);
			Function_28(6);
			Function_25(6);
			break;
	}
	iVar0 = (50 + bParam0);
	Function_29(iVar0, (Function_19(iVar0) + 1.0f));
	iVar0 = (90 + bParam0);
	Function_6(iVar0, 1, 0, 0);
	return;
}

void Function_25(int iParam0) //Position: 0x144D / 5197
{
	if (iParam0 == 6)
	{
		if (Global_21369.f_236 >= 0)
		{
			Global_21369.f_236 = (Global_21369.f_236 * 4294967295);
		}
		else if (Global_21369.f_236 <= 0)
		{
			Global_21369.f_236 = 0;
		}
	}
	else if (iParam0 == 11)
	{
		if (Global_21369.f_236 <= 0)
		{
			Global_21369.f_236 = (Global_21369.f_236 * 4294967295);
		}
		Global_21369.f_236++;
		if (Global_21369.f_236 >= Function_27(48))
		{
			Function_26(48, Global_21369.f_236, 0);
		}
	}
	return;
}

int Function_26(int iParam0, bool bParam1, bool bParam2) //Position: 0x14C4 / 5316
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
		Function_21(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_20(iParam0);
	if (&bParam2)
	{
		Function_8(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_27(int iParam0) //Position: 0x1760 / 5984
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_28(int iParam0) //Position: 0x17A1 / 6049
{
	if (iParam0 == 6)
	{
		if (Global_21369.f_232 >= 0)
		{
			Global_21369.f_232 = (Global_21369.f_232 * 4294967295);
		}
		else if (Global_21369.f_232 <= 0)
		{
			Global_21369.f_232 = 0;
		}
	}
	else if (iParam0 == 10)
	{
		if (Global_21369.f_232 <= 0)
		{
			Global_21369.f_232 = (Global_21369.f_232 * 4294967295);
		}
		Global_21369.f_232++;
		if (Global_21369.f_232 >= Function_27(47))
		{
			Function_26(47, Global_21369.f_232, 0);
		}
	}
	return;
}

int Function_29(int iParam0, int iParam1) //Position: 0x1818 / 6168
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

void Function_30(int iParam0) //Position: 0x1858 / 6232
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	uVar4 = GET_EVENT_PERPETRATOR(&iParam0);
	bVar5 = GET_EVENT_TYPE(&iParam0);
	switch (bVar5)
	{
		case 0x0000005F:
			if (!IS_OBJECT_VALID(&uVar4))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar4) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar4) != &Global_54076)
			{
				return;
			}
			bVar1 = DECOR_GET_INT(&iParam0, "Type");
			if (bVar1 < 4294967295 && bVar1 > 21)
			{
				if ((Function_40(65536) || Function_39()) && !Function_38())
				{
					SET_WEAPON_GOLD(&Global_54076, bVar2, IS_GOLDEN_GUNS_ON());
				}
			}
			if (!Function_37(Global_119934, 0x1000000))
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
						if (ACTOR_HAS_WEAPON(&Global_54076, bVar2))
						{
							iVar3++;
						}
					}
					bVar2++;
				}
				if (iVar3 >= 1)
				{
					Function_31(&Global_54076, 0x1000000, 1, 0);
				}
			}
			break;
	}
	return;
}

void Function_31(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1959 / 6489
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_33(&bParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_32(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&bParam0, &cVar1))
	{
		DECOR_SET_INT(&bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&bParam0, &cVar1, (DECOR_GET_INT(&bParam0, &cVar1) || bVar0));
	}
}

void Function_32(char* cParam0) //Position: 0x19CE / 6606
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_33(int iParam0, var uParam1, int iParam2) //Position: 0x1A08 / 6664
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_35(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_34(uVar0))
		{
			case 0x00000002:
				if (!Function_37(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_34(char* cParam0) //Position: 0x1A84 / 6788
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

int Function_35(int iParam0) //Position: 0x1B25 / 6949
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

void Function_36(var uParam0, int iParam1) //Position: 0x1B62 / 7010
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

bool Function_37(int iParam0, int iParam1) //Position: 0x1B78 / 7032
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_38() //Position: 0x1B8B / 7051
{
	if (Function_22(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_39() //Position: 0x1BA6 / 7078
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_22(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_40(int iParam0) //Position: 0x1BD6 / 7126
{
	return Function_41(Global_131807.f_1304, iParam0);
}

int Function_41(var uParam0, int iParam1) //Position: 0x1BE8 / 7144
{
	return (uParam0 && iParam1) == 0;
}

void Function_42(int iParam0) //Position: 0x1BF5 / 7157
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	uVar1 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
	uVar0 = GET_EVENT_PERPETRATOR(&iParam0);
	if (GET_EVENT_TYPE(&iParam0) == 112)
	{
		if (IS_OBJECT_VALID(&uVar1))
		{
			Function_57(StackVal, &uVar1, Vector(0.0f, 0.0f, 0.0f), 1, &uVar0, 0);
		}
		return;
	}
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return;
	}
	iVar10 = Function_56();
	switch (GET_EVENT_TYPE(&iParam0))
	{
		case 0x00000002:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			Global_21369.f_228 = 0;
			if (IS_ACTOR_ANIMAL(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				Function_6(26, 1, 0, 0);
				if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(&uVar0), 0))
				{
					Function_6(138, 1, 0, 0);
				}
				if (StackVal && Function_22(!Function_22(StackVal, 4), 2))
				{
					if (DECOR_CHECK_EXIST(&iParam0, "Weapon"))
					{
						bVar2 = DECOR_GET_INT(&iParam0, "Weapon");
					}
					else
					{
						bVar2 = GET_WEAPON_IN_HAND(&Global_54076);
					}
					if (bVar2 == 24)
					{
						bVar5 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1));
						if ((((((((bVar5 != 1087 || bVar5 != 1088) || bVar5 != 1089) || bVar5 != 1090) || bVar5 != 1091) || bVar5 != 1091) || bVar5 != 1092) || bVar5 != 1093) || bVar5 != 1094)
						{
							DECOR_SET_BOOL(&Global_54076, "CougarOutfitKill", true);
						}
					}
				}
				Function_55(GET_ACTOR_FROM_OBJECT(&uVar1));
				if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(&uVar1)))
				{
					if (IS_ACTOR_MOUNTED(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						if (Function_54(GET_RIDER(GET_ACTOR_FROM_OBJECT(&uVar1))))
						{
							Function_6(41, 1, 0, 0);
						}
					}
				}
				else if (!Global_6629)
				{
					if (!Function_37(Global_119936, 524288))
					{
						Function_31(&Global_54076, 524288, 3, 0);
					}
					if (Global_43787 == 1)
					{
						if (!Function_37(Global_119936, 2097152))
						{
							Function_31(&Global_54076, 2097152, 3, 0);
						}
					}
				}
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			bVar4 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1));
			if ((bVar4 == 1263 && bVar4 == 1264) && bVar4 == 1265)
			{
				if (!Function_38())
				{
					Function_6(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(&uVar0), 0))
					{
						Function_6(139, 1, 0, 0);
					}
				}
				else if (((((((!DECOR_CHECK_EXIST(&uVar1, "Zombie") && !(bVar4 <= 1204 && bVar4 >= 1254)) && bVar4 == 541) && bVar4 == 542) && bVar4 == 543) && bVar4 == 544) && bVar4 == 1252) && bVar4 == 1253)
				{
					Function_6(27, 1, 0, 0);
					if (IS_ACTOR_ON_TRAIN(GET_ACTOR_FROM_OBJECT(&uVar0), 0))
					{
						Function_6(139, 1, 0, 0);
					}
				}
			}
			if (DECOR_CHECK_EXIST(&iParam0, "Weapon"))
			{
				bVar2 = DECOR_GET_INT(&iParam0, "Weapon");
			}
			else
			{
				bVar2 = GET_WEAPON_IN_HAND(&iVar10);
			}
			if (bVar2 < 4294967295 && bVar2 > 39)
			{
				if (!Function_38())
				{
					Function_6((183 + bVar2), 1, 0, 0);
				}
				else if (((((((DECOR_CHECK_EXIST(&uVar1, "Zombie") || (bVar4 <= 1204 && bVar4 >= 1254)) || bVar4 != 541) || bVar4 != 542) || bVar4 != 543) || bVar4 != 544) || bVar4 != 1252) || bVar4 != 1253)
				{
					Function_6((183 + bVar2), 1, 0, 0);
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
			if (bVar4 <= 1263 && bVar4 >= 1265)
			{
				Function_6(602, 1, 0, 0);
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(51))
				{
					AWARD_ACHIEVEMENT(51);
				}
			}
			else if (bVar4 <= 516 && bVar4 >= 531)
			{
				Function_6(39, 1, 0, 0);
			}
			else if (bVar4 <= 505 && bVar4 >= 515)
			{
				Function_6(37, 1, 0, 0);
			}
			else if (bVar4 <= 496 && bVar4 >= 504)
			{
				Function_6(38, 1, 0, 0);
			}
			else if (bVar4 <= 486 && bVar4 >= 494)
			{
				Function_6(36, 1, 0, 0);
			}
			else if (bVar4 <= 477 && bVar4 >= 485)
			{
				Function_6(35, 1, 0, 0);
			}
			else if (bVar4 <= 467 && bVar4 >= 476)
			{
				Function_6(40, 1, 0, 0);
			}
			else if (bVar4 <= 455 && bVar4 >= 466)
			{
				Function_6(32, 1, 0, 0);
			}
			else if (bVar4 <= 449 && bVar4 >= 454)
			{
				Function_6(30, 1, 0, 0);
			}
			else if (bVar4 <= 424 && bVar4 >= 442)
			{
				Function_6(29, 1, 0, 0);
			}
			else if (bVar4 <= 397 && bVar4 >= 423)
			{
				Function_6(34, 1, 0, 0);
			}
			else if (bVar4 <= 379 && bVar4 >= 396)
			{
				Function_6(33, 1, 0, 0);
			}
			else if (bVar4 <= 369 && bVar4 >= 378)
			{
				Function_6(31, 1, 0, 0);
			}
			else if (DECOR_CHECK_EXIST(&uVar1, "criminal"))
			{
				Function_6(34, 1, 0, 0);
			}
			else
			{
				Function_6(28, 1, 0, 0);
				bVar9 = false;
			}
			if (bVar9)
			{
				Function_52(DECOR_CHECK_EXIST(&iParam0, "headshot"));
			}
			break;
		
		case 0x00000003:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			Function_6(43, 1, 0, 0);
			break;
		
		case 0x0000000A:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)) && !Function_38())
			{
				return;
			}
			Function_6(42, 1, 0, 0);
			Function_28(10);
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(26))
			{
				if (GET_PLAYER_COMBATMODE() == 1)
				{
					if (Function_54(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						AWARD_ACHIEVEMENT(26);
					}
				}
			}
			Function_53(38);
			break;
		
		case 0x00000005:
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			bVar3 = DECOR_GET_INT(&iParam0, "Weapon");
			if (bVar3 == 31)
			{
				if (GET_ACTOR_FROM_OBJECT(&uVar0) == &iVar10)
				{
					Function_48(&iParam0, 0);
				}
				else
				{
					if (IS_ACTOR_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar0)) && 0)
					{
						Function_48(&iParam0, 1);
					}
					return;
				}
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(&iVar10);
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "Weapon"))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
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
					bVar8 = SHIFT_RIGHT(Global_77931, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_77931, 8) & 255;
					iVar7 = Global_77931 & 255;
					iVar7++;
					Global_77931 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					break;
				
				case 0x0000001D:
					DECOR_SET_INT(&uVar1, "HitsByTomahawk", DECOR_GET_INT(&uVar1, "HitsByTomahawk") + 1);
					Function_23(bVar3);
					break;
				
				default:
					Function_23(bVar3);
					break;
			}
			break;
		
		case 0x00000006:
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
			{
				return;
			}
			bVar3 = GET_WEAPON_IN_HAND(&iVar10);
			switch (bVar3)
			{
				case 0x00000010:
				case 0x00000011:
				case 0x0000000F:
				case 0x00000012:
				case 0x00000022:
					bVar8 = SHIFT_RIGHT(Global_77931, 24) & 255;
					bVar6 = SHIFT_RIGHT(Global_77931, 8) & 255;
					iVar7 = Global_77931 & 255;
					bVar6++;
					Global_77931 = ((SHIFT_LEFT(bVar6, 8) || iVar7) || SHIFT_LEFT(bVar8, 24));
					if (IS_ACTOR_USING_COVER(&iVar10))
					{
						Function_47(&Global_77931, 0x40000000);
					}
					else if (IS_ACTOR_CROUCHING(&iVar10))
					{
						Function_47(&Global_77931, 0x20000000);
					}
					if (IS_ACTOR_RIDING(&iVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(&iVar10)) || IS_ACTOR_MULE(GET_MOUNT(&iVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 8)
						{
							Function_47(&Global_77931, 0x10000000);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(&iVar10))
					{
						Function_47(&Global_77931, 0x8000000);
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
					if (IS_ACTOR_USING_COVER(&iVar10))
					{
						Function_6(135, 1, 0, 0);
					}
					else if (IS_ACTOR_CROUCHING(&iVar10))
					{
						Function_6(134, 1, 0, 0);
					}
					if (IS_ACTOR_RIDING(&iVar10))
					{
						if (((IS_ACTOR_HORSE(GET_MOUNT(&iVar10)) || IS_ACTOR_MULE(GET_MOUNT(&iVar10))) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 9) || ANIMAL_ACTOR_GET_SPECIES(GET_MOUNT(&iVar10)) != 8)
						{
							Function_6(136, 1, 0, 0);
						}
					}
					if (IS_ACTOR_INSIDE_VEHICLE(&iVar10))
					{
						Function_6(137, 1, 0, 0);
					}
					Function_24(bVar3);
					break;
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			if (GET_LAST_HIT_TIME(GET_ACTOR_FROM_OBJECT(&uVar1)) < (GET_CURRENT_GAME_TIME() - 0,5f))
			{
				return;
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "DroppedItem"))
			{
				return;
			}
			uVar1 = DECOR_GET_OBJECT(&iParam0, "DroppedItem");
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
			{
				return;
			}
			if (GET_OBJECT_TYPE(&uVar1) == 17)
			{
				Function_6(45, 1, 0, 0);
				Function_44(10);
			}
			break;
		
		case 0x0000000B:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			Function_6(46, 1, 0, 0);
			Function_25(11);
			break;
		
		case 0x00000004:
			Function_6(44, 1, 0, 0);
			break;
		
		case 0x00000057:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_RIDER(GET_ACTOR_FROM_OBJECT(&uVar0)) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
				{
					DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_6(130, 1, 0, 0);
					Function_6(129, 1, 0, 0);
				}
				else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
				{
					DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
					Function_6(130, 1, 0, 0);
					Function_6(129, 1, 0, 0);
				}
			}
			break;
		
		case 0x00000058:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!IS_ACTOR_DRIVING_VEHICLE(&iVar10))
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != GET_VEHICLE(&Global_54076))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				bVar4 = Function_43(&uVar0);
				if ((bVar4 <= 1177 && bVar4 >= 1182) || bVar4 != 1202)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_6(133, 1, 0, 0);
						Function_6(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_6(133, 1, 0, 0);
						Function_6(129, 1, 0, 0);
					}
				}
				else if (bVar4 <= 1183 && bVar4 >= 1188)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_6(131, 1, 0, 0);
						Function_6(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_6(131, 1, 0, 0);
						Function_6(129, 1, 0, 0);
					}
				}
				else if (bVar4 <= 1195 && bVar4 >= 1201)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "statRunOver"))
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_6(132, 1, 0, 0);
						Function_6(129, 1, 0, 0);
					}
					else if (DECOR_GET_FLOAT(&uVar1, "statRunOver") + 4.0f) > GET_CURRENT_GAME_TIME()
					{
						DECOR_SET_FLOAT(&uVar1, "statRunOver", GET_CURRENT_GAME_TIME());
						Function_6(132, 1, 0, 0);
						Function_6(129, 1, 0, 0);
					}
				}
			}
			break;
		
		case 0x00000024:
			break;
		
		case 0x0000005E:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			Function_6(389, 5, 0, 0);
			break;
		
		case 0x00000069:
			if (!IS_OBJECT_VALID(&uVar1))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar0) != 15)
			{
				return;
			}
			if (!GET_ACTOR_FROM_OBJECT(&uVar0) != &iVar10)
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&uVar1) != 15)
			{
				return;
			}
			if (!IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(&uVar1)))
			{
				return;
			}
			Function_6(391, 1, 0, 0);
			break;
	}
	return;
}

bool Function_43(int iParam0) //Position: 0x2A94 / 10900
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

void Function_44(int iParam0) //Position: 0x2AB1 / 10929
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

void Function_45(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2AE8 / 10984
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_46(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_46(int iParam0) //Position: 0x2B73 / 11123
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

void Function_47(bool bParam0, int iParam1) //Position: 0x2BB2 / 11186
{
	bParam0 = (bParam0 || iParam1);
	return;
}

void Function_48(var uParam0, bool bParam1) //Position: 0x2BC3 / 11203
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	var uVar15;
	bool bVar16;
	
	bVar12 = true;
	if (bParam1 || (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076)) >= 0,2f)
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		iVar10 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
		iVar11 = GET_EVENT_PERPETRATOR(&uParam0);
		if (GET_OBJECT_TYPE(&iVar11) == 15)
		{
			iVar9 = GET_ACTOR_FROM_OBJECT(&iVar11);
		}
		if ((GET_OBJECT_TYPE(&iVar10) != 15 || GET_OBJECT_TYPE(&iVar10) != 29) || Function_51(&iVar10))
		{
			if (GET_OBJECT_TYPE(&iVar10) == 15)
			{
				uVar8 = GET_ACTOR_FROM_OBJECT(&iVar10);
			}
			else if (GET_OBJECT_TYPE(&iVar10) == 29)
			{
				if (DECOR_CHECK_EXIST(&iVar10, "bATRifleBlewUpCorpse"))
				{
					bVar12 = false;
				}
			}
			if (IS_OBJECT_VALID(&iVar10))
			{
				if (IS_ACTOR_VALID(&uVar8))
				{
					if (IS_ACTOR_VEHICLE(&uVar8))
					{
						bVar12 = false;
					}
					else if (GET_ACTOR_PROOF(&uVar8) != 8 || GET_ACTOR_HEALTH(&uVar8) < 65.0f)
					{
						bVar12 = false;
					}
				}
				if (bVar12)
				{
					if (bParam1)
					{
						if (GET_OBJECT_TYPE(&iVar10) != 29 || Function_51(&iVar10))
						{
							Function_57(StackVal, &iVar10, Var0, 0, &iVar9, DECOR_GET_INT(&uParam0, "Weapon") != 31);
						}
					}
					else
					{
						NET_BROADCAST_EXPLODE_TARGET_EVENT(&iVar10);
						Function_57(StackVal, &iVar10, Var0, 0, &iVar9, 0);
					}
				}
			}
		}
		if (DECOR_GET_INT(&uParam0, "Weapon") == 31)
		{
			bVar14 = false;
			uVar15 = GET_EVENT_PERPETRATOR(&uParam0);
			bVar16 = false;
			if (bParam1)
			{
				if (IS_OBJECT_VALID(&uVar15))
				{
					if (GET_OBJECT_NAMED_BONE_POSITION(&uVar15, "head", &Var2))
					{
						bVar16 = true;
					}
				}
			}
			else
			{
				GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var2);
				bVar16 = true;
			}
			if (bVar16)
			{
				if (FIND_WATER_INTERSECTION(Var2, Var0, &uVar4, &uVar6))
				{
					if (IS_LAYOUTREF_VALID(&Global_46715))
					{
						uVar13 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "oATRifleWaterExplosionRMPTFX");
						if (IS_OBJECT_VALID(&uVar13))
						{
							if (DECOR_CHECK_EXIST(&uVar13, "fWaterExplosionCreateTime"))
							{
								if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar13, "fWaterExplosionCreateTime")) < 1.0f)
								{
									DESTROY_OBJECT(&uVar13);
								}
							}
						}
						if (!IS_OBJECT_VALID(&uVar13))
						{
							Function_50(&uVar4);
						}
					}
					bVar14 = true;
				}
			}
			if (!bVar14)
			{
				if (!bParam1)
				{
					Function_49(&Var0, "ATRifleExplosion", &Global_54076, 1);
				}
				PLAY_SOUND_FROM_POSITION("ANTI_TANK_EXPLOSION_DIRT_MASTER", Var0);
			}
		}
	}
	return;
}

void Function_49(float fParam0, float fParam1, bool bParam2, int iParam3) //Position: 0x2E67 / 11879
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &bParam2, &uVar0, &iParam3);
}

void Function_50(struct<2> Param0) //Position: 0x2E87 / 11911
{
	int iVar0;
	
	iVar0 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&Global_46715, "oATRifleWaterExplosionRMPTFX", "nexp_water", Param0);
	SET_RMPTFX_SCALE(&iVar0, 0,2f);
	UNK_0x6745191B(StackVal, &iVar0, Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_FLOAT(&iVar0, "fWaterExplosionCreateTime", GET_CURRENT_GAME_TIME());
	return;
}

bool Function_51(int iParam0) //Position: 0x2F04 / 12036
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	uVar0 = GET_OBJECT_MODEL_NAME(&iParam0);
	if (STRING_CONTAINS_STRING(&uVar0, "carcass"))
	{
		return 1;
	}
	return 0;
}

void Function_52(bool bParam0) //Position: 0x2F35 / 12085
{
	if (!NET_GET_KILL_EFFECT_ON())
	{
		return;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return;
	}
	SET_SHOCK_AMPLITUDE(0,2f);
	SET_SHOCK_SPEED(15.0f);
	FIRE_SHOCK(0,5f);
	if (&bParam0)
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_HS_SINGLE_PLAYER_MASTER");
	}
	else
	{
		PLAY_SOUND_FRONTEND("DEATH_EFFECT_SINGLE_PLAYER_MASTER");
	}
	return;
}

void Function_53(int iParam0) //Position: 0x2FBD / 12221
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
			if (Function_27(354) > 26)
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

bool Function_54(bool bParam0) //Position: 0x30FB / 12539
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "honor"))
	{
		if (DECOR_GET_INT(&bParam0, "honor") > 0)
		{
			return 1;
		}
		return 0;
	}
	iVar0 = GET_ACTOR_FACTION(&bParam0);
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
			if (Global_46720 <= 1)
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

void Function_55(var uParam0) //Position: 0x3214 / 12820
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 0;
	bVar1 = GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(&uParam0));
	switch (bVar1)
	{
		case 0x00000000:
			LOG_ERROR("PROCESS_STAT_WILD_ANIMAL_SPECIES_KILLED called with a human actor!");
			return;
			break;
		
		case 0x00000001:
			Function_6(313, 1, 0, 0);
			iVar0 = Function_27(313);
			break;
		
		case 0x00000002:
			Function_6(314, 1, 0, 0);
			iVar0 = Function_27(314);
			break;
		
		case 0x00000003:
			Function_6(315, 1, 0, 0);
			iVar0 = Function_27(315);
			break;
		
		case 0x00000005:
			Function_6(317, 1, 0, 0);
			iVar0 = Function_27(317);
			break;
		
		case 0x00000004:
			Function_6(316, 1, 0, 0);
			iVar0 = Function_27(316);
			break;
		
		case 0x00000006:
			Function_6(318, 1, 0, 0);
			iVar0 = Function_27(318);
			break;
		
		case 0x00000007:
			Function_6(319, 1, 0, 0);
			iVar0 = Function_27(319);
			break;
		
		case 0x00000008:
			Function_6(320, 1, 0, 0);
			Function_53(29);
			iVar0 = Function_27(320);
			break;
		
		case 0x00000009:
		case 0x0000000C:
			Function_6(323, 1, 0, 0);
			return;
			break;
		
		case 0x0000000A:
			Function_6(321, 1, 0, 0);
			break;
		
		case 0x0000000B:
			Function_6(322, 1, 0, 0);
			iVar0 = Function_27(322);
			break;
		
		case 0x0000000D:
			Function_6(324, 1, 0, 0);
			iVar0 = Function_27(324);
			break;
		
		case 0x0000000E:
			uVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(&uParam0));
			if (STRING_CONTAINS_STRING(&uVar2, "seagull"))
			{
				Function_6(341, 1, 0, 0);
				iVar0 = Function_27(341);
			}
			else
			{
				Function_6(325, 1, 0, 0);
				iVar0 = Function_27(325);
			}
			break;
		
		case 0x0000000F:
			Function_6(326, 1, 0, 0);
			iVar0 = Function_27(326);
			break;
		
		case 0x00000010:
		case 0x00000021:
			Function_6(327, 1, 0, 0);
			break;
		
		case 0x00000011:
			Function_6(328, 1, 0, 0);
			iVar0 = Function_27(328);
			break;
		
		case 0x00000012:
			Function_6(329, 1, 0, 0);
			iVar0 = Function_27(329);
			break;
		
		case 0x00000013:
			Function_6(330, 1, 0, 0);
			iVar0 = Function_27(330);
			break;
		
		case 0x00000014:
			Function_6(331, 1, 0, 0);
			iVar0 = Function_27(331);
			break;
		
		case 0x00000015:
			Function_6(332, 1, 0, 0);
			return;
			break;
		
		case 0x00000016:
			Function_6(333, 1, 0, 0);
			iVar0 = Function_27(333);
			break;
		
		case 0x00000017:
			if (ANIMAL_ACTOR_GET_DOMESTICATION(&uParam0) == 0)
			{
				Function_6(334, 1, 0, 0);
				return;
			}
			Function_6(335, 1, 0, 0);
			iVar0 = Function_27(335);
			break;
		
		case 0x00000018:
			Function_6(336, 1, 0, 0);
			return;
			break;
		
		case 0x00000019:
			Function_6(337, 1, 0, 0);
			iVar0 = Function_27(337);
			break;
		
		case 0x0000001A:
			Function_6(338, 1, 0, 0);
			break;
		
		case 0x0000001B:
			uVar2 = GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTOR_ENUM(&uParam0));
			if (STRING_CONTAINS_STRING(&uVar2, "njackalope"))
			{
				Function_6(349, 1, 0, 0);
				iVar0 = Function_27(349);
			}
			else
			{
				Function_6(339, 1, 0, 0);
				iVar0 = Function_27(339);
			}
			break;
		
		case 0x0000001C:
			Function_6(340, 1, 0, 0);
			iVar0 = Function_27(340);
			break;
		
		case 0x0000001D:
			Function_6(342, 1, 0, 0);
			return;
			break;
		
		case 0x0000001E:
			Function_6(343, 1, 0, 0);
			iVar0 = Function_27(343);
			break;
		
		case 0x0000001F:
			Function_6(344, 1, 0, 0);
			iVar0 = Function_27(344);
			break;
		
		case 0x00000020:
			Function_6(345, 1, 0, 0);
			iVar0 = Function_27(345);
			break;
		
		case 0x00000022:
			Function_6(346, 1, 0, 0);
			iVar0 = Function_27(346);
			break;
		
		case 0x00000023:
			Function_6(347, 1, 0, 0);
			iVar0 = Function_27(347);
			break;
	}
	if (iVar0 == 1)
	{
		Function_6(354, 1, 0, 0);
		Function_53(39);
	}
	return;
}

int Function_56() //Position: 0x3670 / 13936
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_57(int iParam0, struct<2> Param1, bool bParam3, int iParam4, bool bParam5) //Position: 0x3685 / 13957
{
	bool bVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	int iVar13;
	struct<2> Var14;
	var uVar16;
	var uVar17;
	struct<2> Var18;
	struct<2> Var20;
	struct<2> Var22;
	
	fVar3 = 1.0f;
	bVar9 = false;
	bVar10 = !bParam3;
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 15)
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&iParam0);
			bVar0 = GET_ACTOR_ENUM(&uVar1);
		}
		else if (GET_OBJECT_TYPE(&iParam0) == 29)
		{
			bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
		}
		else if (!Function_51(&iParam0))
		{
			return;
		}
		if (GET_OBJECT_TYPE(&iParam4) == 15)
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&iParam4);
		}
		if (bParam3 || bParam5)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(&iParam0, "spine00", &Var11))
			{
				Param1 = Var11;
				bVar10 = true;
			}
			else
			{
				bVar10 = false;
			}
		}
		if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
		{
			if (bVar0 != 1241 || bVar0 != 1240)
			{
				iVar13 = 2;
			}
			else if (bVar0 != 1243 || bVar0 != 1246)
			{
				iVar13 = 0;
			}
			else
			{
				iVar13 = 1;
			}
		}
		else if (!Function_51(&iParam0))
		{
			iVar13 = Function_61(bVar0);
		}
		else
		{
			iVar13 = Function_60(&iParam0);
		}
		switch (iVar13)
		{
			case 0x00000000:
				if (GET_OBJECT_TYPE(&iParam0) != 15 && !Function_51(&iParam0))
				{
					bVar9 = false;
				}
				else
				{
					bVar9 = true;
				}
				fVar3 = 1,2f;
				break;
			
			case 0x00000001:
				fVar3 = 0,8f;
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_HUMAN(&uVar1))
					{
						DEEQUIP_ACCESSORY(&uVar1, 0);
						DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
					}
				}
				break;
			
			case 0x00000002:
				fVar3 = 0,45f;
				break;
			
			case 0x00000003:
				fVar3 = 0,3f;
				break;
		}
		if ((DECOR_CHECK_EXIST(&iParam0, "bShopDontKill") || DECOR_CHECK_EXIST(&iParam0, "lootCorpse_objSet")) || DECOR_CHECK_EXIST(&iParam0, "skinning_objSet"))
		{
			bVar9 = false;
		}
		else
		{
			bVar9 = true;
		}
		if (((bVar0 != 1105 || bVar0 != 1077) || bVar0 != 1094) || bVar0 != 1072)
		{
			bVar9 = false;
		}
		if (bVar9)
		{
			if (GET_OBJECT_NAMED_BONE_POSITION(&iParam0, "head", &Var14))
			{
				uVar16 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, Function_9(), 2, Var14, Vector(0.0f, 0.0f, 0.0f), Vector(0,25f, 0,25f, 0,25f));
				RESET_RMPTFX_IN_VOLUME(&uVar16);
				DESTROY_VOLUME(&uVar16);
			}
			if (GET_OBJECT_TYPE(&iParam0) == 15)
			{
				SET_DRAW_OBJECT(&iParam0, 0);
				if (FIRE_IS_ACTOR_ON_FIRE(GET_ACTOR_FROM_OBJECT(&iParam0)))
				{
					FIRE_STOP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(&iParam0));
				}
				if (IS_ACTOR_VALID(GET_HOGTIED_MASTER(GET_ACTOR_FROM_OBJECT(&iParam0))))
				{
					FREE_FROM_HOGTIE(GET_ACTOR_FROM_OBJECT(&iParam0));
				}
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&iParam0, 0);
				DECOR_SET_BOOL(&iParam0, "corpse_loot_gringo", false);
				DECOR_SET_BOOL(&iParam0, "NoCorpse", true);
			}
			else if (GET_OBJECT_TYPE(&iParam0) != 29 || Function_51(&iParam0))
			{
				uVar17 = FIND_OBJECT_IN_OBJECT(&iParam0, "loot");
				if (IS_OBJECT_VALID(&uVar17))
				{
					DESTROY_OBJECT(&uVar17);
				}
				GET_OBJECT_POSITION(&iParam0, &Var18);
				Var7 = Var18;
				Var18.f_4 = (StackVal - 100.0f);
				SET_OBJECT_POSITION(&iParam0, Var18);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&iParam0), false);
				SET_DRAW_OBJECT(&iParam0, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&iParam0, 0);
				DECOR_SET_BOOL(&iParam0, "bATRifleBlewUpCorpse", true);
			}
		}
	}
	if (bVar10)
	{
		if (bVar9)
		{
			Var22 = Vector(0.0f, 0.0f, 0.0f);
			if (!bParam3 && IS_OBJECT_VALID(&iParam4))
			{
				GET_OBJECT_POSITION(&iParam4, &Var20);
				Var22 = Vector(StackVal, StackVal, StackVal) - Vector(Var20, Param1, StackVal);
				VSCALE(&Var22, 0,01f);
			}
			if ((Function_59() && DECOR_CHECK_EXIST(&iParam0, "Zombie")) || (bVar0 <= 1222 && bVar0 >= 1227))
			{
				uVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, Vector(Function_9(), &iParam0, StackVal) + Vector(Var22, Param1, "blood_zombie_explode"));
			}
			else
			{
				uVar4 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, StackVal, Vector(Function_9(), &iParam0, StackVal) + Vector(Var22, Param1, "script_train_squash_ped"));
			}
			SET_RMPTFX_SCALE(&uVar4, fVar3);
			if (!UNK_0x6745191B(StackVal, &uVar4, Vector(0.0f, 0.0f, 0.0f)))
			{
			}
			PLAY_SOUND_FROM_POSITION("EXECUTION_RIFLE_DLY_MASTER", Param1);
		}
	}
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (bVar9 && GET_OBJECT_TYPE(&iParam0) != 29)
		{
			if (!Function_58(StackVal, Var7))
			{
				CREATE_DECAL(2, Var7, RAND_FLOAT_RANGE((1,8f * fVar3), (2,4f * fVar3)), 0, 0);
			}
		}
		else if (GET_OBJECT_POSITION(&iParam0, &Var5))
		{
			CREATE_DECAL(2, Var5, RAND_FLOAT_RANGE((1,8f * fVar3), (2,4f * fVar3)), 0, 0);
		}
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_HEALTH(&uVar1, 0.0f);
			if (IS_ACTOR_VALID(&uVar2))
			{
				KILL_ACTOR_WITH_KILLER(&uVar1, &uVar2);
				if (!&bParam5)
				{
					DECOR_SET_BOOL(&uVar1, "ATRifle", true);
				}
			}
			else
			{
				KILL_ACTOR(&uVar1);
			}
		}
	}
}

bool Function_58(char* cParam0) //Position: 0x3B7B / 15227
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

var Function_59() //Position: 0x3B93 / 15251
{
	return HAS_STRING_TABLE_LOADED("de");
}

int Function_60(int iParam0) //Position: 0x3BA1 / 15265
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
	}
	uVar0 = GET_OBJECT_MODEL_NAME(&iParam0);
	if ((STRING_CONTAINS_STRING(&uVar0, "large") || STRING_CONTAINS_STRING(&uVar0, "horse")) || STRING_CONTAINS_STRING(&uVar0, "elk"))
	{
		return 0;
	}
	if (STRING_CONTAINS_STRING(&uVar0, "medium"))
	{
		return 1;
	}
	if (STRING_CONTAINS_STRING(&uVar0, "small"))
	{
		return 2;
	}
	return 3;
}

int Function_61(int iParam0) //Position: 0x3C17 / 15383
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

void Function_62(var uParam0) //Position: 0x3D0E / 15630
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!Function_22(Global_124175.f_72, 4194304))
	{
		iVar0 = GET_EVENT_TYPE(&uParam0);
		uVar1 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
		if (16 != iVar0 && IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) == 15)
			{
				iVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&iVar2))
				{
					if (IS_ACTOR_HORSE(&iVar2))
					{
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 21, true);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 22, false);
					}
					else
					{
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 23, true);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 24, true);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 25, true);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 26, true);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 27, true);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 28, true);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 29, false);
						ACTOR_ENABLE_VARIABLE_MESH(&iVar2, 30, false);
					}
				}
			}
		}
	}
	return;
}

void Function_63(var uParam0) //Position: 0x3DC8 / 15816
{
	int iVar0;
	
	iVar0 = GET_EVENT_TYPE(&uParam0);
	if (Function_66(iVar0))
	{
		Function_64(&uParam0);
	}
	return;
}

void Function_64(var uParam0) //Position: 0x3DE4 / 15844
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	uVar0 = Function_65();
	uVar1 = COPY_EVENT(&uParam0, &uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar0);
	if (!IS_ITERATOR_VALID(&uVar2))
	{
		return;
	}
	ITERATE_ON_OBJECT_TYPE(&uVar2, 2);
	ITERATE_IN_LAYOUT(&uVar2, &uVar0);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uVar1), GET_OBJECTSET_FROM_OBJECT(&iVar3));
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	DESTROY_ITERATOR(&uVar2);
	return;
}

var Function_65() //Position: 0x3E54 / 15956
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("NetEventLayout");
	if (!IS_OBJECT_VALID(&iVar0))
	{
		return CREATE_LAYOUT("NetEventLayout");
	}
	return &iVar0;
}

bool Function_66(int iParam0) //Position: 0x3E93 / 16019
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

void Function_67(int iParam0) //Position: 0x3F29 / 16169
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	if (Global_6623)
	{
		return;
	}
	if (!GET_EVENT_PERPETRATOR(&iParam0) != "")
	{
		if (!GET_OBJECT_FROM_ACTOR(&Global_54076) != GET_EVENT_PERPETRATOR(&iParam0))
		{
			return;
		}
	}
	return;
	if (!GET_EVENT_TYPE(&iParam0) != 2)
	{
		return;
	}
	iVar0 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
	if (!IS_OBJECT_VALID(&iVar0))
	{
		return;
	}
	if (&iVar0 == GET_EVENT_PERPETRATOR(&iParam0))
	{
		return;
	}
	fVar2 = 1.0f;
	if (DECOR_CHECK_EXIST(&iParam0, "Weapon"))
	{
		bVar1 = DECOR_GET_INT(&iParam0, "Weapon");
	}
	else
	{
		bVar1 = GET_WEAPON_IN_HAND(&Global_54076);
	}
	if (bVar1 < 4294967295 && bVar1 > 39)
	{
		if (GET_WEAPON_GOLD(&Global_54076, bVar1))
		{
			fVar2 = 1,5f;
		}
	}
	if (DECOR_CHECK_EXIST(&iVar0, "honor"))
	{
		Function_83(DECOR_GET_INT(&iVar0, "honor"), 1, 0);
	}
	if (DECOR_CHECK_EXIST(&iVar0, "nnotoriety"))
	{
		Function_68(ROUND((TO_FLOAT(DECOR_GET_INT(&iVar0, "nnotoriety")) * fVar2)), 1, 0);
	}
	if (IS_ACTOR_ANIMAL(GET_ACTOR_FROM_OBJECT(&iVar0)))
	{
		if (ANIMAL_ACTOR_GET_SPECIES(GET_ACTOR_FROM_OBJECT(&iVar0)) == 16)
		{
			if (!DECOR_CHECK_EXIST(&iVar0, "honor"))
			{
				Function_83(4294967246, 1, 0);
			}
		}
		if (&Global_21369 + 72 == GET_ACTOR_FROM_OBJECT(&iVar0))
		{
			if (!DECOR_CHECK_EXIST(&iVar0, "honor"))
			{
				Function_83(4294967246, 1, 0);
			}
		}
		return;
	}
	bVar3 = GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar0));
	bVar4 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iVar0));
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
			if (!DECOR_CHECK_EXIST(&iVar0, "honor"))
			{
				Function_83(10, 0, 0);
			}
			if (!DECOR_CHECK_EXIST(&iVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(2) * fVar2)), 0, 0);
			}
			Global_119940 += 120;
			break;
		
		case 0x00000004:
		case 0x00000006:
		case 0x00000003:
		case 0x00000001:
		case 0x00000015:
		case 0x00000000:
		case 0x00000002:
			if (!DECOR_CHECK_EXIST(&iVar0, "honor"))
			{
				if ((bVar4 <= 61 && bVar4 >= 63) || (bVar4 <= 242 && bVar4 >= 244))
				{
					Function_83(4294967196, 1, 0);
				}
				else
				{
					Function_83(4294967246, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(&iVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(true) * fVar2)), 0, 0);
			}
			Global_119940 += 15;
			break;
		
		case 0x00000008:
		case 0x00000007:
		case 0x00000014:
		case 0x00000017:
			if (!DECOR_CHECK_EXIST(&iVar0, "honor"))
			{
				Function_83(4294967196, 1, 0);
			}
			if (!DECOR_CHECK_EXIST(&iVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(4) * fVar2)), 0, 0);
			}
			Global_119940 += 60;
			break;
		
		case 0x0000000A:
		case 0x00000010:
			if (Global_46720 <= 1)
			{
				if (!DECOR_CHECK_EXIST(&iVar0, "honor"))
				{
					Function_83(4294967196, 1, 0);
				}
			}
			else if (!DECOR_CHECK_EXIST(&iVar0, "honor"))
			{
				Function_83(10, 0, 0);
			}
			if (!DECOR_CHECK_EXIST(&iVar0, "nnotoriety"))
			{
				Function_68(ROUND((TO_FLOAT(4) * fVar2)), 0, 0);
			}
			Global_119940 += 60;
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

void Function_68(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4334 / 17204
{
	int iVar0;
	bool bVar1;
	
	if (Function_82(0) && (!Global_6623 || bParam0 == 100))
	{
		return;
	}
	bVar1 = bParam0;
	if (Function_81())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + bParam0);
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
	if (&bParam1)
	{
		Function_77(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_37(Global_119936, 4))
			{
				Function_31(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_6(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_18(3));
	iVar0 = Function_27(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_70(4, Function_76(Global_21369.f_248), 1);
				Function_69(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_70(4, Function_76(Global_21369.f_248), 1);
				Function_69(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_70(4, Function_76(Global_21369.f_248), 1);
				Function_69(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_70(4, Function_76(Global_21369.f_248), 1);
				Function_69(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_70(4, Function_76(Global_21369.f_248), 1);
				Function_69(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_69(int iParam0, int iParam1) //Position: 0x4508 / 17672
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_70(int iParam0, char* cParam1) //Position: 0x4772 / 18290
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_74(iParam0, &cParam1, 0, 1);
	iVar1 = Function_71();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_71() //Position: 0x4902 / 18690
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_72();
	return 0;
}

void Function_72() //Position: 0x49A3 / 18851
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_73(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_73(int iParam0) //Position: 0x4A61 / 19041
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

int Function_74(int iParam0, char* cParam1) //Position: 0x4AC7 / 19143
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_75(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4E1E / 19998
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

var Function_76(int iParam0) //Position: 0x4EA6 / 20134
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

int Function_77(int iParam0, bool bParam1) //Position: 0x4F35 / 20277
{
	bool bVar0;
	int iVar1;
	
	Function_6(iParam0, bParam1, 0, 0);
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
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_71();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_78(int iParam0, int iParam1) //Position: 0x50E1 / 20705
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_79() //Position: 0x5126 / 20774
{
	Function_80(3, 0.0f);
	Function_29(3, 10000.0f);
	return;
}

int Function_80(int iParam0, int iParam1) //Position: 0x513C / 20796
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_81() //Position: 0x517C / 20860
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_82(int iParam0) //Position: 0x51A7 / 20903
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_83(int iParam0, bool bParam1, bool bParam2) //Position: 0x51B6 / 20918
{
	int iVar0;
	bool bVar1;
	
	if (Function_82(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_81())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
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
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_77(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_37(Global_119936, 1))
				{
					Function_31(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_86(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_37(Global_119936, 2))
				{
					Function_31(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_6(1, bVar1, 0, 0);
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
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_70(2, Function_84(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_70(2, Function_84(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_70(2, Function_84(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_70(2, Function_84(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_70(2, Function_84(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_70(2, Function_84(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_70(2, Function_84(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_70(2, Function_84(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_70(2, Function_84(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_70(2, Function_84(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_70(2, Function_84(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_70(2, Function_84(Global_21369.f_244), 0);
			}
			break;
	}
	Function_69(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_84(int iParam0) //Position: 0x54DD / 21725
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

int Function_85(int iParam0, bool bParam1, int iParam2) //Position: 0x5580 / 21888
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_8(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_86(int iParam0, bool bParam1) //Position: 0x577D / 22397
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
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_71();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_87(int iParam0) //Position: 0x5928 / 22824
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar11;
	bool bVar12;
	var uVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	var uVar17;
	var uVar18;
	bool bVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	
	if (!IS_EVENT_VALID(&iParam0))
	{
		return;
	}
	iVar0 = GET_NUM_OBJECTS_OF_TYPE(3);
	bVar1 = CEIL((IntToFloat(GET_MAX_NUM_OBJECTS_OF_TYPE(3)) * 0,8f));
	if (iVar0 + 1 >= bVar1)
	{
		return;
	}
	if (!Function_103() || !Function_100(1))
	{
		return;
	}
	iVar2 = GET_EVENT_TARGET_AS_OBJECT(&iParam0);
	iVar3 = GET_EVENT_PERPETRATOR(&iParam0);
	if (IS_OBJECT_VALID(&iVar2))
	{
		if (DECOR_CHECK_EXIST(&iVar2, "nocrime"))
		{
			return;
		}
	}
	if (!IS_OBJECT_VALID(&iVar3))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "Perpetrator"))
		{
			iVar3 = DECOR_GET_OBJECT(&iParam0, "Perpetrator");
		}
	}
	if (GET_OBJECT_TYPE(&iVar2) == 15)
	{
		iVar4 = GET_ACTOR_FROM_OBJECT(&iVar2);
	}
	else if (GET_OBJECT_TYPE(&iVar2) == 24)
	{
		iVar4 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar2));
	}
	if (GET_OBJECT_TYPE(&iVar3) == 15)
	{
		iVar5 = GET_ACTOR_FROM_OBJECT(&iVar3);
	}
	iVar6 = Function_56();
	switch (GET_EVENT_TYPE(&iParam0))
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000007:
		case 0x00000008:
		case 0x0000002F:
		case 0x0000005A:
		case 0x0000005E:
			if (&iVar2 == "")
			{
				return;
			}
			if (IS_ACTOR_VALID(&iVar4))
			{
				if (!GET_ACTOR_FACTION(&iVar4) != Global_40000)
				{
					if (GET_EVENT_TYPE(&iParam0) != 94)
					{
						if (!DECOR_CHECK_EXIST(&iVar4, "faction"))
						{
							return;
						}
						if (DECOR_GET_INT(&iVar4, "faction") == Global_40000)
						{
						}
						else
						{
							return;
						}
					}
					if (!IS_ACTOR_HUMAN(&iVar4))
					{
						return;
					}
				}
			}
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (&iVar5 != &iVar6)
			{
				if (GET_EVENT_TYPE(&iParam0) == 87)
				{
					if (IS_ACTOR_HORSE(&iVar5))
					{
						if (!GET_RIDER(&iVar5) != &iVar6)
						{
							return;
						}
						iVar5 = Function_56();
						DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(&iParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(&iVar5));
					}
					else
					{
						return;
					}
				}
				if (GET_EVENT_TYPE(&iParam0) == 88)
				{
					if (IS_ACTOR_VEHICLE(&iVar5))
					{
						if (!GET_ACTOR_IN_VEHICLE_SEAT(&iVar5, false) != &iVar6)
						{
							return;
						}
						iVar5 = Function_56();
						DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(&iParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(&iVar5));
					}
					else
					{
						return;
					}
				}
				return;
			}
			if (GET_OBJECT_TYPE(&iVar2) != 17 || GET_OBJECT_TYPE(&iVar2) != 27)
			{
				REFERENCE_OBJECT(&iVar2);
			}
			if (DECOR_CHECK_EXIST(&iVar2, "Duel"))
			{
				return;
			}
			break;
		
		case 0x00000003:
			if (&iVar2 == "")
			{
				return;
			}
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (&iVar5 != &iVar6)
			{
				if (IS_ACTOR_HORSE(&iVar5))
				{
					if (!GET_RIDER(&iVar5) != &iVar6)
					{
						return;
					}
					iVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(&iParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(&iVar5));
				}
				else if (IS_ACTOR_VEHICLE(&iVar5))
				{
					if (!GET_ACTOR_IN_VEHICLE_SEAT(&iVar5, false) != &iVar6)
					{
						return;
					}
					iVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(&iParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(&iVar5));
				}
				else
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(&iVar2, "Duel"))
			{
				return;
			}
			if (GET_OBJECT_TYPE(&iVar2) == 15)
			{
				if (!GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar2)) != Global_40000 && IS_ACTOR_MALE(GET_ACTOR_FROM_OBJECT(&iVar2)))
				{
					return;
				}
			}
			if (GET_OBJECT_TYPE(&iVar2) == 24)
			{
				if (!GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar2))) != Global_40000 && IS_ACTOR_MALE(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar2))))
				{
					return;
				}
			}
			break;
		
		case 0x00000005:
		case 0x0000005B:
			if (&iVar2 == "")
			{
				return;
			}
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (!Function_99(0x40000000))
			{
				if (!&iVar5 != &iVar6)
				{
					return;
				}
			}
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (&iVar5 != &iVar6)
				{
					if (!IS_ACTOR_HUMAN(&iVar5))
					{
						return;
					}
					if (GET_OBJECT_TYPE(&iVar2) != 17 || GET_OBJECT_TYPE(&iVar2) != 27)
					{
						return;
					}
				}
			}
			return;
			if (&iVar4 == &iVar6)
			{
				if (&iVar5 == &iVar6)
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(&iVar2, "Duel"))
			{
				return;
			}
			if (GET_OBJECT_TYPE(&iVar2) != 17 || GET_OBJECT_TYPE(&iVar2) != 27)
			{
				REFERENCE_OBJECT(&iVar2);
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			bVar11 = false;
			if (DECOR_GET_OBJECT(&iVar4, "HogtiedGringoAttached") == "" && IS_ACTOR_IN_WATER(&iVar4))
			{
				bVar11 = true;
			}
			if (!Function_99(0x40000000))
			{
				if (!&iVar5 != &iVar6)
				{
					if (!bVar11)
					{
						return;
					}
				}
			}
			if (&iVar5 != &iVar6)
			{
				if (IS_ACTOR_HORSE(&iVar5))
				{
					if (!GET_RIDER(&iVar5) != &iVar6)
					{
						return;
					}
					iVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(&iParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(&iVar5));
				}
				if (IS_ACTOR_VEHICLE(&iVar5))
				{
					if (!GET_ACTOR_IN_VEHICLE_SEAT(&iVar5, false) != &iVar6)
					{
						return;
					}
					iVar5 = Function_56();
					DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(&iParam0), "Perpetrator", GET_OBJECT_FROM_ACTOR(&iVar5));
				}
				if (!bVar11)
				{
					if (IS_ACTOR_VALID(&iVar5))
					{
						if (!IS_ACTOR_HUMAN(&iVar5))
						{
							return;
						}
					}
					return;
				}
				if (GET_OBJECT_TYPE(&iVar2) != 17 || GET_OBJECT_TYPE(&iVar2) != 27)
				{
					return;
				}
			}
			if (&iVar3 == &iVar2)
			{
				if (!bVar11)
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(&iVar2, "Duel"))
			{
				return;
			}
			if (IS_ACTOR_VALID(GET_MOUNT(&iVar4)))
			{
				DECOR_SET_FLOAT(GET_MOUNT(&iVar4), "dismount", GET_CURRENT_GAME_TIME());
				DECOR_SET_INT(GET_MOUNT(&iVar4), "faction", GET_ACTOR_FACTION(&iVar4));
			}
			else if (IS_ACTOR_VALID(GET_VEHICLE(&iVar4)))
			{
				DECOR_SET_FLOAT(GET_VEHICLE(&iVar4), "dismount", GET_CURRENT_GAME_TIME());
				DECOR_SET_INT(GET_VEHICLE(&iVar4), "faction", GET_ACTOR_FACTION(&iVar4));
			}
			break;
		
		case 0x0000000C:
		case 0x0000000D:
			if (!Function_100(1))
			{
				return;
			}
			if (!&iVar5 != &iVar6)
			{
				return;
			}
			REFERENCE_OBJECT(&iVar2);
			break;
		
		case 0x00000014:
		case 0x00000018:
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (!&iVar5 != &iVar6)
			{
				if (&iVar4 == &iVar6)
				{
					if (GET_ACTOR_FACTION(&iVar5) == Global_40000)
					{
						if (!Global_42250)
						{
							DECOR_SET_BOOL(GET_MOUNT(&iVar5), "hijacked", true);
						}
					}
				}
				return;
			}
			if (GET_EVENT_TYPE(&iParam0) == 20)
			{
				DECOR_SET_BOOL(GET_MOUNT(&iVar4), "hijacked", true);
			}
			else
			{
				DECOR_SET_BOOL(GET_VEHICLE(&iVar4), "hijacked", true);
			}
			if (!IS_OBJECT_VALID(&iVar2))
			{
				return;
			}
			if (DECOR_CHECK_EXIST(GET_MOUNT(&iVar5), "break"))
			{
				return;
			}
			if (!GET_ACTOR_FACTION(&iVar4) != 20)
			{
				MEMORY_PREFER_RIDING(&iVar4, false);
				DECOR_SET_BOOL(&iVar2, "hijacked", true);
				if (!Global_6629)
				{
					MEMORY_CONSIDER_AS_ENEMY(&iVar4, &iVar5);
					TASK_CLEAR(&iVar4);
					TASK_KILL_CHAR(&iVar4, &iVar5);
					TASK_PRIORITY_SET(&iVar4, 2);
				}
				else
				{
					TASK_CLEAR(&iVar4);
					MEMORY_CONSIDER_AS_ENEMY(&iVar4, &iVar5);
					MEMORY_PREFER_MELEE(&iVar4, 1);
					TASK_PRIORITY_SET(&iVar4, 2);
				}
			}
			break;
		
		case 0x00000013:
		case 0x00000017:
			bVar12 = false;
			if (IS_ACTOR_VALID(&iVar5))
			{
				if (!&iVar5 != &iVar6)
				{
					if (IS_OBJECT_VALID(&iVar2))
					{
						DECOR_SET_FLOAT(&iVar2, "dismount", GET_CURRENT_GAME_TIME());
					}
					if (IS_ACTOR_VALID(&iVar4))
					{
						DECOR_SET_INT(&iVar4, "faction", GET_ACTOR_FACTION(&iVar5));
					}
					if (1 && !Global_6623)
					{
						if (IS_ACTOR_VALID(&iVar4))
						{
							if (IS_ACTOR_VEHICLE(&iVar4))
							{
								if (GET_VEHICLE(&iVar6) == &iVar4)
								{
									if (GET_ACTOR_IN_VEHICLE_SEAT(&iVar4, false) == &iVar5)
									{
										if ((GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(&iVar5)) != 0 && GET_ACTOR_FACTION(&iVar5) == 20) && GET_ACTOR_FACTION(&iVar5) == 23)
										{
											fVar14 = -1.0f;
											iVar15 = 0;
											Function_47(&iVar15, 1);
											Function_47(&iVar15, 16);
											Function_47(&iVar15, 4);
											if (Function_95(&iVar5, &uVar13, &fVar14, iVar15, 0, 0x40400000) || (CALCULATE_NORMALIZED_SCREEN_DISTANCE_FROM_RETICLE(Function_56(), &iVar5) > 0,06f && GET_WEAPON_IN_HAND(Function_56()) == 4294967295))
											{
												DECOR_SET_OBJECT(GET_OBJECT_FROM_EVENT(&iParam0), "Perpetrator", Function_56());
												bVar12 = true;
											}
										}
									}
								}
							}
						}
					}
				}
				else if (IS_ACTOR_VALID(&iVar4))
				{
					DECOR_SET_BOOL(&iVar4, "corralNoCrime", true);
				}
			}
			if (!bVar12)
			{
				return;
			}
			break;
		
		case 0x00000023:
			bVar16 = true;
			if (bVar16)
			{
				return;
			}
			break;
		
		case 0x00000016:
		case 0x00000012:
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (!&iVar5 != &iVar6)
			{
				return;
			}
			if (!Function_100(1))
			{
				return;
			}
			if (GET_EVENT_TYPE(&iParam0) == 18)
			{
				if (GET_ACTORS_HORSE(&iVar5) == GET_MOUNT(&iVar5))
				{
					return;
				}
				if (DECOR_CHECK_EXIST(GET_MOUNT(&iVar5), "break"))
				{
					return;
				}
				if (DECOR_CHECK_EXIST(GET_MOUNT(&iVar5), "hijacked"))
				{
					return;
				}
			}
			if (DECOR_CHECK_EXIST(&iVar2, "dismount"))
			{
				if (DECOR_GET_FLOAT(&iVar2, "dismount") + 15.0f) > GET_CURRENT_GAME_TIME()
				{
					if (!Global_42250)
					{
						DECOR_REMOVE(&iVar2, "dismount");
						return;
					}
				}
			}
			if (GET_EVENT_TYPE(&iParam0) == 22)
			{
				if (!IS_ACTOR_VALID(&iVar4))
				{
					return;
				}
				if (GET_ACTORENUM_ACTOR_BASE_TYPE(GET_ACTOR_ENUM(&iVar4)) == 8)
				{
					return;
				}
			}
			break;
		
		case 0x00000011:
			if (!Function_99(0x40000000))
			{
				if (!&iVar5 != &iVar6)
				{
					return;
				}
			}
			if (&iVar5 != &iVar6)
			{
				if (IS_ACTOR_VALID(&iVar5))
				{
					if (!IS_ACTOR_HUMAN(&iVar5))
					{
						return;
					}
				}
				return;
			}
			if (!Function_100(1))
			{
				return;
			}
			break;
		
		case 0x00000033:
			if (!Function_100(1))
			{
				return;
			}
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (!&iVar5 != &iVar6)
			{
				return;
			}
			if (&iVar4 == &iVar6)
			{
				return;
			}
			break;
		
		case 0x0000000E:
			if (!Function_100(1))
			{
				return;
			}
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (!IS_OBJECT_VALID(&iVar2))
			{
				return;
			}
			if (!&iVar5 != &iVar6)
			{
				return;
			}
			if (((((!STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "open_credenza") && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "stand_armoir")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "stand_cupboard")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "stand_open_chest")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "locked_footlocker")) && !STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "Player_Lockpick_Footlocker"))
			{
				return;
			}
			break;
		
		case 0x0000000F:
			if (!Function_100(1))
			{
				return;
			}
			if (!IS_OBJECT_VALID(&iVar3))
			{
				return;
			}
			if (!IS_OBJECT_VALID(&iVar2))
			{
				return;
			}
			if (!GET_OBJECT_TYPE(&iVar3) != 15)
			{
				return;
			}
			if (STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "$/content/scripting/gringo/simplegringo/horse_stay"))
			{
				if (!GET_RIDER(&iVar5) != &iVar6)
				{
					return;
				}
			}
			if (STRINGS_ARE_EQUAL(GET_OBJECT_MODEL_NAME(&iVar2), "hogtie_pickup"))
			{
				if (&iVar5 == &iVar6)
				{
					if (!Global_6646)
					{
						uVar17 = GRINGO_GET_TARGET(GET_GRINGO_FROM_OBJECT(&iVar2));
						if (IS_OBJECT_VALID(&uVar17))
						{
							Function_94(&uVar17);
							Function_93(&iVar5);
							if (VDIST(Function_94(&uVar17), Function_93(&iVar5)) >= 3.0f)
							{
								if (GET_OBJECT_TYPE(&uVar17) == 15)
								{
									uVar18 = GET_ACTOR_FROM_OBJECT(&uVar17);
								}
								else if (GET_OBJECT_TYPE(&uVar17) == 24)
								{
									uVar18 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&uVar17));
								}
								if (IS_ACTOR_VALID(&uVar18))
								{
									bVar19 = GET_ACTOR_ENUM(&uVar18);
									if (bVar19 != 4294967295)
									{
										if (StackVal && Function_91(GET_ACTORENUM_ACTOR_BASE_TYPE(bVar19) != 1) < 0)
										{
											if (IS_OBJECTSET_VALID(&Global_98981))
											{
												if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanObject"))
												{
													DECOR_REMOVE(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanObject");
												}
												if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanTime"))
												{
													DECOR_REMOVE(GET_OBJECT_FROM_OBJECTSET(&Global_98981), "untiedLawmanTime");
												}
												DECOR_SET_OBJECT(&Global_98981, "untiedLawmanObject", &uVar17);
												DECOR_SET_FLOAT(&Global_98981, "untiedLawmanTime", (GET_CURRENT_GAME_TIME() + 2,5f));
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
			if (DECOR_CHECK_EXIST(&iParam0, "DroppedItem"))
			{
				uVar20 = DECOR_GET_OBJECT(&iParam0, "DroppedItem");
				if (IS_OBJECT_VALID(&uVar20))
				{
					Function_90(&uVar20);
				}
			}
			return;
			break;
		
		default:
			return;
			break;
	}
	if (!IS_LAYOUTREF_VALID(&Global_39918))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(&Global_39920))
	{
		return;
	}
	uVar21 = COPY_EVENT(&iParam0, &Global_39918);
	ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(&uVar21), &Global_39920);
	bVar22 = GET_EVENT_PERPETRATOR(&uVar21);
	if (Function_88(Global_40000, &bVar22, 1) | 0)
	{
		DECOR_SET_INT(&uVar21, "witness", 3);
	}
	else if (Function_88(StackVal, &bVar22, 1))
	{
		DECOR_SET_INT(&uVar21, "witness", 2);
	}
	else
	{
		DECOR_SET_INT(&uVar21, "witness", true);
	}
	return;
}

bool Function_88(int iParam0, bool bParam1, bool bParam2) //Position: 0x6704 / 26372
{
	int iVar0;
	struct<2> Var1;
	
	if (GET_OBJECT_TYPE(&bParam1) == 15)
	{
		if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, &bParam1))
		{
			return 1;
		}
		if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bParam1)));
		}
		if (IS_ACTOR_VALID(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bParam1))))
		{
			return CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam0, GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bParam1)));
		}
		return 0;
	}
	if (&bParam2)
	{
		if (!IS_ITERATOR_VALID(&Global_39554))
		{
			LOG_ERROR("MULTI_CAN_ANYONE_OF_FACTION_SEE_OBJECT: NO Ambient Iterator Valid");
			return 0;
		}
		GET_OBJECT_POSITION(&bParam1, &Var1);
		Function_89(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 15);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&iVar0)) == iParam0)
			{
				return 1;
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
		Function_89(&Global_39554);
		ITERATE_IN_LAYOUT(&Global_39554, &Global_10996);
		ITERATE_ON_OBJECT_TYPE(&Global_39554, 24);
		ITERATE_IN_SPHERE(&Global_39554, Var1, 25.0f);
		iVar0 = START_OBJECT_ITERATOR(&Global_39554);
		while (IS_OBJECT_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(&iVar0))) == iParam0)
				{
					return 1;
				}
			}
			iVar0 = OBJECT_ITERATOR_NEXT(&Global_39554);
		}
	}
	return 0;
}

int Function_89(int iParam0) //Position: 0x6894 / 26772
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_9());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_9());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_90(int iParam0) //Position: 0x68CA / 26826
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

int Function_91(int iParam0) //Position: 0x6901 / 26881
{
	if (!Function_92(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_92(int iParam0) //Position: 0x6919 / 26905
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_93(int iParam0) //Position: 0x692E / 26926
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_94(bool bParam0) //Position: 0x6940 / 26944
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_95(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x6969 / 26985
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_98(&iParam0, &Global_54076);
		if (!Function_22(&uParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_96(&iParam0);
				return 1;
			}
		}
		if (!Function_22(&uParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_96(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_96(&iParam0);
				return 1;
			}
		}
		if (!Function_22(&uParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_96(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_96(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_22(&uParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_96(&iParam0);
				return 1;
			}
		}
		if (!Function_22(&uParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_96(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_96(int iParam0) //Position: 0x6B32 / 27442
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_97(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_97(int iParam0) //Position: 0x6B6F / 27503
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_98(var uParam0, int iParam1) //Position: 0x6B88 / 27528
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_99(int iParam0) //Position: 0x6C7D / 27773
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_100(bool bParam0) //Position: 0x6C9B / 27803
{
	if (Function_99(256))
	{
		return 0;
	}
	if (Function_99(262144))
	{
		return 0;
	}
	if (Function_102())
	{
		return 0;
	}
	if (!Function_99(1))
	{
		return 0;
	}
	if (!Function_99(4096))
	{
		return 0;
	}
	if (bParam0 && Function_101(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_99(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

bool Function_101(int iParam0) //Position: 0x6D11 / 27921
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_102() //Position: 0x6D22 / 27938
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_103() //Position: 0x6D3B / 27963
{
	return Function_104(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_40000);
}

int Function_104(vector3 vParam0, var uParam9, var uParam10) //Position: 0x6D4A / 27978
{
	if (Function_99(256))
	{
		return 0;
	}
	if (Function_99(262144))
	{
		return 0;
	}
	if (Function_102())
	{
		return 0;
	}
	if (Function_101(12))
	{
		return 0;
	}
	if (vParam0.z >= 4294967295 || vParam0.z <= 2)
	{
		return 0;
	}
	return 1;
}

void Function_105(var uParam0, bool bParam1) //Position: 0x6D98 / 28056
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!IS_EVENT_VALID(&uParam0))
	{
		return;
	}
	bParam1 = (bParam1 || Global_47267[8]);
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	uVar2 = GET_EVENT_PERPETRATOR(&uParam0);
	uVar3 = GET_EVENT_TARGET_AS_OBJECT(&uParam0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		if (GET_OBJECT_TYPE(&uVar3) == 15)
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uParam0));
		}
	}
	if (IS_OBJECT_VALID(&uVar2))
	{
		if (GET_OBJECT_TYPE(&uVar2) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar2)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar2)))
				{
					if (&bParam1)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&uParam0)));
						PRINTNL();
					}
					if (GET_EVENT_TYPE(&uParam0) == 6)
					{
						if (GET_WEAPON_IN_HAND(&Global_54076) == 29)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Weapon", 29);
							if (IS_PLAYER_DEADEYE(0))
							{
								DECOR_SET_BOOL(&uVar2, "AM_TomahawkDeadEye", true);
							}
						}
					}
					if (IS_ACTOR_VALID(&uVar1))
					{
						if (IS_ACTOR_FLYING(&uVar1))
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Flying", true);
						}
						if (((GET_EVENT_TYPE(&uParam0) != 2 || GET_EVENT_TYPE(&uParam0) != 7) || GET_EVENT_TYPE(&uParam0) != 10) || GET_EVENT_TYPE(&uParam0) != 5)
						{
							DECOR_SET_INT(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Weapon", GET_LAST_HIT_WEAPON(&uVar1));
							if (GET_LAST_HIT_WEAPON(&uVar1) == 29)
							{
								if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Linked", true);
								}
								if (IS_PLAYER_DEADEYE(0) || DECOR_GET_BOOL(&uVar2, "AM_TomahawkDeadEye"))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "AM_Deadeye", true);
									if (GET_EVENT_TYPE(&uParam0) == 5)
									{
										DECOR_REMOVE(&uVar2, "AM_TomahawkDeadEye");
									}
								}
							}
							else if (GET_LAST_HIT_WEAPON(&uVar1) == 31)
							{
								if (IS_ACTOR_USING_COVER(&uVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "AM_InCover", true);
								}
							}
						}
						else if (GET_EVENT_TYPE(&uParam0) == 91)
						{
							if (DECOR_GET_STRING_HASH(&uParam0, "ExplosionType") == STRING_TO_HASH("ATRifleExplosion"))
							{
								DECOR_SET_INT(GET_OBJECT_FROM_EVENT(&uParam0), "nAM_Weapon", 31);
								if (IS_ACTOR_USING_COVER(&uVar1))
								{
									DECOR_SET_BOOL(GET_OBJECT_FROM_EVENT(&uParam0), "AM_InCover", true);
								}
							}
						}
					}
					COPY_EVENT(&uParam0, &uVar0);
				}
			}
		}
	}
	if (IS_OBJECT_VALID(&uVar3))
	{
		if (GET_OBJECT_TYPE(&uVar3) == 15)
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)))
			{
				if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
				{
					if (&bParam1)
					{
						PRINTSTRING("PROCESS_AMBIENT_MISSION_EVENT COPYING EVENT OF TYPE: ");
						PRINTINT(GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&uParam0)));
						PRINTNL();
					}
					COPY_EVENT(&uParam0, &uVar0);
				}
			}
		}
	}
	return;
}

void Function_106(int iParam0) //Position: 0x712D / 28973
{
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		if (IS_LAYOUTREF_VALID(FIND_NAMED_LAYOUT("Formations")))
		{
			Global_39613 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("Formations"));
		}
	}
	if (!IS_ITERATOR_VALID(&Global_39613))
	{
		return;
	}
	ITERATE_EVERYWHERE(&Global_39613);
	ITERATE_ON_OBJECT_TYPE(&Global_39613, 3);
	if (!&iParam0 != "")
	{
		ITERATE_IN_SET(&Global_39613, &iParam0);
	}
	else
	{
		ITERATE_IN_LAYOUT(&Global_39613, GET_EVENT_LAYOUT());
	}
	return;
}

void Function_107() //Position: 0x71A7 / 29095
{
	return;
}

void Function_108(struct<57> Param0) //Position: 0x71AD / 29101
{
	strcpy(&Param0 + 24, "JOBLAUNCHER", 16);
	Param0 = 32562;
	(&Param0 + 8) = 29162;
	*(&Param0 + 16) = 32562;
	Param0.f_56 = 0;
	return;
}

int Function_109() //Position: 0x71EA / 29162
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!Global_6607)
	{
		return 0;
	}
	if (Function_140(0, 0, 1, 1))
	{
		return 0;
	}
	uVar1 = Function_56();
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Function_139(&(Global_98256[iVar010]), 8))
		{
			if (IS_OBJECT_VALID(&Global_98256[iVar010] + 48))
			{
				if (Function_135(&Global_98256[iVar010] + 48, 1, 1, 1, 1, 0))
				{
					Function_120(Global_98256[iVar010].f_24, &Global_98256[iVar010] + 16, Global_98256[iVar010].f_36, Global_98256[iVar010].f_28, Global_98256[iVar010].f_32);
					Function_119(&Global_98256[iVar010] + 48);
				}
			}
		}
		if (!IS_SCRIPT_VALID(&Global_98256[iVar010] + 8) && Function_139(&(Global_98256[iVar010]), 1))
		{
			if (IS_PERS_CHAR_VALID(&Global_98256[iVar010] + 40))
			{
				uVar2 = GET_ACTOR_FROM_PERS_CHAR(&Global_98256[iVar010] + 40);
			}
			if (IS_PERS_CHAR_VALID(&Global_98256[iVar010] + 40))
			{
				if (IS_PERS_CHAR_ALIVE(&Global_98256[iVar010] + 40) && !Function_118(&uVar2))
				{
					if (Function_112(&(Global_98256[iVar010])))
					{
						Function_111(&(Global_98256[iVar010]), 1);
						Function_110(&(Global_98256[iVar010]), 2);
					}
				}
				else
				{
					Function_111(&(Global_98256[iVar010]), 1);
					Function_110(&(Global_98256[iVar010]), 8);
					if (!IS_PLAYER_CONTROLLABLE(0))
					{
						SET_PLAYER_CONTROL(0, 1, 0, 0);
					}
					HUD_CLEAR_HELP();
				}
			}
			else
			{
				Function_111(&(Global_98256[iVar010]), 1);
				Function_110(&(Global_98256[iVar010]), 8);
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

void Function_110(var uParam0, int iParam1) //Position: 0x7392 / 29586
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_111(var uParam0, int iParam1) //Position: 0x73A3 / 29603
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_112(struct<37> Param0) //Position: 0x73BD / 29629
{
	struct<45> Var0;
	
	Var0.f_4 = Param0.f_36;
	*(&Var0 + 16) = &Param0 + 40;
	Function_117();
	*(&Var0 + 24) = { StackVal, Function_117() };
	Var0.f_40 = Param0.f_28;
	Var0.f_44 = Param0.f_32;
	*(&Param0 + 8) = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&Param0 + 16, 4), &Var0, 14, 0);
	Function_115();
	Function_113(0, 0);
	if (IS_ACTOR_DRUNK(Function_56()))
	{
		SET_ACTOR_DRUNK(Function_56(), 0);
	}
	return IS_SCRIPT_VALID(&Param0 + 8);
}

void Function_113(int iParam0, int iParam1) //Position: 0x742B / 29739
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_114(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_114(struct<113> Param0) //Position: 0x74B2 / 29874
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_115() //Position: 0x7510 / 29968
{
	Function_116(512);
	Global_42252 = 0.0f;
	UNK_0x598815BD(Global_42252);
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	return;
}

void Function_116(var uParam0) //Position: 0x7550 / 30032
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

struct<8> Function_117() //Position: 0x7563 / 30051
{
	char* cVar0[8];
	
	strcpy(&cVar0, "watch01", 8);
	return StackVal, cVar0;
}

bool Function_118(int iParam0) //Position: 0x757B / 30075
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
		{
			return 1;
		}
	}
	return 0;
}

void Function_119(int iParam0) //Position: 0x759A / 30106
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&iParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&iParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

void Function_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7630 / 30256
{
	if (!Function_121(iParam0, uParam2, 63))
	{
		return;
	}
	Global_98256[iParam010].f_24 = iParam0;
	Global_98256[iParam010].f_36 = uParam2;
	Global_98256[iParam010].f_28 = uParam3;
	Global_98256[iParam010].f_32 = uParam4;
	*(&Global_98256[iParam010] + 16) = &uParam1;
	Function_110(&(Global_98256[iParam010]), 1);
}

bool Function_121(int iParam0, int iParam1, int iParam2) //Position: 0x7692 / 30354
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!Function_134())
	{
		return 0;
	}
	if (Global_6646 || Global_6647)
	{
		return 0;
	}
	if (!Function_133(iParam0))
	{
		return 0;
	}
	if ((Global_6623 || Global_6627) || Global_6625)
	{
		return 0;
	}
	if (!Global_43789 != iParam1)
	{
		return 0;
	}
	iVar0 = Function_128(iParam1, iParam0, 6);
	if (!Function_127(iVar0))
	{
		return 0;
	}
	if (Global_6606)
	{
		uVar1 = Function_124(iVar0);
		if (GET_DAY(&uVar1) != 0)
		{
			uVar2 = GET_TIME_OF_DAY();
			if (iParam0 != 1)
			{
				if (GET_DAY(&uVar1) > GET_DAY(false))
				{
					return 0;
				}
			}
			uVar3 = Function_124(iVar0);
			ADD_TIME(&uVar3, 0, 16, false, 0);
			if (IS_LATER_THAN(&uVar3, false))
			{
				return 0;
			}
		}
	}
	if (!&iParam2 != 63)
	{
		if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_123(&iParam2), Function_122(&iParam2)))
		{
			return 0;
		}
	}
	if (IS_SCRIPT_VALID(&Global_98256[iParam010] + 8) || Function_139(&(Global_98256[iParam010]), 2))
	{
		return 0;
	}
	if (Function_139(&(Global_98256[iParam010]), 1))
	{
		return 0;
	}
	return 1;
}

var Function_122(int iParam0) //Position: 0x7791 / 30609
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_123(int iParam0) //Position: 0x77FD / 30717
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 1)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_124(int iParam0) //Position: 0x7869 / 30825
{
	if (!Function_125(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, false);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_125(int iParam0) //Position: 0x7889 / 30857
{
	if (!Function_127(iParam0))
	{
		return 0;
	}
	if (!Function_126(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_126(int iParam0) //Position: 0x78AD / 30893
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_127(int iParam0) //Position: 0x78C2 / 30914
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x78D9 / 30937
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_132(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_129(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_129(bParam0, bParam1, bParam2, 4294967295);
}

int Function_129(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x7937 / 31031
{
	var uVar0;
	
	if (!Function_131(bParam2))
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
	uVar0 = Function_132(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_130(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_130(int iParam0) //Position: 0x7A9B / 31387
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_131(int iParam0) //Position: 0x7AD9 / 31449
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_132(int iParam0, int iParam1, int iParam2) //Position: 0x7AEE / 31470
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_133(int iParam0) //Position: 0x7B0E / 31502
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return 0;
	}
	return Global_39258[iParam0];
}

bool Function_134() //Position: 0x7B29 / 31529
{
	return Function_1(512);
}

bool Function_135(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x7B35 / 31541
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &iParam1, &iParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && iParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_138(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_137(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_137(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_136(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_136(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(false, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_136(vector3 vParam0) //Position: 0x7D6A / 32106
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_58(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_58(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_137(int iParam0, bool bParam1) //Position: 0x7DE0 / 32224
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&iParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_138(var uParam0, bool bParam1) //Position: 0x7E01 / 32257
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_137(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

bool Function_139(var uParam0, int iParam1) //Position: 0x7E6B / 32363
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

bool Function_140(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7E83 / 32387
{
	iParam0 = &iParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && iParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_141() //Position: 0x7F32 / 32562
{
	return;
}

void Function_142(struct<57> Param0) //Position: 0x7F38 / 32568
{
	strcpy(&Param0 + 24, "QUESTLAUNCHER", 16);
	Param0 = 32562;
	*(&Param0 + 8) = 32629;
	*(&Param0 + 16) = 32562;
	Param0.f_56 = 0;
	return;
}

int Function_143() //Position: 0x7F75 / 32629
{
	float fVar0;
	int iVar1;
	
	if (!Global_6607)
	{
		return 0;
	}
	if (!Function_191(10) && !Function_1(1048576))
	{
		return 0;
	}
	fVar0 = GET_PROFILE_TIME();
	iVar1 = StackVal;
	while (iVar1 < (77 - 1))
	{
		if ((GET_PROFILE_TIME() - fVar0) < 150.0f)
		{
			Global_99717.f_8 = iVar1;
			return 0;
		}
		Function_144(&(Global_99725[iVar143]), iVar1);
		iVar1++;
	}
	Global_99717.f_8 = 0;
	return 0;
}

void Function_144(struct<233> Param0) //Position: 0x7FE5 / 32741
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	bool bVar4;
	
	if (Function_22(Param0.f_228, 128))
	{
		Function_190(&Param0);
		UI_POP("nCutscenes");
		Function_36(&Param0 + 228, 128);
	}
	if (!(Function_189(iParam1) || Function_188(iParam1)))
	{
		return;
	}
	if ((((Global_6627 || Global_6646) || Global_6648) || IS_ACTOR_VALID(GET_LINKED_ANIM_TARGET(&Global_54076))) || Function_184(&Global_54076, 0, 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
		}
		return;
	}
	if (Function_188(iParam1) || Param0.f_232)
	{
		bVar0 = (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28);
		if (!bVar0)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
			}
			Function_183(&Param0, iParam1);
		}
		return;
	}
	switch (Param0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(&Param0 + 312))
			{
				return;
			}
			if (!IS_GRINGO_VALID(&Param0 + 320) && UNK_0x214AFB8C(&Param0 + 120))
			{
				return;
			}
			if (!Function_173(&Param0, iParam1, 0))
			{
				return;
			}
			Function_154(&Param0, iParam1);
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(&Param0 + 328))
			{
				return;
			}
			break;
		
		default:
			break;
	}
	if (iParam1 == 64 || Global_6606)
	{
		Function_146(&Param0, iParam1, 0x41f00000, 0x42200000, 0);
	}
	Var1 = *(&Param0 + 184);
	Var1.f_4 = (StackVal + 1,25f);
	bVar3 = IS_POSITION_INDOORS(Global_54078);
	bVar4 = IS_POSITION_INDOORS(Var1);
	if (bVar3 != bVar4)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
		}
		return;
	}
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		switch (Param0)
		{
			case 0x00000001:
				if (iParam1 == &Param0 + 36)
				{
					if (GATEWAY_UPDATE(&Param0 + 288))
					{
						if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 304))
							{
								RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
								Function_145(&Param0);
								Function_183(&Param0, iParam1);
								UI_PUSH("nCutscenes");
							}
						}
						else if (HAS_STRING_TABLE_LOADED("RandomCharMissions"))
						{
							*(&Param0 + 304) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(&Param0 + 44, GATEWAY_GET_VOLUME(&Param0 + 288), 30, "@FOOT.INTERACT", 0, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
					}
				}
				else if (Function_135(&Param0 + 288, 0, 1, 1, 0, 1))
				{
					Function_145(&Param0);
					Function_183(&Param0, iParam1);
				}
				break;
			
			case 0x00000002:
			case 0x00000003:
				if (iParam1 == 3)
				{
					if (Function_135(&Param0 + 288, 0, 1, 1, 0, 1))
					{
						Function_145(&Param0);
						Function_183(&Param0, iParam1);
					}
					return;
				}
				if (GATEWAY_UPDATE(&Param0 + 288))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 304))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
							Function_145(&Param0);
							Function_183(&Param0, iParam1);
							UI_PUSH("nCutscenes");
						}
					}
					else if (HAS_STRING_TABLE_LOADED("RandomCharMissions"))
					{
						*(&Param0 + 304) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME(&Param0 + 44, GATEWAY_GET_VOLUME(&Param0 + 288), 30, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
					}
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
				}
				break;
			
			default:
				break;
		}
	}
	else if (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		if (!Function_22(Param0.f_228, 4096) && !Global_99146)
		{
			if (VDIST(Global_54078, *(&Param0 + 184)) > Param0.f_180)
			{
				Function_47(&Param0 + 228, 4096);
				PRINT_HELP_FORMAT(7.0f, "tutorial_rcm_player_busy", "", "", "", "", 0, 0, 0);
			}
		}
	}
	return;
}

void Function_145(int iParam0) //Position: 0x83F2 / 33778
{
	int iVar0;
	
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	ENABLE_USE_CONTEXTS(0);
	iVar0 = Global_39922.f_88 & 16384;
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	if (IS_ACTOR_VALID(&iParam0 + 312))
	{
		SET_ACTOR_INVULNERABILITY(&iParam0 + 312, true);
		MEMORY_CLEAR_EVENTS(&iParam0 + 312, 1);
	}
	SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	return;
}

int Function_146(int iParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x8446 / 33862
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	if (!HUD_IS_FADING() && !HUD_IS_FADED())
	{
		if (!(((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28))
		{
			if (UNK_0x214AFB8C(&iParam0 + 136))
			{
				bVar0 = VDIST(Global_54078, *(&iParam0 + 184));
				if (&Global_99717 + 16 == fParam1)
				{
					uVar1 = Global_99717.f_28;
					uVar2 = Function_148(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &uVar1, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
					Global_99717.f_28 = uVar1;
					Global_99717.f_24 = bVar0;
					if (bVar0 < &fParam3)
					{
						*(&Global_99717 + 16) = 4294967295;
						Global_99717.f_24 = 999.0f;
					}
					return uVar2;
				}
				if (bVar0 > &fParam2)
				{
					if (&Global_99717 + 16 != 4294967295 || (&Global_99717 + 16 == fParam1 && bVar0 > Global_99717.f_24))
					{
						iVar3 = Global_99717.f_28;
						if (iVar3 == 0)
						{
							if (GET_ACTOR_ENUM(&Global_54076) == 1)
							{
								CUTSCENE_MANAGER_SET_WAS_JOHN_NOW_JACK_IN_RCM_CUTSCENE(Function_147(&iParam0));
							}
						}
						if (IS_ACTORSET_VALID(&uParam4))
						{
							bVar4 = false;
							while (bVar4 <= GET_ACTORSET_SIZE(&uParam4))
							{
								uVar5 = GET_ACTOR_FROM_ACTORSET(&uParam4, bVar4);
								if (IS_ACTOR_VALID(&uVar5))
								{
									CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(GET_ACTOR_ENUM_STRING(&uVar5), &uVar5);
								}
								bVar4++;
							}
						}
						uVar6 = Function_148(StackVal, GET_ASSET_NAME(&iParam0 + 136, 9), &iVar3, *(&iParam0 + 184), 0, &fParam2, &fParam3, 2, 1, 2, 2, 0, 1);
						Global_99717.f_28 = iVar3;
						*(&Global_99717 + 16) = fParam1;
						Global_99717.f_24 = bVar0;
						return uVar6;
					}
				}
			}
		}
	}
	return 0;
}

int Function_147(struct<257> Param0) //Position: 0x85D1 / 34257
{
	if (Param0.f_256 != 4294967295)
	{
		if (Global_116927[Param0.f_2566].f_36 != TO_FLOAT(false))
		{
			return 1;
		}
		return Function_147(&(Global_99725[Param0.f_25643]));
	}
	return 0;
}

int Function_148(var uParam0, int iParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x860D / 34317
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_151(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_153()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && iParam1 == 0)
		{
			if (iParam1 != 5)
			{
				iParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			iParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_58(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (iParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					iParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					iParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					iParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_149();
					CUTSCENE_MANAGER_RESUME_LOADING();
					iParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					iParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				iParam1 = 0;
				break;
		}
	}
	else if ((!Function_151(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_153()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		iParam1 = 0;
	}
	else if (!Function_151(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_149() //Position: 0x8875 / 34933
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_150(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_150(char* cParam0) //Position: 0x88C9 / 35017
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_151(var uParam0, struct<2> Param1, float fParam3) //Position: 0x89F2 / 35314
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_152(&uParam0);
		if (VDIST(Function_152(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_152(var uParam0) //Position: 0x8A7E / 35454
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_153() //Position: 0x8AEA / 35562
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_154(struct<229> Param0) //Position: 0x8AF9 / 35577
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	
	if (Function_22(Param0.f_228, 2048))
	{
		return;
	}
	bVar0 = (((Global_6623 || Global_6625) || Global_6635) || Global_53524.f_28);
	bVar1 = IS_OBJECT_VALID(&Param0 + 288);
	if (!bVar1 && !bVar0)
	{
		iVar2 = 6;
		if (GET_TARGETED_JOURNAL_ENTRY() == Param0.f_224)
		{
			iVar2 = 7;
		}
		Function_164(&Param0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (GET_BLIP_ICON(&Param0 + 272) == 440)
		{
			Var3 = *(&Param0 + 184);
			Var3.f_4 = (StackVal + 0,5f);
			if (!Function_163(StackVal, Var3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_54078, *(&Param0 + 184)) < 42.0f)
			{
				return;
			}
			Global_116927[iParam16].f_20 = 1;
			REMOVE_BLIP(&Param0 + 272);
		}
		else if (bVar0)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	if (!IS_BLIP_VALID(&Param0 + 272))
	{
		if (bVar0)
		{
			if (iParam1 == &Param0 + 36)
			{
				if (Function_162(Param0.f_216))
				{
					Function_159(StackVal, Param0.f_216, 23, *(&Param0 + 184), 63);
				}
				else
				{
					Function_159(StackVal, Global_43789, 23, *(&Param0 + 184), 63);
				}
			}
		}
		else
		{
			if (iParam1 == &Param0 + 36)
			{
				if (Function_162(Param0.f_216))
				{
					Function_155(StackVal, Param0.f_216, 23, Param0.f_184);
				}
				else
				{
					Function_155(StackVal, Global_43789, 23, Param0.f_184);
				}
				Function_36(&Param0 + 228, 4096);
			}
			if (iParam1 == 2)
			{
				*(&Param0 + 184) = Vector(-2168,505f, 16,879f, 2590,258f);
			}
			if (iParam1 == 33)
			{
				*(&Param0 + 184) = Vector(-3951,709f, 25,098f, 2868,928f);
			}
			*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 2, 7);
			SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
			*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 184, Param0.f_152, 0.0f, 2, 7);
			SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
			UNK_0xFF3DB575(&Param0 + 280, 1);
			SET_BLIP_PRIORITY(&Param0 + 280, true);
			if (&Param0 + 36 != iParam1)
			{
				SET_BLIP_COLOR(&Param0 + 272, 0,58f, 0,35f, 0,72f, 1.0f);
				SET_BLIP_COLOR(&Param0 + 280, 0,58f, 0,35f, 0,72f, 1.0f);
			}
			SET_BLIP_MAX_DISTANCE(&Param0 + 272, 1,25f);
		}
	}
	return;
}

void Function_155(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8D86 / 36230
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_157(Function_158(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_157(Function_158(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_157(StackVal);
				Var1 = Function_157(StackVal);
				if (Function_156(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_156(struct<2> Param0, struct<2> Param2) //Position: 0x8E91 / 36497
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_157(int iParam0) //Position: 0x8EBD / 36541
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

int Function_158(vector3 vParam0) //Position: 0x8F14 / 36628
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
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

int Function_159(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x8F62 / 36706
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_162(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_58(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_161(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_158(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_157(uVar3);
		Var6 = Function_157(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_157(StackVal);
				Var4 = Function_157(StackVal);
				if (Function_156(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_160(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x914B / 37195
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

int Function_161(int iParam0) //Position: 0x9282 / 37506
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

bool Function_162(int iParam0) //Position: 0x933A / 37690
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_163(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9350 / 37712
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

void Function_164(struct<229> Param0) //Position: 0x9371 / 37745
{
	float fVar0;
	int iVar1;
	
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_22(Param0.f_228, 2048) || Global_6623) || Global_6625) || Global_6635) || Global_53524.f_28)
	{
		return;
	}
	fVar0 = Param0.f_180;
	*(&Param0 + 288) = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_9(), *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0), 0, &Global_54076, iParam1, Param0.f_176, 0, 1, 1);
	Function_165(&Param0);
	iVar1 = GATEWAY_GET_MARKER(&Param0 + 288);
	if (IS_OBJECT_VALID(&iVar1))
	{
		DESTROY_OBJECT(&iVar1);
	}
	return;
}

void Function_165(struct<217> Param0) //Position: 0x9441 / 37953
{
	float fVar0;
	var uVar1;
	
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		return;
	}
	*(&Param0 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_99717, Function_9(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2.0f, 2.0f));
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 336);
	fVar0 = 20.0f;
	if (Function_162(Param0.f_216))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 336, Function_9(), 2, *(&Param0 + 196), Vector(0.0f, 0.0f, 0.0f), Vector(fVar0, fVar0, fVar0));
	DECOR_SET_INT(&uVar1, "category", 512);
	Function_166(&uVar1, 0);
	return;
}

int Function_166(var uParam0, int iParam1) //Position: 0x94FF / 38143
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_170(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_167(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_167(int iParam0, var uParam1, struct<2> Param2) //Position: 0x9669 / 38505
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_168("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 3, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

struct<32> Function_168(char* cParam0) //Position: 0x9711 / 38673
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_169("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_169(char* cParam0) //Position: 0x977D / 38781
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_170(int iParam0) //Position: 0x979F / 38815
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_172(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_171(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_172(iVar0);
						}
					}
					else if (Function_171(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_172(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_172(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_171(var uParam0, struct<2> Param1) //Position: 0x990D / 39181
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_152(&uParam0);
		Var0 = Function_152(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_172(int iParam0) //Position: 0x9984 / 39300
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_173(struct<237> Param0) //Position: 0x99EC / 39404
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	bool bVar20;
	bool bVar21;
	
	if (!((((Global_99146 || Global_6627) || Global_6610) || Param0.f_236) || GET_ACTOR_INVULNERABILITY(&Param0 + 312)))
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, *(&Param0 + 4), 16);
		if (!Function_182(&Param0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_176(&Param0, bParam1, 0, 0, &bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0);
				if (bVar17)
				{
					if (Function_38())
					{
						Function_175(bParam1, 1);
					}
					else
					{
						Function_174(bParam1);
					}
				}
				else
				{
					Function_45("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
					Global_116927[bParam16] = 7;
					*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
				}
			}
			return 0;
		}
		if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&Param0 + 312) && GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &Param0 + 312)
		{
			stradd(&cVar0, ": DA: Quest helper is now in combat.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_176(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_176(&Param0, bParam1, 0, 0, &bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(&Param0 + 312))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(&Param0 + 312);
			Function_176(&Param0, bParam1, 0, 0, &bParam2);
			bVar18 = false;
			uVar19 = GET_LAST_ATTACKER(&Param0 + 312);
			if (IS_ACTOR_VALID(&uVar19))
			{
				if (IS_ACTOR_LOCAL_PLAYER(&uVar19))
				{
					bVar18 = true;
				}
			}
			bVar20 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 1);
			if (!bVar20)
			{
				bVar21 = IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0);
				if (bVar18)
				{
					if (bVar21)
					{
						if (Function_38())
						{
							Function_175(bParam1, 1);
						}
						else
						{
							Function_174(bParam1);
						}
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_45("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_116927[bParam16] = 7;
						*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
					}
				}
				else
				{
					Function_45("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
					Global_116927[bParam16] = 7;
					*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
				}
			}
			return 0;
		}
		if (AI_HAS_ACTOR_BUMPED_INTO_ME(&Param0 + 312, &Global_54076, 5.0f) && AI_WAS_PUSHED_OVER(&Param0 + 312, 5.0f))
		{
			stradd(&cVar0, "DA: Quest helper has been bumped.", 64);
			Function_176(&Param0, bParam1, 0, 0, &bParam2);
			TASK_CLEAR(&Param0 + 312);
			TASK_PRIORITY_SET(&Param0 + 312, 2);
			TASK_FLEE_ACTOR(&Param0 + 312, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(&Param0 + 312, true);
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[bParam143].f_224, 0))
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Disabled", &Param0 + 4, "", "", "", 0, 2, 0, 0, 0);
				DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 1);
				SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, false, "RCM_InactiveJournal");
			}
			Global_116927[bParam16] = 7;
			*(&Global_116927[bParam16] + 8) = GET_TIME_OF_DAY();
			ADD_TIME_USING_TIME_OF_DAY(&Global_116927[bParam16] + 8, &Global_99725[bParam143] + 160);
		}
	}
	return 1;
}

void Function_174(int iParam0) //Position: 0x9E65 / 40549
{
	char* cVar0[32];
	
	Global_116927[iParam06] = 7;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[iParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
	switch (Global_43787)
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
			PRINTINT(Global_43787);
			LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
			break;
	}
	stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

void Function_175(int iParam0, bool bParam1) //Position: 0x9FCE / 40910
{
	char* cVar0[32];
	
	Global_116927[iParam06] = 7;
	*(&Global_116927[iParam06] + 8) = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_116927[iParam06] + 8, &Global_99725[iParam043] + 160);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_99725[iParam043] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (&bParam1)
	{
		switch (Global_43787)
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
				PRINTINT(Global_43787);
				LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
				break;
		}
		stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
		AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
		SAY_SINGLE_LINE_CONTEXT(&Global_54076, 394, 0, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	}
	if (!Function_37(Global_119934, 8192))
	{
		Function_31(&Global_54076, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_99725[iParam043].f_224, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_99725[iParam043].f_224, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

void Function_176(struct<229> Param0) //Position: 0xA157 / 41303
{
	if (IS_BLIP_VALID(&Param0 + 272))
	{
		if (((!&bParam2 || Function_181(iParam1)) || Function_180(iParam1)) || iParam1 != &Param0 + 36)
		{
			REMOVE_BLIP(&Param0 + 272);
			REMOVE_BLIP(&Param0 + 280);
		}
	}
	else if (&bParam2)
	{
		if (Function_22(Global_99725[iParam143].f_228, 64) && iParam1 == &Param0 + 36)
		{
			Function_178(&Param0, iParam1);
		}
		if (!(Function_181(iParam1) || Function_180(iParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(Param0.f_224, 0);
			SET_JOURNAL_ENTRY_PROGRESS(Param0.f_224, -1.0f, true, 0);
		}
	}
	if (IS_OBJECT_VALID(&Param0 + 288))
	{
		DESTROY_OBJECT(&Param0 + 288);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 304))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 304);
	}
	if (IS_GRINGO_VALID(&Param0 + 320))
	{
		if (!Function_22(Param0.f_228, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 320));
		}
		else
		{
			(&Param0 + 320) = "";
		}
		Function_36(&Param0 + 228, 32);
	}
	if (IS_OBJECT_VALID(&Param0 + 328))
	{
		RELEASE_OBJECT_REF(&Param0 + 328);
	}
	if (IS_VOLUME_VALID(&Param0 + 336))
	{
		DESTROY_VOLUME(&Param0 + 336);
	}
	if (&bParam4)
	{
		Function_177(&Param0);
	}
	Function_36(&Param0 + 228, 256);
	switch (Global_116927[iParam16])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_116927[iParam16] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(&Param0 + 296) && iParam3)
	{
		TERMINATE_SCRIPT(&Param0 + 296);
	}
	switch (Param0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(&Param0 + 312))
			{
				AI_CLEAR_DONT_HARM_ACTOR(&Param0 + 312);
				AI_CONVERSE_ENABLE(&Param0 + 312);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&Param0 + 312, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&Param0 + 312, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(&Param0 + 312)))
				{
					DESTROY_OBJECT(SQUAD_GET(&Param0 + 312));
				}
				RELEASE_ACTOR(&Param0 + 312);
			}
			break;
		
		default:
			break;
	}
}

void Function_177(struct<229> Param0) //Position: 0xA35A / 41818
{
	if (Function_22(Param0.f_228, 1))
	{
		STREAMING_EVICT_ACTOR(Param0.f_220, 4294967295);
		Function_36(&Param0 + 228, 1);
	}
	if (Function_22(Param0.f_228, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_36(&Param0 + 228, 8);
	}
	if (Function_22(Param0.f_228, 2))
	{
		STREAMING_EVICT_GRINGO(&Param0 + 120);
		Function_36(&Param0 + 228, 2);
	}
	if (Function_22(Param0.f_228, 4))
	{
		STREAMING_EVICT_PROP(&Param0 + 128);
		Function_36(&Param0 + 228, 4);
	}
	return;
}

void Function_178(struct<153> Param0) //Position: 0xA3E9 / 41961
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	struct<9> Var4;
	
	Var0 = *(&Param0 + 196);
	Var0.f_4 = (StackVal + 0,5f);
	fVar2 = 1.0f;
	fVar3 = 50.0f;
	if (((StackVal && Function_163(Function_189(iParam1), Var0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_179(iParam1)) || Global_116927[iParam16].f_20 != 1)
	{
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(&Param0 + 272, 1,25f);
		*(&Param0 + 280) = ADD_BLIP_FOR_COORD(&Param0 + 196, Param0.f_152, 0.0f, 2, 7);
		SET_BLIP_NAME(&Param0 + 280, &Param0 + 4);
		UNK_0xFF3DB575(&Param0 + 280, 1);
		SET_BLIP_PRIORITY(&Param0 + 280, true);
		SET_BLIP_COLOR(&Param0 + 280, 0,58f, 0,35f, 0,72f, fVar2);
		Global_116927[iParam16].f_20 = 1;
	}
	else
	{
		fVar2 = 0,5f;
		vVar4 = *(&Param0 + 196);
		vVar4 = (vVar4.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar4.f_8 = (vVar4.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		*(&Param0 + 272) = ADD_BLIP_FOR_COORD(&vVar4, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(&Param0 + 272, fVar3);
	}
	SET_BLIP_NAME(&Param0 + 272, &Param0 + 4);
	SET_BLIP_COLOR(&Param0 + 272, 0,58f, 0,35f, 0,72f, fVar2);
	SET_BLIP_PRIORITY(&Param0 + 272, 3);
	return;
}

int Function_179(int iParam0) //Position: 0xA558 / 42328
{
	if ((Global_116927[iParam06] != 3 || Global_116927[iParam06] != 4) || Global_116927[iParam06] != 5)
	{
		return 1;
	}
	return 0;
}

int Function_180(int iParam0) //Position: 0xA584 / 42372
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_181(int iParam0) //Position: 0xA599 / 42393
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_182(struct<237> Param0) //Position: 0xA5AE / 42414
{
	if (!Param0.f_236)
	{
		if (Function_38())
		{
			if (((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1) && GET_ACTOR_FACTION(&Param0 + 312) == 20) && GET_ACTOR_FACTION(&Param0 + 312) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(&Param0 + 312, &Global_54076) || AI_IS_HOSTILE_OR_ENEMY(&Param0 + 312, &Global_54076)) || GET_LAST_ATTACKER(&Param0 + 312) != &Global_54076) || IS_ACTOR_HANDSUP(&Param0 + 312)) || IS_PLAYER_TARGETTING_ACTOR(false, &Param0 + 312, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

void Function_183(struct<233> Param0) //Position: 0xA67D / 42621
{
	struct<5> Var0;
	
	Var0 = iParam1;
	Var0.f_4 = 4;
	if (!IS_SCRIPT_VALID(&Param0 + 296))
	{
		*(&Param0 + 296) = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&Param0 + 112, 4), &Var0, 2, 0);
	}
	if (!IS_SCRIPT_VALID(&Param0 + 296))
	{
		PRINTSTRING("Quest launch FAIL: ");
		PRINTSTRING(GET_ASSET_NAME(&Param0 + 112, 4));
		PRINTNL();
		LOG_ERROR("Failed to launch quest script! Check spew!");
	}
	else
	{
		Global_116927[iParam16] = 5;
		if (!(IS_JOURNAL_ENTRY_IN_LIST(Param0.f_224, 0) || Param0.f_232))
		{
			Param0.f_224 = CREATE_JOURNAL_ENTRY(&Param0 + 4, 2, &Param0 + 36, "Mission_Strangers");
			PREPEND_JOURNAL_ENTRY(Param0.f_224, false);
		}
	}
	return;
}

int Function_184(int iParam0, bool bParam1, bool bParam2) //Position: 0xA769 / 42857
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_187(&iParam0))
	{
		return 1;
	}
	if (Function_186(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_185())
	{
		return 1;
	}
	return 0;
}

bool Function_185() //Position: 0xA82D / 43053
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_186(int iParam0) //Position: 0xA844 / 43076
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_187(int iParam0) //Position: 0xA850 / 43088
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

int Function_188(int iParam0) //Position: 0xA85F / 43103
{
	if (Global_116927[iParam06] == 3)
	{
		return 1;
	}
	return 0;
}

int Function_189(int iParam0) //Position: 0xA874 / 43124
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

void Function_190(struct<221> Param0) //Position: 0xA889 / 43145
{
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	ENABLE_USE_CONTEXTS(1);
	Global_39922.f_88 |= 16384;
	if (IS_ACTOR_VALID(&Param0 + 312) && Param0.f_220 == 358)
	{
		SET_ACTOR_INVULNERABILITY(&Param0 + 312, false);
	}
	SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	return;
}

bool Function_191(int iParam0) //Position: 0xA8D2 / 43218
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

void Function_192(struct<57> Param0) //Position: 0xA8EE / 43246
{
	strcpy(&Param0 + 24, "MISSIONLAUNCHER", 16);
	Param0 = 68611;
	*(&Param0 + 8) = 43317;
	*(&Param0 + 16) = 43311;
	Param0.f_56 = 0;
	return;
}

void Function_193() //Position: 0xA92F / 43311
{
	return;
}

int Function_194() //Position: 0xA935 / 43317
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (!Global_6607)
	{
		return 0;
	}
	if (Function_140(0, 0, 1, 1) && !Global_6657)
	{
		return 0;
	}
	if (((((Global_6646 || Global_6647) || Function_99(2048)) || Global_6650) || Function_22(Global_99130.f_40, 1)) && !Global_6657)
	{
		return 0;
	}
	if (!Global_6633)
	{
		return 0;
	}
	if (IS_GAME_RESETTING())
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return 0;
	}
	if (!iLocal_9)
	{
		fVar0 = GET_PROFILE_TIME();
		iVar1 = Global_10963;
		while (iVar1 < (Global_6667 - 1))
		{
			if ((!Global_6622 && !Global_6626) && !Global_99146)
			{
				if ((GET_PROFILE_TIME() - fVar0) < 150.0f)
				{
					Global_10963 = iVar1;
					return 0;
				}
				if ((Global_6667[iVar128] != Global_43786 && !Global_6667[iVar128].f_168) && Global_6667[iVar128].f_180)
				{
					if (!Function_309(&Global_6667[iVar128] + 184, 4194304) || Function_309(&Global_6667[iVar128] + 184, 8388608))
					{
						Function_306(&(Global_6667[iVar128]), iVar1);
					}
				}
				if (Global_6667[iVar128].f_168)
				{
					if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
					{
						CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
						return 0;
					}
					SATCHEL_SET_ENABLED(0);
					if (!Function_125(StackVal))
					{
						Function_198(&(Global_6667[iVar128]), 0, 0, 1);
					}
					else
					{
						Function_198(&(Global_6667[iVar128]), !HUD_IS_FADED(), 0, 1);
					}
				}
			}
			else if (Global_6622)
			{
			}
			else if (Global_6626)
			{
			}
			else if (Global_99146)
			{
			}
			iVar1++;
		}
		iLocal_9 = 1;
		Global_10963 = 1;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= Global_98318)
		{
			if (!Global_6622 && !Global_6626)
			{
				if (!Global_98318[iVar228].f_168)
				{
					Function_195(&(Global_98318[iVar228]));
				}
			}
			if (Global_98318[iVar228].f_168)
			{
				Function_198(&(Global_98318[iVar228]), 0, 0, 1);
			}
			iVar2++;
		}
		iLocal_9 = 0;
	}
	return 0;
}

void Function_195(struct<197> Param0) //Position: 0xAB21 / 43809
{
	switch (Param0.f_152)
	{
		case 0x00000005:
			if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 104))
			{
				if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&Param0 + 104))
				{
					if (Function_309(&Param0 + 184, 8192))
					{
						if (Function_197() <= Param0.f_196)
						{
							Function_196("NO_LAUNCH_Player", 2,5f, 0, 2, 1, 0);
							return;
						}
					}
					Param0.f_168 = 1;
					if (IS_OBJECT_VALID(&Param0 + 64))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Param0 + 64)))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Param0 + 64));
						}
						DESTROY_OBJECT(&Param0 + 64);
					}
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 104);
				}
			}
			break;
	}
	return;
}

void Function_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xABCA / 43978
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_46(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

int Function_197() //Position: 0xAC4F / 44111
{
	return Function_27(0);
}

void Function_198(struct<197> Param0) //Position: 0xAC59 / 44121
{
	struct<4> Var0;
	
	if ((Function_305(StackVal) != 48 && !bParam2) && !Global_6624)
	{
		bParam1 = false;
	}
	if (Function_304(StackVal) == 1)
	{
		if (IS_OBJECT_VALID(&Param0 + 64))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&Param0 + 64)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Param0 + 64), false);
			}
			DESTROY_OBJECT(&Param0 + 64);
		}
	}
	if (bParam1)
	{
		if (HUD_IS_FADED())
		{
			if (Function_304(StackVal) == 1)
			{
				Global_6622 = 1;
				Global_6621 = 0;
				Function_299(&(Global_6667[Function_305(StackVal)28]));
			}
			else if (Function_304(StackVal) == 4)
			{
				Function_298(StackVal, Param0.f_196);
				Global_6626 = 1;
			}
			Function_115();
			Function_113(0, 0);
			(&Param0 + 160) = Function_201(StackVal, &Param0 + 8, bParam2, 0, &iParam3, 0);
			Param0.f_168 = 0;
			Param0.f_180 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_304(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_199(Function_305(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(&Param0 + 16) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(&Global_54076, true);
		}
	}
	else
	{
		if (Function_304(StackVal) == 1)
		{
			Global_6622 = 1;
			Global_6621 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_199(Function_305(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_299(&(Global_6667[Function_305(StackVal)28]));
		}
		else if (Function_304(StackVal) == 4)
		{
			Function_298(StackVal, Param0.f_196);
			Global_6626 = 1;
		}
		SET_ACTOR_INVULNERABILITY(&Global_54076, true);
		Function_115();
		Function_113(0, 0);
		*(&Param0 + 160) = Function_201(StackVal, &Param0 + 8, bParam2, 0, 1, 0);
		Param0.f_168 = 0;
		Param0.f_180 = 0;
	}
}

struct<16> Function_199(bool bParam0) //Position: 0xAE0C / 44556
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_200(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_6667[bParam028] + 16);
}

bool Function_200(bool bParam0) //Position: 0xAE3D / 44605
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_201(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xAE53 / 44627
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<41> Var62;
	
	if (Function_304(iParam1) == 1)
	{
		Function_113(1, 0);
	}
	else
	{
		Function_113(0, 0);
	}
	bVar1 = Function_305(iParam1);
	if (!Global_6606 || Global_6624)
	{
		if (Function_304(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_254(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_253(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_252(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_251(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_250(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_125(Function_249(iVar61)))
					{
						Function_247(Function_249(iVar61));
					}
					iVar61++;
				}
				Function_245();
				Function_244(Function_197(), 0);
				Function_243();
				if (bVar1 == 1)
				{
					Function_247(Function_249(2));
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
			PRINTINT(Function_304(iParam1));
			PRINTNL();
		}
	}
	if (Function_304(iParam1) == 1)
	{
		Function_26(18, bVar1, 0);
		Function_74(18, &Global_6667[bVar128] + 16, 0, 1);
		if (!bParam2)
		{
			Function_241(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_53524.f_188 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var68 = { StackVal, StackVal, StackVal, Function_240(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var68), 16);
	Var62.f_36 = bParam2;
	Var62.f_40 = &iParam3;
	Function_238(0);
	SATCHEL_SET_ENABLED(1);
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	Global_6621 = 0;
	SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	if (((IS_OBJECT_VALID(&Global_99130 + 32) || Function_22(Global_99130.f_40, 2)) || Function_22(Global_99130.f_40, 1)) || Function_22(Global_99130.f_40, 65536))
	{
		Function_36(&Global_99130 + 40, 2);
		Function_36(&Global_99130 + 40, 1);
		Function_36(&Global_99130 + 40, 65536);
		Function_47(&Global_99130 + 40, 4);
	}
	if (Function_304(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_6657 = 0;
	uVar72 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(&uParam0, 4), &Var62, 12, 0);
	if (IS_SCRIPT_VALID(&uVar72))
	{
		if (Function_125(iParam1))
		{
			if (&bParam5)
			{
				Function_237(iParam1, &iParam4);
			}
			else if (Function_236(iParam1) == 1)
			{
				Function_235(iParam1, &iParam4);
			}
			else
			{
				Function_207(iParam1, &iParam4);
			}
		}
		Function_204(2);
		Function_202((15 - Function_203(105)));
		return &uVar72;
	}
	return "";
}

void Function_202(int iParam0) //Position: 0xB199 / 45465
{
	(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_203(105)), 0);
	return;
}

int Function_203(int iParam0) //Position: 0xB1BC / 45500
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_204(int iParam0) //Position: 0xB1D3 / 45523
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_206(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_206(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_206(&Global_21369 + 48);
	PRINTNL();
	Function_205(&iParam0);
	return;
}

void Function_205(int iParam0) //Position: 0xB275 / 45685
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_203(90)), 0);
	return;
}

void Function_206(int iParam0) //Position: 0xB298 / 45720
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_207(int iParam0, int iParam1) //Position: 0xB2E2 / 45794
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_125(iParam0))
	{
		Function_233();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_304(iParam0);
	if (StackVal != 2)
	{
		Function_232("DEED_START", iParam0);
	}
	Global_21684[iParam07].f_8 = StackVal + 1;
	Global_21684[iParam07].f_4 = 2;
	Global_10968 = iParam0;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_209(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_305(iParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_208(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_46(Global_10966) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

struct<24> Function_208(char* cParam0) //Position: 0xB3F3 / 46067
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

void Function_209(bool bParam0) //Position: 0xB649 / 46665
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_223();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_210();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_36(&Global_99144, 1);
		Function_36(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_210() //Position: 0xB69E / 46750
{
	Function_221();
	Function_220();
	Function_220();
	Function_219();
	Function_219();
	Function_218();
	Function_218();
	Function_217(0);
	Function_217(0);
	Function_215();
	Function_214();
	Function_213();
	Function_212();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_211();
	return;
}

void Function_211() //Position: 0xB6E9 / 46825
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_212() //Position: 0xB7EF / 47087
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_213() //Position: 0xB822 / 47138
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_214() //Position: 0xB9B5 / 47541
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_215() //Position: 0xBB6E / 47982
{
	Function_216(&Global_42918, 1, 0);
	return;
}

void Function_216(struct<2317> Param0) //Position: 0xBB7C / 47996
{
	var uVar0;
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
	
	uVar0 = Function_56();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_217(char* cParam0) //Position: 0xBD99 / 48537
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

struct<8> Function_218() //Position: 0xBE40 / 48704
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

struct<8> Function_219() //Position: 0xBEC9 / 48841
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

struct<8> Function_220() //Position: 0xBF60 / 48992
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

void Function_221() //Position: 0xBFDF / 49119
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_222(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_26(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_222(int iParam0, bool bParam1, int iParam2) //Position: 0xC01F / 49183
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_21(iParam0, bParam1, 1);
	Function_20(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_8(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_223() //Position: 0xC22B / 49707
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_38())
	{
		Function_229(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_229(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_224(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_224(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_58(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_224(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0xC2E2 / 49890
{
	int iVar0;
	
	iVar0 = Function_227(&uParam2, &fParam3);
	if (Function_226(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_47(&Global_99144, 1);
			Function_36(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_47(&Global_99144, 2);
			Function_36(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_47(&Global_99144, 2);
		Function_36(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_225();
	return StackVal, Function_225();
}

struct<8> Function_225() //Position: 0xC3DA / 50138
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_226(int iParam0) //Position: 0xC3E4 / 50148
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_227(bool bParam0, bool bParam1) //Position: 0xC3FA / 50170
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_228(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_228(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_226(iVar0) && !&bParam1)
	{
		iVar0 = Function_227(&bParam0, 1);
	}
	return iVar0;
}

float Function_228(struct<2> Param0, struct<2> Param2) //Position: 0xC4C6 / 50374
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_229(float fParam0, int iParam1) //Position: 0xC4E3 / 50403
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_231(&Global_54076, &Var3);
	if (!Function_230(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_230(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_47(&Global_99144, 2);
	Function_36(&Global_99144, 1);
	iParam1 = 0;
	if (Function_58(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_230(int iParam0) //Position: 0xCD0F / 52495
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_22(bVar0, 0x1000000) || Function_22(bVar0, 0x2000000)) || Function_22(bVar0, 0x4000000)) || !Function_22(bVar0, 0x10000000));
}

void Function_231(var uParam0, int iParam1) //Position: 0xCD4A / 52554
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_232(var uParam0, bool bParam1) //Position: 0xCD59 / 52569
{
	struct<4> Var0;
	
	if (!Function_125(bParam1))
	{
		return;
	}
	switch (Function_304(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_240(Function_305(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_304(bParam1), Function_305(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_304(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_304(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_304(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_304(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_304(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_233() //Position: 0xCE83 / 52867
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_234(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_234(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD0CA / 53450
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_235(int iParam0, int iParam1) //Position: 0xD0F6 / 53494
{
	int iVar0;
	
	if (!Function_125(iParam0))
	{
		Function_233();
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
	iVar0 = Function_304(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_209(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_305(iParam0);
	}
	Global_6619 = 1;
	return;
}

int Function_236(int iParam0) //Position: 0xD15E / 53598
{
	if (!Function_125(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_237(int iParam0, int iParam1) //Position: 0xD178 / 53624
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_125(iParam0))
	{
		Function_233();
		return;
	}
	iVar0 = Function_304(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_209(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_305(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_208(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_46(Global_10966) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_238(bool bParam0) //Position: 0xD21F / 53791
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_239();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_239() //Position: 0xD2AE / 53934
{
	int iVar0;
	
	Global_41176 = Function_91(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

struct<16> Function_240(bool bParam0) //Position: 0xD2FC / 54012
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

void Function_241(int iParam0) //Position: 0xD336 / 54070
{
	int iVar0;
	
	iVar0 = Function_242(iParam0);
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	Global_53524.f_192 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_53524.f_172 = Function_27(27);
			Global_53524.f_168 = Function_27(42);
			Global_53524.f_176 = CEIL(Function_19(49));
			Global_53524.f_180 = Function_27(49);
			break;
		
		case 0x00000002:
			Global_53524.f_168 = Function_27(355);
			break;
		
		case 0x00000001:
			Global_53524.f_176 = CEIL(Function_19(49));
			Global_53524.f_180 = Function_27(49);
			break;
	}
	return;
}

int Function_242(int iParam0) //Position: 0xD3C0 / 54208
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

void Function_243() //Position: 0xD455 / 54357
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_244(bool bParam0, bool bParam1) //Position: 0xD492 / 54418
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
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_27(0));
	return 1;
}

void Function_245() //Position: 0xD523 / 54563
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
	Function_246();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_246() //Position: 0xD6A6 / 54950
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_6606)
	{
		return;
	}
	uVar2 = Function_56();
	if (!IS_ACTOR_VALID(&uVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		bVar3 = GET_AMMO_ENUM(bVar1);
		if (bVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(&uVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_247(int iParam0) //Position: 0xD77F / 55167
{
	Function_248(iParam0);
	return;
}

void Function_248(int iParam0) //Position: 0xD78A / 55178
{
	int iVar0;
	
	if (!Function_125(iParam0))
	{
		Function_233();
		return;
	}
	iVar0 = Function_304(iParam0);
	Global_21684[iParam07].f_4 = 0;
	return;
}

int Function_249(int iParam0) //Position: 0xD7AE / 55214
{
	if (!Function_200(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_250(int iParam0, int iParam1) //Position: 0xD7C8 / 55240
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

void Function_251(int iParam0, int iParam1) //Position: 0xD7E6 / 55270
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_39266[iParam0] = &iParam1;
	return;
}

void Function_252(int iParam0, int iParam1) //Position: 0xD804 / 55300
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_39258[iParam0] = &iParam1;
	return;
}

void Function_253(int iParam0, int iParam1) //Position: 0xD821 / 55329
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_39248[iParam0] = &iParam1;
	return;
}

void Function_254(int iParam0, int[] iParam1, var uParam2, bool bParam3) //Position: 0xD83E / 55358
{
	if (Global_6606 && !Global_6624)
	{
		return;
	}
	if (!&bParam3)
	{
		if (!Function_38())
		{
			Function_258(iParam0, &uParam2, 0);
		}
		else
		{
			Function_255(iParam0, &uParam2, 0);
		}
		iParam1[iParam0] = 1;
	}
	if (Global_6667[iParam028].f_188 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_188])
		{
			Function_254(Global_6667[iParam028].f_188, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_192 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_192])
		{
			Function_254(Global_6667[iParam028].f_192, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_196 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_196])
		{
			Function_254(Global_6667[iParam028].f_196, &iParam1, &uParam2, 0);
		}
	}
	if (Global_6667[iParam028].f_200 != 4294967295)
	{
		if (!iParam1[Global_6667[iParam028].f_200])
		{
			Function_254(Global_6667[iParam028].f_200, &iParam1, &uParam2, 0);
		}
	}
}

void Function_255(bool bParam0, var uParam1, bool bParam2) //Position: 0xD947 / 55623
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_200(bParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != bParam0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0x00000001:
			Function_256(21, &bParam2, 0);
			Function_256(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_240(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_256(bool bParam0, bool bParam1, int iParam2) //Position: 0xD9E9 / 55785
{
	if (!Function_257(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_56(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_56(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_56(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_257(int iParam0) //Position: 0xDA43 / 55875
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_258(bool bParam0, var uParam1, bool bParam2) //Position: 0xDA55 / 55893
{
	struct<4> Var0;
	
	if (!Function_200(bParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != bParam0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0x00000001:
			Function_256(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_295(Global_46760[0]);
			Function_295(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_293(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_295(Global_46816[0]);
			Function_285(0);
			Function_283(2, 1);
			Function_283(0, 1);
			Function_283(1, 1);
			break;
		
		case 0x00000003:
			Function_295(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_295(Global_46816[0]);
			Function_295(Global_46760[0]);
			Function_281(0, 1);
			Function_281(15, 1);
			Function_281(9, 1);
			Function_281(12, 1);
			Function_281(16, 1);
			Function_283(3, 1);
			break;
		
		case 0x00000005:
			Function_295(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_293(21, &bParam2, 4);
			Function_295(Global_46816[0]);
			Function_283(39, 1);
			break;
		
		case 0x00000007:
			Function_295(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_295(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_39())
				{
					if (!Function_280(4))
					{
						Function_272(4, 0, 0, 1, 0);
					}
				}
			}
			Function_295(Global_46760[0]);
			Function_295(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_295(Global_46760[0]);
			Function_295(Global_46816[2]);
			Function_271(&(Global_43791[Global_46816[2]]), 32768);
			Function_270(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_293(9, &bParam2, 4);
			Function_295(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_295(Global_46760[0]);
			Function_295(Global_46796[0]);
			Function_271(&(Global_43791[Global_46796[0]]), 32768);
			Function_270(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_295(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_295(Global_46760[0]);
			Function_295(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_295(Global_46760[1]);
			Function_295(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_295(Global_46838[0]);
			Function_295(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_295(Global_46796[5]);
			Function_295(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_293(21, &bParam2, 4);
			Function_295(Global_46760[4]);
			Function_295(Global_46796[4]);
			Function_269(&Global_119935, 0x2000000);
			Function_269(&Global_119935, 0x4000000);
			Function_269(&Global_119935, 4096);
			Function_269(&Global_119935, 8);
			Function_269(&Global_119935, 8388608);
			Function_269(&Global_119935, 524288);
			Function_269(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_295(Global_46760[4]);
			Function_295(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_270(&(Global_43791[Global_46760[4]]), 256);
			Function_295(Global_46760[4]);
			Function_295(Global_46796[0]);
			Function_271(&(Global_43791[Global_46796[0]]), 32768);
			Function_270(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_295(Global_46760[0]);
			Function_295(Global_46760[5]);
			Function_293(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_295(Global_46796[3]);
			Function_271(&(Global_43791[Global_46796[3]]), 32768);
			Function_270(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_293(9, &bParam2, 4);
			Function_295(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_271(&(Global_43791[Global_46838[1]]), 32768);
			Function_295(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_293(12, &bParam2, 4);
			Function_270(&(Global_43791[Global_46838[1]]), 256);
			Function_295(Global_46816[3]);
			Function_295(Global_46866[0]);
			Function_295(Global_46850[0]);
			Function_285(4);
			Function_281(13, 1);
			Function_281(1, 1);
			Function_281(18, 1);
			Function_283(34, 1);
			Function_283(44, 1);
			Function_283(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_293(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_295(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_295(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_295(Global_46866[0]);
			Function_295(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_295(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_295(Global_46850[0]);
			Function_295(Global_46866[0]);
			Function_295(Global_46866[1]);
			Function_295(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_293(23, &bParam2, 3);
			Function_281(23, 1);
			Function_295(Global_46850[0]);
			Function_295(Global_46850[2]);
			Function_271(&(Global_43791[Global_46850[2]]), 32768);
			Function_270(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_293(19, &bParam2, 4);
			Function_295(Global_46850[0]);
			Function_295(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_293(24, &bParam2, 3);
			Function_281(24, 1);
			Function_295(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_295(Global_46850[0]);
			Function_295(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_295(Global_46866[12]);
			Function_295(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_295(Global_46866[12]);
			Function_295(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_293(25, &bParam2, 10);
			Function_295(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_295(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_295(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_293(13, &bParam2, 4);
			Function_295(Global_46866[2]);
			Function_295(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_280(8))
				{
					Function_272(8, 0, 0, 1, 0);
				}
			}
			Function_295(Global_46850[0]);
			Function_285(9);
			Function_281(7, 1);
			Function_281(11, 1);
			Function_281(3, 1);
			Function_281(20, 1);
			Function_283(57, 1);
			break;
		
		case 0x0000002A:
			Function_293(2, &bParam2, 4);
			Function_295(Global_46914[0]);
			Function_295(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_295(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_295(Global_46914[0]);
			Function_295(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_295(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_295(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_295(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_293(17, &bParam2, 4);
			Function_295(Global_46926[0]);
			Function_295(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_267(15))
				{
					Function_262(15, 0, 1);
				}
			}
			Function_261(2, 26);
			Function_270(&(Global_43791[Global_46914[1]]), 256);
			Function_285(11);
			Function_295(Global_46914[1]);
			Function_295(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_295(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_295(Global_46914[1]);
			Function_295(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_295(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_295(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_295(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_295(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_295(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_295(Global_46914[1]);
			Function_259(11);
			Function_285(12);
			Global_26200[1114].f_40 = 0;
			Function_283(56, 1);
			if (!&bParam2)
			{
				if (!Function_280(9))
				{
					Function_272(9, 0, 0, 0, 0);
				}
				if (!Function_280(10))
				{
					Function_272(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_240(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_259(int iParam0) //Position: 0xE370 / 58224
{
	var uVar0;
	
	if (!Function_226(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_260(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_260(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_155(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_260(var uParam0, int iParam1) //Position: 0xE4ED / 58605
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

void Function_261(int iParam0, int iParam1) //Position: 0xE548 / 58696
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

void Function_262(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE5B2 / 58802
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_266(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_267(bParam0))
	{
		if (!Function_280(bParam0))
		{
			Function_272(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_6(457, 1, 0, 0);
		Function_265(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_140(0, 0, 1, 1))
			{
				Function_209(1);
				Function_264(1, 0);
			}
			else
			{
				Function_263();
			}
		}
	}
	return;
}

void Function_263() //Position: 0xE753 / 59219
{
	return;
}

void Function_264(int iParam0, int iParam1) //Position: 0xE759 / 59225
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_265(bool bParam0, int iParam1) //Position: 0xE798 / 59288
{
	if (!Function_266(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_266(int iParam0) //Position: 0xE7ED / 59373
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_267(int iParam0) //Position: 0xE803 / 59395
{
	if (!Function_266(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_268(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_268(int iParam0, int iParam1) //Position: 0xE854 / 59476
{
	int iVar0;
	
	if (!Function_266(iParam0))
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

void Function_269(var uParam0, int iParam1) //Position: 0xE881 / 59521
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_270(var uParam0, int iParam1) //Position: 0xE892 / 59538
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_271(var uParam0, int iParam1) //Position: 0xE8AC / 59564
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_272(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE8BD / 59581
{
	char* cVar0[32];
	
	if (!Function_266(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_191(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_280(bParam0))
	{
		Function_6(456, 1, 0, 0);
		Function_265(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_140(0, 0, 1, 1))
			{
				Function_209(1);
				Function_264(1, 5);
			}
			else
			{
				Function_263();
			}
		}
		Function_274(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_273() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_273() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_45(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_38())
		{
			if (!Function_37(Global_119934, 2))
			{
				Function_31(&Global_54076, 2, 1, 0);
			}
		}
	}
}

bool Function_273() //Position: 0xEA19 / 59929
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_274(bool bParam0) //Position: 0xEA46 / 59974
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_278(bParam0, Function_279(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_278(bParam0, Function_279(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_277(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_276(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_275(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_275(int iParam0) //Position: 0xEBF6 / 60406
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_266(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_276(bool bParam0, bool bParam1) //Position: 0xEC4D / 60493
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_277(int iParam0) //Position: 0xEC72 / 60530
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_266(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

bool Function_278(bool bParam0, int iParam1) //Position: 0xECC8 / 60616
{
	int iVar0;
	
	if (!Function_266(bParam0))
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

int Function_279(bool bParam0) //Position: 0xED27 / 60711
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_280(int iParam0) //Position: 0xED33 / 60723
{
	if (!Function_266(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_268(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int Function_281(int iParam0, int iParam1) //Position: 0xED85 / 60805
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_282(iParam0, iParam1);
	Function_31(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_282(int iParam0, int iParam1) //Position: 0xEDFA / 60922
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_283(int iParam0, int iParam1) //Position: 0xEE57 / 61015
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_284(iParam0, iParam1);
	Function_31(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_284(int iParam0, int iParam1) //Position: 0xEECA / 61130
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_285(int iParam0) //Position: 0xEF25 / 61221
{
	var uVar0;
	var uVar1;
	
	if (!Function_226(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_292(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_292(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_6(468, 1, 0, 0);
			Function_261(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_45("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_155(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_272(14, 1, 0, 0, 0);
				Function_286(14, 1, 0, 0, 0);
			}
			if (!Function_140(0, 0, 1, 1))
			{
				Function_209(1);
				Function_264(1, 6);
			}
			else
			{
				Function_263();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_45("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_6(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_261(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_286(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0xF1E5 / 61925
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_266(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_191(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_268(bParam0, 2))
	{
		Function_6(456, 1, 0, 0);
		Function_265(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_45(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_278(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_265(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_140(0, 0, 1, 1))
			{
				Function_209(1);
				Function_264(1, 0);
			}
			else
			{
				Function_263();
			}
		}
		Function_274(bParam0);
		if (StackVal && !Function_22(((((!Function_273() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_22((((Function_273() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_38())
		{
			if (!Function_37(Global_119934, 2))
			{
				Function_31(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_288();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_287(3, bParam1);
				break;
			
			case 0x00000005:
				Function_287(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_287(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_287(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_287(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_287(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_261(2, 24);
				break;
			
			case 0x00000003:
				Function_261(2, 25);
				break;
			
			case 0x0000000F:
				Function_261(2, 26);
				break;
			
			case 0x0000000D:
				Function_261(2, 27);
				break;
			
			case 0x0000000E:
				Function_261(2, 28);
				break;
			}
	}
}

void Function_287(int iParam0, bool bParam1) //Position: 0xF484 / 62596
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_288() //Position: 0xF4F3 / 62707
{
	if (Function_266(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_291(Global_42827);
			*(&Global_42827 + 8) = Function_289(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_291(Global_42827);
			*(&Global_42827 + 8) = Function_289(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_289(int iParam0, int iParam1) //Position: 0xF573 / 62835
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_290(6, 0) || Function_290(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_181(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_290(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_181(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_181(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_181(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_181(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_290(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_181(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_181(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_181(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_181(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_181(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_181(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_181(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_290(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_181(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_290(6, 0) && Function_181(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_181(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_290(9, 0) && Function_181(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_181(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_290(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_58(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_58(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_58(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

bool Function_290(int iParam0, bool bParam1) //Position: 0x101D7 / 66007
{
	int iVar0;
	
	iVar0 = Function_249(iParam0);
	if (!Function_127(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_291(int iParam0) //Position: 0x10215 / 66069
{
	int iVar0;
	int iVar1;
	
	if (!Function_266(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_292(var uParam0, int iParam1) //Position: 0x10264 / 66148
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_293(bool bParam0, bool bParam1, int iParam2) //Position: 0x102BC / 66236
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_294(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_256(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_294(int iParam0, int iParam1) //Position: 0x1032F / 66351
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_295(int iParam0) //Position: 0x10343 / 66371
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_297(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_271(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_6(473, 1, 0, 0);
		iVar0 = Function_296(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_6(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_6(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_6(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_261(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_261(7, 30);
	}
	if (Function_18(473) <= Function_19(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_296(int iParam0) //Position: 0x10434 / 66612
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_162(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_297(var uParam0, int iParam1) //Position: 0x1048C / 66700
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_298(int iParam0, bool bParam1) //Position: 0x104A9 / 66729
{
	if (!Function_125(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = bParam1;
	return;
}

void Function_299(struct<185> Param0) //Position: 0x104C4 / 66756
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_300(4, 0, 0);
		}
	}
	return;
}

void Function_300(bool bParam0, var uParam1, int iParam2) //Position: 0x1052F / 66863
{
	var uVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_301(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_301(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10619 / 67097
{
	int iVar0;
	
	Function_303(bParam0);
	Function_206(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_302();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_302() //Position: 0x10798 / 67480
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_303(int iParam0) //Position: 0x107A4 / 67492
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

int Function_304(bool bParam0) //Position: 0x107EA / 67562
{
	if (!Function_127(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

bool Function_305(int iParam0) //Position: 0x10805 / 67589
{
	if (!Function_127(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

void Function_306(struct<169> Param0) //Position: 0x10825 / 67621
{
	switch (Param0.f_152)
	{
		case 0x00000001:
			if (!Function_290(iParam1, 0))
			{
				if (Function_308(&Param0))
				{
					if (!Global_6624)
					{
						Param0.f_168 = 1;
					}
					return;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_OBJECT_VALID(&Param0 + 72))
			{
				if (Function_135(&Param0 + 72, 1, 1, 0, 1, 0))
				{
					Global_6621 = 1;
					Param0.f_168 = 1;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&Param0 + 80))
			{
				if (Function_307(&Param0 + 80, &Global_54076, 1, 1, 0, 1, 0))
				{
					Global_6621 = 1;
					Param0.f_168 = 1;
				}
			}
			break;
	}
	return;
}

bool Function_307(float fParam0, float fParam1, float fParam2, var uParam3, bool bParam4, bool bParam5, float fParam6) //Position: 0x108C3 / 67779
{
	bool bVar0;
	int iVar1;
	var uVar3;
	
	if (!IS_VOLUME_VALID(&fParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (!IS_ACTOR_VALID(&fParam1))
	{
		LOG_ERROR("Invalid actor given to UPDATE_VOLUME_AND_STOP_ACTOR");
		return 0;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&fParam1))
	{
		return 0;
	}
	if (&bParam5)
	{
		if (DECOR_CHECK_EXIST(&fParam0, "gaveDismount"))
		{
			if (!IS_ACTOR_RIDING(&fParam1) || ((fParam6 && GET_TASK_STATUS(GET_ACTOR_FROM_OBJECT(&fParam1), 12) != 1) && (GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&fParam0, "gaveDismount")) < 0,25f))
			{
				DECOR_REMOVE(&fParam0, "gaveDismount");
				return 1;
			}
			return 0;
		}
	}
	if (IS_ACTOR_IN_VOLUME(&fParam1, &fParam0))
	{
		if (IS_ACTOR_PLAYER(&fParam1))
		{
			SET_PLAYER_CONTROL(0, 0, &fParam2, &fParam2);
		}
		if (IS_PLAYER_DEADEYE(0) && uParam3)
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam4)
		{
			Function_138(&fParam1, 0);
		}
		else if (IS_ACTOR_RIDING(&fParam1))
		{
			if (Function_137(&fParam1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&fParam1)))
			{
				SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&fParam1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
			}
			RESET_ACTOR_GAITS(GET_MOUNT(&fParam1), 1);
		}
		else
		{
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
		}
		if (bParam5 && IS_ACTOR_RIDING(&fParam1))
		{
			bVar0 = TASK_SEQUENCE_OPEN();
			if (Function_137(&fParam1, 0) < 12.0f)
			{
				iVar1 = Vector(0.0f, 0.0f, -4.0f);
				UNK_0xB89CC342(&fParam1, &iVar1, &uVar3);
				Function_136(&uVar3, &iVar1);
			}
			else
			{
				iVar1 = Vector(0.0f, 0.0f, -2.0f);
				UNK_0xB89CC342(&fParam1, &iVar1, &uVar3);
				Function_136(&uVar3, &iVar1);
			}
			TASK_DISMOUNT(false, 1);
			TASK_GO_TO_COORD(false, &iVar1, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&Global_54076, bVar0);
			TASK_SEQUENCE_RELEASE(bVar0, 1);
			DECOR_SET_FLOAT(&fParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
			Global_6657 = 1;
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_308(struct<201> Param0) //Position: 0x10B41 / 68417
{
	var uVar0;
	
	if (!Param0.f_184 != 0)
	{
		uVar0 = Param0.f_184;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_290(Param0.f_188, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_290(Param0.f_192, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_290(Param0.f_196, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_290(Param0.f_200, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 1073741824 >= 0)
		{
			if (&Global_47310 == 4294967295)
			{
				return 0;
			}
			PRINTINT(&Global_47310);
			PRINTNL();
			*(&Param0 + 8) = &Global_47310;
			Global_47310 = 4294967295;
		}
	}
	return 1;
}

bool Function_309(int iParam0, int iParam1) //Position: 0x10BE6 / 68582
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_310() //Position: 0x10C03 / 68611
{
	return;
}

void Function_311(struct<57> Param0) //Position: 0x10C09 / 68617
{
	strcpy(&Param0 + 24, "EVENT-RESPONSE", 16);
	Param0 = 99222;
	*(&Param0 + 8) = 68687;
	*(&Param0 + 16) = 68681;
	Param0.f_56 = 1;
	return;
}

void Function_312() //Position: 0x10C49 / 68681
{
	return;
}

int Function_313() //Position: 0x10C4F / 68687
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	bool bVar17;
	bool bVar18;
	struct<2> Var19;
	int iVar21;
	int iVar22;
	float fVar23;
	struct<25> Var24;
	char[] cVar49[4];
	bool bVar50;
	struct<8> Var51;
	struct<2> Var59;
	var uVar61;
	var uVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	bool bVar71;
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	iVar0 = GET_NUM_EVENT_RESPONSES();
	iVar2 = 0;
	while (iVar2 < (iVar0 - 1))
	{
		uVar14 = GET_EVENT_FOR_RESPONSE(iVar2);
		switch (GET_EVENT_RESPONSE_ID(iVar2))
		{
			case 0x00000001:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						fVar23 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&fVar23))
						{
							Function_49(&Var3, "DynamiteExplosion", GET_ACTOR_FROM_OBJECT(&fVar23), 0);
						}
						else
						{
							Function_49(&Var3, "DynamiteExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoDestroy"))
					{
						DESTROY_OBJECT(&bVar10);
					}
					else
					{
						SET_PROP_HEALTH(&bVar10, 10.0f);
						DECOR_REMOVE(&bVar10, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000002:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						fVar23 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&fVar23))
						{
							Function_49(&Var3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(&fVar23), 0);
						}
						else
						{
							Function_49(&Var3, "FireBottleExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoDestroy"))
					{
						DESTROY_OBJECT(&bVar10);
					}
					else
					{
						SET_PROP_HEALTH(&bVar10, 10.0f);
						DECOR_REMOVE(&bVar10, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000003:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						fVar23 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&fVar23))
						{
							Function_49(&Var3, "KeroseneLampExplosion", GET_ACTOR_FROM_OBJECT(&fVar23), 0);
						}
						else
						{
							Function_49(&Var3, "KeroseneLampExplosion", 0, 0);
						}
					}
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoDestroy"))
					{
						DESTROY_OBJECT(&bVar10);
					}
					else
					{
						SET_PROP_HEALTH(&bVar10, 10.0f);
						DECOR_REMOVE(&bVar10, "nnoDestroy");
					}
				}
				break;
			
			case 0x00000004:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					DESTROY_OBJECT(&bVar10);
				}
				break;
			
			case 0x00000005:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					fVar23 = GET_EVENT_PERPETRATOR(&uVar14);
					if (IS_OBJECT_VALID(&fVar23))
					{
						Function_49(&Var3, "GrenadeExplosion", GET_ACTOR_FROM_OBJECT(&fVar23), 1);
						Function_49(&Var3, "FireBottleExplosion", GET_ACTOR_FROM_OBJECT(&fVar23), 1);
					}
					else
					{
						Function_49(&Var3, "GrenadeExplosion", 0, 1);
						Function_49(&Var3, "FireBottleExplosion", 0, 1);
					}
					DESTROY_OBJECT(&bVar10);
				}
				break;
			
			case 0x00000006:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
				}
				break;
			
			case 0x00000007:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					Var3 = Vector(0.0f, 0.0f, 0.0f);
					Var5 = Vector(0.0f, 0.0f, 0.0f);
					CREATE_GRINGO_ON_OBJECT(&bVar10, "sliding_gate_gringo", "$/content/scripting/gringo/simplegringo/sliding_gate", Var3, Var5);
				}
				break;
			
			case 0x00000036:
				bVar11 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar11))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						iVar21 = GET_ACTOR_FROM_OBJECT(&bVar11);
						if (!IS_ACTOR_PLAYER(&iVar21))
						{
							ACTOR_ENABLE_VARIABLE_MESH(&iVar21, 0, false);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar21, 1, true);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar21, 2, true);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar21, 3, false);
							ACTOR_ENABLE_VARIABLE_MESH(&iVar21, 4, false);
						}
					}
				}
				break;
			
			case 0x00000008:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					Var3 = Vector(0.0f, 0.0f, 0.0f);
					Var5 = Vector(0.0f, 1.0f, 0.0f);
					bVar30 = false;
					if (DECOR_CHECK_EXIST(&bVar10, "WasDrafted"))
					{
						bVar30 = DECOR_GET_BOOL(&bVar10, "WasDrafted");
					}
					iVar31 = 1;
					if (DECOR_CHECK_EXIST(&bVar10, "nNoLooting"))
					{
						iVar31 = 0;
					}
					if (!bVar30 && iVar31)
					{
						iVar32 = Function_446(GET_CORPSE_ACTOR_ENUM(&bVar10));
						if (iVar32 == 1)
						{
							uVar16 = CREATE_GRINGO_ON_OBJECT(&bVar10, "Skin_Animal", "$/content/scripting/gringo/simplegringo/Skin_Animal", Var3, Var5);
						}
						else if (iVar32 == 2)
						{
							uVar16 = CREATE_GRINGO_ON_OBJECT(&bVar10, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", Var3, Var5);
						}
						if (IS_OBJECT_VALID(&uVar16))
						{
							if (DECOR_CHECK_EXIST(&bVar10, "NonActiveGringo"))
							{
								DECOR_REMOVE(&bVar10, "NonActiveGringo");
								GRINGO_SET_USABLE_BY_PLAYER(GET_GRINGO_FROM_OBJECT(&uVar16), "UseCase", 0);
							}
							if (DECOR_CHECK_EXIST(&bVar10, "Home02_S1_Skin1"))
							{
								DECOR_SET_OBJECT(&Global_54076, "Skin1", &uVar16);
							}
							else if (DECOR_CHECK_EXIST(&bVar10, "Home02_S1_Skin2"))
							{
								DECOR_SET_OBJECT(&Global_54076, "Skin2", &uVar16);
							}
							else if (DECOR_CHECK_EXIST(&bVar10, "Home02_S1_Skin3"))
							{
								DECOR_SET_OBJECT(&Global_54076, "Skin3", &uVar16);
							}
							else if (DECOR_CHECK_EXIST(&bVar10, "Home02_S1_Skin4"))
							{
								DECOR_SET_OBJECT(&Global_54076, "Skin4", &uVar16);
							}
							if (DECOR_CHECK_EXIST(&bVar10, "Skinning_CreateBlip"))
							{
								ADD_BLIP_FOR_OBJECT(&uVar16, 330, 0.0f, 3, 0);
								DECOR_REMOVE(&bVar10, "Skinning_CreateBlip");
							}
							if (Function_191(6))
							{
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uVar16)))
								{
									uVar33 = ADD_BLIP_FOR_OBJECT(&uVar16, 456, 0.0f, 0, 0);
									SET_BLIP_MAX_DISTANCE(&uVar33, 0,5f);
									UNK_0x1E98AFEC(&uVar33, 1);
									SET_BLIP_SCALE(&uVar33, 0,6f);
									SET_BLIP_COLOR(&uVar33, 0,35f, 0,35f, 0,35f, 0,65f);
								}
							}
							if (DECOR_CHECK_EXIST(&bVar10, "skinning_objSet"))
							{
								ADD_OBJECT_TO_OBJECTSET(&uVar16, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(&bVar10, "skinning_objSet")));
							}
						}
					}
				}
				break;
			
			case 0x00000009:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (!DECOR_CHECK_EXIST(&bVar10, "nNoLooting"))
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 1.0f, 0.0f);
						if (Function_446(GET_CORPSE_ACTOR_ENUM(&bVar10)) == 2)
						{
							uVar34 = CREATE_GRINGO_ON_OBJECT(&bVar10, "Pluck_Feather", "$/content/scripting/gringo/simplegringo/Pluck_Feather", Var3, Var5);
							if (Function_191(6))
							{
								if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uVar34)))
								{
									uVar35 = ADD_BLIP_FOR_OBJECT(&uVar34, 456, 0.0f, 0, 0);
									SET_BLIP_MAX_DISTANCE(&uVar35, 0,5f);
									UNK_0x1E98AFEC(&uVar35, 1);
									SET_BLIP_SCALE(&uVar35, 0,6f);
									SET_BLIP_COLOR(&uVar35, 0,35f, 0,35f, 0,35f, 0,65f);
								}
							}
						}
					}
					else
					{
						DECOR_REMOVE(&bVar10, "nNoLooting");
					}
				}
				break;
			
			case 0x0000000A:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					bVar36 = false;
					if (DECOR_CHECK_EXIST(&bVar10, "corpse_loot_gringo"))
					{
						if (DECOR_GET_BOOL(&bVar10, "corpse_loot_gringo") == 1)
						{
							bVar36 = true;
						}
						DECOR_REMOVE(&bVar10, "corpse_loot_gringo");
					}
					else
					{
						bVar36 = true;
					}
					if (DECOR_CHECK_EXIST(&bVar10, "ReturnCorpse"))
					{
						ADD_OBJECT_TO_OBJECTSET(&bVar10, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(&bVar10, "ReturnCorpse")));
					}
					if (bVar36)
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 0.0f, 0.0f);
						iVar37 = 0;
						uVar38 = Vector(0.0f, 0.0f, 0.0f);
						uVar40 = Vector(0.0f, 0.0f, 0.0f);
						uVar42 = Vector(0.0f, 0.0f, 0.0f);
						uVar44 = Vector(0.0f, 0.0f, 0.0f);
						if (!DECOR_CHECK_EXIST(&bVar10, "NoEating"))
						{
							if (DECOR_CHECK_EXIST(&bVar10, "AddCoyoteEatingToCorpse"))
							{
								DECOR_REMOVE(&bVar10, "AddCoyoteEatingToCorpse");
								PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar37, &uVar38, &uVar40, &uVar42, &uVar44);
								uVar46 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_9(), "coyote_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								DECOR_SET_OBJECT(&uVar46, "GringoTarg", &bVar10);
							}
							else if (DECOR_CHECK_EXIST(&bVar10, "AddBearEatingToCorpse"))
							{
								DECOR_REMOVE(&bVar10, "AddBearEatingToCorpse");
								PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar37, &uVar38, &uVar40, &uVar42, &uVar44);
								uVar46 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_9(), "bear_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								DECOR_SET_OBJECT(&uVar46, "GringoTarg", &bVar10);
							}
							else if (DECOR_CHECK_EXIST(&bVar10, "AddWolfEatingToCorpse"))
							{
								DECOR_REMOVE(&bVar10, "AddWolfEatingToCorpse");
								PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar37, &uVar38, &uVar40, &uVar42, &uVar44);
								uVar46 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_9(), "wolf_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								DECOR_SET_OBJECT(&uVar46, "GringoTarg", &bVar10);
							}
							else if (DECOR_CHECK_EXIST(&bVar10, "AddCougarEatingToCorpse"))
							{
								DECOR_REMOVE(&bVar10, "AddCougarEatingToCorpse");
								PREPARE_CORPSE_FOR_ANIMAL_CONSUMPTION(&bVar10, &iVar37, &uVar38, &uVar40, &uVar42, &uVar44);
								uVar46 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, Function_9(), "cougar_eating", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								DECOR_SET_OBJECT(&uVar46, "GringoTarg", &bVar10);
							}
						}
						else
						{
							DECOR_REMOVE(&bVar10, "NoEating");
						}
						if (Function_191(6))
						{
							if (!DECOR_CHECK_EXIST(&bVar10, "nNoLooting"))
							{
								uVar15 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &Global_10996, Function_9(), "Loot_Corpse", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
								ATTACH_OBJECTS(StackVal, StackVal, &uVar15, &bVar10, "pelvis", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
								GIVE_OBJECT_TO_LAYOUT(&uVar15, &bVar10);
								GRINGO_SET_TARGET_OBJECT(GET_GRINGO_FROM_OBJECT(&uVar15), &bVar10, 1);
								if (DECOR_CHECK_EXIST(&bVar10, "LootCorpse_CreateBlip"))
								{
									if (!DECOR_CHECK_EXIST(&bVar10, "LootCorpse_WhichBlip"))
									{
										ADD_BLIP_FOR_OBJECT(&uVar15, 325, 0.0f, 2, 0);
									}
									else
									{
										ADD_BLIP_FOR_OBJECT(&uVar15, DECOR_GET_INT(&bVar10, "LootCorpse_WhichBlip"), 0.0f, 2, 0);
										DECOR_REMOVE(&bVar10, "LootCorpse_WhichBlip");
									}
									DECOR_REMOVE(&bVar10, "LootCorpse_CreateBlip");
								}
								else
								{
									uVar47 = ADD_BLIP_FOR_OBJECT(&uVar15, 456, 0.0f, 0, 0);
									SET_BLIP_MAX_DISTANCE(&uVar47, 0,5f);
									UNK_0x1E98AFEC(&uVar47, 1);
									SET_BLIP_SCALE(&uVar47, 0,6f);
									SET_BLIP_COLOR(&uVar47, 0,35f, 0,35f, 0,35f, 0,65f);
								}
								if (DECOR_CHECK_EXIST(&bVar10, "lootCorpse_objSet"))
								{
									ADD_OBJECT_TO_OBJECTSET(&uVar15, GET_OBJECTSET_FROM_OBJECT(DECOR_GET_OBJECT(&bVar10, "lootCorpse_objSet")));
								}
							}
							else
							{
								DECOR_REMOVE(&bVar10, "nNoLooting");
							}
						}
					}
				}
				break;
			
			case 0x00000038:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					iVar48 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar14));
					cVar49 = GET_ACTOR_FROM_OBJECT(&bVar10);
					if (IS_ACTOR_VALID(&cVar49))
					{
						bVar50 = GET_ACTOR_ENUM(&cVar49);
						if (bVar50 <= 976 && bVar50 >= 1007)
						{
							if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
							{
								if (&bVar10 == DECOR_GET_OBJECT(&Global_54076, "HorseStolen"))
								{
									DECOR_SET_FLOAT(&Global_54076, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
								}
							}
							if (&cVar49 == &Global_21369 + 72)
							{
								DECOR_SET_BOOL(&Global_54076, "TriggerNewHorse", true);
							}
						}
						if (&bVar10 == GET_OBJECT_FROM_ACTOR(&Global_54076) && &bVar10 == GET_OBJECT_FROM_ACTOR(GET_MOUNT(&Global_54076)))
						{
							if (IS_ACTOR_VALID(&iVar48))
							{
								if (GET_ACTOR_ENUM(&iVar48) <= 1155 && GET_ACTOR_ENUM(&iVar48) >= 1176)
								{
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar49, Vector(0,1f, 1,1f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar49, Vector(-0,1f, 1,1f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar49, Vector(0.0f, 1,3f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar49, Vector(0.0f, 1,2f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar49, Vector(-0,1f, 1,25f, -0,1f), 0, 1, 0);
									ADD_BLOOD_TO_ACTOR(StackVal, &cVar49, Vector(0.0f, 1,1f, -0,1f), 0, 1, 0);
									if (DECOR_CHECK_EXIST(&bVar10, "LastCarrierPlayer"))
									{
										if (!IS_ACTOR_MALE(&cVar49))
										{
											if (CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &bVar10, 1.0f, 75.0f, 0, 1, 0))
											{
												if (!HAS_ACHIEVEMENT_BEEN_PASSED(20))
												{
													AWARD_ACHIEVEMENT(20);
												}
											}
										}
									}
									if (Function_137(&iVar48, 0) <= 7,25f)
									{
										Var51 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_168("HitByTrain_FX") };
										Function_94(&bVar10);
										Var59 = Function_94(&bVar10);
										if (!UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&Global_46715, &Var51, "script_train_squash_ped", Var59), Vector(0.0f, 0.0f, 0.0f)))
										{
										}
										if (DECOR_CHECK_EXIST(&bVar10, "CrimeHoldupBadguy"))
										{
											DECOR_SET_BOOL(&Global_54076, "CHBadguy_Gone", true);
										}
										DESTROY_OBJECT(&bVar10);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x0000000B:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 0.0f, 0.0f);
						if (IS_ACTOR_VALID(&uVar8) && IS_ACTOR_PLAYER(&uVar8))
						{
							AI_DONT_HARM_ACTOR(&uVar8);
						}
						uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						ATTACH_OBJECTS(StackVal, StackVal, &uVar13, &bVar10, "spine00", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
					}
				}
				break;
			
			case 0x00000034:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
				if (IS_OBJECT_VALID(&bVar10) && 1)
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 0.0f, 0.0f);
						if (IS_ACTOR_VALID(&uVar8) && IS_ACTOR_PLAYER(&uVar8))
						{
							AI_DONT_HARM_ACTOR(&uVar8);
						}
					}
				}
				break;
			
			case 0x00000027:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (GET_OBJECT_TYPE(&bVar10) == 15)
				{
					if (GET_ACTOR_FROM_OBJECT(&bVar10) == &Global_54076)
					{
						DECOR_SET_BOOL(&bVar10, "coplasso", true);
					}
				}
				break;
			
			case 0x0000000C:
				PRINTSTRING("Duong thinks this should happen");
				PRINTNL();
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup")))
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 0.0f, 0.0f);
						uVar61 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, "Hogtie_Pickup", "$/content/scripting/gringo/simplegringo/hogtie_pickup", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						DECOR_SET_OBJECT(&bVar10, "HogtiedGringoAttached", &uVar61);
					}
				}
				fVar23 = GET_EVENT_PERPETRATOR(&uVar14);
				if (IS_OBJECT_VALID(&fVar23))
				{
					if (GET_ACTOR_FROM_OBJECT(&fVar23) == Function_56())
					{
						Global_21369.f_228++;
						if (Global_21369.f_228 >= Function_27(262))
						{
							Function_26(262, Global_21369.f_228, 0);
						}
					}
				}
				break;
			
			case 0x0000000D:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (DECOR_CHECK_EXIST(&bVar10, "lasso"))
					{
						DECOR_REMOVE(&bVar10, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie"));
					}
				}
				break;
			
			case 0x00000010:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(&bVar10)) && ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(&bVar10)) == 0)
					{
						if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (!IS_SCRIPT_VALID(&uLocal_0))
							{
								if (1 && !IS_DEBUGKEY_DOWN(50))
								{
									*(&iVar28 + 8) = GET_ACTOR_FROM_OBJECT(&bVar10);
									iVar28 = GET_ACTOR_FROM_OBJECT(&bVar11);
									uLocal_0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/scripting/DesignerDefined/TameWildHorse", &iVar28, 4, 0);
								}
							}
						}
					}
					if (DECOR_CHECK_EXIST(&bVar10, "HorseLeash"))
					{
						DESTROY_OBJECT(DECOR_GET_OBJECT(&bVar10, "HorseLeash"));
						DECOR_REMOVE(&bVar10, "HorseLeash");
					}
					if (IS_ACTOR_HORSE(GET_ACTOR_FROM_OBJECT(&bVar10)) || IS_ACTOR_MULE(GET_ACTOR_FROM_OBJECT(&bVar10)))
					{
						if (ANIMAL_ACTOR_GET_DOMESTICATION(GET_ACTOR_FROM_OBJECT(&bVar10)) != 1)
						{
							ACCESSORIZE_HORSE(GET_ACTOR_FROM_OBJECT(&bVar10), 2);
							if (&bVar11 == GET_OBJECT_FROM_ACTOR(GET_PLAYER_ACTOR(0)))
							{
								if (&bVar10 == GET_OBJECT_FROM_ACTOR(&Global_21369 + 72))
								{
									uVar62 = Function_128(8, 0, 5);
									iVar63 = Function_445(uVar62);
									iVar64 = Function_128(7, 0, 5);
									Function_298(iVar64, FLOOR(GET_CURRENT_GAME_TIME()));
									if (Global_6624)
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 100.0f);
									}
									else if (iVar63 > 3600)
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 100.0f);
									}
									else if (iVar63 > 900)
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 85.0f);
									}
									else
									{
										SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 70.0f);
									}
								}
								else
								{
									SET_ACTOR_MAX_FRESHNESS(GET_ACTOR_FROM_OBJECT(&bVar10), 70.0f);
								}
							}
						}
					}
					if (&bVar11 == GET_OBJECT_FROM_ACTOR(&Global_54076))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bVar10)))
						{
							SET_BLIP_FLAG(GET_BLIP_ON_OBJECT(&bVar10), 1024, 0);
						}
					}
				}
				break;
			
			case 0x00000011:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (&bVar11 == GET_OBJECT_FROM_ACTOR(&Global_54076))
					{
						if (&bVar10 == GET_OBJECT_FROM_ACTOR(&Global_21369 + 72))
						{
							iVar65 = Function_128(7, 0, 5);
							iVar66 = Function_445(iVar65);
							iVar66 = (ROUND(GET_CURRENT_GAME_TIME()) - iVar66);
							iVar67 = Function_128(8, 0, 5);
							iVar68 = Function_445(iVar67);
							Function_298(iVar67, (iVar66 + iVar68));
						}
						if (Function_1(0x8000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_444(0x8000000);
						}
						if (Function_1(0x4000000))
						{
							AUDIO_MUSIC_SUSPEND(6000);
							AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
							Function_444(0x4000000);
						}
					}
				}
				break;
			
			case 0x0000000F:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
					{
						if (GET_OBJECT_TYPE(&bVar11) == 15)
						{
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
								{
									if (Function_443(&bVar10, &bVar11))
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
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__HogTie"))
								{
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "BedStealthKill"))
								{
									Function_438(Function_440(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "BedStealthKill_R"))
								{
									Function_438(Function_435(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__GroundAttack"))
								{
									Function_438(Function_430(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "n__WallPin"))
								{
									Function_94(&bVar11);
									*(&Var24 + 12) = Function_94(&bVar11);
									Function_429(&bVar11);
									Var24 = Function_429(&bVar11);
									Function_438(Function_425(FIND_NAMED_LAYOUT("Formations"), 0, &Var24, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__ChairSmash"))
								{
									Function_438(Function_422(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 0, 0, 1));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__tknExecutionBack"))
								{
									switch (RAND_INT_RANGE(false, 5))
									{
										case 0x00000000:
											Function_438(Function_419(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_438(Function_416(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_438(Function_413(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_438(Function_410(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_438(Function_407(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_438(Function_404(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__pistolExecution"))
								{
									switch (RAND_INT_RANGE(false, 5))
									{
										case 0x00000000:
											Function_438(Function_401(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_438(Function_398(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_438(Function_395(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_438(Function_392(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_438(Function_389(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000005:
											Function_438(Function_386(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__pistolKneelExecution"))
								{
									Function_438(Function_383(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__rifleExecution"))
								{
									switch (RAND_INT_RANGE(false, 4))
									{
										case 0x00000000:
											Function_438(Function_380(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_438(Function_377(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_438(Function_374(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_438(Function_371(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_438(Function_368(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__rifleKneelExecution"))
								{
									Function_438(Function_365(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__tknExecution"))
								{
									switch (RAND_INT_RANGE(false, 4))
									{
										case 0x00000000:
											Function_438(Function_362(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000001:
											Function_438(Function_359(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000002:
											Function_438(Function_356(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000003:
											Function_438(Function_353(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
										
										case 0x00000004:
											Function_438(Function_350(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
											break;
									}
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__tknKneelExecution"))
								{
									Function_438(Function_347(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, 1, 0, 0));
								}
								else if (DECOR_CHECK_STRING(&uVar14, "__LinkedAnimType", "__BottleSmash"))
								{
								}
							}
						}
					}
				}
				break;
			
			case 0x0000002F:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				if (IS_OBJECT_VALID(&bVar11) && IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
				{
					if (DECOR_CHECK_STRING(&uVar14, "__HorseAgitated", "__BuckRider"))
					{
						PLAYER_RUMBLE("HorseBuckRumble", 4294967295, 0);
					}
					else
					{
						PLAYER_RUMBLE("HorseAgitatedRumble", 4294967295, 0);
						if (!Function_37(Global_119934, 128))
						{
							if (IS_ACTOR_VALID(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bVar11))))
							{
								Function_31(&bVar11, 128, 1, 0);
							}
						}
					}
				}
				break;
			
			case 0x00000032:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				if (IS_OBJECT_VALID(&bVar11))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							Function_94(&bVar11);
							*(&Var24 + 12) = Function_94(&bVar11);
							Function_429(&bVar11);
							Var24 = Function_429(&bVar11);
							Var24.f_24 = 0;
							Function_438(Function_344(FIND_NAMED_LAYOUT("Formations"), 0, &Var24, GET_PLAYER_ACTOR(0), &bVar11, 1, 0, 0));
						}
					}
				}
				break;
			
			case 0x00000033:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				if (IS_OBJECT_VALID(&bVar11))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							Function_94(&bVar11);
							*(&Var24 + 12) = Function_94(&bVar11);
							Function_429(&bVar11);
							Var24 = Function_429(&bVar11);
							Var24.f_24 = 0;
							Function_438(Function_341(FIND_NAMED_LAYOUT("Formations"), 0, &Var24, GET_PLAYER_ACTOR(0), &bVar11, 1, 0, 0));
						}
					}
				}
				break;
			
			case 0x00000014:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							ENABLE_VEHICLE_SEAT(&uVar8, false, 0);
						}
					}
				}
				break;
			
			case 0x00000016:
				bVar10 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uVar8, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_OBJECT_VALID(&bVar10))
						{
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&uVar8))
							{
								ENABLE_VEHICLE_SEAT(&uVar8, bVar1, 0);
								bVar1++;
							}
							SET_PROP_AI_OBSTACLE_ENABLED(&bVar10, 0);
							SET_OBJECT_COLLIDE_WITH_OBJECT(&bVar10, &uVar8, false);
							iVar9 = GET_PHYSINST_FROM_OBJECT(&uVar8);
							if (IS_PHYSINST_VALID(&iVar9))
							{
								GET_LOCATOR_OFFSETS(&iVar9, "gattling_attach", &Var3, &Var5);
								Var5.f_4 = (StackVal + 180.0f);
								ATTACH_OBJECTS(&bVar10, &uVar8, Function_9(), Var3, Var5, 4294967295);
								uVar13 = FIND_OBJECT_IN_OBJECT(&bVar10, "shootBabyShoot");
								if (IS_OBJECT_VALID(&uVar13))
								{
									DESTROY_OBJECT(&uVar13);
								}
								CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, "shootBabyShoot", "stagegat_attach", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
							}
						}
					}
				}
				break;
			
			case 0x00000015:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&uVar8))
							{
								ENABLE_VEHICLE_SEAT(&uVar8, bVar1, 0);
								bVar1++;
							}
							bVar10 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uVar8, "maximGun", "$/fragments/p_gen_gatlingMaxim02x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
							if (IS_OBJECT_VALID(&bVar10))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(&bVar10, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(&bVar10, &uVar8, false);
								iVar9 = GET_PHYSINST_FROM_OBJECT(&uVar8);
								if (IS_PHYSINST_VALID(&iVar9))
								{
									GET_LOCATOR_OFFSETS(&iVar9, "gattling_attach", &Var3, &Var5);
									Var5.f_4 = (StackVal + 180.0f);
									ATTACH_OBJECTS(&bVar10, &uVar8, Function_9(), Var3, Var5, 4294967295);
									uVar13 = FIND_OBJECT_IN_OBJECT(&bVar10, "shootBabyShoot");
									if (IS_OBJECT_VALID(&uVar13))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "MaximShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "MaximShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "MaximShootTruck", 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000017:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							bVar1 = 2;
							while (bVar1 < (GET_NUM_AVAILABLE_SEATS(&uVar8) - 1))
							{
								ENABLE_VEHICLE_SEAT(&uVar8, bVar1, 0);
								bVar1++;
							}
							NET_OBJECT_REPLICATION_MODE_START(17, 0);
							bVar10 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uVar8, "gatlingGun", "$/fragments/p_gen_gatlinggun01x", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), true);
							NET_OBJECT_REPLICATION_MODE_END(17);
							if (IS_OBJECT_VALID(&bVar10))
							{
								SET_PROP_AI_OBSTACLE_ENABLED(&bVar10, 0);
								SET_OBJECT_COLLIDE_WITH_OBJECT(&bVar10, &uVar8, false);
								iVar9 = GET_PHYSINST_FROM_OBJECT(&uVar8);
								if (IS_PHYSINST_VALID(&iVar9))
								{
									GET_LOCATOR_OFFSETS(&iVar9, "gattling_attach", &Var3, &Var5);
									Var5.f_4 = (StackVal + 180.0f);
									ATTACH_OBJECTS(&bVar10, &uVar8, Function_9(), Var3, Var5, 4294967295);
									uVar13 = FIND_OBJECT_IN_OBJECT(&bVar10, "shootBabyShoot");
									if (IS_OBJECT_VALID(&uVar13))
									{
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShoot", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShootCoach", 1);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShootWagon", 0);
										GRINGO_SET_AVAILABILITY_EXT(GET_GRINGO_FROM_OBJECT(&uVar13), "GatlingShootTruck", 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 2, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 3, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 4, 0);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), 5, 0);
				break;
			
			case 0x00000019:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				ENABLE_VEHICLE_SEAT(GET_ACTOR_FROM_OBJECT(&bVar10), false, 0);
				break;
			
			case 0x0000001A:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarArmored", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001B:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBaggage", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001C:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox01", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001D:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox02", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001E:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox03", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x0000001F:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox04", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000020:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarBox05", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000021:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarCaboose", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000022:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarCattle", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000023:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarFlat", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000024:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCar01", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&uVar8))
							{
								ENABLE_VEHICLE_SEAT(&uVar8, bVar1, 1);
								bVar1++;
							}
						}
					}
				}
				break;
			
			case 0x00000025:
				if (Global_53580.f_1952)
				{
					bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
					if (IS_OBJECT_VALID(&bVar10))
					{
						if (GET_OBJECT_TYPE(&bVar10) == 15)
						{
							uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
							if (IS_ACTOR_VALID(&uVar8))
							{
								uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarSteamer", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
							}
						}
					}
				}
				else
				{
					Global_53580.f_1952 = 1;
				}
				break;
			
			case 0x00000026:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VALID(&uVar8))
						{
							uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uVar8, Function_9(), "$/content/scripting/gringo/simplegringo/trainCarWood", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						}
					}
				}
				break;
			
			case 0x00000028:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				iVar21 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uVar14));
				bVar7 = DECOR_GET_VECTOR(&uVar14, "__hjk_perp_position", &Var19);
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								if (!bVar7)
								{
									GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(&bVar11), &Var19);
								}
								if (Function_340(StackVal, &bVar10, Var19))
								{
									Function_438(Function_336(FIND_NAMED_LAYOUT("Formations"), 0, &bVar10, 1, 0, 0));
								}
								else
								{
									Function_438(Function_332(FIND_NAMED_LAYOUT("Formations"), 0, &bVar10, 1, 0, 0));
								}
							}
						}
					}
				}
				break;
			
			case 0x00000029:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_vehicle");
				iVar21 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uVar14));
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								Function_438(Function_328(FIND_NAMED_LAYOUT("Formations"), 0, &bVar10, 1, 0, 0));
							}
						}
					}
					if (GET_OBJECT_TYPE(&bVar10) == 15)
					{
						uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
						if (IS_ACTOR_VEHICLE(&uVar8))
						{
							if (GET_OBJECT_TYPE(&bVar11) == 15)
							{
								iVar69 = GET_ACTOR_FROM_OBJECT(&bVar11);
							}
							bVar1 = false;
							while (bVar1 <= GET_NUM_AVAILABLE_SEATS(&uVar8))
							{
								iVar22 = GET_ACTOR_IN_VEHICLE_SEAT(&uVar8, bVar1);
								if ((IS_ACTOR_VALID(&iVar21) && &iVar22 == &iVar69) && &iVar22 == &iVar21)
								{
									TASK_VEHICLE_LEAVE(&iVar22);
								}
								bVar1++;
							}
						}
					}
				}
				break;
			
			case 0x0000002A:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bVar11)));
								uVar12 = &uVar12;
								Function_438(Function_324(FIND_NAMED_LAYOUT("Formations"), 0, &uVar12, &bVar10, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002B:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_vehicle");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_MOUNT(GET_ACTOR_FROM_OBJECT(&bVar11)));
								bVar18 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bVar10));
								bVar17 = bVar18;
								switch (bVar17)
								{
									case 0x000004AD:
										Function_438(Function_319(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, &bVar10, &uVar12, 1, 0, 0));
										break;
									
									default:
										Function_438(Function_314(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, &bVar10, &uVar12, 1, 0, 0));
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
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_animal");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bVar11)));
								Function_438(Function_314(FIND_NAMED_LAYOUT("Formations"), 0, &bVar11, &bVar10, &uVar12, 1, 0, 0));
							}
						}
					}
				}
				break;
			
			case 0x0000002D:
				bVar11 = GET_EVENT_PERPETRATOR(&uVar14);
				bVar10 = DECOR_GET_OBJECT(&uVar14, "__hjk_vehicle");
				if (IS_OBJECT_VALID(&bVar11) && IS_OBJECT_VALID(&bVar10))
				{
					if (GET_OBJECT_TYPE(&bVar11) == 15)
					{
						if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bVar11)))
						{
							if (IS_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&bVar11)))
							{
								uVar12 = GET_OBJECT_FROM_ACTOR(GET_VEHICLE(GET_ACTOR_FROM_OBJECT(&bVar11)));
							}
						}
					}
				}
				break;
			
			case 0x00000037:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
					if (GET_LAST_ATTACKER(&uVar8) == &Global_54076)
					{
						iVar70 = Function_128(6, 3, 5);
						bVar71 = Function_445(iVar70);
						if (Global_43789 == Global_46760[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "armv_saloon_set")) || IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_ARMAddKO")))
							{
								Function_47(&bVar71, 1);
							}
						}
						else if (Global_43789 == Global_46796[1])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "ratv_saloon")))
							{
								Function_47(&bVar71, 2);
							}
						}
						else if (Global_43789 == Global_46816[1])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "thiv_saloon_set")) || IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "v_THIAddKO")))
							{
								Function_47(&bVar71, 4);
							}
						}
						else if (Global_43789 == Global_46850[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "escv_cantina_set")))
							{
								Function_47(&bVar71, 8);
							}
						}
						else if (Global_43789 == Global_46866[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "chuv_knockout_set")))
							{
								Function_47(&bVar71, 16);
							}
						}
						else if (Global_43789 == Global_46894[2])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "casv_bar_set")))
							{
								Function_47(&bVar71, 32);
							}
						}
						else if (Global_43789 == Global_46914[0])
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, FIND_VOLUME_IN_LAYOUT(&Global_46715, "blkv_saloon_set")))
							{
								Function_47(&bVar71, 64);
							}
						}
						Function_298(iVar70, bVar71);
						if (bVar71 != (128 - 1) && !Function_22(bVar71, 128))
						{
							Function_47(&bVar71, 128);
							AWARD_ACHIEVEMENT(15);
						}
					}
					if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")) && 1)
					{
						Var3 = Vector(0.0f, 0.0f, 0.0f);
						Var5 = Vector(0.0f, 0.0f, 0.0f);
						if (IS_ACTOR_VALID(&uVar8) && IS_ACTOR_PLAYER(&uVar8))
						{
							AI_DONT_HARM_ACTOR(&uVar8);
						}
						uVar13 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &bVar10, "Hogtie", "$/content/scripting/gringo/simplegringo/hogtie", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
						ATTACH_OBJECTS(StackVal, StackVal, &uVar13, &bVar10, "spine00", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
					}
				}
				break;
			
			case 0x00000039:
				bVar10 = GET_EVENT_TARGET_AS_OBJECT(&uVar14);
				if (IS_OBJECT_VALID(&bVar10))
				{
					if (DECOR_CHECK_EXIST(&bVar10, "lasso"))
					{
						DECOR_REMOVE(&bVar10, "lasso");
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie_Pickup"));
					}
					if (IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie")))
					{
						DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&bVar10, "Hogtie"));
					}
					uVar8 = GET_ACTOR_FROM_OBJECT(&bVar10);
					if (IS_ACTOR_VALID(&uVar8) && IS_ACTOR_PLAYER(&uVar8))
					{
						AI_CLEAR_DONT_HARM_ACTOR(&uVar8);
					}
				}
				break;
			
			case 0x0000003A:
				iVar9 = GET_EVENT_TARGET_AS_PHYSINST(&uVar14);
				if (IS_PHYSINST_VALID(&iVar9))
				{
					bVar10 = GET_OBJECT_FROM_PHYSINST(&iVar9);
					if (!DECOR_CHECK_EXIST(&bVar10, "nnoExplode"))
					{
						GET_OBJECT_POSITION(&bVar10, &Var3);
						fVar23 = GET_EVENT_PERPETRATOR(&uVar14);
						if (IS_OBJECT_VALID(&fVar23))
						{
							Function_49(&Var3, "DynamiteCrateExp", GET_ACTOR_FROM_OBJECT(&fVar23), 0);
						}
						else
						{
							Function_49(&Var3, "DynamiteCrateExp", 0, 0);
						}
					}
					DESTROY_OBJECT(&bVar10);
				}
				break;
		}
		iVar2++;
	}
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 0;
}

var Function_314(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6, int iParam7) //Position: 0x140AB / 82091
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, Function_9(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&bParam0, "HijackHorseToWagon", 3, 1);
	}
	Function_315(&uVar0, &bParam2, &bParam3, &uParam4);
	if (iParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_315(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x14140 / 82240
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_318(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_317(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_316(&uVar0, &uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "CJAir", 0, 1, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 2, &uParam1, "JackWagon_vehLoc", 1, 1, 180f);
}

void Function_316(int iParam0, var uParam1) //Position: 0x141CA / 82378
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(4,240117f, 2,848692f, -3,453501f), Vector(-14,51869f, 120,8944f, -0,096658f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,705376f, 1,356211f, -0,494339f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_317(int iParam0, var uParam1) //Position: 0x1425C / 82524
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(0,312839f, 2,04426f, -3,890313f), Vector(-11,40707f, -165,6106f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(1,292647f, 1,248807f, -0,071487f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_318(int iParam0, bool bParam1) //Position: 0x142EA / 82666
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &bParam1, Vector(-3,382136f, 2,293721f, 0,74885f), Vector(-8,276146f, -68,90104f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,051506f, 1,75836f, -0,576088f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_319(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x14378 / 82808
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseToPrison", 3, 1);
	}
	Function_320(&uVar0, &uParam2, &uParam3, &uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else if (&bParam6)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_320(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x14401 / 82945
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_323(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_322(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_321(&uVar0, &uParam2);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "CJAir", 4294967295, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 2, &uParam1, "JackWagon_vehLoc", 4294967295, 0, 180f);
}

void Function_321(int iParam0, int iParam1) //Position: 0x14483 / 83075
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iParam1, Function_9(), Vector(5,056644f, 3,927511f, -3,112992f), Vector(2,874524f, 1,177293f, 3,10158f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,88904f, 2,422013f, -0,671586f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_322(int iParam0, int iParam1) //Position: 0x14528 / 83240
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iParam1, Function_9(), Vector(0,312839f, 2,04426f, -3,890313f), Vector(2,942502f, -0,251143f, -3,141593f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(1,292647f, 1,248807f, -0,071487f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_323(var uParam0, int iParam1) //Position: 0x145CD / 83405
{
	SET_CAMERASHOT_ASPECT_RATIO(&uParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&uParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &uParam0, &iParam1, Function_9(), Vector(-3,382136f, 2,293721f, 0,74885f), Vector(-0,144446f, -1,20255f, 0.0f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,051506f, 1,75836f, -0,576088f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_324(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6) //Position: 0x1466E / 83566
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseToHorse", 2, 1);
	}
	Function_325(&uVar0, &uParam2, &uParam3);
	if (uParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_325(var uParam0, var uParam1, var uParam2) //Position: 0x14700 / 83712
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_327(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_326(&uVar0, &uParam2);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,75f, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1,5f, 1);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(&iVar1, 1000.0f, 0);
	return;
}

void Function_326(int iParam0, var uParam1) //Position: 0x14760 / 83808
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,577029f, 1,710976f, -3,825424f), Vector(-3,464217f, 169,0016f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-1,289642f, 1,484856f, -0,158455f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_327(var uParam0, bool bParam1) //Position: 0x147EE / 83950
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,496739f, 1,711366f, -2,162416f), Vector(-5,032116f, 131,0492f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,087791f, 1,409592f, 0,088257f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_328(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1487C / 84092
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Hijack", 2, 1);
	}
	Function_329(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_329(var uParam0, var uParam1) //Position: 0x148FF / 84223
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_331(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_330(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 2.0f, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2.0f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 2.0f, 0, 0);
	return;
}

void Function_330(var uParam0, int iParam1) //Position: 0x14954 / 84308
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &iParam1, Vector(-3,366477f, 1,49934f, -2,612921f), Vector(8,860391f, -121,5917f, 1,481497f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	return;
}

void Function_331(var uParam0, bool bParam1) //Position: 0x149C7 / 84423
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,576806f, 2,573345f, -4,386736f), Vector(-12,39926f, 179,9947f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	return;
}

var Function_332(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14A36 / 84534
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseLeft", 2, 1);
	}
	Function_333(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_333(var uParam0, var uParam1) //Position: 0x14AC2 / 84674
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_335(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_334(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 0,9f, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(&iVar1, 1000.0f, 0);
	return;
}

void Function_334(int iParam0, var uParam1) //Position: 0x14B2F / 84783
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-2,547432f, 1,293245f, -3,496428f), Vector(-2,252641f, -148,9353f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,300987f, 1,122006f, 0,23275f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_335(var uParam0, bool bParam1) //Position: 0x14BBD / 84925
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,008554f, 1,956293f, -1,766058f), Vector(-4,570198f, -158,2257f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,208504f, 1,783894f, 0,236752f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_336(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x14C4B / 85067
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HijackHorseRight", 2, 1);
	}
	Function_337(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_337(var uParam0, var uParam1) //Position: 0x14CD8 / 85208
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_339(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_338(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,25f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 0,9f, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 1.0f, 2);
	ADD_CAMERATRANSITION_EVENT_CUTGAMECAMERABEHINDPLAYER(&iVar1, 1000.0f, 0);
	return;
}

void Function_338(int iParam0, var uParam1) //Position: 0x14D45 / 85317
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(2,547f, 1,293245f, -3,496428f), Vector(-2,252641f, -148,9353f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,300987f, 1,122006f, 0,23275f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_339(int iParam0, int iParam1) //Position: 0x14DD3 / 85459
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(1,009f, 1,956293f, -1,766058f), Vector(-4,570198f, -158,2257f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,208504f, 1,783894f, 0,236752f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

bool Function_340(bool bParam0, struct<2> Param1) //Position: 0x14E61 / 85601
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&bParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&bParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

var Function_341(var uParam0, bool bParam1, float fParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, float fParam7) //Position: 0x14E9C / 85660
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "HorseFalling", 1, 1);
	}
	Function_342(&uVar0, &fParam2, &fParam3, &fParam4);
	if (fParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 0, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_342(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x14F2B / 85803
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_343(&uVar0, &fParam1, &fParam2, &fParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 2,5f, 0);
}

void Function_343(var uParam0, struct<25> Param1) //Position: 0x14F63 / 85859
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	Var4 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,05f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	Var2 = Vector(0.0f, 2,12f, -2,422f);
	UNK_0xF76F2BB3(&Var2, &Param1, Param1.f_24, 4);
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var2, StackVal);
	Var4 = Vector(0.0f, -30,351f, -15,34f);
	UNK_0xF76F2BB3(&Var4, &Param1, Param1.f_24, 4);
	Var4 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var4, StackVal);
	CAMERA_PROBE(&Var0, Var2, Var4, &uParam2, 23);
	Var0 = (Var0 + 0.0f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_8 = (StackVal + 0.0f);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &fParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
}

var Function_344(var uParam0, bool bParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, Vector3 vParam7) //Position: 0x15060 / 86112
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "WagonCrash", 1, 1);
	}
	Function_345(&uVar0, &uParam2, &fParam3, &fParam4);
	if (vParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 1, 0, 1);
		}
	}
	return &uVar0;
}

void Function_345(var uParam0, float fParam1, bool bParam2, var uParam3) //Position: 0x150ED / 86253
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_346(&uVar0, &fParam1, &bParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	uVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 4.0f, 0);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&uVar1, 1.0f, 0, 0.0f);
	SET_TRANSITION_COLLISION_PARAMS(&uVar1, 1, 0);
}

void Function_346(var uParam0, struct<25> Param1) //Position: 0x15134 / 86324
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	Var0 = Vector(9,270768f, 7,965437f, 3,153887f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&uParam0, Var0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &uParam2, 507);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam3, 129);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &uParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,407577f, 0.0f), 1);
}

var Function_347(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15231 / 86577
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknKneelExecution", 1, 1);
	}
	Function_348(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_348(var uParam0, var uParam1) //Position: 0x152BF / 86719
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_349(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_349(var uParam0, bool bParam1) //Position: 0x15316 / 86806
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,077684f, 1,688702f, 0,09395f), Vector(-16,10126f, 77,37032f, 0,009626f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_350(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x153B4 / 86964
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_04", 1, 1);
	}
	Function_351(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_351(var uParam0, var uParam1) //Position: 0x15440 / 87104
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_352(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_352(var uParam0, bool bParam1) //Position: 0x15497 / 87191
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 33,73909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,598154f, 1,524616f, -1,161397f), Vector(-8,163617f, -141,3147f, -16,12286f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_353(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15531 / 87345
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_03", 1, 1);
	}
	Function_354(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_354(var uParam0, var uParam1) //Position: 0x155BD / 87485
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_355(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_355(var uParam0, bool bParam1) //Position: 0x15614 / 87572
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 30,6607f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,785012f, 1,737865f, -0,003387f), Vector(-16,92512f, 84,24278f, 11,77102f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_356(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x156AE / 87726
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_02", 1, 1);
	}
	Function_357(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_357(var uParam0, var uParam1) //Position: 0x1573A / 87866
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_358(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_358(var uParam0, bool bParam1) //Position: 0x15791 / 87953
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-0,033225f, 1,295071f, 0,859828f), Vector(2,370899f, -21,91965f, 11,26406f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_359(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1582B / 88107
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution_01", 1, 1);
	}
	Function_360(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_360(var uParam0, var uParam1) //Position: 0x158B7 / 88247
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_361(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_361(var uParam0, bool bParam1) //Position: 0x1590E / 88334
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,45036f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,15953f, 1,084327f, -1,321146f), Vector(8,784932f, 138,2104f, -8,502293f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_362(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x159A8 / 88488
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecution", 1, 1);
	}
	Function_363(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_363(var uParam0, var uParam1) //Position: 0x15A31 / 88625
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_364(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_364(var uParam0, bool bParam1) //Position: 0x15A88 / 88712
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 39,86723f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,731022f, 1,207424f, -0,59499f), Vector(-0,219386f, 98,4201f, -6,49419f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_365(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15B22 / 88866
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "rifleKneelExecution", 1, 1);
	}
	Function_366(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_366(var uParam0, var uParam1) //Position: 0x15BB2 / 89010
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_367(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_367(var uParam0, bool bParam1) //Position: 0x15C09 / 89097
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,427828f, 1,442699f, -0,021391f), Vector(-11,90606f, 72,94113f, 5,7E-05f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_368(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15CA7 / 89255
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "rifleExecution_04", 1, 1);
	}
	Function_369(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_369(var uParam0, var uParam1) //Position: 0x15D35 / 89397
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_370(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_370(var uParam0, bool bParam1) //Position: 0x15D8C / 89484
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 40,7396f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,154827f, 0,698168f, 0,196961f), Vector(14,45704f, 46,70459f, -11,70381f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_371(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15E2A / 89642
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "rifleExecution_03", 1, 1);
	}
	Function_372(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_372(var uParam0, var uParam1) //Position: 0x15EB8 / 89784
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_373(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_373(var uParam0, bool bParam1) //Position: 0x15F0F / 89871
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 39,61349f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,678964f, 0,992386f, -2,09693f), Vector(13,04992f, 150,5624f, -0,189706f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_374(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x15FAD / 90029
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "rifleExecution_02", 1, 1);
	}
	Function_375(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_375(var uParam0, var uParam1) //Position: 0x1603B / 90171
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_376(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_376(var uParam0, bool bParam1) //Position: 0x16092 / 90258
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,17763f, 1,626893f, -1,877858f), Vector(-16,66625f, -132,0675f, -4,978086f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_377(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16130 / 90416
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "rifleExecution_01", 1, 1);
	}
	Function_378(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_378(var uParam0, var uParam1) //Position: 0x161BE / 90558
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_379(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_379(var uParam0, bool bParam1) //Position: 0x16215 / 90645
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,23275f, 0,7751f, -1,966721f), Vector(14,39797f, 133,8307f, 29,31653f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_380(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x162B3 / 90803
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "rifleExecution", 1, 1);
	}
	Function_381(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_381(var uParam0, var uParam1) //Position: 0x1633E / 90942
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_382(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_382(var uParam0, bool bParam1) //Position: 0x16395 / 91029
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 38,48704f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,650726f, 0,618574f, 0,427292f), Vector(13,80886f, 47,58586f, -11,28612f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_383(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16433 / 91187
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolKneelExecution", 1, 1);
	}
	Function_384(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_384(var uParam0, var uParam1) //Position: 0x164C4 / 91332
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_385(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_385(var uParam0, bool bParam1) //Position: 0x1651B / 91419
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,73655f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,15f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,381174f, 1,428986f, -0,436662f), Vector(-11,62205f, 89,08679f, -0,000115f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0,795814f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_386(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x165B9 / 91577
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PistolExecution_05", 1, 1);
	}
	Function_387(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_387(var uParam0, var uParam1) //Position: 0x16648 / 91720
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_388(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_388(var uParam0, bool bParam1) //Position: 0x1669F / 91807
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,57505f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,18887f, 1,61792f, 0,534385f), Vector(-15,9202f, 45,06617f, 3,526383f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_389(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1673D / 91965
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "PistolExecution_04", 1, 1);
	}
	Function_390(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_390(var uParam0, var uParam1) //Position: 0x167CC / 92108
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_391(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_391(var uParam0, bool bParam1) //Position: 0x16823 / 92195
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,49909f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,024016f, 0,554619f, 0,408258f), Vector(30,14079f, 44,81871f, 3,92224f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_392(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x168C1 / 92353
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution_03", 1, 1);
	}
	Function_393(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_393(var uParam0, var uParam1) //Position: 0x16950 / 92496
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_394(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_394(var uParam0, bool bParam1) //Position: 0x169A7 / 92583
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 44,18989f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,108242f, 1,113226f, 0,091178f), Vector(4,81359f, -74,79637f, -10,2132f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_395(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16A45 / 92741
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution_02", 1, 1);
	}
	Function_396(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_396(var uParam0, var uParam1) //Position: 0x16AD4 / 92884
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_397(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_397(var uParam0, bool bParam1) //Position: 0x16B2B / 92971
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 43,08115f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,736095f, 0,952384f, -1,123448f), Vector(10,26351f, 112,517f, 12,43874f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_398(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16BC9 / 93129
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution_01", 1, 1);
	}
	Function_399(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_399(var uParam0, var uParam1) //Position: 0x16C58 / 93272
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_400(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_400(var uParam0, bool bParam1) //Position: 0x16CAF / 93359
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 42,68156f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,121333f, 0,883925f, 0,788724f), Vector(13,18485f, 39,53941f, 6,69186f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_401(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16D4D / 93517
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "pistolExecution", 1, 1);
	}
	Function_402(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_402(var uParam0, var uParam1) //Position: 0x16DD9 / 93657
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_403(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_403(var uParam0, bool bParam1) //Position: 0x16E30 / 93744
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 40,64627f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,833069f, 0,910306f, 0,392504f), Vector(6,567528f, 60,56582f, 0,046868f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_404(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x16ECE / 93902
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_05", 1, 1);
	}
	Function_405(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_405(var uParam0, var uParam1) //Position: 0x16F5E / 94046
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_406(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_406(var uParam0, bool bParam1) //Position: 0x16FB5 / 94133
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 35,79285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,367814f, 1,599156f, 1,072289f), Vector(-3,876976f, 19,19374f, 11,86928f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_407(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1704F / 94287
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_04", 1, 1);
	}
	Function_408(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_408(var uParam0, var uParam1) //Position: 0x170DF / 94431
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_409(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_409(var uParam0, bool bParam1) //Position: 0x17136 / 94518
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 34,38961f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,2005f, 0,639449f, -0,77461f), Vector(28,96044f, 100,1754f, -21,46019f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_410(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x171D0 / 94672
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_03", 1, 1);
	}
	Function_411(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_411(var uParam0, var uParam1) //Position: 0x17260 / 94816
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_412(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_412(var uParam0, bool bParam1) //Position: 0x172B7 / 94903
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 31,09979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(0,772715f, 0,601514f, 0,683062f), Vector(27,82014f, 33,3886f, -21,21926f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_413(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x17351 / 95057
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_02", 1, 1);
	}
	Function_414(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_414(var uParam0, var uParam1) //Position: 0x173E1 / 95201
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_415(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_415(var uParam0, bool bParam1) //Position: 0x17438 / 95288
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 31,67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(1,261779f, 1,408872f, 1,275128f), Vector(0,737339f, 39,14373f, -9,138619f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_416(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x174D2 / 95442
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack_01", 1, 1);
	}
	Function_417(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_417(var uParam0, var uParam1) //Position: 0x17562 / 95586
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_418(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_418(var uParam0, bool bParam1) //Position: 0x175B9 / 95673
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 23,34922f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(2,193164f, -0,139685f, -0,718702f), Vector(33,4145f, 100,2139f, 15,81386f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1,101748f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_419(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x17657 / 95831
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "tknExecutionBack", 1, 1);
	}
	Function_420(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_420(var uParam0, var uParam1) //Position: 0x176E4 / 95972
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_421(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "endLinkedAnimation", 0, 1, 180f);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESETTILT(&iVar1, 100.0f, 1);
	return;
}

void Function_421(var uParam0, bool bParam1) //Position: 0x1773B / 96059
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 31,67371f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-1,158421f, 1,612226f, 0,177963f), Vector(-3,552166f, -69,33723f, -2,450368f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_422(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x177D5 / 96213
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "ChairSmash", 1, 1);
	}
	Function_423(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_423(var uParam0, int iParam1) //Position: 0x1785C / 96348
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_424(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__EndChairSmash", 0, 1, 180f);
	return;
}

void Function_424(int iParam0, int iParam1) //Position: 0x178A2 / 96418
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 1);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-3,305018f, 1,08927f, 0,490524f), Vector(-4,4265f, -62,37619f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,451405f, 0,839948f, -1,002819f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

var Function_425(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6) //Position: 0x17930 / 96560
{
	var uVar0;
	
	if (&bParam4)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "WallPin", 2, 1);
	}
	Function_426(&uVar0, &uParam2, &uParam3);
	if (fParam6 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam5)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam5);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_426(float fParam0, var uParam1, int iParam2) //Position: 0x179B7 / 96695
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 0);
	Function_428(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&fParam0, 1);
	Function_427(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&fParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&fParam0, 0, 0,2f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&fParam0, 0, 1, 0,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&fParam0, 1, &iParam2, "__EndWallPin", 2, 1, 180f);
	return;
}

void Function_427(float fParam0, struct<25> Param1) //Position: 0x17A2D / 96813
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-2,000206f, 1,399983f, -0,499981f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,970139f, 1E-06f, 0,242549f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	return;
}

void Function_428(float fParam0, struct<25> Param1) //Position: 0x17AD7 / 96983
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 42,979f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(-2,004646f, 1,400002f, -0,423557f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(*(&Param1 + 12), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-0,999992f, 1E-06f, -0,004033f);
	UNK_0xF76F2BB3(&Var0, &Param1, Param1.f_24, 4);
	SET_CAMERASHOT_DIRECTION(&fParam0, Var0, 0);
	return;
}

struct<8> Function_429(bool bParam0) //Position: 0x17B81 / 97153
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

var Function_430(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x17BAA / 97194
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "GroundAttack", 3, 1);
	}
	Function_431(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_431(var uParam0, var uParam1) //Position: 0x17C33 / 97331
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_434(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_433(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_432(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,7f, 0);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 0,75f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 1, &uParam1, "__EndGroundAttack", 2, 0, 7.0f);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	bVar1 = CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 1, 2, 2.0f, 3, 0);
	SET_TRANSITION_COLLISION_PARAMS(&bVar1, 1, 0);
	return;
}

void Function_432(int iParam0, var uParam1) //Position: 0x17CF2 / 97522
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-4,069192f, 1,679383f, 1,090629f), Vector(-10,92779f, -67,95651f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,043306f, 0,840791f, -0,539488f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &uParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0,5f, -0,5f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

void Function_433(int iParam0, var uParam1) //Position: 0x17DB7 / 97719
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-1,651182f, 1,344121f, 0,315187f), Vector(-21,06256f, -60,6819f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(-0,047794f, 0,635919f, -0,585258f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&iParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &uParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0,5f, -0,5f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

void Function_434(var uParam0, bool bParam1) //Position: 0x17E7C / 97916
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 30.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &uParam0, &bParam1, Vector(-4,069192f, 1,679383f, 1,090629f), Vector(-10,92779f, -67,95651f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(-0,043306f, 0,840791f, -0,539488f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 0,5f, -0,5f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

var Function_435(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x17F41 / 98113
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BedStealthKill_R", 1, 1);
	}
	Function_436(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_436(var uParam0, var uParam1) //Position: 0x17FCE / 98254
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_437(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "BedStealthKill_R", 0, 1, 180f);
	return;
}

void Function_437(int iParam0, var uParam1) //Position: 0x1801F / 98335
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 33,936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(1,938993f, 2,898682f, 0,045806f), Vector(-51,88138f, 61,50959f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,123694f, 0,266305f, -0,939428f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

void Function_438(var uParam0) //Position: 0x180AD / 98477
{
	Function_439();
	Global_99172 = &uParam0;
	return;
}

void Function_439() //Position: 0x180BE / 98494
{
	if (IS_OBJECT_VALID(&Global_99172))
	{
		DESTROY_OBJECT(&Global_99172);
	}
	return;
}

var Function_440(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x180D7 / 98519
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_9(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "BedStealthKill", 1, 1);
	}
	Function_441(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else if (&bParam4)
	{
		SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
	}
	else
	{
		PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
	}
	return &uVar0;
}

void Function_441(var uParam0, int iParam1) //Position: 0x18155 / 98645
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_442(&uVar0, &iParam1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 1.0f, 4294967295);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "BedStealthKill", 4294967295, 0, 180f);
	return;
}

void Function_442(int iParam0, int iParam1) //Position: 0x1819D / 98717
{
	SET_CAMERASHOT_ASPECT_RATIO(&iParam0, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_FAR_CLIP_PLANE(&iParam0, 1885.0f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &iParam1, Function_9(), Vector(-1,97754f, 2,195687f, -0,487989f), Vector(-0,712222f, -1,448415f, 0.0f), 4294967295);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0,182648f, 0,316525f, -0,753682f), Vector(0.0f, 0.0f, 0.0f), 0);
	return;
}

bool Function_443(var uParam0, int iParam1) //Position: 0x1823E / 98878
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	return Function_340(StackVal, &uParam0, Var0);
}

void Function_444(bool bParam0) //Position: 0x18257 / 98903
{
	bool bVar0;
	
	if (Function_22(bParam0, 1) && Function_22(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

var Function_445(int iParam0) //Position: 0x1828B / 98955
{
	if (!Function_125(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

int Function_446(bool bParam0) //Position: 0x182A5 / 98981
{
	bool bVar0;
	
	bVar0 = GET_ACTORENUM_SPECIES(bParam0);
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

void Function_447() //Position: 0x18396 / 99222
{
	return;
}

void Function_448(struct<57> Param0) //Position: 0x1839C / 99228
{
	strcpy(&Param0 + 24, "AMBIENT-MAIDEN", 16);
	Param0 = 99356;
	*(&Param0 + 8) = 99298;
	*(&Param0 + 16) = 99292;
	Param0.f_56 = 1;
	return;
}

void Function_449() //Position: 0x183DC / 99292
{
	return;
}

int Function_450() //Position: 0x183E2 / 99298
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(Function_56()))
	{
		return 0;
	}
	bVar0 = VDIST(Global_54078, Local_2);
	if (bVar0 < 5.0f && IS_ACTOR_VALID(Function_56()))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		Local_2 = Global_54078;
	}
	return 0;
}

void Function_451() //Position: 0x1841C / 99356
{
	Function_452();
	return;
}

void Function_452() //Position: 0x18425 / 99365
{
	AMBIENT_SET_UPDATES_ENABLED(1);
	AMBIENT_SET_POINT_SPACING(4,5f);
	AMBIENT_SET_SLOPE_VALUES(0,985f, 0,94f, 0,85f, 0,75f);
	if (IS_ACTOR_VALID(&Global_54076))
	{
		AMBIENT_SET_SCAN_CENTER_PLAYER();
		Local_2 = Global_54078;
	}
	else
	{
		AMBIENT_SET_SCAN_CENTER(Global_53524);
		Local_2 = Global_53524;
	}
	return;
}

