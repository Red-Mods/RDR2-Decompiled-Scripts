//Decompiled with MagicRDR v1.0
//Function Count : 77
//Statics Count : 693
//Natives Count : 126
//Parameters Count : 2

#region Local Var
	struct<1513> Local_0 = { 0, 4, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	
	iLocal_379 = 0;
	Local_380 = { StackVal, ScriptParam_0 };
	Function_76("Initializing Armadillo Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_382 = 500;
		uLocal_383 = Function_75();
		switch (iLocal_379)
		{
			case 0x00000000:
				if (Function_73())
				{
					bLocal_469 = Function_72(Local_0, "narmadillo", ScriptParam_0);
					iLocal_379 = 1;
				}
				iLocal_382 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_469))
				{
					iLocal_379 = 2;
				}
				iLocal_382 = 0;
				break;
			
			case 0x00000002:
				Function_71(&uLocal_384);
				Function_70(&uLocal_384, &uLocal_387, 4, Local_0.f_204, 4294967295, 4);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_564, 4294967295, 8458);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_544, 4294967295, 4362);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_136, 4294967295, 0x40000000);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_140, 4294967295, 524554);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_144, 4294967295, 0x4000010a);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_24, 4294967295, 0x1000010a);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_44, 4294967295, 2314);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_120, 4294967295, 1802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_84, 4294967295, 1794);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_180, 4294967295, 33034);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_400, 4294967295, 33034);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_176, 4294967295, 262410);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_80, 4294967295, 16650);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_392, 4294967295, 16648);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_164, 4294967295, 0x4001010a);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_60, 4294967295, 8388874);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_168, 4294967295, 0x800010a);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_432, 4294967295, 0x800018a);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_568, 4294967295, 65802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_124, 4294967295, 65802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_128, 4294967295, 65802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_132, 4294967295, 65802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_148, 4294967295, 65802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_172, 4294967295, 65802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_184, 4294967295, 65802);
				Function_70(&uLocal_384, &uLocal_387, 5, Local_0.f_248, 4294967295, 0x1000108);
				if (!Function_69())
				{
					bVar0 = !Function_68(1, 0);
				}
				else
				{
					bVar0 = false;
				}
				Function_66(&Local_470, bLocal_469, "saloon01", 6, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_84, 0, 1);
				Function_66(&Local_470, bLocal_469, "saloon01", 9, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_84, 0, 1);
				Function_66(&Local_470, bLocal_469, "saloon01", 1, &Global_29155[ScriptParam_010] + 20, bVar0, Local_0.f_120, 0, 0);
				Function_66(&Local_470, bLocal_469, "saloon01", 3, &Global_29155[ScriptParam_010] + 20, bVar0, Local_0.f_120, 0, 0);
				Function_66(&Local_470, bLocal_469, "saloon01", 4, &Global_29155[ScriptParam_010] + 20, bVar0, Local_0.f_120, 0, 0);
				Function_66(&Local_470, bLocal_469, "saloon01", 5, &Global_29155[ScriptParam_010] + 20, bVar0, Local_0.f_120, 0, 0);
				Function_66(&Local_470, bLocal_469, "saloon01", 7, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_120, 0, 0);
				Function_66(&Local_470, bLocal_469, "saloon01", 8, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_120, 0, 0);
				Function_66(&Local_470, bLocal_469, "trainstation01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
				Function_66(&Local_470, bLocal_469, "freightstation01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_24, 0, 0);
				Function_66(&Local_470, bLocal_469, "freightstation01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_24, 0, 0);
				Function_66(&Local_470, bLocal_469, "freightstation01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_24, 0, 0);
				Function_66(&Local_470, bLocal_469, "trainstation01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
				Function_66(&Local_470, bLocal_469, "ruinedBank", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "ruinedBank", 3, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "corralPens01", 1, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "corralPens01", 2, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "corralPens01", 3, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "corralPens01", 4, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "corralPens01", 5, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "cattlePen01", 1, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "cattlePen01", 2, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				Function_66(&Local_470, bLocal_469, "cattlePen01", 3, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				if ((Function_68(15, 0) && !Function_68(18, 0)) && !Function_60(18))
				{
					Function_66(&Local_470, bLocal_469, "stable01", 1, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
					Function_66(&Local_470, bLocal_469, "stable01", 2, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
					Function_66(&Local_470, bLocal_469, "stable01", 3, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
					Function_66(&Local_470, bLocal_469, "stable01", 4, &Global_29155[ScriptParam_010] + 20, 1, 0, 0, 0);
				}
				iLocal_689 = Function_66(&Local_470, bLocal_469, "schoolhouse01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_60, 0, 0);
				if (iLocal_689 <= 0 && iLocal_689 > Local_470)
				{
					if (!Function_69())
					{
						Function_59(&(Local_470[iLocal_6895]), 63);
					}
					else if (Function_57())
					{
						Function_56(Local_470[iLocal_6895], 1);
					}
				}
				iLocal_690 = Function_66(&Local_470, bLocal_469, "schoolhouse01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_60, 0, 0);
				if (iLocal_690 <= 0 && iLocal_690 > Local_470)
				{
					if (!Function_69())
					{
						Function_59(&(Local_470[iLocal_6905]), 63);
					}
					else if (Function_57())
					{
						Function_56(Local_470[iLocal_6905], 1);
					}
				}
				iLocal_681 = Function_66(&Local_470, bLocal_469, "gunsmith01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_544, 0, 0);
				if (iLocal_681 <= 0 && iLocal_681 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6815]), 33);
				}
				iLocal_682 = Function_66(&Local_470, bLocal_469, "gunsmith01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_544, 1, 0);
				if (iLocal_682 <= 0 && iLocal_682 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6825]), 33);
				}
				iLocal_683 = Function_66(&Local_470, bLocal_469, "doctorsOffice01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_564, 1, 0);
				if (iLocal_683 <= 0 && iLocal_683 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6835]), 33);
				}
				Function_66(&Local_470, bLocal_469, "trainstation01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_80, 0, 0);
				Function_66(&Local_470, bLocal_469, "sheriffsOffice01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_180, 0, 0);
				Function_66(&Local_470, bLocal_469, "sheriffsOffice01", 2, &Global_29155[ScriptParam_010] + 20, 1, Local_0.f_400, 0, 0);
				Function_66(&Local_470, bLocal_469, "sheriffsOffice01", 3, &Global_29155[ScriptParam_010] + 20, 1, Local_0.f_400, 0, 0);
				iLocal_684 = Function_66(&Local_470, bLocal_469, "ruinedBank", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_168, 0, 0);
				if (iLocal_684 <= 0 && iLocal_684 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6845]), 49);
				}
				iLocal_685 = Function_66(&Local_470, bLocal_469, "ruinedBank", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_168, 0, 0);
				if (iLocal_685 <= 0 && iLocal_685 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6855]), 49);
				}
				iLocal_686 = Function_66(&Local_470, bLocal_469, "generalStore", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_44, 1, 0);
				if (iLocal_686 <= 0 && iLocal_686 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6865]), 33);
				}
				iLocal_687 = Function_66(&Local_470, bLocal_469, "generalStore", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_44, 0, 0);
				if (iLocal_687 <= 0 && iLocal_687 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6875]), 33);
				}
				iLocal_688 = Function_66(&Local_470, bLocal_469, "generalStore", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_44, 0, 0);
				if (iLocal_688 <= 0 && iLocal_688 > Local_470)
				{
					Function_59(&(Local_470[iLocal_6885]), 33);
				}
				iLocal_379 = 3;
				iLocal_382 = 0;
				break;
			
			case 0x00000003:
				Function_55(&(Global_29008[Local_380]), 16);
				Function_54("Finished Initializing Armadillo Volumes", 5.0f);
				iLocal_379 = 4;
				iLocal_382 = 0;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_384, &uLocal_387, uLocal_383, ScriptParam_0);
				Function_12(&Local_470, 0);
				break;
			
			case 0x00000005:
				break;
		}
		WAIT(iLocal_382);
	}
	Function_4(&uLocal_384, &uLocal_387);
	Function_3(&Local_470);
	Function_2();
	Function_1(&(Global_29008[Local_380]), 16);
	Function_54("Unloaded Armadillo Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xBBD / 3005
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xBD4 / 3028
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0xBDF / 3039
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

void Function_4(var uParam0, int iParam1) //Position: 0xC39 / 3129
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_11(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(0);
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

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0xC91 / 3217
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

void Function_6(int iParam0, bool bParam1, bool bParam2) //Position: 0xD77 / 3447
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

void Function_7() //Position: 0xEF0 / 3824
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0xEFC / 3836
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

void Function_9(int iParam0) //Position: 0xF42 / 3906
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

void Function_10(var uParam0, int iParam1) //Position: 0xF88 / 3976
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0xFA2 / 4002
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0xFBF / 4031
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
	
	bVar6 = Function_69();
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
							if (IS_ACTOR_IN_VOLUME(Function_75(), uParam0[iVar05]->f_12))
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
							if (IS_ACTOR_IN_VOLUME(Function_75(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_75(), uParam0[iVar05]->f_12))
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

void Function_13(var uParam0, int iParam1) //Position: 0x138B / 5003
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x139C / 5020
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, int iParam1) //Position: 0x13B6 / 5046
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_16(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x13C8 / 5064
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_53(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_17(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_17(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x1449 / 5193
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_52(uParam0))
	{
		return 0;
	}
	Function_1(&(Global_29008[iParam2]), 4194304);
	iVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (iVar0 != 0 && *uParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*uParam0)
	{
		case 0x00000005:
			if (iVar0 & 240 == 0)
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
			if (iVar0 & 32 >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(uParam0, 2))
					{
						if (!Function_11(uParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_50(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_49(uParam0, 8);
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
			if (iVar0 & 16 >= 0)
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
								Function_49(uParam0, 4);
							}
						}
					}
				}
				else if (Function_11(uParam0, 2))
				{
					if (Function_11(uParam0, 4))
					{
						SET_CURRENT_MAP(0);
						Function_10(uParam0, 4);
					}
				}
			}
			if (iVar0 & 128 >= 0)
			{
				if ((((((bVar1 && Function_48(iParam2)) && !Function_47(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_46(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
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
							if (Function_69())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_49(uParam0, 16);
								Function_38(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
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
			if (iVar0 & 64 >= 0)
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
				Function_49(uParam0, 2);
			}
			else
			{
				Function_10(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_48(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_37(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_11(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_36(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_49(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_48(iParam2))
					{
						Function_35(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_18(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x1862 / 6242
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_37(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_55(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_23(476, 1, 0, 0);
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
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!Function_69())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x1961 / 6497
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_20(int iParam0) //Position: 0x199E / 6558
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x19D7 / 6615
{
	int iVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	iVar0 = SHIFT_LEFT(1, iParam1);
	(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || iVar0);
	return;
	return;
}

var Function_22(int iParam0) //Position: 0x1A3E / 6718
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_48(iParam0))
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1A96 / 6806
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
	Function_34(iParam0, TO_FLOAT(bParam1), 1);
	Function_33(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_24(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_24(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1CB6 / 7350
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
				iVar5 = (FLOOR(bParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((bParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
					if (iVar4 > 24)
					{
						iVar3 = (iVar4 / 24);
						iVar4 = (iVar4 - iVar3 * 24);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar3), 32);
						if (iVar3 >= 1)
						{
							stradd(&Global_35278[iParam020] + 16, " days", 32);
						}
						else
						{
							stradd(&Global_35278[iParam020] + 16, " day", 32);
						}
						bVar7 = true;
					}
					if (iVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar4), 32);
						stradd(&Global_35278[iParam020] + 16, " hr", 32);
						bVar7 = true;
					}
					if (iVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
						stradd(&Global_35278[iParam020] + 16, " min", 32);
						bVar7 = true;
					}
					if (iVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_35278[iParam020] + 16, " ", 32);
						}
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
						stradd(&Global_35278[iParam020] + 16, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar5), 32);
					stradd(&Global_35278[iParam020] + 16, " min", 32);
					iVar6 = FLOOR((bParam2 - TO_FLOAT(iVar5 * 60)));
					if (iVar6 >= 0)
					{
						stradd(&Global_35278[iParam020] + 16, " ", 32);
						stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(iVar6), 32);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
					bVar19 = (Function_20(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_20(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_31(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_29(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_26(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_25(), &Var9);
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

var Function_25() //Position: 0x22E3 / 8931
{
	int iVar0;
	
	return iVar0;
}

var Function_26(int iParam0) //Position: 0x22EB / 8939
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_27(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x22FC / 8956
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_28(char* cParam0, bool bParam1) //Position: 0x23F1 / 9201
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_29(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x240A / 9226
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_30(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_30(int iParam0, int iParam1) //Position: 0x246F / 9327
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_31(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2481 / 9345
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
	if (((Function_32(iParam0) != 19 || Function_32(iParam0) != 17) || Function_32(iParam0) != 10) || Function_32(iParam0) != 9)
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

int Function_32(int iParam0) //Position: 0x25B1 / 9649
{
	return Global_35278[iParam020].f_48;
}

void Function_33(int iParam0) //Position: 0x25C0 / 9664
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

int Function_34(int iParam0, float fParam1, bool bParam2) //Position: 0x275A / 10074
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

void Function_35(var uParam0, int iParam1) //Position: 0x299E / 10654
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_36(struct<5> Param0) //Position: 0x29AB / 10667
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_37(var uParam0, int iParam1) //Position: 0x29D1 / 10705
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x29ED / 10733
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	var uVar5;
	
	if (!Function_45(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_44(iParam1))
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
	if (!Function_41(1))
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
		uVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_25(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, uVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_39();
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

void Function_39() //Position: 0x2C7D / 11389
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_40(bVar0, iVar1);
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

void Function_40(bool bParam0, int iParam1) //Position: 0x2CE0 / 11488
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 31);
	if (!iParam1 != "")
	{
		ITERATE_IN_SET(bParam0, iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(bParam0, GET_ITERATOR_PARENT(bParam0));
	}
	return;
}

bool Function_41(bool bParam0) //Position: 0x2D0F / 11535
{
	if (Function_46(256))
	{
		return 0;
	}
	if (Function_46(262144))
	{
		return 0;
	}
	if (Function_43())
	{
		return 0;
	}
	if (!Function_46(1))
	{
		return 0;
	}
	if (!Function_46(4096))
	{
		return 0;
	}
	if (bParam0 && Function_42(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_46(2048))
	{
		return 0;
	}
	if (Function_69() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_42(int iParam0) //Position: 0x2D85 / 11653
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_43() //Position: 0x2D96 / 11670
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

bool Function_44(int iParam0) //Position: 0x2DAF / 11695
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_45(int iParam0) //Position: 0x2DC5 / 11717
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2DDA / 11738
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_47(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2DF8 / 11768
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

bool Function_48(int iParam0) //Position: 0x2E9C / 11932
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2EB2 / 11954
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_50(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2EC3 / 11971
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
			Function_51(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_6(StackVal, bVar1, bParam4);
		}
	}
}

void Function_51(int iParam0, int iParam1) //Position: 0x2F35 / 12085
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_52(int iParam0) //Position: 0x2F5A / 12122
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

bool Function_53(int iParam0) //Position: 0x2F77 / 12151
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_54(bool bParam0, float fParam1) //Position: 0x2F93 / 12179
{
	if (!Function_53(128))
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

void Function_55(var uParam0, int iParam1) //Position: 0x2FD1 / 12241
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_56(bool bParam0, int iParam1) //Position: 0x2FE0 / 12256
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", iParam1);
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

bool Function_57() //Position: 0x3034 / 12340
{
	if (Function_69())
	{
		return (Function_58() != 1 || Function_58() != 0);
	}
	return 0;
}

int Function_58() //Position: 0x304D / 12365
{
	return Global_79349.f_16;
}

void Function_59(var uParam0, int iParam1) //Position: 0x3059 / 12377
{
	Function_13(uParam0, 2);
	uParam0->f_4 = iParam1;
	return;
}

bool Function_60(bool bParam0) //Position: 0x306B / 12395
{
	int iVar0;
	
	if (!Function_65(bParam0))
	{
		return 0;
	}
	iVar0 = Function_64(bParam0);
	if (!Function_61(Function_64(bParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_61(int iParam0) //Position: 0x30A1 / 12449
{
	if (!Function_63(iParam0))
	{
		return 0;
	}
	if (!Function_62(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_62(int iParam0) //Position: 0x30C5 / 12485
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_63(int iParam0) //Position: 0x30DA / 12506
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_64(bool bParam0) //Position: 0x30F1 / 12529
{
	if (!Function_65(bParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_65(bool bParam0) //Position: 0x310B / 12555
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_66(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x3121 / 12577
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_67(uParam0);
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

var Function_67(int iParam0) //Position: 0x3200 / 12800
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (!IS_DOOR_VALID((*iParam0)[iVar05]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_68(int iParam0, bool bParam1) //Position: 0x322E / 12846
{
	int iVar0;
	
	iVar0 = Function_64(iParam0);
	if (!Function_63(iVar0))
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

bool Function_69() //Position: 0x326B / 12907
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_70(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x3274 / 12916
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

void Function_71(int iParam0) //Position: 0x334F / 13135
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_72(bool bParam0, char* cParam1, int iParam2) //Position: 0x335E / 13150
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_73() //Position: 0x337D / 13181
{
	var uVar0;
	
	Function_74(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("Armadillo_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Armadillo_layout");
	}
	Local_0.f_24 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_frght_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_freight1", 2, -2166.632f, 17.92604f, 2623.95f, 0.0f, 43.58913f, 0.0f, 7.303681f, 4.120967f, 8.164944f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_freight2", 2, -2165.33f, 17.59008f, 2631.073f, 0.0f, 0.0f, 0.0f, 8.254868f, 4.865612f, 10.99714f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_freight3", 2, -2170.188f, 17.62566f, 2628.511f, 0.0f, 0.0f, 0.0f, 3.567785f, 5.063824f, 9.828385f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[2]);
	(*&Local_0 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_freight4", 2, -2164.2f, 17.61846f, 2626.088f, 0.0f, 0.0f, 0.0f, 5.617971f, 4.865612f, 14.75492f);
	ADD_TO_VOLUME_SET(Local_0.f_24, (*&Local_0 + 4)[3]);
	Local_0.f_44 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_gstore_set");
	(*&Local_0 + 28)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_genstore1", 2, -2148.623f, 19.45428f, 2628.357f, 0.0f, 0.0f, 0.0f, 9.018986f, 7.257872f, 6.779584f);
	ADD_TO_VOLUME_SET(Local_0.f_44, (*&Local_0 + 28)[0]);
	(*&Local_0 + 28)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_genstore2", 2, -2150.207f, 19.1795f, 2624.248f, 0.0f, 0.0f, 0.0f, 5.88572f, 8.090109f, 4.929153f);
	ADD_TO_VOLUME_SET(Local_0.f_44, (*&Local_0 + 28)[1]);
	(*&Local_0 + 28)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_genstore3", 2, -2147.295f, 18.95685f, 2624.88f, 0.0f, -45.37515f, 0.0f, 4.377747f, 8.395872f, 4.236251f);
	ADD_TO_VOLUME_SET(Local_0.f_44, (*&Local_0 + 28)[2]);
	Local_0.f_60 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_school_set");
	(*&Local_0 + 48)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_school1", 2, -2070.03f, 20.80161f, 2647.482f, 0.0f, -43.818f, 0.0f, 9.732872f, 4.302454f, 6.564633f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 48)[0]);
	(*&Local_0 + 48)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_school3", 2, -2064.927f, 20.35403f, 2646.409f, 0.0f, 45.16694f, 0.0f, 2.566378f, 3.243175f, 4.281571f);
	ADD_TO_VOLUME_SET(Local_0.f_60, (*&Local_0 + 48)[1]);
	Local_0.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_train_set");
	(*&Local_0 + 64)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_train1", 2, -2192.03f, 17.9602f, 2607.348f, 0.0f, 0.0f, 0.0f, 10.81388f, 3.428749f, 11.58835f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 64)[0]);
	(*&Local_0 + 64)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_train2", 2, -2194.406f, 18.10719f, 2598.847f, 0.0f, 0.0f, 0.0f, 5.65979f, 2.929878f, 5.555932f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 64)[1]);
	(*&Local_0 + 64)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_train3", 2, -2199.583f, 17.91667f, 2605.609f, 0.0f, 0.0f, 0.0f, 4.503301f, 3.15102f, 13.21589f);
	ADD_TO_VOLUME_SET(Local_0.f_80, (*&Local_0 + 64)[2]);
	Local_0.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_players_room", 2, -2157.796f, 21.3028f, 2597.339f, 0.0f, 0.0f, 0.0f, 6.578471f, 3.303276f, 4.931881f);
	Local_0.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_bar", 2, -2165.405f, 18.34461f, 2594.597f, 0.0f, -0.4111925f, 0.0f, 1.919878f, 3.042958f, 8.634464f);
	Local_0.f_120 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_saloon_set");
	(*&Local_0 + 92)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_saloon3", 2, -2164.626f, 19.15142f, 2600.373f, 0.0f, 0.0f, 0.0f, 7.157454f, 8.18234f, 5.185028f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 92)[0]);
	(*&Local_0 + 92)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_saloon6", 2, -2169.66f, 18.83813f, 2591.501f, 0.0f, 0.0f, 0.0f, 8.544957f, 7.659739f, 12.22982f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 92)[1]);
	(*&Local_0 + 92)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_saloon7", 2, -2163.617f, 19.72818f, 2588.009f, 0.0f, 0.0f, 0.0f, 5.472857f, 7.300081f, 5.485521f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 92)[2]);
	(*&Local_0 + 92)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_saloon8", 2, -2162.463f, 21.15556f, 2594.033f, 0.0f, 0.0f, 0.0f, 2.122883f, 2.908195f, 15.72376f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 92)[3]);
	(*&Local_0 + 92)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_saloon9", 2, -2171.786f, 19.40003f, 2586.314f, 0.0f, 0.0f, 0.0f, 3.80377f, 3.109092f, 2.082781f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 92)[4]);
	(*&Local_0 + 92)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_saloon10", 2, -2169.892f, 19.26516f, 2599.158f, 0.0f, 45.37589f, 0.0f, 4.649636f, 7.555864f, 6.160785f);
	ADD_TO_VOLUME_SET(Local_0.f_120, (*&Local_0 + 92)[5]);
	Local_0.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_fid_h", 2, -2137.552f, 20.93539f, 2597.071f, 0.0f, 0.0f, 0.0f, 3.595824f, 2.927304f, 5.704147f);
	Local_0.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_pia_h", 2, -2112.444f, 19.40613f, 2624.537f, 0.0f, 0.0f, 0.0f, 7.086501f, 6.242682f, 13.23599f);
	Local_0.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_bank_h", 2, -2122.069f, 19.27977f, 2625.431f, 0.0f, 0.0f, 0.0f, 5.693934f, 5.480673f, 12.26683f);
	Local_0.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_shooting", 2, -2135.61f, 20.01764f, 2580.766f, 0.0f, 0.0f, 0.0f, 11.22108f, 7.914255f, 22.51829f);
	Local_0.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_blacksmith", 2, -2149.172f, 17.92179f, 2559.007f, 0.0f, -89.98f, 0.0f, 8.01369f, 2.664779f, 16.68806f);
	Local_0.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_dentist", 2, -2132f, 17.77041f, 2597.983f, 0.0f, 0.0f, 0.0f, 5.340528f, 2.48129f, 10.32266f);
	Local_0.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_dent_h", 2, -2131.979f, 21.18124f, 2596.559f, 0.0f, 0.0f, 0.0f, 5.47786f, 2.784811f, 7.78391f);
	Local_0.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_undertaker_set");
	(*&Local_0 + 152)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_undertaker1", 2, -2114.143f, 19.01989f, 2595.747f, 0.0f, 0.0f, 0.0f, 12.40284f, 6.03686f, 13.60169f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 152)[0]);
	(*&Local_0 + 152)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_undertaker2", 2, -2118.203f, 17.8798f, 2588.128f, 0.0f, 0.0f, 0.0f, 4.319778f, 3.504683f, 2.499442f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 152)[1]);
	Local_0.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_0, "narmv_bank", 2, -2129.407f, 17.84599f, 2628.467f, 0.0f, 0.0f, 0.0f, 8.191952f, 2.792115f, 20.49137f);
	Local_0.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_holi_h", 2, -2078.51f, 19.90768f, 2617.24f, 0.0f, 24.90731f, 0.0f, 14.4173f, 6.761f, 4.612413f);
	Local_0.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_stables", 2, -2170.963f, 19.70788f, 2571.41f, 0.0f, 0.0f, 0.0f, 9.594739f, 6.563833f, 12.0078f);
	Local_0.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_sheriff", 2, -2087.63f, 18.07517f, 2604.324f, 0.0f, 25.367f, 0.0f, 7.618929f, 3.152336f, 7.685912f);
	Local_0.f_184 = CREATE_VOLUME_IN_LAYOUT(Local_0, "narmv_sh_h", 2, -2081.97f, 19.37237f, 2611.213f, 0.0f, 25.38557f, 0.0f, 13.32485f, 6.538599f, 5.412034f);
	Local_0.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_hitch_1", 2, -2178.225f, 16.5647f, 2562.133f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_0.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_hitch_3", 2, -2133.416f, 16.47904f, 2606.31f, 0.0f, 89.793f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_0.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_hitch_4", 2, -2093.571f, 16.44941f, 2599.143f, 0.0f, -67.146f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_0.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_hitch_0", 2, -2155.571f, 16.44941f, 2604.914f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	Local_0.f_204 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_region", 3, -2133.138f, 21.46446f, 2600.468f, 0.0f, 60.82643f, 0.0f, 88.1255f, 8.138889f, 100.0f);
	Local_0.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "ArmPopArea_1_set");
	(*&Local_0 + 208)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armpop_1", 2, -2082.066f, 20.38f, 2610.247f, 0.0f, 0.0f, 0.0f, 30.0f, 10.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 208)[0]);
	(*&Local_0 + 208)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armpop_2", 2, -2074.872f, 20.3866f, 2640.391f, 0.0f, 0.0f, 0.0f, 30.0f, 10.0f, 30.0f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 208)[1]);
	(*&Local_0 + 208)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armpop_3", 2, -2154.302f, 20.3866f, 2610.593f, 0.0f, 0.0f, 0.0f, 115.0f, 10.0f, 50.0f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 208)[2]);
	(*&Local_0 + 208)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armpop_4", 2, -2158.299f, 20.38f, 2571.716f, 0.0f, 0.0f, 0.0f, 33.0f, 10.0f, 28.0f);
	ADD_TO_VOLUME_SET(Local_0.f_228, (*&Local_0 + 208)[3]);
	Local_0.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_duelStayOut", 2, -2167.432f, 16.75987f, 2612.112f, 0.0f, 0.0f, 0.0f, 16.10118f, 2.950548f, 7.655623f);
	Local_0.f_248 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_horses_set");
	(*&Local_0 + 236)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_corr1", 2, -2163.38f, 18.69929f, 2529.373f, 0.0f, 0.0f, 0.0f, 21.92858f, 7.914255f, 18.93099f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 236)[0]);
	(*&Local_0 + 236)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_corr3", 2, -2172.81f, 18.21145f, 2553.319f, 0.0f, 0.0f, 0.0f, 4.984473f, 4.546495f, 24.02264f);
	ADD_TO_VOLUME_SET(Local_0.f_248, (*&Local_0 + 236)[1]);
	Local_0.f_260 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_pigs_set");
	(*&Local_0 + 252)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pigs", 2, -2201.519f, 17.93718f, 2580.826f, 0.0f, 0.0f, 0.0f, 11.84606f, 4.342653f, 14.19223f);
	ADD_TO_VOLUME_SET(Local_0.f_260, (*&Local_0 + 252)[0]);
	Local_0.f_276 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_sheep_set");
	(*&Local_0 + 264)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sheep1", 2, -2196.418f, 17.81848f, 2563.422f, 0.0f, 0.0f, 0.0f, 3.019494f, 4.449552f, 18.62837f);
	ADD_TO_VOLUME_SET(Local_0.f_276, (*&Local_0 + 264)[0]);
	(*&Local_0 + 264)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sheep2", 2, -2192.323f, 17.81848f, 2570.334f, 0.0f, 0.0f, 0.0f, 3.019494f, 4.449552f, 32.74143f);
	ADD_TO_VOLUME_SET(Local_0.f_276, (*&Local_0 + 264)[1]);
	Local_0.f_300 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_dogs_set");
	(*&Local_0 + 280)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogs3", 3, -2131.869f, 20.07885f, 2561.108f, 0.0f, 73.21918f, 0.0f, 23.26242f, 4.30682f, 37.89078f);
	ADD_TO_VOLUME_SET(Local_0.f_300, (*&Local_0 + 280)[0]);
	(*&Local_0 + 280)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogs2", 3, -2142.907f, 19.18614f, 2611.595f, 0.0f, -0.6402224f, 0.0f, 42.99439f, 3.209314f, 8.519307f);
	ADD_TO_VOLUME_SET(Local_0.f_300, (*&Local_0 + 280)[1]);
	(*&Local_0 + 280)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogs1", 3, -2182.031f, 20.48716f, 2587.995f, 0.0f, 1.045037f, 0.0f, 5.128937f, 4.552561f, 52.86277f);
	ADD_TO_VOLUME_SET(Local_0.f_300, (*&Local_0 + 280)[2]);
	(*&Local_0 + 280)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogs4", 3, -2091.537f, 19.73709f, 2625.416f, 0.0f, 39.81729f, 0.0f, 8.65133f, 7.260193f, 23.08519f);
	ADD_TO_VOLUME_SET(Local_0.f_300, (*&Local_0 + 280)[3]);
	Local_0.f_324 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_birds_set");
	(*&Local_0 + 304)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds2", 3, -2158.319f, 19.54676f, 2547.778f, 0.0f, 20.0f, 0.0f, 38.18281f, 5.443854f, 36.51648f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 304)[0]);
	(*&Local_0 + 304)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds1", 3, -2198.048f, 20.0438f, 2574.1f, 0.0f, 2.145673f, 0.0f, 17.22327f, 4.298422f, 29.78685f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 304)[1]);
	(*&Local_0 + 304)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds3", 3, -2141.584f, 19.12232f, 2610.437f, 0.0f, 0.1460683f, 0.0f, 74.44128f, 7.713831f, 35.78056f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 304)[2]);
	(*&Local_0 + 304)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birds4", 3, -2072.425f, 22.73413f, 2644.251f, 0.0f, 20.0f, 0.0f, 17.22327f, 4.807184f, 17.22327f);
	ADD_TO_VOLUME_SET(Local_0.f_324, (*&Local_0 + 304)[3]);
	Local_0.f_344 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_chickens_set");
	(*&Local_0 + 328)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chix1", 3, -2145.043f, 20.64889f, 2544.012f, 0.0f, 2.202978f, 0.0f, 8.078754f, 5.228328f, 5.702032f);
	ADD_TO_VOLUME_SET(Local_0.f_344, (*&Local_0 + 328)[0]);
	(*&Local_0 + 328)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chix2", 3, -2135.891f, 20.64889f, 2544.229f, 0.0f, 20.0f, 0.0f, 6.384871f, 4.5316f, 6.384871f);
	ADD_TO_VOLUME_SET(Local_0.f_344, (*&Local_0 + 328)[1]);
	(*&Local_0 + 328)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "chix3", 3, -2152.433f, 16.38396f, 2565.527f, 0.0f, -32.12381f, 0.0f, 11.51274f, 4.122554f, 19.24498f);
	ADD_TO_VOLUME_SET(Local_0.f_344, (*&Local_0 + 328)[2]);
	Local_0.f_388 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_workers_set");
	(*&Local_0 + 348)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop1", 2, -2201.518f, 17.4963f, 2580.591f, 0.0f, 0.0f, 0.0f, 11.25053f, 6.238204f, 13.55644f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[0]);
	(*&Local_0 + 348)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop2", 2, -2190.824f, 18.28689f, 2571.226f, 0.0f, 0.0f, 0.0f, 4.38313f, 4.662551f, 34.72743f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[1]);
	(*&Local_0 + 348)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop3", 2, -2194.574f, 18.19651f, 2557.426f, 0.0f, 0.0f, 0.0f, 7.118588f, 5.362353f, 7.118588f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[2]);
	(*&Local_0 + 348)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop4", 2, -2170.509f, 19.21796f, 2558.176f, 0.0f, 0.0f, 0.0f, 5.921895f, 6.353286f, 33.88371f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[3]);
	(*&Local_0 + 348)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop5", 2, -2163.523f, 18.45101f, 2540.789f, 0.0f, 0.0f, 0.0f, 17.22323f, 5.285994f, 5.701241f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[4]);
	(*&Local_0 + 348)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop6", 2, -2199.095f, 19.17662f, 2607.873f, 0.0f, 0.0f, 0.0f, 22.89204f, 6.069724f, 30.7337f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[5]);
	(*&Local_0 + 348)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_m_pop_street5", 2, -2153.729f, 20.50986f, 2574.687f, 0.0f, 89.78162f, 0.0f, 20.42573f, 9.065599f, 24.34282f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[6]);
	(*&Local_0 + 348)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop7", 2, -2107.026f, 16.45444f, 2624.001f, 0.0f, 0.0f, 0.0f, 3.832116f, 6.390423f, 6.272371f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[7]);
	(*&Local_0 + 348)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "workersPop8", 2, -2137.461f, 18.26782f, 2625.678f, 0.0f, 0.0f, 0.0f, 5.900992f, 3.903363f, 4.906172f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 348)[8]);
	Local_0.f_392 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_TrnPlatform", 2, -2200.446f, 17.62119f, 2608.595f, 0.0f, 0.0f, 0.0f, 21.06317f, 9.090218f, 27.00399f);
	Local_0.f_396 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_fff", 2, -2196.279f, 17.57178f, 2591.825f, 0.0f, 359.4957f, 0.0f, 9.39573f, 4.115315f, 6.585201f);
	Local_0.f_400 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_cell01", 2, -2082.112f, 18.13884f, 2601.765f, 0.0f, 24.73553f, 0.0f, 3.121904f, 3.040588f, 8.127781f);
	Local_0.f_424 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_saloonBalcony_set");
	(*&Local_0 + 404)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "saloonBalcony1", 2, -2163.824f, 20.50568f, 2604.708f, 0.0f, 0.0f, 0.0f, 11.73491f, 7.378105f, 2.58106f);
	ADD_TO_VOLUME_SET(Local_0.f_424, (*&Local_0 + 404)[0]);
	(*&Local_0 + 404)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "saloonBalcony2", 2, -2157.821f, 20.50568f, 2601.393f, 0.0f, 0.0f, 0.0f, 4.580815f, 7.378105f, 2.773947f);
	ADD_TO_VOLUME_SET(Local_0.f_424, (*&Local_0 + 404)[1]);
	(*&Local_0 + 404)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "saloonBalcony3", 2, -2172.936f, 20.27677f, 2601.975f, 0.0f, 45.53014f, 0.0f, 2.822424f, 7.378105f, 8.92014f);
	ADD_TO_VOLUME_SET(Local_0.f_424, (*&Local_0 + 404)[2]);
	(*&Local_0 + 404)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "saloonBalcony4", 2, -2175.582f, 19.95216f, 2595.1f, 0.0f, 0.0f, 0.0f, 2.519257f, 7.378105f, 6.485752f);
	ADD_TO_VOLUME_SET(Local_0.f_424, (*&Local_0 + 404)[3]);
	Local_0.f_428 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_SOL_FTE_cutsceneTrigger", 2, -2128.694f, 17.64448f, 2620.274f, 0.0f, 0.0f, 0.0f, 1.242989f, 3.087706f, 1.0f);
	Local_0.f_432 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_bank_vault", 2, -2129.521f, 17.84599f, 2633.21f, 0.0f, 0.0f, 0.0f, 8.919443f, 2.792115f, 11.03533f);
	Local_0.f_436 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_balconyWhore", 2, -2173.254f, 22.00208f, 2602.409f, 0.0f, -44.77693f, 0.0f, 7.513614f, 4.213365f, 1.778805f);
	Local_0.f_464 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_street_pop_set");
	(*&Local_0 + 440)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_m_pop_street8", 2, -2085.908f, 19.44698f, 2634.003f, 0.0f, 50.72328f, 0.0f, 3.662755f, 8.792936f, 24.62952f);
	ADD_TO_VOLUME_SET(Local_0.f_464, (*&Local_0 + 440)[0]);
	(*&Local_0 + 440)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_m_pop_street7", 2, -2093.883f, 15.646f, 2615.277f, 0.0f, -107.6826f, 0.0f, 12.04712f, 7.380057f, 28.6123f);
	ADD_TO_VOLUME_SET(Local_0.f_464, (*&Local_0 + 440)[1]);
	(*&Local_0 + 440)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_m_pop_street6", 2, -2149.808f, 21.34438f, 2593.457f, 0.0f, 0.0f, 0.0f, 7.320671f, 10.71243f, 14.30037f);
	ADD_TO_VOLUME_SET(Local_0.f_464, (*&Local_0 + 440)[2]);
	(*&Local_0 + 440)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_m_pop_street4", 2, -2141.298f, 18.54541f, 2610.915f, 0.0f, 0.0f, 0.0f, 66.58459f, 5.510391f, 20.00427f);
	ADD_TO_VOLUME_SET(Local_0.f_464, (*&Local_0 + 440)[3]);
	(*&Local_0 + 440)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_m_pop_street3", 2, -2181.888f, 19.00749f, 2606.667f, 0.0f, 0.6578003f, 0.0f, 14.54376f, 6.337402f, 27.7212f);
	ADD_TO_VOLUME_SET(Local_0.f_464, (*&Local_0 + 440)[4]);
	Local_0.f_468 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_MovieHouse", 2, -2078.399f, 20.16009f, 2642.17f, 0.0f, 44.46211f, 0.0f, 2.082665f, 3.174834f, 2.082665f);
	Local_0.f_472 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_bankerTrespass", 2, -2129.191f, 17.20968f, 2633.001f, 0.0f, 0.0f, 0.0f, 8.403374f, 4.123871f, 11.32852f);
	Local_0.f_476 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_bankerEnter", 2, -2128.644f, 17.10956f, 2620.879f, 0.0f, 0.0f, 0.0f, 2.942402f, 5.077019f, 2.877066f);
	Local_0.f_480 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_Poker", 2, -2157.767f, 17.21778f, 2595.741f, 0.0f, 0.0f, 0.0f, 5.964023f, 3.691727f, 6.788969f);
	Local_0.f_520 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_nightCritters_set");
	(*&Local_0 + 484)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters8", 2, -2137.734f, 16.09741f, 2636.894f, 0.0f, 0.0f, 0.0f, 6.113838f, 7.651935f, 27.43498f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[0]);
	(*&Local_0 + 484)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters7", 2, -2157.262f, 15.51682f, 2635.014f, 0.0f, 0.0f, 0.0f, 6.406193f, 7.651935f, 27.43498f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[1]);
	(*&Local_0 + 484)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters6", 2, -2162.352f, 16.09741f, 2580.896f, 0.0f, 0.0f, 0.0f, 23.98816f, 7.651935f, 5.88636f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[2]);
	(*&Local_0 + 484)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters5", 2, -2121.336f, 16.09741f, 2586.233f, 0.0f, 0.0f, 0.0f, 1.737831f, 7.651935f, 27.43498f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[3]);
	(*&Local_0 + 484)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters4", 2, -2117.811f, 16.09741f, 2635.336f, 0.0f, 0.0f, 0.0f, 2.368204f, 7.651935f, 27.43498f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[4]);
	(*&Local_0 + 484)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters3", 2, -2147.469f, 15.39503f, 2638.041f, 0.0f, 0.0f, 0.0f, 12.85403f, 7.651935f, 11.21697f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[5]);
	(*&Local_0 + 484)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters2", 2, -2116.271f, 16.09741f, 2636.265f, 0.0f, 0.0f, 0.0f, 15.62469f, 7.651935f, 9.739089f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[6]);
	(*&Local_0 + 484)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ncritters1", 2, -2177.145f, 16.09741f, 2550.811f, 0.0f, 0.0f, 0.0f, 2.251354f, 7.651935f, 27.43498f);
	ADD_TO_VOLUME_SET(Local_0.f_520, (*&Local_0 + 484)[7]);
	Local_0.f_524 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_streetSpawn", 2, -2144.206f, 16.09741f, 2610.982f, 0.0f, 0.0f, 0.0f, 86.20792f, 18.66449f, 20.56335f);
	Local_0.f_528 = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_schoolhouse_room", 2, -2064.416f, 20.36456f, 2652.149f, 0.0f, 45.37799f, 0.0f, 8.442223f, 4.07777f, 4.048793f);
	Local_0.f_544 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_gunsmith_set");
	(*&Local_0 + 532)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_gunsmith01", 2, -2137.241f, 17.93652f, 2596.005f, 0.0f, 0.0f, 0.0f, 3.025971f, 2.832442f, 7.494035f);
	ADD_TO_VOLUME_SET(Local_0.f_544, (*&Local_0 + 532)[0]);
	(*&Local_0 + 532)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_gunsmith02", 2, -2141.175f, 17.93652f, 2596.286f, 0.0f, 0.0f, 0.0f, 6.317639f, 2.832442f, 7.494035f);
	ADD_TO_VOLUME_SET(Local_0.f_544, (*&Local_0 + 532)[1]);
	Local_0.f_564 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_doctor_set");
	(*&Local_0 + 548)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_doctor01", 2, -2127.114f, 18.36712f, 2599.681f, 0.0f, 0.0f, 0.0f, 1.483378f, 2.74417f, 0.2374881f);
	ADD_TO_VOLUME_SET(Local_0.f_564, (*&Local_0 + 548)[0]);
	(*&Local_0 + 548)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_doctor02", 2, -2123.599f, 18.36712f, 2599.681f, 0.0f, 0.0f, 0.0f, 1.483378f, 2.74417f, 0.2374881f);
	ADD_TO_VOLUME_SET(Local_0.f_564, (*&Local_0 + 548)[1]);
	(*&Local_0 + 548)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_doctor03", 2, -2125.317f, 17.97651f, 2596.491f, 0.0f, 0.0f, 0.0f, 5.23867f, 2.74417f, 6.166394f);
	ADD_TO_VOLUME_SET(Local_0.f_564, (*&Local_0 + 548)[2]);
	Local_0.f_568 = CREATE_VOLUME_IN_LAYOUT(Local_0, "narmv_gs_h", 2, -2142.061f, 21.05455f, 2597.113f, 0.0f, 0.0f, 0.0f, 4.455796f, 2.99096f, 5.750332f);
	Local_0.f_584 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "armv_toughGuys_set");
	(*&Local_0 + 572)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_toughGuys01", 2, -2170.239f, 18.10079f, 2596.339f, 0.0f, 0.0f, 0.0f, 7.206587f, 4.075381f, 3.323466f);
	ADD_TO_VOLUME_SET(Local_0.f_584, (*&Local_0 + 572)[0]);
	(*&Local_0 + 572)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "armv_toughGuys02", 2, -2172.296f, 17.9828f, 2593.331f, 0.0f, 0.0f, 0.0f, 3.352906f, 4.244436f, 2.899486f);
	ADD_TO_VOLUME_SET(Local_0.f_584, (*&Local_0 + 572)[1]);
	Local_0.f_588 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_ARMAddKO", 2, -2163.343f, 16.51208f, 2594.041f, 0.0f, 0.0f, 0.0f, 4.827116f, 6.919012f, 9.525903f);
	*(&Local_0 + 592) = { -2170.9f, 16.8744f, 2600.287f };
	*(&Local_0 + 592 + 12) = { 0.0f, 127.8909f, 0.0f };
	Local_0.f_616 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_bodytossvictim", -2170.9f, 16.8744f, 2600.287f, 0.0f, 127.8909f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "armf_report_crime", -2095.491f, 16.449f, 2608.188f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "armf_clear_bounty", -2193.216f, 16.94845f, 2601.375f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "cho_f_merc_giver", -2190.422f, 16.58f, 2613.903f, 0.0f, 2.644236f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "armf_jail_sit", -2080.289f, 16.962f, 2603.609f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "armf_jail_leave_start", -2087.268f, 16.962f, 2604.136f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "armf_jail_leave_end", -2092.863f, 16.449f, 2606.482f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 620) = { -2170.649f, 17.68509f, 2596.44f };
	*(&Local_0 + 620 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_644 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinkingMG", -2170.649f, 17.68509f, 2596.44f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 648) = { -2168.076f, 16.86944f, 2597.722f };
	*(&Local_0 + 648 + 12) = { 0.0f, 48.44841f, 0.0f };
	Local_0.f_672 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinkcrowd1", -2168.076f, 16.86944f, 2597.722f, 0.0f, 48.44841f, 0.0f);
	*(&Local_0 + 676) = { -2170.211f, 16.86944f, 2598.316f };
	*(&Local_0 + 676 + 12) = { 0.0f, 17.33325f, 0.0f };
	Local_0.f_700 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinkcrowd2", -2170.211f, 16.86944f, 2598.316f, 0.0f, 17.33325f, 0.0f);
	*(&Local_0 + 704) = { -2171.893f, 16.86944f, 2598.577f };
	*(&Local_0 + 704 + 12) = { 0.0f, -16.90825f, 0.0f };
	Local_0.f_728 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinkcrowd3", -2171.893f, 16.86944f, 2598.577f, 0.0f, -16.90825f, 0.0f);
	*(&Local_0 + 732) = { -2169.171f, 16.86944f, 2598.501f };
	*(&Local_0 + 732 + 12) = { 0.0f, 32.87228f, 0.0f };
	Local_0.f_756 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinkcrowd4", -2169.171f, 16.86944f, 2598.501f, 0.0f, 32.87228f, 0.0f);
	*(&Local_0 + 760) = { -2171.027f, 16.86944f, 2598.789f };
	*(&Local_0 + 760 + 12) = { 0.0f, -8.958943f, 0.0f };
	Local_0.f_784 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinkcrowd5", -2171.027f, 16.86944f, 2598.789f, 0.0f, -8.958943f, 0.0f);
	*(&Local_0 + 788) = { -2169.841f, 16.86944f, 2599.399f };
	*(&Local_0 + 788 + 12) = { -0.4901945f, 8.718404f, -0.5253778f };
	Local_0.f_812 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinkcrowd6", -2169.841f, 16.86944f, 2599.399f, -0.4901945f, 8.718404f, -0.5253778f);
	*(&Local_0 + 816) = { -2169.429f, 16.86944f, 2597.374f };
	*(&Local_0 + 816 + 12) = { 0.0f, 12.72948f, 0.0f };
	Local_0.f_840 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_drinksrch", -2169.429f, 16.86944f, 2597.374f, 0.0f, 12.72948f, 0.0f);
	*(&Local_0 + 844) = { -2181.389f, 16.277f, 2586.534f };
	*(&Local_0 + 844 + 12) = { 0.0f, 188.801f, 0.0f };
	Local_0.f_868 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel1", -2181.389f, 16.277f, 2586.534f, 0.0f, 188.801f, 0.0f);
	*(&Local_0 + 872) = { -2181.338f, 16.294f, 2599.876f };
	*(&Local_0 + 872 + 12) = { 0.0f, 1.264f, 0.0f };
	Local_0.f_896 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel1", -2181.338f, 16.294f, 2599.876f, 0.0f, 1.264f, 0.0f);
	*(&Local_0 + 900) = { -2129.266f, 16.097f, 2611.822f };
	*(&Local_0 + 900 + 12) = { 0.0f, 88.504f, 0.0f };
	Local_0.f_924 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel2", -2129.266f, 16.097f, 2611.822f, 0.0f, 88.504f, 0.0f);
	*(&Local_0 + 928) = { -2137.4f, 16.098f, 2611.296f };
	*(&Local_0 + 928 + 12) = { 0.0f, 264.2684f, 0.0f };
	Local_0.f_952 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel12", -2137.4f, 16.098f, 2611.296f, 0.0f, 264.2684f, 0.0f);
	*(&Local_0 + 956) = { -2116.527f, 16.445f, 2566.926f };
	*(&Local_0 + 956 + 12) = { 0.0f, 227.854f, 0.0f };
	Local_0.f_980 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel3", -2116.527f, 16.445f, 2566.926f, 0.0f, 227.854f, 0.0f);
	*(&Local_0 + 984) = { -2109.878f, 16.301f, 2572.269f };
	*(&Local_0 + 984 + 12) = { 0.0f, 55.16524f, 0.0f };
	Local_0.f_1008 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel13", -2109.878f, 16.301f, 2572.269f, 0.0f, 55.16524f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "armf_cell_leave_end", -2087.215f, 16.962f, 2603.952f, 0.0f, 0.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "armf_cell_leave_cop", -2083.469f, 16.962f, 2605.973f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1012) = { -2192.53f, 16.98591f, 2607.551f };
	*(&Local_0 + 1012 + 12) = { 0.0f, -92.6777f, 0.0f };
	Local_0.f_1036 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_train", -2192.53f, 16.98591f, 2607.551f, 0.0f, -92.6777f, 0.0f);
	*(&Local_0 + 1040) = { -2167.233f, 16.29295f, 2590.677f };
	*(&Local_0 + 1040 + 12) = { 0.0f, 151.3821f, 0.0f };
	Local_0.f_1064 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_saloon", -2167.233f, 16.29295f, 2590.677f, 0.0f, 151.3821f, 0.0f);
	*(&Local_0 + 1068) = { -2170.675f, 16.29295f, 2571.132f };
	*(&Local_0 + 1068 + 12) = { 0.0f, -90.65844f, 0.0f };
	Local_0.f_1092 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_barn", -2170.675f, 16.29295f, 2571.132f, 0.0f, -90.65844f, 0.0f);
	*(&Local_0 + 1096) = { -2145.966f, 16.62962f, 2558.591f };
	*(&Local_0 + 1096 + 12) = { 0.0f, -83.30785f, 0.0f };
	Local_0.f_1120 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_blacksmith", -2145.966f, 16.62962f, 2558.591f, 0.0f, -83.30785f, 0.0f);
	*(&Local_0 + 1124) = { -2124.392f, 16.88521f, 2596.95f };
	*(&Local_0 + 1124 + 12) = { 0.0f, 188.1912f, 0.0f };
	Local_0.f_1148 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_doctor", -2124.392f, 16.88521f, 2596.95f, 0.0f, 188.1912f, 0.0f);
	*(&Local_0 + 1152) = { -2171.142f, 19.417f, 2614.241f };
	*(&Local_0 + 1152 + 12) = { 0.0f, 186.5209f, 0.0f };
	Local_0.f_1176 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store", -2171.142f, 19.417f, 2614.241f, 0.0f, 186.5209f, 0.0f);
	*(&Local_0 + 1180) = { -2171.126f, 19.266f, 2619.119f };
	*(&Local_0 + 1180 + 12) = { 0.0f, 186.5209f, 0.0f };
	Local_0.f_1204 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store", -2171.126f, 19.266f, 2619.119f, 0.0f, 186.5209f, 0.0f);
	*(&Local_0 + 1208) = { -2169.112f, 16.353f, 2616.786f };
	*(&Local_0 + 1208 + 12) = { 0.0f, 186.5209f, 0.0f };
	Local_0.f_1232 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store", -2169.112f, 16.353f, 2616.786f, 0.0f, 186.5209f, 0.0f);
	*(&Local_0 + 1236) = { -2167.672f, 16.446f, 2618.763f };
	*(&Local_0 + 1236 + 12) = { 0.0f, 186.5209f, 0.0f };
	Local_0.f_1260 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store", -2167.672f, 16.446f, 2618.763f, 0.0f, 186.5209f, 0.0f);
	*(&Local_0 + 1264) = { -2147.907f, 16.75869f, 2625.732f };
	*(&Local_0 + 1264 + 12) = { 0.0f, -47.42524f, 0.0f };
	Local_0.f_1288 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_store1", -2147.907f, 16.75869f, 2625.732f, 0.0f, -47.42524f, 0.0f);
	*(&Local_0 + 1292) = { -2140.414f, 19.422f, 2614.436f };
	*(&Local_0 + 1292 + 12) = { 0.0f, 109.9197f, 0.0f };
	Local_0.f_1316 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store1", -2140.414f, 19.422f, 2614.436f, 0.0f, 109.9197f, 0.0f);
	*(&Local_0 + 1320) = { -2145.155f, 19.271f, 2615.582f };
	*(&Local_0 + 1320 + 12) = { 0.0f, 109.9197f, 0.0f };
	Local_0.f_1344 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store1", -2145.155f, 19.271f, 2615.582f, 0.0f, 109.9197f, 0.0f);
	*(&Local_0 + 1348) = { -2142.419f, 16.358f, 2617f };
	*(&Local_0 + 1348 + 12) = { 0.0f, 109.9197f, 0.0f };
	Local_0.f_1372 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store1", -2142.419f, 16.358f, 2617f, 0.0f, 109.9197f, 0.0f);
	*(&Local_0 + 1376) = { -2144.009f, 16.451f, 2618.859f };
	*(&Local_0 + 1376 + 12) = { 0.0f, 109.9197f, 0.0f };
	Local_0.f_1400 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store1", -2144.009f, 16.451f, 2618.859f, 0.0f, 109.9197f, 0.0f);
	*(&Local_0 + 1404) = { -2129.354f, 16.612f, 2625.168f };
	*(&Local_0 + 1404 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_0.f_1428 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_bank", -2129.354f, 16.612f, 2625.168f, 0.0f, 0.0f, 0.0f);
	*(&Local_0 + 1432) = { -2072.198f, 19.52868f, 2645.46f };
	*(&Local_0 + 1432 + 12) = { 0.0f, 403.5858f, 0.0f };
	Local_0.f_1456 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_interiorPoint_school", -2072.198f, 19.52868f, 2645.46f, 0.0f, 403.5858f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos1", -2206.391f, 21.152f, 2620.89f, -6.655f, -71.456f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos2", -2189.48f, 17.958f, 2560.31f, 3.982f, -157.227f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos3", -2069.693f, 24.095f, 2694.148f, -2.511f, 19.024f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos4", -2077.736f, 18.772f, 2554.519f, 0.713f, 152.712f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos5", -2185.318f, 17.46f, 2608.777f, 8.913f, -55.198f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos6", -2190.373f, 17.537f, 2618.18f, 4.15f, -53.746f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos7", -2179.656f, 17.569f, 2613.073f, 4.859f, -85.196f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos8", -2102.336f, 17.888f, 2614.594f, 10.192f, 36.687f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos9", -2101.417f, 18.144f, 2619.773f, 2.389f, 67.828f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "arm_vista_cam_pos10", -2086.482f, 18.417f, 2633.734f, 13.618f, -117.103f, 0.0f);
	*(&Local_0 + 1460) = { -2191.645f, 16.98591f, 2607.489f };
	*(&Local_0 + 1460 + 12) = { 0.0f, -92.6777f, 0.0f };
	Local_0.f_1484 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_player_shop_flag", -2191.645f, 16.98591f, 2607.489f, 0.0f, -92.6777f, 0.0f);
	*(&Local_0 + 1488) = { -2131.836f, 16.266f, 2615.536f };
	*(&Local_0 + 1488 + 12) = { 0.0f, 109.9197f, 0.0f };
	Local_0.f_1512 = CREATE_POINT_IN_LAYOUT(Local_0, "horse_pos_store1", -2131.836f, 16.266f, 2615.536f, 0.0f, 109.9197f, 0.0f);
	return 1;
}

void Function_74(int iParam0, int iParam1) //Position: 0x634D / 25421
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

var Function_75() //Position: 0x6396 / 25494
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_76(bool bParam0, var uParam1) //Position: 0x63AB / 25515
{
	if (!Function_53(128))
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

