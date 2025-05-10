//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 248
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<353> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_89 = 0;
	Local_90 = { StackVal, ScriptParam_0 };
	Function_65("Initializing Ridgewood Farm Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_92 = 500;
		uLocal_93 = Function_64();
		switch (iLocal_89)
		{
			case 0x00000000:
				if (Function_62())
				{
					bLocal_149 = Function_61(Local_0, "ridgewoodFarm", ScriptParam_0);
					iLocal_89 = 1;
				}
				bLocal_92 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_149))
				{
					iLocal_89 = 2;
				}
				bLocal_92 = false;
				break;
			
			case 0x00000002:
				Function_60(&uLocal_94);
				Function_59(StackVal, &uLocal_94, &iLocal_97, 4, 4294967295, 4);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_240, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_12, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_16, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_20, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_24, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_28, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_32, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_164, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_168, 4294967295, 266);
				Function_59(StackVal, &uLocal_94, &iLocal_97, 5, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_160, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_40, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_44, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_48, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, Local_0.f_52, 4294967295, 266);
				Function_59(&uLocal_94, &iLocal_97, 5, (*&Local_0 + 148)[0], 4294967295, 0x1000000);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 10, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 11, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 12, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "mainHouse01", 13, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "barn01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "barn01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "barn01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 9, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 10, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 11, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 12, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 13, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 14, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 15, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_57(&bLocal_150, bLocal_149, "fence01", 16, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				iLocal_89 = 3;
				bLocal_92 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_90]), 16);
				Function_55("Finished Initializing Ridgewood Farm Volumes", 5.0f);
				iLocal_89 = 4;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_94, &iLocal_97, uLocal_93, ScriptParam_0);
				Function_12(&bLocal_150, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_92);
	}
	Function_4(&uLocal_94, &iLocal_97);
	Function_3(&bLocal_150);
	Function_2();
	Function_1(&(Global_29008[Local_90]), 16);
	Function_55("Unloaded Ridgewood Farm Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x509 / 1289
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x520 / 1312
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x52B / 1323
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

void Function_4(var uParam0, int iParam1) //Position: 0x585 / 1413
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x5DD / 1501
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x6C3 / 1731
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

void Function_7() //Position: 0x83C / 2108
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x848 / 2120
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

void Function_9(int iParam0) //Position: 0x88E / 2190
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

void Function_10(var uParam0, int iParam1) //Position: 0x8D4 / 2260
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x8EE / 2286
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x90B / 2315
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

void Function_13(var uParam0, int iParam1) //Position: 0xCD7 / 3287
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xCE8 / 3304
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xD02 / 3330
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xD14 / 3348
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xD1D / 3357
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xD9E / 3486
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

void Function_19(int iParam0) //Position: 0x11B7 / 4535
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

float Function_20(int iParam0) //Position: 0x12B6 / 4790
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x12F3 / 4851
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x132C / 4908
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

var Function_23(int iParam0) //Position: 0x1393 / 5011
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x13EB / 5099
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x160B / 5643
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

var Function_26() //Position: 0x1C38 / 7224
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1C40 / 7232
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C51 / 7249
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1D46 / 7494
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D5F / 7519
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1DC4 / 7620
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1DD6 / 7638
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

int Function_33(int iParam0) //Position: 0x1F06 / 7942
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1F15 / 7957
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x20AF / 8367
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

void Function_36(var uParam0, int iParam1) //Position: 0x22F3 / 8947
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x2300 / 8960
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2326 / 8998
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2342 / 9026
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

void Function_40() //Position: 0x25D2 / 9682
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2635 / 9781
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

bool Function_42(bool bParam0) //Position: 0x2664 / 9828
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

int Function_43(int iParam0) //Position: 0x26DA / 9946
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x26EB / 9963
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

bool Function_45(int iParam0) //Position: 0x2704 / 9988
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x271A / 10010
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x272F / 10031
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x274D / 10061
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

bool Function_49(int iParam0) //Position: 0x27F1 / 10225
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x2807 / 10247
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2818 / 10264
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

void Function_52(int iParam0, int iParam1) //Position: 0x288A / 10378
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x28AF / 10415
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

bool Function_54(int iParam0) //Position: 0x28CC / 10444
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x28E8 / 10472
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

void Function_56(var uParam0, bool bParam1) //Position: 0x2926 / 10534
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_57(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2935 / 10549
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

var Function_58(bool bParam0) //Position: 0x2A14 / 10772
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

void Function_59(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2A42 / 10818
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

void Function_60(int iParam0) //Position: 0x2B1D / 11037
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_61(bool bParam0, bool bParam1, int iParam2) //Position: 0x2B2C / 11052
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_62() //Position: 0x2B4B / 11083
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("RidgewoodFarm_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("RidgewoodFarm_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_region", 3, -3264.153f, 49.20582f, 2703.926f, 0.0f, -34.14004f, 0.0f, 94.33396f, 45.15632f, 75.26651f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_LivRoom", 2, -3250.143f, 18.12427f, 2727.188f, 0.0f, 0.0f, 0.0f, 9.298154f, 7.495564f, 6.836888f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_parl01", 2, -3251.875f, 17.48895f, 2718.802f, 0.0f, 0.0f, 0.0f, 6.124009f, 2.57127f, 9.151287f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_dinn01", 2, -3239.811f, 17.54118f, 2724.017f, 0.0f, 0.0f, 0.0f, 4.606529f, 2.467668f, 12.7158f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_bedr01", 2, -3240.619f, 20.91234f, 2726.44f, 0.0f, 0.0f, 0.0f, 6.177708f, 2.923321f, 8.239242f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_bedr02", 2, -3241.886f, 20.60015f, 2719.802f, 0.0f, 0.0f, 0.0f, 8.183218f, 2.298313f, 4.336887f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_off02", 2, -3248.751f, 20.95132f, 2719.736f, 0.0f, 0.0f, 0.0f, 5.010804f, 2.998919f, 4.459445f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_barn01", 2, -3301.7f, 20.27481f, 2669.754f, 0.0f, 19.33793f, 0.0f, 15.61962f, 6.312437f, 15.08843f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_barn02", 2, -3215.49f, 20.11347f, 2713.295f, 0.0f, 0.0f, 0.0f, 7.962194f, 7.788088f, 7.14234f);
	Local_0.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_vera01", 2, -3256.682f, 20.11433f, 2725.56f, 0.0f, 0.0f, 0.0f, 2.788457f, 1.504602f, 16.02182f);
	Local_0.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_vera02", 2, -3248.611f, 20.20925f, 2732.302f, 0.0f, 0.0f, 0.0f, 13.18951f, 1.533193f, 2.703068f);
	Local_0.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_vera03", 2, -3256.647f, 16.88021f, 2725.466f, 0.0f, 0.0f, 0.0f, 2.747674f, 1.493474f, 16.478f);
	Local_0.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_vera04", 2, -3248.378f, 16.8964f, 2732.262f, 0.0f, 0.0f, 0.0f, 13.83223f, 1.40656f, 2.4174f);
	Local_0.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_HorsePop_set");
	(*&Local_0 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder92", 3, -3298.634f, 15.05884f, 2726.966f, 0.0f, -19.21649f, 0.0f, 15.49037f, 11.13323f, 7.612956f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 56)[0]);
	(*&Local_0 + 56)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder93", 3, -3284.678f, 15.05884f, 2736.59f, 0.0f, 48.83169f, 0.0f, 8.475739f, 7.324113f, 13.29082f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 56)[1]);
	(*&Local_0 + 56)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder94", 3, -3275.168f, 15.05884f, 2745.649f, 0.0f, 67.36848f, 0.0f, 8.151397f, 8.881031f, 4.604616f);
	ADD_TO_VOLUME_SET(Local_0.f_72, (*&Local_0 + 56)[2]);
	Local_0.f_96 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_dogs_set");
	(*&Local_0 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder32", 3, -3243.369f, 15.05884f, 2748.66f, 0.0f, -0.251553f, 0.0f, 37.93393f, 5.107837f, 15.01955f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 76)[0]);
	(*&Local_0 + 76)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder33", 3, -3220.689f, 15.05884f, 2717.559f, 0.0f, 0.8755063f, 0.0f, 12.66241f, 5.107837f, 27.0396f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 76)[1]);
	(*&Local_0 + 76)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder34", 3, -3300.813f, 15.05884f, 2672.583f, 0.0f, 28.18284f, 0.0f, 14.20448f, 5.107837f, 27.43038f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 76)[2]);
	(*&Local_0 + 76)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder36", 3, -3284.261f, 15.05884f, 2718.602f, 0.0f, 41.84795f, 0.0f, 21.83037f, 18.15389f, 28.22598f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 76)[3]);
	Local_0.f_120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_raccoons_set");
	(*&Local_0 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder64", 3, -3216.027f, 16.77903f, 2714.351f, 0.0f, 20.0f, 0.0f, 7.578231f, 7.051219f, 7.001687f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 100)[0]);
	(*&Local_0 + 100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder55", 3, -3302.347f, 16.77903f, 2670.154f, 0.0f, 20.0f, 0.0f, 35.95803f, 20.21532f, 33.22238f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 100)[1]);
	(*&Local_0 + 100)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder56", 3, -3284.954f, 16.77903f, 2765.945f, 0.0f, -27.53222f, 0.0f, 38.26997f, 7.874838f, 12.51732f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 100)[2]);
	(*&Local_0 + 100)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder57", 3, -3216.72f, 16.77903f, 2676.175f, 0.0f, 20.0f, 0.0f, 17.78997f, 16.5528f, 16.43653f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 100)[3]);
	Local_0.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_owls_set");
	(*&Local_0 + 124)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder75", 3, -3303.92f, 15.05884f, 2669.273f, 0.0f, 20.0f, 0.0f, 24.12783f, 23.294f, 32.31517f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 124)[0]);
	(*&Local_0 + 124)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder66", 3, -3210.971f, 15.05884f, 2704.886f, 0.0f, 20.0f, 0.0f, 21.75958f, 15.30112f, 50.12724f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 124)[1]);
	(*&Local_0 + 124)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder70", 3, -3315.565f, 15.05884f, 2712.403f, 0.0f, 20.0f, 0.0f, 9.78629f, 9.448086f, 9.514171f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 124)[2]);
	(*&Local_0 + 124)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder71", 3, -3266.101f, 15.05884f, 2760.225f, 0.0f, 61.22768f, 0.0f, 21.86185f, 16.1686f, 48.25402f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 124)[3]);
	Local_0.f_156 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_cows_set");
	(*&Local_0 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder102", 3, -3257.671f, 17.06671f, 2685.014f, 0.0f, 4.737795f, 0.0f, 18.65018f, 6.25747f, 13.14779f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 148)[0]);
	Local_0.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_Pantry", 2, -3244.175f, 17.34851f, 2720.905f, 0.0f, 0.0f, 0.0f, 3.477247f, 2.387379f, 5.385639f);
	Local_0.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_shitter", 2, -3253.213f, 20.95972f, 2719.78f, 0.0f, 0.0f, 0.0f, 3.600734f, 3.022227f, 4.772161f);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nrwfv_room", 2, -3245.355f, 17.5483f, 2715.909f, 0.0f, 0.0f, 0.0f, 6.291032f, 2.458634f, 3.998141f);
	Local_0.f_192 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_Business_set");
	(*&Local_0 + 172)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_Business_01", 2, -3256.595f, 16.24186f, 2725.421f, 0.0f, 0.0f, 0.0f, 3.234093f, 4.684533f, 17.47336f);
	ADD_TO_VOLUME_SET(Local_0.f_192, (*&Local_0 + 172)[0]);
	(*&Local_0 + 172)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_Business_03", 2, -3251.71f, 17.17985f, 2722.063f, 0.0f, 0.0f, 0.0f, 5.494739f, 2.265956f, 2.857056f);
	ADD_TO_VOLUME_SET(Local_0.f_192, (*&Local_0 + 172)[1]);
	(*&Local_0 + 172)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_Business_04", 2, -3250.407f, 17.27088f, 2727.266f, 0.0f, 0.0f, 0.0f, 9.81743f, 5.749177f, 7.040175f);
	ADD_TO_VOLUME_SET(Local_0.f_192, (*&Local_0 + 172)[2]);
	(*&Local_0 + 172)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_Business_02", 2, -3247.73f, 16.04649f, 2732.62f, 0.0f, 0.0f, 0.0f, 14.2982f, 5.749177f, 3.199438f);
	ADD_TO_VOLUME_SET(Local_0.f_192, (*&Local_0 + 172)[3]);
	Local_0.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nrwfv_cats", 2, -3246.208f, 15.90478f, 2724.052f, 0.0f, 0.0f, 0.0f, 16.6931f, 12.82973f, 12.82973f);
	Local_0.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_birds_set");
	(*&Local_0 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_birds_01", 3, -3256.221f, 19.57644f, 2709.422f, 0.0f, 20.0f, 0.0f, 76.0871f, 76.0871f, 76.0871f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 200)[0]);
	Local_0.f_224 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_chickens_set");
	(*&Local_0 + 212)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_chickens_01", 3, -3262.828f, 15.05884f, 2735.321f, 0.0f, -45.29982f, 0.0f, 15.49037f, 11.13323f, 7.612956f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 212)[0]);
	(*&Local_0 + 212)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_chickens_02", 3, -3230.802f, 15.05884f, 2703.096f, 0.0f, -45.29982f, 0.0f, 11.00629f, 7.910437f, 10.53522f);
	ADD_TO_VOLUME_SET(Local_0.f_224, (*&Local_0 + 212)[1]);
	Local_0.f_240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "rwfv_house_set");
	(*&Local_0 + 228)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_house_02", 2, -3249.603f, 20.47319f, 2725.421f, 0.0f, 0.0f, 0.0f, 17.64629f, 10.71592f, 17.47336f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 228)[0]);
	(*&Local_0 + 228)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "rwfv_house_01", 2, -3244.629f, 20.47319f, 2722.312f, 0.0f, 0.0f, 0.0f, 22.27847f, 10.71592f, 18.30269f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 228)[1]);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwff_report_crime_road", -3180.574f, 19.538f, 2782.187f, 0.0f, 236.148f, 0.0f);
	*(&Local_0 + 244) = { -3250.99f, 16.33392f, 2727.038f };
	*(&Local_0 + 244 + 12) = { 0.0f, 87.9498f, 0.0f };
	Local_0.f_268 = CREATE_POINT_IN_LAYOUT(Local_0, "rwff_interiorPoint_house", -3250.99f, 16.33392f, 2727.038f, 0.0f, 87.9498f, 0.0f);
	*(&Local_0 + 272) = { -3300.639f, 17.51995f, 2672.024f };
	*(&Local_0 + 272 + 12) = { 0.0f, 197.888f, 0.0f };
	Local_0.f_296 = CREATE_POINT_IN_LAYOUT(Local_0, "rwff_interiorPoint_barn", -3300.639f, 17.51995f, 2672.024f, 0.0f, 197.888f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos1", -3192.804f, 27.311f, 2836.482f, -6.111f, 20.609f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos2", -3262.922f, 21.666f, 2804.836f, -2.832f, -15.821f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos3", -3322.214f, 26.665f, 2683.365f, -7.406f, -111.837f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos4", -3221.202f, 32.993f, 2675.962f, -17.174f, 165.503f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos5", -3399.884f, 26.884f, 2721.15f, -6.192f, -82.692f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos6", -3281.958f, 19.126f, 2692.12f, 2.589f, -136.277f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos7", -3239.367f, 17.448f, 2699.803f, 7.403f, -138.669f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos8", -3225.262f, 18.91f, 2765.775f, 1.6f, 33.082f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos9", -3292.663f, 18.188f, 2724.839f, 0.484f, -87.77f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "rwf_vista_cam_pos10", -3269.197f, 17.593f, 2746.807f, 8.288f, -51.554f, 0.0f);
	*(&Local_0 + 300) = { -3241.045f, 16.31232f, 2728.714f };
	*(&Local_0 + 300 + 12) = { 0.0f, -89.66864f, 0.0f };
	Local_0.f_324 = CREATE_POINT_IN_LAYOUT(Local_0, "rwff_interiorSettlement01", -3241.045f, 16.31232f, 2728.714f, 0.0f, -89.66864f, 0.0f);
	*(&Local_0 + 328) = { -3301.622f, 17.51995f, 2669.913f };
	*(&Local_0 + 328 + 12) = { 0.0f, -159.146f, 0.0f };
	Local_0.f_352 = CREATE_POINT_IN_LAYOUT(Local_0, "rwff_interiorSettlement02", -3301.622f, 17.51995f, 2669.913f, 0.0f, -159.146f, 0.0f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x3BC3 / 15299
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

var Function_64() //Position: 0x3C0C / 15372
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(bool bParam0, var uParam1) //Position: 0x3C21 / 15393
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

