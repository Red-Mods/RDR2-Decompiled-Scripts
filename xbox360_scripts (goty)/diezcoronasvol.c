//Decompiled with MagicRDR v1.0
//Function Count : 60
//Statics Count : 66
//Natives Count : 104
//Parameters Count : 2

#region Local Var
	struct<205> Local_0 = { 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_52 = 0;
	Local_53 = { StackVal, ScriptParam_0 };
	Function_59("Initializing DiezCoronas Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_55 = 500;
		uLocal_56 = Function_58();
		switch (iLocal_52)
		{
			case 0x00000000:
				if (Function_56())
				{
					iLocal_52 = 1;
				}
				iLocal_55 = 0;
				break;
			
			case 0x00000001:
				Function_55(&uLocal_57);
				Function_54(StackVal, &uLocal_57, &uLocal_60, 2, 4294967295, 0);
				iLocal_52 = 2;
				iLocal_55 = 0;
				break;
			
			case 0x00000002:
				Function_53(&(Global_29008[Local_53]), 16);
				Function_52("Finished Initializing DiezCoronas Volumes", 5.0f);
				iLocal_52 = 3;
				iLocal_55 = 0;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_30707))
				{
					Function_11(&uLocal_57, &uLocal_60, uLocal_56, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_55 = 0;
				break;
		}
		WAIT(iLocal_55);
	}
	Function_3(&uLocal_57, &uLocal_60);
	Function_2();
	Function_1(&(Global_29008[Local_53]), 16);
	Function_52("Unloaded DiezCoronas Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x14B / 331
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x162 / 354
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x16D / 365
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_10(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_9(iParam1[iVar03], 4);
		}
		if (Function_10(iParam1[iVar03], 8))
		{
			Function_4(0, 0, 30);
			Function_9(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_4(int iParam0, int iParam1, int iParam2) //Position: 0x1C5 / 453
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
		Function_5(Global_16524, bVar0, 1);
	}
	return;
}

void Function_5(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AB / 683
{
	int iVar0;
	
	Function_8(iParam0);
	Function_7(bParam1);
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
	Function_6();
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

void Function_6() //Position: 0x424 / 1060
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x430 / 1072
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

void Function_8(int iParam0) //Position: 0x476 / 1142
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

void Function_9(var uParam0, int iParam1) //Position: 0x4BC / 1212
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x4D6 / 1238
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x4F3 / 1267
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_50(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_12(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_3387)
	{
		uParam0->f_8 = 1;
	}
	else if (Global_3386)
	{
		uParam0->f_8 = 1;
	}
	else if (StackVal)
	{
		uParam0->f_8 = 0;
	}
}

bool Function_12(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x574 / 1396
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_49(uParam0))
	{
		return 0;
	}
	Function_1(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *uParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*uParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_10(uParam0, 2))
					{
						if (!Function_10(uParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_47(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_46(uParam0, 8);
							}
						}
					}
				}
				else if (Function_10(uParam0, 2))
				{
					if (Function_10(uParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_4(0, 0, 0);
						}
						else
						{
							Function_4(0, 0, 30);
						}
						Function_9(uParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_10(uParam0, 2))
					{
						if (!Function_10(uParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_46(uParam0, 4);
							}
						}
					}
				}
				else if (Function_10(uParam0, 2))
				{
					if (Function_10(uParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_9(uParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_45(iParam2)) && !Function_44(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_43(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_10(uParam0, 2))
					{
						if (!Function_10(uParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime"))
							{
								if (StackVal > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(GET_CURRENT_GAME_TIME()), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(StackVal), "lawAllowTrespassTime");
								}
							}
							if (Function_42())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_46(uParam0, 16);
								Function_34(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_10(uParam0, 2))
				{
					if (Function_10(uParam0, 16))
					{
						Function_9(uParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_10(uParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_10(uParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_46(uParam0, 2);
			}
			else
			{
				Function_9(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_45(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_33(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_10(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_32(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_46(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_45(iParam2))
					{
						Function_31(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_13(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_13(int iParam0) //Position: 0x98D / 2445
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_33(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_53(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_18(473, 1, 0, 0);
		iVar0 = Function_17(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_18(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_18(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_18(476, 1, 0, 0);
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
		Function_16(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_16(7, 30);
	}
	if (Function_15(473) <= Function_14(473))
	{
		if (!Function_42())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_14(int iParam0) //Position: 0xA8C / 2700
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_15(int iParam0) //Position: 0xAC9 / 2761
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, bool bParam1) //Position: 0xB02 / 2818
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

var Function_17(int iParam0) //Position: 0xB69 / 2921
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_45(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_29155[iParam010];
		}
		else
		{
			iVar0 = Global_29155[iParam010];
			iVar0 = Global_29155[iVar010];
		}
	}
	return iVar0;
}

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xBC1 / 3009
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
	Function_30(iParam0, TO_FLOAT(bParam1), 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_19(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xDE1 / 3553
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_14(390))), 32);
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
					bVar19 = (Function_15(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_15(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_27(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_24(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_21(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_20(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_20() //Position: 0x140E / 5134
{
	int iVar0;
	
	return iVar0;
}

var Function_21(int iParam0) //Position: 0x1416 / 5142
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1427 / 5159
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_23(char* cParam0, bool bParam1) //Position: 0x151C / 5404
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1535 / 5429
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x159A / 5530
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x15AC / 5548
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x15BE / 5566
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
	if (((Function_28(iParam0) != 19 || Function_28(iParam0) != 17) || Function_28(iParam0) != 10) || Function_28(iParam0) != 9)
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

int Function_28(int iParam0) //Position: 0x16EE / 5870
{
	return Global_35278[iParam020].f_48;
}

void Function_29(int iParam0) //Position: 0x16FD / 5885
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

int Function_30(int iParam0, float fParam1, bool bParam2) //Position: 0x1897 / 6295
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
			Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
		}
	}
	else
	{
		Global_34581[iVar1] = fParam1;
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

void Function_31(var uParam0, int iParam1) //Position: 0x1ADB / 6875
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_32(struct<5> Param0) //Position: 0x1AE8 / 6888
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1B0E / 6926
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1B2A / 6954
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_41(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_40(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(bParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_37(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(uVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(uVar3, iParam1);
		SET_CRIME_VICTIM(uVar3, bParam3);
		SET_CRIME_CRIMINAL(uVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(uVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(uVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_20(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_35();
		}
		SET_CRIME_FACTION(StackVal, uVar3);
		SET_CRIME_TALLIED(uVar3, 0);
		SET_CRIME_COUNTER(uVar3, 1);
		SET_CRIME_WORLD_REGION(uVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(uVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(uVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(uVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return uVar3;
}

void Function_35() //Position: 0x1DBA / 7610
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_36(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0x1E1D / 7709
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!bParam1 != "")
	{
		ITERATE_IN_SET(bParam0, bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_37(bool bParam0) //Position: 0x1E4C / 7756
{
	if (Function_43(256))
	{
		return 0;
	}
	if (Function_43(262144))
	{
		return 0;
	}
	if (Function_39())
	{
		return 0;
	}
	if (!Function_43(1))
	{
		return 0;
	}
	if (!Function_43(4096))
	{
		return 0;
	}
	if (bParam0 && Function_38(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_43(2048))
	{
		return 0;
	}
	if (Function_42() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_38(int iParam0) //Position: 0x1EC2 / 7874
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_39() //Position: 0x1ED3 / 7891
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

bool Function_40(int iParam0) //Position: 0x1EEC / 7916
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_41(int iParam0) //Position: 0x1F02 / 7938
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_42() //Position: 0x1F17 / 7959
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_43(int iParam0) //Position: 0x1F20 / 7968
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1F3E / 7998
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_45(int iParam0) //Position: 0x1FE2 / 8162
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(var uParam0, int iParam1) //Position: 0x1FF8 / 8184
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_47(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2009 / 8201
{
	int iVar0;
	bool bVar1;
	
	Function_8(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_48(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_5(StackVal, bVar1, bParam4);
		}
	}
}

void Function_48(int iParam0, int iParam1) //Position: 0x207B / 8315
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x20A0 / 8352
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_50(int iParam0) //Position: 0x20BD / 8381
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int iParam0) //Position: 0x20D9 / 8409
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_45((*iParam0)[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_29008[(*iParam0)[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_52(bool bParam0, float fParam1) //Position: 0x2126 / 8486
{
	if (!Function_50(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, bParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_53(var uParam0, bool bParam1) //Position: 0x2164 / 8548
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_54(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x2173 / 8563
{
	if (*uParam0 >= (*uParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(bParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	uParam4 = uParam4;
	uParam1[*uParam03]->f_4 = bParam3;
	(*uParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_55(var uParam0) //Position: 0x224E / 8782
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_56() //Position: 0x225D / 8797
{
	var uVar0;
	
	Function_57(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	Local_0.f_68 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "dzcv_flk_BIRD_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird1", 3, -611.829f, 38.219f, 3827.132f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird2", 3, -866.4571f, 22.49439f, 3931.92f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird3", 3, -313.7093f, 21.75904f, 3726.008f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[2]);
	(*&Local_0 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird4", 3, -510.6579f, 29.49834f, 3541.931f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[3]);
	(*&Local_0 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird5", 3, -1219.403f, 6.319977f, 4040.926f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[4]);
	(*&Local_0 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird6", 3, -637.6205f, 29.80308f, 4300.197f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[5]);
	(*&Local_0 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird7", 3, 290.432f, 34.87038f, 3480.95f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[6]);
	(*&Local_0 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird8", 3, -108.391f, 38.21025f, 3434.176f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[7]);
	(*&Local_0 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_bird9", 3, -712.0f, 17.23909f, 3079.969f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[8]);
	(*&Local_0 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bird10", 3, -925.6773f, 17.23909f, 4212.848f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[9]);
	(*&Local_0 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bird11", 3, -352.4366f, 21.4454f, 4107.059f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[10]);
	(*&Local_0 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bird12", 3, -1279.938f, 18.19875f, 3673.032f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[11]);
	(*&Local_0 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bird13", 3, -930.9156f, 20.02059f, 3494.921f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[12]);
	(*&Local_0 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bird14", 3, -649.6989f, 36.98386f, 3207.082f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[13]);
	(*&Local_0 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bird15", 3, -1370.839f, 33.3484f, 3323.744f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 4)[14]);
	Local_0.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "dzcv_flk_NORTH_set");
	(*&Local_0 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_deer1", 3, 183.2115f, 2.510682f, 3253.547f, 0.0f, 20.0f, 0.0f, 281.9918f, 89.35717f, 179.1817f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 72)[0]);
	(*&Local_0 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_deer2", 3, -146.5327f, 32.12549f, 3481.587f, 0.0f, 20.0f, 0.0f, 152.6265f, 89.35717f, 151.084f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 72)[1]);
	(*&Local_0 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_deer3", 3, -496.7743f, -25.0744f, 3307.334f, 0.0f, 20.0f, 0.0f, 134.0671f, 89.35717f, 140.6055f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 72)[2]);
	(*&Local_0 + 72)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_deer4", 3, 246.9567f, 1.866014f, 3601.049f, 0.0f, 20.0f, 0.0f, 160.3628f, 70.34444f, 154.0316f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 72)[3]);
	(*&Local_0 + 72)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_deer5", 3, -1157.915f, 33.55283f, 3680.932f, 0.0f, 42.43787f, 0.0f, 468.457f, 89.35717f, 255.2923f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 72)[4]);
	(*&Local_0 + 72)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ndzc_deer6", 3, -18.09855f, 2.510682f, 2951.459f, 0.0f, 40.72098f, 0.0f, 315.7549f, 126.4596f, 93.80151f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 72)[5]);
	Local_0.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "dzcv_flk_CENTER_set");
	(*&Local_0 + 104)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_wildHorse1", 3, -581.5504f, 0.5420829f, 3671.503f, 0.0f, 20.0f, 0.0f, 141.8387f, 59.55745f, 147.3043f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 104)[0]);
	(*&Local_0 + 104)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_wildHorse2", 3, -493.5024f, 0.7923921f, 3894.903f, 0.0f, 20.0f, 0.0f, 109.9956f, 59.55745f, 89.54243f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 104)[1]);
	(*&Local_0 + 104)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_wildHorse3", 3, -759.9346f, -12.84043f, 3899.402f, 0.0f, 20.0f, 0.0f, 138.0682f, 59.55745f, 137.679f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 104)[2]);
	(*&Local_0 + 104)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_wildHorse4", 3, -307.3904f, 37.0189f, 3708.881f, 0.0f, 20.0f, 0.0f, 123.4423f, 59.55745f, 136.9776f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 104)[3]);
	(*&Local_0 + 104)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_wildHorse7", 3, -272f, -0.3381402f, 3968.0f, 0.0f, 20.0f, 0.0f, 125.6101f, 59.55745f, 130.064f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 104)[4]);
	Local_0.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "dzcv_flk_SOUTH_set");
	(*&Local_0 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bobcat2", 3, -1123.103f, 30.4954f, 4443.961f, 0.0f, 20.0f, 0.0f, 147.2831f, 35.79898f, 163.0907f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 132)[0]);
	(*&Local_0 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bobcat5", 3, -586.597f, 19.71896f, 4380.45f, 0.0f, 20.0f, 0.0f, 161.0917f, 35.79898f, 163.0907f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 132)[1]);
	(*&Local_0 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bobcat7", 3, -496.9962f, 21.61504f, 4106.414f, 0.0f, 20.0f, 0.0f, 131.9805f, 35.79898f, 117.3314f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 132)[2]);
	(*&Local_0 + 132)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bobcat8", 3, -298.3602f, 20.21682f, 4293.722f, 0.0f, 20.0f, 0.0f, 142.1019f, 35.79898f, 152.6231f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 132)[3]);
	(*&Local_0 + 132)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bobcat14", 3, -850.075f, 6.92048f, 4473.812f, 0.0f, 20.0f, 0.0f, 110.5808f, 34.04399f, 155.0954f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 132)[4]);
	(*&Local_0 + 132)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bobcat13", 3, -862.697f, 25.3591f, 4180.081f, 0.0f, 20.0f, 0.0f, 215.6465f, 37.4021f, 135.8368f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 132)[5]);
	(*&Local_0 + 132)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzc_bobcat12", 3, -1439.972f, 31.61843f, 4396.93f, 0.0f, 20.0f, 0.0f, 155.0954f, 34.04399f, 155.0954f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 132)[6]);
	Local_0.f_200 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife_set");
	(*&Local_0 + 168)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife10", 2, -249.935f, 4.074929f, 3072.152f, 0.0f, 43.30123f, 0.0f, 320.5055f, 42.68611f, 180.343f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 168)[0]);
	(*&Local_0 + 168)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife9", 2, -545.003f, -5.849846f, 3184.051f, 0.0f, 0.0f, 0.0f, 469.1619f, 60.29255f, 182.7418f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 168)[1]);
	(*&Local_0 + 168)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife8", 2, -907.4448f, -6.917324f, 3308.913f, 0.0f, 32.04573f, 0.0f, 365.7122f, 60.29255f, 124.2856f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 168)[2]);
	(*&Local_0 + 168)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife7", 2, -1373.302f, -9.389809f, 3409.714f, 0.0f, 18.31845f, 0.0f, 660.2542f, 60.29255f, 139.5668f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 168)[3]);
	(*&Local_0 + 168)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife6", 2, -1493.303f, -12.2371f, 3619.515f, 0.0f, 27.62256f, 0.0f, 92.58046f, 60.29255f, 198.8555f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 168)[4]);
	(*&Local_0 + 168)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife5", 2, -1592.424f, -12.7732f, 3712.559f, 0.0f, 22.51199f, 0.0f, 327.7378f, 60.29255f, 86.73923f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 168)[5]);
	(*&Local_0 + 168)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_aquaticWildlife4", 2, -1897.605f, -15.24222f, 3749.151f, 0.0f, 0.0f, 0.0f, 323.3455f, 60.29255f, 154.5044f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 168)[6]);
	Local_0.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_0, "dzcv_BB_Restriction", 2, 34.01668f, 94.87236f, 2740.988f, 0.0f, 33.96989f, 0.0f, 40.76286f, 57.50324f, 112.8068f);
	return 1;
}

void Function_57(int iParam0, int iParam1) //Position: 0x2FF6 / 12278
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

var Function_58() //Position: 0x303F / 12351
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_59(bool bParam0, var uParam1) //Position: 0x3054 / 12372
{
	if (!Function_50(128))
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

