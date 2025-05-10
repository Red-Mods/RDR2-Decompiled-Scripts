//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 153
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<469> Local_0 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_118 = 0;
	Local_119 = { StackVal, ScriptParam_0 };
	Function_65("Initializing AgaveViejo Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_121 = 500;
		uLocal_122 = Function_64();
		switch (iLocal_118)
		{
			case 0x00000000:
				if (Function_62())
				{
					cLocal_139 = Function_61(Local_0, "agaveViejo", ScriptParam_0);
					iLocal_118 = 1;
				}
				iLocal_121 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(cLocal_139))
				{
					iLocal_118 = 2;
				}
				iLocal_121 = 0;
				break;
			
			case 0x00000002:
				Function_60(&uLocal_123);
				Function_59(StackVal, &uLocal_123, &iLocal_126, 4, 4294967295, 4);
				Function_59(StackVal, &uLocal_123, &iLocal_126, 5, 4294967295, 131338);
				Function_59(&uLocal_123, &iLocal_126, 5, Local_0.f_20, 4294967295, 266);
				Function_59(&uLocal_123, &iLocal_126, 5, Local_0.f_216, 4294967295, 266);
				Function_57(&uLocal_140, cLocal_139, "house01", 99, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_196, 0, 0);
				Function_57(&uLocal_140, cLocal_139, "house01", 98, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_196, 0, 0);
				iLocal_118 = 3;
				iLocal_121 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_119]), 16);
				Function_55("Finished Initializing AgaveViejo Volumes", 5.0f);
				iLocal_118 = 4;
				iLocal_121 = 0;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_123, &iLocal_126, uLocal_122, ScriptParam_0);
				Function_12(&uLocal_140, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_121 = 0;
				break;
		}
		WAIT(iLocal_121);
	}
	Function_4(&uLocal_123, &iLocal_126);
	Function_3(&uLocal_140);
	Function_2();
	Function_1(&(Global_29008[Local_119]), 16);
	Function_55("Unloaded AgaveViejo Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x1EA / 490
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x201 / 513
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x20C / 524
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

void Function_4(var uParam0, int iParam1) //Position: 0x266 / 614
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_11(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(0);
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x2BE / 702
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_6(Global_16524, iVar0, 1);
	}
	return;
}

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0x3A4 / 932
{
	int iVar0;
	
	Function_9(iParam0);
	Function_8(iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, iParam1);
	Function_7();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(iParam1), 0);
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

void Function_7() //Position: 0x51D / 1309
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x529 / 1321
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(iParam0));
	return;
}

void Function_9(int iParam0) //Position: 0x56F / 1391
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

void Function_10(var uParam0, int iParam1) //Position: 0x5B5 / 1461
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x5CF / 1487
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x5EC / 1516
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

void Function_13(var uParam0, int iParam1) //Position: 0x9B8 / 2488
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x9C9 / 2505
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, int iParam1) //Position: 0x9E3 / 2531
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_16() //Position: 0x9F5 / 2549
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x9FE / 2558
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xA7F / 2687
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(uParam0))
	{
		return 0;
	}
	Function_1(&(Global_29008[iParam2]), 4194304);
	iVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (iVar0 != 0 && *uParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*uParam0)
	{
		case 0x00000005:
			if (iVar0 & 240 == 0)
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
			if (iVar0 & 32 >= 0)
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
			if (iVar0 & 16 >= 0)
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
						SET_CURRENT_MAP(0);
						Function_10(uParam0, 4);
					}
				}
			}
			if (iVar0 & 128 >= 0)
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
			if (iVar0 & 64 >= 0)
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

void Function_19(int iParam0) //Position: 0xE98 / 3736
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

float Function_20(int iParam0) //Position: 0xF97 / 3991
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0xFD4 / 4052
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, int iParam1) //Position: 0x100D / 4109
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, iParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

var Function_23(int iParam0) //Position: 0x1074 / 4212
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

int Function_24(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x10CC / 4300
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(iParam1));
	Function_35(iParam0, TO_FLOAT(iParam1), 1);
	Function_34(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(iParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_25(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, int iParam7) //Position: 0x12EC / 4844
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				iVar5 = (FLOOR(fParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((fParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					iVar6 = FLOOR((fParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
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
			fParam2 = (fParam2 * 3.28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_21(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_21(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_30(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(iParam7), &Global_35278[iParam020] + 16, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_26(), &Var9);
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

var Function_26() //Position: 0x1919 / 6425
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1921 / 6433
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1932 / 6450
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1A27 / 6695
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A40 / 6720
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1AA5 / 6821
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AB7 / 6839
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

int Function_33(int iParam0) //Position: 0x1BE7 / 7143
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1BF6 / 7158
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1D90 / 7568
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

void Function_36(var uParam0, int iParam1) //Position: 0x1FD4 / 8148
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x1FE1 / 8161
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2007 / 8199
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2023 / 8227
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	var uVar5;
	
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
		uVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, uVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_40();
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

void Function_40() //Position: 0x22B3 / 8883
{
	char* cVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	cVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_41(cVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(cVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return;
}

void Function_41(char* cParam0, int iParam1) //Position: 0x2316 / 8982
{
	ITERATE_EVERYWHERE(cParam0);
	ITERATE_ON_OBJECT_TYPE(cParam0, 31);
	if (!iParam1 != "")
	{
		ITERATE_IN_SET(cParam0, iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(cParam0, GET_ITERATOR_PARENT(cParam0));
	}
	return;
}

bool Function_42(bool bParam0) //Position: 0x2345 / 9029
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

int Function_43(int iParam0) //Position: 0x23BB / 9147
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x23CC / 9164
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

bool Function_45(int iParam0) //Position: 0x23E5 / 9189
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x23FB / 9211
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2410 / 9232
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x242E / 9262
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

bool Function_49(int iParam0) //Position: 0x24D2 / 9426
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x24E8 / 9448
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x24F9 / 9465
{
	int iVar0;
	int iVar1;
	
	Function_9(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_6(StackVal, iVar1, bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x256B / 9579
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(uVar0);
	PRINTNL();
	Function_6(iParam0, uVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2590 / 9616
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

bool Function_54(int iParam0) //Position: 0x25AD / 9645
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0, float fParam1) //Position: 0x25C9 / 9673
{
	if (!Function_54(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, cParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x2607 / 9735
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_57(var uParam0, var uParam1, char* cParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2616 / 9750
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	char* cVar11;
	
	iVar0 = Function_58(uParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	cVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(cVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(cVar11);
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
		DECOR_SET_OBJECT(cVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_58(bool bParam0) //Position: 0x26F5 / 9973
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

void Function_59(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2723 / 10019
{
	if (*uParam0 >= (*iParam1 - 1))
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
	iParam1[*uParam03]->f_4 = bParam3;
	(*iParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_60(int iParam0) //Position: 0x27FE / 10238
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_61(var uParam0, var uParam1, int iParam2) //Position: 0x280D / 10253
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(uParam0, uParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_62() //Position: 0x282C / 10284
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("AgaveViejo_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_horse_stable", 2, -1510.148f, 16.7838f, 3881.823f, 0.0f, 21.08624f, 0.0f, 12.9644f, 4.959112f, 13.86193f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_region", 3, -1508.634f, 75.85341f, 3887.426f, 0.0f, 20.67154f, 0.0f, 86.70736f, 88.56378f, 81.77341f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_pop_back_garden", 2, -1472.078f, 17.97978f, 3912.005f, 0.0f, 77.32468f, 0.0f, 21.066f, 2.961159f, 6.442737f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_armwrestling", 2, -1471.557f, 16.95909f, 3948.552f, 0.0f, -17.14639f, 0.0f, 4.240116f, 6.963317f, 6.720604f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_Chicken_Coop", 2, -1526.024f, 15.84316f, 3891.246f, 0.0f, 114.5016f, 0.0f, 4.438082f, 2.127633f, 2.477744f);
	Local_0.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_chickens_set");
	(*&Local_0 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_chickens01", 3, -1524.949f, 14.59385f, 3895.908f, 0.0f, 20.0f, 0.0f, 9.763764f, 9.763764f, 14.78239f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 24)[0]);
	(*&Local_0 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_chickens02", 3, -1550.094f, 14.59385f, 3919.556f, 0.0f, -50.36686f, 0.0f, 9.763764f, 9.763764f, 8.905966f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 24)[1]);
	Local_0.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_cows_set");
	(*&Local_0 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_cows1", 3, -1537.602f, 18.44002f, 3859.716f, 0.0f, 375.9154f, 0.0f, 5.720008f, 7.828653f, 16.60756f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 40)[0]);
	(*&Local_0 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_cows2", 3, -1540.812f, 17.66426f, 3845.552f, 0.0f, -11.97972f, 0.0f, 13.46562f, 9.836412f, 8.054895f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 40)[1]);
	Local_0.f_64 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_goats_set");
	(*&Local_0 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_goats1", 3, -1506.458f, 15.91746f, 3848.323f, 0.0f, -12.63194f, 0.0f, 15.03105f, 15.03105f, 24.04045f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 56)[0]);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_duelStayOut", 2, -1536.409f, 15.255f, 3918.579f, 0.0f, -56.64089f, 0.0f, 13.85894f, 4.120975f, 5.832623f);
	Local_0.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_crows_set");
	(*&Local_0 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder92", 3, -1508f, 16.6025f, 3936.007f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[0]);
	(*&Local_0 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder78", 3, -1540f, 15.20233f, 3933.979f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[1]);
	(*&Local_0 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder79", 3, -1475.999f, 17.18465f, 3894.944f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[2]);
	(*&Local_0 + 72)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder80", 3, -1472f, 15.34259f, 3872.003f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[3]);
	(*&Local_0 + 72)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder81", 3, -1558.063f, 13.64018f, 3892.0f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[4]);
	(*&Local_0 + 72)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder82", 3, -1509.269f, 15.32784f, 3882.891f, 0.0f, 20.0f, 0.0f, 12.74465f, 20.64661f, 12.39604f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[5]);
	(*&Local_0 + 72)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder83", 3, -1523.787f, 14.72026f, 3899.792f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[6]);
	(*&Local_0 + 72)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder84", 3, -1515.853f, 14.03305f, 3854.196f, 0.0f, 20.0f, 0.0f, 9.85224f, 20.64661f, 11.62858f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[7]);
	Local_0.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_vultures_set");
	(*&Local_0 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder100", 3, -1532.241f, 14.68123f, 3955.624f, 0.0f, 20.0f, 0.0f, 9.064345f, 28.24898f, 7.620283f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 112)[0]);
	(*&Local_0 + 112)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder93", 3, -1557.011f, 13.62061f, 3884.0f, 0.0f, 20.0f, 0.0f, 9.064345f, 28.24898f, 7.620283f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 112)[1]);
	(*&Local_0 + 112)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder94", 3, -1486.888f, 16.54457f, 3949.404f, 0.0f, 20.0f, 0.0f, 9.064345f, 28.24898f, 7.620283f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 112)[2]);
	Local_0.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_rabbits_set");
	(*&Local_0 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder108", 3, -1543.439f, 14.89471f, 3900.464f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 132)[0]);
	(*&Local_0 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder101", 3, -1508f, 16.65686f, 3934.872f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 132)[1]);
	(*&Local_0 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder102", 3, -1460.323f, 17.2016f, 3912.65f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 132)[2]);
	(*&Local_0 + 132)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder103", 3, -1498.755f, 15.06869f, 3876.369f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 132)[3]);
	Local_0.f_184 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_snakes_set");
	(*&Local_0 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder118", 3, -1568f, 15.60049f, 3912.0f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 156)[0]);
	(*&Local_0 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder109", 3, -1512.237f, 15.78839f, 3947.094f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 156)[1]);
	(*&Local_0 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder110", 3, -1464f, 17.2016f, 3914.491f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 156)[2]);
	(*&Local_0 + 156)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder111", 3, -1561.693f, 14.68362f, 3861.693f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 156)[3]);
	(*&Local_0 + 156)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder112", 3, -1498.539f, 18.75533f, 3817.461f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 156)[4]);
	(*&Local_0 + 156)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder113", 3, -1548f, 13.47228f, 3956.0f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_0.f_184, (*&Local_0 + 156)[5]);
	Local_0.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_horses", 3, -1472.534f, 21.5306f, 3870.2f, 0.0f, 309.6622f, 0.0f, 15.24299f, 8.223124f, 21.56666f);
	Local_0.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_rebel_base", 3, -1465.587f, 16.54457f, 3946.578f, 0.0f, 23.56004f, 0.0f, 16.26669f, 9.438829f, 9.438829f);
	Local_0.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_rearyard", 2, -1473.367f, 19.07964f, 3912.941f, 0.0f, -10.13476f, 0.0f, 16.39485f, 8.008978f, 25.98338f);
	Local_0.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "agvv_house_set");
	(*&Local_0 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_house_01", 2, -1490.998f, 21.72215f, 3910.639f, 0.0f, -10.13476f, 0.0f, 27.45782f, 13.24517f, 17.54432f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 200)[0]);
	(*&Local_0 + 200)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_house_02", 2, -1485.953f, 17.30081f, 3900.914f, 0.0f, -10.13476f, 0.0f, 7.565873f, 13.24517f, 5.55812f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 200)[1]);
	(*&Local_0 + 200)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "agvv_house_03", 2, -1488.148f, 17.30081f, 3918.771f, 0.0f, -10.13476f, 0.0f, 14.48939f, 13.24517f, 5.55812f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 200)[2]);
	CREATE_POINT_IN_LAYOUT(Local_0, "agvf_report_crime_road", -1556.744f, 15.01978f, 3928.0f, 0.0f, 35.805f, 0.0f);
	*(&Local_0 + 220) = { -1506.978f, 17.416f, 3903.158f };
	*(&Local_0 + 220 + 12) = { 0.0f, 169.402f, 0.0f };
	Local_0.f_244 = CREATE_POINT_IN_LAYOUT(Local_0, "agvf_playerDuel1", -1506.978f, 17.416f, 3903.158f, 0.0f, 169.402f, 0.0f);
	*(&Local_0 + 248) = { -1508.817f, 17.416f, 3911.647f };
	*(&Local_0 + 248 + 12) = { 0.0f, 347.35f, 0.0f };
	Local_0.f_272 = CREATE_POINT_IN_LAYOUT(Local_0, "agvf_enDuel1", -1508.817f, 17.416f, 3911.647f, 0.0f, 347.35f, 0.0f);
	*(&Local_0 + 276) = { -1488.371f, 16.714f, 3831.624f };
	*(&Local_0 + 276 + 12) = { 0.0f, 99.391f, 0.0f };
	Local_0.f_300 = CREATE_POINT_IN_LAYOUT(Local_0, "agvf_playerDuel2", -1488.371f, 16.714f, 3831.624f, 0.0f, 99.391f, 0.0f);
	*(&Local_0 + 304) = { -1496.85f, 16.851f, 3832.796f };
	*(&Local_0 + 304 + 12) = { 0.0f, 276.975f, 0.0f };
	Local_0.f_328 = CREATE_POINT_IN_LAYOUT(Local_0, "agvf_enDuel2", -1496.85f, 16.851f, 3832.796f, 0.0f, 276.975f, 0.0f);
	*(&Local_0 + 332) = { -1501.599f, 17.70094f, 3908.122f };
	*(&Local_0 + 332 + 12) = { 0.0f, 79.95612f, 0.0f };
	Local_0.f_356 = CREATE_POINT_IN_LAYOUT(Local_0, "agvf_interiorPoint_house", -1501.599f, 17.70094f, 3908.122f, 0.0f, 79.95612f, 0.0f);
	*(&Local_0 + 360) = { -1509.103f, 15.24685f, 3885.1f };
	*(&Local_0 + 360 + 12) = { 0.0f, 204.8146f, 0.0f };
	Local_0.f_384 = CREATE_POINT_IN_LAYOUT(Local_0, "agvf_interiorPoint_stable", -1509.103f, 15.24685f, 3885.1f, 0.0f, 204.8146f, 0.0f);
	*(&Local_0 + 388) = { -1539.143f, 18.49f, 3950.932f };
	*(&Local_0 + 388 + 12) = { -1.439f, -36.9f, 0.0f };
	Local_0.f_412 = CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos1", -1539.143f, 18.49f, 3950.932f, -1.439f, -36.9f, 0.0f);
	*(&Local_0 + 416) = { -1586.476f, 22.428f, 3825.351f };
	*(&Local_0 + 416 + 12) = { -5.015f, -115.211f, 0.0f };
	Local_0.f_440 = CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos2", -1586.476f, 22.428f, 3825.351f, -5.015f, -115.211f, 0.0f);
	*(&Local_0 + 444) = { -1444.219f, 19.581f, 3871.997f };
	*(&Local_0 + 444 + 12) = { -2.352f, 138.764f, 0.0f };
	Local_0.f_468 = CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos3", -1444.219f, 19.581f, 3871.997f, -2.352f, 138.764f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos4", -1471.754f, 22.442f, 3970.034f, -5.4f, 17.961f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos5", -1547.145f, 16.465f, 3915.326f, 1.943f, -70.855f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos6", -1537.432f, 16.645f, 3877.973f, -3.109f, -114.802f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos7", -1490.86f, 17.183f, 3864.684f, 3.12f, 164.695f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos8", -1467.541f, 21.32f, 3924.828f, -4.138f, 50.498f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos9", -1513.963f, 19.513f, 3918.957f, 0.522f, -63.009f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "agv_vista_cam_pos10", -1498.269f, 22.89f, 3903.196f, -12.394f, -6.508f, 0.0f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x395B / 14683
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

var Function_64() //Position: 0x39A4 / 14756
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(char* cParam0, var uParam1) //Position: 0x39B9 / 14777
{
	if (!Function_54(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, cParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

