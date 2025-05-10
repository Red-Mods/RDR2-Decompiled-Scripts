//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 175
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<473> Local_0 = { 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_119 = 0;
	Local_120 = { StackVal, ScriptParam_0 };
	Function_65("Initializing BenedictPoint Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_122 = 500;
		uLocal_123 = Function_64();
		switch (iLocal_119)
		{
			case 0x00000000:
				if (Function_62())
				{
					bLocal_146 = Function_61(Local_0, "benedictPoint", ScriptParam_0);
					iLocal_119 = 1;
				}
				iLocal_122 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_146))
				{
					iLocal_119 = 2;
				}
				iLocal_122 = 0;
				break;
			
			case 0x00000002:
				Function_60(&iLocal_124);
				Function_59(&iLocal_124, &iLocal_127, 4, Local_0.f_16, 4294967295, 4);
				Function_59(StackVal, &iLocal_124, &iLocal_127, 5, 4294967295, 266);
				Function_59(&iLocal_124, &iLocal_127, 5, Local_0.f_320, 4294967295, 266);
				Function_59(StackVal, &iLocal_124, &iLocal_127, 5, 4294967295, 266);
				Function_59(&iLocal_124, &iLocal_127, 5, Local_0.f_12, 4294967295, 264);
				Function_59(&iLocal_124, &iLocal_127, 5, Local_0.f_324, 4294967295, 266);
				Function_57(&iLocal_147, bLocal_146, "trainStation01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&iLocal_147, bLocal_146, "trainStation01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&iLocal_147, bLocal_146, "trainStation01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&iLocal_147, bLocal_146, "trainStation01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&iLocal_147, bLocal_146, "house01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_119 = 3;
				iLocal_122 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_120]), 16);
				Function_55("Finished Initializing BenedictPoint Volumes", 5.0f);
				iLocal_119 = 4;
				iLocal_122 = 0;
				break;
			
			case 0x00000004:
				Function_17(&iLocal_124, &iLocal_127, uLocal_123, ScriptParam_0);
				Function_12(&iLocal_147, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_122 = 0;
				break;
		}
		WAIT(iLocal_122);
	}
	Function_4(&iLocal_124, &iLocal_127);
	Function_3(&iLocal_147);
	Function_2();
	Function_1(&(Global_29008[Local_120]), 16);
	Function_55("Unloaded BenedictPoint Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x28B / 651
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x2A2 / 674
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x2AD / 685
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

void Function_4(var uParam0, int iParam1) //Position: 0x307 / 775
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x35F / 863
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x445 / 1093
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

void Function_7() //Position: 0x5BE / 1470
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x5CA / 1482
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

void Function_9(int iParam0) //Position: 0x610 / 1552
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

void Function_10(var uParam0, int iParam1) //Position: 0x656 / 1622
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x670 / 1648
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x68D / 1677
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

void Function_13(var uParam0, int iParam1) //Position: 0xA59 / 2649
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xA6A / 2666
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, int iParam1) //Position: 0xA84 / 2692
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_16() //Position: 0xA96 / 2710
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xA9F / 2719
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xB20 / 2848
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

void Function_19(int iParam0) //Position: 0xF39 / 3897
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

float Function_20(int iParam0) //Position: 0x1038 / 4152
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x1075 / 4213
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x10AE / 4270
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(1, bParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bVar0);
	return;
	return;
}

var Function_23(int iParam0) //Position: 0x1115 / 4373
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x116D / 4461
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x138D / 5005
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
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

var Function_26() //Position: 0x19BA / 6586
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x19C2 / 6594
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x19D3 / 6611
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1AC8 / 6856
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1AE1 / 6881
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1B46 / 6982
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1B58 / 7000
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

int Function_33(int iParam0) //Position: 0x1C88 / 7304
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1C97 / 7319
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1E31 / 7729
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

void Function_36(var uParam0, int iParam1) //Position: 0x2075 / 8309
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x2082 / 8322
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x20A8 / 8360
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x20C4 / 8388
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	
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
		iVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, iVar5);
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

void Function_40() //Position: 0x2354 / 9044
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_41(bVar0, iVar1);
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x23B7 / 9143
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

bool Function_42(bool bParam0) //Position: 0x23E6 / 9190
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

int Function_43(int iParam0) //Position: 0x245C / 9308
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x246D / 9325
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

bool Function_45(int iParam0) //Position: 0x2486 / 9350
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x249C / 9372
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x24B1 / 9393
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x24CF / 9423
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

bool Function_49(int iParam0) //Position: 0x2573 / 9587
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x2589 / 9609
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x259A / 9626
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

void Function_52(int iParam0, int iParam1) //Position: 0x260C / 9740
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2631 / 9777
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

bool Function_54(int iParam0) //Position: 0x264E / 9806
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x266A / 9834
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

void Function_56(var uParam0, bool bParam1) //Position: 0x26A8 / 9896
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_57(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x26B7 / 9911
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
	bVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(iParam1, &cVar1, &cVar9);
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

var Function_58(bool bParam0) //Position: 0x2796 / 10134
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

void Function_59(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x27C4 / 10180
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

void Function_60(int iParam0) //Position: 0x289F / 10399
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_61(bool bParam0, char* cParam1, int iParam2) //Position: 0x28AE / 10414
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_62() //Position: 0x28CD / 10445
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("BenedictPoint_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("BenedictPoint_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "benv_station", 2, -3690.035f, 9.508358f, 3472.207f, 0.0f, 358.8154f, 0.0f, 8.2f, 6.283404f, 10.75f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "benv_house", 2, -3668.806f, 9.508358f, 3490.977f, 0.0f, 15.0f, 0.0f, 5.05f, 3.818571f, 9.650508f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "benv_eating_area", 2, -3675.456f, 9.273419f, 3474.542f, 0.0f, 0.0f, 0.0f, 3.183692f, 3.435052f, 7.906288f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "benv_region", 3, -3672.268f, 22.08688f, 3472.788f, 0.0f, -2.475537f, 0.0f, 39.25807f, 17.84807f, 56.83197f);
	Local_0.f_68 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_crows_set");
	(*&Local_0 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -3659.183f, 25.11299f, 3501.407f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[0]);
	(*&Local_0 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -3690.701f, 25.11299f, 3437.034f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[1]);
	(*&Local_0 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -3661.622f, 25.11299f, 3455.487f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[2]);
	(*&Local_0 + 20)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -3690.701f, 25.11299f, 3475.313f, 0.0f, 4.239945f, 0.0f, 13.18543f, 21.64164f, 16.25232f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[3]);
	(*&Local_0 + 20)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -3683.224f, 25.11299f, 3505.853f, 0.0f, 20.0f, 0.0f, 7.352065f, 21.64164f, 5.33606f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[4]);
	(*&Local_0 + 20)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -3663.107f, 33.99499f, 3437.863f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[5]);
	(*&Local_0 + 20)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -3669.573f, 25.11299f, 3490.848f, 0.0f, 20.0f, 0.0f, 7.716234f, 21.64164f, 7.89005f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[6]);
	(*&Local_0 + 20)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -3677.142f, 25.11299f, 3473.505f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[7]);
	(*&Local_0 + 20)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -3690.701f, 25.11299f, 3488.257f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[8]);
	(*&Local_0 + 20)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -3680.66f, 25.11299f, 3495.866f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[9]);
	(*&Local_0 + 20)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -3690.701f, 25.11299f, 3504f, 0.0f, 20.0f, 0.0f, 5.735975f, 21.64164f, 4.612089f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 20)[10]);
	Local_0.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_vultures_set");
	(*&Local_0 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder18", 3, -3655.472f, 17.41255f, 3498.873f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[0]);
	(*&Local_0 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder17", 3, -3690.685f, 17.41255f, 3449.538f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[1]);
	(*&Local_0 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -3689.109f, 17.41255f, 3497.248f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[2]);
	(*&Local_0 + 72)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, -3665.429f, 18.88692f, 3438.698f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[3]);
	(*&Local_0 + 72)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -3672.121f, 16.39698f, 3503.361f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[4]);
	(*&Local_0 + 72)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -3676.716f, 16.39698f, 3455.342f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[5]);
	(*&Local_0 + 72)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -3662.563f, 16.39698f, 3481.176f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[6]);
	(*&Local_0 + 72)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder19", 3, -3655.472f, 16.39698f, 3464f, 0.0f, 20.0f, 0.0f, 6.023086f, 20.08011f, 7.523242f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 72)[7]);
	Local_0.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_rabbits_set");
	(*&Local_0 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder26", 3, -3660.205f, 8.031368f, 3499.277f, 0.0f, 20.0f, 0.0f, 4.246298f, 3.228842f, 3.633897f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 112)[0]);
	(*&Local_0 + 112)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder20", 3, -3684.0f, 8.031368f, 3437.59f, 0.0f, 20.0f, 0.0f, 4.246298f, 3.228842f, 3.633897f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 112)[1]);
	(*&Local_0 + 112)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder21", 3, -3650.905f, 8.031368f, 3459.587f, 0.0f, 20.0f, 0.0f, 4.246298f, 3.228842f, 3.633897f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 112)[2]);
	(*&Local_0 + 112)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder22", 3, -3674.461f, 8.031368f, 3509.889f, 0.0f, 20.0f, 0.0f, 4.246298f, 3.228842f, 3.633897f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 112)[3]);
	(*&Local_0 + 112)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder23", 3, -3677.217f, 8.031368f, 3458.184f, 0.0f, 20.0f, 0.0f, 4.246298f, 3.228842f, 3.633897f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 112)[4]);
	(*&Local_0 + 112)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder24", 3, -3666.25f, 8.031368f, 3476.29f, 0.0f, 20.0f, 0.0f, 4.246298f, 3.228842f, 3.633897f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 112)[5]);
	(*&Local_0 + 112)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder25", 3, -3690.99f, 8.031368f, 3501.663f, 0.0f, 20.0f, 0.0f, 4.246298f, 3.228842f, 3.633897f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 112)[6]);
	Local_0.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_raccoons_set");
	(*&Local_0 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder31", 3, -3660.002f, 8.230818f, 3495.822f, 0.0f, 20.0f, 0.0f, 4.167985f, 2.396038f, 4.123489f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[0]);
	(*&Local_0 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder27", 3, -3685.417f, 8.230818f, 3439.028f, 0.0f, 20.0f, 0.0f, 4.167985f, 2.396038f, 4.123489f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[1]);
	(*&Local_0 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder28", 3, -3649.13f, 8.230818f, 3457.252f, 0.0f, 20.0f, 0.0f, 4.167985f, 2.396038f, 4.123489f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[2]);
	(*&Local_0 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder29", 3, -3667.869f, 8.230818f, 3478.334f, 0.0f, 20.0f, 0.0f, 4.167985f, 2.396038f, 4.123489f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[3]);
	(*&Local_0 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder30", 3, -3679.803f, 8.230818f, 3450.869f, 0.0f, 20.0f, 0.0f, 4.167985f, 2.396038f, 4.123489f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[4]);
	Local_0.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_snakes_set");
	(*&Local_0 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder40", 3, -3679.316f, 8.761167f, 3442.452f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[0]);
	(*&Local_0 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder32", 3, -3658.174f, 8.761167f, 3461.599f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[1]);
	(*&Local_0 + 176)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder33", 3, -3679.316f, 8.761167f, 3523.094f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[2]);
	(*&Local_0 + 176)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder34", 3, -3658.501f, 8.761167f, 3488.595f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[3]);
	(*&Local_0 + 176)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder35", 3, -3696.01f, 8.761167f, 3508.713f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[4]);
	(*&Local_0 + 176)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder36", 3, -3679.316f, 8.761167f, 3455.715f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[5]);
	(*&Local_0 + 176)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder37", 3, -3693.983f, 8.761167f, 3453.043f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[6]);
	(*&Local_0 + 176)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder38", 3, -3687.727f, 8.761167f, 3494.49f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[7]);
	(*&Local_0 + 176)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder39", 3, -3670.813f, 8.761167f, 3504f, 0.0f, 20.0f, 0.0f, 3.527383f, 3.591761f, 4.034165f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 176)[8]);
	Local_0.f_248 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_owls_set");
	(*&Local_0 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder46", 3, -3664.002f, 20.23113f, 3445.652f, 0.0f, 20.0f, 0.0f, 5.123412f, 19.08964f, 5.230203f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[0]);
	(*&Local_0 + 220)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder41", 3, -3688.903f, 20.23113f, 3528.066f, 0.0f, 20.0f, 0.0f, 5.123412f, 19.08964f, 5.230203f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[1]);
	(*&Local_0 + 220)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder42", 3, -3679.567f, 20.23113f, 3434.895f, 0.0f, 20.0f, 0.0f, 5.123412f, 19.08964f, 5.230203f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[2]);
	(*&Local_0 + 220)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder43", 3, -3647.286f, 20.23113f, 3456.865f, 0.0f, 20.0f, 0.0f, 5.123412f, 19.08964f, 5.230203f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[3]);
	(*&Local_0 + 220)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder44", 3, -3651.339f, 20.23113f, 3484.503f, 0.0f, 20.0f, 0.0f, 5.123412f, 19.08964f, 5.230203f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[4]);
	(*&Local_0 + 220)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder45", 3, -3664.002f, 20.23113f, 3499.999f, 0.0f, 20.0f, 0.0f, 5.123412f, 19.08964f, 5.230203f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[5]);
	Local_0.f_276 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_dogs_set");
	(*&Local_0 + 252)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder50", 3, -3684.002f, 11.43245f, 3459.023f, 0.0f, 20.0f, 0.0f, 4.410245f, 4.93786f, 4.626956f);
	ADD_TO_VOLUME_SET(Local_0.f_276, (*&Local_0 + 252)[0]);
	(*&Local_0 + 252)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder49", 3, -3679.94f, 11.43245f, 3478.157f, 0.0f, 20.0f, 0.0f, 4.410245f, 4.93786f, 4.626956f);
	ADD_TO_VOLUME_SET(Local_0.f_276, (*&Local_0 + 252)[1]);
	(*&Local_0 + 252)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder48", 3, -3684.002f, 11.43245f, 3493.334f, 0.0f, 20.0f, 0.0f, 4.410245f, 4.93786f, 4.626956f);
	ADD_TO_VOLUME_SET(Local_0.f_276, (*&Local_0 + 252)[2]);
	(*&Local_0 + 252)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder47", 3, -3665.639f, 11.43245f, 3468.916f, 0.0f, 20.0f, 0.0f, 4.410245f, 4.93786f, 4.626956f);
	ADD_TO_VOLUME_SET(Local_0.f_276, (*&Local_0 + 252)[3]);
	(*&Local_0 + 252)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder51", 3, -3665.417f, 11.43245f, 3492.502f, 0.0f, 20.0f, 0.0f, 4.410245f, 4.93786f, 4.626956f);
	ADD_TO_VOLUME_SET(Local_0.f_276, (*&Local_0 + 252)[4]);
	Local_0.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_train_set");
	(*&Local_0 + 280)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder58", 3, -3687.54f, 10.16598f, 3483.035f, 0.0f, 20.0f, 0.0f, 3.060091f, 2.789393f, 4.211166f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 280)[0]);
	(*&Local_0 + 280)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder53", 3, -3691.714f, 10.16598f, 3479.768f, 0.0f, 20.0f, 0.0f, 3.934453f, 2.789393f, 3.105485f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 280)[1]);
	(*&Local_0 + 280)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder54", 3, -3691.296f, 10.16598f, 3465.885f, 0.0f, 3.350196f, 0.0f, 2.404188f, 2.789393f, 1.54993f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 280)[2]);
	(*&Local_0 + 280)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder56", 3, -3690.052f, 10.16598f, 3473.045f, 0.0f, 20.0f, 0.0f, 3.15938f, 2.789393f, 2.616548f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 280)[3]);
	(*&Local_0 + 280)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder57", 3, -3692.199f, 10.16598f, 3484.899f, 0.0f, 20.0f, 0.0f, 3.7221f, 2.789393f, 2.991706f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 280)[4]);
	Local_0.f_320 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "benv_TrnPlatform_set");
	(*&Local_0 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box", 2, -3696.749f, 10.32725f, 3475.957f, 0.0f, 0.0f, 0.0f, 3.239367f, 6.043555f, 24.25914f);
	ADD_TO_VOLUME_SET(Local_0.f_320, (*&Local_0 + 308)[0]);
	(*&Local_0 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box1", 2, -3689.937f, 9.882474f, 3482.532f, 0.0f, 0.0f, 0.0f, 11.00425f, 6.273331f, 10.46097f);
	ADD_TO_VOLUME_SET(Local_0.f_320, (*&Local_0 + 308)[1]);
	Local_0.f_324 = CREATE_VOLUME_IN_LAYOUT(Local_0, "benv_stables", 2, -3683.318f, 9.647223f, 3505.356f, 0.4220771f, 4.370803f, 0.9893484f, 13.49625f, 3.800715f, 5.547434f);
	Local_0.f_328 = CREATE_VOLUME_IN_LAYOUT(Local_0, "benv_dinner", 3, -3676.488f, 8.443946f, 3476.815f, 0.0f, 3.87444f, 0.0f, 5.382018f, 3.233917f, 8.059525f);
	Local_0.f_332 = CREATE_VOLUME_IN_LAYOUT(Local_0, "benv_train_tickets", 2, -3690.738f, 8.761167f, 3475.852f, 0.0f, 0.0f, 0.0f, 14.454f, 14.454f, 23.98269f);
	CREATE_POINT_IN_LAYOUT(Local_0, "benf_clear_bounty", -3691.207f, 9.847f, 3470.861f, 0.0f, 17.52f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "benf_report_crime_road", -3718.07f, 7.807744f, 3483.963f, 0.0f, 99.826f, 0.0f);
	*(&Local_0 + 336) = { -3691.211f, 9.540363f, 3472.469f };
	*(&Local_0 + 336 + 12) = { 0.0f, 91.049f, 0.0f };
	Local_0.f_360 = CREATE_POINT_IN_LAYOUT(Local_0, "benf_interiorPoint_train", -3691.211f, 9.540363f, 3472.469f, 0.0f, 91.049f, 0.0f);
	*(&Local_0 + 364) = { -3668.753f, 8.50267f, 3490.64f };
	*(&Local_0 + 364 + 12) = { 0.0f, 108.4156f, 0.0f };
	Local_0.f_388 = CREATE_POINT_IN_LAYOUT(Local_0, "benf_interiorPoint_house", -3668.753f, 8.50267f, 3490.64f, 0.0f, 108.4156f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos1", -3717.172f, 14.174f, 3433.614f, -10.771f, -137.166f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos2", -3714.935f, 26.471f, 3525.966f, -13.12f, -44.003f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos3", -3636.63f, 30.629f, 3510.744f, -15.985f, 44.576f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos4", -3759.687f, 35.412f, 3423.31f, -12.891f, -128.399f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos5", -3737.317f, 22.069f, 3571.805f, -5.443f, -28.476f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos6", -3677.55f, 10.311f, 3434.616f, 1.89f, 149.943f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos7", -3674.437f, 13.887f, 3467.653f, -9.312f, 146.446f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos8", -3656.893f, 9.64f, 3467.87f, -5.836f, 128.678f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos9", -3712.332f, 14.909f, 3467.278f, -6.052f, -121.816f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "ben_vista_cam_pos10", -3690.923f, 9.768f, 3508.547f, 4.285f, -21.319f, 0.0f);
	*(&Local_0 + 392) = { -3692.117f, 9.540363f, 3472.486f };
	*(&Local_0 + 392 + 12) = { 0.0f, 91.049f, 0.0f };
	Local_0.f_416 = CREATE_POINT_IN_LAYOUT(Local_0, "player_shop_flag", -3692.117f, 9.540363f, 3472.486f, 0.0f, 91.049f, 0.0f);
	*(&Local_0 + 420) = { -3668.471f, 8.50267f, 3491.285f };
	*(&Local_0 + 420 + 12) = { 0.0f, 94.5275f, 0.0f };
	Local_0.f_444 = CREATE_POINT_IN_LAYOUT(Local_0, "benf_interiorSettlement01", -3668.471f, 8.50267f, 3491.285f, 0.0f, 94.5275f, 0.0f);
	*(&Local_0 + 448) = { -3690.588f, 9.540363f, 3473.248f };
	*(&Local_0 + 448 + 12) = { 0.0f, 81.70078f, 0.0f };
	Local_0.f_472 = CREATE_POINT_IN_LAYOUT(Local_0, "benf_interiorSettlement02", -3690.588f, 9.540363f, 3473.248f, 0.0f, 81.70078f, 0.0f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x41A3 / 16803
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

var Function_64() //Position: 0x41EC / 16876
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(bool bParam0, var uParam1) //Position: 0x4201 / 16897
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

