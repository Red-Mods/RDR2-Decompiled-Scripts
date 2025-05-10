//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 312
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<521> Local_0 = { 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_131 = 0;
	Local_132 = { StackVal, ScriptParam_0 };
	Function_66("Initializing LasHermanas Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_134 = 500;
		uLocal_136 = Function_65();
		switch (iLocal_131)
		{
			case 0x00000000:
				if (Function_63())
				{
					bLocal_168 = Function_62(Local_0, "lasHermanas", ScriptParam_0);
					iLocal_131 = 1;
				}
				bLocal_134 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_168))
				{
					iLocal_131 = 2;
				}
				bLocal_134 = false;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_137);
				Function_60(&uLocal_137, &uLocal_140, 4, Local_0.f_80, 4294967295, 4);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_12, 4294967295, 65802);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_260, 4294967295, 4194570);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_36, 4294967295, 2097418);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_48, 4294967295, 65802);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_312, 4294967295, 65794);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_352, 4294967295, 266);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_148, 4294967295, 16648);
				Function_60(&uLocal_137, &uLocal_140, 5, Local_0.f_292, 4294967295, 0x1000000);
				Function_58(&Local_169, bLocal_168, "church01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "church01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "church01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "residence01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "residence01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "residence01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "residence01", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 10, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 11, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "prayerRoom01", 12, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "walls01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "walls01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "walls01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "walls01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "walls01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "walls01", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "storageRoom01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "storageRoom01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "storageRoom01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_135 = Function_58(&Local_169, bLocal_168, "storageRoom01", 7, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_57(&(Local_169[iLocal_1355]), 63);
				Function_58(&Local_169, bLocal_168, "storageRoom01", 8, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_169, bLocal_168, "storageRoom01", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_131 = 3;
				bLocal_134 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_132]), 16);
				Function_55("Finished Initializing LasHermanas Volumes", 5.0f);
				iLocal_131 = 4;
				bLocal_134 = false;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_137, &uLocal_140, uLocal_136, ScriptParam_0);
				Function_12(&Local_169, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_134 = false;
				break;
		}
		WAIT(bLocal_134);
	}
	Function_4(&uLocal_137, &uLocal_140);
	Function_3(&Local_169);
	Function_2();
	Function_1(&(Global_29008[Local_132]), 16);
	Function_55("Unloaded LasHermanas Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x616 / 1558
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x62D / 1581
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x638 / 1592
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

void Function_4(var uParam0, int iParam1) //Position: 0x692 / 1682
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x6EA / 1770
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x7D0 / 2000
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

void Function_7() //Position: 0x949 / 2377
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x955 / 2389
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

void Function_9(int iParam0) //Position: 0x99B / 2459
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

void Function_10(var uParam0, int iParam1) //Position: 0x9E1 / 2529
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x9FB / 2555
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0xA18 / 2584
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

void Function_13(var uParam0, int iParam1) //Position: 0xDE4 / 3556
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xDF5 / 3573
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xE0F / 3599
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xE21 / 3617
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xE2A / 3626
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xEAB / 3755
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

void Function_19(int iParam0) //Position: 0x12C4 / 4804
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

float Function_20(int iParam0) //Position: 0x13C3 / 5059
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x1400 / 5120
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x1439 / 5177
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

var Function_23(int iParam0) //Position: 0x14A0 / 5280
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x14F8 / 5368
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1718 / 5912
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

var Function_26() //Position: 0x1D45 / 7493
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1D4D / 7501
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1D5E / 7518
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1E53 / 7763
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1E6C / 7788
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1ED1 / 7889
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1EE3 / 7907
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

int Function_33(int iParam0) //Position: 0x2013 / 8211
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x2022 / 8226
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x21BC / 8636
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

void Function_36(var uParam0, int iParam1) //Position: 0x2400 / 9216
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x240D / 9229
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2433 / 9267
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x244F / 9295
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
			SET_CRIME_WITNESSED(bVar3, 1);
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

void Function_40() //Position: 0x26DF / 9951
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2742 / 10050
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

bool Function_42(bool bParam0) //Position: 0x2771 / 10097
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

int Function_43(int iParam0) //Position: 0x27E7 / 10215
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x27F8 / 10232
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

bool Function_45(int iParam0) //Position: 0x2811 / 10257
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2827 / 10279
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x283C / 10300
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x285A / 10330
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

bool Function_49(int iParam0) //Position: 0x28FE / 10494
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x2914 / 10516
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2925 / 10533
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

void Function_52(int iParam0, int iParam1) //Position: 0x2997 / 10647
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x29BC / 10684
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

bool Function_54(int iParam0) //Position: 0x29D9 / 10713
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x29F5 / 10741
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

void Function_56(var uParam0, int iParam1) //Position: 0x2A33 / 10803
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x2A42 / 10818
{
	Function_13(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_58(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2A54 / 10836
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

var Function_59(bool bParam0) //Position: 0x2B33 / 11059
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

void Function_60(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2B61 / 11105
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

void Function_61(int iParam0) //Position: 0x2C3C / 11324
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_62(bool bParam0, bool bParam1, int iParam2) //Position: 0x2C4B / 11339
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_63() //Position: 0x2C6A / 11370
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("LasHermanas_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("LasHermanas_layout");
	}
	Local_0.f_12 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_dorm_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_dorm_01", 2, -1680.477f, 12.88474f, 4212.336f, 0.0f, 0.0f, 0.0f, 14.11601f, 10.94981f, 32.42182f);
	ADD_TO_VOLUME_SET(Local_0.f_12, (*&Local_0 + 4)[0]);
	Local_0.f_32 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_church_bottom_set");
	(*&Local_0 + 16)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_church_01", 2, -1699.849f, 8.953889f, 4194.267f, 0.0f, 0.0f, 0.0f, 10.03829f, 6.800636f, 22.85925f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 16)[0]);
	(*&Local_0 + 16)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_church_02", 2, -1701.763f, 8.839959f, 4189.003f, 0.0f, 0.0f, 0.0f, 10.30391f, 6.980586f, 14.0285f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 16)[1]);
	(*&Local_0 + 16)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_church_03", 2, -1693.566f, 8.915912f, 4194.521f, 0.0f, 0.0f, 0.0f, 10.03829f, 6.800636f, 3.936624f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 16)[2]);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_storage", 2, -1727.559f, 11.40409f, 4186.101f, 0.0f, 0.0f, 0.0f, 16.94143f, 9.961804f, 7.295546f);
	Local_0.f_48 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_office_set");
	(*&Local_0 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_office_01", 2, -1724.063f, 12.22613f, 4215.942f, 0.0f, 0.0f, 0.0f, 25.09364f, 10.29202f, 15.37596f);
	ADD_TO_VOLUME_SET(Local_0.f_48, (*&Local_0 + 40)[0]);
	Local_0.f_76 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_wall_top_set");
	(*&Local_0 + 52)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box58", 2, -1679.588f, 13.63631f, 4240.783f, 0.0f, 0.0f, 0.0f, 5.028011f, 5.058086f, 26.02822f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 52)[0]);
	(*&Local_0 + 52)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box56", 2, -1691.434f, 13.23021f, 4249.844f, 0.0f, 0.0f, 0.0f, 23.54208f, 4.018136f, 7.780226f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 52)[1]);
	(*&Local_0 + 52)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box59", 2, -1719.598f, 13.77301f, 4238.642f, 0.0f, 0.0f, 0.0f, 6.269324f, 5.987976f, 30.70751f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 52)[2]);
	(*&Local_0 + 52)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box60", 2, -1710.774f, 13.11671f, 4252.273f, 0.0f, 0.0f, 0.0f, 11.85519f, 4.15668f, 2.80413f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 52)[3]);
	(*&Local_0 + 52)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box61", 2, -1740.266f, 13.23021f, 4198.792f, 0.0f, 0.0f, 0.0f, 9.643528f, 4.018136f, 27.7147f);
	ADD_TO_VOLUME_SET(Local_0.f_76, (*&Local_0 + 52)[4]);
	Local_0.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_region", 2, -1703.746f, 31.57897f, 4232.615f, 0.0f, 0.0f, 0.0f, 107.4996f, 53.61927f, 128.9135f);
	Local_0.f_144 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_birds_set");
	(*&Local_0 + 84)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -1716.0f, 22.86559f, 4176.0f, 0.0f, 20.0f, 0.0f, 7.251727f, 15.35544f, 6.742037f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[0]);
	(*&Local_0 + 84)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -1696.0f, 17.51975f, 4239.035f, 0.0f, 20.0f, 0.0f, 4.258359f, 9.853659f, 4.707277f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[1]);
	(*&Local_0 + 84)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -1699.984f, 18.80392f, 4260.431f, 0.0f, 5.547814f, 0.0f, 5.089667f, 6.305782f, 3.394659f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[2]);
	(*&Local_0 + 84)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -1721.753f, 14.54672f, 4198.247f, 0.0f, 20.0f, 0.0f, 2.995238f, 6.622173f, 2.592857f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[3]);
	(*&Local_0 + 84)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -1690.292f, 16.41214f, 4220.0f, 0.0f, 20.0f, 0.0f, 5.340826f, 8.687995f, 6.06607f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[4]);
	(*&Local_0 + 84)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -1708.653f, 27.73623f, 4229.026f, 0.0f, 20.0f, 0.0f, 5.105824f, 21.43283f, 5.934885f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[5]);
	(*&Local_0 + 84)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -1682.211f, 18.39396f, 4259.572f, 0.0f, 20.0f, 0.0f, 2.995238f, 10.64231f, 2.592857f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[6]);
	(*&Local_0 + 84)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -1670.941f, 15.07071f, 4235.801f, 0.0f, 20.0f, 0.0f, 2.995238f, 6.791216f, 2.592857f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[7]);
	(*&Local_0 + 84)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -1680.295f, 26.46428f, 4189.357f, 0.0f, 20.0f, 0.0f, 8.094522f, 17.79937f, 4.113313f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[8]);
	(*&Local_0 + 84)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -1714.098f, 21.36292f, 4258.068f, 0.0f, 20.0f, 0.0f, 2.995238f, 12.9917f, 5.21893f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[9]);
	(*&Local_0 + 84)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, -1746.252f, 21.53139f, 4176.0f, 0.0f, 20.0f, 0.0f, 4.985382f, 14.86888f, 5.76815f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[10]);
	(*&Local_0 + 84)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder17", 3, -1663.856f, 16.00959f, 4286.607f, 0.0f, 45.4551f, 0.0f, 12.03572f, 12.06892f, 8.572443f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[11]);
	(*&Local_0 + 84)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder18", 3, -1705.944f, 19.61593f, 4220.521f, 0.0f, 0.7690971f, 0.0f, 44.97596f, 16.6264f, 47.32175f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[12]);
	(*&Local_0 + 84)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder24", 3, -1743.951f, 15.40103f, 4199.313f, 0.0f, 2.212199f, 0.0f, 3.641118f, 8.21683f, 8.265753f);
	ADD_TO_VOLUME_SET(Local_0.f_144, (*&Local_0 + 84)[13]);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_trainStn", 2, -1663.711f, 8.663337f, 4287.102f, 0.0f, -44.9127f, 0.0f, 12.97896f, 12.32496f, 17.10686f);
	Local_0.f_176 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_vulture_set");
	(*&Local_0 + 152)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_vulture01", 3, -1681.732f, 18.21694f, 4180.131f, 0.0f, 20.0f, 0.0f, 5.274219f, 9.508277f, 3.683119f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 152)[0]);
	(*&Local_0 + 152)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_vulture02", 3, -1672.406f, 19.49429f, 4233.301f, 0.0f, 20.0f, 0.0f, 5.274219f, 11.59507f, 3.683119f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 152)[1]);
	(*&Local_0 + 152)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_vulture03", 3, -1749.259f, 20.08563f, 4197.967f, 0.0f, 20.0f, 0.0f, 5.274219f, 15.62297f, 3.683119f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 152)[2]);
	(*&Local_0 + 152)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_vulture04", 3, -1731.571f, 20.53805f, 4178.198f, 0.0f, 20.0f, 0.0f, 5.274219f, 13.54044f, 3.683119f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 152)[3]);
	(*&Local_0 + 152)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_vulture05", 3, -1725.832f, 20.72448f, 4255.945f, 0.0f, 20.0f, 0.0f, 5.274219f, 12.59817f, 3.683119f);
	ADD_TO_VOLUME_SET(Local_0.f_176, (*&Local_0 + 152)[4]);
	Local_0.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_rabbits_set");
	(*&Local_0 + 180)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_08", 3, -1718.231f, 8.031359f, 4174.87f, 0.0f, 20.0f, 0.0f, 3.807782f, 1.0f, 3.202161f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[0]);
	(*&Local_0 + 180)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_01", 3, -1727.993f, 8.031359f, 4245.781f, 0.0f, 20.0f, 0.0f, 3.807782f, 1.0f, 3.202161f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[1]);
	(*&Local_0 + 180)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_02", 3, -1685.591f, 8.031359f, 4260.0f, 0.0f, 20.0f, 0.0f, 3.807782f, 1.0f, 3.202161f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[2]);
	(*&Local_0 + 180)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_03", 3, -1694.572f, 8.031359f, 4177.146f, 0.0f, 20.0f, 0.0f, 3.807782f, 1.0f, 3.202161f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[3]);
	(*&Local_0 + 180)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_04", 3, -1677.323f, 8.031359f, 4187.76f, 0.0f, 20.0f, 0.0f, 3.807782f, 1.0f, 3.202161f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[4]);
	(*&Local_0 + 180)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_05", 3, -1749.005f, 8.031359f, 4210.055f, 0.0f, 20.0f, 0.0f, 3.807782f, 1.0f, 3.202161f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[5]);
	(*&Local_0 + 180)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_06", 3, -1666.386f, 8.031359f, 4240.722f, 0.0f, 20.0f, 0.0f, 3.807782f, 1.0f, 3.202161f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[6]);
	(*&Local_0 + 180)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_rabbits_07", 3, -1715.02f, 8.031359f, 4260.0f, 0.0f, 20.0f, 0.0f, 4.744264f, 1.0f, 4.338517f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 180)[7]);
	Local_0.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_courtyard_set");
	(*&Local_0 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_crtyard01", 2, -1695.541f, 8.531469f, 4229.946f, 0.0f, 0.0f, 0.0f, 31.94847f, 26.11821f, 47.16391f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 220)[0]);
	Local_0.f_240 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_courtyard_west_set");
	(*&Local_0 + 232)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_crtyard02", 2, -1726.614f, 8.531469f, 4198.509f, 0.0f, 0.0f, 0.0f, 29.19217f, 16.77434f, 19.56031f);
	ADD_TO_VOLUME_SET(Local_0.f_240, (*&Local_0 + 232)[0]);
	Local_0.f_260 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_church_set");
	(*&Local_0 + 244)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_church01", 2, -1699.547f, 8.031361f, 4207.622f, 0.0f, 0.0f, 0.0f, 18.16732f, 30.22345f, 6.723855f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 244)[0]);
	(*&Local_0 + 244)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_church02", 2, -1701.647f, 8.031361f, 4200.307f, 0.0f, 0.0f, 0.0f, 22.40417f, 36.92038f, 9.264437f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 244)[1]);
	(*&Local_0 + 244)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_church03", 2, -1699.797f, 8.031361f, 4188.984f, 0.0f, 0.0f, 0.0f, 23.99464f, 34.35847f, 16.35218f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 244)[2]);
	Local_0.f_284 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_night_set");
	(*&Local_0 + 264)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_pplNight_04", 2, -1709.409f, 12.07436f, 4189.641f, 0.0f, 0.0f, 0.0f, 5.949434f, 3.670935f, 13.21718f);
	ADD_TO_VOLUME_SET(Local_0.f_284, (*&Local_0 + 264)[0]);
	(*&Local_0 + 264)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_pplNight_07", 2, -1714.335f, 7.539286f, 4215.988f, 0.0f, 0.0f, 0.0f, 6.297369f, 4.048958f, 16.07903f);
	ADD_TO_VOLUME_SET(Local_0.f_284, (*&Local_0 + 264)[1]);
	(*&Local_0 + 264)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_pplNight_08", 2, -1699.736f, 8.753281f, 4208.526f, 0.0f, 0.0f, 0.0f, 34.29349f, 5.45341f, 4.479712f);
	ADD_TO_VOLUME_SET(Local_0.f_284, (*&Local_0 + 264)[2]);
	(*&Local_0 + 264)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_pplNight_09", 2, -1685.461f, 9.140862f, 4212.987f, 0.0f, 0.0f, 0.0f, 5.95134f, 3.670935f, 33.07381f);
	ADD_TO_VOLUME_SET(Local_0.f_284, (*&Local_0 + 264)[3]);
	Local_0.f_288 = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_customers", 2, -1716.91f, 12.54541f, 4220.833f, 0.0f, 0.0f, 0.0f, 7.943641f, 2.561483f, 3.338091f);
	Local_0.f_292 = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_corral", 3, -1694.778f, 11.67337f, 4281.024f, 0.0f, 20.0f, 0.0f, 15.0f, 3.0f, 15.0f);
	Local_0.f_296 = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_HorseShoePit", 2, -1715.773f, 8.6719f, 4259.296f, 0.0f, 89.6482f, 0.0f, 6.359126f, 7.856765f, 16.50986f);
	Local_0.f_312 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_players_room_set");
	(*&Local_0 + 300)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_players_room_01", 2, -1716.871f, 12.81204f, 4212.376f, 0.0f, 0.0f, 0.0f, 9.124324f, 3.007901f, 7.505444f);
	ADD_TO_VOLUME_SET(Local_0.f_312, (*&Local_0 + 300)[0]);
	(*&Local_0 + 300)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_players_room_02", 2, -1722.329f, 12.81204f, 4211.309f, 0.0f, 0.0f, 0.0f, 9.124324f, 3.007901f, 5.586895f);
	ADD_TO_VOLUME_SET(Local_0.f_312, (*&Local_0 + 300)[1]);
	Local_0.f_352 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "lshv_wall_set");
	(*&Local_0 + 316)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_01", 2, -1720.718f, 12.07436f, 4238.375f, 0.0f, 0.0f, 0.0f, 4.666071f, 18.70035f, 32.07529f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[0]);
	(*&Local_0 + 316)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_02", 2, -1678.464f, 12.07436f, 4238.83f, 0.0f, 0.0f, 0.0f, 4.666071f, 18.70035f, 32.07529f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[1]);
	(*&Local_0 + 316)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_03", 2, -1700.272f, 12.07436f, 4251.892f, 0.0f, 0.0f, 0.0f, 45.26178f, 18.70035f, 5.400733f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[2]);
	(*&Local_0 + 316)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_04", 2, -1700.159f, 12.07436f, 4255.413f, 0.0f, 0.0f, 0.0f, 10.87699f, 19.13146f, 12.483f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[3]);
	(*&Local_0 + 316)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_05", 2, -1742.98f, 12.07436f, 4198.962f, 0.0f, 0.0f, 0.0f, 4.666071f, 18.70035f, 27.49704f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[4]);
	(*&Local_0 + 316)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_06", 2, -1738.777f, 12.07436f, 4187.036f, 0.0f, 0.0f, 0.0f, 4.666071f, 18.70035f, 3.720941f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[5]);
	(*&Local_0 + 316)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_07", 2, -1738.777f, 12.07436f, 4210.985f, 0.0f, 0.0f, 0.0f, 4.666071f, 18.70035f, 3.720941f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[6]);
	(*&Local_0 + 316)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "lshv_wall_08", 2, -1709.266f, 12.07436f, 4189.81f, 0.0f, 0.0f, 0.0f, 4.666071f, 18.70035f, 13.33412f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 316)[7]);
	CREATE_POINT_IN_LAYOUT(Local_0, "lshf_report_crime_road", -1677.152f, 8.03f, 4274.093f, 0.0f, 128.301f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lshf_clear_bounty", -1665.316f, 8.663f, 4288.242f, 0.0f, 158.115f, 0.0f);
	*(&Local_0 + 356) = { -1719.589f, 8.205862f, 4223.875f };
	*(&Local_0 + 356 + 12) = { 0.0f, -79.87354f, 0.0f };
	Local_0.f_380 = CREATE_POINT_IN_LAYOUT(Local_0, "lshf_interiorPoint_house1", -1719.589f, 8.205862f, 4223.875f, 0.0f, -79.87354f, 0.0f);
	*(&Local_0 + 384) = { -1678.9f, 8.333403f, 4225.87f };
	*(&Local_0 + 384 + 12) = { 0.0f, -277.14f, 0.0f };
	Local_0.f_408 = CREATE_POINT_IN_LAYOUT(Local_0, "lshf_interiorPoint_house", -1678.9f, 8.333403f, 4225.87f, 0.0f, -277.14f, 0.0f);
	*(&Local_0 + 412) = { -1699.81f, 8.455795f, 4202.104f };
	*(&Local_0 + 412 + 12) = { 0.0f, -178.5118f, 0.0f };
	Local_0.f_436 = CREATE_POINT_IN_LAYOUT(Local_0, "lshf_interiorPoint_church", -1699.81f, 8.455795f, 4202.104f, 0.0f, -178.5118f, 0.0f);
	*(&Local_0 + 440) = { -1728.916f, 7.958327f, 4186.138f };
	*(&Local_0 + 440 + 12) = { 0.0f, -178.5118f, 0.0f };
	Local_0.f_464 = CREATE_POINT_IN_LAYOUT(Local_0, "lshf_interiorPoint_warehouse", -1728.916f, 7.958327f, 4186.138f, 0.0f, -178.5118f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos1", -1767.143f, 12.503f, 4156.063f, 3.298f, -133.852f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos2", -1712.397f, 10.961f, 4289.741f, 3.764f, -21.345f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos3", -1657.222f, 12.624f, 4311.153f, -5.875f, 21.961f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos4", -1591.833f, 17.012f, 4126.583f, -3.069f, 129.428f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos5", -1731.104f, 9.945f, 4135.587f, 3.873f, -152.596f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos6", -1706.594f, 12.703f, 4250.618f, -5.622f, -20.141f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos7", -1755.687f, 15.962f, 4209.258f, -5.152f, -69.251f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos8", -1717.49f, 16.316f, 4229.982f, -7.17f, -43.388f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos9", -1677.802f, 19.561f, 4232.425f, -12.064f, 61.386f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "lsh_vista_cam_pos10", -1709.614f, 15.468f, 4208.013f, -13.606f, 65.017f, 0.0f);
	*(&Local_0 + 468) = { -1699.81f, 8.455795f, 4194.62f };
	*(&Local_0 + 468 + 12) = { 0.0f, 180.9226f, 0.0f };
	Local_0.f_492 = CREATE_POINT_IN_LAYOUT(Local_0, "lshf_interiorSettlement01", -1699.81f, 8.455795f, 4194.62f, 0.0f, 180.9226f, 0.0f);
	*(&Local_0 + 496) = { -1700.0f, 8.031364f, 4255.358f };
	*(&Local_0 + 496 + 12) = { 0.0f, -179.7341f, 0.0f };
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "lshf_interiorSettlement02", -1700.0f, 8.031364f, 4255.358f, 0.0f, -179.7341f, 0.0f);
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x4562 / 17762
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

var Function_65() //Position: 0x45AB / 17835
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(bool bParam0, var uParam1) //Position: 0x45C0 / 17856
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

