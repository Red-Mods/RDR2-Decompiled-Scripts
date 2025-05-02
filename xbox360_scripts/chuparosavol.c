//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 500
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<1333> Local_0 = { 0, 2, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_334 = 0;
	Function_66("Initializing Chuparosa Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_335 = 500;
		uLocal_336 = Function_65();
		switch (iLocal_334)
		{
			case 0x00000000:
				if (Function_63())
				{
					bLocal_404 = Function_62(Local_0, "nchuparosa", iScriptParam_0);
					iLocal_334 = 1;
				}
				bLocal_335 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_404))
				{
					iLocal_334 = 2;
				}
				bLocal_335 = false;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_337);
				Function_60(&uLocal_337, &uLocal_340, 4, Local_0.f_484, 4294967295, 4);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_16, 4294967295, 0x1000108);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_448, 4294967295, 0x1000108);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_32, 4294967295, 65802);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_52, 4294967295, 0x2000010a);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_68, 4294967295, 16650);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_504, 4294967295, 16648);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_84, 4294967295, 0x4000010a);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_632, 4294967295, 0x4000010a);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_644, 4294967295, 0x4000010a);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_608, 4294967295, 0x40000108);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_100, 4294967295, 4194570);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_128, 4294967295, 778);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_544, 4294967295, 776);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_104, 4294967295, 258);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_156, 4294967295, 0x2000108);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_512, 4294967295, 8456);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_508, 4294967295, 2312);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_328, 4294967295, 0x10000108);
				Function_60(&uLocal_337, &uLocal_340, 5, Local_0.f_20, 4294967295, 0x800018a);
				Function_60(&uLocal_337, &uLocal_340, 5, (*&Local_0 + 436)[1], 4294967295, 0x1000000);
				Function_58(&Local_405, bLocal_404, "ncantina01", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_104, 0, 1);
				Function_58(&Local_405, bLocal_404, "bank01", 3, &Global_29155[iScriptParam_010] + 20, 1, Local_0.f_20, 0, 0);
				iLocal_496 = Function_58(&Local_405, bLocal_404, "bank01", 2, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_20, 0, 0);
				if (iLocal_496 <= 0 && iLocal_496 > Local_405)
				{
					Function_57(&(Local_405[iLocal_4965]), 15);
				}
				iLocal_497 = Function_58(&Local_405, bLocal_404, "bank01", 1, &Global_29155[iScriptParam_010] + 20, 0, Local_0.f_20, 0, 0);
				if (iLocal_497 <= 0 && iLocal_497 > Local_405)
				{
					Function_57(&(Local_405[iLocal_4975]), 48);
				}
				Function_58(&Local_405, bLocal_404, "trainstation01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "trainstation01", 2, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "trainstation01", 3, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "trainstation01", 4, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "church01", 1, &Global_29155[iScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "corral01", 3, &Global_29155[iScriptParam_010] + 20, 1, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "corral01", 4, &Global_29155[iScriptParam_010] + 20, 1, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "corral01", 5, &Global_29155[iScriptParam_010] + 20, 1, 0, 0, 0);
				Function_58(&Local_405, bLocal_404, "corral01", 6, &Global_29155[iScriptParam_010] + 20, 1, 0, 0, 0);
				iLocal_334 = 3;
				bLocal_335 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[iScriptParam_0]), 16);
				Function_55("Finished Initializing Chuparosa Volumes", 5.0f);
				iLocal_334 = 4;
				bLocal_335 = false;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_337, &uLocal_340, uLocal_336, iScriptParam_0);
				Function_12(&Local_405, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_335 = false;
				break;
		}
		WAIT(bLocal_335);
	}
	Function_4(&uLocal_337, &uLocal_340);
	Function_3(&Local_405);
	Function_2();
	Function_1(&(Global_29008[iScriptParam_0]), 16);
	Function_55("Unloaded Chuparosa Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x542 / 1346
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x559 / 1369
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x564 / 1380
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

void Function_4(var uParam0, int iParam1) //Position: 0x5BE / 1470
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x616 / 1558
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

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6F3 / 1779
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

void Function_7() //Position: 0x86C / 2156
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x878 / 2168
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

void Function_9(int iParam0) //Position: 0x8BE / 2238
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

void Function_10(var uParam0, int iParam1) //Position: 0x904 / 2308
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x91E / 2334
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x93B / 2363
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

void Function_13(var uParam0, int iParam1) //Position: 0xD07 / 3335
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xD18 / 3352
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xD32 / 3378
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xD44 / 3396
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xD4D / 3405
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xDCE / 3534
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

void Function_19(int iParam0) //Position: 0x11E7 / 4583
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

float Function_20(int iParam0) //Position: 0x12E6 / 4838
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x1323 / 4899
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x135C / 4956
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

var Function_23(int iParam0) //Position: 0x13C3 / 5059
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x141B / 5147
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x163B / 5691
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
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
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

var Function_26() //Position: 0x1C68 / 7272
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1C70 / 7280
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C81 / 7297
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

struct<32> Function_29(char* cParam0, char* cParam1) //Position: 0x1D76 / 7542
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D8F / 7567
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1DF4 / 7668
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1E06 / 7686
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

int Function_33(int iParam0) //Position: 0x1F36 / 7990
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1F45 / 8005
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x20DF / 8415
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

void Function_36(var uParam0, int iParam1) //Position: 0x22F9 / 8953
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x2306 / 8966
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x232C / 9004
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2348 / 9032
{
	vector3 vVar0;
	int iVar3;
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(iVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(iVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(iVar3, 3);
			Function_40();
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

void Function_40() //Position: 0x25D8 / 9688
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_41(bVar0, iVar1);
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x263B / 9787
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

bool Function_42(bool bParam0) //Position: 0x266A / 9834
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

int Function_43(int iParam0) //Position: 0x26E0 / 9952
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x26F1 / 9969
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

bool Function_45(int iParam0) //Position: 0x270A / 9994
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2720 / 10016
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2735 / 10037
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2753 / 10067
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

bool Function_49(int iParam0) //Position: 0x27F7 / 10231
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x280D / 10253
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x281E / 10270
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

void Function_52(int iParam0, int iParam1) //Position: 0x2890 / 10384
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x28B5 / 10421
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

bool Function_54(int iParam0) //Position: 0x28D2 / 10450
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x28EE / 10478
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

void Function_56(var uParam0, int iParam1) //Position: 0x292C / 10540
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x293B / 10555
{
	Function_13(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_58(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x294D / 10573
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

var Function_59(bool bParam0) //Position: 0x2A2C / 10796
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

void Function_60(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2A5A / 10842
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

void Function_61(int iParam0) //Position: 0x2B35 / 11061
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_62(bool bParam0, char* cParam1, int iParam2) //Position: 0x2B44 / 11076
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_63() //Position: 0x2B63 / 11107
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Chuparosa_layout");
	}
	Local_0.f_16 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_stables_cow_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stables1", 2, -2605,795f, 31,90274f, 4276,023f, 0.0f, -40,69148f, 0.0f, 21,76543f, 6,78934f, 24,16265f);
	ADD_TO_VOLUME_SET(Local_0.f_16, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stables2", 2, -2619,399f, 32,10219f, 4271,353f, 0.0f, 49,09663f, 0.0f, 10,0665f, 4,514367f, 7,047185f);
	ADD_TO_VOLUME_SET(Local_0.f_16, (*&Local_0 + 4)[1]);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_bank_vault", 2, -2742,777f, 33,46533f, 4247,736f, 0.0f, 49,41427f, 0.0f, 5,571682f, 5,029839f, 7,834123f);
	Local_0.f_32 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_house_set");
	(*&Local_0 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_house1", 2, -2740,028f, 33,46533f, 4245,018f, 0.0f, 49,41427f, 0.0f, 13,64407f, 5,029839f, 8,517245f);
	ADD_TO_VOLUME_SET(Local_0.f_32, (*&Local_0 + 24)[0]);
	Local_0.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_hotel_set");
	(*&Local_0 + 36)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_hotel3", 2, -2730,003f, 38,03709f, 4235,552f, 0.0f, 31,74332f, 0.0f, 2,598028f, 3,262976f, 20,73465f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 36)[0]);
	(*&Local_0 + 36)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_hotel4", 2, -2730,383f, 38,03709f, 4225,049f, 0.0f, 31,74332f, 0.0f, 9,602288f, 3,262976f, 2,906296f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 36)[1]);
	(*&Local_0 + 36)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_hotel5", 2, -2721,777f, 37,9095f, 4241,192f, 0.0f, 31,3836f, 0.0f, 6,75748f, 3,126287f, 2,483033f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 36)[2]);
	Local_0.f_68 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_trainStation_set");
	(*&Local_0 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_trainStation1", 2, -2687,257f, 34,22969f, 4221,403f, 0.0f, -12,84121f, 0.0f, 15,41997f, 5,172666f, 4,103372f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 56)[0]);
	(*&Local_0 + 56)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_trainStation2", 2, -2685,808f, 34,63214f, 4225,351f, 0.0f, -11,91832f, 0.0f, 10,35141f, 4,421164f, 3,167867f);
	ADD_TO_VOLUME_SET(Local_0.f_68, (*&Local_0 + 56)[1]);
	Local_0.f_84 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_courthouse_set");
	(*&Local_0 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse1", 2, -2655,946f, 34,90889f, 4256,365f, 0.0f, -9,855526f, 0.0f, 16,0207f, 10,87173f, 10,90119f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 72)[0]);
	(*&Local_0 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse4", 2, -2657,589f, 39,74383f, 4255,818f, 0.0f, -9,682225f, 0.0f, 11,91524f, 7,825671f, 5,567136f);
	ADD_TO_VOLUME_SET(Local_0.f_84, (*&Local_0 + 72)[1]);
	Local_0.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_church_set");
	(*&Local_0 + 88)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_church1", 2, -2667,556f, 32,96333f, 4281,396f, 0.0f, 46,52884f, 0.0f, 6,338459f, 4,524786f, 19,98719f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 88)[0]);
	(*&Local_0 + 88)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_church2", 2, -2658,874f, 32,65079f, 4279,752f, 0.0f, -42,52038f, 0.0f, 8,600691f, 5,134214f, 17,95993f);
	ADD_TO_VOLUME_SET(Local_0.f_100, (*&Local_0 + 88)[1]);
	Local_0.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_players_room", 2, -2689,648f, 33,35108f, 4295,297f, 0.0f, -2,425529f, 0.0f, 10,214f, 5,658111f, 7,198388f);
	Local_0.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_saloon_set");
	(*&Local_0 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon2", 2, -2697,394f, 33,08836f, 4288,752f, 0.0f, -1,969252f, 0.0f, 4,890943f, 4,747464f, 12,32002f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[0]);
	(*&Local_0 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon1", 2, -2688,345f, 33,61721f, 4285,196f, 0.0f, -1,700859f, 0.0f, 14,83546f, 5,431608f, 4,634268f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[1]);
	(*&Local_0 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon3", 2, -2700,984f, 33,20852f, 4283,411f, 0.0f, -1,902949f, 0.0f, 3,817018f, 4,0988f, 1,967225f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[2]);
	(*&Local_0 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon9", 2, -2692,352f, 33,08047f, 4289,536f, 0.0f, -1,439431f, 0.0f, 4,770793f, 3,772571f, 3,995768f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 108)[3]);
	Local_0.f_156 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_market_set");
	(*&Local_0 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_market5", 2, -2726,348f, 34,69062f, 4276,513f, 0.0f, -7,341915f, 0.0f, 4,81046f, 4,198735f, 29,25647f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 132)[0]);
	(*&Local_0 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_market4", 2, -2720,054f, 34,31895f, 4273,662f, 0.0f, 0.0f, 0.0f, 5,22965f, 3,263618f, 6,33866f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 132)[1]);
	(*&Local_0 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_market3", 2, -2719,863f, 34,76211f, 4264,865f, 0.0f, 1,273791f, 0.0f, 10,42363f, 4,100439f, 10,10078f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 132)[2]);
	(*&Local_0 + 132)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_market2", 2, -2734,906f, 34,4425f, 4284,707f, 0.0f, -13,18575f, 0.0f, 10,61949f, 5,015597f, 5,316793f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 132)[3]);
	(*&Local_0 + 132)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_market1", 2, -2739,525f, 33,03678f, 4274,165f, 0.0f, -15,13602f, 0.0f, 8,98315f, 3,795127f, 22,59898f);
	ADD_TO_VOLUME_SET(Local_0.f_156, (*&Local_0 + 132)[4]);
	Local_0.f_168 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_townsquare_set");
	(*&Local_0 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_townsquare1", 3, -2683,989f, 33,46743f, 4255,27f, 0.0f, 20.0f, 0.0f, 6,893754f, 2,452447f, 7,361441f);
	ADD_TO_VOLUME_SET(Local_0.f_168, (*&Local_0 + 160)[0]);
	Local_0.f_304 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_walkways_set");
	(*&Local_0 + 172)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways1", 2, -2663,449f, 32,90543f, 4272,755f, 0.0f, 44,77998f, 0.0f, 11,40482f, 5,514219f, 6,185249f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[0]);
	(*&Local_0 + 172)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways2", 2, -2671,435f, 32,91413f, 4271,317f, 0.0f, 44,40546f, 0.0f, 2,22827f, 5,059163f, 8,534715f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[1]);
	(*&Local_0 + 172)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways3", 2, -2676,688f, 32,75834f, 4273,152f, 0.0f, 44,71632f, 0.0f, 9,467569f, 4,288859f, 3,956372f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[2]);
	(*&Local_0 + 172)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways4", 2, -2680,241f, 33,2816f, 4267,359f, 0.0f, 26,25295f, 0.0f, 2,822908f, 4,375935f, 12,09651f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[3]);
	(*&Local_0 + 172)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways5", 2, -2673,886f, 32,99639f, 4253,706f, 0.0f, 8,458183f, 0.0f, 8,853853f, 5,540692f, 2,461343f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[4]);
	(*&Local_0 + 172)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways6", 2, -2666,907f, 32,97532f, 4251,073f, 0.0f, -7,572112f, 0.0f, 4,506724f, 4,847564f, 3,539175f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[5]);
	(*&Local_0 + 172)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways7", 2, -2667,572f, 32,82364f, 4257,39f, 0.0f, -10,168f, 0.0f, 5,064583f, 4,673167f, 2,895167f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[6]);
	(*&Local_0 + 172)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways8", 2, -2696,814f, 33,2753f, 4256,957f, 0.0f, 0.0f, 0.0f, 14,74983f, 5,179121f, 2,849099f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[7]);
	(*&Local_0 + 172)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways9", 2, -2698,064f, 32,57437f, 4261,74f, 0.0f, 0.0f, 0.0f, 2,594186f, 4,441894f, 26,43219f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[8]);
	(*&Local_0 + 172)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways10", 2, -2702,273f, 32,94614f, 4264,21f, 0.0f, 0.0f, 0.0f, 5,131135f, 6,732898f, 7,927642f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[9]);
	(*&Local_0 + 172)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways11", 2, -2696,826f, 32,4829f, 4271,945f, 0.0f, 0.0f, 0.0f, 12,9258f, 3,870071f, 5,757498f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[10]);
	(*&Local_0 + 172)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways12", 2, -2687,551f, 32,30338f, 4279,523f, 0.0f, -1,777115f, 0.0f, 14,91622f, 5,789664f, 4,542312f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[11]);
	(*&Local_0 + 172)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways13", 2, -2691,89f, 32,96828f, 4275,994f, 0.0f, 0.0f, 0.0f, 2,800533f, 5,42481f, 3,40191f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[12]);
	(*&Local_0 + 172)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways14", 2, -2705,243f, 32,29985f, 4275,185f, 0.0f, 0.0f, 0.0f, 2,8164f, 3,914332f, 13,35452f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[13]);
	(*&Local_0 + 172)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways15", 2, -2713,837f, 34,08649f, 4256,925f, 0.0f, 0.0f, 0.0f, 14,83939f, 3,823054f, 2,593326f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[14]);
	(*&Local_0 + 172)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways16", 2, -2704,942f, 33,30577f, 4256,926f, 0.0f, 0.0f, -25,97463f, 5,665668f, 4,231193f, 2,919568f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[15]);
	(*&Local_0 + 172)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways17", 2, -2712,254f, 33,65039f, 4281,824f, -1,778329f, -90,58387f, -1,576875f, 30,71697f, 3,196666f, 5,200883f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[16]);
	(*&Local_0 + 172)[17] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways18", 2, -2716,191f, 33,96391f, 4263,158f, 0.0f, 5,117352f, 0.0f, 3,161594f, 3,360472f, 12,75982f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[17]);
	(*&Local_0 + 172)[18] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways19", 2, -2735,923f, 33,88766f, 4284,459f, 0.0f, -31,17464f, 0.0f, 13,79623f, 4,296254f, 2,581599f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[18]);
	(*&Local_0 + 172)[19] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways20", 2, -2745,691f, 33,72624f, 4280,568f, 0.0f, 15,40936f, 0.0f, 9,722217f, 3,939612f, 2,465116f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[19]);
	(*&Local_0 + 172)[20] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways21", 2, -2747,219f, 34,11061f, 4253,73f, 0.0f, 48,06638f, 0.0f, 3,890298f, 4,112593f, 10,44536f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[20]);
	(*&Local_0 + 172)[21] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways22", 2, -2735,906f, 33,69557f, 4249,452f, 0.0f, -42,25198f, 0.0f, 2,968621f, 4,48543f, 13,71076f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[21]);
	(*&Local_0 + 172)[22] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways23", 2, -2721,404f, 33,91082f, 4242,746f, 0.0f, 31,45421f, 0.0f, 8,25839f, 4,405485f, 5,534965f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[22]);
	(*&Local_0 + 172)[23] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways24", 2, -2727,653f, 33,71625f, 4239,352f, 0.0f, -57,05105f, 0.0f, 15,81942f, 3,878973f, 2,139719f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[23]);
	(*&Local_0 + 172)[24] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways29", 2, -2711,572f, 33,82289f, 4241,125f, 0.0f, 31,3482f, 0.0f, 13,96442f, 4,243851f, 2,366093f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[24]);
	(*&Local_0 + 172)[25] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways28", 2, -2710,467f, 33,65117f, 4227,495f, 0.0f, 30,98882f, 0.0f, 1,90464f, 4,235637f, 19,46796f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[25]);
	(*&Local_0 + 172)[26] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways27", 2, -2724,336f, 33,89269f, 4226,71f, 0.0f, 32,45915f, 0.0f, 22,54301f, 4,913895f, 2,197382f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[26]);
	(*&Local_0 + 172)[27] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways26", 2, -2687,867f, 32,29839f, 4229,06f, 0.0f, -12,96379f, 0.0f, 19,02541f, 6,773013f, 3,620454f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[27]);
	(*&Local_0 + 172)[28] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways25", 2, -2696,427f, 32,94411f, 4239,017f, 0.0f, -11,91591f, 0.0f, 3,086068f, 4,205414f, 21,22056f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[28]);
	(*&Local_0 + 172)[29] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways30", 2, -2697,4f, 34,17563f, 4222,308f, 0.0f, -11,86304f, 0.0f, 2,621392f, 4,440036f, 15,74873f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[29]);
	(*&Local_0 + 172)[30] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways31", 2, -2676,649f, 34,14864f, 4225,073f, 0.0f, -11,78958f, 0.0f, 6,262226f, 4,621839f, 15,9958f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[30]);
	(*&Local_0 + 172)[31] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_walkways32", 2, -2686,26f, 33,89177f, 4216,742f, 0.0f, -11,97022f, 0.0f, 19,66932f, 4,200562f, 3,361279f);
	ADD_TO_VOLUME_SET(Local_0.f_304, (*&Local_0 + 172)[31]);
	Local_0.f_328 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_stagecoachStop_set");
	(*&Local_0 + 308)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stagestop1", 2, -2753,092f, 34,05214f, 4282,551f, 0.0f, 14,71638f, 0.0f, 3,520556f, 2,896959f, 10,84694f);
	ADD_TO_VOLUME_SET(Local_0.f_328, (*&Local_0 + 308)[0]);
	(*&Local_0 + 308)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stagestop2", 2, -2748,03f, 34,14611f, 4290,846f, 0.0f, -24,77999f, 0.0f, 6,070085f, 3,006409f, 3,20946f);
	ADD_TO_VOLUME_SET(Local_0.f_328, (*&Local_0 + 308)[1]);
	(*&Local_0 + 308)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stagestop3", 2, -2750,961f, 33,96892f, 4288,507f, 0.0f, -54,72388f, 0.0f, 3,158629f, 2,82801f, 3,446311f);
	ADD_TO_VOLUME_SET(Local_0.f_328, (*&Local_0 + 308)[2]);
	(*&Local_0 + 308)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stagestop4", 2, -2755,459f, 33,94178f, 4282,888f, 0.0f, 15,4364f, 0.0f, 3,706964f, 2,641813f, 2,94574f);
	ADD_TO_VOLUME_SET(Local_0.f_328, (*&Local_0 + 308)[3]);
	Local_0.f_364 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_chicken_set");
	(*&Local_0 + 332)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchickens7", 3, -2737,708f, 34,03755f, 4272,097f, 0.0f, 20.0f, 0.0f, 14,31845f, 2,551048f, 14,31845f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 332)[0]);
	(*&Local_0 + 332)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchickens1", 3, -2722,387f, 35,01705f, 4258,46f, 0.0f, 20.0f, 0.0f, 14,31845f, 3,24735f, 10,73739f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 332)[1]);
	(*&Local_0 + 332)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchickens2", 3, -2721,272f, 35,26456f, 4283,757f, 0.0f, 20.0f, 0.0f, 14,31845f, 3,24735f, 14,31845f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 332)[2]);
	(*&Local_0 + 332)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchickens3", 3, -2689,449f, 34,28006f, 4255,05f, 0.0f, 20.0f, 0.0f, 14,31845f, 3,24735f, 14,31845f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 332)[3]);
	(*&Local_0 + 332)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchickens4", 3, -2670,597f, 34,28032f, 4239,371f, 0.0f, 20.0f, 0.0f, 14,31845f, 3,24735f, 6,080139f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 332)[4]);
	(*&Local_0 + 332)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchickens5", 3, -2654,585f, 34,05864f, 4233,173f, 0.0f, 20.0f, 0.0f, 14,31845f, 3,24735f, 10,59429f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 332)[5]);
	(*&Local_0 + 332)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nchickens6", 3, -2697,439f, 34,16259f, 4245,152f, 0.0f, 20.0f, 0.0f, 14,31845f, 3,24735f, 9,11238f);
	ADD_TO_VOLUME_SET(Local_0.f_364, (*&Local_0 + 332)[6]);
	Local_0.f_388 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_dog_set");
	(*&Local_0 + 368)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dog5", 3, -2667,705f, 34,3265f, 4238,568f, 0.0f, 20.0f, 0.0f, 18,00911f, 3,643864f, 6,865031f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 368)[0]);
	(*&Local_0 + 368)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dog2", 3, -2699,685f, 32,82862f, 4244,346f, 0.0f, 115,5934f, 0.0f, 4,517485f, 2,158237f, 22,88598f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 368)[1]);
	(*&Local_0 + 368)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dog3", 3, -2750,257f, 32,7332f, 4264,145f, 0.0f, 105,802f, 0.0f, 13,10861f, 2,158237f, 3,75971f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 368)[2]);
	(*&Local_0 + 368)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dog4", 3, -2705,278f, 32,13754f, 4226,758f, 0.0f, 107,4618f, 0.0f, 11,01402f, 2,158237f, 1,987857f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 368)[3]);
	Local_0.f_404 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_goat_set");
	(*&Local_0 + 392)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "goat1", 3, -2723,971f, 34,60061f, 4255,979f, 0.0f, 20.0f, 0.0f, 18,95487f, 3,846697f, 7,981451f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 392)[0]);
	(*&Local_0 + 392)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "goat2", 3, -2679,677f, 33,84932f, 4241,338f, 0.0f, 12,06359f, 0.0f, 32,2497f, 3,182418f, 5,023716f);
	ADD_TO_VOLUME_SET(Local_0.f_404, (*&Local_0 + 392)[1]);
	Local_0.f_432 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_bird_set");
	(*&Local_0 + 408)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bird1", 3, -2743,083f, 39,11457f, 4269,54f, 0.0f, 20.0f, 0.0f, 25,81576f, 6,289899f, 34,42829f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 408)[0]);
	(*&Local_0 + 408)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bird2", 3, -2695,979f, 38,04613f, 4280,02f, 0.0f, 20.0f, 0.0f, 22,62743f, 6,289899f, 28,09335f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 408)[1]);
	(*&Local_0 + 408)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bird3", 3, -2703,406f, 39,58453f, 4229,563f, 0.0f, 20.0f, 0.0f, 34,84185f, 6,289899f, 24,96616f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 408)[2]);
	(*&Local_0 + 408)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bird4", 3, -2661,546f, 40,36647f, 4257,891f, 0.0f, 20.0f, 0.0f, 31,34077f, 6,289899f, 34,12703f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 408)[3]);
	(*&Local_0 + 408)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bird5", 3, -2615,523f, 36,11472f, 4267,196f, 0.0f, 20.0f, 0.0f, 22,62743f, 6,289899f, 30,50311f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 408)[4]);
	Local_0.f_448 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_stables_horse_set");
	(*&Local_0 + 436)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stables3", 3, -2633,31f, 32,62882f, 4265,351f, 0.0f, 20.0f, 0.0f, 5,116687f, 2,589136f, 5,018899f);
	ADD_TO_VOLUME_SET(Local_0.f_448, (*&Local_0 + 436)[0]);
	(*&Local_0 + 436)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_stables4", 3, -2627,845f, 32,91703f, 4257,556f, 0.0f, 20.0f, 0.0f, 7,41245f, 3,302373f, 6,790393f);
	ADD_TO_VOLUME_SET(Local_0.f_448, (*&Local_0 + 436)[1]);
	Local_0.f_476 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_workers_set");
	(*&Local_0 + 452)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_wrks6", 2, -2639,073f, 31,75344f, 4260,873f, 0.0f, -3,911364f, 0.0f, 8,509206f, 5,552478f, 20,54389f);
	ADD_TO_VOLUME_SET(Local_0.f_476, (*&Local_0 + 452)[0]);
	(*&Local_0 + 452)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_wrks5", 2, -2623,323f, 32,1165f, 4253,195f, 0.0f, -38,70404f, 0.0f, 13,79655f, 3,537822f, 7,133165f);
	ADD_TO_VOLUME_SET(Local_0.f_476, (*&Local_0 + 452)[1]);
	(*&Local_0 + 452)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_wrks4", 2, -2607,996f, 31,49876f, 4252,447f, 0.0f, 49,37606f, 0.0f, 1,910371f, 2,699449f, 13,69001f);
	ADD_TO_VOLUME_SET(Local_0.f_476, (*&Local_0 + 452)[2]);
	(*&Local_0 + 452)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_wrks3", 2, -2611,132f, 31,39912f, 4256,74f, 0.0f, -41,03762f, 0.0f, 2,908644f, 3,039696f, 10,09038f);
	ADD_TO_VOLUME_SET(Local_0.f_476, (*&Local_0 + 452)[3]);
	(*&Local_0 + 452)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_wrks2", 2, -2617,347f, 31,08973f, 4256,227f, 0.0f, 50,73727f, 0.0f, 11,44008f, 3,101299f, 6,267551f);
	ADD_TO_VOLUME_SET(Local_0.f_476, (*&Local_0 + 452)[4]);
	Local_0.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_drinkAmbExc", 2, -2700,821f, 32,13797f, 4278,411f, 0.0f, 0.0f, 0.0f, 3,515234f, 2,327648f, 4,484485f);
	Local_0.f_484 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_region", 3, -2675,111f, 43,96156f, 4264,86f, 0.0f, -2,629206f, 0.0f, 94,09933f, 18,2189f, 54,8989f);
	Local_0.f_504 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_TrnPlatform_set");
	(*&Local_0 + 488)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box", 2, -2683,835f, 34,45031f, 4217,348f, 0.0f, -12,81581f, 0.0f, 21,12366f, 9,21448f, 3,346525f);
	ADD_TO_VOLUME_SET(Local_0.f_504, (*&Local_0 + 488)[0]);
	(*&Local_0 + 488)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box1", 2, -2695,527f, 33,85666f, 4222,814f, 0.0f, -12,65563f, 0.0f, 8,677244f, 5,121027f, 18,19546f);
	ADD_TO_VOLUME_SET(Local_0.f_504, (*&Local_0 + 488)[1]);
	(*&Local_0 + 488)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box2", 2, -2677,591f, 33,90228f, 4227,211f, 0.0f, -13,57747f, 0.0f, 6,69855f, 6,410012f, 14,02431f);
	ADD_TO_VOLUME_SET(Local_0.f_504, (*&Local_0 + 488)[2]);
	Local_0.f_508 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_doctor", 2, -2710,858f, 34,26593f, 4287,386f, 0.0f, 0.0f, 0.0f, 4,215548f, 5,405833f, 8,614675f);
	Local_0.f_512 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_merchant", 2, -2725,998f, 34,26593f, 4294,91f, 0.0f, 80,14656f, 0.0f, 5,884212f, 5,405833f, 6,282685f);
	Local_0.f_516 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_Poker", 3, -2701,122f, 32,11704f, 4278,083f, 0.0f, 20.0f, 0.0f, 2,220927f, 1,739343f, 2,220927f);
	Local_0.f_520 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_Blackjack", 2, -2686,531f, 32,24573f, 4285,035f, 0.0f, -2,442021f, 0.0f, 4,640112f, 3,665987f, 4,480659f);
	Local_0.f_544 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_saloon_outside_set");
	(*&Local_0 + 524)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon4", 2, -2694,648f, 32,6645f, 4278,047f, 0.0f, -1,617445f, 0.0f, 17,58019f, 4,795472f, 7,065094f);
	ADD_TO_VOLUME_SET(Local_0.f_544, (*&Local_0 + 524)[0]);
	(*&Local_0 + 524)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon5", 2, -2698,433f, 32,6645f, 4271,201f, 0.0f, -1,771135f, 0.0f, 9,569883f, 4,795472f, 5,503832f);
	ADD_TO_VOLUME_SET(Local_0.f_544, (*&Local_0 + 524)[1]);
	(*&Local_0 + 524)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon6", 2, -2701,678f, 32,6645f, 4265,335f, 0.0f, 0.0f, 0.0f, 7,109518f, 4,795472f, 7,896147f);
	ADD_TO_VOLUME_SET(Local_0.f_544, (*&Local_0 + 524)[2]);
	(*&Local_0 + 524)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_saloon7", 2, -2676,078f, 33,91975f, 4290,298f, 0.0f, -1,592756f, 0.0f, 8,817321f, 5,658111f, 13,34158f);
	ADD_TO_VOLUME_SET(Local_0.f_544, (*&Local_0 + 524)[3]);
	Local_0.f_556 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_dog_saloon_set");
	(*&Local_0 + 548)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dog1", 3, -2694,044f, 32,9851f, 4276,215f, 0.0f, -10,884f, 0.0f, 13,10861f, 2,158237f, 5,512248f);
	ADD_TO_VOLUME_SET(Local_0.f_556, (*&Local_0 + 548)[0]);
	Local_0.f_572 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_dog_market_set");
	(*&Local_0 + 560)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_dogs_market2", 2, -2725,921f, 33,43172f, 4273,139f, 0.0f, -14,01336f, 0.0f, 27,58388f, 4,278932f, 27,55243f);
	ADD_TO_VOLUME_SET(Local_0.f_572, (*&Local_0 + 560)[0]);
	(*&Local_0 + 560)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_dogs_market1", 2, -2723,038f, 33,92895f, 4290,304f, 0.0f, -14,23901f, 0.0f, 21,6487f, 4,094554f, 4,094554f);
	ADD_TO_VOLUME_SET(Local_0.f_572, (*&Local_0 + 560)[1]);
	Local_0.f_608 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_courthouse_outside_set");
	(*&Local_0 + 576)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse2", 2, -2666,559f, 33,35002f, 4254,434f, 0.0f, -8,804039f, 0.0f, 4,922725f, 4,092079f, 13,87084f);
	ADD_TO_VOLUME_SET(Local_0.f_608, (*&Local_0 + 576)[0]);
	(*&Local_0 + 576)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse3", 2, -2666,97f, 37,40295f, 4254,591f, 0.0f, -9,665345f, 0.0f, 4,347551f, 3,734251f, 14,05577f);
	ADD_TO_VOLUME_SET(Local_0.f_608, (*&Local_0 + 576)[1]);
	(*&Local_0 + 576)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse5", 2, -2659,082f, 42,34615f, 4250,685f, 0.0f, -10,87788f, 0.0f, 6,730814f, 4,057639f, 3,620087f);
	ADD_TO_VOLUME_SET(Local_0.f_608, (*&Local_0 + 576)[2]);
	(*&Local_0 + 576)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse9", 2, -2655,358f, 37,18073f, 4248,958f, 0.0f, -10,46922f, 0.0f, 17,64188f, 3,310561f, 2,610626f);
	ADD_TO_VOLUME_SET(Local_0.f_608, (*&Local_0 + 576)[3]);
	(*&Local_0 + 576)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse7", 2, -2659,883f, 32,90754f, 4262,868f, 0.0f, -10,46922f, 0.0f, 19,61751f, 3,310561f, 2,610626f);
	ADD_TO_VOLUME_SET(Local_0.f_608, (*&Local_0 + 576)[4]);
	(*&Local_0 + 576)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse6", 2, -2655,358f, 32,79028f, 4248,926f, 0.0f, -10,46922f, 0.0f, 17,64188f, 3,310561f, 2,610626f);
	ADD_TO_VOLUME_SET(Local_0.f_608, (*&Local_0 + 576)[5]);
	(*&Local_0 + 576)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_courthouse8", 2, -2657,928f, 37,18073f, 4263,22f, 0.0f, -10,46922f, 0.0f, 17,64188f, 3,310561f, 2,610626f);
	ADD_TO_VOLUME_SET(Local_0.f_608, (*&Local_0 + 576)[6]);
	Local_0.f_612 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_badAsses", 3, -2687,962f, 32,67879f, 4289,49f, 0.0f, 20.0f, 0.0f, 2,055984f, 2,055984f, 2,055984f);
	Local_0.f_616 = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_streetSpawn", 2, -2702,846f, 36,95881f, 4248,667f, 0.0f, 13,35266f, 0.0f, 91,75193f, 17,73903f, 24,08395f);
	Local_0.f_632 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_posta_set");
	(*&Local_0 + 620)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_posta_01", 2, -2721,238f, 34,81779f, 4229,788f, 0.0f, 33,41322f, 0.0f, 18,58422f, 14,92971f, 15,75771f);
	ADD_TO_VOLUME_SET(Local_0.f_632, (*&Local_0 + 620)[0]);
	(*&Local_0 + 620)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_posta_02", 2, -2715,984f, 29,78246f, 4232,95f, 0.0f, 33,41322f, 0.0f, 11,97683f, 14,92971f, 15,75771f);
	ADD_TO_VOLUME_SET(Local_0.f_632, (*&Local_0 + 620)[1]);
	Local_0.f_644 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_telegraph_set");
	(*&Local_0 + 636)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chuv_telegraph_01", 2, -2685,709f, 34,15121f, 4223,509f, 0.0f, -12,75292f, 0.0f, 12,55758f, 10,08817f, 8,809672f);
	ADD_TO_VOLUME_SET(Local_0.f_644, (*&Local_0 + 636)[0]);
	Local_0.f_660 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "chuv_knockout_set");
	(*&Local_0 + 648)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_KO1", 2, -2695,583f, 30,69284f, 4282,8f, 0.0f, -2,373667f, 0.0f, 14,57814f, 11,86625f, 16,37682f);
	ADD_TO_VOLUME_SET(Local_0.f_660, (*&Local_0 + 648)[0]);
	(*&Local_0 + 648)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_KO2", 2, -2685,945f, 32,43866f, 4287,007f, 0.0f, -0,6835338f, 0.0f, 9,57671f, 8,217264f, 9,420851f);
	ADD_TO_VOLUME_SET(Local_0.f_660, (*&Local_0 + 648)[1]);
	CREATE_POINT_IN_LAYOUT(Local_0, "chuf_report_crime", -2666,634f, 31,2f, 4253,878f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chuf_clear_bounty", -2687,541f, 32,3f, 4224,16f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 664) = { -2700,765f, 32,09935f, 4278,523f };
	*(&Local_0 + 664 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_688 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinkingMG", -2700,765f, 32,09935f, 4278,523f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 692) = { -2699,204f, 31,33568f, 4279,528f };
	*(&Local_0 + 692 + 12) = { 0.0f, 79,19083f, 0.0f };
	Local_0.f_716 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinkcrowd1", -2699,204f, 31,33568f, 4279,528f, 0.0f, 79,19083f, 0.0f);
	*(&Local_0 + 720) = { -2700,205f, 31,33568f, 4280,411f };
	*(&Local_0 + 720 + 12) = { 182,1453f, 168,6411f, 176,0581f };
	Local_0.f_744 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinkcrowd2", -2700,205f, 31,33568f, 4280,411f, 182,1453f, 168,6411f, 176,0581f);
	*(&Local_0 + 748) = { -2700,835f, 31,33568f, 4281,266f };
	*(&Local_0 + 748 + 12) = { 0.0f, 1,370011f, 0.0f };
	Local_0.f_772 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinkcrowd3", -2700,835f, 31,33568f, 4281,266f, 0.0f, 1,370011f, 0.0f);
	*(&Local_0 + 776) = { -2701,484f, 31,33568f, 4280,312f };
	*(&Local_0 + 776 + 12) = { 0.0f, 339,9957f, 0.0f };
	Local_0.f_800 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinkcrowd4", -2701,484f, 31,33568f, 4280,312f, 0.0f, 339,9957f, 0.0f);
	*(&Local_0 + 804) = { -2702,414f, 31,33568f, 4279,533f };
	*(&Local_0 + 804 + 12) = { 0.0f, -68,86294f, 0.0f };
	Local_0.f_828 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinkcrowd5", -2702,414f, 31,33568f, 4279,533f, 0.0f, -68,86294f, 0.0f);
	*(&Local_0 + 832) = { -2702,553f, 31,33568f, 4278,674f };
	*(&Local_0 + 832 + 12) = { 0.0f, -82,61247f, 0.0f };
	Local_0.f_856 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinkcrowd6", -2702,553f, 31,33568f, 4278,674f, 0.0f, -82,61247f, 0.0f);
	*(&Local_0 + 860) = { -2701,738f, 31,33568f, 4278,39f };
	*(&Local_0 + 860 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_884 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_drinksrch", -2701,738f, 31,33568f, 4278,39f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 888) = { -2664,401f, 31,39944f, 4249,833f };
	*(&Local_0 + 888 + 12) = { 0.0f, 261,5f, 0.0f };
	Local_0.f_912 = CREATE_POINT_IN_LAYOUT(Local_0, "prdf_merc_giver", -2664,401f, 31,39944f, 4249,833f, 0.0f, 261,5f, 0.0f);
	*(&Local_0 + 916) = { -2663,958f, 31,443f, 4239,576f };
	*(&Local_0 + 916 + 12) = { 0.0f, 92,509f, 0.0f };
	Local_0.f_940 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_playerDuel1", -2663,958f, 31,443f, 4239,576f, 0.0f, 92,509f, 0.0f);
	*(&Local_0 + 944) = { -2672,878f, 31,469f, 4239,77f };
	*(&Local_0 + 944 + 12) = { 0.0f, 275,9781f, 0.0f };
	Local_0.f_968 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_enDuel1", -2672,878f, 31,469f, 4239,77f, 0.0f, 275,9781f, 0.0f);
	*(&Local_0 + 972) = { -2725,153f, 32,537f, 4254,593f };
	*(&Local_0 + 972 + 12) = { 0.0f, 289,582f, 0.0f };
	Local_0.f_996 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_playerDuel2", -2725,153f, 32,537f, 4254,593f, 0.0f, 289,582f, 0.0f);
	*(&Local_0 + 1000) = { -2717,136f, 32,343f, 4251,679f };
	*(&Local_0 + 1000 + 12) = { 0.0f, 115,9211f, 0.0f };
	Local_0.f_1024 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_enDuel2", -2717,136f, 32,343f, 4251,679f, 0.0f, 115,9211f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chuf_jail_sit", -2647,498f, 31,386f, 4247,398f, 0.0f, -258,6953f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chuf_jail_leave_start", -2662,834f, 31,386f, 4255,184f, 0.0f, 67,279f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chuf_jail_leave_end", -2671,889f, 31,371f, 4253,421f, 0.0f, 80,026f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chuf_jail_leave_end2", -2653,371f, 31,386f, 4259,339f, 0.0f, 95,276f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chuf_cell_leave_cop", -2650,306f, 31,386f, 4252,54f, 0.0f, 303,691f, 0.0f);
	*(&Local_0 + 1028) = { -2737,057f, 32,53271f, 4244,75f };
	*(&Local_0 + 1028 + 12) = { 0.0f, -133,7233f, 0.0f };
	Local_0.f_1052 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_InteriorPoint_bank", -2737,057f, 32,53271f, 4244,75f, 0.0f, -133,7233f, 0.0f);
	*(&Local_0 + 1056) = { -2683,148f, 32,4736f, 4222,974f };
	*(&Local_0 + 1056 + 12) = { 0.0f, -177,6252f, 0.0f };
	Local_0.f_1080 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_InteriorPoint_station", -2683,148f, 32,4736f, 4222,974f, 0.0f, -177,6252f, 0.0f);
	*(&Local_0 + 1084) = { -2721,896f, 32,8284f, 4292,93f };
	*(&Local_0 + 1084 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1108 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_InteriorPoint_store", -2721,896f, 32,8284f, 4292,93f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1112) = { -2721,896f, 32,8284f, 4292,93f };
	*(&Local_0 + 1112 + 12) = { 0.0f, 119,815f, 0.0f };
	Local_0.f_1136 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store", -2721,896f, 32,8284f, 4292,93f, 0.0f, 119,815f, 0.0f);
	*(&Local_0 + 1140) = { -2720,649f, 32,7354f, 4290,826f };
	*(&Local_0 + 1140 + 12) = { 0.0f, 181,8715f, 0.0f };
	Local_0.f_1164 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store", -2720,649f, 32,7354f, 4290,826f, 0.0f, 181,8715f, 0.0f);
	*(&Local_0 + 1168) = { -2716,641f, 32,8284f, 4286,344f };
	*(&Local_0 + 1168 + 12) = { 0.0f, 119,815f, 0.0f };
	Local_0.f_1192 = CREATE_POINT_IN_LAYOUT(Local_0, "horse_pos_store", -2716,641f, 32,8284f, 4286,344f, 0.0f, 119,815f, 0.0f);
	*(&Local_0 + 1196) = { -2723,588f, 35,6484f, 4289,898f };
	*(&Local_0 + 1196 + 12) = { 0.0f, 119,815f, 0.0f };
	Local_0.f_1220 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store", -2723,588f, 35,6484f, 4289,898f, 0.0f, 119,815f, 0.0f);
	*(&Local_0 + 1224) = { -2719,114f, 35,7994f, 4287,955f };
	*(&Local_0 + 1224 + 12) = { 0.0f, 119,815f, 0.0f };
	Local_0.f_1248 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store", -2719,114f, 35,7994f, 4287,955f, 0.0f, 119,815f, 0.0f);
	*(&Local_0 + 1252) = { -2660,317f, 31,33828f, 4255,919f };
	*(&Local_0 + 1252 + 12) = { 0.0f, 74,53823f, 0.0f };
	Local_0.f_1276 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_InteriorPoint_jail", -2660,317f, 31,33828f, 4255,919f, 0.0f, 74,53823f, 0.0f);
	*(&Local_0 + 1280) = { -2670,832f, 31,27951f, 4278,465f };
	*(&Local_0 + 1280 + 12) = { 0.0f, 46,27048f, 0.0f };
	Local_0.f_1304 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_InteriorPoint_church", -2670,832f, 31,27951f, 4278,465f, 0.0f, 46,27048f, 0.0f);
	*(&Local_0 + 1308) = { -2697,442f, 32,07358f, 4285,811f };
	*(&Local_0 + 1308 + 12) = { 0.0f, 11,84616f, 0.0f };
	Local_0.f_1332 = CREATE_POINT_IN_LAYOUT(Local_0, "chuf_InteriorPoint_bar", -2697,442f, 32,07358f, 4285,811f, 0.0f, 11,84616f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos1", -2769,073f, 36,053f, 4279,637f, 0,502f, -67,454f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos2", -2759,287f, 39,616f, 4254,398f, -8,921f, -72,737f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos3", -2718,258f, 37,99f, 4212,228f, -6,184f, -138,744f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos4", -2645,999f, 39,226f, 4238,823f, 1,418f, 106,276f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos5", -2621,604f, 33,366f, 4306,046f, 3,843f, 31,15f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos6", -2664,343f, 33,939f, 4296,427f, -5,671f, 52,437f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos7", -2710,338f, 33,748f, 4299,298f, 10,957f, 21,026f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos8", -2751,88f, 35,592f, 4298,03f, -6,125f, -72,609f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos9", -2678,659f, 36,249f, 4281,84f, -11,417f, 69,215f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "chu_vista_cam_pos10", -2737,684f, 34,468f, 4249,075f, 2,63f, -87,853f, 0.0f);
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x5E47 / 24135
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

var Function_65() //Position: 0x5E90 / 24208
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(bool bParam0, var uParam1) //Position: 0x5EA5 / 24229
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

