//Decompiled with MagicRDR v1.0
//Function Count : 72
//Statics Count : 230
//Natives Count : 129
//Parameters Count : 2

#region Local Var
	struct<429> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_108 = 0;
	Local_109 = { StackVal, ScriptParam_0 };
	Function_71("Initializing BeechersHope Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_111 = 500;
		uLocal_119 = Function_70();
		switch (iLocal_108)
		{
			case 0x00000000:
				if (Function_68())
				{
					bLocal_151 = Function_67(Local_0, "beechersHope", ScriptParam_0);
					iLocal_108 = 1;
				}
				iLocal_111 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_151))
				{
					iLocal_108 = 2;
				}
				iLocal_111 = 0;
				break;
			
			case 0x00000002:
				Function_66(&uLocal_120);
				Function_65(StackVal, &uLocal_120, &iLocal_123, 4, 4294967295, 4);
				Function_65(StackVal, &uLocal_120, &iLocal_123, 5, 4294967295, 258);
				Function_65(&uLocal_120, &iLocal_123, 5, Local_0.f_44, 4294967295, 258);
				Function_65(&uLocal_120, &iLocal_123, 5, Local_0.f_12, 4294967295, 258);
				Function_65(&uLocal_120, &iLocal_123, 5, Local_0.f_16, 4294967295, 258);
				Function_65(&uLocal_120, &iLocal_123, 5, Local_0.f_20, 4294967295, 258);
				Function_65(&uLocal_120, &iLocal_123, 5, Local_0.f_24, 4294967295, 258);
				Function_65(&uLocal_120, &iLocal_123, 5, Local_0.f_28, 4294967295, 258);
				Function_65(&uLocal_120, &iLocal_123, 5, Local_0.f_272, 4294967295, 258);
				Function_63(&Local_152, bLocal_151, "house01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_63(&Local_152, bLocal_151, "house01", 5, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_12, 0, 1);
				Function_63(&Local_152, bLocal_151, "house01", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_63(&Local_152, bLocal_151, "stable01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_63(&Local_152, bLocal_151, "stable01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_63(&Local_152, bLocal_151, "stable01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_63(&Local_152, bLocal_151, "stable01", 96, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_63(&Local_152, bLocal_151, "stable01", 97, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_112 = Function_63(&Local_152, bLocal_151, "stable01", 94, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				if (iLocal_112 <= 0 && iLocal_112 > Local_152)
				{
					Function_62(Local_152[iLocal_1125], 1);
				}
				iLocal_113 = Function_63(&Local_152, bLocal_151, "stable01", 95, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				if (iLocal_113 <= 0 && iLocal_113 > Local_152)
				{
					Function_62(Local_152[iLocal_1135], 1);
				}
				iLocal_114 = Function_63(&Local_152, bLocal_151, "stable01", 98, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				if (iLocal_114 <= 0 && iLocal_114 > Local_152)
				{
					Function_62(Local_152[iLocal_1145], 1);
				}
				iLocal_115 = Function_63(&Local_152, bLocal_151, "stable01", 99, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				if (iLocal_115 <= 0 && iLocal_115 > Local_152)
				{
					Function_62(Local_152[iLocal_1155], 1);
				}
				if (Function_58(49, 0))
				{
					iLocal_116 = Function_63(&Local_152, bLocal_151, "house01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
					if (iLocal_116 <= 0 && iLocal_116 > Local_152)
					{
						Function_57(Local_152[iLocal_1165], 1);
					}
					iLocal_117 = Function_63(&Local_152, bLocal_151, "house01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
					if (iLocal_117 <= 0 && iLocal_117 > Local_152)
					{
						Function_57(Local_152[iLocal_1175], 1);
					}
					iLocal_118 = Function_63(&Local_152, bLocal_151, "house01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
					if (iLocal_118 <= 0 && iLocal_118 > Local_152)
					{
						Function_57(Local_152[iLocal_1185], 1);
					}
				}
				else
				{
					iLocal_116 = Function_63(&Local_152, bLocal_151, "house01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
					if (iLocal_116 <= 0 && iLocal_116 > Local_152)
					{
						Function_62(Local_152[iLocal_1165], 1);
					}
					iLocal_117 = Function_63(&Local_152, bLocal_151, "house01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
					if (iLocal_117 <= 0 && iLocal_117 > Local_152)
					{
						Function_62(Local_152[iLocal_1175], 1);
					}
					iLocal_118 = Function_63(&Local_152, bLocal_151, "house01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
					if (iLocal_118 <= 0 && iLocal_118 > Local_152)
					{
						Function_62(Local_152[iLocal_1185], 1);
					}
				}
				iLocal_108 = 3;
				iLocal_111 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_109]), 16);
				Function_55("Finished Initializing BeechersHope Volumes", 5.0f);
				iLocal_108 = 4;
				iLocal_111 = 0;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_120, &iLocal_123, uLocal_119, ScriptParam_0);
				Function_12(&Local_152, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_111 = 0;
				break;
		}
		WAIT(iLocal_111);
	}
	Function_4(&uLocal_120, &iLocal_123);
	Function_3(&Local_152);
	Function_2();
	Function_1(&(Global_29008[Local_109]), 16);
	Function_55("Unloaded BeechersHope Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x548 / 1352
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x55F / 1375
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x56A / 1386
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

void Function_4(var uParam0, int iParam1) //Position: 0x5C4 / 1476
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x61C / 1564
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x702 / 1794
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

void Function_7() //Position: 0x87B / 2171
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x887 / 2183
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

void Function_9(int iParam0) //Position: 0x8CD / 2253
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

void Function_10(var uParam0, int iParam1) //Position: 0x913 / 2323
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x92D / 2349
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x94A / 2378
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
							if (IS_ACTOR_IN_VOLUME(Function_70(), uParam0[iVar05]->f_12))
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
							if (IS_ACTOR_IN_VOLUME(Function_70(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_70(), uParam0[iVar05]->f_12))
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

void Function_13(var uParam0, int iParam1) //Position: 0xD16 / 3350
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xD27 / 3367
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, int iParam1) //Position: 0xD41 / 3393
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_16() //Position: 0xD53 / 3411
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xD5C / 3420
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xDDD / 3549
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

void Function_19(int iParam0) //Position: 0x11F6 / 4598
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

float Function_20(int iParam0) //Position: 0x12F5 / 4853
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x1332 / 4914
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x136B / 4971
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

var Function_23(int iParam0) //Position: 0x13D2 / 5074
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x142A / 5162
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x164A / 5706
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

var Function_26() //Position: 0x1C77 / 7287
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1C7F / 7295
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C90 / 7312
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1D85 / 7557
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D9E / 7582
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1E03 / 7683
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1E15 / 7701
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

int Function_33(int iParam0) //Position: 0x1F45 / 8005
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1F54 / 8020
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x20EE / 8430
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

void Function_36(var uParam0, int iParam1) //Position: 0x2332 / 9010
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x233F / 9023
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2365 / 9061
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2381 / 9089
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

void Function_40() //Position: 0x2611 / 9745
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2674 / 9844
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

bool Function_42(bool bParam0) //Position: 0x26A3 / 9891
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

int Function_43(int iParam0) //Position: 0x2719 / 10009
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x272A / 10026
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

bool Function_45(int iParam0) //Position: 0x2743 / 10051
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2759 / 10073
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x276E / 10094
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x278C / 10124
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

bool Function_49(int iParam0) //Position: 0x2830 / 10288
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x2846 / 10310
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2857 / 10327
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

void Function_52(int iParam0, int iParam1) //Position: 0x28C9 / 10441
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x28EE / 10478
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

bool Function_54(int iParam0) //Position: 0x290B / 10507
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x2927 / 10535
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

void Function_56(var uParam0, int iParam1) //Position: 0x2965 / 10597
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(bool bParam0, int iParam1) //Position: 0x2974 / 10612
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

bool Function_58(var uParam0, bool bParam1) //Position: 0x29C5 / 10693
{
	int iVar0;
	
	iVar0 = Function_60(uParam0);
	if (!Function_59(iVar0))
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

bool Function_59(int iParam0) //Position: 0x2A02 / 10754
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_60(int iParam0) //Position: 0x2A19 / 10777
{
	if (!Function_61(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_61(int iParam0) //Position: 0x2A33 / 10803
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_62(bool bParam0, bool bParam1) //Position: 0x2A49 / 10825
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

int Function_63(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2A9D / 10909
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_64(uParam0);
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

var Function_64(bool bParam0) //Position: 0x2B7C / 11132
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

void Function_65(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2BAA / 11178
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

void Function_66(int iParam0) //Position: 0x2C85 / 11397
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_67(bool bParam0, char* cParam1, int iParam2) //Position: 0x2C94 / 11412
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_68() //Position: 0x2CB3 / 11443
{
	var uVar0;
	bool bVar1;
	
	Function_69(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("BeechersHope_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_region", 3, -77.27319f, 127.9266f, 1378.121f, 0.0f, -20.00011f, 0.0f, 103.6128f, 44.78061f, 159.4202f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nbehv_silo", 2, -68.18213f, 124.27f, 1370.456f, 0.0f, 0.0f, 0.0f, 11.06276f, 14.34177f, 10.81342f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_masterBed", 2, -99.12091f, 120.5662f, 1356.6f, 0.0f, 329.1483f, 0.0f, 5.987632f, 3.828812f, 7.375322f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_room1", 2, -106.0983f, 120.2559f, 1367.72f, 0.0f, 238.1161f, 0.0f, 4.562779f, 3.85983f, 6.338804f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_room2", 2, -113.7263f, 119.489f, 1362.7f, 0.0f, 58.87924f, 0.0f, 5.237065f, 3.617656f, 4.34714f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_livingRoom", 2, -103.8061f, 121.3652f, 1362.557f, 0.0f, 148.5571f, 0.0f, 6.798782f, 4.247926f, 6.220602f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_kitchen", 2, -106.5331f, 120.6738f, 1351.999f, 0.0f, 328.8768f, 0.0f, 5.223125f, 4.135811f, 7.184216f);
	Local_0.f_44 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_barn_set");
	(*&Local_0 + 32)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_barn_01", 2, -65.44868f, 120.7917f, 1411.82f, -0.3864921f, -28.3075f, 0.3628158f, 8.812788f, 11.30865f, 11.38093f);
	ADD_TO_VOLUME_SET(Local_0.f_44, (*&Local_0 + 32)[0]);
	(*&Local_0 + 32)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_barn_02", 2, -61.78377f, 120.7917f, 1404.841f, -0.3697558f, -25.92993f, 0.3551852f, 6.523752f, 11.30865f, 4.96006f);
	ADD_TO_VOLUME_SET(Local_0.f_44, (*&Local_0 + 32)[1]);
	Local_0.f_120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_Birds_set");
	(*&Local_0 + 48)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder", 3, -46.03335f, 91.35687f, 1465.51f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[0]);
	(*&Local_0 + 48)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -63.51256f, 116.8612f, 1416f, 0.0f, 20.0f, 0.0f, 19.09488f, 19.61436f, 16.02038f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[1]);
	(*&Local_0 + 48)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -139.694f, 119.1813f, 1343.83f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[2]);
	(*&Local_0 + 48)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -104.3157f, 134.2322f, 1357.065f, 0.0f, 20.0f, 0.0f, 20.39316f, 19.61436f, 18.87659f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[3]);
	(*&Local_0 + 48)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -72.64809f, 114.2872f, 1271.352f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[4]);
	(*&Local_0 + 48)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -115.9406f, 121.4596f, 1292f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[5]);
	(*&Local_0 + 48)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -148.0001f, 121.767f, 1404f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[6]);
	(*&Local_0 + 48)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -47.99998f, 114.8317f, 1314.626f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[7]);
	(*&Local_0 + 48)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -120.0f, 118.4627f, 1439.652f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[8]);
	(*&Local_0 + 48)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -105.2942f, 116.13f, 1258.706f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[9]);
	(*&Local_0 + 48)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -137.745f, 125.24f, 1302.255f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[10]);
	(*&Local_0 + 48)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -68.49857f, 114.8534f, 1371.32f, 0.0f, 20.0f, 0.0f, 6.634632f, 19.61436f, 7.604219f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[11]);
	(*&Local_0 + 48)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -16.00005f, 119.8273f, 1408f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[12]);
	(*&Local_0 + 48)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -26.26308f, 109.4274f, 1228f, 0.0f, 20.0f, 0.0f, 6.066655f, 19.61436f, 4.926733f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[13]);
	(*&Local_0 + 48)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -85.50955f, 111.3172f, 1238.49f, 0.0f, 20.0f, 0.0f, 6.180057f, 18.79514f, 7.04123f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[14]);
	(*&Local_0 + 48)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, -180f, 130.5098f, 1344.0f, 0.0f, 20.0f, 0.0f, 6.112282f, 17.48868f, 8.409119f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[15]);
	(*&Local_0 + 48)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -83.99998f, 117.0204f, 1316.0f, 0.0f, 20.0f, 0.0f, 9.957365f, 24.56802f, 5.64477f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 48)[16]);
	Local_0.f_148 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_snakes_set");
	(*&Local_0 + 124)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder25", 3, -172f, 122.4784f, 1384f, 0.0f, 20.0f, 0.0f, 5.139093f, 1.794266f, 5.226905f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 124)[0]);
	(*&Local_0 + 124)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder21", 3, -33.46529f, 112.0254f, 1286.535f, 0.0f, 20.0f, 0.0f, 5.139093f, 1.794266f, 5.226905f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 124)[1]);
	(*&Local_0 + 124)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder22", 3, -158.8531f, 127.2829f, 1316.0f, 0.0f, 20.0f, 0.0f, 5.139093f, 1.794266f, 5.226905f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 124)[2]);
	(*&Local_0 + 124)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder23", 3, -32.00002f, 125.1776f, 1449.662f, 0.0f, 20.0f, 0.0f, 5.139093f, 1.794266f, 5.226905f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 124)[3]);
	(*&Local_0 + 124)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder24", 3, -104.615f, 117.3378f, 1423.385f, 0.0f, 20.0f, 0.0f, 5.139093f, 1.794266f, 5.226905f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 124)[4]);
	Local_0.f_204 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_rabbits_set");
	(*&Local_0 + 152)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder48", 3, -52.0f, 115.8573f, 1392f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[0]);
	(*&Local_0 + 152)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder37", 3, -142.1185f, 119.873f, 1330.118f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[1]);
	(*&Local_0 + 152)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder38", 3, -68.00003f, 115.4509f, 1312.0f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[2]);
	(*&Local_0 + 152)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder39", 3, -68.0f, 109.4274f, 1240f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[3]);
	(*&Local_0 + 152)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder40", 3, -126.9363f, 119.1996f, 1413.063f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[4]);
	(*&Local_0 + 152)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder41", 3, -168.3213f, 130.5098f, 1359.679f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[5]);
	(*&Local_0 + 152)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder42", 3, -34.86451f, 114.8534f, 1338.864f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[6]);
	(*&Local_0 + 152)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder43", 3, -107.7995f, 120.4202f, 1296.201f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[7]);
	(*&Local_0 + 152)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder44", 3, -76.00006f, 120.1521f, 1456f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[8]);
	(*&Local_0 + 152)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder45", 3, -4.000122f, 124.4863f, 1408.0f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[9]);
	(*&Local_0 + 152)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder46", 3, -141.0574f, 119.5849f, 1386.943f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[10]);
	(*&Local_0 + 152)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder47", 3, -22.53343f, 112.4392f, 1261.466f, 0.0f, 20.0f, 0.0f, 7.05255f, 2.496348f, 5.267528f);
	ADD_TO_VOLUME_SET(Local_0.f_204, (*&Local_0 + 152)[11]);
	Local_0.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_cows_set");
	(*&Local_0 + 208)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_cows_01", 3, -45.05925f, 120.609f, 1422.781f, 0.0f, 38.41506f, 0.0f, 16.29232f, 7.023007f, 13.87195f);
	ADD_TO_VOLUME_SET(Local_0.f_216, (*&Local_0 + 208)[0]);
	Local_0.f_236 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_chickens_set");
	(*&Local_0 + 220)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_chickens_02", 3, -80.60326f, 116.8612f, 1388.983f, 0.0f, -19.65128f, 0.0f, 14.88558f, 9.508287f, 13.3716f);
	ADD_TO_VOLUME_SET(Local_0.f_236, (*&Local_0 + 220)[0]);
	(*&Local_0 + 220)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_chickens_01", 3, -74.63905f, 116.8612f, 1429.293f, 0.0f, -27.39087f, 0.0f, 11.25775f, 4.696454f, 6.604669f);
	ADD_TO_VOLUME_SET(Local_0.f_236, (*&Local_0 + 220)[1]);
	(*&Local_0 + 220)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_chickens_03", 3, -56.29144f, 116.8612f, 1397.338f, 0.0f, -27.39087f, 0.0f, 11.25775f, 4.696454f, 6.604669f);
	ADD_TO_VOLUME_SET(Local_0.f_236, (*&Local_0 + 220)[2]);
	Local_0.f_268 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_raccoons_set");
	(*&Local_0 + 240)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder70", 3, -139.5576f, 119.873f, 1315.027f, 0.0f, 20.0f, 0.0f, 9.443813f, 2.918191f, 11.97561f);
	ADD_TO_VOLUME_SET(Local_0.f_268, (*&Local_0 + 240)[0]);
	(*&Local_0 + 240)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder71", 3, -129.2677f, 118.9682f, 1398.732f, 0.0f, 20.0f, 0.0f, 9.443813f, 2.918191f, 11.97561f);
	ADD_TO_VOLUME_SET(Local_0.f_268, (*&Local_0 + 240)[1]);
	(*&Local_0 + 240)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder72", 3, -40.0f, 114.8534f, 1345.129f, 0.0f, 20.0f, 0.0f, 9.443813f, 2.918191f, 11.97561f);
	ADD_TO_VOLUME_SET(Local_0.f_268, (*&Local_0 + 240)[2]);
	(*&Local_0 + 240)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder73", 3, -59.99997f, 117.5116f, 1448.907f, 0.0f, 20.0f, 0.0f, 9.443813f, 2.918191f, 11.97561f);
	ADD_TO_VOLUME_SET(Local_0.f_268, (*&Local_0 + 240)[3]);
	(*&Local_0 + 240)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder74", 3, -94.64262f, 117.7208f, 1309.357f, 0.0f, 20.0f, 0.0f, 9.443813f, 2.918191f, 11.97561f);
	ADD_TO_VOLUME_SET(Local_0.f_268, (*&Local_0 + 240)[4]);
	(*&Local_0 + 240)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder75", 3, -104.0f, 117.6285f, 1435.895f, 0.0f, 20.0f, 0.0f, 9.443813f, 2.918191f, 11.97561f);
	ADD_TO_VOLUME_SET(Local_0.f_268, (*&Local_0 + 240)[5]);
	Local_0.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_Gazeebo", 3, -138.9021f, 122.0557f, 1343.487f, 0.0f, 20.0f, 0.0f, 4.662525f, 5.287941f, 4.494165f);
	Local_0.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nbehv_pigs", 3, -68.68354f, 117.6394f, 1420.286f, 0.0f, 151.5752f, 0.0f, 5.022824f, 2.106935f, 2.633704f);
	Local_0.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_horseshoepit", 2, -128.0414f, 121.6508f, 1359.829f, 0.0f, 20.68785f, 0.0f, 3.484789f, 7.731788f, 16.41608f);
	Local_0.f_284 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_poker", 3, -138.9021f, 122.0557f, 1343.487f, 0.0f, 20.0f, 0.0f, 4.464867f, 5.063769f, 4.303644f);
	Local_0.f_296 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_dogs_set");
	(*&Local_0 + 288)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_cows_02", 3, -114.8615f, 120.609f, 1388.945f, 0.0f, 57.58054f, 0.0f, 57.39077f, 13.55771f, 48.58187f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 288)[0]);
	Local_0.f_316 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_horses_set");
	(*&Local_0 + 300)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_horses_01", 3, -11.71539f, 120.609f, 1324.419f, 0.0f, 99.75596f, 0.0f, 96.33447f, 23.08625f, 45.60031f);
	ADD_TO_VOLUME_SET(Local_0.f_316, (*&Local_0 + 300)[0]);
	(*&Local_0 + 300)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_horses_02", 3, -63.50056f, 120.609f, 1488.672f, 0.0f, 157.4514f, 0.0f, 48.72891f, 18.5713f, 36.68232f);
	ADD_TO_VOLUME_SET(Local_0.f_316, (*&Local_0 + 300)[1]);
	(*&Local_0 + 300)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_horses_03", 3, -4.260359f, 120.609f, 1444.016f, 0.0f, 59.2851f, 0.0f, 61.44287f, 14.64924f, 18.05786f);
	ADD_TO_VOLUME_SET(Local_0.f_316, (*&Local_0 + 300)[2]);
	Local_0.f_336 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "behv_house_set");
	(*&Local_0 + 320)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_house_01", 2, -106.9257f, 121.1451f, 1358.415f, -0.4197603f, -32.73133f, 0.379723f, 17.18523f, 10.05878f, 19.03523f);
	ADD_TO_VOLUME_SET(Local_0.f_336, (*&Local_0 + 320)[0]);
	(*&Local_0 + 320)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_house_02", 2, -106.4989f, 121.8808f, 1366.092f, -0.4117201f, -31.6991f, 0.3754366f, 14.73208f, 8.622916f, 18.70563f);
	ADD_TO_VOLUME_SET(Local_0.f_336, (*&Local_0 + 320)[1]);
	(*&Local_0 + 320)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_house_03", 2, -111.4712f, 119.0865f, 1345.575f, -0.4117201f, -31.6991f, 0.3754366f, 9.695052f, 8.622916f, 6.011496f);
	ADD_TO_VOLUME_SET(Local_0.f_336, (*&Local_0 + 320)[2]);
	Local_0.f_340 = CREATE_VOLUME_IN_LAYOUT(Local_0, "behv_crows", 3, -68.33138f, 125.2768f, 1370.704f, 0.0f, -19.65128f, 0.0f, 12.2071f, 23.80665f, 10.96554f);
	CREATE_POINT_IN_LAYOUT(Local_0, "behf_report_crime_road", -111.175f, 117.682f, 1406.401f, 0.0f, 164.848f, 0.0f);
	Local_0.f_344 = CREATE_OBJECTSET_IN_LAYOUT("corngrpSet", Local_0, 8, 0);
	*(&Local_0 + 348[06]) = { -58.57379f, 116.8612f, 1416f };
	*(&Local_0 + 348[06] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_0, "cornDest", -58.57379f, 116.8612f, 1416f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_0.f_344);
	*(&Local_0 + 376) = { -109.3899f, 119.4007f, 1362.701f };
	*(&Local_0 + 376 + 12) = { 0.0f, 146.0974f, 0.0f };
	Local_0.f_400 = CREATE_POINT_IN_LAYOUT(Local_0, "behf_interiorPoint_house", -109.3899f, 119.4007f, 1362.701f, 0.0f, 146.0974f, 0.0f);
	*(&Local_0 + 404) = { -65.36214f, 116.9683f, 1411.571f };
	*(&Local_0 + 404 + 12) = { 0.0f, 59.67083f, 0.0f };
	Local_0.f_428 = CREATE_POINT_IN_LAYOUT(Local_0, "behf_interiorPoint_barn", -65.36214f, 116.9683f, 1411.571f, 0.0f, 59.67083f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos1", -151.07f, 121.474f, 1348.16f, -0.009f, -97.681f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos2", -98.324f, 120.133f, 1306.242f, 3.51f, -172.414f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos3", -4.54f, 124.924f, 1406.104f, -5.678f, 87.792f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos4", -83.186f, 122.306f, 1477.686f, 0.709f, 3.346f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos5", -125.265f, 122.345f, 1313.298f, -1.65f, -150.202f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos6", -73.24f, 128.5089f, 1368.69f, -6.288558f, -174.648f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos7", -140.25f, 120.466f, 1341.238f, 1.203f, -122.996f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos8", -103.1647f, 120.4411f, 1371.667f, -0.02092119f, -66.07418f, 2.634905f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos9", -79.614f, 117.407f, 1418.148f, 13.415f, -64.102f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "beh_vista_cam_pos10", -69.35431f, 120.996f, 1409.923f, 6.253f, 43.675f, 0.0f);
	return 1;
}

void Function_69(int iParam0, int iParam1) //Position: 0x4501 / 17665
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

var Function_70() //Position: 0x454A / 17738
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_71(bool bParam0, var uParam1) //Position: 0x455F / 17759
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

