//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 343
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<885> Local_0 = { 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_222 = 0;
	Local_223 = { StackVal, ScriptParam_0 };
	Function_66("Initializing CasaMadrugada Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_225 = 500;
		uLocal_229 = Function_65();
		switch (iLocal_222)
		{
			case 0x00000000:
				if (Function_63())
				{
					bLocal_264 = Function_62(Local_0, "casaMadrugada", ScriptParam_0);
					iLocal_222 = 1;
				}
				iLocal_225 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_264))
				{
					iLocal_222 = 2;
				}
				iLocal_225 = 0;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_230);
				Function_60(&uLocal_230, &iLocal_233, 4, Local_0.f_56, 4294967295, 4);
				Function_60(StackVal, &uLocal_230, &iLocal_233, 5, 4294967295, 16642);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_448, 4294967295, 16642);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_476, 4294967295, 1282);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_20, 4294967295, 770);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_40, 4294967295, 258);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_472, 4294967295, 258);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_60, 4294967295, 65792);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_136, 4294967295, 65792);
				Function_60(&uLocal_230, &iLocal_233, 5, Local_0.f_172, 4294967295, 1282);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 7, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_136, 0, 1);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 8, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_136, 0, 1);
				iLocal_228 = Function_58(&Local_265, bLocal_264, "trainstation01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				if (iLocal_228 <= 0 && iLocal_228 > Local_265)
				{
					Function_57(&(Local_265[iLocal_2285]), 63);
				}
				Function_58(&Local_265, bLocal_264, "ncantina01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_226 = Function_58(&Local_265, bLocal_264, "ncantina01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				if (iLocal_226 <= 0 && iLocal_226 > Local_265)
				{
					Function_57(&(Local_265[iLocal_2265]), 48);
				}
				iLocal_227 = Function_58(&Local_265, bLocal_264, "ncantina01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				if (iLocal_227 <= 0 && iLocal_227 > Local_265)
				{
					Function_57(&(Local_265[iLocal_2275]), 48);
				}
				Function_58(&Local_265, bLocal_264, "whorehouse01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 6, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 10, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_58(&Local_265, bLocal_264, "whorehouse01", 11, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_0.f_136);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_0.f_136);
				iLocal_222 = 3;
				iLocal_225 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_223]), 16);
				Function_55("Finished Initializing CasaMadrugada Volumes", 5.0f);
				iLocal_222 = 4;
				iLocal_225 = 0;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_230, &iLocal_233, uLocal_229, ScriptParam_0);
				Function_12(&Local_265, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_225 = 0;
				break;
		}
		WAIT(iLocal_225);
	}
	Function_4(&uLocal_230, &iLocal_233);
	Function_3(&Local_265);
	Function_2();
	Function_1(&(Global_29008[Local_223]), 16);
	Function_55("Unloaded CasaMadrugada Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x4D3 / 1235
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x4EA / 1258
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x4F5 / 1269
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

void Function_4(var uParam0, int iParam1) //Position: 0x54F / 1359
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x5A7 / 1447
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0x68D / 1677
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

void Function_7() //Position: 0x806 / 2054
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0x812 / 2066
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

void Function_9(int iParam0) //Position: 0x858 / 2136
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

void Function_10(var uParam0, int iParam1) //Position: 0x89E / 2206
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0x8B8 / 2232
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0x8D5 / 2261
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

void Function_13(var uParam0, int iParam1) //Position: 0xCA1 / 3233
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0xCB2 / 3250
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xCCC / 3276
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0xCDE / 3294
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0xCE7 / 3303
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0xD68 / 3432
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

void Function_19(int iParam0) //Position: 0x1181 / 4481
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

float Function_20(int iParam0) //Position: 0x1280 / 4736
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x12BD / 4797
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x12F6 / 4854
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

var Function_23(int iParam0) //Position: 0x135D / 4957
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x13B5 / 5045
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x15D5 / 5589
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

var Function_26() //Position: 0x1C02 / 7170
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x1C0A / 7178
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C1B / 7195
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

struct<32> Function_29(char* cParam0, bool bParam1) //Position: 0x1D10 / 7440
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D29 / 7465
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1D8E / 7566
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1DA0 / 7584
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

int Function_33(int iParam0) //Position: 0x1ED0 / 7888
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x1EDF / 7903
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2079 / 8313
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

void Function_36(var uParam0, int iParam1) //Position: 0x22BD / 8893
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x22CA / 8906
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x22F0 / 8944
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x230C / 8972
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

void Function_40() //Position: 0x259C / 9628
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x25FF / 9727
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

bool Function_42(bool bParam0) //Position: 0x262E / 9774
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

int Function_43(int iParam0) //Position: 0x26A4 / 9892
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x26B5 / 9909
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

bool Function_45(int iParam0) //Position: 0x26CE / 9934
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x26E4 / 9956
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x26F9 / 9977
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2717 / 10007
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

bool Function_49(int iParam0) //Position: 0x27BB / 10171
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x27D1 / 10193
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x27E2 / 10210
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

void Function_52(int iParam0, int iParam1) //Position: 0x2854 / 10324
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2879 / 10361
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

bool Function_54(int iParam0) //Position: 0x2896 / 10390
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x28B2 / 10418
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

void Function_56(var uParam0, int iParam1) //Position: 0x28F0 / 10480
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_57(var uParam0, bool bParam1) //Position: 0x28FF / 10495
{
	Function_13(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_58(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2911 / 10513
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

var Function_59(bool bParam0) //Position: 0x29F0 / 10736
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

void Function_60(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2A1E / 10782
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

void Function_61(int iParam0) //Position: 0x2AF9 / 11001
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_62(bool bParam0, char* cParam1, int iParam2) //Position: 0x2B08 / 11016
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_63() //Position: 0x2B27 / 11047
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("CasaMadrugada_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("CasaMadrugada_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_trainStn", 2, -806.3028f, 16.27773f, 3777.344f, -0.5743347f, -44.77498f, 0.541441f, 7.291147f, 5.922976f, 15.61f);
	Local_0.f_20 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_bar_set");
	(*&Local_0 + 8)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_bar_01", 2, -794.7755f, 15.01289f, 3696.803f, 0.0f, -44.38549f, 0.0f, 16.07115f, 3.758225f, 10.05159f);
	ADD_TO_VOLUME_SET(Local_0.f_20, (*&Local_0 + 8)[0]);
	(*&Local_0 + 8)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_bar_02", 2, -789.6567f, 13.15435f, 3703.599f, 0.0f, -43.09472f, 0.0f, 3.249471f, 7.623641f, 7.487772f);
	ADD_TO_VOLUME_SET(Local_0.f_20, (*&Local_0 + 8)[1]);
	Local_0.f_40 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_alley_set");
	(*&Local_0 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_alley_01", 2, -796.4014f, 13.70259f, 3681.536f, 0.6455604f, -44.57007f, -1.497947f, 8.451973f, 6.889233f, 4.493765f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 24)[0]);
	(*&Local_0 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_alley_02", 2, -801.9087f, 13.05098f, 3686.507f, 0.0f, -45.2793f, 0.0f, 7.737553f, 9.463933f, 14.94528f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 24)[1]);
	(*&Local_0 + 24)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_alley_03", 2, -820.2098f, 12.16464f, 3695.942f, 0.0f, -44.78384f, 0.0f, 5.064258f, 10.26207f, 33.69819f);
	ADD_TO_VOLUME_SET(Local_0.f_40, (*&Local_0 + 24)[2]);
	Local_0.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_balcony_set");
	(*&Local_0 + 44)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_balcony_03", 2, -808.3246f, 18.67298f, 3708.198f, 0.0f, 46.09587f, 0.0f, 25.51252f, 5.493402f, 3.00904f);
	ADD_TO_VOLUME_SET(Local_0.f_52, (*&Local_0 + 44)[0]);
	Local_0.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_region", 2, -804.7143f, 16.50582f, 3732.976f, 0.0f, 44.79254f, 0.0f, 117.0739f, 25.23466f, 108.1188f);
	Local_0.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_BunkHouse", 2, -788.619f, 13.18159f, 3690.619f, 0.0f, 45.84349f, 0.0f, 6.227079f, 6.568761f, 15.13013f);
	Local_0.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_crows_set");
	(*&Local_0 + 64)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder13", 3, -764.0739f, 13.05098f, 3744.0f, 0.0f, 20.0f, 0.0f, 6.10493f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[0]);
	(*&Local_0 + 64)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder1", 3, -796.0f, 13.05098f, 3674.372f, 0.0f, 20.0f, 0.0f, 6.10493f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[1]);
	(*&Local_0 + 64)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder2", 3, -805.8668f, 13.05098f, 3777.47f, 0.0f, 45.26674f, 0.0f, 23.49845f, 7.5894f, 13.56014f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[2]);
	(*&Local_0 + 64)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder3", 3, -777.3153f, 13.05098f, 3708.433f, 0.0f, 20.0f, 0.0f, 6.10493f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[3]);
	(*&Local_0 + 64)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder4", 3, -833.4831f, 13.05098f, 3742.111f, 0.0f, -45.5061f, 0.0f, 16.77011f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[4]);
	(*&Local_0 + 64)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder5", 3, -826.9752f, 13.05098f, 3727.765f, 0.0f, 20.0f, 0.0f, 6.10493f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[5]);
	(*&Local_0 + 64)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder6", 3, -805.5087f, 13.05098f, 3702.613f, 0.0f, 33.29927f, 0.0f, 28.18205f, 7.5894f, 19.86875f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[6]);
	(*&Local_0 + 64)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder7", 3, -819.5359f, 13.05098f, 3767.139f, 0.0f, 20.0f, 0.0f, 6.10493f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[7]);
	(*&Local_0 + 64)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder8", 3, -796.0f, 13.05098f, 3744.0f, 0.0f, 20.0f, 0.0f, 6.10493f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[8]);
	(*&Local_0 + 64)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "nCylinder9", 3, -760.6938f, 13.05098f, 3731.306f, 0.0f, 20.0f, 0.0f, 6.10493f, 7.5894f, 3.934427f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[9]);
	(*&Local_0 + 64)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder10", 3, -819.3535f, 18.43041f, 3710.828f, 0.0f, 38.58831f, 0.0f, 2.086118f, 1.787392f, 4.852084f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[10]);
	(*&Local_0 + 64)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder11", 3, -830.0306f, 13.03314f, 3704.874f, 0.0f, 39.89325f, 0.0f, 3.894529f, 1.0f, 2.128424f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[11]);
	(*&Local_0 + 64)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder12", 3, -819.5968f, 13.03314f, 3694.634f, 0.0f, 43.64146f, 0.0f, 8.288342f, 1.0f, 1.357594f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[12]);
	(*&Local_0 + 64)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder16", 3, -790.4797f, 19.48275f, 3692.78f, 0.0f, 20.0f, 0.0f, 4.029238f, 1.592475f, 5.292638f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[13]);
	(*&Local_0 + 64)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder14", 3, -841.3357f, 18.50264f, 3727.26f, 0.0f, 20.0f, 0.0f, 3.048616f, 1.0f, 3.845933f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[14]);
	(*&Local_0 + 64)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder15", 3, -834.6487f, 19.41341f, 3716.635f, 2.006079f, 16.84535f, -2.695644f, 2.563606f, 1.560858f, 2.006725f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 64)[15]);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_players_room", 2, -811.742f, 18.18306f, 3705.84f, 0.0f, 44.24602f, 0.0f, 8.813954f, 3.418221f, 5.097694f);
	Local_0.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_brothel_set");
	(*&Local_0 + 140)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_brothel_01", 2, -811.5852f, 14.51999f, 3700.57f, 0.0f, -45.3715f, 0.0f, 9.289575f, 3.330397f, 6.019562f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[0]);
	(*&Local_0 + 140)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_brothel_03", 2, -807.2336f, 13.85711f, 3696.247f, 0.0f, -46.03899f, 0.0f, 9.207765f, 4.680773f, 6.26373f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[1]);
	(*&Local_0 + 140)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_brothel_04", 2, -816.0667f, 14.67081f, 3704.945f, 0.0f, -44.96406f, 0.0f, 9.022927f, 3.044132f, 6.009335f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[2]);
	(*&Local_0 + 140)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_brothel_05", 2, -817.4669f, 18.13931f, 3699.951f, 0.0f, 43.24169f, 0.0f, 8.738506f, 3.412303f, 4.675186f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[3]);
	(*&Local_0 + 140)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_brothel_06", 2, -811.2756f, 18.17668f, 3693.858f, 0.0f, 46.06035f, 0.0f, 8.470537f, 3.390614f, 4.714306f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[4]);
	(*&Local_0 + 140)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_brothel_07", 2, -805.4082f, 18.16347f, 3699.799f, 0.0f, -44.45793f, 0.0f, 4.815435f, 3.36401f, 8.271959f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[5]);
	(*&Local_0 + 140)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_brothel_02", 2, -811.5617f, 18.16293f, 3699.9f, 0.0f, 45.38604f, 0.0f, 17.37091f, 3.021058f, 2.812284f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 140)[6]);
	Local_0.f_196 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_walkway_set");
	(*&Local_0 + 176)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_walkway2", 2, -796.7672f, 14.37165f, 3706.787f, 0.0f, 44.05541f, 0.0f, 5.227089f, 3.784717f, 17.67647f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 176)[0]);
	(*&Local_0 + 176)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_walkway3", 2, -811.2538f, 12.91709f, 3709.225f, 0.0f, 44.96168f, 0.0f, 27.33997f, 6.435522f, 3.48009f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 176)[1]);
	(*&Local_0 + 176)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_walkway4", 2, -824.2254f, 15.8424f, 3714.592f, 0.0f, 44.96168f, 0.0f, 7.533593f, 11.4075f, 16.18906f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 176)[2]);
	(*&Local_0 + 176)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_walkway5", 2, -787.3676f, 14.37165f, 3706.853f, 0.0f, 44.05541f, 0.0f, 13.06286f, 3.784717f, 4.337309f);
	ADD_TO_VOLUME_SET(Local_0.f_196, (*&Local_0 + 176)[3]);
	Local_0.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_regs_set");
	(*&Local_0 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_regs_01", 2, -794.6103f, 14.12606f, 3697.246f, 0.0f, -44.75211f, 0.0f, 15.08281f, 7.08342f, 4.550721f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 200)[0]);
	Local_0.f_248 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_WhrRegs_set");
	(*&Local_0 + 212)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder34", 3, -811.6566f, 17.86487f, 3693.92f, 0.0f, 42.77212f, 0.0f, 5.090549f, 1.468264f, 2.420432f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[0]);
	(*&Local_0 + 212)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder27", 3, -807.5456f, 14.16206f, 3695.944f, 0.0f, 43.41973f, 0.0f, 3.069165f, 1.745446f, 4.115707f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[1]);
	(*&Local_0 + 212)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder28", 3, -811.5952f, 14.15583f, 3700.567f, 0.0f, 20.0f, 0.0f, 3.001235f, 1.442589f, 3.561808f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[2]);
	(*&Local_0 + 212)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder29", 3, -816.0573f, 14.14706f, 3705.06f, 0.0f, 20.0f, 0.0f, 2.716609f, 1.580899f, 3.864628f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[3]);
	(*&Local_0 + 212)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder30", 3, -820.3043f, 14.14306f, 3709.699f, 0.0f, 20.0f, 0.0f, 2.866683f, 1.45179f, 3.824502f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[4]);
	(*&Local_0 + 212)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder31", 3, -811.2254f, 18.14856f, 3705.455f, 0.0f, 50.20604f, 0.0f, 6.881428f, 1.5476f, 2.959556f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[5]);
	(*&Local_0 + 212)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder32", 3, -805.3223f, 18.20893f, 3699.656f, 0.0f, 44.01006f, 0.0f, 3.846889f, 1.687158f, 2.437262f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[6]);
	(*&Local_0 + 212)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder33", 3, -817.7166f, 18.29096f, 3699.879f, 0.0f, 40.30882f, 0.0f, 4.098403f, 1.562841f, 2.57164f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 212)[7]);
	Local_0.f_296 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_rabbits_set");
	(*&Local_0 + 252)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder51", 3, -766.1308f, 13.05098f, 3739.121f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[0]);
	(*&Local_0 + 252)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder42", 3, -829.3022f, 13.05098f, 3765.605f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[1]);
	(*&Local_0 + 252)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder43", 3, -774.9594f, 13.05098f, 3696.278f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[2]);
	(*&Local_0 + 252)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder44", 3, -797.9305f, 13.05098f, 3735.462f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[3]);
	(*&Local_0 + 252)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder45", 3, -844.5376f, 13.05098f, 3712.051f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[4]);
	(*&Local_0 + 252)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder46", 3, -773.1508f, 13.05098f, 3718.52f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[5]);
	(*&Local_0 + 252)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder47", 3, -834.3109f, 13.05098f, 3786.002f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[6]);
	(*&Local_0 + 252)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder48", 3, -783.9529f, 13.05098f, 3757.397f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[7]);
	(*&Local_0 + 252)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder49", 3, -831.933f, 13.05098f, 3735.462f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[8]);
	(*&Local_0 + 252)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder50", 3, -844.5376f, 13.05098f, 3735.462f, 0.0f, 20.0f, 0.0f, 3.661924f, 2.925787f, 2.883651f);
	ADD_TO_VOLUME_SET(Local_0.f_296, (*&Local_0 + 252)[9]);
	Local_0.f_324 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_dogs_set");
	(*&Local_0 + 300)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder68", 3, -792.836f, 13.16464f, 3711.019f, 0.0f, 20.0f, 0.0f, 4.163461f, 10.99225f, 3.658534f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 300)[0]);
	(*&Local_0 + 300)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder64", 3, -836.1879f, 13.16464f, 3731.692f, 0.0f, 20.0f, 0.0f, 4.163461f, 10.99225f, 3.658534f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 300)[1]);
	(*&Local_0 + 300)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder65", 3, -795.469f, 13.16464f, 3762.82f, 0.0f, 20.0f, 0.0f, 4.163461f, 10.99225f, 3.658534f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 300)[2]);
	(*&Local_0 + 300)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder66", 3, -825.9218f, 13.16464f, 3721.139f, 0.0f, 20.0f, 0.0f, 4.163461f, 10.99225f, 3.658534f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 300)[3]);
	(*&Local_0 + 300)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder67", 3, -807.9018f, 13.16464f, 3731.106f, 0.0f, 20.0f, 0.0f, 4.163461f, 2.748588f, 3.658534f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 300)[4]);
	Local_0.f_372 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_snakes_set");
	(*&Local_0 + 328)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder78", 3, -768.6904f, 13.05098f, 3760.0f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[0]);
	(*&Local_0 + 328)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder69", 3, -774.1686f, 13.05098f, 3725.26f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[1]);
	(*&Local_0 + 328)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder70", 3, -836.5049f, 13.05098f, 3751.001f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[2]);
	(*&Local_0 + 328)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder71", 3, -835.0659f, 13.05098f, 3699.702f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[3]);
	(*&Local_0 + 328)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder72", 3, -824.9296f, 13.05098f, 3731.961f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[4]);
	(*&Local_0 + 328)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder73", 3, -821.1913f, 13.05098f, 3798.301f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[5]);
	(*&Local_0 + 328)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder74", 3, -783.5839f, 13.05098f, 3760.0f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[6]);
	(*&Local_0 + 328)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder75", 3, -827.6003f, 13.05098f, 3786.766f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[7]);
	(*&Local_0 + 328)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder76", 3, -745.0389f, 13.05098f, 3724.009f, 0.0f, 20.0f, 0.0f, 3.310231f, 3.202805f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[8]);
	(*&Local_0 + 328)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder77", 3, -820.0f, 13.05098f, 3760.0f, 0.0f, 20.0f, 0.0f, 3.310231f, 4.443566f, 3.457055f);
	ADD_TO_VOLUME_SET(Local_0.f_372, (*&Local_0 + 328)[9]);
	Local_0.f_428 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_vultures_set");
	(*&Local_0 + 376)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder63", 3, -759.6187f, 14.22204f, 3748.58f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[0]);
	(*&Local_0 + 376)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder52", 3, -824.0f, 14.22204f, 3789.929f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[1]);
	(*&Local_0 + 376)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder53", 3, -824.0f, 14.22204f, 3692.034f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[2]);
	(*&Local_0 + 376)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder54", 3, -840.0287f, 14.22204f, 3751.655f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[3]);
	(*&Local_0 + 376)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder55", 3, -791.483f, 14.22204f, 3761.306f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[4]);
	(*&Local_0 + 376)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder56", 3, -767.9371f, 14.22204f, 3706.355f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[5]);
	(*&Local_0 + 376)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder57", 3, -776.0715f, 14.22204f, 3728.357f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[6]);
	(*&Local_0 + 376)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder58", 3, -855.1661f, 14.22204f, 3725.353f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[7]);
	(*&Local_0 + 376)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder59", 3, -741.2905f, 14.22204f, 3728.619f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[8]);
	(*&Local_0 + 376)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder60", 3, -798.5344f, 14.22204f, 3750.051f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[9]);
	(*&Local_0 + 376)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder61", 3, -824.0f, 14.22204f, 3764.0f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[10]);
	(*&Local_0 + 376)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Cylinder62", 3, -845.1601f, 14.22204f, 3696.963f, 0.0f, 20.0f, 0.0f, 5.376306f, 15.18995f, 5.853055f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 376)[11]);
	Local_0.f_432 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_liarsdice", 2, -789.4973f, 13.4669f, 3698.786f, 0.0f, -43.11062f, 0.0f, 5.090456f, 5.090456f, 5.090456f);
	Local_0.f_436 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_poker", 2, -795.1835f, 13.4669f, 3699.552f, 0.0f, -43.11062f, 0.0f, 6.340227f, 5.090456f, 5.090456f);
	Local_0.f_448 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_train_platform_set");
	(*&Local_0 + 440)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_train_platform_01", 2, -807.3448f, 13.81927f, 3779.459f, 0.0f, -45.37596f, 0.0f, 20.26508f, 14.77738f, 31.95724f);
	ADD_TO_VOLUME_SET(Local_0.f_448, (*&Local_0 + 440)[0]);
	Local_0.f_472 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_CourtYrd_set");
	(*&Local_0 + 452)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_CourtYrd_02", 2, -780.2878f, 13.05098f, 3709.311f, 0.0f, 46.09587f, 0.0f, 23.69177f, 12.77384f, 8.261987f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 452)[0]);
	(*&Local_0 + 452)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_CourtYrd_03", 2, -781.5798f, 13.01439f, 3699.925f, 0.0f, -44.35699f, 0.0f, 8.206616f, 8.351545f, 9.999015f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 452)[1]);
	(*&Local_0 + 452)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_CourtYrd_04", 2, -828.0232f, 13.2275f, 3728.073f, 0.0f, -45.66846f, 0.0f, 17.11484f, 15.15773f, 16.34783f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 452)[2]);
	(*&Local_0 + 452)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_CourtYrd_05", 2, -809.9717f, 13.2275f, 3727.646f, 0.0f, -45.66846f, 0.0f, 20.97757f, 18.57875f, 42.01398f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 452)[3]);
	Local_0.f_476 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_patioupper", 2, -820.549f, 18.43921f, 3710.325f, -0.2801316f, 44.35781f, -0.879748f, 8.267499f, 3.73759f, 16.12029f);
	Local_0.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_patiolower", 2, -832.2273f, 14.75896f, 3714.829f, -0.2801316f, 44.35781f, -0.879748f, 11.67304f, 5.277174f, 7.373465f);
	Local_0.f_492 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "casv_trainyard_set");
	(*&Local_0 + 484)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "casv_trainyard_01", 2, -783.8069f, 13.05098f, 3747.955f, 0.0f, 46.09587f, 0.0f, 41.4718f, 22.36026f, 39.71608f);
	ADD_TO_VOLUME_SET(Local_0.f_492, (*&Local_0 + 484)[0]);
	CREATE_POINT_IN_LAYOUT(Local_0, "casf_report_crime_road", -843.8538f, 12.80097f, 3799.341f, 0.0f, 153.566f, 0.0f);
	*(&Local_0 + 496) = { -798.875f, 13.052f, 3718.32f };
	*(&Local_0 + 496 + 12) = { 0.0f, 129.5424f, 0.0f };
	Local_0.f_520 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_enDuel1", -798.875f, 13.052f, 3718.32f, 0.0f, 129.5424f, 0.0f);
	*(&Local_0 + 524) = { -805.637f, 13.052f, 3724.192f };
	*(&Local_0 + 524 + 12) = { 0.0f, 310.034f, 0.0f };
	Local_0.f_548 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_playerDuel1", -805.637f, 13.052f, 3724.192f, 0.0f, 310.034f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "casf_clear_bounty", -806.509f, 13.604f, 3778.119f, 0.0f, 53.728f, 0.0f);
	*(&Local_0 + 552) = { -810.2482f, 13.46156f, 3781.604f };
	*(&Local_0 + 552 + 12) = { 0.0f, 45.03443f, 0.0f };
	Local_0.f_576 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_train", -810.2482f, 13.46156f, 3781.604f, 0.0f, 45.03443f, 0.0f);
	*(&Local_0 + 580) = { -791.525f, 13.09719f, 3700.97f };
	*(&Local_0 + 580 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_604 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_saloon", -791.525f, 13.09719f, 3700.97f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 608) = { -786.8501f, 13.16464f, 3691.692f };
	*(&Local_0 + 608 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_632 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_house", -786.8501f, 13.16464f, 3691.692f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 636) = { -820.6178f, 13.11084f, 3710.959f };
	*(&Local_0 + 636 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_660 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room", -820.6178f, 13.11084f, 3710.959f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 664) = { -815.7907f, 13.11084f, 3705.553f };
	*(&Local_0 + 664 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_688 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room1", -815.7907f, 13.11084f, 3705.553f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 692) = { -811.6736f, 13.11084f, 3700.942f };
	*(&Local_0 + 692 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_716 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room2", -811.6736f, 13.11084f, 3700.942f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 720) = { -806.9931f, 13.11084f, 3695.701f };
	*(&Local_0 + 720 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_744 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room3", -806.9931f, 13.11084f, 3695.701f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 748) = { -811.8158f, 16.67075f, 3693.402f };
	*(&Local_0 + 748 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_772 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room4", -811.8158f, 16.67075f, 3693.402f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 776) = { -818.0532f, 16.67075f, 3700.387f };
	*(&Local_0 + 776 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_800 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room5", -818.0532f, 16.67075f, 3700.387f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 804) = { -813.9606f, 17.10117f, 3706.818f };
	*(&Local_0 + 804 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_828 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room6", -813.9606f, 17.10117f, 3706.818f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 832) = { -810.0627f, 17.10117f, 3702.453f };
	*(&Local_0 + 832 + 12) = { 0.0f, 228.2381f, 0.0f };
	Local_0.f_856 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room7", -810.0627f, 17.10117f, 3702.453f, 0.0f, 228.2381f, 0.0f);
	*(&Local_0 + 860) = { -804.9431f, 17.10117f, 3697.665f };
	*(&Local_0 + 860 + 12) = { 0.0f, 403.9355f, 0.0f };
	Local_0.f_884 = CREATE_POINT_IN_LAYOUT(Local_0, "casf_interiorPoint_room8", -804.9431f, 17.10117f, 3697.665f, 0.0f, 403.9355f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos1", -732.781f, 15.471f, 3738.639f, -1.4f, 93.691f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos2", -798.373f, 22.81f, 3944.837f, -2.745f, -20.61f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos3", -641.201f, 38.305f, 3803.866f, -13.205f, 68.847f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos4", -820.656f, 23.022f, 3816.73f, -6.96f, -22.109f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos5", -852.164f, 25.875f, 3696.872f, -7.658f, -128.018f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos6", -837.26f, 19.185f, 3783.303f, -8.226f, -70.808f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos7", -821.606f, 14.435f, 3755.39f, 2.893f, -18.159f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos8", -843.792f, 20.28f, 3729.123f, -9.04f, -74.629f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos9", -813.713f, 16.584f, 3736.573f, -7.097f, -17.422f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cas_vista_cam_pos10", -762.416f, 19.465f, 3710.691f, -3.76f, 122.27f, 0.0f);
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x5171 / 20849
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

var Function_65() //Position: 0x51BA / 20922
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(bool bParam0, var uParam1) //Position: 0x51CF / 20943
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

