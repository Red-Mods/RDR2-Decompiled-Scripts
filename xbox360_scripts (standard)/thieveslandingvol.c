//Decompiled with MagicRDR v1.0
//Function Count : 115
//Statics Count : 786
//Natives Count : 175
//Parameters Count : 2

#region Local Var
	struct<2405> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_602 = 0;
	Local_603 = { StackVal, ScriptParam_0 };
	Function_114("Initializing Thieves Landing Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_605 = 500;
		uLocal_606 = Function_113();
		switch (iLocal_602)
		{
			case 0x00000000:
				if (Function_111())
				{
					bLocal_674 = Function_110(Local_0, "thievesLanding", ScriptParam_0);
					iLocal_602 = 1;
				}
				bLocal_605 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(bLocal_674))
				{
					iLocal_602 = 2;
				}
				bLocal_605 = false;
				break;
			
			case 0x00000002:
				Function_109(&uLocal_607);
				Function_108(StackVal, &uLocal_607, &iLocal_610, 4, 4294967295, 4);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_148, 4294967295, 2097410);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_180, 4294967295, 0);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_692, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_368, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_164, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_152, 4294967295, 258);
				Function_108(StackVal, &uLocal_607, &iLocal_610, 5, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_12, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_16, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_384, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_548, 4294967295, 4106);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_644, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_20, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_24, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_400, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_468, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_432, 4294967295, 778);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_596, 4294967295, 1290);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_412, 4294967295, 266);
				Function_108(&uLocal_607, &iLocal_610, 5, Local_0.f_480, 4294967295, 266);
				Function_107(Local_0.f_180, 14, 3);
				Function_105(&Local_675, bLocal_674, "npigFarm01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_152, 0, 1);
				iLocal_779 = Function_105(&Local_675, bLocal_674, "gunsmith01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_548, 1, 0);
				if (iLocal_779 <= 0 && iLocal_779 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7795]), 33);
				}
				iLocal_780 = Function_105(&Local_675, bLocal_674, "gunsmith01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_548, 0, 0);
				if (iLocal_780 <= 0 && iLocal_780 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7805]), 33);
				}
				iLocal_776 = Function_105(&Local_675, bLocal_674, "tailorsDoctors01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_644, 1, 0);
				if (iLocal_776 <= 0 && iLocal_776 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7765]), 33);
				}
				iLocal_777 = Function_105(&Local_675, bLocal_674, "tailorsDoctors01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_644, 0, 0);
				if (iLocal_777 <= 0 && iLocal_777 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7775]), 33);
				}
				iLocal_778 = Function_105(&Local_675, bLocal_674, "tailorsDoctors01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_644, 1, 0);
				if (iLocal_778 <= 0 && iLocal_778 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7785]), 33);
				}
				iLocal_781 = Function_105(&Local_675, bLocal_674, "pawnShop01", 1, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_692, 1, 0);
				if (iLocal_781 <= 0 && iLocal_781 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7815]), 33);
				}
				iLocal_782 = Function_105(&Local_675, bLocal_674, "pawnShop01", 2, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_692, 0, 0);
				if (iLocal_782 <= 0 && iLocal_782 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7825]), 33);
				}
				iLocal_783 = Function_105(&Local_675, bLocal_674, "pawnShop01", 3, &Global_29155[ScriptParam_010] + 20, 0, Local_0.f_692, 0, 0);
				if (iLocal_783 <= 0 && iLocal_783 > Local_675)
				{
					Function_104(&(Local_675[iLocal_7835]), 33);
				}
				Function_105(&Local_675, bLocal_674, "tailorsDoctors01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "tailorsDoctors01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "workShed01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "workShed01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "workShed02", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "stable01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "stable01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "nbrothel01", 1, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "nbrothel01", 2, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "nbrothel01", 4, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				Function_105(&Local_675, bLocal_674, "nbrothel01", 5, &Global_29155[ScriptParam_010] + 20, 0, 0, 0, 0);
				iLocal_602 = 3;
				bLocal_605 = false;
				break;
			
			case 0x00000003:
				Function_103(&(Global_29008[Local_603]), 16);
				Function_102("Finished Initializing Thieves Landing Volumes", 5.0f);
				iLocal_602 = 4;
				break;
			
			case 0x00000004:
				Function_79(&uLocal_607, &iLocal_610, uLocal_606, ScriptParam_0);
				Function_76(&Local_675, 0);
				if (!Function_75())
				{
					if (!Function_73(3))
					{
						if (Function_72(StackVal, StackVal, Global_34574, 174,9852f, 74,38473f, 2182,238f) > 20.0f)
						{
							Function_12(3, 0, 1, 1);
						}
					}
				}
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_605);
	}
	Function_4(&uLocal_607, &iLocal_610);
	Function_3(&Local_675);
	Function_2();
	Function_1(&(Global_29008[Local_603]), 16);
	Function_102("Unloaded Thieves Landing Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x776 / 1910
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x78D / 1933
{
	RELEASE_LAYOUT_REF(Local_0);
	return;
}

void Function_3(int iParam0) //Position: 0x798 / 1944
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

void Function_4(var uParam0, int iParam1) //Position: 0x7F2 / 2034
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

void Function_5(bool bParam0, bool bParam1, bool bParam2) //Position: 0x84A / 2122
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

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x927 / 2343
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

void Function_7() //Position: 0xAA0 / 2720
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_8(bool bParam0) //Position: 0xAAC / 2732
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

void Function_9(int iParam0) //Position: 0xAF2 / 2802
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

void Function_10(var uParam0, int iParam1) //Position: 0xB38 / 2872
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_11(var uParam0, int iParam1) //Position: 0xB52 / 2898
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB6F / 2927
{
	char* cVar0[32];
	
	if (!Function_71(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_70(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_73(bParam0))
	{
		Function_69(456, 1, 0, 0);
		Function_68(bParam0, 2);
		if (bParam2)
		{
			if (!Function_67(0, 0, 1, 1))
			{
				Function_30(1);
				Function_29(1, 5);
			}
			else
			{
				Function_28();
			}
		}
		Function_22(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_21() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_21() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_20(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_19(Global_76846, 2))
		{
			Function_13(Global_34573, 2, 1, 0);
		}
	}
}

void Function_13(bool bParam0, var uParam1, var uParam2, bool bParam3) //Position: 0xCB9 / 3257
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_15(bParam0, uParam1, uParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_14(&cVar1, uParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_14(char* cParam0, int iParam1) //Position: 0xD25 / 3365
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(cParam0, "4", 16);
	}
	return;
}

bool Function_15(bool bParam0, var uParam1, int iParam2) //Position: 0xD5C / 3420
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_3380)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		if (Function_17(DECOR_GET_INT(bParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (iParam2 == 1)
	{
		if (Global_3403 || Global_3404)
		{
			return 0;
		}
	}
	if (iParam2 == 2)
	{
		switch (Function_16(uVar0))
		{
			case 0x00000002:
				if (!Function_19(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_16(char* cParam0) //Position: 0xDD4 / 3540
{
	switch (cParam0)
	{
		case 0x00000001:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00004000:
		case 0x00008000:
		case 0x00010000:
		case 0x00020000:
		case 0x00040000:
		case 0x00200000:
			return 0;
			break;
		
		case 0x00000004:
		case 0x00000008:
		case 0x00000020:
		case 0x00001000:
		case 0x00080000:
		case 0x00100000:
			return 1;
			break;
		
		case 0x00000002:
		case 0x00000010:
		case 0x00000800:
		case 0x00002000:
		case 0x00400000:
			return 2;
			break;
	}
	return 0;
}

int Function_17(int iParam0) //Position: 0xE75 / 3701
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_18(&iVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 >= 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_18(int iParam0, int iParam1) //Position: 0xEB2 / 3762
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_19(int iParam0, int iParam1) //Position: 0xEC5 / 3781
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_20(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xED8 / 3800
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

bool Function_21() //Position: 0xF23 / 3875
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_22(bool bParam0) //Position: 0xF50 / 3920
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 1))
	{
		Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 0);
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_26(bParam0, Function_27(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_27774[bParam013].f_48, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_27774[bParam013].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_26(bParam0, Function_27(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_27774[bParam013].f_48, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_25(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_24(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_23(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_23(bool bParam0) //Position: 0x1100 / 4352
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_71(bParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_27774[bParam013].f_28)
	{
		iVar1 = iVar1;
		if ((StackVal && iVar0) == 0)
		{
			return iVar1 + 1;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2 + 1;
}

void Function_24(bool bParam0, bool bParam1) //Position: 0x1157 / 4439
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

var Function_25(bool bParam0) //Position: 0x117C / 4476
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_71(bParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[bParam013].f_28)
	{
		if ((StackVal && iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return iVar2;
}

bool Function_26(bool bParam0, int iParam1) //Position: 0x11D2 / 4562
{
	int iVar0;
	
	if (!Function_71(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_27(bool bParam0) //Position: 0x1231 / 4657
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_28() //Position: 0x123D / 4669
{
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x1243 / 4675
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_75())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_30(bool bParam0) //Position: 0x1285 / 4741
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_60();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_31();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_18(&Global_63095, 1);
		Function_18(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_31() //Position: 0x12D6 / 4822
{
	Function_58();
	Function_57();
	Function_57();
	Function_56();
	Function_56();
	Function_55();
	Function_55();
	Function_38();
	Function_38();
	if (!Function_75())
	{
		Function_36();
		Function_35();
		Function_34();
		Function_33();
	}
	Function_32();
	return;
}

void Function_32() //Position: 0x1309 / 4873
{
	Global_34581[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_34581[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_34581[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_34581[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_34581[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_34581[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_34581[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_34581[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_34581[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_34581[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_34581[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_34581[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_34581[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_34581[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_34581[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_34581[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_34581[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_34581[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_34581[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_34581[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_34581[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_33() //Position: 0x140F / 5135
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_25986[1])
	{
		if (fVar0 > 50.0f)
		{
			fVar0 = 50.0f;
		}
	}
	else
	{
		fVar0 = 0.0f;
	}
	Global_83815 = fVar0;
	return;
}

void Function_34() //Position: 0x1442 / 5186
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = bVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76695[iVar13] = 4294967295;
		Global_76695[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	return;
}

void Function_35() //Position: 0x15D0 / 5584
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = bVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(bVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_76543[iVar13] = 4294967295;
		Global_76543[iVar13].f_4 = 4294967295;
		iVar1++;
	}
	Global_76694 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_76694 == 4294967295 && Global_76694 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_76694) != 2)
		{
			Global_76694 = 4294967295;
		}
	}
	return;
}

void Function_36() //Position: 0x1784 / 6020
{
	Function_37(&Global_28260, 1, 0);
	return;
}

void Function_37(int iParam0, bool bParam1, var uParam2) //Position: 0x1792 / 6034
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_113();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(bVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (iParam0->f_1012 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, bVar0);
			if (iVar9 != iVar7)
			{
				(*iParam0 + 48)[iVar12] = iVar9;
				(iParam0 + 48[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 48)[iVar12], bVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			iParam0->f_44 = GET_NUM_ACCESSORIES_IN_INVENTORY(bVar0);
			iVar2 = 0;
			while (iVar2 < (iParam0->f_44 - 1))
			{
				(*iParam0)[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, bVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[bVar3] = _GET_AMMO_AMOUNT(bVar0, bVar3, 0);
			bVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			bVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, bVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = bVar8;
					iParam0->f_1120 = bVar8;
				}
			}
			iVar4++;
		}
		iParam0->f_2160 = GET_NUM_COLLECTABLES_IN_INVENTORY(bVar0);
		iVar1 = 0;
		while (iVar1 < (iParam0->f_2160 - 1))
		{
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
			(iParam0 + 1132[iVar12])->f_4 = GET_ITEM_COUNT_BY_CRC((*iParam0 + 1132)[iVar12], bVar0);
			iVar1++;
		}
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (bVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, bVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_38() //Position: 0x1983 / 6531
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 <= 39)
	{
		switch (iVar4)
		{
			case 0x00000015:
			case 0x00000016:
				iVar2 = 0;
				break;
			
			default:
				iVar2 = ((Function_54((50 + iVar4)) + Function_54((183 + iVar4))) + Function_54((90 + iVar4)));
				break;
		}
		if (iVar2 > iVar3)
		{
			bVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_39(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_39(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A1E / 6686
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > TO_FLOAT(bParam1))
	{
		Function_53(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_52(iParam0);
	if (bParam2)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_40(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1CB9 / 7353
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_51(390))), 32);
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
					bVar19 = (Function_50(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_50(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_48(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_45(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_42(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_41(), &Var9);
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

var Function_41() //Position: 0x22E6 / 8934
{
	int iVar0;
	
	return iVar0;
}

var Function_42(int iParam0) //Position: 0x22EE / 8942
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_43(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x22FF / 8959
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_44(char* cParam0, char* cParam1) //Position: 0x23F4 / 9204
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_45(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x240D / 9229
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_47(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_46(Function_47(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_46(int iParam0, int iParam1) //Position: 0x2472 / 9330
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int Function_47(int iParam0, bool bParam1) //Position: 0x2484 / 9348
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_48(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2496 / 9366
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
	if (((Function_49(iParam0) != 19 || Function_49(iParam0) != 17) || Function_49(iParam0) != 10) || Function_49(iParam0) != 9)
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

int Function_49(int iParam0) //Position: 0x25C6 / 9670
{
	return Global_35278[iParam020].f_48;
}

float Function_50(int iParam0) //Position: 0x25D5 / 9685
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_51(int iParam0) //Position: 0x260E / 9742
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_52(int iParam0) //Position: 0x264B / 9803
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

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x27E5 / 10213
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
		Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
	}
	else
	{
		Global_34581[iVar1] = bParam1;
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

int Function_54(bool bParam0) //Position: 0x29FF / 10751
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_55() //Position: 0x2A40 / 10816
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 4)
	{
		iVar2 = ((Function_54((50 + iVar3) + 15) + Function_54((183 + iVar3) + 15)) + Function_54((90 + iVar3) + 15));
		if (iVar2 > iVar5)
		{
			iVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_39(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_56() //Position: 0x2AC9 / 10953
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 13)
	{
		if (iVar3 > 7 || iVar3 < 10)
		{
			iVar2 = ((Function_54((50 + iVar3) + 8) + Function_54((183 + iVar3) + 8)) + Function_54((90 + iVar3) + 8));
			if (iVar2 > iVar5)
			{
				iVar4 = iVar3;
				iVar5 = iVar2;
			}
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_39(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_57() //Position: 0x2B60 / 11104
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_54((50 + iVar3)) + Function_54((183 + iVar3))) + Function_54((90 + iVar3)));
		if (iVar2 > iVar5)
		{
			bVar4 = iVar3;
			iVar5 = iVar2;
		}
		iVar3++;
	}
	if (iVar5 < 0)
	{
		return StackVal, cVar0;
	}
	Function_39(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_58() //Position: 0x2BDF / 11231
{
	Function_59(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_39(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_59(int iParam0, bool bParam1, int iParam2) //Position: 0x2C05 / 11269
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + bParam1);
	Function_53(iParam0, bParam1, 1);
	Function_52(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_40(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_60() //Position: 0x2E0F / 11791
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_62(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_62(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_61(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0,5f);
		FIND_GROUND_INTERSECTION(&vVar0, 100.0f, &Global_34165, &uVar3);
	}
	else
	{
		Global_34165 = { StackVal, StackVal, vVar0 };
	}
	Global_34165.f_156 = Global_34165.f_12;
	*(&Global_34165 + 144) = { StackVal, StackVal, Global_34165 };
	Global_34165.f_160 = Global_34165.f_16;
	Global_34165.f_28 = 0;
	Global_34165.f_36 = 0;
	Global_34165.f_40 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Global_88793 = 1;
	return;
}

bool Function_61(vector3 vParam0) //Position: 0x2EB0 / 11952
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_62(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2EC8 / 11976
{
	int iVar0;
	
	iVar0 = Function_66(uParam2, uParam3);
	if (Function_65(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_64(&Global_63095, 1);
			Function_18(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_64(&Global_63095, 2);
			Function_18(&Global_63095, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				*uParam1 = 0;
			}
			else
			{
				*uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			*uParam0 = 89,88f;
			return -2158,348f, 19,944f, 2597,452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_64(&Global_63095, 2);
		Function_18(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_63();
	return StackVal, StackVal, Function_63();
}

vector3 Function_63() //Position: 0x2FAF / 12207
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_64(var uParam0, int iParam1) //Position: 0x2FB8 / 12216
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_65(int iParam0) //Position: 0x2FC7 / 12231
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_66(bool bParam0, bool bParam1) //Position: 0x2FDD / 12253
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_72(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_72(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_65(iVar0) && !bParam1)
	{
		iVar0 = Function_66(bParam0, 1);
	}
	return iVar0;
}

bool Function_67(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x30A4 / 12452
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_68(bool bParam0, int iParam1) //Position: 0x3148 / 12616
{
	if (!Function_71(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_69(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x319D / 12701
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
	Function_53(iParam0, TO_FLOAT(bParam1), 1);
	Function_52(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_40(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

bool Function_70(int iParam0) //Position: 0x33BD / 13245
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_71(bool bParam0) //Position: 0x33D9 / 13273
{
	if (bParam0 > 0 || bParam0 < 30)
	{
		return 0;
	}
	return 1;
}

float Function_72(vector3 vParam0, vector3 vParam3) //Position: 0x33EF / 13295
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_73(bool bParam0) //Position: 0x340C / 13324
{
	if (!Function_71(bParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_74(bParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_74(bool bParam0, int iParam1) //Position: 0x345E / 13406
{
	int iVar0;
	
	if (!Function_71(bParam0))
	{
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_75() //Position: 0x348B / 13451
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_76(var uParam0, bool bParam1) //Position: 0x3494 / 13460
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
	
	bVar6 = Function_75();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_47((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_78(uParam0[iVar05], 16384);
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
								Function_77(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_78(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_113(), uParam0[iVar05]->f_12))
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
								Function_77(uParam0[iVar05], 1);
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
							Function_77(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_78(uParam0[iVar05], 1);
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
					Function_77(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_77(uParam0[iVar05], 1);
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
					Function_78(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_78(uParam0[iVar05], 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_113(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_113(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_78(uParam0[iVar05], 32768);
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

void Function_77(var uParam0, int iParam1) //Position: 0x3860 / 14432
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x3871 / 14449
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

void Function_79(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x388B / 14475
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_101(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_80(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_80(var uParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x390C / 14604
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_100(uParam0))
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
								Function_98(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_97(uParam0, 8);
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
								Function_97(uParam0, 4);
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
				if ((((((bVar1 && Function_96(iParam2)) && !Function_67(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_95(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
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
							if (Function_75())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_97(uParam0, 16);
								Function_87(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
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
				Function_97(uParam0, 2);
			}
			else
			{
				Function_10(uParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_96(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_86(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_11(uParam0, 1))
					{
						if (!Global_3377)
						{
							Function_85(StackVal, StackVal, *uParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_97(uParam0, 1);
					}
				}
				if (*uParam0 == 4)
				{
					if (!bParam4 && Function_96(iParam2))
					{
						Function_84(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_81(iParam2);
			}
			else if (*uParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_81(int iParam0) //Position: 0x3D25 / 15653
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_86(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_103(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_69(473, 1, 0, 0);
		iVar0 = Function_83(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_69(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_69(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_69(476, 1, 0, 0);
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
		Function_82(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_82(7, 30);
	}
	if (Function_50(473) <= Function_51(473))
	{
		if (!Function_75())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

void Function_82(int iParam0, bool bParam1) //Position: 0x3E24 / 15908
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

var Function_83(int iParam0) //Position: 0x3E8B / 16011
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_96(iParam0))
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

void Function_84(var uParam0, int iParam1) //Position: 0x3EE3 / 16099
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_85(struct<5> Param0) //Position: 0x3EF0 / 16112
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

bool Function_86(var uParam0, int iParam1) //Position: 0x3F16 / 16150
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_87(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3F32 / 16178
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_94(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_93(iParam1))
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
	if (!Function_90(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_41(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_88();
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

void Function_88() //Position: 0x41E2 / 16866
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_89(bVar0, iVar1);
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

void Function_89(bool bParam0, bool bParam1) //Position: 0x4245 / 16965
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

bool Function_90(bool bParam0) //Position: 0x4274 / 17012
{
	if (Function_95(256))
	{
		return 0;
	}
	if (Function_95(262144))
	{
		return 0;
	}
	if (Function_92())
	{
		return 0;
	}
	if (!Function_95(1))
	{
		return 0;
	}
	if (!Function_95(4096))
	{
		return 0;
	}
	if (bParam0 && Function_91(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_95(2048))
	{
		return 0;
	}
	if (Function_75() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_91(int iParam0) //Position: 0x42EA / 17130
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_92() //Position: 0x42FB / 17147
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

bool Function_93(int iParam0) //Position: 0x4314 / 17172
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_94(int iParam0) //Position: 0x432A / 17194
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_95(int iParam0) //Position: 0x433F / 17215
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_96(int iParam0) //Position: 0x435D / 17245
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_97(var uParam0, int iParam1) //Position: 0x4373 / 17267
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_98(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4384 / 17284
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
			Function_99(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_6(StackVal, bVar1, bParam4);
		}
	}
}

void Function_99(int iParam0, int iParam1) //Position: 0x43F6 / 17398
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(iVar0);
	PRINTNL();
	Function_6(iParam0, iVar0, iParam1);
	return;
}

bool Function_100(int iParam0) //Position: 0x441B / 17435
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

bool Function_101(int iParam0) //Position: 0x4438 / 17464
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_102(bool bParam0, float fParam1) //Position: 0x4454 / 17492
{
	if (!Function_101(128))
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

void Function_103(var uParam0, int iParam1) //Position: 0x4492 / 17554
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_104(var uParam0, bool bParam1) //Position: 0x44A1 / 17569
{
	Function_77(uParam0, 2);
	uParam0->f_4 = bParam1;
	return;
}

var Function_105(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x44B3 / 17587
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_106(uParam0);
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
		Function_77(uParam0[iVar05], 1);
	}
	Function_77(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_77(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_77(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_106(int iParam0) //Position: 0x4592 / 17810
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

void Function_107(bool bParam0, bool bParam1, bool bParam2) //Position: 0x45C0 / 17856
{
	if (DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		DECOR_SET_INT(bParam0, "locflag", (64 || DECOR_GET_INT(bParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(bParam0, "locflag", 64);
	}
	DECOR_SET_INT(bParam0, "factionswap", bParam1);
	DECOR_SET_INT(bParam0, "relationship", bParam2);
	return;
}

void Function_108(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x463C / 17980
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

void Function_109(int iParam0) //Position: 0x4717 / 18199
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

var Function_110(bool bParam0, bool bParam1, int iParam2) //Position: 0x4726 / 18214
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_111() //Position: 0x4745 / 18245
{
	var uVar0;
	
	Function_112(3, 3);
	uVar0 = uVar0;
	Local_0 = FIND_NAMED_LAYOUT("ThievesLanding_layout");
	if (!IS_LAYOUTREF_VALID(Local_0))
	{
		Local_0 = CREATE_LAYOUT("ThievesLanding_layout");
	}
	Local_0.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_region", 3, 157,8245f, 77,20833f, 2276,947f, 0.0f, -22,30548f, 0.0f, 89,25361f, 10,78109f, 139,5651f);
	Local_0.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_blacksmt01", 2, 155,0737f, 75,32324f, 2192,331f, 0.0f, 24,30487f, 0.0f, 8,257821f, 3,328563f, 10,61006f);
	Local_0.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_worksh01", 2, 98,48085f, 74,91336f, 2345,588f, 0.0f, 25,29357f, 0.0f, 5,144279f, 2,5817f, 4,15656f);
	Local_0.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_worksh02", 2, 157,0168f, 74,82978f, 2379,273f, 0.0f, 29,80754f, 0.0f, 4,726314f, 2,392609f, 3,92419f);
	Local_0.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_ferryman01", 2, 215,3889f, 74,94729f, 2173,373f, 0.0f, -5,316506f, 0.0f, 5,914793f, 2,659859f, 6,658119f);
	Local_0.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_ferryman04", 2, 207,6205f, 74,71249f, 2190,771f, 0.0f, -38,85465f, 0.0f, 3,912973f, 2,591383f, 3,651981f);
	Local_0.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_pigsty", 3, 121,0913f, 74,47209f, 2221,84f, 0.0f, 20.0f, 0.0f, 4,415372f, 1,538621f, 4,68723f);
	Local_0.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_corral", 3, 132,6118f, 74,85609f, 2205,204f, 0.0f, 37,27501f, 0.0f, 8,423597f, 2,028155f, 9,89547f);
	Local_0.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_bridge01", 2, 123,5683f, 76,1812f, 2258,931f, 0.0f, -18,98038f, 0.0f, 4,802093f, 5,22128f, 41,84421f);
	Local_0.f_96 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_pop_north_set");
	(*&Local_0 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north2", 2, 148,9712f, 74,61581f, 2232,105f, 0.0f, 59,90944f, 0.0f, 29,94332f, 4,137205f, 3,242121f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[0]);
	(*&Local_0 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north3", 3, 161,0608f, 73,28625f, 2199,01f, 0.0f, 20.0f, 0.0f, 11,27883f, 2,028646f, 3,151433f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[1]);
	(*&Local_0 + 40)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north4", 3, 180,1783f, 73,28625f, 2186,629f, 0.0f, 54,99836f, 0.0f, 9,59743f, 2,119859f, 2,339096f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[2]);
	(*&Local_0 + 40)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north5", 3, 170,0913f, 73,28625f, 2192,372f, 0.0f, 51,98636f, 0.0f, 7,597484f, 1,673949f, 3,685028f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[3]);
	(*&Local_0 + 40)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north6", 3, 163,4919f, 74,39963f, 2221,517f, 0.0f, -29,38599f, 0.0f, 4,483838f, 1,278007f, 13,89938f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[4]);
	(*&Local_0 + 40)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north7", 3, 174,3521f, 74,30711f, 2215,813f, 0.0f, 58,73527f, 0.0f, 6,468067f, 1,177251f, 1,650964f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[5]);
	(*&Local_0 + 40)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north8", 3, 208,8567f, 73,79001f, 2175,116f, 0.0f, -3,115066f, 0.0f, 3,412357f, 1,703234f, 11,6397f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[6]);
	(*&Local_0 + 40)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north9", 2, 155,0827f, 75,76617f, 2212,868f, 0.0f, 0.0f, 0.0f, 8,62606f, 5,306758f, 21,52649f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[7]);
	(*&Local_0 + 40)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north10", 2, 170,386f, 75,34389f, 2205,873f, 0.0f, 8,564591f, 0.0f, 6,534302f, 4,662615f, 20,98273f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[8]);
	(*&Local_0 + 40)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north12", 2, 194,8183f, 75,03023f, 2174,369f, 0.0f, 24,81448f, 0.0f, 29,09678f, 4,176528f, 6,199813f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[9]);
	(*&Local_0 + 40)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north13", 2, 201,3135f, 75,03023f, 2151.0f, 0.0f, -17,54939f, 0.0f, 7,605684f, 4,176528f, 7,066369f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[10]);
	(*&Local_0 + 40)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north14", 2, 203,9715f, 75,03023f, 2159,952f, 0.0f, -78,53359f, 0.0f, 18,65768f, 4,176528f, 6,754061f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[11]);
	(*&Local_0 + 40)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_north15", 2, 170,7682f, 73,91237f, 2187,09f, 0.0f, -33,51815f, 0.0f, 19,16839f, 4,176528f, 5,257403f);
	ADD_TO_VOLUME_SET(Local_0.f_96, (*&Local_0 + 40)[12]);
	Local_0.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_pop_south_set");
	(*&Local_0 + 100)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_south1", 3, 131,6314f, 74,36719f, 2317,052f, 0.0f, 6,218808f, 0.0f, 3,231898f, 1,673781f, 6,658037f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[0]);
	(*&Local_0 + 100)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_south2", 3, 126,3273f, 74,67719f, 2294,984f, 0.0f, -0,3511052f, 0.0f, 3,358616f, 1,918939f, 6,924263f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[1]);
	(*&Local_0 + 100)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_south3", 3, 103,02f, 74,46542f, 2279,74f, 0.0f, -8,911319f, 0.0f, 11,79638f, 1,800613f, 2,512699f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[2]);
	(*&Local_0 + 100)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_south4", 3, 134,0428f, 74,78855f, 2289,881f, 0.0f, 2,408496f, 0.0f, 9,666465f, 1,504253f, 1,852265f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[3]);
	(*&Local_0 + 100)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_south6", 2, 138,6402f, 75,12931f, 2310,72f, 0.0f, 5,263243f, 0.0f, 13,18791f, 3,131549f, 2,460358f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[4]);
	(*&Local_0 + 100)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_south7", 2, 143,3963f, 75,07148f, 2305,959f, 0.0f, 32,35434f, 0.0f, 1,811151f, 3,024818f, 8,032286f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[5]);
	(*&Local_0 + 100)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_south8", 2, 140,8847f, 75,43229f, 2295,153f, 0.0f, 3,502279f, 0.0f, 2,536997f, 3,37885f, 15,25817f);
	ADD_TO_VOLUME_SET(Local_0.f_132, (*&Local_0 + 100)[6]);
	Local_0.f_148 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_warehouse_set");
	(*&Local_0 + 136)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_wareho01", 2, 135,1248f, 75,8347f, 2338,297f, 0.0f, 4,759178f, 0.0f, 21,32398f, 4,709299f, 25,56081f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 136)[0]);
	(*&Local_0 + 136)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_office01", 2, 139,8391f, 77,93958f, 2327,406f, 0.0f, 4,699532f, 0.0f, 10,79547f, 3,02961f, 5,482237f);
	ADD_TO_VOLUME_SET(Local_0.f_148, (*&Local_0 + 136)[1]);
	Local_0.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_players_room", 2, 123,8812f, 77,78061f, 2234,642f, 0.0f, -14,37626f, 0.0f, 5,919429f, 2,313397f, 5,384371f);
	Local_0.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_pigfarm_set");
	(*&Local_0 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pigfarm04", 2, 129,0281f, 74,09282f, 2222,838f, 0.0f, -14,37626f, 0.0f, 1,831691f, 3,168309f, 2,649456f);
	ADD_TO_VOLUME_SET(Local_0.f_164, (*&Local_0 + 156)[0]);
	Local_0.f_180 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_pop_crateyard_set");
	(*&Local_0 + 168)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_crates1", 2, 131,0275f, 74,21799f, 2374,853f, 0.0f, 29,39362f, 0.0f, 33,21996f, 2,804292f, 32,51464f);
	ADD_TO_VOLUME_SET(Local_0.f_180, (*&Local_0 + 168)[0]);
	(*&Local_0 + 168)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_crates2", 2, 113,4024f, 74,10799f, 2352,969f, 0.0f, 29,8776f, 0.0f, 19,11635f, 2,806043f, 22,6374f);
	ADD_TO_VOLUME_SET(Local_0.f_180, (*&Local_0 + 168)[1]);
	Local_0.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_pop_northdocks_set");
	(*&Local_0 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks1", 2, 172,1815f, 74,71363f, 2241,527f, 0.0f, -30,73822f, 0.0f, 30,36309f, 2,639271f, 1,591717f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[0]);
	(*&Local_0 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks2", 2, 187,7822f, 74,39242f, 2221,338f, 0.0f, -29,92439f, 0.0f, 3,584551f, 2,939461f, 14,95464f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[1]);
	(*&Local_0 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks3", 2, 162,9147f, 73,76353f, 2247,728f, 0.0f, -29,64138f, 0.0f, 4,707134f, 2,658041f, 16,98589f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[2]);
	(*&Local_0 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks4", 2, 178,1139f, 74,65788f, 2233,946f, 0.0f, 59,87977f, 0.0f, 20,47495f, 2,801744f, 2,671454f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[3]);
	(*&Local_0 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks5", 2, 180,2033f, 74,17239f, 2225,094f, 0.0f, -29,69154f, 0.0f, 8,943483f, 1,715685f, 3,834709f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[4]);
	(*&Local_0 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks6", 2, 194,8357f, 74,28354f, 2221,869f, 0.0f, -29,92439f, 0.0f, 9,852716f, 2,170028f, 2,578543f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[5]);
	(*&Local_0 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks7", 2, 207,1491f, 74,22011f, 2195,217f, 0.0f, -39,65355f, 0.0f, 13,42332f, 2,388399f, 2,713911f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[6]);
	(*&Local_0 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks8", 2, 225,8905f, 74,50317f, 2172,428f, 0.0f, -4,654152f, 0.0f, 13,20809f, 2,179824f, 2,973737f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[7]);
	(*&Local_0 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks9", 2, 218,9882f, 74,71426f, 2192,958f, 0.0f, -38,31281f, 0.0f, 9,433097f, 2,848837f, 5,725534f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[8]);
	(*&Local_0 + 184)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks10", 2, 220,5834f, 74,36482f, 2173,678f, 0.0f, -4,504617f, 0.0f, 3,07258f, 1,787071f, 8,043092f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[9]);
	(*&Local_0 + 184)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks11", 2, 213,7891f, 74,88496f, 2167,769f, 0.0f, 0.0f, 0.0f, 14,8581f, 3,339006f, 3,194078f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[10]);
	(*&Local_0 + 184)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks12", 2, 219,4471f, 74,93797f, 2181,675f, 0.0f, -2,504592f, 0.0f, 2,055929f, 3,388585f, 8,079159f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[11]);
	(*&Local_0 + 184)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks13", 2, 213,2854f, 74,59535f, 2194,456f, 0.0f, 49,89083f, 0.0f, 3,238196f, 2,892637f, 8,673741f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[12]);
	(*&Local_0 + 184)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks14", 2, 197,5356f, 74,17527f, 2207,253f, 0.0f, -35,26958f, 0.0f, 15,30875f, 4,494629f, 3,494829f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[13]);
	(*&Local_0 + 184)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks15", 2, 176,6877f, 74,34927f, 2241,519f, 0.0f, 60,33823f, 0.0f, 3,14028f, 1,720393f, 2,034568f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[14]);
	(*&Local_0 + 184)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks16", 2, 218,5803f, 74,57835f, 2186,756f, 0.0f, 66,9302f, 0.0f, 3,988917f, 2,759111f, 2,043288f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[15]);
	(*&Local_0 + 184)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks17", 2, 205,4821f, 72,42951f, 2134,435f, 0.0f, -15,49101f, 0.0f, 12,13918f, 6,384386f, 3,348497f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[16]);
	(*&Local_0 + 184)[17] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks18", 2, 201,5668f, 73,50565f, 2142,833f, 0.0f, -15,49101f, 0.0f, 17,01977f, 9,259377f, 15,96081f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[17]);
	(*&Local_0 + 184)[18] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_northdocks19", 2, 210,6772f, 72,42951f, 2130,707f, 0.0f, -15,49101f, 0.0f, 4,276744f, 6,384386f, 10,22227f);
	ADD_TO_VOLUME_SET(Local_0.f_264, (*&Local_0 + 184)[18]);
	Local_0.f_352 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_pop_southdocks_set");
	(*&Local_0 + 268)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks1", 2, 156,1884f, 75,67006f, 2291,035f, 0.0f, 2,882253f, 0.0f, 32,14539f, 3,962106f, 7,934261f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[0]);
	(*&Local_0 + 268)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks2", 2, 164,5897f, 75,18113f, 2371,237f, 0.0f, 29,74934f, 0.0f, 16,20259f, 3,630186f, 7,947024f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[1]);
	(*&Local_0 + 268)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks3", 2, 152,9703f, 74,94196f, 2371,393f, 0.0f, 27,99167f, 0.0f, 2,538574f, 3,227758f, 10,06952f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[2]);
	(*&Local_0 + 268)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks4", 2, 148,8927f, 74,99253f, 2338,732f, 0.0f, 2,403996f, 0.0f, 3,074283f, 3,550352f, 34,88313f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[3]);
	(*&Local_0 + 268)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks5", 2, 162,1826f, 74,59475f, 2337,542f, 0.0f, 4,571398f, 0.0f, 2,662015f, 2,993632f, 13,35226f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[4]);
	(*&Local_0 + 268)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks6", 2, 152,1147f, 74,57105f, 2312,998f, 0,05646981f, 4,612943f, 0,04799045f, 10,38041f, 2,962653f, 1,916626f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[5]);
	(*&Local_0 + 268)[6] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks7", 2, 160,6471f, 73,77319f, 2360,302f, 0.0f, 28,09342f, 0.0f, 9,390365f, 2,595971f, 1,685766f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[6]);
	(*&Local_0 + 268)[7] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks8", 2, 155,2133f, 74,94331f, 2333,888f, 0.0f, 4,678422f, 0.0f, 12,1155f, 2,992439f, 5,188836f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[7]);
	(*&Local_0 + 268)[8] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks19", 2, 155,0281f, 74,32098f, 2366,398f, 0.0f, -27,77507f, 0.0f, 1,498345f, 3,33414f, 7,20486f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[8]);
	(*&Local_0 + 268)[9] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks9", 2, 163,1333f, 73,72407f, 2356,023f, 0.0f, -60,03222f, 0.0f, 9,706104f, 2,277886f, 3,192596f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[9]);
	(*&Local_0 + 268)[10] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks10", 2, 145,456f, 75,9418f, 2361,889f, 0.0f, 22,23526f, 0.0f, 2,365049f, 3,247642f, 6,78305f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[10]);
	(*&Local_0 + 268)[11] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks11", 2, 148,8764f, 75,15415f, 2366,036f, 0.0f, -37,07431f, 0.0f, 6,320905f, 3,462404f, 2,525241f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[11]);
	(*&Local_0 + 268)[12] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks12", 2, 145,7576f, 75,34636f, 2354,855f, 0.0f, -20,13278f, 0.0f, 2,153852f, 3,667864f, 8,4843f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[12]);
	(*&Local_0 + 268)[13] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks13", 2, 147,9558f, 74,79824f, 2315,291f, 0.0f, 4,555128f, 0.0f, 2,866811f, 2,667118f, 13,42069f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[13]);
	(*&Local_0 + 268)[14] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks14", 2, 140,1953f, 74,77529f, 2310,54f, 0.0f, 5,202918f, 0.0f, 16,77729f, 3,01864f, 2,360362f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[14]);
	(*&Local_0 + 268)[15] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks15", 2, 162,6083f, 73,82494f, 2313,707f, 0.0f, 5,351533f, 0.0f, 2,939902f, 3,270328f, 13,09575f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[15]);
	(*&Local_0 + 268)[16] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks16", 2, 142,6087f, 75,11625f, 2304,028f, 0.0f, 21,87864f, 0.0f, 1,443187f, 3,094059f, 13,12396f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[16]);
	(*&Local_0 + 268)[17] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks17", 2, 144,7532f, 74,0296f, 2297,847f, 0.0f, 3,632941f, 0.0f, 1,829312f, 3,289502f, 7,645639f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[17]);
	(*&Local_0 + 268)[18] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks18", 2, 169,6506f, 75,50861f, 2302,314f, 0.0f, 3,251671f, 0.0f, 6,457269f, 3,611866f, 14,85462f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[18]);
	(*&Local_0 + 268)[19] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pop_southdocks20", 2, 147,7927f, 74,19041f, 2307,472f, 0.0f, 8,845689f, 0.0f, 1,591461f, 3,528893f, 5,777983f);
	ADD_TO_VOLUME_SET(Local_0.f_352, (*&Local_0 + 268)[19]);
	Local_0.f_368 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_tick_set");
	(*&Local_0 + 356)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_tickets01", 2, 134,6121f, 75,05765f, 2297,663f, 0.0f, 3,155584f, 0.0f, 9,3f, 2,777297f, 6,971455f);
	ADD_TO_VOLUME_SET(Local_0.f_368, (*&Local_0 + 356)[0]);
	(*&Local_0 + 356)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_tickets02", 2, 137,0244f, 74,94027f, 2292,842f, 0.0f, 3,469327f, 0.0f, 3,710651f, 2,530684f, 2,352687f);
	ADD_TO_VOLUME_SET(Local_0.f_368, (*&Local_0 + 356)[1]);
	Local_0.f_384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_stab_set");
	(*&Local_0 + 372)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_stable01", 2, 121,4266f, 74,60543f, 2193,456f, 0.0f, -38,40697f, 0.0f, 11,74311f, 2,650494f, 18,00607f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 372)[0]);
	(*&Local_0 + 372)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_stable02", 2, 115,6494f, 74,49019f, 2188,974f, 0.0f, -37,70505f, 0.0f, 2,51588f, 2,444366f, 7,176547f);
	ADD_TO_VOLUME_SET(Local_0.f_384, (*&Local_0 + 372)[1]);
	Local_0.f_400 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_ferr_set");
	(*&Local_0 + 388)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_ferryman03", 2, 213,2688f, 74,57431f, 2190,573f, 0.0f, -37,15548f, 0.0f, 1,552559f, 2,343711f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_400, (*&Local_0 + 388)[0]);
	(*&Local_0 + 388)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_ferryman02", 2, 213,0947f, 74,77226f, 2187,277f, 0.0f, -39,20383f, 0.0f, 5,891003f, 2,736348f, 4,013329f);
	ADD_TO_VOLUME_SET(Local_0.f_400, (*&Local_0 + 388)[1]);
	Local_0.f_412 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_ver1_set");
	(*&Local_0 + 404)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box1", 2, 146,792f, 77,95094f, 2246,844f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_412, (*&Local_0 + 404)[0]);
	Local_0.f_432 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_saloon_set");
	(*&Local_0 + 416)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_saloon01", 2, 167,3334f, 72,76504f, 2228,25f, 0.0f, -30,02197f, 0.0f, 8,410011f, 7,87994f, 14,35492f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 416)[0]);
	(*&Local_0 + 416)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_saloon02", 2, 169,5157f, 75,0048f, 2236,319f, 0.0f, -31,09248f, 0.0f, 3,782452f, 2,932232f, 2,417991f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 416)[1]);
	(*&Local_0 + 416)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_saloon03", 2, 175,664f, 74,9073f, 2227,199f, 0.0f, -30,36341f, 0.0f, 5,027802f, 2,689279f, 3,169497f);
	ADD_TO_VOLUME_SET(Local_0.f_432, (*&Local_0 + 416)[2]);
	Local_0.f_448 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_tailor_set");
	(*&Local_0 + 436)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_tailor01", 2, 174,9852f, 74,38473f, 2182,238f, 0.0f, -34,22879f, 0.0f, 8,198368f, 2,81773f, 6,801184f);
	ADD_TO_VOLUME_SET(Local_0.f_448, (*&Local_0 + 436)[0]);
	(*&Local_0 + 436)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_tailor02", 2, 178,9408f, 74,89482f, 2184,014f, 0.0f, -34,22879f, 0.0f, 0,2f, 2,470744f, 4,960597f);
	ADD_TO_VOLUME_SET(Local_0.f_448, (*&Local_0 + 436)[1]);
	Local_0.f_468 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_harbor_set");
	(*&Local_0 + 452)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_harbor01", 2, 178,0712f, 74,80824f, 2217,597f, -1,417288f, -30,91833f, 0,1854929f, 4,383923f, 2,767432f, 6,597141f);
	ADD_TO_VOLUME_SET(Local_0.f_468, (*&Local_0 + 452)[0]);
	(*&Local_0 + 452)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_harbor02", 2, 182,5987f, 74,80365f, 2220,344f, 0.0f, -30,42979f, 0.0f, 6,913052f, 2,767432f, 6,563572f);
	ADD_TO_VOLUME_SET(Local_0.f_468, (*&Local_0 + 452)[1]);
	(*&Local_0 + 452)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_harbor03", 2, 185,8507f, 74,42982f, 2216,803f, 0.0f, -29,54564f, 0.0f, 4,152111f, 2,514276f, 2,603718f);
	ADD_TO_VOLUME_SET(Local_0.f_468, (*&Local_0 + 452)[2]);
	Local_0.f_480 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_ver2_set");
	(*&Local_0 + 472)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "Box", 2, 145,6494f, 77,41088f, 2238,687f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
	ADD_TO_VOLUME_SET(Local_0.f_480, (*&Local_0 + 472)[0]);
	Local_0.f_508 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_chickens_set");
	(*&Local_0 + 484)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thi_chicken1", 3, 133,907f, 73,28625f, 2223,728f, 0.0f, 20.0f, 0.0f, 7,688399f, 7,688399f, 7,688399f);
	ADD_TO_VOLUME_SET(Local_0.f_508, (*&Local_0 + 484)[0]);
	(*&Local_0 + 484)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thi_chicken2", 3, 145,2967f, 73,28625f, 2195,21f, 0.0f, 20.0f, 0.0f, 6,056266f, 7,688399f, 10,436f);
	ADD_TO_VOLUME_SET(Local_0.f_508, (*&Local_0 + 484)[1]);
	(*&Local_0 + 484)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thi_chicken3", 3, 161,3603f, 73,28625f, 2209,09f, 0.0f, 20.0f, 0.0f, 7,688399f, 7,688399f, 7,688399f);
	ADD_TO_VOLUME_SET(Local_0.f_508, (*&Local_0 + 484)[2]);
	(*&Local_0 + 484)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thi_chicken4", 3, 191,068f, 73,28625f, 2203,912f, 0.0f, 20.0f, 0.0f, 8,943166f, 8,943166f, 8,943166f);
	ADD_TO_VOLUME_SET(Local_0.f_508, (*&Local_0 + 484)[3]);
	(*&Local_0 + 484)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thi_chicken5", 3, 106,1528f, 73,28625f, 2295,609f, 0.0f, -5,160184f, 0.0f, 19,327f, 7,688399f, 13,47398f);
	ADD_TO_VOLUME_SET(Local_0.f_508, (*&Local_0 + 484)[4]);
	Local_0.f_532 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_fish_set");
	(*&Local_0 + 512)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_fish_01", 3, 107,9999f, 62,3486f, 2252.0f, 0.0f, -20,16817f, 0.0f, 46,7114f, 9,114058f, 13,40402f);
	ADD_TO_VOLUME_SET(Local_0.f_532, (*&Local_0 + 512)[0]);
	(*&Local_0 + 512)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_fish_02", 3, 161,5966f, 64,9888f, 2273,518f, 0.0f, -20,16817f, 0.0f, 26,60962f, 6,602382f, 25,74983f);
	ADD_TO_VOLUME_SET(Local_0.f_532, (*&Local_0 + 512)[1]);
	(*&Local_0 + 512)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_fish_03", 3, 166,6306f, 65,35305f, 2330,964f, 0.0f, -82,76395f, 0.0f, 66,15244f, 6,602382f, 25,74983f);
	ADD_TO_VOLUME_SET(Local_0.f_532, (*&Local_0 + 512)[2]);
	(*&Local_0 + 512)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_fish_04", 3, 200,9797f, 65,33083f, 2229,694f, 0.0f, 223,0254f, 0.0f, 66,15244f, 6,602382f, 25,74983f);
	ADD_TO_VOLUME_SET(Local_0.f_532, (*&Local_0 + 512)[3]);
	Local_0.f_548 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_gunsmith_set");
	(*&Local_0 + 536)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_gunsmith01", 2, 166,4479f, 74,23535f, 2188,54f, 0.0f, -33,61417f, 0.0f, 5,711356f, 4,484836f, 9,172855f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 536)[0]);
	(*&Local_0 + 536)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_gunsmith02", 2, 169,3781f, 75,1996f, 2188,938f, 0.0f, -33,61417f, 0.0f, 0,6203356f, 2,133884f, 6,604735f);
	ADD_TO_VOLUME_SET(Local_0.f_548, (*&Local_0 + 536)[1]);
	Local_0.f_552 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_fff", 2, 161,5258f, 74,70499f, 2293,978f, 0.0f, 92,26971f, 0.0f, 2,852055f, 3,342353f, 6,901263f);
	Local_0.f_568 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_brothel_more_set");
	(*&Local_0 + 556)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_brothel06", 2, 145,4312f, 75,41055f, 2239,007f, 0.0f, -29,94305f, 0.0f, 2,231024f, 8,803533f, 15,85239f);
	ADD_TO_VOLUME_SET(Local_0.f_568, (*&Local_0 + 556)[0]);
	(*&Local_0 + 556)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_brothel07", 2, 151,7391f, 74,98534f, 2242,705f, 0.0f, -29,94305f, 0.0f, 10,28458f, 2,640776f, 10,87477f);
	ADD_TO_VOLUME_SET(Local_0.f_568, (*&Local_0 + 556)[1]);
	Local_0.f_572 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_brothel_rooms", 2, 149,8487f, 78,25007f, 2244,917f, 0.0f, -29,21607f, 0.0f, 11,11006f, 3,394601f, 4,577099f);
	Local_0.f_576 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_blackjack", 2, 171,3108f, 73,64671f, 2224,382f, 0.0f, -30,87644f, 0.0f, 3,569148f, 5,059165f, 2,888656f);
	Local_0.f_580 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_liarsdice", 2, 168,1322f, 73,64671f, 2222,92f, 0.0f, -30,87644f, 0.0f, 4,159747f, 4,159747f, 3,881289f);
	Local_0.f_584 = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_poker", 2, 164,1496f, 73,64671f, 2231,487f, 0.0f, -30,87644f, 0.0f, 4,615512f, 4,615512f, 4,901088f);
	Local_0.f_596 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_brothel1_set");
	(*&Local_0 + 588)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_brothel", 2, 150,4911f, 75,13766f, 2242,012f, 0.0f, -29,94305f, 0.0f, 12,88916f, 8,803533f, 15,34764f);
	ADD_TO_VOLUME_SET(Local_0.f_596, (*&Local_0 + 588)[0]);
	Local_0.f_612 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_toughGuys_set");
	(*&Local_0 + 600)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "toughGuys2", 3, 160,5707f, 74,59276f, 2220,309f, 0.0f, 20.0f, 0.0f, 3,701838f, 2,931919f, 3,701838f);
	ADD_TO_VOLUME_SET(Local_0.f_612, (*&Local_0 + 600)[0]);
	(*&Local_0 + 600)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "toughGuys1", 3, 168,9522f, 74,93501f, 2228,21f, 0.0f, 20.0f, 0.0f, 2,362861f, 1,270516f, 2,316527f);
	ADD_TO_VOLUME_SET(Local_0.f_612, (*&Local_0 + 600)[1]);
	Local_0.f_628 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_birds_set");
	(*&Local_0 + 616)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdPop2", 2, 171,3679f, 80,75795f, 2206,437f, 0.0f, 37,66278f, 0.0f, 134,9081f, 11,5013f, 72,34597f);
	ADD_TO_VOLUME_SET(Local_0.f_628, (*&Local_0 + 616)[0]);
	(*&Local_0 + 616)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "birdPop1", 2, 124,2394f, 82,49654f, 2330,436f, 0.0f, 94,87074f, 0.0f, 143,8678f, 13,00599f, 88,99593f);
	ADD_TO_VOLUME_SET(Local_0.f_628, (*&Local_0 + 616)[1]);
	Local_0.f_644 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_doctor_set");
	(*&Local_0 + 632)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_doctor01", 2, 173,3407f, 75,70671f, 2181,098f, 0.0f, -33,72612f, 0.0f, 11,94255f, 7,309404f, 7,48098f);
	ADD_TO_VOLUME_SET(Local_0.f_644, (*&Local_0 + 632)[0]);
	(*&Local_0 + 632)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_doctor02", 2, 177,9076f, 78,04267f, 2184,987f, 0.0f, -33,72612f, 0.0f, 0,9548771f, 1,689583f, 4,540689f);
	ADD_TO_VOLUME_SET(Local_0.f_644, (*&Local_0 + 632)[1]);
	Local_0.f_660 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_streetSpawn_set");
	(*&Local_0 + 648)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_streetSpawn1", 2, 164,2035f, 73,21194f, 2194,947f, 0.0f, -32,85844f, 0.0f, 46,02656f, 33,92661f, 98,30106f);
	ADD_TO_VOLUME_SET(Local_0.f_660, (*&Local_0 + 648)[0]);
	(*&Local_0 + 648)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_streetSpawn2", 2, 110,2687f, 73,03625f, 2301,83f, 0.0f, -26,29476f, 0.0f, 22,16118f, 15,8923f, 43,49994f);
	ADD_TO_VOLUME_SET(Local_0.f_660, (*&Local_0 + 648)[1]);
	Local_0.f_692 = CREATE_VOLUME_SET_IN_LAYOUT(Local_0, "thiv_pawnshop_set");
	(*&Local_0 + 664)[0] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pawnsh01", 2, 143,1704f, 75,28658f, 2311,763f, 0.0f, 5,286093f, 0.0f, 2,540473f, 1,622967f, 0,4586426f);
	ADD_TO_VOLUME_SET(Local_0.f_692, (*&Local_0 + 664)[0]);
	(*&Local_0 + 664)[1] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pawnsh02", 2, 140,4967f, 74,90644f, 2316,956f, 0.0f, 5,286093f, 0.0f, 11,60371f, 2,53916f, 10,38338f);
	ADD_TO_VOLUME_SET(Local_0.f_692, (*&Local_0 + 664)[1]);
	(*&Local_0 + 664)[2] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pawnsh03", 2, 137,5464f, 75,28658f, 2312,284f, 0.0f, 5,286093f, 0.0f, 2,883379f, 1,622967f, 0,4586426f);
	ADD_TO_VOLUME_SET(Local_0.f_692, (*&Local_0 + 664)[2]);
	(*&Local_0 + 664)[3] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pawnsh04", 2, 134,6031f, 75,12867f, 2314,741f, 0.0f, 5,286093f, 0.0f, 0,3003308f, 1,423614f, 3,293785f);
	ADD_TO_VOLUME_SET(Local_0.f_692, (*&Local_0 + 664)[3]);
	(*&Local_0 + 664)[4] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pawnsh05", 2, 135,1282f, 75,12867f, 2320,417f, 0.0f, 5,286093f, 0.0f, 0,3003308f, 1,423614f, 3,056028f);
	ADD_TO_VOLUME_SET(Local_0.f_692, (*&Local_0 + 664)[4]);
	(*&Local_0 + 664)[5] = CREATE_VOLUME_IN_LAYOUT(Local_0, "thiv_pawnsh06", 2, 146,4621f, 75,30753f, 2317,895f, 0.0f, 5,286093f, 0.0f, 0,3003308f, 1,639946f, 3,849716f);
	ADD_TO_VOLUME_SET(Local_0.f_692, (*&Local_0 + 664)[5]);
	Local_0.f_696 = CREATE_VOLUME_IN_LAYOUT(Local_0, "v_THIAddKO", 2, 171,9999f, 73,51794f, 2232.0f, 0.0f, -29,87128f, 0.0f, 3,811612f, 5,526439f, 9,257933f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos1", 189,071f, 76,102f, 2371,522f, -1,13f, 58,516f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos2", 120,251f, 80,408f, 2404,159f, -6,327f, -21,946f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos3", 83,686f, 75,128f, 2263,773f, -0,747f, -72,009f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos4", 212,498f, 76,362f, 2249,836f, 3,909f, 13,82f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos5", 234,667f, 80,681f, 2188,146f, -8,892f, 115,727f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos6", 47,261f, 74,871f, 2341,825f, 2,419f, -75,984f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos7", 188,877f, 75,248f, 2247,235f, 0,484f, 92,289f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos8", 125,199f, 78,28f, 2239,857f, -5,205f, -62,702f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos9", 172,968f, 75,417f, 2294,387f, -1,214f, 42,594f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_0, "thi_vista_cam_pos10", 173,783f, 75,551f, 2300,971f, 0,37f, 150,334f, 0.0f);
	*(&Local_0 + 700) = { 121,146f, 73,286f, 2312,448f };
	*(&Local_0 + 700 + 12) = { 0.0f, 132,303f, 0.0f };
	Local_0.f_724 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel1", 121,146f, 73,286f, 2312,448f, 0.0f, 132,303f, 0.0f);
	*(&Local_0 + 728) = { 114,742f, 73,286f, 2319,227f };
	*(&Local_0 + 728 + 12) = { 0.0f, -38,61496f, 0.0f };
	Local_0.f_752 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel1", 114,742f, 73,286f, 2319,227f, 0.0f, -38,61496f, 0.0f);
	*(&Local_0 + 756) = { 151,327f, 73,036f, 2220,009f };
	*(&Local_0 + 756 + 12) = { 0.0f, 148,03f, 0.0f };
	Local_0.f_780 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel2", 151,327f, 73,036f, 2220,009f, 0.0f, 148,03f, 0.0f);
	*(&Local_0 + 784) = { 146,572f, 73,286f, 2227,233f };
	*(&Local_0 + 784 + 12) = { 0.0f, -32,77494f, 0.0f };
	Local_0.f_808 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel2", 146,572f, 73,286f, 2227,233f, 0.0f, -32,77494f, 0.0f);
	*(&Local_0 + 812) = { 190,938f, 73,036f, 2183,411f };
	*(&Local_0 + 812 + 12) = { 0.0f, 137,353f, 0.0f };
	Local_0.f_836 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_playerDuel3", 190,938f, 73,036f, 2183,411f, 0.0f, 137,353f, 0.0f);
	*(&Local_0 + 840) = { 184,741f, 73,036f, 2189,819f };
	*(&Local_0 + 840 + 12) = { 0.0f, -45,35883f, 0.0f };
	Local_0.f_864 = CREATE_POINT_IN_LAYOUT(Local_0, "armf_enDuel3", 184,741f, 73,036f, 2189,819f, 0.0f, -45,35883f, 0.0f);
	*(&Local_0 + 868) = { 174,3415f, 71,90105f, 2411,603f };
	*(&Local_0 + 868 + 12) = { 0.0f, -77,5631f, 0.0f };
	Local_0.f_892 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_01", 174,3415f, 71,90105f, 2411,603f, 0.0f, -77,5631f, 0.0f);
	*(&Local_0 + 896) = { 169,2869f, 72,59053f, 2395,41f };
	*(&Local_0 + 896 + 12) = { 0.0f, -49,11977f, 0.0f };
	Local_0.f_920 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_02", 169,2869f, 72,59053f, 2395,41f, 0.0f, -49,11977f, 0.0f);
	*(&Local_0 + 924) = { 160,9603f, 72,34877f, 2383,063f };
	*(&Local_0 + 924 + 12) = { 0.0f, -59,00187f, 0.0f };
	Local_0.f_948 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_03", 160,9603f, 72,34877f, 2383,063f, 0.0f, -59,00187f, 0.0f);
	*(&Local_0 + 952) = { 170,5094f, 73,36586f, 2367,597f };
	*(&Local_0 + 952 + 12) = { 0.0f, -59,00187f, 0.0f };
	Local_0.f_976 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_04", 170,5094f, 73,36586f, 2367,597f, 0.0f, -59,00187f, 0.0f);
	*(&Local_0 + 980) = { 162,9955f, 72,08791f, 2354,723f };
	*(&Local_0 + 980 + 12) = { 0.0f, -59,00187f, 0.0f };
	Local_0.f_1004 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_05", 162,9955f, 72,08791f, 2354,723f, 0.0f, -59,00187f, 0.0f);
	*(&Local_0 + 1008) = { 163,1924f, 73,44358f, 2338,085f };
	*(&Local_0 + 1008 + 12) = { 0.0f, -59,00187f, 0.0f };
	Local_0.f_1032 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_06", 163,1924f, 73,44358f, 2338,085f, 0.0f, -59,00187f, 0.0f);
	*(&Local_0 + 1036) = { 149,1169f, 73,09775f, 2322,514f };
	*(&Local_0 + 1036 + 12) = { 0.0f, -80,08842f, 0.0f };
	Local_0.f_1060 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_07", 149,1169f, 73,09775f, 2322,514f, 0.0f, -80,08842f, 0.0f);
	*(&Local_0 + 1064) = { 173,3731f, 74,22238f, 2308,269f };
	*(&Local_0 + 1064 + 12) = { 0.0f, -80,08842f, 0.0f };
	Local_0.f_1088 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_08", 173,3731f, 74,22238f, 2308,269f, 0.0f, -80,08842f, 0.0f);
	*(&Local_0 + 1092) = { 163,6363f, 72,1502f, 2313,983f };
	*(&Local_0 + 1092 + 12) = { 0.0f, -80,08842f, 0.0f };
	Local_0.f_1116 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_09", 163,6363f, 72,1502f, 2313,983f, 0.0f, -80,08842f, 0.0f);
	*(&Local_0 + 1120) = { 145,7547f, 72,30187f, 2301,504f };
	*(&Local_0 + 1120 + 12) = { 0.0f, -80,08842f, 0.0f };
	Local_0.f_1144 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_010", 145,7547f, 72,30187f, 2301,504f, 0.0f, -80,08842f, 0.0f);
	*(&Local_0 + 1148) = { 144,223f, 73,83006f, 2288,575f };
	*(&Local_0 + 1148 + 12) = { 0.0f, -0,4146861f, 0.0f };
	Local_0.f_1172 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_011", 144,223f, 73,83006f, 2288,575f, 0.0f, -0,4146861f, 0.0f);
	*(&Local_0 + 1176) = { 128,9439f, 72,42185f, 2279,316f };
	*(&Local_0 + 1176 + 12) = { 0.0f, -0,4146861f, 0.0f };
	Local_0.f_1200 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_012", 128,9439f, 72,42185f, 2279,316f, 0.0f, -0,4146861f, 0.0f);
	*(&Local_0 + 1204) = { 96,69703f, 72,54664f, 2253,653f };
	*(&Local_0 + 1204 + 12) = { 0.0f, -0,4146861f, 0.0f };
	Local_0.f_1228 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_013", 96,69703f, 72,54664f, 2253,653f, 0.0f, -0,4146861f, 0.0f);
	*(&Local_0 + 1232) = { 123,789f, 72,82449f, 2258,633f };
	*(&Local_0 + 1232 + 12) = { 0.0f, -0,4146861f, 0.0f };
	Local_0.f_1256 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_014", 123,789f, 72,82449f, 2258,633f, 0.0f, -0,4146861f, 0.0f);
	*(&Local_0 + 1260) = { 111,9999f, 72,28235f, 2236.0f };
	*(&Local_0 + 1260 + 12) = { 0.0f, 141,7191f, 0.0f };
	Local_0.f_1284 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_015", 111,9999f, 72,28235f, 2236.0f, 0.0f, 141,7191f, 0.0f);
	*(&Local_0 + 1288) = { 137,8561f, 72,81793f, 2244,347f };
	*(&Local_0 + 1288 + 12) = { 0.0f, 141,7191f, 0.0f };
	Local_0.f_1312 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_016", 137,8561f, 72,81793f, 2244,347f, 0.0f, 141,7191f, 0.0f);
	*(&Local_0 + 1316) = { 162,2157f, 72,65971f, 2253,01f };
	*(&Local_0 + 1316 + 12) = { 0.0f, 244,458f, 0.0f };
	Local_0.f_1340 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_017", 162,2157f, 72,65971f, 2253,01f, 0.0f, 244,458f, 0.0f);
	*(&Local_0 + 1344) = { 166,8038f, 72,65971f, 2244,803f };
	*(&Local_0 + 1344 + 12) = { 0.0f, 244,458f, 0.0f };
	Local_0.f_1368 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_018", 166,8038f, 72,65971f, 2244,803f, 0.0f, 244,458f, 0.0f);
	*(&Local_0 + 1372) = { 185,0596f, 73,55966f, 2248,912f };
	*(&Local_0 + 1372 + 12) = { 0.0f, 239,6449f, 0.0f };
	Local_0.f_1396 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_019", 185,0596f, 73,55966f, 2248,912f, 0.0f, 239,6449f, 0.0f);
	*(&Local_0 + 1400) = { 184,2704f, 73,20306f, 2229,011f };
	*(&Local_0 + 1400 + 12) = { 0.0f, 141,23f, 0.0f };
	Local_0.f_1424 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_020", 184,2704f, 73,20306f, 2229,011f, 0.0f, 141,23f, 0.0f);
	*(&Local_0 + 1428) = { 198,4751f, 73,29941f, 2224,86f };
	*(&Local_0 + 1428 + 12) = { 0.0f, 240,0101f, 0.0f };
	Local_0.f_1452 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_021", 198,4751f, 73,29941f, 2224,86f, 0.0f, 240,0101f, 0.0f);
	*(&Local_0 + 1456) = { 188,4787f, 73,37904f, 2210,481f };
	*(&Local_0 + 1456 + 12) = { 0.0f, 240,0101f, 0.0f };
	Local_0.f_1480 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_022", 188,4787f, 73,37904f, 2210,481f, 0.0f, 240,0101f, 0.0f);
	*(&Local_0 + 1484) = { 200,085f, 72,26197f, 2199,923f };
	*(&Local_0 + 1484 + 12) = { 0.0f, 240,0101f, 0.0f };
	Local_0.f_1508 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_023", 200,085f, 72,26197f, 2199,923f, 0.0f, 240,0101f, 0.0f);
	*(&Local_0 + 1512) = { 201,4553f, 72,46182f, 2210,378f };
	*(&Local_0 + 1512 + 12) = { 0.0f, 240,0101f, 0.0f };
	Local_0.f_1536 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_024", 201,4553f, 72,46182f, 2210,378f, 0.0f, 240,0101f, 0.0f);
	*(&Local_0 + 1540) = { 213,1302f, 72,97697f, 2200,751f };
	*(&Local_0 + 1540 + 12) = { 0.0f, 240,0101f, 0.0f };
	Local_0.f_1564 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_025", 213,1302f, 72,97697f, 2200,751f, 0.0f, 240,0101f, 0.0f);
	*(&Local_0 + 1568) = { 225,3965f, 73,35677f, 2197,582f };
	*(&Local_0 + 1568 + 12) = { 0.0f, 231,5099f, 0.0f };
	Local_0.f_1592 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_026", 225,3965f, 73,35677f, 2197,582f, 0.0f, 231,5099f, 0.0f);
	*(&Local_0 + 1596) = { 232,1205f, 73,5583f, 2172,583f };
	*(&Local_0 + 1596 + 12) = { 0.0f, 278,1251f, 0.0f };
	Local_0.f_1620 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_027", 232,1205f, 73,5583f, 2172,583f, 0.0f, 278,1251f, 0.0f);
	*(&Local_0 + 1624) = { 212,8745f, 72,65473f, 2156,622f };
	*(&Local_0 + 1624 + 12) = { 0.0f, 278,1251f, 0.0f };
	Local_0.f_1648 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_028", 212,8745f, 72,65473f, 2156,622f, 0.0f, 278,1251f, 0.0f);
	*(&Local_0 + 1652) = { 211,7295f, 73,26682f, 2131,409f };
	*(&Local_0 + 1652 + 12) = { 0.0f, 245,2664f, 0.0f };
	Local_0.f_1676 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_029", 211,7295f, 73,26682f, 2131,409f, 0.0f, 245,2664f, 0.0f);
	*(&Local_0 + 1680) = { 187,7853f, 72,86517f, 2147,021f };
	*(&Local_0 + 1680 + 12) = { 0.0f, 352,7331f, 0.0f };
	Local_0.f_1704 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_030", 187,7853f, 72,86517f, 2147,021f, 0.0f, 352,7331f, 0.0f);
	*(&Local_0 + 1708) = { 175,9999f, 72,3225f, 2136.0f };
	*(&Local_0 + 1708 + 12) = { 0.0f, 281,2891f, 0.0f };
	Local_0.f_1732 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_031", 175,9999f, 72,3225f, 2136.0f, 0.0f, 281,2891f, 0.0f);
	*(&Local_0 + 1736) = { 186,7025f, 72,52797f, 2052,782f };
	*(&Local_0 + 1736 + 12) = { 0.0f, 281,2891f, 0.0f };
	Local_0.f_1760 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_respawn_water_033", 186,7025f, 72,52797f, 2052,782f, 0.0f, 281,2891f, 0.0f);
	*(&Local_0 + 1764) = { 137,2898f, 73,65411f, 2316,914f };
	*(&Local_0 + 1764 + 12) = { 0.0f, 93,67333f, 0.0f };
	Local_0.f_1788 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_store", 137,2898f, 73,65411f, 2316,914f, 0.0f, 93,67333f, 0.0f);
	*(&Local_0 + 1792) = { 126,2348f, 76,257f, 2309,524f };
	*(&Local_0 + 1792 + 12) = { 0.0f, 252,9277f, 0.0f };
	Local_0.f_1816 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store", 126,2348f, 76,257f, 2309,524f, 0.0f, 252,9277f, 0.0f);
	*(&Local_0 + 1820) = { 130,6668f, 76,106f, 2311,561f };
	*(&Local_0 + 1820 + 12) = { 0.0f, 252,9277f, 0.0f };
	Local_0.f_1844 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store", 130,6668f, 76,106f, 2311,561f, 0.0f, 252,9277f, 0.0f);
	*(&Local_0 + 1848) = { 129,3975f, 73,193f, 2308,753f };
	*(&Local_0 + 1848 + 12) = { 0.0f, 252,9277f, 0.0f };
	Local_0.f_1872 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store", 129,3975f, 73,193f, 2308,753f, 0.0f, 252,9277f, 0.0f);
	*(&Local_0 + 1876) = { 131,797f, 73,286f, 2308,278f };
	*(&Local_0 + 1876 + 12) = { 0.0f, 252,9277f, 0.0f };
	Local_0.f_1900 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store", 131,797f, 73,286f, 2308,278f, 0.0f, 252,9277f, 0.0f);
	*(&Local_0 + 1904) = { 175,9791f, 73,47179f, 2183,501f };
	*(&Local_0 + 1904 + 12) = { 0.0f, 203,3782f, 0.0f };
	Local_0.f_1928 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_store1", 175,9791f, 73,47179f, 2183,501f, 0.0f, 203,3782f, 0.0f);
	*(&Local_0 + 1932) = { 176,7663f, 76,257f, 2195,01f };
	*(&Local_0 + 1932 + 12) = { 0.0f, 1,279809f, 0.0f };
	Local_0.f_1956 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store1", 176,7663f, 76,257f, 2195,01f, 0.0f, 1,279809f, 0.0f);
	*(&Local_0 + 1960) = { 177,1958f, 76,106f, 2190,152f };
	*(&Local_0 + 1960 + 12) = { 0.0f, 1,279809f, 0.0f };
	Local_0.f_1984 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store1", 177,1958f, 76,106f, 2190,152f, 0.0f, 1,279809f, 0.0f);
	*(&Local_0 + 1988) = { 174,9771f, 73,193f, 2192,291f };
	*(&Local_0 + 1988 + 12) = { 0.0f, 1,279809f, 0.0f };
	Local_0.f_2012 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store1", 174,9771f, 73,193f, 2192,291f, 0.0f, 1,279809f, 0.0f);
	*(&Local_0 + 2016) = { 173,7238f, 73,286f, 2190,19f };
	*(&Local_0 + 2016 + 12) = { 0.0f, 1,279809f, 0.0f };
	Local_0.f_2040 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store1", 173,7238f, 73,286f, 2190,19f, 0.0f, 1,279809f, 0.0f);
	*(&Local_0 + 2044) = { 166,6709f, 73,48386f, 2186,76f };
	*(&Local_0 + 2044 + 12) = { 0.0f, 195,8555f, 0.0f };
	Local_0.f_2068 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_store2", 166,6709f, 73,48386f, 2186,76f, 0.0f, 195,8555f, 0.0f);
	*(&Local_0 + 2072) = { 171,092f, 73,288f, 2193,133f };
	*(&Local_0 + 2072 + 12) = { 0.0f, 27,08022f, 0.0f };
	Local_0.f_2096 = CREATE_POINT_IN_LAYOUT(Local_0, "return_stand_pos_store2", 171,092f, 73,288f, 2193,133f, 0.0f, 27,08022f, 0.0f);
	*(&Local_0 + 2100) = { 173,1345f, 73,195f, 2194,479f };
	*(&Local_0 + 2100 + 12) = { 0.0f, 27,08022f, 0.0f };
	Local_0.f_2124 = CREATE_POINT_IN_LAYOUT(Local_0, "return_gateway_pos_store2", 173,1345f, 73,195f, 2194,479f, 0.0f, 27,08022f, 0.0f);
	*(&Local_0 + 2128) = { 174,2011f, 76,108f, 2191,587f };
	*(&Local_0 + 2128 + 12) = { 0.0f, 27,08022f, 0.0f };
	Local_0.f_2152 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos2_store2", 174,2011f, 76,108f, 2191,587f, 0.0f, 27,08022f, 0.0f);
	*(&Local_0 + 2156) = { 175,9291f, 76,259f, 2196,149f };
	*(&Local_0 + 2156 + 12) = { 0.0f, 27,08022f, 0.0f };
	Local_0.f_2180 = CREATE_POINT_IN_LAYOUT(Local_0, "camera_cut_pos1_store2", 175,9291f, 76,259f, 2196,149f, 0.0f, 27,08022f, 0.0f);
	*(&Local_0 + 2184) = { 156,3038f, 73,75475f, 2193,409f };
	*(&Local_0 + 2184 + 12) = { 0.0f, 229,9398f, 0.0f };
	Local_0.f_2208 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_blacksmith", 156,3038f, 73,75475f, 2193,409f, 0.0f, 229,9398f, 0.0f);
	*(&Local_0 + 2212) = { 124,1311f, 76,74467f, 2235,329f };
	*(&Local_0 + 2212 + 12) = { 0.0f, 197,4766f, 0.0f };
	Local_0.f_2236 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_house", 124,1311f, 76,74467f, 2235,329f, 0.0f, 197,4766f, 0.0f);
	*(&Local_0 + 2240) = { 165,1226f, 73,75176f, 2227,55f };
	*(&Local_0 + 2240 + 12) = { 0.0f, 59,80434f, 0.0f };
	Local_0.f_2264 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_saloon", 165,1226f, 73,75176f, 2227,55f, 0.0f, 59,80434f, 0.0f);
	*(&Local_0 + 2268) = { 149,6569f, 73,81389f, 2240,985f };
	*(&Local_0 + 2268 + 12) = { 0.0f, 63,98124f, 0.0f };
	Local_0.f_2292 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_brothel", 149,6569f, 73,81389f, 2240,985f, 0.0f, 63,98124f, 0.0f);
	*(&Local_0 + 2296) = { 127,5364f, 73,57987f, 2345,956f };
	*(&Local_0 + 2296 + 12) = { 0.0f, 98,3925f, 0.0f };
	Local_0.f_2320 = CREATE_POINT_IN_LAYOUT(Local_0, "thif_interiorPoint_factory", 127,5364f, 73,57987f, 2345,956f, 0.0f, 98,3925f, 0.0f);
	*(&Local_0 + 2324) = { 126,933f, 73,286f, 2313,945f };
	*(&Local_0 + 2324 + 12) = { 0.0f, 93,67333f, 0.0f };
	Local_0.f_2348 = CREATE_POINT_IN_LAYOUT(Local_0, "horse_pos_store", 126,933f, 73,286f, 2313,945f, 0.0f, 93,67333f, 0.0f);
	*(&Local_0 + 2352) = { 180,694f, 73,149f, 2189,489f };
	*(&Local_0 + 2352 + 12) = { 0.0f, 93,67333f, 0.0f };
	Local_0.f_2376 = CREATE_POINT_IN_LAYOUT(Local_0, "horse_pos_store1", 180,694f, 73,149f, 2189,489f, 0.0f, 93,67333f, 0.0f);
	*(&Local_0 + 2380) = { 180,694f, 73,149f, 2189,489f };
	*(&Local_0 + 2380 + 12) = { 0.0f, 93,67333f, 0.0f };
	Local_0.f_2404 = CREATE_POINT_IN_LAYOUT(Local_0, "horse_pos_store2", 180,694f, 73,149f, 2189,489f, 0.0f, 93,67333f, 0.0f);
	return 1;
}

void Function_112(int iParam0, int iParam1) //Position: 0x8B0D / 35597
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

var Function_113() //Position: 0x8B56 / 35670
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_114(bool bParam0, var uParam1) //Position: 0x8B6B / 35691
{
	if (!Function_101(128))
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

