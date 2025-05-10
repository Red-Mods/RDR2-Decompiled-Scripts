//Decompiled with MagicRDR v1.0
//Function Count : 267
//Statics Count : 327
//Natives Count : 441
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	char[] cLocal_7[4] = 0;
	var uLocal_8 = 0;
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
	struct<293> Local_108 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_266(&Var0, 3);
	Function_265();
	if (StackVal && (((((!Global_3421 && iScriptParam_0 == Global_30679[1]) && iScriptParam_0 == Global_30707[1]) && iScriptParam_0 == Global_30707[2]) && iScriptParam_0 == Global_30717[1]) && iScriptParam_0 == Global_30658[0]) == 5)
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
						Function_258(&iLocal_11, iScriptParam_0, 0);
					}
					else
					{
						Unknown_Function();
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_256())
				{
					Function_255();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_254())
				{
					Function_253();
					Function_252(&(Global_29008[iScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_249())
				{
					Function_247(iScriptParam_0);
					if (bLocal_107)
					{
						Function_245(&iLocal_11, Function_246(), iScriptParam_0);
						Function_244(&iLocal_11, Function_246());
					}
					Function_252(&(Global_29008[iScriptParam_0]), 16);
					iLocal_5 = 4;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(cLocal_7))
				{
					iLocal_5 = 5;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000005:
				Function_243(&uLocal_8);
				Function_241();
				Function_238(iScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_237() && Function_236(Global_29155[iScriptParam_010])) && Function_235(&iLocal_11))
				{
					Function_234();
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
					Function_222(&iLocal_11, iScriptParam_0, Function_246());
				}
				Function_221(iScriptParam_0);
				Function_220();
				Function_219();
				Function_252(&(Global_29008[iScriptParam_0]), 8);
				if (Function_218(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_217(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_216(iScriptParam_0);
				Function_215();
				Function_214(iScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_209(iScriptParam_0);
				Function_208(64);
				Function_252(&(Global_29008[iScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_207(Function_246(), iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_206(&Var0, 5.0f);
				Function_252(&(Global_29008[iScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_205(iScriptParam_0);
				if (Function_218(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_107)
				{
					Function_88(&iLocal_11, iScriptParam_0);
				}
				Function_52(&uLocal_8, &iLocal_301, Function_87(), iScriptParam_0);
				Function_47(&uLocal_314, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_107)
	{
		Function_30(&iLocal_11, iScriptParam_0);
	}
	Function_25(iScriptParam_0);
	Function_19();
	Function_18();
	Function_17();
	Function_9(&uLocal_8, &iLocal_301);
	Function_8(&uLocal_314);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_208(64);
	Function_217(&(Global_29008[iScriptParam_0]), 32);
	Function_217(&(Global_29008[iScriptParam_0]), 64);
	Function_217(&(Global_29008[iScriptParam_0]), 8);
	Function_217(&(Global_29008[iScriptParam_0]), 512);
	Function_217(&(Global_29008[iScriptParam_0]), 16);
	Function_217(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_206(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C8 / 968
{
	return;
}

void Function_2(int iParam0) //Position: 0x3CE / 974
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

void Function_3(int iParam0) //Position: 0x404 / 1028
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x426 / 1062
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x43C / 1084
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x452 / 1106
{
	Function_7();
	return;
}

void Function_7() //Position: 0x45B / 1115
{
	RELEASE_LAYOUT_REF(Local_183);
	return;
}

void Function_8(int iParam0) //Position: 0x466 / 1126
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

void Function_9(var uParam0, int iParam1) //Position: 0x4C0 / 1216
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_16(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(0);
			Function_15(iParam1[iVar03], 4);
		}
		if (Function_16(iParam1[iVar03], 8))
		{
			Function_10(0, 0, 30);
			Function_15(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_10(int iParam0, int iParam1, int iParam2) //Position: 0x518 / 1304
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_11(Global_16524, iVar0, 1);
	}
	return;
}

void Function_11(int iParam0, int iParam1, bool bParam2) //Position: 0x5FE / 1534
{
	int iVar0;
	
	Function_14(iParam0);
	Function_13(iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, iParam1);
	Function_12();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(iParam1), 0);
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

void Function_12() //Position: 0x777 / 1911
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_13(int iParam0) //Position: 0x783 / 1923
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(iParam0));
	return;
}

void Function_14(int iParam0) //Position: 0x7C9 / 1993
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

void Function_15(int iParam0, int iParam1) //Position: 0x80F / 2063
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_16(int iParam0, int iParam1) //Position: 0x829 / 2089
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_17() //Position: 0x846 / 2118
{
	return;
}

void Function_18() //Position: 0x84C / 2124
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4);
	return;
}

void Function_19() //Position: 0x8A9 / 2217
{
	Function_20();
	return;
}

void Function_20() //Position: 0x8B2 / 2226
{
	Function_21(&Local_108 + 4);
	RELEASE_LAYOUT_REF(Local_108);
	return;
}

void Function_21(int iParam0) //Position: 0x8C4 / 2244
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_22(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x8EA / 2282
{
	if (Function_24(uParam0[iParam13], 4))
	{
		if (Function_24(uParam0[iParam13], 1))
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
			Function_23(uParam0[iParam13], 1);
			Function_23(uParam0[iParam13], 2);
			Function_23(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_23(var uParam0, int iParam1) //Position: 0xA18 / 2584
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_24(var uParam0, int iParam1) //Position: 0xA32 / 2610
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_25(int iParam0) //Position: 0xA4F / 2639
{
	char* cVar0;
	bool bVar1;
	var uVar2;
	
	if (Function_218(&(Global_29008[iParam0]), 0x20000000))
	{
		Function_217(&(Global_29008[iParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			cVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_IN_LAYOUT(cVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(cVar0, 15);
			START_OBJECT_ITERATOR(cVar0);
			bVar1 = START_OBJECT_ITERATOR(cVar0);
			while (IS_OBJECT_VALID(bVar1))
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(uVar2)))
				{
					DEREFERENCE_ACTOR(bVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar2);
					TASK_CLEAR(bVar2);
				}
				bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
			}
			DESTROY_ITERATOR(cVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_27(iParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_26(1));
		}
	}
	return;
}

bool Function_26(int iParam0) //Position: 0xAF6 / 2806
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_27(int iParam0) //Position: 0xB12 / 2834
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[iParam0];
	return (((Function_29(uVar0, 0x1000000) || Function_29(uVar0, 0x2000000)) || Function_29(uVar0, 0x4000000)) || Function_28(iParam0));
}

bool Function_28(int iParam0) //Position: 0xB85 / 2949
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_29(var uParam0, int iParam1) //Position: 0xBA2 / 2978
{
	return (uParam0 && iParam1) == 0;
}

void Function_30(int iParam0, int iParam1) //Position: 0xBAF / 2991
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_5(iParam1) || Function_29(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_33(iParam0, &Global_6298, iParam1);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_33(iParam0, &Global_6364, iParam1);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_33(iParam0, &Global_6351, iParam1);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_33(iParam0, &Global_6402, iParam1);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_33(iParam0, &Global_6433, iParam1);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_33(iParam0, &Global_6537, iParam1);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_33(iParam0, &Global_6563, iParam1);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_33(iParam0, &Global_6614, iParam1);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_33(iParam0, &Global_6643, iParam1);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_33(iParam0, &Global_6667, iParam1);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_33(iParam0, &Global_6654, iParam1);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_33(iParam0, &Global_6709, iParam1);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_33(iParam0, &Global_6764, iParam1);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_33(iParam0, &Global_6785, iParam1);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_33(iParam0, &Global_6815, iParam1);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_33(iParam0, &Global_6866, iParam1);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_33(iParam0, &Global_6490, iParam1);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_33(iParam0, &Global_6933, iParam1);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_33(iParam0, &Global_6962, iParam1);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_33(iParam0, &Global_7002, iParam1);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_33(iParam0, &Global_6987, iParam1);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_33(iParam0, &Global_7171, iParam1);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_33(iParam0, &Global_7148, iParam1);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_33(iParam0, &Global_7113, iParam1);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_33(iParam0, &Global_7035, iParam1);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_33(iParam0, &Global_7032, iParam1);
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
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", 0);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
	Function_25(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_3380)
	{
		Function_31(iParam1);
	}
	return;
}

void Function_31(int iParam0) //Position: 0xEF5 / 3829
{
	char* cVar0;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam0);
	if (Function_27(iParam0))
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

var Function_32(int iParam0) //Position: 0xF59 / 3929
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

void Function_33(int iParam0, var uParam1, int iParam2) //Position: 0x1286 / 4742
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (StackVal < (iVar0 - 1))
	{
		uVar1 = (*iParam0 + 4)[iVar05];
		if (!IS_ACTOR_VALID(uVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(uVar1))
		{
		}
		else
		{
			Function_46(uParam1[iVar02], 4);
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
	if (!Function_27(iParam2))
	{
		Global_13172[iParam0->f_36411].f_32 = 0.0f;
		if (!Function_45(Global_76846, 0x4000000))
		{
			Function_39(Global_34573, 0x4000000, 1, 0);
		}
	}
	else if (Function_29(iParam0->f_356, 32))
	{
		if (!Function_45(Global_76846, 8388608))
		{
			Function_39(Global_34573, 8388608, 1, 0);
		}
	}
	else if (!Function_45(Global_76846, 4194304))
	{
		Function_39(Global_34573, 4194304, 1, 0);
	}
	Function_37(iParam0, 0, 0);
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
	Function_21(iParam0 + 192);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_34(iParam2, Function_27(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_26(1));
	return;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x1540 / 5440
{
	if (!Function_5(iParam0))
	{
		return;
	}
	if (bParam1 && Function_36("noZombieFireArt"))
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
			if (!Function_35(5))
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

bool Function_35(int iParam0) //Position: 0x1C96 / 7318
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x1CAB / 7339
{
	int iVar0;
	
	iVar0 = _GET_PARAM_VALUE(iParam0, "blah");
	if (IS_STRING_VALID(iVar0))
	{
		return 1;
	}
	return 0;
}

void Function_37(var uParam0, bool bParam1, bool bParam2) //Position: 0x1CCA / 7370
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, iVar0);
		if (IS_ACTOR_VALID(uVar1))
		{
			SQUAD_LEAVE(uVar1);
			if (bParam2)
			{
				if (!Function_38(uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(uVar1);
				}
			}
			if (IS_ACTOR_VALID(uVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(uVar1);
				}
				else
				{
					RELEASE_ACTOR(uVar1);
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
	return;
}

bool Function_38(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x1D46 / 7494
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_39(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1D60 / 7520
{
	int iVar0;
	char* cVar1[16];
	
	if (!Function_41(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	iVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_40(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, iVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || iVar0));
	}
}

void Function_40(char* cParam0, int iParam1) //Position: 0x1DCC / 7628
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

bool Function_41(bool bParam0, var uParam1, int iParam2) //Position: 0x1E03 / 7683
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
		if (Function_43(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_42(uVar0))
		{
			case 0x00000002:
				if (!Function_45(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_42(char* cParam0) //Position: 0x1E7B / 7803
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

int Function_43(int iParam0) //Position: 0x1F1C / 7964
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

void Function_44(int iParam0, int iParam1) //Position: 0x1F59 / 8025
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_45(var uParam0, int iParam1) //Position: 0x1F6C / 8044
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_46(var uParam0, int iParam1) //Position: 0x1F7F / 8063
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_47(var uParam0, bool bParam1) //Position: 0x1F96 / 8086
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
	
	bVar6 = Function_51();
	if (Global_30620 > *uParam0)
	{
		Global_30620 = 0;
	}
	iVar0 = Global_30620;
	while (iVar0 < Function_50((*uParam0 - 1), Global_30620 + 4))
	{
		bVar7 = (*uParam0)[iVar05];
		if (IS_DOOR_VALID(bVar7))
		{
			uVar8 = StackVal;
			if (uVar8 & 16384 >= 0)
			{
				uParam0[iVar05]->f_16 = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(bVar7, "owner"));
				Function_49(uParam0[iVar05], 16384);
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
								Function_48(uParam0[iVar05], 1);
								uVar8 = StackVal;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_49(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(uParam0[iVar05]->f_12))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
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
								Function_48(uParam0[iVar05], 1);
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
							Function_48(uParam0[iVar05], 1);
							uVar8 = StackVal;
						}
					}
					else if ((StackVal && Global_63399) != 0 && uVar8 & 1 < 0)
					{
						Function_49(uParam0[iVar05], 1);
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
					Function_48(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 == 0)
				{
					Function_48(uParam0[iVar05], 1);
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
					Function_49(uParam0[iVar05], 8192);
					uVar8 = StackVal;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_49(uParam0[iVar05], 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
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
					if (IS_ACTOR_IN_VOLUME(Function_87(), uParam0[iVar05]->f_12))
					{
						if (IS_DOOR_OPENED(bVar7))
						{
							CLOSE_DOOR(bVar7, 1.0f);
							Function_49(uParam0[iVar05], 32768);
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

void Function_48(var uParam0, int iParam1) //Position: 0x2362 / 9058
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_49(var uParam0, int iParam1) //Position: 0x2373 / 9075
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

int Function_50(int iParam0, int iParam1) //Position: 0x238D / 9101
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_51() //Position: 0x239F / 9119
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_52(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x23A8 / 9128
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_26(32) || !IS_ACTOR_VALID(uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_53(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_53(int iParam0, float fParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x2429 / 9257
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_86(iParam0))
	{
		return 0;
	}
	Function_217(&(Global_29008[iParam2]), 4194304);
	iVar0 = DECOR_GET_INT(StackVal, "locflag");
	if (iVar0 != 0 && *iParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (*iParam0)
	{
		case 0x00000005:
			if (iVar0 & 240 == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, fParam1))
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
					if (!Function_16(iParam0, 2))
					{
						if (!Function_16(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_84(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_83(iParam0, 8);
							}
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (Function_16(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_10(0, 0, 0);
						}
						else
						{
							Function_10(0, 0, 30);
						}
						Function_15(iParam0, 8);
					}
				}
			}
			if (iVar0 & 16 >= 0)
			{
				if (bVar1)
				{
					if (!Function_16(iParam0, 2))
					{
						if (!Function_16(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_83(iParam0, 4);
							}
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (Function_16(iParam0, 4))
					{
						SET_CURRENT_MAP(0);
						Function_15(iParam0, 4);
					}
				}
			}
			if (iVar0 & 128 >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_82(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_81(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_16(iParam0, 2))
					{
						if (!Function_16(iParam0, 16))
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
							if (Function_51())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_83(iParam0, 16);
								Function_73(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(fParam1), 0);
							}
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (Function_16(iParam0, 16))
					{
						Function_15(iParam0, 16);
					}
				}
			}
			if (iVar0 & 64 >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_16(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_16(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_83(iParam0, 2);
			}
			else
			{
				Function_15(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, fParam1))
			{
				if (!Function_218(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_16(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_72(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_83(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_71(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_54(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_54(int iParam0) //Position: 0x2842 / 10306
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_218(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_252(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_59(473, 1, 0, 0);
		iVar0 = Function_58(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_59(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_59(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_59(476, 1, 0, 0);
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
		Function_57(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_57(7, 30);
	}
	if (Function_56(473) <= Function_55(473))
	{
		if (!Function_51())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_55(int iParam0) //Position: 0x2941 / 10561
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_56(int iParam0) //Position: 0x297E / 10622
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_57(int iParam0, int iParam1) //Position: 0x29B7 / 10679
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

var Function_58(int iParam0) //Position: 0x2A1E / 10782
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

int Function_59(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x2A76 / 10870
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + TO_FLOAT(iParam1));
	Function_70(iParam0, TO_FLOAT(iParam1), 1);
	Function_69(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_60(iParam0, 1, TO_FLOAT(iParam1), 1, 1, 3.0f, 0, iParam3);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_60(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2C96 / 11414
{
	char* cVar0;
	char* cVar1[32];
	struct<8> Var9;
	var uVar17;
	var uVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_35278[iParam020] + 16, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_35278[iParam020] + 16, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_35278[iParam020] + 16, cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				iVar5 = (FLOOR(fParam2) / 60);
				if (iVar5 > 60)
				{
					iVar4 = (iVar5 / 60);
					iVar5 = (iVar5 - iVar4 * 60);
					iVar6 = FLOOR(((fParam2 - TO_FLOAT(iVar4 * 60 * 60)) - TO_FLOAT(iVar5 * 60)));
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
					iVar6 = FLOOR((fParam2 - TO_FLOAT(iVar5 * 60)));
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
			fParam2 = (fParam2 * 3.28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_35278[iParam020] + 16, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_55(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_56(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_56(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_67(iParam0, fVar19, fVar20, &uVar17, &uVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, uVar17, uVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_65(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(iParam7), &Global_35278[iParam020] + 16, Function_62(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_61(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_61() //Position: 0x32C3 / 12995
{
	int iVar0;
	
	return iVar0;
}

var Function_62(int iParam0) //Position: 0x32CB / 13003
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_63(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x32DC / 13020
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_64("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_64(char* cParam0, bool bParam1) //Position: 0x33D1 / 13265
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_65(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x33EA / 13290
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_50(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_66(Function_50(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_66(int iParam0, int iParam1) //Position: 0x344F / 13391
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_67(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3461 / 13409
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
	if (((Function_68(iParam0) != 19 || Function_68(iParam0) != 17) || Function_68(iParam0) != 10) || Function_68(iParam0) != 9)
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

int Function_68(int iParam0) //Position: 0x3591 / 13713
{
	return Global_35278[iParam020].f_48;
}

void Function_69(int iParam0) //Position: 0x35A0 / 13728
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

int Function_70(int iParam0, float fParam1, bool bParam2) //Position: 0x373A / 14138
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

void Function_71(var uParam0, int iParam1) //Position: 0x397E / 14718
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_72(struct<5> Param0) //Position: 0x398B / 14731
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_73(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x39B1 / 14769
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	var uVar5;
	
	if (!Function_80(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_79(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(bParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_76(1))
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
		uVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(uVar3, uVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(uVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(uVar3, 3);
			Function_74();
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

void Function_74() //Position: 0x3C41 / 15425
{
	char* cVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	
	cVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_75(cVar0, uVar1);
	bVar2 = START_OBJECT_ITERATOR(cVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(uVar3))
		{
			SET_CRIME_WITNESSED(uVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return;
}

void Function_75(char* cParam0, int iParam1) //Position: 0x3CA4 / 15524
{
	ITERATE_EVERYWHERE(uParam0);
	ITERATE_ON_OBJECT_TYPE(uParam0, 31);
	if (!iParam1 != "")
	{
		ITERATE_IN_SET(cParam0, iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(cParam0, GET_ITERATOR_PARENT(cParam0));
	}
	return;
}

bool Function_76(bool bParam0) //Position: 0x3CD3 / 15571
{
	if (Function_81(256))
	{
		return 0;
	}
	if (Function_81(262144))
	{
		return 0;
	}
	if (Function_78())
	{
		return 0;
	}
	if (!Function_81(1))
	{
		return 0;
	}
	if (!Function_81(4096))
	{
		return 0;
	}
	if (bParam0 && Function_77(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_81(2048))
	{
		return 0;
	}
	if (Function_51() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_77(int iParam0) //Position: 0x3D49 / 15689
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x3D5A / 15706
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

bool Function_79(int iParam0) //Position: 0x3D73 / 15731
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x3D89 / 15753
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x3D9E / 15774
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_82(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x3DBC / 15804
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

void Function_83(int iParam0, int iParam1) //Position: 0x3E60 / 15968
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_84(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x3E71 / 15985
{
	int iVar0;
	int iVar1;
	
	Function_14(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_85(StackVal, bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_11(StackVal, iVar1, bParam4);
		}
	}
}

void Function_85(int iParam0, int iParam1) //Position: 0x3EE3 / 16099
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_14(iParam0);
	Function_13(uVar0);
	PRINTNL();
	Function_11(iParam0, uVar0, iParam1);
	return;
}

bool Function_86(int iParam0) //Position: 0x3F08 / 16136
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

var Function_87() //Position: 0x3F25 / 16165
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_88(int iParam0, bool bParam1) //Position: 0x3F3A / 16186
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	var uVar13;
	vector3 vVar14;
	struct<5> Var17;
	int iVar36;
	int iVar37;
	bool bVar38;
	int iVar39;
	int iVar40;
	var uVar41;
	
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
			iParam0->f_364 = Function_200(0, iParam1, 3);
		}
		if (!Function_29(iParam0->f_356, 64))
		{
			iParam0->f_188 = 8;
		}
	}
	else if (iParam1 != Global_30717[1] || HUD_IS_FADED())
	{
		if (!Function_29(iParam0->f_356, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_198(1, 0));
			Function_197(iParam0 + 356, 0x20000000);
		}
		return;
	}
	if (Function_29(iParam0->f_356, 16))
	{
		Function_196(iParam1, 0.0f);
		if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_29(iParam0->f_356, 4))
	{
		return;
	}
	if (Global_3380 && !Function_29(iParam0->f_356, 4))
	{
		Function_197(iParam0 + 356, 4);
		Function_30(iParam0, iParam1);
		DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
		Function_195(0, 4294967295);
		Function_194();
		Function_25(iParam1);
		return;
	}
	fVar0 = Function_192(Function_193(iParam1));
	fVar1 = Function_191(iParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (iParam0->f_360 == 4294967295)
	{
		iParam0->f_360 = Function_200(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(Global_34573, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(Global_34573, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			uVar4 = (*iParam0 + 4)[iVar35];
			if (IS_ACTOR_ALIVE(uVar4))
			{
				Function_190(iParam0 + 4[iVar35]);
			}
			iVar3++;
		}
		Function_189(iParam0);
		iParam0->f_188 = 7;
		return;
	}
	if (Function_188(Function_193(iParam1)))
	{
		if (((iParam0->f_188 > 7 && !Function_29(iParam0->f_356, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
		{
			if (Function_29(iParam0->f_356, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_185(iParam0, 0);
				Function_190(iParam0 + 168);
				iVar5 = 0;
				while (StackVal < (iVar5 - 1))
				{
					Function_190(iParam0 + 4[iVar55]);
					iVar5++;
				}
				Function_197(iParam0 + 356, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_196(iParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0.5f);
				Function_184(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(Global_34573, "nDecayRate", 3);
				iParam0->f_188 = 5;
			}
			else
			{
				Function_182();
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
				Function_177(iParam0, iParam1, fVar2);
			}
			if (!Function_29(iParam0->f_356, 131072))
			{
				if (iParam0->f_188 == 6 && iParam0->f_188 < 1)
				{
					if ((Global_3386 && !Function_29(iParam0->f_356, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_197(iParam0 + 356, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar6 = Function_191(iParam1);
						fVar7 = (fVar6 % 10.0f);
						fVar8 = (fVar6 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar7 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar8));
						UI_REFRESH("ZMeter");
					}
					if (((Function_29(iParam0->f_356, 32768) && !DECOR_CHECK_EXIST(Global_34573, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && iParam0->f_188 > 5)
					{
						Function_189(iParam0);
					}
				}
			}
		}
	}
	Function_175(iParam0, iParam1);
	if (Function_29(iParam0->f_356, 1024))
	{
		Function_174(iParam0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_63096)
	{
		if (!Function_29(iParam0->f_356, 16384))
		{
			Function_197(iParam0 + 356, 16384);
			iVar9 = 0;
			while (StackVal < (iVar9 - 1))
			{
				MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 0);
				iVar9++;
			}
		}
	}
	else if (Function_29(iParam0->f_356, 16384))
	{
		Function_44(iParam0 + 356, 16384);
		iVar9 = 0;
		while (StackVal < (iVar9 - 1))
		{
			MEMORY_ALLOW_SHOOTING((*iParam0 + 4)[iVar95], 1);
			iVar9++;
		}
	}
	if (Function_29(iParam0->f_356, 262144))
	{
		if (Function_235(iParam0))
		{
			Function_44(iParam0 + 356, 262144);
			Function_172(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_30616, iParam1, *iParam0);
			if (!Function_27(iParam1))
			{
				if (!Function_29(iParam0->f_356, 8))
				{
					Function_197(iParam0 + 356, 8);
					Function_171();
				}
			}
		}
	}
	if (Function_29(iParam0->f_356, 524288))
	{
		if (Function_171())
		{
			Function_197(iParam0 + 356, 8);
			Function_44(iParam0 + 356, 524288);
		}
	}
	switch (iParam0->f_188)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_45(Global_76846, 65536) || !Global_3365)) && Global_3386) && !Global_3385)
			{
				if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
				{
					DECOR_REMOVE(Global_34573, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
				}
				Function_163(iParam0);
				Function_197(iParam0 + 356, 262144);
				if (Function_27(iParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SHOCKED_BY_CARNAGE", 1, 1, 0, 0, 1, 0);
					}
					Unknown_Function();
					Function_157(iParam1);
					Function_195(0, 4294967295);
					Function_196(iParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(1);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_29(iParam0->f_356, 1))
					{
						Function_156(iParam0, iParam1);
						Function_155("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iParam0->f_188 = 2;
					}
					else
					{
						iParam0->f_188 = 4;
					}
					Function_152("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Unknown_Function();
					Function_157(iParam1);
					Function_197(iParam0 + 356, 2);
					Function_195(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					iParam0->f_368 = 1000.0f;
					iParam0->f_188 = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_146(iParam0 + 168, 1, iParam0 + 356))
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
				Function_114(iParam0, iParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(iParam0->f_168, "GET_US_AMMO_P", Global_34573, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				iParam0->f_188 = 3;
			}
			break;
		
		case 0x00000003:
			iVar11 = 0;
			iVar9 = 0;
			while (0 < (iVar9 - 1))
			{
				bVar12 = (*iParam0 + 4)[iVar95];
				if (IS_ACTOR_ALIVE(bVar12))
				{
					if (Function_29((iParam0 + 4[iVar95])->f_16, 2))
					{
						if (DECOR_CHECK_EXIST(bVar12, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(bVar12, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(bVar12, "nUC_NoAmmo"));
								DECOR_REMOVE(bVar12, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(bVar12, "PLAYER_NO_AMMO_P", 1, 1, 2, 0, 1, 0);
								return;
							}
						}
						if (Function_146(iParam0 + 4[iVar95], 0, iParam0 + 4[iVar95] + 16))
						{
							RELEASE_SCRIPT_USE_CONTEXT(iParam1);
							uVar13 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar12));
							Global_13172[iParam0->f_36411].f_32 = (Global_13172[iParam0->f_36411].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(Global_34573);
							AI_DONT_HARM_ACTOR((*iParam0 + 4)[iVar95]);
							Function_103(iParam0 + 4[iVar95], uVar13);
							Function_44(iParam0 + 4[iVar95] + 16, 2);
							Function_197(iParam0 + 4[iVar95] + 16, 16);
						}
						iVar11++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(bVar12, "DLC_give_ammo") && Function_29((iParam0 + 4[iVar95])->f_16, 16)) && (GET_TASK_STATUS(bVar12, 6) != 0 || GET_TASK_STATUS(bVar12, 6) != 2))
					{
						Function_44(iParam0 + 4[iVar95] + 16, 16);
						AI_CLEAR_DONT_HARM_ACTOR(bVar12);
						AI_CLEAR_DONT_HARM_ACTOR(Global_34573);
						SET_MOVER_FROZEN(bVar12, 0);
						RESET_ANIM_SET_FOR_ACTOR(bVar12, 1);
						vVar14 = { 0.0f, 0.0f, 0.0f };
						Var17 = { 0.0f, 0.0f, 0.0f };
						GET_OBJECT_POSITION(iParam1, &vVar14);
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
						if (Function_102(bVar12))
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
				PRINTINT(iVar11);
				PRINTNL();
			}
			if (iVar11 == 0)
			{
				iParam0->f_188 = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(Global_34573, "bNoSurvivorHelp", 1);
			}
			if (DECOR_CHECK_EXIST(Global_34573, "nDecayRate"))
			{
				iVar36 = DECOR_GET_INT(Global_34573, "nDecayRate");
				if (iVar36 == 3)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.5f);
				}
				else if (iVar36 == 2)
				{
					DECOR_SET_INT(Global_34573, "nDecayRate", 1);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0.75f);
				}
				else if (iVar36 == 1)
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
			Function_184(1);
			if (Function_97(iParam0))
			{
				DECOR_SET_FLOAT(Global_34573, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_96(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				iParam0->f_188 = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(iParam0->f_352) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_196(bParam1, 300.0f);
			}
			else
			{
				Function_196(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_29(iParam0->f_356, 8))
			{
				Function_197(iParam0 + 356, 8);
				Function_171();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
			{
				DECOR_REMOVE(Global_34573, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
			}
			Function_95(bParam1);
			Function_94(iParam0);
			Function_185(iParam0, 1);
			Function_25(Global_29006);
			iParam0->f_364 = Function_200(0, bParam1, 3);
			Function_197(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			Function_197(iParam0 + 356, 512);
			if (!Function_29(Global_13172[iParam0->f_36411].f_24, 1))
			{
				iVar37 = Function_91(Function_193(bParam1));
				Function_59(660, iVar37, 0, 0);
				Function_197(&Global_13172[iParam0->f_36411] + 24, 1);
			}
			iParam0->f_188 = 11;
			break;
		
		case 0x00000008:
			Function_258(iParam0, bParam1, 1);
			Function_245(iParam0, Global_30616, bParam1);
			Function_244(iParam0, Global_30616);
			iParam0->f_188 = 9;
			break;
		
		case 0x00000009:
			if (Function_235(iParam0))
			{
				if (!bParam1 != Global_30717[0])
				{
					Function_222(iParam0, bParam1, Global_30616);
					iParam0->f_188 = 1;
				}
				else if (!DECOR_CHECK_EXIST(Global_34573, "BLACKWATER_WAIT"))
				{
					Function_222(iParam0, bParam1, Global_30616);
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
				Function_114(iParam0, bParam1);
				Function_163(iParam0);
				Function_197(iParam0 + 356, 262144);
				Unknown_Function();
				Function_197(&Global_13172[Function_200(111, 111, 5)11] + 20, 4);
				Function_157(bParam1);
				Function_195(0, 4294967295);
				Function_196(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(1);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[15], 0);
				RESET_ANIM_SET_FOR_ACTOR((*iParam0 + 4)[25], 0);
				iParam0->f_188 = 3;
			}
			break;
	}
	iVar9 = 0;
	while (bParam1 < (iVar9 - 1))
	{
		bVar38 = (*iParam0 + 4)[iVar95];
		if (IS_ACTOR_VALID(bVar38))
		{
			if (!IS_ACTOR_ALIVE(bVar38))
			{
				if (!DECOR_CHECK_EXIST(bVar38, "DeathTallied"))
				{
					DECOR_SET_BOOL(bVar38, "DeathTallied", 1);
					Global_13172[iParam0->f_36411].f_28 = (Global_13172[iParam0->f_36411].f_28 + 1.0f);
					if (Function_29(Global_13172[iParam0->f_36411].f_24, 1))
					{
						Function_90(660, 1, 0);
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
						if ((!GET_LAST_ATTACKER(bVar38) != Global_34573 && iParam0->f_188 != 2) && !Function_29(iParam0->f_356, 8192))
						{
							Function_197(iParam0 + 356, 8192);
							Function_152("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar39 = 0;
							while (StackVal < (iVar39 - 1))
							{
								Function_190(iParam0 + 4[iVar395]);
								SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar395], 1);
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
			if (GET_LAST_ATTACKER(bVar38) != Global_34573 && !Function_29(iParam0->f_356, 0x4000000))
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
					Function_190(iParam0 + 4[iVar405]);
					SET_ACTOR_CAN_BE_TARGETED((*iParam0 + 4)[iVar405], 1);
					MEMORY_CONSIDER_AS_ENEMY((*iParam0 + 4)[iVar405], Global_34573);
					iVar40++;
				}
				if (iParam0->f_188 <= 7)
				{
					if (iParam0->f_188 <= 5)
					{
						iParam0->f_188 = 4;
					}
					Function_152("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_197(iParam0 + 356, 0x4000000);
				iParam0->f_364 = Function_200(0, bParam1, 3);
				Function_197(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
			}
		}
		iVar9++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(Global_34573, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(Global_34573, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(Global_34573, 1);
	}
	uVar41 = GET_CURRENT_GRINGO(Global_34573);
	if (IS_GRINGO_VALID(uVar41))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(uVar41)), "footlock"))
		{
			Function_89(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, uVar41, *iParam0);
		}
	}
	return;
}

void Function_89(var uParam0, struct<365> Param1) //Position: 0x5255 / 21077
{
	bool bVar0;
	char* cVar1;
	int iVar2;
	char* cVar3;
	float fVar4;
	
	bVar0 = GET_OBJECT_FROM_GRINGO(uParam0);
	cVar1 = GET_OBJECT_NAME(bVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(cVar1, "_");
	cVar3 = STRING_GET_TOKEN((iVar2 - 2));
	fVar4 = TO_FLOAT(STRING_TO_INT(cVar3));
	Function_197(&Global_13172[Param1.f_36411] + 20, FLOOR(POW(2.0f, fVar4)));
}

int Function_90(int iParam0, int iParam1, int iParam2) //Position: 0x52A4 / 21156
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
	if (iParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		iParam1 = ABS(iParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] - TO_FLOAT(iParam1));
	Function_69(iParam0);
	if (iParam2 && iParam1 == 0)
	{
		Function_60(iParam0, 0, TO_FLOAT(iParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= iParam1)
		{
			REMOVE_COLLECTABLE(&(Global_35278[iParam020]), Global_34573);
			iVar1++;
		}
	}
	return 1;
}

var Function_91(int iParam0) //Position: 0x549F / 21663
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_92(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_29(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_92(int iParam0, int iParam1) //Position: 0x5689 / 22153
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

var Function_93(int iParam0) //Position: 0x5A65 / 23141
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

void Function_94(int iParam0) //Position: 0x5BEB / 23531
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

void Function_95(int iParam0) //Position: 0x5C3A / 23610
{
	char* cVar0;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_96(int iParam0) //Position: 0x5C72 / 23666
{
	int iVar0;
	
	if (Function_29(iParam0, 1) && Function_29(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_97(int iParam0) //Position: 0x5CA6 / 23718
{
	return Function_98(iParam0 + 352);
}

int Function_98(int iParam0) //Position: 0x5CB4 / 23732
{
	int iVar0;
	char* cVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_61()));
	}
	iVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_30616, Function_61()));
	cVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(cVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(cVar1, 15);
	ITERATE_IN_VOLUME(StackVal, cVar1);
	START_OBJECT_ITERATOR(cVar1);
	bVar2 = START_OBJECT_ITERATOR(cVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if ((!IS_ACTOR_HORSE(bVar3) && !IS_ACTOR_HOGTIED(bVar3)) && IS_ACTOR_ALIVE(bVar3))
		{
			iVar4 = GET_ACTOR_ENUM(bVar3);
			if ((iVar4 > 1128 || iVar4 < 1130) && iVar4 == 1247)
			{
				Var5 = { 0.0f, 0.0f, 0.0f };
				GET_POSITION(bVar3, &Var5);
				iVar8 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar9 = (Function_29(iVar8, 1024) && iVar8 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar9 = true;
				}
				if (!bVar9)
				{
					iVar10 = SQUAD_GET_SIZE(*iParam0);
					if (iVar10 >= 6)
					{
						if (Function_100(StackVal, StackVal, bVar3, Global_34574) < 20.0f && !Function_38(bVar3, 0x3f800000, 0x42960000, 1, 1, 0))
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
					SQUAD_JOIN(bVar3, iVar0);
				}
				else
				{
					SQUAD_JOIN(bVar3, *iParam0);
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(cVar1);
	}
	DESTROY_ITERATOR(cVar1);
	if (SQUAD_GET_SIZE(*iParam0) > 4)
	{
		Function_99(&iVar0);
		DESTROY_OBJECT(iVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(*iParam0, 2560);
		Function_252(&(Global_29008[Global_29006]), 0x20000000);
		Function_155("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iVar11 = 0;
		while (iVar11 <= SQUAD_GET_SIZE(*iParam0))
		{
			bVar12 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, iVar11);
			REFERENCE_ACTOR(bVar12);
			SET_ACTOR_STAY_WITHIN_VOLUME(StackVal, bVar12, 1, 1);
			TASK_PRIORITY_SET(bVar12, 0);
			TASK_GO_NEAR_OBJECT(bVar12, Global_34573, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(bVar12))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(bVar12, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(bVar12, 322, 0, 2, 0);
			iVar11++;
		}
		return 1;
	}
	DESTROY_OBJECT(iVar0);
	DESTROY_OBJECT(*iParam0);
	return 0;
}

void Function_99(int iParam0) //Position: 0x5EDA / 24282
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(*iParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*iParam0, iVar0);
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
			iVar0++;
		}
	}
	return;
}

float Function_100(bool bParam0, vector3 vParam1) //Position: 0x5F29 / 24361
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(uParam0))
	{
		Function_101(bParam0);
		vVar0 = { StackVal, StackVal, Function_101(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_101(bool bParam0) //Position: 0x5FA3 / 24483
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

bool Function_102(bool bParam0) //Position: 0x600D / 24589
{
	int iVar0;
	
	if (!IS_ACTOR_ALIVE(iParam0))
	{
		return 0;
	}
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 9 || iVar0 != 15) || iVar0 != 24) || iVar0 != 420) || iVar0 != 28) || iVar0 != 29) || iVar0 != 30) || iVar0 != 36) || iVar0 != 38) || iVar0 != 39) || iVar0 != 54) || iVar0 != 55) || iVar0 != 56) || iVar0 != 65) || iVar0 != 68) || iVar0 != 404) || iVar0 != 400) || iVar0 != 89) || iVar0 != 95) || iVar0 != 96) || iVar0 != 107) || iVar0 != 139) || iVar0 != 140) || iVar0 != 141) || iVar0 != 144) || iVar0 != 146) || iVar0 != 149) || iVar0 != 152) || iVar0 != 168) || iVar0 != 169) || iVar0 != 176) || iVar0 != 177) || iVar0 != 213) || iVar0 != 509) || iVar0 != 493) || iVar0 != 529) || iVar0 != 237) || iVar0 != 238) || iVar0 != 245) || iVar0 != 266) || iVar0 != 268) || iVar0 != 269) || iVar0 != 276) || iVar0 != 283) || iVar0 != 289) || iVar0 != 294) || iVar0 != 304) || iVar0 != 428) || iVar0 != 435) || iVar0 != 461) || iVar0 != 465) || iVar0 != 455) || iVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_103(int iParam0, bool bParam1) //Position: 0x617C / 24956
{
	vector3 vVar0;
	char* cVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	var uVar10;
	int iVar11;
	int iVar12;
	
	Function_113();
	Function_112();
	GET_POSITION(*iParam0, &vVar0);
	cVar3 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(cVar3, 8);
	ITERATE_ON_PARTIAL_NAME(cVar3, "Ammo");
	ITERATE_IN_SPHERE(cVar3, vVar0, 2.0f);
	bVar6 = START_OBJECT_ITERATOR(cVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar4 = bVar6;
	}
	bVar6 = OBJECT_ITERATOR_NEXT(cVar3);
	if (IS_OBJECT_VALID(bVar6))
	{
		bVar5 = bVar6;
	}
	DESTROY_ITERATOR(cVar3);
	Function_59(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(bVar4) || !IS_OBJECT_VALID(bVar5))
	{
		SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", 1, 1, 2, 0, 1, 0);
		Function_111(bParam1, 5.0f, 1);
		Function_190(iParam0);
		Function_110(Global_29006, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(bVar4, &vVar7);
	uVar10 = GET_OBJECT_HEADING(bVar4);
	SET_OBJECT_POSITION(Global_34573, vVar7);
	SET_ACTOR_HEADING(Global_34573, uVar10, 1);
	SET_MOVER_FROZEN(*iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(*iParam0, "DLC_give_ammo", 1);
	if (!Function_109(StackVal, StackVal, *iParam0, vVar7))
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
	Function_104(*iParam0, 0, Global_34573, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(Global_34573, "PLAYER_SUPPLY_WITH_AMMUNITION", 1, 1, 2, 0, 1, 0);
	Function_111(bParam1, 5.0f, 1);
	Function_190(iParam0);
	Function_110(Global_29006, 10.0f);
	return;
}

var Function_104(char* cParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x644A / 25674
{
	int iVar0;
	
	if (bParam3)
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, Function_61(), 3, 1);
	}
	else
	{
		iVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(cParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_105(&iVar0, uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(iVar0))
	{
		DESTROY_OBJECT(iVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(iVar0), "");
		if (bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(iVar0, bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(iVar0, uParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return iVar0;
}

void Function_105(var uParam0, int iParam1) //Position: 0x64C9 / 25801
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 0);
	Function_108(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 1);
	Function_107(&uVar0, iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(*uParam0, 2);
	Function_106(&uVar0, iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(*uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 0, 1, 1.6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(*uParam0, 1, 2, 1.5f, 1, 0);
	return;
}

void Function_106(var uParam0, int iParam1) //Position: 0x6526 / 25894
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -0.402189f, 1.415817f, -0.851866f, 6.384388f, -147.5115f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_107(var uParam0, int iParam1) //Position: 0x65A6 / 26022
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -0.421349f, 1.41818f, -0.861325f, -6.658212f, -134.564f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	RESET_CAMERASHOT_TARGETDOF(*uParam0);
	return;
}

void Function_108(var uParam0, int iParam1) //Position: 0x6626 / 26150
{
	SET_CAMERASHOT_PERSPECTIVE(*uParam0, 1);
	SET_CAMERASHOT_FOV(*uParam0, 35.86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(*uParam0, 0.1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(*uParam0, 0.3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(*uParam0, 0);
	ATTACH_CAMERASHOT(*uParam0, iParam1, -0.442921f, 1.420794f, -0.871029f, 4.479696f, -143.4034f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
	RESET_CAMERASHOT_TARGET(*uParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(*uParam0, iParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(*uParam0, iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(*uParam0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1);
	return;
}

bool Function_109(bool bParam0, vector3 vParam1) //Position: 0x66AA / 26282
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

void Function_110(int iParam0, float fParam1) //Position: 0x66E8 / 26344
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(StackVal, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fVar0);
	return;
}

void Function_111(int iParam0, float fParam1, bool bParam2) //Position: 0x672A / 26410
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = GET_WEAPONENUM_FOR_AMMOENUM(Global_34573, iParam0);
	fVar1 = _GET_AMMO_AMOUNT(Global_34573, iParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(Global_34573, uVar0);
	if (fVar1 <= fParam1)
	{
		fVar3 = fParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (fParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(Global_34573, uVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(Global_34573, iParam0, (fVar1 - fVar3), 0);
	}
	if (bParam2)
	{
		iVar5 = FLOOR(fParam1);
		iVar5 = (iVar5 * 4294967295);
		if (iParam0 == 10)
		{
			iVar6 = "ammo_shotgun";
		}
		else if (iParam0 == 8)
		{
			iVar6 = "ammo_repeater";
		}
		else if (iParam0 == 7)
		{
			iVar6 = "ammo_revolver";
		}
		else if (iParam0 == 11)
		{
			iVar6 = "ammo_sniperrifle";
		}
		else if (iParam0 == 6)
		{
			iVar6 = "ammo_pistol";
		}
		else if (iParam0 == 9)
		{
			iVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(iVar6), INT_TO_STRING(iVar5), 5.0f, Function_61(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_112() //Position: 0x6861 / 26721
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_113() //Position: 0x6873 / 26739
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x6888 / 26760
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(Global_34573, "bTalkedToLeader", 1);
	Function_117(StackVal, StackVal, Global_34574, 1, iParam0->f_168, 0);
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
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", uVar0[0], 0, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", uVar0[0], uVar0[1], 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", uVar0[0], uVar0[1], uVar0[2], 0, 2, 0, 0);
	}
	Function_155("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_29(iParam0->f_356, 8))
	{
		if (Function_171())
		{
			Function_197(iParam0 + 356, 8);
		}
		else
		{
			Function_197(iParam0 + 356, 524288);
		}
	}
	Function_197(iParam0 + 356, 32);
	iParam0->f_364 = Function_200(0, iParam1, 3);
	Function_197(&Global_13172[iParam0->f_36411] + 24, 0x40000000);
	Function_115(iParam0);
	return;
}

void Function_115(int iParam0) //Position: 0x6B6A / 27498
{
	int iVar0;
	bool bVar1;
	char* cVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
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
				cVar2 = ADD_BLIP_FOR_ACTOR(bVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(cVar2, "Surv_Unsafe");
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
				(iParam0 + 4[iVar05])->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
				ATTACH_OBJECTS((iParam0 + 4[iVar05])->f_12, bVar1, Function_61(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				iVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(bVar1));
				iVar4 = Function_116(bVar1);
				if (_GET_AMMO_AMOUNT(Global_34573, iVar3, 1) <= 5.0f)
				{
					(iParam0 + 4[iVar05])->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(bVar1, "nUC_NoAmmo"))
				{
					iVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", (iParam0 + 4[iVar05])->f_12, 10, 4, iVar4, "", "", "", 4, 0);
					DECOR_SET_INT(bVar1, "nUC_NoAmmo", iVar5);
				}
				Function_197(iParam0 + 4[iVar05] + 16, 2);
				bVar6 = CREATE_POINT_IN_LAYOUT(bVar1, Function_61(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bVar6, bVar1, Function_61(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
				iVar7 = ADD_BLIP_FOR_OBJECT(bVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(iVar7, 1);
				DECOR_SET_INT(bVar1, "PauseMapBlip", iVar7);
				SET_BLIP_NAME(iVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(bVar7, 1);
			}
			else
			{
				Function_110(Global_29006, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_116(bool bParam0) //Position: 0x6DDB / 28123
{
	int iVar0;
	
	iVar0 = DECOR_GET_INT(bParam0, "nammo_type");
	if (iVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (iVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (iVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (iVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (iVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (iVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_117(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x6E9E / 28318
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	int iVar27;
	vector3 vVar28;
	
	if (Function_145(StackVal, StackVal, vParam0))
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
		if (IS_ACTOR_VALID(uParam4))
		{
			Function_144(bParam4);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_144(bParam4), StackVal) };
			VNORMALIZE(&vVar1);
			Global_34165.f_12 = UNK_0x9C40E671(&vVar1);
		}
		else
		{
			Global_34165.f_12 = Function_143(Global_34573);
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
		if (!Function_142(&Global_34165, &Global_34165 + 12, &uVar4))
		{
			GET_VOLUME_CENTER(uVar4, &vVar5);
			if (Function_138(StackVal, StackVal, vVar5, iVar4, &vVar8, &vVar11, 1))
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
	else if (!Function_142(&Global_34165, &Global_34165 + 12, &iVar17))
	{
		Global_34165.f_24 = Function_136(StackVal, StackVal, vParam0, 0.0f, 1);
		if (Function_5(Global_34165.f_24))
		{
			iVar17 = StackVal;
			GET_VOLUME_CENTER(iVar17, &vVar18);
			if (Function_138(StackVal, StackVal, vVar18, iVar17, &vVar21, &vVar24, 0))
			{
				iVar27 = Function_135(StackVal, StackVal, vVar21, 1);
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
		Function_118();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_118() //Position: 0x72A5 / 29349
{
	Function_131();
	Function_130();
	Function_130();
	Function_129();
	Function_129();
	Function_128();
	Function_128();
	Function_125(0);
	Function_125(0);
	if (!Function_51())
	{
		Function_123();
		Function_122();
		Function_121();
		Function_120();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_119();
	return;
}

void Function_119() //Position: 0x72F7 / 29431
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

void Function_120() //Position: 0x73FD / 29693
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

void Function_121() //Position: 0x7430 / 29744
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_122() //Position: 0x75BE / 30142
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_123() //Position: 0x7772 / 30578
{
	Function_124(&Global_28260, 1, 0);
	return;
}

void Function_124(int iParam0, bool bParam1, int iParam2) //Position: 0x7780 / 30592
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_87();
	if (IS_ACTOR_VALID(uVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || iParam2)
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
		iVar3 = 0;
		while (iVar3 < (17 - 1))
		{
			(*iParam0 + 1016)[iVar3] = _GET_AMMO_AMOUNT(bVar0, iVar3, 0);
			iVar3++;
		}
		iParam0->f_1120 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*iParam0 + 1088)[iVar4] = GET_WEAPON_EQUIPPED(bVar0, iVar10);
			if ((*iParam0 + 1088)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(bVar0);
		if (iVar12 != 4294967295)
		{
			iParam0->f_1124 = GET_WEAPON_EQUIPPED(bVar0, iVar12);
		}
		else
		{
			iParam0->f_1124 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (iVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, iVar13);
		}
		else
		{
			iParam0->f_1128 = 4294967295;
		}
		iVar5 = 0;
		while (iVar5 < (39 - 1))
		{
			(*iParam0 + 2164)[iVar5] = IS_WEAPONENUM_LOCKED(iVar5);
			iVar5++;
		}
	}
	return;
}

struct<8> Function_125(int iParam0) //Position: 0x7971 / 31089
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
					iVar2 = ((Function_127((50 + iVar4)) + Function_127((183 + iVar4))) + Function_127((90 + iVar4)));
				}
				break;
		}
		if (iVar2 > iVar3)
		{
			iVar5 = iVar4;
			iVar3 = iVar2;
		}
		iVar4++;
	}
	if (iVar3 < 0)
	{
		return StackVal, cVar0;
	}
	Function_126(182, iVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar5, 8);
	return StackVal, cVar0;
}

int Function_126(int iParam0, int iParam1, bool bParam2) //Position: 0x7A17 / 31255
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
	if (Global_34581[iParam0] > TO_FLOAT(iParam1))
	{
		Function_70(iParam0, TO_FLOAT(iParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(iParam1);
	Function_69(iParam0);
	if (bParam2)
	{
		Function_60(iParam0, 1, TO_FLOAT(iParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_127(int iParam0) //Position: 0x7CB2 / 31922
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

struct<8> Function_128() //Position: 0x7CF3 / 31987
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
		iVar2 = ((Function_127((50 + iVar3) + 15) + Function_127((183 + iVar3) + 15)) + Function_127((90 + iVar3) + 15));
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
	Function_126(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_129() //Position: 0x7D7C / 32124
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
			iVar2 = ((Function_127((50 + iVar3) + 8) + Function_127((183 + iVar3) + 8)) + Function_127((90 + iVar3) + 8));
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
	Function_126(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_130() //Position: 0x7E13 / 32275
{
	char* cVar0[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	strcpy(&cVar0, "fav_non", 8);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 <= 8)
	{
		iVar2 = ((Function_127((50 + iVar3)) + Function_127((183 + iVar3))) + Function_127((90 + iVar3)));
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
	Function_126(179, iVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, iVar4, 8);
	return StackVal, cVar0;
}

void Function_131() //Position: 0x7E92 / 32402
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_132(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_126(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_132(int iParam0, float fParam1, int iParam2) //Position: 0x7ECB / 32459
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_34581[iParam0] = (Global_34581[iParam0] + fParam1);
	Function_70(iParam0, fParam1, 1);
	Function_69(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_60(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_35278[iParam020]), Global_34573, 0);
			iVar1++;
		}
	}
	return 1;
}

int Function_133(int iParam0) //Position: 0x80D6 / 32982
{
	if (!Function_134(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_134(int iParam0) //Position: 0x80F0 / 33008
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_135(vector3 vParam0, bool bParam3) //Position: 0x8106 / 33030
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

var Function_136(vector3 vParam0, float fParam3, int iParam4) //Position: 0x8171 / 33137
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	fVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_145(StackVal, StackVal, vParam0))
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
			else if (Function_137(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (StackVal && !IS_ACTOR_IN_VOLUME(!Function_218(&(Global_29008[iVar6]), 4096), Global_34573))
			{
				iVar5 = 0;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > fVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					fVar4 = VDIST(vParam0, vVar1);
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

int Function_137(int iParam0) //Position: 0x826B / 33387
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

bool Function_138(vector3 vParam0, int iParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x82C3 / 33475
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	float fVar11;
	var uVar12;
	bool bVar13;
	struct<6> Var14;
	var uVar20;
	int iVar26;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	vector3 vVar41;
	
	if (Function_145(StackVal, StackVal, vParam0) || !IS_VOLUME_VALID(iParam3))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(Global_28841, vParam0, 2096, 0.1f, 300.0f, Function_141(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(uVar0) < 0)
	{
		UNK_0xDF93BD7C(uVar0);
		return 0;
	}
	fVar11 = -1.0f;
	bVar13 = false;
	iVar1 = 0;
	while (iVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(uVar0, iVar1, &vVar2);
		vVar8.x = vVar2.x;
		vVar8.f_4 = vVar2.y;
		vVar8.f_8 = vVar2.z;
		if ((fVar11 > 0.0f || fVar11 < VDIST(vParam0, vVar8)) && !IS_POINT_IN_VOLUME(vVar8, iParam3))
		{
			fVar11 = VDIST(vParam0, vVar8);
			*uParam4 = { StackVal, StackVal, vVar8 };
			uVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(uVar0, iVar1);
			bVar13 = true;
		}
		iVar1++;
	}
	UNK_0xDF93BD7C(uVar0);
	if (bVar13)
	{
		Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_140(StackVal, StackVal, *uParam4) };
		if (!bParam6)
		{
			UNK_0x19D652F9(uVar12, 100.0f, &Var14, &uVar20);
			UNK_0x19D652F9(uVar12, -100.0f, &Var14, &iVar26);
		}
		else
		{
			UNK_0x19D652F9(uVar12, 10.0f, &Var14, &uVar20);
			UNK_0x19D652F9(uVar12, -10.0f, &Var14, &iVar26);
		}
		Function_139(&uVar20);
		vVar32 = { StackVal, StackVal, Function_139(&uVar20) };
		Function_139(&iVar26);
		vVar35 = { StackVal, StackVal, Function_139(&iVar26) };
		GET_VOLUME_CENTER(iParam3, &vVar38);
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
			if (!IS_POINT_IN_VOLUME(vVar32, iParam3))
			{
				*uParam4 = { StackVal, StackVal, vVar32 };
			}
			*uParam5 = { StackVal, StackVal, vVar38 };
		}
	}
	return bVar13;
}

vector3 Function_139(int iParam0) //Position: 0x846D / 33901
{
	vector3 vVar0;
	
	vVar0.x = *iParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_140(vector3 vParam0) //Position: 0x848C / 33932
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_141(int iParam0, int iParam1) //Position: 0x84AC / 33964
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_142(var uParam0, var uParam1, int iParam2) //Position: 0x84BF / 33983
{
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (Function_218(&(Global_29008[Global_30717[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 298.377f;
			*uParam0 = { 422.321f, 101.465f, 1199.226f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30640[4]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 214.92f;
			*uParam0 = { -1812.829f, 22.935f, 2813.963f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30640[12]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 24.686f;
			*uParam0 = { -2897.155f, 17.974f, 2715.677f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30658[0]]), 4))
	{
		*iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(Global_34573, *iParam2))
		{
			*uParam1 = 332.057f;
			*uParam0 = { -3911.452f, 31.16f, 2975.941f };
			return 1;
		}
	}
	if (Function_218(&(Global_29008[Global_30693[4]]), 4))
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

var Function_143(int iParam0) //Position: 0x86F3 / 34547
{
	return GET_HEADING(iParam0);
}

vector3 Function_144(bool bParam0) //Position: 0x86FE / 34558
{
	vector3 vVar0;
	
	GET_POSITION(iParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_145(vector3 vParam0) //Position: 0x870F / 34575
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_146(var uParam0, bool bParam1, int iParam2) //Position: 0x8727 / 34599
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(*uParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(Global_34573, uParam0->f_12) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(Global_34573)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(Global_34573))) && !FIRE_IS_ACTOR_ON_FIRE(*uParam0)) && IS_ACTOR_ALIVE(*uParam0)) && !Function_148(Global_34573, 0, 0))
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
		uVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(*uParam0));
		bVar0 = _GET_AMMO_AMOUNT(Global_34573, uVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		if (Function_148(Global_34573, 0, 0) || !IS_ACTOR_ALIVE(*uParam0))
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
			if (!Function_29(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_147(Global_34573, *uParam0) > 3.0f)
				{
					Function_197(iParam2, 65536);
					Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
			{
				iVar2 = Function_116(*uParam0);
				iVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar2, "", "", "", 4, 0);
				DECOR_SET_INT(*uParam0, "nUC_NoAmmo", iVar3);
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
		if (!Function_29(*iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_147(Global_34573, *uParam0) > 3.0f)
			{
				Function_197(iParam2, 65536);
				Function_152("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(*uParam0, "nUC_NoAmmo"))
		{
			iVar4 = Function_116(*uParam0);
			iVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", uParam0->f_12, 10, 4, iVar4, "", "", "", 4, 0);
			DECOR_SET_INT(*uParam0, "nUC_NoAmmo", iVar5);
		}
		return 0;
	}
	if (!Function_148(Global_34573, 0, 0))
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
			iVar6 = Function_116(*uParam0);
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

float Function_147(bool bParam0, bool bParam1) //Position: 0x8AB7 / 35511
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ACTOR_VALID(iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(bParam0, &vVar0);
	GET_POSITION(bParam1, &vVar3);
	return VDIST(vVar0, vVar3);
}

bool Function_148(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8BA8 / 35752
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(iParam0, 0.3f))
	{
		return 1;
	}
	if (Function_151(iParam0))
	{
		return 1;
	}
	if (Function_150(iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(iParam0) && !bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(iParam0))
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
	if (Function_149())
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x8C5E / 35934
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_150(int iParam0) //Position: 0x8C75 / 35957
{
	return IS_ACTOR_IN_HOGTIE(iParam0);
}

bool Function_151(int iParam0) //Position: 0x8C80 / 35968
{
	return IS_ACTOR_VALID(GET_LASSO_USER(iParam0));
}

void Function_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8C8E / 35982
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, uVar4, iParam6);
	}
}

struct<16> Function_153(int iParam0) //Position: 0x8D09 / 36105
{
	char* cVar0[16];
	
	if (!Function_154())
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

bool Function_154() //Position: 0x8D48 / 36168
{
	if (Function_29(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_155(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x8D63 / 36195
{
	struct<4> Var0;
	var uVar4;
	
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
			Var0 = { StackVal, StackVal, StackVal, Function_153(Global_6269) };
		}
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, &Var0, 0, iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(uParam0, iParam1, iParam7, iParam3, iParam2, uVar4, iParam5, iParam6);
	}
}

void Function_156(int iParam0, int iParam1) //Position: 0x8DE8 / 36328
{
	char* cVar0;
	
	cVar0 = ADD_BLIP_FOR_ACTOR(iParam0->f_168, 325, 0, 2, 0);
	SET_BLIP_NAME(cVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(bVar0, 1);
	(iParam0 + 168)->f_12 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2.0f, 1.2f, 2.0f);
	ATTACH_OBJECTS((iParam0 + 168)->f_12, iParam0->f_168, Function_61(), 0.0f, 0.8f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	if (iParam0->f_364 == 4294967295)
	{
		iParam0->f_364 = Function_200(0, iParam1, 3);
	}
	(iParam0 + 168)->f_8 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", (iParam0 + 168)->f_12, 10, 4, 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(iParam0->f_168, "Core", 1);
	return;
}

void Function_157(int iParam0) //Position: 0x8EA0 / 36512
{
	char* cVar0;
	var uVar1;
	var uVar7;
	char* cVar8;
	var uVar12;
	var uVar15;
	var uVar16;
	var uVar17;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_29155[iParam010] + 20);
	PRINTNL();
	if (Function_28(iParam0))
	{
		if ((iParam0 != Global_30679[1] || iParam0 != Global_30707[1]) || iParam0 != Global_30707[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_OBJECT_POSITION(StackVal, &uVar1);
			cVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0f, 2, 0);
			SET_BLIP_NAME(cVar0, "Status_SafeZone");
			UNK_0xFF3DB575(bVar0, 1);
			SET_BLIP_PRIORITY(bVar0, 3);
			uVar7 = Global_29008[iParam0];
			Function_197(&uVar7, 0x8000000);
			Function_197(&uVar7, 0x10000000);
			Global_29008[iParam0] = uVar7;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(StackVal)));
			}
			GET_VOLUME_SCALE(StackVal, &uVar12);
			cVar8 = Function_162(StackVal, 563, 0.0f);
			SET_BLIP_NAME(cVar8, "Status_UnderAttack");
			UNK_0xFF3DB575(bVar8, 1);
			uVar15 = Function_193(iParam0);
			uVar16 = Function_200(111, 111, 5);
			Function_161(uVar15, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_160(uVar15, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_158(uVar16);
			uVar17 = Global_29008[iParam0];
			Function_197(&uVar17, 0x1000000);
			Function_197(&uVar17, 0x10000000);
			Global_29008[iParam0] = uVar17;
		}
	}
	return;
}

void Function_158(int iParam0) //Position: 0x9053 / 36947
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_200(111, 111, 5);
	}
	iVar0 = 4294967295;
	uVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(1))
	{
		iVar0 = 1;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(2))
	{
		iVar0 = 2;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(3))
	{
		iVar0 = 3;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(4))
	{
		iVar0 = 4;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(5))
	{
		iVar0 = 5;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(8))
	{
		iVar0 = 8;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(9))
	{
		iVar0 = 9;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(11))
	{
		iVar0 = 11;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(12))
	{
		iVar0 = 12;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(13))
	{
		iVar0 = 13;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(14))
	{
		iVar0 = 14;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(15))
	{
		iVar0 = 15;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(16))
	{
		iVar0 = 16;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(17))
	{
		iVar0 = 17;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(18))
	{
		iVar0 = 18;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(19))
	{
		iVar0 = 19;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(21))
	{
		iVar0 = 21;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(22))
	{
		iVar0 = 22;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(23))
	{
		iVar0 = 23;
		uVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, uVar1) && !Function_159(24))
	{
		iVar0 = 24;
		uVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = uVar1;
	return;
}

bool Function_159(int iParam0) //Position: 0x9367 / 37735
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x938B / 37771
{
	while (iParam4 > 60)
	{
		iParam4 = (iParam4 - 60);
		iParam3++;
	}
	while (iParam3 > 60)
	{
		iParam3 = (iParam3 - 60);
		iParam2++;
	}
	while (iParam2 > 24)
	{
		iParam2 = (iParam2 - 24);
		iParam1++;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4));
			break;
	}
}

void Function_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x964B / 38475
{
	switch (iParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
	}
}

var Function_162(bool bParam0, int iParam1, float fParam2) //Position: 0x988A / 39050
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(iVar0))
	{
		if (GET_BLIP_ICON(iVar0) == iParam1)
		{
			return iVar0;
		}
		REMOVE_BLIP(iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(bParam0, iParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(iVar0))
	{
		return iVar0;
	}
	return "";
}

void Function_163(int iParam0) //Position: 0x98D7 / 39127
{
	Function_169(iParam0 + 192, "DLC_give_ammo", 5, 1);
	Function_169(iParam0 + 192, "custom/DLC_give_ammo", 8, 1);
	Function_169(iParam0 + 192, "ZombiePack_Footlocker", 1, 1);
	Function_164(iParam0 + 192);
	return;
}

bool Function_164(int iParam0) //Position: 0x9943 / 39235
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_168();
	iVar1 = 0;
	if (!Function_24(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		else if (Function_166())
		{
			iVar1 = 1;
			Function_167(iParam0[iVar03], 8);
		}
		Function_167(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_24(iParam0[iVar03], 4))
		{
			if (!Function_24(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_24(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_24(iParam0[03], 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO((*iParam0)[iVar03]);
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03]));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT((*iParam0)[iVar03]);
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME((*iParam0)[iVar03], 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY((*iParam0)[iVar03]);
						break;
					
					default:
						break;
				}
				Function_167(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_24(iParam0[iVar03], 4))
		{
			if (!Function_24(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED((*iParam0)[iVar03], 4294967295))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_167(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_167(iParam0[iVar03], 2);
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
	Function_165();
	return 1;
}

void Function_165() //Position: 0x9CBE / 40126
{
	if (!Function_26(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_166() //Position: 0x9CFE / 40190
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

void Function_167(var uParam0, int iParam1) //Position: 0x9D29 / 40233
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_168() //Position: 0x9D3A / 40250
{
	if (!Function_26(128))
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

var Function_169(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x9D7C / 40316
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(iParam1, iParam2);
	iVar0 = Function_170(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_167(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_170(var uParam0, int iParam1, int iParam2) //Position: 0x9DB4 / 40372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_24(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_167(uParam0[iVar03], 4);
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

bool Function_171() //Position: 0x9E78 / 40568
{
	int iVar0;
	char* cVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	cVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(cVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(cVar1, "ZombiePack_foot");
	bVar2 = START_OBJECT_ITERATOR(cVar1);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!DECOR_CHECK_EXIST(bVar2, "GringoIsDone"))
		{
			iVar3 = ADD_BLIP_FOR_OBJECT(bVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(iVar3, "Chest_BlipName");
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
		iVar0 = 1;
		bVar2 = OBJECT_ITERATOR_NEXT(cVar1);
	}
	DESTROY_ITERATOR(cVar1);
	return iVar0;
}

void Function_172(bool bParam0, var uParam1, struct<365> Param2) //Position: 0x9F5D / 40797
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char* cVar5[32];
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	char* cVar17;
	float fVar18;
	vector3 vVar19;
	vector3 vVar22;
	bool bVar25;
	
	cVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(cVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(cVar0);
	iVar2 = Function_173(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	iVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), bParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(bVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(bVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			iVar14 = GET_OBJECTSET_FROM_OBJECT(bVar1);
			iVar13 = 0;
			while (iVar13 < (GET_OBJECTSET_SIZE(iVar14) - 1))
			{
				bVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar13, iVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(bVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				cVar17 = STRING_GET_TOKEN((iVar16 - 1));
				fVar18 = TO_FLOAT(STRING_TO_INT(cVar17));
				if (!Function_29(Global_13172[Param2.f_36411].f_20, FLOOR(POW(2.0f, fVar18))))
				{
					vVar19 = { 0.0f, 0.0f, 0.0f };
					vVar22 = { 0.0f, 0.0f, 0.0f };
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(bVar15, &vVar19);
					GET_OBJECT_ORIENTATION(bVar15, &vVar22);
					bVar25 = CREATE_GRINGO_IN_LAYOUT(bParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", vVar19, vVar22);
					ADD_OBJECT_TO_OBJECTSET(bVar25, iVar3);
				}
				iVar13++;
			}
			bVar4 = true;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(iVar3);
}

var Function_173(struct<365> Param0) //Position: 0xA0CB / 41163
{
	return Global_13172[Param0.f_36411].f_20;
}

void Function_174(int iParam0) //Position: 0xA0DF / 41183
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	
	bVar0 = true;
	iVar1 = 0;
	while (StackVal < (iVar1 - 1))
	{
		if (Function_29((iParam0 + 4[iVar15])->f_16, 1))
		{
			if (IS_ACTOR_ALIVE((*iParam0 + 4)[iVar15]))
			{
				vVar2 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(StackVal, &vVar2);
				if (STREAMING_ARE_BOUNDS_LOADED(vVar2, 3.0f))
				{
					if (!Function_38((*iParam0 + 4)[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_175(int iParam0, int iParam1) //Position: 0xA196 / 41366
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_176(&iVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(iVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (bVar0 == (*iParam0 + 4)[iVar15])
			{
				iVar3 = bVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(iVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_30668[0])
		{
			if (!Function_29(iParam0->f_356, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(bVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(bVar3))
				{
					if (Function_147(bVar3, Global_34573) > 3.5f)
					{
						Function_197(iParam0 + 356, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(bVar3, 118, Global_34573, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						iParam0->f_380 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_29(iParam0->f_356, 2))
		{
			fVar6 = Function_147(bVar3, Global_34573);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_29((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
			else if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", 1, 1, 2, 0, 1, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_372 = fVar4;
			}
		}
		else if (Function_29(iParam0->f_356, 512))
		{
			if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", 1, 1, 2, 0, 1, 0);
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
			fVar7 = Function_147(bVar3, Global_34573);
			if (fVar7 < 16.0f && !Function_29((iParam0 + 4[iVar25])->f_16, 4))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				iParam0->f_380 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_29((iParam0 + 4[iVar25])->f_16, 8))
			{
				Function_197(iParam0 + 4[iVar25] + 16, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(bVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(bVar3, Global_34573, 2.21749f, 0);
				iParam0->f_380 = fVar4;
			}
			else if (!Function_29((iParam0 + 4[iVar25])->f_16, 2))
			{
				if (fVar4 - iParam0->f_372) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(bVar3, "POST_SAVE_ANECDOTE_P", 1, 1, 2, 0, 1, 0);
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

bool Function_176(var uParam0, float fParam1, bool bParam2) //Position: 0xA5D5 / 42453
{
	char* cVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	
	cVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(cVar0, 15);
	ITERATE_IN_SPHERE(cVar0, Global_34574, fParam1);
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(cVar0);
	while (IS_OBJECT_VALID(bVar2) && !bVar1)
	{
		uVar3 = GET_ACTOR_FROM_OBJECT(bVar2);
		if (IS_ACTOR_RIDING(uVar3))
		{
			if (bParam2)
			{
				*uParam0 = uVar3;
			}
		}
		else
		{
			*uParam0 = uVar3;
		}
		if (IS_ACTOR_ALIVE(*uParam0))
		{
			bVar1 = true;
		}
		else
		{
			*uParam0 = "";
		}
		bVar2 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return bVar1;
}

void Function_177(int iParam0, int iParam1, float fParam2) //Position: 0xA652 / 42578
{
	char* cVar0;
	var uVar1;
	int iVar2;
	
	if (Global_3380 || Function_26(0x8000000))
	{
		return;
	}
	cVar0 = Function_32(iParam1);
	if (iParam1 == Global_30640[0])
	{
		uVar1 = FIND_VOLUME_IN_LAYOUT(Global_30616, "spawnresrict_2");
		if (IS_VOLUME_VALID(uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(Global_34573, bVar1))
			{
				if (!Function_29(iParam0->f_356, 0x2000000))
				{
					Function_44(iParam0 + 356, 4194304);
					Function_44(iParam0 + 356, 8388608);
					Function_44(iParam0 + 356, 0x1000000);
					Function_44(iParam0 + 356, 1048576);
					Function_44(iParam0 + 356, 2097152);
					Function_197(iParam0 + 356, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_44(iParam0 + 356, 0x2000000);
		}
	}
	if (!Function_29(iParam0->f_356, 2097152))
	{
		if (fParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(iParam0 + 356, 1048576);
			Function_197(iParam0 + 356, 2097152);
			Function_197(iParam0 + 356, 4194304);
			Function_197(iParam0 + 356, 8388608);
			Function_197(iParam0 + 356, 0x1000000);
			return;
		}
	}
	if (!Function_29(iParam0->f_356, 1048576))
	{
		if (fParam2 <= 40.0f && fParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_197(iParam0 + 356, 1048576);
			Function_197(iParam0 + 356, 4194304);
			Function_197(iParam0 + 356, 8388608);
			Function_197(iParam0 + 356, 0x1000000);
			return;
		}
	}
	iVar2 = Function_178(StackVal, StackVal, Global_34574, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_29(iParam0->f_356, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(iParam0 + 356, 4194304);
		Function_197(iParam0 + 356, 8388608);
		Function_197(iParam0 + 356, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_29(iParam0->f_356, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_197(iParam0 + 356, 8388608);
		Function_197(iParam0 + 356, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_29(iParam0->f_356, 0x1000000))
	{
		Function_197(iParam0 + 356, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(cVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_178(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6) //Position: 0xA92E / 43310
{
	char* cVar0;
	var uVar1;
	
	cVar0 = CREATE_VOLUME_IN_LAYOUT(Global_30616, Function_61(), 3, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam4, fParam3);
	uVar1 = Function_179(cVar0, uParam5, uParam6);
	DESTROY_VOLUME(cVar0);
	return uVar1;
}

int Function_179(bool bParam0, var uParam1, bool bParam2) //Position: 0xA961 / 43361
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	
	if (!IS_VOLUME_VALID(uParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	iVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_61(), Global_30616, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(iVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(bParam0, iVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(iVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		iVar3 = 0;
		while (iVar3 <= iVar2)
		{
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, iVar0);
			if (IS_OBJECT_VALID(bVar4))
			{
				uVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
				if (IS_ACTOR_VALID(uVar5))
				{
					if (Function_180(bVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(bVar5))
						{
							if (bParam2)
							{
								if (Function_38(bVar5, 0x3f800000, 0x42960000, 1, 1, 0))
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
			iVar3++;
		}
	}
	DESTROY_OBJECTSET(iVar0);
	return iVar1;
}

bool Function_180(bool bParam0) //Position: 0xAA2B / 43563
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(bParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_181(bParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(bParam0, "Zombie");
	}
	return 0;
}

bool Function_181(bool bParam0, int iParam1) //Position: 0xAA76 / 43638
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(iParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

void Function_182() //Position: 0xAAB8 / 43704
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = Function_193(Global_29006);
	fVar1 = Function_191(Global_29006);
	fVar2 = Function_192(iVar0);
	fVar3 = (((fVar2 - fVar1) / fVar2) * 1.5f);
	fVar3 = Function_183(0.33f, Function_141(fVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(fVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_184(1);
	return;
}

float Function_183(int iParam0, int iParam1) //Position: 0xAB06 / 43782
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_184(int iParam0) //Position: 0xAB19 / 43801
{
	if (Function_29(iParam0, 1) && !Function_29(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_185(int iParam0, bool bParam1) //Position: 0xAB46 / 43846
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
			if (!Function_29(iParam0->f_356, 0x4000000))
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
				SET_ACTOR_CAN_BE_TARGETED(bVar1, 1);
				if (!Function_29(iParam0->f_356, 0x4000000))
				{
					TASK_PRIORITY_SET(bVar1, 0);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_186(*iParam0, *iParam0, 0);
	return;
}

void Function_186(var uParam0, var uParam1, int iParam2) //Position: 0xAC2A / 44074
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(uParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0, iVar0);
		if (IS_ACTOR_VALID(uVar1))
		{
			Function_187(bVar1, uParam1, iParam2);
		}
		iVar0++;
	}
	return;
}

void Function_187(bool bParam0, var uParam1, int iParam2) //Position: 0xAC79 / 44153
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(uParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam1, iVar0);
		if (IS_ACTOR_VALID(uVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				MEMORY_CONSIDER_AS(bParam0, bVar1, iParam2);
			}
		}
		iVar0++;
	}
	return;
}

bool Function_188(int iParam0) //Position: 0xACC3 / 44227
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_27(iVar0) || Function_159(iParam0));
}

void Function_189(int iParam0) //Position: 0xAD02 / 44290
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (!Function_29(iParam0->f_356, 512))
	{
		fVar0 = Function_191(Global_29006);
		iVar1 = Function_193(Global_29006);
		if (iVar1 == 0 && iParam0->f_368 >= 120.0f)
		{
			fVar2 = Function_192(iVar1);
			fVar3 = ((fVar0 / fVar2) * 100.0f);
			if (fVar3 <= 120.0f)
			{
				iParam0->f_368 = 1000.0f;
				return;
			}
			if (fVar3 == iParam0->f_368)
			{
				fVar4 = (fVar0 % 10.0f);
				fVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar5));
				UI_REFRESH("ZMeter");
				iParam0->f_368 = fVar3;
			}
		}
	}
	return;
}

void Function_190(int iParam0) //Position: 0xADC3 / 44483
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GET_BLIP_ON_ACTOR(*iParam0);
	if (GET_BLIP_ICON(iVar0) == 325)
	{
		REMOVE_BLIP(iVar0);
	}
	iVar1 = DECOR_GET_INT(*iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(iVar1))
	{
		REMOVE_BLIP(iVar1);
	}
	DECOR_REMOVE(*iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(StackVal))
	{
		RELEASE_SCRIPT_USE_CONTEXT(StackVal);
	}
	if (DECOR_CHECK_EXIST(*iParam0, "nUC_NoAmmo"))
	{
		iVar2 = DECOR_GET_INT(*iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(iVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iVar2);
		}
		DECOR_REMOVE(*iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(iParam0->f_12))
	{
		DESTROY_VOLUME(iParam0->f_12);
	}
	return;
}

var Function_191(int iParam0) //Position: 0xAE86 / 44678
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	uVar2 = StackVal;
	if (IS_VOLUME_VALID(uVar2))
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

var Function_192(int iParam0) //Position: 0xAEE0 / 44768
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

int Function_193(int iParam0) //Position: 0xB023 / 45091
{
	if (iParam0 == Global_30640[0])
	{
		return 1;
	}
	if (iParam0 == Global_30640[2])
	{
		return 2;
	}
	if (iParam0 == Global_30640[1])
	{
		return 3;
	}
	if (iParam0 == Global_30658[1])
	{
		return 4;
	}
	if (iParam0 == Global_30658[3])
	{
		return 5;
	}
	if (iParam0 == Global_30668[0])
	{
		return 8;
	}
	if (iParam0 == Global_30668[1])
	{
		return 9;
	}
	if (iParam0 == Global_30679[0])
	{
		return 11;
	}
	if (iParam0 == Global_30685[0])
	{
		return 12;
	}
	if (iParam0 == Global_30685[1])
	{
		return 13;
	}
	if (iParam0 == Global_30685[2])
	{
		return 14;
	}
	if (iParam0 == Global_30693[0])
	{
		return 15;
	}
	if (iParam0 == Global_30693[1])
	{
		return 16;
	}
	if (iParam0 == Global_30693[2])
	{
		return 17;
	}
	if (iParam0 == Global_30707[2])
	{
		return 25;
	}
	if (iParam0 == Global_30707[3])
	{
		return 18;
	}
	if (iParam0 == Global_30707[0])
	{
		return 19;
	}
	if (iParam0 == Global_30717[0])
	{
		return 21;
	}
	if (iParam0 == Global_30723[2])
	{
		return 22;
	}
	if (iParam0 == Global_30723[1])
	{
		return 23;
	}
	if (iParam0 == Global_30723[0])
	{
		return 24;
	}
	if (iParam0 == Global_30679[1])
	{
		return 26;
	}
	if (iParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

void Function_194() //Position: 0xB1A9 / 45481
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	
	cVar0 = CREATE_OBJECT_ITERATOR(Global_30616);
	ITERATE_ON_OBJECT_TYPE(cVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(cVar0, "ZombiePack_foot");
	bVar1 = START_OBJECT_ITERATOR(cVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		iVar2 = GET_BLIP_ON_OBJECT(bVar1);
		if (IS_BLIP_VALID(iVar2))
		{
			REMOVE_BLIP(iVar2);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return;
}

var Function_195(bool bParam0, int iParam1) //Position: 0xB207 / 45575
{
	int iVar0;
	char* cVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		cVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
		ITERATE_ON_OBJECT_TYPE(cVar1, 12);
		ITERATE_ON_PARTIAL_NAME(cVar1, "player_sleep");
		if (iParam1 == Global_30628[2])
		{
			ITERATE_IN_SPHERE(cVar1, 123.033f, 72.791f, 2669.954f, 10.0f);
		}
		bVar2 = START_OBJECT_ITERATOR(cVar1);
		if (IS_OBJECT_VALID(bVar2))
		{
			uVar3 = GET_GRINGO_FROM_OBJECT(bVar2);
			if (IS_GRINGO_VALID(uVar3))
			{
				GRINGO_ALLOW_ACTIVATION(uVar3, bParam0);
				bVar4 = GET_OBJECT_FROM_GRINGO(uVar3);
				iVar5 = GET_BLIP_ON_OBJECT(bVar4);
				if (IS_BLIP_VALID(iVar5))
				{
					REMOVE_BLIP(iVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(bVar4, "SavingAtBedAllowed", 1);
					iVar5 = ADD_BLIP_FOR_OBJECT(bVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(iVar5, 1);
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
		DESTROY_ITERATOR(cVar1);
	}
	return iVar0;
}

void Function_196(int iParam0, float fParam1) //Position: 0xB328 / 45864
{
	DECOR_SET_FLOAT(StackVal, "ZombieScore", fParam1);
	return;
}

void Function_197(var uParam0, int iParam1) //Position: 0xB34B / 45899
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_198(int iParam0, bool bParam1) //Position: 0xB35A / 45914
{
	int iVar0;
	
	iVar0 = Function_133(iParam0);
	if (!Function_199(iVar0))
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

bool Function_199(int iParam0) //Position: 0xB397 / 45975
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_200(int iParam0, int iParam1, int iParam2) //Position: 0xB3AE / 45998
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_204(iParam0, iParam1, iParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_201(iParam0, iParam1, iParam2, iVar0);
		}
		iVar0++;
	}
	return Function_201(iParam0, iParam1, iParam2, 4294967295);
}

int Function_201(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0xB40C / 46092
{
	var uVar0;
	
	if (!Function_203(iParam2))
	{
		return 4294967295;
	}
	if (iParam0 > 0 || iParam0 < 255)
	{
		return 4294967295;
	}
	if (iParam1 > 0 || iParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_204(iParam0, iParam1, iParam2);
	if (iParam3 != 4294967295 || iParam3 <= 275)
	{
		iParam3 = Function_202(uVar0);
	}
	if (iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[iParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
		Global_16198[iParam3] = 0;
		Global_13172[iParam311].f_4 = 0;
		Global_13172[iParam311].f_8 = 0;
		Global_13172[iParam311].f_12 = 0;
		Global_13172[iParam311].f_16 = 0;
		Global_13172[iParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(iParam3);
		PRINTSTRING(" ");
		PRINTINT(iParam0);
		PRINTSTRING(" ");
		PRINTINT(iParam1);
		PRINTSTRING(" ");
		PRINTINT(iParam2);
		PRINTNL();
	}
	return iParam3;
}

int Function_202(int iParam0) //Position: 0xB561 / 46433
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

bool Function_203(int iParam0) //Position: 0xB59F / 46495
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_204(int iParam0, int iParam1, int iParam2) //Position: 0xB5B4 / 46516
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_205(int iParam0) //Position: 0xB5D4 / 46548
{
	iParam0 = iParam0;
	return;
}

void Function_206(char* cParam0, float fParam1) //Position: 0xB5DE / 46558
{
	if (!Function_26(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, cParam0, 64);
		Global_13133.f_68 = 2;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = (Global_13133.f_64 + fParam1);
	}
	return;
}

void Function_207(bool bParam0, bool bParam1) //Position: 0xB61C / 46620
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_30616 = bParam0;
	Global_26361.f_12 = iParam1;
	Global_29006 = iParam1;
	if (IS_OBJECT_VALID(Global_29155[iParam110].f_32))
	{
		if (!IS_WORLD_SECTOR_LOADED(Global_29155[iParam110].f_32))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(Global_29155[iParam110].f_32);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_71(Global_29155[iParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_51())
	{
		SET_RICH_PRESENCE(2, Global_29155[iParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", iParam1);
	Global_30620 = 0;
	return;
}

void Function_208(int iParam0) //Position: 0xB716 / 46870
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_209(bool bParam0) //Position: 0xB729 / 46889
{
	Function_210(StackVal, 1, 0.25f, 4, Local_108, 1);
	return;
}

void Function_210(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xB745 / 46917
{
	char* cVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(uParam4))
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
	cVar0 = CREATE_OBJECT_ITERATOR(Global_28842.f_20);
	if (IS_ITERATOR_VALID(cVar0))
	{
		ITERATE_ON_OBJECT_TYPE(cVar0, 9);
		ITERATE_ON_PARTIAL_NAME(cVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(cVar0) >= 0)
		{
			Global_28842.f_28 = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(cVar0));
		}
		DESTROY_ITERATOR(cVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_213();
	}
	if (bParam5)
	{
		Function_211(1048576);
	}
}

void Function_211(int iParam0) //Position: 0xB858 / 47192
{
	Function_212(&Global_28842, iParam0);
	return;
}

void Function_212(var uParam0, var uParam1) //Position: 0xB866 / 47206
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_213() //Position: 0xB881 / 47233
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_211(16384);
	}
	return;
}

void Function_214(var uParam0) //Position: 0xB89D / 47261
{
	uParam0 = uParam0;
	return;
}

void Function_215() //Position: 0xB8A7 / 47271
{
	return;
}

void Function_216(int iParam0) //Position: 0xB8AD / 47277
{
	iParam0 = iParam0;
	return;
}

void Function_217(var uParam0, int iParam1) //Position: 0xB8B7 / 47287
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_218(int iParam0, int iParam1) //Position: 0xB8CE / 47310
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_219() //Position: 0xB8EA / 47338
{
	return;
}

void Function_220() //Position: 0xB8F0 / 47344
{
	return;
}

void Function_221(int iParam0) //Position: 0xB8F6 / 47350
{
	iParam0 = iParam0;
	return;
}

void Function_222(int iParam0, int iParam1, int iParam2) //Position: 0xB900 / 47360
{
	if ((!Function_5(iParam1) || Global_3380) || Function_29(iParam0->f_356, 16))
	{
		return;
	}
	if (iParam1 == Global_30640[0])
	{
		Function_223(iParam0, iParam1, &Global_6298, iParam2);
	}
	else if (iParam1 == Global_30640[1])
	{
		Function_223(iParam0, iParam1, &Global_6364, iParam2);
	}
	else if (iParam1 == Global_30640[2])
	{
		Function_223(iParam0, iParam1, &Global_6351, iParam2);
	}
	else if (iParam1 == Global_30658[1])
	{
		Function_223(iParam0, iParam1, &Global_6402, iParam2);
	}
	else if (iParam1 == Global_30658[3])
	{
		Function_223(iParam0, iParam1, &Global_6433, iParam2);
	}
	else if (iParam1 == Global_30658[4])
	{
		Function_223(iParam0, iParam1, &Global_6537, iParam2);
	}
	else if (iParam1 == Global_30668[0])
	{
		Function_223(iParam0, iParam1, &Global_6563, iParam2);
	}
	else if (iParam1 == Global_30668[1])
	{
		Function_223(iParam0, iParam1, &Global_6614, iParam2);
	}
	else if (iParam1 == Global_30668[2])
	{
		Function_223(iParam0, iParam1, &Global_6643, iParam2);
	}
	else if (iParam1 == Global_30679[1])
	{
		Function_223(iParam0, iParam1, &Global_6667, iParam2);
	}
	else if (iParam1 == Global_30679[0])
	{
		Function_223(iParam0, iParam1, &Global_6654, iParam2);
	}
	else if (iParam1 == Global_30685[0])
	{
		Function_223(iParam0, iParam1, &Global_6709, iParam2);
	}
	else if (iParam1 == Global_30685[1])
	{
		Function_223(iParam0, iParam1, &Global_6764, iParam2);
	}
	else if (iParam1 == Global_30685[2])
	{
		Function_223(iParam0, iParam1, &Global_6785, iParam2);
	}
	else if (iParam1 == Global_30693[0])
	{
		Function_223(iParam0, iParam1, &Global_6815, iParam2);
	}
	else if (iParam1 == Global_30693[1])
	{
		Function_223(iParam0, iParam1, &Global_6866, iParam2);
	}
	else if (iParam1 == Global_30693[2])
	{
		Function_223(iParam0, iParam1, &Global_6490, iParam2);
	}
	else if (iParam1 == Global_30707[2])
	{
		Function_223(iParam0, iParam1, &Global_6933, iParam2);
	}
	else if (iParam1 == Global_30707[1])
	{
		Function_223(iParam0, iParam1, &Global_6962, iParam2);
	}
	else if (iParam1 == Global_30707[0])
	{
		Function_223(iParam0, iParam1, &Global_7002, iParam2);
	}
	else if (iParam1 == Global_30707[3])
	{
		Function_223(iParam0, iParam1, &Global_6987, iParam2);
	}
	else if (iParam1 == Global_30723[0])
	{
		Function_223(iParam0, iParam1, &Global_7171, iParam2);
	}
	else if (iParam1 == Global_30723[1])
	{
		Function_223(iParam0, iParam1, &Global_7148, iParam2);
	}
	else if (iParam1 == Global_30723[2])
	{
		Function_223(iParam0, iParam1, &Global_7113, iParam2);
	}
	else if (iParam1 == Global_30717[0])
	{
		Function_223(iParam0, iParam1, &Global_7035, iParam2);
	}
	else if (iParam1 == Global_30717[1])
	{
		Function_223(iParam0, iParam1, &Global_7032, iParam2);
	}
	Function_197(iParam0 + 356, 64);
	return;
}

void Function_223(int iParam0, int iParam1, var uParam2, var uParam3) //Position: 0xBBCD / 48077
{
	struct<8> Var0;
	int iVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	vector3 vVar24;
	vector3 vVar27;
	struct<8> Var30;
	
	Function_44(iParam0 + 356, 1);
	if (!SQUAD_IS_VALID(*iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232("localSurvSquad") };
		*iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(uParam3, &Var0));
	}
	iVar8 = Function_231(uParam3, iParam1);
	iVar18 = Function_92(&iVar9, iParam1);
	iVar19 = 0;
	iVar20 = FLOOR(Global_13172[iParam0->f_36411].f_28);
	if (iVar18 < iVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_27(iParam1);
	iVar22 = 0;
	while (iVar22 < (iVar18 - 1))
	{
		if (iVar22 <= *uParam2)
		{
			if (!Function_230(uParam2[iVar222], 4))
			{
				(iParam0 + 4[iVar225])->f_4 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar22, iVar8);
				bVar23 = true;
				if (iVar20 >= 0)
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
					Var30 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_232("nSurvivor_") };
					(*iParam0 + 4)[iVar225] = CREATE_ACTOR_IN_LAYOUT(uParam3, &Var30, iVar9[iVar22], vVar24, vVar27);
					Function_225(iVar22, iParam0, uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(vVar24, 3.0f))
					{
						Function_197(iParam0 + 4[iVar225] + 16, 1);
						Function_197(iParam0 + 356, 1024);
					}
					Function_197(iParam0 + 356, 1);
				}
				else
				{
					iVar20 = (iVar20 - 1);
					Function_224(uParam2[iVar222], 4);
				}
			}
		}
		iVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	Function_186(*iParam0, *iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_224(var uParam0, int iParam1) //Position: 0xBDB9 / 48569
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_225(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xBDC8 / 48584
{
	bool bVar0;
	char* cVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	struct<5> Var7;
	int iVar12;
	int iVar13;
	int iVar14;
	char* cVar15[32];
	var uVar23;
	var uVar24;
	
	bVar0 = (*iParam1 + 4)[iParam05];
	cVar1 = StackVal;
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
	iVar10 = 1;
	if (DECOR_CHECK_EXIST(cVar1, "GiveWeapon"))
	{
		iVar11 = DECOR_GET_INT(bVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(bVar0, iVar11, 0, 1, 1);
		iVar12 = UNK_0xDB679ED9(iVar11);
		if (iVar12 == 40)
		{
			bVar10 = (StackVal + DECOR_GET_INT(iVar10, "ZP_NumRevolvers"));
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
	SET_ACTOR_CAN_BE_TARGETED(bVar0, 0);
	AI_BEHAVIOR_SET_ALLOW(bVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(bVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar0, 1);
	Function_229(bVar0, 0);
	Function_228(bVar0, 0);
	SET_CRIPPLE_ENABLE(bVar0, 0);
	SET_ACTOR_ALLOW_DISARM(bVar0, 0);
	if (DECOR_CHECK_EXIST(bVar1, "Accuracy"))
	{
		iVar13 = DECOR_GET_INT(bVar1, "Accuracy");
		Function_227(bVar0, TO_FLOAT(iVar13), 1.0f, 1.0f);
	}
	else
	{
		Function_227(bVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bVar0, 61, RAND_FLOAT_RANGE(0.1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(bVar0, (RAND_INT_RANGE(0, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(bVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(bVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(bVar1, "nShoot_Vol"))
	{
		iVar14 = DECOR_GET_INT(bVar1, "nShoot_Vol");
		strcpy(&cVar15, "survVol_", 32);
		stradd(&cVar15, INT_TO_STRING(iVar14), 32);
		uVar23 = FIND_VOLUME_IN_LAYOUT(uParam2, &cVar15);
		if (IS_VOLUME_VALID(uVar23))
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
		uVar24 = LOCATE_GRINGO_OF_TYPE("", &vVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(uVar24))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(uVar24), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_226(uVar24, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(uVar24), "ForceAllowSun", 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(uVar24), "ForceAllowRain", 1);
					SNAP_ACTOR_TO_GRINGO(bVar0, GET_OBJECT_FROM_GRINGO(uVar24), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar0, 2);
					TASK_USE_GRINGO(bVar0, uVar24, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(bVar24), "CantUse", 1);
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
	Function_227(bVar0, 20.0f, 1.0f, 1.0f);
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
			DECOR_SET_BOOL(bVar0, "PreSaved", 1);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(Global_34573, 1);
	}
}

var Function_226(var uParam0, int iParam1) //Position: 0xC43D / 50237
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(uParam0, iParam1);
}

void Function_227(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0xC44A / 50250
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

void Function_228(bool bParam0, bool bParam1) //Position: 0xC491 / 50321
{
	if (!IS_ACTOR_VALID(uParam0))
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

void Function_229(bool bParam0, bool bParam1) //Position: 0xC4D7 / 50391
{
	if (!IS_ACTOR_VALID(uParam0))
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

bool Function_230(var uParam0, int iParam1) //Position: 0xC506 / 50438
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_231(bool bParam0, int iParam1) //Position: 0xC522 / 50466
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	var uVar3[4];
	char* cVar8;
	
	cVar0 = CREATE_OBJECT_ITERATOR(iParam0);
	ITERATE_ON_OBJECT_TYPE(cVar0, 2);
	bVar1 = START_OBJECT_ITERATOR(cVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(bVar1))
	{
		cVar8 = GET_OBJECT_NAME(bVar1);
		if (Function_27(iParam1))
		{
			if (STRING_CONTAINS_STRING(cVar8, "_def"))
			{
				uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(cVar8, "_safe"))
		{
			uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(bVar1);
			iVar2++;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return uVar3[(RAND_INT_RANGE(0, 100000) % iVar2)];
}

struct<32> Function_232(char* cParam0) //Position: 0xC5C6 / 50630
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_233("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_6280++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_233(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC630 / 50736
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_234() //Position: 0xC64F / 50767
{
	return;
}

bool Function_235(int iParam0) //Position: 0xC655 / 50773
{
	if (Function_29(iParam0->f_356, 16))
	{
		return 1;
	}
	return Function_164(iParam0 + 192);
}

int Function_236(int iParam0) //Position: 0xC674 / 50804
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_218(&(Global_29008[iParam0]), 4);
}

int Function_237() //Position: 0xC690 / 50832
{
	return 1;
}

void Function_238(bool bParam0) //Position: 0xC697 / 50839
{
	Function_239(&uLocal_314, cLocal_7, "house01", 98, &Global_29155[bParam010] + 20, 0, Local_183.f_196, 0, 0);
	Function_239(&uLocal_314, cLocal_7, "house01", 99, &Global_29155[bParam010] + 20, 0, Local_183.f_196, 0, 0);
	return;
}

var Function_239(var uParam0, var uParam1, char* cParam2, int iParam3, char* cParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0xC6E7 / 50919
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	char* cVar11;
	
	iVar0 = Function_240(uParam0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	cVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(cVar11)))
	{
		return 4294967295;
	}
	(*uParam0)[iVar05] = GET_DOOR_FROM_OBJECT(cVar11);
	if (bParam5)
	{
		Function_48(uParam0[iVar05], 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST((*uParam0)[iVar05], 1);
	}
	Function_48(uParam0[iVar05], 4096);
	uParam0[iVar05]->f_12 = bParam6;
	if (bParam7)
	{
		Function_48(uParam0[iVar05], 16384);
	}
	if (bParam8)
	{
		Function_48(uParam0[iVar05], 32768);
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		DECOR_SET_OBJECT(cVar11, "roomvol", bParam6);
	}
	return iVar0;
}

var Function_240(int iParam0) //Position: 0xC7D3 / 51155
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

void Function_241() //Position: 0xC801 / 51201
{
	Function_242(StackVal, &uLocal_8, &iLocal_301, 4, 4294967295, 4);
	Function_242(StackVal, &uLocal_8, &iLocal_301, 5, 4294967295, 131338);
	Function_242(&uLocal_8, &iLocal_301, 5, Local_183.f_20, 4294967295, 266);
	Function_242(&uLocal_8, &iLocal_301, 5, Local_183.f_216, 4294967295, 266);
	return;
}

void Function_242(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0xC84A / 51274
{
	if (*uParam0 >= (*iParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(iParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	iParam1[*uParam03]->f_4 = bParam3;
	(*iParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_243(int iParam0) //Position: 0xC925 / 51493
{
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_244(int iParam0, bool bParam1) //Position: 0xC934 / 51508
{
	char* cVar0;
	bool bVar1;
	
	if (Function_29(iParam0->f_356, 16))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(iParam1);
	ITERATE_ON_OBJECT_TYPE(cVar0, 9);
	ITERATE_ON_PARTIAL_NAME(cVar0, "MoveRestrict");
	bVar1 = START_OBJECT_ITERATOR(cVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	return;
}

void Function_245(int iParam0, bool bParam1, int iParam2) //Position: 0xC99C / 51612
{
	char* cVar0;
	bool bVar1;
	
	if (Function_29(iParam0->f_356, 16))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(iParam1);
	ITERATE_ON_OBJECT_TYPE(cVar0, 9);
	ITERATE_ON_PARTIAL_NAME(cVar0, "SpawnRestrict");
	bVar1 = START_OBJECT_ITERATOR(cVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(bVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(bVar1));
		}
		bVar1 = OBJECT_ITERATOR_NEXT(cVar0);
	}
	DESTROY_ITERATOR(cVar0);
	if (!Function_27(iParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(StackVal))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
		}
	}
	return;
}

var Function_246() //Position: 0xCA2A / 51754
{
	return Local_108;
}

void Function_247(int iParam0) //Position: 0xCA32 / 51762
{
	cLocal_7 = Function_248(Local_108, "agaveviejo", iParam0);
	return;
}

var Function_248(var uParam0, var uParam1, int iParam2) //Position: 0xCA4E / 51790
{
	Global_29155[iParam210].f_32 = CREATE_WORLD_SECTOR(uParam0, uParam1);
	return Global_29155[iParam210].f_32;
}

bool Function_249() //Position: 0xCA6D / 51821
{
	return Function_250();
}

int Function_250() //Position: 0xCA76 / 51830
{
	var uVar0;
	
	Function_251(3, 3);
	uVar0 = uVar0;
	Local_183 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (!IS_LAYOUTREF_VALID(Local_183))
	{
		Local_183 = CREATE_LAYOUT("AgaveViejo_layout");
	}
	Local_183.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_horse_stable", 2, -1510.148f, 16.7838f, 3881.823f, 0.0f, 21.08624f, 0.0f, 12.9644f, 4.959112f, 13.86193f);
	Local_183.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_region", 3, -1508.634f, 75.85341f, 3887.426f, 0.0f, 20.67154f, 0.0f, 86.70736f, 88.56378f, 81.77341f);
	Local_183.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_pop_back_garden", 2, -1472.078f, 17.97978f, 3912.005f, 0.0f, 77.32468f, 0.0f, 21.066f, 2.961159f, 6.442737f);
	Local_183.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_armwrestling", 2, -1471.557f, 16.95909f, 3948.552f, 0.0f, -17.14639f, 0.0f, 4.240116f, 6.963317f, 6.720604f);
	Local_183.f_20 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_Chicken_Coop", 2, -1526.024f, 15.84316f, 3891.246f, 0.0f, 114.5016f, 0.0f, 4.438082f, 2.127633f, 2.477744f);
	Local_183.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_chickens_set");
	(*&Local_183 + 24)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_chickens01", 3, -1524.949f, 14.59385f, 3895.908f, 0.0f, 20.0f, 0.0f, 9.763764f, 9.763764f, 14.78239f);
	ADD_TO_VOLUME_SET(Local_183.f_36, (*&Local_183 + 24)[0]);
	(*&Local_183 + 24)[1] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_chickens02", 3, -1550.094f, 14.59385f, 3919.556f, 0.0f, -50.36686f, 0.0f, 9.763764f, 9.763764f, 8.905966f);
	ADD_TO_VOLUME_SET(Local_183.f_36, (*&Local_183 + 24)[1]);
	Local_183.f_52 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_cows_set");
	(*&Local_183 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_cows1", 3, -1537.602f, 18.44002f, 3859.716f, 0.0f, 375.9154f, 0.0f, 5.720008f, 7.828653f, 16.60756f);
	ADD_TO_VOLUME_SET(Local_183.f_52, (*&Local_183 + 40)[0]);
	(*&Local_183 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_cows2", 3, -1540.812f, 17.66426f, 3845.552f, 0.0f, -11.97972f, 0.0f, 13.46562f, 9.836412f, 8.054895f);
	ADD_TO_VOLUME_SET(Local_183.f_52, (*&Local_183 + 40)[1]);
	Local_183.f_64 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_goats_set");
	(*&Local_183 + 56)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_goats1", 3, -1506.458f, 15.91746f, 3848.323f, 0.0f, -12.63194f, 0.0f, 15.03105f, 15.03105f, 24.04045f);
	ADD_TO_VOLUME_SET(Local_183.f_64, (*&Local_183 + 56)[0]);
	Local_183.f_68 = CREATE_VOLUME_IN_LAYOUT(Local_183, "v_duelStayOut", 2, -1536.409f, 15.255f, 3918.579f, 0.0f, -56.64089f, 0.0f, 13.85894f, 4.120975f, 5.832623f);
	Local_183.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_crows_set");
	(*&Local_183 + 72)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder92", 3, -1508f, 16.6025f, 3936.007f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[0]);
	(*&Local_183 + 72)[1] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder78", 3, -1540f, 15.20233f, 3933.979f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[1]);
	(*&Local_183 + 72)[2] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder79", 3, -1475.999f, 17.18465f, 3894.944f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[2]);
	(*&Local_183 + 72)[3] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder80", 3, -1472f, 15.34259f, 3872.003f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[3]);
	(*&Local_183 + 72)[4] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder81", 3, -1558.063f, 13.64018f, 3892.0f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[4]);
	(*&Local_183 + 72)[5] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder82", 3, -1509.269f, 15.32784f, 3882.891f, 0.0f, 20.0f, 0.0f, 12.74465f, 20.64661f, 12.39604f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[5]);
	(*&Local_183 + 72)[6] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder83", 3, -1523.787f, 14.72026f, 3899.792f, 0.0f, 20.0f, 0.0f, 5.089471f, 20.64661f, 5.989706f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[6]);
	(*&Local_183 + 72)[7] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder84", 3, -1515.853f, 14.03305f, 3854.196f, 0.0f, 20.0f, 0.0f, 9.85224f, 20.64661f, 11.62858f);
	ADD_TO_VOLUME_SET(Local_183.f_108, (*&Local_183 + 72)[7]);
	Local_183.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_vultures_set");
	(*&Local_183 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder100", 3, -1532.241f, 14.68123f, 3955.624f, 0.0f, 20.0f, 0.0f, 9.064345f, 28.24898f, 7.620283f);
	ADD_TO_VOLUME_SET(Local_183.f_128, (*&Local_183 + 112)[0]);
	(*&Local_183 + 112)[1] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder93", 3, -1557.011f, 13.62061f, 3884.0f, 0.0f, 20.0f, 0.0f, 9.064345f, 28.24898f, 7.620283f);
	ADD_TO_VOLUME_SET(Local_183.f_128, (*&Local_183 + 112)[1]);
	(*&Local_183 + 112)[2] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder94", 3, -1486.888f, 16.54457f, 3949.404f, 0.0f, 20.0f, 0.0f, 9.064345f, 28.24898f, 7.620283f);
	ADD_TO_VOLUME_SET(Local_183.f_128, (*&Local_183 + 112)[2]);
	Local_183.f_152 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_rabbits_set");
	(*&Local_183 + 132)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder108", 3, -1543.439f, 14.89471f, 3900.464f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_183.f_152, (*&Local_183 + 132)[0]);
	(*&Local_183 + 132)[1] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder101", 3, -1508f, 16.65686f, 3934.872f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_183.f_152, (*&Local_183 + 132)[1]);
	(*&Local_183 + 132)[2] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder102", 3, -1460.323f, 17.2016f, 3912.65f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_183.f_152, (*&Local_183 + 132)[2]);
	(*&Local_183 + 132)[3] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder103", 3, -1498.755f, 15.06869f, 3876.369f, 0.0f, 20.0f, 0.0f, 5.759422f, 9.896002f, 6.3852f);
	ADD_TO_VOLUME_SET(Local_183.f_152, (*&Local_183 + 132)[3]);
	Local_183.f_184 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_snakes_set");
	(*&Local_183 + 156)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder118", 3, -1568f, 15.60049f, 3912.0f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_183.f_184, (*&Local_183 + 156)[0]);
	(*&Local_183 + 156)[1] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder109", 3, -1512.237f, 15.78839f, 3947.094f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_183.f_184, (*&Local_183 + 156)[1]);
	(*&Local_183 + 156)[2] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder110", 3, -1464f, 17.2016f, 3914.491f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_183.f_184, (*&Local_183 + 156)[2]);
	(*&Local_183 + 156)[3] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder111", 3, -1561.693f, 14.68362f, 3861.693f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_183.f_184, (*&Local_183 + 156)[3]);
	(*&Local_183 + 156)[4] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder112", 3, -1498.539f, 18.75533f, 3817.461f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_183.f_184, (*&Local_183 + 156)[4]);
	(*&Local_183 + 156)[5] = CREATE_VOLUME_IN_LAYOUT(Local_183, "Cylinder113", 3, -1548f, 13.47228f, 3956.0f, 0.0f, 20.0f, 0.0f, 5.229236f, 11.57915f, 4.248277f);
	ADD_TO_VOLUME_SET(Local_183.f_184, (*&Local_183 + 156)[5]);
	Local_183.f_188 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_horses", 3, -1472.534f, 21.5306f, 3870.2f, 0.0f, 309.6622f, 0.0f, 15.24299f, 8.223124f, 21.56666f);
	Local_183.f_192 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_rebel_base", 3, -1491.207f, 17.83258f, 3903.764f, 0.0f, 23.56004f, 0.0f, 45.0f, 15.0f, 45.0f);
	Local_183.f_196 = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_rearyard", 2, -1473.367f, 19.07964f, 3912.941f, 0.0f, -10.13476f, 0.0f, 16.39485f, 8.008978f, 25.98338f);
	Local_183.f_216 = CREATE_VOLUME_SET_IN_LAYOUT(Local_183, "agvv_house_set");
	(*&Local_183 + 200)[0] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_house_01", 2, -1490.998f, 21.72215f, 3910.639f, 0.0f, -10.13476f, 0.0f, 27.45782f, 13.24517f, 17.54432f);
	ADD_TO_VOLUME_SET(Local_183.f_216, (*&Local_183 + 200)[0]);
	(*&Local_183 + 200)[1] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_house_02", 2, -1485.953f, 17.30081f, 3900.914f, 0.0f, -10.13476f, 0.0f, 7.565873f, 13.24517f, 5.55812f);
	ADD_TO_VOLUME_SET(Local_183.f_216, (*&Local_183 + 200)[1]);
	(*&Local_183 + 200)[2] = CREATE_VOLUME_IN_LAYOUT(Local_183, "agvv_house_03", 2, -1488.148f, 17.30081f, 3918.771f, 0.0f, -10.13476f, 0.0f, 14.48939f, 13.24517f, 5.55812f);
	ADD_TO_VOLUME_SET(Local_183.f_216, (*&Local_183 + 200)[2]);
	CREATE_POINT_IN_LAYOUT(Local_183, "agvf_report_crime_road", -1556.744f, 15.01978f, 3928.0f, 0.0f, 35.805f, 0.0f);
	*(&Local_183 + 220) = { -1506.978f, 17.416f, 3903.158f };
	*(&Local_183 + 220 + 12) = { 0.0f, 169.402f, 0.0f };
	Local_183.f_244 = CREATE_POINT_IN_LAYOUT(Local_183, "agvf_playerDuel1", -1506.978f, 17.416f, 3903.158f, 0.0f, 169.402f, 0.0f);
	*(&Local_183 + 248) = { -1508.817f, 17.416f, 3911.647f };
	*(&Local_183 + 248 + 12) = { 0.0f, 347.35f, 0.0f };
	Local_183.f_272 = CREATE_POINT_IN_LAYOUT(Local_183, "agvf_enDuel1", -1508.817f, 17.416f, 3911.647f, 0.0f, 347.35f, 0.0f);
	*(&Local_183 + 276) = { -1488.371f, 16.714f, 3831.624f };
	*(&Local_183 + 276 + 12) = { 0.0f, 99.391f, 0.0f };
	Local_183.f_300 = CREATE_POINT_IN_LAYOUT(Local_183, "agvf_playerDuel2", -1488.371f, 16.714f, 3831.624f, 0.0f, 99.391f, 0.0f);
	*(&Local_183 + 304) = { -1496.85f, 16.851f, 3832.796f };
	*(&Local_183 + 304 + 12) = { 0.0f, 276.975f, 0.0f };
	Local_183.f_328 = CREATE_POINT_IN_LAYOUT(Local_183, "agvf_enDuel2", -1496.85f, 16.851f, 3832.796f, 0.0f, 276.975f, 0.0f);
	*(&Local_183 + 332) = { -1501.599f, 17.70094f, 3908.122f };
	*(&Local_183 + 332 + 12) = { 0.0f, 79.95612f, 0.0f };
	Local_183.f_356 = CREATE_POINT_IN_LAYOUT(Local_183, "agvf_interiorPoint_house", -1501.599f, 17.70094f, 3908.122f, 0.0f, 79.95612f, 0.0f);
	*(&Local_183 + 360) = { -1509.103f, 15.24685f, 3885.1f };
	*(&Local_183 + 360 + 12) = { 0.0f, 204.8146f, 0.0f };
	Local_183.f_384 = CREATE_POINT_IN_LAYOUT(Local_183, "agvf_interiorPoint_stable", -1509.103f, 15.24685f, 3885.1f, 0.0f, 204.8146f, 0.0f);
	*(&Local_183 + 388) = { -1539.143f, 18.49f, 3950.932f };
	*(&Local_183 + 388 + 12) = { -1.439f, -36.9f, 0.0f };
	Local_183.f_412 = CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos1", -1539.143f, 18.49f, 3950.932f, -1.439f, -36.9f, 0.0f);
	*(&Local_183 + 416) = { -1586.476f, 22.428f, 3825.351f };
	*(&Local_183 + 416 + 12) = { -5.015f, -115.211f, 0.0f };
	Local_183.f_440 = CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos2", -1586.476f, 22.428f, 3825.351f, -5.015f, -115.211f, 0.0f);
	*(&Local_183 + 444) = { -1444.219f, 19.581f, 3871.997f };
	*(&Local_183 + 444 + 12) = { -2.352f, 138.764f, 0.0f };
	Local_183.f_468 = CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos3", -1444.219f, 19.581f, 3871.997f, -2.352f, 138.764f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos4", -1471.754f, 22.442f, 3970.034f, -5.4f, 17.961f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos5", -1547.145f, 16.465f, 3915.326f, 1.943f, -70.855f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos6", -1537.432f, 16.645f, 3877.973f, -3.109f, -114.802f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos7", -1490.86f, 17.183f, 3864.684f, 3.12f, 164.695f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos8", -1467.541f, 21.32f, 3924.828f, -4.138f, 50.498f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos9", -1513.963f, 19.513f, 3918.957f, 0.522f, -63.009f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_183, "agv_vista_cam_pos10", -1498.269f, 22.89f, 3903.196f, -12.394f, -6.508f, 0.0f);
	return 1;
}

void Function_251(int iParam0, int iParam1) //Position: 0xDBA5 / 56229
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

void Function_252(var uParam0, int iParam1) //Position: 0xDBEE / 56302
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_253() //Position: 0xDBFD / 56317
{
	return;
}

bool Function_254() //Position: 0xDC03 / 56323
{
	return 1;
}

void Function_255() //Position: 0xDC0A / 56330
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 16, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(27, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 16, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 16, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 16, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(10, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(16, 4, 2);
	return;
}

bool Function_256() //Position: 0xDC76 / 56438
{
	return Function_257();
}

int Function_257() //Position: 0xDC7F / 56447
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	
	Function_251(3, 3);
	uVar0 = uVar0;
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_169(&Local_108 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_l", 1, 0);
	if (!Function_164(&Local_108 + 4))
	{
		return 0;
	}
	Local_108 = FIND_NAMED_LAYOUT("AgaveViejo_layout");
	if (!IS_LAYOUTREF_VALID(Local_108))
	{
		Local_108 = CREATE_LAYOUT("AgaveViejo_layout");
	}
	Local_108.f_44 = CREATE_VOLUME_IN_LAYOUT(Local_108, "volume_ring", 3, -1472.179f, 16.66442f, 3871.895f, 0.0f, 20.0f, 0.0f, 12.0f, 3.0f, 12.0f);
	Local_108.f_48 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_1", 2, -1526.052f, 18.41638f, 3891.416f, 0.0f, 21.21058f, 0.0f, 7.742349f, 5.0f, 6.237575f);
	Local_108.f_52 = CREATE_VOLUME_IN_LAYOUT(Local_108, "SpawnRestrict_2", 2, -1491.458f, 23.70976f, 3909.409f, 0.0f, -10.29659f, 0.0f, 27.3598f, 13.5083f, 24.5534f);
	Local_108.f_56 = CREATE_VOLUME_IN_LAYOUT(Local_108, "MoveRestrict_1", 2, -1487.831f, 22.06348f, 3917.113f, 0.0f, -10.29659f, 0.0f, 14.29678f, 12.57298f, 9.174482f);
	*(&Local_108 + 60) = { -1472.254f, 16.3946f, 3871.771f };
	*(&Local_108 + 60 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_108.f_84 = CREATE_POINT_IN_LAYOUT(Local_108, "f_Horsebreaking", -1472.254f, 16.3946f, 3871.771f, 0.0f, 0.0f, 0.0f);
	*(&Local_108 + 88) = { -1463.624f, 16.395f, 3871.771f };
	*(&Local_108 + 88 + 12) = { 0.0f, 86.15168f, 0.0f };
	Local_108.f_112 = CREATE_POINT_IN_LAYOUT(Local_108, "f_Onlooker1", -1463.624f, 16.395f, 3871.771f, 0.0f, 86.15168f, 0.0f);
	*(&Local_108 + 116) = { -1465.8f, 16.395f, 3862.353f };
	*(&Local_108 + 116 + 12) = { 0.0f, 151.0871f, 0.0f };
	Local_108.f_140 = CREATE_POINT_IN_LAYOUT(Local_108, "f_Onlooker2", -1465.8f, 16.395f, 3862.353f, 0.0f, 151.0871f, 0.0f);
	*(&Local_108 + 144) = { -1476.408f, 16.395f, 3863.545f };
	*(&Local_108 + 144 + 12) = { 0.0f, -135.22f, 0.0f };
	Local_108.f_168 = CREATE_POINT_IN_LAYOUT(Local_108, "f_Onlooker3", -1476.408f, 16.395f, 3863.545f, 0.0f, -135.22f, 0.0f);
	*(&Local_108 + 172) = { -1481.34f, 16.395f, 3875.777f };
	*(&Local_108 + 172 + 12) = { 0.0f, -68.64329f, 0.0f };
	Local_108.f_196 = CREATE_POINT_IN_LAYOUT(Local_108, "f_Onlooker4", -1481.34f, 16.395f, 3875.777f, 0.0f, -68.64329f, 0.0f);
	*(&Local_108 + 200) = { -1469.122f, 16.395f, 3879.373f };
	*(&Local_108 + 200 + 12) = { 0.0f, 17.80298f, 0.0f };
	Local_108.f_224 = CREATE_POINT_IN_LAYOUT(Local_108, "f_Onlooker5", -1469.122f, 16.395f, 3879.373f, 0.0f, 17.80298f, 0.0f);
	Local_108.f_228 = CREATE_OBJECTSET_IN_LAYOUT("survivorGroup_defSet", Local_108, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def02", -1481.675f, 20.9016f, 3916.014f, 0.0f, -112.1831f, 0.0f);
	DECOR_SET_INT(bVar1, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_108.f_228);
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def03", -1482.61f, 20.9016f, 3921.147f, 0.0f, -162.663f, 0.0f);
	DECOR_SET_INT(bVar2, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_108.f_228);
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def01_core", -1522.686f, 16.99747f, 3892.246f, 0.0f, -137.466f, 0.0f);
	DECOR_SET_BOOL(bVar3, "Core", 1);
	DECOR_SET_INT(bVar3, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_108.f_228);
	Local_108.f_232 = CREATE_OBJECTSET_IN_LAYOUT("ammo_00Set", Local_108, 8, 0);
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_player", -1523.148f, 16.99747f, 3890.977f, 0.0f, -160.0f, 0.0f);
	DECOR_SET_BOOL(bVar4, "Core", 1);
	DECOR_SET_INT(bVar4, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_108.f_232);
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_01_surv", -1522.686f, 16.99747f, 3892.246f, 0.0f, 20.0f, 0.0f);
	DECOR_SET_BOOL(bVar5, "Core", 1);
	DECOR_SET_INT(bVar5, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_108.f_232);
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_player", -1481.76f, 20.9016f, 3917.414f, 0.0f, 360.0f, 0.0f);
	DECOR_SET_INT(bVar6, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_108.f_232);
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_02_surv", -1481.76f, 20.9016f, 3916.014f, 0.0f, -180.0f, 0.0f);
	DECOR_SET_INT(bVar7, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_108.f_232);
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_player", -1482.969f, 20.9016f, 3919.776f, 0.0f, 180.0f, 0.0f);
	DECOR_SET_INT(bVar8, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_108.f_232);
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_00_03_surv", -1482.969f, 20.9016f, 3921.176f, 0.0f, -360.0f, 0.0f);
	DECOR_SET_INT(bVar9, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_108.f_232);
	Local_108.f_236 = CREATE_OBJECTSET_IN_LAYOUT("survivorGroup01_defSet", Local_108, 8, 0);
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def05", -1528.788f, 16.49984f, 3891.215f, 0.0f, -285.8424f, 0.0f);
	DECOR_SET_INT(bVar10, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_108.f_236);
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def06", -1482.61f, 20.9016f, 3921.147f, 0.0f, -162.663f, 0.0f);
	DECOR_SET_INT(bVar11, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_108.f_236);
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_def04_core", -1522.686f, 16.99747f, 3892.246f, 0.0f, -137.466f, 0.0f);
	DECOR_SET_BOOL(bVar12, "Core", 1);
	DECOR_SET_INT(bVar12, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_108.f_236);
	Local_108.f_240 = CREATE_OBJECTSET_IN_LAYOUT("ammo_01Set", Local_108, 8, 0);
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_06_player", -1528.293f, 16.49984f, 3892.552f, 0.0f, 21.0f, 0.0f);
	DECOR_SET_INT(bVar13, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_108.f_240);
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_108, "ammo_01_06_surv", -1528.788f, 16.49984f, 3891.215f, 0.0f, -160.0f, 0.0f);
	DECOR_SET_INT(bVar14, "GiveWeapon", 40);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_108.f_240);
	Local_108.f_244 = CREATE_OBJECTSET_IN_LAYOUT("survivorGroup_safeSet", Local_108, 8, 0);
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe01", -1483.442f, 20.9016f, 3916.018f, 0.0f, -136.0327f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_108.f_244);
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe02", -1483.503f, 20.9016f, 3917.759f, 0.0f, -30.86834f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_108.f_244);
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_108, "sGroup_safe03", -1500.538f, 17.6136f, 3907.049f, 0.0f, -258.7891f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_108.f_244);
	Local_108.f_248 = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", Local_108, 8, 0);
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_2", -1503.122f, 15.05801f, 3884.623f, 0.0f, 111.3259f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_108.f_248);
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_108, "chest_3", -1473.917f, 14.77532f, 3847.98f, 0.0f, 206.0139f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_108.f_248);
	*(&Local_108 + 252) = { -1462.607f, 16.54457f, 3952.801f };
	*(&Local_108 + 252 + 12) = { 0.0f, 22.54807f, 0.0f };
	Local_108.f_276 = CREATE_POINT_IN_LAYOUT(Local_108, "player_save_01", -1462.607f, 16.54457f, 3952.801f, 0.0f, 22.54807f, 0.0f);
	Local_108.f_280 = CREATE_GRINGO_IN_LAYOUT(Local_108, "rand_idle_stand", "rand_idle_stand", -1483.413f, 20.90352f, 3916.049f, 0.0f, -135.8797f, 0.0f);
	Local_108.f_284 = CREATE_GRINGO_IN_LAYOUT(Local_108, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1483.542f, 20.90174f, 3917.823f, 0.0f, -30.91964f, 0.0f);
	Local_108.f_288 = CREATE_GRINGO_IN_LAYOUT(Local_108, "rand_idle_stand1", "rand_idle_stand", -1500.495f, 17.7016f, 3907.044f, 0.0f, 100.9561f, 0.0f);
	Local_108.f_292 = CREATE_GRINGO_IN_LAYOUT(Local_108, "ZombiePack_player_sleep_bed_L", "ZombiePack_player_sleep_bed_L", -1462.161f, 16.54459f, 3953.937f, 0.0f, -69.86625f, 0.0f);
}

void Function_258(int iParam0, int iParam1, bool bParam2) //Position: 0xE9B4 / 59828
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_44(iParam0 + 356, 16);
	if (!bParam2)
	{
		if (!Function_260(iParam1))
		{
			Function_197(iParam0 + 356, 16);
			return;
		}
	}
	iParam0->f_364 = Function_200(0, iParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_92(&iVar1, iParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_259(iParam0 + 192, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (bParam2)
	{
		Function_169(iParam0 + 192, "tense_with_guns", 5, 1);
		Function_169(iParam0 + 192, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		iParam0->f_188 = 1;
	}
	Function_164(iParam0 + 192);
	if (HUD_IS_FADED())
	{
		Function_34(iParam1, Function_27(iParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

var Function_259(var uParam0, int iParam1, var uParam2, bool bParam3) //Position: 0xEAAF / 60079
{
	int iVar0;
	
	uParam2 = uParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_24(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_167(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_167(uParam0[iVar03], 8);
			}
			return iVar0;
		}
		if (iParam1 == (*uParam0)[iVar03])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

bool Function_260(int iParam0) //Position: 0xEB7F / 60287
{
	if ((iParam0 != Global_30668[2] || iParam0 != Global_30658[4]) || iParam0 != Global_30658[2])
	{
		return 0;
	}
	if ((iParam0 != Global_30685[0] && (!Function_264(&Global_3422[340] + 128, 2) || Global_3380)) && !Function_198(3, 0))
	{
		return 0;
	}
	if (Global_3365)
	{
		if (!Function_262(0))
		{
			return 0;
		}
		if ((!Function_35(24) || Function_261(24)) && iParam0 != Global_30693[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_261(int iParam0) //Position: 0xEBFA / 60410
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_262(int iParam0) //Position: 0xEC0F / 60431
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_263(iParam0)11].f_12 < 0;
}

int Function_263(int iParam0) //Position: 0xEC75 / 60533
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

bool Function_264(int iParam0, int iParam1) //Position: 0xED37 / 60727
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_265() //Position: 0xED53 / 60755
{
	return;
}

void Function_266(char* cParam0, var uParam1) //Position: 0xED59 / 60761
{
	if (!Function_26(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_13133, cParam0))
	{
		strcpy(&Global_13133, cParam0, 64);
		Global_13133.f_68 = 1;
		Global_13133.f_64 = GET_CURRENT_GAME_TIME();
		Global_13133.f_72 = Global_13133.f_64;
	}
	return;
}

