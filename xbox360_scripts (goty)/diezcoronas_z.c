//Decompiled with MagicRDR v1.0
//Function Count : 114
//Statics Count : 339
//Natives Count : 157
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	bool bLocal_6 = false;
	var uLocal_7 = 1;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	struct<1069> Local_11 = { 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_336 = 0;
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_113(&Var0, 3);
	Function_112();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_0 = 1;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000001:
				if (Function_109())
				{
					iLocal_0 = 2;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_100())
				{
					Function_99();
					Function_98(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_1 = 500;
				if (Function_95())
				{
					Function_98(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000004:
				Function_94(&uLocal_3);
				Function_92(iScriptParam_0);
				iLocal_0 = 5;
				iLocal_1 = 0;
				break;
			
			case 0x00000005:
				if (Function_91())
				{
					Function_83();
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				else
				{
					iLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_82(iScriptParam_0);
				Function_81();
				Function_98(&(Global_29008[iScriptParam_0]), 8);
				if (Function_80(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_79(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000007:
				Function_78(iScriptParam_0);
				iLocal_0 = 8;
				iLocal_1 = 0;
				break;
			
			case 0x00000008:
				if (!Function_77(iScriptParam_0))
				{
					Function_71(iScriptParam_0);
					Function_70(64);
				}
				Function_98(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				iLocal_1 = 0;
				break;
			
			case 0x00000009:
				if (!Function_77(iScriptParam_0))
				{
					Function_68(Function_69(), iScriptParam_0);
				}
				Function_67(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_66(&Var0, 5.0f);
				Function_98(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				iLocal_1 = 0;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_77(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						iLocal_1 = 0;
					}
					Function_24(&uLocal_3, &uLocal_331, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_80(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(iLocal_1);
	}
	Function_22();
	Function_16();
	Function_8(&uLocal_3, &uLocal_331);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_70(64);
	Function_79(&(Global_29008[iScriptParam_0]), 32);
	Function_79(&(Global_29008[iScriptParam_0]), 64);
	Function_79(&(Global_29008[iScriptParam_0]), 512);
	Function_79(&(Global_29008[iScriptParam_0]), 16);
	Function_79(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_66(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2EA / 746
{
	SET_DUST_LEVEL(1);
	if (IS_SCRIPT_VALID(bLocal_335))
	{
		TERMINATE_SCRIPT(bLocal_335);
	}
	return;
}

void Function_2(int iParam0) //Position: 0x304 / 772
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x33A / 826
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x35C / 860
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x372 / 882
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x388 / 904
{
	Function_7();
	return;
}

void Function_7() //Position: 0x391 / 913
{
	RELEASE_LAYOUT_REF(Local_279);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x39D / 925
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_15(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_14(iParam1[iVar03], 4);
		}
		if (Function_15(iParam1[iVar03], 8))
		{
			Function_9(0, 0, 30);
			Function_14(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_9(int iParam0, int iParam1, int iParam2) //Position: 0x3F5 / 1013
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
		Function_10(Global_16524, bVar0, 1);
	}
	return;
}

void Function_10(int iParam0, bool bParam1, bool bParam2) //Position: 0x4DB / 1243
{
	int iVar0;
	
	Function_13(iParam0);
	Function_12(bParam1);
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
	Function_11();
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

void Function_11() //Position: 0x654 / 1620
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_12(bool bParam0) //Position: 0x660 / 1632
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

void Function_13(int iParam0) //Position: 0x6A6 / 1702
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

void Function_14(int iParam0, int iParam1) //Position: 0x6EC / 1772
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x706 / 1798
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x723 / 1827
{
	Function_17();
	return;
}

void Function_17() //Position: 0x72C / 1836
{
	Function_18(&Local_11 + 4);
	RELEASE_LAYOUT_REF(Local_11);
	return;
}

void Function_18(int iParam0) //Position: 0x73E / 1854
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_19(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0x764 / 1892
{
	if (Function_21(uParam0[iParam13], 4))
	{
		if (Function_21(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_20(uParam0[iParam13], 1);
			Function_20(uParam0[iParam13], 2);
			Function_20(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x892 / 2194
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_21(int iParam0, int iParam1) //Position: 0x8AC / 2220
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8C9 / 2249
{
	Function_23();
	return;
}

void Function_23() //Position: 0x8D2 / 2258
{
	Function_18(&bLocal_6 + 4);
	RELEASE_LAYOUT_REF(bLocal_6);
	return;
}

void Function_24(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x8E4 / 2276
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_61(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_25(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_25(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x965 / 2405
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_60(iParam0))
	{
		return 0;
	}
	Function_79(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
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
					if (!Function_15(iParam0, 2))
					{
						if (!Function_15(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_58(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_57(iParam0, 8);
							}
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (Function_15(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_9(0, 0, 0);
						}
						else
						{
							Function_9(0, 0, 30);
						}
						Function_14(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_15(iParam0, 2))
					{
						if (!Function_15(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_57(iParam0, 4);
							}
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (Function_15(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_14(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_56(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_55(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_15(iParam0, 2))
					{
						if (!Function_15(iParam0, 16))
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
							if (Function_54())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_57(iParam0, 16);
								Function_46(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (Function_15(iParam0, 16))
					{
						Function_14(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_15(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_57(iParam0, 2);
			}
			else
			{
				Function_14(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_80(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_15(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_45(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_57(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_44(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_26(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_26(int iParam0) //Position: 0xD7E / 3454
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_80(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_98(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_31(473, 1, 0, 0);
		iVar0 = Function_30(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_31(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_31(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_31(476, 1, 0, 0);
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
		Function_29(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_29(7, 30);
	}
	if (Function_28(473) <= Function_27(473))
	{
		if (!Function_54())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_27(int iParam0) //Position: 0xE7D / 3709
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_28(int iParam0) //Position: 0xEBA / 3770
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xEF3 / 3827
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

var Function_30(int iParam0) //Position: 0xF5A / 3930
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xFB2 / 4018
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
	Function_43(iParam0, TO_FLOAT(bParam1), 1);
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x11D2 / 4562
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_27(390))), 32);
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
					bVar19 = (Function_28(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_28(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_33(), &Var9);
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

var Function_33() //Position: 0x17FF / 6143
{
	int iVar0;
	
	return iVar0;
}

var Function_34(int iParam0) //Position: 0x1807 / 6151
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1818 / 6168
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x190D / 6413
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1926 / 6438
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x198B / 6539
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x199D / 6557
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x19AF / 6575
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x1ADF / 6879
{
	return Global_35278[iParam020].f_48;
}

void Function_42(int iParam0) //Position: 0x1AEE / 6894
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

int Function_43(int iParam0, float fParam1, bool bParam2) //Position: 0x1C88 / 7304
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

void Function_44(var uParam0, int iParam1) //Position: 0x1ECC / 7884
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_45(struct<5> Param0) //Position: 0x1ED9 / 7897
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1EFF / 7935
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_53(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_52(iParam1))
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
	if (!Function_49(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_33(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_47();
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

void Function_47() //Position: 0x218F / 8591
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_48(bVar0, iVar1);
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

void Function_48(bool bParam0, bool bParam1) //Position: 0x21F2 / 8690
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

bool Function_49(bool bParam0) //Position: 0x2221 / 8737
{
	if (Function_55(256))
	{
		return 0;
	}
	if (Function_55(262144))
	{
		return 0;
	}
	if (Function_51())
	{
		return 0;
	}
	if (!Function_55(1))
	{
		return 0;
	}
	if (!Function_55(4096))
	{
		return 0;
	}
	if (bParam0 && Function_50(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_55(2048))
	{
		return 0;
	}
	if (Function_54() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_50(int iParam0) //Position: 0x2297 / 8855
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_51() //Position: 0x22A8 / 8872
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

bool Function_52(int iParam0) //Position: 0x22C1 / 8897
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_53(int iParam0) //Position: 0x22D7 / 8919
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_54() //Position: 0x22EC / 8940
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_55(int iParam0) //Position: 0x22F5 / 8949
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2313 / 8979
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

void Function_57(int iParam0, int iParam1) //Position: 0x23B7 / 9143
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_58(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x23C8 / 9160
{
	int iVar0;
	bool bVar1;
	
	Function_13(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_59(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_10(StackVal, bVar1, bParam4);
		}
	}
}

void Function_59(int iParam0, int iParam1) //Position: 0x243A / 9274
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_13(iParam0);
	Function_12(iVar0);
	PRINTNL();
	Function_10(iParam0, iVar0, iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x245F / 9311
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

bool Function_61(int iParam0) //Position: 0x247C / 9340
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x2498 / 9368
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(var uParam0) //Position: 0x24AD / 9389
{
	uParam0 = uParam0;
	if (!iLocal_336)
	{
		if (!IS_SCRIPT_VALID(bLocal_335))
		{
			if (Function_65(1) >= 4)
			{
				if (Function_65(2) >= 4)
				{
					if (!Function_64())
					{
						bLocal_335 = LAUNCH_NEW_SCRIPT("$/content/DLC/ZombiePack/Beats/beat_unicorn.sc", 0);
						iLocal_336 = 1;
					}
				}
			}
		}
	}
	return;
}

bool Function_64() //Position: 0x251B / 9499
{
	bool bVar0;
	
	if (StackVal == 1267)
	{
		return 1;
	}
	bVar0 = GET_MOUNT(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (GET_ACTOR_ENUM(bVar0) == 1267)
		{
			return 1;
		}
	}
	bVar0 = GET_MOST_RECENT_MOUNT(Global_34573);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (GET_ACTOR_ENUM(bVar0) == 1267)
		{
			return 1;
		}
	}
	return 0;
}

int Function_65(int iParam0) //Position: 0x256B / 9579
{
	if (Function_54() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_66(bool bParam0, float fParam1) //Position: 0x2593 / 9619
{
	if (!Function_61(128))
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

void Function_67(int iParam0) //Position: 0x25D1 / 9681
{
	if (!Function_5(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (((iParam0 != Global_30628[0] || iParam0 != Global_30628[1]) || iParam0 != Global_30628[2]) || iParam0 != Global_30628[3])
	{
		Global_29004 = 0;
	}
	else if ((iParam0 != Global_30633[0] || iParam0 != Global_30633[2]) || iParam0 != Global_30633[1])
	{
		Global_29004 = 1;
	}
	else if (iParam0 != Global_30637[1] || iParam0 != Global_30637[0])
	{
		Global_29004 = 2;
	}
	return;
}

void Function_68(bool bParam0, bool bParam1) //Position: 0x2663 / 9827
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_44(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_54())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

var Function_69() //Position: 0x275D / 10077
{
	return bLocal_6;
}

void Function_70(int iParam0) //Position: 0x2765 / 10085
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_71(bool bParam0) //Position: 0x2778 / 10104
{
	Function_72(StackVal, 0, 0.25f, 0, bLocal_6, !Function_76(&Global_30707));
	return;
}

void Function_72(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x279A / 10138
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_75();
	}
	if (bParam5)
	{
		Function_73(1048576);
	}
}

void Function_73(int iParam0) //Position: 0x28AD / 10413
{
	Function_74(&Global_28842, iParam0);
	return;
}

void Function_74(var uParam0, var uParam1) //Position: 0x28BB / 10427
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_75() //Position: 0x28D6 / 10454
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_73(16384);
	}
	return;
}

bool Function_76(int iParam0) //Position: 0x28F2 / 10482
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_5((*iParam0)[iVar0]))
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

bool Function_77(int iParam0) //Position: 0x293F / 10559
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_30628[0])
	{
		return Function_76(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_76(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_76(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_76(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_76(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_76(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_76(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_76(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_76(&Global_30717);
	}
	return 0;
}

void Function_78(int iParam0) //Position: 0x2A1C / 10780
{
	iParam0 = iParam0;
	return;
}

void Function_79(var uParam0, int iParam1) //Position: 0x2A26 / 10790
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_80(int iParam0, int iParam1) //Position: 0x2A3D / 10813
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_81() //Position: 0x2A59 / 10841
{
	return;
}

void Function_82(var uParam0) //Position: 0x2A5F / 10847
{
	uParam0 = uParam0;
	return;
}

void Function_83() //Position: 0x2A69 / 10857
{
	Function_84(Global_30633[1]);
	Global_29004 = 1;
	return;
}

void Function_84(int iParam0) //Position: 0x2A7C / 10876
{
	int iVar0;
	
	iVar0 = Function_86(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_85(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_85(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_85(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_85(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_85(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_85(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_85(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_85(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_85(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

bool Function_85(var uParam0, int iParam1) //Position: 0x2CB4 / 11444
{
	return (uParam0 && iParam1) == 0;
}

int Function_86(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2CC1 / 11457
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_90(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_87(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_87(bParam0, bParam1, bParam2, 4294967295);
}

int Function_87(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2D1F / 11551
{
	var uVar0;
	
	if (!Function_89(bParam2))
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
	uVar0 = Function_90(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_88(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_88(int iParam0) //Position: 0x2E74 / 11892
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_89(int iParam0) //Position: 0x2EB2 / 11954
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_90(int iParam0, int iParam1, bool bParam2) //Position: 0x2EC7 / 11975
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_91() //Position: 0x2EE7 / 12007
{
	return 1;
}

void Function_92(bool bParam0) //Position: 0x2EEE / 12014
{
	Function_93(StackVal, &uLocal_3, &uLocal_331, 2, 4294967295, 0);
	return;
}

void Function_93(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x2F08 / 12040
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

void Function_94(var uParam0) //Position: 0x2FE3 / 12259
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_95() //Position: 0x2FF2 / 12274
{
	return Function_96();
}

int Function_96() //Position: 0x2FFB / 12283
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = uVar0;
	Local_279 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(Local_279))
	{
		Local_279 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	Local_279.f_68 = CREATE_VOLUME_SET_IN_LAYOUT(Local_279, "dzcv_flk_BIRD_set");
	(*&Local_279 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird1", 3, -611.829f, 38.219f, 3827.132f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[0]);
	(*&Local_279 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird2", 3, -866.4571f, 22.49439f, 3931.92f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[1]);
	(*&Local_279 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird3", 3, -313.7093f, 21.75904f, 3726.008f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[2]);
	(*&Local_279 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird4", 3, -510.6579f, 29.49834f, 3541.931f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[3]);
	(*&Local_279 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird5", 3, -1219.403f, 6.319977f, 4040.926f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[4]);
	(*&Local_279 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird6", 3, -637.6205f, 29.80308f, 4300.197f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[5]);
	(*&Local_279 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird7", 3, 290.432f, 34.87038f, 3480.95f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[6]);
	(*&Local_279 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird8", 3, -108.391f, 38.21025f, 3434.176f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[7]);
	(*&Local_279 + 4)[8] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_bird9", 3, -712.0f, 17.23909f, 3079.969f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[8]);
	(*&Local_279 + 4)[9] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bird10", 3, -925.6773f, 17.23909f, 4212.848f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[9]);
	(*&Local_279 + 4)[10] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bird11", 3, -352.4366f, 21.4454f, 4107.059f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[10]);
	(*&Local_279 + 4)[11] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bird12", 3, -1279.938f, 18.19875f, 3673.032f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[11]);
	(*&Local_279 + 4)[12] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bird13", 3, -930.9156f, 20.02059f, 3494.921f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[12]);
	(*&Local_279 + 4)[13] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bird14", 3, -649.6989f, 36.98386f, 3207.082f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[13]);
	(*&Local_279 + 4)[14] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bird15", 3, -1370.839f, 33.3484f, 3323.744f, 0.0f, 20.0f, 0.0f, 371.0182f, 95.43382f, 325.5865f);
	ADD_TO_VOLUME_SET(Local_279.f_68, (*&Local_279 + 4)[14]);
	Local_279.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_279, "dzcv_flk_NORTH_set");
	(*&Local_279 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_deer1", 3, 183.2115f, 2.510682f, 3253.547f, 0.0f, 20.0f, 0.0f, 281.9918f, 89.35717f, 179.1817f);
	ADD_TO_VOLUME_SET(Local_279.f_100, (*&Local_279 + 72)[0]);
	(*&Local_279 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_deer2", 3, -146.5327f, 32.12549f, 3481.587f, 0.0f, 20.0f, 0.0f, 152.6265f, 89.35717f, 151.084f);
	ADD_TO_VOLUME_SET(Local_279.f_100, (*&Local_279 + 72)[1]);
	(*&Local_279 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_deer3", 3, -496.7743f, -25.0744f, 3307.334f, 0.0f, 20.0f, 0.0f, 134.0671f, 89.35717f, 140.6055f);
	ADD_TO_VOLUME_SET(Local_279.f_100, (*&Local_279 + 72)[2]);
	(*&Local_279 + 72)[3] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_deer4", 3, 246.9567f, 1.866014f, 3601.049f, 0.0f, 20.0f, 0.0f, 160.3628f, 70.34444f, 154.0316f);
	ADD_TO_VOLUME_SET(Local_279.f_100, (*&Local_279 + 72)[3]);
	(*&Local_279 + 72)[4] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_deer5", 3, -1157.915f, 33.55283f, 3680.932f, 0.0f, 42.43787f, 0.0f, 468.457f, 89.35717f, 255.2923f);
	ADD_TO_VOLUME_SET(Local_279.f_100, (*&Local_279 + 72)[4]);
	(*&Local_279 + 72)[5] = CREATE_VOLUME_IN_LAYOUT(Local_279, "ndzc_deer6", 3, -18.09855f, 2.510682f, 2951.459f, 0.0f, 40.72098f, 0.0f, 315.7549f, 126.4596f, 93.80151f);
	ADD_TO_VOLUME_SET(Local_279.f_100, (*&Local_279 + 72)[5]);
	Local_279.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_279, "dzcv_flk_CENTER_set");
	(*&Local_279 + 104)[0] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_wildHorse1", 3, -581.5504f, 0.5420829f, 3671.503f, 0.0f, 20.0f, 0.0f, 141.8387f, 59.55745f, 147.3043f);
	ADD_TO_VOLUME_SET(Local_279.f_128, (*&Local_279 + 104)[0]);
	(*&Local_279 + 104)[1] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_wildHorse2", 3, -493.5024f, 0.7923921f, 3894.903f, 0.0f, 20.0f, 0.0f, 109.9956f, 59.55745f, 89.54243f);
	ADD_TO_VOLUME_SET(Local_279.f_128, (*&Local_279 + 104)[1]);
	(*&Local_279 + 104)[2] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_wildHorse3", 3, -759.9346f, -12.84043f, 3899.402f, 0.0f, 20.0f, 0.0f, 138.0682f, 59.55745f, 137.679f);
	ADD_TO_VOLUME_SET(Local_279.f_128, (*&Local_279 + 104)[2]);
	(*&Local_279 + 104)[3] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_wildHorse4", 3, -307.3904f, 37.0189f, 3708.881f, 0.0f, 20.0f, 0.0f, 123.4423f, 59.55745f, 136.9776f);
	ADD_TO_VOLUME_SET(Local_279.f_128, (*&Local_279 + 104)[3]);
	(*&Local_279 + 104)[4] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_wildHorse7", 3, -272f, -0.3381402f, 3968.0f, 0.0f, 20.0f, 0.0f, 125.6101f, 59.55745f, 130.064f);
	ADD_TO_VOLUME_SET(Local_279.f_128, (*&Local_279 + 104)[4]);
	Local_279.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_279, "dzcv_flk_SOUTH_set");
	(*&Local_279 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bobcat2", 3, -1123.103f, 30.4954f, 4443.961f, 0.0f, 20.0f, 0.0f, 147.2831f, 35.79898f, 163.0907f);
	ADD_TO_VOLUME_SET(Local_279.f_164, (*&Local_279 + 132)[0]);
	(*&Local_279 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bobcat5", 3, -586.597f, 19.71896f, 4380.45f, 0.0f, 20.0f, 0.0f, 161.0917f, 35.79898f, 163.0907f);
	ADD_TO_VOLUME_SET(Local_279.f_164, (*&Local_279 + 132)[1]);
	(*&Local_279 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bobcat7", 3, -496.9962f, 21.61504f, 4106.414f, 0.0f, 20.0f, 0.0f, 131.9805f, 35.79898f, 117.3314f);
	ADD_TO_VOLUME_SET(Local_279.f_164, (*&Local_279 + 132)[2]);
	(*&Local_279 + 132)[3] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bobcat8", 3, -298.3602f, 20.21682f, 4293.722f, 0.0f, 20.0f, 0.0f, 142.1019f, 35.79898f, 152.6231f);
	ADD_TO_VOLUME_SET(Local_279.f_164, (*&Local_279 + 132)[3]);
	(*&Local_279 + 132)[4] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bobcat14", 3, -850.075f, 6.92048f, 4473.812f, 0.0f, 20.0f, 0.0f, 110.5808f, 34.04399f, 155.0954f);
	ADD_TO_VOLUME_SET(Local_279.f_164, (*&Local_279 + 132)[4]);
	(*&Local_279 + 132)[5] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bobcat13", 3, -862.697f, 25.3591f, 4180.081f, 0.0f, 20.0f, 0.0f, 215.6465f, 37.4021f, 135.8368f);
	ADD_TO_VOLUME_SET(Local_279.f_164, (*&Local_279 + 132)[5]);
	(*&Local_279 + 132)[6] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzc_bobcat12", 3, -1439.972f, 31.61843f, 4396.93f, 0.0f, 20.0f, 0.0f, 155.0954f, 34.04399f, 155.0954f);
	ADD_TO_VOLUME_SET(Local_279.f_164, (*&Local_279 + 132)[6]);
	Local_279.f_200 = CREATE_VOLUME_SET_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife_set");
	(*&Local_279 + 168)[0] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife10", 2, -249.935f, 4.074929f, 3072.152f, 0.0f, 43.30123f, 0.0f, 320.5055f, 42.68611f, 180.343f);
	ADD_TO_VOLUME_SET(Local_279.f_200, (*&Local_279 + 168)[0]);
	(*&Local_279 + 168)[1] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife9", 2, -545.003f, -5.849846f, 3184.051f, 0.0f, 0.0f, 0.0f, 469.1619f, 60.29255f, 182.7418f);
	ADD_TO_VOLUME_SET(Local_279.f_200, (*&Local_279 + 168)[1]);
	(*&Local_279 + 168)[2] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife8", 2, -907.4448f, -6.917324f, 3308.913f, 0.0f, 32.04573f, 0.0f, 365.7122f, 60.29255f, 124.2856f);
	ADD_TO_VOLUME_SET(Local_279.f_200, (*&Local_279 + 168)[2]);
	(*&Local_279 + 168)[3] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife7", 2, -1373.302f, -9.389809f, 3409.714f, 0.0f, 18.31845f, 0.0f, 660.2542f, 60.29255f, 139.5668f);
	ADD_TO_VOLUME_SET(Local_279.f_200, (*&Local_279 + 168)[3]);
	(*&Local_279 + 168)[4] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife6", 2, -1493.303f, -12.2371f, 3619.515f, 0.0f, 27.62256f, 0.0f, 92.58046f, 60.29255f, 198.8555f);
	ADD_TO_VOLUME_SET(Local_279.f_200, (*&Local_279 + 168)[4]);
	(*&Local_279 + 168)[5] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife5", 2, -1592.424f, -12.7732f, 3712.559f, 0.0f, 22.51199f, 0.0f, 327.7378f, 60.29255f, 86.73923f);
	ADD_TO_VOLUME_SET(Local_279.f_200, (*&Local_279 + 168)[5]);
	(*&Local_279 + 168)[6] = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_aquaticWildlife4", 2, -1897.605f, -15.24222f, 3749.151f, 0.0f, 0.0f, 0.0f, 323.3455f, 60.29255f, 154.5044f);
	ADD_TO_VOLUME_SET(Local_279.f_200, (*&Local_279 + 168)[6]);
	Local_279.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_279, "dzcv_BB_Restriction", 2, 34.01668f, 94.87236f, 2740.988f, 0.0f, 33.96989f, 0.0f, 40.76286f, 57.50324f, 112.8068f);
	return 1;
}

void Function_97(int iParam0, int iParam1) //Position: 0x3E43 / 15939
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

void Function_98(var uParam0, int iParam1) //Position: 0x3E8C / 16012
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_99() //Position: 0x3E9B / 16027
{
	return;
}

bool Function_100() //Position: 0x3EA1 / 16033
{
	return Function_101();
}

int Function_101() //Position: 0x3EAA / 16042
{
	bool bVar0;
	
	Function_97(3, 3);
	bVar0 = bVar0;
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_107(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_5", 1, 0);
	if (!Function_102(&Local_11 + 4))
	{
		return 0;
	}
	Local_11 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(Local_11))
	{
		Local_11 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint", -1328.862f, 83.27f, 3602.278f, 0.0f, 9.33f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint1", -596.0f, 30.83434f, 4006.688f, 0.0f, 10.879f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint2", -528.0f, 28.61168f, 3587.232f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint3", -111.0578f, 55.2157f, 2808f, 0.0f, 0.0f, 0.0f);
	*(&Local_11 + 488) = { -578.514f, 28.459f, 3838.448f };
	*(&Local_11 + 488 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_11.f_512 = CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint4", -578.514f, 28.459f, 3838.448f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint5", -1341.777f, 13.05099f, 4301.776f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint6", -1352f, 13.05099f, 4281.627f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint7", -1370.036f, 13.05099f, 4317.523f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint8", -1378.815f, 13.05099f, 4295.221f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_11, "dzcf_bhint9", -1344f, 13.482f, 4260.0f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", -1362.953f, 13.07964f, 4300.644f, 0.0f, -18.15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -1359.716f, 13.05099f, 4298.842f, 0.0f, -272.5584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_sit_ground_smoke3", "sit_ground_smoke", -1364.03f, 13.04671f, 4298.394f, 0.0f, -112.4335f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -1362.544f, 13.05099f, 4296.964f, 0.0f, -180.1093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay13", "horse_stay", -1394.776f, 12.977f, 4308.042f, 0.0f, 74.33443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay12", "horse_stay", -1386.643f, 13.051f, 4290.629f, 0.0f, 41.19416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay11", "horse_stay", -1396.363f, 13.05099f, 4300.878f, 0.0f, 48.00632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay10b", "horse_stay", -1400.339f, 11.495f, 4292.966f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_Pee3", "Pee", -1385.775f, 13.05099f, 4298.206f, 0.0f, 28.35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", -1378.63f, 13.056f, 4306.34f, 0.0f, -18.15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", -1372.292f, 13.05099f, 4291.89f, 0.0f, -28.9995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1374.563f, 13.05099f, 4297.688f, 0.0f, 9.780541f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_look_out_window_R", "look_out_window_R", -1380.752f, 13.04853f, 4297.446f, 0.0f, -41.49537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay21", "horse_stay", -1365.99f, 13.051f, 4324.597f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay20", "horse_stay", -1384.05f, 12.988f, 4324.893f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay19", "horse_stay", -1388.964f, 12.966f, 4324.276f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay18", "horse_stay", -1364.119f, 13.051f, 4332.481f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", -1354.34f, 13.05099f, 4309.859f, 0.0f, 27.99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", -1361.21f, 13.05939f, 4316.554f, 0.0f, 192.786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", -1368.854f, 13.05759f, 4314.05f, 0.0f, -18.15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_sit_ground_smoke2", "sit_ground_smoke", -1371.078f, 13.05098f, 4315.158f, 0.0f, 82.18061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_rand_idle_stand6", "rand_idle_stand", -1381.432f, 13.037f, 4321.681f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay15", "horse_stay", -1331.086f, 13.691f, 4317.092f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay14", "horse_stay", -1335.886f, 13.273f, 4317.106f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay17", "horse_stay", -1329.264f, 13.051f, 4300.218f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_horse_stay16", "horse_stay", -1327.329f, 13.051f, 4303.468f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", -1347.543f, 13.051f, 4305.105f, 0.0f, 27.99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_rand_idle_stand4", "rand_idle_stand", -1334.242f, 13.051f, 4304.613f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_rand_idle_stand5", "rand_idle_stand", -1336.62f, 13.051f, 4294.1f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_rand_idle_stand3", "rand_idle_stand", -1353.39f, 13.051f, 4312.579f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_sit_ground_smoke4", "sit_ground_smoke", -1343.849f, 13.056f, 4296.042f, 0.0f, -73.48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_Pee4", "Pee", -1352.655f, 13.051f, 4301.614f, 0.0f, 28.35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_rand_idle_stand", "rand_idle_stand", -1346.009f, 13.056f, 4294.357f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", -1346.468f, 13.05098f, 4307.142f, 0.0f, 118.1131f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_horse_stay10", "horse_stay", -1361.381f, 13.103f, 4268.063f, 0.0f, -185.5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_horse_stay9", "horse_stay", -1344.416f, 13.051f, 4267.783f, 0.0f, -161.8634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_horse_stay8", "horse_stay", -1361.88f, 13.051f, 4274.834f, 0.0f, -185.5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_horse_stay", "horse_stay", -1352.36f, 13.051f, 4270.885f, 0.0f, 212.416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_sit_ground_smoke", "sit_ground_smoke", -1350.854f, 13.051f, 4272.156f, 0.0f, -73.48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_smoking_stand2", "smoking_stand", -1349.743f, 13.05099f, 4283.362f, 0.0f, -55.15614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_Pee2", "Pee", -1356.144f, 13.05099f, 4286.991f, 0.0f, -151.8606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_rand_idle_stand2", "rand_idle_stand", -1341.542f, 13.051f, 4278.057f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sep_Pee", "Pee", -1360.661f, 13.107f, 4286.437f, 0.0f, 152.3031f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_smoking_stand", "smoking_stand", -1358.714f, 13.051f, 4282.462f, 0.0f, -53.74414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_rand_idle_stand1", "rand_idle_stand", -1341.542f, 13.051f, 4278.057f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", -1343.447f, 13.056f, 4286.479f, 0.0f, -35.46272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", -1339.343f, 13.051f, 4267.934f, 0.0f, 2.252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", -1324.474f, 13.051f, 4303.514f, 0.0f, 2.252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", -1372.628f, 13.05f, 4335.497f, 0.0f, 14.92106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", -1408.984f, 14.318f, 4305.296f, 0.0f, 2.252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_516 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Campfire014", "Campfire03", -238.2539f, 31.12157f, 4266.254f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_BOOL(Local_11.f_516, "MP_ONLY", true);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark1", "horse_tend", -101.656f, 55.227f, 2801.408f, 0.0f, -141.5272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark2", "horse_tend", -111.4741f, 55.2157f, 2810.284f, 0.0f, 66.63183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark3", "horse_stay", -113.5305f, 55.2157f, 2812.0f, 0.0f, -134.0859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark4", "horse_stay", -100.0075f, 55.38091f, 2800.44f, 0.0f, 38.61838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark5", "horse_stay", -118.1587f, 55.2157f, 2812.576f, 0.0f, 224.0045f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark6", "horse_stay", -102.8546f, 55.37479f, 2802.538f, 0.0f, 49.26177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark7", "sit_ground_smoke", -109.1386f, 55.21569f, 2807.325f, 0.0f, -280.0471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark8", "sit_ground_play_harmonica", -112.5914f, 55.2157f, 2806.592f, 0.0f, -108.6369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark9", "stand_guntricks_e_any", -111.0713f, 55.2157f, 2808.681f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark10", "stand_yawning_n_any", -106.3725f, 55.29201f, 2806.399f, 0.0f, 100.3735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark11", "stand_lookdistance_w_any", -117.9617f, 55.2157f, 2809.962f, 0.0f, 96.93845f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark12", "Pee", -98.37971f, 55.19736f, 2802.857f, 0.0f, 249.0699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark13", "rand_idle_stand", -104.064f, 55.47073f, 2807.075f, 0.0f, -109.9886f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark14", "nsit_docks", -101.3585f, 55.47161f, 2807.162f, 0.0f, -136.5345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark15", "smoking_stand", -109.5375f, 55.21568f, 2805.538f, 0.0f, 142.1955f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark16", "look_distance_binocs", -114.3744f, 54.75f, 2814.374f, 0.0f, 191.7611f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Man_landmark17", "Rand_Idle_Sit_Ground", -111.3886f, 55.21569f, 2804.94f, 0.0f, 182.6724f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark1", "horse_stay", -485.8965f, 20.02694f, 3026.479f, 0.0f, -71.77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_520 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark1", "Sit_Ground_Campfire_Tend", -1237.767f, 22.29545f, 3209.357f, 0.0f, 87.69044f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_520), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark2", "horse_tend", -1245.056f, 22.3515f, 3213.548f, 0.0f, -101.8198f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark1", "sleeping_wall_scripted", -524.7726f, 28.61168f, 3585.052f, 0.0f, 141.0826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark2", "horse_tend", -523.9998f, 28.09874f, 3593.792f, 0.0f, 82.67101f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark3", "Sit_Ground_Campfire_Tend", -529.402f, 28.61169f, 3586.814f, 0.0f, -106.4862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark4", "horse_tend", -528.4648f, 28.61169f, 3584.0f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark5", "stand_yawning_n_any", -526.808f, 28.61168f, 3586.416f, 0.0f, 123.4238f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark6", "smoking_stand_nospawn", -530.215f, 28.612f, 3588.583f, 0.0f, 302.8259f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark7", "stand_lookdistance_w_any", -532.8776f, 28.59505f, 3586.723f, 0.0f, 119.1744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark8", "stand_lookdistance_w_any", -523.8267f, 27.21791f, 3603.666f, 0.0f, 188.5482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark9", "horse_stay", -524.2856f, 28.57678f, 3592.028f, 0.0f, 466.0749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark10", "horse_stay", -526.8679f, 28.61168f, 3584.0f, 0.0f, 369.76f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark11", "horse_stay", -530.737f, 28.612f, 3584.215f, 0.0f, -0.6411512f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark12", "stand_drunk_rowdydrink", -528.0726f, 28.61168f, 3589.514f, 0.0f, 12.18899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark13", "stand_guntricks_e_any", -530.475f, 28.612f, 3586.142f, 0.0f, -103.6828f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sol_landmark14", "Rand_Idle_Sit_Ground", -527.2328f, 28.61168f, 3588.458f, 0.0f, 38.3594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -596.7665f, 30.87692f, 4008.65f, 0.0f, -39.59076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_524), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark1", "stand_lookdistance_w_any", -613.8975f, 27.71271f, 4015.721f, 0.0f, 38.57999f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark2", "smoking_stand_nospawn", -598.088f, 30.877f, 4007.252f, 0.0f, -88.51762f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark3", "stand_lookdistance_w_any", -595.0942f, 30.87692f, 4003.644f, 0.0f, 40.7513f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark4", "stand_lookdistance_w_any", -568.1231f, 34.93197f, 4019.918f, 0.0f, -134.8334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark5", "horse_stay", -598.0424f, 30.87692f, 4005.047f, 0.0f, -109.1773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark6", "horse_stay", -652.4681f, 12.93578f, 3998.157f, 0.0f, -178.8803f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark7", "horse_stay", -596.8939f, 30.87373f, 4003.538f, 0.0f, -146.6455f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark8", "horse_stay", -650.021f, 13.01396f, 3997.718f, 0.0f, -63.92681f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark9", "horse_stay", -654.9255f, 12.7644f, 3998.088f, 0.0f, -132.133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark10", "sleeping_wall_scripted", -595.894f, 30.877f, 4009.931f, 0.0f, 13.83779f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark11", "stand_guntricks_e_any", -593.51f, 30.876f, 4006.038f, 0.0f, 127.0322f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark12", "Rand_Idle_Sit_Ground", -594.076f, 30.877f, 4007.19f, 0.0f, 101.0548f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "cab_landmark13", "look_distance_binocs", -577.5045f, 32.83132f, 4002.572f, 0.0f, -67.42719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark3", "horse_tend", -1245.323f, 21.83688f, 3217.079f, 0.0f, -95.92507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark4", "horse_tend", -1229.347f, 22.0393f, 3216.383f, 0.0f, 96.76688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark5", "horse_stay", -1249.337f, 23.3665f, 3211.135f, 0.0f, -33.82539f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark6", "horse_stay", -1224.93f, 22.02998f, 3213.278f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark8", "stand_lookdistance_w_any", -1245.312f, 21.15314f, 3219.846f, 0.0f, 176.0394f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark9", "look_distance_binocs", -1226.53f, 22.09952f, 3215.262f, 0.0f, -144.2426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark10", "Rand_Idle_NearWall", -1239.73f, 22.0971f, 3205.014f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark11", "rand_idle_stand", -1220.766f, 23.494f, 3204.79f, 0.0f, -54.23795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark12", "Pee", -1225.842f, 22.606f, 3204.7f, 0.0f, -31.56896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark13", "stand_lookdistance_w_any", -1236.023f, 20.958f, 3221.002f, 0.0f, 175.0627f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark14", "stand_guntricks_e_any", -1236.338f, 22.24551f, 3208f, 0.0f, 36.00572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark15", "stand_drunk_rowdydrink", -1233.859f, 22.23026f, 3207.647f, 0.0f, 62.26207f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark16", "Rand_Idle_Sit_Ground", -1238.578f, 22.33991f, 3206.593f, 0.0f, -115.5628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Grn_landmark17", "smoking_stand", -1232.763f, 22.24354f, 3212.812f, 0.0f, 45.14069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark2", "horse_stay", -486.6529f, 20.15339f, 3025.138f, 0.0f, -71.77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark3", "horse_tend", -486.7703f, 20.2141f, 3023.461f, 0.0f, -254.62f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark4", "horse_tend", -486.9326f, 20.22241f, 3021.869f, 0.0f, -249.1905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark5", "smoking_stand", -484.2574f, 20.49877f, 3031.654f, 0.0f, -93.37111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark6", "stand_guntricks_e_any", -482.7634f, 20.4562f, 3032.894f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark7", "lie_sleep_on_bed_r", -488.9799f, 20.48626f, 3033.376f, 0.0f, 21.64087f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark8", "look_out_window_L", -486.3158f, 20.5107f, 3032.65f, 0.0f, -66.49553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark10", "stand_lookdistance_w_any", -483.0443f, 18.67955f, 3048.706f, 0.0f, 176.6462f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark12", "lean_fence_L_talking", -484.9706f, 20.49036f, 3036.224f, 0.0f, -156.5074f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark13", "Pee", -492.1762f, 20.335f, 3022.99f, 0.0f, 62.1369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark14", "stand_lookdistance_w_any", -479.421f, 21.113f, 3013.55f, 0.0f, -22.8892f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark15", "Rand_Idle_NearWall", -490.3453f, 20.08626f, 3026.755f, 0.0f, -71.52729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark16", "nriverwash", -472.1022f, 17.75337f, 3031.939f, 0.0f, -125.2288f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark17", "nsit_docks", -476.763f, 18.7006f, 3037.619f, 0.0f, -71.01546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Brit_landmark18", "nlean_rail", -488.092f, 20.486f, 3037.493f, 0.0f, -162.8951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark1", "horse_tend", 97.78033f, 71.27844f, 2684.0f, 0.0f, -203.1011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark2", "horse_tend", 100.282f, 71.27846f, 2683.792f, 0.0f, -203.1011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark3", "horse_tend", 108.8526f, 71.28279f, 2675.14f, 0.0f, 124.6175f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark4", "horse_stay", 93.90526f, 71.27841f, 2684.384f, 0.0f, 18.86558f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark5", "horse_stay", 103.9007f, 71.12509f, 2677.505f, 0.0f, -48.71856f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark6", "horse_stay", 90.52749f, 71.27842f, 2684.49f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark7", "nuse_shelf", 124.6688f, 72.42136f, 2671.896f, 0.0f, 294.9007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark8", "lie_sleep_on_bed_r", 123.5967f, 72.42126f, 2669.792f, 0.0f, -63.85365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark9", "look_out_window_L", 121.8093f, 72.41193f, 2670.812f, 0.0f, 117.1071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark10", "look_distance_binocs", 128.4899f, 72.50111f, 2674.588f, 0.0f, -74.37722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark12", "stand_kneelvomit_n_any", 127.0404f, 72.41193f, 2668.225f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark14", "stand_drunk_throwbottle", 120.5929f, 71.25062f, 2682.702f, 0.0f, -149.8333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark15", "smoking_stand", 126.9357f, 72.4119f, 2675.583f, 0.0f, 164.1807f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark16", "nsit_docks", 118.6707f, 71.25098f, 2684.139f, 0.0f, -153.0388f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Bach_landmark17", "Rand_Idle_NearWall", 122.0053f, 72.41192f, 2674.544f, 0.0f, -240.2579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark18", "look_distance_binocs", -573.2406f, 28.33539f, 3840.228f, 0.0f, -93.01151f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_528), 0);
	Local_11.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark2", "stand_spit", -560.3032f, 22.78524f, 3833.79f, 0.0f, -49.85806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_532), 0);
	Local_11.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark3", "stand_key_twirling", -582.897f, 34.49655f, 3814.11f, 0.0f, -53.07253f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_536), 0);
	Local_11.f_540 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark4", "stand_guntricks_e_any", -576.779f, 28.94148f, 3847.087f, 0.0f, -131.297f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_540), 0);
	Local_11.f_544 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark5", "smoking_stand", -586.2288f, 34.64845f, 3850.912f, 0.0f, -138.8816f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_544), 0);
	Local_11.f_548 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark6", "nsit_docks", -583.4898f, 34.5748f, 3837.621f, 0.0f, -130.979f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_548), 0);
	Local_11.f_552 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark7", "sit_ground_smoke", -578.5978f, 28.4573f, 3841.574f, 0.0f, -101.907f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_552), 0);
	Local_11.f_556 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark8", "sit_ground_smoke", -583.3972f, 26.90271f, 3852.0f, 0.0f, -88.43743f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_556), 0);
	Local_11.f_560 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark9", "sit_ground_play_harmonica", -575.2004f, 28.40461f, 3841.486f, 0.0f, -313.2773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_560), 0);
	Local_11.f_564 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark11", "rand_idle_stand", -576.1994f, 29.7793f, 3820.138f, 0.0f, -67.84433f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_564), 0);
	Local_11.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark12", "rand_idle_stand", -568.0064f, 27.37984f, 3846.823f, 0.0f, -85.34988f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_568), 0);
	Local_11.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark13", "Rand_Idle_Sit_Ground", -576.6311f, 28.47113f, 3838.295f, 0.0f, -163.0736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_572), 0);
	Local_11.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark14", "Pee", -570.251f, 26.61557f, 3819.763f, 0.0f, -86.62787f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_576), 0);
	Local_11.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark15", "look_distance_binocs", -580.898f, 33.55491f, 3827.646f, 0.0f, -93.01151f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_580), 0);
	Local_11.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark16", "stand_lookdistance_w_any", -580.4172f, 34.52888f, 3818.119f, 0.0f, -122.0883f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_584), 0);
	Local_11.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Mes_landmark17", "stand_lookdistance_w_any", -564.8317f, 23.73019f, 3826.123f, 0.0f, -71.81815f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_588), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark17", "stand_lookdistance_w_any", -1331.238f, 82.91322f, 3605.093f, 0.0f, 138.2342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark1", "look_distance_binocs", -1337.197f, 81.134f, 3586.58f, 0.0f, 60.24803f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark2", "stand_lookdistance_w_any", -1306.063f, 77.58575f, 3594.078f, 0.0f, -126.0736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark3", "stand_lookdistance_w_any", -1350.953f, 77.415f, 3596.393f, 0.0f, 93.68055f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark4", "stand_lookdistance_w_any", -1329.711f, 83.16241f, 3604.284f, 0.0f, 235.914f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark5", "smoking_stand_nospawn", -1336.671f, 81.20458f, 3588.376f, 0.0f, 107.5332f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark7", "horse_stay", -1352.224f, 76.71698f, 3602.276f, 0.0f, 242.6949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark8", "horse_stay", -1349.171f, 77.00807f, 3601.257f, 0.0f, 36.29667f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark9", "horse_stay", -1338.272f, 80.34926f, 3592.964f, 0.0f, 256.7841f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark10", "horse_stay", -1353.553f, 76.02035f, 3606.206f, 0.0f, 67.47733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark11", "sleeping_wall_scripted", -1331.993f, 81.58298f, 3580.936f, 0.0f, 157.8373f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark12", "look_distance_binocs", -1333.419f, 83.48002f, 3573.536f, 0.0f, 76.9311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark13", "stand_guntricks_e_any", -1310.068f, 78.20392f, 3584.787f, 0.0f, 236.313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark14", "rand_idle_stand", -1313.753f, 78.817f, 3584.856f, 0.0f, -51.82711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark15", "horse_tend", -1337.189f, 80.76552f, 3591.217f, 0.0f, 73.23474f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rocg_landmark16", "Rand_Idle_Sit_Ground", -1333.754f, 81.13485f, 3587.381f, 0.0f, 125.5873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", -905.2795f, 6.120781f, 4018.96f, 0.0f, 0.0f, 0.0f);
	Local_11.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", -724.2992f, 12.04706f, 3904.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", -1072.128f, 8.031372f, 4152.004f, 0.0f, 0.0f, 0.0f);
	Local_11.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", -736.3608f, 7.827786f, 4146.011f, 0.0f, 0.0f, 0.0f);
	Local_11.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", -460.1092f, 18.21953f, 3704.093f, 0.0f, 0.0f, 0.0f);
	Local_11.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", -504.6984f, 22.20414f, 3388.045f, 0.0f, 0.0f, 0.0f);
	Local_11.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", -435.1801f, 19.84951f, 3594.031f, 0.0f, 0.0f, 0.0f);
	Local_11.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", -270.4164f, 49.59292f, 3911.249f, 0.0f, 0.0f, 0.0f);
	Local_11.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", -557.9813f, 15.90394f, 3926.233f, 0.0f, 0.0f, 0.0f);
	Local_11.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", -561.4404f, 11.10295f, 4351.428f, 0.0f, 0.0f, 0.0f);
	Local_11.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", -400.0199f, 20.16208f, 4239.861f, 0.0f, 0.0f, 0.0f);
	Local_11.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", -444.8199f, 15.53144f, 4313.396f, 0.0f, 0.0f, 0.0f);
	Local_11.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", -552.0f, 11.04317f, 4352.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", 228.0f, 27.9649f, 3817.106f, 0.0f, 0.0f, 0.0f);
	Local_11.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", 139.8584f, 31.81403f, 3688.034f, 0.0f, 0.0f, 0.0f);
	Local_11.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", 244.4953f, 29.08238f, 3510.065f, 0.0f, 0.0f, 0.0f);
	Local_11.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", -342.3104f, 45.48911f, 3915.337f, 0.0f, 0.0f, 0.0f);
	Local_11.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", -688.5254f, 17.06666f, 3627.078f, 0.0f, 0.0f, 0.0f);
	Local_11.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", -284.0f, 26.46134f, 3532.476f, 0.0f, 0.0f, 0.0f);
	Local_11.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", -896.0f, 13.05101f, 4324.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage", "Player_Herb_woollyBlueCurls", -1352.0f, 13.66009f, 4239.98f, 0.0f, 0.0f, 0.0f);
	Local_11.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage1", "Player_Herb_woollyBlueCurls", -1128.61f, 18.37431f, 4315.084f, 0.0f, 0.0f, 0.0f);
	Local_11.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -1088.0f, 7.042808f, 4070.731f, 0.0f, 0.0f, 0.0f);
	Local_11.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", -873.3788f, 13.05101f, 4333.379f, 0.0f, 0.0f, 0.0f);
	Local_11.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -743.6987f, 9.114012f, 4515.974f, 0.0f, 0.0f, 0.0f);
	Local_11.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -752.0f, 11.04317f, 4277.421f, 0.0f, 0.0f, 0.0f);
	Local_11.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -636.0112f, 12.04709f, 4220.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -531.8919f, 22.29921f, 4154.04f, 0.0f, -64.5629f, 0.0f);
	Local_11.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -904.9533f, 6.089074f, 3976.993f, 0.0f, 0.0f, 0.0f);
	Local_11.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -1041.081f, 13.448f, 3868.099f, 0.0f, 0.0f, 0.0f);
	Local_11.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage10", "Player_Herb_woollyBlueCurls", -1282.566f, 67.2627f, 3813.828f, 0.0f, 0.0f, 0.0f);
	Local_11.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage11", "Player_Herb_woollyBlueCurls", -992.0f, 71.27844f, 3576.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage12", "Player_Herb_woollyBlueCurls", -984.6598f, 76.29416f, 3402.395f, 0.0f, 0.0f, 0.0f);
	Local_11.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage13", "Player_Herb_woollyBlueCurls", -460.402f, 18.07059f, 3547.07f, 0.0f, 20.28518f, 0.0f);
	Local_11.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage14", "Player_Herb_woollyBlueCurls", -378.6794f, 36.16063f, 3893.247f, 0.0f, 0.0f, 0.0f);
	Local_11.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage15", "Player_Herb_woollyBlueCurls", -482.8534f, 30.20636f, 3232.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage16", "Player_Herb_woollyBlueCurls", -826.3027f, 21.37297f, 3224.528f, 0.0f, 0.0f, 0.0f);
	Local_11.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", 280f, 44.15651f, 3280.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", 204f, 48.97747f, 3536.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", 248.0f, 33.515f, 3368.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", -180.7101f, 31.2964f, 3610.375f, 0.0f, 0.0f, 0.0f);
	Local_11.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", 308.0f, 28.59479f, 3680.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", -496.095f, 16.88821f, 4112.057f, 0.0f, 0.0f, 0.0f);
	Local_11.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", -1292.595f, 66.30639f, 3924.595f, 0.0f, 0.0f, 0.0f);
	Local_11.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", -46.87721f, 39.15293f, 3436f, 0.0f, 0.0f, 0.0f);
	Local_11.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", -663.9893f, 13.61824f, 3891.603f, 0.0f, 0.0f, 0.0f);
	Local_11.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", -713.616f, 23.59388f, 4444.34f, 0.0f, 0.0f, 0.0f);
	Local_11.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", -166.1611f, 38.14902f, 3088.026f, 0.0f, 0.0f, 0.0f);
	Local_11.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", -928.0001f, 71.33346f, 3520.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", -508.5906f, 17.06666f, 3804.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", -286.5252f, 51.81712f, 4088.712f, 0.0f, 0.0f, 0.0f);
	Local_11.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", -1232.669f, 38.07505f, 3352.668f, 0.0f, 0.0f, 0.0f);
	Local_11.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", -1469.036f, 22.27979f, 3511.638f, 0.0f, 0.0f, 0.0f);
	Local_11.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed2", "Player_Herb_ButterflyWeed", -1106f, 77.11635f, 3591.26f, 0.0f, 0.0f, 0.0f);
	Local_11.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", -225.3674f, 29.2757f, 3079.019f, 0.0f, 0.0f, 0.0f);
	Local_11.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", 227.6754f, 44.81975f, 3264.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", -540.0f, 37.84377f, 3540.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", -434.9474f, 21.08234f, 3766.917f, 0.0f, 0.0f, 0.0f);
	Local_11.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", -647.7579f, 15.04771f, 3590.837f, 0.0f, 0.0f, 0.0f);
	Local_11.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", -596.0f, 18.07059f, 3339.244f, 0.0f, 0.0f, 0.0f);
	Local_11.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", -986.0681f, 7.731964f, 3952.793f, 0.0f, 0.0f, 0.0f);
	Local_11.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", 256.0f, 28.10977f, 3529.897f, 0.0f, 0.0f, 0.0f);
	Local_11.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", -279.0793f, 31.43542f, 3783.705f, 0.0f, 0.0f, 0.0f);
	Local_11.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", 300.0f, 28.80191f, 3724f, 0.0f, 0.0f, 0.0f);
	Local_11.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed13", "Player_Herb_ButterflyWeed", -224.0991f, 30.63802f, 4270.219f, 0.0f, 0.0f, 0.0f);
	Local_11.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", -701.8191f, 9.685109f, 4120.612f, 0.0f, 0.0f, 0.0f);
	Local_11.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", -374.2852f, 21.12761f, 4327.816f, 0.0f, 0.0f, 0.0f);
	Local_11.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", -1325.839f, 67.05676f, 3892.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", -1180.0f, 16.94636f, 4289.671f, 0.0f, 0.0f, 0.0f);
	Local_11.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", -1067.828f, 14.09871f, 3951.976f, 0.0f, 0.0f, 0.0f);
	Local_11.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", -522.1499f, 17.06667f, 3984.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", 176.1462f, 64.41196f, 3132.123f, 0.0f, 0.0f, 0.0f);
	Local_11.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", -436.0832f, 43.10912f, 3328.062f, 0.0f, 0.0f, 0.0f);
	Local_11.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", -520.0f, 30.11765f, 3256f, 0.0f, 0.0f, 0.0f);
	Local_11.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", -1109.437f, 9.035294f, 4284.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", -491.3083f, 16.07239f, 4271.612f, 0.0f, 0.0f, 0.0f);
	Local_11.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", -1392f, 7.027454f, 4408.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", -1468f, 11.04314f, 4343.305f, 0.0f, 0.0f, 0.0f);
	Local_11.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", -1494.949f, 13.05098f, 4440.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", -1432.0f, 69.27054f, 4036.591f, 0.0f, 0.0f, 0.0f);
	Local_11.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", -1000.878f, 44.00829f, 3825.16f, 0.0f, 0.0f, 0.0f);
	Local_11.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", -1154.268f, 12.13892f, 4439.583f, 0.0f, 0.0f, 0.0f);
	Local_11.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", -932.7137f, 20.15159f, 4543.724f, 0.0f, 0.0f, 0.0f);
	Local_11.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", -1073.241f, 19.25794f, 4382.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", -896.0f, 14.05493f, 4340.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", -925.2434f, 6.113177f, 4415.63f, 0.0f, 0.0f, 0.0f);
	Local_11.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", -848.0f, 11.04317f, 4500.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", -736.5878f, 10.03925f, 4350.856f, 0.0f, 0.0f, 0.0f);
	Local_11.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", -528.0f, 11.04317f, 4348.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", -553.654f, 14.06855f, 4250.448f, 0.0f, 0.0f, 0.0f);
	Local_11.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed40", "Player_Herb_ButterflyWeed", -670.5288f, 27.3503f, 4317.688f, 0.0f, 0.0f, 0.0f);
	Local_11.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed41", "Player_Herb_ButterflyWeed", -965.9622f, 76.71277f, 3534.832f, 0.0f, 0.0f, 0.0f);
	Local_11.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed42", "Player_Herb_ButterflyWeed", -92.50905f, 41.1608f, 3005.489f, 0.0f, 0.0f, 0.0f);
	Local_11.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed43", "Player_Herb_ButterflyWeed", 418.3058f, 57.71587f, 3293.716f, 0.0f, 0.0f, 0.0f);
	Local_11.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed44", "Player_Herb_ButterflyWeed", 376.9338f, 54.58826f, 3157.095f, 0.0f, 0.0f, 0.0f);
	Local_11.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed45", "Player_Herb_ButterflyWeed", -55.61684f, 32.23711f, 3396.743f, 0.0f, 0.0f, 0.0f);
	Local_11.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed46", "Player_Herb_ButterflyWeed", 19.37307f, 38.42727f, 3458.521f, 0.0f, 0.0f, 0.0f);
	Local_11.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed47", "Player_Herb_ButterflyWeed", 429.962f, 21.8845f, 3587.73f, 0.0f, 0.0f, 0.0f);
	Local_11.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed48", "Player_Herb_ButterflyWeed", 209.6463f, 28.0322f, 3604.245f, 0.0f, 0.0f, 0.0f);
	Local_11.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed49", "Player_Herb_ButterflyWeed", -422.619f, 26.22769f, 3542.444f, 0.0f, 0.0f, 0.0f);
	Local_11.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed50", "Player_Herb_ButterflyWeed", -493.5766f, 17.06666f, 3616.596f, 0.0f, 0.0f, 0.0f);
	Local_11.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed51", "Player_Herb_ButterflyWeed", -620.0f, 14.91997f, 3558.162f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed52", "Player_Herb_ButterflyWeed", -1068.755f, 54.27743f, 3806.161f, 0.0f, -110.965f, 0.0f);
	Local_11.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed53", "Player_Herb_ButterflyWeed", -797.5426f, 9.062623f, 3884.759f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed54", "Player_Herb_ButterflyWeed", -686.5418f, 12.04706f, 3906.474f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed55", "Player_Herb_ButterflyWeed", -775.9088f, 6.049286f, 4054.486f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed56", "Player_Herb_ButterflyWeed", -972.0f, 7.027447f, 3984.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed57", "Player_Herb_ButterflyWeed", -1087.176f, 14.97461f, 3950.302f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed58", "Player_Herb_ButterflyWeed", -1258.826f, 12.94118f, 4074.825f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed59", "Player_Herb_ButterflyWeed", -1136.0f, 8.031372f, 4220.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed60", "Player_Herb_ButterflyWeed", -1162.391f, 18.19985f, 4286.317f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed61", "Player_Herb_ButterflyWeed", -781.8239f, 8.021932f, 4128.854f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed62", "Player_Herb_ButterflyWeed", -560.0f, 14.0549f, 4088.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed63", "Player_Herb_ButterflyWeed", -348.3476f, 31.78596f, 4120.968f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed64", "Player_Herb_ButterflyWeed", -697.5889f, 11.12089f, 4526.161f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed65", "Player_Herb_ButterflyWeed", -1024.0f, 16.06274f, 4528.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed66", "Player_Herb_ButterflyWeed", -1016.0f, 16.06277f, 4384.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_ButterflyWeed67", "Player_Herb_ButterflyWeed", -1200.0f, 11.04314f, 4436.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_1064 = CREATE_OBJECTSET_IN_LAYOUT(Function_33(), Local_11, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "mex_talking_soldiers_link", "mex_talking_soldiers_link", 36.00005f, 93.0325f, 2952.0f, 0.0f, -45.75198f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", 20.00004f, 93.36469f, 2956.0f, 0.0f, -88.02906f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", 52.00005f, 93.36469f, 2948.0f, 0.0f, 134.4493f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", 32.0f, 92.506f, 2968.0f, 0.0f, 22.79796f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", 30.19795f, 93.365f, 2953.052f, 0.0f, -115.576f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "Rand_Idle_Sit_Ground_nospawn2", "Rand_Idle_Sit_Ground_nospawn", 16.0f, 93.278f, 2964.0f, 0.0f, -113.554f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "Rand_Idle_Sit_Ground_nospawn3", "Rand_Idle_Sit_Ground_nospawn", 28.0f, 91.888f, 2972.0f, 0.0f, -24.07149f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", 36.0f, 91.497f, 2976.0f, 0.0f, -175.1794f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", 28.0f, 91.086f, 2980.0f, 0.0f, -114.1734f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "rand_idle_stand_nospawn2", "rand_idle_stand_nospawn", 20.0f, 91.762f, 2976.0f, 0.0f, 108.5983f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "rand_idle_stand_nospawn3", "rand_idle_stand_nospawn", 16.0f, 92.155f, 2976.0f, 0.0f, -120.0937f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "stand_lookdistance_w_any", "stand_lookdistance_w_any", 12.0f, 93.393f, 2956.0f, 0.0f, 96.716f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", 52.0f, 93.558f, 2936.0f, 0.0f, -48.40675f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", 20.0f, 90.154f, 2992.0f, 0.0f, 154.5021f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", 48.0f, 92.06221f, 2968.0f, 0.0f, 203.9767f, 0.0f), Local_11.f_1064);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_11, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", 8.0f, 99.388f, 2928.0f, 0.0f, 100.0739f, 0.0f), Local_11.f_1064);
	Local_11.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_11, "treasure_hunting_z_5", "zombie_treasure_hunting_5", -1102.306f, 27.91685f, 3933.224f, 0.0f, -96.51962f, 0.0f);
	return 1;
}

bool Function_102(int iParam0) //Position: 0xAD35 / 44341
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_106();
	iVar1 = 0;
	if (!Function_21(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_105(iParam0[iVar03], 8);
		}
		else if (Function_104())
		{
			iVar1 = 1;
			Function_105(iParam0[iVar03], 8);
		}
		Function_105(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_21(iParam0[iVar03], 4))
		{
			if (!Function_21(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_21(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_21(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_105(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_21(iParam0[iVar03], 4))
		{
			if (!Function_21(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_103();
	return 1;
}

void Function_103() //Position: 0xB0B0 / 45232
{
	if (!Function_61(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_104() //Position: 0xB0F0 / 45296
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_105(var uParam0, int iParam1) //Position: 0xB11B / 45339
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_106() //Position: 0xB12C / 45356
{
	if (!Function_61(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

var Function_107(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB16E / 45422
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_108(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_105(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_108(var uParam0, int iParam1, int iParam2) //Position: 0xB1A6 / 45478
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_21(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_105(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_109() //Position: 0xB26A / 45674
{
	return Function_110();
}

int Function_110() //Position: 0xB273 / 45683
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = uVar0;
	Function_107(&bLocal_6 + 4, "p_uti_cover1x1x", 0, 0);
	if (!Function_102(&bLocal_6 + 4))
	{
		return 0;
	}
	bLocal_6 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_6))
	{
		bLocal_6 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	Function_111(bLocal_6, "cover1x1x0", "p_uti_cover1x1x", -237.6518f, 34.38753f, 3754.085f, 11.40923f, -140.8511f, 0.0f, 1);
	Function_111(bLocal_6, "cover1x1x1", "p_uti_cover1x1x", -223.8871f, 34.55111f, 3741.238f, 0.0f, -43.30798f, 0.0f, 1);
	Function_111(bLocal_6, "cover1x1x2", "p_uti_cover1x1x", -262.1187f, 34.4931f, 3763.64f, 0.0f, -30.92613f, 0.0f, 1);
	return 1;
}

var Function_111(var uParam0, var uParam1, char* cParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xB3A1 / 45985
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	cParam2 = cParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_112() //Position: 0xB3CB / 46027
{
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	return;
}

void Function_113(bool bParam0, int iParam1) //Position: 0xB3DA / 46042
{
	if (!Function_61(128))
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

