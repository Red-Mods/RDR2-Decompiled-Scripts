//Decompiled with MagicRDR v1.0
//Function Count : 60
//Statics Count : 769
//Natives Count : 107
//Parameters Count : 2

#region Local Var
	struct<3005> Local_0 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_752 = 0;
	Local_753 = { StackVal, ScriptParam_0 };
	Function_59("Initializing Hennigan's Stead Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_755 = 500;
		uLocal_756 = Function_58();
		switch (iLocal_752)
		{
			case 0x00000000:
				if (Function_56())
				{
					iLocal_752 = 1;
				}
				bLocal_755 = false;
				break;
			
			case 0x00000001:
				Function_55(StackVal, &uLocal_757, &uLocal_760, 2, 4294967295, 0);
				Function_55(&uLocal_757, &uLocal_760, 5, Local_0.f_428, 4294967295, 0);
				Function_54(Local_0.f_428, 20);
				HORSE_ADD_REPULSION_EXCLUSION_VOLUME(Local_0.f_368);
				iLocal_752 = 2;
				bLocal_755 = false;
				break;
			
			case 0x00000002:
				Function_53(&(Global_29008[Local_753]), 16);
				Function_52("Finished Initializing Hennigan's Stead Volumes", 5.0f);
				iLocal_752 = 3;
				break;
			
			case 0x00000003:
				if (!Function_51(&Global_30668))
				{
					Function_11(&uLocal_757, &uLocal_760, uLocal_756, ScriptParam_0);
				}
				break;
			
			case 0x00000004:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_755);
	}
	if (IS_VOLUME_VALID(Local_0.f_368))
	{
		HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(Local_0.f_368);
	}
	Function_3(&uLocal_757, &uLocal_760);
	Function_2();
	Function_1(&(Global_29008[Local_753]), 16);
	Function_52("Unloaded Hennigan's Stead Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x19E / 414
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1B5 / 437
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x1C0 / 448
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

void Function_4(bool bParam0, bool bParam1, bool bParam2) //Position: 0x218 / 536
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2F5 / 757
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

void Function_6() //Position: 0x46E / 1134
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_7(bool bParam0) //Position: 0x47A / 1146
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

void Function_8(int iParam0) //Position: 0x4C0 / 1216
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

void Function_9(var uParam0, int iParam1) //Position: 0x506 / 1286
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_10(var uParam0, int iParam1) //Position: 0x520 / 1312
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x53D / 1341
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

bool Function_12(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x5BE / 1470
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

void Function_13(int iParam0) //Position: 0x9D7 / 2519
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

float Function_14(int iParam0) //Position: 0xAD6 / 2774
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_15(int iParam0) //Position: 0xB13 / 2835
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_16(int iParam0, bool bParam1) //Position: 0xB4C / 2892
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

var Function_17(int iParam0) //Position: 0xBB3 / 2995
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

int Function_18(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xC0B / 3083
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

void Function_19(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xE2B / 3627
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

var Function_20() //Position: 0x1458 / 5208
{
	int iVar0;
	
	return iVar0;
}

var Function_21(int iParam0) //Position: 0x1460 / 5216
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_22(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1471 / 5233
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

struct<32> Function_23(char* cParam0, char* cParam1) //Position: 0x1566 / 5478
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_24(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x157F / 5503
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_26(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_25(Function_26(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_25(int iParam0, int iParam1) //Position: 0x15E4 / 5604
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_26(int iParam0, bool bParam1) //Position: 0x15F6 / 5622
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_27(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1608 / 5640
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

int Function_28(int iParam0) //Position: 0x1738 / 5944
{
	return Global_35278[iParam020].f_48;
}

void Function_29(int iParam0) //Position: 0x1747 / 5959
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

int Function_30(int iParam0, float fParam1, bool bParam2) //Position: 0x18E1 / 6369
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

void Function_31(var uParam0, int iParam1) //Position: 0x1AFB / 6907
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_32(struct<5> Param0) //Position: 0x1B08 / 6920
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_33(var uParam0, int iParam1) //Position: 0x1B2E / 6958
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_34(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1B4A / 6986
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

void Function_35() //Position: 0x1DDA / 7642
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

void Function_36(bool bParam0, bool bParam1) //Position: 0x1E3D / 7741
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

bool Function_37(bool bParam0) //Position: 0x1E6C / 7788
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

int Function_38(int iParam0) //Position: 0x1EE2 / 7906
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_39() //Position: 0x1EF3 / 7923
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

bool Function_40(int iParam0) //Position: 0x1F0C / 7948
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_41(int iParam0) //Position: 0x1F22 / 7970
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_42() //Position: 0x1F37 / 7991
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_43(int iParam0) //Position: 0x1F40 / 8000
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_44(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x1F5E / 8030
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

bool Function_45(int iParam0) //Position: 0x2002 / 8194
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_46(var uParam0, int iParam1) //Position: 0x2018 / 8216
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_47(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2029 / 8233
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

void Function_48(int iParam0, int iParam1) //Position: 0x209B / 8347
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_8(iParam0);
	Function_7(iVar0);
	PRINTNL();
	Function_5(iParam0, iVar0, iParam1);
	return;
}

bool Function_49(int iParam0) //Position: 0x20C0 / 8384
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

bool Function_50(int iParam0) //Position: 0x20DD / 8413
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_51(int iParam0) //Position: 0x20F9 / 8441
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

void Function_52(bool bParam0, float fParam1) //Position: 0x2146 / 8518
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

void Function_53(var uParam0, int iParam1) //Position: 0x2184 / 8580
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_54(bool bParam0, bool bParam1) //Position: 0x2193 / 8595
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

void Function_55(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x21FA / 8698
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

bool Function_56() //Position: 0x22D5 / 8917
{
	var uVar0;
	
	Function_57(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("HennigansStead_layout");
	}
	Local_0.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hgnv_flk_NE_NW_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs26", 3, -1546,43f, 97,38037f, 1853,78f, 0.0f, 26,73163f, 0.0f, 56,72965f, 109,8061f, 128,395f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs25", 3, -1628,388f, 132,5176f, 2159,78f, 0.0f, 20.0f, 0.0f, 52,97129f, 102,6874f, 102,6874f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolfs24", 3, -95,91358f, 83,8786f, 2326,572f, 0.0f, 14,49333f, 0.0f, 187,8941f, 82,59116f, 56,21016f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[2]);
	(*&Local_0 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolf4", 3, -669,6195f, 82,32153f, 2243,572f, 0.0f, -25,1136f, 0.0f, 77,45664f, 61,52451f, 61,12249f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[3]);
	(*&Local_0 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolf3", 3, -641,6283f, 105,2476f, 2147,894f, 0.0f, -25,1136f, 0.0f, 63,94891f, 61,52451f, 37,62522f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[4]);
	(*&Local_0 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolf2", 3, -1244,821f, 109,2441f, 1986,66f, 0.0f, 74,82964f, 0.0f, 61,50541f, 61,52451f, 292,1641f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[5]);
	(*&Local_0 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "wolf1", 3, -978,507f, 90,53821f, 2145,038f, 0.0f, -25,1136f, 0.0f, 81,73277f, 61,52451f, 61,52451f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 4)[6]);
	Local_0.f_104 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hgnv_flk_ALL_set");
	(*&Local_0 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes1", 3, -168,285f, 121,9097f, 2701,151f, 0.0f, 6,717595f, 0.0f, 213,5704f, 78,37719f, 73,07709f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[0]);
	(*&Local_0 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes2", 3, -1126,763f, 114,2393f, 2588,604f, 0.0f, 20.0f, 0.0f, 146,5656f, 74,16763f, 188,0626f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[1]);
	(*&Local_0 + 40)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes3", 3, -1389,948f, 116,4549f, 2801,983f, 0.0f, 96,61452f, 0.0f, 171,6007f, 56,67553f, 76,86866f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[2]);
	(*&Local_0 + 40)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes4", 3, -1579,845f, 101,3961f, 2518,945f, 0.0f, 48,37656f, 0.0f, 38,0601f, 28,90815f, 53,12041f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[3]);
	(*&Local_0 + 40)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes5", 3, -1414,897f, 98,38428f, 2511,757f, 0.0f, 20.0f, 0.0f, 80,8248f, 24,70572f, 32,38042f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[4]);
	(*&Local_0 + 40)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes6", 3, -1514,231f, 101,3961f, 2560,085f, 0.0f, -3,53844f, 0.0f, 25,17345f, 17,08007f, 21,68644f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[5]);
	(*&Local_0 + 40)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes7", 3, -1326,246f, 97,38037f, 2249,009f, 0.0f, 20.0f, 0.0f, 184,2568f, 57,90978f, 203,9913f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[6]);
	(*&Local_0 + 40)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes8", 3, -1608.0f, 125,5505f, 1980f, 0.0f, 33,98433f, 0.0f, 66,48834f, 39,50645f, 203,3061f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[7]);
	(*&Local_0 + 40)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyotes9", 3, -1957,161f, 101,5846f, 1828,827f, 0.0f, -14,7906f, 0.0f, 249,577f, 128,3171f, 61,17927f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[8]);
	(*&Local_0 + 40)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncoyotes10", 3, -450,4749f, 109,7193f, 2320,553f, 0.0f, -10,25944f, 0.0f, 170,8267f, 69,64325f, 122,3093f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[9]);
	(*&Local_0 + 40)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncoyotes11", 3, -870,6578f, 120,6339f, 2242,882f, 0.0f, 20.0f, 0.0f, 137,9932f, 31,99745f, 55,90967f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[10]);
	(*&Local_0 + 40)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncoyotes12", 3, -26,85835f, 73,28625f, 2445,993f, 0.0f, 20.0f, 0.0f, 89,6356f, 74,6244f, 57,78758f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[11]);
	(*&Local_0 + 40)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyote3", 3, -705,2985f, 31,27967f, 2881,13f, 0.0f, 12,9101f, 0.0f, 168,8916f, 70,98837f, 54,45016f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[12]);
	(*&Local_0 + 40)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyote2", 3, -1281,534f, 43,7626f, 3124,979f, 0.0f, 20.0f, 0.0f, 133,0771f, 70,98837f, 61,59326f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[13]);
	(*&Local_0 + 40)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coyote1", 3, -1548,017f, 43,7626f, 2987,519f, 0.0f, -38,60177f, 0.0f, 199,5057f, 70,98837f, 99,28436f);
	ADD_TO_VOLUME_SET(Local_0.f_104, (*&Local_0 + 40)[14]);
	Local_0.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hgnv_BIRDS_set");
	(*&Local_0 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds4", 3, -33,64362f, 84,32941f, 2378,274f, 0.0f, 20.0f, 0.0f, 522,6793f, 135,1033f, 429,8304f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[0]);
	(*&Local_0 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds3", 3, -638,519f, 89,349f, 2563,405f, 0.0f, 20.0f, 0.0f, 522,6793f, 135,1033f, 591,4594f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[1]);
	(*&Local_0 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds2", 3, -1265,749f, 93,1955f, 2163,575f, 0.0f, 20.0f, 0.0f, 522,6793f, 135,1033f, 429,8304f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[2]);
	(*&Local_0 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds1", 3, -1082,411f, 96,37646f, 2811,352f, 0.0f, 20.0f, 0.0f, 522,6793f, 135,1033f, 429,8304f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[3]);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_corr_g", 3, -919,4725f, 93,44283f, 2380,834f, 0.0f, 20.0f, 0.0f, 21,77287f, 5,26564f, 24,40062f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nhgnv_ng_g", 2, -861,9213f, 90,67301f, 2456,731f, 0.0f, 20,98884f, -0,355489f, 12,13512f, 8,652277f, 36,94154f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g1", 2, -783,8423f, 90,3952f, 2399,794f, 0.0f, -37,76251f, -0,355489f, 21,45912f, 15,55698f, 28,28264f);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g2", 2, -824,0499f, 89,96601f, 2430,379f, 0.0f, -15,44712f, -0,355489f, 14,39529f, 15,55698f, 16,9643f);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g3", 2, -843,5833f, 89,96601f, 2460,735f, 0.0f, 19,71824f, -0,355489f, 20,80103f, 15,55698f, 30,64089f);
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g4", 2, -957,7906f, 89,96601f, 2422,677f, 0.0f, 21,25423f, -0,355489f, 20,93081f, 15,55698f, 38,45191f);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g5", 3, -823,7832f, 93,44283f, 2375,945f, 0.0f, 20.0f, 0.0f, 24,1193f, 5,26564f, 27,03024f);
	Local_0.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g6", 2, -879,0945f, 91,02522f, 2430,412f, 0.0f, 20,98884f, -0,355489f, 6,678232f, 6,105186f, 6,992032f);
	Local_0.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g7", 2, -888,8362f, 91,11685f, 2433,847f, 0.0f, 20,98884f, -0,355489f, 5,146282f, 5,805651f, 6,648986f);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g8", 2, -907,2183f, 91,10203f, 2440,071f, 0.0f, 20,98884f, -0,355489f, 19,88898f, 5,805651f, 5,396366f);
	Local_0.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nhgnv_yg_g", 2, -891,7211f, 89,96601f, 2415,688f, 0.0f, -62,1231f, -0,355489f, 21,93415f, 15,55698f, 89,95455f);
	Local_0.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g10", 2, -965,2615f, 90,6857f, 2466,688f, 0.0f, -29,91364f, -0,355489f, 10,95652f, 6,128434f, 10,16233f);
	Local_0.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_ng_g11", 2, -977,4526f, 90,6857f, 2446,704f, 0.0f, 86,50684f, -0,355489f, 10,95652f, 6,128434f, 10,16233f);
	Local_0.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hgnv_flk_SE_set");
	(*&Local_0 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses9", 3, -1252,915f, 115,5038f, 2776,96f, 0.0f, 20.0f, 0.0f, 53,69228f, 241,5724f, 159,1528f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[0]);
	(*&Local_0 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses8", 3, -683,7336f, 101,3961f, 2504,357f, 0.0f, 20.0f, 0.0f, 108,5375f, 241,5724f, 73,36443f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[1]);
	(*&Local_0 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses7", 3, -206,5182f, 107,4196f, 2489,549f, 0.0f, 20.0f, 0.0f, 95,45268f, 241,5724f, 89,9445f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[2]);
	(*&Local_0 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses6", 3, -1068,474f, 97,64758f, 2288,876f, 0.0f, 13,47815f, 0.0f, 62,59843f, 166,692f, 146,1641f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[3]);
	(*&Local_0 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses5", 3, -1356,155f, 105,5688f, 2589,477f, 0.0f, 89,71684f, 0.0f, 59,19648f, 167,1936f, 62,71087f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[4]);
	(*&Local_0 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses4", 3, -929,6819f, 99,90509f, 2698,564f, 0.0f, 4,474324f, 0.0f, 241,5724f, 241,5724f, 136,8911f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[5]);
	(*&Local_0 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses3", 3, -453,3163f, 110,2287f, 2913,625f, 0.0f, 20.0f, 0.0f, 206,5026f, 241,5724f, 75,11042f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[6]);
	(*&Local_0 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses2", 3, 55,33076f, 91,35687f, 2562,685f, 0.0f, -4,355933f, 0.0f, 152,0613f, 241,5724f, 75,9871f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[7]);
	(*&Local_0 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses1", 3, -909,8542f, 30,11766f, 3047,201f, 0.0f, 18,27707f, 0.0f, 278,4159f, 241,5724f, 53,45417f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[8]);
	(*&Local_0 + 184)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_wild_horses10", 3, -471,0976f, 108,2639f, 2622,838f, 2,126057f, 30,47574f, 5,442584f, 135,5817f, 68,29441f, 122,8929f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 184)[9]);
	Local_0.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_blackHorse", 3, -591,0882f, 109,6251f, 2680,91f, 0.0f, 20.0f, 0.0f, 11,34726f, 11,34726f, 11,34726f);
	Local_0.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea", 3, -823,0997f, 93,45189f, 2375,409f, 0.0f, 14,89016f, 0.0f, 21,89399f, 8,244097f, 25,59612f);
	Local_0.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea1", 2, -842,5452f, 94,04724f, 2460,788f, 0.0f, 22,15306f, 0.0f, 27,05575f, 13,7937f, 31,79581f);
	Local_0.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea2", 3, -824,0959f, 94,57282f, 2427,253f, 0.0f, -32,35684f, 0.0f, 21,1792f, 10,17107f, 15,41338f);
	Local_0.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea3", 3, -783,6304f, 97,11323f, 2399,24f, 0.0f, -32,8998f, 0.0f, 13,45809f, 9,658726f, 15,57873f);
	Local_0.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgv_nwreturn", 2, -824,5424f, 98,57576f, 2431,177f, 0.0f, -15,53175f, 0.0f, 8,046127f, 3,443669f, 8,918226f);
	Local_0.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea4", 2, -897,3228f, 94,61942f, 2435,878f, 0.0f, 21,06976f, 0.0f, 47,62032f, 15,94985f, 16,65399f);
	Local_0.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea5", 2, -889,1013f, 94,61942f, 2397,852f, 0.0f, 29,61621f, 0.0f, 47,62032f, 15,94985f, 18,31907f);
	Local_0.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea6", 2, -872,9827f, 93,44815f, 2349,158f, 0.0f, -58,25443f, 0.0f, 44,3011f, 15,94985f, 15,19241f);
	Local_0.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_nwarea7", 3, -861,7238f, 95,68819f, 2380,121f, 0.0f, 20.0f, 0.0f, 9,669715f, 6,168983f, 10,11579f);
	Local_0.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_cougarVol", 2, -500,1792f, 110,2059f, 2908,145f, 0.0f, 0.0f, 0.0f, 705,1399f, 157,6671f, 343,9255f);
	Local_0.f_284 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "BridgeNoSpawn_set");
	(*&Local_0 + 276)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box", 2, 28,88792f, 95,09991f, 2737,801f, 0.0f, -55,5507f, 0.0f, 46,82572f, 65,73853f, 21,10844f);
	ADD_TO_VOLUME_SET(Local_0.f_284, (*&Local_0 + 276)[0]);
	Local_0.f_364 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hgnv_aquaticWildlife_set");
	(*&Local_0 + 288)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, -1512,764f, 8,039202f, 3292,98f, 0.0f, 20.0f, 0.0f, 84,79319f, 60,33804f, 60,33804f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[0]);
	(*&Local_0 + 288)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -1346,899f, 9,043137f, 3234,699f, 0.0f, 20.0f, 0.0f, 205,4157f, 60,33804f, 39,8123f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[1]);
	(*&Local_0 + 288)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -1089,253f, 10,04872f, 3186,707f, 0.0f, 70,81681f, 0.0f, 35,98895f, 60,33804f, 106,7133f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[2]);
	(*&Local_0 + 288)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -994,1088f, 10,04705f, 3208,598f, 0.0f, 70,81681f, 0.0f, 59,6558f, 51,61178f, 60,13989f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[3]);
	(*&Local_0 + 288)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -839,1843f, 3,615696f, 3117,664f, 0.0f, 119,4781f, 0.0f, 44,35005f, 74,22896f, 154,3542f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[4]);
	(*&Local_0 + 288)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -637,1089f, 24,74285f, 3041,886f, 0.0f, 119,4781f, 0.0f, 88,07926f, 34,47046f, 90,22388f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[5]);
	(*&Local_0 + 288)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -470,0913f, 14,73549f, 2999,796f, 0.0f, 99,98062f, 0.0f, 37,44569f, 39,02574f, 118,2715f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[6]);
	(*&Local_0 + 288)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -369,1953f, 21,65845f, 2903,82f, 0.0f, 99,98062f, 0.0f, 64,58783f, 35,06966f, 60,56346f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[7]);
	(*&Local_0 + 288)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -250,8742f, 17,47171f, 2865,07f, 0.0f, 138,2915f, 0.0f, 34,61906f, 35,32534f, 102,2345f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[8]);
	(*&Local_0 + 288)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder18", 3, 197,6258f, 75,37587f, 2436,369f, 0.0f, 244,9178f, 0.0f, 25,2479f, 39,10424f, 45,45464f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[9]);
	(*&Local_0 + 288)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder20", 3, 272,2747f, 69,27057f, 2027,005f, 0.0f, 169,8044f, 0.0f, 98,88961f, 21,28149f, 112,3064f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[10]);
	(*&Local_0 + 288)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder21", 3, 215,6241f, 78,14816f, 2367,177f, 0.0f, 198,4123f, 0.0f, 33,27529f, 15,48362f, 46,38807f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[11]);
	(*&Local_0 + 288)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder22", 3, 113,125f, 76,65231f, 1968,507f, 0.0f, 169,8044f, 0.0f, 98,88961f, 21,28149f, 21,67072f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[12]);
	(*&Local_0 + 288)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder23", 3, 85,59643f, 82,13325f, 2163,788f, 0.0f, 151,2728f, 0.0f, 98,88961f, 21,28149f, 21,67072f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[13]);
	(*&Local_0 + 288)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder24", 3, -109,6845f, 79,79099f, 2126,796f, 0.0f, 195,8334f, 0.0f, 98,88961f, 21,28149f, 21,67072f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[14]);
	(*&Local_0 + 288)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder25", 3, -47,7452f, 77,93546f, 2041,63f, 0.0f, 195,8334f, 0.0f, 25,03891f, 21,28149f, 73,96124f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[15]);
	(*&Local_0 + 288)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder26", 3, -10,75366f, 74,62328f, 1963,345f, 0.0f, 195,8334f, 0.0f, 53,70681f, 21,28149f, 20,89974f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[16]);
	(*&Local_0 + 288)[17] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder27", 3, -16,77554f, 77,93485f, 2119,054f, 0.0f, 181,4433f, 0.0f, 53,70681f, 21,28149f, 15,84347f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 288)[17]);
	Local_0.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_RepulsionExclusion", 3, -644,2127f, 88,45143f, 2749,292f, 8,640414f, 24,33359f, 0.0f, 26,2284f, 3,865706f, 72,83427f);
	Local_0.f_384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hgnv_null_set");
	(*&Local_0 + 372)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_null_01", 2, -1466,12f, 112,8202f, 1971,609f, 0.0f, 64,5147f, 0.0f, 26,26892f, 35,53505f, 173,8512f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 372)[0]);
	(*&Local_0 + 372)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_null_02", 2, -1315,409f, 112,8202f, 2024,83f, 0.0f, 76,49454f, 0.0f, 26,26892f, 35,53505f, 155,8071f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 372)[1]);
	Local_0.f_388 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_bhstop", 2, -820,3679f, 93,44864f, 2420,626f, 0.0f, -103,272f, 0.0f, 8,879921f, 7,344114f, 14,69935f);
	Local_0.f_392 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_war_livestock", 3, -910,5361f, 101,392f, 2737,4f, 0.0f, 20.0f, 0.0f, 14,45543f, 9,568694f, 16,20005f);
	Local_0.f_396 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_war_chickens", 3, -950,9265f, 104,3524f, 2732,826f, 0.0f, 20.0f, 0.0f, 11,66664f, 7,72267f, 13,07468f);
	Local_0.f_400 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_war_pigs", 3, -923,754f, 102,1641f, 2758,016f, 0.0f, -53,44098f, 0.0f, 2,831347f, 1,874195f, 4,532186f);
	Local_0.f_404 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_war_barn", 2, -929,8949f, 100,7226f, 2750,85f, 0.0f, 35,14248f, 0.0f, 8,754588f, 8,754588f, 11,38631f);
	Local_0.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_bacc_chickens", 3, 113,4888f, 72,84962f, 2673,31f, 0.0f, 20.0f, 0.0f, 9,261682f, 3,104064f, 3,87598f);
	Local_0.f_428 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "hgnv_weather_set");
	(*&Local_0 + 412)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_weather02", 2, -1615,721f, 99,44508f, 1904,794f, -3,439431f, 66,95576f, 0.0f, 31,94579f, 41,12966f, 275,6443f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 412)[0]);
	(*&Local_0 + 412)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_weather03", 2, -1441,342f, 109,7487f, 1979,218f, -3,439431f, 66,95576f, 0.0f, 31,94579f, 25,6088f, 124,293f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 412)[1]);
	(*&Local_0 + 412)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hgnv_weather04", 2, -1366,98f, 115,8711f, 2011,337f, 0.0f, 69,65112f, 0.0f, 21,31541f, 19,58715f, 85,85076f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 412)[2]);
	*(&Local_0 + 432) = { -886,204f, 110,4f, 2618,948f };
	*(&Local_0 + 432 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_456 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_poi_sbridge", -886,204f, 110,4f, 2618,948f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 460) = { -764.0f, 103,6768f, 2239,9f };
	*(&Local_0 + 460 + 12) = { 0.0f, 157,5f, 0.0f };
	Local_0.f_484 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_poi_deadtrees", -764.0f, 103,6768f, 2239,9f, 0.0f, 157,5f, 0.0f);
	*(&Local_0 + 488) = { -595,187f, 100,689f, 2719,8f };
	*(&Local_0 + 488 + 12) = { 0.0f, 45.0f, 0.0f };
	Local_0.f_512 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_poi_covbridge", -595,187f, 100,689f, 2719,8f, 0.0f, 45.0f, 0.0f);
	*(&Local_0 + 516) = { -746,498f, 98,75f, 2627,884f };
	*(&Local_0 + 516 + 12) = { 0.0f, 45.0f, 0.0f };
	Local_0.f_540 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_poi_4trees", -746,498f, 98,75f, 2627,884f, 0.0f, 45.0f, 0.0f);
	*(&Local_0 + 544) = { -511,67f, 90,115f, 2319.0f };
	*(&Local_0 + 544 + 12) = { 0.0f, 232.0f, 0.0f };
	Local_0.f_568 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_poi_swamp", -511,67f, 90,115f, 2319.0f, 0.0f, 232.0f, 0.0f);
	*(&Local_0 + 572) = { -1055,395f, 103,68f, 2699.0f };
	*(&Local_0 + 572 + 12) = { 0.0f, 348.0f, 0.0f };
	Local_0.f_596 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_poi_flat", -1055,395f, 103,68f, 2699.0f, 0.0f, 348.0f, 0.0f);
	*(&Local_0 + 600) = { -812,374f, 92,361f, 2382,59f };
	*(&Local_0 + 600 + 12) = { 0.0f, 130,801f, 0.0f };
	Local_0.f_624 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwway", -812,374f, 92,361f, 2382,59f, 0.0f, 130,801f, 0.0f);
	*(&Local_0 + 628) = { -844,9763f, 91,49334f, 2461,833f };
	*(&Local_0 + 628 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_652 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwway1", -844,9763f, 91,49334f, 2461,833f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 656) = { -782,2222f, 91,49334f, 2401,543f };
	*(&Local_0 + 656 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_680 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwway2", -782,2222f, 91,49334f, 2401,543f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 684) = { -821,5574f, 91,49334f, 2429,458f };
	*(&Local_0 + 684 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_708 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwway3", -821,5574f, 91,49334f, 2429,458f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 712) = { -938,82f, 90,324f, 2473,492f };
	*(&Local_0 + 712 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_736 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide", -938,82f, 90,324f, 2473,492f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 740) = { -863,548f, 91,637f, 2376,084f };
	*(&Local_0 + 740 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_764 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide1", -863,548f, 91,637f, 2376,084f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 768) = { -827,514f, 93,365f, 2439,583f };
	*(&Local_0 + 768 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_792 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide2", -827,514f, 93,365f, 2439,583f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 796) = { -837,127f, 90,353f, 2463,477f };
	*(&Local_0 + 796 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_820 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide3", -837,127f, 90,353f, 2463,477f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 824) = { -880,615f, 91,357f, 2334,385f };
	*(&Local_0 + 824 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_848 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide4", -880,615f, 91,357f, 2334,385f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 852) = { -815,535f, 91,255f, 2472,396f };
	*(&Local_0 + 852 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_876 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide5", -815,535f, 91,255f, 2472,396f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 880) = { -780,733f, 90,353f, 2440,178f };
	*(&Local_0 + 880 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_904 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide6", -780,733f, 90,353f, 2440,178f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 908) = { -821,183f, 92,361f, 2396,052f };
	*(&Local_0 + 908 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_932 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide7", -821,183f, 92,361f, 2396,052f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 936) = { -821,183f, 92,361f, 2396,052f };
	*(&Local_0 + 936 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_960 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide8", -821,183f, 92,361f, 2396,052f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 964) = { -785,799f, 93,365f, 2388,569f };
	*(&Local_0 + 964 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_988 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide9", -785,799f, 93,365f, 2388,569f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 992) = { -793,778f, 93,365f, 2362,382f };
	*(&Local_0 + 992 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1016 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide10", -793,778f, 93,365f, 2362,382f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1020) = { -814,774f, 92,361f, 2344,782f };
	*(&Local_0 + 1020 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1044 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide11", -814,774f, 92,361f, 2344,782f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1048) = { -893,606f, 91,357f, 2402,228f };
	*(&Local_0 + 1048 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1072 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide12", -893,606f, 91,357f, 2402,228f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1076) = { 0.0f, 0.0f, 0.0f };
	*(&Local_0 + 1076 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1100 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide13", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1104) = { -836,39f, 90,353f, 2457,28f };
	*(&Local_0 + 1104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1128 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide14", -836,39f, 90,353f, 2457,28f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1132) = { -823,243f, 90,353f, 2475,886f };
	*(&Local_0 + 1132 + 12) = { 0.0f, 171,4f, 0.0f };
	Local_0.f_1156 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide15", -823,243f, 90,353f, 2475,886f, 0.0f, 171,4f, 0.0f);
	*(&Local_0 + 1160) = { -831,904f, 92,361f, 2362,93f };
	*(&Local_0 + 1160 + 12) = { 0.0f, 186,386f, 0.0f };
	Local_0.f_1184 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide16", -831,904f, 92,361f, 2362,93f, 0.0f, 186,386f, 0.0f);
	*(&Local_0 + 1188) = { -836,39f, 90,353f, 2457,28f };
	*(&Local_0 + 1188 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1212 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide17", -836,39f, 90,353f, 2457,28f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1216) = { -846,081f, 90,353f, 2477,001f };
	*(&Local_0 + 1216 + 12) = { 0.0f, 282,006f, 0.0f };
	Local_0.f_1240 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide18", -846,081f, 90,353f, 2477,001f, 0.0f, 282,006f, 0.0f);
	*(&Local_0 + 1244) = { -851,076f, 90,353f, 2451,747f };
	*(&Local_0 + 1244 + 12) = { 0.0f, 182,407f, 0.0f };
	Local_0.f_1268 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide19", -851,076f, 90,353f, 2451,747f, 0.0f, 182,407f, 0.0f);
	*(&Local_0 + 1272) = { -852,568f, 90,353f, 2448,739f };
	*(&Local_0 + 1272 + 12) = { 0.0f, 93,77f, 0.0f };
	Local_0.f_1296 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide20", -852,568f, 90,353f, 2448,739f, 0.0f, 93,77f, 0.0f);
	*(&Local_0 + 1300) = { -830,179f, 90,353f, 2448,349f };
	*(&Local_0 + 1300 + 12) = { 0.0f, 143,138f, 0.0f };
	Local_0.f_1324 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide21", -830,179f, 90,353f, 2448,349f, 0.0f, 143,138f, 0.0f);
	*(&Local_0 + 1328) = { -856,616f, 90,353f, 2452,78f };
	*(&Local_0 + 1328 + 12) = { 0.0f, 75,853f, 0.0f };
	Local_0.f_1352 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide22", -856,616f, 90,353f, 2452,78f, 0.0f, 75,853f, 0.0f);
	*(&Local_0 + 1356) = { -829,59f, 93,365f, 2430,77f };
	*(&Local_0 + 1356 + 12) = { 0.0f, 93,027f, 0.0f };
	Local_0.f_1380 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide23", -829,59f, 93,365f, 2430,77f, 0.0f, 93,027f, 0.0f);
	*(&Local_0 + 1384) = { -810,973f, 93,365f, 2440,708f };
	*(&Local_0 + 1384 + 12) = { 0.0f, 91,635f, 0.0f };
	Local_0.f_1408 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide24", -810,973f, 93,365f, 2440,708f, 0.0f, 91,635f, 0.0f);
	*(&Local_0 + 1412) = { -803,359f, 91,357f, 2448,251f };
	*(&Local_0 + 1412 + 12) = { 0.0f, 17,835f, 0.0f };
	Local_0.f_1436 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide25", -803,359f, 91,357f, 2448,251f, 0.0f, 17,835f, 0.0f);
	*(&Local_0 + 1440) = { -772,11f, 93,365f, 2411,111f };
	*(&Local_0 + 1440 + 12) = { 0.0f, 127,188f, 0.0f };
	Local_0.f_1464 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide26", -772,11f, 93,365f, 2411,111f, 0.0f, 127,188f, 0.0f);
	*(&Local_0 + 1468) = { -773,476f, 93,365f, 2397,437f };
	*(&Local_0 + 1468 + 12) = { 0.0f, 250,683f, 0.0f };
	Local_0.f_1492 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide27", -773,476f, 93,365f, 2397,437f, 0.0f, 250,683f, 0.0f);
	*(&Local_0 + 1496) = { -779,747f, 93,365f, 2388,024f };
	*(&Local_0 + 1496 + 12) = { 0.0f, 63,328f, 0.0f };
	Local_0.f_1520 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide28", -779,747f, 93,365f, 2388,024f, 0.0f, 63,328f, 0.0f);
	*(&Local_0 + 1524) = { -776,103f, 93,365f, 2371,667f };
	*(&Local_0 + 1524 + 12) = { 0.0f, 206,97f, 0.0f };
	Local_0.f_1548 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide29", -776,103f, 93,365f, 2371,667f, 0.0f, 206,97f, 0.0f);
	*(&Local_0 + 1552) = { -761,763f, 93,388f, 2380,605f };
	*(&Local_0 + 1552 + 12) = { 0.0f, 97,728f, 0.0f };
	Local_0.f_1576 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide30", -761,763f, 93,388f, 2380,605f, 0.0f, 97,728f, 0.0f);
	*(&Local_0 + 1580) = { -816,417f, 92,361f, 2354,328f };
	*(&Local_0 + 1580 + 12) = { 0.0f, 3,285f, 0.0f };
	Local_0.f_1604 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide31", -816,417f, 92,361f, 2354,328f, 0.0f, 3,285f, 0.0f);
	*(&Local_0 + 1608) = { -826,99f, 92,361f, 2358,85f };
	*(&Local_0 + 1608 + 12) = { 0.0f, 295,112f, 0.0f };
	Local_0.f_1632 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide32", -826,99f, 92,361f, 2358,85f, 0.0f, 295,112f, 0.0f);
	*(&Local_0 + 1636) = { -830,217f, 92,361f, 2370,55f };
	*(&Local_0 + 1636 + 12) = { 0.0f, 296,989f, 0.0f };
	Local_0.f_1660 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide33", -830,217f, 92,361f, 2370,55f, 0.0f, 296,989f, 0.0f);
	*(&Local_0 + 1664) = { -833,169f, 93,365f, 2419,737f };
	*(&Local_0 + 1664 + 12) = { 0.0f, 97,728f, 0.0f };
	Local_0.f_1688 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide34", -833,169f, 93,365f, 2419,737f, 0.0f, 97,728f, 0.0f);
	*(&Local_0 + 1692) = { -846,112f, 90,353f, 2448,327f };
	*(&Local_0 + 1692 + 12) = { 0.0f, 294,464f, 0.0f };
	Local_0.f_1716 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide35", -846,112f, 90,353f, 2448,327f, 0.0f, 294,464f, 0.0f);
	*(&Local_0 + 1720) = { -833,234f, 90,353f, 2466,787f };
	*(&Local_0 + 1720 + 12) = { 0.0f, 216,919f, 0.0f };
	Local_0.f_1744 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide36", -833,234f, 90,353f, 2466,787f, 0.0f, 216,919f, 0.0f);
	*(&Local_0 + 1748) = { -852,955f, 90,353f, 2462,946f };
	*(&Local_0 + 1748 + 12) = { 0.0f, 65,891f, 0.0f };
	Local_0.f_1772 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide37", -852,955f, 90,353f, 2462,946f, 0.0f, 65,891f, 0.0f);
	*(&Local_0 + 1776) = { -839,771f, 90,353f, 2452,96f };
	*(&Local_0 + 1776 + 12) = { 0.0f, 80,427f, 0.0f };
	Local_0.f_1800 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide38", -839,771f, 90,353f, 2452,96f, 0.0f, 80,427f, 0.0f);
	*(&Local_0 + 1804) = { -834,559f, 90,353f, 2467,964f };
	*(&Local_0 + 1804 + 12) = { 0.0f, 53,542f, 0.0f };
	Local_0.f_1828 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide39", -834,559f, 90,353f, 2467,964f, 0.0f, 53,542f, 0.0f);
	*(&Local_0 + 1832) = { -875,748f, 90,353f, 2430,767f };
	*(&Local_0 + 1832 + 12) = { 0.0f, 267,975f, 0.0f };
	Local_0.f_1856 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide40", -875,748f, 90,353f, 2430,767f, 0.0f, 267,975f, 0.0f);
	*(&Local_0 + 1860) = { -879,926f, 90,353f, 2434,369f };
	*(&Local_0 + 1860 + 12) = { 0.0f, 73,407f, 0.0f };
	Local_0.f_1884 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide41", -879,926f, 90,353f, 2434,369f, 0.0f, 73,407f, 0.0f);
	*(&Local_0 + 1888) = { -889,26f, 90,353f, 2430,237f };
	*(&Local_0 + 1888 + 12) = { 0.0f, 24,138f, 0.0f };
	Local_0.f_1912 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide42", -889,26f, 90,353f, 2430,237f, 0.0f, 24,138f, 0.0f);
	*(&Local_0 + 1916) = { -893,963f, 91,357f, 2407,55f };
	*(&Local_0 + 1916 + 12) = { 0.0f, 192,133f, 0.0f };
	Local_0.f_1940 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide43", -893,963f, 91,357f, 2407,55f, 0.0f, 192,133f, 0.0f);
	*(&Local_0 + 1944) = { -916,777f, 90,353f, 2445,419f };
	*(&Local_0 + 1944 + 12) = { 0.0f, 81,945f, 0.0f };
	Local_0.f_1968 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide44", -916,777f, 90,353f, 2445,419f, 0.0f, 81,945f, 0.0f);
	*(&Local_0 + 1972) = { -888,983f, 91,071f, 2433,968f };
	*(&Local_0 + 1972 + 12) = { 0.0f, 16,7f, 0.0f };
	Local_0.f_1996 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide45", -888,983f, 91,071f, 2433,968f, 0.0f, 16,7f, 0.0f);
	*(&Local_0 + 2000) = { -905,077f, 91,357f, 2406,632f };
	*(&Local_0 + 2000 + 12) = { 0.0f, 317,433f, 0.0f };
	Local_0.f_2024 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide46", -905,077f, 91,357f, 2406,632f, 0.0f, 317,433f, 0.0f);
	*(&Local_0 + 2028) = { -873,142f, 91,357f, 2389,937f };
	*(&Local_0 + 2028 + 12) = { 0.0f, 359,911f, 0.0f };
	Local_0.f_2052 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide47", -873,142f, 91,357f, 2389,937f, 0.0f, 359,911f, 0.0f);
	*(&Local_0 + 2056) = { -867,391f, 91,357f, 2356,293f };
	*(&Local_0 + 2056 + 12) = { 0.0f, 162,898f, 0.0f };
	Local_0.f_2080 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide48", -867,391f, 91,357f, 2356,293f, 0.0f, 162,898f, 0.0f);
	*(&Local_0 + 2084) = { -863,874f, 91,357f, 2358,976f };
	*(&Local_0 + 2084 + 12) = { 0.0f, 299,451f, 0.0f };
	Local_0.f_2108 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide49", -863,874f, 91,357f, 2358,976f, 0.0f, 299,451f, 0.0f);
	*(&Local_0 + 2112) = { -854,504f, 91,357f, 2375,794f };
	*(&Local_0 + 2112 + 12) = { 0.0f, 312,773f, 0.0f };
	Local_0.f_2136 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide50", -854,504f, 91,357f, 2375,794f, 0.0f, 312,773f, 0.0f);
	*(&Local_0 + 2140) = { -867,942f, 91,357f, 2381,48f };
	*(&Local_0 + 2140 + 12) = { 0.0f, 105,366f, 0.0f };
	Local_0.f_2164 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide51", -867,942f, 91,357f, 2381,48f, 0.0f, 105,366f, 0.0f);
	*(&Local_0 + 2168) = { -792,25f, 93,365f, 2392,549f };
	*(&Local_0 + 2168 + 12) = { 0.0f, 55,064f, 0.0f };
	Local_0.f_2192 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide52", -792,25f, 93,365f, 2392,549f, 0.0f, 55,064f, 0.0f);
	*(&Local_0 + 2196) = { -784,179f, 93,364f, 2412,746f };
	*(&Local_0 + 2196 + 12) = { 0.0f, 216,828f, 0.0f };
	Local_0.f_2220 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_nwhide53", -784,179f, 93,364f, 2412,746f, 0.0f, 216,828f, 0.0f);
	*(&Local_0 + 2224) = { -609,421f, 58,313f, 2869,093f };
	*(&Local_0 + 2224 + 12) = { 0.0f, 334,865f, 0.0f };
	Local_0.f_2248 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar", -609,421f, 58,313f, 2869,093f, 0.0f, 334,865f, 0.0f);
	*(&Local_0 + 2252) = { -667,922f, 28,661f, 3009,792f };
	*(&Local_0 + 2252 + 12) = { 0.0f, 332,957f, 0.0f };
	Local_0.f_2276 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar1", -667,922f, 28,661f, 3009,792f, 0.0f, 332,957f, 0.0f);
	*(&Local_0 + 2280) = { -611,116f, 39,25f, 2937,017f };
	*(&Local_0 + 2280 + 12) = { 0.0f, 333,304f, 0.0f };
	Local_0.f_2304 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar2", -611,116f, 39,25f, 2937,017f, 0.0f, 333,304f, 0.0f);
	*(&Local_0 + 2308) = { -599,414f, 35,553f, 2978,019f };
	*(&Local_0 + 2308 + 12) = { 0.0f, 355,273f, 0.0f };
	Local_0.f_2332 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar3", -599,414f, 35,553f, 2978,019f, 0.0f, 355,273f, 0.0f);
	*(&Local_0 + 2336) = { -458,357f, 36,35f, 2963,933f };
	*(&Local_0 + 2336 + 12) = { 0.0f, 27,341f, 0.0f };
	Local_0.f_2360 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar4", -458,357f, 36,35f, 2963,933f, 0.0f, 27,341f, 0.0f);
	*(&Local_0 + 2364) = { -439,848f, 34,122f, 2981,26f };
	*(&Local_0 + 2364 + 12) = { 0.0f, 89,176f, 0.0f };
	Local_0.f_2388 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar5", -439,848f, 34,122f, 2981,26f, 0.0f, 89,176f, 0.0f);
	*(&Local_0 + 2392) = { -516,926f, 51,579f, 2863,099f };
	*(&Local_0 + 2392 + 12) = { 0.0f, 7,263f, 0.0f };
	Local_0.f_2416 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar6", -516,926f, 51,579f, 2863,099f, 0.0f, 7,263f, 0.0f);
	*(&Local_0 + 2420) = { -465,391f, 34,282f, 2934,764f };
	*(&Local_0 + 2420 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_2444 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar7", -465,391f, 34,282f, 2934,764f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 2448) = { -440,141f, 18,125f, 3015,614f };
	*(&Local_0 + 2448 + 12) = { 0.0f, 213,149f, 0.0f };
	Local_0.f_2472 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar8", -440,141f, 18,125f, 3015,614f, 0.0f, 213,149f, 0.0f);
	*(&Local_0 + 2476) = { -641,021f, 17,815f, 3025,635f };
	*(&Local_0 + 2476 + 12) = { 0.0f, 194,212f, 0.0f };
	Local_0.f_2500 = CREATE_POINT_IN_LAYOUT(Local_0, "hgnf_cougar9", -641,021f, 17,815f, 3025,635f, 0.0f, 194,212f, 0.0f);
	*(&Local_0 + 2504) = { -1084,182f, 100,4239f, 2907,834f };
	*(&Local_0 + 2504 + 12) = { 0.0f, 179,8879f, 0.0f };
	Local_0.f_2528 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuy_hgn1", -1084,182f, 100,4239f, 2907,834f, 0.0f, 179,8879f, 0.0f);
	*(&Local_0 + 2532) = { -1084f, 100,499f, 2904.0f };
	*(&Local_0 + 2532 + 12) = { 0.0f, 178,2066f, 0.0f };
	Local_0.f_2556 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_hgn1", -1084f, 100,499f, 2904.0f, 0.0f, 178,2066f, 0.0f);
	*(&Local_0 + 2560) = { -1088f, 99,60892f, 2900f };
	*(&Local_0 + 2560 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_2584 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_hgn1", -1088f, 99,60892f, 2900f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 2588) = { -1084,182f, 100,4239f, 2910,447f };
	*(&Local_0 + 2588 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_2612 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_hgn1", -1084,182f, 100,4239f, 2910,447f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 2616) = { -1080,36f, 100,4441f, 2911,143f };
	*(&Local_0 + 2616 + 12) = { 0.0f, 53,31279f, 0.0f };
	Local_0.f_2640 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_hgn1", -1080,36f, 100,4441f, 2911,143f, 0.0f, 53,31279f, 0.0f);
	*(&Local_0 + 2644) = { -1084,43f, 101,0248f, 2914,738f };
	*(&Local_0 + 2644 + 12) = { 0.0f, -2,253904f, 0.0f };
	Local_0.f_2668 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_hgn1", -1084,43f, 101,0248f, 2914,738f, 0.0f, -2,253904f, 0.0f);
	*(&Local_0 + 2672) = { -872,724f, 41,23136f, 3070,519f };
	*(&Local_0 + 2672 + 12) = { 0.0f, 131,4123f, 0.0f };
	Local_0.f_2696 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuy_hgn2", -872,724f, 41,23136f, 3070,519f, 0.0f, 131,4123f, 0.0f);
	*(&Local_0 + 2700) = { -872,724f, 41,17292f, 3066,799f };
	*(&Local_0 + 2700 + 12) = { 0.0f, 180,8444f, 0.0f };
	Local_0.f_2724 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_hgn2", -872,724f, 41,17292f, 3066,799f, 0.0f, 180,8444f, 0.0f);
	*(&Local_0 + 2728) = { -871,9998f, 41,21151f, 3064f };
	*(&Local_0 + 2728 + 12) = { 0.0f, -74,38534f, 0.0f };
	Local_0.f_2752 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_hgn2", -871,9998f, 41,21151f, 3064f, 0.0f, -74,38534f, 0.0f);
	*(&Local_0 + 2756) = { -875,0469f, 41,18454f, 3071,935f };
	*(&Local_0 + 2756 + 12) = { 0.0f, -59,64066f, 0.0f };
	Local_0.f_2780 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_hgn2", -875,0469f, 41,18454f, 3071,935f, 0.0f, -59,64066f, 0.0f);
	*(&Local_0 + 2784) = { -863,0834f, 40,15686f, 3068f };
	*(&Local_0 + 2784 + 12) = { 0.0f, 68,95885f, 0.0f };
	Local_0.f_2808 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_hgn2", -863,0834f, 40,15686f, 3068f, 0.0f, 68,95885f, 0.0f);
	*(&Local_0 + 2812) = { -862,2219f, 40,15686f, 3064,376f };
	*(&Local_0 + 2812 + 12) = { -4,386553f, 103,4417f, -1,514705f };
	Local_0.f_2836 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_hgn2", -862,2219f, 40,15686f, 3064,376f, -4,386553f, 103,4417f, -1,514705f);
	*(&Local_0 + 2840) = { -113,557f, 101,4211f, 2775,839f };
	*(&Local_0 + 2840 + 12) = { 0.0f, 176,8049f, 0.0f };
	Local_0.f_2864 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuy_hgn3", -113,557f, 101,4211f, 2775,839f, 0.0f, 176,8049f, 0.0f);
	*(&Local_0 + 2868) = { -113,557f, 101,4299f, 2772f };
	*(&Local_0 + 2868 + 12) = { 0.0f, 184,0346f, 0.0f };
	Local_0.f_2892 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingTree_hgn3", -113,557f, 101,4299f, 2772f, 0.0f, 184,0346f, 0.0f);
	*(&Local_0 + 2896) = { -112f, 101,4607f, 2768f };
	*(&Local_0 + 2896 + 12) = { 0.0f, -68,41741f, 0.0f };
	Local_0.f_2920 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingHorses_hgn3", -112f, 101,4607f, 2768f, 0.0f, -68,41741f, 0.0f);
	*(&Local_0 + 2924) = { -113,557f, 101,4211f, 2778,209f };
	*(&Local_0 + 2924 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_2948 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard1_hgn3", -113,557f, 101,4211f, 2778,209f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 2952) = { -109,5103f, 101,411f, 2774,271f };
	*(&Local_0 + 2952 + 12) = { 0.0f, 113,2994f, 0.0f };
	Local_0.f_2976 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard2_hgn3", -109,5103f, 101,411f, 2774,271f, 0.0f, 113,2994f, 0.0f);
	*(&Local_0 + 2980) = { -108,7824f, 101,4551f, 2777,506f };
	*(&Local_0 + 2980 + 12) = { 0.0f, 68,30651f, 0.0f };
	Local_0.f_3004 = CREATE_POINT_IN_LAYOUT(Local_0, "hangingGuard3_hgn3", -108,7824f, 101,4551f, 2777,506f, 0.0f, 68,30651f, 0.0f);
	return 1;
}

void Function_57(int iParam0, int iParam1) //Position: 0x5CB6 / 23734
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

var Function_58() //Position: 0x5CFF / 23807
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_59(bool bParam0, var uParam1) //Position: 0x5D14 / 23828
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

