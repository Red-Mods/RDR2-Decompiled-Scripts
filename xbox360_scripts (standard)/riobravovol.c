//Decompiled with MagicRDR v1.0
//Function Count : 60
//Statics Count : 194
//Natives Count : 105
//Parameters Count : 2

#region Local Var
	struct<717> Local_0 = { 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_180 = 0;
	Local_181 = { StackVal, ScriptParam_0 };
	Function_59("Initializing RioBravo Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_183 = 500;
		uLocal_184 = Function_58();
		switch (iLocal_180)
		{
			case 0x00000000:
				if (Function_56())
				{
					iLocal_180 = 1;
				}
				bLocal_183 = false;
				break;
			
			case 0x00000001:
				Function_55(&uLocal_185);
				Function_54(StackVal, &uLocal_185, &uLocal_188, 2, 4294967295, 0);
				iLocal_180 = 2;
				bLocal_183 = false;
				break;
			
			case 0x00000002:
				Function_53(&(Global_29008[Local_181]), 16);
				Function_52("Finished Initializing RioBravo Volumes", 5.0f);
				iLocal_180 = 3;
				bLocal_183 = false;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_30679))
				{
					Function_11(&uLocal_185, &uLocal_188, uLocal_184, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_183 = false;
				break;
		}
		WAIT(bLocal_183);
	}
	Function_3(&uLocal_185, &uLocal_188);
	Function_2();
	Function_1(&(Global_29008[Local_181]), 16);
	Function_52("Unloaded RioBravo Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x142 / 322
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x159 / 345
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x164 / 356
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

void Function_4(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BC / 444
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x299 / 665
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

void Function_6() //Position: 0x412 / 1042
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x41E / 1054
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

void Function_8(int iParam0) //Position: 0x464 / 1124
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

void Function_9(var uParam0, int iParam1) //Position: 0x4AA / 1194
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x4C4 / 1220
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x4E1 / 1249
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

bool Function_12(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x562 / 1378
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

void Function_13(int iParam0) //Position: 0x97B / 2427
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

float Function_14(int iParam0) //Position: 0xA7A / 2682
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_15(int iParam0) //Position: 0xAB7 / 2743
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, bool bParam1) //Position: 0xAF0 / 2800
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

var Function_17(int iParam0) //Position: 0xB57 / 2903
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

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xBAF / 2991
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

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xDCF / 3535
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

var Function_20() //Position: 0x13FC / 5116
{
	int iVar0;
	
	return iVar0;
}

var Function_21(int iParam0) //Position: 0x1404 / 5124
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1415 / 5141
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

struct<32> Function_23(char* cParam0, char* cParam1) //Position: 0x150A / 5386
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1523 / 5411
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x1588 / 5512
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x159A / 5530
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x15AC / 5548
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

int Function_28(int iParam0) //Position: 0x16DC / 5852
{
	return Global_35278[iParam020].f_48;
}

void Function_29(int iParam0) //Position: 0x16EB / 5867
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

int Function_30(int iParam0, float fParam1, bool bParam2) //Position: 0x1885 / 6277
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

void Function_31(var uParam0, int iParam1) //Position: 0x1A9F / 6815
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_32(struct<5> Param0) //Position: 0x1AAC / 6828
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1AD2 / 6866
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1AEE / 6894
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

void Function_35() //Position: 0x1D7E / 7550
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1DE1 / 7649
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

bool Function_37(bool bParam0) //Position: 0x1E10 / 7696
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

int Function_38(int iParam0) //Position: 0x1E86 / 7814
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_39() //Position: 0x1E97 / 7831
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

bool Function_40(int iParam0) //Position: 0x1EB0 / 7856
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_41(int iParam0) //Position: 0x1EC6 / 7878
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_42() //Position: 0x1EDB / 7899
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_43(int iParam0) //Position: 0x1EE4 / 7908
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1F02 / 7938
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

bool Function_45(int iParam0) //Position: 0x1FA6 / 8102
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(var uParam0, int iParam1) //Position: 0x1FBC / 8124
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_47(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1FCD / 8141
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

void Function_48(int iParam0, int iParam1) //Position: 0x203F / 8255
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x2064 / 8292
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

bool Function_50(int iParam0) //Position: 0x2081 / 8321
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int iParam0) //Position: 0x209D / 8349
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

void Function_52(bool bParam0, float fParam1) //Position: 0x20EA / 8426
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

void Function_53(var uParam0, bool bParam1) //Position: 0x2128 / 8488
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_54(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x2137 / 8503
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

void Function_55(var uParam0) //Position: 0x2212 / 8722
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_56() //Position: 0x2221 / 8737
{
	var uVar0;
	
	Function_57(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("RioBravo_layout");
	}
	Local_0.f_12 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "riov_flk_BIRD_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds", 2, -2936,324f, 50,52718f, 3478,539f, 0.0f, 0.0f, 0.0f, 2009,946f, 220,2406f, 1271,405f);
	ADD_TO_VOLUME_SET(Local_0.f_12, (*&Local_0 + 4)[0]);
	Local_0.f_48 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "riov_flk_SOUTH_set");
	(*&Local_0 + 16)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_wolfs1", 3, -3743,686f, 16,8916f, 3916,521f, 0.0f, 20.0f, 0.0f, 105,5447f, 154,5452f, 127,4068f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 16)[0]);
	(*&Local_0 + 16)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_wolfs2", 3, -3506,154f, 30,11765f, 3982,611f, 0.0f, 20.0f, 0.0f, 142,0115f, 121,3969f, 90,83942f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 16)[1]);
	(*&Local_0 + 16)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_wolfs3", 3, -3362,548f, 57,9931f, 3815,707f, 0.0f, 20.0f, 0.0f, 101,16f, 155,6165f, 93,06902f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 16)[2]);
	(*&Local_0 + 16)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_wolfs4", 3, -3133,079f, 44,66625f, 3831,112f, 0.0f, 10,86343f, 0.0f, 139,1676f, 133,4854f, 41,1269f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 16)[3]);
	(*&Local_0 + 16)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_wolfs5", 3, -2952,329f, 37,14508f, 3688,871f, 0.0f, 20.0f, 0.0f, 118,3164f, 118,3164f, 118,3164f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 16)[4]);
	(*&Local_0 + 16)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_wolfs6", 3, -2762,144f, 29,45689f, 3700,321f, 0.0f, 2,40104f, 0.0f, 69,76539f, 141,8443f, 55,03979f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 16)[5]);
	(*&Local_0 + 16)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_wolfs7", 3, -2506,896f, 15,99935f, 3744,206f, 0.0f, -11,53117f, 0.0f, 185,0573f, 90,62341f, 67,17472f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 16)[6]);
	Local_0.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "riov_flk_NORTH_set");
	(*&Local_0 + 52)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_coyote1", 3, -2543,914f, 28,1098f, 3241,62f, 0.0f, 20.0f, 0.0f, 167,0734f, 167,0734f, 119,6312f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 52)[0]);
	(*&Local_0 + 52)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_coyote2", 3, -2835,932f, 43,16861f, 3294,67f, 0.0f, 20.0f, 0.0f, 141,1532f, 167,0734f, 75,033f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 52)[1]);
	(*&Local_0 + 52)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_coyote3", 3, -3068,626f, 38,24369f, 3231,372f, 0.0f, 4,810986f, 0.0f, 125,0495f, 167,0734f, 94,41615f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 52)[2]);
	(*&Local_0 + 52)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_coyote4", 3, -3350,161f, 36,14117f, 3274,167f, 0.0f, 20.0f, 0.0f, 150,0992f, 167,0734f, 136,9624f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 52)[3]);
	(*&Local_0 + 52)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_coyote5", 3, -3649,194f, 26,09475f, 3335,014f, 0.0f, 20.0f, 0.0f, 143,9794f, 167,0734f, 141,4556f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 52)[4]);
	(*&Local_0 + 52)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_coyote7", 3, -3762,593f, 9,663376f, 3614,673f, 0.0f, 20.0f, 0.0f, 116,0434f, 167,0734f, 142,3679f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 52)[5]);
	Local_0.f_140 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "riov_flk_CENTER_set");
	(*&Local_0 + 84)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar14", 3, -2187,696f, 64,25098f, 3575,605f, 0.0f, 20.0f, 0.0f, 27,86323f, 157,1503f, 42,22984f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[0]);
	(*&Local_0 + 84)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar13", 3, -2320,311f, 70,27448f, 3561,265f, 0.0f, 20.0f, 0.0f, 95,70407f, 144,6171f, 97,58847f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[1]);
	(*&Local_0 + 84)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar12", 3, -2480,455f, 82,55096f, 3444,212f, 0.0f, 20.0f, 0.0f, 122,6014f, 122,6014f, 91,0615f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[2]);
	(*&Local_0 + 84)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar11", 3, -2485,426f, 64,84901f, 3595,959f, 0.0f, 20.0f, 0.0f, 73,32108f, 113,1796f, 56,82574f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[3]);
	(*&Local_0 + 84)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar10", 3, -2701,399f, 49,12183f, 3584,517f, 0.0f, 8,018439f, 0.0f, 155,7843f, 116,0861f, 55,75488f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[4]);
	(*&Local_0 + 84)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar9", 3, -2851,949f, 60,09787f, 3466,981f, 0.0f, 20.0f, 0.0f, 93,83244f, 99,31574f, 91,00473f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[5]);
	(*&Local_0 + 84)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar8", 3, -3028,939f, 50,63153f, 3528,086f, 0.0f, 20.0f, 0.0f, 91,15942f, 100,0843f, 57,18759f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[6]);
	(*&Local_0 + 84)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar7", 3, -3175,788f, 40,15686f, 3598,743f, 1,624279f, 44,85572f, 0,887722f, 76,40627f, 125,5066f, 97,42728f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[7]);
	(*&Local_0 + 84)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar6", 3, -3370,746f, 26,10194f, 3588,201f, 0.0f, 20.0f, 0.0f, 97,32235f, 97,32235f, 97,32235f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[8]);
	(*&Local_0 + 84)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar5", 3, -3542,015f, 29,66954f, 3709,699f, 0.0f, 20.0f, 0.0f, 104,6366f, 184,9402f, 129,9607f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[9]);
	(*&Local_0 + 84)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar4", 3, -3531,635f, 38,14902f, 3508,3f, 0.0f, 20.0f, 0.0f, 96,00407f, 101,9702f, 67,79285f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[10]);
	(*&Local_0 + 84)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar3", 3, -3246,255f, 44,17255f, 3452,389f, 0.0f, 20.0f, 0.0f, 81,35522f, 104,0305f, 68,30022f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[11]);
	(*&Local_0 + 84)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_cougar2", 3, -3068,657f, 60,23529f, 3405,431f, 0.0f, 20.0f, 0.0f, 98,48691f, 98,48691f, 71,01986f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 84)[12]);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "riov_fomFTEStart", 3, -2677,207f, 71,65489f, 3442,786f, 0.0f, 3,664182f, 0.0f, 350,7747f, 219,6455f, 257,9375f);
	Local_0.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "riov_aquaticWildlife_set");
	(*&Local_0 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, -3218,068f, 11,0468f, 3847,991f, 0.0f, 20.0f, 0.0f, 213,1174f, 120,1759f, 120,1759f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[0]);
	(*&Local_0 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -2941,48f, 11,0468f, 3792,045f, 0.0f, 20.0f, 0.0f, 171,9794f, 120,1759f, 99,91642f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[1]);
	(*&Local_0 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -2686,061f, 11,0468f, 3747,897f, 0.0f, -28,28134f, 0.0f, 171,9794f, 120,1759f, 94,77378f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[2]);
	(*&Local_0 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -2384,365f, 11,0468f, 3823,475f, 0.0f, 21,16579f, 0.0f, 132,1029f, 120,1759f, 109,5332f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[3]);
	(*&Local_0 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -2514,742f, 11,0468f, 3798,418f, 0.0f, 21,16579f, 0.0f, 79,56471f, 88,09631f, 80,29457f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[4]);
	(*&Local_0 + 148)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -2257,712f, 11,0468f, 3725,557f, 0.0f, 21,16579f, 0.0f, 70,058f, 77,5702f, 70,70065f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[5]);
	(*&Local_0 + 148)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -2098,511f, 11,0468f, 3594,111f, 0.0f, 21,16579f, 0.0f, 187,9939f, 77,5702f, 55,92756f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[6]);
	(*&Local_0 + 148)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -1629,272f, 11,0468f, 3561,406f, 0.0f, 21,16579f, 0.0f, 104,9413f, 77,5702f, 51,65447f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[7]);
	(*&Local_0 + 148)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -1794,395f, 11,0468f, 3580,832f, 0.0f, -18,15128f, 0.0f, 104,9413f, 77,5702f, 51,65447f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[8]);
	(*&Local_0 + 148)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -1908,039f, 11,0468f, 3551,692f, 0.0f, 0,5567674f, 0.0f, 104,9413f, 77,5702f, 63,30935f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[9]);
	(*&Local_0 + 148)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -3993,832f, 11,0468f, 3886,646f, 0.0f, 52,62321f, 0.0f, 83,51431f, 120,1759f, 168,2393f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[10]);
	(*&Local_0 + 148)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -3755,156f, 11,0468f, 4020,613f, 0.0f, 78,40577f, 0.0f, 65,93489f, 120,1759f, 168,2393f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[11]);
	(*&Local_0 + 148)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -3461,047f, 11,0468f, 3982,886f, 0.0f, 114,7503f, 0.0f, 54,94436f, 120,1759f, 101,3502f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[12]);
	(*&Local_0 + 148)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -3602,673f, 11,0468f, 4017,808f, 0.0f, 94,9091f, 0.0f, 54,94436f, 120,1759f, 101,3502f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[13]);
	(*&Local_0 + 148)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -3234,876f, 0.0f, 3981,952f, 165,0756f, 61,89607f, 173,9577f, 59,65659f, 82,87489f, 163,6885f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 148)[14]);
	*(&Local_0 + 216) = { -3491,979f, 29,20257f, 3781,121f };
	*(&Local_0 + 216 + 12) = { 0.0f, 176,8638f, 0.0f };
	Local_0.f_240 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_rio1", -3491,979f, 29,20257f, 3781,121f, 0.0f, 176,8638f, 0.0f);
	*(&Local_0 + 244) = { -3496.0f, 29,15734f, 3782,336f };
	*(&Local_0 + 244 + 12) = { 0.0f, -93,25693f, 0.0f };
	Local_0.f_268 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_rio1", -3496.0f, 29,15734f, 3782,336f, 0.0f, -93,25693f, 0.0f);
	*(&Local_0 + 272) = { -3488,353f, 29,22202f, 3784,775f };
	*(&Local_0 + 272 + 12) = { 0.0f, 91,63598f, 0.0f };
	Local_0.f_296 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_rio1", -3488,353f, 29,22202f, 3784,775f, 0.0f, 91,63598f, 0.0f);
	*(&Local_0 + 300) = { -3485,45f, 29,29042f, 3782,769f };
	*(&Local_0 + 300 + 12) = { 0.0f, 106,103f, 0.0f };
	Local_0.f_324 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_rio1", -3485,45f, 29,29042f, 3782,769f, 0.0f, 106,103f, 0.0f);
	*(&Local_0 + 328) = { -3486,898f, 29,29042f, 3781,429f };
	*(&Local_0 + 328 + 12) = { 0.0f, 137,6902f, 0.0f };
	Local_0.f_352 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_rio1", -3486,898f, 29,29042f, 3781,429f, 0.0f, 137,6902f, 0.0f);
	*(&Local_0 + 356) = { -3491,979f, 29,22202f, 3784,775f };
	*(&Local_0 + 356 + 12) = { 0.0f, -85,94526f, 0.0f };
	Local_0.f_380 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_rio1", -3491,979f, 29,22202f, 3784,775f, 0.0f, -85,94526f, 0.0f);
	*(&Local_0 + 384) = { -3329,551f, 42,9619f, 3262,086f };
	*(&Local_0 + 384 + 12) = { 0.0f, 160,6098f, 0.0f };
	Local_0.f_408 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_rio2", -3329,551f, 42,9619f, 3262,086f, 0.0f, 160,6098f, 0.0f);
	*(&Local_0 + 412) = { -3348f, 39,27028f, 3260f };
	*(&Local_0 + 412 + 12) = { 0.0f, -50,21075f, 0.0f };
	Local_0.f_436 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_rio2", -3348f, 39,27028f, 3260f, 0.0f, -50,21075f, 0.0f);
	*(&Local_0 + 440) = { -3333,033f, 43,0371f, 3262,948f };
	*(&Local_0 + 440 + 12) = { 0.0f, -129,0054f, 0.0f };
	Local_0.f_464 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_rio2", -3333,033f, 43,0371f, 3262,948f, 0.0f, -129,0054f, 0.0f);
	*(&Local_0 + 468) = { -3336f, 42,26438f, 3269,568f };
	*(&Local_0 + 468 + 12) = { 0.0f, -36,00678f, 0.0f };
	Local_0.f_492 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_rio2", -3336f, 42,26438f, 3269,568f, 0.0f, -36,00678f, 0.0f);
	*(&Local_0 + 496) = { -3344f, 39,2618f, 3260f };
	*(&Local_0 + 496 + 12) = { 0.0f, -118,137f, 0.0f };
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_rio2", -3344f, 39,2618f, 3260f, 0.0f, -118,137f, 0.0f);
	*(&Local_0 + 524) = { -3329,979f, 42,79713f, 3265,775f };
	*(&Local_0 + 524 + 12) = { 0.0f, 48,33434f, 0.0f };
	Local_0.f_548 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_rio2", -3329,979f, 42,79713f, 3265,775f, 0.0f, 48,33434f, 0.0f);
	*(&Local_0 + 552) = { -2375,709f, 80,88108f, 3428,962f };
	*(&Local_0 + 552 + 12) = { 0.0f, 161,6762f, 0.0f };
	Local_0.f_576 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_rio3", -2375,709f, 80,88108f, 3428,962f, 0.0f, 161,6762f, 0.0f);
	*(&Local_0 + 580) = { -2370,019f, 81,33321f, 3430,07f };
	*(&Local_0 + 580 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_604 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_rio3", -2370,019f, 81,33321f, 3430,07f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 608) = { -2373,481f, 81,02461f, 3430,985f };
	*(&Local_0 + 608 + 12) = { 0.0f, 123,5192f, 0.0f };
	Local_0.f_632 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_rio3", -2373,481f, 81,02461f, 3430,985f, 0.0f, 123,5192f, 0.0f);
	*(&Local_0 + 636) = { -2380.0f, 81,39855f, 3436.0f };
	*(&Local_0 + 636 + 12) = { 0.0f, -47,29213f, 0.0f };
	Local_0.f_660 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_rio3", -2380.0f, 81,39855f, 3436.0f, 0.0f, -47,29213f, 0.0f);
	*(&Local_0 + 664) = { -2378,847f, 81,56503f, 3438,408f };
	*(&Local_0 + 664 + 12) = { 0.0f, -23,36502f, 0.0f };
	Local_0.f_688 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_rio3", -2378,847f, 81,56503f, 3438,408f, 0.0f, -23,36502f, 0.0f);
	*(&Local_0 + 692) = { -2376,083f, 80,94261f, 3432,821f };
	*(&Local_0 + 692 + 12) = { 0.0f, -59,15118f, 0.0f };
	Local_0.f_716 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_rio3", -2376,083f, 80,94261f, 3432,821f, 0.0f, -59,15118f, 0.0f);
	return 1;
}

void Function_57(int iParam0, int iParam1) //Position: 0x3674 / 13940
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

var Function_58() //Position: 0x36BD / 14013
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_59(bool bParam0, var uParam1) //Position: 0x36D2 / 14034
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

