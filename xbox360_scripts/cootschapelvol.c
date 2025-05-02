//Decompiled with MagicRDR v1.0
//Function Count : 68
//Statics Count : 131
//Natives Count : 137
//Parameters Count : 2

#region Local Var
	struct<317> Local_0 = { 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_80 = 0;
	Local_81 = { StackVal, ScriptParam_0 };
	Function_67("Initializing CootsChapel Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_83 = 500;
		uLocal_84 = Function_66();
		switch (iLocal_80)
		{
			case 0x00000000:
				if (Function_64())
				{
					REQUEST_STRING_TABLE("graveyards");
					bLocal_107 = Function_63(Local_0, "coots", ScriptParam_0);
					iLocal_80 = 1;
				}
				bLocal_83 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_107) && HAS_STRING_TABLE_LOADED("graveyards"))
				{
					iLocal_80 = 2;
				}
				bLocal_83 = false;
				break;
			
			case 0x00000002:
				Function_62(&uLocal_85);
				Function_61(StackVal, &uLocal_85, &uLocal_88, 4, 4294967295, 4);
				Function_61(&uLocal_85, &uLocal_88, 5, Local_0.f_28, 4294967295, 266);
				Function_61(&uLocal_85, &uLocal_88, 5, Local_0.f_68, 4294967295, 258);
				Function_61(&uLocal_85, &uLocal_88, 5, Local_0.f_72, 4294967295, 258);
				Function_61(&uLocal_85, &uLocal_88, 5, Local_0.f_76, 4294967295, 258);
				Function_61(&uLocal_85, &uLocal_88, 5, Local_0.f_80, 4294967295, 258);
				Function_59(&iLocal_108, bLocal_107, "chapel01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&iLocal_108, bLocal_107, "chapel01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&iLocal_108, bLocal_107, "chapel01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_59(&iLocal_108, bLocal_107, "chapel01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_80 = 3;
				bLocal_83 = false;
				break;
			
			case 0x00000003:
				Function_58(&(Global_29008[Local_81]), 16);
				Function_57("Finished Initializing CootsChapel Volumes", 5.0f);
				iLocal_80 = 4;
				bLocal_83 = false;
				break;
			
			case 0x00000004:
				Function_19(&uLocal_85, &uLocal_88, uLocal_84, ScriptParam_0);
				Function_14(&iLocal_108, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_83 = false;
				break;
		}
		WAIT(bLocal_83);
	}
	REMOVE_STRING_TABLE("graveyards");
	Function_12(&(Global_26282[14]));
	Function_4(&uLocal_85, &uLocal_88);
	Function_3(&iLocal_108);
	Function_2();
	Function_1(&(Global_29008[Local_81]), 16);
	Function_57("Unloaded CootsChapel Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x27D / 637
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x294 / 660
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x29F / 671
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

void Function_4(var uParam0, int iParam1) //Position: 0x2F9 / 761
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x351 / 849
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
		Function_6(Global_16524, bVar0, 1);
	}
	return;
}

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x42E / 1070
{
	int iVar0;
	
	Function_9(bParam0);
	Function_8(bParam1);
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
	Function_7();
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

void Function_7() //Position: 0x5A7 / 1447
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x5B3 / 1459
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

void Function_9(int iParam0) //Position: 0x5F9 / 1529
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

void Function_10(var uParam0, int iParam1) //Position: 0x63F / 1599
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x659 / 1625
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(int iParam0) //Position: 0x676 / 1654
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_13(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_13(bool bParam0) //Position: 0x6A2 / 1698
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

void Function_14(var uParam0, bool bParam1) //Position: 0x6E7 / 1767
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
	
	bVar6 = Function_18();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_17((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_16(uParam0[iVar05], 16384);
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
								Function_15(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_16(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_66(), uParam0[iVar05]->f_12))
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
								Function_15(uParam0[iVar05], 1);
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
							Function_15(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_16(uParam0[iVar05], 1);
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
					Function_15(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_15(uParam0[iVar05], 1);
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
					Function_16(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_16(uParam0[iVar05], 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_66(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_66(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_16(uParam0[iVar05], 32768);
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

void Function_15(var uParam0, int iParam1) //Position: 0xAB3 / 2739
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xAC4 / 2756
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_17(int iParam0, bool bParam1) //Position: 0xADE / 2782
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_18() //Position: 0xAF0 / 2800
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_19(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xAF9 / 2809
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_56(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_20(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_20(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xB7A / 2938
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_55(uParam0))
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
								Function_53(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_52(uParam0, 8);
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
								Function_52(uParam0, 4);
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
				if ((((((bVar1 && Function_51(iParam2)) && !Function_50(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_49(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
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
							if (Function_18())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_52(uParam0, 16);
								Function_41(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
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
				Function_52(uParam0, 2);
			}
			else
			{
				Function_10(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_51(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_40(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_11(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_39(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_52(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_51(iParam2))
					{
						Function_38(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_21(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_21(int iParam0) //Position: 0xF93 / 3987
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_40(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_58(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_26(473, 1, 0, 0);
		iVar0 = Function_25(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_26(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_26(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_26(476, 1, 0, 0);
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
		Function_24(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_24(7, 30);
	}
	if (Function_23(473) <= Function_22(473))
	{
		if (!Function_18())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_22(int iParam0) //Position: 0x1092 / 4242
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_23(int iParam0) //Position: 0x10CF / 4303
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_24(int iParam0, bool bParam1) //Position: 0x1108 / 4360
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

var Function_25(int iParam0) //Position: 0x116F / 4463
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_51(iParam0))
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

int Function_26(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x11C7 / 4551
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
	Function_37(iParam0, TO_FLOAT(bParam1), 1);
	Function_36(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_27(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_27(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x13E7 / 5095
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_22(390))), 32);
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
					bVar19 = (Function_23(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_23(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_34(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_32(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_30(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_29(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_28(), &Var9);
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

var Function_28() //Position: 0x1A14 / 6676
{
	int iVar0;
	
	return iVar0;
}

var Function_29(int iParam0) //Position: 0x1A1C / 6684
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_30(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1A2D / 6701
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_31(char* cParam0, char* cParam1) //Position: 0x1B22 / 6946
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_32(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B3B / 6971
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_17(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_33(Function_17(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_33(int iParam0, int iParam1) //Position: 0x1BA0 / 7072
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_34(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1BB2 / 7090
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
	if (((Function_35(iParam0) != 19 || Function_35(iParam0) != 17) || Function_35(iParam0) != 10) || Function_35(iParam0) != 9)
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

int Function_35(int iParam0) //Position: 0x1CE2 / 7394
{
	return Global_35278[iParam020].f_48;
}

void Function_36(int iParam0) //Position: 0x1CF1 / 7409
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

int Function_37(int iParam0, float fParam1, bool bParam2) //Position: 0x1E8B / 7819
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

void Function_38(var uParam0, int iParam1) //Position: 0x20A5 / 8357
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_39(struct<5> Param0) //Position: 0x20B2 / 8370
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_40(var uParam0, int iParam1) //Position: 0x20D8 / 8408
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_41(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x20F4 / 8436
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_48(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_47(iParam1))
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
	if (!Function_44(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(iVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(iVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(iVar3, 3);
			Function_42();
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

void Function_42() //Position: 0x2384 / 9092
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_43(bVar0, iVar1);
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

void Function_43(bool bParam0, bool bParam1) //Position: 0x23E7 / 9191
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

bool Function_44(bool bParam0) //Position: 0x2416 / 9238
{
	if (Function_49(256))
	{
		return 0;
	}
	if (Function_49(262144))
	{
		return 0;
	}
	if (Function_46())
	{
		return 0;
	}
	if (!Function_49(1))
	{
		return 0;
	}
	if (!Function_49(4096))
	{
		return 0;
	}
	if (bParam0 && Function_45(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_49(2048))
	{
		return 0;
	}
	if (Function_18() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_45(int iParam0) //Position: 0x248C / 9356
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_46() //Position: 0x249D / 9373
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

bool Function_47(int iParam0) //Position: 0x24B6 / 9398
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_48(int iParam0) //Position: 0x24CC / 9420
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_49(int iParam0) //Position: 0x24E1 / 9441
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_50(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x24FF / 9471
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

bool Function_51(int iParam0) //Position: 0x25A3 / 9635
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_52(var uParam0, int iParam1) //Position: 0x25B9 / 9657
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_53(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x25CA / 9674
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
			Function_54(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_6(StackVal, bVar1, bParam4);
		}
	}
}

void Function_54(int iParam0, int iParam1) //Position: 0x263C / 9788
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_55(int iParam0) //Position: 0x2661 / 9825
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

bool Function_56(int iParam0) //Position: 0x267E / 9854
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_57(bool bParam0, float fParam1) //Position: 0x269A / 9882
{
	if (!Function_56(128))
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

void Function_58(var uParam0, bool bParam1) //Position: 0x26D8 / 9944
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_59(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x26E7 / 9959
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_60(uParam0);
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
		Function_15(uParam0[iVar05], 1);
	}
	Function_15(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_15(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_15(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_60(bool bParam0) //Position: 0x27C6 / 10182
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

void Function_61(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x27F4 / 10228
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

void Function_62(int iParam0) //Position: 0x28CF / 10447
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_63(bool bParam0, char* cParam1, int iParam2) //Position: 0x28DE / 10462
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_64() //Position: 0x28FD / 10493
{
	var uVar0;
	
	Function_65(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("CootsChapel_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_region", 3, -1785,518f, 24,0941f, 2855,945f, 0.0f, 20.0f, 0.0f, 50.0f, 25.0f, 50,0001f);
	Local_0.f_28 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "coov_church_set");
	(*&Local_0 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_church_main_chapel", 2, -1789,893f, 25,8545f, 2852,787f, 0.0f, 20,3847f, 0.0f, 6,533716f, 7,185509f, 17,1488f);
	ADD_TO_VOLUME_SET(Local_0.f_28, (*&Local_0 + 8)[0]);
	(*&Local_0 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_church_rooms2", 2, -1793,754f, 25,79757f, 2857,363f, 0.0f, 19,37619f, 0.0f, 4,932437f, 5,594979f, 6,661956f);
	ADD_TO_VOLUME_SET(Local_0.f_28, (*&Local_0 + 8)[1]);
	(*&Local_0 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_church_bck_room", 2, -1788,075f, 26,8661f, 2857,867f, 0.0f, 20,23496f, 0.0f, 7,067983f, 4,820869f, 3,81275f);
	ADD_TO_VOLUME_SET(Local_0.f_28, (*&Local_0 + 8)[2]);
	(*&Local_0 + 8)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_church_front_porch", 2, -1793,703f, 25,72257f, 2843,684f, 1,770297f, 22,35086f, 0,9407392f, 5,656374f, 5,426769f, 2,722607f);
	ADD_TO_VOLUME_SET(Local_0.f_28, (*&Local_0 + 8)[3]);
	Local_0.f_64 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "coov_vultures_set");
	(*&Local_0 + 32)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_pop_vultures2", 3, -1780,068f, 34,45401f, 2864,857f, 0.0f, 20.0f, 0.0f, 4,164067f, 28,79622f, 4,291873f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 32)[0]);
	(*&Local_0 + 32)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_pop_vultures", 3, -1768,1f, 32,80341f, 2839,247f, 0.0f, 20.0f, 0.0f, 6,014821f, 24,53327f, 6,199431f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 32)[1]);
	(*&Local_0 + 32)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_pop_vultuers3", 3, -1802,182f, 26,63374f, 2842,637f, 0.0f, 20.0f, 0.0f, 4,036973f, 7,376061f, 3,307151f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 32)[2]);
	(*&Local_0 + 32)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -1805,36f, 24,09713f, 2872,041f, 0.0f, 20.0f, 0.0f, 6,860088f, 32,06005f, 4,968766f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 32)[3]);
	(*&Local_0 + 32)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -1813,237f, 24,09713f, 2858,151f, 0.0f, 20.0f, 0.0f, 6,860088f, 32,06005f, 4,968766f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 32)[4]);
	(*&Local_0 + 32)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -1761,424f, 24,09713f, 2848,518f, 0.0f, 20.0f, 0.0f, 6,860088f, 32,06005f, 4,968766f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 32)[5]);
	(*&Local_0 + 32)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -1767,435f, 24,09713f, 2874,551f, 0.0f, 20.0f, 0.0f, 6,860088f, 32,06005f, 4,968766f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 32)[6]);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_abd_house1", 2, -1804,489f, 27,10587f, 2750,655f, 0.0f, 0.0f, 0.0f, 10,92896f, 7,066658f, 10,80309f);
	Local_0.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_abd_house2", 2, -1757,247f, 27,28255f, 2801,044f, 0.0f, 0.0f, 0.0f, 7,434853f, 7,991008f, 5,037548f);
	Local_0.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_abd_house3", 2, -1876f, 26,93258f, 2728,318f, 0.0f, 0.0f, 0.0f, 7,562485f, 5,027176f, 8,347751f);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "coov_abd_house4", 2, -1890,149f, 25,36248f, 2704,97f, 0.0f, -35,02938f, 0.0f, 6,897596f, 4,889504f, 5,126114f);
	Local_0.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "coov_crows_set");
	(*&Local_0 + 84)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -1764f, 29,14208f, 2868,377f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[0]);
	(*&Local_0 + 84)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -1809,529f, 29,14208f, 2871,397f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[1]);
	(*&Local_0 + 84)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -1796,498f, 29,14208f, 2875,382f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[2]);
	(*&Local_0 + 84)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -1759,427f, 29,14208f, 2848,11f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[3]);
	(*&Local_0 + 84)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -1814,701f, 29,14208f, 2847,058f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[4]);
	(*&Local_0 + 84)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -1778,111f, 29,14208f, 2868,861f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[5]);
	(*&Local_0 + 84)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -1802,34f, 29,14208f, 2862,686f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[6]);
	(*&Local_0 + 84)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -1772,332f, 29,14208f, 2840,827f, 0.0f, 20.0f, 0.0f, 3,980274f, 12,27519f, 5,739097f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[7]);
	(*&Local_0 + 84)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder39", 3, -1790,557f, 24,8034f, 2853,52f, 0.0f, 20.0f, 0.0f, 10,53282f, 14,56414f, 14,63171f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[8]);
	(*&Local_0 + 84)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder34", 3, -1842,569f, 25,18892f, 2789,768f, 0.0f, 20.0f, 0.0f, 8,642062f, 7,830865f, 8,470125f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[9]);
	(*&Local_0 + 84)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder35", 3, -1877,087f, 26,2377f, 2729,079f, 0.0f, 20.0f, 0.0f, 8,642062f, 7,830865f, 8,470125f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[10]);
	(*&Local_0 + 84)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder36", 3, -1900,127f, 26,19918f, 2711,338f, 0.0f, 20.0f, 0.0f, 8,642062f, 7,830865f, 8,470125f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[11]);
	(*&Local_0 + 84)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder37", 3, -1805,213f, 26,18672f, 2749,628f, 0.0f, 20.0f, 0.0f, 10,48037f, 7,830865f, 10,78617f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[12]);
	(*&Local_0 + 84)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder38", 3, -1756,097f, 27,12459f, 2799,404f, 0.0f, 20.0f, 0.0f, 14,56298f, 7,830865f, 10,09194f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[13]);
	Local_0.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "coov_snakes_set");
	(*&Local_0 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder17", 3, -1818,7f, 24,0941f, 2862,11f, 0.0f, 20.0f, 0.0f, 2,373678f, 2,345387f, 4,521883f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[0]);
	(*&Local_0 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -1808,88f, 24,0941f, 2841,824f, 0.0f, 20.0f, 0.0f, 2,373678f, 2,345387f, 4,521883f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[1]);
	(*&Local_0 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -1818,7f, 24,0941f, 2862,11f, 0.0f, 20.0f, 0.0f, 2,373678f, 2,345387f, 4,521883f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[2]);
	(*&Local_0 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, -1753,891f, 24,0941f, 2862,11f, 0.0f, 20.0f, 0.0f, 2,373678f, 2,345387f, 4,521883f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[3]);
	(*&Local_0 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -1797,701f, 24,0941f, 2878,21f, 0.0f, 20.0f, 0.0f, 2,373678f, 2,345387f, 4,521883f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 148)[4]);
	Local_0.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "coov_rabbits_set");
	(*&Local_0 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder24", 3, -1757,547f, 24,11529f, 2874,453f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[0]);
	(*&Local_0 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder23", 3, -1763,895f, 24,11529f, 2864,358f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[1]);
	(*&Local_0 + 176)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder22", 3, -1811,275f, 24,11529f, 2856,734f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[2]);
	(*&Local_0 + 176)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder21", 3, -1770,172f, 24,11529f, 2836f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[3]);
	(*&Local_0 + 176)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder20", 3, -1805,128f, 24,11529f, 2874,453f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[4]);
	(*&Local_0 + 176)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder19", 3, -1757,547f, 24,11529f, 2843,368f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[5]);
	(*&Local_0 + 176)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder18", 3, -1783,435f, 24,11529f, 2874,453f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[6]);
	(*&Local_0 + 176)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder25", 3, -1757,547f, 24,11529f, 2874,453f, 0.0f, 20.0f, 0.0f, 5,776541f, 1,88908f, 3,142002f);
	ADD_TO_VOLUME_SET(Local_0.f_212, (*&Local_0 + 176)[7]);
	Local_0.f_236 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "coov_owls_set");
	(*&Local_0 + 216)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder29", 3, -1802,821f, 23,90474f, 2842,227f, 0.0f, 20.0f, 0.0f, 2,876812f, 5,645661f, 2,80788f);
	ADD_TO_VOLUME_SET(Local_0.f_236, (*&Local_0 + 216)[0]);
	(*&Local_0 + 216)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder26", 3, -1801,651f, 23,90474f, 2866,974f, 0.0f, 20.0f, 0.0f, 2,876812f, 5,645661f, 2,80788f);
	ADD_TO_VOLUME_SET(Local_0.f_236, (*&Local_0 + 216)[1]);
	(*&Local_0 + 216)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder27", 3, -1766,998f, 23,90474f, 2837,912f, 0.0f, 20.0f, 0.0f, 2,876812f, 5,645661f, 2,80788f);
	ADD_TO_VOLUME_SET(Local_0.f_236, (*&Local_0 + 216)[2]);
	(*&Local_0 + 216)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder28", 3, -1780,78f, 23,90474f, 2864,049f, 0.0f, 20.0f, 0.0f, 2,876812f, 5,645661f, 2,80788f);
	ADD_TO_VOLUME_SET(Local_0.f_236, (*&Local_0 + 216)[3]);
	Local_0.f_260 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "coov_racoons_set");
	(*&Local_0 + 240)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder33", 3, -1793,024f, 24,0941f, 2867,051f, 0.0f, 20.0f, 0.0f, 3,464828f, 7,636977f, 3,326022f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 240)[0]);
	(*&Local_0 + 240)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder30", 3, -1772,763f, 24,0941f, 2849,425f, 0.0f, 20.0f, 0.0f, 3,464828f, 7,636977f, 3,326022f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 240)[1]);
	(*&Local_0 + 240)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder31", 3, -1762,158f, 24,0941f, 2866,07f, 0.0f, 20.0f, 0.0f, 3,464828f, 7,636977f, 3,326022f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 240)[2]);
	(*&Local_0 + 240)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder32", 3, -1807,124f, 24,0941f, 2848,914f, 0.0f, 20.0f, 0.0f, 3,464828f, 7,636977f, 3,326022f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 240)[3]);
	CREATE_POINT_IN_LAYOUT(Local_0, "coof_report_crime_road", -1832,186f, 21,52767f, 2761,121f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 264) = { -1790,84f, 24,63191f, 2850,71f };
	*(&Local_0 + 264 + 12) = { 0.0f, 19,8483f, 0.0f };
	Local_0.f_288 = CREATE_POINT_IN_LAYOUT(Local_0, "coof_interiorPoint_church", -1790,84f, 24,63191f, 2850,71f, 0.0f, 19,8483f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos1", -1835,793f, 35,72f, 2832,312f, -4,914f, -106,184f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos2", -1837,374f, 27,155f, 2887,6f, -1,381f, -41,101f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos3", -1813,378f, 40,519f, 2899,532f, -7,912f, -38,781f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos4", -1728,119f, 28,017f, 2895,264f, -3,2f, 78,61f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos5", -1753,918f, 31,581f, 2784,02f, -6,478f, 147,332f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos6", -1807,283f, 25,045f, 2834,438f, 20,106f, -114,66f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos7", -1789,035f, 25,84f, 2839,085f, 47,024f, 124,252f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos8", -1805,974f, 36,017f, 2873,514f, -8,181f, -16,462f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos9", -1683,052f, 36,15f, 2906,98f, -6,383f, 56,004f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "coo_vista_cam_pos10", -1761,432f, 26,45f, 2876,792f, 6,053f, 52,013f, 0.0f);
	*(&Local_0 + 292) = { -1793,186f, 24,63191f, 2848,563f };
	*(&Local_0 + 292 + 12) = { 0.0f, -0,3551953f, 0.0f };
	Local_0.f_316 = CREATE_POINT_IN_LAYOUT(Local_0, "coof_interiorSettlement01", -1793,186f, 24,63191f, 2848,563f, 0.0f, -0,3551953f, 0.0f);
	return 1;
}

void Function_65(int iParam0, int iParam1) //Position: 0x3C6E / 15470
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

var Function_66() //Position: 0x3CB7 / 15543
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_67(bool bParam0, var uParam1) //Position: 0x3CCC / 15564
{
	if (!Function_56(128))
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

