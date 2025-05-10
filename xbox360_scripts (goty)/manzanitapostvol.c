//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 169
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<405> Local_0 = { 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_102 = 0;
	Local_103 = { StackVal, ScriptParam_0 };
	Function_66("Initializing ManzanitaPost Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_105 = 500;
		uLocal_106 = Function_65();
		switch (iLocal_102)
		{
			case 0x00000000:
				if (Function_63())
				{
					bLocal_126 = Function_62(Local_0, "nmanzanita", ScriptParam_0);
					iLocal_102 = 1;
				}
				bLocal_105 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_126))
				{
					iLocal_102 = 2;
				}
				bLocal_105 = false;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_107);
				Function_60(StackVal, &uLocal_107, &uLocal_110, 4, 4294967295, 4);
				Function_60(&uLocal_107, &uLocal_110, 5, Local_0.f_40, 4294967295, 2314);
				Function_60(&uLocal_107, &uLocal_110, 5, Local_0.f_52, 4294967295, 16650);
				Function_60(&uLocal_107, &uLocal_110, 5, Local_0.f_168, 4294967295, 16650);
				Function_60(&uLocal_107, &uLocal_110, 5, Local_0.f_216, 4294967295, 258);
				Function_58(&Local_127, bLocal_126, "cabin01", 99, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_216, 0, 1);
				iLocal_163 = Function_58(&Local_127, bLocal_126, "tradepost01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_164 = Function_58(&Local_127, bLocal_126, "tradepost01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_127, bLocal_126, "tradepost01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_165 = Function_58(&Local_127, bLocal_126, "tradepost01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_166 = Function_58(&Local_127, bLocal_126, "tradepost01", 5, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_40, 1, 0);
				Function_58(&Local_127, bLocal_126, "trainDepot01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				if (iLocal_163 <= 0 && iLocal_163 > Local_127)
				{
					Function_57(&(Local_127[iLocal_1635]), 33);
				}
				if (iLocal_164 <= 0 && iLocal_164 > Local_127)
				{
					Function_57(&(Local_127[iLocal_1645]), 33);
				}
				if (iLocal_165 <= 0 && iLocal_165 > Local_127)
				{
					Function_57(&(Local_127[iLocal_1655]), 33);
				}
				if (iLocal_166 <= 0 && iLocal_166 > Local_127)
				{
					Function_57(&(Local_127[iLocal_1665]), 33);
				}
				iLocal_102 = 3;
				bLocal_105 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_103]), 16);
				Function_55("Finished Initializing ManzanitaPost Volumes", 5.0f);
				iLocal_102 = 4;
				bLocal_105 = false;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_107, &uLocal_110, uLocal_106, ScriptParam_0);
				Function_12(&Local_127, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_105 = false;
				break;
		}
		WAIT(bLocal_105);
	}
	Function_4(&uLocal_107, &uLocal_110);
	Function_3(&Local_127);
	Function_2();
	Function_1(&(Global_29008[Local_103]), 16);
	Function_55("Unloaded ManzanitaPost Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x31D / 797
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x334 / 820
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x33F / 831
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_VOLUME_VALID(iParam0[iVar05]->f_12))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(iParam0[iVar05]->f_12))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0[iVar05]->f_12);
			}
		}
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x399 / 921
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_11(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(iParam1[iVar03], 4);
		}
		if (Function_11(iParam1[iVar03], 8))
		{
			Function_5(0, 0, 30);
			Function_10(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x3F1 / 1009
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
		Function_6(Global_16524, bVar0, 1);
	}
	return;
}

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D7 / 1239
{
	int iVar0;
	
	Function_9(iParam0);
	Function_8(bParam1);
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
	Function_7();
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

void Function_7() //Position: 0x650 / 1616
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x65C / 1628
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

void Function_9(int iParam0) //Position: 0x6A2 / 1698
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

void Function_10(var uParam0, int iParam1) //Position: 0x6E8 / 1768
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x702 / 1794
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x71F / 1823
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	
	bVar6 = Function_16();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_15((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_14(uParam0[iVar05], 16384);
				uVar8 = StackVal;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(bVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(bVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_13(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_65(), uParam0[iVar05]->f_12))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(uParam0[iVar05]->f_16))
							{
								if (IS_PERS_CHAR_ALIVE(uParam0[iVar05]->f_16))
								{
									bVar10 = GET_ACTOR_FROM_PERS_CHAR(uParam0[iVar05]->f_16);
									if (IS_ACTOR_VALID(bVar10))
									{
										if (IS_ACTOR_IN_VOLUME(bVar10, uParam0[iVar05]->f_12))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_13(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
						else
						{
							Function_13(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_14(uParam0[iVar05], 1);
						uVar8 = StackVal;
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(uParam0[iVar05]->f_12))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(uParam0[iVar05]->f_12);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(bVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_13(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(bVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_14(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(uParam0[iVar05], 1);
					uVar8 = StackVal;
				}
			}
			bVar3 = IS_DOOR_LOCKED(bVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_3387)
				{
					if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_65(), uParam0[iVar05]->f_12))
							{
								SET_DOOR_LOCK(bVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(bVar7, 1);
				}
			}
			else if (Global_3387)
			{
				if (IS_VOLUME_VALID(uParam0[iVar05]->f_12) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_65(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_14(uParam0[iVar05], 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(bVar7, 0);
			}
		}
		iVar0++;
	}
	Global_30620 = iVar0;
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0xAEB / 2795
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xAFC / 2812
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xB16 / 2838
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xB28 / 2856
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xB31 / 2865
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_18(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xBB2 / 2994
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(uParam0))
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
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_51(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_50(uParam0, 8);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(uParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_50(uParam0, 4);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(uParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_47(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 16))
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
							if (Function_16())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_50(uParam0, 16);
								Function_39(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 16))
					{
						Function_10(uParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_11(uParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(uParam0, 2);
			}
			else
			{
				Function_10(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_38(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_11(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_37(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_50(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_19(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_19(int iParam0) //Position: 0xFCB / 4043
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_38(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_24(473, 1, 0, 0);
		iVar0 = Function_23(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_24(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_24(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_24(476, 1, 0, 0);
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
		Function_22(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_22(7, 30);
	}
	if (Function_21(473) <= Function_20(473))
	{
		if (!Function_16())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_20(int iParam0) //Position: 0x10CA / 4298
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x1107 / 4359
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x1140 / 4416
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

var Function_23(int iParam0) //Position: 0x11A7 / 4519
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_49(iParam0))
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x11FF / 4607
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
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x141F / 5151
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_20(390))), 32);
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
					bVar19 = (Function_21(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_21(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_26(), &Var9);
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

var Function_26() //Position: 0x1A4C / 6732
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1A54 / 6740
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1A65 / 6757
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1B5A / 7002
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B73 / 7027
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1BD8 / 7128
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1BEA / 7146
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x1D1A / 7450
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1D29 / 7465
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1EC3 / 7875
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

void Function_36(var uParam0, int iParam1) //Position: 0x2107 / 8455
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x2114 / 8468
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x213A / 8506
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2156 / 8534
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_46(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_45(iParam1))
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
	if (!Function_42(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_40();
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

void Function_40() //Position: 0x23E6 / 9190
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_41(bVar0, iVar1);
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2449 / 9289
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

bool Function_42(bool bParam0) //Position: 0x2478 / 9336
{
	if (Function_47(256))
	{
		return 0;
	}
	if (Function_47(262144))
	{
		return 0;
	}
	if (Function_44())
	{
		return 0;
	}
	if (!Function_47(1))
	{
		return 0;
	}
	if (!Function_47(4096))
	{
		return 0;
	}
	if (bParam0 && Function_43(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_47(2048))
	{
		return 0;
	}
	if (Function_16() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_43(int iParam0) //Position: 0x24EE / 9454
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x24FF / 9471
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

bool Function_45(int iParam0) //Position: 0x2518 / 9496
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x252E / 9518
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2543 / 9539
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2561 / 9569
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

bool Function_49(int iParam0) //Position: 0x2605 / 9733
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x261B / 9755
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x262C / 9772
{
	int iVar0;
	bool bVar1;
	
	Function_9(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_6(StackVal, bVar1, bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x269E / 9886
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x26C3 / 9923
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

bool Function_54(int iParam0) //Position: 0x26E0 / 9952
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x26FC / 9980
{
	if (!Function_54(128))
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

void Function_56(var uParam0, int iParam1) //Position: 0x273A / 10042
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x2749 / 10057
{
	Function_13(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_58(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x275B / 10075
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_59(uParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, bParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(bParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(bVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(bVar11);
	if (bParam5)
	{
		Function_13(uParam0[iVar05], 1);
	}
	Function_13(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_13(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_13(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_59(bool bParam0) //Position: 0x283A / 10298
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *bParam0)
	{
		if (!IS_DOOR_VALID((*bParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_60(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2868 / 10344
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

void Function_61(int iParam0) //Position: 0x2943 / 10563
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_62(bool bParam0, bool bParam1, int iParam2) //Position: 0x2952 / 10578
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_63() //Position: 0x2971 / 10609
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("ManzanitaPost_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("ManzanitaPost_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_region", 3, -446.1047f, 166.8103f, 1613.427f, 0.0f, 34.62986f, 0.0f, 56.60696f, 20.28249f, 83.10894f);
	Local_0.f_40 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_store_set");
	(*&Local_0 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_store03", 2, -453.4148f, 155.0032f, 1620.927f, 0.0f, 18.27136f, 0.0f, 7.289934f, 3.890072f, 17.96808f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 8)[0]);
	(*&Local_0 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_store01", 2, -459.9624f, 154.911f, 1616.25f, 0.0f, 18.34838f, 0.0f, 4.421497f, 3.494474f, 5.325041f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 8)[1]);
	(*&Local_0 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_store02", 2, -449.089f, 155.1434f, 1619.235f, 0.0f, 18.35766f, 0.0f, 3.26932f, 4.017075f, 17.89183f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 8)[2]);
	(*&Local_0 + 8)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_store04", 2, -449.7834f, 155.2446f, 1612.098f, 0.0f, 18.34838f, 0.0f, 0.8837107f, 1.610648f, 1.115541f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 8)[3]);
	(*&Local_0 + 8)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_store05", 2, -448.934f, 155.2446f, 1614.658f, 0.0f, 18.34838f, 0.0f, 0.8837107f, 1.610648f, 1.115541f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 8)[4]);
	(*&Local_0 + 8)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_store06", 2, -445.6509f, 155.2446f, 1624.557f, 0.0f, 18.34838f, 0.0f, 0.8837107f, 1.610648f, 1.115541f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 8)[5]);
	(*&Local_0 + 8)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_store07", 2, -446.0783f, 154.9507f, 1630.749f, 0.0f, 18.34838f, 0.0f, 0.2717866f, 1.610648f, 1.995313f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 8)[6]);
	Local_0.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_trainStation_set");
	(*&Local_0 + 44)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box4", 2, -412.1928f, 153.5993f, 1604.312f, 0.0f, 16.98188f, 0.0f, 3.399913f, 2.795681f, 5.496667f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 44)[0]);
	Local_0.f_64 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_tents_set");
	(*&Local_0 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -463.9041f, 154.5908f, 1575.254f, 0.0f, -9.161345f, 0.0f, 19.90582f, 6.999259f, 30.42453f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 56)[0]);
	Local_0.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_trainWalkway_set");
	(*&Local_0 + 68)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box27", 2, -415.3496f, 153.487f, 1604.169f, 0.0f, 17.58583f, 0.0f, 2.243587f, 2.619346f, 8.862592f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 68)[0]);
	(*&Local_0 + 68)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box14", 2, -408.9507f, 153.0197f, 1602.299f, 0.0f, -71.86266f, 0.0f, 8.396963f, 2.344469f, 3.288374f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 68)[1]);
	(*&Local_0 + 68)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box15", 2, -410.2993f, 153.4289f, 1607.948f, 0.0f, -70.86935f, 0.0f, 1.893754f, 2.470759f, 8.776808f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 68)[2]);
	Local_0.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_birds_set");
	(*&Local_0 + 88)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder50", 3, -413.9072f, 153.5974f, 1603.649f, 0.0f, 20.0f, 0.0f, 12.09756f, 20.17988f, 12.09756f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 88)[0]);
	(*&Local_0 + 88)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -452.8146f, 156.1155f, 1624.195f, 0.0f, 20.0f, 0.0f, 12.09756f, 20.17988f, 18.81477f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 88)[1]);
	(*&Local_0 + 88)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -444.1078f, 153.5015f, 1673.068f, 0.0f, 20.0f, 0.0f, 12.09756f, 20.17988f, 12.09756f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 88)[2]);
	(*&Local_0 + 88)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -492.7358f, 157.5287f, 1564.088f, 0.0f, 20.0f, 0.0f, 18.64388f, 20.17988f, 19.19005f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 88)[3]);
	Local_0.f_140 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_raccoon_set");
	(*&Local_0 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder58", 3, -474.5305f, 154.0435f, 1636.803f, 0.0f, 20.0f, 0.0f, 4.855732f, 4.4292f, 6.442109f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 112)[0]);
	(*&Local_0 + 112)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder53", 3, -485.9409f, 152.3524f, 1569.181f, 0.0f, 20.0f, 0.0f, 4.855732f, 4.4292f, 6.442109f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 112)[1]);
	(*&Local_0 + 112)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder54", 3, -402.0251f, 151.9082f, 1622.764f, 0.0f, 20.0f, 0.0f, 4.855732f, 4.4292f, 6.442109f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 112)[2]);
	(*&Local_0 + 112)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder55", 3, -453.4293f, 156.322f, 1675.813f, 0.0f, 20.0f, 0.0f, 4.855732f, 4.4292f, 6.442109f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 112)[3]);
	(*&Local_0 + 112)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder56", 3, -491.8233f, 160.4498f, 1612.328f, 0.0f, 20.0f, 0.0f, 4.855732f, 4.4292f, 6.442109f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 112)[4]);
	(*&Local_0 + 112)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder57", 3, -474.5305f, 154.0435f, 1636.803f, 0.0f, 20.0f, 0.0f, 4.855732f, 4.4292f, 6.442109f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 112)[5]);
	Local_0.f_168 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_TrnPlatform_set");
	(*&Local_0 + 144)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_TrnPlatform01", 2, -413.1695f, 153.7277f, 1598.692f, 0.0f, -72.26491f, 0.0f, 5.465863f, 4.133375f, 11.42017f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 144)[0]);
	(*&Local_0 + 144)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_TrnPlatform02", 2, -412.1872f, 153.6225f, 1593.995f, 0.0f, 18.3607f, 0.0f, 5.837962f, 4.156413f, 4.773031f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 144)[1]);
	(*&Local_0 + 144)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_TrnPlatform03", 2, -410.1619f, 153.7277f, 1608.096f, 0.0f, -72.26491f, 0.0f, 2.378887f, 4.133375f, 11.42017f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 144)[2]);
	(*&Local_0 + 144)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_TrnPlatform04", 2, -408.374f, 153.7277f, 1602.771f, 0.0f, -72.26491f, 0.0f, 9.64335f, 4.133375f, 4.336667f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 144)[3]);
	(*&Local_0 + 144)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_TrnPlatform05", 2, -416.0699f, 153.7277f, 1604.832f, 0.0f, -72.26491f, 0.0f, 9.64335f, 4.133375f, 4.336667f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 144)[4]);
	Local_0.f_180 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_customers_set");
	(*&Local_0 + 172)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_customers01", 2, -436.6406f, 154.911f, 1618.357f, 0.0f, 18.34838f, 0.0f, 19.61568f, 12.64799f, 13.83968f);
	ADD_TO_VOLUME_SET(Local_0.f_180, (*&Local_0 + 172)[0]);
	Local_0.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_Songbirds_set");
	(*&Local_0 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder105", 3, -401.213f, 155.4097f, 1646.434f, 0.0f, 270.613f, 0.0f, 2.485654f, 4.727016f, 2.202775f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 184)[0]);
	(*&Local_0 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder101", 3, -408.3219f, 156.9579f, 1649.914f, 0.0f, 122.003f, 0.0f, 2.198967f, 5.421324f, 2.345026f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 184)[1]);
	(*&Local_0 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder102", 3, -456.459f, 158.5899f, 1643.045f, 0.0f, 20.0f, 0.0f, 3.176107f, 7.441402f, 3.210801f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 184)[2]);
	(*&Local_0 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder103", 3, -475.198f, 155.9205f, 1566.421f, 0.0f, 53.93914f, 0.0f, 4.298011f, 9.141942f, 6.170969f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 184)[3]);
	(*&Local_0 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder104", 3, -440.795f, 154.1687f, 1583.035f, 0.0f, 212.157f, 0.0f, 3.047699f, 7.583018f, 2.975777f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 184)[4]);
	Local_0.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nmtpv_hawk", 3, -425.6133f, 154.7939f, 1550.393f, 0.0f, 109.36f, 0.0f, 3.356604f, 7.971628f, 3.077288f);
	Local_0.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_players_house", 2, -443.6414f, 153.499f, 1670.266f, 0.0f, -36.5882f, 0.0f, 7.443309f, 7.843923f, 8.202867f);
	Local_0.f_232 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "mtpv_train_tickets_set");
	(*&Local_0 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_train_tickets_01", 2, -411.8714f, 153.7277f, 1602.584f, 0.0f, -72.26491f, 0.0f, 13.11986f, 4.133375f, 9.90799f);
	ADD_TO_VOLUME_SET(Local_0.f_232, (*&Local_0 + 220)[0]);
	(*&Local_0 + 220)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_train_tickets_02", 2, -412.2029f, 153.6225f, 1594.064f, 0.0f, 18.3607f, 0.0f, 5.837962f, 4.156413f, 3.940191f);
	ADD_TO_VOLUME_SET(Local_0.f_232, (*&Local_0 + 220)[1]);
	Local_0.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_0, "mtpv_fff", 3, -464.1764f, 152.3517f, 1596.943f, 0.0f, 108.6721f, 0.0f, 3.572981f, 4.85507f, 3.993516f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtpf_report_crime_road", -440.88f, 148.47f, 1550.962f, 0.0f, 18.344f, 0.0f);
	*(&Local_0 + 240) = { -415.8964f, 152.043f, 1603.051f };
	*(&Local_0 + 240 + 12) = { 0.0f, 283.8603f, 0.0f };
	Local_0.f_264 = CREATE_POINT_IN_LAYOUT(Local_0, "mtp_f_merc_giver", -415.8964f, 152.043f, 1603.051f, 0.0f, 283.8603f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtpf_clear_bounty", -410.142f, 152.246f, 1603.021f, 0.0f, 110.2083f, 0.0f);
	*(&Local_0 + 268) = { -412.3942f, 152.2606f, 1604.294f };
	*(&Local_0 + 268 + 12) = { 0.0f, 18.68623f, 0.0f };
	Local_0.f_292 = CREATE_POINT_IN_LAYOUT(Local_0, "mtpf_interiorPoint_train", -412.3942f, 152.2606f, 1604.294f, 0.0f, 18.68623f, 0.0f);
	*(&Local_0 + 296) = { -443.7186f, 153.5825f, 1670.733f };
	*(&Local_0 + 296 + 12) = { 0.0f, -40.65596f, 0.0f };
	Local_0.f_320 = CREATE_POINT_IN_LAYOUT(Local_0, "mtpf_interiorPoint_house", -443.7186f, 153.5825f, 1670.733f, 0.0f, -40.65596f, 0.0f);
	*(&Local_0 + 324) = { -450.457f, 153.6398f, 1622.386f };
	*(&Local_0 + 324 + 12) = { 0.0f, -73.56581f, 0.0f };
	Local_0.f_348 = CREATE_POINT_IN_LAYOUT(Local_0, "mtpf_interiorPoint_store", -450.457f, 153.6398f, 1622.386f, 0.0f, -73.56581f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos1", -438.92f, 152.501f, 1578.528f, -3.163f, -125.189f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos2", -406.784f, 152.805f, 1584.935f, 0.803f, 161.82f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos3", -412.308f, 150.886f, 1500.399f, 6.689f, 152.501f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos4", -442.073f, 165.451f, 1710.445f, -10.302f, 26.831f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos5", -414.191f, 159.153f, 1670.796f, -12.885f, 15.472f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos6", -429.409f, 154.315f, 1625.182f, -3.736f, 57.946f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos7", -416.24f, 154.064f, 1610.48f, -7.286f, -5.064f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos8", -441.808f, 156.897f, 1684.545f, -4.498f, -13.347f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos9", -459.1f, 151.26f, 1541.848f, 3.86f, 169.793f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "mtp_vista_cam_pos10", -409.687f, 155.93f, 1592.663f, -12.558f, 144.192f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "player_shop_flag", -409.2896f, 152.246f, 1602.707f, 0.0f, -71.32724f, 0.0f);
	*(&Local_0 + 352) = { -444.1791f, 153.5885f, 1669.92f };
	*(&Local_0 + 352 + 12) = { 0.0f, -47.09195f, 0.0f };
	Local_0.f_376 = CREATE_POINT_IN_LAYOUT(Local_0, "mtpf_interiorSettlement01", -444.1791f, 153.5885f, 1669.92f, 0.0f, -47.09195f, 0.0f);
	*(&Local_0 + 380) = { -451.759f, 153.6398f, 1620.574f };
	*(&Local_0 + 380 + 12) = { 0.0f, -88.73708f, 0.0f };
	Local_0.f_404 = CREATE_POINT_IN_LAYOUT(Local_0, "mtpf_interiorSettlement02", -451.759f, 153.6398f, 1620.574f, 0.0f, -88.73708f, 0.0f);
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x3B8C / 15244
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

var Function_65() //Position: 0x3BD5 / 15317
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(bool bParam0, var uParam1) //Position: 0x3BEA / 15338
{
	if (!Function_54(128))
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

