//Decompiled with MagicRDR v1.0
//Function Count : 72
//Statics Count : 789
//Natives Count : 127
//Parameters Count : 2

#region Local Var
	struct<1693> Local_0 = { 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 1, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_424 = 0;
	Local_425 = { StackVal, ScriptParam_0 };
	Function_71("Initializing Blackwater Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_427 = 500;
		uLocal_428 = Function_70();
		switch (iLocal_424)
		{
			case 0x00000000:
				if (Function_68())
				{
					bLocal_511 = Function_67(Local_0, "blackwater", ScriptParam_0);
					iLocal_424 = 1;
				}
				bLocal_427 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_511))
				{
					iLocal_424 = 2;
				}
				bLocal_427 = false;
				break;
			
			case 0x00000002:
				Function_66(&uLocal_429);
				Function_65(&uLocal_429, &uLocal_432, 4, Local_0.f_552, 4294967295, 4);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_20, 4294967295, 0x800010a);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_68, 4294967295, 0x800018a);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_36, 4294967295, 131338);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_64, 4294967295, 266);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_88, 4294967295, 4194570);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_128, 4294967295, 8458);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_140, 4294967295, 266);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_172, 4294967295, 0x2000010a);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_188, 4294967295, 266);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_208, 4294967295, 778);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_192, 4294967295, 258);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_220, 4294967295, 16650);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_760, 4294967295, 266);
				Function_64(Local_0.f_1132, 8);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_500, 4294967295, 2314);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_604, 4294967295, 33034);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_652, 4294967295, 4362);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_668, 4294967295, 2314);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_696, 4294967295, 2314);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_952, 4294967295, 65800);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_964, 4294967295, 2314);
				Function_65(&uLocal_429, &uLocal_432, 5, Local_0.f_616, 4294967295, 0x1000000);
				iLocal_773 = Function_62(&Local_512, bLocal_511, "bank01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_20, 0, 0);
				if (iLocal_773 <= 0 && iLocal_773 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7735]), 49);
				}
				iLocal_774 = Function_62(&Local_512, bLocal_511, "bank01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_20, 0, 0);
				if (iLocal_774 <= 0 && iLocal_774 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7745]), 49);
				}
				iLocal_785 = Function_62(&Local_512, bLocal_511, "bank01_int", 4, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_1048, 0, 0);
				if (iLocal_785 <= 0 && iLocal_785 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7855]), 63);
				}
				iLocal_786 = Function_62(&Local_512, bLocal_511, "bank_int", 10, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_68, 0, 0);
				if (iLocal_786 <= 0 && iLocal_786 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7865]), 63);
				}
				Function_62(&Local_512, bLocal_511, "policeStation01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_62(&Local_512, bLocal_511, "policeStation01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_62(&Local_512, bLocal_511, "ntheatre01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_760, 0, 0);
				Function_62(&Local_512, bLocal_511, "ntheatre01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_760, 0, 0);
				Function_62(&Local_512, bLocal_511, "ntheatre01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_760, 0, 0);
				Function_62(&Local_512, bLocal_511, "ntheatre01", 4, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_760, 0, 0);
				Function_62(&Local_512, bLocal_511, "saloon_int", 8, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_192, 0, 1);
				Function_62(&Local_512, bLocal_511, "saloon_int", 9, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_192, 0, 1);
				Function_62(&Local_512, bLocal_511, "hotel01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_62(&Local_512, bLocal_511, "hotel01", 7, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_62(&Local_512, bLocal_511, "hotel01", 9, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_62(&Local_512, bLocal_511, "hotel01", 11, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_62(&Local_512, bLocal_511, "hotel01", 13, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				if (Function_57(45, 0) && !Function_57(46, 0))
				{
					Function_62(&Local_512, bLocal_511, "hotel01", 1, &Global_29155[ScriptParam_010] + 20, 1, Local_0.f_172, 0, 0);
					Function_62(&Local_512, bLocal_511, "hotel01", 2, &Global_29155[ScriptParam_010] + 20, 1, Local_0.f_172, 0, 0);
					Function_62(&Local_512, bLocal_511, "hotel01", 3, &Global_29155[ScriptParam_010] + 20, 1, Local_0.f_172, 0, 0);
					Function_62(&Local_512, bLocal_511, "hotel01", 8, &Global_29155[ScriptParam_010] + 20, 1, Local_0.f_172, 0, 0);
				}
				else
				{
					Function_62(&Local_512, bLocal_511, "hotel01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_172, 0, 0);
					Function_62(&Local_512, bLocal_511, "hotel01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_172, 0, 0);
					Function_62(&Local_512, bLocal_511, "hotel01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_172, 0, 0);
					Function_62(&Local_512, bLocal_511, "hotel01", 8, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_172, 0, 0);
				}
				iLocal_775 = Function_62(&Local_512, bLocal_511, "gunshop", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_652, 0, 0);
				if (iLocal_775 <= 0 && iLocal_775 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7755]), 49);
				}
				iLocal_776 = Function_62(&Local_512, bLocal_511, "gunshop", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_652, 1, 0);
				if (iLocal_776 <= 0 && iLocal_776 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7765]), 49);
				}
				iLocal_777 = Function_62(&Local_512, bLocal_511, "Doctor", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_128, 0, 0);
				if (iLocal_777 <= 0 && iLocal_777 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7775]), 49);
				}
				iLocal_778 = Function_62(&Local_512, bLocal_511, "Doctor", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_128, 1, 0);
				if (iLocal_778 <= 0 && iLocal_778 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7785]), 49);
				}
				iLocal_780 = Function_62(&Local_512, bLocal_511, "generalStore01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_500, 0, 0);
				if (iLocal_780 <= 0 && iLocal_780 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7805]), 49);
				}
				iLocal_781 = Function_62(&Local_512, bLocal_511, "generalStore01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_500, 1, 0);
				if (iLocal_781 <= 0 && iLocal_781 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7815]), 49);
				}
				iLocal_782 = Function_62(&Local_512, bLocal_511, "generalStore01", 4, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_500, 0, 0);
				if (iLocal_782 <= 0 && iLocal_782 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7825]), 49);
				}
				iLocal_783 = Function_62(&Local_512, bLocal_511, "tailor", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_668, 0, 0);
				if (iLocal_783 <= 0 && iLocal_783 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7835]), 49);
				}
				iLocal_784 = Function_62(&Local_512, bLocal_511, "tailor", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_668, 1, 0);
				if (iLocal_784 <= 0 && iLocal_784 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7845]), 49);
				}
				iLocal_779 = Function_62(&Local_512, bLocal_511, "cityHall01", 7, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_64, 0, 0);
				if (iLocal_779 <= 0 && iLocal_779 > Local_512)
				{
					Function_61(&(Local_512[iLocal_7795]), 49);
				}
				Function_62(&Local_512, bLocal_511, "church01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_88, 0, 0);
				Function_62(&Local_512, bLocal_511, "church01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_88, 0, 0);
				Function_62(&Local_512, bLocal_511, "church01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_88, 0, 0);
				iLocal_424 = 3;
				bLocal_427 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_29008[Local_425]), 16);
				Function_55("Finished Initializing Blackwater Volumes", 5.0f);
				iLocal_424 = 4;
				bLocal_427 = false;
				break;
			
			case 0x00000004:
				Function_17(&uLocal_429, &uLocal_432, uLocal_428, ScriptParam_0);
				Function_12(&Local_512, 1);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_427 = false;
				break;
		}
		WAIT(bLocal_427);
	}
	Function_4(&uLocal_429, &uLocal_432);
	Function_3(&Local_512);
	Function_2();
	Function_1(&(Global_29008[Local_425]), 16);
	Function_55("Unloaded Blackwater Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0xACB / 2763
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0xAE2 / 2786
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0xAED / 2797
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

void Function_4(var uParam0, int iParam1) //Position: 0xB47 / 2887
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB9F / 2975
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

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC7C / 3196
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

void Function_7() //Position: 0xDF5 / 3573
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0xE01 / 3585
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

void Function_9(int iParam0) //Position: 0xE47 / 3655
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

void Function_10(var uParam0, int iParam1) //Position: 0xE8D / 3725
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0xEA7 / 3751
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(var uParam0, bool bParam1) //Position: 0xEC4 / 3780
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

void Function_13(var uParam0, int iParam1) //Position: 0x1290 / 4752
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x12A1 / 4769
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0x12BB / 4795
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_16() //Position: 0x12CD / 4813
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x12D6 / 4822
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

bool Function_18(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x1357 / 4951
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

void Function_19(int iParam0) //Position: 0x1770 / 6000
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

float Function_20(int iParam0) //Position: 0x186F / 6255
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_21(int iParam0) //Position: 0x18AC / 6316
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_22(int iParam0, bool bParam1) //Position: 0x18E5 / 6373
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

var Function_23(int iParam0) //Position: 0x194C / 6476
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

int Function_24(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x19A4 / 6564
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

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1BC4 / 7108
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

var Function_26() //Position: 0x21F1 / 8689
{
	int iVar0;
	
	return iVar0;
}

var Function_27(int iParam0) //Position: 0x21F9 / 8697
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x220A / 8714
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

struct<32> Function_29(char* cParam0, char* cParam1) //Position: 0x22FF / 8959
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2318 / 8984
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_15(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x237D / 9085
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x238F / 9103
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

int Function_33(int iParam0) //Position: 0x24BF / 9407
{
	return Global_35278[iParam020].f_48;
}

void Function_34(int iParam0) //Position: 0x24CE / 9422
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x2668 / 9832
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

void Function_36(var uParam0, int iParam1) //Position: 0x2882 / 10370
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(struct<5> Param0) //Position: 0x288F / 10383
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x28B5 / 10421
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x28D1 / 10449
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

void Function_40() //Position: 0x2B61 / 11105
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x2BC4 / 11204
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

bool Function_42(bool bParam0) //Position: 0x2BF3 / 11251
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

int Function_43(int iParam0) //Position: 0x2C69 / 11369
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2C7A / 11386
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

bool Function_45(int iParam0) //Position: 0x2C93 / 11411
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2CA9 / 11433
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x2CBE / 11454
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2CDC / 11484
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

bool Function_49(int iParam0) //Position: 0x2D80 / 11648
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(var uParam0, int iParam1) //Position: 0x2D96 / 11670
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2DA7 / 11687
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

void Function_52(int iParam0, int iParam1) //Position: 0x2E19 / 11801
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2E3E / 11838
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

bool Function_54(int iParam0) //Position: 0x2E5B / 11867
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(bool bParam0, float fParam1) //Position: 0x2E77 / 11895
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

void Function_56(var uParam0, int iParam1) //Position: 0x2EB5 / 11957
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_57(int iParam0, bool bParam1) //Position: 0x2EC4 / 11972
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

bool Function_58(int iParam0) //Position: 0x2F01 / 12033
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_59(int iParam0) //Position: 0x2F18 / 12056
{
	if (!Function_60(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_60(int iParam0) //Position: 0x2F32 / 12082
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_61(var uParam0, bool bParam1) //Position: 0x2F48 / 12104
{
	Function_13(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_62(var uParam0, int iParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x2F5A / 12122
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_63(uParam0);
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

var Function_63(int iParam0) //Position: 0x3039 / 12345
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

void Function_64(bool bParam0, bool bParam1) //Position: 0x3067 / 12391
{
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (32 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", 32);
	}
	DECOR_SET_INT(bParam0, "customweather", bParam1);
	return;
}

void Function_65(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x30CE / 12494
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

void Function_66(int iParam0) //Position: 0x31A9 / 12713
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_67(bool bParam0, char* cParam1, int iParam2) //Position: 0x31B8 / 12728
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, cParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_68() //Position: 0x31D7 / 12759
{
	var uVar0;
	
	Function_69(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("Blackwater_layout");
	}
	Local_0.f_20 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_bank_set");
	(*&Local_0 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bankv3", 2, 685,012f, 83,54934f, 1228,977f, 0.0f, 89,4097f, 0.0f, 6,222911f, 10,39784f, 17,46343f);
	ADD_TO_VOLUME_SET(Local_0.f_20, (*&Local_0 + 4)[0]);
	(*&Local_0 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bankv2", 2, 683,6581f, 83,69234f, 1234,58f, 0.0f, 89,4097f, 0.0f, 5,997558f, 9,306466f, 14,46865f);
	ADD_TO_VOLUME_SET(Local_0.f_20, (*&Local_0 + 4)[1]);
	(*&Local_0 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bankv1", 2, 684,7269f, 83,54934f, 1240,591f, 0.0f, 89,4097f, 0.0f, 6,52847f, 10,39784f, 18,22007f);
	ADD_TO_VOLUME_SET(Local_0.f_20, (*&Local_0 + 4)[2]);
	Local_0.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_barn_set");
	(*&Local_0 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "barnv1", 2, 583,7659f, 87,39951f, 1323,992f, 0.0f, 0.0f, 0.0f, 16,03014f, 4,136538f, 21,79914f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 24)[0]);
	(*&Local_0 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "barnv2", 2, 592,6696f, 86,83189f, 1332,13f, 0.0f, 0.0f, 0.0f, 2,219453f, 3,000689f, 5,909022f);
	ADD_TO_VOLUME_SET(Local_0.f_36, (*&Local_0 + 24)[1]);
	Local_0.f_64 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_CityHall_set");
	(*&Local_0 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "citihallv5", 2, 722,6238f, 81,8769f, 1197,329f, 0.0f, -89,36355f, 0.0f, 14,8676f, 6,211842f, 14,97498f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 40)[0]);
	(*&Local_0 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "citihallv4", 2, 737,0474f, 83,18286f, 1191,848f, 0.0f, -89,36355f, 0.0f, 27,23439f, 15,03544f, 14,95567f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 40)[1]);
	(*&Local_0 + 40)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "citihallv3", 2, 751,135f, 81,63156f, 1196,129f, 0.0f, -89,88729f, 0.0f, 17,41735f, 6,904438f, 14,47124f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 40)[2]);
	(*&Local_0 + 40)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "citihallv6", 2, 736,8271f, 93,56902f, 1203,198f, 0.0f, -89,36355f, 0.0f, 4,317729f, 15,03544f, 4,530272f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 40)[3]);
	(*&Local_0 + 40)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "citihallv7", 2, 736,9172f, 82,32203f, 1206,504f, 0.0f, -89,88729f, 0.0f, 4,303452f, 7,520874f, 19,10825f);
	ADD_TO_VOLUME_SET(Local_0.f_64, (*&Local_0 + 40)[4]);
	Local_0.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_bank_vault", 2, 679,6162f, 80,76677f, 1227,462f, 0.0f, 89,4097f, 0.0f, 2,239555f, 3,572292f, 5,903275f);
	Local_0.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_church_set");
	(*&Local_0 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "churchv1", 2, 551,4929f, 95,67864f, 1198,728f, 0.0f, -93,1861f, 0.0f, 3,867709f, 5,662213f, 3,031523f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 72)[0]);
	(*&Local_0 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "churchv2", 2, 559,042f, 97,66423f, 1192,044f, 0.0f, 87,16801f, 0.0f, 18,22243f, 8,206848f, 11,36879f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 72)[1]);
	(*&Local_0 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "churchv3", 2, 565,0886f, 100,8047f, 1184,277f, 0.0f, -92,77225f, 0.0f, 4,307622f, 24,27567f, 2,470683f);
	ADD_TO_VOLUME_SET(Local_0.f_88, (*&Local_0 + 72)[2]);
	Local_0.f_112 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_horses_set");
	(*&Local_0 + 92)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_horses_01", 2, 564,6341f, 89,813f, 1332,026f, 0.0f, 0.0f, 0.0f, 18,50053f, 9,636552f, 21,68812f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 92)[0]);
	(*&Local_0 + 92)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_corral_02", 2, 583,8057f, 89,98677f, 1342,031f, 0.0f, 89,67072f, 0.0f, 7,062325f, 10,48575f, 16,73962f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 92)[1]);
	(*&Local_0 + 92)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_corral_03", 2, 551,7745f, 90,5736f, 1339,516f, 0.0f, 90,25236f, 0.0f, 9,200944f, 10,58109f, 4,691057f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 92)[2]);
	(*&Local_0 + 92)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_horses_02", 2, 551,9444f, 88,43723f, 1324,857f, 0.0f, -89,74209f, 0.0f, 9,18335f, 10,58109f, 4,551872f);
	ADD_TO_VOLUME_SET(Local_0.f_112, (*&Local_0 + 92)[3]);
	Local_0.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_doctor_set");
	(*&Local_0 + 116)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "doctor01", 2, 722,0671f, 78,48743f, 1364,301f, 0.0f, 89,97367f, 0.0f, 6,625236f, 8,511094f, 8,727087f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 116)[0]);
	(*&Local_0 + 116)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "doctor02", 2, 726,3837f, 80,53288f, 1365,952f, 0.0f, 89,97367f, 0.0f, 1,491828f, 1,899601f, 0,4062393f);
	ADD_TO_VOLUME_SET(Local_0.f_128, (*&Local_0 + 116)[1]);
	Local_0.f_140 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_fbi_set");
	(*&Local_0 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fbiv", 2, 769,4239f, 82,72511f, 1234,899f, 0.0f, 0.0f, 0.0f, 17,29858f, 9,946985f, 17,77562f);
	ADD_TO_VOLUME_SET(Local_0.f_140, (*&Local_0 + 132)[0]);
	Local_0.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_gazebo_set");
	(*&Local_0 + 144)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gazebov", 3, 1,912712f, 0,8222067f, -11,30511f, 0.0f, 29,35592f, 0.0f, 6,145772f, 3,393198f, 6,145772f);
	ADD_TO_VOLUME_SET(Local_0.f_152, (*&Local_0 + 144)[0]);
	Local_0.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_hotel_lobby", 2, 747,7106f, 79,8069f, 1267,899f, 0.0f, 90,34145f, 0.0f, 12,41521f, 3,927039f, 12,25801f);
	Local_0.f_172 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_hotel_set");
	(*&Local_0 + 160)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hotelv", 2, 753,863f, 84,51958f, 1267,863f, 0.0f, 90,34145f, 0.0f, 12,45637f, 12,57302f, 18,12087f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 160)[0]);
	(*&Local_0 + 160)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "hotelv1", 2, 762,2801f, 87,19563f, 1271,319f, 0.0f, 90,34145f, 0.0f, 10,22215f, 10,31789f, 5,849715f);
	ADD_TO_VOLUME_SET(Local_0.f_172, (*&Local_0 + 160)[1]);
	Local_0.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_freightplatform", 2, 667,2385f, 80,99831f, 1332,081f, 0.0f, 0.0f, 0.0f, 28,54802f, 4,387286f, 20,21121f);
	Local_0.f_188 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_freightStation_set");
	(*&Local_0 + 180)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "freightStationv1", 2, 671,9913f, 80,99831f, 1332,735f, 0.0f, 0.0f, 0.0f, 10,37562f, 4,257046f, 14,01441f);
	ADD_TO_VOLUME_SET(Local_0.f_188, (*&Local_0 + 180)[0]);
	Local_0.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_players_room", 2, 713,2771f, 84,66203f, 1322,427f, 0.0f, 90,26811f, 0.0f, 8,244068f, 4,262002f, 8,929452f);
	Local_0.f_208 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_saloon_set");
	(*&Local_0 + 196)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "saloonv5", 2, 718,1539f, 83,47411f, 1318,515f, 0.0f, 89,99537f, 0.0f, 16,42857f, 10,38234f, 18,53994f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 196)[0]);
	(*&Local_0 + 196)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "saloonv6", 2, 720,5394f, 80,53291f, 1320,628f, 0.0f, 89,99537f, 0.0f, 16,60321f, 4,454592f, 12,34287f);
	ADD_TO_VOLUME_SET(Local_0.f_208, (*&Local_0 + 196)[1]);
	Local_0.f_220 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_trainStation_set");
	(*&Local_0 + 212)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "trainStationv", 2, 662,8956f, 82,90158f, 1314,376f, 0.0f, 0.0f, 0.0f, 10,1784f, 9,940033f, 16,36202f);
	ADD_TO_VOLUME_SET(Local_0.f_220, (*&Local_0 + 212)[0]);
	Local_0.f_232 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_theatre_night_set");
	(*&Local_0 + 224)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ntheatrev1", 2, 710,5163f, 82,8928f, 1289,718f, 0.0f, 90,02578f, 0.0f, 20,03429f, 11,01707f, 33,30777f);
	ADD_TO_VOLUME_SET(Local_0.f_232, (*&Local_0 + 224)[0]);
	Local_0.f_388 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_sidewalk_town_set");
	(*&Local_0 + 236)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv26", 2, 750,4879f, 81,27018f, 1235,168f, 0.0f, 0.0f, 0.0f, 14,12516f, 7,551131f, 23,47999f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[0]);
	(*&Local_0 + 236)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv25", 2, 780,9568f, 81,08485f, 1299,409f, 0.0f, 0.0f, 0.0f, 3,77752f, 7,551131f, 160,3003f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[1]);
	(*&Local_0 + 236)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv24", 2, 745,0521f, 81,28633f, 1259,639f, 0.0f, 0.0f, 0.0f, 102,865f, 7,551131f, 3,98151f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[2]);
	(*&Local_0 + 236)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv23", 2, 692,7038f, 81,25581f, 1328,674f, 0.0f, 0.0f, 0.0f, 3,886184f, 7,551131f, 142,1541f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[3]);
	(*&Local_0 + 236)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv22", 2, 733,5353f, 81,95405f, 1245,95f, 0.0f, 0.0f, 0.0f, 117,3182f, 7,551131f, 3,935042f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[4]);
	(*&Local_0 + 236)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv21", 2, 692,8892f, 81,24154f, 1256,207f, 0.0f, 0.0f, 0.0f, 3,66921f, 7,551131f, 22,38496f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[5]);
	(*&Local_0 + 236)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv20", 2, 729,8685f, 81,70876f, 1176,64f, 0.0f, 0.0f, 0.0f, 67,70959f, 7,551131f, 3,73394f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[6]);
	(*&Local_0 + 236)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv19", 2, 763,9297f, 81,50655f, 1191,37f, 0.0f, 0.0f, 0.0f, 3,539133f, 7,551131f, 32,30503f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[7]);
	(*&Local_0 + 236)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv18", 2, 732,3339f, 81,43412f, 1212,267f, 0.0f, 0.0f, 0.0f, 67,77905f, 7,551131f, 4,093557f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[8]);
	(*&Local_0 + 236)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv17", 2, 770,7201f, 81,20591f, 1214,631f, 0.0f, 49,24516f, 0.0f, 3,48217f, 7,551131f, 20,62198f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[9]);
	(*&Local_0 + 236)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv14", 2, 738,1655f, 81,36582f, 1330,836f, 0.0f, 0.0f, 0.0f, 91,05147f, 7,551131f, 3,688597f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[10]);
	(*&Local_0 + 236)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv12", 2, 728,9019f, 81,24676f, 1319,37f, 0.0f, 0.0f, 0.0f, 3,529351f, 7,551131f, 146,8364f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[11]);
	(*&Local_0 + 236)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv11", 2, 755,1953f, 81,28096f, 1385,705f, 0.0f, 17,6138f, 0.0f, 55,03497f, 7,551131f, 3,323842f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[12]);
	(*&Local_0 + 236)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv9", 2, 736,9777f, 81,29997f, 1342,492f, 0.0f, 0.0f, 0.0f, 91,653f, 7,551131f, 3,939708f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[13]);
	(*&Local_0 + 236)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv5", 2, 668,9208f, 81,29395f, 1357,18f, 0.0f, 0.0f, 0.0f, 27,62087f, 7,551131f, 3,612056f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[14]);
	(*&Local_0 + 236)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv35", 2, 710,8467f, 81,76566f, 1396,286f, 0.0f, 7,894397f, 0.0f, 36,66884f, 9,535529f, 3,794664f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[15]);
	(*&Local_0 + 236)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv34", 2, 680,9053f, 81,60557f, 1378,852f, 0.0f, 0,3763108f, 0.0f, 3,448853f, 9,535529f, 46,55386f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[16]);
	(*&Local_0 + 236)[17] = CREATE_VOLUME_IN_LAYOUT(Local_0, "buildingType2_05v", 2, 811,5858f, 81,57787f, 1242,259f, 0.0f, 0.0f, 0.0f, 6,744418f, 4,187153f, 12,31418f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[17]);
	(*&Local_0 + 236)[18] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv47", 2, 733,548f, 81,82948f, 1216,751f, 0.0f, 0.0f, 0.0f, 69,29767f, 10,45926f, 16,03515f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[18]);
	(*&Local_0 + 236)[19] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv45", 2, 742,9442f, 81,92759f, 1318,057f, 0.0f, 0.0f, 0.0f, 3,819721f, 10,45926f, 144,69f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[19]);
	(*&Local_0 + 236)[20] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv41", 2, 620,8363f, 81,51477f, 1307,774f, 0.0f, -9,045968f, 0.0f, 4,253928f, 10,45926f, 18,01833f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[20]);
	(*&Local_0 + 236)[21] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv48", 2, 673,6802f, 81,24154f, 1234,902f, 0.0f, 0.0f, 0.0f, 3,66921f, 7,551131f, 26,09772f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[21]);
	(*&Local_0 + 236)[22] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv49", 2, 698,0182f, 81,24154f, 1211,328f, 0.0f, 0.0f, 0.0f, 3,66921f, 7,551131f, 70,05096f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[22]);
	(*&Local_0 + 236)[23] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv50", 2, 695,8677f, 81,24154f, 1223,744f, 0.0f, -89,87884f, 0.0f, 3,66921f, 7,551131f, 42,88503f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[23]);
	(*&Local_0 + 236)[24] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv51", 2, 718,6068f, 81,24154f, 1228,93f, 0.0f, 0.0f, 0.0f, 5,448182f, 7,551131f, 36,78898f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[24]);
	(*&Local_0 + 236)[25] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv52", 2, 738,7516f, 81,24154f, 1234,945f, 0.0f, -89,87884f, 0.0f, 6,302614f, 7,551131f, 42,88503f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[25]);
	(*&Local_0 + 236)[26] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv53", 2, 737,1594f, 81,24154f, 1228,007f, 0.0f, 0,5153338f, 0.0f, 6,302614f, 7,551131f, 34,69927f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[26]);
	(*&Local_0 + 236)[27] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv54", 2, 757,8832f, 81,24154f, 1227,821f, 0.0f, 0,5153338f, 0.0f, 4,884216f, 7,551131f, 34,69927f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[27]);
	(*&Local_0 + 236)[28] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv55", 2, 768,6282f, 81,24154f, 1223,844f, 0.0f, 0,5153338f, 0.0f, 22,89185f, 7,551131f, 4,622076f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[28]);
	(*&Local_0 + 236)[29] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv56", 2, 686,8564f, 81,60557f, 1399,255f, 0.0f, -82,82469f, 0.0f, 3,448853f, 9,535529f, 13,79854f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[29]);
	(*&Local_0 + 236)[30] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv57", 2, 686,1123f, 81,29395f, 1342,593f, 0.0f, 0.0f, 0.0f, 13,0501f, 7,551131f, 3,612056f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[30]);
	(*&Local_0 + 236)[31] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv58", 2, 679,214f, 81,29395f, 1306,024f, 0.0f, 89,97923f, 0.0f, 71,48866f, 7,551131f, 3,612056f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[31]);
	(*&Local_0 + 236)[32] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv59", 2, 793,893f, 81,08485f, 1299,553f, 0.0f, 0.0f, 0.0f, 3,77752f, 7,551131f, 143,9355f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[32]);
	(*&Local_0 + 236)[33] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv60", 2, 680,0897f, 81,29395f, 1348,524f, 0.0f, -83,23032f, 0.0f, 16,36002f, 7,551131f, 3,612056f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[33]);
	(*&Local_0 + 236)[34] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv61", 2, 787,6937f, 81,29395f, 1342,844f, 0.0f, -0,4282522f, 0.0f, 16,36002f, 7,551131f, 3,612056f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[34]);
	(*&Local_0 + 236)[35] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv62", 2, 787,7839f, 81,29395f, 1330,775f, 0.0f, -0,4282522f, 0.0f, 16,36002f, 7,551131f, 3,612056f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[35]);
	(*&Local_0 + 236)[36] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalkv63", 2, 787,4879f, 81,29395f, 1369,694f, 0.0f, 0,7767695f, 0.0f, 16,36002f, 7,551131f, 3,612056f);
	ADD_TO_VOLUME_SET(Local_0.f_388, (*&Local_0 + 236)[36]);
	Local_0.f_428 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_sidewalk_docks_set");
	(*&Local_0 + 392)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv", 2, 801,8156f, 81,60444f, 1247,176f, 0.0f, 0.0f, 0.0f, 11,76809f, 4,313719f, 40,32629f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[0]);
	(*&Local_0 + 392)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv7", 2, 824,2244f, 80,79265f, 1250,541f, 0.0f, 0.0f, 0,229665f, 22,26314f, 4,313719f, 3,967483f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[1]);
	(*&Local_0 + 392)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv6", 2, 849,8587f, 80,74489f, 1241,462f, 0.0f, 0.0f, 0.0f, 18,6001f, 4,882585f, 13,70244f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[2]);
	(*&Local_0 + 392)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv5", 2, 840,6787f, 80,57874f, 1250,424f, 0.0f, 0.0f, 0.0f, 14,89873f, 4,313719f, 3,970972f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[3]);
	(*&Local_0 + 392)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv4", 2, 811,5286f, 81,68847f, 1230,949f, 0.0f, 0.0f, 0.0f, 7,570256f, 4,313719f, 8,017331f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[4]);
	(*&Local_0 + 392)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv2", 2, 811,6128f, 81,6553f, 1258,082f, 0.0f, 0.0f, 0.0f, 7,879981f, 4,569567f, 18,17561f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[5]);
	(*&Local_0 + 392)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv1", 2, 789,1606f, 80,32297f, 1247,867f, 0.0f, 66,50256f, 0.0f, 3,87126f, 4,781995f, 19,64315f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[6]);
	(*&Local_0 + 392)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_docksv8", 2, 788,6102f, 80,32297f, 1255,243f, 0.0f, 123,2449f, 0.0f, 3,87126f, 4,781995f, 19,64315f);
	ADD_TO_VOLUME_SET(Local_0.f_428, (*&Local_0 + 392)[7]);
	Local_0.f_440 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_sidewalk_factory_set");
	(*&Local_0 + 432)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_factoryv10", 2, 803,7894f, 79,94149f, 1287,728f, 0.0f, 0.0f, 0.0f, 22,90565f, 6,452754f, 35,84712f);
	ADD_TO_VOLUME_SET(Local_0.f_440, (*&Local_0 + 432)[0]);
	Local_0.f_472 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_sidewalk_slums_set");
	(*&Local_0 + 444)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_slumsv7", 2, 691,486f, 80,66692f, 1413,543f, 0.0f, 5,287261f, 0.0f, 49,20615f, 6,201427f, 4,651156f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 444)[0]);
	(*&Local_0 + 444)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_slumsv6", 2, 725,566f, 79,8988f, 1411,999f, 0.0f, 0.0f, 0.0f, 3,0684f, 3,641126f, 9,026872f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 444)[1]);
	(*&Local_0 + 444)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_slumsv5", 2, 740,1075f, 80,09385f, 1409,544f, 0.0f, 12,88769f, 0.0f, 2,821099f, 3,641126f, 9,026872f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 444)[2]);
	(*&Local_0 + 444)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_slumsv4", 2, 701,2999f, 79,80818f, 1416,071f, 3,333661f, 8,713227f, 1,905108f, 2,856709f, 3,641126f, 9,026872f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 444)[3]);
	(*&Local_0 + 444)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_slumsv8", 2, 726,8785f, 80,66692f, 1407,953f, 0.0f, 12,1173f, 0.0f, 44,34429f, 6,201427f, 4,651156f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 444)[4]);
	(*&Local_0 + 444)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "sidewalk_slumsv9", 2, 747,494f, 80,66692f, 1404,957f, 0.0f, -1,049141f, 0.0f, 20,80766f, 6,201427f, 4,651156f);
	ADD_TO_VOLUME_SET(Local_0.f_472, (*&Local_0 + 444)[5]);
	Local_0.f_500 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_generalStore_set");
	(*&Local_0 + 476)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generalStore01", 2, 752,1057f, 81,05639f, 1324,732f, 0.0f, 89,69951f, 0.0f, 7,748487f, 9,967118f, 14,89945f);
	ADD_TO_VOLUME_SET(Local_0.f_500, (*&Local_0 + 476)[0]);
	(*&Local_0 + 476)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generalStore02", 2, 744,6249f, 80,97297f, 1326,655f, 0.0f, 89,69951f, 0.0f, 2,733183f, 3,125529f, 0,266786f);
	ADD_TO_VOLUME_SET(Local_0.f_500, (*&Local_0 + 476)[1]);
	(*&Local_0 + 476)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generalStore03", 2, 744,6462f, 80,78548f, 1321,654f, 0.0f, 89,69951f, 0.0f, 1,475612f, 2,799786f, 0,266786f);
	ADD_TO_VOLUME_SET(Local_0.f_500, (*&Local_0 + 476)[2]);
	(*&Local_0 + 476)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generalStore04", 2, 744,6462f, 84,21018f, 1324,754f, 0.0f, 89,69951f, 0.0f, 6,162752f, 2,799786f, 0,266786f);
	ADD_TO_VOLUME_SET(Local_0.f_500, (*&Local_0 + 476)[3]);
	(*&Local_0 + 476)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generalStore05", 2, 759,4865f, 84,21018f, 1324,754f, 0.0f, 89,69951f, 0.0f, 6,162752f, 2,799786f, 0,266786f);
	ADD_TO_VOLUME_SET(Local_0.f_500, (*&Local_0 + 476)[4]);
	Local_0.f_548 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_chickens_set");
	(*&Local_0 + 504)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_01", 3, 686,1976f, 78,66609f, 1407,96f, 0.0f, 20.0f, 0.0f, 12,24074f, 2,373551f, 7,110972f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[0]);
	(*&Local_0 + 504)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_04", 3, 723,7992f, 79,21547f, 1406,722f, 0.0f, 20.0f, 0.0f, 5,382097f, 2,373551f, 12,52998f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[1]);
	(*&Local_0 + 504)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_05", 3, 759,9604f, 80,61206f, 1398,355f, 0.0f, 20.0f, 0.0f, 9,728006f, 7,554129f, 10,97731f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[2]);
	(*&Local_0 + 504)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_06", 3, 610,2097f, 82,25611f, 1387,927f, 0.0f, 20.0f, 0.0f, 8,222707f, 2,945255f, 7,335667f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[3]);
	(*&Local_0 + 504)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_07", 3, 626,1485f, 78,32873f, 1322,996f, 0.0f, 20.0f, 0.0f, 7,736145f, 6,382028f, 7,753692f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[4]);
	(*&Local_0 + 504)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_08", 3, 786,9255f, 90,19512f, 1463,252f, 0.0f, 20.0f, 0.0f, 7,34227f, 6,057096f, 7,358923f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[5]);
	(*&Local_0 + 504)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_011", 3, 748,0132f, 97,10381f, 1491,719f, 0.0f, 20.0f, 0.0f, 13,01253f, 10,73485f, 13,04205f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[6]);
	(*&Local_0 + 504)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_012", 3, 668,6265f, 81,21601f, 1428,278f, 0.0f, -0,2059064f, 0.0f, 9,259408f, 3,272786f, 5,616179f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[7]);
	(*&Local_0 + 504)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_014", 3, 613,212f, 80,80667f, 1358,605f, 0.0f, 20.0f, 0.0f, 9,036664f, 7,454906f, 9,05716f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[8]);
	(*&Local_0 + 504)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_chickens_015", 3, 804,0789f, 82,39201f, 1403,271f, 0.0f, 20.0f, 0.0f, 7,34227f, 6,057096f, 7,358923f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 504)[9]);
	Local_0.f_552 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_region", 3, 707,485f, 86,24601f, 1307,235f, 0.0f, 0.0f, 0.0f, 212,9846f, 26,39366f, 221,8356f);
	Local_0.f_600 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_birds_set");
	(*&Local_0 + 556)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv10", 3, 824,3123f, 81,89945f, 1365,872f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[0]);
	(*&Local_0 + 556)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv9", 3, 784,3028f, 81,89945f, 1437,775f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[1]);
	(*&Local_0 + 556)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv8", 3, 806,499f, 85,4902f, 1288,864f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[2]);
	(*&Local_0 + 556)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv7", 3, 779,4973f, 86,19636f, 1243,967f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[3]);
	(*&Local_0 + 556)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv6", 3, 747,2687f, 81,89945f, 1364,051f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[4]);
	(*&Local_0 + 556)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv5", 3, 685,1721f, 81,89945f, 1429,138f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[5]);
	(*&Local_0 + 556)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv4", 3, 702,5702f, 81,89945f, 1288,937f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[6]);
	(*&Local_0 + 556)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv3", 3, 712,5511f, 81,89945f, 1205,071f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[7]);
	(*&Local_0 + 556)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv2", 3, 647,5953f, 81,89945f, 1338,431f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[8]);
	(*&Local_0 + 556)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdsv1", 3, 616,8579f, 81,89945f, 1244,28f, 0.0f, 20.0f, 0.0f, 51,88136f, 18,86082f, 50,82921f);
	ADD_TO_VOLUME_SET(Local_0.f_600, (*&Local_0 + 556)[9]);
	Local_0.f_604 = CREATE_VOLUME_IN_LAYOUT(Local_0, "nblkv_jail", 2, 771,7086f, 80,92284f, 1241,441f, 0.0f, -90,42757f, 0.0f, 3,554834f, 3,100976f, 11,28596f);
	Local_0.f_616 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_cows_set");
	(*&Local_0 + 608)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "cowv01", 3, 561,9985f, 86,29778f, 1309,302f, 0.0f, 20.0f, 0.0f, 11,56515f, 5,799623f, 9,141501f);
	ADD_TO_VOLUME_SET(Local_0.f_616, (*&Local_0 + 608)[0]);
	Local_0.f_632 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_pigs_set");
	(*&Local_0 + 620)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pigv1", 2, 805,6634f, 83,80357f, 1404,162f, 0.0f, 0.0f, 0.0f, 13,86579f, 4,348662f, 11,61409f);
	ADD_TO_VOLUME_SET(Local_0.f_632, (*&Local_0 + 620)[0]);
	(*&Local_0 + 620)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "pigv2", 2, 792,6331f, 87,97289f, 1452,428f, 0.0f, -5,696201f, 0.0f, 12,54771f, 8,287045f, 15,19059f);
	ADD_TO_VOLUME_SET(Local_0.f_632, (*&Local_0 + 620)[1]);
	Local_0.f_652 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_gunShop_set");
	(*&Local_0 + 636)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_gunshop_01", 2, 774,1391f, 79,00788f, 1318,239f, 0.0f, 269,8509f, 0.0f, 6,0513f, 5,570204f, 8,86475f);
	ADD_TO_VOLUME_SET(Local_0.f_652, (*&Local_0 + 636)[0]);
	(*&Local_0 + 636)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_gunshop_02", 2, 778,6971f, 80,185f, 1319,976f, 0.0f, 269,8509f, 0.0f, 1,996747f, 1,919043f, 0,2349873f);
	ADD_TO_VOLUME_SET(Local_0.f_652, (*&Local_0 + 636)[1]);
	(*&Local_0 + 636)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_gunshop_03", 2, 778,681f, 80,185f, 1316,416f, 0.0f, 269,8509f, 0.0f, 1,996747f, 1,919043f, 0,2349873f);
	ADD_TO_VOLUME_SET(Local_0.f_652, (*&Local_0 + 636)[2]);
	Local_0.f_668 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_tailor_set");
	(*&Local_0 + 656)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_tailor_01", 2, 772,2798f, 79,91953f, 1293,268f, 0.0f, 269,8509f, 0.0f, 6,553066f, 6,51972f, 12,21916f);
	ADD_TO_VOLUME_SET(Local_0.f_668, (*&Local_0 + 656)[0]);
	(*&Local_0 + 656)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_tailor_02", 2, 778,5352f, 80,04887f, 1294,266f, 0.0f, 269,8509f, 0.0f, 3,566595f, 2,45683f, 0,421526f);
	ADD_TO_VOLUME_SET(Local_0.f_668, (*&Local_0 + 656)[1]);
	Local_0.f_672 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_corral", 2, 562,2942f, 86,87167f, 1332,205f, 0.0f, 0.0f, 0.0f, 26,4426f, 20,61478f, 24,10768f);
	Local_0.f_684 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_train_platform_set");
	(*&Local_0 + 676)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_train_platform1", 2, 662,3517f, 81,52242f, 1302,591f, 0.0f, 0.0f, 0.0f, 17,46338f, 8,051627f, 42,10011f);
	ADD_TO_VOLUME_SET(Local_0.f_684, (*&Local_0 + 676)[0]);
	Local_0.f_696 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_anthro_set");
	(*&Local_0 + 688)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_anthro_01", 2, 752,3961f, 82,25603f, 1278,439f, 0.0f, 0.0f, 0.0f, 15,83952f, 9,6679f, 8,930294f);
	ADD_TO_VOLUME_SET(Local_0.f_696, (*&Local_0 + 688)[0]);
	Local_0.f_708 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_construction_C_set");
	(*&Local_0 + 700)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "construction_C_01", 2, 723,2885f, 82,33974f, 1221,455f, 0.0f, 0.0f, 0.0f, 14,26601f, 7,143672f, 7,612081f);
	ADD_TO_VOLUME_SET(Local_0.f_708, (*&Local_0 + 700)[0]);
	Local_0.f_736 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_dog_set");
	(*&Local_0 + 712)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogv", 3, 601,3074f, 78,30591f, 1288,111f, 0.0f, -4,385f, 0.0f, 57,46009f, 40,83388f, 99,76994f);
	ADD_TO_VOLUME_SET(Local_0.f_736, (*&Local_0 + 712)[0]);
	(*&Local_0 + 712)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogv5", 2, 767,9095f, 77,91833f, 1324,901f, 0.0f, 0.0f, 0.0f, 78,61015f, 5,613335f, 153,3716f);
	ADD_TO_VOLUME_SET(Local_0.f_736, (*&Local_0 + 712)[1]);
	(*&Local_0 + 712)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogv6", 2, 706,5726f, 75,77726f, 1363,489f, 0.0f, 0.0f, 0.0f, 47,38691f, 10,65252f, 68,62831f);
	ADD_TO_VOLUME_SET(Local_0.f_736, (*&Local_0 + 712)[2]);
	(*&Local_0 + 712)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogv8", 3, 742,5462f, 78,30591f, 1424,712f, 0.0f, 8,458379f, 0.0f, 69,62122f, 40,83388f, 35,96353f);
	ADD_TO_VOLUME_SET(Local_0.f_736, (*&Local_0 + 712)[3]);
	(*&Local_0 + 712)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "dogv9", 3, 749,7135f, 78,30591f, 1475,305f, 0.0f, 35,8815f, 0.0f, 69,62122f, 40,83388f, 35,96353f);
	ADD_TO_VOLUME_SET(Local_0.f_736, (*&Local_0 + 712)[4]);
	Local_0.f_748 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_saloon_lobby_set");
	(*&Local_0 + 740)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "saloonv_lobby", 2, 720,5389f, 80,55681f, 1319,615f, 0.0f, 89,99537f, 0.0f, 17,62081f, 4,280502f, 11,8605f);
	ADD_TO_VOLUME_SET(Local_0.f_748, (*&Local_0 + 740)[0]);
	Local_0.f_760 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_theatre_set");
	(*&Local_0 + 752)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "ntheatrev6", 2, 710,5497f, 82,57385f, 1289,718f, 0.0f, 90,02578f, 0.0f, 20,59159f, 8,113025f, 33,23232f);
	ADD_TO_VOLUME_SET(Local_0.f_760, (*&Local_0 + 752)[0]);
	Local_0.f_780 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_null_set");
	(*&Local_0 + 764)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "null_01", 2, 659,7327f, 80,66309f, 1314,168f, 0.0f, 0.0f, 0.0f, 3,981915f, 5,151976f, 5,252973f);
	ADD_TO_VOLUME_SET(Local_0.f_780, (*&Local_0 + 764)[0]);
	(*&Local_0 + 764)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "null_02", 2, 811,4948f, 80,66309f, 1242,025f, 0.0f, 0.0f, 0.0f, 7,153082f, 8,437317f, 12,81722f);
	ADD_TO_VOLUME_SET(Local_0.f_780, (*&Local_0 + 764)[1]);
	(*&Local_0 + 764)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "null_03", 2, 755,9504f, 79,58879f, 1265,108f, 0.0f, 0.0f, 0.0f, 3,358343f, 3,961287f, 6,017633f);
	ADD_TO_VOLUME_SET(Local_0.f_780, (*&Local_0 + 764)[2]);
	Local_0.f_952 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_generic_set");
	(*&Local_0 + 784)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_01", 2, 719,0051f, 80,66309f, 1270,237f, 0.0f, 0.0f, 0.0f, 16,3107f, 11,35147f, 17,84992f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[0]);
	(*&Local_0 + 784)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_02", 2, 755,9504f, 79,58879f, 1265,108f, 0.0f, 0.0f, 0.0f, 3,358343f, 3,961287f, 6,017633f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[1]);
	(*&Local_0 + 784)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_34", 2, 701,2072f, 80,66309f, 1269f, 0.0f, 0.0f, 0.0f, 14,14371f, 9,843351f, 14,39592f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[2]);
	(*&Local_0 + 784)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_45", 2, 698,8359f, 80,66309f, 1308,067f, 0.0f, 0.0f, 0.0f, 9,473412f, 6,593044f, 7,940928f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[3]);
	(*&Local_0 + 784)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_48", 2, 719,137f, 80,66309f, 1306,026f, 0.0f, 0.0f, 0.0f, 16,57833f, 7,39364f, 8,905197f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[4]);
	(*&Local_0 + 784)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_50", 2, 697,9652f, 80,66309f, 1347,683f, 0.0f, 0.0f, 0.0f, 7,576689f, 6,057273f, 6,696494f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[5]);
	(*&Local_0 + 784)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_51", 2, 720,0439f, 80,66309f, 1351,682f, 0.0f, 0.0f, 0.0f, 17,60391f, 12,34337f, 18,48228f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[6]);
	(*&Local_0 + 784)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_03", 2, 710,5839f, 80,66309f, 1347,578f, 0.0f, 0.0f, 0.0f, 3,137462f, 6,98278f, 10,45563f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[7]);
	(*&Local_0 + 784)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_04", 2, 701,4631f, 80,66309f, 1368,878f, 0.0f, 0.0f, 0.0f, 13,93133f, 6,98278f, 16,21684f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[8]);
	(*&Local_0 + 784)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_05", 2, 721,9731f, 80,66309f, 1371,314f, 0.0f, 0.0f, 0.0f, 9,571938f, 6,98278f, 7,319722f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[9]);
	(*&Local_0 + 784)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_06", 2, 672,6883f, 80,66309f, 1372,518f, 0.0f, 0.0f, 0.0f, 12,69705f, 10,3425f, 7,957937f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[10]);
	(*&Local_0 + 784)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_07", 2, 671,2278f, 80,66309f, 1363,645f, 0.0f, 0.0f, 0.0f, 15,72239f, 6,678134f, 8,588763f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[11]);
	(*&Local_0 + 784)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_08", 2, 676,0389f, 80,66309f, 1383,852f, 0.0f, 0.0f, 0.0f, 9,710629f, 6,678134f, 7,967698f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[12]);
	(*&Local_0 + 784)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_10", 2, 628,5198f, 81,94388f, 1374,903f, 0.0f, -4,579623f, 0.0f, 8,048456f, 8,836883f, 13,46529f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[13]);
	(*&Local_0 + 784)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_12", 2, 601,7166f, 87,01135f, 1374,708f, 0.0f, 27,75126f, 0.0f, 6,865475f, 5,819565f, 8,556458f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[14]);
	(*&Local_0 + 784)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_13", 2, 623,0494f, 81,94388f, 1338,679f, 0.0f, -0,4369935f, 0.0f, 7,044266f, 8,836883f, 10,06581f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[15]);
	(*&Local_0 + 784)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_14", 2, 604,4156f, 91,24645f, 1275,856f, 0.0f, -15,9371f, 0.0f, 7,923491f, 14,77712f, 17,17298f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[16]);
	(*&Local_0 + 784)[17] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_15", 2, 564,4659f, 92,57674f, 1254,814f, 0.0f, -42,71138f, 0.0f, 12,70037f, 14,77712f, 17,17298f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[17]);
	(*&Local_0 + 784)[18] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_16", 2, 605,0024f, 92,57674f, 1224,546f, 0.0f, -48,25452f, 0.0f, 17,11747f, 14,77712f, 17,17298f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[18]);
	(*&Local_0 + 784)[19] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_17", 2, 660,7715f, 83,26146f, 1419,815f, 0.0f, 0.0f, 0.0f, 7,472981f, 8,806527f, 9,360711f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[19]);
	(*&Local_0 + 784)[20] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_19", 2, 711,1942f, 81,13219f, 1414,713f, 0.0f, 12,64984f, 0.0f, 15,38927f, 6,084082f, 9,799738f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[20]);
	(*&Local_0 + 784)[21] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_21", 2, 734,6071f, 81,13219f, 1413,205f, 0.0f, 12,64984f, 0.0f, 7,565314f, 8,376842f, 12,72061f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[21]);
	(*&Local_0 + 784)[22] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_22", 2, 750,4719f, 81,61691f, 1409,201f, 0.0f, -0,7728498f, 0.0f, 7,565314f, 7,660175f, 10,20408f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[22]);
	(*&Local_0 + 784)[23] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_23", 2, 788,2316f, 88,30206f, 1412,882f, 0.0f, 11,76387f, 0.0f, 16,85998f, 14,10618f, 16,55526f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[23]);
	(*&Local_0 + 784)[24] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_24", 2, 777,0667f, 94,1466f, 1449,045f, 0.0f, -4,202371f, 0.0f, 14,75591f, 14,10618f, 11,96048f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[24]);
	(*&Local_0 + 784)[25] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_25", 2, 744,9584f, 91,7512f, 1444,467f, 0.0f, 9,579886f, 0.0f, 12,48155f, 11,93197f, 10,11699f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[25]);
	(*&Local_0 + 784)[26] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_26", 2, 724,3195f, 102,9277f, 1499,536f, 0.0f, -10,94988f, 0.0f, 17,59094f, 16,1011f, 13,65195f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[26]);
	(*&Local_0 + 784)[27] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_27", 2, 753,1341f, 82,14568f, 1350,611f, 0.0f, -0,1161031f, 0.0f, 18,73808f, 16,1011f, 12,90974f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[27]);
	(*&Local_0 + 784)[28] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_28", 2, 749,0399f, 82,33894f, 1361,032f, 0.0f, -0,1161031f, 0.0f, 10,38853f, 9,475595f, 7,964375f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[28]);
	(*&Local_0 + 784)[29] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_31", 2, 748,0307f, 80,16731f, 1379,677f, 0.0f, -0,1161031f, 0.0f, 8,000346f, 9,813577f, 6,846375f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[29]);
	(*&Local_0 + 784)[30] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_33", 2, 771,7179f, 80,16731f, 1355,466f, 0.0f, -0,1161031f, 0.0f, 14,04748f, 9,813577f, 16,73632f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[30]);
	(*&Local_0 + 784)[31] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_35", 2, 772,0789f, 80,16731f, 1325,204f, 0.0f, -0,1161031f, 0.0f, 14,04748f, 9,813577f, 8,008526f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[31]);
	(*&Local_0 + 784)[32] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_36", 2, 752,0589f, 80,16731f, 1313,919f, 0.0f, -0,1161031f, 0.0f, 15,86565f, 9,813577f, 8,332936f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[32]);
	(*&Local_0 + 784)[33] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_37", 2, 770,6945f, 82,4274f, 1309,134f, 0.0f, -0,1161031f, 0.0f, 16,29833f, 11,38274f, 11,03976f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[33]);
	(*&Local_0 + 784)[34] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_38", 2, 773,9312f, 80,71098f, 1300,629f, 0.0f, -0,1161031f, 0.0f, 10,34967f, 7,653213f, 7,422611f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[34]);
	(*&Local_0 + 784)[35] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_39", 2, 772,0616f, 80,71098f, 1285,607f, 0.0f, -0,1161031f, 0.0f, 13,70134f, 7,653213f, 7,422611f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[35]);
	(*&Local_0 + 784)[36] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_40", 2, 773,6594f, 80,71098f, 1278,626f, 0.0f, -0,1161031f, 0.0f, 10,09816f, 7,653213f, 7,422611f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[36]);
	(*&Local_0 + 784)[37] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_41", 2, 774,08f, 80,71098f, 1265,002f, 0.0f, -0,1161031f, 0.0f, 9,721198f, 7,653213f, 6,597037f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[37]);
	(*&Local_0 + 784)[38] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_42", 2, 751,1092f, 83,37032f, 1286,902f, 0.0f, -0,1161031f, 0.0f, 17,9842f, 9,982813f, 8,605144f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[38]);
	(*&Local_0 + 784)[39] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_43", 2, 752,6476f, 83,37032f, 1295,584f, 0.0f, -0,1161031f, 0.0f, 15,91635f, 10,47344f, 9,028062f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[39]);
	(*&Local_0 + 784)[40] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_44", 2, 749,8453f, 83,37032f, 1303,44f, 0.0f, -0,1161031f, 0.0f, 16,16646f, 10,47344f, 8,201642f);
	ADD_TO_VOLUME_SET(Local_0.f_952, (*&Local_0 + 784)[40]);
	Local_0.f_964 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_blacksmith_set");
	(*&Local_0 + 956)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "generic_09", 2, 674,5723f, 80,66309f, 1394,737f, 0.0f, 2,457322f, 0.0f, 12,694f, 6,678134f, 9,48127f);
	ADD_TO_VOLUME_SET(Local_0.f_964, (*&Local_0 + 956)[0]);
	Local_0.f_980 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_seagulls_set");
	(*&Local_0 + 968)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gulls1", 3, 851,8363f, 81,89945f, 1296,511f, 0.0f, 0,3603036f, 0.0f, 85,74756f, 41,01292f, 128,9268f);
	ADD_TO_VOLUME_SET(Local_0.f_980, (*&Local_0 + 968)[0]);
	(*&Local_0 + 968)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "gulls2", 3, 836,9991f, 81,89945f, 1179,526f, 0.0f, 34,21489f, 0.0f, 84,42347f, 38,58218f, 101,1785f);
	ADD_TO_VOLUME_SET(Local_0.f_980, (*&Local_0 + 968)[1]);
	Local_0.f_984 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_blackjack", 2, 718,5128f, 79,25579f, 1312,409f, 0.0f, 0,4749511f, 0.0f, 4,148842f, 4,148842f, 4,148842f);
	Local_0.f_988 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_poker", 2, 717,2479f, 79,2292f, 1325,739f, 0.0f, -0,2920592f, 0.0f, 4,792871f, 4,792871f, 4,792871f);
	Local_0.f_1008 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_barnyard_set");
	(*&Local_0 + 992)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_barnyard_02", 2, 560,8457f, 87,39951f, 1322,146f, 0.0f, 0.0f, 0.0f, 27,94673f, 13,51856f, 51,41708f);
	ADD_TO_VOLUME_SET(Local_0.f_1008, (*&Local_0 + 992)[0]);
	(*&Local_0 + 992)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_barnyard_03", 2, 584,4229f, 86,83189f, 1341,847f, 0.0f, 0.0f, 0.0f, 20,67807f, 12,44218f, 12,26767f);
	ADD_TO_VOLUME_SET(Local_0.f_1008, (*&Local_0 + 992)[1]);
	(*&Local_0 + 992)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_barnyard_01", 2, 584,4229f, 86,83189f, 1304,895f, 0.0f, 0.0f, 0.0f, 20,67807f, 11,59534f, 15,81178f);
	ADD_TO_VOLUME_SET(Local_0.f_1008, (*&Local_0 + 992)[2]);
	Local_0.f_1020 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_fbi_int_set");
	(*&Local_0 + 1012)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "fbiv02", 2, 766,2209f, 82,72511f, 1235,356f, 0.0f, 0.0f, 0.0f, 24,55437f, 9,946985f, 7,307757f);
	ADD_TO_VOLUME_SET(Local_0.f_1020, (*&Local_0 + 1012)[0]);
	Local_0.f_1040 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_bank_int_set");
	(*&Local_0 + 1024)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bankv4", 2, 687,6222f, 80,49551f, 1234,989f, 0.0f, 89,4097f, 0.0f, 16,99455f, 5,574651f, 5,091676f);
	ADD_TO_VOLUME_SET(Local_0.f_1040, (*&Local_0 + 1024)[0]);
	(*&Local_0 + 1024)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bankv5", 2, 690,2325f, 80,49551f, 1228,89f, 0.0f, 89,4097f, 0.0f, 5,077168f, 5,574651f, 5,091676f);
	ADD_TO_VOLUME_SET(Local_0.f_1040, (*&Local_0 + 1024)[1]);
	(*&Local_0 + 1024)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "bankv6", 2, 690,5524f, 80,49551f, 1240,817f, 0.0f, 89,4097f, 0.0f, 5,077168f, 5,574651f, 5,091676f);
	ADD_TO_VOLUME_SET(Local_0.f_1040, (*&Local_0 + 1024)[2]);
	Local_0.f_1044 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_poker_H", 2, 748,9402f, 83,85324f, 1267,118f, 0.0f, 90,34145f, 0.0f, 4,798298f, 3,587841f, 4,73581f);
	Local_0.f_1048 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_bank_back", 2, 680,8967f, 82,37836f, 1241,004f, 0.0f, 0.0f, 0.0f, 7,126543f, 6,574588f, 4,640002f);
	Local_0.f_1112 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "blkv_streetSpawn_set");
	(*&Local_0 + 1052)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetSpawn01", 2, 771,7525f, 78,30585f, 1194,439f, 0.0f, 0.0f, 0.0f, 61,83163f, 36,25699f, 105,7322f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[0]);
	(*&Local_0 + 1052)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_1", 2, 698,3498f, 78,30585f, 1171,227f, 0.0f, 0.0f, 0.0f, 92,81285f, 34,24347f, 77,73894f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[1]);
	(*&Local_0 + 1052)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_2", 2, 736,7742f, 78,27515f, 1294,559f, 0.0f, 0.0f, 0.0f, 21,78906f, 34,24347f, 71,52024f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[2]);
	(*&Local_0 + 1052)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_4", 2, 788,5724f, 78,30589f, 1294,576f, 0.0f, 0.0f, 0.0f, 18,26107f, 34,24347f, 76,04086f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[3]);
	(*&Local_0 + 1052)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_5", 2, 747,422f, 78,30585f, 1365,236f, 0.0f, 0.0f, 0.0f, 104,6321f, 34,54143f, 42,17798f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[4]);
	(*&Local_0 + 1052)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_6", 2, 685,4605f, 78,18396f, 1301,025f, 0.0f, 0.0f, 0.0f, 14,67729f, 34,24347f, 62,36569f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[5]);
	(*&Local_0 + 1052)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_7", 2, 686,7188f, 78,30585f, 1376,857f, 0.0f, 0.0f, 0.0f, 19,91489f, 34,24347f, 37,09056f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[6]);
	(*&Local_0 + 1052)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_8", 2, 686,7984f, 78,30585f, 1344,384f, 0.0f, 0.0f, 0.0f, 20,20308f, 34,24347f, 7,430287f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[7]);
	(*&Local_0 + 1052)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_9", 2, 713,035f, 78,31379f, 1336,31f, 0.0f, 0.0f, 0.0f, 32,85799f, 34,24347f, 19,50919f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[8]);
	(*&Local_0 + 1052)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_10", 2, 761,3331f, 78,30588f, 1335,632f, 0.0f, 0.0f, 0.0f, 37,99918f, 34,24347f, 17,38168f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[9]);
	(*&Local_0 + 1052)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_11", 2, 711,4492f, 78,30646f, 1252,874f, 0.0f, 0.0f, 0.0f, 36,31134f, 34,24347f, 13,88048f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[10]);
	(*&Local_0 + 1052)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn02_3", 2, 669,1378f, 78,27731f, 1238,347f, 0.0f, 0.0f, 0.0f, 17,38816f, 34,24347f, 38,57463f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[11]);
	(*&Local_0 + 1052)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn03", 2, 759,9683f, 78,30585f, 1252,016f, 0.0f, 0.0f, 0.0f, 36,57722f, 36,57722f, 15,36263f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[12]);
	(*&Local_0 + 1052)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_streetspawn09", 2, 713,1572f, 78,30591f, 1403,859f, 0.0f, 8,115254f, 0.0f, 37,81604f, 15,5878f, 19,22191f);
	ADD_TO_VOLUME_SET(Local_0.f_1112, (*&Local_0 + 1052)[13]);
	Local_0.f_1116 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_theatrePop", 2, 710,7824f, 80,55675f, 1289,806f, 0.0f, 0.0f, 0.0f, 12,50965f, 7,019596f, 17,49664f);
	Local_0.f_1120 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_highStakesSecurity", 2, 752,1826f, 83,66572f, 1270,208f, 0.0f, 0.0f, 0.0f, 2,989091f, 4,146807f, 6,575893f);
	Local_0.f_1124 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_highStakesWhores", 2, 748,7577f, 83,66572f, 1271,79f, 0.0f, 0.0f, 0.0f, 6,968231f, 4,146807f, 3,084016f);
	Local_0.f_1128 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_highStakesPoker_room", 2, 755,7731f, 84,10152f, 1270,006f, 0.0f, 0.0f, 0.0f, 3,205048f, 2,879115f, 7,246208f);
	Local_0.f_1132 = CREATE_VOLUME_IN_LAYOUT(Local_0, "blkv_theatreweather", 2, 708,415f, 82,56446f, 1289,639f, 0.0f, 0.0f, 0.0f, 25,74156f, 9,408668f, 19,58652f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blkf_report_crime", 757,2836f, 78,47209f, 1235,004f, 0.0f, -89,7756f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blkf_jail_leave_end", 757,209f, 78,472f, 1234,862f, 0.0f, 90.0f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blkf_jail_leave_start", 763,437f, 79,456f, 1234,952f, 0.0f, 111,092f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blkf_jail_sit", 772,1412f, 79,45659f, 1242,596f, 0.0f, 364,7601f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blkf_clear_bounty", 662,525f, 78,755f, 1313,455f, 0.0f, 98,16f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blkf_cell_leave_end", 771,335f, 79,456f, 1233,199f, 0.0f, 90,12395f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blkf_cell_leave_cop", 770,4432f, 79,456f, 1238,214f, 0.0f, 259,884f, 0.0f);
	*(&Local_0 + 1136) = { 813,7691f, 79,59104f, 1227,949f };
	*(&Local_0 + 1136 + 12) = { 0.0f, -89,03281f, 0.0f };
	Local_0.f_1160 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_respawn_water_05", 813,7691f, 79,59104f, 1227,949f, 0.0f, -89,03281f, 0.0f);
	*(&Local_0 + 1164) = { 857,6336f, 78,46339f, 1236,871f };
	*(&Local_0 + 1164 + 12) = { 0.0f, -89,03281f, 0.0f };
	Local_0.f_1188 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_respawn_water_06", 857,6336f, 78,46339f, 1236,871f, 0.0f, -89,03281f, 0.0f);
	*(&Local_0 + 1192) = { 814,3057f, 77,23427f, 1286,12f };
	*(&Local_0 + 1192 + 12) = { 0.0f, -89,03281f, 0.0f };
	Local_0.f_1216 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_respawn_water_07", 814,3057f, 77,23427f, 1286,12f, 0.0f, -89,03281f, 0.0f);
	*(&Local_0 + 1220) = { 815,4921f, 79,56301f, 1259,733f };
	*(&Local_0 + 1220 + 12) = { 0.0f, -89,03281f, 0.0f };
	Local_0.f_1244 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_respawn_water_014", 815,4921f, 79,56301f, 1259,733f, 0.0f, -89,03281f, 0.0f);
	*(&Local_0 + 1248) = { 839,1734f, 78,4516f, 1250,671f };
	*(&Local_0 + 1248 + 12) = { 0.0f, -89,03281f, 0.0f };
	Local_0.f_1272 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_respawn_water_015", 839,1734f, 78,4516f, 1250,671f, 0.0f, -89,03281f, 0.0f);
	*(&Local_0 + 1276) = { 775,3324f, 78,69197f, 1318,03f };
	*(&Local_0 + 1276 + 12) = { 0.0f, -92,75435f, 0.0f };
	Local_0.f_1300 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_gunsmith", 775,3324f, 78,69197f, 1318,03f, 0.0f, -92,75435f, 0.0f);
	*(&Local_0 + 1304) = { 774,2303f, 78,46262f, 1292,043f };
	*(&Local_0 + 1304 + 12) = { 0.0f, 270,1447f, 0.0f };
	Local_0.f_1328 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_tailor", 774,2303f, 78,46262f, 1292,043f, 0.0f, 270,1447f, 0.0f);
	*(&Local_0 + 1332) = { 750,4651f, 78,18945f, 1265,279f };
	*(&Local_0 + 1332 + 12) = { 0.0f, 89,57835f, 0.0f };
	Local_0.f_1356 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_hotel", 750,4651f, 78,18945f, 1265,279f, 0.0f, 89,57835f, 0.0f);
	*(&Local_0 + 1360) = { 747,5429f, 78,30585f, 1323,35f };
	*(&Local_0 + 1360 + 12) = { 0.0f, 89,76045f, 0.0f };
	Local_0.f_1384 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_store1", 747,5429f, 78,30585f, 1323,35f, 0.0f, 89,76045f, 0.0f);
	*(&Local_0 + 1388) = { 741,4055f, 78,32f, 1321,329f };
	*(&Local_0 + 1388 + 12) = { 0.0f, 234,4381f, 0.0f };
	Local_0.f_1412 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store1", 741,4055f, 78,32f, 1321,329f, 0.0f, 234,4381f, 0.0f);
	*(&Local_0 + 1416) = { 741,787f, 81,233f, 1324,388f };
	*(&Local_0 + 1416 + 12) = { 0.0f, 234,4381f, 0.0f };
	Local_0.f_1440 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store1", 741,787f, 81,233f, 1324,388f, 0.0f, 234,4381f, 0.0f);
	*(&Local_0 + 1444) = { 738,1561f, 81,384f, 1321,131f };
	*(&Local_0 + 1444 + 12) = { 0.0f, 234,4381f, 0.0f };
	Local_0.f_1468 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store1", 738,1561f, 81,384f, 1321,131f, 0.0f, 234,4381f, 0.0f);
	*(&Local_0 + 1472) = { 743,838f, 78,413f, 1321,586f };
	*(&Local_0 + 1472 + 12) = { 0.0f, 234,4381f, 0.0f };
	Local_0.f_1496 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store1", 743,838f, 78,413f, 1321,586f, 0.0f, 234,4381f, 0.0f);
	*(&Local_0 + 1500) = { 720,0005f, 78,30585f, 1312.0f };
	*(&Local_0 + 1500 + 12) = { 0.0f, -91,1851f, 0.0f };
	Local_0.f_1524 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_saloon", 720,0005f, 78,30585f, 1312.0f, 0.0f, -91,1851f, 0.0f);
	*(&Local_0 + 1528) = { 716,3461f, 79,38245f, 1289,751f };
	*(&Local_0 + 1528 + 12) = { 0.0f, -84,49128f, 0.0f };
	Local_0.f_1552 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_theater", 716,3461f, 79,38245f, 1289,751f, 0.0f, -84,49128f, 0.0f);
	*(&Local_0 + 1556) = { 664,1627f, 78,7551f, 1314,16f };
	*(&Local_0 + 1556 + 12) = { 0.0f, -90,44082f, 0.0f };
	Local_0.f_1580 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_train", 664,1627f, 78,7551f, 1314,16f, 0.0f, -90,44082f, 0.0f);
	*(&Local_0 + 1584) = { 559,0537f, 94,55469f, 1192,885f };
	*(&Local_0 + 1584 + 12) = { 0.0f, -46,26857f, 0.0f };
	Local_0.f_1608 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_church", 559,0537f, 94,55469f, 1192,885f, 0.0f, -46,26857f, 0.0f);
	*(&Local_0 + 1612) = { 686,1531f, 79,43501f, 1234,501f };
	*(&Local_0 + 1612 + 12) = { 0.0f, -91,31918f, 0.0f };
	Local_0.f_1636 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_interiorPoint_bank", 686,1531f, 79,43501f, 1234,501f, 0.0f, -91,31918f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos1", 518,503f, 109,865f, 1179,648f, -8,414f, -125,394f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos2", 885,73f, 99,231f, 1217,082f, -10,656f, 129,049f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos3", 694,244f, 111,065f, 1524,643f, -13,252f, -23,584f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos4", 612,272f, 95,593f, 1450,567f, -9,001f, -35,454f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos5", 780,48f, 99,04f, 1201,082f, -5,407f, 113,683f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos6", 586,377f, 93,308f, 1162,875f, 17,478f, 141,312f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos7", 728,058f, 80,017f, 1229,739f, 17,785f, -31,731f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos8", 777,901f, 86,397f, 1418,993f, 10,197f, 147,041f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos9", 568,593f, 89,009f, 1344,56f, 2,137f, -72,828f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "blk_vista_cam_pos10", 686,754f, 87,687f, 1323,54f, -5,394f, 50,819f, 0.0f);
	*(&Local_0 + 1640) = { 664,3132f, 78,755f, 1315,971f };
	*(&Local_0 + 1640 + 12) = { 0.0f, 180,7735f, 0.0f };
	Local_0.f_1664 = CREATE_POINT_IN_LAYOUT(Local_0, "blkf_merc_giver", 664,3132f, 78,755f, 1315,971f, 0.0f, 180,7735f, 0.0f);
	*(&Local_0 + 1668) = { 741,746f, 78,425f, 1328,435f };
	*(&Local_0 + 1668 + 12) = { 0.0f, -90.0f, 0.0f };
	Local_0.f_1692 = CREATE_POINT_IN_LAYOUT(Local_0, "horse_pos_store1", 741,746f, 78,425f, 1328,435f, 0.0f, -90.0f, 0.0f);
	return 1;
}

void Function_69(int iParam0, int iParam1) //Position: 0x8122 / 33058
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

var Function_70() //Position: 0x816B / 33131
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_71(bool bParam0, var uParam1) //Position: 0x8180 / 33152
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

