//Decompiled with MagicRDR v1.0
//Function Count : 65
//Statics Count : 287
//Natives Count : 118
//Parameters Count : 2

#region Local Var
	struct<1089> Local_0 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_273 = 0;
	Local_274 = { StackVal, ScriptParam_0 };
	Function_64("Initializing Gaptooth Ridge Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_276 = 500;
		uLocal_277 = Function_63();
		switch (iLocal_273)
		{
			case 0x00000000:
				if (Function_61())
				{
					Function_57();
					REQUEST_STRING_TABLE("graveyards");
					iLocal_273 = 1;
				}
				bLocal_276 = false;
				break;
			
			case 0x00000001:
				Function_56(StackVal, &uLocal_278, &uLocal_281, 2, 4294967295, 0);
				HORSE_ADD_REPULSION_EXCLUSION_VOLUME(Local_0.f_276);
				iLocal_273 = 2;
				bLocal_276 = false;
				break;
			
			case 0x00000002:
				if (HAS_STRING_TABLE_LOADED("graveyards"))
				{
					Function_55(&(Global_29008[Local_274]), 16);
					Function_54("Finished Initializing Gaptooth Ridge Volumes", 5.0f);
					iLocal_273 = 3;
				}
				bLocal_276 = false;
				break;
			
			case 0x00000003:
				if (!Function_53(&Global_30658))
				{
					Function_13(&uLocal_278, &uLocal_281, uLocal_277, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_276);
	}
	if (IS_VOLUME_VALID(Local_0.f_276))
	{
		HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(Local_0.f_276);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_11(&(Global_26282[44]));
	Function_3(&uLocal_278, &uLocal_281);
	Function_2();
	Function_1(&(Global_29008[Local_274]), 16);
	Function_54("Unloaded Gaptooth Ridge Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1C0 / 448
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1D7 / 471
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1E2 / 482
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

void Function_4(int iParam0, int iParam1, int iParam2) //Position: 0x23A / 570
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

void Function_5(int iParam0, bool bParam1, bool bParam2) //Position: 0x320 / 800
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

void Function_6() //Position: 0x499 / 1177
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x4A5 / 1189
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

void Function_8(int iParam0) //Position: 0x4EB / 1259
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

void Function_9(var uParam0, int iParam1) //Position: 0x531 / 1329
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x54B / 1355
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(int iParam0) //Position: 0x568 / 1384
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

void Function_12(bool bParam0) //Position: 0x594 / 1428
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

void Function_13(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x5D9 / 1497
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

bool Function_14(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x65A / 1626
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

void Function_15(int iParam0) //Position: 0xA73 / 2675
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

float Function_16(int iParam0) //Position: 0xB72 / 2930
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_17(int iParam0) //Position: 0xBAF / 2991
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_18(int iParam0, bool bParam1) //Position: 0xBE8 / 3048
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

var Function_19(int iParam0) //Position: 0xC4F / 3151
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

int Function_20(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xCA7 / 3239
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

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xEC7 / 3783
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

var Function_22() //Position: 0x14F4 / 5364
{
	int iVar0;
	
	return iVar0;
}

var Function_23(int iParam0) //Position: 0x14FC / 5372
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_24(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x150D / 5389
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

struct<32> Function_25(char* cParam0, bool bParam1) //Position: 0x1602 / 5634
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x161B / 5659
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_28(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_27(Function_28(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_27(int iParam0, int iParam1) //Position: 0x1680 / 5760
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_28(int iParam0, bool bParam1) //Position: 0x1692 / 5778
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_29(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x16A4 / 5796
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

int Function_30(int iParam0) //Position: 0x17D4 / 6100
{
	return Global_35278[iParam020].f_48;
}

void Function_31(int iParam0) //Position: 0x17E3 / 6115
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

int Function_32(int iParam0, float fParam1, bool bParam2) //Position: 0x197D / 6525
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

void Function_33(var uParam0, int iParam1) //Position: 0x1BC1 / 7105
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_34(struct<5> Param0) //Position: 0x1BCE / 7118
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1BF4 / 7156
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1C10 / 7184
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
			SET_CRIME_WITNESSED(bVar3, 1);
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

void Function_37() //Position: 0x1EA0 / 7840
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1F03 / 7939
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

bool Function_39(bool bParam0) //Position: 0x1F32 / 7986
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

int Function_40(int iParam0) //Position: 0x1FA8 / 8104
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_41() //Position: 0x1FB9 / 8121
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

bool Function_42(int iParam0) //Position: 0x1FD2 / 8146
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_43(int iParam0) //Position: 0x1FE8 / 8168
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_44() //Position: 0x1FFD / 8189
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_45(int iParam0) //Position: 0x2006 / 8198
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2024 / 8228
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

bool Function_47(int iParam0) //Position: 0x20C8 / 8392
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_48(var uParam0, int iParam1) //Position: 0x20DE / 8414
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x20EF / 8431
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
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_5(StackVal, bVar1, bParam4);
		}
	}
}

void Function_50(int iParam0, int iParam1) //Position: 0x2161 / 8545
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x2186 / 8582
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

bool Function_52(int iParam0) //Position: 0x21A3 / 8611
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x21BF / 8639
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

void Function_54(bool bParam0, float fParam1) //Position: 0x220C / 8716
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

void Function_55(var uParam0, bool bParam1) //Position: 0x224A / 8778
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_56(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x2259 / 8793
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

void Function_57() //Position: 0x2334 / 9012
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("tum_churchCemetary01x");
	Global_26282[44] = 0;
	Global_26282[44].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Function_58(&(Global_26282[44]), iVar0 + 3);
		iVar0++;
	}
	Function_58(&(Global_26282[44]), 15);
	Function_58(&(Global_26282[44]), 16);
	return;
}

void Function_58(int iParam0, int iParam1) //Position: 0x239B / 9115
{
	if (iParam1 <= 32)
	{
		Function_59(iParam0, Function_60(iParam1));
	}
	else
	{
		Function_59(iParam0 + 4, Function_60((iParam1 - 32)));
	}
	return;
}

void Function_59(var uParam0, int iParam1) //Position: 0x23C4 / 9156
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_60(bool bParam0) //Position: 0x23D3 / 9171
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_61() //Position: 0x23DF / 9183
{
	var uVar0;
	
	Function_62(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	Local_0.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "gapv_flk_SW_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_cougar1", 3, -3730.356f, 36.8742f, 3889.749f, 0.0f, -24.86723f, 0.0f, 304.9792f, 62.04052f, 150.1546f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_cougar2", 3, -4134.223f, 12.24644f, 3666.115f, 0.0f, -15.36179f, 0.0f, 171.6768f, 71.60851f, 101.9429f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_cougar3", 3, -4491.881f, 57.92462f, 3660.276f, 0.0f, 2.802504f, 0.0f, 236.791f, 71.60851f, 82.65063f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[2]);
	(*&Local_0 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_cougar4", 3, -4578.422f, 59.23138f, 3413.898f, 0.0f, 20.0f, 0.0f, 131.124f, 87.22605f, 181.0108f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[3]);
	(*&Local_0 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_cougar5", 3, -4668.099f, 73.28625f, 3155.711f, 0.0f, 20.0f, 0.0f, 140.4411f, 110.4049f, 90.32107f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[4]);
	(*&Local_0 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_cougar6", 3, -4723.405f, 45.17632f, 2960.281f, 0.0f, 20.0f, 0.0f, 150.1546f, 105.9404f, 112.3504f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[5]);
	(*&Local_0 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_cougar9", 3, -4515.046f, 40.54584f, 2733.641f, 0.0f, 20.0f, 0.0f, 150.1546f, 105.9404f, 102.4075f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[6]);
	Local_0.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "gapv_flk_CENTER_set");
	(*&Local_0 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote13", 3, -3852.005f, 43.54098f, 3084.998f, 0.0f, 20.0f, 0.0f, 93.92755f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[0]);
	(*&Local_0 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote12", 3, -3863.799f, 40.15688f, 2789.859f, 0.0f, -12.97189f, 0.0f, 177.9536f, 46.625f, 96.68821f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[1]);
	(*&Local_0 + 40)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote11", 3, -4013.259f, 43.35964f, 2709.135f, 0.0f, 20.0f, 0.0f, 118.6683f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[2]);
	(*&Local_0 + 40)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote10", 3, -4440.555f, 21.08234f, 2939.447f, 0.0f, 20.0f, 0.0f, 128.5317f, 46.625f, 105.729f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[3]);
	(*&Local_0 + 40)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote9", 3, -3980.355f, 17.56864f, 3519.065f, 0.0f, 20.0f, 0.0f, 83.27316f, 46.625f, 111.4658f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[4]);
	(*&Local_0 + 40)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote8", 3, -3664.592f, 22.15984f, 3224.203f, 0.0f, 20.0f, 0.0f, 116.8603f, 46.625f, 100.8802f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[5]);
	(*&Local_0 + 40)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote7", 3, -3890.831f, 48.57193f, 3324.378f, 0.0f, 20.0f, 0.0f, 113.1811f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[6]);
	(*&Local_0 + 40)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote6", 3, -4175.384f, 20.45136f, 2847.836f, 0.0f, 20.0f, 0.0f, 148.9403f, 46.625f, 82.46219f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[7]);
	(*&Local_0 + 40)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote5", 3, -4258.71f, 20.07837f, 3098.507f, 0.0f, 20.0f, 0.0f, 111.7724f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[8]);
	(*&Local_0 + 40)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote4", 3, -4145.278f, 8.031376f, 3324.61f, 0.0f, 20.0f, 0.0f, 94.02903f, 46.625f, 117.4999f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[9]);
	(*&Local_0 + 40)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote3", 3, -3624f, 38.65096f, 3012f, 0.0f, 20.0f, 0.0f, 128.5317f, 46.625f, 105.9383f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[10]);
	(*&Local_0 + 40)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote2", 3, -4047.658f, 31.78262f, 3123.171f, 0.0f, 20.0f, 0.0f, 74.5942f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[11]);
	(*&Local_0 + 40)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote1", 3, -3726.287f, 26.10191f, 3495.43f, 0.0f, 45.93203f, 0.0f, 215.7331f, 46.625f, 83.69476f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[12]);
	(*&Local_0 + 40)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_coyote23", 3, -4372.67f, 7.027458f, 3300.181f, 0.0f, 28.99118f, 0.0f, 87.18033f, 65.00832f, 284.0809f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[13]);
	(*&Local_0 + 40)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wild_horses1", 3, -3774.399f, 33.12946f, 2507.993f, 0.0f, 20.0f, 0.0f, 164.3489f, 80.34592f, 193.7874f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[14]);
	(*&Local_0 + 40)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wild_horses2", 3, -3549.128f, 38.02006f, 2774.042f, 0.0f, 20.0f, 0.0f, 128.2424f, 51.37399f, 128.2424f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 40)[15]);
	Local_0.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "gapv_flk_BIRD_set");
	(*&Local_0 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird1", 3, -4673.488f, 49.81181f, 3619.366f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[0]);
	(*&Local_0 + 112)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird2", 3, -4158.848f, 49.81181f, 3610.948f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[1]);
	(*&Local_0 + 112)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird3", 3, -3743.4f, 49.81181f, 3900.585f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[2]);
	(*&Local_0 + 112)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird4", 3, -4224.0f, 49.81181f, 2514.306f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[3]);
	(*&Local_0 + 112)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird5", 3, -4223.394f, 49.81181f, 3067.605f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[4]);
	(*&Local_0 + 112)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird6", 3, -3850.352f, 49.81181f, 3213.313f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[5]);
	(*&Local_0 + 112)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird7", 3, -3737.023f, 49.81181f, 2288.829f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[6]);
	(*&Local_0 + 112)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird8", 3, -3727.507f, 49.81181f, 3392.048f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[7]);
	(*&Local_0 + 112)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird9", 3, -4544.312f, 72.68917f, 2828.797f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[8]);
	(*&Local_0 + 112)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird10", 3, -4387.063f, 72.68917f, 3291.948f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[9]);
	(*&Local_0 + 112)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird11", 3, -4749.257f, 72.68917f, 3153.838f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[10]);
	(*&Local_0 + 112)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_bird12", 3, -3801.342f, 72.68917f, 2786.786f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 112)[11]);
	Local_0.f_196 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "gapv_flk_NORTH_set");
	(*&Local_0 + 168)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_wolf1", 3, -4228.547f, 29.1136f, 2643.438f, 0.0f, 20.0f, 0.0f, 111.5883f, 136.3014f, 95.68554f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 168)[0]);
	(*&Local_0 + 168)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_wolf2", 3, -4090.676f, 3.011772f, 2466.493f, 0.0f, 20.0f, 0.0f, 110.3815f, 91.51485f, 107.7598f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 168)[1]);
	(*&Local_0 + 168)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_wolf3", 3, -3864.493f, 89.40626f, 2090.393f, 0.0f, 20.0f, 0.0f, 123.8143f, 129.7085f, 227.4212f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 168)[2]);
	(*&Local_0 + 168)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_wolf4", 3, -4083.459f, 94.8625f, 2190.223f, 0.0f, 20.0f, 0.0f, 117.2605f, 129.7085f, 176.7809f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 168)[3]);
	(*&Local_0 + 168)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_wolf5", 3, -4182.706f, 61.91979f, 2404.235f, 0.0f, 40.66191f, 0.0f, 86.04659f, 91.51485f, 320.4328f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 168)[4]);
	(*&Local_0 + 168)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gtrv_wolf6", 3, -4379.103f, 30.77201f, 2512.407f, 0.0f, 58.91275f, 0.0f, 132.8442f, 91.51485f, 97.09076f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 168)[5]);
	Local_0.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ngtrv_bats", 3, -4346.91f, 30.45788f, 2756.438f, 0.0f, 148.838f, 0.0f, 14.41106f, 11.15615f, 16.66331f);
	Local_0.f_272 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_set");
	(*&Local_0 + 204)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_01", 3, -5209.555f, 22.96273f, 3348.832f, 0.0f, 20.0f, 0.0f, 137.0641f, 137.0641f, 137.0641f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[0]);
	(*&Local_0 + 204)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_02", 3, -4843.528f, 22.96273f, 3439.209f, 0.0f, 20.0f, 0.0f, 89.7691f, 89.7691f, 89.7691f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[1]);
	(*&Local_0 + 204)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_03", 3, -4983.613f, 22.96273f, 3592.85f, 0.0f, 29.19471f, 0.0f, 112.0248f, 89.7691f, 250.294f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[2]);
	(*&Local_0 + 204)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_04", 3, -4899.261f, 22.96273f, 3839.88f, 0.0f, 29.19471f, 0.0f, 145.6729f, 89.7691f, 111.7454f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[3]);
	(*&Local_0 + 204)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_05", 3, -4518.043f, 22.96273f, 3733.987f, 0.0f, 0.06501988f, 0.0f, 162.1872f, 79.42868f, 98.87355f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[4]);
	(*&Local_0 + 204)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_06", 3, -4731.243f, 22.96273f, 3767.873f, 0.0f, 16.62488f, 0.0f, 97.6675f, 47.83115f, 31.87144f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[5]);
	(*&Local_0 + 204)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_07", 3, -4128.314f, 22.96273f, 3861.144f, 0.0f, -18.41745f, 0.0f, 162.1872f, 79.42868f, 98.87355f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[6]);
	(*&Local_0 + 204)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_08", 3, -3890.513f, 22.96273f, 4014.724f, 0.0f, -32.20895f, 0.0f, 162.1872f, 79.42868f, 80.98814f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[7]);
	(*&Local_0 + 204)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_09", 3, -3513.995f, 22.96273f, 4009.769f, 0.0f, 19.85783f, 0.0f, 116.8982f, 57.2491f, 58.3731f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[8]);
	(*&Local_0 + 204)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_010", 3, -3730.328f, 22.96273f, 4046.1f, 0.0f, -19.16317f, 0.0f, 116.8982f, 57.2491f, 58.3731f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[9]);
	(*&Local_0 + 204)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_011", 3, -3302.616f, 22.96273f, 3849.584f, 0.0f, 19.62695f, 0.0f, 178.1278f, 87.23534f, 88.94808f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[10]);
	(*&Local_0 + 204)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_012", 3, -3021.879f, 22.96273f, 3826.465f, 0.0f, 19.62695f, 0.0f, 178.1278f, 87.23534f, 88.94808f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[11]);
	(*&Local_0 + 204)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_013", 3, -2795.638f, 22.96273f, 3750.5f, 0.0f, -9.077846f, 0.0f, 123.1342f, 87.23534f, 104.1018f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[12]);
	(*&Local_0 + 204)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_014", 3, -2610.682f, 22.96273f, 3814.905f, 0.0f, -9.077846f, 0.0f, 123.1342f, 87.23534f, 74.04646f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[13]);
	(*&Local_0 + 204)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_015", 3, -4314.921f, 22.96273f, 3752.152f, 0.0f, -31.03139f, 0.0f, 116.8665f, 57.23357f, 71.24488f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[14]);
	(*&Local_0 + 204)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_aquaticWildlife_016", 3, -4974.818f, 22.96273f, 3987.288f, 0.0f, -86.81307f, 0.0f, 116.8665f, 57.23357f, 71.24488f);
	ADD_TO_VOLUME_SET(Local_0.f_272, (*&Local_0 + 204)[15]);
	Local_0.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_0, "gapv_RepulsionExclusion", 3, -3775.939f, 27.31711f, 2676.473f, 0.0f, 13.22444f, 0.0f, 12.58057f, 17.39492f, 56.1422f);
	*(&Local_0 + 280) = { -3934.543f, 29.14526f, 2942.613f };
	*(&Local_0 + 280 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_304 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_bad", -3934.543f, 29.14526f, 2942.613f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 308) = { -3975.657f, 27.81833f, 2920.438f };
	*(&Local_0 + 308 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_332 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_good", -3975.657f, 27.81833f, 2920.438f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 336) = { -3977.408f, 28.62815f, 2909.98f };
	*(&Local_0 + 336 + 12) = { 0.0f, 168.126f, 0.0f };
	Local_0.f_360 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_loot", -3977.408f, 28.62815f, 2909.98f, 0.0f, 168.126f, 0.0f);
	*(&Local_0 + 364) = { -3951.192f, 28.53456f, 2969.987f };
	*(&Local_0 + 364 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_388 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_bad1", -3951.192f, 28.53456f, 2969.987f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 392) = { -3936.816f, 29.46948f, 2922.49f };
	*(&Local_0 + 392 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_416 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_bad2", -3936.816f, 29.46948f, 2922.49f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 420) = { -3988.763f, 29.1018f, 2972.469f };
	*(&Local_0 + 420 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_444 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_bad3", -3988.763f, 29.1018f, 2972.469f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 448) = { -3990.54f, 27.53285f, 2911.297f };
	*(&Local_0 + 448 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_472 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_good1", -3990.54f, 27.53285f, 2911.297f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 476) = { -3973.481f, 27.91159f, 2902.941f };
	*(&Local_0 + 476 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_500 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_good2", -3973.481f, 27.91159f, 2902.941f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 504) = { -3998.449f, 27.70465f, 2914.286f };
	*(&Local_0 + 504 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_0.f_528 = CREATE_POINT_IN_LAYOUT(Local_0, "tumf_robbery_good3", -3998.449f, 27.70465f, 2914.286f, 0.0f, 168.1262f, 0.0f);
	*(&Local_0 + 532) = { -3935.961f, 28.107f, 2635.271f };
	*(&Local_0 + 532 + 12) = { 0.0f, 213.155f, 0.0f };
	Local_0.f_556 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_gtr1", -3935.961f, 28.107f, 2635.271f, 0.0f, 213.155f, 0.0f);
	*(&Local_0 + 560) = { -3941.559f, 27.512f, 2623.708f };
	*(&Local_0 + 560 + 12) = { 0.0f, 81.667f, 0.0f };
	Local_0.f_584 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_gtr1", -3941.559f, 27.512f, 2623.708f, 0.0f, 81.667f, 0.0f);
	*(&Local_0 + 588) = { -3945.927f, 27.519f, 2636.138f };
	*(&Local_0 + 588 + 12) = { 0.0f, 265.59f, 0.0f };
	Local_0.f_612 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_gtr1", -3945.927f, 27.519f, 2636.138f, 0.0f, 265.59f, 0.0f);
	*(&Local_0 + 616) = { -3942.989f, 27.608f, 2635.25f };
	*(&Local_0 + 616 + 12) = { 0.0f, 277.076f, 0.0f };
	Local_0.f_640 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_gtr1", -3942.989f, 27.608f, 2635.25f, 0.0f, 277.076f, 0.0f);
	*(&Local_0 + 644) = { -3942.084f, 27.596f, 2631.013f };
	*(&Local_0 + 644 + 12) = { 0.0f, 243.758f, 0.0f };
	Local_0.f_668 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_gtr1", -3942.084f, 27.596f, 2631.013f, 0.0f, 243.758f, 0.0f);
	*(&Local_0 + 672) = { -3788.462f, 21.377f, 2650.921f };
	*(&Local_0 + 672 + 12) = { 0.0f, 15.563f, 0.0f };
	Local_0.f_696 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingOffScreen_gtr1", -3788.462f, 21.377f, 2650.921f, 0.0f, 15.563f, 0.0f);
	*(&Local_0 + 700) = { -3936.042f, 31.487f, 2638.841f };
	*(&Local_0 + 700 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_724 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingNoose___1", -3936.042f, 31.487f, 2638.841f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 728) = { -3936.05f, 27.751f, 2638.806f };
	*(&Local_0 + 728 + 12) = { 0.0f, 343.3f, 0.0f };
	Local_0.f_752 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_gtr1", -3936.05f, 27.751f, 2638.806f, 0.0f, 343.3f, 0.0f);
	*(&Local_0 + 756) = { -4424.0f, 25.73199f, 2967.308f };
	*(&Local_0 + 756 + 12) = { 0.0f, -183.4835f, 0.0f };
	Local_0.f_780 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_gtr2", -4424.0f, 25.73199f, 2967.308f, 0.0f, -183.4835f, 0.0f);
	*(&Local_0 + 784) = { -4420.0f, 25.59995f, 2968f };
	*(&Local_0 + 784 + 12) = { 0.0f, -20.80237f, 0.0f };
	Local_0.f_808 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_gtr2", -4420.0f, 25.59995f, 2968f, 0.0f, -20.80237f, 0.0f);
	*(&Local_0 + 812) = { -4427.648f, 25.59995f, 2973.27f };
	*(&Local_0 + 812 + 12) = { 0.0f, -54.54519f, 0.0f };
	Local_0.f_836 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_gtr2", -4427.648f, 25.59995f, 2973.27f, 0.0f, -54.54519f, 0.0f);
	*(&Local_0 + 840) = { -4416.209f, 25.59994f, 2971.18f };
	*(&Local_0 + 840 + 12) = { 0.0f, 92.50725f, 0.0f };
	Local_0.f_864 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_gtr2", -4416.209f, 25.59994f, 2971.18f, 0.0f, 92.50725f, 0.0f);
	*(&Local_0 + 868) = { -4416.0f, 25.59996f, 2968f };
	*(&Local_0 + 868 + 12) = { 0.0f, 111.9049f, 0.0f };
	Local_0.f_892 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_gtr2", -4416.0f, 25.59996f, 2968f, 0.0f, 111.9049f, 0.0f);
	*(&Local_0 + 896) = { -4424.0f, 25.69681f, 2970.613f };
	*(&Local_0 + 896 + 12) = { 0.0f, 132.7829f, 0.0f };
	Local_0.f_920 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_gtr2", -4424.0f, 25.69681f, 2970.613f, 0.0f, 132.7829f, 0.0f);
	*(&Local_0 + 924) = { -4064f, 9.035286f, 3491.478f };
	*(&Local_0 + 924 + 12) = { 0.0f, 178.4079f, 0.0f };
	Local_0.f_948 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_gtr3", -4064f, 9.035286f, 3491.478f, 0.0f, 178.4079f, 0.0f);
	*(&Local_0 + 952) = { -4067.176f, 9.03529f, 3501.938f };
	*(&Local_0 + 952 + 12) = { 0.0f, -30.33124f, 0.0f };
	Local_0.f_976 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_gtr3", -4067.176f, 9.03529f, 3501.938f, 0.0f, -30.33124f, 0.0f);
	*(&Local_0 + 980) = { -4064.0f, 9.03529f, 3498.493f };
	*(&Local_0 + 980 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1004 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_gtr3", -4064.0f, 9.03529f, 3498.493f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1008) = { -4069.828f, 9.03529f, 3496f };
	*(&Local_0 + 1008 + 12) = { 0.0f, -80.80447f, 0.0f };
	Local_0.f_1032 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_gtr3", -4069.828f, 9.03529f, 3496f, 0.0f, -80.80447f, 0.0f);
	*(&Local_0 + 1036) = { -4058.72f, 9.035286f, 3494.306f };
	*(&Local_0 + 1036 + 12) = { 0.0f, 110.2133f, 0.0f };
	Local_0.f_1060 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_gtr3", -4058.72f, 9.035286f, 3494.306f, 0.0f, 110.2133f, 0.0f);
	*(&Local_0 + 1064) = { -4064.083f, 9.03529f, 3494.821f };
	*(&Local_0 + 1064 + 12) = { 0.0f, 179.5099f, 0.0f };
	Local_0.f_1088 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_gtr3", -4064.083f, 9.03529f, 3494.821f, 0.0f, 179.5099f, 0.0f);
	return 1;
}

void Function_62(int iParam0, int iParam1) //Position: 0x41EF / 16879
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

var Function_63() //Position: 0x4238 / 16952
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_64(bool bParam0, var uParam1) //Position: 0x424D / 16973
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

