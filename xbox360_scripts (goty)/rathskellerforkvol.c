//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 234
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<573> Local_0 = { 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_144 = 0;
	Local_145 = { StackVal, ScriptParam_0 };
	Function_65("Initializing Rathskeller Fork Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_147 = 500;
		uLocal_148 = Function_64();
		switch (iLocal_144)
		{
			case 0x00000000:
				if (Function_62())
				{
					bLocal_180 = Function_61(Local_0, "rathskellerFork", ScriptParam_0);
					iLocal_144 = 1;
				}
				bLocal_147 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_180))
				{
					iLocal_144 = 2;
				}
				bLocal_147 = false;
				break;
			
			case 0x00000002:
				Function_60(&iLocal_149);
				Function_59(&iLocal_149, &iLocal_152, 4, Local_0.f_16, 4294967295, 4);
				Function_59(&iLocal_149, &iLocal_152, 5, Local_0.f_280, 4294967295, 266);
				Function_59(&iLocal_149, &iLocal_152, 5, Local_0.f_264, 4294967295, 258);
				Function_59(&iLocal_149, &iLocal_152, 5, Local_0.f_232, 4294967295, 266);
				Function_59(StackVal, &iLocal_149, &iLocal_152, 5, 4294967295, 266);
				Function_59(&iLocal_149, &iLocal_152, 5, Local_0.f_12, 4294967295, 266);
				Function_59(StackVal, &iLocal_149, &iLocal_152, 5, 4294967295, 266);
				Function_59(&iLocal_149, &iLocal_152, 5, Local_0.f_236, 4294967295, 266);
				Function_59(&iLocal_149, &iLocal_152, 5, Local_0.f_284, 4294967295, 0x1000000);
				Function_57(&bLocal_181, bLocal_180, "saloon01", 5, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_264, 0, 1);
				Function_57(&bLocal_181, bLocal_180, "bunkHouse01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "bunkHouse01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "bunkHouse01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "bunkHouse01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "saloon01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "saloon01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "saloon01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "saloon01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_181, bLocal_180, "saloon01", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_144 = 3;
				bLocal_147 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_145]), 16);
				Function_55("Finished Initializing Rathskeller Fork Volumes", 5.0f);
				iLocal_144 = 4;
				break;
			
			case 0x00000004:
				Function_17(&iLocal_149, &iLocal_152, uLocal_148, ScriptParam_0);
				Function_12(&bLocal_181, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_147);
	}
	Function_4(&iLocal_149, &iLocal_152);
	Function_3(&bLocal_181);
	Function_2();
	Function_1(&(Global_29008[Local_145]), 16);
	Function_55("Unloaded Rathskeller Fork Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x361 / 865
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x378 / 888
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x383 / 899
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

void Function_4(var uParam0, int iParam1) //Position: 0x3DD / 989
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x435 / 1077
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x51B / 1307
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

void Function_7() //Position: 0x694 / 1684
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x6A0 / 1696
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

void Function_9(int iParam0) //Position: 0x6E6 / 1766
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

void Function_10(var uParam0, int iParam1) //Position: 0x72C / 1836
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x746 / 1862
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x763 / 1891
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
							if (IS_ACTOR_IN_VOLUME(Function_64(), uParam0[iVar05]->f_12))
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
							if (IS_ACTOR_IN_VOLUME(Function_64(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_64(), uParam0[iVar05]->f_12))
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

void Function_13(var uParam0, int iParam1) //Position: 0xB2F / 2863
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xB40 / 2880
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xB5A / 2906
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xB6C / 2924
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xB75 / 2933
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xBF6 / 3062
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

void Function_19(int iParam0) //Position: 0x100F / 4111
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

float Function_20(int iParam0) //Position: 0x110E / 4366
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x114B / 4427
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x1184 / 4484
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

var Function_23(int iParam0) //Position: 0x11EB / 4587
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1243 / 4675
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1463 / 5219
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

var Function_26() //Position: 0x1A90 / 6800
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1A98 / 6808
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1AA9 / 6825
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1B9E / 7070
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1BB7 / 7095
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1C1C / 7196
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1C2E / 7214
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

int Function_33(int iParam0) //Position: 0x1D5E / 7518
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1D6D / 7533
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1F07 / 7943
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

void Function_36(var uParam0, int iParam1) //Position: 0x214B / 8523
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x2158 / 8536
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x217E / 8574
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x219A / 8602
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

void Function_40() //Position: 0x242A / 9258
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x248D / 9357
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

bool Function_42(bool bParam0) //Position: 0x24BC / 9404
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

int Function_43(int iParam0) //Position: 0x2532 / 9522
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2543 / 9539
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

bool Function_45(int iParam0) //Position: 0x255C / 9564
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2572 / 9586
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2587 / 9607
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x25A5 / 9637
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

bool Function_49(int iParam0) //Position: 0x2649 / 9801
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x265F / 9823
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2670 / 9840
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

void Function_52(int iParam0, int iParam1) //Position: 0x26E2 / 9954
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2707 / 9991
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

bool Function_54(int iParam0) //Position: 0x2724 / 10020
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x2740 / 10048
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

void Function_56(var uParam0, bool bParam1) //Position: 0x277E / 10110
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_57(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x278D / 10125
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_58(uParam0);
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

var Function_58(bool bParam0) //Position: 0x286C / 10348
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

void Function_59(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x289A / 10394
{
	if (*iParam0 >= (*iParam1 - 1))
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
	iParam1[*iParam03]->f_4 = bParam3;
	(*iParam1)[*iParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*iParam0++;
}

void Function_60(int iParam0) //Position: 0x2975 / 10613
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_61(bool bParam0, bool bParam1, int iParam2) //Position: 0x2984 / 10628
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_62() //Position: 0x29A3 / 10659
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("RathskellerFork_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_garden", 2, -3693.255f, 42.3148f, 2125.701f, 0.0f, 44.51831f, 0.0f, 9.925219f, 9.925219f, 9.925219f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_sty", 2, -3621.196f, 43.9767f, 2119.432f, 0.0f, -44.95447f, 0.0f, 8.86199f, 8.86199f, 14.07406f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_stable", 2, -3662.146f, 42.16473f, 2154.364f, 0.0f, 44.8574f, 0.0f, 18.53334f, 15.97864f, 20.40537f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_region", 2, -3657.196f, 42.16477f, 2124.0f, 0.0f, 44.51225f, 0.0f, 100.1779f, 100.1779f, 100.1779f);
	Local_0.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_crows_set");
	(*&Local_0 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -3667.996f, 50.28079f, 2128.001f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[0]);
	(*&Local_0 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -3663.123f, 50.28079f, 2153.339f, 0.0f, 20.0f, 0.0f, 12.97006f, 18.59737f, 11.29908f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[1]);
	(*&Local_0 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -3692.968f, 50.28079f, 2128.001f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[2]);
	(*&Local_0 + 20)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -3619.695f, 50.28079f, 2118.437f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[3]);
	(*&Local_0 + 20)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -3658.227f, 50.28079f, 2139.811f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[4]);
	(*&Local_0 + 20)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -3641.509f, 50.28079f, 2142.275f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[5]);
	(*&Local_0 + 20)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -3694.344f, 50.28079f, 2141.383f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[6]);
	(*&Local_0 + 20)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -3648.459f, 50.28079f, 2096.775f, 0.0f, 45.10091f, 0.0f, 12.58875f, 18.59737f, 18.2455f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[7]);
	(*&Local_0 + 20)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -3630.325f, 50.28079f, 2113.575f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[8]);
	(*&Local_0 + 20)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -3647.141f, 50.28079f, 2121.827f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[9]);
	(*&Local_0 + 20)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -3681.653f, 50.28079f, 2144.476f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[10]);
	(*&Local_0 + 20)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -3667.996f, 50.28079f, 2128.001f, 0.0f, 20.0f, 0.0f, 5.208708f, 18.59737f, 5.328751f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[11]);
	(*&Local_0 + 20)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -3677.346f, 67.70795f, 2111.989f, 0.0f, 43.88285f, 0.0f, 22.30366f, 44.16914f, 10.43942f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[12]);
	(*&Local_0 + 20)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -3618.137f, 55.39209f, 2104.0f, 0.0f, 42.34747f, 0.0f, 5.228905f, 32.45801f, 13.83174f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 20)[13]);
	Local_0.f_116 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_vultures_set");
	(*&Local_0 + 84)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder21", 3, -3645.254f, 62.21743f, 2068.658f, 0.0f, 20.0f, 0.0f, 10.21942f, 35.64838f, 10.42494f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 84)[0]);
	(*&Local_0 + 84)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, -3704.5f, 62.21743f, 2125.481f, 0.0f, 20.0f, 0.0f, 10.21942f, 35.64838f, 10.42494f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 84)[1]);
	(*&Local_0 + 84)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -3684.737f, 62.21743f, 2151.741f, 0.0f, 20.0f, 0.0f, 10.21942f, 35.64838f, 10.42494f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 84)[2]);
	(*&Local_0 + 84)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder17", 3, -3651.746f, 62.21743f, 2164.688f, 0.0f, 20.0f, 0.0f, 10.21942f, 35.64838f, 10.42494f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 84)[3]);
	(*&Local_0 + 84)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder18", 3, -3687.232f, 62.21743f, 2095.677f, 0.0f, 20.0f, 0.0f, 10.21942f, 35.64838f, 10.42494f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 84)[4]);
	(*&Local_0 + 84)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder19", 3, -3659.434f, 62.21743f, 2139.26f, 0.0f, 20.0f, 0.0f, 10.21942f, 35.64838f, 10.42494f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 84)[5]);
	(*&Local_0 + 84)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder20", 3, -3626.506f, 62.21743f, 2125.481f, 0.0f, 20.0f, 0.0f, 10.21942f, 35.64838f, 10.42494f);
	ADD_TO_VOLUME_SET(Local_0.f_116, (*&Local_0 + 84)[6]);
	Local_0.f_136 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_dogs_set");
	(*&Local_0 + 120)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder25", 3, -3668.338f, 42.57071f, 2127.185f, 0.0f, 41.02739f, 0.0f, 26.52049f, 10.58024f, 12.71264f);
	ADD_TO_VOLUME_SET(Local_0.f_136, (*&Local_0 + 120)[0]);
	(*&Local_0 + 120)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder49", 3, -3647.38f, 42.57071f, 2126.344f, 0.0f, -44.90509f, 0.0f, 18.74602f, 7.478643f, 8.985932f);
	ADD_TO_VOLUME_SET(Local_0.f_136, (*&Local_0 + 120)[1]);
	(*&Local_0 + 120)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder50", 3, -3633.482f, 42.57071f, 2116.284f, 0.0f, 42.50925f, 0.0f, 14.85578f, 5.926651f, 7.121143f);
	ADD_TO_VOLUME_SET(Local_0.f_136, (*&Local_0 + 120)[2]);
	Local_0.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_rabbits_set");
	(*&Local_0 + 140)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder33", 3, -3620.92f, 42.28122f, 2126.759f, 0.0f, 20.0f, 0.0f, 16.35258f, 16.35258f, 16.35258f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 140)[0]);
	(*&Local_0 + 140)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder29", 3, -3693.331f, 42.28122f, 2133.986f, 0.0f, 20.0f, 0.0f, 9.970144f, 9.970144f, 14.92122f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 140)[1]);
	Local_0.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_owls_set");
	(*&Local_0 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder30", 3, -3670.436f, 42.18943f, 2155.838f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 156)[0]);
	(*&Local_0 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder31", 3, -3615.168f, 42.18943f, 2121.688f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 156)[1]);
	(*&Local_0 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder32", 3, -3705.158f, 42.18943f, 2124f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 156)[2]);
	Local_0.f_200 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_snakes_set");
	(*&Local_0 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder38", 3, -3700.949f, 42.34898f, 2122.962f, 0.0f, 20.0f, 0.0f, 3.610236f, 3.421223f, 2.652358f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 176)[0]);
	(*&Local_0 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder34", 3, -3613.97f, 42.34898f, 2128.212f, 0.0f, 20.0f, 0.0f, 3.610236f, 3.421223f, 2.652358f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 176)[1]);
	(*&Local_0 + 176)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder35", 3, -3666.562f, 42.34898f, 2163.008f, 0.0f, 20.0f, 0.0f, 3.610236f, 3.421223f, 2.652358f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 176)[2]);
	(*&Local_0 + 176)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder36", 3, -3643.612f, 42.34898f, 2083.865f, 0.0f, 20.0f, 0.0f, 3.610236f, 3.421223f, 2.652358f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 176)[3]);
	(*&Local_0 + 176)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder37", 3, -3640.333f, 42.34898f, 2153.589f, 0.0f, 20.0f, 0.0f, 3.610236f, 3.421223f, 2.652358f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 176)[4]);
	Local_0.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_raccoons_set");
	(*&Local_0 + 204)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder43", 3, -3695.979f, 42.23679f, 2136.317f, 0.0f, 20.0f, 0.0f, 4.824193f, 10.8969f, 5.528018f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 204)[0]);
	(*&Local_0 + 204)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder39", 3, -3683.682f, 42.23679f, 2096.461f, 0.0f, 20.0f, 0.0f, 4.824193f, 10.8969f, 5.528018f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 204)[1]);
	(*&Local_0 + 204)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder40", 3, -3638.214f, 42.23679f, 2149.041f, 0.0f, 20.0f, 0.0f, 4.824193f, 10.8969f, 5.528018f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 204)[2]);
	(*&Local_0 + 204)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder41", 3, -3611.295f, 42.23679f, 2121.366f, 0.0f, 20.0f, 0.0f, 4.824193f, 10.8969f, 5.528018f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 204)[3]);
	(*&Local_0 + 204)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder42", 3, -3648.867f, 42.23679f, 2074.036f, 0.0f, 20.0f, 0.0f, 4.824193f, 10.8969f, 5.528018f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 204)[4]);
	Local_0.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nratv_bunk", 2, -3682.061f, 42.5698f, 2111.87f, 0.0f, 45.59922f, 0.0f, 25.31392f, 9.060952f, 8.177214f);
	Local_0.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nratv_Dine", 2, -3668.304f, 43.94373f, 2102.041f, 0.0f, -46.31173f, 0.0f, 11.99691f, 6.113931f, 7.192955f);
	Local_0.f_252 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_Whores_set");
	(*&Local_0 + 240)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_Whores01", 2, -3646.066f, 42.56909f, 2101.388f, 0.0f, -44.76482f, 0.0f, 25.06916f, 14.2938f, 19.08414f);
	ADD_TO_VOLUME_SET(Local_0.f_252, (*&Local_0 + 240)[0]);
	(*&Local_0 + 240)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_Whores02", 2, -3655.999f, 42.56909f, 2088.728f, 0.0f, -44.76482f, 0.0f, 6.673093f, 14.2938f, 3.680476f);
	ADD_TO_VOLUME_SET(Local_0.f_252, (*&Local_0 + 240)[1]);
	Local_0.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_HorseShoePit", 2, -3662.472f, 43.93107f, 2134.971f, 0.0f, 135.107f, 0.0f, 6.81608f, 6.964901f, 16.74516f);
	Local_0.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_BlackJack", 2, -3640.298f, 43.93376f, 2104.451f, 0.0f, 133.1409f, 0.0f, 4.37964f, 2.965514f, 3.916286f);
	Local_0.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_players_room", 2, -3652.793f, 44.6935f, 2085.093f, 0.0f, 45.59922f, 0.0f, 4.759793f, 5.430603f, 6.321949f);
	Local_0.f_280 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_main_set");
	(*&Local_0 + 268)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_main01", 2, -3645.046f, 42.56982f, 2099.732f, 0.0f, -45.05889f, 0.0f, 25.56203f, 13.85471f, 14.44504f);
	ADD_TO_VOLUME_SET(Local_0.f_280, (*&Local_0 + 268)[0]);
	(*&Local_0 + 268)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_main02", 2, -3657.712f, 42.56982f, 2090.174f, 0.0f, -45.05889f, 0.0f, 7.878011f, 13.85471f, 9.139983f);
	ADD_TO_VOLUME_SET(Local_0.f_280, (*&Local_0 + 268)[1]);
	Local_0.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_corall", 2, -3651.32f, 42.16473f, 2143.592f, 0.0f, 44.8574f, 0.0f, 12.70692f, 15.97864f, 20.40537f);
	Local_0.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_horses", 2, -3657.382f, 42.16473f, 2149.623f, 0.0f, 44.8574f, 0.0f, 28.14958f, 15.02053f, 19.18183f);
	Local_0.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_chickens_set");
	(*&Local_0 + 292)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_chickens_01", 3, -3649.241f, 42.57071f, 2123.689f, 0.0f, -122.7184f, 0.0f, 7.975013f, 7.642354f, 15.51084f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 292)[0]);
	(*&Local_0 + 292)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_chickens_02", 3, -3664.541f, 42.57071f, 2123.689f, 0.0f, -48.57617f, 0.0f, 7.975013f, 7.642354f, 15.51084f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 292)[1]);
	Local_0.f_308 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_saloon", 2, -3646.287f, 44.28983f, 2100.976f, 0.0f, 135.6248f, 0.0f, 24.87583f, 4.187143f, 18.12609f);
	Local_0.f_320 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ratv_pigs_set");
	(*&Local_0 + 312)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ratv_pigs_01", 2, -3620.959f, 42.7423f, 2119.239f, 0.0f, 44.8574f, 0.0f, 10.96561f, 6.400937f, 7.425486f);
	ADD_TO_VOLUME_SET(Local_0.f_320, (*&Local_0 + 312)[0]);
	CREATE_POINT_IN_LAYOUT(Local_0, "ratf_report_crime_road", -3709.576f, 38.298f, 2180.219f, 0.0f, 134.997f, 0.0f);
	*(&Local_0 + 324) = { -3679.57f, 42.76945f, 2116.521f };
	*(&Local_0 + 324 + 12) = { 0.0f, 46.5f, 0.0f };
	Local_0.f_348 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_merc_giver", -3679.57f, 42.76945f, 2116.521f, 0.0f, 46.5f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ratf_report_crime_road1", -3600.961f, 33.418f, 2198.256f, 0.0f, 261.738f, 0.0f);
	*(&Local_0 + 352) = { -3660.212f, 42.212f, 2118.864f };
	*(&Local_0 + 352 + 12) = { 0.0f, 234.371f, 0.0f };
	Local_0.f_376 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_playerDuel1", -3660.212f, 42.212f, 2118.864f, 0.0f, 234.371f, 0.0f);
	*(&Local_0 + 380) = { -3653.307f, 42.189f, 2124.016f };
	*(&Local_0 + 380 + 12) = { 0.0f, 54.53135f, 0.0f };
	Local_0.f_404 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_enDuel1", -3653.307f, 42.189f, 2124.016f, 0.0f, 54.53135f, 0.0f);
	*(&Local_0 + 408) = { -3688.435f, 42.97049f, 2118.117f };
	*(&Local_0 + 408 + 12) = { 0.0f, -135.7672f, 0.0f };
	Local_0.f_432 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_interiorPoint_room", -3688.435f, 42.97049f, 2118.117f, 0.0f, -135.7672f, 0.0f);
	*(&Local_0 + 436) = { -3681.78f, 42.8261f, 2111.366f };
	*(&Local_0 + 436 + 12) = { 0.0f, -128.9299f, 0.0f };
	Local_0.f_460 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_interiorPoint_room1", -3681.78f, 42.8261f, 2111.366f, 0.0f, -128.9299f, 0.0f);
	*(&Local_0 + 464) = { -3676.121f, 42.84285f, 2105.66f };
	*(&Local_0 + 464 + 12) = { 0.0f, -133.9488f, 0.0f };
	Local_0.f_488 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_interiorPoint_room2", -3676.121f, 42.84285f, 2105.66f, 0.0f, -133.9488f, 0.0f);
	*(&Local_0 + 492) = { -3665.583f, 42.97049f, 2104.722f };
	*(&Local_0 + 492 + 12) = { 0.0f, 133.635f, 0.0f };
	Local_0.f_516 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_interiorPoint_kitchen", -3665.583f, 42.97049f, 2104.722f, 0.0f, 133.635f, 0.0f);
	*(&Local_0 + 520) = { -3640.909f, 42.81192f, 2108.583f };
	*(&Local_0 + 520 + 12) = { 0.0f, 133.3033f, 0.0f };
	Local_0.f_544 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_interiorPoint_saloon", -3640.909f, 42.81192f, 2108.583f, 0.0f, 133.3033f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos1", -3537.666f, 51.095f, 2197.576f, -8.571f, 74.576f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos2", -3740.636f, 66.742f, 2234.344f, -3.548f, -35.045f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos3", -3790.722f, 35.46f, 2374.584f, -3.846f, -38.871f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos4", -3517.717f, 27.906f, 2478.56f, -0.879f, 29.392f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos5", -3637.22f, 53.512f, 2077.482f, -19.611f, -165.941f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos6", -3661.797f, 50.852f, 2099.953f, -21.407f, -175.593f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos7", -3696.647f, 42.663f, 2145.779f, 8.18f, -94.142f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos8", -3625.752f, 43.288f, 2128.093f, -4.06f, 86.964f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos9", -3658.883f, 43.521f, 2119.656f, -5.587f, -41.994f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rat_vista_cam_pos10", -3680.953f, 43.298f, 2146.535f, 6.062f, -88.992f, 0.0f);
	*(&Local_0 + 548) = { -3642.582f, 42.81192f, 2103.989f };
	*(&Local_0 + 548 + 12) = { 0.0f, 171.5513f, 0.0f };
	Local_0.f_572 = CREATE_POINT_IN_LAYOUT(Local_0, "ratf_interiorSettlement01", -3642.582f, 42.81192f, 2103.989f, 0.0f, 171.5513f, 0.0f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x41B7 / 16823
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

var Function_64() //Position: 0x4200 / 16896
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(bool bParam0, var uParam1) //Position: 0x4215 / 16917
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

