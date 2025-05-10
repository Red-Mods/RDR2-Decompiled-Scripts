//Decompiled with MagicRDR v1.0
//Function Count : 124
//Statics Count : 340
//Natives Count : 162
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	bool bLocal_6 = false;
	struct<1109> Local_7 = { 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_123(&Var0, 3);
	Function_121();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_0 = 1;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000001:
				if (Function_119())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_110())
				{
					Function_109();
					Function_108(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_105())
				{
					Function_108(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_104(&uLocal_3);
				Function_102(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_101())
				{
					Function_94();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_93(iScriptParam_0);
				Function_92();
				Function_108(&(Global_29008[iScriptParam_0]), 8);
				if (Function_91(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_90(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_89(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_88(iScriptParam_0))
				{
					Function_82(iScriptParam_0);
					Function_81(64);
				}
				Function_108(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_88(iScriptParam_0))
				{
					Function_79(Function_80(), iScriptParam_0);
				}
				Function_78(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_77(&Var0, 5.0f);
				Function_108(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_65(iScriptParam_0);
				if (!Function_88(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_26(&uLocal_3, &uLocal_334, Function_64(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_91(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(bLocal_1);
	}
	Function_24();
	Function_18();
	Function_10(&uLocal_3, &uLocal_334);
	Function_8();
	Function_4(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_81(64);
	Function_90(&(Global_29008[iScriptParam_0]), 32);
	Function_90(&(Global_29008[iScriptParam_0]), 64);
	Function_90(&(Global_29008[iScriptParam_0]), 512);
	Function_90(&(Global_29008[iScriptParam_0]), 16);
	Function_90(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_77(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	SET_DUST_LEVEL(1);
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_26282[04]));
	return;
}

void Function_2(int iParam0) //Position: 0x30A / 778
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_3(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_3(bool bParam0) //Position: 0x336 / 822
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

void Function_4(int iParam0) //Position: 0x37B / 891
{
	int iVar0;
	
	if (!Function_7(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_5(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x3B1 / 945
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x3D3 / 979
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x3E9 / 1001
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x3FF / 1023
{
	Function_9();
	return;
}

void Function_9() //Position: 0x408 / 1032
{
	RELEASE_LAYOUT_REF(Local_285);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x414 / 1044
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_17(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_16(iParam1[iVar03], 4);
		}
		if (Function_17(iParam1[iVar03], 8))
		{
			Function_11(0, 0, 30);
			Function_16(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_11(int iParam0, int iParam1, int iParam2) //Position: 0x46C / 1132
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
		Function_12(Global_16524, bVar0, 1);
	}
	return;
}

void Function_12(int iParam0, bool bParam1, bool bParam2) //Position: 0x552 / 1362
{
	int iVar0;
	
	Function_15(iParam0);
	Function_14(bParam1);
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
	Function_13();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_13() //Position: 0x6CB / 1739
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_14(bool bParam0) //Position: 0x6D7 / 1751
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

void Function_15(int iParam0) //Position: 0x71D / 1821
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

void Function_16(int iParam0, int iParam1) //Position: 0x763 / 1891
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x77D / 1917
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x79A / 1946
{
	Function_19();
	return;
}

void Function_19() //Position: 0x7A3 / 1955
{
	Function_20(&Local_7 + 4);
	RELEASE_LAYOUT_REF(Local_7);
	return;
}

void Function_20(int iParam0) //Position: 0x7B5 / 1973
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_21(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x7DB / 2011
{
	if (Function_23(uParam0[iParam13], 4))
	{
		if (Function_23(uParam0[iParam13], 1))
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
			Function_22(uParam0[iParam13], 1);
			Function_22(uParam0[iParam13], 2);
			Function_22(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x909 / 2313
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_23(int iParam0, int iParam1) //Position: 0x923 / 2339
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24() //Position: 0x940 / 2368
{
	Function_25();
	return;
}

void Function_25() //Position: 0x949 / 2377
{
	RELEASE_LAYOUT_REF(bLocal_6);
	return;
}

void Function_26(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x954 / 2388
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_63(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_27(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_27(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x9D5 / 2517
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_62(iParam0))
	{
		return 0;
	}
	Function_90(&(Global_29008[iParam2]), 4194304);
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
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_60(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_59(iParam0, 8);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_11(0, 0, 0);
						}
						else
						{
							Function_11(0, 0, 30);
						}
						Function_16(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_59(iParam0, 4);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_16(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_58(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_57(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 16))
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
							if (Function_56())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_59(iParam0, 16);
								Function_48(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 16))
					{
						Function_16(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_17(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_59(iParam0, 2);
			}
			else
			{
				Function_16(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_7(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_91(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_17(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_47(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_59(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_46(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_28(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_28(int iParam0) //Position: 0xDEE / 3566
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_91(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_108(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_33(473, 1, 0, 0);
		iVar0 = Function_32(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_33(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_33(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_33(476, 1, 0, 0);
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
		Function_31(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_31(7, 30);
	}
	if (Function_30(473) <= Function_29(473))
	{
		if (!Function_56())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_29(int iParam0) //Position: 0xEED / 3821
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_30(int iParam0) //Position: 0xF2A / 3882
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xF63 / 3939
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

var Function_32(int iParam0) //Position: 0xFCA / 4042
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_7(iParam0))
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

int Function_33(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1022 / 4130
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_34(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1242 / 4674
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_29(390))), 32);
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
					bVar19 = (Function_30(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_30(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_42(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_39(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_36(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_35(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_35() //Position: 0x186F / 6255
{
	int iVar0;
	
	return iVar0;
}

var Function_36(int iParam0) //Position: 0x1877 / 6263
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_37(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1888 / 6280
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_38(char* cParam0, bool bParam1) //Position: 0x197D / 6525
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_39(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1996 / 6550
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_41(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_40(Function_41(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_40(int iParam0, int iParam1) //Position: 0x19FB / 6651
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_41(int iParam0, bool bParam1) //Position: 0x1A0D / 6669
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_42(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1A1F / 6687
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
	if (((Function_43(iParam0) != 19 || Function_43(iParam0) != 17) || Function_43(iParam0) != 10) || Function_43(iParam0) != 9)
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

int Function_43(int iParam0) //Position: 0x1B4F / 6991
{
	return Global_35278[iParam020].f_48;
}

void Function_44(int iParam0) //Position: 0x1B5E / 7006
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

int Function_45(int iParam0, float fParam1, bool bParam2) //Position: 0x1CF8 / 7416
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

void Function_46(var uParam0, int iParam1) //Position: 0x1F3C / 7996
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_47(struct<5> Param0) //Position: 0x1F49 / 8009
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1F6F / 8047
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_55(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_54(iParam1))
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
	if (!Function_51(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_49();
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

void Function_49() //Position: 0x21FF / 8703
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_50(bVar0, iVar1);
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

void Function_50(bool bParam0, bool bParam1) //Position: 0x2262 / 8802
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

bool Function_51(bool bParam0) //Position: 0x2291 / 8849
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_53())
	{
		return 0;
	}
	if (!Function_57(1))
	{
		return 0;
	}
	if (!Function_57(4096))
	{
		return 0;
	}
	if (bParam0 && Function_52(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_57(2048))
	{
		return 0;
	}
	if (Function_56() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_52(int iParam0) //Position: 0x2307 / 8967
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_53() //Position: 0x2318 / 8984
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

bool Function_54(int iParam0) //Position: 0x2331 / 9009
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2347 / 9031
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_56() //Position: 0x235C / 9052
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_57(int iParam0) //Position: 0x2365 / 9061
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2383 / 9091
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

void Function_59(int iParam0, int iParam1) //Position: 0x2427 / 9255
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2438 / 9272
{
	int iVar0;
	bool bVar1;
	
	Function_15(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_61(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_12(StackVal, bVar1, bParam4);
		}
	}
}

void Function_61(int iParam0, int iParam1) //Position: 0x24AA / 9386
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_15(iParam0);
	Function_14(iVar0);
	PRINTNL();
	Function_12(iParam0, iVar0, iParam1);
	return;
}

bool Function_62(int iParam0) //Position: 0x24CF / 9423
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

bool Function_63(int iParam0) //Position: 0x24EC / 9452
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x2508 / 9480
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(int iParam0) //Position: 0x251D / 9501
{
	iParam0 = iParam0;
	Function_66(&(Global_26282[04]), "SPG", 14, bLocal_6, 0);
	return;
}

void Function_66(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x253B / 9531
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (StackVal)
	{
		if (iParam4 == 1)
		{
			if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_75(iParam0, 63))
			{
				if (Function_74(76) || Function_73(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_72(cParam1, iParam0, 3, bParam3);
						Function_69(iParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 200.0f)
		{
			return;
		}
		if (Global_26282[14] == 0)
		{
			Function_68();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 200.0f)
		{
			return;
		}
		if (Global_26282[34] == 0)
		{
			Function_67();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_75(iParam0, 63))
		{
			if (Function_74(76) || Function_73(76))
			{
				Function_72(cParam1, iParam0, 3, bParam3);
				Function_69(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_72(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_67() //Position: 0x2736 / 10038
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_69(&(Global_26282[34]), iVar0);
		iVar0++;
	}
	return;
}

void Function_68() //Position: 0x277D / 10109
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_69(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x27CF / 10191
{
	if (iParam1 <= 32)
	{
		Function_70(iParam0, Function_71(iParam1));
	}
	else
	{
		Function_70(iParam0 + 4, Function_71((iParam1 - 32)));
	}
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x27F8 / 10232
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_71(bool bParam0) //Position: 0x2807 / 10247
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_72(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2813 / 10259
{
	bool bVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(iParam1->f_12))
	{
		iParam1->f_12 = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", bParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_75(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_35(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(bVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam1->f_12);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

int Function_73(int iParam0) //Position: 0x28B3 / 10419
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_74(int iParam0) //Position: 0x28C8 / 10440
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_75(int iParam0, bool bParam1) //Position: 0x28DD / 10461
{
	if (bParam1 <= 32)
	{
		return Function_76(*iParam0, Function_71(bParam1));
	}
	return Function_76(StackVal, Function_71((bParam1 - 32)));
}

bool Function_76(bool bParam0, int iParam1) //Position: 0x2908 / 10504
{
	return (bParam0 && iParam1) == 0;
}

void Function_77(bool bParam0, float fParam1) //Position: 0x2915 / 10517
{
	if (!Function_63(128))
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

void Function_78(int iParam0) //Position: 0x2953 / 10579
{
	if (!Function_7(iParam0))
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

void Function_79(bool bParam0, bool bParam1) //Position: 0x29E5 / 10725
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
		Function_46(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_56())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

var Function_80() //Position: 0x2ADF / 10975
{
	return bLocal_6;
}

void Function_81(int iParam0) //Position: 0x2AE7 / 10983
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_82(bool bParam0) //Position: 0x2AFA / 11002
{
	Function_83(StackVal, 0, 0.25f, 0, bLocal_6, !Function_87(&Global_30693));
	return;
}

void Function_83(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2B1C / 11036
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
		Function_86();
	}
	if (bParam5)
	{
		Function_84(1048576);
	}
}

void Function_84(int iParam0) //Position: 0x2C2F / 11311
{
	Function_85(&Global_28842, iParam0);
	return;
}

void Function_85(var uParam0, var uParam1) //Position: 0x2C3D / 11325
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_86() //Position: 0x2C58 / 11352
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_84(16384);
	}
	return;
}

bool Function_87(int iParam0) //Position: 0x2C74 / 11380
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_7((*iParam0)[iVar0]))
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

bool Function_88(int iParam0) //Position: 0x2CC1 / 11457
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_30628[0])
	{
		return Function_87(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_87(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_87(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_87(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_87(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_87(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_87(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_87(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_87(&Global_30717);
	}
	return 0;
}

void Function_89(int iParam0) //Position: 0x2D9E / 11678
{
	iParam0 = iParam0;
	return;
}

void Function_90(var uParam0, int iParam1) //Position: 0x2DA8 / 11688
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_91(int iParam0, int iParam1) //Position: 0x2DBF / 11711
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_92() //Position: 0x2DDB / 11739
{
	return;
}

void Function_93(var uParam0) //Position: 0x2DE1 / 11745
{
	uParam0 = uParam0;
	return;
}

void Function_94() //Position: 0x2DEB / 11755
{
	Function_95(Global_30633[2]);
	Global_29004 = 1;
	return;
}

void Function_95(int iParam0) //Position: 0x2DFE / 11774
{
	int iVar0;
	
	iVar0 = Function_96(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_76(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_76(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_76(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_76(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_76(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_76(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_76(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_76(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_76(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

int Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3036 / 12342
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_100(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_97(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_97(bParam0, bParam1, bParam2, 4294967295);
}

int Function_97(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3094 / 12436
{
	var uVar0;
	
	if (!Function_99(bParam2))
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
	uVar0 = Function_100(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_98(uVar0);
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

int Function_98(int iParam0) //Position: 0x31E9 / 12777
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

bool Function_99(int iParam0) //Position: 0x3227 / 12839
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x323C / 12860
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_101() //Position: 0x325C / 12892
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_102(bool bParam0) //Position: 0x3272 / 12914
{
	Function_103(StackVal, &uLocal_3, &uLocal_334, 2, 4294967295, 0);
	return;
}

void Function_103(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x328C / 12940
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

void Function_104(var uParam0) //Position: 0x3367 / 13159
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_105() //Position: 0x3376 / 13174
{
	return Function_106();
}

int Function_106() //Position: 0x337F / 13183
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = uVar0;
	Local_285 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(Local_285))
	{
		Local_285 = CREATE_LAYOUT("Perdido_layout");
	}
	Local_285.f_40 = CREATE_VOLUME_SET_IN_LAYOUT(Local_285, "prdv_flk_SOUTH_set");
	(*&Local_285 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat1", 3, -1828.121f, -16.81786f, 4629.818f, 0.0f, 13.94146f, 0.0f, 63.75682f, 72.01299f, 203.9456f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[0]);
	(*&Local_285 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat2", 3, -1447.001f, -4.178105f, 4618.954f, 0.0f, -28.07365f, 0.0f, 355.9802f, 72.01299f, 89.08501f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[1]);
	(*&Local_285 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat3", 3, -2557.778f, 36.67545f, 4713.361f, -3.286861f, 25.58159f, 7.708992f, 135.4665f, 72.01299f, 71.92216f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[2]);
	(*&Local_285 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat4", 3, -2830.068f, -16.47022f, 4491.745f, 0.0f, 20.0f, 0.0f, 205.0921f, 72.01299f, 230.7468f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[3]);
	(*&Local_285 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat5", 3, -3289.058f, 23.21941f, 4541.805f, 0.0f, 20.0f, 0.0f, 241.3856f, 72.01299f, 140.3481f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[4]);
	(*&Local_285 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat6", 3, -2462.511f, 23.21941f, 4883.754f, 6.291782f, -14.22287f, -6.360377f, 155.7044f, 145.8797f, 50.74638f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[5]);
	(*&Local_285 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat8", 3, -2214.937f, 23.21941f, 4805.725f, -2.417868f, 51.80917f, -11.85691f, 124.2386f, 145.8797f, 61.15795f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[6]);
	(*&Local_285 + 4)[7] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_bobcat7", 3, -2335.95f, 23.21941f, 4702.228f, 0.0f, 37.73186f, 0.0f, 124.2386f, 145.8797f, 40.25771f);
	ADD_TO_VOLUME_SET(Local_285.f_40, (*&Local_285 + 4)[7]);
	Local_285.f_68 = CREATE_VOLUME_SET_IN_LAYOUT(Local_285, "prdv_flk_CENTER_set");
	(*&Local_285 + 44)[0] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_wildHorse1", 3, -1223.112f, -45.37247f, 4408.328f, 0.0f, 20.0f, 0.0f, 214.866f, 82.75365f, 204.0539f);
	ADD_TO_VOLUME_SET(Local_285.f_68, (*&Local_285 + 44)[0]);
	(*&Local_285 + 44)[1] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_wildHorse3", 3, -1641.027f, 17.77773f, 4352.699f, 0.0f, 82.46896f, 0.0f, 88.24771f, 82.75365f, 206.5756f);
	ADD_TO_VOLUME_SET(Local_285.f_68, (*&Local_285 + 44)[1]);
	(*&Local_285 + 44)[2] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_wildHorse5", 3, -2127.066f, 29.30035f, 4394.087f, 0.0f, 20.0f, 0.0f, 259.3963f, 82.75365f, 165.8565f);
	ADD_TO_VOLUME_SET(Local_285.f_68, (*&Local_285 + 44)[2]);
	(*&Local_285 + 44)[3] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_wildHorse6", 3, -2491.284f, 41.55529f, 4393.549f, 0.0f, 20.0f, 0.0f, 117.4157f, 59.02151f, 139.5618f);
	ADD_TO_VOLUME_SET(Local_285.f_68, (*&Local_285 + 44)[3]);
	(*&Local_285 + 44)[4] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prd_wildHorse7", 3, -2011.8f, 44.02881f, 4658.308f, 0.0f, 66.39283f, 0.0f, 116.6155f, 32.19167f, 123.9349f);
	ADD_TO_VOLUME_SET(Local_285.f_68, (*&Local_285 + 44)[4]);
	Local_285.f_104 = CREATE_VOLUME_SET_IN_LAYOUT(Local_285, "prdv_flk_NORTH_set");
	(*&Local_285 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_deer1", 3, -3105.978f, 48.22567f, 4183.158f, 0.0f, 20.0f, 0.0f, 539.1265f, 78.47768f, 128.9335f);
	ADD_TO_VOLUME_SET(Local_285.f_104, (*&Local_285 + 72)[0]);
	(*&Local_285 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_deer2", 3, -2525.599f, 16.45514f, 4150.215f, 0.0f, 20.0f, 0.0f, 140.6065f, 78.47768f, 98.50089f);
	ADD_TO_VOLUME_SET(Local_285.f_104, (*&Local_285 + 72)[1]);
	(*&Local_285 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_deer3", 3, -2143.044f, 13.05099f, 4098.297f, 0.0f, 20.0f, 0.0f, 250.3469f, 78.47768f, 124.9134f);
	ADD_TO_VOLUME_SET(Local_285.f_104, (*&Local_285 + 72)[2]);
	(*&Local_285 + 72)[3] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_deer4", 3, -1655.763f, -38.8814f, 3963.979f, 0.0f, 7.033805f, 0.0f, 250.3469f, 78.47768f, 168.6821f);
	ADD_TO_VOLUME_SET(Local_285.f_104, (*&Local_285 + 72)[3]);
	(*&Local_285 + 72)[4] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_deer5", 3, -1424.871f, 15.49219f, 4164.382f, 0.0f, 20.0f, 0.0f, 164.2588f, 78.47768f, 100.6236f);
	ADD_TO_VOLUME_SET(Local_285.f_104, (*&Local_285 + 72)[4]);
	(*&Local_285 + 72)[5] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_deer6", 3, -1972.307f, 65.01617f, 3860.816f, 0.0f, 20.0f, 0.0f, 103.358f, 78.47768f, 99.85926f);
	ADD_TO_VOLUME_SET(Local_285.f_104, (*&Local_285 + 72)[5]);
	(*&Local_285 + 72)[6] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_deer8", 3, -1154.453f, 18.53422f, 4073.343f, 0.0f, 20.0f, 0.0f, 118.9803f, 45.99867f, 116.0368f);
	ADD_TO_VOLUME_SET(Local_285.f_104, (*&Local_285 + 72)[6]);
	Local_285.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_285, "prdv_flk_BIRD_set");
	(*&Local_285 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird1", 3, -3120f, 58.08666f, 4252.0f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[0]);
	(*&Local_285 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird2", 3, -3155.767f, 50.0108f, 4769.81f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[1]);
	(*&Local_285 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird3", 3, -2605.138f, 84.00835f, 4508.109f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[2]);
	(*&Local_285 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird4", 3, -2392f, 22.26755f, 4161.506f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[3]);
	(*&Local_285 + 108)[4] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird5", 3, -2228.666f, 37.32635f, 4886.939f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[4]);
	(*&Local_285 + 108)[5] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird6", 3, -1952.681f, 21.26359f, 4309.989f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[5]);
	(*&Local_285 + 108)[6] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird7", 3, -1592.513f, 83.95605f, 4740.449f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[6]);
	(*&Local_285 + 108)[7] = CREATE_VOLUME_IN_LAYOUT(Local_285, "nprd_bird8", 3, -1466.186f, -40.05158f, 4200.113f, 0.0f, 20.0f, 0.0f, 406.7785f, 80.68261f, 337.0939f);
	ADD_TO_VOLUME_SET(Local_285.f_144, (*&Local_285 + 108)[7]);
	Local_285.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_285, "prdv_aquaticWildlife_set");
	(*&Local_285 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_aquaticWildlife8", 2, -1700.0f, -3.94879f, 3745.079f, 0.0f, 0.0f, 0.0f, 437.5048f, 41.69571f, 102.6289f);
	ADD_TO_VOLUME_SET(Local_285.f_172, (*&Local_285 + 148)[0]);
	(*&Local_285 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_aquaticWildlife7", 2, -2092.369f, -8.501405f, 3800.851f, 0.0f, 18.87418f, 0.0f, 416.9886f, 41.69571f, 132.3871f);
	ADD_TO_VOLUME_SET(Local_285.f_172, (*&Local_285 + 148)[1]);
	(*&Local_285 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_aquaticWildlife6", 2, -2430.955f, -9.925787f, 3946.889f, 0.0f, -0.2951764f, 0.0f, 440.3749f, 41.69571f, 216.6301f);
	ADD_TO_VOLUME_SET(Local_285.f_172, (*&Local_285 + 148)[2]);
	(*&Local_285 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_aquaticWildlife5", 2, -2987.053f, -12.32654f, 3982.231f, 0.0f, 8.733288f, 0.0f, 759.4329f, 41.69571f, 233.799f);
	ADD_TO_VOLUME_SET(Local_285.f_172, (*&Local_285 + 148)[3]);
	(*&Local_285 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_aquaticWildlife4", 2, -3456f, -8.810408f, 4171.868f, 0.0f, 31.01138f, 0.0f, 268.922f, 41.69571f, 137.7348f);
	ADD_TO_VOLUME_SET(Local_285.f_172, (*&Local_285 + 148)[4]);
	Local_285.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_285, "prdv_chickens_set");
	(*&Local_285 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_chickens1", 3, -2145.031f, 16.41659f, 4951.188f, 0.0f, -4.057003f, 0.0f, 17.94717f, 8.588286f, 10.40963f);
	ADD_TO_VOLUME_SET(Local_285.f_188, (*&Local_285 + 176)[0]);
	(*&Local_285 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_chickens2", 3, -2156.94f, 18.07939f, 4991.802f, 0.0f, -6.529206f, 0.0f, 33.9479f, 8.922362f, 13.94726f);
	ADD_TO_VOLUME_SET(Local_285.f_188, (*&Local_285 + 176)[1]);
	Local_285.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_285, "prdv_bhstop", 2, -2670.965f, 32.97532f, 4253.5f, 0.0f, -10.23049f, 0.0f, 11.19157f, 7.334846f, 19.66724f);
	return 1;
}

void Function_107(int iParam0, int iParam1) //Position: 0x4041 / 16449
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

void Function_108(var uParam0, int iParam1) //Position: 0x408A / 16522
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_109() //Position: 0x4099 / 16537
{
	return;
}

bool Function_110() //Position: 0x409F / 16543
{
	return Function_111();
}

int Function_111() //Position: 0x40A8 / 16552
{
	bool bVar0;
	
	Function_107(3, 3);
	bVar0 = bVar0;
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/spittoon", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/mex_sitground", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_117(&Local_7 + 4, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_4", 1, 0);
	if (!Function_112(&Local_7 + 4))
	{
		return 0;
	}
	Local_7 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(Local_7))
	{
		Local_7 = CREATE_LAYOUT("Perdido_layout");
	}
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint", -2234.103f, 23.09f, 4450.451f, 0.0f, 327.653f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint1", -2808.015f, 16.467f, 3991.746f, 0.0f, 132.438f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint3", -2719.469f, 56.13536f, 4626.306f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint4", -2401.135f, 9.357473f, 3965.135f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint5", -1197.553f, 19.07451f, 4961.553f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint6", -1446.914f, 19.69032f, 4912.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint7", -1755.834f, 28.35469f, 4824.0f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint8", -2136.56f, 19.42f, 5001.652f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint9", -1146.611f, 27.98853f, 4818.058f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint910", -1341.777f, 13.05099f, 4301.776f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint11", -1352f, 13.05099f, 4281.627f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint12", -1370.036f, 13.05099f, 4317.523f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint13", -1378.815f, 13.05099f, 4295.221f, 0.0f, 0.0f, 0.0f);
	*(&Local_7 + 536) = { -3385.052f, 55.49248f, 4743.046f };
	*(&Local_7 + 536 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_7.f_560 = CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint15", -3385.052f, 55.49248f, 4743.046f, 0.0f, 0.0f, 0.0f);
	*(&Local_7 + 564) = { -2143.072f, 19.566f, 5003.717f };
	*(&Local_7 + 564 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_7.f_588 = CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhtreas", -2143.072f, 19.566f, 5003.717f, 0.0f, 0.0f, 0.0f);
	*(&Local_7 + 592) = { -2169.115f, 19.743f, 5013.526f };
	*(&Local_7 + 592 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_7.f_616 = CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhtreas1", -2169.115f, 19.743f, 5013.526f, 0.0f, 0.0f, 0.0f);
	*(&Local_7 + 620) = { -2151.229f, 18.553f, 4973.971f };
	*(&Local_7 + 620 + 12) = { 0.0f, 180.0f, 0.0f };
	Local_7.f_644 = CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhtreas2", -2151.229f, 18.553f, 4973.971f, 0.0f, 180.0f, 0.0f);
	Local_7.f_648 = CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint911", -1201.65f, 19.075f, 4963.207f, 0.0f, 240.685f, 0.0f);
	Local_7.f_652 = CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint912", -1198.822f, 19.075f, 4956.911f, 0.0f, 190.323f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint913", -2232.852f, 23.085f, 4457.229f, 0.0f, 87.258f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint914", -2239.331f, 23.086f, 4456.599f, 0.0f, 135.904f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhtreas3", -2228.931f, 23.09f, 4456.119f, 0.0f, 210.21f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_7, "prdf_bhint915", -2733.588f, 55.062f, 4606.517f, 0.0f, 99.203f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sit_cleanrifle", "sit_cleanrifle", -1442.006f, 19.69032f, 4912.689f, 0.0f, 47.24794f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", -1362.953f, 13.07964f, 4300.644f, 0.0f, -18.15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -1359.716f, 13.05099f, 4298.842f, 0.0f, -272.5584f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_sit_ground_smoke3", "sit_ground_smoke", -1364.03f, 13.04671f, 4298.394f, 0.0f, -112.4335f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", -1362.544f, 13.05099f, 4296.964f, 0.0f, -180.1093f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay13", "horse_stay", -1394.776f, 12.977f, 4308.042f, 0.0f, 74.33443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay12", "horse_stay", -1386.643f, 13.051f, 4290.629f, 0.0f, 41.19416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay11", "horse_stay", -1396.363f, 13.05099f, 4300.878f, 0.0f, 48.00632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay10", "horse_stay", -1400.339f, 11.495f, 4292.966f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_Pee3", "Pee", -1385.775f, 13.05099f, 4298.206f, 0.0f, 28.35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", -1378.63f, 13.056f, 4306.34f, 0.0f, -18.15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", -1372.292f, 13.05099f, 4291.89f, 0.0f, -28.9995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1374.563f, 13.05099f, 4297.688f, 0.0f, 9.780541f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_look_out_window_R", "look_out_window_R", -1380.752f, 13.04853f, 4297.446f, 0.0f, -41.49537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay21", "horse_stay", -1365.99f, 13.051f, 4324.597f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay20", "horse_stay", -1384.05f, 12.988f, 4324.893f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay19", "horse_stay", -1388.964f, 12.966f, 4324.276f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay18", "horse_stay", -1364.119f, 13.051f, 4332.481f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", -1354.34f, 13.05099f, 4309.859f, 0.0f, 27.99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", -1361.21f, 13.05939f, 4316.554f, 0.0f, 192.786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", -1368.854f, 13.05759f, 4314.05f, 0.0f, -18.15423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_sit_ground_smoke2", "sit_ground_smoke", -1371.078f, 13.05098f, 4315.158f, 0.0f, 82.18061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_rand_idle_stand6", "rand_idle_stand", -1381.432f, 13.037f, 4321.681f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay15", "horse_stay", -1331.086f, 13.691f, 4317.092f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay14", "horse_stay", -1335.886f, 13.273f, 4317.106f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay17", "horse_stay", -1329.264f, 13.051f, 4300.218f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_horse_stay16", "horse_stay", -1327.329f, 13.051f, 4303.468f, 0.0f, 27.06931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", -1347.543f, 13.051f, 4305.105f, 0.0f, 27.99822f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_rand_idle_stand4", "rand_idle_stand", -1334.242f, 13.051f, 4304.613f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_rand_idle_stand5", "rand_idle_stand", -1336.62f, 13.051f, 4294.1f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_rand_idle_stand3", "rand_idle_stand", -1353.39f, 13.051f, 4312.579f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_sit_ground_smoke4", "sit_ground_smoke", -1343.849f, 13.056f, 4296.042f, 0.0f, -73.48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_Pee4", "Pee", -1352.655f, 13.051f, 4301.614f, 0.0f, 28.35016f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_rand_idle_stand", "rand_idle_stand", -1346.009f, 13.056f, 4294.357f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", -1346.468f, 13.05098f, 4307.142f, 0.0f, 118.1131f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_horse_stay10c", "horse_stay", -1361.381f, 13.103f, 4268.063f, 0.0f, -185.5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_horse_stay9", "horse_stay", -1344.416f, 13.051f, 4267.783f, 0.0f, -161.8634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_horse_stay8", "horse_stay", -1361.88f, 13.051f, 4274.834f, 0.0f, -185.5081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_horse_stay", "horse_stay", -1352.36f, 13.051f, 4270.885f, 0.0f, 212.416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_sit_ground_smoke", "sit_ground_smoke", -1350.854f, 13.051f, 4272.156f, 0.0f, -73.48672f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_smoking_stand2", "smoking_stand", -1349.743f, 13.05099f, 4283.362f, 0.0f, -55.15614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_Pee2", "Pee", -1356.144f, 13.05099f, 4286.991f, 0.0f, -151.8606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_rand_idle_stand2", "rand_idle_stand", -1341.542f, 13.051f, 4278.057f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Sep_Pee", "Pee", -1360.661f, 13.107f, 4286.437f, 0.0f, 152.3031f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_smoking_stand", "smoking_stand", -1358.714f, 13.051f, 4282.462f, 0.0f, -53.74414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_rand_idle_stand1", "rand_idle_stand", -1341.542f, 13.051f, 4278.057f, 0.0f, 93.61817f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", -1343.447f, 13.056f, 4286.479f, 0.0f, -35.46272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", -1339.343f, 13.051f, 4267.934f, 0.0f, 2.252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", -1324.474f, 13.051f, 4303.514f, 0.0f, 2.252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", -1372.628f, 13.05f, 4335.497f, 0.0f, 14.92106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", -1408.984f, 14.318f, 4305.296f, 0.0f, 2.252319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_look_out_window_L1", "look_out_window_L", -2150.377f, 18.76063f, 4969.059f, 0.0f, -26.47319f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sleeping_scripted1", "sleeping_scripted", -2144.55f, 18.6851f, 4975.894f, 0.0f, -88.98843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sleeping_scripted", "sleeping_scripted", -2150.153f, 18.88321f, 4972.78f, 0.0f, -88.98843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_lean_table", "lean_table", -2147.479f, 18.65697f, 4971.42f, 0.0f, 167.0051f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_lookdistance1", "stand_lookdistance_w_any", -2145.568f, 18.68168f, 4966.235f, 0.0f, -2.904451f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_look_out_window_L", "look_out_window_L", -2147.026f, 18.68168f, 4966.039f, 0.0f, 11.03522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_RandIdleNearWall1", "Rand_Idle_NearWall", -2144.973f, 18.68168f, 4967.628f, 0.0f, -0.2829188f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sit_barrel1", "sit_barrel", -2148.418f, 18.58588f, 4977.662f, 0.0f, 304.4866f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_rand_idle_stand4", "rand_idle_stand", -2183.856f, 21.39841f, 4981.333f, 0.0f, -60.1594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_peeing3", "stand_peeing_b_any", -2107.46f, 21.99772f, 5025.458f, 0.0f, -52.97831f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_peeing2", "stand_peeing_b_any", -2121.297f, 20.69375f, 4956.572f, 0.0f, -55.82038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sit_ground_smoke3", "sit_ground_smoke", -2109.987f, 26.07461f, 4977.125f, 0.0f, 54.48457f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_rand_idle_stand3", "rand_idle_stand", -2121.831f, 20.61072f, 4955.092f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_rand_idle_stand2", "rand_idle_stand", -2163.704f, 18.88586f, 4949.102f, 0.0f, -19.02433f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_rand_idle_stand1", "rand_idle_stand", -2147.941f, 18.0743f, 4985.551f, 0.0f, -26.28773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_rand_idle_stand", "rand_idle_stand", -2149.982f, 18.14022f, 4983.896f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sit_harmonica2", "sit_ground_play_harmonica", -2155.802f, 19.9801f, 5017.955f, 0.0f, -17.66678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sit_ground_smoke2", "sit_ground_smoke", -2168.007f, 20.96798f, 5023.034f, 0.0f, -116.3746f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_smoking_stand2", "smoking_stand", -2168.0f, 20.26305f, 5016.0f, 0.0f, -38.86214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_7.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_yelling_mid", "stand_yelling_mid", -2139.542f, 25.13448f, 5021.14f, 0.0f, 15.77838f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_7.f_656), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_guntricks3", "stand_guntricks_e_any", -2175.003f, 19.79538f, 4967.382f, 0.0f, -97.18321f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay14", "horse_stay", -1169.324f, 25.09804f, 4848.183f, 0.0f, -51.58591f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_ground_smoke1", "sit_ground_smoke", -1146.617f, 27.98853f, 4816.168f, 0.0f, -227.0327f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_guntricks1", "stand_guntricks_e_any", -1149.78f, 28.08622f, 4824.229f, 0.0f, 109.0677f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_Rand_Idle_NearWall1", "Rand_Idle_NearWall", -1147.647f, 28.1014f, 4824.906f, 0.0f, -939.9426f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay13", "horse_stay", -1154.639f, 25.45039f, 4840.386f, 0.0f, -91.62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay12", "horse_stay", -1158.92f, 25.95507f, 4832.619f, 0.0f, -359.8061f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay11", "horse_stay", -1170.505f, 25.098f, 4845.793f, 0.0f, -91.62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Pee", "Pee", -1166.162f, 25.4834f, 4827.507f, 0.0f, 38.67871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay10", "horse_stay", -1153.202f, 25.77849f, 4837.963f, 0.0f, -91.62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_rand_idle_stand2", "rand_idle_stand", -1151.732f, 26.68782f, 4826.975f, 0.0f, 146.4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_ground_smoke", "sit_ground_smoke", -1147.908f, 27.98853f, 4815.805f, 0.0f, -169.97f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_rand_idle_stand1", "rand_idle_stand", -1155.885f, 26.11555f, 4831.447f, 0.0f, 163.3344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_lookdistance7", "stand_lookdistance_w_any", -1165.903f, 26.199f, 4816.392f, 0.0f, 11.74429f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_lookdistance6", "stand_lookdistance_w_any", -1142.304f, 27.06421f, 4829.555f, 0.0f, -140.6723f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_lookdistance4", "stand_lookdistance_w_any", -1153.553f, 27.915f, 4812.71f, 0.0f, 8.464398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_lookdistance3", "stand_lookdistance_w_any", -1138.232f, 27.92258f, 4821.114f, 0.0f, -95.10341f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_lookdistance2", "stand_lookdistance_w_any", -1153.667f, 25.19662f, 4842.685f, 0.0f, -229.6765f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay9", "horse_stay", -1158.446f, 26.204f, 4827.642f, 0.0f, -91.62663f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay8", "horse_stay", -1140.124f, 28.109f, 4817.715f, 0.0f, 91.29439f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_horse_stay", "horse_stay", -1161.263f, 25.92668f, 4830.808f, 0.0f, -378.4707f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_yawning", "stand_yawning_n_any", -1141.497f, 27.527f, 4823.505f, 0.0f, 135.6908f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_guntricks", "stand_guntricks_e_any", -1141.31f, 28.07663f, 4816.137f, 0.0f, 109.0677f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_look_out_window_L", "look_out_window_L", -1149.772f, 27.989f, 4825.187f, 0.0f, 52.4463f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_sleeping_wall_scripted", "sleeping_wall_scripted", -1144.439f, 28.16429f, 4820.793f, 0.0f, 52.06534f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_rand_idle_stand", "rand_idle_stand", -1148.397f, 28.083f, 4824.674f, 0.0f, 146.4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_sit_docks", "nsit_docks", -1152.421f, 28.09809f, 4823.037f, 0.0f, 138.8232f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_lookdistance1", "stand_lookdistance_w_any", -1154.668f, 26.40717f, 4825.65f, 0.0f, 180.2952f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_stand_lookdistance", "stand_lookdistance_w_any", -1143.384f, 28.077f, 4812.623f, 0.0f, -31.23636f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ran_lookdistance_binocs", "look_distance_binocs", -1158.382f, 27.096f, 4811.459f, 0.0f, 15.42521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_guntricks2", "stand_guntricks_e_any", -2112.0f, 24.78965f, 4984.0f, 0.0f, 24.5157f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_leaning_stand", "leaning_stand", -2162.551f, 18.11316f, 4962.492f, 0.0f, 169.6326f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_pocketwatch", "stand_pocketwatch_e_any", -2142.839f, 17.06667f, 4953.641f, 0.0f, 25.44062f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_key_twirl", "stand_key_twirling", -2142.178f, 18.2133f, 4967.677f, 0.0f, 21.08159f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_guntricks1", "stand_guntricks_e_any", -2150.272f, 17.06667f, 4955.959f, 0.0f, -10.82537f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_spittoon1", "spittoon", -2141.107f, 17.06667f, 4953.017f, 0.0f, 179.5756f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_spittoon", "spittoon", -2168.0f, 19.44606f, 4952.0f, 0.0f, 13.08312f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sit_play_harmonica", "sit_ground_play_harmonica", -2159.549f, 18.08265f, 4964.163f, 0.0f, -38.89871f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_lean_rail_fwd", "lean_rail_forward", -2146.244f, 18.37671f, 4993.393f, 0.0f, 18.53289f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_mex_chair_sit", "mex_chair_sit", -2140.079f, 18.07059f, 4987.028f, 0.0f, -183.9298f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_sit_barrel", "sit_barrel", -2141.56f, 18.06992f, 4987.607f, 0.0f, 238.0275f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_RandIdleNearWall", "Rand_Idle_NearWall", -2153.9f, 18.54898f, 4973.194f, 0.0f, 84.53752f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_mex_sitGround1", "mex_sitGround", -2145.565f, 18.1965f, 4963.157f, 0.0f, 169.7416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_mex_sitGround", "mex_sitGround", -2151.62f, 18.62823f, 4967.137f, 0.0f, 188.22f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_mex_stool_sit", "mex_stool_sit", -2143.014f, 18.40978f, 4972.36f, 0.0f, 270.9647f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_look_binocs2", "look_distance_binocs", -2125.51f, 21.88434f, 4976.438f, 0.0f, 20.74133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_worried", "stand_worried_n_any", -2147.102f, 18.25595f, 4963.947f, 0.0f, 1.017094f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_yawning", "stand_yawning_n_any", -2142.325f, 18.26016f, 4969.863f, 0.0f, -27.79862f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_Pee", "Pee", -2141.521f, 18.26262f, 4989.459f, 0.0f, 274.3436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_horse_stay10", "horse_stay", -2156.871f, 18.32751f, 4968.682f, 0.0f, -93.17694f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_horse_stay9", "horse_stay", -2146.335f, 18.07149f, 4989.306f, 0.0f, -34.30241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_horse_tend", "horse_tend", -2139.4f, 18.17197f, 4973.717f, 0.0f, -112.1472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_guntricks", "stand_guntricks_e_any", -2151.342f, 18.59703f, 4975.875f, 0.0f, -586.383f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_stand_lookdistance", "stand_lookdistance_w_any", -2122.872f, 20.44026f, 4952.769f, 0.0f, -2.904451f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_smoking_stand", "smoking_stand", -2148.095f, 18.58343f, 4978.466f, 0.0f, -255.1086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_look_binocs", "look_distance_binocs", -2154.062f, 17.335f, 4951.49f, 0.0f, 6.739808f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ncam_stand", "rand_idle_stand", -2144.354f, 18.18847f, 4963.678f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_Sit_Ground", "Rand_Idle_Sit_Ground", -2141.606f, 18.32081f, 4973.772f, 0.0f, -20.28081f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "cam_horse_staye", "horse_stay", -2139.533f, 18.28407f, 4971.81f, 0.0f, -244.4586f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_7.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", -3087.487f, 34.13335f, 4568.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", -2924.045f, 12.11589f, 4522.543f, 0.0f, 0.0f, 0.0f);
	Local_7.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", -3123.044f, 12.85511f, 4296.765f, 0.0f, 0.0f, 0.0f);
	Local_7.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", -3147.61f, 13.04445f, 4349.696f, 0.0f, 0.0f, 0.0f);
	Local_7.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", -2920.644f, 13.88983f, 4184f, 0.0f, 0.0f, 0.0f);
	Local_7.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", -2874.131f, 15.28646f, 4357.87f, 0.0f, 0.0f, 0.0f);
	Local_7.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", -2748.333f, 37.12934f, 4416.379f, 0.0f, 0.0f, 0.0f);
	Local_7.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", -2818.678f, 32.12549f, 4600f, 0.0f, 0.0f, 0.0f);
	Local_7.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", -2604.0f, 29.12662f, 4336f, 0.0f, 0.0f, 0.0f);
	Local_7.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", -2784.0f, 32.12549f, 4348f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_rand_idle_stand", "rand_idle_stand", -2238.265f, 23.082f, 4457.25f, 0.0f, -43.25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_guntricks3", "stand_guntricks_e_any", -2246.608f, 23.09f, 4454.54f, 0.0f, 45.55705f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "hen_smoking_stand1", "smoking_stand", -1748.846f, 29.389f, 4821.137f, 0.0f, -53.74414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "hen_rand_idle_stand5", "rand_idle_stand", -1742.056f, 29.825f, 4826.535f, 0.0f, 146.4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_horse_stay11", "horse_stay", -1758.203f, 32.04f, 4839.499f, 0.0f, 26.17468f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "hen_rand_idle_stand4", "rand_idle_stand", -1760.731f, 29.988f, 4812.287f, 0.0f, 146.4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "hen_rand_idle_stand3", "rand_idle_stand", -1759.747f, 30.356f, 4818.834f, 0.0f, 146.4252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_guntricks2", "stand_guntricks_e_any", -1761.983f, 31.035f, 4829.209f, 0.0f, -198.7769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "hen_pee1", "Pee", -1754.625f, 32.599f, 4841.774f, 0.0f, 274.3436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "hen_pee", "Pee", -1750.039f, 31.213f, 4832.931f, 0.0f, 274.3436f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_lookdistance5", "stand_lookdistance_w_any", -1767.221f, 29.813f, 4816.635f, 0.0f, -101.2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_lookdistance4", "stand_lookdistance_w_any", -1760.551f, 29.471f, 4799.91f, 0.0f, -101.2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_lookdistance3", "stand_lookdistance_w_any", -1738.453f, 28.481f, 4815.337f, 0.0f, -101.2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_lookdistance2", "stand_lookdistance_w_any", -1735.159f, 31.502f, 4837.971f, 0.0f, -101.2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_lookdistance1", "stand_lookdistance_w_any", -1761.964f, 32.427f, 4843.662f, 0.0f, -101.2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1757.995f, 30.40155f, 4819.907f, 0.0f, -167.475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_horse_stay10", "horse_stay", -1756.031f, 30.91866f, 4830.044f, 0.0f, 26.17468f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_horse_stay8", "horse_stay", -1762.697f, 31.18394f, 4830.312f, 0.0f, 35.7719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_horse_stay", "horse_stay", -1759.648f, 30.8288f, 4828.202f, 0.0f, 26.65729f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_Rand_Ground1", "Rand_Idle_Sit_Ground", -1753.325f, 29.80431f, 4821.001f, 0.0f, 39.70086f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen__drunk_throwbottle", "stand_drunk_throwbottle", -1763.918f, 30.20828f, 4818.522f, 0.0f, 92.05388f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_guntricks1", "stand_guntricks_e_any", -1756.531f, 30.36356f, 4819.299f, 0.0f, -198.7769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_guntricks", "stand_guntricks_e_any", -1756.578f, 30.61364f, 4824.122f, 0.0f, 23.2416f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_campfire_talk", "campfire_talk", -1758.249f, 30.5826f, 4823.424f, 0.0f, -108.3938f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen__stand", "rand_idle_stand", -1755.974f, 30.53736f, 4823.08f, 0.0f, -323.2545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_Sit_Grounde", "Rand_Idle_Sit_Ground", -1759.385f, 30.48355f, 4821.405f, 0.0f, 268.905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_stand_lookdistance", "stand_lookdistance_w_any", -1754.221f, 29.264f, 4806.449f, 0.0f, -101.2015f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Hen_look_binocs", "look_distance_binocs", -1757.968f, 29.94079f, 4809.994f, 0.0f, -8.110764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -2266.168f, 22.992f, 4469.771f, 0.0f, -142.5218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_rand_idle_stand2", "rand_idle_stand", -2748.117f, 46.183f, 4608.924f, 0.0f, 72.66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_rand_idle_stand1", "rand_idle_stand", -2738.463f, 52.114f, 4605.324f, 0.0f, 72.66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_rand_idle_stand5", "rand_idle_stand", -1202.635f, 19.137f, 4955.752f, 0.0f, -43.25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_stand_guntricks1", "stand_guntricks_e_any", -1457.679f, 19.4f, 4899.244f, 0.0f, -42.21369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_smoking_stand1", "smoking_stand", -1448.115f, 19.663f, 4903.778f, 0.0f, 261.8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_rand_idle_stand4", "rand_idle_stand", -1453.147f, 19.691f, 4904.472f, 0.0f, 66.39404f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_rand_idle_stand3", "rand_idle_stand", -1437.73f, 19.063f, 4916.631f, 0.0f, 66.39404f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag__dnd_rowdydrink2", "stand_dnd_rowdydrink", -1443.396f, 19.69032f, 4914.826f, 0.0f, 13.5401f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag__dnd_rowdydrink1", "stand_dnd_rowdydrink", -1446.205f, 19.69032f, 4909.839f, 0.0f, -134.5815f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_sleeping_wall_scripted", "sleeping_wall_scripted", -1467.928f, 20.55f, 4901.703f, 0.0f, -112.4326f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_stand_guntricks", "stand_guntricks_e_any", -1446.765f, 19.69032f, 4914.313f, 0.0f, -42.21369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_rand_idle_stand2", "rand_idle_stand", -1463.796f, 20.541f, 4914.44f, 0.0f, 66.39404f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_Sit_Ground1", "Rand_Idle_Sit_Ground", -1456.628f, 19.736f, 4922.165f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_sleeping_scripted", "sleeping_scripted", -1450.952f, 19.691f, 4913.889f, 0.0f, -86.56843f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1444.607f, 19.69032f, 4912.771f, 0.0f, 1.664795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_rand_idle_stand1", "rand_idle_stand", -1441.416f, 19.691f, 4911.683f, 0.0f, 76.25448f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_horse_stay9", "horse_stay", -1469.932f, 20.605f, 4910.774f, 0.0f, 28.4633f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_horse_stay8", "horse_stay", -1472.083f, 20.605f, 4914.579f, 0.0f, -1.15879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_horse_stay", "horse_stay", -1474.744f, 20.605f, 4909.638f, 0.0f, -240.4191f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag__dnd_rowdydrink", "stand_dnd_rowdydrink", -1441.756f, 19.69032f, 4909.068f, 0.0f, -209.2599f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_smoking_stand", "smoking_stand", -1465.869f, 20.605f, 4903.611f, 0.0f, 261.8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_rand_idle_stand", "rand_idle_stand", -1448.869f, 19.69032f, 4910.447f, 0.0f, -43.25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_Sit_Ground", "Rand_Idle_Sit_Ground", -1442.816f, 19.69032f, 4910.106f, 0.0f, 131.1772f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_lookdistance_binocs1", "look_distance_binocs", -1404.737f, 19.93f, 4875.994f, 0.0f, -38.38484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_lookdistance_binocs", "look_distance_binocs", -1480.194f, 29.799f, 4871.489f, 0.0f, -38.38484f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_lookdistance1", "stand_lookdistance_w_any", -1432.518f, 16.699f, 4868.561f, 0.0f, 4.833208f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "lag_lookdistance", "stand_lookdistance_w_any", -1463.929f, 21.485f, 4866.299f, 0.0f, 4.833208f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_smoking_stand2", "smoking_stand", -1204.964f, 19.075f, 4960.957f, 0.0f, 261.8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_smoking_stand1", "smoking_stand", -1195.916f, 18.885f, 4967.823f, 0.0f, 261.8007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_rand_idle_stand4", "rand_idle_stand", -1195.711f, 18.07f, 4971.998f, 0.0f, -43.25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_guntricks_e_any3", "stand_guntricks_e_any", -1195.711f, 18.07f, 4971.998f, 0.0f, -127.008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_rand_idle_stand3", "rand_idle_stand", -1191.375f, 18.68f, 4964.364f, 0.0f, -43.25648f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_look_out_window_R", "look_out_window_R", -1198.27f, 19.07451f, 4965.246f, 0.0f, -156.2962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_guntricks_e_any2", "stand_guntricks_e_any", -1190.268f, 19.075f, 4959.37f, 0.0f, -127.008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_distance_binocs2", "look_distance_binocs", -1173.602f, 24.305f, 4949.526f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "barg_horse_stay9", "horse_stay", -1185.661f, 18.157f, 4965.001f, 0.0f, -278.5182f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "barg_horse_stay7", "horse_stay", -1202.677f, 20.19039f, 4950.121f, 0.0f, -180.3898f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "barg_horse_stay6", "horse_stay", -1198.855f, 20.15f, 4945.947f, 0.0f, -241.8f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_horse_stay9", "horse_stay", -1209.177f, 18.47f, 4977.493f, 0.0f, -255.5196f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_horse_stay8", "horse_stay", -1207.309f, 19.07451f, 4966.914f, 0.0f, 129.8418f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_standrowdydrink", "stand_dnd_rowdydrink", -1201.334f, 19.177f, 4961.892f, 0.0f, -131.9079f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_stand_guntricks1", "stand_guntricks_e_any", -1201.784f, 19.07451f, 4963.372f, 0.0f, -460.9612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_stand_guntricks", "stand_guntricks_e_any", -1195.662f, 18.95542f, 4966.104f, 0.0f, -162.3401f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_Sit_Ground", "Rand_Idle_Sit_Ground", -1200.147f, 19.07451f, 4963.931f, 0.0f, -3.744514f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_smoking_stand", "smoking_stand", -1198.138f, 19.035f, 4966.952f, 0.0f, 237.8594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_stand_lookdistance1", "stand_lookdistance_w_any", -1204.836f, 18.396f, 4999.079f, 0.0f, 155.3814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_stand_lookdistance", "stand_lookdistance_w_any", -1168.964f, 22.503f, 4956.782f, 0.0f, -50.58932f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Prim_lookdistance_binocs2", "look_distance_binocs", -1172.956f, 24.22f, 4950.359f, 0.0f, -108.8531f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "ndiab_Pee1", "Pee", -2732.317f, 55.88308f, 4602.23f, 0.0f, -78.35882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", -2721.312f, 56.135f, 4626.071f, 0.0f, -71.04374f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", -2717.047f, 56.13536f, 4626.959f, 0.0f, 28.81129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", -2394.351f, 9.03528f, 3973.731f, 0.0f, -188.7163f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -2396.917f, 9.035282f, 3975.122f, 0.0f, -97.93723f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_rand_idle_stand1", "rand_idle_stand", -2423.362f, 8.347816f, 3953.373f, 0.0f, 148.2504f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_horse_stay7", "horse_stay", -2421.392f, 8.098345f, 3950.982f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_horse_stay6", "horse_stay", -2418.207f, 8.091701f, 3952.367f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_horse_tend5", "horse_tend", -2419.592f, 8.276022f, 3948.489f, 0.0f, -178.6461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_horse_stay5", "horse_stay", -2391.552f, 9.035282f, 3973.452f, 0.0f, -77.91962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_horse_stay", "horse_stay", -2390.36f, 9.035282f, 3976.159f, 0.0f, -108.218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_horse_tend", "horse_tend", -2393.498f, 9.035286f, 3970.294f, 0.0f, -178.2487f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_rand_idle_stand", "rand_idle_stand", -2409.836f, 8.863125f, 3970.2f, 0.0f, 74.69887f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_look_distance_binocs1", "look_distance_binocs", -2406.953f, 8.885f, 3972.906f, 0.0f, -179.8559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_Pee", "Pee", -2403.695f, 9.127972f, 3961.985f, 0.0f, -339.9337f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_look_distance_binocs", "look_distance_binocs", -2377.361f, 13.70045f, 3959.298f, 0.0f, -145.4083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", -2392.574f, 9.035279f, 3977.499f, 0.0f, -288.6662f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_stand_guntricks", "stand_guntricks_e_any", -2395.221f, 9.035282f, 3978.009f, 0.0f, -14.52901f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_smoking_stand", "smoking_stand", -2392.542f, 9.035279f, 3975.33f, 0.0f, 108.3262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", -2405.164f, 8.857721f, 3973.518f, 0.0f, -26.27371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", -2719.872f, 56.14576f, 4632.723f, 0.0f, -160.4651f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_Pee", "Pee", -2719.947f, 56.14061f, 4619.677f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_rand_idle_stand", "rand_idle_stand", -2732.475f, 54.799f, 4620.533f, 0.0f, 72.66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2719.381f, 56.136f, 4624.018f, 0.0f, -86.41405f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2717.162f, 56.13536f, 4622.923f, 0.0f, -199.554f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", -2718.725f, 56.19336f, 4625.808f, 0.0f, -49.80202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_stand", "rand_idle_stand", -2755.338f, 44.574f, 4608.967f, 0.0f, 47.45972f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", -2747.982f, 46.58796f, 4617.084f, 0.0f, -261.3201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sit_smokediab", "sit_ground_smoke", -2750.69f, 46.5379f, 4619.904f, 0.0f, -279.5391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_smoking_stand", "smoking_stand", -2713.061f, 57.17479f, 4633.203f, 0.0f, -192.8825f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", -2730.924f, 55.25158f, 4607.433f, 0.0f, 70.70719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_horse_stay7", "horse_stay", -2717.415f, 46.003f, 4670.128f, 0.0f, -28.21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_horse_stay6", "horse_stay", -2728.029f, 48.83f, 4663.372f, 0.0f, -302.0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_horse_stay5", "horse_stay", -2744.786f, 47.842f, 4622.784f, 0.0f, -28.21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_horse_stay", "horse_stay", -2752.478f, 45.581f, 4613.565f, 0.0f, -302.0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_lookdistance_binocs", "look_distance_binocs", -2739.578f, 52.528f, 4609.783f, 0.0f, 120.0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "diab_lookdistance_binocs1", "look_distance_binocs", -2723.603f, 48.057f, 4670.079f, 0.0f, 120.0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_lookdistance_diab", "stand_lookdistance_w_any", -2711.862f, 45.174f, 4549.208f, 0.0f, 183.9572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Dia_lookdistance_binocs", "look_distance_binocs", -2751.219f, 41.231f, 4569.213f, 0.0f, 105.7632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_Rand_Idle_NearWall1", "Rand_Idle_NearWall", -2235.211f, 23.07668f, 4458.44f, 0.0f, -220.2354f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_smoking_stand4", "smoking_stand", -2248.473f, 23.09f, 4459.871f, 0.0f, -278.4407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_smoking_stand3", "smoking_stand", -2251.981f, 23.09363f, 4453.836f, 0.0f, 16.17786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_guntricks2", "stand_guntricks_e_any", -2236.704f, 23.09021f, 4445.694f, 0.0f, 45.55705f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_smoking_stand2", "smoking_stand", -2237.801f, 23.08828f, 4450.994f, 0.0f, -162.5718f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_Sit_Ground_Drink1", "Sit_Ground_Drink", -2238.287f, 23.01221f, 4458.699f, 0.0f, 185.9857f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_look_out_window1", "look_out_window_L", -2225.412f, 23.27891f, 4451.979f, 0.0f, 52.1422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_stand_lookdistance", "stand_lookdistance_w_any", -2800f, 12.99747f, 3976.0f, 0.0f, -33.86443f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_look_distance_binocs", "look_distance_binocs", -2821.198f, 14.178f, 3990.256f, 0.0f, 107.9522f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_stand_yawning_n_any", "stand_yawning_n_any", -2808f, 15.63685f, 4000.0f, 0.0f, 123.7318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_stand_worried_n_any", "stand_worried_n_any", -2801.499f, 15.81774f, 3993.3f, 0.0f, -69.93935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "rio_Sit_Ground", "Rand_Idle_Sit_Ground", -2803.31f, 15.6673f, 3997.191f, 0.0f, -120.7834f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_horse_tend1", "horse_tend", -2809.067f, 14.55902f, 4007.062f, 0.0f, -182.7983f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_horse_tend4", "horse_tend", -2785.864f, 15.38389f, 3997.784f, 0.0f, -176.7439f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_horse_stay2", "horse_stay", -2812.66f, 14.77457f, 4006.476f, 0.0f, -24.8493f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_horse_stay1", "horse_stay", -2782.363f, 15.07267f, 3997.314f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_horse_stay4", "horse_stay", -2792f, 15.52056f, 3997.487f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Pee_rio", "Pee", -2796.444f, 13.75379f, 3981.866f, 0.0f, -45.26333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_stand_guntricks3", "stand_guntricks_e_any", -2801.323f, 15.64117f, 3995.094f, 0.0f, -84.98148f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "stand_guntricks_4", "stand_guntricks_e_any", -2796.0f, 15.55481f, 4000.0f, 0.0f, -97.24407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_stand_lookdistance1", "stand_lookdistance_w_any", -2803.821f, 15.45894f, 4002.666f, 0.0f, -159.2758f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_look_distance_binocs10", "look_distance_binocs", -2802.01f, 15.8971f, 3991.164f, 0.0f, -13.09345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Rio_smoking_stand", "smoking_stand", -2809.624f, 15.99161f, 3992.0f, 0.0f, 48.59919f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "sleeping_wall_rio", "sleeping_wall_scripted", -2809.184f, 15.98761f, 3996.572f, 0.0f, 107.063f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_smoking_stand1", "smoking_stand", -2231.056f, 23.08467f, 4453.438f, 0.0f, -39.62713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_sit_ground_smoke2", "sit_ground_smoke", -2249.137f, 23.08695f, 4454.318f, 0.0f, -27.94823f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_ground_harmonica", "sit_ground_play_harmonica", -2235.434f, 23.08521f, 4455.663f, 0.0f, -27.9268f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_sit_ground_smoke1", "sit_ground_smoke", -2231.816f, 23.09146f, 4444.698f, 0.0f, -38.92004f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_peeing_b_any", "stand_peeing_b_any", -2224.567f, 23.06506f, 4460.793f, 0.0f, -59.44532f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_spit1", "stand_spit", -2242.161f, 23.09f, 4465.899f, 0.0f, -259.1897f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_spit", "stand_spit", -2242.714f, 23.09f, 4458.329f, 0.0f, 173.8711f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -2238.399f, 21.7327f, 4480.835f, 0.0f, -142.5218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -2245.74f, 23.10797f, 4448.0f, 0.0f, 20.09966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_lookdistance_w_any", "stand_lookdistance_w_any", -2227.261f, 22.78294f, 4446.88f, 0.0f, -37.47246f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_horse_stay3", "horse_stay", -2241.171f, 23.09021f, 4466.272f, 0.0f, -151.222f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_horse_stay2", "horse_stay", -2238.423f, 23.00134f, 4465.598f, 0.0f, 188.6003f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_horse_stay1", "horse_stay", -2249.609f, 23.09021f, 4459.841f, 0.0f, -346.9635f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_horse_stay", "horse_stay", -2247.84f, 23.09021f, 4458.915f, 0.0f, -332.9286f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_stand_guntricks_e_any", "stand_guntricks_e_any", -2232.32f, 23.09239f, 4447.919f, 0.0f, -37.95788f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_Rand_Idle_NearWall", "Rand_Idle_NearWall", -2229.033f, 23.09021f, 4448.373f, 0.0f, -39.34164f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "bar_lookdistance_binocs", "look_distance_binocs", -2236.719f, 23.09021f, 4441.224f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_7.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", -2568.0f, 17.35954f, 4184f, 0.0f, 0.0f, 0.0f);
	Local_7.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", -2429.295f, 15.05885f, 4280.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", -2501.216f, 25.89587f, 4432.677f, 0.0f, 0.0f, 0.0f);
	Local_7.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", -2666.291f, 53.98365f, 4780.74f, 0.0f, 0.0f, 0.0f);
	Local_7.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", -2580.778f, 15.49983f, 4620.063f, 0.0f, 0.0f, 0.0f);
	Local_7.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", -2358.007f, 10.03923f, 4465.936f, 0.0f, 0.0f, 0.0f);
	Local_7.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", -2346.138f, 12.9453f, 4697.183f, 0.0f, 0.0f, 0.0f);
	Local_7.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", -2090.028f, 10.03923f, 4525.774f, 0.0f, 0.0f, 0.0f);
	Local_7.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", -2140f, 7.02747f, 4372.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", -2064f, 7.02747f, 4211.936f, 0.0f, 0.0f, 0.0f);
	Local_7.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", -2191.708f, 12.04772f, 4124.719f, 0.0f, 0.0f, 0.0f);
	Local_7.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", -1933.636f, 8.031361f, 4312.0f, 0.0f, -39.45688f, 0.0f);
	Local_7.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", -1948.161f, 9.040389f, 4601.057f, 0.0f, 0.0f, 0.0f);
	Local_7.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", -1885.215f, 9.370696f, 4433.224f, 0.0f, 0.0f, 0.0f);
	Local_7.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", -1827.297f, 13.05566f, 4252.745f, 0.0f, 0.0f, 0.0f);
	Local_7.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", -1856f, 7.027451f, 4084.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", -1658.559f, 18.04464f, 4426.559f, 0.0f, 0.0f, 0.0f);
	Local_7.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", -1844f, 17.06665f, 4516.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", -2316f, 8.767691f, 4281.776f, 0.0f, -115.5078f, 0.0f);
	Local_7.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", -2910.036f, 44.57027f, 4654.019f, 0.0f, 0.0f, 0.0f);
	Local_7.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", -2726.28f, 36.25617f, 4521.987f, 0.0f, 0.0f, 0.0f);
	Local_7.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", -2441.885f, 11.04316f, 4488.0f, 0.0f, 101.156f, 0.0f);
	Local_7.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", -2354.037f, 22.08627f, 4788.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", -2839.25f, 32.12549f, 4316.75f, 0.0f, 0.0f, 0.0f);
	Local_7.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", -2554.774f, 18.07061f, 4153.149f, 0.0f, 0.0f, 0.0f);
	Local_7.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", -2504.785f, 26.10197f, 4451.215f, 0.0f, 0.0f, 0.0f);
	Local_7.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", -2380f, 14.05492f, 4240.4f, 0.0f, 0.0f, 0.0f);
	Local_7.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", -2131.301f, 12.04518f, 4245.068f, 0.0f, 0.0f, 0.0f);
	Local_7.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", -2132.0f, 10.0281f, 4634.028f, 0.0f, 0.0f, 0.0f);
	Local_7.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", -2168.012f, 15.10399f, 4691.06f, 0.0f, 0.0f, 0.0f);
	Local_7.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", -1952.991f, 41.95831f, 4893.371f, 0.0f, 0.0f, 0.0f);
	Local_7.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", -1660.062f, 32.53368f, 4710.832f, 0.0f, 0.0f, 0.0f);
	Local_7.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", -1637.863f, 20.07843f, 4621.863f, 0.0f, 0.0f, 0.0f);
	Local_7.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", -1778.279f, 17.00437f, 4576.003f, 0.0f, 0.0f, 0.0f);
	Local_7.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", -1666.141f, 17.71151f, 4478.913f, 0.0f, 0.0f, 0.0f);
	Local_7.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", -1933.051f, 9.035278f, 4488.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", -1400f, 20.07843f, 4590.162f, 0.0f, 0.0f, 0.0f);
	Local_7.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", -1376.957f, 17.09519f, 4781.746f, 0.0f, 0.0f, 0.0f);
	Local_7.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", -1526.312f, 18.05862f, 4830.312f, 0.0f, 0.0f, 0.0f);
	Local_7.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", -1897.378f, 14.05489f, 4230.172f, 0.0f, 0.0f, 0.0f);
	Local_7.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", -2352.539f, 25.11804f, 4588.779f, 0.0f, 0.0f, 0.0f);
	Local_7.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", -2673.413f, 34.65824f, 4552f, 0.0f, 0.0f, 0.0f);
	Local_7.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", -2749.371f, 38.14902f, 4436f, 0.0f, 0.0f, 0.0f);
	Local_7.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", -2852.56f, 13.00819f, 4501.605f, 0.0f, 0.0f, 0.0f);
	Local_7.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", -2607.575f, 41.13937f, 4866.815f, 0.0f, 0.0f, 0.0f);
	Local_7.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", -3035.985f, 13.35887f, 4342.248f, 0.0f, 0.0f, 0.0f);
	Local_7.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", -2039.102f, 16.05764f, 4753.391f, 0.0f, 0.0f, 0.0f);
	Local_7.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", -1716f, 19.07449f, 4434.045f, 0.0f, 0.0f, 0.0f);
	Local_7.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", -1343.297f, 19.558f, 4844.218f, 0.0f, 87.85265f, 0.0f);
	Local_7.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", -1370.594f, 17.08653f, 4826.005f, 0.0f, 0.0f, 0.0f);
	Local_7.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", -2982.333f, 30.5575f, 4402.333f, 0.0f, 0.0f, 0.0f);
	Local_7.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", -2713.959f, 9.200555f, 4116.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", -2374.489f, 13.051f, 4214.489f, 0.0f, 0.0f, 0.0f);
	Local_7.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", -2217.438f, 11.71084f, 4497.232f, 0.0f, 0.0f, 0.0f);
	Local_7.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", -1927.737f, 7.023766f, 4579.011f, 0.0f, 0.0f, 0.0f);
	Local_7.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", -1764.0f, 35.04422f, 4464.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", -1832f, 15.05882f, 4022.384f, 0.0f, 0.0f, 0.0f);
	Local_7.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", -3506.558f, 20.30957f, 4201.442f, 0.0f, 0.0f, 0.0f);
	Local_7.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", -3436f, 6.023544f, 4248.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", -3381.324f, 9.035736f, 4149.359f, 0.0f, 0.0f, 0.0f);
	Local_7.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", -3312.873f, 40.31164f, 4434.389f, 0.0f, 0.0f, 0.0f);
	Local_7.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", -3487.395f, 25.28656f, 4452.401f, 0.0f, 0.0f, 0.0f);
	Local_7.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", -3316.056f, 38.90699f, 4626.938f, 0.0f, 101.5016f, 0.0f);
	Local_7.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", -3168.985f, 36.14119f, 4644.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", -3052.09f, 34.46273f, 4689.37f, 0.0f, 0.0f, 0.0f);
	Local_7.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", -2844.54f, 34.36322f, 4617.301f, 0.0f, 0.0f, 0.0f);
	Local_7.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", -2892.009f, 12.37078f, 4512f, 0.0f, 0.0f, 0.0f);
	Local_7.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", -2820.0f, 12.02767f, 4480.763f, 0.0f, 0.0f, 0.0f);
	Local_7.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", -2809.987f, 32.11597f, 4342.014f, 0.0f, 0.0f, 0.0f);
	Local_7.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", -2725.906f, 31.28142f, 4200f, 0.0f, 0.0f, 0.0f);
	Local_7.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", -2840.0f, 9.035294f, 4170.232f, 0.0f, 0.0f, 0.0f);
	Local_7.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", -2609.779f, 17.13632f, 4136.288f, 0.0f, 0.0f, 0.0f);
	Local_7.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", -2588.0f, 27.81133f, 4162.203f, 0.0f, 0.0f, 0.0f);
	Local_7.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", -2431.989f, 13.05544f, 4259.917f, 0.0f, -89.17472f, 0.0f);
	Local_7.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", -2332f, 7.02747f, 4312.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", -2220f, 10.98272f, 4403.61f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", -2089.201f, 6.02355f, 4274.799f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls20", "Player_Herb_woollyBlueCurls", -2144f, 7.967607f, 4320.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls21", "Player_Herb_woollyBlueCurls", -2004.0f, 7.569696f, 4457.416f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls22", "Player_Herb_woollyBlueCurls", -2075.324f, 7.02747f, 4460.676f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls23", "Player_Herb_woollyBlueCurls", -1944f, 8.031358f, 4425.306f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls24", "Player_Herb_woollyBlueCurls", -1820.795f, 13.11664f, 4354.409f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls25", "Player_Herb_woollyBlueCurls", -1910.817f, 8.031357f, 4340.306f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls26", "Player_Herb_woollyBlueCurls", -1912.0f, 9.035278f, 4287.747f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls27", "Player_Herb_woollyBlueCurls", -1834.083f, 10.03617f, 4223.111f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls28", "Player_Herb_woollyBlueCurls", -1956.0f, 8.031357f, 4093.11f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls29", "Player_Herb_woollyBlueCurls", -2022.958f, 10.89698f, 4017.618f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls30", "Player_Herb_woollyBlueCurls", -2116.598f, 8.031363f, 4032.598f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls31", "Player_Herb_woollyBlueCurls", -2222.41f, 15.04577f, 4032.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls32", "Player_Herb_woollyBlueCurls", -2195.403f, 10.13291f, 3860.817f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls33", "Player_Herb_woollyBlueCurls", -2125.854f, 14.02664f, 3845.857f, 0.0f, -256.6531f, 0.0f);
	Local_7.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls34", "Player_Herb_woollyBlueCurls", -2062.496f, 14.73775f, 3837.177f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls35", "Player_Herb_woollyBlueCurls", -2084f, 14.55479f, 3910.628f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls36", "Player_Herb_woollyBlueCurls", -2000.621f, 12.43142f, 3955.702f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls37", "Player_Herb_woollyBlueCurls", -1832f, 13.08149f, 4040.557f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls38", "Player_Herb_woollyBlueCurls", -1820.948f, 6.01367f, 4139.051f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls40", "Player_Herb_woollyBlueCurls", -1620.0f, 11.68288f, 4373.344f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls41", "Player_Herb_woollyBlueCurls", -1632.0f, 9.652975f, 4488.0f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls42", "Player_Herb_woollyBlueCurls", -1744f, 13.05098f, 3926.992f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls43", "Player_Herb_woollyBlueCurls", -1786.523f, 12.64444f, 3809.08f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls44", "Player_Herb_woollyBlueCurls", -1825.098f, 10.60763f, 3718.17f, 0.0f, 0.0f, 0.0f);
	Local_7.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_7, "Player_Herb_woollyBlueCurls45", "Player_Herb_woollyBlueCurls", -1772f, 11.97172f, 3778.428f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "nsit_docks", "nsit_docks", -1149.049f, 28.10178f, 4825.696f, 0.0f, 142.3014f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_7, "look_out_window_R", "look_out_window_R", -1150.912f, 28.08622f, 4823.648f, 0.0f, 143.5482f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_7.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_7, "treasure_hunting_z_4", "zombie_treasure_hunting_4", -1340.6f, 6.3f, 4493.1f, 0.0f, 91.40795f, 0.0f);
	return 1;
}

bool Function_112(int iParam0) //Position: 0xD17C / 53628
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_116();
	iVar1 = 0;
	if (!Function_23(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_115(iParam0[iVar03], 8);
		}
		else if (Function_114())
		{
			iVar1 = 1;
			Function_115(iParam0[iVar03], 8);
		}
		Function_115(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_23(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_23(iParam0[03], 8) || iVar1));
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
				Function_115(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
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
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
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
	Function_113();
	return 1;
}

void Function_113() //Position: 0xD4F7 / 54519
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_114() //Position: 0xD537 / 54583
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

void Function_115(var uParam0, int iParam1) //Position: 0xD562 / 54626
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_116() //Position: 0xD573 / 54643
{
	if (!Function_63(128))
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

var Function_117(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD5B5 / 54709
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_118(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_115(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_118(var uParam0, int iParam1, int iParam2) //Position: 0xD5ED / 54765
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_23(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_115(uParam0[iVar03], 4);
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

bool Function_119() //Position: 0xD6B1 / 54961
{
	return Function_120();
}

int Function_120() //Position: 0xD6BA / 54970
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = uVar0;
	bLocal_6 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(bLocal_6))
	{
		bLocal_6 = CREATE_LAYOUT("Perdido_layout");
	}
	return 1;
}

void Function_121() //Position: 0xD6FF / 55039
{
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_122();
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_122() //Position: 0xD721 / 55073
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("sep_placement01x");
	Global_26282[04] = 0;
	Global_26282[04].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Function_69(&(Global_26282[04]), iVar0);
		iVar0++;
	}
	return;
}

void Function_123(bool bParam0, int iParam1) //Position: 0xD76B / 55147
{
	if (!Function_63(128))
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

