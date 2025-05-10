//Decompiled with MagicRDR v1.0
//Function Count : 70
//Statics Count : 187
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<293> Local_0 = { 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_74 = 0;
	Local_75 = { StackVal, ScriptParam_0 };
	Function_69("Initializing ElPresidio Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_77 = 500;
		uLocal_78 = Function_68();
		switch (iLocal_74)
		{
			case 0x00000000:
				if (Function_66())
				{
					bLocal_113 = Function_65(Local_0, "nfortDiego", ScriptParam_0);
					iLocal_74 = 1;
				}
				iLocal_77 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_113))
				{
					iLocal_74 = 2;
				}
				iLocal_77 = 0;
				break;
			
			case 0x00000002:
				Function_64(&uLocal_79);
				Function_63(StackVal, &uLocal_79, &uLocal_82, 4, 4294967295, 4);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_64, 4294967295, 266);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_84, 4294967295, 266);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_88, 4294967295, 266);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_144, 4294967295, 266);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_92, 4294967295, 524554);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_108, 4294967295, 266);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_112, 4294967295, 131338);
				Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_128, 4294967295, 33034);
				Function_61(&iLocal_114, bLocal_113, "tower01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "tower02", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "tower02", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "tower02", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 1, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 20, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 50, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 51, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 98, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "ent", 99, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "gates", 96, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_61(&iLocal_114, bLocal_113, "gates", 97, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				if (Function_57(26, 0))
				{
					Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_248, 4294967295, 0x4000010a);
				}
				else if (Function_57(36, 0) && !Function_57(41, 0))
				{
					Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_248, 4294967295, 0x4000010a);
				}
				else
				{
					Function_63(&uLocal_79, &uLocal_82, 5, Local_0.f_248, 4294967295, 0x4000018a);
				}
				iLocal_74 = 3;
				iLocal_77 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_75]), 16);
				Function_55("Finished Initializing ElPresidio Volumes", 5.0f);
				iLocal_74 = 4;
				iLocal_77 = 0;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_79, &uLocal_82, uLocal_78, ScriptParam_0);
				Function_12(&iLocal_114, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_77 = 0;
				break;
		}
		WAIT(iLocal_77);
	}
	Function_4(&uLocal_79, &uLocal_82);
	Function_3(&iLocal_114);
	Function_2();
	Function_1(&(Global_29008[Local_75]), 16);
	Function_55("Unloaded ElPresidio Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x3EC / 1004
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x403 / 1027
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x40E / 1038
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

void Function_4(var uParam0, int iParam1) //Position: 0x468 / 1128
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x4C0 / 1216
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x5A6 / 1446
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

void Function_7() //Position: 0x71F / 1823
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x72B / 1835
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

void Function_9(int iParam0) //Position: 0x771 / 1905
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

void Function_10(var uParam0, int iParam1) //Position: 0x7B7 / 1975
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x7D1 / 2001
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x7EE / 2030
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
							if (IS_ACTOR_IN_VOLUME(Function_68(), uParam0[iVar05]->f_12))
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
							if (IS_ACTOR_IN_VOLUME(Function_68(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_68(), uParam0[iVar05]->f_12))
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

void Function_13(var uParam0, int iParam1) //Position: 0xBBA / 3002
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xBCB / 3019
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xBE5 / 3045
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xBF7 / 3063
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xC00 / 3072
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xC81 / 3201
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

void Function_19(int iParam0) //Position: 0x109A / 4250
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

float Function_20(int iParam0) //Position: 0x1199 / 4505
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x11D6 / 4566
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x120F / 4623
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

var Function_23(int iParam0) //Position: 0x1276 / 4726
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x12CE / 4814
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x14EE / 5358
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

var Function_26() //Position: 0x1B1B / 6939
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1B23 / 6947
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1B34 / 6964
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1C29 / 7209
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1C42 / 7234
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1CA7 / 7335
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1CB9 / 7353
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

int Function_33(int iParam0) //Position: 0x1DE9 / 7657
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1DF8 / 7672
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x1F92 / 8082
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

void Function_36(var uParam0, int iParam1) //Position: 0x21D6 / 8662
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x21E3 / 8675
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2209 / 8713
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2225 / 8741
{
	vector3 vVar0;
	var uVar3;
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, bVar5);
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

void Function_40() //Position: 0x24B5 / 9397
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2518 / 9496
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

bool Function_42(bool bParam0) //Position: 0x2547 / 9543
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

int Function_43(int iParam0) //Position: 0x25BD / 9661
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x25CE / 9678
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

bool Function_45(int iParam0) //Position: 0x25E7 / 9703
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x25FD / 9725
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2612 / 9746
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2630 / 9776
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

bool Function_49(int iParam0) //Position: 0x26D4 / 9940
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x26EA / 9962
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x26FB / 9979
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

void Function_52(int iParam0, int iParam1) //Position: 0x276D / 10093
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2792 / 10130
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

bool Function_54(int iParam0) //Position: 0x27AF / 10159
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x27CB / 10187
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

void Function_56(var uParam0, int iParam1) //Position: 0x2809 / 10249
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_57(int iParam0, bool bParam1) //Position: 0x2818 / 10264
{
	int iVar0;
	
	iVar0 = Function_59(iParam0);
	if (!Function_58(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_58(int iParam0) //Position: 0x2855 / 10325
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_59(int iParam0) //Position: 0x286C / 10348
{
	if (!Function_60(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_60(bool bParam0) //Position: 0x2886 / 10374
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_61(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x289C / 10396
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_62(uParam0);
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

var Function_62(bool bParam0) //Position: 0x297B / 10619
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

void Function_63(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x29A9 / 10665
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

void Function_64(int iParam0) //Position: 0x2A84 / 10884
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_65(bool bParam0, bool bParam1, int iParam2) //Position: 0x2A93 / 10899
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_66() //Position: 0x2AB2 / 10930
{
	var uVar0;
	
	Function_67(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("ElPresidio_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("ElPresidio_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_region", 3, -707.5112f, 74.21172f, 3310.04f, 0.0f, -24.84715f, 0.0f, 52.76575f, 14.96046f, 35.42257f);
	Local_0.f_60 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_crows_set");
	(*&Local_0 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -695.2917f, 76.715f, 3320.708f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[0]);
	(*&Local_0 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -695.2917f, 76.715f, 3285.857f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[1]);
	(*&Local_0 + 8)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -732.0003f, 86.12825f, 3322.521f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[2]);
	(*&Local_0 + 8)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -731.7465f, 85.47977f, 3300.019f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[3]);
	(*&Local_0 + 8)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -668.0f, 76.715f, 3300.297f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[4]);
	(*&Local_0 + 8)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -701.7898f, 76.71498f, 3304.0f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[5]);
	(*&Local_0 + 8)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -708.0286f, 84.98942f, 3318.729f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[6]);
	(*&Local_0 + 8)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -732.0f, 76.715f, 3281.534f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[7]);
	(*&Local_0 + 8)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -668.0f, 76.92079f, 3320.82f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[8]);
	(*&Local_0 + 8)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -684.0f, 76.715f, 3308.0f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[9]);
	(*&Local_0 + 8)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -720.0f, 85.75028f, 3324.0f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[10]);
	(*&Local_0 + 8)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -695.2917f, 76.715f, 3320.708f, 0.0f, 20.0f, 0.0f, 3.721891f, 16.80466f, 4.066686f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 8)[11]);
	Local_0.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_Storage", 2, -719.0616f, 72.73853f, 3291.609f, 0.0f, -40.13278f, 0.0f, 4.4127f, 4.169909f, 6.941234f);
	Local_0.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_dingroom_set");
	(*&Local_0 + 68)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box1", 2, -712.6595f, 69.00008f, 3284.277f, 0.0f, -39.57473f, 0.0f, 6.385563f, 3.365192f, 12.98475f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 68)[0]);
	(*&Local_0 + 68)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box2", 2, -712.1272f, 71.22755f, 3285.054f, 30.01221f, -30.66315f, -50.76921f, 2.278821f, 1.601488f, 11.70467f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 68)[1]);
	(*&Local_0 + 68)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pasted__Box2", 2, -713.4344f, 70.87055f, 3283.302f, -29.96011f, -29.02066f, 51.75747f, 2.235804f, 1.914191f, 12.21636f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 68)[2]);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_guardTower", 2, -720.9913f, 77.84858f, 3311.41f, 0.0f, 49.97873f, 0.0f, 6.425625f, 13.72349f, 6.440312f);
	Local_0.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_blcksmith", 2, -672.3039f, 63.51814f, 3319.796f, 0.0f, -32.76761f, 0.0f, 2.836351f, 3.164442f, 4.863935f);
	Local_0.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_barracks_set");
	(*&Local_0 + 96)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box", 2, -722.5341f, 69.01999f, 3296.181f, -0.5848145f, -38.75123f, 0.0f, 6.315565f, 3.067029f, 8.547754f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 96)[0]);
	(*&Local_0 + 96)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box3", 2, -725.767f, 68.85418f, 3293.803f, 0.990846f, -39.09968f, -0.4962363f, 1.811276f, 3.292553f, 7.32768f);
	ADD_TO_VOLUME_SET(Local_0.f_108, (*&Local_0 + 96)[1]);
	Local_0.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_Stables", 2, -712.74f, 64.06474f, 3283.403f, 0.0f, -40.21658f, 0.0f, 4.8132f, 5.477965f, 11.27288f);
	Local_0.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_jail_set");
	(*&Local_0 + 116)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box5", 2, -723.0415f, 64.80584f, 3294.804f, 0.8582109f, -40.87692f, -0.9863782f, 3.487631f, 4.606737f, 4.447608f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 116)[0]);
	(*&Local_0 + 116)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box4", 2, -724.1627f, 63.3417f, 3298.077f, 0.2534748f, -39.53408f, 0.6213991f, 6.022362f, 7.616711f, 2.070205f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 116)[1]);
	Local_0.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "GuardTwr1_set");
	(*&Local_0 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box6", 2, -666.8095f, 72.71178f, 3308.708f, 0.0f, 40.18478f, 0.0f, 6.891106f, 6.592907f, 6.686936f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 132)[0]);
	(*&Local_0 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box7", 2, -666.8367f, 67.11434f, 3308.63f, 0.0f, 39.99707f, 0.0f, 4.923805f, 4.610031f, 6.082325f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 132)[1]);
	Local_0.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_vultures_set");
	(*&Local_0 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder20", 3, -720.0446f, 83.39287f, 3310.952f, 0.0f, 20.0f, 0.0f, 7.186772f, 19.81214f, 8.41792f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 148)[0]);
	(*&Local_0 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -712.3317f, 72.53914f, 3343.668f, 0.0f, 20.0f, 0.0f, 4.743275f, 19.81214f, 4.528764f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 148)[1]);
	(*&Local_0 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -666.5614f, 76.54218f, 3308.863f, 0.0f, 20.0f, 0.0f, 4.743275f, 19.81214f, 4.528764f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 148)[2]);
	(*&Local_0 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, -716.8619f, 72.53914f, 3288.467f, 0.0f, 47.22622f, 0.0f, 15.44945f, 19.81214f, 8.179352f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 148)[3]);
	(*&Local_0 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -712.0081f, 77.08761f, 3329.285f, 0.0f, 20.0f, 0.0f, 4.743275f, 19.81214f, 4.528764f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 148)[4]);
	(*&Local_0 + 148)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder17", 3, -748.0f, 72.53914f, 3292.0f, 0.0f, 20.0f, 0.0f, 4.743275f, 19.81214f, 4.528764f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 148)[5]);
	Local_0.f_200 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_snakes_set");
	(*&Local_0 + 180)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder24", 3, -727.6633f, 65.09528f, 3334.026f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 180)[0]);
	(*&Local_0 + 180)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder21", 3, -660.0f, 61.46362f, 3324.0f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 180)[1]);
	(*&Local_0 + 180)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder18", 3, -720.0f, 63.24707f, 3280.0f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 180)[2]);
	(*&Local_0 + 180)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder19", 3, -696.0f, 63.24707f, 3324.0f, 0.0f, 20.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_200, (*&Local_0 + 180)[3]);
	Local_0.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_armadillo_set");
	(*&Local_0 + 204)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder22", 3, -732.0541f, 73.32635f, 3312.037f, 0.0f, 20.0f, 0.0f, 2.714829f, 3.798216f, 2.781002f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 204)[0]);
	(*&Local_0 + 204)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder23", 3, -725.2516f, 65.14702f, 3332.009f, 0.0f, 20.0f, 0.0f, 2.714829f, 3.798216f, 2.781002f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 204)[1]);
	Local_0.f_248 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_fort_set");
	(*&Local_0 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_fort08", 2, -715.0193f, 65.33331f, 3274.772f, 0.0f, -11.43809f, 0.0f, 13.06075f, 19.08582f, 4.097171f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[0]);
	(*&Local_0 + 220)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_fort02", 3, -686.6598f, 67.40527f, 3306.456f, 0.0f, 50.57193f, 0.0f, 19.08704f, 12.07688f, 26.81299f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[1]);
	(*&Local_0 + 220)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_fort03", 3, -716.6916f, 75.77631f, 3315.898f, 0.0f, -30.37475f, 0.0f, 9.343771f, 9.401356f, 11.25166f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[2]);
	(*&Local_0 + 220)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_fort05", 3, -727.5993f, 75.77631f, 3302.496f, 0.0f, -95.11723f, 0.0f, 7.278977f, 8.053549f, 11.84987f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[3]);
	(*&Local_0 + 220)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_fort06", 2, -722.388f, 65.33331f, 3274.708f, 0.0f, 20.54656f, 0.0f, 4.097171f, 19.08582f, 4.097171f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[4]);
	(*&Local_0 + 220)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_fort07", 2, -711.6046f, 65.33331f, 3292.385f, 0.0f, 49.49109f, 0.0f, 28.6266f, 41.83239f, 24.19036f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 220)[5]);
	Local_0.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "fodv_soldiers_set");
	(*&Local_0 + 252)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_soldiers02", 2, -705.7177f, 69.00008f, 3296.333f, 0.0f, -39.57473f, 0.0f, 17.92455f, 6.053961f, 17.40948f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 252)[0]);
	(*&Local_0 + 252)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fodv_soldiers01", 3, -686.6598f, 67.40527f, 3306.456f, 0.0f, 50.57193f, 0.0f, 13.52049f, 8.554782f, 18.99325f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 252)[1]);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_PlayerDuel1", -703.6f, 63.247f, 3298.434f, 0.0f, 240.741f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_enDuel1", -696.012f, 63.247f, 3302.706f, 0.0f, 240.387f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos1", -663.174f, 80.177f, 3365.443f, -6.733f, 31.205f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos2", -686.801f, 34.866f, 3178.582f, 4.495f, 173.766f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos3", -767.545f, 68.721f, 3281.646f, -0.781f, -109.274f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "dzcf_merc_giver", -717.5405f, 63.247f, 3293.325f, 0.0f, 143.127f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_report_crime_road", -744.038f, 62.997f, 3284.873f, 0.0f, 98.094f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_report_crime_road1", -711.385f, 64.322f, 3357.244f, 0.0f, 178.944f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_jail_sit", -724.92f, 63.349f, 3297.469f, 0.0f, 308.682f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_jail_leave_start", -718.46f, 63.247f, 3290.199f, 0.0f, 55.977f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_jail_leave_endf", -724.488f, 63.247f, 3285.287f, 0.0f, 51.299f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_cell_leave_end", -715.494f, 63.247f, 3294.714f, 0.0f, 311.584f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fodf_cell_leave_cop", -720.176f, 63.349f, 3294.838f, 0.0f, 198.474f, 0.0f);
	*(&Local_0 + 268) = { -714.2064f, 67.50696f, 3286.132f };
	*(&Local_0 + 268 + 12) = { 0.0f, -130.6701f, 0.0f };
	Local_0.f_292 = CREATE_POINT_IN_LAYOUT(Local_0, "fodf_InteriorPoint_house", -714.2064f, 67.50696f, 3286.132f, 0.0f, -130.6701f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos4", -754.278f, 96.871f, 3318.208f, -31.096f, -69.843f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos5", -672.102f, 73.721f, 3330.633f, -9.042f, 42.041f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos6", -668.576f, 71.568f, 3310.539f, -5.197f, 84.742f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos7", -739.23f, 79.561f, 3301.822f, -5.55f, -90.905f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos8", -676.472f, 66.131f, 3283.028f, 3.529f, -142.874f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos9", -724.494f, 79.916f, 3320.539f, -12.449f, -66.157f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "fod_vista_cam_pos10", -731.856f, 64.549f, 3270.007f, 12.716f, -159.998f, 0.0f);
	return 1;
}

void Function_67(int iParam0, int iParam1) //Position: 0x3DDB / 15835
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

var Function_68() //Position: 0x3E24 / 15908
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_69(bool bParam0, var uParam1) //Position: 0x3E39 / 15929
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

