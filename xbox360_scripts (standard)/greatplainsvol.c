//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 285
//Natives Count : 116
//Parameters Count : 2

#region Local Var
	struct<1081> Local_0 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_271 = 0;
	Local_272 = { StackVal, ScriptParam_0 };
	Function_65("Initializing GreatPlains Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_274 = 500;
		uLocal_275 = Function_64();
		switch (iLocal_271)
		{
			case 0x00000000:
				if (Function_62())
				{
					Function_58();
					REQUEST_STRING_TABLE("graveyards");
					iLocal_271 = 1;
				}
				bLocal_274 = false;
				break;
			
			case 0x00000001:
				if (HAS_STRING_TABLE_LOADED("graveyards"))
				{
					Function_57(&uLocal_276);
					Function_56(StackVal, &uLocal_276, &uLocal_279, 2, 4294967295, 0);
					iLocal_271 = 2;
				}
				bLocal_274 = false;
				break;
			
			case 0x00000002:
				Function_55(&(Global_29008[Local_272]), 16);
				Function_54("Finished Initializing GreatPlains Volumes", 5.0f);
				iLocal_271 = 3;
				bLocal_274 = false;
				break;
			
			case 0x00000003:
				if (!Function_53(&Global_30717))
				{
					Function_13(&uLocal_276, &uLocal_279, uLocal_275, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_274 = false;
				break;
		}
		WAIT(bLocal_274);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_11(&(Global_26282[24]));
	Function_3(&uLocal_276, &uLocal_279);
	Function_2();
	Function_1(&(Global_29008[Local_272]), 16);
	Function_54("Unloaded GreatPlains Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1A4 / 420
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1BB / 443
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1C6 / 454
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

void Function_4(bool bParam0, bool bParam1, bool bParam2) //Position: 0x21E / 542
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
	else if (StackVal || StackVal != 12 != 20)
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_5(Global_16524, bVar0, 1);
	}
	return;
}

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2FB / 763
{
	int iVar0;
	
	Function_8(bParam0);
	Function_7(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, bParam1);
	Function_6();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
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
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_6() //Position: 0x474 / 1140
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x480 / 1152
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

void Function_8(int iParam0) //Position: 0x4C6 / 1222
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

void Function_9(var uParam0, int iParam1) //Position: 0x50C / 1292
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x526 / 1318
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(int iParam0) //Position: 0x543 / 1347
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_12(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_12(bool bParam0) //Position: 0x56F / 1391
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_13(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x5B4 / 1460
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_52(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_14(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_14(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x635 / 1589
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_51(uParam0))
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
								Function_49(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_48(uParam0, 8);
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
								Function_48(uParam0, 4);
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
				if ((((((bVar1 && Function_47(iParam2)) && !Function_46(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_45(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
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
							if (Function_44())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_48(uParam0, 16);
								Function_36(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
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
				Function_48(uParam0, 2);
			}
			else
			{
				Function_9(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_47(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_35(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_10(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_34(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_48(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_47(iParam2))
					{
						Function_33(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_15(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_15(int iParam0) //Position: 0xA4E / 2638
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_35(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_55(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_20(473, 1, 0, 0);
		iVar0 = Function_19(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_20(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_20(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_20(476, 1, 0, 0);
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
		Function_18(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_18(7, 30);
	}
	if (Function_17(473) <= Function_16(473))
	{
		if (!Function_44())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_16(int iParam0) //Position: 0xB4D / 2893
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_17(int iParam0) //Position: 0xB8A / 2954
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_18(int iParam0, bool bParam1) //Position: 0xBC3 / 3011
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

var Function_19(int iParam0) //Position: 0xC2A / 3114
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_47(iParam0))
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

int Function_20(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC82 / 3202
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
	Function_32(iParam0, TO_FLOAT(bParam1), 1);
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xEA2 / 3746
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_16(390))), 32);
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
					bVar19 = (Function_17(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_17(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_29(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_26(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_23(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_22(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_22() //Position: 0x14CF / 5327
{
	int iVar0;
	
	return iVar0;
}

var Function_23(int iParam0) //Position: 0x14D7 / 5335
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_24(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x14E8 / 5352
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_25(char* cParam0, char* cParam1) //Position: 0x15DD / 5597
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x15F6 / 5622
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_28(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_27(Function_28(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_27(int iParam0, int iParam1) //Position: 0x165B / 5723
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_28(int iParam0, bool bParam1) //Position: 0x166D / 5741
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_29(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x167F / 5759
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
	if (((Function_30(iParam0) != 19 || Function_30(iParam0) != 17) || Function_30(iParam0) != 10) || Function_30(iParam0) != 9)
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

int Function_30(int iParam0) //Position: 0x17AF / 6063
{
	return Global_35278[iParam020].f_48;
}

void Function_31(int iParam0) //Position: 0x17BE / 6078
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

int Function_32(int iParam0, float fParam1, bool bParam2) //Position: 0x1958 / 6488
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
		Global_34581[iVar1] = (Global_34581[iVar1] + fParam1);
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

void Function_33(var uParam0, int iParam1) //Position: 0x1B72 / 7026
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_34(struct<5> Param0) //Position: 0x1B7F / 7039
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1BA5 / 7077
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1BC1 / 7105
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_43(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_42(iParam1))
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
	if (!Function_39(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	bVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(bVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(bVar3, iParam1);
		SET_CRIME_VICTIM(bVar3, bParam3);
		SET_CRIME_CRIMINAL(bVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(bVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(bVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_37();
		}
		SET_CRIME_FACTION(StackVal, bVar3);
		SET_CRIME_TALLIED(bVar3, 0);
		SET_CRIME_COUNTER(bVar3, 1);
		SET_CRIME_WORLD_REGION(bVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(bVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(bVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return bVar3;
}

void Function_37() //Position: 0x1E51 / 7761
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_38(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x1EB4 / 7860
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

bool Function_39(bool bParam0) //Position: 0x1EE3 / 7907
{
	if (Function_45(256))
	{
		return 0;
	}
	if (Function_45(262144))
	{
		return 0;
	}
	if (Function_41())
	{
		return 0;
	}
	if (!Function_45(1))
	{
		return 0;
	}
	if (!Function_45(4096))
	{
		return 0;
	}
	if (bParam0 && Function_40(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_45(2048))
	{
		return 0;
	}
	if (Function_44() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_40(int iParam0) //Position: 0x1F59 / 8025
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_41() //Position: 0x1F6A / 8042
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

bool Function_42(int iParam0) //Position: 0x1F83 / 8067
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_43(int iParam0) //Position: 0x1F99 / 8089
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_44() //Position: 0x1FAE / 8110
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_45(int iParam0) //Position: 0x1FB7 / 8119
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1FD5 / 8149
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

bool Function_47(int iParam0) //Position: 0x2079 / 8313
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_48(var uParam0, int iParam1) //Position: 0x208F / 8335
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x20A0 / 8352
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
			Function_50(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_5(StackVal, bVar1, bParam4);
		}
	}
}

void Function_50(int iParam0, int iParam1) //Position: 0x2112 / 8466
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x2137 / 8503
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

bool Function_52(int iParam0) //Position: 0x2154 / 8532
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x2170 / 8560
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_47((*iParam0)[iVar0]))
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

void Function_54(bool bParam0, float fParam1) //Position: 0x21BD / 8637
{
	if (!Function_52(128))
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

void Function_55(var uParam0, bool bParam1) //Position: 0x21FB / 8699
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_56(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x220A / 8714
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

void Function_57(var uParam0) //Position: 0x22E5 / 8933
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

void Function_58() //Position: 0x22F4 / 8948
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("blk_cemetary01Props01x");
	Global_26282[24] = 0;
	Global_26282[24].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		Function_59(&(Global_26282[24]), iVar0);
		iVar0++;
	}
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x2344 / 9028
{
	if (iParam1 <= 32)
	{
		Function_60(iParam0, Function_61(iParam1));
	}
	else
	{
		Function_60(iParam0 + 4, Function_61((iParam1 - 32)));
	}
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x236D / 9069
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_61(bool bParam0) //Position: 0x237C / 9084
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_62() //Position: 0x2388 / 9096
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("GreatPlains_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("GreatPlains_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blk_v_robbery_bank", 2, 1346,366f, 81,34664f, 751,1907f, 0.0f, 0.0f, 0.0f, 17,39107f, 17,50947f, 14,99229f);
	Local_0.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "grtv_flk_NW_set");
	(*&Local_0 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs12", 3, -54,2902f, 114,6276f, 1292,46f, 0.0f, -6,764513f, 0.0f, 57,62737f, 29,91328f, 74,97815f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[0]);
	(*&Local_0 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs11", 3, -116,1067f, 139,3254f, 1461,238f, 0.0f, 36,96094f, 0.0f, 40,70086f, 26,70453f, 81,41494f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[1]);
	(*&Local_0 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs10", 3, -194,7322f, 121,6231f, 1308,54f, 0.0f, 42,25089f, 0.0f, 59,11852f, 32,7988f, 83,63084f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[2]);
	(*&Local_0 + 8)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs9", 3, 285,138f, 94,36859f, 993,8371f, 0.0f, 20.0f, 0.0f, 51,4483f, 32,08016f, 49,86724f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[3]);
	(*&Local_0 + 8)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs8", 3, 143,9431f, 94,36859f, 1051,083f, 0.0f, 20.0f, 0.0f, 99,15746f, 39,93661f, 33,04917f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[4]);
	(*&Local_0 + 8)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs7", 3, -8,506625f, 111,1147f, 1141,139f, 0.0f, 20.0f, 0.0f, 82,18313f, 33,48681f, 18,8488f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[5]);
	(*&Local_0 + 8)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs6", 3, -145,0075f, 117,3168f, 1194,091f, 0.0f, 20.0f, 0.0f, 63,47575f, 40,97692f, 72,47535f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[6]);
	(*&Local_0 + 8)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs5", 3, -24,17779f, 127,498f, 1591,916f, 0.0f, 1,280679f, 0.0f, 40,62563f, 33,48681f, 139,8717f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[7]);
	(*&Local_0 + 8)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs4", 3, -35,64503f, 136,5509f, 1762,332f, 0.0f, 20.0f, 0.0f, 33,48681f, 33,48681f, 33,48681f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[8]);
	(*&Local_0 + 8)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs3", 3, -100,1049f, 140,3734f, 1625,072f, 0.0f, 20.0f, 0.0f, 30,39426f, 33,48681f, 122,0314f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 8)[9]);
	Local_0.f_76 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "grtv_flk_CENTER_set");
	(*&Local_0 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nbuffalos3", 3, 49,5673f, 118,6022f, 1792,977f, 0.0f, 20.0f, 0.0f, 60,3822f, 28,85181f, 82,89291f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 56)[0]);
	(*&Local_0 + 56)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "buffalos", 3, 210,5763f, 145,9005f, 1488,596f, 0.0f, 5,336369f, 0.0f, 201,5079f, 50,13197f, 370,2873f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 56)[1]);
	(*&Local_0 + 56)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nbuffalos1", 3, 428,3508f, 145,9005f, 1091,086f, 0.0f, -40,39722f, 0.0f, 148,988f, 50,13197f, 155,6049f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 56)[2]);
	(*&Local_0 + 56)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nbuffalos2", 3, 465,1242f, 119,7648f, 1373,33f, 0.0f, 96,65638f, 0.0f, 127,3155f, 25,66472f, 70,63678f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 56)[3]);
	Local_0.f_104 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "grtv_flk_SOUTH_set");
	(*&Local_0 + 80)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncougars11", 3, 648,2339f, 134,1398f, 1845,425f, 0.0f, 32,75464f, 0.0f, 121,6643f, 68,45309f, 132,5476f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 80)[0]);
	(*&Local_0 + 80)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncougars10", 3, 443,3477f, 94,73312f, 1771,535f, 0.0f, 20.0f, 0.0f, 89,86477f, 89,86477f, 89,86477f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 80)[1]);
	(*&Local_0 + 80)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cougars9", 3, 209,7166f, 91,35681f, 1934,343f, 0.0f, 20.0f, 0.0f, 189,1637f, 89,86477f, 75,75009f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 80)[2]);
	(*&Local_0 + 80)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cougars8", 3, 545,233f, 104,4078f, 1635,16f, 0.0f, -11,80128f, 0.0f, 139,2927f, 89,86477f, 73,26148f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 80)[3]);
	(*&Local_0 + 80)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cougars7", 3, 763,0635f, 95,29845f, 1653,671f, 0.0f, -16,63512f, 0.0f, 68,9f, 89,86477f, 108,8123f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 80)[4]);
	Local_0.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "grtv_gullcoast_set");
	(*&Local_0 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife27", 3, 542,2242f, 68,26665f, 2042,296f, 0.0f, -29,3247f, 0.0f, 130,4115f, 19,64153f, 74,55981f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[0]);
	(*&Local_0 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife11", 3, 719,006f, 68,2666f, 2043,745f, 0.0f, 1,951811f, 0.0f, 130,4115f, 23,56285f, 74,55981f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[1]);
	(*&Local_0 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife25", 3, 862,4601f, 68,26663f, 1790,165f, 0.0f, 73,88887f, 0.0f, 92,73218f, 25,94783f, 75,14059f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[2]);
	(*&Local_0 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife26", 3, 871,1542f, 68,26662f, 1956,079f, 0.0f, 73,88887f, 0.0f, 92,73218f, 18,71796f, 75,14059f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[3]);
	(*&Local_0 + 108)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife12", 3, 924,7684f, 68,26663f, 1706,121f, 0.0f, 73,88887f, 0.0f, 92,73218f, 27,40582f, 75,14059f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[4]);
	(*&Local_0 + 108)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife13", 3, 864,7108f, 68,26666f, 1212,507f, 0.0f, 91,04541f, 0.0f, 76,14072f, 26,22717f, 64,7296f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[5]);
	(*&Local_0 + 108)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife14", 3, 829,8139f, 68,26666f, 1087,609f, 0.0f, -30,65034f, 0.0f, 94,80785f, 20,92016f, 82,87566f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[6]);
	(*&Local_0 + 108)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife22", 3, 867,8832f, 68,26666f, 1300,542f, 0.0f, 130,2414f, 0.0f, 76,14072f, 28,67517f, 64,7296f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[7]);
	(*&Local_0 + 108)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife23", 3, 873,435f, 68,26666f, 1412,371f, 0.0f, 130,2414f, 0.0f, 76,14072f, 20,79433f, 64,7296f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[8]);
	(*&Local_0 + 108)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife24", 3, 958,8206f, 68,26663f, 1568,463f, 0.0f, 86,45786f, 0.0f, 133,3231f, 21,32483f, 64,7296f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 108)[9]);
	Local_0.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "grtv_aquaticWildlife_set");
	(*&Local_0 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife10", 3, 463,473f, 68,26824f, 1882,711f, 0.0f, -14,30964f, 0.0f, 173,5558f, 32,81913f, 61,38209f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 156)[0]);
	(*&Local_0 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife15", 3, 668,8126f, 71,2487f, 1001,604f, 0.0f, -36,56364f, 0.0f, 204,8105f, 21,72543f, 59,11795f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 156)[1]);
	(*&Local_0 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife16", 3, 410,3493f, 74,29018f, 943,0745f, 0.0f, 7,388419f, 0.0f, 138,6952f, 26,14467f, 51,82736f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 156)[2]);
	(*&Local_0 + 156)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife17", 3, 175,2287f, 89,25648f, 983,217f, 0.0f, 25,225f, 0.0f, 139,4472f, 25,57897f, 51,54788f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 156)[3]);
	(*&Local_0 + 156)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife18", 3, -22,47146f, 88,03369f, 1109,185f, 0.0f, 25,225f, 0.0f, 139,4472f, 37,6038f, 51,54788f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 156)[4]);
	(*&Local_0 + 156)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife19", 3, -221,0464f, 116,4549f, 1186,166f, 0.0f, 42,80977f, 0.0f, 140,1022f, 17,40649f, 34,5661f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 156)[5]);
	(*&Local_0 + 156)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_aquaticWildlife20", 3, -404,7502f, 105,5874f, 1166,046f, 0.0f, -49,27761f, 0.0f, 138,3392f, 17,54135f, 35,00663f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 156)[6]);
	Local_0.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_birds", 2, 184.0f, 118,4628f, 1524.0f, 0.0f, 0.0f, 0.0f, 1548,724f, 136,7648f, 1274,193f);
	Local_0.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_dixons", 3, 172,723f, 81,27254f, 2063,629f, 0.0f, -8,247506f, 0.0f, 27,80257f, 13,1623f, 10,755f);
	Local_0.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_0, "grtv_bhstop", 2, 757,0193f, 78,525f, 1234,986f, 0.0f, 0.0f, 0.0f, 7,127447f, 8,294168f, 15,94082f);
	Local_0.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nEllipsoid", false, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_0.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_0, "Ellipsoid1", false, 756,2045f, 0.0f, 1035,028f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_0.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, 2203,662f, 0.0f, 1595,216f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	*(&Local_0 + 216) = { 1378,725f, 78,7847f, 826,4789f };
	*(&Local_0 + 216 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_240 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bad", 1378,725f, 78,7847f, 826,4789f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 244) = { 1321,037f, 78,63029f, 801,6255f };
	*(&Local_0 + 244 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_268 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bad1", 1321,037f, 78,63029f, 801,6255f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 272) = { 1276,778f, 79,33315f, 813,4847f };
	*(&Local_0 + 272 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_296 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bad2", 1276,778f, 79,33315f, 813,4847f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 300) = { 1338,44f, 78,9436f, 763,5467f };
	*(&Local_0 + 300 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_324 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_good", 1338,44f, 78,9436f, 763,5467f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 328) = { 1356,502f, 78,56875f, 762,9736f };
	*(&Local_0 + 328 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_352 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_good1", 1356,502f, 78,56875f, 762,9736f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 356) = { 1346,351f, 79,93112f, 754,5385f };
	*(&Local_0 + 356 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_380 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_good2", 1346,351f, 79,93112f, 754,5385f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 384) = { 1350,543f, 79,83478f, 745,4222f };
	*(&Local_0 + 384 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_408 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_loot", 1350,543f, 79,83478f, 745,4222f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 412) = { 1352,766f, 79,83478f, 758,0829f };
	*(&Local_0 + 412 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_436 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bank", 1352,766f, 79,83478f, 758,0829f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 440) = { 1340,136f, 79,62601f, 758,6826f };
	*(&Local_0 + 440 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_464 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bank1", 1340,136f, 79,62601f, 758,6826f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 468) = { 1341,458f, 79,52139f, 755,6003f };
	*(&Local_0 + 468 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_492 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bank2", 1341,458f, 79,52139f, 755,6003f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 496) = { 1345,523f, 79,42148f, 751,3326f };
	*(&Local_0 + 496 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bank3", 1345,523f, 79,42148f, 751,3326f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 524) = { 1352,454f, 79,69425f, 752,5648f };
	*(&Local_0 + 524 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_548 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bank4", 1352,454f, 79,69425f, 752,5648f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 552) = { 1338,687f, 80,87756f, 747,8107f };
	*(&Local_0 + 552 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_576 = CREATE_POINT_IN_LAYOUT(Local_0, "blk_f_robbery_bank5", 1338,687f, 80,87756f, 747,8107f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 580) = { 278,2518f, 91,27737f, 923,1232f };
	*(&Local_0 + 580 + 12) = { 0.0f, -180,298f, 0.0f };
	Local_0.f_604 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_grt1", 278,2518f, 91,27737f, 923,1232f, 0.0f, -180,298f, 0.0f);
	*(&Local_0 + 608) = { 292,7893f, 90,91013f, 925,5304f };
	*(&Local_0 + 608 + 12) = { 0.0f, 84,85152f, 0.0f };
	Local_0.f_632 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_grt1", 292,7893f, 90,91013f, 925,5304f, 0.0f, 84,85152f, 0.0f);
	*(&Local_0 + 636) = { 274,748f, 91,40363f, 926,775f };
	*(&Local_0 + 636 + 12) = { 0.0f, -90,22207f, 0.0f };
	Local_0.f_660 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_grt1", 274,748f, 91,40363f, 926,775f, 0.0f, -90,22207f, 0.0f);
	*(&Local_0 + 664) = { 287,4493f, 90,91797f, 925,2139f };
	*(&Local_0 + 664 + 12) = { 0.0f, 88,48517f, 0.0f };
	Local_0.f_688 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_grt1", 287,4493f, 90,91797f, 925,2139f, 0.0f, 88,48517f, 0.0f);
	*(&Local_0 + 692) = { 285,3504f, 90,55353f, 921,7806f };
	*(&Local_0 + 692 + 12) = { 0.0f, 101,5619f, 0.0f };
	Local_0.f_716 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_grt1", 285,3504f, 90,55353f, 921,7806f, 0.0f, 101,5619f, 0.0f);
	*(&Local_0 + 720) = { 278,021f, 91,31001f, 926,775f };
	*(&Local_0 + 720 + 12) = { 0.0f, 88,67081f, 0.0f };
	Local_0.f_744 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_grt1", 278,021f, 91,31001f, 926,775f, 0.0f, 88,67081f, 0.0f);
	*(&Local_0 + 748) = { 480,021f, 98,41798f, 1787,462f };
	*(&Local_0 + 748 + 12) = { 0.0f, 187,0551f, 0.0f };
	Local_0.f_772 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_grt2", 480,021f, 98,41798f, 1787,462f, 0.0f, 187,0551f, 0.0f);
	*(&Local_0 + 776) = { 480,0001f, 98,51614f, 1800.0f };
	*(&Local_0 + 776 + 12) = { 0.0f, 62,35506f, 0.0f };
	Local_0.f_800 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_grt2", 480,0001f, 98,51614f, 1800.0f, 0.0f, 62,35506f, 0.0f);
	*(&Local_0 + 804) = { 478,0531f, 98,54673f, 1793,31f };
	*(&Local_0 + 804 + 12) = { 0.0f, -52,34931f, 0.0f };
	Local_0.f_828 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_grt2", 478,0531f, 98,54673f, 1793,31f, 0.0f, -52,34931f, 0.0f);
	*(&Local_0 + 832) = { 481,8415f, 98,38428f, 1796.0f };
	*(&Local_0 + 832 + 12) = { 0.0f, 45,57205f, 0.0f };
	Local_0.f_856 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_grt2", 481,8415f, 98,38428f, 1796.0f, 0.0f, 45,57205f, 0.0f);
	*(&Local_0 + 860) = { 475,5848f, 98,48624f, 1790,141f };
	*(&Local_0 + 860 + 12) = { 0.0f, -122,6327f, 0.0f };
	Local_0.f_884 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_grt2", 475,5848f, 98,48624f, 1790,141f, 0.0f, -122,6327f, 0.0f);
	*(&Local_0 + 888) = { 480,021f, 98,54673f, 1791,775f };
	*(&Local_0 + 888 + 12) = { 0.0f, 130,0659f, 0.0f };
	Local_0.f_912 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_grt2", 480,021f, 98,54673f, 1791,775f, 0.0f, 130,0659f, 0.0f);
	*(&Local_0 + 916) = { 798,021f, 77,34565f, 1709,07f };
	*(&Local_0 + 916 + 12) = { 0.0f, 167,0936f, 0.0f };
	Local_0.f_940 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_grt3", 798,021f, 77,34565f, 1709,07f, 0.0f, 167,0936f, 0.0f);
	*(&Local_0 + 944) = { 800,8351f, 77,49451f, 1708,022f };
	*(&Local_0 + 944 + 12) = { 0.0f, -83,21953f, 0.0f };
	Local_0.f_968 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_grt3", 800,8351f, 77,49451f, 1708,022f, 0.0f, -83,21953f, 0.0f);
	*(&Local_0 + 972) = { 798,5142f, 77,3733f, 1715,225f };
	*(&Local_0 + 972 + 12) = { 0.0f, 10,99088f, 0.0f };
	Local_0.f_996 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_grt3", 798,5142f, 77,3733f, 1715,225f, 0.0f, 10,99088f, 0.0f);
	*(&Local_0 + 1000) = { 796,9107f, 77,41772f, 1717,648f };
	*(&Local_0 + 1000 + 12) = { 0.0f, -13,54039f, 0.0f };
	Local_0.f_1024 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_grt3", 796,9107f, 77,41772f, 1717,648f, 0.0f, -13,54039f, 0.0f);
	*(&Local_0 + 1028) = { 794,2851f, 77,34481f, 1717,344f };
	*(&Local_0 + 1028 + 12) = { 0.0f, -40,22768f, 0.0f };
	Local_0.f_1052 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_grt3", 794,2851f, 77,34481f, 1717,344f, 0.0f, -40,22768f, 0.0f);
	*(&Local_0 + 1056) = { 798,021f, 77,31161f, 1712,775f };
	*(&Local_0 + 1056 + 12) = { 0.0f, 191,6665f, 0.0f };
	Local_0.f_1080 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_grt3", 798,021f, 77,31161f, 1712,775f, 0.0f, 191,6665f, 0.0f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x3BD3 / 15315
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

var Function_64() //Position: 0x3C1C / 15388
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(bool bParam0, var uParam1) //Position: 0x3C31 / 15409
{
	if (!Function_52(128))
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

