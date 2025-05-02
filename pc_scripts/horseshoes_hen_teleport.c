//Decompiled with MagicRDR v1.0
//Function Count : 16
//Statics Count : 12
//Natives Count : 34
//Parameters Count : 12

#region Local Var
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<2> Var0;
	bool bVar2;
	
	ScriptParam_0 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(12, 0, 0));
	Var0 = Vector(-815,877f, 92,361f, 2349,067f);
	bVar2 = 262,805f;
	Function_14(0, 0);
	CAMERA_RESET(0);
	TELEPORT_ACTOR_WITH_HEADING(GET_PLAYER_ACTOR(0), Var0, bVar2, 1, 1, 1);
	while (!STREAMING_IS_WORLD_LOADED() && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	CAMERA_RESET(0);
	Function_9(1, 0, 1);
	while ((!Function_6(Global_46816[0]) || !STREAMING_IS_WORLD_LOADED()) && !IS_EXITFLAG_SET())
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

void Function_1(int iParam0, var uParam1, int iParam2) //Position: 0x9F / 159
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_2(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_2(bool bParam0, int iParam1, bool bParam2) //Position: 0x189 / 393
{
	int iVar0;
	
	Function_5(bParam0);
	Function_4(&iParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &iParam1);
	Function_3();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_3() //Position: 0x308 / 776
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_4(int iParam0) //Position: 0x314 / 788
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_5(int iParam0) //Position: 0x35E / 862
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

bool Function_6(int iParam0) //Position: 0x3A4 / 932
{
	if (!Function_8(iParam0))
	{
		return 1;
	}
	return Function_7(&(Global_43791[iParam0]), 4);
}

bool Function_7(var uParam0, int iParam1) //Position: 0x3C0 / 960
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_8(int iParam0) //Position: 0x3DD / 989
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_9(var uParam0, bool bParam1, int iParam2) //Position: 0x3F3 / 1011
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_8(Global_43789))
		{
			Function_13(&(Global_43791[Global_43789]), 131072);
			Function_12(&(Global_43791[Global_43789]), 2097152);
			Function_10(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_7(&(Global_43791[iVar0]), 4) || Function_7(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_12(&(Global_43791[iVar0]), 2097155);
					Function_13(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_10(int iParam0) //Position: 0x4FF / 1279
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_11())
			{
				return;
			}
		}
		if (!Function_7(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_11() //Position: 0x57E / 1406
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_7(&(Global_43791[iVar0]), 4) || Function_7(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_12(var uParam0, int iParam1) //Position: 0x5E7 / 1511
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_13(var uParam0, int iParam1) //Position: 0x601 / 1537
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x612 / 1554
{
	Function_5(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_15(StackVal, &iParam1);
	}
	return;
}

void Function_15(int iParam0, int iParam1) //Position: 0x644 / 1604
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_5(iParam0);
	Function_4(&uVar0);
	PRINTNL();
	Function_2(iParam0, &uVar0, &iParam1);
	return;
}

