//Decompiled with MagicRDR v1.0
//Function Count : 63
//Statics Count : 278
//Natives Count : 117
//Parameters Count : 2

#region Local Var
	struct<1041> Local_0 = { 0, 0, 3, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_261 = 0;
	Local_262 = { StackVal, ScriptParam_0 };
	Function_62("Initializing Cholla Springs Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_264 = 500;
		uLocal_265 = Function_61();
		switch (iLocal_261)
		{
			case 0x00000000:
				if (Function_59())
				{
					REQUEST_STRING_TABLE("graveyards");
					iLocal_261 = 1;
				}
				bLocal_264 = false;
				break;
			
			case 0x00000001:
				Function_58(&uLocal_266);
				Function_57(StackVal, &uLocal_266, &uLocal_269, 2, 4294967295, 0);
				Function_57(&uLocal_266, &uLocal_269, 5, Local_0.f_256, 4294967295, 0);
				Function_56(Local_0.f_256, 20);
				HORSE_ADD_REPULSION_EXCLUSION_VOLUME(Local_0.f_208);
				iLocal_261 = 2;
				bLocal_264 = false;
				break;
			
			case 0x00000002:
				if (HAS_STRING_TABLE_LOADED("graveyards"))
				{
					Function_55(&(Global_29008[Local_262]), 16);
					Function_54("Finished Initializing Cholla Springs Volumes", 5.0f);
					iLocal_261 = 3;
				}
				bLocal_264 = false;
				break;
			
			case 0x00000003:
				if (!Function_53(&Global_30640))
				{
					Function_13(&uLocal_266, &uLocal_269, uLocal_265, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_264);
	}
	if (IS_VOLUME_VALID(Local_0.f_208))
	{
		HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(Local_0.f_208);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_11(&(Global_26282[34]));
	Function_3(&uLocal_266, &uLocal_269);
	Function_2();
	Function_1(&(Global_29008[Local_262]), 16);
	Function_54("Unloaded Cholla Springs Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1DB / 475
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1F2 / 498
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1FD / 509
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

void Function_4(bool bParam0, bool bParam1, bool bParam2) //Position: 0x255 / 597
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x332 / 818
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

void Function_6() //Position: 0x4AB / 1195
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x4B7 / 1207
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

void Function_8(int iParam0) //Position: 0x4FD / 1277
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

void Function_9(var uParam0, int iParam1) //Position: 0x543 / 1347
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x55D / 1373
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(int iParam0) //Position: 0x57A / 1402
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

void Function_12(bool bParam0) //Position: 0x5A6 / 1446
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

void Function_13(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x5EB / 1515
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

bool Function_14(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x66C / 1644
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

void Function_15(int iParam0) //Position: 0xA85 / 2693
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

float Function_16(int iParam0) //Position: 0xB84 / 2948
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_17(int iParam0) //Position: 0xBC1 / 3009
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_18(int iParam0, bool bParam1) //Position: 0xBFA / 3066
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

var Function_19(int iParam0) //Position: 0xC61 / 3169
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

int Function_20(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xCB9 / 3257
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

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xED9 / 3801
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_22() //Position: 0x1506 / 5382
{
	int iVar0;
	
	return iVar0;
}

var Function_23(int iParam0) //Position: 0x150E / 5390
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_24(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x151F / 5407
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

struct<32> Function_25(char* cParam0, char* cParam1) //Position: 0x1614 / 5652
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x162D / 5677
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_28(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_27(Function_28(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_27(int iParam0, int iParam1) //Position: 0x1692 / 5778
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_28(int iParam0, bool bParam1) //Position: 0x16A4 / 5796
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_29(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x16B6 / 5814
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

int Function_30(int iParam0) //Position: 0x17E6 / 6118
{
	return Global_35278[iParam020].f_48;
}

void Function_31(int iParam0) //Position: 0x17F5 / 6133
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

int Function_32(int iParam0, float fParam1, bool bParam2) //Position: 0x198F / 6543
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

void Function_33(var uParam0, int iParam1) //Position: 0x1BA9 / 7081
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_34(struct<5> Param0) //Position: 0x1BB6 / 7094
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x1BDC / 7132
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1BF8 / 7160
{
	vector3 vVar0;
	int iVar3;
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
	iVar3 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	bVar4 = FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes");
	if ((IS_CRIME_VALID(iVar3) && IS_OBJECT_VALID(bVar4)) && GET_OBJECT_TYPE(bVar4) != 2)
	{
		SET_CRIME_TYPE(iVar3, iParam1);
		SET_CRIME_VICTIM(iVar3, bParam3);
		SET_CRIME_CRIMINAL(iVar3, bParam2);
		SET_CRIME_BEGIN_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(iVar3, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(bParam3, &vVar0);
		SET_CRIME_POSITION(iVar3, vVar0);
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_22(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(iVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(iVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(iVar3, 3);
			Function_37();
		}
		SET_CRIME_FACTION(StackVal, iVar3);
		SET_CRIME_TALLIED(iVar3, 0);
		SET_CRIME_COUNTER(iVar3, 1);
		SET_CRIME_WORLD_REGION(iVar3, Global_26361.f_12);
		if ((Global_26998[iParam118].f_20 != 2 || Global_26998[iParam118].f_20 != 3) || Global_26998[iParam118].f_20 != 4)
		{
			SET_CRIME_IN_PROGRESS(iVar3, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(iVar3, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(iVar3), GET_OBJECTSET_FROM_OBJECT(bVar4));
		SET_ACTOR_TIME_OF_LAST_CRIME(bParam2, GET_CURRENT_GAME_TIME());
	}
	return iVar3;
}

void Function_37() //Position: 0x1E88 / 7816
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_38(bVar0, iVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		iVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(iVar3))
		{
			SET_CRIME_WITNESSED(iVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x1EEB / 7915
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

bool Function_39(bool bParam0) //Position: 0x1F1A / 7962
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

int Function_40(int iParam0) //Position: 0x1F90 / 8080
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_41() //Position: 0x1FA1 / 8097
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

bool Function_42(int iParam0) //Position: 0x1FBA / 8122
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_43(int iParam0) //Position: 0x1FD0 / 8144
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_44() //Position: 0x1FE5 / 8165
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_45(int iParam0) //Position: 0x1FEE / 8174
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_46(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x200C / 8204
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

bool Function_47(int iParam0) //Position: 0x20B0 / 8368
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_48(var uParam0, int iParam1) //Position: 0x20C6 / 8390
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x20D7 / 8407
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

void Function_50(int iParam0, int iParam1) //Position: 0x2149 / 8521
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_51(int iParam0) //Position: 0x216E / 8558
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

bool Function_52(int iParam0) //Position: 0x218B / 8587
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x21A7 / 8615
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

void Function_54(bool bParam0, float fParam1) //Position: 0x21F4 / 8692
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

void Function_55(var uParam0, int iParam1) //Position: 0x2232 / 8754
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_56(bool bParam0, bool bParam1) //Position: 0x2241 / 8769
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

void Function_57(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x22A8 / 8872
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

void Function_58(var uParam0) //Position: 0x2383 / 9091
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_59() //Position: 0x2392 / 9106
{
	var uVar0;
	
	Function_60(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("ChollaSprings_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("ChollaSprings_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "cho_v_robbery_bank", 2, -2129,407f, 16,70768f, 2629,63f, 0.0f, 0.0f, 0.0f, 8,191952f, 4,770277f, 12,96974f);
	Local_0.f_24 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chov_flk_SE_set");
	(*&Local_0 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote13", 3, -2007,02f, 44,86926f, 3521,066f, 0.0f, 99,33791f, 0.0f, 152,3102f, 72,87077f, 393,4008f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 8)[0]);
	(*&Local_0 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote11", 3, -2286,051f, 71,85783f, 3168,56f, 0.0f, 114,533f, 0.0f, 231,7098f, 72,87077f, 241,9312f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 8)[1]);
	(*&Local_0 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote6", 3, -1403,146f, 79,01429f, 3179,861f, 0.0f, 20.0f, 0.0f, 315,3113f, 72,87077f, 89,50647f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 8)[2]);
	Local_0.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chov_flk_BIRD_set");
	(*&Local_0 + 28)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird9", 2, -1958,434f, 101,0974f, 2226,605f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[0]);
	(*&Local_0 + 28)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird8", 2, -1918,184f, 104,9177f, 2746,359f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[1]);
	(*&Local_0 + 28)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird7", 2, -1721,521f, 124,7826f, 3177,619f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[2]);
	(*&Local_0 + 28)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird6", 2, -2421,43f, 99,94559f, 2296,987f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[3]);
	(*&Local_0 + 28)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird5", 2, -3326,428f, 99,94559f, 2311,53f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[4]);
	(*&Local_0 + 28)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird4", 2, -2253,922f, 99,94559f, 3297,425f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[5]);
	(*&Local_0 + 28)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird3", 2, -2995,438f, 99,94559f, 2847,024f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[6]);
	(*&Local_0 + 28)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird2", 2, -2442,531f, 124,5297f, 2840,813f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[7]);
	(*&Local_0 + 28)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird1", 2, -2797,079f, 146,3613f, 2340,662f, 0.0f, 0.0f, 0.0f, 533,0086f, 265,0622f, 533,0086f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[8]);
	(*&Local_0 + 28)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bird10", 2, -1744.0f, 64,80349f, 3761,037f, 0.0f, 0.0f, 0.0f, 483,619f, 284,8854f, 636,4444f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 28)[9]);
	Local_0.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chov_flk_NW_set");
	(*&Local_0 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote16", 3, -3405,162f, 132,1931f, 2282,319f, 0.0f, 20.0f, 0.0f, 483,8218f, 124,0656f, 251,9133f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 76)[0]);
	(*&Local_0 + 76)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote15", 3, -2627,713f, 85,36726f, 2137,038f, 0.0f, 12,66908f, 0.0f, 337,0677f, 72,87077f, 171,2465f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 76)[1]);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_corr_g", 2, -2162,67f, 17,85944f, 2529,48f, 0.0f, 0.0f, 0.0f, 21,95249f, 6,09781f, 18,1392f);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_corr_g1", 3, -3256,318f, 17,42523f, 2684,909f, 0.0f, -4,000802f, 0.0f, 19,15676f, 3,784842f, 14,37248f);
	Local_0.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chov_flk_CENTER_set");
	(*&Local_0 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote14", 3, -3470,75f, 57,58878f, 2907,83f, 0.0f, 60,3094f, 0.0f, 273,8005f, 72,87077f, 432,1263f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[0]);
	(*&Local_0 + 100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote12", 3, -2857,875f, 45,37122f, 2931,935f, 0.0f, 0,5088242f, 0.0f, 370,2651f, 72,87077f, 163,3423f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[1]);
	(*&Local_0 + 100)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote10", 3, -2030,104f, 64,89014f, 2199,561f, 0.0f, 20.0f, 0.0f, 289,1952f, 72,87077f, 305,7238f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[2]);
	(*&Local_0 + 100)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote9", 3, -1862,307f, 69,70703f, 2537,985f, 0.0f, 20.0f, 0.0f, 187,955f, 72,87077f, 71,0254f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[3]);
	(*&Local_0 + 100)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote8", 3, -2735,441f, 52,57456f, 2534,006f, 0.0f, 20.0f, 0.0f, 500,0366f, 72,87077f, 186,022f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[4]);
	(*&Local_0 + 100)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote5", 3, -2339,341f, 84,82725f, 2758,449f, 0.0f, 38,60125f, 0.0f, 177,2788f, 72,87077f, 163,7006f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[5]);
	(*&Local_0 + 100)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_coyote7", 3, -1710,038f, 92,56963f, 2877,446f, 0.0f, 36,57126f, 0.0f, 243,0385f, 72,87077f, 316,2653f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[6]);
	Local_0.f_184 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chov_aquaticWildlife_set");
	(*&Local_0 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, -1952,099f, 2,777636f, 3682,922f, 0.0f, 20.0f, 0.0f, 127,5827f, 26,76715f, 68,97265f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[0]);
	(*&Local_0 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -1806,972f, 1,447045f, 3676,27f, 0.0f, -25,7432f, 0.0f, 127,5827f, 34,46169f, 55,42039f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[1]);
	(*&Local_0 + 136)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -1609,237f, -7,771293f, 3675,061f, 0.0f, 20,18436f, 0.0f, 127,5827f, 42,95206f, 41,30914f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[2]);
	(*&Local_0 + 136)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -1500,997f, 6,72601f, 3584,961f, 0.0f, 90,64689f, 0.0f, 69,98493f, 32,80807f, 49,03263f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[3]);
	(*&Local_0 + 136)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -1553,605f, -10,55402f, 3395,087f, 0.0f, 69,65346f, 0.0f, 95,48157f, 53,43207f, 66,89602f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[4]);
	(*&Local_0 + 136)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -1536,674f, -7,79462f, 3499,095f, 0.0f, 115,5425f, 0.0f, 95,48157f, 46,10002f, 41,30582f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[5]);
	(*&Local_0 + 136)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -1324,39f, -9,726888f, 3297,891f, 0.0f, 198,4867f, 0.0f, 177,3927f, 67,16534f, 46,03975f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[6]);
	(*&Local_0 + 136)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -1485,543f, -6,896104f, 3351,123f, 0.0f, 198,4867f, 0.0f, 60,65277f, 59,69416f, 56,75384f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[7]);
	(*&Local_0 + 136)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -1084,366f, -1,173465f, 3259,22f, 0.0f, 165,3063f, 0.0f, 113,8503f, 53,6678f, 39,58623f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[8]);
	(*&Local_0 + 136)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -1837,354f, 83,44997f, 3238,259f, 0.0f, 57,87493f, 0.0f, 95,28522f, 58,2637f, 150,1283f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[9]);
	(*&Local_0 + 136)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -1704,853f, 89,20071f, 3141,556f, 0.0f, 48,99913f, 0.0f, 75,2394f, 55,67625f, 85,32506f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 136)[10]);
	Local_0.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_Venters", 3, -2015,121f, 52,26184f, 3032,706f, 0.0f, 20.0f, 0.0f, 65,26729f, 31,83129f, 80,59859f);
	Local_0.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chov_RepulsionExclusion_set");
	(*&Local_0 + 192)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rVol", 3, -2667,281f, 24,92847f, 2768,899f, 0.0f, 47,7562f, 0.0f, 16,44051f, 10,17344f, 105,9122f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 192)[0]);
	(*&Local_0 + 192)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rVol1", 3, -2593,523f, 24,92847f, 2861,392f, 0.0f, 30,61959f, 0.0f, 16,44051f, 10,17344f, 46,57639f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 192)[1]);
	(*&Local_0 + 192)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rVol2", 3, -2563,586f, 24,92847f, 2939,262f, 0.0f, 25,17644f, 0.0f, 13,3478f, 10,17344f, 55,50443f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 192)[2]);
	Local_0.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchov_null", 2, -1675,096f, 100,2788f, 1882,939f, -2,186509f, 68,0397f, 0.0f, 19,16553f, 19,16553f, 307,3276f);
	Local_0.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_bhstop", 2, -2093,543f, 16,72504f, 2606,436f, 0.0f, -67,146f, 0.0f, 13,1825f, 4,702487f, 11,50658f);
	Local_0.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_venter_chickens", 3, -2019,877f, 46,91924f, 3021,859f, 0.0f, -85,7293f, 0.0f, 5,489199f, 5,910119f, 11,7782f);
	Local_0.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_venter_livestock", 3, -2016,426f, 45,01529f, 3030,329f, 0.0f, -41,84417f, 0.0f, 13,36018f, 9,924715f, 16,4985f);
	Local_0.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_critchly", 3, -2919,004f, 13,05096f, 2960,33f, 0.0f, -1,008442f, 0.0f, 86,22987f, 36,01125f, 91,18248f);
	Local_0.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_critchly_goats", 3, -2916,517f, 13,05096f, 2948,477f, 0.0f, 47,11259f, 0.0f, 25,86532f, 11,23466f, 32,4671f);
	Local_0.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_critchly_chickens", 3, -2913,593f, 13,05096f, 2987,315f, 0.0f, 76,97934f, 0.0f, 10,5309f, 4,57412f, 13,21877f);
	Local_0.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_venter_dog", 3, -2015,121f, 52,26184f, 3032,706f, 0.0f, 20.0f, 0.0f, 24,22468f, 11,81454f, 29,91507f);
	Local_0.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_critchly_dog", 3, -2919,004f, 13,05096f, 2960,33f, 0.0f, -1,008442f, 0.0f, 44,99642f, 18,79137f, 47,58079f);
	Local_0.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_critchly_barn", 2, -2905,128f, 11,63437f, 2947,027f, 0.0f, 43,06549f, 0.0f, 9,434371f, 8,059836f, 11,34686f);
	Local_0.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_venter_barn", 2, -2006,876f, 42,18377f, 3047,409f, 0.0f, 59,41034f, 0.0f, 9,526102f, 4,852225f, 9,324677f);
	Local_0.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chov_weather01", 2, -1522,265f, 95,79754f, 1932,439f, 1,338954f, -20,89042f, 0,03367328f, 489,9247f, 41,12966f, 52,49646f);
	*(&Local_0 + 260) = { -2660,076f, 37,91997f, 2840,266f };
	*(&Local_0 + 260 + 12) = { 0.0f, 203.0f, 0.0f };
	Local_0.f_284 = CREATE_POINT_IN_LAYOUT(Local_0, "chof_ambush_0", -2660,076f, 37,91997f, 2840,266f, 0.0f, 203.0f, 0.0f);
	*(&Local_0 + 288) = { -3404f, 32,12553f, 2900f };
	*(&Local_0 + 288 + 12) = { 0.0f, 119,9582f, 0.0f };
	Local_0.f_312 = CREATE_POINT_IN_LAYOUT(Local_0, "chof_ambush_1", -3404f, 32,12553f, 2900f, 0.0f, 119,9582f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_loot", -2131,377f, 16,83483f, 2637,952f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_bad", -2122,505f, 17,0211f, 2589,887f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_bad1", -2148,4f, 16,57384f, 2550,547f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_bad2", -2164.0f, 16,5f, 2576.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_bad3", -2204,95f, 16,82352f, 2623,455f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_bad4", -2154,732f, 16,4f, 2637,812f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_good", -2122,505f, 17,0211f, 2589,887f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_good1", -2148,4f, 16,57384f, 2550,547f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_good2", -2164.0f, 16,5f, 2576.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_good3", -2204,95f, 16,82352f, 2623,455f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_robbery_good4", -2154,796f, 16,4f, 2637,98f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 316) = { -3208,513f, 26,72148f, 2664,471f };
	*(&Local_0 + 316 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_340 = CREATE_POINT_IN_LAYOUT(Local_0, "chof_ng", -3208,513f, 26,72148f, 2664,471f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 344) = { -3196f, 26,64374f, 2652f };
	*(&Local_0 + 344 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_368 = CREATE_POINT_IN_LAYOUT(Local_0, "chof_ng1", -3196f, 26,64374f, 2652f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 372) = { -2511,161f, 25,09802f, 2783,072f };
	*(&Local_0 + 372 + 12) = { 0.0f, 172,0058f, 0.0f };
	Local_0.f_396 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuy_cho1", -2511,161f, 25,09802f, 2783,072f, 0.0f, 172,0058f, 0.0f);
	*(&Local_0 + 400) = { -2512.0f, 25,09802f, 2792f };
	*(&Local_0 + 400 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_424 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_cho1", -2512.0f, 25,09802f, 2792f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 428) = { -2511,734f, 25,09802f, 2786,463f };
	*(&Local_0 + 428 + 12) = { 0.0f, -9,601336f, 0.0f };
	Local_0.f_452 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_cho1", -2511,734f, 25,09802f, 2786,463f, 0.0f, -9,601336f, 0.0f);
	*(&Local_0 + 456) = { -2514,621f, 25,09802f, 2786,586f };
	*(&Local_0 + 456 + 12) = { 0.0f, -26,33815f, 0.0f };
	Local_0.f_480 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_cho1", -2514,621f, 25,09802f, 2786,586f, 0.0f, -26,33815f, 0.0f);
	*(&Local_0 + 484) = { -2509,448f, 25,09802f, 2787,19f };
	*(&Local_0 + 484 + 12) = { 0.0f, 28,32407f, 0.0f };
	Local_0.f_508 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_cho1", -2509,448f, 25,09802f, 2787,19f, 0.0f, 28,32407f, 0.0f);
	*(&Local_0 + 512) = { -2511,156f, 25,09802f, 2779,65f };
	*(&Local_0 + 512 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_536 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_cho1", -2511,156f, 25,09802f, 2779,65f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 540) = { -1916.0f, 28,52396f, 2252.0f };
	*(&Local_0 + 540 + 12) = { 0.0f, -129,2145f, 0.0f };
	Local_0.f_564 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_cho2", -1916.0f, 28,52396f, 2252.0f, 0.0f, -129,2145f, 0.0f);
	*(&Local_0 + 568) = { -1919,594f, 31,00599f, 2265,41f };
	*(&Local_0 + 568 + 12) = { 0.0f, 76,81097f, 0.0f };
	Local_0.f_592 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuy_cho2", -1919,594f, 31,00599f, 2265,41f, 0.0f, 76,81097f, 0.0f);
	*(&Local_0 + 596) = { -1924,5f, 30,33228f, 2264,192f };
	*(&Local_0 + 596 + 12) = { 0.0f, -103,4184f, 0.0f };
	Local_0.f_620 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_cho2", -1924,5f, 30,33228f, 2264,192f, 0.0f, -103,4184f, 0.0f);
	*(&Local_0 + 624) = { -1924,192f, 30,40042f, 2261,759f };
	*(&Local_0 + 624 + 12) = { 0.0f, -145,1376f, 0.0f };
	Local_0.f_648 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_cho2", -1924,192f, 30,40042f, 2261,759f, 0.0f, -145,1376f, 0.0f);
	*(&Local_0 + 652) = { -1924,954f, 30,00881f, 2266,127f };
	*(&Local_0 + 652 + 12) = { 0.0f, -80,97864f, 0.0f };
	Local_0.f_676 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_cho2", -1924,954f, 30,00881f, 2266,127f, 0.0f, -80,97864f, 0.0f);
	*(&Local_0 + 680) = { -1920.0f, 31,28032f, 2261,344f };
	*(&Local_0 + 680 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_704 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_cho2", -1920.0f, 31,28032f, 2261,344f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 708) = { -2920f, 18,74643f, 2668f };
	*(&Local_0 + 708 + 12) = { 0.0f, 123,5328f, 0.0f };
	Local_0.f_732 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_cho3", -2920f, 18,74643f, 2668f, 0.0f, 123,5328f, 0.0f);
	*(&Local_0 + 736) = { -2925.0f, 18,64439f, 2671,426f };
	*(&Local_0 + 736 + 12) = { 0,04063571f, -128,7616f, 0,1263601f };
	Local_0.f_760 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuy_cho3", -2925.0f, 18,64439f, 2671,426f, 0,04063571f, -128,7616f, 0,1263601f);
	*(&Local_0 + 764) = { -2922,902f, 18,64439f, 2673,112f };
	*(&Local_0 + 764 + 12) = { 0.0f, 50,75231f, 0.0f };
	Local_0.f_788 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_cho3", -2922,902f, 18,64439f, 2673,112f, 0.0f, 50,75231f, 0.0f);
	*(&Local_0 + 792) = { -2928f, 18,6426f, 2672f };
	*(&Local_0 + 792 + 12) = { 0.0f, -85,02582f, 0.0f };
	Local_0.f_816 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_cho3", -2928f, 18,6426f, 2672f, 0.0f, -85,02582f, 0.0f);
	*(&Local_0 + 820) = { -2928f, 18,6261f, 2674,092f };
	*(&Local_0 + 820 + 12) = { 0.0f, -56,82056f, 0.0f };
	Local_0.f_844 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_cho3", -2928f, 18,6261f, 2674,092f, 0.0f, -56,82056f, 0.0f);
	*(&Local_0 + 848) = { -2925.0f, 18,63521f, 2669.0f };
	*(&Local_0 + 848 + 12) = { 0.0f, -173,2698f, 0.0f };
	Local_0.f_872 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_cho3", -2925.0f, 18,63521f, 2669.0f, 0.0f, -173,2698f, 0.0f);
	*(&Local_0 + 876) = { -2109,58f, 18,14495f, 2021,791f };
	*(&Local_0 + 876 + 12) = { 0.0f, 111,6542f, 0.0f };
	Local_0.f_900 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_cho4", -2109,58f, 18,14495f, 2021,791f, 0.0f, 111,6542f, 0.0f);
	*(&Local_0 + 904) = { -2107,098f, 18,12279f, 2018,854f };
	*(&Local_0 + 904 + 12) = { 0.0f, -104,0094f, 0.0f };
	Local_0.f_928 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuy_cho4", -2107,098f, 18,12279f, 2018,854f, 0.0f, -104,0094f, 0.0f);
	*(&Local_0 + 932) = { -2104,83f, 18,12279f, 2018,854f };
	*(&Local_0 + 932 + 12) = { 0.0f, 70,75015f, 0.0f };
	Local_0.f_956 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_cho4", -2104,83f, 18,12279f, 2018,854f, 0.0f, 70,75015f, 0.0f);
	*(&Local_0 + 960) = { -2103,116f, 18,17717f, 2016.0f };
	*(&Local_0 + 960 + 12) = { 0.0f, 120,8677f, 0.0f };
	Local_0.f_984 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_cho4", -2103,116f, 18,17717f, 2016.0f, 0.0f, 120,8677f, 0.0f);
	*(&Local_0 + 988) = { -2103,723f, 18,09279f, 2022,66f };
	*(&Local_0 + 988 + 12) = { 0.0f, 35,49055f, 0.0f };
	Local_0.f_1012 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_cho4", -2103,723f, 18,09279f, 2022,66f, 0.0f, 35,49055f, 0.0f);
	*(&Local_0 + 1016) = { -2107,098f, 18,16976f, 2014,983f };
	*(&Local_0 + 1016 + 12) = { 0.0f, 180,7631f, 0.0f };
	Local_0.f_1040 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_cho4", -2107,098f, 18,16976f, 2014,983f, 0.0f, 180,7631f, 0.0f);
	return 1;
}

void Function_60(int iParam0, int iParam1) //Position: 0x3F13 / 16147
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

var Function_61() //Position: 0x3F5C / 16220
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_62(bool bParam0, var uParam1) //Position: 0x3F71 / 16241
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

