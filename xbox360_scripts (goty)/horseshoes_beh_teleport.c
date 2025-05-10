//Decompiled with MagicRDR v1.0
//Function Count : 17
//Statics Count : 7
//Natives Count : 36
//Parameters Count : 7

#region Local Var
	struct<7> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar0;
	bool bVar3;
	
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(12, 0, 0));
	vVar0 = { -130.557f, 118.951f, 1354.487f };
	bVar3 = 199.341f;
	Function_15(0, 0);
	CAMERA_RESET(0);
	TELEPORT_ACTOR_WITH_HEADING(GET_PLAYER_ACTOR(0), vVar0, bVar3, 1, 1, 1);
	Function_9(1, 0, 1);
	while (!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	CAMERA_RESET(0);
	while ((!Function_6(Global_30717[1]) || !STREAMING_IS_WORLD_LOADED()) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (HUD_IS_FADED())
	{
		HUD_FADE_IN(1.0f, 1065353216);
	}
	Function_1(6, 60, 0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0, int iParam1, int iParam2) //Position: 0x9F / 159
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
		Function_2(Global_16524, bVar0, 1);
	}
	return;
}

void Function_2(int iParam0, bool bParam1, bool bParam2) //Position: 0x185 / 389
{
	int iVar0;
	
	Function_5(iParam0);
	Function_4(bParam1);
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
	Function_3();
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

void Function_3() //Position: 0x2FE / 766
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_4(bool bParam0) //Position: 0x30A / 778
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

void Function_5(int iParam0) //Position: 0x350 / 848
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

bool Function_6(int iParam0) //Position: 0x396 / 918
{
	if (!Function_8(iParam0))
	{
		return 1;
	}
	return Function_7(&(Global_29008[iParam0]), 4);
}

bool Function_7(var uParam0, int iParam1) //Position: 0x3B2 / 946
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_8(int iParam0) //Position: 0x3CE / 974
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_9(var uParam0, bool bParam1, int iParam2) //Position: 0x3E4 / 996
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_8(Global_29006))
		{
			Function_14(&(Global_29008[Global_29006]), 131072);
			Function_13(&(Global_29008[Global_29006]), 2097152);
			Function_11(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_7(&(Global_29008[iVar0]), 4) || Function_7(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_13(&(Global_29008[iVar0]), 2097155);
					Function_14(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_10())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_10() //Position: 0x4EF / 1263
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_11(int iParam0) //Position: 0x4F8 / 1272
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_12())
			{
				return;
			}
		}
		if (!Function_7(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_12() //Position: 0x577 / 1399
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_7(&(Global_29008[iVar0]), 4) || Function_7(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_13(var uParam0, int iParam1) //Position: 0x5E0 / 1504
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x5F7 / 1527
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_15(var uParam0, int iParam1) //Position: 0x606 / 1542
{
	Function_5(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	if (!StackVal != StackVal)
	{
		Function_16(StackVal, iParam1);
	}
	return;
}

void Function_16(int iParam0, var uParam1) //Position: 0x637 / 1591
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_5(iParam0);
	Function_4(iVar0);
	PRINTNL();
	Function_2(iParam0, iVar0, uParam1);
	return;
}

