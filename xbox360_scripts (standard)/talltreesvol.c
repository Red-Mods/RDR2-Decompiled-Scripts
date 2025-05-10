//Decompiled with MagicRDR v1.0
//Function Count : 60
//Statics Count : 239
//Natives Count : 105
//Parameters Count : 2

#region Local Var
	struct<897> Local_0 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_225 = 0;
	Local_226 = { StackVal, ScriptParam_0 };
	Function_59("Initializing TallTrees Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_228 = 500;
		uLocal_229 = Function_58();
		switch (iLocal_225)
		{
			case 0x00000000:
				if (Function_56())
				{
					iLocal_225 = 1;
				}
				bLocal_228 = false;
				break;
			
			case 0x00000001:
				Function_55(&uLocal_230);
				Function_54(StackVal, &uLocal_230, &uLocal_233, 2, 4294967295, 0);
				iLocal_225 = 2;
				bLocal_228 = false;
				break;
			
			case 0x00000002:
				Function_53(&(Global_29008[Local_226]), 16);
				Function_52("Finished Initializing TallTrees Volumes", 5.0f);
				iLocal_225 = 3;
				bLocal_228 = false;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_30723))
				{
					Function_11(&uLocal_230, &uLocal_233, uLocal_229, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_228 = false;
				break;
		}
		WAIT(bLocal_228);
	}
	Function_3(&uLocal_230, &uLocal_233);
	Function_2();
	Function_1(&(Global_29008[Local_226]), 16);
	Function_52("Unloaded TallTrees Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x145 / 325
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x15C / 348
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x167 / 359
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

void Function_4(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1BF / 447
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x29C / 668
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

void Function_6() //Position: 0x415 / 1045
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x421 / 1057
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

void Function_8(int iParam0) //Position: 0x467 / 1127
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

void Function_9(var uParam0, int iParam1) //Position: 0x4AD / 1197
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x4C7 / 1223
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x4E4 / 1252
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

bool Function_12(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x565 / 1381
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

void Function_13(int iParam0) //Position: 0x97E / 2430
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

float Function_14(int iParam0) //Position: 0xA7D / 2685
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_15(int iParam0) //Position: 0xABA / 2746
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, bool bParam1) //Position: 0xAF3 / 2803
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

var Function_17(int iParam0) //Position: 0xB5A / 2906
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

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xBB2 / 2994
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

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xDD2 / 3538
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

var Function_20() //Position: 0x13FF / 5119
{
	int iVar0;
	
	return iVar0;
}

var Function_21(int iParam0) //Position: 0x1407 / 5127
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1418 / 5144
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

struct<32> Function_23(char* cParam0, char* cParam1) //Position: 0x150D / 5389
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1526 / 5414
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x158B / 5515
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x159D / 5533
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x15AF / 5551
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

int Function_28(int iParam0) //Position: 0x16DF / 5855
{
	return Global_35278[iParam020].f_48;
}

void Function_29(int iParam0) //Position: 0x16EE / 5870
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

int Function_30(int iParam0, float fParam1, bool bParam2) //Position: 0x1888 / 6280
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

void Function_31(var uParam0, int iParam1) //Position: 0x1AA2 / 6818
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_32(struct<5> Param0) //Position: 0x1AAF / 6831
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1AD5 / 6869
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1AF1 / 6897
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

void Function_35() //Position: 0x1D81 / 7553
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1DE4 / 7652
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

bool Function_37(bool bParam0) //Position: 0x1E13 / 7699
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

int Function_38(int iParam0) //Position: 0x1E89 / 7817
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_39() //Position: 0x1E9A / 7834
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

bool Function_40(int iParam0) //Position: 0x1EB3 / 7859
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_41(int iParam0) //Position: 0x1EC9 / 7881
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_42() //Position: 0x1EDE / 7902
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_43(int iParam0) //Position: 0x1EE7 / 7911
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1F05 / 7941
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

bool Function_45(int iParam0) //Position: 0x1FA9 / 8105
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(var uParam0, int iParam1) //Position: 0x1FBF / 8127
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_47(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1FD0 / 8144
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

void Function_48(int iParam0, int iParam1) //Position: 0x2042 / 8258
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x2067 / 8295
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

bool Function_50(int iParam0) //Position: 0x2084 / 8324
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int iParam0) //Position: 0x20A0 / 8352
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

void Function_52(bool bParam0, float fParam1) //Position: 0x20ED / 8429
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

void Function_53(var uParam0, bool bParam1) //Position: 0x212B / 8491
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_54(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x213A / 8506
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

void Function_55(var uParam0) //Position: 0x2215 / 8725
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_56() //Position: 0x2224 / 8740
{
	var uVar0;
	
	Function_57(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("TallTrees_layout");
	}
	Local_0.f_32 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "talv_flk_CENTER_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, -593,2744f, 174,6823f, 1676,557f, 0.0f, -67,35181f, 0.0f, 105,9159f, 58,29394f, 233,7654f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder59", 3, -835,0184f, 181,7097f, 1561,401f, 0.0f, 30,13685f, 0.0f, 92,53649f, 112,1975f, 86,57299f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -596,8842f, 156,3475f, 1417,066f, 0.0f, 33,92152f, 0.0f, 271,8308f, 76,29949f, 143,5935f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 4)[2]);
	(*&Local_0 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -377,1188f, 141,5529f, 1262,022f, 0.0f, 7,292739f, 0.0f, 115,0695f, 58,29394f, 47,57434f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 4)[3]);
	(*&Local_0 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -201,276f, 142,242f, 1527,303f, 0.0f, 1,794969f, 0.0f, 199,1374f, 58,29394f, 266,0443f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 4)[4]);
	(*&Local_0 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -407,1201f, 144,5646f, 1784,334f, 0.0f, -17,03513f, 0.0f, 140,64f, 58,29394f, 89,70598f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 4)[5]);
	Local_0.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "talv_flk_NORTH_set");
	(*&Local_0 + 36)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -738,6946f, 186,7292f, 1301,132f, 0.0f, 39,8131f, 0.0f, 209,2188f, 48,06796f, 77,69141f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[0]);
	(*&Local_0 + 36)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder35", 3, -1098,858f, 190,0172f, 1360,992f, 0.0f, 20.0f, 0.0f, 67,40719f, 60,19688f, 38,9086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[1]);
	(*&Local_0 + 36)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder37", 3, -1202,23f, 189,8394f, 1509,898f, 0.0f, -0,5394719f, 0.0f, 34,43784f, 48,06796f, 42,17895f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[2]);
	(*&Local_0 + 36)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder38", 3, -961,1198f, 185,7253f, 1311,964f, 0.0f, 1,509276f, 0.0f, 86,09306f, 56,096f, 65,3297f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[3]);
	(*&Local_0 + 36)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder40", 3, -640,3352f, 144,3973f, 782,2554f, 0.0f, 20.0f, 0.0f, 47,70806f, 48,06796f, 100,5601f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[4]);
	(*&Local_0 + 36)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder41", 3, -582,7562f, 139,6384f, 954,1177f, 0.0f, 20.0f, 0.0f, 50,17066f, 110,6072f, 84,65246f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[5]);
	(*&Local_0 + 36)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder42", 3, -651,8021f, 146,404f, 569,4237f, 0.0f, 7,972168f, 0.0f, 52,7394f, 65,23756f, 122,7747f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[6]);
	(*&Local_0 + 36)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder43", 3, -528,7275f, 166,78f, 1150,276f, 0.0f, -41,69667f, 0.0f, 135,1217f, 73,87469f, 68,46393f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 36)[7]);
	Local_0.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "talv_flk_SOUTH_set");
	(*&Local_0 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -589,2515f, 140,549f, 1928,917f, 0.0f, -16,89093f, 0.0f, 257,7066f, 83,19911f, 108,6402f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 76)[0]);
	(*&Local_0 + 76)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder50", 3, -274,6546f, 84,32935f, 1917,132f, 0.0f, 28,90153f, 0.0f, 107,9436f, 79,55395f, 97,79385f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 76)[1]);
	(*&Local_0 + 76)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder51", 3, -91,72025f, 114,1684f, 1820,091f, 0.0f, 48,13682f, 0.0f, 131,1238f, 107,3915f, 90,51267f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 76)[2]);
	(*&Local_0 + 76)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder60", 3, -425,0334f, 96,37634f, 2096,799f, 0.0f, -57,87617f, 0.0f, 101,5545f, 91,79201f, 94,99359f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 76)[3]);
	(*&Local_0 + 76)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder61", 3, -135,5685f, 96,37634f, 2011,551f, 0.0f, 3,840688f, 0.0f, 103,7744f, 91,79201f, 75,89438f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 76)[4]);
	Local_0.f_168 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "talv_aquaticFishes_set");
	(*&Local_0 + 104)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes1", 2, -1055,772f, 181,0549f, 1450,559f, 0.0f, 7,171262f, 0.0f, 250,1399f, 5,863475f, 161,1213f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[0]);
	(*&Local_0 + 104)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes2", 2, -944,5592f, 174,7437f, 1578,331f, 0.0f, 27,63371f, 0.0f, 56,60616f, 15,6186f, 150,4928f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[1]);
	(*&Local_0 + 104)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes3", 2, -864,0654f, 155,9434f, 1685,871f, 0.0f, -46,15937f, 0.0f, 130,6914f, 30,33334f, 44,02484f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[2]);
	(*&Local_0 + 104)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes4", 2, -824,2472f, 141,6483f, 1768,86f, 0.0f, -8,707941f, 0.0f, 53,67214f, 18,19532f, 89,27471f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[3]);
	(*&Local_0 + 104)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes5", 2, -797,1638f, 134,0961f, 1864,935f, 0.0f, 30,88466f, 0.0f, 46,35728f, 12,59928f, 146,7679f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[4]);
	(*&Local_0 + 104)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes6", 2, -758,0644f, 124,1473f, 1966,399f, 0.0f, 14,76972f, 0.0f, 37,20575f, 22,49081f, 79,99351f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[5]);
	(*&Local_0 + 104)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes7", 2, -664,967f, 87,70407f, 2032,214f, 0.0f, 0.0f, 0.0f, 172,6396f, 17,64581f, 64,38243f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[6]);
	(*&Local_0 + 104)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes8", 2, -577,627f, 81,16354f, 2080,263f, 0.0f, 36,1105f, 0.0f, 39,35627f, 10,08463f, 62,65144f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[7]);
	(*&Local_0 + 104)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes9", 2, -544,3558f, 73,68035f, 2157,092f, 0.0f, 41,30886f, 0.0f, 65,77435f, 13,99295f, 92,72429f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[8]);
	(*&Local_0 + 104)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes10", 2, -469,9328f, 70,38285f, 2191,754f, 0.0f, -26,34225f, 0.0f, 66,94518f, 5,753312f, 11,30177f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[9]);
	(*&Local_0 + 104)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes11", 2, -395,6228f, 69,71171f, 2230,458f, 0.0f, -19,63805f, 0.0f, 97,54456f, 6,514398f, 38,15876f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[10]);
	(*&Local_0 + 104)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes12", 2, -293,6046f, 71,09695f, 2253,549f, 0.0f, 0.0f, 0.0f, 115,4794f, 8,174694f, 43,31063f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[11]);
	(*&Local_0 + 104)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes13", 2, -147,0819f, 69,05841f, 2212,549f, 0.0f, 15,79396f, 0.0f, 195,2177f, 7,178958f, 44,59148f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[12]);
	(*&Local_0 + 104)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes14", 2, -38,77122f, 70,8055f, 2128,269f, 0.0f, 0.0f, 0.0f, 77,05475f, 7,378823f, 160,9037f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[13]);
	(*&Local_0 + 104)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticFishes15", 2, -229,4651f, 71,2652f, 2364,53f, 0.0f, 0.0f, 0.0f, 191,1671f, 5,206788f, 209,1733f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 104)[14]);
	Local_0.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "talv_aquaticWildlife_set");
	(*&Local_0 + 172)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_01", 3, -152f, 68,26666f, 2216f, 0.0f, 16,55233f, 0.0f, 159,2095f, 85,32535f, 28,5615f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[0]);
	(*&Local_0 + 172)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_02", 3, -367,9082f, 68,26666f, 2238,888f, 0.0f, -16,4704f, 0.0f, 109,5831f, 58,72903f, 19,65874f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[1]);
	(*&Local_0 + 172)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_03", 3, -494,9665f, 68,26666f, 2179,797f, 0.0f, -31,61113f, 0.0f, 82,07603f, 58,72903f, 19,65874f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[2]);
	(*&Local_0 + 172)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_04", 3, -575,446f, 68,26666f, 2087,523f, 0.0f, -58,09722f, 0.0f, 82,07603f, 58,72903f, 19,65874f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[3]);
	(*&Local_0 + 172)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_05", 3, -658,7006f, 68,26666f, 2038,264f, 0.0f, -7,532945f, 0.0f, 82,07603f, 58,72903f, 29,75141f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[4]);
	(*&Local_0 + 172)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_06", 3, -758,1253f, 68,26666f, 1955,588f, 0.0f, -72,54741f, 0.0f, 82,07603f, 112,9613f, 23,55225f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[5]);
	(*&Local_0 + 172)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_07", 3, -807,1262f, 68,26666f, 1850,914f, 0.0f, -59,86823f, 0.0f, 66,2807f, 112,9613f, 23,55225f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[6]);
	(*&Local_0 + 172)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_08", 3, -823,0187f, 68,26666f, 1770,229f, 0.0f, -94,60016f, 0.0f, 52,46916f, 89,4225f, 18,64444f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[7]);
	(*&Local_0 + 172)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_09", 3, -855,415f, 68,26666f, 1693,823f, 0.0f, -47,98232f, 0.0f, 52,46916f, 157,7196f, 18,64444f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[8]);
	(*&Local_0 + 172)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_010", 3, -918,5265f, 68,26666f, 1625,548f, 0.0f, -56,16022f, 0.0f, 52,46916f, 157,7196f, 18,64444f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[9]);
	(*&Local_0 + 172)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_011", 3, -966,7207f, 68,26666f, 1541,208f, 0.0f, -56,16022f, 0.0f, 52,46916f, 157,7196f, 18,64444f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[10]);
	(*&Local_0 + 172)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_012", 3, -1034,515f, 68,26666f, 1446,728f, 0.0f, 0,7024403f, 0.0f, 104,176f, 313,1477f, 63,8155f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[11]);
	(*&Local_0 + 172)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_013", 3, -1179,48f, 68,26666f, 1454,661f, 0.0f, -16,87923f, 0.0f, 104,176f, 313,1477f, 31,80929f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[12]);
	(*&Local_0 + 172)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_014", 3, -1340,312f, 68,26666f, 1373,885f, 0.0f, -28,07886f, 0.0f, 104,176f, 313,1477f, 31,80929f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[13]);
	(*&Local_0 + 172)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_015", 3, -219,0838f, 68,26666f, 2289,443f, 0.0f, -84,64565f, 0.0f, 64,71246f, 34,68142f, 11,60913f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[14]);
	(*&Local_0 + 172)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_016", 3, -250,3255f, 68,26666f, 2375,784f, 0.0f, -129,7999f, 0.0f, 64,71246f, 34,68142f, 11,60913f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[15]);
	(*&Local_0 + 172)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_017", 3, -297,4722f, 68,26666f, 2445,084f, 0.0f, -129,7999f, 0.0f, 26,37791f, 34,68142f, 20,51755f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[16]);
	(*&Local_0 + 172)[17] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_018", 3, -188,41f, 68,26666f, 2374,648f, 0.0f, -152,6304f, 0.0f, 11,8026f, 34,68142f, 57,80375f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[17]);
	(*&Local_0 + 172)[18] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_019", 3, -204,8829f, 68,26666f, 2412,706f, 0.0f, -209,1972f, 0.0f, 9,171598f, 34,68142f, 33,83997f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[18]);
	(*&Local_0 + 172)[19] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_020", 3, -254,3018f, 68,26666f, 2309,892f, 0.0f, -237,1397f, 0.0f, 9,171598f, 34,68142f, 33,83997f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[19]);
	(*&Local_0 + 172)[20] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_021", 3, -182,1617f, 68,26666f, 2315,004f, -0,8183758f, -290,2231f, 0.0f, 9,171598f, 34,68142f, 33,83997f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[20]);
	(*&Local_0 + 172)[21] = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_aquaticWildlife_022", 3, -136,151f, 68,26666f, 2316,708f, 0,9045045f, -251,7742f, 1,627066f, 6,449566f, 24,38835f, 23,79663f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 172)[21]);
	Local_0.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_birds", 2, -514,3977f, 177,5795f, 1433,708f, 0.0f, 0.0f, 0.0f, 977,7135f, 204,2023f, 1811,134f);
	Local_0.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_Masons", 3, -143,3034f, 88,32312f, 2210,759f, 0.0f, 20.0f, 0.0f, 19,95991f, 24,92979f, 43,83996f);
	Local_0.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_montana_ford", 3, -480,728f, 84,52522f, 2186,402f, 0.0f, -17,70159f, 0.0f, 28,024f, 25,65247f, 33,2642f);
	Local_0.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_0, "talv_Tanners_Span", 3, -580,1471f, 105,077f, 2089,955f, 0.0f, 18,88762f, 0.0f, 84,13344f, 38,98499f, 45,70354f);
	*(&Local_0 + 284) = { -1033,621f, 181,4009f, 1404,592f };
	*(&Local_0 + 284 + 12) = { 0.0f, 5,973791f, 0.0f };
	Local_0.f_308 = CREATE_POINT_IN_LAYOUT(Local_0, "arbf_respawn_water_01", -1033,621f, 181,4009f, 1404,592f, 0.0f, 5,973791f, 0.0f);
	*(&Local_0 + 312) = { -1040,182f, 181,3859f, 1398,524f };
	*(&Local_0 + 312 + 12) = { 0.0f, -184,2665f, 0.0f };
	Local_0.f_336 = CREATE_POINT_IN_LAYOUT(Local_0, "arbf_respawn_water_02", -1040,182f, 181,3859f, 1398,524f, 0.0f, -184,2665f, 0.0f);
	*(&Local_0 + 340) = { -1032.0f, 182,5768f, 1386.0f };
	*(&Local_0 + 340 + 12) = { 0.0f, -174,0807f, 0.0f };
	Local_0.f_364 = CREATE_POINT_IN_LAYOUT(Local_0, "arbf_respawn_water_03", -1032.0f, 182,5768f, 1386.0f, 0.0f, -174,0807f, 0.0f);
	*(&Local_0 + 368) = { -1052.0f, 182,3301f, 1377,645f };
	*(&Local_0 + 368 + 12) = { 0.0f, -174,0807f, 0.0f };
	Local_0.f_392 = CREATE_POINT_IN_LAYOUT(Local_0, "arbf_respawn_water_04", -1052.0f, 182,3301f, 1377,645f, 0.0f, -174,0807f, 0.0f);
	*(&Local_0 + 396) = { -321.0f, 123,3054f, 1962.0f };
	*(&Local_0 + 396 + 12) = { 0.0f, 167,7834f, 0.0f };
	Local_0.f_420 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_tal1", -321.0f, 123,3054f, 1962.0f, 0.0f, 167,7834f, 0.0f);
	*(&Local_0 + 424) = { -316,0001f, 123,3856f, 1956f };
	*(&Local_0 + 424 + 12) = { 0.0f, 72,58274f, 0.0f };
	Local_0.f_448 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_tal1", -316,0001f, 123,3856f, 1956f, 0.0f, 72,58274f, 0.0f);
	*(&Local_0 + 452) = { -324,5558f, 121,6639f, 1968,013f };
	*(&Local_0 + 452 + 12) = { 0.0f, -49,30299f, 0.0f };
	Local_0.f_476 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_tal1", -324,5558f, 121,6639f, 1968,013f, 0.0f, -49,30299f, 0.0f);
	*(&Local_0 + 480) = { -322,4177f, 120,5118f, 1970,306f };
	*(&Local_0 + 480 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_504 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_tal1", -322,4177f, 120,5118f, 1970,306f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 508) = { -319,6714f, 120,7235f, 1970,062f };
	*(&Local_0 + 508 + 12) = { 0.0f, 18,2857f, 0.0f };
	Local_0.f_532 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_tal1", -319,6714f, 120,7235f, 1970,062f, 0.0f, 18,2857f, 0.0f);
	*(&Local_0 + 536) = { -320,979f, 122,6871f, 1964,775f };
	*(&Local_0 + 536 + 12) = { 0.0f, 133,7474f, 0.0f };
	Local_0.f_560 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_tal1", -320,979f, 122,6871f, 1964,775f, 0.0f, 133,7474f, 0.0f);
	*(&Local_0 + 564) = { -683,979f, 152,1264f, 1858,651f };
	*(&Local_0 + 564 + 12) = { 0.0f, 181,248f, 0.0f };
	Local_0.f_588 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_tal2", -683,979f, 152,1264f, 1858,651f, 0.0f, 181,248f, 0.0f);
	*(&Local_0 + 592) = { -692.0f, 151,8941f, 1864f };
	*(&Local_0 + 592 + 12) = { 0.0f, -134,0074f, 0.0f };
	Local_0.f_616 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_tal2", -692.0f, 151,8941f, 1864f, 0.0f, -134,0074f, 0.0f);
	*(&Local_0 + 620) = { -688.0f, 152,0886f, 1862,775f };
	*(&Local_0 + 620 + 12) = { 0.0f, -91,83728f, 0.0f };
	Local_0.f_644 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_tal2", -688.0f, 152,0886f, 1862,775f, 0.0f, -91,83728f, 0.0f);
	*(&Local_0 + 648) = { -684.0f, 151,592f, 1867,999f };
	*(&Local_0 + 648 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_672 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_tal2", -684.0f, 151,592f, 1867,999f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 676) = { -680.0f, 151,8625f, 1867,038f };
	*(&Local_0 + 676 + 12) = { 0.0f, 44,52262f, 0.0f };
	Local_0.f_700 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_tal2", -680.0f, 151,8625f, 1867,038f, 0.0f, 44,52262f, 0.0f);
	*(&Local_0 + 704) = { -684,1642f, 152,0886f, 1862,775f };
	*(&Local_0 + 704 + 12) = { 0.0f, 90,31831f, 0.0f };
	Local_0.f_728 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_tal2", -684,1642f, 152,0886f, 1862,775f, 0.0f, 90,31831f, 0.0f);
	*(&Local_0 + 732) = { -664,083f, 174,4142f, 1395,394f };
	*(&Local_0 + 732 + 12) = { 0.0f, -176,5244f, 0.0f };
	Local_0.f_756 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_tal3", -664,083f, 174,4142f, 1395,394f, 0.0f, -176,5244f, 0.0f);
	*(&Local_0 + 760) = { -657,1503f, 174,2817f, 1405,834f };
	*(&Local_0 + 760 + 12) = { 0.0f, 91,85547f, 0.0f };
	Local_0.f_784 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_tal3", -657,1503f, 174,2817f, 1405,834f, 0.0f, 91,85547f, 0.0f);
	*(&Local_0 + 788) = { -664,083f, 174,0923f, 1401,341f };
	*(&Local_0 + 788 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_812 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_tal3", -664,083f, 174,0923f, 1401,341f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 816) = { -668,0001f, 174,6823f, 1404f };
	*(&Local_0 + 816 + 12) = { 0.0f, -38,93428f, 0.0f };
	Local_0.f_840 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_tal3", -668,0001f, 174,6823f, 1404f, 0.0f, -38,93428f, 0.0f);
	*(&Local_0 + 844) = { -666,6293f, 174,5759f, 1405,673f };
	*(&Local_0 + 844 + 12) = { 0.0f, -19,89674f, 0.0f };
	Local_0.f_868 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_tal3", -666,6293f, 174,5759f, 1405,673f, 0.0f, -19,89674f, 0.0f);
	*(&Local_0 + 872) = { -664,083f, 174,0923f, 1398,821f };
	*(&Local_0 + 872 + 12) = { 0.0f, 179,3761f, 0.0f };
	Local_0.f_896 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingguy_tal3", -664,083f, 174,0923f, 1398,821f, 0.0f, 179,3761f, 0.0f);
	return 1;
}

void Function_57(int iParam0, int iParam1) //Position: 0x3E8D / 16013
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

var Function_58() //Position: 0x3ED6 / 16086
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_59(bool bParam0, var uParam1) //Position: 0x3EEB / 16107
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

