//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 153
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<353> Local_0 = { 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_89 = 0;
	Local_90 = { StackVal, ScriptParam_0 };
	Function_66("Initializing PacificUnionRailroadCamp Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_92 = 500;
		uLocal_96 = Function_65();
		switch (iLocal_89)
		{
			case 0x00000000:
				if (Function_63())
				{
					bLocal_119 = Function_62(Local_0, "unionPacific", ScriptParam_0);
					iLocal_89 = 1;
				}
				bLocal_92 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_119))
				{
					iLocal_89 = 2;
				}
				bLocal_92 = false;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_97);
				Function_60(StackVal, &uLocal_97, &uLocal_100, 4, 4294967295, 4);
				Function_60(&uLocal_97, &uLocal_100, 5, Local_0.f_48, 4294967295, 258);
				Function_60(&uLocal_97, &uLocal_100, 5, Local_0.f_52, 4294967295, 258);
				Function_60(&uLocal_97, &uLocal_100, 5, Local_0.f_208, 4294967295, 16650);
				Function_60(&uLocal_97, &uLocal_100, 5, Local_0.f_220, 4294967295, 16650);
				Function_60(&uLocal_97, &uLocal_100, 5, Local_0.f_212, 4294967295, 0x1000000);
				iLocal_93 = Function_58(&Local_120, bLocal_119, "nfactory01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_48, 0, 0);
				if (iLocal_93 <= 0 && iLocal_93 > Local_120)
				{
					Function_57(&(Local_120[iLocal_935]), 48);
				}
				iLocal_94 = Function_58(&Local_120, bLocal_119, "nfactory01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_48, 0, 0);
				if (iLocal_94 <= 0 && iLocal_94 > Local_120)
				{
					Function_57(&(Local_120[iLocal_945]), 48);
				}
				iLocal_95 = Function_58(&Local_120, bLocal_119, "nfactory01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_48, 0, 0);
				if (iLocal_95 <= 0 && iLocal_95 > Local_120)
				{
					Function_57(&(Local_120[iLocal_955]), 48);
				}
				Function_58(&Local_120, bLocal_119, "repairStructure01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_120, bLocal_119, "repairStructure01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_120, bLocal_119, "repairStructure01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_89 = 3;
				bLocal_92 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_90]), 16);
				Function_55("Finished Initializing PacificUnionRailroadCamp Volumes", 5.0f);
				iLocal_89 = 4;
				bLocal_92 = false;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_97, &uLocal_100, uLocal_96, ScriptParam_0);
				Function_12(&Local_120, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_92 = false;
				break;
		}
		WAIT(bLocal_92);
	}
	Function_4(&uLocal_97, &uLocal_100);
	Function_3(&Local_120);
	Function_2();
	Function_1(&(Global_29008[Local_90]), 16);
	Function_55("Unloaded PacificUnionRailroadCamp Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x327 / 807
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x33E / 830
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x349 / 841
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

void Function_4(var uParam0, int iParam1) //Position: 0x3A3 / 931
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x3FB / 1019
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x4E1 / 1249
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

void Function_7() //Position: 0x65A / 1626
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x666 / 1638
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

void Function_9(int iParam0) //Position: 0x6AC / 1708
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

void Function_10(var uParam0, int iParam1) //Position: 0x6F2 / 1778
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x70C / 1804
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x729 / 1833
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

void Function_13(var uParam0, int iParam1) //Position: 0xAF5 / 2805
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xB06 / 2822
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xB20 / 2848
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xB32 / 2866
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xB3B / 2875
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xBBC / 3004
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

void Function_19(int iParam0) //Position: 0xFD5 / 4053
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

float Function_20(int iParam0) //Position: 0x10D4 / 4308
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x1111 / 4369
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x114A / 4426
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

var Function_23(int iParam0) //Position: 0x11B1 / 4529
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1209 / 4617
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1429 / 5161
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

var Function_26() //Position: 0x1A56 / 6742
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1A5E / 6750
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1A6F / 6767
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1B64 / 7012
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B7D / 7037
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1BE2 / 7138
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1BF4 / 7156
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

int Function_33(int iParam0) //Position: 0x1D24 / 7460
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1D33 / 7475
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1ECD / 7885
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

void Function_36(var uParam0, int iParam1) //Position: 0x2111 / 8465
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x211E / 8478
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2144 / 8516
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2160 / 8544
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

void Function_40() //Position: 0x23F0 / 9200
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2453 / 9299
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

bool Function_42(bool bParam0) //Position: 0x2482 / 9346
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

int Function_43(int iParam0) //Position: 0x24F8 / 9464
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2509 / 9481
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

bool Function_45(int iParam0) //Position: 0x2522 / 9506
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2538 / 9528
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x254D / 9549
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x256B / 9579
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

bool Function_49(int iParam0) //Position: 0x260F / 9743
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x2625 / 9765
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2636 / 9782
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

void Function_52(int iParam0, int iParam1) //Position: 0x26A8 / 9896
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x26CD / 9933
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

bool Function_54(int iParam0) //Position: 0x26EA / 9962
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x2706 / 9990
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

void Function_56(var uParam0, int iParam1) //Position: 0x2744 / 10052
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x2753 / 10067
{
	Function_13(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_58(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2765 / 10085
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

var Function_59(bool bParam0) //Position: 0x2844 / 10308
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

void Function_60(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2872 / 10354
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

void Function_61(int iParam0) //Position: 0x294D / 10573
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_62(bool bParam0, bool bParam1, int iParam2) //Position: 0x295C / 10588
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_63() //Position: 0x297B / 10619
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("PacificUnionRailroadCamp_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("PacificUnionRailroadCamp_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_region", 3, -276.533f, 88.48374f, 2108.0f, 0.0f, 1.442405f, 0.0f, 71.23859f, 26.43192f, 65.84873f);
	Local_0.f_48 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "uprv_rail_garage_set");
	(*&Local_0 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box", 2, -303.9727f, 87.1772f, 2101.977f, 0.0f, 0.0f, 0.0f, 7.93783f, 4.655536f, 23.87166f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[0]);
	(*&Local_0 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box1", 2, -291.0089f, 86.47955f, 2102.997f, 0.0f, 0.0f, 0.0f, 4.555228f, 4.416288f, 8.760977f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[1]);
	(*&Local_0 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box2", 2, -303.9828f, 89.93198f, 2092.967f, -21.24749f, 0.0f, 0.0f, 7.899105f, 1.0f, 6.182f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[2]);
	(*&Local_0 + 8)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box3", 2, -292.2061f, 89.25299f, 2103f, 0.0f, 0.0f, -32.5902f, 5.489248f, 2.347258f, 8.788452f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[3]);
	(*&Local_0 + 8)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box4", 2, -296.5568f, 92.15102f, 2107.407f, 0.3374383f, 1.850172f, -38.11795f, 5.732241f, 2.603295f, 25.49879f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[4]);
	(*&Local_0 + 8)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box5", 2, -301.6805f, 91.26135f, 2103.662f, 0.3272007f, -0.1652647f, 20.74546f, 8.950992f, 4.725996f, 17.90949f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[5]);
	(*&Local_0 + 8)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box6", 2, -300.2626f, 91.97006f, 2116.378f, 0.9871613f, 1.95931f, 33.94175f, 6.173971f, 2.698692f, 7.52782f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[6]);
	(*&Local_0 + 8)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box7", 2, -298.3304f, 87.02213f, 2107.366f, 0.0f, 0.0f, 0.0f, 10.02958f, 5.703563f, 25.2258f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[7]);
	(*&Local_0 + 8)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box8", 2, -307.8334f, 86.72701f, 2114.877f, 0.0f, 0.0f, 0.0f, 9.20863f, 6.721798f, 5.885845f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 8)[8]);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_wharehouse", 2, -268.3538f, 84.58439f, 2095.652f, 0.0f, 0.0f, 0.0f, 19.65977f, 9.98608f, 7.276427f);
	Local_0.f_112 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "uprv_birds_set");
	(*&Local_0 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, -288.4171f, 86.70437f, 2076.95f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[0]);
	(*&Local_0 + 56)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -267.3666f, 86.70437f, 2098.132f, 0.0f, 20.0f, 0.0f, 16.11971f, 15.45276f, 12.38887f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[1]);
	(*&Local_0 + 56)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -288.4171f, 86.70437f, 2129.781f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[2]);
	(*&Local_0 + 56)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -306.1589f, 86.70437f, 2084.923f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[3]);
	(*&Local_0 + 56)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -305.3243f, 86.70437f, 2127.916f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[4]);
	(*&Local_0 + 56)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -278.6503f, 86.70437f, 2126.258f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[5]);
	(*&Local_0 + 56)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -244.5781f, 86.70437f, 2133.737f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[6]);
	(*&Local_0 + 56)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -287.521f, 86.70437f, 2090.79f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[7]);
	(*&Local_0 + 56)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -288.4171f, 86.70437f, 2076.95f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[8]);
	(*&Local_0 + 56)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -241.9218f, 89.34151f, 2108.085f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[9]);
	(*&Local_0 + 56)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -281.8465f, 89.34151f, 2108.085f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[10]);
	(*&Local_0 + 56)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -269.7834f, 89.34151f, 2108.085f, 0.0f, 20.0f, 0.0f, 6.125018f, 8.664046f, 3.739491f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[11]);
	(*&Local_0 + 56)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -260.243f, 85.67178f, 2126.663f, 0.0f, 20.0f, 0.0f, 14.08476f, 9.999254f, 10.8478f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 56)[12]);
	Local_0.f_148 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "uprv_snakes_set");
	(*&Local_0 + 116)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder22", 3, -305.046f, 85.3311f, 2154.449f, 0.0f, 20.0f, 0.0f, 4.896402f, 1.0f, 7.201437f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 116)[0]);
	(*&Local_0 + 116)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -255.9118f, 85.3311f, 2075.077f, 0.0f, 20.0f, 0.0f, 4.896402f, 1.0f, 7.201437f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 116)[1]);
	(*&Local_0 + 116)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -239.0561f, 85.3311f, 2133.486f, 0.0f, 20.0f, 0.0f, 4.896402f, 1.0f, 7.201437f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 116)[2]);
	(*&Local_0 + 116)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -280.9818f, 87.07264f, 2150.994f, 0.0f, 20.0f, 0.0f, 4.896402f, 1.0f, 7.201437f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 116)[3]);
	(*&Local_0 + 116)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder17", 3, -233.5434f, 85.3311f, 2094.527f, 0.0f, 20.0f, 0.0f, 4.896402f, 1.0f, 7.201437f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 116)[4]);
	(*&Local_0 + 116)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder18", 3, -300.1494f, 85.3311f, 2078.184f, 0.0f, 20.0f, 0.0f, 4.896402f, 1.0f, 7.201437f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 116)[5]);
	(*&Local_0 + 116)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder20", 3, -302.0449f, 87.30672f, 2106.049f, 0.0f, 2.192104f, 0.0f, 17.99822f, 12.46395f, 21.27627f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 116)[6]);
	Local_0.f_204 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "uprv_dogs_set");
	(*&Local_0 + 152)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder34", 3, -269.6276f, 85.38675f, 2098.054f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[0]);
	(*&Local_0 + 152)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder23", 3, -259.2169f, 85.38675f, 2126.819f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[1]);
	(*&Local_0 + 152)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder24", 3, -306.0565f, 85.38675f, 2126.819f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[2]);
	(*&Local_0 + 152)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder25", 3, -261.9017f, 85.38675f, 2135.965f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[3]);
	(*&Local_0 + 152)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder26", 3, -244.2293f, 85.38675f, 2110.657f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[4]);
	(*&Local_0 + 152)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder27", 3, -279.1176f, 85.38675f, 2089.075f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[5]);
	(*&Local_0 + 152)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder28", 3, -248.1928f, 85.38675f, 2088.807f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[6]);
	(*&Local_0 + 152)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder29", 3, -309.2191f, 85.38675f, 2086.472f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[7]);
	(*&Local_0 + 152)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder30", 3, -263.2665f, 85.38675f, 2116.714f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[8]);
	(*&Local_0 + 152)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder31", 3, -279.1176f, 85.38675f, 2140.391f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[9]);
	(*&Local_0 + 152)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder32", 3, -295.9451f, 85.38675f, 2074.522f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[10]);
	(*&Local_0 + 152)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder33", 3, -279.1176f, 85.38675f, 2126.819f, 0.0f, 20.0f, 0.0f, 3.466603f, 3.880696f, 3.861811f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[11]);
	Local_0.f_208 = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_TrnPlatform", 2, -263.3087f, 86.66891f, 2119.665f, 0.0f, 0.0f, 0.0f, 14.43368f, 6.369541f, 5.344096f);
	Local_0.f_212 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nuprv_Herd", 2, -275.6026f, 84.3294f, 2072.0f, 0.0f, -1.53006f, 0.0f, 16.23215f, 8.401258f, 7.705633f);
	Local_0.f_216 = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_train_station", 2, -172.3959f, 86.23949f, 2071.448f, 0.0f, 0.0f, 0.0f, 5.504734f, 6.265932f, 6.265932f);
	Local_0.f_220 = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_train_station_platform", 2, -171.6638f, 86.23949f, 2068.398f, 0.0f, 0.0f, 0.0f, 11.20949f, 11.46947f, 17.42475f);
	Local_0.f_224 = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_armwrestling", 2, -263.0347f, 84.35147f, 2118.849f, 0.0f, 0.0f, 0.0f, 5.340823f, 7.420619f, 4.080139f);
	Local_0.f_240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "uprv_genworker_set");
	(*&Local_0 + 228)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_genworker01", 2, -264.1029f, 84.35153f, 2110.276f, 0.0f, 0.0f, 0.0f, 49.66777f, 13.37772f, 12.14555f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 228)[0]);
	(*&Local_0 + 228)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "uprv_genworker02", 2, -278.5565f, 84.35153f, 2118.933f, 0.0f, 0.4032314f, 0.0f, 19.24889f, 13.37772f, 12.14555f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 228)[1]);
	CREATE_POINT_IN_LAYOUT(Local_0, "uprf_report_crime_road", -312.9127f, 84.32952f, 2069.938f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "uprf_clear_bounty", -169.628f, 84.182f, 2071.095f, 0.0f, 101.237f, 0.0f);
	*(&Local_0 + 244) = { -299.3507f, 84.33038f, 2105.254f };
	*(&Local_0 + 244 + 12) = { 0.0f, -186.7571f, 0.0f };
	Local_0.f_268 = CREATE_POINT_IN_LAYOUT(Local_0, "uprf_interiorPoint_factory", -299.3507f, 84.33038f, 2105.254f, 0.0f, -186.7571f, 0.0f);
	*(&Local_0 + 272) = { -265.2167f, 84.59452f, 2095.46f };
	*(&Local_0 + 272 + 12) = { 0.0f, -178.3439f, 0.0f };
	Local_0.f_296 = CREATE_POINT_IN_LAYOUT(Local_0, "uprf_interiorPoint_factory1", -265.2167f, 84.59452f, 2095.46f, 0.0f, -178.3439f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos1", -213.533f, 85.848f, 2118.844f, -1.352f, 80.408f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos2", -223.046f, 86.233f, 2065.41f, -0.522f, 138.056f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos3", -344.209f, 87.703f, 2076.437f, -0.868f, -122.689f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos4", -310.2876f, 84.30087f, 2156.126f, 6.823851f, -39.3588f, -1.115042f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos5", -234.891f, 85.606f, 2152.366f, 5.468f, 42.857f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos6", -247.254f, 86.914f, 2111.899f, 0.056f, 109.959f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos7", -276.294f, 88.03f, 2102.535f, 0.246f, 141.537f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos8", -295.29f, 87.218f, 2118.052f, -2.832f, 27.458f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos9", -297.1f, 87.015f, 2117.951f, -1.573f, -51.539f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "upr_vista_cam_pos10", -281.771f, 88.097f, 2121.184f, -6.186f, -58.68f, 0.0f);
	*(&Local_0 + 300) = { -300.4244f, 84.33038f, 2110.669f };
	*(&Local_0 + 300 + 12) = { 0.0f, 108.2563f, 0.0f };
	Local_0.f_324 = CREATE_POINT_IN_LAYOUT(Local_0, "uprf_interiorSettlement01", -300.4244f, 84.33038f, 2110.669f, 0.0f, 108.2563f, 0.0f);
	*(&Local_0 + 328) = { -263.7625f, 84.59452f, 2095.46f };
	*(&Local_0 + 328 + 12) = { 0.0f, 162.509f, 0.0f };
	Local_0.f_352 = CREATE_POINT_IN_LAYOUT(Local_0, "uprf_interiorSettlement02", -263.7625f, 84.59452f, 2095.46f, 0.0f, 162.509f, 0.0f);
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x3CDF / 15583
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

var Function_65() //Position: 0x3D28 / 15656
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(bool bParam0, var uParam1) //Position: 0x3D3D / 15677
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

