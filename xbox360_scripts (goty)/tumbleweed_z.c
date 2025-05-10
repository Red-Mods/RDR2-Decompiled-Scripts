//Decompiled with MagicRDR v1.0
//Function Count : 459
//Statics Count : 828
//Natives Count : 648
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	int iLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 8;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 1;
	var uLocal_59 = 13;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = -1;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = false;
	struct<1045> Local_108 = { 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_458(&Var0, 3);
	Function_457();
	if (StackVal && (((((!Global_3421 && bScriptParam_0 == Global_30679[1]) && bScriptParam_0 == Global_30707[1]) && bScriptParam_0 == Global_30707[2]) && bScriptParam_0 == Global_30717[1]) && bScriptParam_0 == Global_30658[0]) == 5)
	{
		bLocal_107 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_3389)
				{
					if (bLocal_107)
					{
						Function_452(&iLocal_11, bScriptParam_0, 0);
					}
					else
					{
						Function_451(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_448())
				{
					Function_447();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_446())
				{
					Function_445();
					Function_444(&(Global_29008[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_441())
				{
					Function_439(bScriptParam_0);
					if (bLocal_107)
					{
						Function_437(&iLocal_11, Function_438(), bScriptParam_0);
						Function_436(&iLocal_11, Function_438());
					}
					Function_444(&(Global_29008[bScriptParam_0]), 16);
					iLocal_5 = 4;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(bLocal_7))
				{
					iLocal_5 = 5;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000005:
				Function_435(&iLocal_8);
				Function_433();
				Function_430(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_429() && Function_428(Global_29155[bScriptParam_010])) && Function_427(&iLocal_11))
				{
					Function_426();
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				else
				{
					iLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_107)
				{
					Function_414(&iLocal_11, bScriptParam_0, Function_438());
				}
				Function_413(bScriptParam_0);
				Function_412();
				Function_411();
				Function_444(&(Global_29008[bScriptParam_0]), 8);
				if (Function_410(&(Global_29008[bScriptParam_0]), 131072))
				{
					Function_409(&(Global_29008[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_408(bScriptParam_0);
				Function_407();
				Function_406(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_401(bScriptParam_0);
				Function_400(64);
				Function_444(&(Global_29008[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_399(Function_438(), bScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
				Function_398(&Var0, 5.0f);
				Function_444(&(Global_29008[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_224(bScriptParam_0);
				if (Function_410(&(Global_29008[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_107)
				{
					Function_110(&iLocal_11, bScriptParam_0);
				}
				Function_75(&iLocal_8, &iLocal_647, Function_109(), bScriptParam_0);
				Function_70(&bLocal_693, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_107)
	{
		Function_55(&iLocal_11, bScriptParam_0);
	}
	Function_53(bScriptParam_0);
	Function_21();
	Function_20();
	Function_19();
	Function_11(&iLocal_8, &iLocal_647);
	Function_10(&bLocal_693);
	Function_6();
	Function_2(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_400(64);
	Function_409(&(Global_29008[bScriptParam_0]), 32);
	Function_409(&(Global_29008[bScriptParam_0]), 64);
	Function_409(&(Global_29008[bScriptParam_0]), 8);
	Function_409(&(Global_29008[bScriptParam_0]), 512);
	Function_409(&(Global_29008[bScriptParam_0]), 16);
	Function_409(&(Global_29008[bScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[bScriptParam_010] + 20, 64);
	Function_398(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C8 / 968
{
	SET_DUST_LEVEL(2);
	return;
}

void Function_2(int iParam0) //Position: 0x3D3 / 979
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x409 / 1033
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x42B / 1067
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x441 / 1089
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x457 / 1111
{
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_370.f_116);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_370.f_116);
	Function_8(1);
	Function_7();
	return;
}

void Function_7() //Position: 0x474 / 1140
{
	RELEASE_LAYOUT_REF(Local_370);
	return;
}

void Function_8(int iParam0) //Position: 0x480 / 1152
{
	if (Function_9(iParam0, 1) && !Function_9(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_9(int iParam0, bool bParam1) //Position: 0x4AD / 1197
{
	return (iParam0 && bParam1) == 0;
}

void Function_10(int iParam0) //Position: 0x4BA / 1210
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

void Function_11(var uParam0, int iParam1) //Position: 0x514 / 1300
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_18(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_17(iParam1[iVar03], 4);
		}
		if (Function_18(iParam1[iVar03], 8))
		{
			Function_12(0, 0, 30);
			Function_17(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_12(bool bParam0, bool bParam1, int iParam2) //Position: 0x56C / 1388
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, iParam2);
		Function_13(Global_16524, bVar0, 1);
	}
	return;
}

void Function_13(int iParam0, bool bParam1, bool bParam2) //Position: 0x652 / 1618
{
	int iVar0;
	
	Function_16(iParam0);
	Function_15(bParam1);
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
	Function_14();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_14() //Position: 0x7CB / 1995
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_15(bool bParam0) //Position: 0x7D7 / 2007
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

void Function_16(int iParam0) //Position: 0x81D / 2077
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

void Function_17(int iParam0, int iParam1) //Position: 0x863 / 2147
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0x87D / 2173
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_19() //Position: 0x89A / 2202
{
	return;
}

void Function_20() //Position: 0x8A0 / 2208
{
	return;
}

void Function_21() //Position: 0x8A6 / 2214
{
	bLocal_6 = 1000;
	Function_27(&Local_784);
	Function_22();
	return;
}

void Function_22() //Position: 0x8BA / 2234
{
	Function_23(&Local_108 + 4);
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_23(int iParam0) //Position: 0x8CC / 2252
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_24(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_24(var uParam0, int iParam1) //Position: 0x8F2 / 2290
{
	if (Function_26(uParam0[iParam13], 4))
	{
		if (Function_26(uParam0[iParam13], 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP((*uParam0)[iParam13]);
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET((*uParam0)[iParam13]);
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR((*uParam0)[iParam13], 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO((*uParam0)[iParam13]);
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, (*uParam0)[iParam13]));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT((*uParam0)[iParam13]);
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*uParam0)[iParam13], 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY((*uParam0)[iParam13]);
					break;
				
				default:
					break;
			}
			Function_25(uParam0[iParam13], 1);
			Function_25(uParam0[iParam13], 2);
			Function_25(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0xA20 / 2592
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_26(var uParam0, int iParam1) //Position: 0xA3A / 2618
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_27(int iParam0) //Position: 0xA57 / 2647
{
	int iVar0;
	
	if (!bLocal_598)
	{
		if (!Function_51(iParam0))
		{
			return;
		}
		if (Function_45(iParam0->f_152))
		{
			return;
		}
	}
	RESET_TREE_TYPE_CLEARING();
	STREAMING_UNLOAD_BOUNDS();
	Function_43();
	Function_23(&bLocal_578);
	if (!Function_51(iParam0) || Global_3421)
	{
		iParam0->f_4 = 1;
	}
	else
	{
		iParam0->f_4 = 14;
	}
	Function_34(iParam0);
	if (Global_3421)
	{
		Function_33(0);
	}
	else
	{
		Function_33(bLocal_598);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iLocal_566[iVar0] == 4294967295 && iLocal_566[iVar0] == 0)
		{
			STREAMING_EVICT_ACTOR(iLocal_566[iVar0], 4294967295);
			iLocal_566[iVar0] = 4294967295;
		}
		iVar0++;
	}
	if (iLocal_572 == 4294967295 && iLocal_572 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_572, 4294967295);
		bLocal_572 = 4294967295;
	}
	if (iLocal_575 == 4294967295 && iLocal_575 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_575, 4294967295);
		bLocal_575 = 4294967295;
	}
	if (iLocal_574 == 4294967295 && iLocal_574 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_574, 4294967295);
		bLocal_574 = 4294967295;
	}
	if (iLocal_573 == 4294967295 && iLocal_573 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_573, 4294967295);
		bLocal_573 = 4294967295;
	}
	if (iLocal_599)
	{
		Function_32(0.0f);
		iLocal_599 = 0;
	}
	Global_3385 = 0;
	if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
	{
		DECOR_REMOVE(Global_34573, "bStartedGY");
	}
	CLEAR_ACTOR_PROOF(Global_34573, 16);
	if (Function_30(Global_30717[0]) && iParam0->f_152 != 0)
	{
		AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	}
	else
	{
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	}
	ENABLE_WEATHER_SPHERE(Function_29(iParam0->f_152), false);
	if (Global_3421)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 7, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 6, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 8, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 10, 20.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 15, 5.0f, 0);
		ADD_ITEM(Function_28(3), Global_34573, 0);
		ADD_ITEM(Function_28(3), Global_34573, 0);
		ADD_ITEM(Function_28(3), Global_34573, 0);
		ADD_ITEM(Function_28(3), Global_34573, 0);
		ADD_ITEM(Function_28(3), Global_34573, 0);
		ADD_ITEM(Function_28(1), Global_34573, 0);
		ADD_ITEM(Function_28(1), Global_34573, 0);
		ADD_ITEM(Function_28(1), Global_34573, 0);
		ADD_ITEM(Function_28(1), Global_34573, 0);
		ADD_ITEM(Function_28(1), Global_34573, 0);
		ADD_ITEM(Function_28(20), Global_34573, 0);
	}
	if (Global_3421)
	{
		DESTROY_LAYOUT(bLocal_622);
		CLEAR_ALL_CORPSES();
	}
	else
	{
		RELEASE_LAYOUT_REF(bLocal_622);
	}
	return;
}

var Function_28(bool bParam0) //Position: 0xCB8 / 3256
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

int Function_29(int iParam0) //Position: 0xDA9 / 3497
{
	switch (iParam0)
	{
		case 0x00000000:
			return 31;
			break;
		
		case 0x00000001:
			return 30;
			break;
		
		case 0x00000002:
			return 32;
			break;
		
		case 0x00000003:
			return 33;
			break;
		
		case 0x00000004:
			return 29;
			break;
	}
	LOG_ERROR("should not be here");
	return 31;
}

bool Function_30(bool bParam0) //Position: 0xE0C / 3596
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_30707[2] || bParam0 != Global_30707[1]) || bParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[bParam0];
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || Function_31(bParam0));
}

bool Function_31(int iParam0) //Position: 0xE7F / 3711
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

void Function_32(int iParam0) //Position: 0xE9C / 3740
{
	Global_16524.f_24 = iParam0;
	SET_RAIN_AMOUNT(Global_16524.f_24);
	return;
}

void Function_33(bool bParam0) //Position: 0xEB1 / 3761
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (IS_OBJECT_VALID(Local_628[iVar04]))
		{
			if (bParam0)
			{
				RELEASE_OBJECT_REF(Local_628[iVar04]);
			}
			else
			{
				DESTROY_OBJECT(Local_628[iVar04]);
			}
		}
		Local_628[iVar04].f_4 = 0;
		iVar0++;
	}
	if (IS_OBJECT_VALID(Local_624))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(Local_624);
		}
		else
		{
			DESTROY_OBJECT(Local_624);
		}
	}
	Local_624.f_4 = 0;
	return;
}

void Function_34(int iParam0) //Position: 0xF1F / 3871
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		Function_35(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0));
		bVar0++;
	}
	if (IS_ACTOR_VALID(bLocal_600))
	{
		SET_ACTOR_INVULNERABILITY(bLocal_600, 0);
		Function_35(bLocal_600);
	}
	return;
}

void Function_35(bool bParam0) //Position: 0xF62 / 3938
{
	Function_36(bParam0, 1);
	SET_ACTOR_HEALTH(bParam0, 0.0f);
	return;
}

void Function_36(bool bParam0, bool bParam1) //Position: 0xF74 / 3956
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(bParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, false);
		}
		else
		{
			if (((Function_42() || Function_41(bParam0)) || Function_40(bParam0)) || Function_39(bParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(bParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), "head", &vVar0))
			{
				bVar3 = CREATE_VOLUME_IN_LAYOUT(bParam0, Function_38(), 2, vVar0, 0.0f, 0.0f, 0.0f, 0.5f, 0.5f, 0.5f);
				RESET_RMPTFX_IN_VOLUME(bVar3);
				DESTROY_VOLUME(bVar3);
			}
			if (DECOR_CHECK_EXIST(bParam0, "oLeftEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(bParam0, "oRightEyeGlow"))
			{
				bVar4 = DECOR_GET_OBJECT(bParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(bVar4))
				{
					UNK_0x1A59E608(bVar4);
				}
				DECOR_REMOVE(bParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(bParam0, "Zombie_NoHead", true);
			Function_37();
			bVar5 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_38(), "blood_zombie_shotgun_exit", "head", bParam0, Function_37(), bParam0);
			if (IS_OBJECT_VALID(bVar5))
			{
				Function_37();
				UNK_0x6745191B(bVar5, Function_37());
			}
		}
	}
	return;
}

vector3 Function_37() //Position: 0x113F / 4415
{
	return 0.0f, 0.0f, 0.0f;
}

var Function_38() //Position: 0x1148 / 4424
{
	int iVar0;
	
	return iVar0;
}

bool Function_39(bool bParam0, int iParam1) //Position: 0x1150 / 4432
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_40(bool bParam0) //Position: 0x1192 / 4498
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_41(bool bParam0) //Position: 0x11B2 / 4530
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_42() //Position: 0x11D2 / 4562
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_43() //Position: 0x11E5 / 4581
{
	Local_559.f_12 = 0;
	Local_559.f_8 = 0;
	Local_559 = 0.0f;
	Function_44(&Local_559 + 4, 3);
	UI_HIDE("XPMultiplierSP");
	return;
}

void Function_44(int iParam0, int iParam1) //Position: 0x1218 / 4632
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(int iParam0) //Position: 0x122B / 4651
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (Global_3421)
	{
		return 0;
	}
	bVar0 = Function_46(Function_50(iParam0));
	iVar1 = CONVERT_TIME_OF_DAY_TO_INT(bVar0);
	bVar2 = MAKE_TIME_OF_DAY(24, false, 0);
	iVar3 = CONVERT_TIME_OF_DAY_TO_INT(bVar2);
	iVar4 = CONVERT_TIME_OF_DAY_TO_INT(GET_TIME_OF_DAY());
	if ((iVar4 - iVar1) <= iVar3)
	{
		return 1;
	}
	return 0;
}

var Function_46(int iParam0) //Position: 0x126F / 4719
{
	if (!Function_47(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, 0);
	}
	return Global_13172[iParam011].f_36;
}

bool Function_47(int iParam0) //Position: 0x128E / 4750
{
	if (!Function_49(iParam0))
	{
		return 0;
	}
	if (!Function_48(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_48(int iParam0) //Position: 0x12B2 / 4786
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_49(int iParam0) //Position: 0x12C7 / 4807
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_50(int iParam0) //Position: 0x12DE / 4830
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

bool Function_51(int iParam0) //Position: 0x13A0 / 5024
{
	if (Global_3421)
	{
		return 1;
	}
	switch (iParam0->f_152)
	{
		case 0x00000000:
			if (Function_52(4) && !Global_3382)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if ((Function_52(4) && Function_52(6)) && !Global_3382)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (Function_52(26) && !Global_3382)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_52(int iParam0) //Position: 0x1418 / 5144
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_53(bool bParam0) //Position: 0x142D / 5165
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (Function_410(&(Global_29008[bParam0]), 0x20000000))
	{
		Function_409(&(Global_29008[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_IN_LAYOUT(bVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar0, 15);
			START_OBJECT_ITERATOR(bVar0);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar2)))
				{
					DEREFERENCE_ACTOR(bVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar2);
					TASK_CLEAR(bVar2);
				}
				bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
			}
			DESTROY_ITERATOR(bVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_30(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_54(1));
		}
	}
	return;
}

bool Function_54(int iParam0) //Position: 0x14D4 / 5332
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(int iParam0, int iParam1) //Position: 0x14F0 / 5360
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_5(iParam1) || Function_9(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_58(iParam0, &Global_6298, iParam1);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_58(iParam0, &Global_6364, iParam1);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_58(iParam0, &Global_6351, iParam1);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_58(iParam0, &Global_6402, iParam1);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_58(iParam0, &Global_6433, iParam1);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_58(iParam0, &Global_6537, iParam1);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_58(iParam0, &Global_6563, iParam1);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_58(iParam0, &Global_6614, iParam1);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_58(iParam0, &Global_6643, iParam1);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_58(iParam0, &Global_6667, iParam1);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_58(iParam0, &Global_6654, iParam1);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_58(iParam0, &Global_6709, iParam1);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_58(iParam0, &Global_6764, iParam1);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_58(iParam0, &Global_6785, iParam1);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_58(iParam0, &Global_6815, iParam1);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_58(iParam0, &Global_6866, iParam1);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_58(iParam0, &Global_6490, iParam1);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_58(iParam0, &Global_6933, iParam1);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_58(iParam0, &Global_6962, iParam1);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_58(iParam0, &Global_7002, iParam1);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_58(iParam0, &Global_6987, iParam1);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_58(iParam0, &Global_7171, iParam1);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_58(iParam0, &Global_7148, iParam1);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_58(iParam0, &Global_7113, iParam1);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_58(iParam0, &Global_7035, iParam1);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_58(iParam0, &Global_7032, iParam1);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_53(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_3380)
	{
		Function_56(iParam1);
	}
	return;
}

void Function_56(int iParam0) //Position: 0x1836 / 6198
{
	char* cVar0;
	
	if (Global_3380 || Function_54(0x8000000))
	{
		return;
	}
	cVar0 = Function_57(iParam0);
	if (Function_30(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

var Function_57(int iParam0) //Position: 0x189A / 6298
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_30679[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30707[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30723[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30685[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30685[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30685[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30693[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30707[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30640[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30640[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30640[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_30658[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30658[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30679[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return iVar0;
}

void Function_58(int iParam0, var uParam1, int iParam2) //Position: 0x1BC7 / 7111
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (!IS_ACTOR_VALID(bVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(bVar1))
		{
		}
		else
		{
			Function_69(uParam1[iVar02], 4);
		}
		if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
		{
			DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
		}
		iVar0++;
	}
	if (!Function_30(iParam2))
	{
		Global_13172[iParam0->f_36411].f_32 = 0.0f;
		if (!Function_68(Global_76846, 0x4000000))
		{
			Function_63(Global_34573, 0x4000000, 1, 0);
		}
	}
	else if (Function_9(iParam0->f_356, 32))
	{
		if (!Function_68(Global_76846, 8388608))
		{
			Function_63(Global_34573, 8388608, 1, 0);
		}
	}
	else if (!Function_68(Global_76846, 4194304))
	{
		Function_63(Global_34573, 4194304, 1, 0);
	}
	Function_61(iParam0, 0, 0);
	DESTROY_OBJECT(*iParam0);
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRifles"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumPistols"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(StackVal, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(StackVal, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	Function_23(iParam0 + 192);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_59(iParam2, Function_30(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_54(1));
	return;
}

void Function_59(int iParam0, bool bParam1) //Position: 0x1E81 / 7809
{
	if (!Function_5(iParam0))
	{
		return;
	}
	if (bParam1 && Function_60("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_30640[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30640[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30658[4])
	{
	}
	else if (iParam0 == Global_30668[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_52(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30668[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30679[1])
	{
	}
	else if (iParam0 == Global_30679[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30685[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30693[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[1])
	{
	}
	else if (iParam0 == Global_30707[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30707[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[0])
	{
	}
	else if (iParam0 == Global_30723[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30723[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_30717[1])
	{
	}
	return;
}

int Function_60(bool bParam0) //Position: 0x25D7 / 9687
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_61(var uParam0, bool bParam1, bool bParam2) //Position: 0x25F6 / 9718
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_62(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_62(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2672 / 9842
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_63(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x268C / 9868
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_65(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_64(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_64(char* cParam0, int iParam1) //Position: 0x26F8 / 9976
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

bool Function_65(bool bParam0, var uParam1, int iParam2) //Position: 0x272F / 10031
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
		if (Function_67(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_66(uVar0))
		{
			case 0x00000002:
				if (!Function_68(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_66(char* cParam0) //Position: 0x27A7 / 10151
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

int Function_67(int iParam0) //Position: 0x2848 / 10312
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_44(&iVar1, 2147483648);
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

bool Function_68(var uParam0, int iParam1) //Position: 0x2885 / 10373
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_69(var uParam0, int iParam1) //Position: 0x2898 / 10392
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_70(var uParam0, bool bParam1) //Position: 0x28AF / 10415
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
	
	bVar6 = Function_74();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_73((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_72(uParam0[iVar05], 16384);
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
								Function_71(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_72(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_109(), uParam0[iVar05]->f_12))
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
								Function_71(uParam0[iVar05], 1);
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
							Function_71(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_72(uParam0[iVar05], 1);
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
					Function_71(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_71(uParam0[iVar05], 1);
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
					Function_72(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_72(uParam0[iVar05], 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_109(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_109(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_72(uParam0[iVar05], 32768);
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

void Function_71(var uParam0, int iParam1) //Position: 0x2C7B / 11387
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_72(var uParam0, int iParam1) //Position: 0x2C8C / 11404
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_73(int iParam0, bool bParam1) //Position: 0x2CA6 / 11430
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_74() //Position: 0x2CB8 / 11448
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_75(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2CC1 / 11457
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
		if (Function_76(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_76(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x2D42 / 11586
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_108(iParam0))
	{
		return 0;
	}
	Function_409(&(Global_29008[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (bVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
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
					if (!Function_18(iParam0, 2))
					{
						if (!Function_18(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_106(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_105(iParam0, 8);
							}
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (Function_18(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_12(0, 0, 0);
						}
						else
						{
							Function_12(0, 0, 30);
						}
						Function_17(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_18(iParam0, 2))
					{
						if (!Function_18(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_105(iParam0, 4);
							}
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (Function_18(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_17(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_104(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_103(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_18(iParam0, 2))
					{
						if (!Function_18(iParam0, 16))
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
							if (Function_74())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_105(iParam0, 16);
								Function_95(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (Function_18(iParam0, 16))
					{
						Function_17(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_18(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_18(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_105(iParam0, 2);
			}
			else
			{
				Function_17(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_410(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_18(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_94(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_105(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_93(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_77(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_77(int iParam0) //Position: 0x315B / 12635
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_410(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_444(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_82(473, 1, 0, 0);
		iVar0 = Function_81(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_82(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_82(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_82(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_80(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_80(7, 30);
	}
	if (Function_79(473) <= Function_78(473))
	{
		if (!Function_74())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_78(int iParam0) //Position: 0x325A / 12890
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_79(int iParam0) //Position: 0x3297 / 12951
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_80(int iParam0, bool bParam1) //Position: 0x32D0 / 13008
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

var Function_81(int iParam0) //Position: 0x3337 / 13111
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

int Function_82(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x338F / 13199
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
	Function_92(iParam0, TO_FLOAT(bParam1), 1);
	Function_91(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_83(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x35AF / 13743
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_78(390))), 32);
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
					bVar19 = (Function_79(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_79(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_89(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_87(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_84(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_38(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_84(int iParam0) //Position: 0x3BDC / 15324
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_85(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3BED / 15341
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_86("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_86(char* cParam0, bool bParam1) //Position: 0x3CE2 / 15586
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_87(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3CFB / 15611
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_73(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_88(Function_73(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_88(int iParam0, int iParam1) //Position: 0x3D60 / 15712
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_89(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3D72 / 15730
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
	if (((Function_90(iParam0) != 19 || Function_90(iParam0) != 17) || Function_90(iParam0) != 10) || Function_90(iParam0) != 9)
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

int Function_90(int iParam0) //Position: 0x3EA2 / 16034
{
	return Global_35278[iParam020].f_48;
}

void Function_91(int iParam0) //Position: 0x3EB1 / 16049
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

int Function_92(int iParam0, bool bParam1, bool bParam2) //Position: 0x404D / 16461
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
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

void Function_93(var uParam0, int iParam1) //Position: 0x4291 / 17041
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_94(struct<5> Param0) //Position: 0x429E / 17054
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_95(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x42C4 / 17092
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_102(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_101(iParam1))
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
	if (!Function_98(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_38(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_96();
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

void Function_96() //Position: 0x4554 / 17748
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_97(bVar0, iVar1);
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

void Function_97(bool bParam0, bool bParam1) //Position: 0x45B7 / 17847
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

bool Function_98(bool bParam0) //Position: 0x45E6 / 17894
{
	if (Function_103(256))
	{
		return 0;
	}
	if (Function_103(262144))
	{
		return 0;
	}
	if (Function_100())
	{
		return 0;
	}
	if (!Function_103(1))
	{
		return 0;
	}
	if (!Function_103(4096))
	{
		return 0;
	}
	if (bParam0 && Function_99(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_103(2048))
	{
		return 0;
	}
	if (Function_74() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_99(int iParam0) //Position: 0x465C / 18012
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_100() //Position: 0x466D / 18029
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

bool Function_101(int iParam0) //Position: 0x4686 / 18054
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_102(int iParam0) //Position: 0x469C / 18076
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_103(int iParam0) //Position: 0x46B1 / 18097
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_104(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x46CF / 18127
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

void Function_105(int iParam0, int iParam1) //Position: 0x4773 / 18291
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_106(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x4784 / 18308
{
	int iVar0;
	bool bVar1;
	
	Function_16(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_107(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, iParam3);
			Function_13(StackVal, bVar1, bParam4);
		}
	}
}

void Function_107(int iParam0, int iParam1) //Position: 0x47F6 / 18422
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_16(iParam0);
	Function_15(iVar0);
	PRINTNL();
	Function_13(iParam0, iVar0, iParam1);
	return;
}

bool Function_108(int iParam0) //Position: 0x481B / 18459
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

var Function_109() //Position: 0x4838 / 18488
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_110(int iParam0, bool bParam1) //Position: 0x484D / 18509
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	vector3 vVar14;
	struct<5> Var17;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	
	if (DECOR_CHECK_EXIST(Global_34573, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(Global_34573, "QM_TriggerAttack");
		Function_44(iParam0 + 356, 16);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		if (iParam0->f_364 == 4294967295)
		{
			iParam0->f_364 = Function_219(0, bParam1, 3);
		}
		if (!Function_9(iParam0->f_356, 64))
		{
			iParam0->f_188 = 8;
		}
	}
	else if (bParam1 != Global_30717[1] || HUD_IS_FADED())
	{
		if (!Function_9(iParam0->f_356, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_218(1, 0));
			Function_217(iParam0 + 356, 0x20000000);
		}
		return;
	}
	if (Function_9(iParam0->f_356, 16))
	{
		Function_216(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_9(iParam0->f_356, 4))
	{
		return;
	}
	if (Global_3380 && !Function_9(iParam0->f_356, 4))
	{
		Function_217(iParam0 + 356, 4);
		Function_55(iParam0, bParam1);
		DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
		Function_215(0, 4294967295);
		Function_214();
		Function_53(bParam1);
		return;
	}
	fVar0 = Function_212(Function_213(bParam1));
	fVar1 = Function_211(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (iParam0->f_360 == 4294967295)
	{
		iParam0->f_360 = Function_219(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			bVar4 = (*iParam0 + 4)[iVar35];
			if (IS_ACTOR_ALIVE(bVar4))
			{
				Function_210(iParam0 + 4[iVar35]);
			}
			iVar3++;
		}
		Function_209(iParam0);
		iParam0->f_188 = 7;
		return;
	}
	if (Function_208(Function_213(bParam1)))
	{
		if (((iParam0->f_188 > 7 && !Function_9(iParam0->f_356, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
		{
			if (Function_9(iParam0->f_356, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_205(iParam0, 0);
				Function_210(iParam0 + 168);
				iVar5 = 0;
				while (StackVal < (iVar5 - 1))
				{
					Function_210(iParam0 + 4[iVar55]);
					iVar5++;
				}
				Function_217(iParam0 + 356, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_216(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0.5f);
				Function_8(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(Global_34573, "nDecayRate", 3);
				iParam0->f_188 = 5;
			}
			else
			{
				Function_203();
			}
		}
		if (DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(Global_34573, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(Global_34573, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (iParam0->f_188 <= 1 && iParam0->f_188 >= 6)
		{
			if (iParam0->f_188 >= 1)
			{
				Function_199(iParam0, bParam1, fVar2);
			}
			if (!Function_9(iParam0->f_356, 131072))
			{
				if (iParam0->f_188 == 6 && iParam0->f_188 < 1)
				{
					if ((Global_3386 && !Function_9(iParam0->f_356, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_217(iParam0 + 356, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar6 = Function_211(bParam1);
						fVar7 = (fVar6 % 10.0f);
						bVar8 = (fVar6 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar7 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar8));
						UI_REFRESH("ZMeter");
					}
					if (((Function_9(iParam0->f_356, 32768) && !DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && iParam0->f_188 > 5)
					{
						Function_209(iParam0);
					}
				}
			}
		}
	}
	Function_197(iParam0, bParam1);
	if (Function_9(iParam0->f_356, 1024))
	{
		Function_196(iParam0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_63096)
	{
		if (!Function_9(iParam0->f_356, 16384))
		{
			Function_217(iParam0 + 356, 16384);
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 0);
				iVar9++;
			}
		}
	}
	else if (Function_9(iParam0->f_356, 16384))
	{
		Function_44(iParam0 + 356, 16384);
		iVar9 = 0;
		while (StackVal < (iVar9 - 1))
		{
			MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 1);
			iVar9++;
		}
	}
	if (Function_9(iParam0->f_356, 262144))
	{
		if (Function_427(iParam0))
		{
			Function_44(iParam0 + 356, 262144);
			Function_194(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_30616, bParam1, *iParam0);
			if (!Function_30(bParam1))
			{
				if (!Function_9(iParam0->f_356, 8))
				{
					Function_217(iParam0 + 356, 8);
					Function_193();
				}
			}
		}
	}
	if (Function_9(iParam0->f_356, 524288))
	{
		if (Function_193())
		{
			Function_217(iParam0 + 356, 8);
			Function_44(iParam0 + 356, 524288);
		}
	}
	switch (iParam0->f_188)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_68(Global_76846, 65536) || !Global_3365)) && Global_3386) && !Global_3385)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					DECOR_REMOVE(Global_34573, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
				}
				Function_185(iParam0);
				Function_217(iParam0 + 356, 262144);
				if (Function_30(bParam1))
				{
					if ((RAND_INT_RANGE(false, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_451(bParam1, 1);
					Function_179(bParam1);
					Function_215(0, 4294967295);
					Function_216(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_9(iParam0->f_356, 1))
					{
						Function_178(iParam0, bParam1);
						Function_177("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iParam0->f_188 = 2;
					}
					else
					{
						iParam0->f_188 = 4;
					}
					Function_174("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_451(bParam1, 0);
					Function_179(bParam1);
					Function_217(iParam0 + 356, 2);
					Function_215(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					iParam0->f_368 = 1000.0f;
					iParam0->f_188 = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_168(iParam0 + 168, 1, iParam0 + 356))
			{
				SET_ANIM_SET_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo", 0);
				iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(iParam0->f_168));
				if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(iParam0->f_168, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_136(iParam0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(iParam0->f_168, "GET_US_AMMO_P", Global_34573, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				iParam0->f_188 = 3;
			}
			break;
		
		case 0x00000003:
			bVar11 = false;
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				bVar12 = (*iParam0 + 4)[iVar95];
				if (IS_ACTOR_ALIVE(bVar12))
				{
					if (Function_9((iParam0 + 4[iVar95])->f_16, 2))
					{
						if (DECOR_CHECK_EXIST(bVar12, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(bVar12, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(bVar12, "nUC_NoAmmo"));
								DECOR_REMOVE(bVar12, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(bVar12, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_168(iParam0 + 4[iVar95], 0, iParam0 + 4[iVar95] + 16))
						{
							RELEASE_SCRIPT_USE_CONTEXT(StackVal);
							iVar13 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar12));
							Global_13172[iParam0->f_36411].f_32 = (Global_13172[iParam0->f_36411].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR((*iParam0 + 4)[iVar95]);
							Function_125(iParam0 + 4[iVar95], iVar13);
							Function_44(iParam0 + 4[iVar95] + 16, 2);
							Function_217(iParam0 + 4[iVar95] + 16, 16);
						}
						bVar11++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar12, "DLC_give_ammo") && Function_9((iParam0 + 4[iVar95])->f_16, 16)) && (GET_TASK_STATUS(bVar12, 6) != 0 || GET_TASK_STATUS(bVar12, 6) != 2))
					{
						Function_44(iParam0 + 4[iVar95] + 16, 16);
						AI_CLEAR_DONT_HARM_ACTOR(bVar12);
						AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
						SET_MOVER_FROZEN(bVar12, 0);
						RESET_ANIM_SET_FOR_ACTOR(bVar12, 1);
						vVar14 = { 0.0f, 0.0f, 0.0f };
						Var17 = { 0.0f, 0.0f, 0.0f };
						GET_OBJECT_POSITION(StackVal, &vVar14);
						GET_OBJECT_ORIENTATION(StackVal, &Var17);
						TASK_PRIORITY_SET(bVar12, 1);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar12, &vVar14, -1f);
						strcpy(&cVar20, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(bVar12))
						{
							stradd(&cVar20, "M", 64);
						}
						else
						{
							stradd(&cVar20, "F", 64);
						}
						if (Function_124(bVar12))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "THANKS_FOR_AMMO_P", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(bVar12, "nTHANK_YOU", Global_34573, &cVar20, 1, 1, 2, 0);
						}
						iParam0->f_372 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(bVar12))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
					{
						DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
					}
				}
				iVar9++;
			}
			if (Global_30842[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar11);
				PRINTNL();
			}
			if (bVar11 == 0)
			{
				iParam0->f_188 = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(Global_34573, "bNoSurvivorHelp", true);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "nDecayRate"))
			{
				bVar36 = DECOR_GET_INT(Global_34573, "nDecayRate");
				if (bVar36 == 3)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.5f);
				}
				else if (bVar36 == 2)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.75f);
				}
				else if (bVar36 == 1)
				{
					DECOR_REMOVE(Global_34573, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_8(1);
			if (Function_119(iParam0))
			{
				DECOR_SET_FLOAT(Global_34573, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_118(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				iParam0->f_188 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_352) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_216(bParam1, 300.0f);
			}
			else
			{
				Function_216(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_9(iParam0->f_356, 8))
			{
				Function_217(iParam0 + 356, 8);
				Function_193();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
			{
				DECOR_REMOVE(Global_34573, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
			}
			Function_117(bParam1);
			Function_116(iParam0);
			Function_205(iParam0, 1);
			Function_53(Global_29006);
			iParam0->f_364 = Function_219(0, bParam1, 3);
			Function_217(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			Function_217(iParam0 + 356, 512);
			if (!Function_9(Global_13172[iParam0->f_36411].f_24, 1))
			{
				bVar37 = Function_113(Function_213(bParam1));
				Function_82(660, bVar37, 0, 0);
				Function_217(&Global_13172[iParam0->f_36411] + 24, 1);
			}
			iParam0->f_188 = 11;
			break;
		
		case 0x00000008:
			Function_452(iParam0, bParam1, 1);
			Function_437(iParam0, Global_30616, bParam1);
			Function_436(iParam0, Global_30616);
			iParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_427(iParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_414(iParam0, bParam1, Global_30616);
					iParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_414(iParam0, bParam1, Global_30616);
					DECOR_SET_FLOAT(Global_34573, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(Global_34573, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR((*iParam0 + 4)[25], "tense_with_guns");
					iParam0->f_188 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(Global_34573, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(Global_34573, "Special_BLK_Ready");
				Function_136(iParam0, bParam1);
				Function_185(iParam0);
				Function_217(iParam0 + 356, 262144);
				Function_451(bParam1, 1);
				Function_217(&Global_13172[Function_219(111, 111, 5)11] + 20, 4);
				Function_179(bParam1);
				Function_215(0, 4294967295);
				Function_216(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], 0);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], 0);
				iParam0->f_188 = 3;
			}
			break;
	}
	iVar9 = 0;
	while (StackVal < (iVar9 - 1))
	{
		bVar38 = (*iParam0 + 4)[iVar95];
		if (IS_ACTOR_VALID(bVar38))
		{
			if (!IS_ACTOR_ALIVE(bVar38))
			{
				if (!DECOR_CHECK_EXIST(bVar38, "DeathTallied"))
				{
					DECOR_SET_BOOL(bVar38, "DeathTallied", true);
					Global_13172[iParam0->f_36411].f_28 = (Global_13172[iParam0->f_36411].f_28 + 1.0f);
					if (Function_9(Global_13172[iParam0->f_36411].f_24, 1))
					{
						Function_112(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (DECOR_CHECK_EXIST((*iParam0 + 4)[iVar95], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT((*iParam0 + 4)[iVar95], "nUC_NoAmmo"));
				}
				if (bVar38 == iParam0->f_168)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
					{
						RELEASE_SCRIPT_USE_CONTEXT(StackVal);
					}
					if (iParam0->f_188 <= 7)
					{
						if ((!GET_LAST_ATTACKER(bVar38) != Global_34573 && iParam0->f_188 != 2) && !Function_9(iParam0->f_356, 8192))
						{
							Function_217(iParam0 + 356, 8192);
							Function_174("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar39 = 0;
							while (StackVal < (iVar39 - 1))
							{
								Function_210(iParam0 + 4[iVar395]);
								SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar395], true);
								iVar39++;
							}
							if (iParam0->f_188 <= 4)
							{
								iParam0->f_188 = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID((iParam0 + 4[iVar95])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar95])->f_12);
				}
			}
			if (GET_LAST_ATTACKER(bVar38) != Global_34573 && !Function_9(iParam0->f_356, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
				{
					RELEASE_SCRIPT_USE_CONTEXT(StackVal);
				}
				iVar40 = 0;
				while (StackVal < (iVar40 - 1))
				{
					Function_210(iParam0 + 4[iVar405]);
					SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar405], true);
					MEMORY_CONSIDER_AS_ENEMY((*iParam0 + 4)[iVar405], Global_34573);
					iVar40++;
				}
				if (iParam0->f_188 <= 7)
				{
					if (iParam0->f_188 <= 5)
					{
						iParam0->f_188 = 4;
					}
					Function_174("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_217(iParam0 + 356, 0x4000000);
				iParam0->f_364 = Function_219(0, bParam1, 3);
				Function_217(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			}
		}
		iVar9++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	bVar41 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar41))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar41)), "footlock"))
		{
			Function_111(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bVar41, *iParam0);
		}
	}
	return;
}

void Function_111(bool bParam0, struct<365> Param1) //Position: 0x5B67 / 23399
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = GET_OBJECT_FROM_GRINGO(bParam0);
	bVar1 = GET_OBJECT_NAME(bVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(bVar1, "_");
	bVar3 = STRING_GET_TOKEN((iVar2 - 2));
	bVar4 = TO_FLOAT(STRING_TO_INT(bVar3));
	Function_217(&Global_13172[Param1.f_36411] + 20, FLOOR(POW(2.0f, bVar4)));
}

int Function_112(int iParam0, bool bParam1, int iParam2) //Position: 0x5BB6 / 23478
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 != 2 && Global_34581[iParam0] >= 0.0f)
	{
		Global_34581[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(bParam1));
	Function_91(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_83(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

var Function_113(int iParam0) //Position: 0x5DB1 / 23985
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	iVar0 = Function_115(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_114(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					iVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					iVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					iVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					iVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					iVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					iVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					iVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					iVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					iVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					iVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					iVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					iVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					iVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					iVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					iVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					iVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					iVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					iVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					iVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					iVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					iVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_9(iVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_114(int iParam0, int iParam1) //Position: 0x5F9B / 24475
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

var Function_115(int iParam0) //Position: 0x6377 / 25463
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

void Function_116(int iParam0) //Position: 0x64FD / 25853
{
	int iVar0;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	return;
}

void Function_117(int iParam0) //Position: 0x654C / 25932
{
	char* cVar0;
	
	if (Global_3380 || Function_54(0x8000000))
	{
		return;
	}
	cVar0 = Function_57(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_118(int iParam0) //Position: 0x6584 / 25988
{
	int iVar0;
	
	if (Function_9(iParam0, 1) && Function_9(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_119(int iParam0) //Position: 0x65B8 / 26040
{
	return Function_120(iParam0 + 352);
}

int Function_120(int iParam0) //Position: 0x65C6 / 26054
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	bool bVar12;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_38()));
	}
	bVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_38()));
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(bVar1, 15);
	ITERATE_IN_VOLUME(StackVal, bVar1);
	START_OBJECT_ITERATOR(bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if ((!IS_ACTOR_HORSE(bVar3) && !IS_ACTOR_HOGTIED(bVar3)) && IS_ACTOR_ALIVE(bVar3))
		{
			bVar4 = GET_ACTOR_ENUM(bVar3);
			if ((bVar4 > 1128 || bVar4 < 1130) && bVar4 == 1247)
			{
				Var5 = { 0.0f, 0.0f, 0.0f };
				GET_POSITION(bVar3, &Var5);
				iVar8 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar9 = (Function_9(iVar8, 1024) && iVar8 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar9 = true;
				}
				if (!bVar9)
				{
					iVar10 = SQUAD_GET_SIZE(*iParam0);
					if (iVar10 >= 6)
					{
						if (Function_122(StackVal, StackVal, bVar3, Global_34574) < 20.0f && !Function_62(bVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar9 = true;
						}
					}
					if (!bVar9)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar9 = true;
						}
					}
				}
				if (bVar9)
				{
					SQUAD_JOIN(bVar3, bVar0);
				}
				else
				{
					SQUAD_JOIN(bVar3, *iParam0);
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	if (SQUAD_GET_SIZE(*iParam0) > 4)
	{
		Function_121(&bVar0);
		DESTROY_OBJECT(bVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam0, 2560);
		Function_444(&(Global_29008[Global_29006]), 0x20000000);
		Function_177("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		bVar11 = false;
		while (bVar11 <= SQUAD_GET_SIZE(*iParam0))
		{
			bVar12 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar11);
			REFERENCE_ACTOR(bVar12);
			SET_ACTOR_STAY_WITHIN_VOLUME(StackVal, bVar12, 1, 1);
			TASK_PRIORITY_SET(bVar12, 0);
			TASK_GO_NEAR_OBJECT(bVar12, Global_34573, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(bVar12))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar12, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(bVar12, 322, 0, 2, 0);
			bVar11++;
		}
		return 1;
	}
	DESTROY_OBJECT(bVar0);
	DESTROY_OBJECT(*iParam0);
	return 0;
}

void Function_121(int iParam0) //Position: 0x67EC / 26604
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (IS_ACTOR_ALIVE(bVar1))
			{
				KILL_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

float Function_122(bool bParam0, vector3 vParam1) //Position: 0x683B / 26683
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_123(bParam0);
		vVar0 = { StackVal, StackVal, Function_123(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_123(bool bParam0) //Position: 0x68B5 / 26805
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

bool Function_124(bool bParam0) //Position: 0x691F / 26911
{
	bool bVar0;
	
	if (!IS_ACTOR_ALIVE(bParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((bVar0 != 9 || bVar0 != 15) || bVar0 != 24) || bVar0 != 420) || bVar0 != 28) || bVar0 != 29) || bVar0 != 30) || bVar0 != 36) || bVar0 != 38) || bVar0 != 39) || bVar0 != 54) || bVar0 != 55) || bVar0 != 56) || bVar0 != 65) || bVar0 != 68) || bVar0 != 404) || bVar0 != 400) || bVar0 != 89) || bVar0 != 95) || bVar0 != 96) || bVar0 != 107) || bVar0 != 139) || bVar0 != 140) || bVar0 != 141) || bVar0 != 144) || bVar0 != 146) || bVar0 != 149) || bVar0 != 152) || bVar0 != 168) || bVar0 != 169) || bVar0 != 176) || bVar0 != 177) || bVar0 != 213) || bVar0 != 509) || bVar0 != 493) || bVar0 != 529) || bVar0 != 237) || bVar0 != 238) || bVar0 != 245) || bVar0 != 266) || bVar0 != 268) || bVar0 != 269) || bVar0 != 276) || bVar0 != 283) || bVar0 != 289) || bVar0 != 294) || bVar0 != 304) || bVar0 != 428) || bVar0 != 435) || bVar0 != 461) || bVar0 != 465) || bVar0 != 455) || bVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_125(int iParam0, bool bParam1) //Position: 0x6A8E / 27278
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	Function_135();
	Function_134();
	GET_POSITION(*iParam0, &vVar0);
	bVar3 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar3, 8);
	ITERATE_ON_PARTIAL_NAME(bVar3, "Ammo");
	ITERATE_IN_SPHERE(bVar3, vVar0, 2.0f);
	bVar6 = START_OBJECT_ITERATOR(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar4 = bVar6;
	}
	bVar6 = OBJECT_ITERATOR_NEXT(bVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar5 = bVar6;
	}
	DESTROY_ITERATOR(bVar3);
	Function_82(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(bVar4) || !IS_OBJECT_VALID(bVar5))
	{
		SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_133(bParam1, 5.0f, 1);
		Function_210(iParam0);
		Function_132(Global_29006, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(bVar4, &vVar7);
	bVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, bVar10, 1);
	SET_MOVER_FROZEN(*iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(*iParam0, "DLC_give_ammo", 1);
	if (!Function_131(StackVal, StackVal, *iParam0, vVar7))
	{
		iVar11 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar11 != 41 || iVar11 != 42) || iVar11 != 43) || iVar11 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar12 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(*iParam0));
		if (((iVar12 != 41 || iVar12 != 42) || iVar12 != 43) || iVar12 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(*iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(Global_34573, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(Global_34573) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(Global_34573, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(*iParam0, 1);
	TASK_STAND_STILL(*iParam0, 3.0f, 0, 0);
	Function_126(*iParam0, 0, Global_34573, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_133(bParam1, 5.0f, 1);
	Function_210(iParam0);
	Function_132(Global_29006, 10.0f);
	return;
}

var Function_126(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x6D5C / 27996
{
	bool bVar0;
	
	if (bParam3)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 3, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_127(&bVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_127(var uParam0, int iParam1) //Position: 0x6DDB / 28123
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_130(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_129(&bVar0, iParam1);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_128(&bVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 1.5f, 1, 0);
	return;
}

void Function_128(var uParam0, bool bParam1) //Position: 0x6E38 / 28216
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.402189f, 1.415817f, -0.851866f, 6.384388f, -147.5115f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_129(var uParam0, bool bParam1) //Position: 0x6EB8 / 28344
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.421349f, 1.41818f, -0.861325f, -6.658212f, -134.564f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_130(var uParam0, bool bParam1) //Position: 0x6F38 / 28472
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, bParam1, -0.442921f, 1.420794f, -0.871029f, 4.479696f, -143.4034f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, bParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, bParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_131(bool bParam0, vector3 vParam1) //Position: 0x6FBC / 28604
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(bParam0, &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 0);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_132(int iParam0, float fParam1) //Position: 0x6FFA / 28666
{
	bool bVar0;
	
	bVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bVar0);
	return;
}

void Function_133(bool bParam0, bool bParam1, bool bParam2) //Position: 0x703C / 28732
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, bVar0);
	if (fVar1 <= bParam1)
	{
		fVar3 = bParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (bParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, bParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		bVar5 = FLOOR(bParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(bVar6), INT_TO_STRING(bVar5), 5.0f, Function_38(), 2, 4294967295, 0, 1, 0, 0, false, false, 0);
	}
	return;
}

void Function_134() //Position: 0x7173 / 29043
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_135() //Position: 0x7185 / 29061
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_136(int iParam0, bool bParam1) //Position: 0x719A / 29082
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(Global_34573, "bTalkedToLeader", true);
	Function_139(StackVal, StackVal, Global_34574, 1, iParam0->f_168, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(StackVal, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", uVar0[0], false, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", uVar0[0], uVar0[1], 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", uVar0[0], uVar0[1], uVar0[2], 0, 2, 0, 0);
	}
	Function_177("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_9(iParam0->f_356, 8))
	{
		if (Function_193())
		{
			Function_217(iParam0 + 356, 8);
		}
		else
		{
			Function_217(iParam0 + 356, 524288);
		}
	}
	Function_217(iParam0 + 356, 32);
	iParam0->f_364 = Function_219(0, bParam1, 3);
	Function_217(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
	Function_137(iParam0);
	return;
}

void Function_137(int iParam0) //Position: 0x747C / 29820
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			if (!DECOR_CHECK_EXIST(bVar1, "PreSaved") || (DECOR_CHECK_EXIST(bVar1, "PreSaved") && DECOR_CHECK_EXIST(bVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
				}
				bVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(bVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar2, 1);
				if (Global_29006 == Global_30717[0])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 2.5f);
				}
				else if (Global_29006 == Global_30668[1])
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(bVar2, 1.75f);
				}
				UNK_0x1E98AFEC(bVar2, 1);
				if (IS_VOLUME_VALID((iParam0 + 4[iVar05])->f_12))
				{
					DESTROY_VOLUME((iParam0 + 4[iVar05])->f_12);
				}
				(iParam0 + 4[iVar05])->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_38(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
				ATTACH_OBJECTS((iParam0 + 4[iVar05])->f_12, bVar1, Function_38(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar1));
				iVar4 = Function_138(bVar1);
				if (_GET_AMMO_AMOUNT(Global_34573, bVar3, 1) <= 5.0f)
				{
					(iParam0 + 4[iVar05])->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "nUC_NoAmmo"))
				{
					bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
					DECOR_SET_INT(bVar1, "nUC_NoAmmo", bVar5);
				}
				Function_217(iParam0 + 4[iVar05] + 16, 2);
				bVar6 = CREATE_POINT_IN_LAYOUT(bVar1, Function_38(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bVar6, bVar1, Function_38(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				bVar7 = ADD_BLIP_FOR_OBJECT(bVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(bVar7, 1);
				DECOR_SET_INT(bVar1, "PauseMapBlip", bVar7);
				SET_BLIP_NAME(bVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar7, 1);
			}
			else
			{
				Function_132(Global_29006, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_138(bool bParam0) //Position: 0x76ED / 30445
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(bParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_139(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x77B0 / 30640
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	bool bVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	vector3 vVar28;
	
	if (Function_167(StackVal, StackVal, vParam0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_112 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_34165.f_112));
	PRINTNL();
	bVar0 = false;
	Global_34165.f_16 = 0;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	if (bParam3)
	{
		Global_34165.f_24 = Global_29006;
		if (IS_ACTOR_VALID(bParam4))
		{
			Function_166(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_166(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_165(Global_34573);
		}
		Global_34165 = { StackVal, StackVal, vParam0 };
		if (IS_PS3())
		{
			Global_34165.f_4 = (StackVal + 0.1f);
		}
		bVar0 = true;
	}
	else if (bParam5)
	{
		Global_34165.f_24 = Global_29006;
		if (!Function_164(&Global_34165, &Global_34165 + 12, &bVar4))
		{
			GET_VOLUME_CENTER(bVar4, &vVar5);
			if (Function_160(StackVal, StackVal, vVar5, bVar4, &vVar8, &vVar11, 1))
			{
				vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar8, vVar11, StackVal) };
				VNORMALIZE(&vVar14);
				Global_34165.f_12 = UNK_0x9C40E671(&vVar14);
				Global_34165 = { StackVal, StackVal, vVar8 };
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_34165 + 68)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_164(&Global_34165, &Global_34165 + 12, &bVar17))
	{
		Global_34165.f_24 = Function_158(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_5(Global_34165.f_24))
		{
			bVar17 = StackVal;
			GET_VOLUME_CENTER(bVar17, &vVar18);
			if (Function_160(StackVal, StackVal, vVar18, bVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_157(StackVal, StackVal, vVar21, 1);
				if ((StackVal && ((iVar27 == Global_30633[0] && iVar27 == Global_30633[2]) && iVar27 == Global_30633[1]) != 3) && Global_29004 != 1)
				{
					Global_34165 = { -3515.646f, 19.234f, 4205.955f };
					Global_34165.f_12 = 225.789f;
				}
				else if (Global_34165.f_24 == Global_30717[1])
				{
					Global_34165 = { -66.023f, 116.861f, 1411.445f };
					Global_34165.f_12 = 64.688f;
				}
				else if (Global_34165.f_24 == Global_30658[3])
				{
					Global_34165 = { -4504.957f, 20.121f, 3406.793f };
					Global_34165.f_12 = 324.417f;
				}
				else if (Global_34165.f_24 == Global_30707[1])
				{
					Global_34165 = { -746.495f, 67.416f, 3414.803f };
					Global_34165.f_12 = 316.104f;
				}
				else if (Global_34165.f_24 == Global_30707[3])
				{
					Global_34165 = { 451.281f, 78.306f, 3474.125f };
					Global_34165.f_12 = 79.05f;
				}
				else
				{
					vVar28 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar21, vVar24, StackVal) };
					VNORMALIZE(&vVar28);
					Global_34165.f_12 = UNK_0x9C40E671(&vVar28);
					Global_34165 = { StackVal, StackVal, vVar21 };
				}
				(*&Global_34165 + 68)[9] = 1;
				bVar0 = true;
			}
			else if (Global_29006 == Global_30723[0])
			{
				Global_34165 = { -737.414f, 178.366f, 782.796f };
				Global_34165.f_12 = 117.832f;
				Global_34165.f_24 = Global_30723[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_34165.f_24 = Global_29006;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_140();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_140() //Position: 0x7BB7 / 31671
{
	Function_153();
	Function_152();
	Function_152();
	Function_151();
	Function_151();
	Function_150();
	Function_150();
	Function_147(0);
	Function_147(0);
	if (!Function_74())
	{
		Function_145();
		Function_144();
		Function_143();
		Function_142();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_141();
	return;
}

void Function_141() //Position: 0x7C09 / 31753
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

void Function_142() //Position: 0x7D0F / 32015
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

void Function_143() //Position: 0x7D42 / 32066
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

void Function_144() //Position: 0x7ED0 / 32464
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

void Function_145() //Position: 0x8085 / 32901
{
	Function_146(&Global_28260, 1, 0);
	return;
}

void Function_146(int iParam0, bool bParam1, int iParam2) //Position: 0x8093 / 32915
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
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_109();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = uVar11;
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
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (bVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, bVar13);
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

struct<8> Function_147(int iParam0) //Position: 0x8284 / 33412
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_149((50 + iVar4)) + Function_149((183 + iVar4))) + Function_149((90 + iVar4)));
				}
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
	Function_148(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_148(int iParam0, bool bParam1, bool bParam2) //Position: 0x832A / 33578
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
		Function_92(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_91(iParam0);
	if (bParam2)
	{
		Function_83(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_149(bool bParam0) //Position: 0x85C5 / 34245
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_150() //Position: 0x8606 / 34310
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
		iVar2 = ((Function_149((50 + iVar3) + 15) + Function_149((183 + iVar3) + 15)) + Function_149((90 + iVar3) + 15));
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
	Function_148(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_151() //Position: 0x868F / 34447
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
			iVar2 = ((Function_149((50 + iVar3) + 8) + Function_149((183 + iVar3) + 8)) + Function_149((90 + iVar3) + 8));
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
	Function_148(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_152() //Position: 0x8726 / 34598
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
		iVar2 = ((Function_149((50 + iVar3)) + Function_149((183 + iVar3))) + Function_149((90 + iVar3)));
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
	Function_148(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_153() //Position: 0x87A5 / 34725
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_154(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_148(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_154(int iParam0, bool bParam1, int iParam2) //Position: 0x87DE / 34782
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
	Function_92(iParam0, bParam1, 1);
	Function_91(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_83(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_155(int iParam0) //Position: 0x89E8 / 35304
{
	if (!Function_156(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_156(int iParam0) //Position: 0x8A02 / 35330
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_157(vector3 vParam0, bool bParam3) //Position: 0x8A18 / 35352
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(StackVal))
			{
				if (IS_POINT_IN_VOLUME(StackVal, vParam0))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (bParam3)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_158(vector3 vParam0, float fParam3, int iParam4) //Position: 0x8A83 / 35459
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_167(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_159(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_410(&(Global_29008[iVar6]), 4096), Global_34573))
			{
				iVar5 = 0;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_5(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_159(int iParam0) //Position: 0x8B7D / 35709
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_5(iParam0))
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

bool Function_160(vector3 vParam0, bool bParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x8BD5 / 35797
{
	bool bVar0;
	bool bVar1;
	struct<9> Var2;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<6> Var14;
	var uVar20;
	int iVar26;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	
	if (Function_167(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(bParam3))
	{
		return 0;
	}
	bVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_163(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) < 0)
	{
		UNK_0xDF93BD7C(bVar0);
		return 0;
	}
	bVar11 = -1.0f;
	bVar13 = false;
	bVar1 = false;
	while (bVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(bVar0, bVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((bVar11 > 0.0f || bVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, bParam3))
		{
			bVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar0, bVar1);
			bVar13 = true;
		}
		bVar1++;
	}
	UNK_0xDF93BD7C(bVar0);
	if (bVar13)
	{
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_162(StackVal, StackVal, *uParam4) };
		if (!bParam6)
		{
			UNK_0x19D652F9(bVar12, 100.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -100.0f, &Var14, &iVar26);
		}
		else
		{
			UNK_0x19D652F9(bVar12, 10.0f, &Var14, &uVar20);
			UNK_0x19D652F9(bVar12, -10.0f, &Var14, &iVar26);
		}
		Function_161(&uVar20);
		vVar32 = { StackVal, StackVal, Function_161(&uVar20) };
		Function_161(&iVar26);
		vVar35 = { StackVal, StackVal, Function_161(&iVar26) };
		GET_VOLUME_CENTER(bParam3, &vVar38);
		if (!bParam6)
		{
			if (VDIST(vVar32, vVar38) >= VDIST(vVar35, vVar38))
			{
				*uParam5 = { StackVal, StackVal, vVar32 };
			}
			else
			{
				*uParam5 = { StackVal, StackVal, vVar35 };
			}
		}
		else
		{
			vVar41 = { StackVal, StackVal, *uParam4 };
			*uParam4 = { StackVal, StackVal, vVar35 };
			if (!IS_POINT_IN_VOLUME(vVar32, bParam3))
			{
				*uParam4 = { StackVal, StackVal, vVar32 };
			}
			*uParam5 = { StackVal, StackVal, vVar38 };
		}
	}
	return bVar13;
}

vector3 Function_161(int iParam0) //Position: 0x8D7F / 36223
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_162(vector3 vParam0) //Position: 0x8D9E / 36254
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_163(int iParam0, int iParam1) //Position: 0x8DBE / 36286
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_164(var uParam0, var uParam1, int iParam2) //Position: 0x8DD1 / 36305
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_410(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_410(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_410(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_410(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_410(&(Global_29008[Global_30693[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 285.436f;
			*uParam0 = { -1402.147f, 10.939f, 4317.528f };
			return 1;
		}
	}
	return 0;
}

var Function_165(bool bParam0) //Position: 0x9005 / 36869
{
	return GET_HEADING(bParam0);
}

vector3 Function_166(bool bParam0) //Position: 0x9010 / 36880
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_167(vector3 vParam0) //Position: 0x9021 / 36897
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_168(var uParam0, bool bParam1, int iParam2) //Position: 0x9039 / 36921
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(*uParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(Global_34573, uParam0->f_12) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573))) && !FIRE_IS_ACTOR_ON_FIRE(*uParam0)) && IS_ACTOR_ALIVE(*uParam0)) && !Function_170(Global_34573, 0, 0))
		{
			DECOR_REMOVE(*uParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(*uParam0));
		bVar0 = _GET_AMMO_AMOUNT(Global_34573, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (Function_170(Global_34573, 0, 0) || !IS_ACTOR_ALIVE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
		{
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_9(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_169(Global_34573, *uParam0) > 3.0f)
				{
					Function_217(iParam2, 65536);
					Function_174("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				iVar2 = Function_138(*uParam0);
				bVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar2, "", "", "", 4, 0);
				DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(StackVal);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(*uParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(*uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_9(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_169(Global_34573, *uParam0) > 3.0f)
			{
				Function_217(iParam2, 65536);
				Function_174("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
		{
			iVar4 = Function_138(*uParam0);
			bVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar4, "", "", "", 4, 0);
			DECOR_SET_INT(*uParam0, "nUC_NoAmmo", bVar5);
		}
		return 0;
	}
	if (!Function_170(Global_34573, 0, 0))
	{
		if (bParam1)
		{
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", uParam0->f_12, 10, 4, "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(*uParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(*uParam0, "nUC_NoAmmo");
			}
			iVar6 = Function_138(*uParam0);
			uParam0->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", uParam0->f_12, 10, 4, iVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(StackVal);
	}
	return 0;
}

float Function_169(bool bParam0, bool bParam1) //Position: 0x93C9 / 37833
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_170(bool bParam0, bool bParam1, bool bParam2) //Position: 0x94BA / 38074
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(false))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_173(bParam0))
	{
		return 1;
	}
	if (Function_172(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(bParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(bParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(bParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(bParam0)))
	{
		return 1;
	}
	if (Function_171())
	{
		return 1;
	}
	return 0;
}

bool Function_171() //Position: 0x9570 / 38256
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_172(bool bParam0) //Position: 0x9587 / 38279
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_173(bool bParam0) //Position: 0x9592 / 38290
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_174(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x95A0 / 38304
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_175(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_175(int iParam0) //Position: 0x961B / 38427
{
	char* cVar0[16];
	
	if (!Function_176())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_176() //Position: 0x965A / 38490
{
	if (Function_9(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_177(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9675 / 38517
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_175(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

void Function_178(int iParam0, bool bParam1) //Position: 0x96FA / 38650
{
	bool bVar0;
	
	bVar0 = ADD_BLIP_FOR_ACTOR(iParam0->f_168, 325, 0, 2, 0);
	SET_BLIP_NAME(bVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(bVar0, 1);
	(iParam0 + 168)->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_38(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
	ATTACH_OBJECTS((iParam0 + 168)->f_12, iParam0->f_168, Function_38(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	if (iParam0->f_364 == 4294967295)
	{
		iParam0->f_364 = Function_219(0, bParam1, 3);
	}
	(iParam0 + 168)->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", (iParam0 + 168)->f_12, 10, 4, 0, false, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(iParam0->f_168, "Core", true);
	return;
}

void Function_179(bool bParam0) //Position: 0x97B2 / 38834
{
	bool bVar0;
	var uVar1;
	var uVar7;
	bool bVar8;
	var uVar12;
	var uVar15;
	var uVar16;
	var uVar17;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_29155[bParam010] + 20);
	PRINTNL();
	if (Function_31(bParam0))
	{
		if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30707[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_OBJECT_POSITION(StackVal, &uVar1);
			bVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0f, 2, 0);
			SET_BLIP_NAME(bVar0, "Status_SafeZone");
			UNK_0xFF3DB575(bVar0, 1);
			SET_BLIP_PRIORITY(bVar0, 3);
			uVar7 = Global_29008[bParam0];
			Function_217(&uVar7, 0x8000000);
			Function_217(&uVar7, 0x10000000);
			Global_29008[bParam0] = uVar7;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_VOLUME_SCALE(StackVal, &uVar12);
			bVar8 = Function_184(StackVal, 563, 0.0f);
			SET_BLIP_NAME(bVar8, "Status_UnderAttack");
			UNK_0xFF3DB575(bVar8, 1);
			uVar15 = Function_213(bParam0);
			uVar16 = Function_219(111, 111, 5);
			Function_183(uVar15, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_182(uVar15, 1, (RAND_INT_RANGE(false, 100000) % 12), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_180(uVar16);
			uVar17 = Global_29008[bParam0];
			Function_217(&uVar17, 0x1000000);
			Function_217(&uVar17, 0x10000000);
			Global_29008[bParam0] = uVar17;
		}
	}
	return;
}

void Function_180(int iParam0) //Position: 0x9965 / 39269
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_219(111, 111, 5);
	}
	iVar0 = 4294967295;
	bVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(1))
	{
		iVar0 = 1;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(2))
	{
		iVar0 = 2;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(3))
	{
		iVar0 = 3;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(4))
	{
		iVar0 = 4;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(5))
	{
		iVar0 = 5;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(8))
	{
		iVar0 = 8;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(9))
	{
		iVar0 = 9;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(11))
	{
		iVar0 = 11;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(12))
	{
		iVar0 = 12;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(13))
	{
		iVar0 = 13;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(14))
	{
		iVar0 = 14;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(15))
	{
		iVar0 = 15;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(16))
	{
		iVar0 = 16;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(17))
	{
		iVar0 = 17;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(18))
	{
		iVar0 = 18;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(19))
	{
		iVar0 = 19;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(21))
	{
		iVar0 = 21;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(22))
	{
		iVar0 = 22;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(23))
	{
		iVar0 = 23;
		bVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, bVar1) && !Function_181(24))
	{
		iVar0 = 24;
		bVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = bVar1;
	return;
}

bool Function_181(int iParam0) //Position: 0x9C79 / 40057
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_115(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9C9D / 40093
{
	while (bParam4 > 60)
	{
		bParam4 = (bParam4 - 60);
		bParam3++;
	}
	while (bParam3 > 60)
	{
		bParam3 = (bParam3 - 60);
		bParam2++;
	}
	while (bParam2 > 24)
	{
		bParam2 = (bParam2 - 24);
		bParam1++;
	}
	switch (bParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
	}
}

void Function_183(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9F5D / 40797
{
	switch (bParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
	}
}

var Function_184(bool bParam0, bool bParam1, float fParam2) //Position: 0xA19C / 41372
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == bParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, bParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_185(int iParam0) //Position: 0xA1E9 / 41449
{
	Function_191(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_191(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_191(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_186(iParam0 + 192);
	return;
}

bool Function_186(bool bParam0) //Position: 0xA255 / 41557
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_190();
	iVar1 = 0;
	if (!Function_26(bParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_189(bParam0[iVar03], 8);
		}
		else if (Function_188())
		{
			iVar1 = 1;
			Function_189(bParam0[iVar03], 8);
		}
		Function_189(bParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_26(bParam0[iVar03], 4))
		{
			if (!Function_26(bParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*bParam0)[iVar03], (Function_26(bParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*bParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*bParam0)[iVar03], true, (Function_26(bParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*bParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*bParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*bParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*bParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_189(bParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (Function_26(bParam0[iVar03], 4))
		{
			if (!Function_26(bParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*bParam0)[iVar03]))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*bParam0)[iVar03]))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*bParam0)[iVar03], 4294967295))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*bParam0)[iVar03]))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*bParam0)[iVar03])))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*bParam0)[iVar03]))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*bParam0)[iVar03], 6)))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*bParam0)[iVar03]))
						{
							Function_189(bParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					default:
						break;
					}
				}
		}
		iVar0++;
	}
	Function_187();
	return 1;
}

void Function_187() //Position: 0xA5D0 / 42448
{
	if (!Function_54(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_188() //Position: 0xA610 / 42512
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == Global_63541[iVar055].f_196)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_189(var uParam0, int iParam1) //Position: 0xA63B / 42555
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_190() //Position: 0xA64C / 42572
{
	if (!Function_54(128))
	{
		return;
	}
	if (Global_13152.f_68 == 0)
	{
		strcpy(&Global_13152, "nStreaming", 64);
		Global_13152.f_68 = 1;
		Global_13152.f_64 = GET_CURRENT_GAME_TIME();
		Global_13152.f_72 = Global_13133.f_64;
	}
	return;
}

var Function_191(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA68E / 42638
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_192(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_189(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_192(var uParam0, int iParam1, int iParam2) //Position: 0xA6C6 / 42694
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_26(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_189(uParam0[iVar03], 4);
			return iVar0;
		}
		if (StackVal && iParam1 != (*uParam0)[iVar03] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_193() //Position: 0xA78A / 42890
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar1, "ZombiePack_foot");
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!DECOR_CHECK_EXIST(bVar2, "GringoIsDone"))
		{
			bVar3 = ADD_BLIP_FOR_OBJECT(bVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(bVar3, "Chest_BlipName");
			DECOR_SET_INT(bVar2, "ChestBlip_AsInt", bVar3);
			SET_BLIP_PRIORITY(bVar3, 1);
			if (Global_29006 == Global_30717[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 2.3f);
			}
			else if (Global_29006 == Global_30723[0])
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(bVar3, 1.5f);
			}
		}
		bVar0 = true;
		bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

void Function_194(bool bParam0, var uParam1, struct<365> Param2) //Position: 0xA86F / 43119
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5[32];
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = Function_195(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	bVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_38(), bParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(bVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(bVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			bVar14 = GET_OBJECTSET_FROM_OBJECT(bVar1);
			bVar13 = false;
			while (bVar13 < (GET_OBJECTSET_SIZE(bVar14) - 1))
			{
				bVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar13, bVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(bVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				bVar17 = STRING_GET_TOKEN((iVar16 - 1));
				bVar18 = TO_FLOAT(STRING_TO_INT(bVar17));
				if (!Function_9(Global_13172[Param2.f_36411].f_20, FLOOR(POW(2.0f, bVar18))))
				{
					vVar19 = { 0.0f, 0.0f, 0.0f };
					vVar22 = { 0.0f, 0.0f, 0.0f };
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(bVar15, &vVar19);
					GET_OBJECT_ORIENTATION(bVar15, &vVar22);
					bVar25 = CREATE_GRINGO_IN_LAYOUT(bParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", vVar19, vVar22);
					ADD_OBJECT_TO_OBJECTSET(bVar25, bVar3);
				}
				bVar13++;
			}
			bVar4 = true;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(bVar3);
}

var Function_195(struct<365> Param0) //Position: 0xA9DD / 43485
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_196(int iParam0) //Position: 0xA9F1 / 43505
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bVar0 = true;
	iVar1 = 0;
	while (StackVal < (iVar1 - 1))
	{
		if (Function_9((iParam0 + 4[iVar15])->f_16, 1))
		{
			if (IS_ACTOR_ALIVE((*iParam0 + 4)[iVar15]))
			{
				vVar2 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(StackVal, &vVar2);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar2, 3.0f))
				{
					if (!Function_62((*iParam0 + 4)[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_44(iParam0 + 4[iVar15] + 16, 1);
						SET_OBJECT_POSITION((*iParam0 + 4)[iVar15], vVar2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_44(iParam0 + 356, 1024);
	}
	return;
}

void Function_197(int iParam0, int iParam1) //Position: 0xAAA8 / 43688
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	float fVar6;
	float fVar7;
	
	if (Function_198(&bVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(bVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (bVar0 == (*iParam0 + 4)[iVar15])
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(bVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_30668[0])
		{
			if (!Function_9(iParam0->f_356, 0x40000000))
			{
				bVar5 = GET_ACTOR_ENUM(bVar3);
				if (bVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
				{
					if (Function_169(bVar3, Global_34573) > 3.5f)
					{
						Function_217(iParam0 + 356, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(bVar3, 118, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						iParam0->f_380 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_9(iParam0->f_356, 2))
		{
			fVar6 = Function_169(bVar3, Global_34573);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_9((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_217(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
			else if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else if (Function_9(iParam0->f_356, 512))
		{
			if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(false, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_169(bVar3, Global_34573);
			if (fVar7 < 16.0f && !Function_9((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_217(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_9((iParam0 + 4[iVar25])->f_16, 8))
			{
				Function_217(iParam0 + 4[iVar25] + 16, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_380 = fVar4;
			}
			else if (!Function_9((iParam0 + 4[iVar25])->f_16, 2))
			{
				if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
					iParam0->f_372 = fVar4;
					iParam0->f_380 = fVar4;
				}
			}
			else if (fVar4 - iParam0->f_380) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
		}
	}
	return;
}

bool Function_198(var uParam0, float fParam1, bool bParam2) //Position: 0xAEE7 / 44775
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_IN_SPHERE(bVar0, Global_34574, fParam1);
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2) && !bVar1)
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_RIDING(bVar3))
		{
			if (bParam2)
			{
				*uParam0 = bVar3;
			}
		}
		else
		{
			*uParam0 = bVar3;
		}
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			bVar1 = true;
		}
		else
		{
			*uParam0 = "";
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return bVar1;
}

void Function_199(int iParam0, int iParam1, float fParam2) //Position: 0xAF64 / 44900
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	
	if (Global_3380 || Function_54(0x8000000))
	{
		return;
	}
	cVar0 = Function_57(iParam1);
	if (iParam1 == Global_30640[0])
	{
		bVar1 = FIND_VOLUME_IN_LAYOUT(Global_30616, "spawnresrict_2");
		if (IS_VOLUME_VALID(bVar1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bVar1))
			{
				if (!Function_9(iParam0->f_356, 0x2000000))
				{
					Function_44(iParam0 + 356, 4194304);
					Function_44(iParam0 + 356, 8388608);
					Function_44(iParam0 + 356, 0x1000000);
					Function_44(iParam0 + 356, 1048576);
					Function_44(iParam0 + 356, 2097152);
					Function_217(iParam0 + 356, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_44(iParam0 + 356, 0x2000000);
		}
	}
	if (!Function_9(iParam0->f_356, 2097152))
	{
		if (fParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_217(iParam0 + 356, 1048576);
			Function_217(iParam0 + 356, 2097152);
			Function_217(iParam0 + 356, 4194304);
			Function_217(iParam0 + 356, 8388608);
			Function_217(iParam0 + 356, 0x1000000);
			return;
		}
	}
	if (!Function_9(iParam0->f_356, 1048576))
	{
		if (fParam2 <= 40.0f && fParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_217(iParam0 + 356, 1048576);
			Function_217(iParam0 + 356, 4194304);
			Function_217(iParam0 + 356, 8388608);
			Function_217(iParam0 + 356, 0x1000000);
			return;
		}
	}
	iVar2 = Function_200(StackVal, StackVal, Global_34574, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_9(iParam0->f_356, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_217(iParam0 + 356, 4194304);
		Function_217(iParam0 + 356, 8388608);
		Function_217(iParam0 + 356, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_9(iParam0->f_356, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_217(iParam0 + 356, 8388608);
		Function_217(iParam0 + 356, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_9(iParam0->f_356, 0x1000000))
	{
		Function_217(iParam0 + 356, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_200(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xB240 / 45632
{
	bool bVar0;
	var uVar1;
	
	bVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_38(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_201(bVar0, uParam5, uParam6);
	DESTROY_VOLUME(bVar0);
	return uVar1;
}

int Function_201(bool bParam0, var uParam1, bool bParam2) //Position: 0xB273 / 45683
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_38(), Global_30616, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(bVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, bVar0, 0, 1);
		bVar2 = GET_OBJECTSET_SIZE(bVar0);
		if (bVar2 < 0)
		{
			return iVar1;
		}
		bVar3 = false;
		while (bVar3 <= bVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, bVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_202(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_62(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	DESTROY_OBJECTSET(bVar0);
	return iVar1;
}

bool Function_202(bool bParam0) //Position: 0xB33D / 45885
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_39(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

void Function_203() //Position: 0xB388 / 45960
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = Function_213(Global_29006);
	fVar1 = Function_211(Global_29006);
	fVar2 = Function_212(iVar0);
	iVar3 = (((fVar2 - fVar1) / fVar2) * 1.5f);
	iVar3 = Function_204(0.33f, Function_163(iVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(iVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_8(1);
	return;
}

int Function_204(int iParam0, int iParam1) //Position: 0xB3D6 / 46038
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_205(int iParam0, bool bParam1) //Position: 0xB3E9 / 46057
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	struct<5> Var5;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		bVar1 = (*iParam0 + 4)[iVar05];
		if (IS_ACTOR_ALIVE(bVar1))
		{
			SET_MOVER_FROZEN(bVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar1, 4);
			if (!Function_9(iParam0->f_356, 0x4000000))
			{
				MEMORY_CLEAR_ALL(bVar1);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(bVar1);
			vVar2 = { 0.0f, 0.0f, 0.0f };
			Var5 = { 0.0f, 0.0f, 0.0f };
			GET_OBJECT_POSITION(StackVal, &vVar2);
			GET_OBJECT_ORIENTATION(StackVal, &Var5);
			if (!bParam1)
			{
				TASK_PRIORITY_SET(bVar1, 1);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar1, &vVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(bVar1, true);
				if (!Function_9(iParam0->f_356, 0x4000000))
				{
					TASK_PRIORITY_SET(bVar1, 0);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_206(*iParam0, *iParam0, 0);
	return;
}

void Function_206(bool bParam0, bool bParam1, int iParam2) //Position: 0xB4CD / 46285
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_207(bVar1, bParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_207(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB51C / 46364
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_208(int iParam0) //Position: 0xB566 / 46438
{
	int iVar0;
	
	iVar0 = Function_115(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_30(iVar0) || Function_181(iParam0));
}

void Function_209(int iParam0) //Position: 0xB5A5 / 46501
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	if (!Function_9(iParam0->f_356, 512))
	{
		fVar0 = Function_211(Global_29006);
		iVar1 = Function_213(Global_29006);
		if (iVar1 == 0 && iParam0->f_368 >= 120.0f)
		{
			fVar2 = Function_212(iVar1);
			fVar3 = ((fVar0 / fVar2) * 100.0f);
			if (fVar3 <= 120.0f)
			{
				iParam0->f_368 = 1000.0f;
				return;
			}
			if (fVar3 == iParam0->f_368)
			{
				fVar4 = (fVar0 % 10.0f);
				bVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(bVar5));
				UI_REFRESH("ZMeter");
				iParam0->f_368 = fVar3;
			}
		}
	}
	return;
}

void Function_210(int iParam0) //Position: 0xB666 / 46694
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = GET_BLIP_ON_ACTOR(*iParam0);
	if (GET_BLIP_ICON(bVar0) == 325)
	{
		REMOVE_BLIP(bVar0);
	}
	bVar1 = DECOR_GET_INT(*iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(bVar1))
	{
		REMOVE_BLIP(bVar1);
	}
	DECOR_REMOVE(*iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_CHECK_EXIST(*iParam0, "nUC_NoAmmo"))
	{
		bVar2 = DECOR_GET_INT(*iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(bVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(bVar2);
		}
		DECOR_REMOVE(*iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(iParam0->f_12))
	{
		DESTROY_VOLUME(iParam0->f_12);
	}
	return;
}

var Function_211(bool bParam0) //Position: 0xB729 / 46889
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	bVar2 = StackVal;
	if (IS_VOLUME_VALID(bVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(bVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(bVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_212(int iParam0) //Position: 0xB783 / 46979
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_213(bool bParam0) //Position: 0xB8C6 / 47302
{
	if (bParam0 == Global_30640[0])
	{
		return 1;
	}
	if (bParam0 == Global_30640[2])
	{
		return 2;
	}
	if (bParam0 == Global_30640[1])
	{
		return 3;
	}
	if (bParam0 == Global_30658[1])
	{
		return 4;
	}
	if (bParam0 == Global_30658[3])
	{
		return 5;
	}
	if (bParam0 == Global_30668[0])
	{
		return 8;
	}
	if (bParam0 == Global_30668[1])
	{
		return 9;
	}
	if (bParam0 == Global_30679[0])
	{
		return 11;
	}
	if (bParam0 == Global_30685[0])
	{
		return 12;
	}
	if (bParam0 == Global_30685[1])
	{
		return 13;
	}
	if (bParam0 == Global_30685[2])
	{
		return 14;
	}
	if (bParam0 == Global_30693[0])
	{
		return 15;
	}
	if (bParam0 == Global_30693[1])
	{
		return 16;
	}
	if (bParam0 == Global_30693[2])
	{
		return 17;
	}
	if (bParam0 == Global_30707[2])
	{
		return 25;
	}
	if (bParam0 == Global_30707[3])
	{
		return 18;
	}
	if (bParam0 == Global_30707[0])
	{
		return 19;
	}
	if (bParam0 == Global_30717[0])
	{
		return 21;
	}
	if (bParam0 == Global_30723[2])
	{
		return 22;
	}
	if (bParam0 == Global_30723[1])
	{
		return 23;
	}
	if (bParam0 == Global_30723[0])
	{
		return 24;
	}
	if (bParam0 == Global_30679[1])
	{
		return 26;
	}
	if (bParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_214() //Position: 0xBA4C / 47692
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "ZombiePack_foot");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_BLIP_ON_OBJECT(bVar1);
		if (IS_BLIP_VALID(bVar2))
		{
			REMOVE_BLIP(bVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

var Function_215(bool bParam0, int iParam1) //Position: 0xBAAA / 47786
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
		ITERATE_ON_OBJECT_TYPE(bVar1, 12);
		ITERATE_ON_PARTIAL_NAME(bVar1, "player_sleep");
		if (iParam1 == Global_30628[2])
		{
			ITERATE_IN_SPHERE(bVar1, 123.033f, 72.791f, 2669.954f, 10.0f);
		}
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(bVar2);
			if (IS_GRINGO_VALID(bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(bVar3, bParam0);
				bVar4 = GET_OBJECT_FROM_GRINGO(bVar3);
				bVar5 = GET_BLIP_ON_OBJECT(bVar4);
				if (IS_BLIP_VALID(bVar5))
				{
					REMOVE_BLIP(bVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(bVar4, "SavingAtBedAllowed", true);
					bVar5 = ADD_BLIP_FOR_OBJECT(bVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(bVar5, 1);
					if (iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(bVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(bVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return iVar0;
}

void Function_216(bool bParam0, bool bParam1) //Position: 0xBBCB / 48075
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", bParam1);
	return;
}

void Function_217(var uParam0, bool bParam1) //Position: 0xBBEE / 48110
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

bool Function_218(int iParam0, bool bParam1) //Position: 0xBBFD / 48125
{
	int iVar0;
	
	iVar0 = Function_155(iParam0);
	if (!Function_49(iVar0))
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

int Function_219(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBC3A / 48186
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_223(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_220(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_220(bParam0, bParam1, bParam2, 4294967295);
}

int Function_220(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xBC98 / 48280
{
	var uVar0;
	
	if (!Function_222(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_223(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_221(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_221(int iParam0) //Position: 0xBDED / 48621
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_222(int iParam0) //Position: 0xBE2B / 48683
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_223(int iParam0, int iParam1, int iParam2) //Position: 0xBE40 / 48704
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_224(int iParam0) //Position: 0xBE60 / 48736
{
	int iVar0;
	int iVar1;
	
	iParam0 = iParam0;
	if (IS_ACTOR_IN_VOLUME(Function_109(), Local_370.f_116))
	{
		iLocal_823 = 1;
		iLocal_824 = 0;
	}
	else if ((StackVal && (StackVal || (StackVal || iLocal_823 != 6 != 10) != 9)) && !iLocal_824)
	{
		Function_177("nGY_Return", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_824 = 1;
	}
	if ((StackVal || (StackVal || IS_ACTOR_IN_VOLUME(Function_109(), Local_370.f_136) != 11) != 12) && iLocal_823)
	{
		bLocal_6 = false;
		if (!iLocal_825)
		{
			if (StackVal == 6)
			{
				iLocal_825 = 1;
				CLEAR_AMBIENT_OBJECTS_VOLUME((*&Local_370 + 120)[0], 15);
				Function_118(1);
			}
		}
		if (Function_225(&Local_784))
		{
			Function_27(&Local_784);
		}
	}
	else
	{
		if (iLocal_823)
		{
			iLocal_823 = 0;
			iLocal_824 = 0;
			bLocal_6 = 1000;
			Function_27(&Local_784);
			Local_784.f_4 = 1;
		}
		if (iLocal_825)
		{
			iVar0 = CONVERT_TIME_OF_DAY_TO_INT(Function_46(Global_30737));
			iVar1 = CONVERT_TIME_OF_DAY_TO_INT(GET_TIME_OF_DAY());
			if ((iVar1 - iVar0) >= 30)
			{
				iLocal_825 = 0;
				Function_8(1);
			}
		}
	}
	return;
}

bool Function_225(int iParam0) //Position: 0xBF6E / 49006
{
	int iVar0;
	bool bVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_396(iParam0);
			iParam0->f_4 = 1;
			break;
		
		case 0x00000001:
			if (Function_395())
			{
				if (!Function_51(iParam0))
				{
					return 1;
				}
				if (Function_45(iParam0->f_152) && Function_394(Function_50(iParam0->f_152)) < 0)
				{
					if (!iParam0->f_144)
					{
						iParam0->f_144 = 1;
						Function_174("GY_STILL_CLENSED", 0x41200000, 1, 0, 2, 1, 0);
					}
					return 1;
				}
				Function_390(iParam0);
			}
			break;
		
		case 0x00000002:
			Function_389();
			if (Function_388())
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				Local_624.f_4 = 1;
				if (!DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					Function_139(StackVal, StackVal, Global_34574, 0, 0, 1);
					DECOR_SET_BOOL(Global_34573, "bStartedGY", true);
				}
				CANCEL_DEADEYE();
				Function_387(iParam0);
				Function_385(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				bLocal_577 = Function_381(bLocal_622, 0, 1, 0, 0);
				iLocal_612 = 1;
				fLocal_613 = GET_CURRENT_GAME_TIME();
				SET_ACTOR_PROOF(Global_34573, 16);
				iLocal_599 = 1;
				Function_32(1.0f);
				Function_380(&iLocal_607, -10.0f);
				Function_379(&iLocal_617);
				ENABLE_WEATHER_SPHERE(Function_29(iParam0->f_152), true);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					TASK_FLEE_ACTOR(Function_373(1, 0, 0, 0, 0, 0, 1, 0), Global_34573, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_367(iParam0);
				iParam0->f_4 = 4;
			}
			break;
		
		case 0x00000003:
			Function_389();
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(Local_624, "LootCoffin")))
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				Local_624.f_4 = 1;
				if (!DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
				{
					Function_139(StackVal, StackVal, Global_34574, 0, 0, 1);
					DECOR_SET_BOOL(Global_34573, "bStartedGY", true);
				}
				Function_177("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_599 = 1;
				Function_32(1.0f);
				Function_380(&iLocal_607, -10.0f);
				Function_379(&iLocal_617);
				ENABLE_WEATHER_SPHERE(Function_29(iParam0->f_152), true);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(Global_34573)))
				{
					TASK_FLEE_ACTOR(Function_373(1, 0, 0, 0, 0, 0, 1, 0), Global_34573, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_367(iParam0);
				iParam0->f_4 = 6;
			}
			break;
		
		case 0x00000004:
			if (!IS_OBJECT_VALID(bLocal_577) || Function_365())
			{
				if (bLocal_611)
				{
					AI_IGNORE_ACTOR(Global_34573);
					iParam0->f_4 = 5;
				}
				else
				{
					Function_362(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
					ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
					if (IS_OBJECT_VALID(bLocal_577))
					{
						DESTROY_OBJECT(bLocal_577);
					}
					Function_177("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_612 = 1;
					fLocal_613 = GET_CURRENT_GAME_TIME();
					SET_ACTOR_PROOF(Global_34573, 16);
					iParam0->f_4 = 6;
				}
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_362(2, 0, 1, 1, 1, 1, 1, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
				if (IS_OBJECT_VALID(bLocal_577))
				{
					DESTROY_OBJECT(bLocal_577);
				}
				TELEPORT_ACTOR_WITH_HEADING(Global_34573, 549.994f, 94.248f, 1189.528f, 107.628f, 1, true, 1);
				AI_STOP_IGNORING_ACTOR(Global_34573);
				Function_361(2.5f);
				Function_177("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iParam0->f_4 = 6;
			}
			break;
		
		case 0x00000006:
			Function_389();
			Function_359(iParam0);
			if (Function_358(&iLocal_607, 0.0f))
			{
				Function_357();
				if (iParam0->f_152 == 4)
				{
					Function_356(&iLocal_607, TO_FLOAT(RAND_INT_RANGE(4294967276, 4294967286)));
				}
				else
				{
					Function_356(&iLocal_607, TO_FLOAT(RAND_INT_RANGE(4294967251, 4294967271)));
				}
			}
			return Function_329(iParam0);
			break;
		
		case 0x00000007:
			if (Function_327(&iLocal_563, 0.0f))
			{
				AUDIO_MUSIC_SET_MOOD("HIGH_FIGHT_DARK", 0, 4294967295, 4294967295);
				AI_IGNORE_ACTOR(Global_34573);
				Function_380(&uLocal_604, -10.0f);
				CANCEL_DEADEYE();
				Function_324(iParam0);
				Function_385(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				Function_301(iParam0);
				Function_356(&iLocal_563, 0.0f);
				iParam0->f_4 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_327(&iLocal_563, 5.0f))
			{
				Function_292(iParam0);
			}
			if (!IS_OBJECT_VALID(bLocal_577))
			{
				AI_STOP_IGNORING_ACTOR(Global_34573);
				Function_362(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(Global_34573, 0);
				iParam0->f_4 = 9;
				Function_291(iParam0->f_152);
				Function_290(StackVal, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
			break;
		
		case 0x00000009:
			Function_359(iParam0);
			Function_389();
			if (StackVal && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(!IS_ACTOR_ALIVE(bLocal_600)) != 0)
			{
				Function_43();
				if (!Function_289())
				{
					iParam0->f_4 = 10;
				}
				else
				{
					Function_356(&iLocal_563, 0.0f);
					Function_288(iParam0);
					iParam0->f_4 = 11;
				}
			}
			break;
		
		case 0x0000000A:
			Function_284(iParam0);
			Function_359(iParam0);
			Function_389();
			Function_283(iParam0);
			if (Function_289())
			{
				Function_288(iParam0);
				Function_356(&iLocal_563, 2.6f);
				iParam0->f_4 = 11;
			}
			else if (iLocal_596)
			{
				Function_177("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_596 = 0;
			}
			break;
		
		case 0x0000000B:
			if (Function_358(&iLocal_563, 2.5f))
			{
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				ACTOR_HOLSTER_WEAPON(Global_34573, 1);
				bLocal_598 = true;
				CANCEL_DEADEYE();
				Function_385(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1);
				UI_PUSH("CutsceneWithMessages");
				Function_262(iParam0);
				if (IS_OBJECT_VALID(bLocal_577))
				{
					Function_261(&iLocal_563);
					iParam0->f_4 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_327(&iLocal_563, 2.5f))
			{
				Function_260(iParam0);
			}
			if (!IS_OBJECT_VALID(bLocal_577))
			{
				Function_362(2, 0, 1, 1, 1, 1, 0, 1, 1, 1);
				UI_POP("CutsceneWithMessages");
				if (iParam0->f_152 == 0)
				{
					if (Function_394(Global_30734) == 0)
					{
						Function_177("GY_RETURN_BLK", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_63541[355].f_140);
						bVar1 = false;
						while (bVar1 <= iVar0)
						{
							SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_63541[355].f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_63541[355].f_140, bVar1), 4, 0);
							bVar1++;
						}
						APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, false);
						Function_259(Global_63541[355].f_140, 0);
					}
				}
				Function_226(iParam0);
				if (Global_3421)
				{
					TELEPORT_ACTOR_WITH_HEADING(Global_34573, -2899.875f, 19.075f, 2710.246f, 24.269f, 1, true, 1);
				}
				iParam0->f_4 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_27(iParam0);
			return 1;
			break;
	}
	return 0;
}

void Function_226(int iParam0) //Position: 0xC652 / 50770
{
	int iVar0;
	
	if (Function_258(&iLocal_617))
	{
		bLocal_620 = Function_256(&iLocal_617);
		iVar0 = Function_255(iParam0->f_152);
		if (Function_79(iVar0) < 0.0f)
		{
			if (bLocal_620 > Function_79(iVar0))
			{
				Function_254(iVar0, bLocal_620, 0);
			}
		}
		else
		{
			Function_254(iVar0, bLocal_620, 0);
		}
	}
	if (Function_394(Function_50(iParam0->f_152)) == 0)
	{
		Function_82(656, 1, 0, 0);
	}
	Function_227(Function_50(iParam0->f_152), 1, 1, 0);
	return;
}

void Function_227(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC6C5 / 50885
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_47(bParam0))
	{
		Function_252();
		return;
	}
	bVar0 = Function_251(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_250())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_249(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_248(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_175(Global_6269) };
		}
		if (Function_250())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_244();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_250())
	{
		Function_243();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_241("DEED_COMPLETE", bParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[bParam011].f_4 = 4;
		}
		else
		{
			Global_13172[bParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[bParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_239(bParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
				{
					case 0x00000001:
						iVar13 = 4;
						break;
					
					case 0x00000004:
						iVar13 = 3;
						break;
					
					case 0x00000006:
						iVar13 = 2;
						break;
					
					case 0x00000002:
						switch (Function_249(bParam0))
						{
							case 0x00000000:
								iVar13 = 1;
								break;
							
							default:
								iVar13 = 0;
								break;
						}
						break;
					
					case 0x00000003:
						iVar13 = 10;
						break;
					}
			}
			Function_230(1);
			Function_229(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_228(bParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_6269;
		Var14.f_20 = bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 44, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_3376 = 1;
}

void Function_228(int iParam0, int iParam1) //Position: 0xC919 / 51481
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_229(var uParam0, int iParam1) //Position: 0xC953 / 51539
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = uParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_74())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_230(bool bParam0) //Position: 0xC995 / 51605
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_231();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_140();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_44(&Global_63095, 1);
		Function_44(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_231() //Position: 0xC9E6 / 51686
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_176())
	{
		Function_236(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_236(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_232(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_232(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_167(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

vector3 Function_232(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCAA1 / 51873
{
	int iVar0;
	
	iVar0 = Function_234(uParam2, uParam3);
	if (Function_233(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_217(&Global_63095, 1);
			Function_44(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_217(&Global_63095, 2);
			Function_44(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_217(&Global_63095, 2);
		Function_44(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_37();
	return StackVal, StackVal, Function_37();
}

bool Function_233(int iParam0) //Position: 0xCB88 / 52104
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_234(bool bParam0, bool bParam1) //Position: 0xCB9E / 52126
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	bVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					bVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_235(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_233(bVar0) && !bParam1)
	{
		bVar0 = Function_234(bParam0, 1);
	}
	return bVar0;
}

float Function_235(vector3 vParam0, vector3 vParam3) //Position: 0xCC65 / 52325
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_236(var uParam0, int iParam1) //Position: 0xCC82 / 52354
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_238(Global_34573, &vVar4);
	if (!Function_237(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_237(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_217(&Global_63095, 2);
	Function_44(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_167(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_237(int iParam0) //Position: 0xD4A7 / 54439
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_9(uVar0, 0x1000000) || Function_9(uVar0, 0x2000000)) || Function_9(uVar0, 0x4000000)) || !Function_9(uVar0, 0x10000000));
}

void Function_238(bool bParam0, bool bParam1) //Position: 0xD4E2 / 54498
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_239(bool bParam0) //Position: 0xD4EF / 54511
{
	int iVar0;
	int iVar1;
	
	if (!Function_49(bParam0))
	{
		return;
	}
	switch (Function_251(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_249(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_82(12, 1, 0, 0);
				Function_80(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_82(13, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_82(14, 1, 0, 0);
				Function_80(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_82(15, 1, 0, 0);
				Function_80(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_82(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_249(bParam0))
			{
				case 0x00000000:
					if (Function_394(bParam0) == 1)
					{
						iVar0 = Function_240(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_80(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_80(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_80(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_80(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_80(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_80(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_80(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_80(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_80(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_80(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_80(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_80(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_80(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_80(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_80(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_80(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_80(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_80(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_80(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_80(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_29155[iVar010];
							}
							else
							{
								iVar0 = Global_29155[iVar010];
								iVar0 = Global_29155[iVar010];
							}
							if (iVar0 == Global_30621[0])
							{
								Function_82(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_82(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_82(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_240(bParam0) == 0)
			{
				if (Function_394(bParam0) == 1)
				{
					Function_82(458, 1, 0, 0);
					iVar0 = Function_249(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_80(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_80(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_80(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_80(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_80(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_80(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_80(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_80(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_394(bParam0) == 1)
			{
				Function_82(400, 1, 0, 0);
			}
			switch (Function_249(bParam0))
			{
				case 0x00000001:
					Function_82(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_80(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_80(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_80(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_82(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_80(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_80(6, 9);
					}
					break;
				
				default:
					LOG_ERROR("Please insure this job case is taken care of and create a null case");
					break;
			}
			break;
	}
	return;
}

int Function_240(bool bParam0) //Position: 0xD9CB / 55755
{
	if (!Function_49(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

void Function_241(char* cParam0, bool bParam1) //Position: 0xD9EA / 55786
{
	struct<4> Var0;
	
	if (!Function_47(bParam1))
	{
		return;
	}
	switch (Function_251(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_242(Function_249(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_251(bParam1), Function_249(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_251(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_251(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_251(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_251(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_251(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_242(int iParam0) //Position: 0xDB0E / 56078
{
	char* cVar0[16];
	
	if (!Function_176())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_243() //Position: 0xDB48 / 56136
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_149(0));
	PLAYSTAT_INT("HC_FAME", Function_149(3));
	PLAYSTAT_INT("HC_HONOR", Function_149(1));
	return;
}

void Function_244() //Position: 0xDCA0 / 56480
{
	int iVar0;
	int iVar1;
	
	if (!Function_156(Global_6269))
	{
		return;
	}
	iVar0 = Function_149(24);
	iVar1 = Function_155(Global_6269);
	if (!Function_156(iVar0) && Function_247(iVar1) < 0)
	{
		Function_148(24, Global_6269, 0);
		Function_245(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_247(Function_155(iVar0)))
	{
		Function_148(24, Global_6269, 0);
		Function_245(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_245(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xDD20 / 56608
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 20 && Global_35278[iParam020].f_48 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_35278[iParam020] + 16, bParam1, 32);
	if (bParam2)
	{
		uVar1 = Global_35278[iParam020].f_76;
		Function_246(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_246(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10) //Position: 0xE072 / 57458
{
	CLEAR_STAT_MESSAGE();
	if (!Global_49306)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), cParam9, "", 2, 4294967295, 0, 0, 0, 1, false, false, 0);
		}
		else if (bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 0, 0, 0, false, false, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), UI_GET_STRING(&uParam1), bParam9, "", 2, 4294967295, 0, 1, 0, 0, false, false, 0);
		}
	}
}

int Function_247(int iParam0) //Position: 0xE0F5 / 57589
{
	if (!Function_47(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_248(char* cParam0) //Position: 0xE10F / 57615
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (cParam0)
	{
		case 0x00000000:
		case 0x00000001:
			stradd(&cVar0, "Intro", 24);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000016:
			stradd(&cVar0, "Ranch", 24);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x00000015:
		case 0x00000017:
			stradd(&cVar0, "Marshal", 24);
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
			stradd(&cVar0, "Merchant", 24);
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			stradd(&cVar0, "Grave", 24);
			break;
		
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
			stradd(&cVar0, "Outlaws", 24);
			break;
		
		case 0x00000018:
		case 0x00000019:
			stradd(&cVar0, "Fort", 24);
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x00000024:
			stradd(&cVar0, "MexArmy", 24);
			break;
		
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			stradd(&cVar0, "Gun", 24);
			break;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000026:
		case 0x00000027:
			stradd(&cVar0, "MexGirl", 24);
			break;
		
		case 0x00000025:
		case 0x00000028:
		case 0x00000029:
			stradd(&cVar0, "Rebel", 24);
			break;
		
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			stradd(&cVar0, "Anthro", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
			stradd(&cVar0, "FBI", 24);
			break;
		
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
			stradd(&cVar0, "Home", 24);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_249(bool bParam0) //Position: 0xE365 / 58213
{
	if (!Function_49(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

bool Function_250() //Position: 0xE385 / 58245
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_251(bool bParam0) //Position: 0xE3B0 / 58288
{
	if (!Function_49(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_252() //Position: 0xE3CB / 58315
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_30842[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_16474)
	{
		iVar0 = 0;
		while (StackVal <= iVar0)
		{
			strcpy(&cVar2, "Deed Count by Status:", 64);
			switch (iVar1)
			{
				case 0x00000000:
					stradd(&cVar2, "Pending,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "Active,", 64);
					break;
				
				case 0x00000001:
					stradd(&cVar2, "About to Start,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "Completed,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "Completed (Cheated),", 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			switch (iVar0)
			{
				case 0x00000001:
					stradd(&cVar2, "StoryMission,", 64);
					break;
				
				case 0x00000002:
					stradd(&cVar2, "ProcMission,", 64);
					break;
				
				case 0x00000003:
					stradd(&cVar2, "LocationMission,", 64);
					break;
				
				case 0x00000004:
					stradd(&cVar2, "nMinigame,", 64);
					break;
				
				case 0x00000006:
					stradd(&cVar2, "Job,", 64);
					break;
				
				default:
					straddi(&cVar2, iVar0, 64);
					break;
			}
			stradd(&cVar2, " ", 64);
			straddi(&cVar2, Global_16474[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (!Global_13172[iVar011] != 0)
		{
			Function_253(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
			strcpy(&cVar2, "Deed:", 64);
			straddi(&cVar2, iVar0, 64);
			stradd(&cVar2, "n Mission ", 64);
			straddi(&cVar2, iVar19, 64);
			stradd(&cVar2, "  Quad ", 64);
			straddi(&cVar2, iVar18, 64);
			stradd(&cVar2, "  Type ", 64);
			straddi(&cVar2, iVar20, 64);
			stradd(&cVar2, "n  Status ", 64);
			straddi(&cVar2, StackVal, 64);
		}
		iVar0++;
	}
	return;
}

void Function_253(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE612 / 58898
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

int Function_254(int iParam0, bool bParam1, bool bParam2) //Position: 0xE63B / 58939
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_92(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_91(iParam0);
	if (bParam2)
	{
		Function_83(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_255(int iParam0) //Position: 0xE8A7 / 59559
{
	switch (iParam0)
	{
		case 0x00000000:
			return 662;
			break;
		
		case 0x00000001:
			return 663;
			break;
		
		case 0x00000002:
			return 665;
			break;
		
		case 0x00000003:
			return 664;
			break;
		
		case 0x00000004:
			return 666;
			break;
	}
	LOG_ERROR("should not be here");
	return 662;
}

float Function_256(int iParam0) //Position: 0xE910 / 59664
{
	if (Function_258(iParam0))
	{
		if (Function_257(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_257(int iParam0) //Position: 0xE9D8 / 59864
{
	return Function_9(*iParam0, 2);
}

bool Function_258(int iParam0) //Position: 0xE9E5 / 59877
{
	return Function_9(*iParam0, 1);
}

void Function_259(bool bParam0, bool bParam1) //Position: 0xE9F2 / 59890
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

void Function_260(int iParam0) //Position: 0xEA17 / 59927
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			PRINT_BIG("BLK_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000001:
			PRINT_BIG("COOTS_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000004:
			PRINT_BIG("SEP_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG("TUM_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000002:
			PRINT_BIG("ODD_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
	}
	return;
}

void Function_261(int iParam0) //Position: 0xEB09 / 60169
{
	Function_356(iParam0, 0.0f);
	return;
}

void Function_262(int iParam0) //Position: 0xEB15 / 60181
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bLocal_577 = Function_279(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			bLocal_577 = Function_275(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			bLocal_577 = Function_271(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			bLocal_577 = Function_267(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			bLocal_577 = Function_263(bLocal_622, 0, 1, 0, 0);
			break;
	}
	return;
}

bool Function_263(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xEB92 / 60306
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "oddgraveyardComplete", 2, 1);
	}
	Function_264(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_264(int iParam0) //Position: 0xEC12 / 60434
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_266(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_265(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_265(int iParam0) //Position: 0xEC67 / 60519
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50.40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2897.067f, 20.62931f, 2714.683f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.039979f, 0.583588f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_266(int iParam0) //Position: 0xECD1 / 60625
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 50.40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2898.525f, 21.02192f, 2712.473f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.282773f, 0.575102f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_267(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xED3B / 60731
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumgraveyardComplete", 2, 1);
	}
	Function_268(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_268(int iParam0) //Position: 0xEDBB / 60859
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_270(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_269(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_269(int iParam0) //Position: 0xEE10 / 60944
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3918.087f, 31.29665f, 2938.344f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.228078f, -0.797786f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_270(int iParam0) //Position: 0xEE7A / 61050
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3919.805f, 30.81222f, 2939.652f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.222407f, -0.792953f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_271(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xEEE4 / 61156
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "sepgraveyardComplete", 2, 1);
	}
	Function_272(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_272(int iParam0) //Position: 0xEF64 / 61284
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_274(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_273(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_273(int iParam0) //Position: 0xEFB9 / 61369
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1389.109f, 16.60661f, 4315.52f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.088543f, -0.979924f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_274(int iParam0) //Position: 0xF023 / 61475
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 49.90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1389.484f, 14.59394f, 4315.136f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.120229f, -0.992252f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_275(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF08D / 61581
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "cootsgraveyardComplete", 2, 1);
	}
	Function_276(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_276(int iParam0) //Position: 0xF10F / 61711
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_278(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_277(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_277(int iParam0) //Position: 0xF164 / 61796
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1804.425f, 23.51718f, 2823.539f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.312112f, -2.467991f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_278(int iParam0) //Position: 0xF1CE / 61902
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 40.52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1807.816f, 23.14842f, 2825.066f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.329485f, -2.366173f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF238 / 62008
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkgraveyardComplete", 2, 1);
	}
	Function_280(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_280(int iParam0) //Position: 0xF2B8 / 62136
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_282(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_281(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_281(int iParam0) //Position: 0xF30D / 62221
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 592.2622f, 91.29121f, 1199.506f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.334294f, 1.381979f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_282(int iParam0) //Position: 0xF377 / 62327
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 41.15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 590.5406f, 91.34983f, 1205.931f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.310153f, 1.227103f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_283(int iParam0) //Position: 0xF3E1 / 62433
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		bVar2 = GET_CURRENT_GRINGO(Global_34573);
		if (IS_GRINGO_VALID(bVar2))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar2)), "dlc_player_burn_coffin"))
			{
				if (!iLocal_645)
				{
					Function_380(&iLocal_563, 0.0f);
					iLocal_645 = 1;
				}
				else if (Function_358(&iLocal_563, 1.2f))
				{
					iLocal_645 = 0;
					Function_288(iParam0);
					Function_380(&iLocal_563, 2.6f);
					iParam0->f_4 = 11;
				}
			}
		}
	}
	return;
}

void Function_284(int iParam0) //Position: 0xF486 / 62598
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(Local_628[iVar04], "LootCoffin")))
			{
				Local_628[iVar04].f_4 = 1;
				Function_285();
				iLocal_615++;
				if (iLocal_615 <= 2 && !iLocal_614)
				{
					iLocal_614 = 1;
					iParam0->f_12++;
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_285() //Position: 0xF4F9 / 62713
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	Function_286(Function_109(), &uVar0, &iVar7);
	iVar8 = 0;
	while (iVar8 <= iVar7)
	{
		if (uVar0[iVar8] != 4294967295)
		{
			if (_GET_AMMO_AMOUNT(Function_109(), GET_AMMO_ENUM(uVar0[iVar8]), 1) > _GET_MAX_AMMO_AMOUNT(Function_109(), GET_AMMO_ENUM(uVar0[iVar8])))
			{
				_ADD_AMMO_OF_TYPE(Function_109(), GET_AMMO_ENUM(uVar0[iVar8]), 6.0f, 1, 1);
			}
		}
		iVar8++;
	}
	return;
}

void Function_286(bool bParam0, var uParam1, int iParam2) //Position: 0xF563 / 62819
{
	*iParam2 = 0;
	if (Function_287(bParam0, 39) != 4294967295)
	{
		(*uParam1)[*iParam2] = 0;
		*iParam2++;
	}
	if (Function_287(bParam0, 41) != 4294967295)
	{
		(*uParam1)[*iParam2] = 8;
		*iParam2++;
	}
	if (Function_287(bParam0, 40) != 4294967295)
	{
		(*uParam1)[*iParam2] = 4;
		*iParam2++;
	}
	if (Function_287(bParam0, 42) != 4294967295)
	{
		(*uParam1)[*iParam2] = 12;
		*iParam2++;
	}
	if (Function_287(bParam0, 43) != 4294967295)
	{
		(*uParam1)[*iParam2] = 17;
		*iParam2++;
	}
	if (Function_287(bParam0, 44) != 4294967295)
	{
		(*uParam1)[*iParam2] = 19;
		*iParam2++;
	}
	return;
}

int Function_287(bool bParam0, int iParam1) //Position: 0xF613 / 62995
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(bParam0, iParam1);
	return iVar0;
}

void Function_288(int iParam0) //Position: 0xF624 / 63012
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			GIVE_WEAPON_TO_ACTOR(Global_34573, 8, 0.0f, 1, 0);
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMO_ENUM(8), 18.0f, 0, 1);
			break;
	}
	return;
}

bool Function_289() //Position: 0xF659 / 63065
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_290(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0xF681 / 63105
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2))
		{
			bVar1 = GET_BLIP_ON_ACTOR(bVar2);
			if (IS_BLIP_VALID(bVar1))
			{
				if (GET_BLIP_ICON(bVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(bVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(bVar1, fParam3);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			else
			{
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, bParam1, fParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(bVar1, fParam4);
				SET_BLIP_SCALE(bVar1, fParam5);
				if (bParam7)
				{
					SET_BLIP_FLAG(bVar1, 8192, 0);
				}
			}
			if (iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2, iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(bVar2);
			}
			if (GET_BLIP_ICON(bVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(bVar1, (GET_BLIP_IMPAIRMENT_MASK(bVar1) || uParam6));
			}
		}
		bVar0++;
	}
}

void Function_291(bool bParam0) //Position: 0xF76B / 63339
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_177("GY_Blackwater_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			Function_177("GY_coots_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			Function_177("GY_Oddfellows_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			Function_177("GY_Tumbleweed_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000004:
			Function_177("GY_Sepulcro_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_292(int iParam0) //Position: 0xF84D / 63565
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_300();
			break;
		
		case 0x00000001:
			Function_299();
			break;
		
		case 0x00000004:
			Function_298();
			break;
		
		case 0x00000003:
			Function_297();
			break;
		
		case 0x00000002:
			Function_293();
			break;
	}
	return;
}

void Function_293() //Position: 0xF898 / 63640
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Pturner1", "RCMBoss_Pturner1", 0, 3, 1, 0, 1);
		Function_294(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_294(int iParam0) //Position: 0xF8E1 / 63713
{
	Function_295(0, Global_34573, iParam0, 0);
	Function_295(1, bLocal_600, iParam0, 0);
	return;
}

void Function_295(int iParam0, bool bParam1, var uParam2, int iParam3) //Position: 0xF8FB / 63739
{
	bool bVar0;
	
	iParam3 = iParam3;
	if (Function_9(uParam2, Function_296(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, bParam1, 0);
	}
}

int Function_296(bool bParam0) //Position: 0xF920 / 63776
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_297() //Position: 0xF92C / 63788
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_JimySaint1", "RCMBoss_JimySaint1", 0, 3, 1, 0, 1);
		Function_294(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_298() //Position: 0xF979 / 63865
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_DeSanta1", "RCMBoss_DeSanta1", 0, 3, 1, 0, 1);
		Function_294(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_299() //Position: 0xF9C2 / 63938
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_MissHorlk1", "RCMBoss_MissHorlk1", 0, 3, 1, 0, 1);
		Function_294(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_300() //Position: 0xFA0F / 64015
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Mordecai1", "RCMBoss_Mordecai1", 0, 3, 1, 0, 1);
		Function_294(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_301(int iParam0) //Position: 0xFA5A / 64090
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bLocal_577 = Function_320(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			bLocal_577 = Function_316(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			bLocal_577 = Function_310(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			bLocal_577 = Function_306(bLocal_622, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			bLocal_577 = Function_302(bLocal_622, 0, 1, 0, 0);
			break;
	}
	return;
}

bool Function_302(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFAD7 / 64215
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "oddBossFightGraveyard", 2, 1);
	}
	Function_303(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_303(int iParam0) //Position: 0xFB58 / 64344
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_305(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_304(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_304(int iParam0) //Position: 0xFBAD / 64429
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.66159f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2903.974f, 19.79888f, 2710.857f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.150541f, 0.507457f, 0.004521f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_305(int iParam0) //Position: 0xFC1B / 64539
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.66233f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -2904.165f, 19.51034f, 2708.177f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.102399f, 1.165359f, 0.004493f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_306(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFC89 / 64649
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "TumBossFightGraveyard", 2, 1);
	}
	Function_307(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_307(int iParam0) //Position: 0xFD0A / 64778
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_309(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_308(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_308(int iParam0) //Position: 0xFD5F / 64863
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 31.86192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3911.766f, 31.83612f, 2921.979f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.078771f, 2.88158f, 0.004278f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_309(int iParam0) //Position: 0xFDCD / 64973
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.76166f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -3913.444f, 31.26865f, 2924.223f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.117483f, -2.70611f, 0.004294f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFE3B / 65083
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 4, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "SepBossFightGraveyard", 4, 1);
	}
	Function_311(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_311(int iParam0) //Position: 0xFEBC / 65212
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_315(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_314(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 2);
	Function_313(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 3);
	Function_312(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(*iParam0, 0, 1, 4.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 2, 0.001f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(*iParam0, 2, 3, 2.5f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 3, 1.0f, 4);
	return;
}

void Function_312(int iParam0) //Position: 0xFF47 / 65351
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.537f, 13.61537f, 4300.938f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.525523f, 1.490034f, 0.001164f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_313(int iParam0) //Position: 0xFFB5 / 65461
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.537f, 13.61537f, 4300.938f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.373518f, 1.402987f, 0.001081f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_314(int iParam0) //Position: 0x10024 / 65572
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 34.77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.477f, 13.66733f, 4299.932f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.072472f, 1.915836f, 0.001009f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_315(int iParam0) //Position: 0x10092 / 65682
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 25.45625f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1383.713f, 13.89411f, 4300.767f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, -0.043377f, 1.765097f, -0.000861f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_316(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10100 / 65792
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "cootsBossFightGraveyard", 2, 1);
	}
	Function_317(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_317(int iParam0) //Position: 0x10183 / 65923
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_319(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_318(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 7.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_318(int iParam0) //Position: 0x101D8 / 66008
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 35.26746f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1763.659f, 25.13008f, 2844.199f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.133221f, -2.84744f, 0.000148f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_319(int iParam0) //Position: 0x10246 / 66118
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 23.50987f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, -1763.345f, 24.48004f, 2845.35f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.039157f, -2.624838f, 0.000147f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

bool Function_320(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x102B4 / 66228
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkBossFightGraveyard", 2, 1);
	}
	Function_321(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_321(int iParam0) //Position: 0x10335 / 66357
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_323(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_322(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.5f, 2);
	return;
}

void Function_322(int iParam0) //Position: 0x1038A / 66442
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 32.89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 530.6407f, 95.02366f, 1201.827f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.183638f, -1.091771f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_323(int iParam0) //Position: 0x103F4 / 66548
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 32.89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 531.275f, 94.5818f, 1201.307f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.145415f, -1.242507f, 0.0f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_324(int iParam0) //Position: 0x1045E / 66654
{
	Function_326(bLocal_600, 2, 0);
	TASK_MELEE_ATTACK(bLocal_600, Global_34573, -1.0f);
	SET_ACTOR_INVULNERABILITY(bLocal_600, 0);
	Function_325(bLocal_600, 1, 1, 1, 1, 0, 1);
	ENABLE_MOVER(bLocal_600);
	switch (iParam0->f_152)
	{
		case 0x00000000:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_600, 392, 0, 2, 0), "BLK_BOSS_NAME");
			break;
		
		case 0x00000001:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_600, 392, 0, 2, 0), "COOTS_BOSS_NAME");
			break;
		
		case 0x00000002:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_600, 392, 0, 2, 0), "ODD_BOSS_NAME");
			break;
		
		case 0x00000003:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_600, 392, 0, 2, 0), "TUM_BOSS_NAME");
			break;
		
		case 0x00000004:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(bLocal_600, 392, 0, 2, 0), "SEP_BOSS_NAME");
			break;
	}
	return;
}

void Function_325(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x10562 / 66914
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

void Function_326(bool bParam0, int iParam1, bool bParam2) //Position: 0x1059F / 66975
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	
	SET_ALLOW_EXECUTE(bParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(bParam0);
	switch (iParam1)
	{
		case 0x00000001:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			FIND_GROUND_INTERSECTION(&vVar0, 10.0f, &vVar3, &vVar6);
			vVar3.f_4 = (vVar3.y + 0.05f);
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_38(), "script_zombie_emerge", vVar3);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_37();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_38(), vVar3, Function_37());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(bParam0, &vVar0);
			GET_ACTOR_AXIS(bParam0, &vVar3, 2);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Vector(vVar3, vVar0, StackVal) * Vector(0.75f, 0.75f, 0.75f), StackVal, StackVal) };
			bVar9 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bParam0, Function_38(), "script_zombie_emerge", vVar0);
			if (IS_OBJECT_VALID(bVar9))
			{
				Function_37();
				bVar10 = CREATE_POINT_IN_LAYOUT(bParam0, Function_38(), vVar0, Function_37());
				SNAP_OBJECT_TO_GROUND(bVar10, 2.5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(bVar10, &vVar6);
				DESTROY_OBJECT(bVar10);
				UNK_0x6745191B(bVar9, vVar6);
			}
			break;
	}
	if (!bParam2)
	{
		if (!DECOR_CHECK_EXIST(bParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(bParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(bParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(bParam0, "WakeUpFast", true);
	}
	return;
}

bool Function_327(int iParam0, float fParam1) //Position: 0x1074F / 67407
{
	if (Function_358(iParam0, fParam1))
	{
		Function_328(iParam0);
		return 1;
	}
	return 0;
}

void Function_328(int iParam0) //Position: 0x10767 / 67431
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

int Function_329(int iParam0) //Position: 0x1077B / 67451
{
	if (!iLocal_597)
	{
		Function_355(iParam0);
		iLocal_597 = 1;
	}
	if (*iParam0 <= iParam0->f_148 && !IS_PLAYER_DEADEYE(false))
	{
		Function_356(&iLocal_601, -1.0f);
		Function_356(&iLocal_563, -2.0f);
		iParam0->f_4 = 7;
	}
	Function_338(iParam0);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_24))
	{
		iParam0->f_20++;
		Function_334(iParam0->f_24);
		Function_332(iParam0, EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_28));
		EVENT_TRAP_CLEAR_EVENTS(iParam0->f_24);
		EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_24);
		EVENT_TRAP_CLEAR_EVENTS(iParam0->f_28);
		EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_28);
	}
	if (iParam0->f_44 >= iParam0->f_48)
	{
		Function_330(iParam0);
	}
	Function_284(iParam0);
	if (iLocal_596 && Function_289())
	{
		Function_177("GY_objective_1", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_596 = 0;
	}
	return 0;
}

void Function_330(int iParam0) //Position: 0x10844 / 67652
{
	Function_356(&iLocal_601, -5.0f);
	Function_331(iParam0);
	*iParam0++;
	if (iParam0->f_12 <= iParam0->f_16)
	{
		iParam0->f_12++;
	}
	return;
}

void Function_331(int iParam0) //Position: 0x10877 / 67703
{
	iParam0->f_48 = (iParam0->f_48 + (50 * *iParam0));
	return;
}

void Function_332(var uParam0, bool bParam1) //Position: 0x1088C / 67724
{
	int iVar0;
	
	iVar0 = 0;
	switch (StackVal)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 10;
			break;
		
		case 0x00000004:
			iVar0 = 10;
			break;
		
		case 0x00000005:
			iVar0 = 15;
			break;
		
		case 0x00000006:
			iVar0 = 20;
			break;
		
		case 0x00000007:
			iVar0 = 25;
			break;
		
		case 0x00000008:
			iVar0 = 30;
			break;
		
		case 0x00000009:
			iVar0 = 40;
			break;
		
		default:
			if (StackVal <= 15)
			{
				iVar0 = 50;
			}
			else
			{
				iVar0 = 100;
			}
			break;
	}
	if (bParam1)
	{
		Function_333(uParam0, ((10 + iVar0) * CEIL(1.25f)));
	}
	else
	{
		Function_333(uParam0, (10 + iVar0));
	}
	return;
}

void Function_333(var uParam0, int iParam1) //Position: 0x1095B / 67931
{
	uParam0->f_44 = (uParam0->f_44 + iParam1);
	return;
}

void Function_334(bool bParam0) //Position: 0x1096C / 67948
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_622);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		return;
	}
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 3);
	bVar4 = START_OBJECT_ITERATOR(bVar0);
	if (!IS_OBJECT_VALID(bVar4))
	{
	}
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar2 = GET_EVENT_FROM_OBJECT(bVar4);
		bVar3 = GET_EVENT_TARGET_AS_OBJECT(bVar2);
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar3);
		if (IS_OBJECT_VALID(bVar3))
		{
			if (IS_ACTOR_VALID(bVar1))
			{
				if ((Function_337(bVar1) || Function_336(bVar1)) || Function_335(bVar1))
				{
					iLocal_594 = (iLocal_594 - 1);
				}
			}
			else
			{
				LOG_ERROR("our actor is not valid?!");
			}
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

bool Function_335(bool bParam0) //Position: 0x10A2C / 68140
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

int Function_336(bool bParam0) //Position: 0x10A4C / 68172
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

int Function_337(bool bParam0) //Position: 0x10A6C / 68204
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

void Function_338(int iParam0) //Position: 0x10A8C / 68236
{
	int iVar1;
	
	if (Function_256(&iLocal_601) < 0.0f)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(StackVal) <= iParam0->f_12)
		{
			Function_349(iParam0);
			if (iLocal_594 <= iParam0->f_152)
			{
				if (*iParam0 <= 4 && iLocal_594 > iParam0->f_152)
				{
					iVar1 = 2;
				}
				else if (*iParam0 <= 3 && iLocal_594 > iParam0->f_152)
				{
					iVar1 = 1;
				}
				else if (*iParam0 <= 2 && iLocal_594 > iParam0->f_152)
				{
					iVar1 = 0;
				}
				else
				{
					iVar1 = 4294967295;
				}
				if (iLocal_595 >= iVar1)
				{
					iLocal_595 = 0;
				}
				if (iVar1 != 4294967295)
				{
					switch (iLocal_595)
					{
						case 0x00000000:
							Function_345(iParam0, bLocal_573);
							Function_343(&bLocal_573, 1214, 1221);
							break;
						
						case 0x00000001:
							Function_345(iParam0, bLocal_574);
							Function_343(&bLocal_574, 1204, 1213);
							break;
						
						case 0x00000002:
							Function_345(iParam0, bLocal_575);
							Function_343(&bLocal_575, 1222, 1227);
							break;
					}
					iLocal_621++;
					iLocal_594++;
					iLocal_595++;
				}
			}
			Function_342(iParam0);
			Function_356(&iLocal_601, -0.5f);
			iLocal_621++;
			if (iLocal_621 >= 20)
			{
				Function_339(StackVal, StackVal, *(iParam0 + 32), 20.0f);
				iLocal_621 = 0;
			}
		}
	}
	return;
}

void Function_339(vector3 vParam0, float fParam3) //Position: 0x10BBE / 68542
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		Function_341(bVar1);
		if ((GET_OBJECT_TYPE(bVar1) != 29 && VDIST(vParam0, Function_341(bVar1)) >= fParam3) && !Function_340(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			DESTROY_OBJECT(bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
}

bool Function_340(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10C28 / 68648
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

vector3 Function_341(bool bParam0) //Position: 0x10C42 / 68674
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_342(int iParam0) //Position: 0x10C69 / 68713
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		if (IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0)))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
			SQUAD_LEAVE(bVar1);
			RELEASE_ACTOR(bVar1);
			Function_333(iParam0, 40);
		}
		bVar0++;
	}
	return "";
}

void Function_343(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10CB4 / 68788
{
	STREAMING_EVICT_ACTOR(*bParam0, 4294967295);
	*bParam0 = Function_344(bParam1, bParam2);
	STREAMING_REQUEST_ACTOR(*bParam0, true, false);
	return;
}

var Function_344(bool bParam0, bool bParam1) //Position: 0x10CD3 / 68819
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	bVar1 = RAND_INT_RANGE(bParam0, bParam1);
	bVar0 = bVar1;
	return bVar0;
}

void Function_345(int iParam0, bool bParam1) //Position: 0x10CFA / 68858
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = Function_348();
	Function_341((*iParam0 + 76)[iVar1]);
	Function_347((*iParam0 + 76)[iVar1]);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), bParam1, Function_341((*iParam0 + 76)[iVar1]), Function_347((*iParam0 + 76)[iVar1]));
	Function_346(bVar0, 1, 1);
	SQUAD_JOIN(StackVal, bVar0);
	if (Function_335(bVar0))
	{
		TASK_GO_NEAR_ACTOR(bVar0, Global_34573, 20.0f, 2);
	}
	else
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
		bVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(false, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(false, Global_34573, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
	}
	return;
}

void Function_346(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10D8F / 69007
{
	switch (bParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(bParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(bParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (bParam1 != 4294967295)
	{
		if (bParam2)
		{
			Function_326(bParam0, bParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(bParam0);
			SET_ALLOW_EXECUTE(bParam0, 0);
		}
	}
	return;
}

vector3 Function_347(bool bParam0) //Position: 0x10E41 / 69185
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

var Function_348() //Position: 0x10E68 / 69224
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 14);
	if (bLocal_616 != bVar0)
	{
		bLocal_616 = bVar0;
	}
	else
	{
		bVar0++;
		if (bVar0 >= 14)
		{
			bVar0 = false;
		}
		bLocal_616 = bVar0;
	}
	return bVar0;
}

void Function_349(int iParam0) //Position: 0x10E9D / 69277
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (STREAMING_IS_ACTOR_LOADED(iLocal_566[iLocal_576], 4294967295))
	{
		iVar1 = Function_348();
		Function_341((*iParam0 + 76)[iVar1]);
		Function_347((*iParam0 + 76)[iVar1]);
		bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), iLocal_566[iLocal_576], Function_341((*iParam0 + 76)[iVar1]), Function_347((*iParam0 + 76)[iVar1]));
		Function_351(bVar0, 1254, 4294967295, 4294967295, 2, 1, 1, 1);
		SQUAD_JOIN(StackVal, bVar0);
		DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
		bVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(false, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(false, Global_34573, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(false, Global_34573, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(bVar0, bVar2);
		TASK_SEQUENCE_RELEASE(bVar2, 1);
		Function_350();
		iLocal_576++;
		if (iLocal_576 > 5)
		{
			iLocal_576 = 0;
		}
	}
	else
	{
		iLocal_576++;
		if (iLocal_576 > 5)
		{
			iLocal_576 = 0;
		}
	}
	return;
}

void Function_350() //Position: 0x10F61 / 69473
{
	bLocal_610++;
	if (bLocal_610 >= (GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]) - 1))
	{
		bLocal_610 = false;
	}
	STREAMING_EVICT_ACTOR(iLocal_566[iLocal_576], 4294967295);
	iLocal_566[iLocal_576] = GET_ACTORENUM_IN_POPULATION(Global_30750[0], bLocal_610);
	STREAMING_REQUEST_ACTOR(iLocal_566[iLocal_576], true, false);
	return;
}

void Function_351(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x10FB1 / 69553
{
	int iVar0;
	
	if (Function_41(bParam0) && !Function_39(bParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(bParam0, iParam1);
	if (bParam2 == 4294967294 && bParam3 == 4294967294)
	{
		if (bParam2 == 4294967295)
		{
			bParam2 = RAND_INT_RANGE(false, 4);
		}
		if (bParam3 == 4294967295)
		{
			bParam3 = RAND_INT_RANGE(false, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(bParam0, bParam2, bParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (bParam6)
	{
		DEEQUIP_ACCESSORY(bParam0, 0);
	}
	if (bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(bParam0);
	}
	Function_353(bParam0);
	DECOR_SET_BOOL(bParam0, "Zombie", true);
	Function_352(bParam0);
	SET_ACTOR_ALLOW_DISARM(bParam0, 0);
	SET_CRIPPLE_ENABLE(bParam0, 0);
	SET_CRIPPLE_FLAG(bParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(bParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(bParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.0f, 1.115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(bParam0, 0, 0);
	iVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(iVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, iVar0, 1);
	}
	if (iParam1 <= 1204 && iParam1 >= 1213)
	{
		DECOR_SET_BOOL(bParam0, "FastZombie", true);
	}
	else if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		DECOR_SET_BOOL(bParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 12.5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 0.5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(bParam0, "head");
	if (iParam1 <= 1214 && iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(bParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(bParam0, 2020.0f, 1);
	}
	Function_346(bParam0, iParam4, iParam5);
}

void Function_352(bool bParam0) //Position: 0x11214 / 70164
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

void Function_353(bool bParam0) //Position: 0x11248 / 70216
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_354(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_354(var uParam0, bool bParam1) //Position: 0x115AC / 71084
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

void Function_355(int iParam0) //Position: 0x115CE / 71118
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Function_341((*iParam0 + 52)[iVar0 + 1]);
		Function_347((*iParam0 + 52)[iVar0 + 1]);
		Local_628[iVar04] = CREATE_PROP_IN_LAYOUT(bLocal_622, Function_38(), "$/fragments/p_gen_coffin04x", Function_341((*iParam0 + 52)[iVar0 + 1]), Function_347((*iParam0 + 52)[iVar0 + 1]), 1);
		SNAP_OBJECT_TO_GROUND(Local_628[iVar04], 5.0f, true, 1092616192);
		Function_341(Local_628[iVar04]);
		CLEAR_AREA_OF_GRASS(Function_341(Local_628[iVar04]), 2.0f);
		Function_341(Local_628[iVar04]);
		CLEAR_AREA_OF_TREE_TYPE(Function_341(Local_628[iVar04]), 2.0f, "");
		Local_628[iVar04].f_4 = 0;
		SET_PROP_AI_OBSTACLE_ENABLED(Local_628[iVar04], 1);
		bVar1 = ADD_BLIP_FOR_OBJECT(Local_628[iVar04], 330, 0f, 2, 0);
		SET_BLIP_SCALE(bVar1, 0.75f);
		SET_BLIP_NAME(bVar1, "blip_coffin");
		Function_341((*iParam0 + 52)[iVar0 + 1]);
		Function_347((*iParam0 + 52)[iVar0 + 1]);
		Local_628[iVar04].f_8 = CREATE_VOLUME_IN_LAYOUT(bLocal_622, Function_38(), 2, Function_341((*iParam0 + 52)[iVar0 + 1]), Function_347((*iParam0 + 52)[iVar0 + 1]), 3.0f, 1.5f, 3.0f);
		Local_628[iVar04].f_12 = CREATE_EVENT_TRAP(Function_38(), 17, bLocal_622);
		EVENT_TRAP_STORE_EVENTS(Local_628[iVar04].f_12, 1);
		EVENT_TRAP_ON_VOLUME(StackVal, Local_628[iVar04].f_12);
		iVar0++;
	}
	return;
}

void Function_356(int iParam0, bool bParam1) //Position: 0x11711 / 71441
{
	iParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_217(iParam0, 1);
	Function_44(iParam0, 2);
	iParam0->f_8 = 0.0f;
	return;
}

void Function_357() //Position: 0x11732 / 71474
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	Function_166(Global_34573);
	vVar0 = { StackVal, StackVal, Function_166(Global_34573) };
	bVar3 = RAND_INT_RANGE(50, 100);
	bVar4 = Function_42();
	if (bVar4)
	{
		bVar3 *= true;
	}
	else
	{
		bVar3 = (bVar3 * 4294967295);
	}
	vVar0.x = (vVar0.x + IntToFloat(bVar3));
	vVar0.f_8 = (vVar0.z + IntToFloat(bVar3));
	if (IS_OBJECT_VALID(bLocal_623))
	{
		UNK_0x7246F438(bLocal_623);
	}
	bLocal_623 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_622, Function_38(), "env_lightningForked_stormy", vVar0);
	UNK_0x6745191B(bLocal_623, 0.0f, 0.0f, 0.0f);
	return;
}

bool Function_358(int iParam0, float fParam1) //Position: 0x117BE / 71614
{
	if (Function_258(iParam0))
	{
		if (Function_256(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_359(int iParam0) //Position: 0x117DA / 71642
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (StackVal && !IS_OBJECT_VALID(Local_628[iVar04].f_12))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(Local_628[iVar04].f_12))
			{
				if (Function_360(Local_628[iVar04].f_12))
				{
					Local_628[iVar04].f_4 = 1;
					Function_285();
					DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(Local_628[iVar04], "LootCoffin"));
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Local_628[iVar04]));
					EVENT_TRAP_CLEAR_TRAP_FLAG(Local_628[iVar04].f_12);
					EVENT_TRAP_CLEAR_EVENTS(Local_628[iVar04].f_12);
					bVar1 = Local_628[iVar04];
					iVar2 = 0;
					if (GET_OBJECT_TYPE(bVar1) == 17)
					{
						Function_341(bVar1);
						UNK_0x6745191B(CREATE_RMPTFX_EMITTER_IN_LAYOUT(bLocal_622, Function_38(), "fire_zombie_02_dataSphere", Function_341(bVar1)), 0.0f, 0.0f, 0.0f);
					}
					iLocal_615++;
					if (iLocal_615 <= 2 && !iLocal_614)
					{
						iLocal_614 = 1;
						iParam0->f_12++;
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

bool Function_360(bool bParam0) //Position: 0x118E0 / 71904
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bLocal_622);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(bParam0);
		EVENT_TRAP_CLEAR_EVENTS(bParam0);
		return 0;
	}
	ITERATE_IN_EVENT_TRAP(bVar0, bParam0);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	if (!IS_OBJECT_VALID(bVar2))
	{
	}
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar1 = GET_EVENT_FROM_OBJECT(bVar2);
		if (DECOR_GET_STRING_HASH(bVar1, "ExplosionType") == STRING_TO_HASH("FireBottleExplosion"))
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

void Function_361(bool bParam0) //Position: 0x11976 / 72054
{
	if (HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_FADE_IN(bParam0, 1065353216);
		}
	}
	return;
}

void Function_362(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x11993 / 72083
{
	bool bVar0;
	
	bParam1 = bParam1;
	if (bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (bParam3)
		{
			SET_PLAYER_CONTROL(false, 1, 0, 0);
		}
		bVar0 = Function_109();
		if (IS_ACTOR_VALID(bVar0))
		{
			if (bParam2)
			{
				TASK_CLEAR(bVar0);
			}
			if (!bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(bVar0, 1);
				}
			}
			if (Function_74())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar0) || IS_ACTOR_USING_LEDGE(bVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(bVar0);
					if (iParam0 != 0 || (iParam0 != 2 && Global_76850))
					{
						ACTOR_DRAW_LAST_WEAPON(bVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(bVar0);
			}
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_82(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_135();
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_363(iParam9);
}

void Function_363(bool bParam0) //Position: 0x11A83 / 72323
{
	bParam0 = bParam0;
	HUD_ENABLE(bParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_364();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_63096 = 0;
	Global_63097 = 0;
	if (IS_VOLUME_VALID(Global_63117))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(Global_63117))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Global_63117);
		}
	}
	return;
}

void Function_364() //Position: 0x11B32 / 72498
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

int Function_365() //Position: 0x11BA4 / 72612
{
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1.5f)
		{
			return 0;
		}
	}
	if (HUD_IS_FADING())
	{
		return 0;
	}
	if (IS_BUTTON_PRESSED(GET_PLAYER_PADINDEX_NO_ACTOR(0), 6, 1, false))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused") && !UI_ISACTIVE("PauseScene"))
		{
			Function_82(20, 1, 0, 0);
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_366(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_611 = true;
			STREAMING_RELEASE_MAIN_POI();
			return 1;
		}
	}
	return 0;
}

void Function_366(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x11C20 / 72736
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, iParam5);
		}
	}
}

void Function_367(int iParam0) //Position: 0x11C49 / 72777
{
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_372(iParam0->f_140);
			break;
		
		case 0x00000001:
			Function_371(iParam0->f_140);
			break;
		
		case 0x00000002:
			Function_370(iParam0->f_140);
			break;
		
		case 0x00000003:
			Function_369(iParam0->f_140);
			break;
		
		case 0x00000004:
			Function_368(iParam0->f_140);
			break;
	}
	SET_ACTOR_MAX_HEALTH(bLocal_600, 35.0f);
	SET_ACTOR_HEALTH(bLocal_600, 35.0f);
	DECOR_SET_BOOL(bLocal_600, "CanBeLasso", false);
	SET_ACTOR_INVULNERABILITY(bLocal_600, 1);
	Function_325(bLocal_600, 0, 1, 1, 1, 0, 1);
	SUSPEND_MOVER(bLocal_600);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(GET_OBJECT_FROM_ACTOR(bLocal_600));
	SET_ACTOR_UPDATE_PRIORITY(bLocal_600, false);
	Function_341(iParam0->f_140);
	STREAMING_LOAD_BOUNDS(Function_341(iParam0->f_140), 3.0f, 0);
	return;
}

void Function_368(bool bParam0) //Position: 0x11D08 / 72968
{
	Function_341(bParam0);
	Function_347(bParam0);
	bLocal_600 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), 556, Function_341(bParam0), Function_347(bParam0));
	Function_351(bLocal_600, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_369(bool bParam0) //Position: 0x11D36 / 73014
{
	Function_341(bParam0);
	Function_347(bParam0);
	bLocal_600 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), 357, Function_341(bParam0), Function_347(bParam0));
	Function_351(bLocal_600, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_370(bool bParam0) //Position: 0x11D64 / 73060
{
	Function_341(bParam0);
	Function_347(bParam0);
	bLocal_600 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), 182, Function_341(bParam0), Function_347(bParam0));
	Function_351(bLocal_600, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_371(bool bParam0) //Position: 0x11D91 / 73105
{
	Function_341(bParam0);
	Function_347(bParam0);
	bLocal_600 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), 332, Function_341(bParam0), Function_347(bParam0));
	Function_351(bLocal_600, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_372(bool bParam0) //Position: 0x11DBF / 73151
{
	Function_341(bParam0);
	Function_347(bParam0);
	bLocal_600 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), 1220, Function_341(bParam0), Function_347(bParam0));
	Function_346(bLocal_600, 2, 0);
	SET_ACTOR_PROOF(bLocal_600, 4194304);
	return;
}

var Function_373(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x11DF0 / 73200
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381)
	{
		Function_378(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_377())
		{
			return "";
		}
	}
	if (!Function_375())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_364();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_341(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_341(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_341(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_341(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_374(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_374(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_74() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_38(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_38(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_167(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_38(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_38(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_325(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_74() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

var Function_374(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12146 / 74054
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_375() //Position: 0x121E1 / 74209
{
	if (Function_376() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_376() //Position: 0x121F7 / 74231
{
	return Global_12976.f_152;
}

bool Function_377() //Position: 0x12202 / 74242
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_378(var uParam0, bool bParam1, bool bParam2) //Position: 0x12222 / 74274
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_217(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_217(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_379(int iParam0) //Position: 0x1224F / 74319
{
	if (!Function_258(iParam0))
	{
		Function_356(iParam0, 0.0f);
	}
	return;
}

void Function_380(int iParam0, int iParam1) //Position: 0x12264 / 74340
{
	if (!Function_258(iParam0))
	{
		Function_356(iParam0, iParam1);
	}
	return;
}

var Function_381(bool bParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1227A / 74362
{
	bool bVar0;
	
	if (bParam2)
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, Function_38(), 2, 1);
	}
	else
	{
		bVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(bParam0, "blkFirstTimeGraveyard", 2, 1);
	}
	Function_382(&bVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(bVar0))
	{
		DESTROY_OBJECT(bVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(bVar0), "");
		if (bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(bVar0, bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(bVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return bVar0;
}

void Function_382(int iParam0) //Position: 0x122FB / 74491
{
	bool bVar0;
	
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 0);
	Function_384(&bVar0);
	bVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*iParam0, 1);
	Function_383(&bVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 0, 0.5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*iParam0, 0, 1, 8.5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(*iParam0, 1, 0.09f, 2);
	return;
}

void Function_383(int iParam0) //Position: 0x12350 / 74576
{
	SET_CAMERASHOT_PERSPECTIVE(*iParam0, 1);
	SET_CAMERASHOT_FOV(*iParam0, 29.71252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*iParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*iParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*iParam0, 0);
	SET_CAMERASHOT_POSITION(*iParam0, 542.7578f, 93.98339f, 1198.781f);
	SET_CAMERASHOT_ORIENTATION(*iParam0, 0.325511f, 2.072496f, -2E-06f, 1);
	RESET_CAMERASHOT_TARGET(*iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*iParam0);
	return;
}

void Function_384(bool bParam0) //Position: 0x123BE / 74686
{
	SET_CAMERASHOT_PERSPECTIVE(*bParam0, 1);
	SET_CAMERASHOT_FOV(*bParam0, 29.73172f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*bParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*bParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*bParam0, 0);
	SET_CAMERASHOT_POSITION(*bParam0, 542.1422f, 93.89145f, 1200.29f);
	SET_CAMERASHOT_ORIENTATION(*bParam0, 0.249336f, 1.708657f, -2E-06f, 1);
	RESET_CAMERASHOT_TARGET(*bParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(*bParam0);
	return;
}

void Function_385(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x1242C / 74796
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	iParam1 = iParam1;
	if (bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(false);
	Function_135();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_109();
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_WEAPON_IN_HAND(bVar1) != 4294967295)
			{
				Global_76850 = 1;
			}
			else
			{
				Global_76850 = 0;
			}
			if (bParam3)
			{
				TASK_CLEAR(bVar1);
			}
			if (bParam11)
			{
				bVar2 = GET_ATTACHED_HOGTIE_VICTIM(bVar1);
				if (IS_ACTOR_VALID(bVar2))
				{
					FREE_FROM_HOGTIE(bVar2);
					HOGTIE_ACTOR(bVar2);
				}
			}
			if (Function_74())
			{
				if (!(IS_ACTOR_ON_LADDER(bVar1) || IS_ACTOR_USING_LEDGE(bVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
					}
					if (bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
				}
				if (bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
			AI_IGNORE_ACTOR(bVar1);
		}
		SET_PLAYER_CONTROL(false, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(false))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (bParam8)
		{
			if (IS_VOLUME_VALID(bParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(bParam7);
				DELETE_PROJECTILES_IN_VOLUME(bParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_166(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_38(), 2, Function_166(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_82(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (iParam10 && !Function_176())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_386()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_386()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, true);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(Global_34573));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_63096 = 1;
	Global_63116 = GET_THIS_SCRIPT_ID();
	Global_63117 = "";
	if (IS_VOLUME_VALID(bVar0))
	{
		DESTROY_VOLUME(bVar0);
	}
	if (Function_54(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_118(0x4000000);
	}
	if (Function_54(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_118(0x8000000);
	}
}

var Function_386() //Position: 0x126DA / 75482
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(bVar0);
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		ITERATE_ON_OBJECT_TYPE(bVar1, 42);
		if (IS_OBJECT_VALID(bVar2))
		{
			while (IS_OBJECT_VALID(bVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(bVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(bVar2), "bino_camera"))
				{
					return bVar2;
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return "";
}

void Function_387(bool bParam0) //Position: 0x12759 / 75609
{
	bool bVar0;
	
	Function_341((*bParam0 + 76)[0]);
	Function_347((*bParam0 + 76)[0]);
	bVar0 = CREATE_ACTOR_IN_LAYOUT(bLocal_622, Function_38(), iLocal_566[iLocal_576], Function_341((*bParam0 + 76)[0]), Function_347((*bParam0 + 76)[0]));
	Function_351(bVar0, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	SQUAD_JOIN(StackVal, bVar0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	TASK_GO_NEAR_ACTOR(bVar0, Global_34573, 3.0f, 1);
	Function_350();
	iLocal_576++;
	return;
}

bool Function_388() //Position: 0x127B7 / 75703
{
	bool bVar0;
	
	bVar0 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0)), "dlc_player_burn_coffin"))
		{
			if (!iLocal_646)
			{
				Function_380(&iLocal_563, 0.0f);
				iLocal_646 = 1;
			}
			else if (Function_358(&iLocal_563, 1.5f))
			{
				iLocal_646 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void Function_389() //Position: 0x1281E / 75806
{
	bool bVar0;
	
	bVar0 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(bVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(bVar0)), "dlc_player_burn_coffin"))
		{
			iLocal_612 = 1;
			SET_ACTOR_PROOF(Global_34573, 16);
			fLocal_613 = GET_CURRENT_GAME_TIME();
		}
	}
	if (iLocal_612)
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_613) < 7.5f)
		{
			CLEAR_ACTOR_PROOF(Global_34573, 16);
			iLocal_612 = 0;
		}
	}
	return;
}

void Function_390(int iParam0) //Position: 0x1288F / 75919
{
	int iVar0;
	int iVar1;
	
	bLocal_622 = CREATE_LAYOUT("ngraveyard");
	if (IS_LAYOUTREF_VALID(bLocal_622))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			iLocal_566[iVar0] = GET_ACTORENUM_IN_POPULATION(Global_30750[0], bLocal_610);
			STREAMING_REQUEST_ACTOR(iLocal_566[iVar0], true, false);
			bLocal_610++;
			iVar0++;
		}
		bLocal_572 = Function_344(9, 15);
		STREAMING_REQUEST_ACTOR(bLocal_572, true, false);
		bLocal_573 = Function_344(1214, 1221);
		STREAMING_REQUEST_ACTOR(bLocal_573, true, false);
		bLocal_574 = Function_344(1204, 1213);
		STREAMING_REQUEST_ACTOR(bLocal_574, true, false);
		bLocal_575 = Function_344(1222, 1227);
		STREAMING_REQUEST_ACTOR(bLocal_575, true, false);
		iLocal_576 = 0;
		iLocal_594 = 0;
		iLocal_595 = 0;
		iLocal_596 = 1;
		bLocal_598 = false;
		iLocal_599 = 0;
		bLocal_611 = false;
		iLocal_615 = 0;
		iLocal_614 = 0;
		if (!SQUAD_IS_VALID(StackVal))
		{
			iParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bLocal_622, "Squad_Zombie"));
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(StackVal);
			iVar1 |= 2048;
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(StackVal, iVar1);
		}
		*iParam0 = 1;
		iParam0->f_44 = 0;
		iParam0->f_20 = 0;
		iParam0->f_48 = 75;
		if (iParam0->f_152 != 0 && Function_394(Global_30734) >= 0)
		{
			iParam0->f_4 = 2;
		}
		else
		{
			iParam0->f_4 = 3;
		}
		if (Global_3421)
		{
			iParam0->f_12 = 2;
			iParam0->f_16 = 6;
		}
		iLocal_597 = 0;
		Function_380(&iLocal_601, -5.0f);
		if (!IS_OBJECT_VALID(iParam0->f_24))
		{
			iParam0->f_24 = CREATE_EVENT_TRAP("killET", 2, bLocal_622);
			EVENT_TRAP_ON_PERPETRATOR(iParam0->f_24, Global_34573);
			EVENT_TRAP_STORE_EVENTS(iParam0->f_24, 1);
		}
		if (!IS_OBJECT_VALID(iParam0->f_28))
		{
			iParam0->f_28 = CREATE_EVENT_TRAP("headshotET", 10, bLocal_622);
			EVENT_TRAP_ON_PERPETRATOR(iParam0->f_28, Global_34573);
			EVENT_TRAP_STORE_EVENTS(iParam0->f_28, 1);
		}
		Function_341((*iParam0 + 52)[0]);
		Function_347((*iParam0 + 52)[0]);
		Local_624 = CREATE_PROP_IN_LAYOUT(bLocal_622, Function_38(), "$/fragments/p_gen_coffin04x", Function_341((*iParam0 + 52)[0]), Function_347((*iParam0 + 52)[0]), 1);
		SNAP_OBJECT_TO_GROUND(Local_624, 5.0f, true, 1092616192);
		SET_PROP_AI_OBSTACLE_ENABLED(Local_624, 1);
		Function_341(Local_624);
		CLEAR_AREA_OF_GRASS(Function_341(Local_624), 2.0f);
		Function_341(Local_624);
		CLEAR_AREA_OF_TREE_TYPE(Function_341(Local_624), 2.0f, "");
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(Local_624, 330, 0f, 2, 0), "blip_coffin");
		Function_177("GY_Burn_coffin", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_392(iParam0);
		Global_3385 = 1;
		if (DECOR_CHECK_EXIST(Global_34573, "bStartedGY"))
		{
			DECOR_REMOVE(Global_34573, "bStartedGY");
		}
		AUDIO_MUSIC_FORCE_TRACK(Function_391(iParam0->f_152), "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_391(int iParam0) //Position: 0x12B54 / 76628
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, RETURN TC_NRT_SONG_01!");
		return "TC_NRT_SONG_01";
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "TC_NRT_SONG_01";
			break;
		
		case 0x00000001:
			return "TC_FTR_SONG_02";
			break;
		
		case 0x00000004:
			return "TC_MEX_SONG_01";
			break;
		
		case 0x00000003:
			return "TC_FTR_SONG_04";
			break;
		
		case 0x00000002:
			return "TC_FTR_SONG_03";
			break;
	}
	return "TC_NRT_SONG_01";
}

void Function_392(int iParam0) //Position: 0x12C72 / 76914
{
	bool bVar0;
	
	switch (iParam0->f_152)
	{
		case 0x00000000:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_393(bVar0);
			}
			break;
		
		case 0x00000001:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "coots_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_393(bVar0);
			}
			break;
		
		case 0x00000003:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "tumbleweed_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_393(bVar0);
			}
			break;
		
		case 0x00000002:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "oddfellows_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_393(bVar0);
			}
			break;
		
		case 0x00000004:
			bVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "sepulcro_gy_blip_vol");
			if (IS_VOLUME_VALID(bVar0))
			{
				Function_393(bVar0);
			}
			break;
	}
	return;
}

void Function_393(bool bParam0) //Position: 0x12DF1 / 77297
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		while (IS_BLIP_VALID(bVar0))
		{
			REMOVE_BLIP(bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(bParam0);
		}
	}
	return;
}

int Function_394(bool bParam0) //Position: 0x12E1D / 77341
{
	if (!Function_49(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

bool Function_395() //Position: 0x12E37 / 77367
{
	if (!Function_186(&bLocal_578))
	{
		return 0;
	}
	return 1;
}

void Function_396(int iParam0) //Position: 0x12E4A / 77386
{
	Function_191(&bLocal_578, "repeater_carbine01x", 0, 0);
	switch (iParam0->f_152)
	{
		case 0x00000000:
			Function_397(&bLocal_578, 1220, 3, 0);
			break;
		
		case 0x00000001:
			Function_397(&bLocal_578, 332, 3, 0);
			break;
		
		case 0x00000003:
			Function_397(&bLocal_578, 357, 3, 0);
			break;
		
		case 0x00000002:
			Function_397(&bLocal_578, 182, 3, 0);
			break;
		
		case 0x00000004:
			Function_397(&bLocal_578, 556, 3, 0);
			break;
	}
	return;
}

var Function_397(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x12EE0 / 77536
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*bParam0 - 1))
	{
		if (!Function_26(bParam0[iVar03], 4))
		{
			(*bParam0)[iVar03] = iParam1;
			bParam0[iVar03]->f_4 = 3;
			Function_189(bParam0[iVar03], 4);
			if (bParam3)
			{
				Function_189(bParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*bParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_398(bool bParam0, float fParam1) //Position: 0x12FB0 / 77744
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

void Function_399(bool bParam0, bool bParam1) //Position: 0x12FEE / 77806
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = bParam1;
	Global_29006 = bParam1;
	if (IS_OBJECT_VALID(Global_29155[bParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[bParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[bParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_93(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_74())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_400(int iParam0) //Position: 0x130E8 / 78056
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_401(bool bParam0) //Position: 0x130FB / 78075
{
	Function_402(StackVal, 0, 0.25f, 3, Local_108, 1);
	return;
}

void Function_402(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x13117 / 78103
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(bParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	if (NET_IS_IN_SESSION())
	{
		if (iParam2 != 1 || iParam2 != 2)
		{
			iParam2 = 4;
		}
	}
	Global_28842.f_4 = iParam2;
	Global_28842.f_12 = uParam0;
	Global_28842.f_20 = bParam3;
	Global_28842.f_24 = bParam4;
	Global_28842.f_32 = uParam1;
	bVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(bVar0))
	{
		ITERATE_ON_OBJECT_TYPE(bVar0, 9);
		ITERATE_ON_PARTIAL_NAME(bVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(bVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_405();
	}
	if (bParam5)
	{
		Function_403(1048576);
	}
}

void Function_403(int iParam0) //Position: 0x1322A / 78378
{
	Function_404(&Global_28842, iParam0);
	return;
}

void Function_404(var uParam0, var uParam1) //Position: 0x13238 / 78392
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_405() //Position: 0x13253 / 78419
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_403(16384);
	}
	return;
}

void Function_406(var uParam0) //Position: 0x1326F / 78447
{
	uParam0 = uParam0;
	return;
}

void Function_407() //Position: 0x13279 / 78457
{
	return;
}

void Function_408(int iParam0) //Position: 0x1327F / 78463
{
	iParam0 = iParam0;
	return;
}

void Function_409(var uParam0, int iParam1) //Position: 0x13289 / 78473
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_410(int iParam0, int iParam1) //Position: 0x132A0 / 78496
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_411() //Position: 0x132BC / 78524
{
	return;
}

void Function_412() //Position: 0x132C2 / 78530
{
	return;
}

void Function_413(int iParam0) //Position: 0x132C8 / 78536
{
	iParam0 = iParam0;
	return;
}

void Function_414(int iParam0, bool bParam1, bool bParam2) //Position: 0x132D2 / 78546
{
	if ((!Function_5(bParam1) || Global_3380) || Function_9(iParam0->f_356, 16))
	{
		return;
	}
	if (bParam1 == Global_30640[0])
	{
		Function_415(iParam0, bParam1, &Global_6298, bParam2);
	}
	else if (bParam1 == Global_30640[1])
	{
		Function_415(iParam0, bParam1, &Global_6364, bParam2);
	}
	else if (bParam1 == Global_30640[2])
	{
		Function_415(iParam0, bParam1, &Global_6351, bParam2);
	}
	else if (bParam1 == Global_30658[1])
	{
		Function_415(iParam0, bParam1, &Global_6402, bParam2);
	}
	else if (bParam1 == Global_30658[3])
	{
		Function_415(iParam0, bParam1, &Global_6433, bParam2);
	}
	else if (bParam1 == Global_30658[4])
	{
		Function_415(iParam0, bParam1, &Global_6537, bParam2);
	}
	else if (bParam1 == Global_30668[0])
	{
		Function_415(iParam0, bParam1, &Global_6563, bParam2);
	}
	else if (bParam1 == Global_30668[1])
	{
		Function_415(iParam0, bParam1, &Global_6614, bParam2);
	}
	else if (bParam1 == Global_30668[2])
	{
		Function_415(iParam0, bParam1, &Global_6643, bParam2);
	}
	else if (bParam1 == Global_30679[1])
	{
		Function_415(iParam0, bParam1, &Global_6667, bParam2);
	}
	else if (bParam1 == Global_30679[0])
	{
		Function_415(iParam0, bParam1, &Global_6654, bParam2);
	}
	else if (bParam1 == Global_30685[0])
	{
		Function_415(iParam0, bParam1, &Global_6709, bParam2);
	}
	else if (bParam1 == Global_30685[1])
	{
		Function_415(iParam0, bParam1, &Global_6764, bParam2);
	}
	else if (bParam1 == Global_30685[2])
	{
		Function_415(iParam0, bParam1, &Global_6785, bParam2);
	}
	else if (bParam1 == Global_30693[0])
	{
		Function_415(iParam0, bParam1, &Global_6815, bParam2);
	}
	else if (bParam1 == Global_30693[1])
	{
		Function_415(iParam0, bParam1, &Global_6866, bParam2);
	}
	else if (bParam1 == Global_30693[2])
	{
		Function_415(iParam0, bParam1, &Global_6490, bParam2);
	}
	else if (bParam1 == Global_30707[2])
	{
		Function_415(iParam0, bParam1, &Global_6933, bParam2);
	}
	else if (bParam1 == Global_30707[1])
	{
		Function_415(iParam0, bParam1, &Global_6962, bParam2);
	}
	else if (bParam1 == Global_30707[0])
	{
		Function_415(iParam0, bParam1, &Global_7002, bParam2);
	}
	else if (bParam1 == Global_30707[3])
	{
		Function_415(iParam0, bParam1, &Global_6987, bParam2);
	}
	else if (bParam1 == Global_30723[0])
	{
		Function_415(iParam0, bParam1, &Global_7171, bParam2);
	}
	else if (bParam1 == Global_30723[1])
	{
		Function_415(iParam0, bParam1, &Global_7148, bParam2);
	}
	else if (bParam1 == Global_30723[2])
	{
		Function_415(iParam0, bParam1, &Global_7113, bParam2);
	}
	else if (bParam1 == Global_30717[0])
	{
		Function_415(iParam0, bParam1, &Global_7035, bParam2);
	}
	else if (bParam1 == Global_30717[1])
	{
		Function_415(iParam0, bParam1, &Global_7032, bParam2);
	}
	Function_217(iParam0 + 356, 64);
	return;
}

void Function_415(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x1359F / 79263
{
	struct<8> Var0;
	bool bVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	vector3 vVar24;
	vector3 vVar27;
	struct<8> Var30;
	
	Function_44(iParam0 + 356, 1);
	if (!SQUAD_IS_VALID(*iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_424("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam3, &Var0));
	}
	bVar8 = Function_423(bParam3, iParam1);
	iVar18 = Function_114(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_13172[iParam0->f_36411].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_30(iParam1);
	bVar22 = false;
	while (bVar22 < (iVar18 - 1))
	{
		if (bVar22 <= *uParam2)
		{
			if (!Function_422(uParam2[bVar222], 4))
			{
				(iParam0 + 4[bVar225])->f_4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar22, bVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(StackVal, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(StackVal, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					vVar24 = { 0.0f, 0.0f, 0.0f };
					vVar27 = { 0.0f, 0.0f, 0.0f };
					GET_OBJECT_POSITION(StackVal, &vVar24);
					GET_OBJECT_ORIENTATION(StackVal, &vVar27);
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_424("nSurvivor_") };
					(*iParam0 + 4)[bVar225] = CREATE_ACTOR_IN_LAYOUT(bParam3, &Var30, iVar9[bVar22], vVar24, vVar27);
					Function_417(bVar22, iParam0, bParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(vVar24, 3.0f))
					{
						Function_217(iParam0 + 4[bVar225] + 16, 1);
						Function_217(iParam0 + 356, 1024);
					}
					Function_217(iParam0 + 356, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_416(uParam2[bVar222], 4);
				}
			}
		}
		bVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_206(*iParam0, *iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_416(var uParam0, int iParam1) //Position: 0x1378B / 79755
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_417(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x1379A / 79770
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	struct<5> Var7;
	int iVar12;
	bool bVar13;
	bool bVar14;
	char* cVar15[32];
	bool bVar23;
	bool bVar24;
	
	bVar0 = (*iParam1 + 4)[iParam05];
	bVar1 = StackVal;
	DELETE_ALL_WEAPONS_FROM_ACTOR(bVar0);
	SQUAD_JOIN(bVar0, *iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(bVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(bVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(bVar0);
	SET_ACTOR_MAX_HEALTH(bVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(bVar0, 0);
	vVar4 = { 0.0f, 0.0f, 0.0f };
	Var7 = { 0.0f, 0.0f, 0.0f };
	GET_OBJECT_POSITION(StackVal, &vVar4);
	GET_OBJECT_ORIENTATION(StackVal, &Var7);
	bVar10 = true;
	if (DECOR_CHECK_EXIST(bVar1, "GiveWeapon"))
	{
		bVar11 = DECOR_GET_INT(bVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(bVar0, bVar11, 0, 1, 1);
		iVar12 = UNK_0xDB679ED9(bVar11);
		if (iVar12 == 40)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRevolvers"));
			DECOR_SET_INT(StackVal, "ZP_NumRevolvers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 7);
		}
		else if (iVar12 == 39)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumPistols"));
			DECOR_SET_INT(StackVal, "ZP_NumPistols", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 6);
		}
		else if (iVar12 == 41)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
			DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 8);
		}
		else if (iVar12 == 42)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRifles"));
			DECOR_SET_INT(StackVal, "ZP_NumRifles", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 9);
		}
		else if (iVar12 == 43)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumShotguns"));
			DECOR_SET_INT(StackVal, "ZP_NumShotguns", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 10);
		}
		else if (iVar12 == 44)
		{
			bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumSnipers"));
			DECOR_SET_INT(StackVal, "ZP_NumSnipers", bVar10);
			DECOR_SET_INT(bVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(bVar0, 41, 0, 1, 1);
		bVar10 = (StackVal + DECOR_GET_INT(bVar10, "ZP_NumRepeaters"));
		DECOR_SET_INT(StackVal, "ZP_NumRepeaters", bVar10);
		DECOR_SET_INT(bVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(bVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(bVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(bVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(bVar0, false);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar0, false);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
	Function_421(bVar0, 0);
	Function_420(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		bVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_419(bVar0, TO_FLOAT(bVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_419(bVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 61, RAND_FLOAT_RANGE(0.1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(bVar0, (RAND_INT_RANGE(false, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(bVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(bVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(bVar1, "nShoot_Vol"))
	{
		bVar14 = DECOR_GET_INT(bVar1, "nShoot_Vol");
		strcpy(&cVar15, "survVol_", 32);
		stradd(&cVar15, INT_TO_STRING(bVar14), 32);
		bVar23 = FIND_VOLUME_IN_LAYOUT(bParam2, &cVar15);
		if (IS_VOLUME_VALID(bVar23))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(bVar0, bVar23, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(bVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(bVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_OVERRIDE_SET_POSTURE(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(bVar1, "Gringo") || !bParam3)
	{
		bVar24 = LOCATE_GRINGO_OF_TYPE("", &vVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(bVar24))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_418(bVar24, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowSun", true);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "ForceAllowRain", true);
					SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(bVar24), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar0, 2);
					TASK_USE_GRINGO(bVar0, bVar24, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse", true);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(bVar0, 2);
			TASK_STAND_STILL(bVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(bVar0, 0);
		TASK_PRIORITY_SET(bVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, bVar0, &vVar4, -1.0f);
	}
	Function_419(bVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(bVar0, 0.75f);
	MEMORY_CONSIDER_AS(bVar0, Global_34573, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, bVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(bVar1, "Core"))
		{
			iParam1->f_168 = bVar0;
		}
		else if (Global_13172[iParam1->f_36411].f_32 < 0.0f)
		{
			Global_13172[iParam1->f_36411].f_32 = (Global_13172[iParam1->f_36411].f_32 - 1.0f);
			DECOR_SET_BOOL(bVar0, "PreSaved", true);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	}
}

var Function_418(bool bParam0, bool bParam1) //Position: 0x13E0C / 81420
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_419(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x13E19 / 81433
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

void Function_420(bool bParam0, bool bParam1) //Position: 0x13E60 / 81504
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[7]);
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[5]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[7], 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[5], 0);
	}
	return;
}

void Function_421(bool bParam0, bool bParam1) //Position: 0x13EA6 / 81574
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(bParam0, Global_26137[0]);
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, Global_26137[0], 0);
	}
	return;
}

bool Function_422(var uParam0, int iParam1) //Position: 0x13ED5 / 81621
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_423(bool bParam0, int iParam1) //Position: 0x13EF1 / 81649
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3[4];
	bool bVar8;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar8 = GET_OBJECT_NAME(bVar1);
		if (Function_30(iParam1))
		{
			if (STRING_CONTAINS_STRING(bVar8, "_def"))
			{
				iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(bVar8, "_safe"))
		{
			iVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
			iVar2++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return iVar3[(RAND_INT_RANGE(false, 100000) % iVar2)];
}

struct<32> Function_424(bool bParam0) //Position: 0x13F95 / 81813
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(cParam0))
	{
	}
	else
	{
		Global_6280 = (Global_6280 % 10000);
		strcpy(&cVar8, I2STR(Global_6280), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_425("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, bParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_425(char* cParam0, char* cParam1, char* cParam2) //Position: 0x14000 / 81920
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_426() //Position: 0x1401F / 81951
{
	return;
}

bool Function_427(int iParam0) //Position: 0x14025 / 81957
{
	if (Function_9(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_186(iParam0 + 192);
}

int Function_428(int iParam0) //Position: 0x14044 / 81988
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_410(&(Global_29008[iParam0]), 4);
}

int Function_429() //Position: 0x14060 / 82016
{
	return 1;
}

void Function_430(bool bParam0) //Position: 0x14067 / 82023
{
	Function_431(&bLocal_693, bLocal_7, "church", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "church", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 7, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 8, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 9, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 10, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "mansion", 11, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "ruinedHome01", 97, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "ruinedHome01", 98, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "saloon", 1, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "saloon", 2, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "saloon", 3, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "saloon", 4, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	Function_431(&bLocal_693, bLocal_7, "saloon", 5, &Global_29155[bParam010] + 20, 0, 0, 0, 0);
	return;
}

var Function_431(var uParam0, bool bParam1, bool bParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x142C8 / 82632
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	bool bVar11;
	
	iVar0 = Function_432(uParam0);
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
		Function_71(uParam0[iVar05], 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], true);
	}
	Function_71(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_71(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_71(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(bVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_432(int iParam0) //Position: 0x143B4 / 82868
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

void Function_433() //Position: 0x143E2 / 82914
{
	Function_434(&iLocal_8, &iLocal_647, 4, Local_370.f_132, 4294967295, 4);
	Function_434(StackVal, &iLocal_8, &iLocal_647, 5, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_24, 4294967295, 266);
	Function_434(StackVal, &iLocal_8, &iLocal_647, 5, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_28, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_32, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_36, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_16, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_20, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_52, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_48, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_56, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_40, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_44, 4294967295, 266);
	Function_434(&iLocal_8, &iLocal_647, 5, Local_370.f_60, 4294967295, 266);
	return;
}

void Function_434(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x144F4 / 83188
{
	if (*iParam0 >= (*iParam1 - 1))
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
	iParam1[*iParam03]->f_4 = bParam3;
	(*iParam1)[*iParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*iParam0++;
}

void Function_435(int iParam0) //Position: 0x145CF / 83407
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_436(int iParam0, bool bParam1) //Position: 0x145DE / 83422
{
	bool bVar0;
	bool bVar1;
	
	if (Function_9(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "MoveRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

void Function_437(int iParam0, bool bParam1, bool bParam2) //Position: 0x14646 / 83526
{
	bool bVar0;
	bool bVar1;
	
	if (Function_9(iParam0->f_356, 16))
	{
		return;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam1);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	ITERATE_ON_PARTIAL_NAME(bVar0, "SpawnRestrict");
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	if (!Function_30(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(StackVal))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	return;
}

var Function_438() //Position: 0x146D4 / 83668
{
	return Local_108;
}

void Function_439(int iParam0) //Position: 0x146DC / 83676
{
	bLocal_7 = Function_440(Local_108, "tumbleweed", iParam0);
	return;
}

var Function_440(bool bParam0, bool bParam1, int iParam2) //Position: 0x146F8 / 83704
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(bParam0, bParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_441() //Position: 0x14717 / 83735
{
	if (Function_442())
	{
		CLEAR_AMBIENT_OBJECTS_VOLUME(Local_370.f_116, 15);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_370.f_116);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(Local_370.f_116);
		return 1;
	}
	return 0;
}

bool Function_442() //Position: 0x14740 / 83776
{
	var uVar0;
	
	Function_443(3, 3);
	uVar0 = uVar0;
	Local_370 = FIND_NAMED_LAYOUT("Tumbleweed_layout");
	if (!IS_LAYOUTREF_VALID(Local_370))
	{
		Local_370 = CREATE_LAYOUT("Tumbleweed_layout");
	}
	Local_370.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_bridge", 2, -3768.552f, 35.15399f, 2932.679f, 0.0f, 0.0f, 0.0f, 40.95527f, 12.11355f, 14.42395f);
	Local_370.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_church", 2, -3897.419f, 32.12174f, 2918.805f, 0.0f, -15.462f, 0.0f, 8.732407f, 15.33657f, 13.64525f);
	Local_370.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_gallows", 2, -3997.197f, 31.39782f, 2937.695f, 0.0f, 63.9443f, 0.0f, 4.906356f, 7.59307f, 5.982541f);
	Local_370.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_370, "ntumv_jail", 2, -3996.925f, 30.53559f, 2925.23f, 0.0f, -64.34573f, 0.0f, 13.25436f, 4.490472f, 10.14463f);
	Local_370.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_mansion", 2, -4088.657f, 41.31691f, 2950.138f, 0.0f, -30.817f, 0.0f, 54.98999f, 33.4642f, 39.73964f);
	Local_370.f_24 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_chimney", 2, -3970.47f, 25.09814f, 2878.614f, 0.0f, 0.0f, 0.0f, 11.10672f, 7.318129f, 11.08615f);
	Local_370.f_28 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_house1", 2, -3978.093f, 31.62781f, 2968.108f, 0.0f, 15.003f, 0.0f, 5.648678f, 6.732787f, 10.54928f);
	Local_370.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_house2", 2, -3972.163f, 30.61158f, 2965.272f, 0.0f, 15.84f, 0.0f, 5.282924f, 3.066646f, 10.43104f);
	Local_370.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_house3", 2, -3964.022f, 30.0112f, 2965.811f, 0.0f, 15.089f, 0.0f, 5.677174f, 4.548605f, 12.3461f);
	Local_370.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_shop1", 2, -3956.749f, 31.27656f, 2929.474f, 0.0f, -55.64464f, 0.0f, 5.999195f, 3.047644f, 12.50223f);
	Local_370.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_shop2", 2, -3951.094f, 31.20613f, 2936.96f, 0.0f, -53.01084f, 0.0f, 5.538446f, 4.188642f, 12.49224f);
	Local_370.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_saloon", 2, -3977.86f, 30.99654f, 2910.602f, 0.0f, 29.886f, 0.0f, 10.55297f, 7.393528f, 16.91902f);
	Local_370.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_sheriff", 2, -3997.14f, 29.97155f, 2951.985f, 0.0f, 13.84216f, 0.0f, 7.860012f, 4.846017f, 12.41192f);
	Local_370.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_stable", 2, -3984.866f, 31.08336f, 3046.262f, 0.0f, 0.0f, 0.0f, 11.2935f, 6.902211f, 14.34589f);
	Local_370.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_windmill", 2, -3889.926f, 46.29111f, 2972.325f, 0.0f, 0.0f, 0.0f, 5.84893f, 15.04936f, 6.516748f);
	Local_370.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_370, "TumPopArea_1_set");
	(*&Local_370 + 64)[0] = CREATE_VOLUME_IN_LAYOUT(Local_370, "TumPopArea01", 2, -3950.698f, 47.64506f, 2955.413f, 0.0f, 0.0f, 0.0f, 409.0475f, 63.67817f, 361.9715f);
	ADD_TO_VOLUME_SET(Local_370.f_72, (*&Local_370 + 64)[0]);
	Local_370.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_370, "SpookyPoint", 2, -4090.477f, 41.51f, 2951.518f, 0.0f, -32.06587f, 0.0f, 0.0952246f, 0.1414913f, 0.1547631f);
	Local_370.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_370, "SpookyPoint1", 2, -4081.642f, 41.56103f, 2937.039f, 0.0f, -32.06587f, 0.0f, 0.0952246f, 0.1414913f, 0.1547631f);
	Local_370.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_370, "SpookyPoint2", 2, -4093.825f, 38.33827f, 2951.769f, 0.0f, -32.06587f, 0.0f, 0.0952246f, 0.1414913f, 0.1547631f);
	Local_370.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_370, "SpookyPoint3", 2, -4082.292f, 38.14087f, 2938.273f, 0.0f, -32.06587f, 0.0f, 0.0952246f, 0.1414913f, 0.1547631f);
	Local_370.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_gallowsInside", 2, -3992.206f, 28.59953f, 2940.088f, 0.07773848f, -24.73529f, 0.09038579f, 13.37664f, 5.792068f, 7.433562f);
	Local_370.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_churchInside", 2, -3897.568f, 31.12177f, 2919.402f, 0.0f, -16.32579f, 0.0f, 24.51466f, 18.29193f, 24.11803f);
	Local_370.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_corral2Inside", 2, -3995.127f, 28.62747f, 3038.397f, 0.0f, 0.0f, 0.0f, 31.97576f, 31.97576f, 31.97576f);
	Local_370.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_genInside", 2, -3955.354f, 29.05244f, 2934.617f, 0.0f, 37.43197f, 0.0f, 22.52818f, 9.36233f, 21.78626f);
	Local_370.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_corrPipVol", 2, -3958.743f, 27.10593f, 3065.823f, 0.0f, 0.0f, 0.0f, 12.88185f, 12.88185f, 12.88185f);
	Local_370.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_inHouse", 2, -4092.927f, 46.36345f, 2942.012f, 0.0f, -29.86301f, 0.0f, 18.65219f, 21.14616f, 21.14616f);
	Local_370.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_Graveyard", 2, -3903.343f, 31.12174f, 2915.893f, 0.0f, -23.99309f, 0.0f, 58.98858f, 35.01814f, 35.69871f);
	Local_370.f_132 = CREATE_VOLUME_SET_IN_LAYOUT(Local_370, "tumv_region_set");
	(*&Local_370 + 120)[0] = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_region01", 2, -3991.083f, 28.61173f, 2963.958f, 0.0f, 0.0f, 0.0f, 248.9375f, 55.78621f, 191.3755f);
	ADD_TO_VOLUME_SET(Local_370.f_132, (*&Local_370 + 120)[0]);
	(*&Local_370 + 120)[1] = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_region_02", 2, -3835.241f, 32.65977f, 2938.673f, 0.0f, 0.0f, 0.0f, 93.30423f, 29.60545f, 38.84812f);
	ADD_TO_VOLUME_SET(Local_370.f_132, (*&Local_370 + 120)[1]);
	Local_370.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_GraveyardExit", 2, -3903.343f, 31.12174f, 2915.893f, 0.0f, -23.99309f, 0.0f, 94.72606f, 35.01814f, 80.7719f);
	Local_370.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_370, "tumv_zombies", 2, -4058.206f, 28.0582f, 2941.367f, 0.0f, 12.59078f, 0.0f, 167.5273f, 77.01389f, 304.668f);
	*(&Local_370 + 144) = { -3998.367f, 28.77871f, 2925.449f };
	*(&Local_370 + 144 + 12) = { 0.0f, 32.162f, 0.0f };
	Local_370.f_168 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_coldkiller", -3998.367f, 28.77871f, 2925.449f, 0.0f, 32.162f, 0.0f);
	*(&Local_370 + 172) = { -4000.365f, 28.741f, 2921.355f };
	*(&Local_370 + 172 + 12) = { 0.0f, -144.561f, 0.0f };
	Local_370.f_196 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_coldvictim", -4000.365f, 28.741f, 2921.355f, 0.0f, -144.561f, 0.0f);
	*(&Local_370 + 200) = { -3978.172f, 27.89896f, 2923.488f };
	*(&Local_370 + 200 + 12) = { 0.0f, 168.1263f, 0.0f };
	Local_370.f_224 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_bodytossvictim", -3978.172f, 27.89896f, 2923.488f, 0.0f, 168.1263f, 0.0f);
	*(&Local_370 + 228) = { -3999.272f, 28.73904f, 2924.932f };
	*(&Local_370 + 228 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_370.f_252 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_gallSpBoss", -3999.272f, 28.73904f, 2924.932f, 0.0f, 0.0f, 0.0f);
	*(&Local_370 + 256) = { -3955.393f, 29.05652f, 2934.797f };
	*(&Local_370 + 256 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_370.f_280 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_genSpBoss", -3955.393f, 29.05652f, 2934.797f, 0.0f, 0.0f, 0.0f);
	*(&Local_370 + 284) = { -3984.919f, 30.54963f, 3044.909f };
	*(&Local_370 + 284 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_370.f_308 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_corrSpBoss", -3984.919f, 30.54963f, 3044.909f, 0.0f, 0.0f, 0.0f);
	*(&Local_370 + 312) = { -3877.278f, 31.82575f, 2921.077f };
	*(&Local_370 + 312 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_370.f_336 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_churSpBoss", -3877.278f, 31.82575f, 2921.077f, 0.0f, 0.0f, 0.0f);
	*(&Local_370 + 340) = { -4088.067f, 37.20677f, 2944.318f };
	*(&Local_370 + 340 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_370.f_364 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_mainSp1", -4088.067f, 37.20677f, 2944.318f, 0.0f, 0.0f, 0.0f);
	*(&Local_370 + 368) = { -4090.355f, 40.59725f, 2946.117f };
	*(&Local_370 + 368 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_370.f_392 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_mainSp2", -4090.355f, 40.59725f, 2946.117f, 0.0f, 0.0f, 0.0f);
	*(&Local_370 + 396) = { -4082.261f, 40.58585f, 2937.407f };
	*(&Local_370 + 396 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_370.f_420 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_mainSp3", -4082.261f, 40.58585f, 2937.407f, 0.0f, 0.0f, 0.0f);
	*(&Local_370 + 424) = { -3889.898f, 39.06394f, 2973.357f };
	*(&Local_370 + 424 + 12) = { 0.0f, 127.9255f, 0.0f };
	Local_370.f_448 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_AreaTreasure1", -3889.898f, 39.06394f, 2973.357f, 0.0f, 127.9255f, 0.0f);
	*(&Local_370 + 452) = { -3974.651f, 32.49408f, 2967.236f };
	*(&Local_370 + 452 + 12) = { 0.0f, -66.93087f, 0.0f };
	Local_370.f_476 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_AreaTreasure2", -3974.651f, 32.49408f, 2967.236f, 0.0f, -66.93087f, 0.0f);
	*(&Local_370 + 480) = { -3990.737f, 31.44081f, 3042.311f };
	*(&Local_370 + 480 + 12) = { 0.0f, -91.4398f, 0.0f };
	Local_370.f_504 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_AreaTreasure3", -3990.737f, 31.44081f, 3042.311f, 0.0f, -91.4398f, 0.0f);
	*(&Local_370 + 508) = { -3979.979f, 31.87069f, 2915.281f };
	*(&Local_370 + 508 + 12) = { 0.0f, -55.61455f, 0.0f };
	Local_370.f_532 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_AreaTreasure4", -3979.979f, 31.87069f, 2915.281f, 0.0f, -55.61455f, 0.0f);
	*(&Local_370 + 536) = { -3965.72f, 25.24984f, 2875.93f };
	*(&Local_370 + 536 + 12) = { 0.0f, 95.87283f, 0.0f };
	Local_370.f_560 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_AreaTreasure5", -3965.72f, 25.24984f, 2875.93f, 0.0f, 95.87283f, 0.0f);
	*(&Local_370 + 564) = { -4094.214f, 40.5302f, 2932.773f };
	*(&Local_370 + 564 + 12) = { 0.0f, 140.0863f, 0.0f };
	Local_370.f_588 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_AreaTreasure6", -4094.214f, 40.5302f, 2932.773f, 0.0f, 140.0863f, 0.0f);
	*(&Local_370 + 592) = { -3898.127f, 31.81447f, 2920.687f };
	*(&Local_370 + 592 + 12) = { 0.0f, 166.5574f, 0.0f };
	Local_370.f_616 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_interiorPoint_church", -3898.127f, 31.81447f, 2920.687f, 0.0f, 166.5574f, 0.0f);
	*(&Local_370 + 620) = { -3978.554f, 29.26037f, 2965.7f };
	*(&Local_370 + 620 + 12) = { 0.0f, 379.8717f, 0.0f };
	Local_370.f_644 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_interiorPoint_store", -3978.554f, 29.26037f, 2965.7f, 0.0f, 379.8717f, 0.0f);
	*(&Local_370 + 648) = { -3977.338f, 28.4766f, 2911.901f };
	*(&Local_370 + 648 + 12) = { 0.0f, 166.5574f, 0.0f };
	Local_370.f_672 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_interiorPoint_saloon", -3977.338f, 28.4766f, 2911.901f, 0.0f, 166.5574f, 0.0f);
	*(&Local_370 + 676) = { -3957.96f, 29.95591f, 2930.639f };
	*(&Local_370 + 676 + 12) = { 0.0f, 121.3809f, 0.0f };
	Local_370.f_700 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_interiorPoint_store1", -3957.96f, 29.95591f, 2930.639f, 0.0f, 121.3809f, 0.0f);
	*(&Local_370 + 704) = { -4089.575f, 37.23102f, 2939.039f };
	*(&Local_370 + 704 + 12) = { 0.0f, 235.4629f, 0.0f };
	Local_370.f_728 = CREATE_POINT_IN_LAYOUT(Local_370, "tumf_interiorPoint_house", -4089.575f, 37.23102f, 2939.039f, 0.0f, 235.4629f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos1", -4079.771f, 41.197f, 2940.931f, -14.415f, -93.719f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos2", -3901.225f, 31.968f, 2952.409f, 8.433f, 16.89f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos3", -3875.795f, 37.512f, 2949.912f, -6.436f, 69.179f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos4", -3904.938f, 40.653f, 2885.453f, -6.816f, 129.554f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos5", -3959.33f, 31.613f, 2946.929f, -3.857f, 80.617f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos6", -3752.254f, 32.518f, 2944.169f, -1.006f, 61.036f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos7", -3962.735f, 27.998f, 3051.866f, 9.258f, 64.512f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos8", -4081.484f, 38.606f, 2940.525f, -0.234f, 172.092f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos9", -3972.399f, 33.825f, 2961.588f, -10.83f, -40.14f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_370, "tum_vista_cam_pos10", -3990.097f, 32.439f, 2955.611f, -0.452f, -124.674f, 0.0f);
	Local_370.f_732 = CREATE_CAMERA_IN_LAYOUT(Local_370, "corrCam", 0);
	SET_CAMERA_POSITION(Local_370.f_732, -3976.0f, 29.44928f, 3028.0f);
	SET_CAMERA_ORIENTATION(Local_370.f_732, 0.0f, 188.4399f, 0.0f, 0);
	Local_370.f_736 = CREATE_CAMERA_IN_LAYOUT(Local_370, "houseCam", 0);
	SET_CAMERA_POSITION(Local_370.f_736, -4094.46f, 35.21662f, 2930.833f);
	SET_CAMERA_ORIENTATION(Local_370.f_736, 180.8919f, -22.69878f, 180.2931f, 0);
	Local_370.f_740 = CREATE_CAMERA_IN_LAYOUT(Local_370, "nchurchCam", 0);
	SET_CAMERA_POSITION(Local_370.f_740, -3900.507f, 31.62671f, 2939.438f);
	SET_CAMERA_ORIENTATION(Local_370.f_740, 11.70712f, -3.280171f, 0.3501816f, 0);
	Local_370.f_744 = CREATE_CAMERA_IN_LAYOUT(Local_370, "genCam", 0);
	SET_CAMERA_POSITION(Local_370.f_744, -3966.035f, 31.13689f, 2942.229f);
	SET_CAMERA_ORIENTATION(Local_370.f_744, 0.0f, -54.12265f, 0.0f, 0);
	Local_370.f_748 = CREATE_CAMERA_IN_LAYOUT(Local_370, "gallowsCam", 0);
	SET_CAMERA_POSITION(Local_370.f_748, -4002.403f, 30.06501f, 2933.363f);
	SET_CAMERA_ORIENTATION(Local_370.f_748, -2.064217f, -23.24568f, 0.1903965f, 0);
	Local_370.f_752 = CREATE_CAMERA_IN_LAYOUT(Local_370, "mainCam", 0);
	SET_CAMERA_POSITION(Local_370.f_752, -4062.212f, 33.45606f, 2959.589f);
	SET_CAMERA_ORIENTATION(Local_370.f_752, 10.87758f, -299.645f, 0.0f, 0);
	return 1;
}

void Function_443(int iParam0, int iParam1) //Position: 0x15AFB / 88827
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

void Function_444(var uParam0, int iParam1) //Position: 0x15B44 / 88900
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_445() //Position: 0x15B53 / 88915
{
	return;
}

bool Function_446() //Position: 0x15B59 / 88921
{
	return 1;
}

void Function_447() //Position: 0x15B60 / 88928
{
	return;
}

bool Function_448() //Position: 0x15B66 / 88934
{
	if (Function_450())
	{
		Function_449();
		return 1;
	}
	return 0;
}

void Function_449() //Position: 0x15B78 / 88952
{
	int iVar0;
	
	Local_784.f_12 = 3;
	Local_784.f_16 = 6;
	*(&Local_784 + 32) = { -3908.769f, 31.114f, 2912.107f };
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(*&Local_784 + 52)[iVar0] = (*&Local_108 + 896)[iVar0];
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		(*&Local_784 + 76)[iVar0] = (*&Local_108 + 928)[iVar0];
		iVar0++;
	}
	Local_784.f_140 = Local_108.f_920;
	Local_784.f_152 = 3;
	if (Function_394(Global_30737) >= 0)
	{
		Local_784.f_144 = 0;
	}
	else
	{
		Local_784.f_144 = 1;
	}
	Local_784.f_148 = 5;
	return;
}

bool Function_450() //Position: 0x15C18 / 89112
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	Function_443(3, 3);
	uVar0 = uVar0;
	Function_191(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_191(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	if (!Function_186(&Local_108 + 4))
	{
		return 0;
	}
	Local_108 = FIND_NAMED_LAYOUT("Tumbleweed_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("Tumbleweed_layout");
	}
	Local_108.f_32 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_upstairs", 2, -4084.735f, 41.55975f, 2942.39f, 0.0f, -29.51146f, 0.0f, 2.568923f, 2.410614f, 14.77269f);
	Local_108.f_36 = CREATE_VOLUME_IN_LAYOUT(Local_108, "tumv_mansionInside", 2, -4090.239f, 37.76493f, 2944.348f, 0.0f, -33.98817f, 0.0f, 27.23937f, 55.07125f, 21.66409f);
	Local_108.f_40 = CREATE_VOLUME_IN_LAYOUT(Local_108, "tumv_townInside", 2, -3977.544f, 32.25373f, 2938.717f, 0.0f, 0.0f, 0.0f, 28.56358f, 29.44215f, 51.28766f);
	Local_108.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_genBig", 3, -3977.329f, 32.21666f, 2941.784f, 0.0f, 20.0f, 0.0f, 65.16049f, 18.06927f, 58.24506f);
	Local_108.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_houseBig", 3, -4086.112f, 42.08514f, 2950.396f, 0.0f, 20.0f, 0.0f, 38.19824f, 16.27185f, 38.19824f);
	Local_108.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_houseAggroAdd", 2, -3920.058f, 0.0f, 3042.033f, 0.0f, -28.60571f, 0.0f, 39.68588f, 39.68588f, 39.68588f);
	Local_108.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_pen1", 2, -3997.895f, 28.36437f, 3051.635f, 0.0f, 15.76106f, 0.0f, 5.843853f, 5.843853f, 6.516117f);
	Local_108.f_60 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_pen2", 2, -4008.417f, 29.41184f, 3053.813f, 0.0f, 9.964094f, 0.0f, 5.861253f, 4.511758f, 5.922601f);
	Local_108.f_64 = CREATE_VOLUME_IN_LAYOUT(Local_108, "nv_inHouse", 2, -4092.385f, 37.21731f, 2941.887f, 0.0f, -29.92689f, 0.0f, 21.60211f, 17.76842f, 22.44565f);
	Local_108.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_HOUSE_STAYIN", 2, -4095.388f, 38.51274f, 2934.629f, 0.0f, -30.52006f, 0.0f, 3.69933f, 2.942006f, 5.281651f);
	Local_108.f_72 = CREATE_VOLUME_IN_LAYOUT(Local_108, "INHOUSE2_VOLUME", 2, -4086.277f, 42.27808f, 2945.561f, 0.0f, -28.59323f, 0.0f, 2.657445f, 3.782204f, 4.905824f);
	Local_108.f_76 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_BASEMENT", 2, -4091.639f, 35.23508f, 2939.765f, 0.0f, -31.33302f, 0.0f, 15.9445f, 3.106111f, 15.84418f);
	Local_108.f_80 = CREATE_VOLUME_IN_LAYOUT(Local_108, "tumv_amb_vultures", 3, -4016.0f, 61.48221f, 2968.0f, 0.0f, 20.0f, 0.0f, 21.41178f, 4.672281f, 21.41178f);
	Local_108.f_84 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_StandOver", 2, -3997.819f, 28.23206f, 2934.455f, 1.163194f, 60.48953f, 0.8368272f, 3.568475f, 4.200047f, 3.436358f);
	Local_108.f_88 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_TOWN2", 2, -3978.99f, 27.16224f, 2908.762f, 0.0f, -60.5605f, 0.0f, 12.23938f, 15.48741f, 9.772036f);
	Local_108.f_92 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_TOWN_center", 3, -3975.6f, 28.16267f, 2943.68f, 0.0f, 20.0f, 0.0f, 13.98738f, 13.98738f, 13.98738f);
	Local_108.f_96 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_TOWN3", 2, -3978.31f, 33.03001f, 2918.576f, 0.0f, -15.67325f, 0.0f, 3.851652f, 2.559313f, 2.321757f);
	Local_108.f_100 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_TOWN4", 2, -3953.089f, 30.02684f, 2938.424f, 0.0f, -52.81564f, 0.0f, 6.968003f, 6.968003f, 11.60637f);
	Local_108.f_104 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_TOWN5", 2, -3960.414f, 29.94275f, 2958.398f, 0.0f, -74.63547f, 0.0f, 6.638144f, 5.124949f, 6.835195f);
	Local_108.f_108 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_sheriffIn", 2, -3997.702f, 29.15334f, 2952.097f, 0.0f, 16.4133f, 0.0f, 10.43502f, 10.43502f, 15.4332f);
	Local_108.f_112 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_INSHERIFF3", 2, -3979.778f, 31.04726f, 2962.124f, 0.0f, 14.52715f, 0.0f, 5.843855f, 8.197127f, 1.731026f);
	Local_108.f_116 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_MansionComeOut", 2, -4081.082f, 41.43871f, 2949.912f, 0.0f, -28.82555f, 0.0f, 10.13353f, 13.25633f, 20.27029f);
	Local_108.f_120 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_PlayerNearMansion", 2, -4056.0f, 30.71028f, 2968f, 0.0f, -29.59414f, 0.0f, 30.29621f, 20.19148f, 52.80212f);
	Local_108.f_124 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_SheriffRoam", 2, -3916.566f, 21.83624f, 2679.847f, 0.0f, -39.68338f, 0.0f, 8.561084f, 8.561084f, 8.561084f);
	Local_108.f_128 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_VolumeSet01", 2, -3898.692f, 35.73768f, 2918.275f, 0.0f, -16.22889f, 0.0f, 136.2227f, 69.52171f, 108.9899f);
	Local_108.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_VolumeSet02", 2, -3979.986f, 35.73768f, 2952.588f, 0.0f, -20.96874f, 0.0f, 175.9891f, 69.52171f, 108.9899f);
	Local_108.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_VolumeSet03", 2, -3994.993f, 35.73768f, 3051.826f, 0.0f, -20.96874f, 0.0f, 124.9585f, 46.70904f, 90.78781f);
	Local_108.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_CloseToHostageTaker", 2, -3996.71f, 29.29077f, 2925.798f, 0.0f, 25.80386f, 0.0f, 10.34651f, 4.200047f, 13.88339f);
	Local_108.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_MansionComeOut1", 2, -4081.044f, 38.24461f, 2961.503f, 0.0f, -1.021253f, 0.0f, 11.43818f, 13.25633f, 10.8929f);
	Local_108.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_MansionComeOut2", 2, -4088.909f, 37.969f, 2940.649f, 0.0f, -28.91998f, 0.0f, 11.43818f, 16.06557f, 10.8929f);
	Local_108.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_PlayerNearMansion1", 2, -4077.689f, 35.77419f, 2955.681f, 0.0f, -29.59414f, 0.0f, 30.29621f, 20.19148f, 52.80212f);
	Local_108.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_PlayCoverAudio", 2, -4027.5f, 31.05175f, 2947.971f, 0.0f, 16.60229f, 0.0f, 32.35521f, 24.64494f, 60.71115f);
	Local_108.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_ChangeMood", 3, -4070.817f, 25.09504f, 2953.534f, 0.0f, 20.0f, 0.0f, 40.13965f, 40.13965f, 40.13965f);
	Local_108.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_108, "v_roofVolume", 2, -4092.427f, 48.13748f, 2942.142f, 0.0f, -30.10057f, 0.0f, 20.38203f, 8.670809f, 23.12734f);
	*(&Local_108 + 168) = { -3874.665f, 37.14856f, 2950.946f };
	*(&Local_108 + 168 + 12) = { 0.0f, 68.76662f, 0.0f };
	Local_108.f_192 = CREATE_POINT_IN_LAYOUT(Local_108, "tumf_teleport", -3874.665f, 37.14856f, 2950.946f, 0.0f, 68.76662f, 0.0f);
	*(&Local_108 + 196) = { -4001.897f, 28.77273f, 2922.704f };
	*(&Local_108 + 196 + 12) = { 0.0f, -20.98411f, 0.0f };
	Local_108.f_220 = CREATE_POINT_IN_LAYOUT(Local_108, "f_lawSpawn_Gallows", -4001.897f, 28.77273f, 2922.704f, 0.0f, -20.98411f, 0.0f);
	*(&Local_108 + 224) = { -4081.759f, 36.0447f, 2934.203f };
	*(&Local_108 + 224 + 12) = { 0.0f, -24.20032f, 0.0f };
	Local_108.f_248 = CREATE_POINT_IN_LAYOUT(Local_108, "f_horseOne", -4081.759f, 36.0447f, 2934.203f, 0.0f, -24.20032f, 0.0f);
	*(&Local_108 + 252) = { -4083.287f, 36.2049f, 2933.231f };
	*(&Local_108 + 252 + 12) = { 0.2059246f, -28.11596f, 0.01875682f };
	Local_108.f_276 = CREATE_POINT_IN_LAYOUT(Local_108, "f_horseTwo", -4083.287f, 36.2049f, 2933.231f, 0.2059246f, -28.11596f, 0.01875682f);
	*(&Local_108 + 280) = { -3997.158f, 32.04127f, 2937.159f };
	*(&Local_108 + 280 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_304 = CREATE_POINT_IN_LAYOUT(Local_108, "f_HangingTop", -3997.158f, 32.04127f, 2937.159f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 308) = { -3997.158f, 28.24082f, 2937.159f };
	*(&Local_108 + 308 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_332 = CREATE_POINT_IN_LAYOUT(Local_108, "f_HangingGround", -3997.158f, 28.24082f, 2937.159f, 0.0f, 0.0f, 0.0f);
	Local_108.f_336 = CREATE_OBJECTSET_IN_LAYOUT("rewardChestsSet", Local_108, 8, 0);
	*(&Local_108 + 340[06]) = { -3980.779f, 28.44726f, 2906.583f };
	*(&Local_108 + 340[06] + 12) = { 0.0f, 120.9871f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_108, "f_chest1", -3980.779f, 28.44726f, 2906.583f, 0.0f, 120.9871f, 0.0f);
	DECOR_SET_INT(bVar1, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_108.f_336);
	*(&Local_108 + 340[16]) = { -4010.945f, 29.13137f, 2916.423f };
	*(&Local_108 + 340[16] + 12) = { 0.0f, -184.305f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_108, "f_chest2", -4010.945f, 29.13137f, 2916.423f, 0.0f, -184.305f, 0.0f);
	DECOR_SET_INT(bVar2, "Ammo_9", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_108.f_336);
	*(&Local_108 + 340[26]) = { -3975.424f, 25.26292f, 2875.275f };
	*(&Local_108 + 340[26] + 12) = { 0.0f, -89.38404f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_108, "f_chest3", -3975.424f, 25.26292f, 2875.275f, 0.0f, -89.38404f, 0.0f);
	DECOR_SET_INT(bVar3, "GiveItem", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_108.f_336);
	*(&Local_108 + 340[36]) = { -3948.066f, 28.10863f, 2964.988f };
	*(&Local_108 + 340[36] + 12) = { 0.0f, 180.0867f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_108, "f_chest4", -3948.066f, 28.10863f, 2964.988f, 0.0f, 180.0867f, 0.0f);
	DECOR_SET_INT(bVar4, "GiveItem", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_108.f_336);
	*(&Local_108 + 340[46]) = { -4091.129f, 37.21381f, 2954.017f };
	*(&Local_108 + 340[46] + 12) = { 0.0f, -22.62761f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_108, "f_chest5", -4091.129f, 37.21381f, 2954.017f, 0.0f, -22.62761f, 0.0f);
	DECOR_SET_INT(bVar5, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_108.f_336);
	*(&Local_108 + 340[56]) = { -3981.026f, 27.83225f, 3037.358f };
	*(&Local_108 + 340[56] + 12) = { 0.0f, 0.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_108, "f_chest6", -3981.026f, 27.83225f, 3037.358f, 0.0f, 0.0f, 0.0f);
	DECOR_SET_INT(bVar6, "Ammo_9", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_108.f_336);
	*(&Local_108 + 340[66]) = { -4081.135f, 34.57015f, 2977.369f };
	*(&Local_108 + 340[66] + 12) = { 0.0f, 10.64839f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_108, "f_chest7", -4081.135f, 34.57015f, 2977.369f, 0.0f, 10.64839f, 0.0f);
	DECOR_SET_INT(bVar7, "GringoDollarAmt", 4294967295);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_108.f_336);
	Local_108.f_512 = CREATE_POINT_IN_LAYOUT(Local_108, "HOUSE1", -4094.922f, 37.21381f, 2936.705f, 0.0f, 0.0f, 0.0f);
	Local_108.f_516 = CREATE_POINT_IN_LAYOUT(Local_108, "HOUSE2", -4097.092f, 37.26976f, 2935.162f, 0.0f, 0.0f, 0.0f);
	Local_108.f_520 = CREATE_POINT_IN_LAYOUT(Local_108, "HOUSE3", -4093.558f, 37.26976f, 2933.848f, 0.0f, 0.0f, 0.0f);
	Local_108.f_524 = CREATE_POINT_IN_LAYOUT(Local_108, "HOUSE4", -4095.265f, 37.22854f, 2934.547f, 0.0f, 0.0f, 0.0f);
	Local_108.f_528 = CREATE_POINT_IN_LAYOUT(Local_108, "INHOUSE2", -4095.653f, 37.21381f, 2932.349f, 0.0f, -121.0326f, 0.0f);
	Local_108.f_532 = CREATE_POINT_IN_LAYOUT(Local_108, "nBASEMENT1", -4099.655f, 37.22456f, 2942.61f, 0.0f, -126.1021f, 0.0f);
	Local_108.f_536 = CREATE_POINT_IN_LAYOUT(Local_108, "nBASEMENT2", -4098.767f, 37.22456f, 2942.229f, 0.0f, -119.2245f, 0.0f);
	Local_108.f_540 = CREATE_POINT_IN_LAYOUT(Local_108, "f_TOWN1", -3998.036f, 28.22873f, 2933.964f, 0.0f, -125.5167f, 0.0f);
	Local_108.f_544 = CREATE_POINT_IN_LAYOUT(Local_108, "f_TOWN2", -3981.839f, 28.45122f, 2906.455f, 0.0f, -154.2482f, 0.0f);
	Local_108.f_548 = CREATE_POINT_IN_LAYOUT(Local_108, "f_INSHERIFF2", -3977.047f, 28.11759f, 2942.953f, 0.0f, -135.6129f, 0.0f);
	Local_108.f_552 = CREATE_POINT_IN_LAYOUT(Local_108, "f_TOWN3", -3978.502f, 31.92479f, 2917.959f, 0.0f, -187.8257f, 0.0f);
	Local_108.f_556 = CREATE_POINT_IN_LAYOUT(Local_108, "f_TOWN4", -3953.0f, 29.92f, 2941.0f, 0.0f, 0.0f, 0.0f);
	Local_108.f_560 = CREATE_POINT_IN_LAYOUT(Local_108, "f_TOWN5", -3968.541f, 28.3825f, 2948.035f, 0.0f, -69.32149f, 0.0f);
	Local_108.f_564 = CREATE_POINT_IN_LAYOUT(Local_108, "f_INSHERIFF1", -3997.209f, 29.31378f, 2950.487f, 0.0f, 0.0f, 0.0f);
	Local_108.f_568 = CREATE_POINT_IN_LAYOUT(Local_108, "f_INSHERIFF3", -3980.111f, 32.29058f, 2962.586f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 572) = { -4060.0f, 31.10222f, 2952f };
	*(&Local_108 + 572 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_596 = CREATE_POINT_IN_LAYOUT(Local_108, "f_SheriffGoToSpot", -4060.0f, 31.10222f, 2952f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 600) = { -4076.522f, 35.67557f, 2945.216f };
	*(&Local_108 + 600 + 12) = { 0.0f, 71.81523f, 0.0f };
	Local_108.f_624 = CREATE_POINT_IN_LAYOUT(Local_108, "f_SheriffTeleport", -4076.522f, 35.67557f, 2945.216f, 0.0f, 71.81523f, 0.0f);
	*(&Local_108 + 628) = { -3987.058f, 27.82765f, 3051.004f };
	*(&Local_108 + 628 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_652 = CREATE_POINT_IN_LAYOUT(Local_108, "f_ammoFootlocker01", -3987.058f, 27.82765f, 3051.004f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 656) = { -3998.304f, 29.36919f, 2947.024f };
	*(&Local_108 + 656 + 12) = { 0.0f, -166.8464f, 0.0f };
	Local_108.f_680 = CREATE_POINT_IN_LAYOUT(Local_108, "f_ammoFootlocker02", -3998.304f, 29.36919f, 2947.024f, 0.0f, -166.8464f, 0.0f);
	*(&Local_108 + 684) = { -3891.426f, 39.10479f, 2976.432f };
	*(&Local_108 + 684 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_708 = CREATE_POINT_IN_LAYOUT(Local_108, "f_SheriffSpawnNoTie", -3891.426f, 39.10479f, 2976.432f, 0.0f, 0.0f, 0.0f);
	Local_108.f_712 = CREATE_POINT_IN_LAYOUT(Local_108, "f_gringoPos", -4076.522f, 35.67557f, 2945.216f, 0.0f, 156.5471f, 0.0f);
	*(&Local_108 + 716) = { -4002.559f, 28.77277f, 2922.344f };
	*(&Local_108 + 716 + 12) = { 0.0f, -109.9354f, 0.0f };
	Local_108.f_740 = CREATE_POINT_IN_LAYOUT(Local_108, "f_hostageGringo", -4002.559f, 28.77277f, 2922.344f, 0.0f, -109.9354f, 0.0f);
	*(&Local_108 + 744) = { -4076.522f, 35.67557f, 2945.216f };
	*(&Local_108 + 744 + 12) = { 0.0f, -208.7272f, 0.0f };
	Local_108.f_768 = CREATE_POINT_IN_LAYOUT(Local_108, "f_SheriffPos", -4076.522f, 35.67557f, 2945.216f, 0.0f, -208.7272f, 0.0f);
	*(&Local_108 + 772) = { -4077.03f, 35.61034f, 2946.153f };
	*(&Local_108 + 772 + 12) = { 0.0f, -388.1979f, 0.0f };
	Local_108.f_796 = CREATE_POINT_IN_LAYOUT(Local_108, "f_MarstonPos", -4077.03f, 35.61034f, 2946.153f, 0.0f, -388.1979f, 0.0f);
	Local_108.f_800 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportHide01", -4090.661f, 37.24136f, 2941.86f, 0.0f, -83.01345f, 0.0f);
	Local_108.f_804 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportHide02", -4076.522f, 35.6576f, 2945.216f, 0.0f, -119.4231f, 0.0f);
	*(&Local_108 + 808) = { -4002.63f, 28.77279f, 2923.092f };
	*(&Local_108 + 808 + 12) = { 0.0f, -10.86022f, 0.0f };
	Local_108.f_832 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportMarsMid", -4002.63f, 28.77279f, 2923.092f, 0.0f, -10.86022f, 0.0f);
	*(&Local_108 + 836) = { -4002.251f, 28.77276f, 2921.945f };
	*(&Local_108 + 836 + 12) = { 0.0f, -190.1203f, 0.0f };
	Local_108.f_860 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportSheriffMid", -4002.251f, 28.77276f, 2921.945f, 0.0f, -190.1203f, 0.0f);
	*(&Local_108 + 864) = { -4090.118f, 33.86153f, 2934.964f };
	*(&Local_108 + 864 + 12) = { 0.0f, -136.8632f, 0.0f };
	Local_108.f_888 = CREATE_POINT_IN_LAYOUT(Local_108, "f_teleportBasement", -4090.118f, 33.86153f, 2934.964f, 0.0f, -136.8632f, 0.0f);
	Local_108.f_892 = CREATE_OBJECTSET_IN_LAYOUT("CoffinSpawnsSet", Local_108, 8, 0);
	(*&Local_108 + 896)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_0", -3905.698f, 31.12165f, 2918.302f, 0.0f, 171.9361f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 896)[0], Local_108.f_892);
	(*&Local_108 + 896)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_1", -3887.808f, 31.12169f, 2930.653f, 0.0f, -267.906f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 896)[1], Local_108.f_892);
	(*&Local_108 + 896)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_2", -3884.025f, 31.12164f, 2913.866f, 0.0f, -169.1202f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 896)[2], Local_108.f_892);
	(*&Local_108 + 896)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_3", -3922.452f, 31.04271f, 2901.181f, 0.0f, 253.4639f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 896)[3], Local_108.f_892);
	(*&Local_108 + 896)[4] = CREATE_POINT_IN_LAYOUT(Local_108, "CoffinFlag_4", -3907.077f, 30.86333f, 2927.769f, 0.0f, -11.77445f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 896)[4], Local_108.f_892);
	Local_108.f_920 = CREATE_POINT_IN_LAYOUT(Local_108, "gy_Boss_Spawn", -3912.597f, 31.06788f, 2925.827f, 0.0f, 10.29036f, 0.0f);
	Local_108.f_924 = CREATE_OBJECTSET_IN_LAYOUT("zombieSpawnsSet", Local_108, 8, 0);
	(*&Local_108 + 928)[0] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_1", -3915.006f, 30.94624f, 2924.643f, 0.0f, -41.46141f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[0], Local_108.f_924);
	(*&Local_108 + 928)[1] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_2", -3911.403f, 31.08015f, 2921.042f, 0.0f, -56.13214f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[1], Local_108.f_924);
	(*&Local_108 + 928)[2] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_3", -3917.244f, 31.07456f, 2922.744f, 0.0f, -51.20008f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[2], Local_108.f_924);
	(*&Local_108 + 928)[3] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_4", -3915.171f, 30.91836f, 2919.655f, 0.0f, -25.56524f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[3], Local_108.f_924);
	(*&Local_108 + 928)[4] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_5", -3920.353f, 30.94624f, 2920.206f, 0.0f, -50.78234f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[4], Local_108.f_924);
	(*&Local_108 + 928)[5] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_6", -3917.18f, 30.91836f, 2918.009f, 0.0f, -41.14318f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[5], Local_108.f_924);
	(*&Local_108 + 928)[6] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_7", -3913.645f, 31.07364f, 2915.517f, 0.0f, -60.42477f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[6], Local_108.f_924);
	(*&Local_108 + 928)[7] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_8", -3922.16f, 31.08351f, 2918.201f, 0.0f, -77.9483f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[7], Local_108.f_924);
	(*&Local_108 + 928)[8] = CREATE_POINT_IN_LAYOUT(Local_108, "nz_spawn_9", -3919.185f, 31.07894f, 2915.34f, 0.0f, -77.19649f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[8], Local_108.f_924);
	(*&Local_108 + 928)[9] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_10", -3924.06f, 31.07219f, 2915.085f, 0.0f, -54.03186f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[9], Local_108.f_924);
	(*&Local_108 + 928)[10] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_11", -3917.996f, 30.91835f, 2911.327f, 0.0f, -37.27799f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[10], Local_108.f_924);
	(*&Local_108 + 928)[11] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_12", -3921.556f, 31.0754f, 2911.04f, 0.0f, -88.0322f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[11], Local_108.f_924);
	(*&Local_108 + 928)[12] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_13", -3925.545f, 30.94617f, 2912.746f, 0.0f, -63.34575f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[12], Local_108.f_924);
	(*&Local_108 + 928)[13] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_14", -3926.305f, 31.06202f, 2909.33f, 0.0f, -94.56337f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[13], Local_108.f_924);
	(*&Local_108 + 928)[14] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_15", -3919.121f, 31.08134f, 2908.404f, 0.0f, -67.97861f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[14], Local_108.f_924);
	(*&Local_108 + 928)[15] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_16", -3925.77f, 31.08405f, 2905.264f, 0.0f, -94.21568f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[15], Local_108.f_924);
	(*&Local_108 + 928)[16] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_17", -3922.29f, 31.06101f, 2909.562f, 0.0f, -101.327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[16], Local_108.f_924);
	(*&Local_108 + 928)[17] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_18", -3918.118f, 31.16216f, 2896.181f, 0.0f, 208.3598f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[17], Local_108.f_924);
	(*&Local_108 + 928)[18] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_19", -3912.771f, 31.22737f, 2899.939f, 0.0f, 163.6096f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[18], Local_108.f_924);
	(*&Local_108 + 928)[19] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_20", -3909.237f, 31.24878f, 2902.111f, 0.0f, 154.5248f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[19], Local_108.f_924);
	(*&Local_108 + 928)[20] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_21", -3905.703f, 31.11484f, 2905.309f, 0.0f, 127.1052f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[20], Local_108.f_924);
	(*&Local_108 + 928)[21] = CREATE_POINT_IN_LAYOUT(Local_108, "z_spawn_22", -3904.264f, 31.2741f, 2908.113f, 0.0f, 141.2968f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET((*&Local_108 + 928)[21], Local_108.f_924);
	Local_108.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_108, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -3968.541f, 28.4404f, 2948.035f, 0.0f, -87.04881f, 0.0f);
	Local_108.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_108, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -3979.998f, 32.29158f, 2962.682f, 0.0f, 14.65417f, 0.0f);
	Local_108.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_108, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3978.41f, 31.92476f, 2918.274f, 0.0f, -195.3569f, 0.0f);
	Local_108.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_108, "stand_drunk_rowdydrink3", "stand_drunk_rowdydrink", -3981.955f, 28.4549f, 2906.25f, 0.0f, -150.4357f, 0.0f);
	Local_108.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_108, "stand_drunk_rowdydrink4", "stand_drunk_rowdydrink", -3959.014f, 28.38515f, 2955.877f, 0.0f, -87.04881f, 0.0f);
	Local_108.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_108, "smoking_stand37", "smoking_stand", -4076.522f, 35.6576f, 2945.216f, 0.0f, 157.6079f, 0.0f);
	Local_108.f_1044 = CREATE_COVER_LOCATION_IN_LAYOUT(Local_108, "ncover_low", -4062.988f, 31.80792f, 2957.25f, 0.0f, 90.6319f, 0.0f, 4);
	return 1;
}

void Function_451(bool bParam0, bool bParam1) //Position: 0x17ABA / 96954
{
	char* cVar0;
	
	if (Global_3380 || Function_54(0x8000000))
	{
		return;
	}
	cVar0 = Function_57(bParam0);
	if ((bParam0 != Global_30679[1] || bParam0 != Global_30707[1]) || bParam0 != Global_30717[1])
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (bParam1)
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

void Function_452(int iParam0, bool bParam1, bool bParam2) //Position: 0x17B50 / 97104
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_44(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_453(bParam1))
		{
			Function_217(iParam0 + 356, 16);
			return;
		}
	}
	iParam0->f_364 = Function_219(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_114(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_397(iParam0 + 192, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (bParam2)
	{
		Function_191(iParam0 + 192, "tense_with_guns", 5, 1);
		Function_191(iParam0 + 192, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		iParam0->f_188 = 1;
	}
	Function_186(iParam0 + 192);
	if (HUD_IS_FADED())
	{
		Function_59(bParam1, Function_30(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_453(int iParam0) //Position: 0x17C4B / 97355
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_456(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_218(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_455(0))
		{
			return 0;
		}
		if ((!Function_52(24) || Function_454(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_454(int iParam0) //Position: 0x17CC6 / 97478
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_455(int iParam0) //Position: 0x17CDB / 97499
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_50(iParam0)11].f_12 < 0;
}

bool Function_456(int iParam0, int iParam1) //Position: 0x17D41 / 97601
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_457() //Position: 0x17D5D / 97629
{
	SET_DUST_LEVEL(3);
	return;
}

void Function_458(bool bParam0, var uParam1) //Position: 0x17D68 / 97640
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

