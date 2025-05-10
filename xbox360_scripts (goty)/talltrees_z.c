//Decompiled with MagicRDR v1.0
//Function Count : 113
//Statics Count : 668
//Natives Count : 152
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<21> Local_6 = { 0, 1, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_58 = 0;
	var uLocal_59 = 0;
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
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	struct<1089> Local_163 = { 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_112(&Var0, 3);
	Function_111();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_0 = 1;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000001:
				if (Function_108())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_99())
				{
					Function_98();
					Function_97(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_94())
				{
					Function_97(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_93(&uLocal_3);
				Function_91(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_90())
				{
					Function_82();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_81(iScriptParam_0);
				Function_80();
				Function_97(&(Global_29008[iScriptParam_0]), 8);
				if (Function_79(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_78(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_77(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_76(iScriptParam_0))
				{
					Function_69(iScriptParam_0);
					Function_68(64);
				}
				Function_97(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_76(iScriptParam_0))
				{
					Function_66(Function_67(), iScriptParam_0);
				}
				Function_65(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_64(&Var0, 5.0f);
				Function_97(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_76(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_24(&uLocal_3, &uLocal_661, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_79(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(bLocal_1);
	}
	Function_22();
	Function_16();
	Function_8(&uLocal_3, &uLocal_661);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_68(64);
	Function_78(&(Global_29008[iScriptParam_0]), 32);
	Function_78(&(Global_29008[iScriptParam_0]), 64);
	Function_78(&(Global_29008[iScriptParam_0]), 512);
	Function_78(&(Global_29008[iScriptParam_0]), 16);
	Function_78(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_64(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	return;
}

void Function_2(int iParam0) //Position: 0x2EC / 748
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

void Function_3(int iParam0) //Position: 0x322 / 802
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x344 / 836
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x35A / 858
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x370 / 880
{
	Function_7();
	return;
}

void Function_7() //Position: 0x379 / 889
{
	RELEASE_LAYOUT_REF(Local_436);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x385 / 901
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_15(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_14(iParam1[iVar03], 4);
		}
		if (Function_15(iParam1[iVar03], 8))
		{
			Function_9(0, 0, 30);
			Function_14(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_9(bool bParam0, bool bParam1, int iParam2) //Position: 0x3DD / 989
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
		Function_10(Global_16524, bVar0, 1);
	}
	return;
}

void Function_10(int iParam0, bool bParam1, bool bParam2) //Position: 0x4C3 / 1219
{
	int iVar0;
	
	Function_13(iParam0);
	Function_12(bParam1);
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
	Function_11();
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

void Function_11() //Position: 0x63C / 1596
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_12(bool bParam0) //Position: 0x648 / 1608
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

void Function_13(int iParam0) //Position: 0x68E / 1678
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

void Function_14(int iParam0, int iParam1) //Position: 0x6D4 / 1748
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x6EE / 1774
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x70B / 1803
{
	Function_17();
	return;
}

void Function_17() //Position: 0x714 / 1812
{
	Function_18(&Local_163 + 4);
	RELEASE_LAYOUT_REF(Local_163);
	return;
}

void Function_18(int iParam0) //Position: 0x726 / 1830
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_19(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_19(var uParam0, int iParam1) //Position: 0x74C / 1868
{
	if (Function_21(uParam0[iParam13], 4))
	{
		if (Function_21(uParam0[iParam13], 1))
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
			Function_20(uParam0[iParam13], 1);
			Function_20(uParam0[iParam13], 2);
			Function_20(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_20(var uParam0, int iParam1) //Position: 0x87A / 2170
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_21(int iParam0, int iParam1) //Position: 0x894 / 2196
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8B1 / 2225
{
	Function_23();
	if (IS_SCRIPT_VALID(bLocal_665))
	{
		TERMINATE_SCRIPT(bLocal_665);
	}
	return;
}

void Function_23() //Position: 0x8C9 / 2249
{
	Function_18(&Local_6 + 4);
	RELEASE_LAYOUT_REF(Local_6);
	return;
}

void Function_24(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x8DB / 2267
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_61(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_25(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_25(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x95C / 2396
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_60(iParam0))
	{
		return 0;
	}
	Function_78(&(Global_29008[iParam2]), 4194304);
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
					if (!Function_15(iParam0, 2))
					{
						if (!Function_15(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_58(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_57(iParam0, 8);
							}
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (Function_15(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_9(0, 0, 0);
						}
						else
						{
							Function_9(0, 0, 30);
						}
						Function_14(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_15(iParam0, 2))
					{
						if (!Function_15(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_57(iParam0, 4);
							}
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (Function_15(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_14(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_56(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_55(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_15(iParam0, 2))
					{
						if (!Function_15(iParam0, 16))
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
							if (Function_54())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_57(iParam0, 16);
								Function_46(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (Function_15(iParam0, 16))
					{
						Function_14(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_15(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_15(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_57(iParam0, 2);
			}
			else
			{
				Function_14(iParam0, 2);
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
				if (!Function_79(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_15(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_45(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_57(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_44(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_26(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_26(int iParam0) //Position: 0xD75 / 3445
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_79(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_97(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_31(473, 1, 0, 0);
		iVar0 = Function_30(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_31(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_31(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_31(476, 1, 0, 0);
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
		Function_29(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_29(7, 30);
	}
	if (Function_28(473) <= Function_27(473))
	{
		if (!Function_54())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_27(int iParam0) //Position: 0xE74 / 3700
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_28(int iParam0) //Position: 0xEB1 / 3761
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xEEA / 3818
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

var Function_30(int iParam0) //Position: 0xF51 / 3921
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xFA9 / 4009
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
	Function_43(iParam0, TO_FLOAT(bParam1), 1);
	Function_42(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_32(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x11C9 / 4553
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_27(390))), 32);
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
					bVar19 = (Function_28(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_28(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_40(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_37(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_35(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_34(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_33(), &Var9);
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

var Function_33() //Position: 0x17F6 / 6134
{
	int iVar0;
	
	return iVar0;
}

var Function_34(int iParam0) //Position: 0x17FE / 6142
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x180F / 6159
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x1904 / 6404
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x191D / 6429
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x1982 / 6530
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x1994 / 6548
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x19A6 / 6566
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
	if (((Function_41(iParam0) != 19 || Function_41(iParam0) != 17) || Function_41(iParam0) != 10) || Function_41(iParam0) != 9)
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

int Function_41(int iParam0) //Position: 0x1AD6 / 6870
{
	return Global_35278[iParam020].f_48;
}

void Function_42(int iParam0) //Position: 0x1AE5 / 6885
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

int Function_43(int iParam0, float fParam1, bool bParam2) //Position: 0x1C7F / 7295
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

void Function_44(var uParam0, int iParam1) //Position: 0x1EC3 / 7875
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_45(struct<5> Param0) //Position: 0x1ED0 / 7888
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1EF6 / 7926
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_53(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_52(iParam1))
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
	if (!Function_49(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_33(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, true);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_47();
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

void Function_47() //Position: 0x2186 / 8582
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_48(bVar0, iVar1);
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

void Function_48(bool bParam0, bool bParam1) //Position: 0x21E9 / 8681
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

bool Function_49(bool bParam0) //Position: 0x2218 / 8728
{
	if (Function_55(256))
	{
		return 0;
	}
	if (Function_55(262144))
	{
		return 0;
	}
	if (Function_51())
	{
		return 0;
	}
	if (!Function_55(1))
	{
		return 0;
	}
	if (!Function_55(4096))
	{
		return 0;
	}
	if (bParam0 && Function_50(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_55(2048))
	{
		return 0;
	}
	if (Function_54() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_50(int iParam0) //Position: 0x228E / 8846
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_51() //Position: 0x229F / 8863
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

bool Function_52(int iParam0) //Position: 0x22B8 / 8888
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_53(int iParam0) //Position: 0x22CE / 8910
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_54() //Position: 0x22E3 / 8931
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_55(int iParam0) //Position: 0x22EC / 8940
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x230A / 8970
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

void Function_57(int iParam0, int iParam1) //Position: 0x23AE / 9134
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_58(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x23BF / 9151
{
	int iVar0;
	bool bVar1;
	
	Function_13(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_59(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, iParam3);
			Function_10(StackVal, bVar1, bParam4);
		}
	}
}

void Function_59(int iParam0, int iParam1) //Position: 0x2431 / 9265
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_13(iParam0);
	Function_12(iVar0);
	PRINTNL();
	Function_10(iParam0, iVar0, iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x2456 / 9302
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

bool Function_61(int iParam0) //Position: 0x2473 / 9331
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x248F / 9359
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(int iParam0) //Position: 0x24A4 / 9380
{
	iParam0 = iParam0;
	return;
}

void Function_64(bool bParam0, float fParam1) //Position: 0x24AE / 9390
{
	if (!Function_61(128))
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

void Function_65(int iParam0) //Position: 0x24EC / 9452
{
	if (!Function_5(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (((iParam0 != Global_30628[0] || iParam0 != Global_30628[1]) || iParam0 != Global_30628[2]) || iParam0 != Global_30628[3])
	{
		Global_29004 = 0;
	}
	else if ((iParam0 != Global_30633[0] || iParam0 != Global_30633[2]) || iParam0 != Global_30633[1])
	{
		Global_29004 = 1;
	}
	else if (iParam0 != Global_30637[1] || iParam0 != Global_30637[0])
	{
		Global_29004 = 2;
	}
	return;
}

void Function_66(bool bParam0, bool bParam1) //Position: 0x257E / 9598
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
		Function_44(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_54())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

var Function_67() //Position: 0x2678 / 9848
{
	return Local_6;
}

void Function_68(int iParam0) //Position: 0x2680 / 9856
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_69(bool bParam0) //Position: 0x2693 / 9875
{
	if (!Function_75(5) && Global_3365)
	{
		Function_70(StackVal, 0, 0.25f, 0, Local_6, !Function_74(&Global_30723));
	}
	else
	{
		Function_70(StackVal, 1, 0.25f, 0, Local_6, !Function_74(&Global_30723));
	}
	return;
}

void Function_70(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x26E0 / 9952
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
	Global_28842.f_32 = iParam1;
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
		Function_73();
	}
	if (bParam5)
	{
		Function_71(1048576);
	}
}

void Function_71(int iParam0) //Position: 0x27F3 / 10227
{
	Function_72(&Global_28842, iParam0);
	return;
}

void Function_72(var uParam0, var uParam1) //Position: 0x2801 / 10241
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_73() //Position: 0x281C / 10268
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_71(16384);
	}
	return;
}

bool Function_74(int iParam0) //Position: 0x2838 / 10296
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_5((*iParam0)[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_29008[(*iParam0)[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_75(int iParam0) //Position: 0x2885 / 10373
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_76(int iParam0) //Position: 0x289A / 10394
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_30628[0])
	{
		return Function_74(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_74(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_74(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_74(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_74(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_74(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_74(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_74(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_74(&Global_30717);
	}
	return 0;
}

void Function_77(int iParam0) //Position: 0x2977 / 10615
{
	iParam0 = iParam0;
	if (Function_75(37))
	{
		bLocal_665 = LAUNCH_NEW_SCRIPT("$/content/DLC/ZombiePack/Beats/beat_sasquatch.sc", 0);
	}
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x29C3 / 10691
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_79(int iParam0, int iParam1) //Position: 0x29DA / 10714
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_80() //Position: 0x29F6 / 10742
{
	return;
}

void Function_81(var uParam0) //Position: 0x29FC / 10748
{
	uParam0 = uParam0;
	return;
}

void Function_82() //Position: 0x2A06 / 10758
{
	Function_83(Global_30637[1]);
	Global_29004 = 2;
	return;
}

void Function_83(int iParam0) //Position: 0x2A19 / 10777
{
	int iVar0;
	
	iVar0 = Function_85(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_84(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_84(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_84(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_84(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_84(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_84(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_84(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_84(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_84(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

bool Function_84(var uParam0, int iParam1) //Position: 0x2C51 / 11345
{
	return (uParam0 && iParam1) == 0;
}

int Function_85(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2C5E / 11358
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_89(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_86(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_86(bParam0, bParam1, bParam2, 4294967295);
}

int Function_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2CBC / 11452
{
	var uVar0;
	
	if (!Function_88(bParam2))
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
	uVar0 = Function_89(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_87(uVar0);
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

int Function_87(int iParam0) //Position: 0x2E11 / 11793
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

bool Function_88(int iParam0) //Position: 0x2E4F / 11855
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_89(int iParam0, int iParam1, bool bParam2) //Position: 0x2E64 / 11876
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_90() //Position: 0x2E84 / 11908
{
	return 1;
}

void Function_91(bool bParam0) //Position: 0x2E8B / 11915
{
	Function_92(StackVal, &uLocal_3, &uLocal_661, 2, 4294967295, 0);
	return;
}

void Function_92(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x2EA5 / 11941
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
	uParam4 = uParam4;
	uParam1[*uParam03]->f_4 = bParam3;
	(*uParam1)[*uParam03] = iParam2;
	DECOR_SET_INT(StackVal, "locflag", bParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(StackVal, 0);
	}
	*uParam0++;
}

void Function_93(var uParam0) //Position: 0x2F80 / 12160
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_94() //Position: 0x2F8F / 12175
{
	return Function_95();
}

int Function_95() //Position: 0x2F98 / 12184
{
	var uVar0;
	
	Function_96(3, 3);
	uVar0 = uVar0;
	Local_436 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(Local_436))
	{
		Local_436 = CREATE_LAYOUT("TallTrees_layout");
	}
	Local_436.f_32 = CREATE_VOLUME_SET_IN_LAYOUT(Local_436, "talv_flk_CENTER_set");
	(*&Local_436 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder", 3, -593.2744f, 174.6823f, 1676.557f, 0.0f, -67.35181f, 0.0f, 105.9159f, 58.29394f, 233.7654f);
	ADD_TO_VOLUME_SET(Local_436.f_32, (*&Local_436 + 4)[0]);
	(*&Local_436 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder59", 3, -835.0184f, 181.7097f, 1561.401f, 0.0f, 30.13685f, 0.0f, 92.53649f, 112.1975f, 86.57299f);
	ADD_TO_VOLUME_SET(Local_436.f_32, (*&Local_436 + 4)[1]);
	(*&Local_436 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder10", 3, -596.8842f, 156.3475f, 1417.066f, 0.0f, 33.92152f, 0.0f, 271.8308f, 76.29949f, 143.5935f);
	ADD_TO_VOLUME_SET(Local_436.f_32, (*&Local_436 + 4)[2]);
	(*&Local_436 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder11", 3, -377.1188f, 141.5529f, 1262.022f, 0.0f, 7.292739f, 0.0f, 115.0695f, 58.29394f, 47.57434f);
	ADD_TO_VOLUME_SET(Local_436.f_32, (*&Local_436 + 4)[3]);
	(*&Local_436 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder12", 3, -201.276f, 142.242f, 1527.303f, 0.0f, 1.794969f, 0.0f, 199.1374f, 58.29394f, 266.0443f);
	ADD_TO_VOLUME_SET(Local_436.f_32, (*&Local_436 + 4)[4]);
	(*&Local_436 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder13", 3, -407.1201f, 144.5646f, 1784.334f, 0.0f, -17.03513f, 0.0f, 140.64f, 58.29394f, 89.70598f);
	ADD_TO_VOLUME_SET(Local_436.f_32, (*&Local_436 + 4)[5]);
	Local_436.f_72 = CREATE_VOLUME_SET_IN_LAYOUT(Local_436, "talv_flk_NORTH_set");
	(*&Local_436 + 36)[0] = CREATE_VOLUME_IN_LAYOUT(Local_436, "nCylinder2", 3, -738.6946f, 186.7292f, 1301.132f, 0.0f, 39.8131f, 0.0f, 209.2188f, 48.06796f, 77.69141f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[0]);
	(*&Local_436 + 36)[1] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder35", 3, -1098.858f, 190.0172f, 1360.992f, 0.0f, 20.0f, 0.0f, 67.40719f, 60.19688f, 38.9086f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[1]);
	(*&Local_436 + 36)[2] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder37", 3, -1202.23f, 189.8394f, 1509.898f, 0.0f, -0.5394719f, 0.0f, 34.43784f, 48.06796f, 42.17895f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[2]);
	(*&Local_436 + 36)[3] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder38", 3, -961.1198f, 185.7253f, 1311.964f, 0.0f, 1.509276f, 0.0f, 86.09306f, 56.096f, 65.3297f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[3]);
	(*&Local_436 + 36)[4] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder40", 3, -640.3352f, 144.3973f, 782.2554f, 0.0f, 20.0f, 0.0f, 47.70806f, 48.06796f, 100.5601f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[4]);
	(*&Local_436 + 36)[5] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder41", 3, -582.7562f, 139.6384f, 954.1177f, 0.0f, 20.0f, 0.0f, 50.17066f, 110.6072f, 84.65246f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[5]);
	(*&Local_436 + 36)[6] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder42", 3, -651.8021f, 146.404f, 569.4237f, 0.0f, 7.972168f, 0.0f, 52.7394f, 65.23756f, 122.7747f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[6]);
	(*&Local_436 + 36)[7] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder43", 3, -528.7275f, 166.78f, 1150.276f, 0.0f, -41.69667f, 0.0f, 135.1217f, 73.87469f, 68.46393f);
	ADD_TO_VOLUME_SET(Local_436.f_72, (*&Local_436 + 36)[7]);
	Local_436.f_100 = CREATE_VOLUME_SET_IN_LAYOUT(Local_436, "talv_flk_SOUTH_set");
	(*&Local_436 + 76)[0] = CREATE_VOLUME_IN_LAYOUT(Local_436, "nCylinder3", 3, -589.2515f, 140.549f, 1928.917f, 0.0f, -16.89093f, 0.0f, 257.7066f, 83.19911f, 108.6402f);
	ADD_TO_VOLUME_SET(Local_436.f_100, (*&Local_436 + 76)[0]);
	(*&Local_436 + 76)[1] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder50", 3, -274.6546f, 84.32935f, 1917.132f, 0.0f, 28.90153f, 0.0f, 107.9436f, 79.55395f, 97.79385f);
	ADD_TO_VOLUME_SET(Local_436.f_100, (*&Local_436 + 76)[1]);
	(*&Local_436 + 76)[2] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder51", 3, -91.72025f, 114.1684f, 1820.091f, 0.0f, 48.13682f, 0.0f, 131.1238f, 107.3915f, 90.51267f);
	ADD_TO_VOLUME_SET(Local_436.f_100, (*&Local_436 + 76)[2]);
	(*&Local_436 + 76)[3] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder60", 3, -425.0334f, 96.37634f, 2096.799f, 0.0f, -57.87617f, 0.0f, 101.5545f, 91.79201f, 94.99359f);
	ADD_TO_VOLUME_SET(Local_436.f_100, (*&Local_436 + 76)[3]);
	(*&Local_436 + 76)[4] = CREATE_VOLUME_IN_LAYOUT(Local_436, "Cylinder61", 3, -135.5685f, 96.37634f, 2011.551f, 0.0f, 3.840688f, 0.0f, 103.7744f, 91.79201f, 75.89438f);
	ADD_TO_VOLUME_SET(Local_436.f_100, (*&Local_436 + 76)[4]);
	Local_436.f_168 = CREATE_VOLUME_SET_IN_LAYOUT(Local_436, "talv_aquaticFishes_set");
	(*&Local_436 + 104)[0] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes1", 2, -1055.772f, 181.0549f, 1450.559f, 0.0f, 7.171262f, 0.0f, 250.1399f, 5.863475f, 161.1213f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[0]);
	(*&Local_436 + 104)[1] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes2", 2, -944.5592f, 174.7437f, 1578.331f, 0.0f, 27.63371f, 0.0f, 56.60616f, 15.6186f, 150.4928f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[1]);
	(*&Local_436 + 104)[2] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes3", 2, -864.0654f, 155.9434f, 1685.871f, 0.0f, -46.15937f, 0.0f, 130.6914f, 30.33334f, 44.02484f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[2]);
	(*&Local_436 + 104)[3] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes4", 2, -824.2472f, 141.6483f, 1768.86f, 0.0f, -8.707941f, 0.0f, 53.67214f, 18.19532f, 89.27471f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[3]);
	(*&Local_436 + 104)[4] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes5", 2, -797.1638f, 134.0961f, 1864.935f, 0.0f, 30.88466f, 0.0f, 46.35728f, 12.59928f, 146.7679f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[4]);
	(*&Local_436 + 104)[5] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes6", 2, -758.0644f, 124.1473f, 1966.399f, 0.0f, 14.76972f, 0.0f, 37.20575f, 22.49081f, 79.99351f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[5]);
	(*&Local_436 + 104)[6] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes7", 2, -664.967f, 87.70407f, 2032.214f, 0.0f, 0.0f, 0.0f, 172.6396f, 17.64581f, 64.38243f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[6]);
	(*&Local_436 + 104)[7] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes8", 2, -577.627f, 81.16354f, 2080.263f, 0.0f, 36.1105f, 0.0f, 39.35627f, 10.08463f, 62.65144f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[7]);
	(*&Local_436 + 104)[8] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes9", 2, -544.3558f, 73.68035f, 2157.092f, 0.0f, 41.30886f, 0.0f, 65.77435f, 13.99295f, 92.72429f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[8]);
	(*&Local_436 + 104)[9] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes10", 2, -469.9328f, 70.38285f, 2191.754f, 0.0f, -26.34225f, 0.0f, 66.94518f, 5.753312f, 11.30177f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[9]);
	(*&Local_436 + 104)[10] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes11", 2, -395.6228f, 69.71171f, 2230.458f, 0.0f, -19.63805f, 0.0f, 97.54456f, 6.514398f, 38.15876f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[10]);
	(*&Local_436 + 104)[11] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes12", 2, -293.6046f, 71.09695f, 2253.549f, 0.0f, 0.0f, 0.0f, 115.4794f, 8.174694f, 43.31063f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[11]);
	(*&Local_436 + 104)[12] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes13", 2, -147.0819f, 69.05841f, 2212.549f, 0.0f, 15.79396f, 0.0f, 195.2177f, 7.178958f, 44.59148f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[12]);
	(*&Local_436 + 104)[13] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes14", 2, -38.77122f, 70.8055f, 2128.269f, 0.0f, 0.0f, 0.0f, 77.05475f, 7.378823f, 160.9037f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[13]);
	(*&Local_436 + 104)[14] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticFishes15", 2, -229.4651f, 71.2652f, 2364.53f, 0.0f, 0.0f, 0.0f, 191.1671f, 5.206788f, 209.1733f);
	ADD_TO_VOLUME_SET(Local_436.f_168, (*&Local_436 + 104)[14]);
	Local_436.f_264 = CREATE_VOLUME_SET_IN_LAYOUT(Local_436, "talv_aquaticWildlife_set");
	(*&Local_436 + 172)[0] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_01", 3, -152f, 68.26666f, 2216f, 0.0f, 16.55233f, 0.0f, 159.2095f, 85.32535f, 28.5615f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[0]);
	(*&Local_436 + 172)[1] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_02", 3, -367.9082f, 68.26666f, 2238.888f, 0.0f, -16.4704f, 0.0f, 109.5831f, 58.72903f, 19.65874f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[1]);
	(*&Local_436 + 172)[2] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_03", 3, -494.9665f, 68.26666f, 2179.797f, 0.0f, -31.61113f, 0.0f, 82.07603f, 58.72903f, 19.65874f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[2]);
	(*&Local_436 + 172)[3] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_04", 3, -575.446f, 68.26666f, 2087.523f, 0.0f, -58.09722f, 0.0f, 82.07603f, 58.72903f, 19.65874f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[3]);
	(*&Local_436 + 172)[4] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_05", 3, -658.7006f, 68.26666f, 2038.264f, 0.0f, -7.532945f, 0.0f, 82.07603f, 58.72903f, 29.75141f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[4]);
	(*&Local_436 + 172)[5] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_06", 3, -758.1253f, 68.26666f, 1955.588f, 0.0f, -72.54741f, 0.0f, 82.07603f, 112.9613f, 23.55225f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[5]);
	(*&Local_436 + 172)[6] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_07", 3, -807.1262f, 68.26666f, 1850.914f, 0.0f, -59.86823f, 0.0f, 66.2807f, 112.9613f, 23.55225f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[6]);
	(*&Local_436 + 172)[7] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_08", 3, -823.0187f, 68.26666f, 1770.229f, 0.0f, -94.60016f, 0.0f, 52.46916f, 89.4225f, 18.64444f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[7]);
	(*&Local_436 + 172)[8] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_09", 3, -855.415f, 68.26666f, 1693.823f, 0.0f, -47.98232f, 0.0f, 52.46916f, 157.7196f, 18.64444f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[8]);
	(*&Local_436 + 172)[9] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_010", 3, -918.5265f, 68.26666f, 1625.548f, 0.0f, -56.16022f, 0.0f, 52.46916f, 157.7196f, 18.64444f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[9]);
	(*&Local_436 + 172)[10] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_011", 3, -966.7207f, 68.26666f, 1541.208f, 0.0f, -56.16022f, 0.0f, 52.46916f, 157.7196f, 18.64444f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[10]);
	(*&Local_436 + 172)[11] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_012", 3, -1034.515f, 68.26666f, 1446.728f, 0.0f, 0.7024403f, 0.0f, 104.176f, 313.1477f, 63.8155f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[11]);
	(*&Local_436 + 172)[12] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_013", 3, -1179.48f, 68.26666f, 1454.661f, 0.0f, -16.87923f, 0.0f, 104.176f, 313.1477f, 31.80929f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[12]);
	(*&Local_436 + 172)[13] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_014", 3, -1340.312f, 68.26666f, 1373.885f, 0.0f, -28.07886f, 0.0f, 104.176f, 313.1477f, 31.80929f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[13]);
	(*&Local_436 + 172)[14] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_015", 3, -219.0838f, 68.26666f, 2289.443f, 0.0f, -84.64565f, 0.0f, 64.71246f, 34.68142f, 11.60913f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[14]);
	(*&Local_436 + 172)[15] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_016", 3, -250.3255f, 68.26666f, 2375.784f, 0.0f, -129.7999f, 0.0f, 64.71246f, 34.68142f, 11.60913f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[15]);
	(*&Local_436 + 172)[16] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_017", 3, -297.4722f, 68.26666f, 2445.084f, 0.0f, -129.7999f, 0.0f, 26.37791f, 34.68142f, 20.51755f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[16]);
	(*&Local_436 + 172)[17] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_018", 3, -188.41f, 68.26666f, 2374.648f, 0.0f, -152.6304f, 0.0f, 11.8026f, 34.68142f, 57.80375f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[17]);
	(*&Local_436 + 172)[18] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_019", 3, -204.8829f, 68.26666f, 2412.706f, 0.0f, -209.1972f, 0.0f, 9.171598f, 34.68142f, 33.83997f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[18]);
	(*&Local_436 + 172)[19] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_020", 3, -254.3018f, 68.26666f, 2309.892f, 0.0f, -237.1397f, 0.0f, 9.171598f, 34.68142f, 33.83997f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[19]);
	(*&Local_436 + 172)[20] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_021", 3, -182.1617f, 68.26666f, 2315.004f, -0.8183758f, -290.2231f, 0.0f, 9.171598f, 34.68142f, 33.83997f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[20]);
	(*&Local_436 + 172)[21] = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_aquaticWildlife_022", 3, -136.151f, 68.26666f, 2316.708f, 0.9045045f, -251.7742f, 1.627066f, 6.449566f, 24.38835f, 23.79663f);
	ADD_TO_VOLUME_SET(Local_436.f_264, (*&Local_436 + 172)[21]);
	Local_436.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_birds", 2, -514.3977f, 177.5795f, 1433.708f, 0.0f, 0.0f, 0.0f, 977.7135f, 204.2023f, 1811.134f);
	Local_436.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_Masons", 3, -143.3034f, 88.32312f, 2210.759f, 0.0f, 20.0f, 0.0f, 19.95991f, 24.92979f, 43.83996f);
	Local_436.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_montana_ford", 3, -480.728f, 84.52522f, 2186.402f, 0.0f, -17.70159f, 0.0f, 28.024f, 25.65247f, 33.2642f);
	Local_436.f_280 = CREATE_VOLUME_IN_LAYOUT(Local_436, "talv_Tanners_Span", 3, -580.1471f, 105.077f, 2089.955f, 0.0f, 18.88762f, 0.0f, 84.13344f, 38.98499f, 45.70354f);
	*(&Local_436 + 284) = { -1033.621f, 181.4009f, 1404.592f };
	*(&Local_436 + 284 + 12) = { 0.0f, 5.973791f, 0.0f };
	Local_436.f_308 = CREATE_POINT_IN_LAYOUT(Local_436, "arbf_respawn_water_01", -1033.621f, 181.4009f, 1404.592f, 0.0f, 5.973791f, 0.0f);
	*(&Local_436 + 312) = { -1040.182f, 181.3859f, 1398.524f };
	*(&Local_436 + 312 + 12) = { 0.0f, -184.2665f, 0.0f };
	Local_436.f_336 = CREATE_POINT_IN_LAYOUT(Local_436, "arbf_respawn_water_02", -1040.182f, 181.3859f, 1398.524f, 0.0f, -184.2665f, 0.0f);
	*(&Local_436 + 340) = { -1032.0f, 182.5768f, 1386.0f };
	*(&Local_436 + 340 + 12) = { 0.0f, -174.0807f, 0.0f };
	Local_436.f_364 = CREATE_POINT_IN_LAYOUT(Local_436, "arbf_respawn_water_03", -1032.0f, 182.5768f, 1386.0f, 0.0f, -174.0807f, 0.0f);
	*(&Local_436 + 368) = { -1052.0f, 182.3301f, 1377.645f };
	*(&Local_436 + 368 + 12) = { 0.0f, -174.0807f, 0.0f };
	Local_436.f_392 = CREATE_POINT_IN_LAYOUT(Local_436, "arbf_respawn_water_04", -1052.0f, 182.3301f, 1377.645f, 0.0f, -174.0807f, 0.0f);
	*(&Local_436 + 396) = { -321.0f, 123.3054f, 1962.0f };
	*(&Local_436 + 396 + 12) = { 0.0f, 167.7834f, 0.0f };
	Local_436.f_420 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingTree_tal1", -321.0f, 123.3054f, 1962.0f, 0.0f, 167.7834f, 0.0f);
	*(&Local_436 + 424) = { -316.0001f, 123.3856f, 1956f };
	*(&Local_436 + 424 + 12) = { 0.0f, 72.58274f, 0.0f };
	Local_436.f_448 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingHorses_tal1", -316.0001f, 123.3856f, 1956f, 0.0f, 72.58274f, 0.0f);
	*(&Local_436 + 452) = { -324.5558f, 121.6639f, 1968.013f };
	*(&Local_436 + 452 + 12) = { 0.0f, -49.30299f, 0.0f };
	Local_436.f_476 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard1_tal1", -324.5558f, 121.6639f, 1968.013f, 0.0f, -49.30299f, 0.0f);
	*(&Local_436 + 480) = { -322.4177f, 120.5118f, 1970.306f };
	*(&Local_436 + 480 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_436.f_504 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard2_tal1", -322.4177f, 120.5118f, 1970.306f, 0.0f, 0.0f, 0.0f);
	*(&Local_436 + 508) = { -319.6714f, 120.7235f, 1970.062f };
	*(&Local_436 + 508 + 12) = { 0.0f, 18.2857f, 0.0f };
	Local_436.f_532 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard3_tal1", -319.6714f, 120.7235f, 1970.062f, 0.0f, 18.2857f, 0.0f);
	*(&Local_436 + 536) = { -320.979f, 122.6871f, 1964.775f };
	*(&Local_436 + 536 + 12) = { 0.0f, 133.7474f, 0.0f };
	Local_436.f_560 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingguy_tal1", -320.979f, 122.6871f, 1964.775f, 0.0f, 133.7474f, 0.0f);
	*(&Local_436 + 564) = { -683.979f, 152.1264f, 1858.651f };
	*(&Local_436 + 564 + 12) = { 0.0f, 181.248f, 0.0f };
	Local_436.f_588 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingTree_tal2", -683.979f, 152.1264f, 1858.651f, 0.0f, 181.248f, 0.0f);
	*(&Local_436 + 592) = { -692.0f, 151.8941f, 1864f };
	*(&Local_436 + 592 + 12) = { 0.0f, -134.0074f, 0.0f };
	Local_436.f_616 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingHorses_tal2", -692.0f, 151.8941f, 1864f, 0.0f, -134.0074f, 0.0f);
	*(&Local_436 + 620) = { -688.0f, 152.0886f, 1862.775f };
	*(&Local_436 + 620 + 12) = { 0.0f, -91.83728f, 0.0f };
	Local_436.f_644 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard1_tal2", -688.0f, 152.0886f, 1862.775f, 0.0f, -91.83728f, 0.0f);
	*(&Local_436 + 648) = { -684.0f, 151.592f, 1867.999f };
	*(&Local_436 + 648 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_436.f_672 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard2_tal2", -684.0f, 151.592f, 1867.999f, 0.0f, 0.0f, 0.0f);
	*(&Local_436 + 676) = { -680.0f, 151.8625f, 1867.038f };
	*(&Local_436 + 676 + 12) = { 0.0f, 44.52262f, 0.0f };
	Local_436.f_700 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard3_tal2", -680.0f, 151.8625f, 1867.038f, 0.0f, 44.52262f, 0.0f);
	*(&Local_436 + 704) = { -684.1642f, 152.0886f, 1862.775f };
	*(&Local_436 + 704 + 12) = { 0.0f, 90.31831f, 0.0f };
	Local_436.f_728 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingguy_tal2", -684.1642f, 152.0886f, 1862.775f, 0.0f, 90.31831f, 0.0f);
	*(&Local_436 + 732) = { -664.083f, 174.4142f, 1395.394f };
	*(&Local_436 + 732 + 12) = { 0.0f, -176.5244f, 0.0f };
	Local_436.f_756 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingTree_tal3", -664.083f, 174.4142f, 1395.394f, 0.0f, -176.5244f, 0.0f);
	*(&Local_436 + 760) = { -657.1503f, 174.2817f, 1405.834f };
	*(&Local_436 + 760 + 12) = { 0.0f, 91.85547f, 0.0f };
	Local_436.f_784 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingHorses_tal3", -657.1503f, 174.2817f, 1405.834f, 0.0f, 91.85547f, 0.0f);
	*(&Local_436 + 788) = { -664.083f, 174.0923f, 1401.341f };
	*(&Local_436 + 788 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_436.f_812 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard1_tal3", -664.083f, 174.0923f, 1401.341f, 0.0f, 0.0f, 0.0f);
	*(&Local_436 + 816) = { -668.0001f, 174.6823f, 1404f };
	*(&Local_436 + 816 + 12) = { 0.0f, -38.93428f, 0.0f };
	Local_436.f_840 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard2_tal3", -668.0001f, 174.6823f, 1404f, 0.0f, -38.93428f, 0.0f);
	*(&Local_436 + 844) = { -666.6293f, 174.5759f, 1405.673f };
	*(&Local_436 + 844 + 12) = { 0.0f, -19.89674f, 0.0f };
	Local_436.f_868 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingGuard3_tal3", -666.6293f, 174.5759f, 1405.673f, 0.0f, -19.89674f, 0.0f);
	*(&Local_436 + 872) = { -664.083f, 174.0923f, 1398.821f };
	*(&Local_436 + 872 + 12) = { 0.0f, 179.3761f, 0.0f };
	Local_436.f_896 = CREATE_POINT_IN_LAYOUT(Local_436, "hangingguy_tal3", -664.083f, 174.0923f, 1398.821f, 0.0f, 179.3761f, 0.0f);
	return 1;
}

void Function_96(int iParam0, int iParam1) //Position: 0x4D57 / 19799
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

void Function_97(var uParam0, int iParam1) //Position: 0x4DA0 / 19872
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_98() //Position: 0x4DAF / 19887
{
	return;
}

bool Function_99() //Position: 0x4DB5 / 19893
{
	return Function_100();
}

int Function_100() //Position: 0x4DBE / 19902
{
	bool bVar0;
	
	Function_96(3, 3);
	bVar0 = bVar0;
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/player_herb_violetsnowdrop", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/player_herb_hummingbirdsage", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/whittle_wood", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_camp_coffee_drink", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke_pipe", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_106(&Local_163 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	if (!Function_101(&Local_163 + 4))
	{
		return 0;
	}
	Local_163 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(Local_163))
	{
		Local_163 = CREATE_LAYOUT("TallTrees_layout");
	}
	Local_163.f_404 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint", -1040.393f, 184.047f, 1377.772f, 0.0f, 169.34f, 0.0f);
	Local_163.f_408 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint1", -495.255f, 144.499f, 1927.976f, 0.0f, 100.686f, 0.0f);
	Local_163.f_412 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint2", -461.26f, 140.187f, 1929.024f, 0.0f, 175.373f, 0.0f);
	*(&Local_163 + 416) = { -844.585f, 189.753f, 1583.111f };
	*(&Local_163 + 416 + 12) = { 0.0f, 174.998f, 0.0f };
	Local_163.f_440 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint3", -844.585f, 189.753f, 1583.111f, 0.0f, 174.998f, 0.0f);
	*(&Local_163 + 444) = { -733.6751f, 229.0498f, 1132.0f };
	*(&Local_163 + 444 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_163.f_468 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint4", -733.6751f, 229.0498f, 1132.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 472) = { -482.9754f, 71.90712f, 2203.033f };
	*(&Local_163 + 472 + 12) = { -0.05455317f, -0.02802815f, 0.08660866f };
	Local_163.f_496 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint7", -482.9754f, 71.90712f, 2203.033f, -0.05455317f, -0.02802815f, 0.08660866f);
	*(&Local_163 + 500) = { -499.047f, 75.045f, 2209.638f };
	*(&Local_163 + 500 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_163.f_524 = CREATE_POINT_IN_LAYOUT(Local_163, "talf_bhint8", -499.047f, 75.045f, 2209.638f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 528) = { -479.216f, 74.86f, 2216.221f };
	*(&Local_163 + 528 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_163.f_552 = CREATE_POINT_IN_LAYOUT(Local_163, "talf_bhint9", -479.216f, 74.86f, 2216.221f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 556) = { -492.624f, 73.197f, 2215.717f };
	*(&Local_163 + 556 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_163.f_580 = CREATE_POINT_IN_LAYOUT(Local_163, "talf_bhint10", -492.624f, 73.197f, 2215.717f, 0.0f, 0.0f, 0.0f);
	*(&Local_163 + 584) = { -734.578f, 226.755f, 1107.767f };
	*(&Local_163 + 584 + 12) = { 0.0f, 164.027f, 0.0f };
	Local_163.f_608 = CREATE_POINT_IN_LAYOUT(Local_163, "talf_bhint11", -734.578f, 226.755f, 1107.767f, 0.0f, 164.027f, 0.0f);
	Local_163.f_612 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint8", -1044.787f, 184.066f, 1375.618f, 0.0f, 314.542f, 0.0f);
	*(&Local_163 + 616) = { -465.413f, 142.624f, 1895.747f };
	*(&Local_163 + 616 + 12) = { 0.0f, 48.377f, 0.0f };
	Local_163.f_640 = CREATE_POINT_IN_LAYOUT(Local_163, "tallf_bhint9", -465.413f, 142.624f, 1895.747f, 0.0f, 48.377f, 0.0f);
	Local_163.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_horse_stay3", "horse_stay", -723.721f, 226.011f, 1122.191f, 0.0f, -87.53077f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_644), 0);
	Local_163.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_horse_stay2", "horse_stay", -727.61f, 226.223f, 1120.39f, 0.0f, -253.3726f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_648), 0);
	Local_163.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_horse_stay1", "horse_stay", -754.41f, 228.791f, 1131.354f, 0.0f, -78.61452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_652), 0);
	Local_163.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_horse_stay", "horse_stay", -749.865f, 227.201f, 1121.549f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_656), 0);
	Local_163.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop9", "Player_Herb_VioletSnowdrop", -894.1646f, 201.9576f, 1528f, 0.0f, 0.0f, 0.0f);
	Local_163.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop8", "Player_Herb_VioletSnowdrop", -812.3889f, 186.0371f, 1232.813f, 0.0f, 0.0f, 0.0f);
	Local_163.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop7", "Player_Herb_VioletSnowdrop", -811.6999f, 179.2376f, 1384f, 0.0f, 0.0f, 0.0f);
	Local_163.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop6", "Player_Herb_VioletSnowdrop", -961.0168f, 182.3751f, 1459.109f, 0.0f, 0.0f, 0.0f);
	Local_163.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop5", "Player_Herb_VioletSnowdrop", -1011.03f, 185.2311f, 1374.426f, 0.0f, 0.0f, 0.0f);
	Local_163.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop40", "Player_Herb_VioletSnowdrop", -680.0544f, 169.5147f, 1260.078f, 0.0f, 0.0f, 0.0f);
	Local_163.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop4", "Player_Herb_VioletSnowdrop", -876.0f, 193.718f, 1235.349f, 0.0f, 0.0f, 0.0f);
	Local_163.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop39", "Player_Herb_VioletSnowdrop", -608.3892f, 169.8096f, 1178.253f, 0.0f, 0.0f, 0.0f);
	Local_163.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop38", "Player_Herb_VioletSnowdrop", -425.9355f, 142.9052f, 1249.295f, 0.0f, 0.0f, 0.0f);
	Local_163.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop37", "Player_Herb_VioletSnowdrop", -304.0f, 133.4919f, 1336f, 0.0f, 0.0f, 0.0f);
	Local_163.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop36", "Player_Herb_VioletSnowdrop", -446.1278f, 131.3868f, 1201.03f, 0.0f, 0.0f, 0.0f);
	Local_163.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop35", "Player_Herb_VioletSnowdrop", -421.5536f, 142.423f, 1254.451f, 0.0f, 0.0f, 0.0f);
	Local_163.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop34", "Player_Herb_VioletSnowdrop", -594.7793f, 160.395f, 1281.692f, 0.0f, 0.0f, 0.0f);
	Local_163.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop33", "Player_Herb_VioletSnowdrop", -720.0f, 169.6626f, 1344f, 0.0f, 0.0f, 0.0f);
	Local_163.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop32", "Player_Herb_VioletSnowdrop", -688.0f, 169.5147f, 1272.0f, 0.0f, 0.0f, 0.0f);
	Local_163.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop31", "Player_Herb_VioletSnowdrop", -932.0116f, 194.7607f, 1315.988f, 0.0f, 0.0f, 0.0f);
	Local_163.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop30", "Player_Herb_VioletSnowdrop", -840.0f, 184.7214f, 1302.519f, 0.0f, 0.0f, 0.0f);
	Local_163.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop3", "Player_Herb_VioletSnowdrop", -905.4869f, 196.5365f, 1267.151f, 0.0f, 0.0f, 0.0f);
	Local_163.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop29", "Player_Herb_VioletSnowdrop", 302.0675f, 114.1615f, 1725.442f, 0.0f, 0.0f, 0.0f);
	Local_163.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop28", "Player_Herb_VioletSnowdrop", -820.2811f, 185.863f, 1248.281f, 0.0f, 0.0f, 0.0f);
	Local_163.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop27", "Player_Herb_VioletSnowdrop", -809.2433f, 183.7228f, 1175.171f, 0.0f, 0.0f, 0.0f);
	Local_163.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop26", "Player_Herb_VioletSnowdrop", -419.5688f, 116.6903f, 1152.93f, 0.0f, 0.0f, 0.0f);
	Local_163.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop25", "Player_Herb_VioletSnowdrop", -262.4087f, 116.0961f, 1224.747f, 0.0f, 0.0f, 0.0f);
	Local_163.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop24", "Player_Herb_VioletSnowdrop", -363.0544f, 117.723f, 1220.947f, 0.0f, 0.0f, 0.0f);
	Local_163.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop23", "Player_Herb_VioletSnowdrop", -701.5494f, 174.4512f, 1202.581f, 0.0f, 0.0f, 0.0f);
	Local_163.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop22", "Player_Herb_VioletSnowdrop", -615.6915f, 168.5812f, 1100.308f, 0.0f, 0.0f, 0.0f);
	Local_163.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop21", "Player_Herb_VioletSnowdrop", -490.3961f, 126.1658f, 1040.729f, 0.0f, 0.0f, 0.0f);
	Local_163.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop20", "Player_Herb_VioletSnowdrop", -619.6085f, 169.5643f, 1048f, 0.0f, 0.0f, 0.0f);
	Local_163.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop2", "Player_Herb_VioletSnowdrop", -1080.0f, 188.8414f, 1354.991f, 0.0f, 0.0f, 0.0f);
	Local_163.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop19", "Player_Herb_VioletSnowdrop", -617.6307f, 142.4992f, 904.0003f, 0.0f, 0.0f, 0.0f);
	Local_163.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop18", "Player_Herb_VioletSnowdrop", -548.0001f, 127.1276f, 916.0f, 0.0f, 0.0f, 0.0f);
	Local_163.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop17", "Player_Herb_VioletSnowdrop", -642.6788f, 140.233f, 844.8235f, 0.0f, 0.0f, 0.0f);
	Local_163.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop16", "Player_Herb_VioletSnowdrop", -777.1317f, 184.4256f, 812.6071f, 0.0f, 0.0f, 0.0f);
	Local_163.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop15", "Player_Herb_VioletSnowdrop", -902.608f, 206.3865f, 1094.384f, 0.0f, 0.0f, 0.0f);
	Local_163.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop14", "Player_Herb_VioletSnowdrop", -718.998f, 225.2521f, 1120.439f, 0.0f, 0.0f, 0.0f);
	Local_163.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop13", "Player_Herb_VioletSnowdrop", -846.9979f, 211.9342f, 1084.518f, 0.0f, 0.0f, 0.0f);
	Local_163.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop12", "Player_Herb_VioletSnowdrop", -872.0032f, 197.4375f, 1128.003f, 0.0f, 0.0f, 0.0f);
	Local_163.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop11", "Player_Herb_VioletSnowdrop", -791.0549f, 199.3337f, 1202.918f, 0.0f, 0.0f, 0.0f);
	Local_163.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop10", "Player_Herb_VioletSnowdrop", -1084.32f, 182.37f, 1497.451f, 0.0f, 0.0f, 0.0f);
	Local_163.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_VioletSnowdrop", "Player_Herb_VioletSnowdrop", -1202.184f, 187.051f, 1428.522f, 0.0f, 0.0f, 0.0f);
	Local_163.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage9", "Player_Herb_HummingbirdSage", -650.5471f, 96.37646f, 2073.051f, 0.0f, 0.0f, 0.0f);
	Local_163.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage8", "Player_Herb_HummingbirdSage", -573.9288f, 150.5809f, 1908f, 0.0f, 0.0f, 0.0f);
	Local_163.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage7", "Player_Herb_HummingbirdSage", -424.0f, 125.4901f, 2010.173f, 0.0f, 0.0f, 0.0f);
	Local_163.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage60", "Player_Herb_HummingbirdSage", 12.0f, 115.419f, 1664.0f, 0.0f, 0.0f, 0.0f);
	Local_163.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage6", "Player_Herb_HummingbirdSage", -353.9566f, 82.26611f, 2188.0f, 0.0f, 0.0f, 0.0f);
	Local_163.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage59", "Player_Herb_HummingbirdSage", -163.3843f, 128.289f, 1739.229f, 0.0f, 0.0f, 0.0f);
	Local_163.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage58", "Player_Herb_HummingbirdSage", -579.093f, 167.1844f, 1389.167f, 0.0f, 0.0f, 0.0f);
	Local_163.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage57", "Player_Herb_HummingbirdSage", -687.5864f, 181.1271f, 1608.589f, 0.0f, 0.0f, 0.0f);
	Local_163.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage56", "Player_Herb_HummingbirdSage", -403.8828f, 147.4588f, 1476.553f, 0.0f, 0.0f, 0.0f);
	Local_163.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage55", "Player_Herb_HummingbirdSage", -559.6156f, 168.6587f, 1462.071f, 0.0f, 0.0f, 0.0f);
	Local_163.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage54", "Player_Herb_HummingbirdSage", -725.5195f, 175.5069f, 1673.499f, 0.0f, 0.0f, 0.0f);
	Local_163.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage53", "Player_Herb_HummingbirdSage", -574.4073f, 175.7316f, 1655.52f, 0.0f, 0.0f, 0.0f);
	Local_163.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage52", "Player_Herb_HummingbirdSage", -348.0f, 147.4612f, 1679.097f, 0.0f, 0.0f, 0.0f);
	Local_163.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage51", "Player_Herb_HummingbirdSage", -306.1377f, 144.2182f, 1825.862f, 0.0f, 0.0f, 0.0f);
	Local_163.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage50", "Player_Herb_HummingbirdSage", -673.0797f, 152.1978f, 1871.119f, 0.0f, 0.0f, 0.0f);
	Local_163.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage49", "Player_Herb_HummingbirdSage", -317.0758f, 84.27249f, 2137.3f, 0.0f, 0.0f, 0.0f);
	Local_163.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage48", "Player_Herb_HummingbirdSage", 206.5806f, 90.17886f, 1944.086f, 0.0f, 0.0f, 0.0f);
	Local_163.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage47", "Player_Herb_HummingbirdSage", 138.0592f, 82.85904f, 2006.355f, 0.0f, 0.0f, 0.0f);
	Local_163.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage46", "Player_Herb_HummingbirdSage", 168.0f, 107.4897f, 1856f, 0.0f, 0.0f, 0.0f);
	Local_163.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage45", "Player_Herb_HummingbirdSage", -619.5699f, 175.5661f, 1659.533f, 0.0f, 0.0f, 0.0f);
	Local_163.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage44", "Player_Herb_HummingbirdSage", -448.0f, 162.0204f, 1731.15f, 0.0f, 0.0f, 0.0f);
	Local_163.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage43", "Player_Herb_HummingbirdSage", -498.1167f, 151.3338f, 1826.184f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage42", "Player_Herb_HummingbirdSage", -300.2108f, 131.726f, 1391.249f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_163.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage41", "Player_Herb_HummingbirdSage", -158.0741f, 123.4823f, 1425.278f, 0.0f, 0.0f, 0.0f);
	Local_163.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage40", "Player_Herb_HummingbirdSage", -44.00006f, 122.5702f, 1500.0f, 0.0f, 0.0f, 0.0f);
	Local_163.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage4", "Player_Herb_HummingbirdSage", 45.43288f, 79.5917f, 1964.184f, 0.0f, 0.0f, 0.0f);
	Local_163.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage39", "Player_Herb_HummingbirdSage", -452.7934f, 152.526f, 1446.807f, 0.0f, 0.0f, 0.0f);
	Local_163.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage38", "Player_Herb_HummingbirdSage", -596.0001f, 177.6941f, 1516f, 0.0f, 0.0f, 0.0f);
	Local_163.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage37", "Player_Herb_HummingbirdSage", -661.3279f, 173.4927f, 1435.57f, 0.0f, 0.0f, 0.0f);
	Local_163.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage36", "Player_Herb_HummingbirdSage", -725.7597f, 176.6901f, 1397.993f, 0.0f, 0.0f, 0.0f);
	Local_163.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage35", "Player_Herb_HummingbirdSage", -908.0408f, 184.1334f, 1576.069f, 0.0f, 0.0f, 0.0f);
	Local_163.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage34", "Player_Herb_HummingbirdSage", -838.2128f, 189.6234f, 1596.025f, 0.0f, 0.0f, 0.0f);
	Local_163.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage33", "Player_Herb_HummingbirdSage", -809.653f, 157.0472f, 1697.251f, 0.0f, 0.0f, 0.0f);
	Local_163.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage32", "Player_Herb_HummingbirdSage", -757.8369f, 176.4141f, 1655.508f, 0.0f, 0.0f, 0.0f);
	Local_163.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage31", "Player_Herb_HummingbirdSage", -668.0446f, 175.4476f, 1657.019f, 0.0f, 0.0f, 0.0f);
	Local_163.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage30", "Player_Herb_HummingbirdSage", -283.9931f, 130.5098f, 1488.106f, 0.0f, 0.0f, 0.0f);
	Local_163.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage3", "Player_Herb_HummingbirdSage", -95.99991f, 81.28975f, 2144.053f, 0.0f, 0.0f, 0.0f);
	Local_163.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage29", "Player_Herb_HummingbirdSage", -436f, 147.7323f, 1473.89f, 0.0f, 0.0f, 0.0f);
	Local_163.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage28", "Player_Herb_HummingbirdSage", -320.8492f, 142.4725f, 1596.957f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand9", "rand_idle_stand", -467.906f, 142.681f, 1896.019f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_sit_cleanpistol1", "sit_cleanpistol", -464.486f, 140.173f, 1931.761f, 0.0f, -92.88916f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand8", "rand_idle_stand", -456.888f, 140.187f, 1926.388f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand7", "rand_idle_stand", -459.856f, 140.187f, 1926.487f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_whittle_wood1", "whittle_wood", -468.799f, 140.454f, 1920.274f, 0.0f, -56.59673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_spit1", "stand_spit", -475.174f, 141.513f, 1926.68f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_guntricks_e_any4", "stand_guntricks_e_any", -465.096f, 140.295f, 1921.414f, 0.0f, -243.9603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand6", "rand_idle_stand", -459.367f, 140.156f, 1923.3f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_guntricks_e_any3", "stand_guntricks_e_any", -494.201f, 144.499f, 1927.552f, 0.0f, -243.9603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand5", "rand_idle_stand", -490.425f, 144.473f, 1931.007f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand4", "rand_idle_stand", -495.447f, 144.499f, 1930.373f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand3", "rand_idle_stand", -498.908f, 144.942f, 1920.393f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_sit_no_table1", "sit_no_table", -536.7271f, 146.6513f, 1880.275f, 0.0f, -79.20766f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand2", "rand_idle_stand", -465.725f, 142.647f, 1898.082f, 0.0f, -19.29583f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand1", "rand_idle_stand", -522.4897f, 146.646f, 1888.277f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_guntricks_e_any", "stand_guntricks_e_any", -531.7095f, 146.6513f, 1878.072f, 0.0f, -243.9603f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_guntricks1", "stand_guntricks_e_any", -848.164f, 189.677f, 1589.346f, 0.0f, -152.5991f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_rand_idle_stand2", "rand_idle_stand", -843.486f, 189.681f, 1590.27f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_rand_idle_stand1", "rand_idle_stand", -843.403f, 189.753f, 1585.25f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_rand_idle_stand", "rand_idle_stand", -844.634f, 189.753f, 1582.716f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_stay7", "horse_stay", -491.1115f, 72.58714f, 2207.955f, 0.0f, 85.92881f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_tend7", "horse_tend", -491.2f, 72.336f, 2199.114f, 0.0f, -170.8492f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_stay6", "horse_stay", -481.9098f, 72.66555f, 2210.361f, 0.0f, -48.69083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_tend6", "horse_tend", -501.957f, 75.46127f, 2230.747f, 0.0f, 217.4179f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_sit_ground_smoke2", "sit_ground_smoke", -484.3089f, 71.97777f, 2204.32f, 0.0f, -51.32996f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_sit_ground_smoke", "sit_ground_smoke", -481.8283f, 71.87337f, 2201.816f, 0.0f, 129.3626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", -485.3011f, 72.0527f, 2202.761f, 0.0f, -94.26432f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", -482.041f, 71.90236f, 2205.006f, 0.0f, 18.83562f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -477.8579f, 71.79588f, 2203.276f, 0.0f, -71.12064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -481.474f, 71.80349f, 2199.808f, 0.0f, -18.62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_163.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -486.1086f, 72.11655f, 2200.902f, 0.0f, -18.62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_972), 0);
	Local_163.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", -485.8302f, 72.53257f, 2211.344f, 0.0f, 162.0719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_976), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", -483.8687f, 75.67455f, 2243.048f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -483.075f, 71.961f, 2201.818f, 0.0f, -156.7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_rand_idle_stand2", "rand_idle_stand", -513.642f, 78.714f, 2228.851f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_rand_idle_stand1", "rand_idle_stand", -494.992f, 74.165f, 2222.989f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", -476.394f, 72.594f, 2208.338f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -489.555f, 72.364f, 2204.134f, 0.0f, -156.7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_tend5", "horse_tend", -491.3683f, 72.87353f, 2213.774f, 0.0f, -122.2253f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_stay5", "horse_stay", -483.0219f, 72.43819f, 2207.555f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_tend4", "horse_tend", -490.959f, 72.65787f, 2211.081f, 0.0f, -457.3993f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_horse_stay4", "horse_stay", -494.391f, 73.535f, 2216.439f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_Pee2", "Pee", -500.917f, 75.958f, 2222.902f, 0.0f, 49.93821f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", -502.51f, 75.94456f, 2226.066f, 0.0f, -138.6134f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", -506.2025f, 76.37253f, 2229.087f, 0.0f, 206.1628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_lookdistance5", "stand_lookdistance_w_any", -869.239f, 184.363f, 1622.015f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_lookdistance4", "stand_lookdistance_w_any", -892.603f, 184.307f, 1598.662f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_lookdistance3", "stand_lookdistance_w_any", -898.47f, 196.766f, 1553.119f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_lookdistance2", "stand_lookdistance_w_any", -842.423f, 195.287f, 1517.248f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_lookdistance1", "stand_lookdistance_w_any", -850.515f, 199.951f, 1524.559f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_163.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_horse_stay3", "horse_stay", -860.0479f, 189.6933f, 1586.576f, 0.0f, -87.53077f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_980), 0);
	Local_163.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_horse_stay2", "horse_stay", -838.1571f, 189.673f, 1582.628f, 0.0f, -253.3726f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_984), 0);
	Local_163.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_horse_stay1", "horse_stay", -858.0981f, 189.7076f, 1589.251f, 0.0f, -78.61452f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_988), 0);
	Local_163.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_horse_stay", "horse_stay", -847.9999f, 189.794f, 1600f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_992), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_whittle_wood", "whittle_wood", -854.9286f, 189.7101f, 1587.258f, 0.0f, -56.59673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_spit", "stand_spit", -844.5616f, 189.8666f, 1578.33f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_RandIdleSitGround", "Rand_Idle_Sit_Ground", -861.1256f, 189.7522f, 1577.534f, 0.0f, 72.17829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_guntricks", "stand_guntricks_e_any", -843.9632f, 189.7141f, 1594.357f, 0.0f, -152.5991f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_Pee", "Pee", -834.5575f, 189.5914f, 1578.504f, 0.0f, -120.5125f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_skin_scraper", "skin_scraper", -851.8649f, 189.7936f, 1581.97f, 0.0f, 16.42579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_stand_lookdistance", "stand_lookdistance_w_any", -860.617f, 197.949f, 1547.594f, 0.0f, -115.6206f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_sit_cleanpistol", "sit_cleanpistol", -846.0652f, 189.779f, 1585.647f, 0.0f, -92.88916f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_lookout_windowR", "look_out_window_R", -843.0142f, 189.6684f, 1586.801f, 0.0f, -180.6212f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_lookout_windowL", "look_out_window_L", -846.9889f, 189.7407f, 1583.474f, 0.0f, 91.37856f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_smoking_stand1", "smoking_stand", -847.0233f, 189.7358f, 1583.315f, 0.0f, 88.9194f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_smoking_stand", "smoking_stand", -839.2578f, 189.6638f, 1589.468f, 0.0f, -126.8859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_sit_ground_smoke1", "sit_ground_smoke", -840.5498f, 189.6831f, 1590.884f, 0.0f, -132.4568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_sit_coffee_drink", "sit_camp_coffee_drink", -853.5219f, 189.7364f, 1586.908f, 0.0f, 123.5809f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_sit_ground_smoke", "sit_ground_smoke", -853.1792f, 189.7862f, 1582.249f, 0.0f, 111.9939f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_Sit_Ground_Drink", "Sit_Ground_Drink", -852.1535f, 189.6882f, 1585.669f, 0.0f, 90.9255f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Tnr_LookDistanceBinocs", "look_distance_binocs", -860.8885f, 189.5468f, 1589.467f, 0.0f, 93.03499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_guntricks2", "stand_guntricks_e_any", -1046.667f, 184.257f, 1363.73f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_guntricks1", "stand_guntricks_e_any", -1040.191f, 184.076f, 1360.591f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_yawning_n_any", "stand_yawning_n_any", -1044.274f, 184.066f, 1374.797f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_163.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_rand_idle_stand1", "rand_idle_stand", -1042.525f, 183.986f, 1371.567f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_996), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_lookdistance5", "stand_lookdistance_w_any", -1060.616f, 186.347f, 1369.309f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_lookdistance4", "stand_lookdistance_w_any", -1066.706f, 188.877f, 1351.358f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_lookdistance3", "stand_lookdistance_w_any", -1048.898f, 189.629f, 1344.847f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_lookdistance2", "stand_lookdistance_w_any", -1030.036f, 189.812f, 1343.675f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_lookdistance1", "stand_lookdistance_w_any", -1021.314f, 185.173f, 1367.07f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_Pee2", "Pee", -1044.787f, 184.066f, 1375.618f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_163.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1037.289f, 184.007f, 1360.879f, 0.0f, -148.2222f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_1000), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_rand_idle_stand1", "rand_idle_stand", -728.483f, 226.88f, 1124.825f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_rand_idle_stand", "rand_idle_stand", -732.926f, 226.2996f, 1106.792f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_yawning_n_any", "stand_yawning_n_any", -741.615f, 227.712f, 1121.556f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_Pee1", "Pee", -726.613f, 226.972f, 1128.937f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_whittle_wood", "whittle_wood", -731.111f, 226.912f, 1119.21f, 0.0f, -56.59673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_RandIdleSitGround1", "Rand_Idle_Sit_Ground", -735.3475f, 226.3739f, 1104.99f, 0.0f, 236.5938f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_RandIdleSitGround", "Rand_Idle_Sit_Ground", -733.03f, 227.017f, 1113.366f, 0.0f, 72.17829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_spit", "stand_spit", -745.383f, 227.523f, 1120.269f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_guntricks", "stand_guntricks_e_any", -738.237f, 230.987f, 1138.923f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_smoking_stand1", "smoking_stand", -736.827f, 227.061f, 1113.505f, 0.0f, 233.1141f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_lookdistance6", "stand_lookdistance_w_any", -776.693f, 208.288f, 1174.507f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_lookdistance5", "stand_lookdistance_w_any", -764.583f, 217.809f, 1163.076f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_lookdistance4", "stand_lookdistance_w_any", -732.609f, 231.183f, 1161.514f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_lookdistance3", "stand_lookdistance_w_any", -728.293f, 228.278f, 1153.609f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_smoking_stand", "smoking_stand", -839.2578f, 189.6638f, 1589.468f, 0.0f, -126.8859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_Pee", "Pee", -1027.649f, 184.4096f, 1377.63f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_lookdistance2", "stand_lookdistance_w_any", -777.777f, 213.244f, 1163.218f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_lookdistance1", "stand_lookdistance_w_any", -718.439f, 226.382f, 1147.617f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nek_stand_lookdistance", "stand_lookdistance_w_any", -747.145f, 227.698f, 1152.161f, 0.0f, 176.216f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_163.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_rand_idle_stand", "rand_idle_stand", -1045.471f, 184.066f, 1373.464f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_163.f_1004), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_sit_docks1", "nsit_docks", -1046.972f, 184.0596f, 1378.077f, 0.0f, 90.22343f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_Pee1", "Pee", -1033.513f, 181.428f, 1405.885f, 0.0f, -182.9437f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_horse_stay4", "horse_stay", -1035.998f, 184.1881f, 1368.416f, 0.0f, -201.4612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_horse_stay3", "horse_stay", -1035.918f, 184.0916f, 1366.649f, 0.0f, 149.0538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_horse_stay2", "horse_stay", -1060.616f, 186.347f, 1369.309f, 0.0f, 149.0538f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_horse_stay1", "horse_stay", -1057.52f, 187.0946f, 1360.963f, 0.0f, -201.4612f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_Pee", "Pee", -1027.649f, 184.4096f, 1377.63f, 0.0f, -104.4397f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_NearWall", "Rand_Idle_NearWall", -1046.11f, 183.7955f, 1371.995f, 0.0f, 711.347f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_lookdistance", "stand_lookdistance_w_any", -1038.049f, 184.0207f, 1362.066f, 0.0f, 275.9078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_stand_guntricks", "stand_guntricks_e_any", -1039.681f, 184.047f, 1376.458f, 0.0f, 11.44363f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "nAur_stand", "rand_idle_stand", -1040.12f, 184.047f, 1374.909f, 0.0f, -145.1313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_lean_rail", "nlean_rail", -1041.311f, 184.046f, 1388.666f, 0.0f, 91.23931f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_look_window", "look_out_window_L", -1044.392f, 184.065f, 1375.834f, 0.0f, -179.9143f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_lean_fence", "lean_fence_L_talking", -1046.237f, 184.0319f, 1378.434f, 0.0f, -179.6869f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_sit_docks", "nsit_docks", -1038.795f, 184.0846f, 1380.922f, 0.0f, -92.40741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Aur_look_binocs", "look_distance_binocs", -1039.277f, 181.423f, 1405.247f, 0.0f, -183.3307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_smoking_stand12", "smoking_stand", -534.7827f, 146.6513f, 1877.814f, 0.0f, 181.8827f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -534.1003f, 146.652f, 1881.399f, 0.0f, -358.6365f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_smoking_stand11", "smoking_stand", -491.075f, 144.272f, 1937.443f, 0.0f, -28.95748f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_Pee", "Pee", -461.327f, 142.833f, 1890.427f, 0.0f, -138.032f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_rand_idle_stand", "rand_idle_stand", -454.65f, 139.572f, 1919.325f, 0.0f, -113.4712f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_smoking_stand", "smoking_stand", -495.012f, 144.473f, 1923.981f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_horse_stay3", "horse_stay", -467.863f, 140.948f, 1918.547f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_horse_stay2", "horse_stay", -487.01f, 144.068f, 1904.935f, 0.0f, -221.2936f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_horse_stay", "horse_stay", -500.318f, 145.434f, 1917.507f, 0.0f, -139.2258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -490.864f, 144.376f, 1923.154f, 0.0f, -36.64879f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_Rand_Idle_NearWall1", "Rand_Idle_NearWall", -458.21f, 140.186f, 1931.342f, 0.0f, -3.663632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_lookdistance_binocs3", "look_distance_binocs", -459.359f, 142.84f, 1890.269f, 0.0f, -68.80422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_guntricks_e_any2", "stand_guntricks_e_any", -494.257f, 144.499f, 1930.558f, 0.0f, -33.78901f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_Sit_Ground_Smoke_Pipe", "Sit_Ground_Smoke_Pipe", -497.401f, 144.499f, 1929.53f, 0.0f, 37.61281f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_look_out_window_R", "look_out_window_R", -464.6117f, 142.647f, 1898.452f, 0.0f, 179.3634f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_smoking_stand13", "smoking_stand", -457.4906f, 142.6668f, 1895.166f, 0.0f, -120.3361f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_sit_cleanrifle", "sit_cleanrifle", -455.6522f, 139.545f, 1919.091f, 0.0f, -48.19163f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_sit_no_table", "sit_no_table", -502.756f, 144.5078f, 1927.236f, 0.0f, -142.8304f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_Pee1", "Pee", -500.237f, 144.473f, 1933.786f, 0.0f, -4.101937f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_guntricks_e_any1", "stand_guntricks_e_any", -451.2635f, 140.1866f, 1934.491f, 0.0f, 10.2007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -454.9582f, 140.186f, 1931.184f, 0.0f, 99.03301f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_Rand_Idle_Near", "Rand_Idle_NearWall_Shoulder_L", -498.472f, 144.472f, 1933.444f, 0.0f, 181.4896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_announce1", "stand_announce", -491.863f, 144.506f, 1921.508f, 0.0f, -138.9142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_announce", "stand_announce", -464.679f, 140.254f, 1920.628f, 0.0f, 48.78769f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_lookdistance_binocs", "look_distance_binocs", -430.077f, 134.9f, 1907.864f, 0.0f, -88.09788f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_lookdistance_binocs2", "look_distance_binocs", -477.696f, 145.356f, 1950.641f, 0.0f, 189.7475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -528.882f, 151.674f, 1944.555f, 0.0f, -66.41837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_stand_lookdistance_w_any", "stand_lookdistance_w_any", -537.156f, 147.628f, 1903.934f, 0.0f, 306.722f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_163, "bcc_lookdistance_binocs1", "look_distance_binocs", -475.628f, 145.189f, 1876.517f, 0.0f, -93.37556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_163.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage27", "Player_Herb_HummingbirdSage", -234.8312f, 126.4941f, 1413.074f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage26", "Player_Herb_HummingbirdSage", -328.9761f, 134.5593f, 1347.657f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage25", "Player_Herb_HummingbirdSage", -184.0001f, 128.9335f, 1312f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1020 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage24", "Player_Herb_HummingbirdSage", -88.0f, 117.4406f, 1404f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1024 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage23", "Player_Herb_HummingbirdSage", -296.0f, 141.2629f, 1624f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1028 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage22", "Player_Herb_HummingbirdSage", -261.9808f, 140.8409f, 1687.524f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1032 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage21", "Player_Herb_HummingbirdSage", -114.3974f, 121.4745f, 1809.136f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage20", "Player_Herb_HummingbirdSage", -48.0f, 113.286f, 1688f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage2", "Player_Herb_HummingbirdSage", -200.0116f, 87.21113f, 1980.004f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage19", "Player_Herb_HummingbirdSage", -43.99976f, 117.4587f, 1600f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage18", "Player_Herb_HummingbirdSage", 24.0f, 115.4509f, 1672.0f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage17", "Player_Herb_HummingbirdSage", 73.58875f, 118.3772f, 1760.344f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1056 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage16", "Player_Herb_HummingbirdSage", -171.3039f, 120.5057f, 1860.722f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1060 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage15", "Player_Herb_HummingbirdSage", -316.0f, 144.1793f, 1832f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage14", "Player_Herb_HummingbirdSage", -412.0512f, 155.5096f, 1807.954f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage13", "Player_Herb_HummingbirdSage", -616.2814f, 171.8325f, 1825.91f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage12", "Player_Herb_HummingbirdSage", -780.3611f, 143.7323f, 1824.27f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage10", "Player_Herb_HummingbirdSage", -616.0f, 116.1135f, 1984f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage1", "Player_Herb_HummingbirdSage", -72.0f, 107.4196f, 1864f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage", "Player_Herb_HummingbirdSage", 103.5838f, 83.15372f, 1989.076f, 0.0f, 0.0f, 0.0f);
	Local_163.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_163, "Player_Herb_HummingbirdSage61", "Player_Herb_HummingbirdSage", -457.2195f, 140.1816f, 1936.16f, 0.0f, 0.0f, 0.0f);
	return 1;
}

bool Function_101(int iParam0) //Position: 0xAC9F / 44191
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_105();
	iVar1 = 0;
	if (!Function_21(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_104(iParam0[iVar03], 8);
		}
		else if (Function_103())
		{
			iVar1 = 1;
			Function_104(iParam0[iVar03], 8);
		}
		Function_104(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_21(iParam0[iVar03], 4))
		{
			if (!Function_21(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_21(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_21(iParam0[03], 8) || iVar1));
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
				Function_104(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_21(iParam0[iVar03], 4))
		{
			if (!Function_21(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_104(iParam0[iVar03], 2);
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
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_104(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_104(iParam0[iVar03], 2);
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
	Function_102();
	return 1;
}

void Function_102() //Position: 0xB01A / 45082
{
	if (!Function_61(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_103() //Position: 0xB05A / 45146
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

void Function_104(var uParam0, int iParam1) //Position: 0xB085 / 45189
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_105() //Position: 0xB096 / 45206
{
	if (!Function_61(128))
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

var Function_106(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB0D8 / 45272
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_107(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_104(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_107(var uParam0, int iParam1, int iParam2) //Position: 0xB110 / 45328
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_21(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_104(uParam0[iVar03], 4);
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

bool Function_108() //Position: 0xB1D4 / 45524
{
	return Function_109();
}

int Function_109() //Position: 0xB1DD / 45533
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
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	
	Function_96(3, 3);
	uVar0 = uVar0;
	Function_106(&Local_6 + 4, "p_uti_cover2x1x", 0, 0);
	if (!Function_101(&Local_6 + 4))
	{
		return 0;
	}
	Local_6 = FIND_NAMED_LAYOUT("TallTrees_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("TallTrees_layout");
	}
	Local_6.f_20 = CREATE_OBJECTSET_IN_LAYOUT("TAL_vantagePointsSet", Local_6, 8, 0);
	*(&Local_6 + 24[06]) = { -1004.93f, 107.54f, 1215.466f };
	*(&Local_6 + 24[06] + 12) = { 0.0f, 176.0835f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage01", -1004.93f, 107.54f, 1215.466f, 0.0f, 176.0835f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_6.f_20);
	*(&Local_6 + 24[16]) = { -1011.234f, 107.5559f, 1212.117f };
	*(&Local_6 + 24[16] + 12) = { 0.0f, 153.6292f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage02", -1011.234f, 107.5559f, 1212.117f, 0.0f, 153.6292f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_6.f_20);
	*(&Local_6 + 24[26]) = { -1049.0f, 120.0f, 1194.0f };
	*(&Local_6 + 24[26] + 12) = { 0.0f, -178.1565f, 0.0f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage03", -1049.0f, 120.0f, 1194.0f, 0.0f, -178.1565f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_6.f_20);
	*(&Local_6 + 24[36]) = { -1105.0f, 131.0f, 1186.0f };
	*(&Local_6 + 24[36] + 12) = { 0.0f, 183.0f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage04", -1105.0f, 131.0f, 1186.0f, 0.0f, 183.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_6.f_20);
	*(&Local_6 + 24[46]) = { -1166.0f, 136.0f, 1184.0f };
	*(&Local_6 + 24[46] + 12) = { 0.0f, 175.0f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage05", -1166.0f, 136.0f, 1184.0f, 0.0f, 175.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_6.f_20);
	*(&Local_6 + 24[56]) = { -1191.0f, 135.7389f, 1170.0f };
	*(&Local_6 + 24[56] + 12) = { 0.0f, 122.0f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage06", -1191.0f, 135.7389f, 1170.0f, 0.0f, 122.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_6.f_20);
	*(&Local_6 + 24[66]) = { -1524.0f, 166.0f, 1083.0f };
	*(&Local_6 + 24[66] + 12) = { 0.0f, 204.0f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage07", -1524.0f, 166.0f, 1083.0f, 0.0f, 204.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_6.f_20);
	*(&Local_6 + 24[76]) = { -1629.0f, 162.0f, 1079.0f };
	*(&Local_6 + 24[76] + 12) = { 0.0f, 209.0f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage08", -1629.0f, 162.0f, 1079.0f, 0.0f, 209.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_6.f_20);
	*(&Local_6 + 24[86]) = { -1484.8f, 89.0f, 1445.0f };
	*(&Local_6 + 24[86] + 12) = { 0.0f, 356.0f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage09", -1484.8f, 89.0f, 1445.0f, 0.0f, 356.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_6.f_20);
	*(&Local_6 + 24[96]) = { -1419.0f, 80.0f, 1426.0f };
	*(&Local_6 + 24[96] + 12) = { 0.0f, 314.0f, 0.0f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage10", -1419.0f, 80.0f, 1426.0f, 0.0f, 314.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_6.f_20);
	*(&Local_6 + 24[106]) = { -1363.0f, 91.0f, 1450.0f };
	*(&Local_6 + 24[106] + 12) = { 0.0f, 76.0f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage11", -1363.0f, 91.0f, 1450.0f, 0.0f, 76.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_6.f_20);
	*(&Local_6 + 24[116]) = { -886.0f, 115.0f, 1280.0f };
	*(&Local_6 + 24[116] + 12) = { 0.0f, 190.0f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage12", -886.0f, 115.0f, 1280.0f, 0.0f, 190.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_6.f_20);
	*(&Local_6 + 24[126]) = { -828.0f, 110.0f, 1318.0f };
	*(&Local_6 + 24[126] + 12) = { 0.0f, 76.0f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage13", -828.0f, 110.0f, 1318.0f, 0.0f, 76.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_6.f_20);
	*(&Local_6 + 24[136]) = { -817.0f, 110.0f, 1326.0f };
	*(&Local_6 + 24[136] + 12) = { 0.0f, 200.0f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage14", -817.0f, 110.0f, 1326.0f, 0.0f, 200.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_6.f_20);
	*(&Local_6 + 24[146]) = { -755.0f, 113.0f, 1345.0f };
	*(&Local_6 + 24[146] + 12) = { 0.0f, 110.0f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage15", -755.0f, 113.0f, 1345.0f, 0.0f, 110.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_6.f_20);
	*(&Local_6 + 24[156]) = { -551.0f, 114.0f, 1584.0f };
	*(&Local_6 + 24[156] + 12) = { 0.0f, 137.0f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage16", -551.0f, 114.0f, 1584.0f, 0.0f, 137.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_6.f_20);
	*(&Local_6 + 24[166]) = { 0.0f, 0.0f, 0.0f };
	*(&Local_6 + 24[166] + 12) = { -488.0f, 123.0f, 1699.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage17", 0.0f, 0.0f, 0.0f, -488.0f, 123.0f, 1699.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_6.f_20);
	*(&Local_6 + 24[176]) = { -488.0f, 108.0f, 1728.0f };
	*(&Local_6 + 24[176] + 12) = { 0.0f, 178.0f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage18", -488.0f, 108.0f, 1728.0f, 0.0f, 178.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_6.f_20);
	*(&Local_6 + 24[186]) = { -433.0f, 116.0f, 1841.0f };
	*(&Local_6 + 24[186] + 12) = { 0.0f, 42.0f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage19", -433.0f, 116.0f, 1841.0f, 0.0f, 42.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_6.f_20);
	*(&Local_6 + 24[196]) = { -425.0f, 112.0f, 1902.0f };
	*(&Local_6 + 24[196] + 12) = { 0.0f, 161.0f, 0.0f };
	bVar20 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage20", -425.0f, 112.0f, 1902.0f, 0.0f, 161.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar20, Local_6.f_20);
	*(&Local_6 + 24[206]) = { -474.0f, 104.0f, 1948.0f };
	*(&Local_6 + 24[206] + 12) = { 0.0f, 8.0f, 0.0f };
	bVar21 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage21", -474.0f, 104.0f, 1948.0f, 0.0f, 8.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar21, Local_6.f_20);
	*(&Local_6 + 24[216]) = { -423.0f, 113.0f, 1901.0f };
	*(&Local_6 + 24[216] + 12) = { 0.0f, 200.0f, 0.0f };
	bVar22 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage22", -423.0f, 113.0f, 1901.0f, 0.0f, 200.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar22, Local_6.f_20);
	*(&Local_6 + 24[226]) = { -113.0f, 89.0f, 1978.0f };
	*(&Local_6 + 24[226] + 12) = { 0.0f, 89.0f, 0.0f };
	bVar23 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage23", -113.0f, 89.0f, 1978.0f, 0.0f, 89.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar23, Local_6.f_20);
	*(&Local_6 + 24[236]) = { -39.0f, 123.0f, 1694.0f };
	*(&Local_6 + 24[236] + 12) = { 0.0f, 174.0f, 0.0f };
	bVar24 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage24", -39.0f, 123.0f, 1694.0f, 0.0f, 174.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar24, Local_6.f_20);
	*(&Local_6 + 24[246]) = { -74.0f, 114.0f, 1753.0f };
	*(&Local_6 + 24[246] + 12) = { 0.0f, 176.0f, 0.0f };
	bVar25 = CREATE_POINT_IN_LAYOUT(Local_6, "TAL_vantage25", -74.0f, 114.0f, 1753.0f, 0.0f, 176.0f, 0.0f);
	ADD_OBJECT_TO_OBJECTSET(bVar25, Local_6.f_20);
	Function_110(Local_6, "cover2x1x0", "p_uti_cover2x1x", -448.6531f, 138.4329f, 1914.886f, 0.0f, -75.67802f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x1", "p_uti_cover2x1x", -449.3369f, 138.8412f, 1918.809f, 0.0f, -75.67802f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x2", "p_uti_cover2x1x", -448.9167f, 139.7174f, 1896.942f, 0.0f, -55.30396f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x3", "p_uti_cover2x1x", -456.8095f, 142.5521f, 1898.919f, 0.0f, -89.31826f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x4", "p_uti_cover2x1x", -450.2817f, 139.0974f, 1922.986f, 0.0f, -89.31826f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x5", "p_uti_cover2x1x", -443.0971f, 138.5973f, 1896.387f, 0.0f, -13.45933f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x6", "p_uti_cover2x1x", -462.6826f, 140.1866f, 1921.317f, 0.0f, -27.98695f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x7", "p_uti_cover2x1x", -458.4989f, 140.116f, 1920.404f, 0.0f, -22.18075f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x8", "p_uti_cover2x1x", -468.9054f, 142.5568f, 1904.905f, 0.0f, -89.31826f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x9", "p_uti_cover2x1x", -481.9193f, 143.0384f, 1920f, 0.0f, -89.31826f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x10", "p_uti_cover2x1x", -484.5124f, 143.5607f, 1908.006f, 0.0f, -89.31826f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x11", "p_uti_cover2x1x", -486.4197f, 143.5607f, 1919.21f, 0.0f, -61.57892f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x12", "p_uti_cover2x1x", -480.3436f, 143.5607f, 1913.63f, 0.0f, -89.31826f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x13", "p_uti_cover2x1x", -499.7885f, 144.8462f, 1921.702f, 0.0f, -52.36341f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x14", "p_uti_cover2x1x", -514.1085f, 146.5724f, 1900f, 0.0f, -103.41f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x15", "p_uti_cover2x1x", -518.9744f, 146.5725f, 1903.999f, 0.0f, -111.6471f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x16", "p_uti_cover2x1x", -501.5815f, 145.5685f, 1910.418f, 0.0f, -102.8337f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x17", "p_uti_cover2x1x", -490.0768f, 144.4524f, 1904f, 0.0f, -115.3954f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x18", "p_uti_cover2x1x", -498.8087f, 145.4986f, 1902.808f, 0.0f, -115.3954f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x19", "p_uti_cover2x1x", -508f, 146.5725f, 1911.293f, 0.0f, -115.3954f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x20", "p_uti_cover2x1x", -481.9105f, 143.5607f, 1890.433f, 0.0f, -191.4418f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x21", "p_uti_cover2x1x", -490.1463f, 144.5646f, 1888f, 0.0f, -207.9976f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x22", "p_uti_cover2x1x", -482.9111f, 144.5646f, 1881.089f, 0.0f, -199.7674f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x23", "p_uti_cover2x1x", -500.0f, 145.5685f, 1890.708f, 0.0f, -165.2202f, 0.0f, 1);
	Function_110(Local_6, "cover2x1x24", "p_uti_cover2x1x", -468.9321f, 140.0699f, 1930.365f, 0.0f, -143.4477f, 0.0f, 1);
	return 1;
}

var Function_110(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xC1F5 / 49653
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_111() //Position: 0xC21F / 49695
{
	ALLOW_TUMBLEWEEDS(0);
	return;
}

void Function_112(bool bParam0, int iParam1) //Position: 0xC229 / 49705
{
	if (!Function_61(128))
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

