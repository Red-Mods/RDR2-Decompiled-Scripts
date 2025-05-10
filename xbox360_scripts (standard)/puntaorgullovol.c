//Decompiled with MagicRDR v1.0
//Function Count : 61
//Statics Count : 191
//Natives Count : 105
//Parameters Count : 2

#region Local Var
	struct<669> Local_0 = { 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_168 = 0;
	Local_169 = { StackVal, ScriptParam_0 };
	Function_60("Initializing PuntaOrgullo Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_171 = 500;
		uLocal_172 = Function_59();
		switch (iLocal_168)
		{
			case 0x00000000:
				if (Function_57())
				{
					iLocal_168 = 1;
				}
				bLocal_171 = false;
				break;
			
			case 0x00000001:
				Function_56(&uLocal_173);
				Function_55(StackVal, &uLocal_173, &uLocal_176, 2, 4294967295, 0);
				Function_55(&uLocal_173, &uLocal_176, 5, Local_0.f_172, 4294967295, 0);
				Function_55(&uLocal_173, &uLocal_176, 5, Local_0.f_176, 4294967295, 0);
				Function_55(&uLocal_173, &uLocal_176, 5, Local_0.f_248, 4294967295, 0);
				Function_54(Local_0.f_248, 12);
				iLocal_168 = 2;
				bLocal_171 = false;
				break;
			
			case 0x00000002:
				Function_53(&(Global_29008[Local_169]), 16);
				Function_52("Finished Initializing PuntaOrgullo Volumes", 5.0f);
				iLocal_168 = 3;
				bLocal_171 = false;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_30685))
				{
					Function_11(&uLocal_173, &uLocal_176, uLocal_172, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_171 = false;
				break;
		}
		WAIT(bLocal_171);
	}
	Function_3(&uLocal_173, &uLocal_176);
	Function_2();
	Function_1(&(Global_29008[Local_169]), 16);
	Function_52("Unloaded PuntaOrgullo Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x181 / 385
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x198 / 408
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1A3 / 419
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

void Function_4(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1FB / 507
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2D8 / 728
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
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_6() //Position: 0x451 / 1105
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x45D / 1117
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

void Function_8(int iParam0) //Position: 0x4A3 / 1187
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

void Function_9(var uParam0, int iParam1) //Position: 0x4E9 / 1257
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x503 / 1283
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x520 / 1312
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

bool Function_12(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x5A1 / 1441
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

void Function_13(int iParam0) //Position: 0x9BA / 2490
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

float Function_14(int iParam0) //Position: 0xAB9 / 2745
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_15(int iParam0) //Position: 0xAF6 / 2806
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, bool bParam1) //Position: 0xB2F / 2863
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

var Function_17(int iParam0) //Position: 0xB96 / 2966
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

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xBEE / 3054
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

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xE0E / 3598
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
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

var Function_20() //Position: 0x143B / 5179
{
	int iVar0;
	
	return iVar0;
}

var Function_21(int iParam0) //Position: 0x1443 / 5187
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1454 / 5204
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

struct<32> Function_23(char* cParam0, char* cParam1) //Position: 0x1549 / 5449
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1562 / 5474
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x15C7 / 5575
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x15D9 / 5593
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x15EB / 5611
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

int Function_28(int iParam0) //Position: 0x171B / 5915
{
	return Global_35278[iParam020].f_48;
}

void Function_29(int iParam0) //Position: 0x172A / 5930
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

int Function_30(int iParam0, float fParam1, bool bParam2) //Position: 0x18C4 / 6340
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

void Function_31(var uParam0, int iParam1) //Position: 0x1ADE / 6878
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_32(struct<5> Param0) //Position: 0x1AEB / 6891
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1B11 / 6929
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1B2D / 6957
{
	vector3 vVar0;
	bool bVar3;
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_20(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_35();
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

void Function_35() //Position: 0x1DBD / 7613
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_36(bVar0, iVar1);
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1E20 / 7712
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

bool Function_37(bool bParam0) //Position: 0x1E4F / 7759
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

int Function_38(int iParam0) //Position: 0x1EC5 / 7877
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_39() //Position: 0x1ED6 / 7894
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

bool Function_40(int iParam0) //Position: 0x1EEF / 7919
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_41(int iParam0) //Position: 0x1F05 / 7941
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_42() //Position: 0x1F1A / 7962
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_43(int iParam0) //Position: 0x1F23 / 7971
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1F41 / 8001
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

bool Function_45(int iParam0) //Position: 0x1FE5 / 8165
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(var uParam0, int iParam1) //Position: 0x1FFB / 8187
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_47(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x200C / 8204
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
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_5(StackVal, bVar1, bParam4);
		}
	}
}

void Function_48(int iParam0, int iParam1) //Position: 0x207E / 8318
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x20A3 / 8355
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

bool Function_50(int iParam0) //Position: 0x20C0 / 8384
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int iParam0) //Position: 0x20DC / 8412
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

void Function_52(bool bParam0, float fParam1) //Position: 0x2129 / 8489
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

void Function_53(var uParam0, int iParam1) //Position: 0x2167 / 8551
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x2176 / 8566
{
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (32 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", 32);
	}
	DECOR_SET_INT(bParam0, "customweather", bParam1);
	return;
}

void Function_55(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x21DD / 8669
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
	iParam4 = iParam4;
	uParam1[*uParam03]->f_4 = bParam3;
	(*uParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_56(var uParam0) //Position: 0x22B8 / 8888
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_57() //Position: 0x22C7 / 8903
{
	var uVar0;
	
	Function_58(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "npunv_tran", 2, -4842,567f, 33,78479f, 4970,404f, 0.0f, 87,97502f, 0.0f, 68,0244f, 21,45282f, 44,2508f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_esc_nos_battle", 3, -4609,521f, 13,98175f, 4137,299f, 0.0f, 60.0f, 0.0f, 200.0f, 50.0f, 300.0f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_tran1", 3, -4327,271f, 13,98175f, 4397,527f, 0.0f, -3,631602f, 0.0f, 92,06374f, 58,7631f, 90,68874f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_tran2", 2, -3266,412f, 33,78479f, 4546,414f, 0.0f, 87,97502f, 0.0f, 75,51233f, 37,61528f, 88,3866f);
	Local_0.f_60 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "punv_flk_WEST_set");
	(*&Local_0 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes6", 3, -4053,511f, 31,61791f, 4256,35f, 0.0f, 20.0f, 0.0f, 192,6178f, 44,6306f, 126,3124f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[0]);
	(*&Local_0 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes1", 3, -4283,042f, 19,36054f, 4115,044f, 0.0f, 20.0f, 0.0f, 119,3484f, 82,62196f, 120,0395f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[1]);
	(*&Local_0 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes3", 3, -4567,866f, 19,961f, 4109,342f, 0.0f, 20.0f, 0.0f, 154,9664f, 82,62196f, 178,2139f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[2]);
	(*&Local_0 + 20)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes4", 3, -4325,205f, 20,17509f, 4623,838f, 0.0f, 20.0f, 0.0f, 98,60401f, 82,62196f, 129,3296f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[3]);
	(*&Local_0 + 20)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes5", 3, -4754,885f, 71,98521f, 4885,782f, 0.0f, 20.0f, 0.0f, 92,62215f, 82,62196f, 129,3296f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[4]);
	(*&Local_0 + 20)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncoyotes10", 3, -4875,985f, 46,44733f, 4963,133f, 0.0f, 20.0f, 0.0f, 58,77868f, 74,20964f, 70,03761f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[5]);
	(*&Local_0 + 20)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes9", 3, -4512,592f, 38,78421f, 4442,362f, 0.0f, 20.0f, 0.0f, 86,0778f, 74,20964f, 165,4384f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[6]);
	(*&Local_0 + 20)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "goats14", 3, -4372,829f, 27,13992f, 4815,416f, 0.0f, 20.0f, 0.0f, 79,04242f, 55,95125f, 75,64068f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[7]);
	(*&Local_0 + 20)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "goats24", 3, -4580,596f, 46,69889f, 4750,83f, 0.0f, 20.0f, 0.0f, 125,3083f, 43,02709f, 157,6022f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 20)[8]);
	Local_0.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "punv_flk_EAST_set");
	(*&Local_0 + 64)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs", 3, -3398,574f, 97,65329f, 4419,211f, 0.0f, 20.0f, 0.0f, 58,66848f, 19,16315f, 137,4961f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 64)[0]);
	(*&Local_0 + 64)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs1", 3, -3184,232f, 54,10172f, 4300,294f, 0.0f, 2,679045f, 0.0f, 151,1155f, 17,93411f, 194,6789f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 64)[1]);
	(*&Local_0 + 64)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs2", 3, -3206,257f, 66,46912f, 4636,435f, 0.0f, -11,54876f, 0.0f, 265,7644f, 19,28539f, 93,74146f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 64)[2]);
	(*&Local_0 + 64)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs3", 3, -3613,859f, 128,8785f, 4535,32f, 0.0f, 20.0f, 0.0f, 132,8462f, 18,94953f, 155,3031f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 64)[3]);
	(*&Local_0 + 64)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "goats", 3, -3549,181f, 76,45248f, 4796,4f, 0.0f, 20.0f, 0.0f, 183,6342f, 33,18642f, 79,31761f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 64)[4]);
	Local_0.f_116 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "punv_flk_CENTER_set");
	(*&Local_0 + 92)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wildHorses", 3, -4140,523f, 64,02142f, 4521,697f, 0.0f, 20.0f, 0.0f, 112,8827f, 56,05088f, 137,2034f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 92)[0]);
	(*&Local_0 + 92)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wildHorses1", 3, -3866,674f, 36,41291f, 4403,495f, 0.0f, 20.0f, 0.0f, 137,2034f, 42,62727f, 97,33247f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 92)[1]);
	(*&Local_0 + 92)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wildHorses2", 3, -3939,405f, 39,44256f, 4631,492f, 0.0f, 20.0f, 0.0f, 78,74556f, 42,62727f, 124,5381f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 92)[2]);
	(*&Local_0 + 92)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wildHorses3", 3, -4129,055f, 40,76117f, 4787,472f, 0.0f, 41,75226f, 0.0f, 158,0032f, 54,5681f, 137,2034f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 92)[3]);
	(*&Local_0 + 92)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wildHorses4", 3, -3923,579f, 31,12158f, 4847,364f, 0.0f, 50,48258f, 0.0f, 108,1141f, 40,94079f, 76,08596f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 92)[4]);
	Local_0.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "punv_flk_BIRD_set");
	(*&Local_0 + 120)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds1", 3, -4752.0f, 33,53765f, 4056.0f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[0]);
	(*&Local_0 + 120)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds2", 3, -4576.0f, 26,98331f, 4372f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[1]);
	(*&Local_0 + 120)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds3", 3, -4510,71f, 31,26405f, 3952f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[2]);
	(*&Local_0 + 120)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds4", 3, -4064f, 30,32837f, 4304.0f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[3]);
	(*&Local_0 + 120)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds5", 3, -3871,368f, 42,61471f, 4306,821f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[4]);
	(*&Local_0 + 120)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds6", 3, -3472f, 39,96742f, 4260.0f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[5]);
	(*&Local_0 + 120)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds7", 3, -4208.0f, 59,79043f, 4704f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[6]);
	(*&Local_0 + 120)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds8", 3, -4756.0f, 66,91064f, 4908f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[7]);
	(*&Local_0 + 120)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds9", 3, -3736f, 45,54935f, 4714.0f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[8]);
	(*&Local_0 + 120)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds10", 3, -3308.0f, 72,19768f, 4540f, 0.0f, 20.0f, 0.0f, 345,6112f, 47,12199f, 340,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 120)[9]);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_corr_g", 3, -4394,522f, 42,22266f, 4329,721f, 0.0f, 20.0f, 0.0f, 19,06864f, 21,58452f, 13,16881f);
	Local_0.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_vista_1", 3, -4723,343f, 61,142f, 4708,676f, 0.0f, 0.0f, 0.0f, 5.0f, 20.0f, 5.0f);
	Local_0.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_vista_2", 3, -4502,206f, 48,573f, 4278,378f, 0.0f, 0.0f, 0.0f, 10.0f, 20.0f, 10.0f);
	Local_0.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_0, "PLT_bats", 3, -3370,941f, 60,25747f, 4768,961f, 0.0f, 282,2999f, 0.0f, 16,35729f, 5,60464f, 25,5488f);
	Local_0.f_224 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "punv_aquaticWildlife_set");
	(*&Local_0 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness9", 2, -3256,872f, 1,768422f, 3988,495f, 0.0f, 12,37247f, 0.0f, 368,4553f, 28,50097f, 129,9468f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[0]);
	(*&Local_0 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness8", 2, -3553,333f, 1,170906f, 4135,474f, 0.0f, 9,2336f, 0.0f, 408,202f, 28,50097f, 101,0467f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[1]);
	(*&Local_0 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness7", 2, -3890,82f, -9,707797f, 4075,958f, 0.0f, 52,61807f, 0.0f, 132,6222f, 28,50097f, 418,6697f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[2]);
	(*&Local_0 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness6", 2, -4164.0f, -10,36915f, 3928.0f, 0.0f, -28,16471f, 0.0f, 219,4432f, 28,50097f, 202,146f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[3]);
	(*&Local_0 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness5", 2, -4444.0f, -8,29268f, 3888,521f, 0.0f, 0.0f, 0.0f, 440,7853f, 28,50097f, 151,8147f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[4]);
	(*&Local_0 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness4", 2, -4718,319f, -8,481395f, 4088,914f, 0.0f, 36,44233f, 0.0f, 438,6112f, 38,5436f, 166,0771f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[5]);
	(*&Local_0 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness3", 2, -4727,755f, 0,09645043f, 4250,598f, 0.0f, 61,69999f, 0.0f, 172,8494f, 28,50097f, 381,0598f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[6]);
	(*&Local_0 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness2", 2, -4743,079f, -3,361446f, 4528f, 0.0f, -28,1262f, 0.0f, 144,2621f, 32,11439f, 340,5732f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[7]);
	(*&Local_0 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_aquaticWilderness1", 2, -4999,959f, -3,257817f, 4588,019f, 0.0f, -39,11819f, 0.0f, 193,3242f, 0,2104689f, 123,0471f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 184)[8]);
	Local_0.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_bhstop", 2, -4343,281f, 31,61466f, 4385,777f, 0.0f, 4,245905f, 0.0f, 21,1225f, 7,161017f, 10,41845f);
	Local_0.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_player_house", 2, -3837,362f, 4,180588f, 4225,974f, 0.0f, 4,245905f, 0.0f, 6,321364f, 5,02245f, 4,020336f);
	Local_0.f_248 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "punv_plata_caves_set");
	(*&Local_0 + 236)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_plata_02", 2, -3371,545f, 59,80634f, 4773,75f, 0,3701224f, 21,03401f, -0,2902972f, 19,94097f, 7,980592f, 21,51182f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 236)[0]);
	(*&Local_0 + 236)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "punv_plata_01", 2, -3349,833f, 60,82028f, 4766,098f, -8,770242f, 28,54804f, 2,587362f, 28,46577f, 6,975687f, 18,88288f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 236)[1]);
	*(&Local_0 + 252) = { -4115,892f, 22,086f, 4708,979f };
	*(&Local_0 + 252 + 12) = { 0.0f, 290.0f, 0.0f };
	Local_0.f_276 = CREATE_POINT_IN_LAYOUT(Local_0, "npunf_tran", -4115,892f, 22,086f, 4708,979f, 0.0f, 290.0f, 0.0f);
	*(&Local_0 + 280) = { -3994,026f, 16,895f, 4693,762f };
	*(&Local_0 + 280 + 12) = { 0.0f, 146,779f, 0.0f };
	Local_0.f_304 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran1", -3994,026f, 16,895f, 4693,762f, 0.0f, 146,779f, 0.0f);
	*(&Local_0 + 308) = { -4145,799f, 21,082f, 4710,389f };
	*(&Local_0 + 308 + 12) = { 0.0f, 69,084f, 0.0f };
	Local_0.f_332 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran2", -4145,799f, 21,082f, 4710,389f, 0.0f, 69,084f, 0.0f);
	*(&Local_0 + 336) = { -3561,648f, 6,032f, 4513,19f };
	*(&Local_0 + 336 + 12) = { 0.0f, 221,152f, 0.0f };
	Local_0.f_360 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran3", -3561,648f, 6,032f, 4513,19f, 0.0f, 221,152f, 0.0f);
	*(&Local_0 + 364) = { -3296,803f, 38,178f, 4501,235f };
	*(&Local_0 + 364 + 12) = { 0.0f, 149,359f, 0.0f };
	Local_0.f_388 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran4", -3296,803f, 38,178f, 4501,235f, 0.0f, 149,359f, 0.0f);
	*(&Local_0 + 392) = { -3106,449f, 34,244f, 4601,692f };
	*(&Local_0 + 392 + 12) = { 0.0f, 14,633f, 0.0f };
	Local_0.f_416 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran5", -3106,449f, 34,244f, 4601,692f, 0.0f, 14,633f, 0.0f);
	*(&Local_0 + 420) = { -3514,543f, 8,554f, 4243,936f };
	*(&Local_0 + 420 + 12) = { 0.0f, 100,655f, 0.0f };
	Local_0.f_444 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran6", -3514,543f, 8,554f, 4243,936f, 0.0f, 100,655f, 0.0f);
	*(&Local_0 + 448) = { -3884,977f, 8,031f, 4412,518f };
	*(&Local_0 + 448 + 12) = { 0.0f, 358,598f, 0.0f };
	Local_0.f_472 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran7", -3884,977f, 8,031f, 4412,518f, 0.0f, 358,598f, 0.0f);
	*(&Local_0 + 476) = { -4384,167f, 3,163f, 3897,498f };
	*(&Local_0 + 476 + 12) = { 0.0f, 100,135f, 0.0f };
	Local_0.f_500 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran8", -4384,167f, 3,163f, 3897,498f, 0.0f, 100,135f, 0.0f);
	*(&Local_0 + 504) = { -4465,502f, 3,012f, 3996,664f };
	*(&Local_0 + 504 + 12) = { 0.0f, 213,845f, 0.0f };
	Local_0.f_528 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran9", -4465,502f, 3,012f, 3996,664f, 0.0f, 213,845f, 0.0f);
	*(&Local_0 + 532) = { -4691,783f, 25,123f, 4898,886f };
	*(&Local_0 + 532 + 12) = { 0.0f, 358,836f, 0.0f };
	Local_0.f_556 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran10", -4691,783f, 25,123f, 4898,886f, 0.0f, 358,836f, 0.0f);
	*(&Local_0 + 560) = { -4279,235f, 21,352f, 4823,072f };
	*(&Local_0 + 560 + 12) = { 0.0f, 331,647f, 0.0f };
	Local_0.f_584 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran11", -4279,235f, 21,352f, 4823,072f, 0.0f, 331,647f, 0.0f);
	*(&Local_0 + 588) = { -3802,477f, 6,023f, 4552,769f };
	*(&Local_0 + 588 + 12) = { 0.0f, 284,321f, 0.0f };
	Local_0.f_612 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran12", -3802,477f, 6,023f, 4552,769f, 0.0f, 284,321f, 0.0f);
	*(&Local_0 + 616) = { -3169,164f, 38,25f, 4477,19f };
	*(&Local_0 + 616 + 12) = { 0.0f, 70,547f, 0.0f };
	Local_0.f_640 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_tran13", -3169,164f, 38,25f, 4477,19f, 0.0f, 70,547f, 0.0f);
	*(&Local_0 + 644) = { -3832,19f, 2,16f, 4212,83f };
	*(&Local_0 + 644 + 12) = { 0.0f, -23,08565f, 0.0f };
	Local_0.f_668 = CREATE_POINT_IN_LAYOUT(Local_0, "punf_respawn_water_01", -3832,19f, 2,16f, 4212,83f, 0.0f, -23,08565f, 0.0f);
	return 1;
}

void Function_58(int iParam0, int iParam1) //Position: 0x375F / 14175
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

var Function_59() //Position: 0x37A8 / 14248
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_60(bool bParam0, var uParam1) //Position: 0x37BD / 14269
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

