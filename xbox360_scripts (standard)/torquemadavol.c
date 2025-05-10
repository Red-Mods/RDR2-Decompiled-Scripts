//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 193
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<325> Local_0 = { 0, 2, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_82 = 0;
	Local_83 = { StackVal, ScriptParam_0 };
	Function_65("Initializing Torquemada Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_85 = 500;
		uLocal_86 = Function_64();
		switch (iLocal_82)
		{
			case 0x00000000:
				if (Function_62())
				{
					bLocal_124 = Function_61(Local_0, "torquemada", ScriptParam_0);
					iLocal_82 = 1;
				}
				bLocal_85 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_124))
				{
					iLocal_82 = 2;
				}
				bLocal_85 = false;
				break;
			
			case 0x00000002:
				Function_60(&uLocal_87);
				Function_59(&uLocal_87, &uLocal_90, 4, Local_0.f_16, 4294967295, 4);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_116, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_120, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_124, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_128, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_132, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_136, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_140, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_144, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_148, 4294967295, 258);
				Function_59(&uLocal_87, &uLocal_90, 5, Local_0.f_152, 4294967295, 258);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 7, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 8, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "mainStructure01", 10, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "sideStructureSmall01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "sideStructureLarge01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&bLocal_125, bLocal_124, "sideStructureLarge01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_82 = 3;
				bLocal_85 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_83]), 16);
				Function_55("Finished Initializing Torquemada Volumes", 5.0f);
				iLocal_82 = 4;
				bLocal_85 = false;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_87, &uLocal_90, uLocal_86, ScriptParam_0);
				Function_12(&bLocal_125, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_85 = false;
				break;
		}
		WAIT(bLocal_85);
	}
	Function_4(&uLocal_87, &uLocal_90);
	Function_3(&bLocal_125);
	Function_2();
	Function_1(&(Global_29008[Local_83]), 16);
	Function_55("Unloaded Torquemada Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x42B / 1067
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x442 / 1090
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x44D / 1101
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

void Function_4(var uParam0, int iParam1) //Position: 0x4A7 / 1191
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4FF / 1279
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

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5DC / 1500
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
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_7() //Position: 0x755 / 1877
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x761 / 1889
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

void Function_9(int iParam0) //Position: 0x7A7 / 1959
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

void Function_10(var uParam0, int iParam1) //Position: 0x7ED / 2029
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x807 / 2055
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x824 / 2084
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

void Function_13(var uParam0, int iParam1) //Position: 0xBF0 / 3056
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xC01 / 3073
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xC1B / 3099
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xC2D / 3117
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xC36 / 3126
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xCB7 / 3255
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

void Function_19(int iParam0) //Position: 0x10D0 / 4304
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

float Function_20(int iParam0) //Position: 0x11CF / 4559
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x120C / 4620
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x1245 / 4677
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

var Function_23(int iParam0) //Position: 0x12AC / 4780
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1304 / 4868
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1524 / 5412
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

var Function_26() //Position: 0x1B51 / 6993
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1B59 / 7001
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1B6A / 7018
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

struct<32> Function_29(char* cParam0, char* cParam1) //Position: 0x1C5F / 7263
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1C78 / 7288
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1CDD / 7389
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1CEF / 7407
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

int Function_33(int iParam0) //Position: 0x1E1F / 7711
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1E2E / 7726
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1FC8 / 8136
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

void Function_36(var uParam0, int iParam1) //Position: 0x21E2 / 8674
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x21EF / 8687
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2215 / 8725
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2231 / 8753
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

void Function_40() //Position: 0x24C1 / 9409
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2524 / 9508
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

bool Function_42(bool bParam0) //Position: 0x2553 / 9555
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

int Function_43(int iParam0) //Position: 0x25C9 / 9673
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x25DA / 9690
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

bool Function_45(int iParam0) //Position: 0x25F3 / 9715
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2609 / 9737
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x261E / 9758
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x263C / 9788
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

bool Function_49(int iParam0) //Position: 0x26E0 / 9952
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x26F6 / 9974
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2707 / 9991
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
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_6(StackVal, bVar1, bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x2779 / 10105
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x279E / 10142
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

bool Function_54(int iParam0) //Position: 0x27BB / 10171
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x27D7 / 10199
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

void Function_56(var uParam0, bool bParam1) //Position: 0x2815 / 10261
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

var Function_57(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2824 / 10276
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

var Function_58(bool bParam0) //Position: 0x2903 / 10499
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

void Function_59(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2931 / 10545
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

void Function_60(int iParam0) //Position: 0x2A0C / 10764
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_61(bool bParam0, bool bParam1, int iParam2) //Position: 0x2A1B / 10779
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_62() //Position: 0x2A3A / 10810
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("Torquemada_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Torquemada_layout");
	}
	Local_0.f_16 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "torv_region_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, 343,8638f, 83,70656f, 3447,559f, 0.0f, -19,97266f, 0.0f, 13,5547f, 9,563858f, 20,11129f);
	ADD_TO_VOLUME_SET(Local_0.f_16, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, 357,7298f, 83,36726f, 3450,291f, 0.0f, 71,99593f, 0.0f, 16,65753f, 10,3152f, 28,99726f);
	ADD_TO_VOLUME_SET(Local_0.f_16, (*&Local_0 + 4)[1]);
	Local_0.f_56 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "torv_crows_set");
	(*&Local_0 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, 344,5119f, 77,10975f, 3433,463f, 0.0f, 20.0f, 0.0f, 3,501337f, 18,20494f, 4,354767f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[0]);
	(*&Local_0 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, 365,5544f, 77,34114f, 3458,394f, 0.0f, 20.0f, 0.0f, 3,501337f, 18,20494f, 4,354767f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[1]);
	(*&Local_0 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, 356,2242f, 77,28962f, 3438,825f, 0.0f, 20.0f, 0.0f, 3,501337f, 18,20494f, 4,354767f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[2]);
	(*&Local_0 + 20)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, 376,6462f, 77,36952f, 3451,233f, 0.0f, 20.0f, 0.0f, 3,501337f, 18,20494f, 4,354767f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[3]);
	(*&Local_0 + 20)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, 335,7907f, 78,73154f, 3463,131f, 0.0f, 20.0f, 0.0f, 3,501337f, 18,20494f, 4,354767f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[4]);
	(*&Local_0 + 20)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder17", 3, 351,5475f, 86,88168f, 3450,636f, 0.0f, 20.0f, 0.0f, 28,65788f, 13,48325f, 23,1594f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[5]);
	(*&Local_0 + 20)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, 473,7892f, 78,22698f, 3425,832f, 0.0f, -8,619277f, 0.0f, 42,30489f, 9,904909f, 60,76411f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[6]);
	(*&Local_0 + 20)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, 470,3226f, 78,78984f, 3277,133f, 0.0f, 20.0f, 0.0f, 48,07328f, 31,50612f, 50,76318f);
	ADD_TO_VOLUME_SET(Local_0.f_56, (*&Local_0 + 20)[7]);
	Local_0.f_76 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "torv_Vultures_set");
	(*&Local_0 + 60)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, 347,7664f, 77,48067f, 3463,811f, 0.0f, 20.0f, 0.0f, 3,244675f, 40,15587f, 3,623897f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 60)[0]);
	(*&Local_0 + 60)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, 342,4102f, 77,1867f, 3433,245f, 0.0f, 20.0f, 0.0f, 3,244675f, 40,15587f, 3,623897f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 60)[1]);
	(*&Local_0 + 60)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, 376,4134f, 77,33173f, 3450,798f, 0.0f, 20.0f, 0.0f, 3,244675f, 40,15587f, 3,623897f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 60)[2]);
	Local_0.f_96 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "torv_snakes_set");
	(*&Local_0 + 80)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, 373,2697f, 76,60158f, 3458,883f, 0.0f, 20.0f, 0.0f, 4,366942f, 8,428274f, 4,279539f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 80)[0]);
	(*&Local_0 + 80)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, 347,272f, 78,20223f, 3465,144f, 0.0f, 20.0f, 0.0f, 4,366942f, 8,428274f, 4,279539f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 80)[1]);
	(*&Local_0 + 80)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, 356,9259f, 77,10281f, 3436,677f, 0.0f, 20.0f, 0.0f, 4,366942f, 8,428274f, 4,279539f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 80)[2]);
	Local_0.f_112 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "torv_dogs_set");
	(*&Local_0 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, 352,1625f, 77,86192f, 3459,702f, 0.0f, 20.0f, 0.0f, 8,99655f, 16,38951f, 5,806044f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 100)[0]);
	(*&Local_0 + 100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, 358,8303f, 77,25389f, 3444,775f, 0.0f, 20.0f, 0.0f, 8,99655f, 16,38951f, 5,806044f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 100)[1]);
	Local_0.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "ntorv_room", 2, 366,1804f, 75,83167f, 3445,155f, 0.0f, -24,82099f, 0.0f, 5,540013f, 7,186909f, 7,540816f);
	Local_0.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room1", 2, 356,7372f, 77,45875f, 3462,138f, 0.0f, -29,63071f, 0.0f, 5,497144f, 6,141948f, 5,912353f);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room2", 2, 347,6194f, 77,60666f, 3446,988f, 0.0f, -15,57808f, 0.0f, 4,382833f, 3,611725f, 5,329807f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room3", 2, 344,0621f, 77,4497f, 3441,954f, 0.0f, -14,57549f, 0.0f, 4,646556f, 3,942609f, 5,677965f);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room4", 2, 338,2238f, 75,74802f, 3451,946f, 0.0f, -15,79145f, 0.0f, 4,688097f, 7,356951f, 5,653948f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room5", 2, 341,1115f, 80,53885f, 3453,286f, 0.0f, -14,71984f, 0.0f, 4,309362f, 3,288889f, 7,747652f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room6", 2, 342,0912f, 80,86906f, 3447,061f, 0.0f, -15,39682f, 0.0f, 6,061201f, 2,916818f, 4,810972f);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room7", 2, 345,6589f, 79,12006f, 3454,608f, 0.0f, -14,61381f, 0.0f, 4,84095f, 5,947565f, 7,498854f);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_room8", 2, 343,1572f, 83,87293f, 3452,553f, 0.0f, -15,13664f, 0,1072134f, 4,882004f, 4,34183f, 4,688091f);
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_LargeAdb", 2, 343,9077f, 81,15688f, 3449,598f, 1,258876f, -14,858f, -1,572635f, 15,27723f, 19,07902f, 23,3922f);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "torv_fff", 2, 354,9113f, 77,25133f, 3447,742f, 0.0f, -13,93446f, 0.0f, 6,5696f, 3,323845f, 6,448653f);
	*(&Local_0 + 160) = { 371,255f, 76,298f, 3456,361f };
	*(&Local_0 + 160 + 12) = { 0.0f, 66,803f, 0.0f };
	Local_0.f_184 = CREATE_POINT_IN_LAYOUT(Local_0, "torf_PlayerDuel1", 371,255f, 76,298f, 3456,361f, 0.0f, 66,803f, 0.0f);
	*(&Local_0 + 188) = { 363,555f, 76,298f, 3452,709f };
	*(&Local_0 + 188 + 12) = { 0.0f, -118,1218f, 0.0f };
	Local_0.f_212 = CREATE_POINT_IN_LAYOUT(Local_0, "torf_enDuel1", 363,555f, 76,298f, 3452,709f, 0.0f, -118,1218f, 0.0f);
	*(&Local_0 + 216) = { 438,026f, 78,306f, 3473,18f };
	*(&Local_0 + 216 + 12) = { 0.0f, 301,857f, 0.0f };
	Local_0.f_240 = CREATE_POINT_IN_LAYOUT(Local_0, "torf_report_crime_road", 438,026f, 78,306f, 3473,18f, 0.0f, 301,857f, 0.0f);
	*(&Local_0 + 244) = { 366,4281f, 76,29372f, 3446,373f };
	*(&Local_0 + 244 + 12) = { 0.0f, 155,1152f, 0.0f };
	Local_0.f_268 = CREATE_POINT_IN_LAYOUT(Local_0, "torf_interiorPoint_room", 366,4281f, 76,29372f, 3446,373f, 0.0f, 155,1152f, 0.0f);
	*(&Local_0 + 272) = { 356,6224f, 77,4851f, 3461,947f };
	*(&Local_0 + 272 + 12) = { 0.0f, 23,02696f, 0.0f };
	Local_0.f_296 = CREATE_POINT_IN_LAYOUT(Local_0, "torf_interiorPoint_room1", 356,6224f, 77,4851f, 3461,947f, 0.0f, 23,02696f, 0.0f);
	*(&Local_0 + 300) = { 345,7306f, 79,00951f, 3454,795f };
	*(&Local_0 + 300 + 12) = { 0.0f, -104,5813f, 0.0f };
	Local_0.f_324 = CREATE_POINT_IN_LAYOUT(Local_0, "torf_interiorPoint_room2", 345,7306f, 79,00951f, 3454,795f, 0.0f, -104,5813f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos1", 434,254f, 72,458f, 3552,796f, -4,384f, 54,65f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos2", 260,281f, 31,201f, 3557,411f, 8,243f, -24,491f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos3", 188,516f, 32,072f, 3430,526f, 4,209f, -85,073f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos4", 297,836f, 82,196f, 3466,89f, -8,115f, -61,416f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos5", 467,073f, 66,586f, 3286,902f, -15,549f, 140,236f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos6", 369,718f, 82,743f, 3450,018f, -14,88f, -10,587f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos7", 361,09f, 83,516f, 3422,926f, -12,351f, 122,525f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos8", 385,144f, 82,325f, 3440,104f, -13,433f, 117,617f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos9", 411,194f, 81,147f, 3475,333f, -7,743f, 86,657f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "tor_vista_cam_pos10", 364,796f, 77,913f, 3439,614f, 5,482f, 125,076f, 0.0f);
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x3741 / 14145
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

var Function_64() //Position: 0x378A / 14218
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(bool bParam0, var uParam1) //Position: 0x379F / 14239
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

