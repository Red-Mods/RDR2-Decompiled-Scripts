//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 63
//Natives Count : 115
//Parameters Count : 2

#region Local Var
	struct<193> Local_0 = { 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_49 = 0;
	Local_50 = { StackVal, ScriptParam_0 };
	Function_65("Initializing Perdido Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_52 = 500;
		uLocal_53 = Function_64();
		switch (iLocal_49)
		{
			case 0x00000000:
				if (Function_62())
				{
					Function_58();
					REQUEST_STRING_TABLE("graveyards");
					iLocal_49 = 1;
				}
				bLocal_52 = false;
				break;
			
			case 0x00000001:
				Function_57(&uLocal_54);
				Function_56(StackVal, &uLocal_54, &uLocal_57, 2, 4294967295, 0);
				iLocal_49 = 2;
				bLocal_52 = false;
				break;
			
			case 0x00000002:
				if (HAS_STRING_TABLE_LOADED("graveyards"))
				{
					Function_55(&(Global_29008[Local_50]), 16);
					Function_54("Finished Initializing Perdido Volumes", 5.0f);
					iLocal_49 = 3;
				}
				bLocal_52 = false;
				break;
			
			case 0x00000003:
				if (!Function_53(&Global_30693))
				{
					Function_13(&uLocal_54, &uLocal_57, uLocal_53, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_52 = false;
				break;
		}
		WAIT(bLocal_52);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_11(&(Global_26282[04]));
	Function_3(&uLocal_54, &uLocal_57);
	Function_2();
	Function_1(&(Global_29008[Local_50]), 16);
	Function_54("Unloaded Perdido Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x17E / 382
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x195 / 405
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1A0 / 416
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

void Function_4(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1F8 / 504
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2D5 / 725
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

void Function_6() //Position: 0x44E / 1102
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x45A / 1114
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

void Function_8(int iParam0) //Position: 0x4A0 / 1184
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

void Function_9(var uParam0, int iParam1) //Position: 0x4E6 / 1254
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x500 / 1280
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(int iParam0) //Position: 0x51D / 1309
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

void Function_12(bool bParam0) //Position: 0x549 / 1353
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

void Function_13(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x58E / 1422
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

bool Function_14(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x60F / 1551
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

void Function_15(int iParam0) //Position: 0xA28 / 2600
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

float Function_16(int iParam0) //Position: 0xB27 / 2855
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_17(int iParam0) //Position: 0xB64 / 2916
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_18(int iParam0, bool bParam1) //Position: 0xB9D / 2973
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

var Function_19(int iParam0) //Position: 0xC04 / 3076
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

int Function_20(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC5C / 3164
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

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xE7C / 3708
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

var Function_22() //Position: 0x14A9 / 5289
{
	int iVar0;
	
	return iVar0;
}

var Function_23(int iParam0) //Position: 0x14B1 / 5297
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_24(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x14C2 / 5314
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

struct<32> Function_25(char* cParam0, char* cParam1) //Position: 0x15B7 / 5559
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x15D0 / 5584
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_28(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_27(Function_28(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_27(int iParam0, int iParam1) //Position: 0x1635 / 5685
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_28(int iParam0, bool bParam1) //Position: 0x1647 / 5703
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_29(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1659 / 5721
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

int Function_30(int iParam0) //Position: 0x1789 / 6025
{
	return Global_35278[iParam020].f_48;
}

void Function_31(int iParam0) //Position: 0x1798 / 6040
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

int Function_32(int iParam0, float fParam1, bool bParam2) //Position: 0x1932 / 6450
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

void Function_33(var uParam0, int iParam1) //Position: 0x1B4C / 6988
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_34(struct<5> Param0) //Position: 0x1B59 / 7001
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1B7F / 7039
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1B9B / 7067
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

void Function_37() //Position: 0x1E2B / 7723
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1E8E / 7822
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

bool Function_39(bool bParam0) //Position: 0x1EBD / 7869
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

int Function_40(int iParam0) //Position: 0x1F33 / 7987
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_41() //Position: 0x1F44 / 8004
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

bool Function_42(int iParam0) //Position: 0x1F5D / 8029
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_43(int iParam0) //Position: 0x1F73 / 8051
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_44() //Position: 0x1F88 / 8072
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_45(int iParam0) //Position: 0x1F91 / 8081
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1FAF / 8111
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

bool Function_47(int iParam0) //Position: 0x2053 / 8275
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_48(var uParam0, int iParam1) //Position: 0x2069 / 8297
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x207A / 8314
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

void Function_50(int iParam0, int iParam1) //Position: 0x20EC / 8428
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x2111 / 8465
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

bool Function_52(int iParam0) //Position: 0x212E / 8494
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x214A / 8522
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

void Function_54(bool bParam0, float fParam1) //Position: 0x2197 / 8599
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

void Function_55(var uParam0, bool bParam1) //Position: 0x21D5 / 8661
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

void Function_56(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x21E4 / 8676
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

void Function_57(var uParam0) //Position: 0x22BF / 8895
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

void Function_58() //Position: 0x22CE / 8910
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("sep_placement01x");
	Global_26282[04] = 0;
	Global_26282[04].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Function_59(&(Global_26282[04]), iVar0);
		iVar0++;
	}
	return;
}

void Function_59(int iParam0, int iParam1) //Position: 0x2318 / 8984
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

void Function_60(var uParam0, int iParam1) //Position: 0x2341 / 9025
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_61(bool bParam0) //Position: 0x2350 / 9040
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_62() //Position: 0x235C / 9052
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Perdido_layout");
	}
	Local_0.f_40 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "prdv_flk_SOUTH_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat1", 3, -1828,121f, -16,81786f, 4629,818f, 0.0f, 13,94146f, 0.0f, 63,75682f, 72,01299f, 203,9456f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat2", 3, -1447,001f, -4,178105f, 4618,954f, 0.0f, -28,07365f, 0.0f, 355,9802f, 72,01299f, 89,08501f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat3", 3, -2557,778f, 36,67545f, 4713,361f, -3,286861f, 25,58159f, 7,708992f, 135,4665f, 72,01299f, 71,92216f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[2]);
	(*&Local_0 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat4", 3, -2830,068f, -16,47022f, 4491,745f, 0.0f, 20.0f, 0.0f, 205,0921f, 72,01299f, 230,7468f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[3]);
	(*&Local_0 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat5", 3, -3289,058f, 23,21941f, 4541,805f, 0.0f, 20.0f, 0.0f, 241,3856f, 72,01299f, 140,3481f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[4]);
	(*&Local_0 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat6", 3, -2462,511f, 23,21941f, 4883,754f, 6,291782f, -14,22287f, -6,360377f, 155,7044f, 145,8797f, 50,74638f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[5]);
	(*&Local_0 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat8", 3, -2214,937f, 23,21941f, 4805,725f, -2,417868f, 51,80917f, -11,85691f, 124,2386f, 145,8797f, 61,15795f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[6]);
	(*&Local_0 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_bobcat7", 3, -2335,95f, 23,21941f, 4702,228f, 0.0f, 37,73186f, 0.0f, 124,2386f, 145,8797f, 40,25771f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 4)[7]);
	Local_0.f_68 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "prdv_flk_CENTER_set");
	(*&Local_0 + 44)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_wildHorse1", 3, -1223,112f, -45,37247f, 4408,328f, 0.0f, 20.0f, 0.0f, 214,866f, 82,75365f, 204,0539f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 44)[0]);
	(*&Local_0 + 44)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_wildHorse3", 3, -1641,027f, 17,77773f, 4352,699f, 0.0f, 82,46896f, 0.0f, 88,24771f, 82,75365f, 206,5756f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 44)[1]);
	(*&Local_0 + 44)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_wildHorse5", 3, -2127,066f, 29,30035f, 4394,087f, 0.0f, 20.0f, 0.0f, 259,3963f, 82,75365f, 165,8565f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 44)[2]);
	(*&Local_0 + 44)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_wildHorse6", 3, -2491,284f, 41,55529f, 4393,549f, 0.0f, 20.0f, 0.0f, 117,4157f, 59,02151f, 139,5618f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 44)[3]);
	(*&Local_0 + 44)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prd_wildHorse7", 3, -2011,8f, 44,02881f, 4658,308f, 0.0f, 66,39283f, 0.0f, 116,6155f, 32,19167f, 123,9349f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 44)[4]);
	Local_0.f_104 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "prdv_flk_NORTH_set");
	(*&Local_0 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_deer1", 3, -3105,978f, 48,22567f, 4183,158f, 0.0f, 20.0f, 0.0f, 539,1265f, 78,47768f, 128,9335f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 72)[0]);
	(*&Local_0 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_deer2", 3, -2525,599f, 16,45514f, 4150,215f, 0.0f, 20.0f, 0.0f, 140,6065f, 78,47768f, 98,50089f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 72)[1]);
	(*&Local_0 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_deer3", 3, -2143,044f, 13,05099f, 4098,297f, 0.0f, 20.0f, 0.0f, 250,3469f, 78,47768f, 124,9134f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 72)[2]);
	(*&Local_0 + 72)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_deer4", 3, -1655,763f, -38,8814f, 3963,979f, 0.0f, 7,033805f, 0.0f, 250,3469f, 78,47768f, 168,6821f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 72)[3]);
	(*&Local_0 + 72)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_deer5", 3, -1424,871f, 15,49219f, 4164,382f, 0.0f, 20.0f, 0.0f, 164,2588f, 78,47768f, 100,6236f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 72)[4]);
	(*&Local_0 + 72)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_deer6", 3, -1972,307f, 65,01617f, 3860,816f, 0.0f, 20.0f, 0.0f, 103,358f, 78,47768f, 99,85926f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 72)[5]);
	(*&Local_0 + 72)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_deer8", 3, -1154,453f, 18,53422f, 4073,343f, 0.0f, 20.0f, 0.0f, 118,9803f, 45,99867f, 116,0368f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 72)[6]);
	Local_0.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "prdv_flk_BIRD_set");
	(*&Local_0 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird1", 3, -3120f, 58,08666f, 4252.0f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[0]);
	(*&Local_0 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird2", 3, -3155,767f, 50,0108f, 4769,81f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[1]);
	(*&Local_0 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird3", 3, -2605,138f, 84,00835f, 4508,109f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[2]);
	(*&Local_0 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird4", 3, -2392f, 22,26755f, 4161,506f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[3]);
	(*&Local_0 + 108)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird5", 3, -2228,666f, 37,32635f, 4886,939f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[4]);
	(*&Local_0 + 108)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird6", 3, -1952,681f, 21,26359f, 4309,989f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[5]);
	(*&Local_0 + 108)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird7", 3, -1592,513f, 83,95605f, 4740,449f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[6]);
	(*&Local_0 + 108)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nprd_bird8", 3, -1466,186f, -40,05158f, 4200,113f, 0.0f, 20.0f, 0.0f, 406,7785f, 80,68261f, 337,0939f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 108)[7]);
	Local_0.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "prdv_aquaticWildlife_set");
	(*&Local_0 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_aquaticWildlife8", 2, -1700.0f, -3,94879f, 3745,079f, 0.0f, 0.0f, 0.0f, 437,5048f, 41,69571f, 102,6289f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[0]);
	(*&Local_0 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_aquaticWildlife7", 2, -2092,369f, -8,501405f, 3800,851f, 0.0f, 18,87418f, 0.0f, 416,9886f, 41,69571f, 132,3871f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[1]);
	(*&Local_0 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_aquaticWildlife6", 2, -2430,955f, -9,925787f, 3946,889f, 0.0f, -0,2951764f, 0.0f, 440,3749f, 41,69571f, 216,6301f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[2]);
	(*&Local_0 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_aquaticWildlife5", 2, -2987,053f, -12,32654f, 3982,231f, 0.0f, 8,733288f, 0.0f, 759,4329f, 41,69571f, 233,799f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[3]);
	(*&Local_0 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_aquaticWildlife4", 2, -3456f, -8,810408f, 4171,868f, 0.0f, 31,01138f, 0.0f, 268,922f, 41,69571f, 137,7348f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[4]);
	Local_0.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "prdv_chickens_set");
	(*&Local_0 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_chickens1", 3, -2145,031f, 16,41659f, 4951,188f, 0.0f, -4,057003f, 0.0f, 17,94717f, 8,588286f, 10,40963f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 176)[0]);
	(*&Local_0 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_chickens2", 3, -2156,94f, 18,07939f, 4991,802f, 0.0f, -6,529206f, 0.0f, 33,9479f, 8,922362f, 13,94726f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 176)[1]);
	Local_0.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_0, "prdv_bhstop", 2, -2670,965f, 32,97532f, 4253,5f, 0.0f, -10,23049f, 0.0f, 11,19157f, 7,334846f, 19,66724f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x2F7E / 12158
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

var Function_64() //Position: 0x2FC7 / 12231
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(bool bParam0, var uParam1) //Position: 0x2FDC / 12252
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

