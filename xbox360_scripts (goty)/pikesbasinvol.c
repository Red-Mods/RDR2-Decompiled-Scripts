//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 323
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<1185> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_297 = 0;
	Local_298 = { StackVal, ScriptParam_0 };
	Function_65("Initializing PikesBasin Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_300 = 500;
		uLocal_301 = Function_64();
		switch (iLocal_297)
		{
			case 0x00000000:
				if (Function_62())
				{
					bLocal_309 = Function_61(Local_0, "pikesBasin", ScriptParam_0);
					iLocal_297 = 1;
				}
				bLocal_300 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_309))
				{
					iLocal_297 = 2;
				}
				bLocal_300 = false;
				break;
			
			case 0x00000002:
				Function_60(&uLocal_302);
				Function_59(&uLocal_302, &uLocal_305, 4, Local_0.f_92, 4294967295, 4);
				Function_57(&bLocal_310, bLocal_309, "placement03", 1, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_310, bLocal_309, "placement03", 2, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				iLocal_297 = 3;
				bLocal_300 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_298]), 16);
				Function_55("Finished Initializing PikesBasin Volumes", 5.0f);
				iLocal_297 = 4;
				bLocal_300 = false;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_302, &uLocal_305, uLocal_301, ScriptParam_0);
				Function_12(&bLocal_310, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_300 = false;
				break;
		}
		WAIT(bLocal_300);
	}
	Function_4(&uLocal_302, &uLocal_305);
	Function_3(&bLocal_310);
	Function_2();
	Function_1(&(Global_29008[Local_298]), 16);
	Function_55("Unloaded PikesBasin Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1DF / 479
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x1F6 / 502
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x201 / 513
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

void Function_4(var uParam0, int iParam1) //Position: 0x25B / 603
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x2B3 / 691
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x399 / 921
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

void Function_7() //Position: 0x512 / 1298
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x51E / 1310
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

void Function_9(int iParam0) //Position: 0x564 / 1380
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

void Function_10(var uParam0, int iParam1) //Position: 0x5AA / 1450
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x5C4 / 1476
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x5E1 / 1505
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

void Function_13(var uParam0, int iParam1) //Position: 0x9AD / 2477
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x9BE / 2494
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0x9D8 / 2520
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0x9EA / 2538
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x9F3 / 2547
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xA74 / 2676
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

void Function_19(int iParam0) //Position: 0xE8D / 3725
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

float Function_20(int iParam0) //Position: 0xF8C / 3980
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0xFC9 / 4041
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x1002 / 4098
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

var Function_23(int iParam0) //Position: 0x1069 / 4201
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x10C1 / 4289
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x12E1 / 4833
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

var Function_26() //Position: 0x190E / 6414
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1916 / 6422
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1927 / 6439
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1A1C / 6684
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A35 / 6709
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1A9A / 6810
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AAC / 6828
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

int Function_33(int iParam0) //Position: 0x1BDC / 7132
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1BEB / 7147
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1D85 / 7557
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

void Function_36(var uParam0, int iParam1) //Position: 0x1FC9 / 8137
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x1FD6 / 8150
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x1FFC / 8188
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2018 / 8216
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

void Function_40() //Position: 0x22A8 / 8872
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x230B / 8971
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

bool Function_42(bool bParam0) //Position: 0x233A / 9018
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

int Function_43(int iParam0) //Position: 0x23B0 / 9136
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x23C1 / 9153
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

bool Function_45(int iParam0) //Position: 0x23DA / 9178
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x23F0 / 9200
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2405 / 9221
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2423 / 9251
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

bool Function_49(int iParam0) //Position: 0x24C7 / 9415
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x24DD / 9437
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x24EE / 9454
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

void Function_52(int iParam0, int iParam1) //Position: 0x2560 / 9568
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2585 / 9605
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

bool Function_54(int iParam0) //Position: 0x25A2 / 9634
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x25BE / 9662
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

void Function_56(var uParam0, bool bParam1) //Position: 0x25FC / 9724
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_57(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x260B / 9739
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

var Function_58(bool bParam0) //Position: 0x26EA / 9962
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

void Function_59(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x2718 / 10008
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

void Function_60(int iParam0) //Position: 0x27F3 / 10227
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_61(bool bParam0, bool bParam1, int iParam2) //Position: 0x2802 / 10242
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_62() //Position: 0x2821 / 10273
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("PikesBasin_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("PikesBasin_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_mainCamp", 3, -1184.0f, 71.15549f, 2368.0f, 0.0f, 20.0f, 0.0f, 61.2633f, 7.055838f, 61.2633f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_frontCamp", 2, -1492f, 77.30194f, 2284.0f, 0.0f, -37.00174f, 0.0f, 27.16722f, 9.528339f, 49.98577f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_rearCamp", 2, -1241.257f, 75.29413f, 2524.0f, 0.0f, -52.11494f, 0.0f, 21.11902f, 10.19565f, 24.55204f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_frontEntrance", 2, -1570.658f, 54.21176f, 2445.341f, 0.0f, -24.31298f, 0.0f, 126.147f, 50.54607f, 32.83506f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_sideEntrance", 2, -1417.649f, 75.29407f, 2216.0f, 0.0f, -25.64609f, 0.0f, 92.22437f, 22.64749f, 59.08257f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_rearEntrance", 2, -1248f, 76.17362f, 2200.42f, 0.0f, 0.0f, 0.0f, 147.181f, 40.22329f, 74.5377f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "npikv_cows", 3, -1160.0f, 76.90833f, 2364.0f, 0.0f, 25.87671f, 0.0f, 10.6484f, 9.548534f, 22.79478f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd1", 3, -1265.924f, 73.36777f, 2374.241f, 0.0f, 20.0f, 0.0f, 11.28927f, 2.855856f, 13.91433f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd2S", 3, -1268f, 70.62715f, 2511.641f, 0.0f, 20.0f, 0.0f, 12.27347f, 5.03131f, 9.814897f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd3S", 3, -1318.041f, 73.24526f, 2464.0f, 0.0f, 20.0f, 0.0f, 8.607511f, 4.165802f, 8.607511f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd4S", 3, -1410.058f, 69.50085f, 2465.489f, 0.0f, 20.0f, 0.0f, 12.0182f, 4.372542f, 12.0182f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd5S", 3, -1636.0f, 54.85595f, 2404.0f, 0.0f, 20.0f, 0.0f, 10.92976f, 5.245457f, 10.92976f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd2W", 3, -1304.484f, 75.64933f, 2296.606f, 0.0f, 20.0f, 0.0f, 11.79411f, 2.40899f, 11.79411f);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd3W", 3, -1275.885f, 81.60573f, 2210.959f, 0.0f, 20.0f, 0.0f, 12.31625f, 4.221325f, 12.31625f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd4W", 3, -1263.512f, 81.56133f, 2130.4f, 0.0f, 20.0f, 0.0f, 13.93741f, 3.112746f, 13.93741f);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_herd5W", 3, -1188.0f, 100.8656f, 2108.0f, 0.0f, 20.0f, 0.0f, 12.09849f, 3.426718f, 12.82152f);
	Local_0.f_92 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "pikv_region_set");
	(*&Local_0 + 68)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_regionPt1", 3, -1182.797f, 105.4117f, 2383.503f, 0.0f, 4.525908f, 0.0f, 181.1545f, 42.2145f, 155.4394f);
	ADD_TO_VOLUME_SET(Local_0.f_92, (*&Local_0 + 68)[0]);
	(*&Local_0 + 68)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_regionPt2", 3, -1336f, 99.38818f, 2388f, 0.0f, 28.38053f, 0.0f, 136.5411f, 45.0608f, 242.5775f);
	ADD_TO_VOLUME_SET(Local_0.f_92, (*&Local_0 + 68)[1]);
	(*&Local_0 + 68)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_regionPt3", 3, -1467.26f, 107.4196f, 2289.159f, 0.0f, 2.208116f, 0.0f, 89.98856f, 43.74128f, 130.7533f);
	ADD_TO_VOLUME_SET(Local_0.f_92, (*&Local_0 + 68)[2]);
	(*&Local_0 + 68)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_regionPt4", 3, -1446.288f, 98.41412f, 2432.0f, 0.0f, -0.662532f, 0.0f, 176.8189f, 50.68403f, 135.3661f);
	ADD_TO_VOLUME_SET(Local_0.f_92, (*&Local_0 + 68)[3]);
	(*&Local_0 + 68)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_regionPt5", 3, -1255.571f, 96.37646f, 2195.486f, 0.0f, -19.92404f, 0.0f, 112.7595f, 38.20158f, 127.4607f);
	ADD_TO_VOLUME_SET(Local_0.f_92, (*&Local_0 + 68)[4]);
	Local_0.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_sniperVol1", 2, -1431.687f, 68.26666f, 2337.229f, 0.0f, 0.0f, 0.0f, 32.56687f, 32.56687f, 32.56687f);
	Local_0.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_sniperVol2", 2, -1334.333f, 72.19832f, 2438.873f, 0.0f, 0.0f, 0.0f, 24.7137f, 24.7137f, 24.7137f);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_sniperVol4", 2, -1266.286f, 71.27841f, 2370.665f, 0.0f, 0.0f, 0.0f, 29.27202f, 29.27202f, 29.27202f);
	Local_0.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_sniperVol6", 2, -1272.0f, 80.31372f, 2232.0f, 0.0f, 0.0f, 0.0f, 21.62363f, 21.62363f, 21.62363f);
	Local_0.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pikv_birdVol", 2, -1366.694f, 98.38428f, 2321.545f, 0.0f, 0.0f, 0.0f, 554.1157f, 129.9182f, 506.1577f);
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "pik_null", 2, -1377.36f, 80.7264f, 2325.321f, 0.0f, 0.0f, 0.0f, 490.557f, 25.34851f, 466.9521f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_HerdStayInVolume", 2, -1165.223f, 76.64006f, 2358.879f, 0.0f, 28.2909f, 0.0f, 12.31165f, 12.31165f, 12.31165f);
	*(&Local_0 + 124) = { -1164.0f, 76.39863f, 2362.823f };
	*(&Local_0 + 124 + 12) = { 0.0f, 178.5656f, 0.0f };
	Local_0.f_148 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_cattle01", -1164.0f, 76.39863f, 2362.823f, 0.0f, 178.5656f, 0.0f);
	*(&Local_0 + 152) = { -1164.0f, 77.30194f, 2356.0f };
	*(&Local_0 + 152 + 12) = { 0.0f, -44.54999f, 0.0f };
	Local_0.f_176 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_cattle02", -1164.0f, 77.30194f, 2356.0f, 0.0f, -44.54999f, 0.0f);
	*(&Local_0 + 180) = { -1169.238f, 76.29799f, 2360f };
	*(&Local_0 + 180 + 12) = { 0.0f, 175.6531f, 0.0f };
	Local_0.f_204 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_cattle03", -1169.238f, 76.29799f, 2360f, 0.0f, 175.6531f, 0.0f);
	*(&Local_0 + 208) = { -1168.0f, 76.29803f, 2356.0f };
	*(&Local_0 + 208 + 12) = { 0.0f, 102.0492f, 0.0f };
	Local_0.f_232 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_cattle04", -1168.0f, 76.29803f, 2356.0f, 0.0f, 102.0492f, 0.0f);
	*(&Local_0 + 236) = { -1160.564f, 77.20857f, 2360f };
	*(&Local_0 + 236 + 12) = { 0.0f, -75.61409f, 0.0f };
	Local_0.f_260 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_cattle05", -1160.564f, 77.20857f, 2360f, 0.0f, -75.61409f, 0.0f);
	*(&Local_0 + 264) = { -1470.589f, 72.28235f, 2449.371f };
	*(&Local_0 + 264 + 12) = { 0.0f, 117.6616f, 0.0f };
	Local_0.f_288 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_frontSniperspawn1", -1470.589f, 72.28235f, 2449.371f, 0.0f, 117.6616f, 0.0f);
	*(&Local_0 + 292) = { -1440.0f, 73.28625f, 2432f };
	*(&Local_0 + 292 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_316 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_frontSniperspawn2", -1440.0f, 73.28625f, 2432f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 320) = { -1244.0f, 75.29413f, 2524.0f };
	*(&Local_0 + 320 + 12) = { 0.0f, 102.8329f, 0.0f };
	Local_0.f_344 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_rearCamp", -1244.0f, 75.29413f, 2524.0f, 0.0f, 102.8329f, 0.0f);
	*(&Local_0 + 348) = { -1204.0f, 75.29407f, 2360f };
	*(&Local_0 + 348 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_372 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_mainCamp1", -1204.0f, 75.29407f, 2360f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 376) = { -1196f, 75.29413f, 2380.0f };
	*(&Local_0 + 376 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_400 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_mainCamp2", -1196f, 75.29413f, 2380.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 404) = { -1492f, 77.30194f, 2280.0f };
	*(&Local_0 + 404 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_428 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_frontCamp", -1492f, 77.30194f, 2280.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 432) = { -1380f, 96.64539f, 2344.0f };
	*(&Local_0 + 432 + 12) = { 0.0f, 101.6435f, 0.0f };
	Local_0.f_456 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn1", -1380f, 96.64539f, 2344.0f, 0.0f, 101.6435f, 0.0f);
	*(&Local_0 + 460) = { -1324.0f, 85.06384f, 2428.0f };
	*(&Local_0 + 460 + 12) = { 0.0f, 118.3112f, 0.0f };
	Local_0.f_484 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn2", -1324.0f, 85.06384f, 2428.0f, 0.0f, 118.3112f, 0.0f);
	*(&Local_0 + 488) = { -1302.267f, 81.31763f, 2474.01f };
	*(&Local_0 + 488 + 12) = { 0.0f, 99.85857f, 0.0f };
	Local_0.f_512 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn3", -1302.267f, 81.31763f, 2474.01f, 0.0f, 99.85857f, 0.0f);
	*(&Local_0 + 516) = { -1282.357f, 88.5537f, 2347.931f };
	*(&Local_0 + 516 + 12) = { 0.0f, 91.82206f, 0.0f };
	Local_0.f_540 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn4", -1282.357f, 88.5537f, 2347.931f, 0.0f, 91.82206f, 0.0f);
	*(&Local_0 + 544) = { -1252.428f, 83.77627f, 2412.293f };
	*(&Local_0 + 544 + 12) = { 0.0f, 119.4369f, 0.0f };
	Local_0.f_568 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn5", -1252.428f, 83.77627f, 2412.293f, 0.0f, 119.4369f, 0.0f);
	*(&Local_0 + 572) = { -1282.4f, 86.33722f, 2240.858f };
	*(&Local_0 + 572 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_596 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn6", -1282.4f, 86.33722f, 2240.858f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 600) = { -1320.199f, 81.8972f, 2284.0f };
	*(&Local_0 + 600 + 12) = { 5.203292f, -82.78986f, -5.940474f };
	Local_0.f_624 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn7", -1320.199f, 81.8972f, 2284.0f, 5.203292f, -82.78986f, -5.940474f);
	*(&Local_0 + 628) = { -1382.168f, 94.86456f, 2380.0f };
	*(&Local_0 + 628 + 12) = { 0.0f, 74.884f, 0.0f };
	Local_0.f_652 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn8", -1382.168f, 94.86456f, 2380.0f, 0.0f, 74.884f, 0.0f);
	*(&Local_0 + 656) = { -1288.0f, 86.81006f, 2412.0f };
	*(&Local_0 + 656 + 12) = { 0.0f, 257.211f, 0.0f };
	Local_0.f_680 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn9", -1288.0f, 86.81006f, 2412.0f, 0.0f, 257.211f, 0.0f);
	*(&Local_0 + 684) = { -1287.631f, 87.14002f, 2379.814f };
	*(&Local_0 + 684 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_708 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn10", -1287.631f, 87.14002f, 2379.814f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 712) = { -1408f, 79.30975f, 2362.761f };
	*(&Local_0 + 712 + 12) = { 0.0f, -170.8678f, 0.0f };
	Local_0.f_736 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn11", -1408f, 79.30975f, 2362.761f, 0.0f, -170.8678f, 0.0f);
	*(&Local_0 + 740) = { -1424f, 74.29016f, 2448f };
	*(&Local_0 + 740 + 12) = { 0.0f, 236.357f, 0.0f };
	Local_0.f_764 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn12", -1424f, 74.29016f, 2448f, 0.0f, 236.357f, 0.0f);
	*(&Local_0 + 768) = { -1444f, 78.30585f, 2320f };
	*(&Local_0 + 768 + 12) = { 0.0f, -190.7021f, 0.0f };
	Local_0.f_792 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn13", -1444f, 78.30585f, 2320f, 0.0f, -190.7021f, 0.0f);
	*(&Local_0 + 796) = { -1420f, 81.31763f, 2232.0f };
	*(&Local_0 + 796 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_820 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn14", -1420f, 81.31763f, 2232.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 824) = { -1399.862f, 88.07746f, 2328.686f };
	*(&Local_0 + 824 + 12) = { 0.0f, -227.2424f, 0.0f };
	Local_0.f_848 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Sniperspawn15", -1399.862f, 88.07746f, 2328.686f, 0.0f, -227.2424f, 0.0f);
	*(&Local_0 + 852) = { -1376.0f, 70.27451f, 2432.0f };
	*(&Local_0 + 852 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_876 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Scout1", -1376.0f, 70.27451f, 2432.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 880) = { -1472.0f, 69.27057f, 2312.0f };
	*(&Local_0 + 880 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_904 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Scout2", -1472.0f, 69.27057f, 2312.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 908) = { -1272.0f, 72.28235f, 2372.0f };
	*(&Local_0 + 908 + 12) = { 3.714217f, 109.2532f, 4.755613f };
	Local_0.f_932 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Scout3", -1272.0f, 72.28235f, 2372.0f, 3.714217f, 109.2532f, 4.755613f);
	*(&Local_0 + 936) = { -1280f, 80.31372f, 2204.0f };
	*(&Local_0 + 936 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_960 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_Scout4", -1280f, 80.31372f, 2204.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 964) = { -1170.314f, 76.28771f, 2393.455f };
	*(&Local_0 + 964 + 12) = { 0.0f, 136.1637f, 0.0f };
	Local_0.f_988 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure1", -1170.314f, 76.28771f, 2393.455f, 0.0f, 136.1637f, 0.0f);
	*(&Local_0 + 992) = { -1214.233f, 75.21385f, 2358.934f };
	*(&Local_0 + 992 + 12) = { 0.0f, 134.4392f, 0.0f };
	Local_0.f_1016 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure2", -1214.233f, 75.21385f, 2358.934f, 0.0f, 134.4392f, 0.0f);
	*(&Local_0 + 1020) = { -1204.583f, 74.27067f, 2381.635f };
	*(&Local_0 + 1020 + 12) = { 0.0f, -124.3174f, 0.0f };
	Local_0.f_1044 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure3", -1204.583f, 74.27067f, 2381.635f, 0.0f, -124.3174f, 0.0f);
	*(&Local_0 + 1048) = { -1247.636f, 75.40601f, 2532.538f };
	*(&Local_0 + 1048 + 12) = { 0.0f, 1.96077f, 0.0f };
	Local_0.f_1072 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure4", -1247.636f, 75.40601f, 2532.538f, 0.0f, 1.96077f, 0.0f);
	*(&Local_0 + 1076) = { -1480f, 77.41215f, 2278.523f };
	*(&Local_0 + 1076 + 12) = { 0.0f, 86.90672f, 0.0f };
	Local_0.f_1100 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure5", -1480f, 77.41215f, 2278.523f, 0.0f, 86.90672f, 0.0f);
	*(&Local_0 + 1104) = { -1497.76f, 77.30194f, 2273.28f };
	*(&Local_0 + 1104 + 12) = { 0.0f, -143.879f, 0.0f };
	Local_0.f_1128 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure6", -1497.76f, 77.30194f, 2273.28f, 0.0f, -143.879f, 0.0f);
	*(&Local_0 + 1132) = { -1288.94f, 87.34119f, 2400.798f };
	*(&Local_0 + 1132 + 12) = { 0.0f, -98.86528f, 0.0f };
	Local_0.f_1156 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure7", -1288.94f, 87.34119f, 2400.798f, 0.0f, -98.86528f, 0.0f);
	*(&Local_0 + 1160) = { -1276.287f, 79.4239f, 2252.277f };
	*(&Local_0 + 1160 + 12) = { 0.0f, -126.1555f, 0.0f };
	Local_0.f_1184 = CREATE_POINT_IN_LAYOUT(Local_0, "pikf_AreaTreasure8", -1276.287f, 79.4239f, 2252.277f, 0.0f, -126.1555f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos1", -1223.061f, 105.588f, 2311.86f, -14.74f, 169.15f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos2", -1096.285f, 126.602f, 2357.243f, -19.674f, 98.291f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos3", -1308.379f, 101.674f, 2264.431f, -11.431f, -175.675f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos4", -1326.642f, 88.242f, 2422.063f, -0.569f, 96.323f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos5", -1525.44f, 125.757f, 2440.716f, -20.792f, -88.074f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos6", -1328.178f, 74.674f, 2446.138f, 10.051f, -159.429f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos7", -1321.232f, 72.181f, 2333.797f, 14.204f, -132.402f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos8", -1263.093f, 72.458f, 2421.118f, 30.009f, 12.233f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos9", -1348.254f, 81.929f, 2449.316f, 4.305f, 64.484f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "pik_vista_cam_pos10", -1350.382f, 72.444f, 2431.035f, 16.02f, 98.856f, 0.0f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x3EB7 / 16055
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

var Function_64() //Position: 0x3F00 / 16128
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(bool bParam0, var uParam1) //Position: 0x3F15 / 16149
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

