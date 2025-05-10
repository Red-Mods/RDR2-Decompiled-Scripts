//Decompiled with MagicRDR v1.0
//Function Count : 113
//Statics Count : 942
//Natives Count : 163
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<5> Local_6 = { 0, 0, 0, 37, 0 } ;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
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
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	struct<3005> Local_180 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	iLocal_939 = 0;
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
				if (Function_109())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_100())
				{
					Function_99();
					Function_98(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_95())
				{
					Function_98(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_94(&uLocal_3);
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
				Function_98(&(Global_29008[iScriptParam_0]), 8);
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
					Function_70(iScriptParam_0);
					Function_69(64);
				}
				Function_98(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_76(iScriptParam_0))
				{
					Function_67(Function_68(), iScriptParam_0);
				}
				Function_66(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_65(&Var0, 5.0f);
				Function_98(&(Global_29008[iScriptParam_0]), 4);
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
					Function_24(&uLocal_3, &uLocal_932, Function_62(), iScriptParam_0);
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
	Function_8(&uLocal_3, &uLocal_932);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_69(64);
	Function_78(&(Global_29008[iScriptParam_0]), 32);
	Function_78(&(Global_29008[iScriptParam_0]), 64);
	Function_78(&(Global_29008[iScriptParam_0]), 512);
	Function_78(&(Global_29008[iScriptParam_0]), 16);
	Function_78(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_65(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2EA / 746
{
	return;
}

void Function_2(int iParam0) //Position: 0x2F0 / 752
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

void Function_3(int iParam0) //Position: 0x326 / 806
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x348 / 840
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x35E / 862
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x374 / 884
{
	HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(Local_180.f_368);
	Function_7();
	return;
}

void Function_7() //Position: 0x386 / 902
{
	RELEASE_LAYOUT_REF(Local_180);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x391 / 913
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

void Function_9(int iParam0, int iParam1, int iParam2) //Position: 0x3E9 / 1001
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
		Function_10(Global_16524, bVar0, 1);
	}
	return;
}

void Function_10(int iParam0, bool bParam1, bool bParam2) //Position: 0x4CF / 1231
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

void Function_11() //Position: 0x648 / 1608
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_12(bool bParam0) //Position: 0x654 / 1620
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

void Function_13(int iParam0) //Position: 0x69A / 1690
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

void Function_14(int iParam0, int iParam1) //Position: 0x6E0 / 1760
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x6FA / 1786
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x717 / 1815
{
	Function_17();
	return;
}

void Function_17() //Position: 0x720 / 1824
{
	Function_18(&Local_8 + 4);
	RELEASE_LAYOUT_REF(Local_8);
	return;
}

void Function_18(int iParam0) //Position: 0x732 / 1842
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

void Function_19(var uParam0, int iParam1) //Position: 0x758 / 1880
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

void Function_20(var uParam0, int iParam1) //Position: 0x886 / 2182
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_21(int iParam0, int iParam1) //Position: 0x8A0 / 2208
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8BD / 2237
{
	Function_23();
	return;
}

void Function_23() //Position: 0x8C6 / 2246
{
	RELEASE_LAYOUT_REF(Local_6);
	return;
}

void Function_24(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x8D1 / 2257
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

bool Function_25(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x952 / 2386
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

void Function_26(int iParam0) //Position: 0xD6B / 3435
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
	Function_98(&(Global_29008[iParam0]), 4096);
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

float Function_27(int iParam0) //Position: 0xE6A / 3690
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_28(int iParam0) //Position: 0xEA7 / 3751
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xEE0 / 3808
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

var Function_30(int iParam0) //Position: 0xF47 / 3911
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xF9F / 3999
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

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x11BF / 4543
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

var Function_33() //Position: 0x17EC / 6124
{
	int iVar0;
	
	return iVar0;
}

var Function_34(int iParam0) //Position: 0x17F4 / 6132
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1805 / 6149
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

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x18FA / 6394
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1913 / 6419
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x1978 / 6520
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x198A / 6538
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x199C / 6556
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

int Function_41(int iParam0) //Position: 0x1ACC / 6860
{
	return Global_35278[iParam020].f_48;
}

void Function_42(int iParam0) //Position: 0x1ADB / 6875
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

int Function_43(int iParam0, float fParam1, bool bParam2) //Position: 0x1C75 / 7285
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

void Function_44(var uParam0, int iParam1) //Position: 0x1EB9 / 7865
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_45(struct<5> Param0) //Position: 0x1EC6 / 7878
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1EEC / 7916
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
			SET_CRIME_WITNESSED(bVar3, 1);
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

void Function_47() //Position: 0x217C / 8572
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

void Function_48(bool bParam0, bool bParam1) //Position: 0x21DF / 8671
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

bool Function_49(bool bParam0) //Position: 0x220E / 8718
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

int Function_50(int iParam0) //Position: 0x2284 / 8836
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_51() //Position: 0x2295 / 8853
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

bool Function_52(int iParam0) //Position: 0x22AE / 8878
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_53(int iParam0) //Position: 0x22C4 / 8900
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_54() //Position: 0x22D9 / 8921
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_55(int iParam0) //Position: 0x22E2 / 8930
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2300 / 8960
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

void Function_57(int iParam0, int iParam1) //Position: 0x23A4 / 9124
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_58(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x23B5 / 9141
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
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_10(StackVal, bVar1, bParam4);
		}
	}
}

void Function_59(int iParam0, int iParam1) //Position: 0x2427 / 9255
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_13(iParam0);
	Function_12(iVar0);
	PRINTNL();
	Function_10(iParam0, iVar0, iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x244C / 9292
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

bool Function_61(int iParam0) //Position: 0x2469 / 9321
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x2485 / 9349
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(int iParam0) //Position: 0x249A / 9370
{
	iParam0 = iParam0;
	if (!iLocal_939)
	{
		if (Function_64(1, Global_30628[2]))
		{
			iLocal_939 = 1;
		}
	}
	return;
}

bool Function_64(bool bParam0, int iParam1) //Position: 0x24BC / 9404
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

void Function_65(bool bParam0, float fParam1) //Position: 0x25DD / 9693
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

void Function_66(int iParam0) //Position: 0x261B / 9755
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

void Function_67(bool bParam0, bool bParam1) //Position: 0x26AD / 9901
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

var Function_68() //Position: 0x27A7 / 10151
{
	return Local_6;
}

void Function_69(int iParam0) //Position: 0x27AF / 10159
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_70(bool bParam0) //Position: 0x27C2 / 10178
{
	Function_71(StackVal, 0, 0.25f, 0, Local_6, !Function_75(&Global_30668));
	return;
}

void Function_71(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x27E4 / 10212
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
		Function_74();
	}
	if (bParam5)
	{
		Function_72(1048576);
	}
}

void Function_72(int iParam0) //Position: 0x28F7 / 10487
{
	Function_73(&Global_28842, iParam0);
	return;
}

void Function_73(var uParam0, var uParam1) //Position: 0x2905 / 10501
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_74() //Position: 0x2920 / 10528
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_72(16384);
	}
	return;
}

bool Function_75(int iParam0) //Position: 0x293C / 10556
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

bool Function_76(int iParam0) //Position: 0x2989 / 10633
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
		return Function_75(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_75(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_75(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_75(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_75(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_75(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_75(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_75(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_75(&Global_30717);
	}
	return 0;
}

void Function_77(int iParam0) //Position: 0x2A66 / 10854
{
	iParam0 = iParam0;
	return;
}

void Function_78(var uParam0, int iParam1) //Position: 0x2A70 / 10864
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_79(int iParam0, int iParam1) //Position: 0x2A87 / 10887
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_80() //Position: 0x2AA3 / 10915
{
	return;
}

void Function_81(var uParam0) //Position: 0x2AA9 / 10921
{
	uParam0 = uParam0;
	return;
}

void Function_82() //Position: 0x2AB3 / 10931
{
	Function_83(Global_30628[2]);
	Global_29004 = 0;
	return;
}

void Function_83(int iParam0) //Position: 0x2AC6 / 10950
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

bool Function_84(var uParam0, int iParam1) //Position: 0x2CFE / 11518
{
	return (uParam0 && iParam1) == 0;
}

int Function_85(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2D0B / 11531
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

int Function_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2D69 / 11625
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

int Function_87(int iParam0) //Position: 0x2EBE / 11966
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

bool Function_88(int iParam0) //Position: 0x2EFC / 12028
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_89(int iParam0, int iParam1, bool bParam2) //Position: 0x2F11 / 12049
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_90() //Position: 0x2F31 / 12081
{
	return 1;
}

void Function_91(int iParam0) //Position: 0x2F38 / 12088
{
	Function_93(StackVal, &uLocal_3, &uLocal_932, 2, 4294967295, 0);
	Function_93(&uLocal_3, &uLocal_932, 5, Local_180.f_428, 4294967295, 0);
	Function_92(Local_180.f_428, 20);
	return;
}

void Function_92(bool bParam0, bool bParam1) //Position: 0x2F6C / 12140
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

void Function_93(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x2FD3 / 12243
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

void Function_94(var uParam0) //Position: 0x30AE / 12462
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_95() //Position: 0x30BD / 12477
{
	if (Function_96())
	{
		HORSE_ADD_REPULSION_EXCLUSION_VOLUME(Local_180.f_368);
		return 1;
	}
	return 0;
}

bool Function_96() //Position: 0x30D5 / 12501
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = uVar0;
	Local_180 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(Local_180))
	{
		Local_180 = CREATE_LAYOUT("HennigansStead_layout");
	}
	Local_180.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "hgnv_flk_NE_NW_set");
	(*&Local_180 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "wolfs26", 3, -1546.43f, 97.38037f, 1853.78f, 0.0f, 26.73163f, 0.0f, 56.72965f, 109.8061f, 128.395f);
	ADD_TO_VOLUME_SET(Local_180.f_36, (*&Local_180 + 4)[0]);
	(*&Local_180 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_180, "wolfs25", 3, -1628.388f, 132.5176f, 2159.78f, 0.0f, 20.0f, 0.0f, 52.97129f, 102.6874f, 102.6874f);
	ADD_TO_VOLUME_SET(Local_180.f_36, (*&Local_180 + 4)[1]);
	(*&Local_180 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_180, "wolfs24", 3, -95.91358f, 83.8786f, 2326.572f, 0.0f, 14.49333f, 0.0f, 187.8941f, 82.59116f, 56.21016f);
	ADD_TO_VOLUME_SET(Local_180.f_36, (*&Local_180 + 4)[2]);
	(*&Local_180 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_180, "wolf4", 3, -669.6195f, 82.32153f, 2243.572f, 0.0f, -25.1136f, 0.0f, 77.45664f, 61.52451f, 61.12249f);
	ADD_TO_VOLUME_SET(Local_180.f_36, (*&Local_180 + 4)[3]);
	(*&Local_180 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_180, "wolf3", 3, -641.6283f, 105.2476f, 2147.894f, 0.0f, -25.1136f, 0.0f, 63.94891f, 61.52451f, 37.62522f);
	ADD_TO_VOLUME_SET(Local_180.f_36, (*&Local_180 + 4)[4]);
	(*&Local_180 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_180, "wolf2", 3, -1244.821f, 109.2441f, 1986.66f, 0.0f, 74.82964f, 0.0f, 61.50541f, 61.52451f, 292.1641f);
	ADD_TO_VOLUME_SET(Local_180.f_36, (*&Local_180 + 4)[5]);
	(*&Local_180 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_180, "wolf1", 3, -978.507f, 90.53821f, 2145.038f, 0.0f, -25.1136f, 0.0f, 81.73277f, 61.52451f, 61.52451f);
	ADD_TO_VOLUME_SET(Local_180.f_36, (*&Local_180 + 4)[6]);
	Local_180.f_104 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "hgnv_flk_ALL_set");
	(*&Local_180 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes1", 3, -168.285f, 121.9097f, 2701.151f, 0.0f, 6.717595f, 0.0f, 213.5704f, 78.37719f, 73.07709f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[0]);
	(*&Local_180 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes2", 3, -1126.763f, 114.2393f, 2588.604f, 0.0f, 20.0f, 0.0f, 146.5656f, 74.16763f, 188.0626f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[1]);
	(*&Local_180 + 40)[2] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes3", 3, -1389.948f, 116.4549f, 2801.983f, 0.0f, 96.61452f, 0.0f, 171.6007f, 56.67553f, 76.86866f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[2]);
	(*&Local_180 + 40)[3] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes4", 3, -1579.845f, 101.3961f, 2518.945f, 0.0f, 48.37656f, 0.0f, 38.0601f, 28.90815f, 53.12041f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[3]);
	(*&Local_180 + 40)[4] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes5", 3, -1414.897f, 98.38428f, 2511.757f, 0.0f, 20.0f, 0.0f, 80.8248f, 24.70572f, 32.38042f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[4]);
	(*&Local_180 + 40)[5] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes6", 3, -1514.231f, 101.3961f, 2560.085f, 0.0f, -3.53844f, 0.0f, 25.17345f, 17.08007f, 21.68644f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[5]);
	(*&Local_180 + 40)[6] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes7", 3, -1326.246f, 97.38037f, 2249.009f, 0.0f, 20.0f, 0.0f, 184.2568f, 57.90978f, 203.9913f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[6]);
	(*&Local_180 + 40)[7] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes8", 3, -1608.0f, 125.5505f, 1980f, 0.0f, 33.98433f, 0.0f, 66.48834f, 39.50645f, 203.3061f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[7]);
	(*&Local_180 + 40)[8] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyotes9", 3, -1957.161f, 101.5846f, 1828.827f, 0.0f, -14.7906f, 0.0f, 249.577f, 128.3171f, 61.17927f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[8]);
	(*&Local_180 + 40)[9] = CREATE_VOLUME_IN_LAYOUT(Local_180, "ncoyotes10", 3, -450.4749f, 109.7193f, 2320.553f, 0.0f, -10.25944f, 0.0f, 170.8267f, 69.64325f, 122.3093f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[9]);
	(*&Local_180 + 40)[10] = CREATE_VOLUME_IN_LAYOUT(Local_180, "ncoyotes11", 3, -870.6578f, 120.6339f, 2242.882f, 0.0f, 20.0f, 0.0f, 137.9932f, 31.99745f, 55.90967f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[10]);
	(*&Local_180 + 40)[11] = CREATE_VOLUME_IN_LAYOUT(Local_180, "ncoyotes12", 3, -26.85835f, 73.28625f, 2445.993f, 0.0f, 20.0f, 0.0f, 89.6356f, 74.6244f, 57.78758f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[11]);
	(*&Local_180 + 40)[12] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyote3", 3, -705.2985f, 31.27967f, 2881.13f, 0.0f, 12.9101f, 0.0f, 168.8916f, 70.98837f, 54.45016f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[12]);
	(*&Local_180 + 40)[13] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyote2", 3, -1281.534f, 43.7626f, 3124.979f, 0.0f, 20.0f, 0.0f, 133.0771f, 70.98837f, 61.59326f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[13]);
	(*&Local_180 + 40)[14] = CREATE_VOLUME_IN_LAYOUT(Local_180, "coyote1", 3, -1548.017f, 43.7626f, 2987.519f, 0.0f, -38.60177f, 0.0f, 199.5057f, 70.98837f, 99.28436f);
	ADD_TO_VOLUME_SET(Local_180.f_104, (*&Local_180 + 40)[14]);
	Local_180.f_128 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "hgnv_BIRDS_set");
	(*&Local_180 + 108)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "birds4", 3, -33.64362f, 84.32941f, 2378.274f, 0.0f, 20.0f, 0.0f, 522.6793f, 135.1033f, 429.8304f);
	ADD_TO_VOLUME_SET(Local_180.f_128, (*&Local_180 + 108)[0]);
	(*&Local_180 + 108)[1] = CREATE_VOLUME_IN_LAYOUT(Local_180, "birds3", 3, -638.519f, 89.349f, 2563.405f, 0.0f, 20.0f, 0.0f, 522.6793f, 135.1033f, 591.4594f);
	ADD_TO_VOLUME_SET(Local_180.f_128, (*&Local_180 + 108)[1]);
	(*&Local_180 + 108)[2] = CREATE_VOLUME_IN_LAYOUT(Local_180, "birds2", 3, -1265.749f, 93.1955f, 2163.575f, 0.0f, 20.0f, 0.0f, 522.6793f, 135.1033f, 429.8304f);
	ADD_TO_VOLUME_SET(Local_180.f_128, (*&Local_180 + 108)[2]);
	(*&Local_180 + 108)[3] = CREATE_VOLUME_IN_LAYOUT(Local_180, "birds1", 3, -1082.411f, 96.37646f, 2811.352f, 0.0f, 20.0f, 0.0f, 522.6793f, 135.1033f, 429.8304f);
	ADD_TO_VOLUME_SET(Local_180.f_128, (*&Local_180 + 108)[3]);
	Local_180.f_132 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_corr_g", 3, -919.4725f, 93.44283f, 2380.834f, 0.0f, 20.0f, 0.0f, 21.77287f, 5.26564f, 24.40062f);
	Local_180.f_136 = CREATE_VOLUME_IN_LAYOUT(Local_180, "nhgnv_ng_g", 2, -861.9213f, 90.67301f, 2456.731f, 0.0f, 20.98884f, -0.355489f, 12.13512f, 8.652277f, 36.94154f);
	Local_180.f_140 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g1", 2, -783.8423f, 90.3952f, 2399.794f, 0.0f, -37.76251f, -0.355489f, 21.45912f, 15.55698f, 28.28264f);
	Local_180.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g2", 2, -824.0499f, 89.96601f, 2430.379f, 0.0f, -15.44712f, -0.355489f, 14.39529f, 15.55698f, 16.9643f);
	Local_180.f_148 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g3", 2, -843.5833f, 89.96601f, 2460.735f, 0.0f, 19.71824f, -0.355489f, 20.80103f, 15.55698f, 30.64089f);
	Local_180.f_152 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g4", 2, -957.7906f, 89.96601f, 2422.677f, 0.0f, 21.25423f, -0.355489f, 20.93081f, 15.55698f, 38.45191f);
	Local_180.f_156 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g5", 3, -823.7832f, 93.44283f, 2375.945f, 0.0f, 20.0f, 0.0f, 24.1193f, 5.26564f, 27.03024f);
	Local_180.f_160 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g6", 2, -879.0945f, 91.02522f, 2430.412f, 0.0f, 20.98884f, -0.355489f, 6.678232f, 6.105186f, 6.992032f);
	Local_180.f_164 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g7", 2, -888.8362f, 91.11685f, 2433.847f, 0.0f, 20.98884f, -0.355489f, 5.146282f, 5.805651f, 6.648986f);
	Local_180.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g8", 2, -907.2183f, 91.10203f, 2440.071f, 0.0f, 20.98884f, -0.355489f, 19.88898f, 5.805651f, 5.396366f);
	Local_180.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_180, "nhgnv_yg_g", 2, -891.7211f, 89.96601f, 2415.688f, 0.0f, -62.1231f, -0.355489f, 21.93415f, 15.55698f, 89.95455f);
	Local_180.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g10", 2, -965.2615f, 90.6857f, 2466.688f, 0.0f, -29.91364f, -0.355489f, 10.95652f, 6.128434f, 10.16233f);
	Local_180.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_ng_g11", 2, -977.4526f, 90.6857f, 2446.704f, 0.0f, 86.50684f, -0.355489f, 10.95652f, 6.128434f, 10.16233f);
	Local_180.f_228 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "hgnv_flk_SE_set");
	(*&Local_180 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses9", 3, -1252.915f, 115.5038f, 2776.96f, 0.0f, 20.0f, 0.0f, 53.69228f, 241.5724f, 159.1528f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[0]);
	(*&Local_180 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses8", 3, -683.7336f, 101.3961f, 2504.357f, 0.0f, 20.0f, 0.0f, 108.5375f, 241.5724f, 73.36443f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[1]);
	(*&Local_180 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses7", 3, -206.5182f, 107.4196f, 2489.549f, 0.0f, 20.0f, 0.0f, 95.45268f, 241.5724f, 89.9445f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[2]);
	(*&Local_180 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses6", 3, -1068.474f, 97.64758f, 2288.876f, 0.0f, 13.47815f, 0.0f, 62.59843f, 166.692f, 146.1641f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[3]);
	(*&Local_180 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses5", 3, -1356.155f, 105.5688f, 2589.477f, 0.0f, 89.71684f, 0.0f, 59.19648f, 167.1936f, 62.71087f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[4]);
	(*&Local_180 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses4", 3, -929.6819f, 99.90509f, 2698.564f, 0.0f, 4.474324f, 0.0f, 241.5724f, 241.5724f, 136.8911f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[5]);
	(*&Local_180 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses3", 3, -453.3163f, 110.2287f, 2913.625f, 0.0f, 20.0f, 0.0f, 206.5026f, 241.5724f, 75.11042f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[6]);
	(*&Local_180 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses2", 3, 55.33076f, 91.35687f, 2562.685f, 0.0f, -4.355933f, 0.0f, 152.0613f, 241.5724f, 75.9871f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[7]);
	(*&Local_180 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses1", 3, -909.8542f, 30.11766f, 3047.201f, 0.0f, 18.27707f, 0.0f, 278.4159f, 241.5724f, 53.45417f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[8]);
	(*&Local_180 + 184)[9] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_wild_horses10", 3, -471.0976f, 108.2639f, 2622.838f, 2.126057f, 30.47574f, 5.442584f, 135.5817f, 68.29441f, 122.8929f);
	ADD_TO_VOLUME_SET(Local_180.f_228, (*&Local_180 + 184)[9]);
	Local_180.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_blackHorse", 3, -591.0882f, 109.6251f, 2680.91f, 0.0f, 20.0f, 0.0f, 11.34726f, 11.34726f, 11.34726f);
	Local_180.f_236 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea", 3, -823.0997f, 93.45189f, 2375.409f, 0.0f, 14.89016f, 0.0f, 21.89399f, 8.244097f, 25.59612f);
	Local_180.f_240 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea1", 2, -842.5452f, 94.04724f, 2460.788f, 0.0f, 22.15306f, 0.0f, 27.05575f, 13.7937f, 31.79581f);
	Local_180.f_244 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea2", 3, -824.0959f, 94.57282f, 2427.253f, 0.0f, -32.35684f, 0.0f, 21.1792f, 10.17107f, 15.41338f);
	Local_180.f_248 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea3", 3, -783.6304f, 97.11323f, 2399.24f, 0.0f, -32.8998f, 0.0f, 13.45809f, 9.658726f, 15.57873f);
	Local_180.f_252 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgv_nwreturn", 2, -824.5424f, 98.57576f, 2431.177f, 0.0f, -15.53175f, 0.0f, 8.046127f, 3.443669f, 8.918226f);
	Local_180.f_256 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea4", 2, -897.3228f, 94.61942f, 2435.878f, 0.0f, 21.06976f, 0.0f, 47.62032f, 15.94985f, 16.65399f);
	Local_180.f_260 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea5", 2, -889.1013f, 94.61942f, 2397.852f, 0.0f, 29.61621f, 0.0f, 47.62032f, 15.94985f, 18.31907f);
	Local_180.f_264 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea6", 2, -872.9827f, 93.44815f, 2349.158f, 0.0f, -58.25443f, 0.0f, 44.3011f, 15.94985f, 15.19241f);
	Local_180.f_268 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_nwarea7", 3, -861.7238f, 95.68819f, 2380.121f, 0.0f, 20.0f, 0.0f, 9.669715f, 6.168983f, 10.11579f);
	Local_180.f_272 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_cougarVol", 2, -500.1792f, 110.2059f, 2908.145f, 0.0f, 0.0f, 0.0f, 705.1399f, 157.6671f, 343.9255f);
	Local_180.f_284 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "BridgeNoSpawn_set");
	(*&Local_180 + 276)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Box", 2, 28.88792f, 95.09991f, 2737.801f, 0.0f, -55.5507f, 0.0f, 46.82572f, 65.73853f, 21.10844f);
	ADD_TO_VOLUME_SET(Local_180.f_284, (*&Local_180 + 276)[0]);
	Local_180.f_364 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "hgnv_aquaticWildlife_set");
	(*&Local_180 + 288)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder", 3, -1512.764f, 8.039202f, 3292.98f, 0.0f, 20.0f, 0.0f, 84.79319f, 60.33804f, 60.33804f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[0]);
	(*&Local_180 + 288)[1] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder1", 3, -1346.899f, 9.043137f, 3234.699f, 0.0f, 20.0f, 0.0f, 205.4157f, 60.33804f, 39.8123f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[1]);
	(*&Local_180 + 288)[2] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder2", 3, -1089.253f, 10.04872f, 3186.707f, 0.0f, 70.81681f, 0.0f, 35.98895f, 60.33804f, 106.7133f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[2]);
	(*&Local_180 + 288)[3] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder3", 3, -994.1088f, 10.04705f, 3208.598f, 0.0f, 70.81681f, 0.0f, 59.6558f, 51.61178f, 60.13989f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[3]);
	(*&Local_180 + 288)[4] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder4", 3, -839.1843f, 3.615696f, 3117.664f, 0.0f, 119.4781f, 0.0f, 44.35005f, 74.22896f, 154.3542f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[4]);
	(*&Local_180 + 288)[5] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder5", 3, -637.1089f, 24.74285f, 3041.886f, 0.0f, 119.4781f, 0.0f, 88.07926f, 34.47046f, 90.22388f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[5]);
	(*&Local_180 + 288)[6] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder6", 3, -470.0913f, 14.73549f, 2999.796f, 0.0f, 99.98062f, 0.0f, 37.44569f, 39.02574f, 118.2715f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[6]);
	(*&Local_180 + 288)[7] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder7", 3, -369.1953f, 21.65845f, 2903.82f, 0.0f, 99.98062f, 0.0f, 64.58783f, 35.06966f, 60.56346f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[7]);
	(*&Local_180 + 288)[8] = CREATE_VOLUME_IN_LAYOUT(Local_180, "nCylinder8", 3, -250.8742f, 17.47171f, 2865.07f, 0.0f, 138.2915f, 0.0f, 34.61906f, 35.32534f, 102.2345f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[8]);
	(*&Local_180 + 288)[9] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder18", 3, 197.6258f, 75.37587f, 2436.369f, 0.0f, 244.9178f, 0.0f, 25.2479f, 39.10424f, 45.45464f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[9]);
	(*&Local_180 + 288)[10] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder20", 3, 272.2747f, 69.27057f, 2027.005f, 0.0f, 169.8044f, 0.0f, 98.88961f, 21.28149f, 112.3064f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[10]);
	(*&Local_180 + 288)[11] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder21", 3, 215.6241f, 78.14816f, 2367.177f, 0.0f, 198.4123f, 0.0f, 33.27529f, 15.48362f, 46.38807f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[11]);
	(*&Local_180 + 288)[12] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder22", 3, 113.125f, 76.65231f, 1968.507f, 0.0f, 169.8044f, 0.0f, 98.88961f, 21.28149f, 21.67072f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[12]);
	(*&Local_180 + 288)[13] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder23", 3, 85.59643f, 82.13325f, 2163.788f, 0.0f, 151.2728f, 0.0f, 98.88961f, 21.28149f, 21.67072f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[13]);
	(*&Local_180 + 288)[14] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder24", 3, -109.6845f, 79.79099f, 2126.796f, 0.0f, 195.8334f, 0.0f, 98.88961f, 21.28149f, 21.67072f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[14]);
	(*&Local_180 + 288)[15] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder25", 3, -47.7452f, 77.93546f, 2041.63f, 0.0f, 195.8334f, 0.0f, 25.03891f, 21.28149f, 73.96124f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[15]);
	(*&Local_180 + 288)[16] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder26", 3, -10.75366f, 74.62328f, 1963.345f, 0.0f, 195.8334f, 0.0f, 53.70681f, 21.28149f, 20.89974f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[16]);
	(*&Local_180 + 288)[17] = CREATE_VOLUME_IN_LAYOUT(Local_180, "Cylinder27", 3, -16.77554f, 77.93485f, 2119.054f, 0.0f, 181.4433f, 0.0f, 53.70681f, 21.28149f, 15.84347f);
	ADD_TO_VOLUME_SET(Local_180.f_364, (*&Local_180 + 288)[17]);
	Local_180.f_368 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_RepulsionExclusion", 3, -644.2127f, 88.45143f, 2749.292f, 8.640414f, 24.33359f, 0.0f, 26.2284f, 3.865706f, 72.83427f);
	Local_180.f_384 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "hgnv_null_set");
	(*&Local_180 + 372)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_null_01", 2, -1466.12f, 112.8202f, 1971.609f, 0.0f, 64.5147f, 0.0f, 26.26892f, 35.53505f, 173.8512f);
	ADD_TO_VOLUME_SET(Local_180.f_384, (*&Local_180 + 372)[0]);
	(*&Local_180 + 372)[1] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_null_02", 2, -1315.409f, 112.8202f, 2024.83f, 0.0f, 76.49454f, 0.0f, 26.26892f, 35.53505f, 155.8071f);
	ADD_TO_VOLUME_SET(Local_180.f_384, (*&Local_180 + 372)[1]);
	Local_180.f_388 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_bhstop", 2, -820.3679f, 93.44864f, 2420.626f, 0.0f, -103.272f, 0.0f, 8.879921f, 7.344114f, 14.69935f);
	Local_180.f_392 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_war_livestock", 3, -874.9012f, 103.3879f, 2724.43f, 0.0f, 20.0f, 0.0f, 48.11292f, 10.95262f, 60.75099f);
	Local_180.f_396 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_war_chickens", 3, -950.9265f, 104.3524f, 2732.826f, 0.0f, -32.87181f, 0.0f, 14.70139f, 7.72267f, 43.17991f);
	Local_180.f_400 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_war_pigs", 3, -923.754f, 102.1641f, 2758.016f, 0.0f, -53.44098f, 0.0f, 2.831347f, 1.874195f, 4.532186f);
	Local_180.f_404 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_war_barn", 2, -929.8949f, 100.7226f, 2750.85f, 0.0f, 35.14248f, 0.0f, 8.754588f, 8.754588f, 11.38631f);
	Local_180.f_408 = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_bacc_chickens", 3, 113.4888f, 72.84962f, 2673.31f, 0.0f, 20.0f, 0.0f, 9.261682f, 3.104064f, 3.87598f);
	Local_180.f_428 = CREATE_VOLUME_SET_IN_LAYOUT(Local_180, "hgnv_weather_set");
	(*&Local_180 + 412)[0] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_weather02", 2, -1615.721f, 99.44508f, 1904.794f, -3.439431f, 66.95576f, 0.0f, 31.94579f, 41.12966f, 275.6443f);
	ADD_TO_VOLUME_SET(Local_180.f_428, (*&Local_180 + 412)[0]);
	(*&Local_180 + 412)[1] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_weather03", 2, -1441.342f, 109.7487f, 1979.218f, -3.439431f, 66.95576f, 0.0f, 31.94579f, 25.6088f, 124.293f);
	ADD_TO_VOLUME_SET(Local_180.f_428, (*&Local_180 + 412)[1]);
	(*&Local_180 + 412)[2] = CREATE_VOLUME_IN_LAYOUT(Local_180, "hgnv_weather04", 2, -1366.98f, 115.8711f, 2011.337f, 0.0f, 69.65112f, 0.0f, 21.31541f, 19.58715f, 85.85076f);
	ADD_TO_VOLUME_SET(Local_180.f_428, (*&Local_180 + 412)[2]);
	*(&Local_180 + 432) = { -886.204f, 110.4f, 2618.948f };
	*(&Local_180 + 432 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_456 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_poi_sbridge", -886.204f, 110.4f, 2618.948f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 460) = { -764.0f, 103.6768f, 2239.9f };
	*(&Local_180 + 460 + 12) = { 0.0f, 157.5f, 0.0f };
	Local_180.f_484 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_poi_deadtrees", -764.0f, 103.6768f, 2239.9f, 0.0f, 157.5f, 0.0f);
	*(&Local_180 + 488) = { -595.187f, 100.689f, 2719.8f };
	*(&Local_180 + 488 + 12) = { 0.0f, 45.0f, 0.0f };
	Local_180.f_512 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_poi_covbridge", -595.187f, 100.689f, 2719.8f, 0.0f, 45.0f, 0.0f);
	*(&Local_180 + 516) = { -746.498f, 98.75f, 2627.884f };
	*(&Local_180 + 516 + 12) = { 0.0f, 45.0f, 0.0f };
	Local_180.f_540 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_poi_4trees", -746.498f, 98.75f, 2627.884f, 0.0f, 45.0f, 0.0f);
	*(&Local_180 + 544) = { -511.67f, 90.115f, 2319.0f };
	*(&Local_180 + 544 + 12) = { 0.0f, 232.0f, 0.0f };
	Local_180.f_568 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_poi_swamp", -511.67f, 90.115f, 2319.0f, 0.0f, 232.0f, 0.0f);
	*(&Local_180 + 572) = { -1055.395f, 103.68f, 2699.0f };
	*(&Local_180 + 572 + 12) = { 0.0f, 348.0f, 0.0f };
	Local_180.f_596 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_poi_flat", -1055.395f, 103.68f, 2699.0f, 0.0f, 348.0f, 0.0f);
	*(&Local_180 + 600) = { -812.374f, 92.361f, 2382.59f };
	*(&Local_180 + 600 + 12) = { 0.0f, 130.801f, 0.0f };
	Local_180.f_624 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwway", -812.374f, 92.361f, 2382.59f, 0.0f, 130.801f, 0.0f);
	*(&Local_180 + 628) = { -844.9763f, 91.49334f, 2461.833f };
	*(&Local_180 + 628 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_652 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwway1", -844.9763f, 91.49334f, 2461.833f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 656) = { -782.2222f, 91.49334f, 2401.543f };
	*(&Local_180 + 656 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_680 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwway2", -782.2222f, 91.49334f, 2401.543f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 684) = { -821.5574f, 91.49334f, 2429.458f };
	*(&Local_180 + 684 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_708 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwway3", -821.5574f, 91.49334f, 2429.458f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 712) = { -938.82f, 90.324f, 2473.492f };
	*(&Local_180 + 712 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_736 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide", -938.82f, 90.324f, 2473.492f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 740) = { -863.548f, 91.637f, 2376.084f };
	*(&Local_180 + 740 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_764 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide1", -863.548f, 91.637f, 2376.084f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 768) = { -827.514f, 93.365f, 2439.583f };
	*(&Local_180 + 768 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_792 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide2", -827.514f, 93.365f, 2439.583f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 796) = { -837.127f, 90.353f, 2463.477f };
	*(&Local_180 + 796 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_820 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide3", -837.127f, 90.353f, 2463.477f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 824) = { -880.615f, 91.357f, 2334.385f };
	*(&Local_180 + 824 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_848 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide4", -880.615f, 91.357f, 2334.385f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 852) = { -815.535f, 91.255f, 2472.396f };
	*(&Local_180 + 852 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_876 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide5", -815.535f, 91.255f, 2472.396f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 880) = { -780.733f, 90.353f, 2440.178f };
	*(&Local_180 + 880 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_904 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide6", -780.733f, 90.353f, 2440.178f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 908) = { -821.183f, 92.361f, 2396.052f };
	*(&Local_180 + 908 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_932 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide7", -821.183f, 92.361f, 2396.052f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 936) = { -821.183f, 92.361f, 2396.052f };
	*(&Local_180 + 936 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_960 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide8", -821.183f, 92.361f, 2396.052f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 964) = { -785.799f, 93.365f, 2388.569f };
	*(&Local_180 + 964 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_988 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide9", -785.799f, 93.365f, 2388.569f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 992) = { -793.778f, 93.365f, 2362.382f };
	*(&Local_180 + 992 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_1016 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide10", -793.778f, 93.365f, 2362.382f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 1020) = { -814.774f, 92.361f, 2344.782f };
	*(&Local_180 + 1020 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_1044 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide11", -814.774f, 92.361f, 2344.782f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 1048) = { -893.606f, 91.357f, 2402.228f };
	*(&Local_180 + 1048 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_1072 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide12", -893.606f, 91.357f, 2402.228f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 1076) = { 0.0f, 0.0f, 0.0f };
	*(&Local_180 + 1076 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_1100 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide13", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 1104) = { -836.39f, 90.353f, 2457.28f };
	*(&Local_180 + 1104 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_1128 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide14", -836.39f, 90.353f, 2457.28f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 1132) = { -823.243f, 90.353f, 2475.886f };
	*(&Local_180 + 1132 + 12) = { 0.0f, 171.4f, 0.0f };
	Local_180.f_1156 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide15", -823.243f, 90.353f, 2475.886f, 0.0f, 171.4f, 0.0f);
	*(&Local_180 + 1160) = { -831.904f, 92.361f, 2362.93f };
	*(&Local_180 + 1160 + 12) = { 0.0f, 186.386f, 0.0f };
	Local_180.f_1184 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide16", -831.904f, 92.361f, 2362.93f, 0.0f, 186.386f, 0.0f);
	*(&Local_180 + 1188) = { -836.39f, 90.353f, 2457.28f };
	*(&Local_180 + 1188 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_1212 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide17", -836.39f, 90.353f, 2457.28f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 1216) = { -846.081f, 90.353f, 2477.001f };
	*(&Local_180 + 1216 + 12) = { 0.0f, 282.006f, 0.0f };
	Local_180.f_1240 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide18", -846.081f, 90.353f, 2477.001f, 0.0f, 282.006f, 0.0f);
	*(&Local_180 + 1244) = { -851.076f, 90.353f, 2451.747f };
	*(&Local_180 + 1244 + 12) = { 0.0f, 182.407f, 0.0f };
	Local_180.f_1268 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide19", -851.076f, 90.353f, 2451.747f, 0.0f, 182.407f, 0.0f);
	*(&Local_180 + 1272) = { -852.568f, 90.353f, 2448.739f };
	*(&Local_180 + 1272 + 12) = { 0.0f, 93.77f, 0.0f };
	Local_180.f_1296 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide20", -852.568f, 90.353f, 2448.739f, 0.0f, 93.77f, 0.0f);
	*(&Local_180 + 1300) = { -830.179f, 90.353f, 2448.349f };
	*(&Local_180 + 1300 + 12) = { 0.0f, 143.138f, 0.0f };
	Local_180.f_1324 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide21", -830.179f, 90.353f, 2448.349f, 0.0f, 143.138f, 0.0f);
	*(&Local_180 + 1328) = { -856.616f, 90.353f, 2452.78f };
	*(&Local_180 + 1328 + 12) = { 0.0f, 75.853f, 0.0f };
	Local_180.f_1352 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide22", -856.616f, 90.353f, 2452.78f, 0.0f, 75.853f, 0.0f);
	*(&Local_180 + 1356) = { -829.59f, 93.365f, 2430.77f };
	*(&Local_180 + 1356 + 12) = { 0.0f, 93.027f, 0.0f };
	Local_180.f_1380 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide23", -829.59f, 93.365f, 2430.77f, 0.0f, 93.027f, 0.0f);
	*(&Local_180 + 1384) = { -810.973f, 93.365f, 2440.708f };
	*(&Local_180 + 1384 + 12) = { 0.0f, 91.635f, 0.0f };
	Local_180.f_1408 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide24", -810.973f, 93.365f, 2440.708f, 0.0f, 91.635f, 0.0f);
	*(&Local_180 + 1412) = { -803.359f, 91.357f, 2448.251f };
	*(&Local_180 + 1412 + 12) = { 0.0f, 17.835f, 0.0f };
	Local_180.f_1436 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide25", -803.359f, 91.357f, 2448.251f, 0.0f, 17.835f, 0.0f);
	*(&Local_180 + 1440) = { -772.11f, 93.365f, 2411.111f };
	*(&Local_180 + 1440 + 12) = { 0.0f, 127.188f, 0.0f };
	Local_180.f_1464 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide26", -772.11f, 93.365f, 2411.111f, 0.0f, 127.188f, 0.0f);
	*(&Local_180 + 1468) = { -773.476f, 93.365f, 2397.437f };
	*(&Local_180 + 1468 + 12) = { 0.0f, 250.683f, 0.0f };
	Local_180.f_1492 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide27", -773.476f, 93.365f, 2397.437f, 0.0f, 250.683f, 0.0f);
	*(&Local_180 + 1496) = { -779.747f, 93.365f, 2388.024f };
	*(&Local_180 + 1496 + 12) = { 0.0f, 63.328f, 0.0f };
	Local_180.f_1520 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide28", -779.747f, 93.365f, 2388.024f, 0.0f, 63.328f, 0.0f);
	*(&Local_180 + 1524) = { -776.103f, 93.365f, 2371.667f };
	*(&Local_180 + 1524 + 12) = { 0.0f, 206.97f, 0.0f };
	Local_180.f_1548 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide29", -776.103f, 93.365f, 2371.667f, 0.0f, 206.97f, 0.0f);
	*(&Local_180 + 1552) = { -761.763f, 93.388f, 2380.605f };
	*(&Local_180 + 1552 + 12) = { 0.0f, 97.728f, 0.0f };
	Local_180.f_1576 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide30", -761.763f, 93.388f, 2380.605f, 0.0f, 97.728f, 0.0f);
	*(&Local_180 + 1580) = { -816.417f, 92.361f, 2354.328f };
	*(&Local_180 + 1580 + 12) = { 0.0f, 3.285f, 0.0f };
	Local_180.f_1604 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide31", -816.417f, 92.361f, 2354.328f, 0.0f, 3.285f, 0.0f);
	*(&Local_180 + 1608) = { -826.99f, 92.361f, 2358.85f };
	*(&Local_180 + 1608 + 12) = { 0.0f, 295.112f, 0.0f };
	Local_180.f_1632 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide32", -826.99f, 92.361f, 2358.85f, 0.0f, 295.112f, 0.0f);
	*(&Local_180 + 1636) = { -830.217f, 92.361f, 2370.55f };
	*(&Local_180 + 1636 + 12) = { 0.0f, 296.989f, 0.0f };
	Local_180.f_1660 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide33", -830.217f, 92.361f, 2370.55f, 0.0f, 296.989f, 0.0f);
	*(&Local_180 + 1664) = { -833.169f, 93.365f, 2419.737f };
	*(&Local_180 + 1664 + 12) = { 0.0f, 97.728f, 0.0f };
	Local_180.f_1688 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide34", -833.169f, 93.365f, 2419.737f, 0.0f, 97.728f, 0.0f);
	*(&Local_180 + 1692) = { -846.112f, 90.353f, 2448.327f };
	*(&Local_180 + 1692 + 12) = { 0.0f, 294.464f, 0.0f };
	Local_180.f_1716 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide35", -846.112f, 90.353f, 2448.327f, 0.0f, 294.464f, 0.0f);
	*(&Local_180 + 1720) = { -833.234f, 90.353f, 2466.787f };
	*(&Local_180 + 1720 + 12) = { 0.0f, 216.919f, 0.0f };
	Local_180.f_1744 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide36", -833.234f, 90.353f, 2466.787f, 0.0f, 216.919f, 0.0f);
	*(&Local_180 + 1748) = { -852.955f, 90.353f, 2462.946f };
	*(&Local_180 + 1748 + 12) = { 0.0f, 65.891f, 0.0f };
	Local_180.f_1772 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide37", -852.955f, 90.353f, 2462.946f, 0.0f, 65.891f, 0.0f);
	*(&Local_180 + 1776) = { -839.771f, 90.353f, 2452.96f };
	*(&Local_180 + 1776 + 12) = { 0.0f, 80.427f, 0.0f };
	Local_180.f_1800 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide38", -839.771f, 90.353f, 2452.96f, 0.0f, 80.427f, 0.0f);
	*(&Local_180 + 1804) = { -834.559f, 90.353f, 2467.964f };
	*(&Local_180 + 1804 + 12) = { 0.0f, 53.542f, 0.0f };
	Local_180.f_1828 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide39", -834.559f, 90.353f, 2467.964f, 0.0f, 53.542f, 0.0f);
	*(&Local_180 + 1832) = { -875.748f, 90.353f, 2430.767f };
	*(&Local_180 + 1832 + 12) = { 0.0f, 267.975f, 0.0f };
	Local_180.f_1856 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide40", -875.748f, 90.353f, 2430.767f, 0.0f, 267.975f, 0.0f);
	*(&Local_180 + 1860) = { -879.926f, 90.353f, 2434.369f };
	*(&Local_180 + 1860 + 12) = { 0.0f, 73.407f, 0.0f };
	Local_180.f_1884 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide41", -879.926f, 90.353f, 2434.369f, 0.0f, 73.407f, 0.0f);
	*(&Local_180 + 1888) = { -889.26f, 90.353f, 2430.237f };
	*(&Local_180 + 1888 + 12) = { 0.0f, 24.138f, 0.0f };
	Local_180.f_1912 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide42", -889.26f, 90.353f, 2430.237f, 0.0f, 24.138f, 0.0f);
	*(&Local_180 + 1916) = { -893.963f, 91.357f, 2407.55f };
	*(&Local_180 + 1916 + 12) = { 0.0f, 192.133f, 0.0f };
	Local_180.f_1940 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide43", -893.963f, 91.357f, 2407.55f, 0.0f, 192.133f, 0.0f);
	*(&Local_180 + 1944) = { -916.777f, 90.353f, 2445.419f };
	*(&Local_180 + 1944 + 12) = { 0.0f, 81.945f, 0.0f };
	Local_180.f_1968 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide44", -916.777f, 90.353f, 2445.419f, 0.0f, 81.945f, 0.0f);
	*(&Local_180 + 1972) = { -888.983f, 91.071f, 2433.968f };
	*(&Local_180 + 1972 + 12) = { 0.0f, 16.7f, 0.0f };
	Local_180.f_1996 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide45", -888.983f, 91.071f, 2433.968f, 0.0f, 16.7f, 0.0f);
	*(&Local_180 + 2000) = { -905.077f, 91.357f, 2406.632f };
	*(&Local_180 + 2000 + 12) = { 0.0f, 317.433f, 0.0f };
	Local_180.f_2024 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide46", -905.077f, 91.357f, 2406.632f, 0.0f, 317.433f, 0.0f);
	*(&Local_180 + 2028) = { -873.142f, 91.357f, 2389.937f };
	*(&Local_180 + 2028 + 12) = { 0.0f, 359.911f, 0.0f };
	Local_180.f_2052 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide47", -873.142f, 91.357f, 2389.937f, 0.0f, 359.911f, 0.0f);
	*(&Local_180 + 2056) = { -867.391f, 91.357f, 2356.293f };
	*(&Local_180 + 2056 + 12) = { 0.0f, 162.898f, 0.0f };
	Local_180.f_2080 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide48", -867.391f, 91.357f, 2356.293f, 0.0f, 162.898f, 0.0f);
	*(&Local_180 + 2084) = { -863.874f, 91.357f, 2358.976f };
	*(&Local_180 + 2084 + 12) = { 0.0f, 299.451f, 0.0f };
	Local_180.f_2108 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide49", -863.874f, 91.357f, 2358.976f, 0.0f, 299.451f, 0.0f);
	*(&Local_180 + 2112) = { -854.504f, 91.357f, 2375.794f };
	*(&Local_180 + 2112 + 12) = { 0.0f, 312.773f, 0.0f };
	Local_180.f_2136 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide50", -854.504f, 91.357f, 2375.794f, 0.0f, 312.773f, 0.0f);
	*(&Local_180 + 2140) = { -867.942f, 91.357f, 2381.48f };
	*(&Local_180 + 2140 + 12) = { 0.0f, 105.366f, 0.0f };
	Local_180.f_2164 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide51", -867.942f, 91.357f, 2381.48f, 0.0f, 105.366f, 0.0f);
	*(&Local_180 + 2168) = { -792.25f, 93.365f, 2392.549f };
	*(&Local_180 + 2168 + 12) = { 0.0f, 55.064f, 0.0f };
	Local_180.f_2192 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide52", -792.25f, 93.365f, 2392.549f, 0.0f, 55.064f, 0.0f);
	*(&Local_180 + 2196) = { -784.179f, 93.364f, 2412.746f };
	*(&Local_180 + 2196 + 12) = { 0.0f, 216.828f, 0.0f };
	Local_180.f_2220 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_nwhide53", -784.179f, 93.364f, 2412.746f, 0.0f, 216.828f, 0.0f);
	*(&Local_180 + 2224) = { -609.421f, 58.313f, 2869.093f };
	*(&Local_180 + 2224 + 12) = { 0.0f, 334.865f, 0.0f };
	Local_180.f_2248 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar", -609.421f, 58.313f, 2869.093f, 0.0f, 334.865f, 0.0f);
	*(&Local_180 + 2252) = { -667.922f, 28.661f, 3009.792f };
	*(&Local_180 + 2252 + 12) = { 0.0f, 332.957f, 0.0f };
	Local_180.f_2276 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar1", -667.922f, 28.661f, 3009.792f, 0.0f, 332.957f, 0.0f);
	*(&Local_180 + 2280) = { -611.116f, 39.25f, 2937.017f };
	*(&Local_180 + 2280 + 12) = { 0.0f, 333.304f, 0.0f };
	Local_180.f_2304 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar2", -611.116f, 39.25f, 2937.017f, 0.0f, 333.304f, 0.0f);
	*(&Local_180 + 2308) = { -599.414f, 35.553f, 2978.019f };
	*(&Local_180 + 2308 + 12) = { 0.0f, 355.273f, 0.0f };
	Local_180.f_2332 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar3", -599.414f, 35.553f, 2978.019f, 0.0f, 355.273f, 0.0f);
	*(&Local_180 + 2336) = { -458.357f, 36.35f, 2963.933f };
	*(&Local_180 + 2336 + 12) = { 0.0f, 27.341f, 0.0f };
	Local_180.f_2360 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar4", -458.357f, 36.35f, 2963.933f, 0.0f, 27.341f, 0.0f);
	*(&Local_180 + 2364) = { -439.848f, 34.122f, 2981.26f };
	*(&Local_180 + 2364 + 12) = { 0.0f, 89.176f, 0.0f };
	Local_180.f_2388 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar5", -439.848f, 34.122f, 2981.26f, 0.0f, 89.176f, 0.0f);
	*(&Local_180 + 2392) = { -516.926f, 51.579f, 2863.099f };
	*(&Local_180 + 2392 + 12) = { 0.0f, 7.263f, 0.0f };
	Local_180.f_2416 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar6", -516.926f, 51.579f, 2863.099f, 0.0f, 7.263f, 0.0f);
	*(&Local_180 + 2420) = { -465.391f, 34.282f, 2934.764f };
	*(&Local_180 + 2420 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_2444 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar7", -465.391f, 34.282f, 2934.764f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 2448) = { -440.141f, 18.125f, 3015.614f };
	*(&Local_180 + 2448 + 12) = { 0.0f, 213.149f, 0.0f };
	Local_180.f_2472 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar8", -440.141f, 18.125f, 3015.614f, 0.0f, 213.149f, 0.0f);
	*(&Local_180 + 2476) = { -641.021f, 17.815f, 3025.635f };
	*(&Local_180 + 2476 + 12) = { 0.0f, 194.212f, 0.0f };
	Local_180.f_2500 = CREATE_POINT_IN_LAYOUT(Local_180, "hgnf_cougar9", -641.021f, 17.815f, 3025.635f, 0.0f, 194.212f, 0.0f);
	*(&Local_180 + 2504) = { -1084.182f, 100.4239f, 2907.834f };
	*(&Local_180 + 2504 + 12) = { 0.0f, 179.8879f, 0.0f };
	Local_180.f_2528 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuy_hgn1", -1084.182f, 100.4239f, 2907.834f, 0.0f, 179.8879f, 0.0f);
	*(&Local_180 + 2532) = { -1084f, 100.499f, 2904.0f };
	*(&Local_180 + 2532 + 12) = { 0.0f, 178.2066f, 0.0f };
	Local_180.f_2556 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingTree_hgn1", -1084f, 100.499f, 2904.0f, 0.0f, 178.2066f, 0.0f);
	*(&Local_180 + 2560) = { -1088f, 99.60892f, 2900f };
	*(&Local_180 + 2560 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_2584 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingHorses_hgn1", -1088f, 99.60892f, 2900f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 2588) = { -1084.182f, 100.4239f, 2910.447f };
	*(&Local_180 + 2588 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_2612 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard1_hgn1", -1084.182f, 100.4239f, 2910.447f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 2616) = { -1080.36f, 100.4441f, 2911.143f };
	*(&Local_180 + 2616 + 12) = { 0.0f, 53.31279f, 0.0f };
	Local_180.f_2640 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard2_hgn1", -1080.36f, 100.4441f, 2911.143f, 0.0f, 53.31279f, 0.0f);
	*(&Local_180 + 2644) = { -1084.43f, 101.0248f, 2914.738f };
	*(&Local_180 + 2644 + 12) = { 0.0f, -2.253904f, 0.0f };
	Local_180.f_2668 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard3_hgn1", -1084.43f, 101.0248f, 2914.738f, 0.0f, -2.253904f, 0.0f);
	*(&Local_180 + 2672) = { -872.724f, 41.23136f, 3070.519f };
	*(&Local_180 + 2672 + 12) = { 0.0f, 131.4123f, 0.0f };
	Local_180.f_2696 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuy_hgn2", -872.724f, 41.23136f, 3070.519f, 0.0f, 131.4123f, 0.0f);
	*(&Local_180 + 2700) = { -872.724f, 41.17292f, 3066.799f };
	*(&Local_180 + 2700 + 12) = { 0.0f, 180.8444f, 0.0f };
	Local_180.f_2724 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingTree_hgn2", -872.724f, 41.17292f, 3066.799f, 0.0f, 180.8444f, 0.0f);
	*(&Local_180 + 2728) = { -871.9998f, 41.21151f, 3064f };
	*(&Local_180 + 2728 + 12) = { 0.0f, -74.38534f, 0.0f };
	Local_180.f_2752 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingHorses_hgn2", -871.9998f, 41.21151f, 3064f, 0.0f, -74.38534f, 0.0f);
	*(&Local_180 + 2756) = { -875.0469f, 41.18454f, 3071.935f };
	*(&Local_180 + 2756 + 12) = { 0.0f, -59.64066f, 0.0f };
	Local_180.f_2780 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard1_hgn2", -875.0469f, 41.18454f, 3071.935f, 0.0f, -59.64066f, 0.0f);
	*(&Local_180 + 2784) = { -863.0834f, 40.15686f, 3068f };
	*(&Local_180 + 2784 + 12) = { 0.0f, 68.95885f, 0.0f };
	Local_180.f_2808 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard2_hgn2", -863.0834f, 40.15686f, 3068f, 0.0f, 68.95885f, 0.0f);
	*(&Local_180 + 2812) = { -862.2219f, 40.15686f, 3064.376f };
	*(&Local_180 + 2812 + 12) = { -4.386553f, 103.4417f, -1.514705f };
	Local_180.f_2836 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard3_hgn2", -862.2219f, 40.15686f, 3064.376f, -4.386553f, 103.4417f, -1.514705f);
	*(&Local_180 + 2840) = { -113.557f, 101.4211f, 2775.839f };
	*(&Local_180 + 2840 + 12) = { 0.0f, 176.8049f, 0.0f };
	Local_180.f_2864 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuy_hgn3", -113.557f, 101.4211f, 2775.839f, 0.0f, 176.8049f, 0.0f);
	*(&Local_180 + 2868) = { -113.557f, 101.4299f, 2772f };
	*(&Local_180 + 2868 + 12) = { 0.0f, 184.0346f, 0.0f };
	Local_180.f_2892 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingTree_hgn3", -113.557f, 101.4299f, 2772f, 0.0f, 184.0346f, 0.0f);
	*(&Local_180 + 2896) = { -112f, 101.4607f, 2768f };
	*(&Local_180 + 2896 + 12) = { 0.0f, -68.41741f, 0.0f };
	Local_180.f_2920 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingHorses_hgn3", -112f, 101.4607f, 2768f, 0.0f, -68.41741f, 0.0f);
	*(&Local_180 + 2924) = { -113.557f, 101.4211f, 2778.209f };
	*(&Local_180 + 2924 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_180.f_2948 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard1_hgn3", -113.557f, 101.4211f, 2778.209f, 0.0f, 0.0f, 0.0f);
	*(&Local_180 + 2952) = { -109.5103f, 101.411f, 2774.271f };
	*(&Local_180 + 2952 + 12) = { 0.0f, 113.2994f, 0.0f };
	Local_180.f_2976 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard2_hgn3", -109.5103f, 101.411f, 2774.271f, 0.0f, 113.2994f, 0.0f);
	*(&Local_180 + 2980) = { -108.7824f, 101.4551f, 2777.506f };
	*(&Local_180 + 2980 + 12) = { 0.0f, 68.30651f, 0.0f };
	Local_180.f_3004 = CREATE_POINT_IN_LAYOUT(Local_180, "hangingGuard3_hgn3", -108.7824f, 101.4551f, 2777.506f, 0.0f, 68.30651f, 0.0f);
	return 1;
}

void Function_97(int iParam0, int iParam1) //Position: 0x6AB9 / 27321
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

void Function_98(var uParam0, int iParam1) //Position: 0x6B02 / 27394
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_99() //Position: 0x6B11 / 27409
{
	return;
}

bool Function_100() //Position: 0x6B17 / 27415
{
	return Function_101();
}

int Function_101() //Position: 0x6B20 / 27424
{
	bool bVar0;
	
	Function_97(3, 3);
	bVar0 = bVar0;
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_fence_low", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/any_washcloths", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_holy_water", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/mex_flirt_sit_stool_attached_link", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_2", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_1", 1, 0);
	Function_107(&Local_8 + 4, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_r", 1, 0);
	if (!Function_102(&Local_8 + 4))
	{
		return 0;
	}
	Local_8 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(Local_8))
	{
		Local_8 = CREATE_LAYOUT("HennigansStead_layout");
	}
	Local_8.f_452 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint1", -1260.309f, 109.4274f, 2764.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_456 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint2", 118.7035f, 72.28235f, 2676.0f, 0.0f, 0.0f, 0.0f);
	Local_8.f_460 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint3", -1236f, 22.08622f, 3209.463f, 0.0f, 0.0f, 0.0f);
	Local_8.f_464 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint4", -275.5703f, 73.237f, 2391.477f, 0.0f, 88.54858f, 0.0f);
	Local_8.f_468 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint8", -175.9999f, 72.39375f, 2332.0f, 0.0f, 88.54858f, 0.0f);
	Local_8.f_472 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint5", -275.5844f, 73.237f, 2393.654f, 0.0f, 0.0f, 0.0f);
	Local_8.f_476 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint6", -117.8339f, 72.35263f, 2437.834f, 0.0f, 0.0f, 0.0f);
	*(&Local_8 + 480) = { -108.0001f, 55.2157f, 2808.0f };
	*(&Local_8 + 480 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_8.f_504 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint7", -108.0001f, 55.2157f, 2808.0f, 0.0f, 0.0f, 0.0f);
	*(&Local_8 + 508) = { -499.047f, 75.045f, 2209.638f };
	*(&Local_8 + 508 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_8.f_532 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint9", -499.047f, 75.045f, 2209.638f, 0.0f, 0.0f, 0.0f);
	*(&Local_8 + 536) = { -479.216f, 74.86f, 2216.221f };
	*(&Local_8 + 536 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_8.f_560 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint10", -479.216f, 74.86f, 2216.221f, 0.0f, 0.0f, 0.0f);
	*(&Local_8 + 564) = { -492.624f, 73.197f, 2215.717f };
	*(&Local_8 + 564 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_8.f_588 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint11", -492.624f, 73.197f, 2215.717f, 0.0f, 0.0f, 0.0f);
	Local_8.f_592 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint12", -1278.561f, 109.428f, 2748.028f, 0.0f, 0.0f, 0.0f);
	Local_8.f_596 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint13", -1301.064f, 109.312f, 2760.115f, 0.0f, 0.0f, 0.0f);
	Local_8.f_600 = CREATE_POINT_IN_LAYOUT(Local_8, "brbf_bhint", -486.841f, 20.486f, 3033.398f, 0.0f, 0.0f, 0.0f);
	Local_8.f_604 = CREATE_POINT_IN_LAYOUT(Local_8, "brbf_bhtreas", -474.747f, 22.192f, 3020.728f, 0.0f, 124.597f, 0.0f);
	Local_8.f_608 = CREATE_POINT_IN_LAYOUT(Local_8, "brbf_bhtreas1", -494.267f, 20.081f, 3021.206f, 0.0f, 353.651f, 0.0f);
	Local_8.f_612 = CREATE_POINT_IN_LAYOUT(Local_8, "hgnf_bhint14", -1284.527f, 109.428f, 2777.638f, 0.0f, 192.563f, 0.0f);
	*(&Local_8 + 616) = { 123.1745f, 72.42126f, 2670.188f };
	*(&Local_8 + 616 + 12) = { 0.0f, -155.9327f, 0.0f };
	Local_8.f_640 = CREATE_POINT_IN_LAYOUT(Local_8, "player_save_bacchus", 123.1745f, 72.42126f, 2670.188f, 0.0f, -155.9327f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_sit_ground_smoke1", "sit_ground_smoke", -1290.285f, 109.428f, 2772.222f, 0.0f, 83.22361f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "nMesc_Pee2", "Pee", -1287.66f, 109.428f, 2794.27f, 0.0f, 96.73806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "nMesc_Pee1", "Pee", -1298.734f, 109.524f, 2776.841f, 0.0f, 96.73806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_rand_idle_stand4", "rand_idle_stand", -1300.399f, 109.428f, 2770.623f, 0.0f, 109.37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay41", "horse_stay", -283.3955f, 73.24915f, 2391.313f, 0.0f, -108.7701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -1223.988f, 22.24839f, 3209.047f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_644), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew99", "Player_Herb_WildFeverFew", -555.1674f, 98.38434f, 2635.168f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew98", "Player_Herb_WildFeverFew", -444f, 96.37646f, 2640.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew97", "Player_Herb_WildFeverFew", -360f, 97.38037f, 2576.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew96", "Player_Herb_WildFeverFew", -194.2945f, 72.28235f, 2424.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew95", "Player_Herb_WildFeverFew", -259.3197f, 75.29413f, 2460.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew94", "Player_Herb_WildFeverFew", -279.608f, 77.30195f, 2495.608f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew93", "Player_Herb_WildFeverFew", -204.0001f, 95.37256f, 2672.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew92", "Player_Herb_WildFeverFew", -29.24244f, 96.31554f, 2602.664f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew91", "Player_Herb_WildFeverFew", 29.16964f, 93.36469f, 2668.45f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew90", "Player_Herb_WildFeverFew", -36.00005f, 96.37646f, 2712.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew89", "Player_Herb_WildFeverFew", 177.1115f, 102.4101f, 2588.1f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew88", "Player_Herb_WildFeverFew", 206.8056f, 108.4235f, 2538.181f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew87", "Player_Herb_WildFeverFew", 143.7577f, 73.28625f, 2408.242f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew86", "Player_Herb_WildFeverFew", 111.9999f, 106.4157f, 2569.412f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew85", "Player_Herb_WildFeverFew", 43.99994f, 86.33722f, 2162.004f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew84", "Player_Herb_WildFeverFew", 95.99993f, 73.28625f, 2368.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew83", "Player_Herb_WildFeverFew", 12.00003f, 78.30591f, 2416f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew82", "Player_Herb_WildFeverFew", -68.00001f, 77.30194f, 2452.171f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew81", "Player_Herb_WildFeverFew", -68.0f, 74.29022f, 2336.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew80", "Player_Herb_WildFeverFew", -126.4242f, 74.29022f, 2380.598f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew79", "Player_Herb_WildFeverFew", -143.7193f, 73.28625f, 2431.689f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew78", "Player_Herb_WildFeverFew", -255.2952f, 72.28235f, 2363.295f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew77", "Player_Herb_WildFeverFew", -254.8817f, 76.11722f, 2447.886f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew76", "Player_Herb_WildFeverFew", -442.5462f, 92.42317f, 2431.439f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew75", "Player_Herb_WildFeverFew", -498.2016f, 92.36078f, 2466.082f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew74", "Player_Herb_WildFeverFew", -424f, 97.38037f, 2580.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew73", "Player_Herb_WildFeverFew", -538.4169f, 98.38431f, 2616.292f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew72", "Player_Herb_WildFeverFew", -388f, 96.37646f, 2672.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew71", "Player_Herb_WildFeverFew", -417.5648f, 98.38428f, 2721.565f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew70", "Player_Herb_WildFeverFew", -546.5907f, 96.37646f, 2494.59f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew69", "Player_Herb_WildFeverFew", -576.0001f, 98.38428f, 2544f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew68", "Player_Herb_WildFeverFew", -711.9999f, 99.38824f, 2600f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew67", "Player_Herb_WildFeverFew", -647.9999f, 101.3961f, 2609.018f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew66", "Player_Herb_WildFeverFew", -595.8665f, 99.38828f, 2703.866f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew65", "Player_Herb_WildFeverFew", -727.9998f, 100.3922f, 2696f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew64", "Player_Herb_WildFeverFew", -707.9999f, 103.4039f, 2752f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew63", "Player_Herb_WildFeverFew", -691.4358f, 97.39969f, 2803.564f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew62", "Player_Herb_WildFeverFew", -975.5092f, 104.2495f, 2749.441f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew61", "Player_Herb_WildFeverFew", -866.3646f, 100.3922f, 2698.365f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew60", "Player_Herb_WildFeverFew", -880.0001f, 100.3922f, 2740.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew59", "Player_Herb_WildFeverFew", -872.2901f, 97.38037f, 2820.291f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew58", "Player_Herb_WildFeverFew", -776.0001f, 93.36469f, 2356f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew57", "Player_Herb_WildFeverFew", -687.5164f, 98.04729f, 2401.762f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew56", "Player_Herb_WildFeverFew", -785.8874f, 104.959f, 2280.578f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew55", "Player_Herb_WildFeverFew", -881.8164f, 110.4574f, 2594.953f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew54", "Player_Herb_WildFeverFew", -1048f, 101.3961f, 2464.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew53", "Player_Herb_WildFeverFew", -808.0001f, 100.3922f, 2561.289f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew52", "Player_Herb_WildFeverFew", -920.0f, 92.36078f, 2304f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew51", "Player_Herb_WildFeverFew", -1081.386f, 102.4f, 2312.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew50", "Player_Herb_WildFeverFew", -1128.0f, 110.4313f, 2208.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew49", "Player_Herb_WildFeverFew", -835.6993f, 111.4353f, 2119.555f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew48", "Player_Herb_WildFeverFew", -1113.683f, 105.4117f, 2112f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew47", "Player_Herb_WildFeverFew", -1108.0f, 104.4078f, 2492.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew46", "Player_Herb_WildFeverFew", -1093.78f, 104.461f, 2528.803f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew45", "Player_Herb_WildFeverFew", -1021.638f, 109.4289f, 2592f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew44", "Player_Herb_WildFeverFew", -955.6125f, 107.4232f, 2656.625f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew43", "Player_Herb_WildFeverFew", -944.0001f, 102.3681f, 2756.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew42", "Player_Herb_WildFeverFew", -1040f, 102.4f, 2792.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew41", "Player_Herb_WildFeverFew", -1028f, 101.3961f, 2860.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew40", "Player_Herb_WildFeverFew", -928.6227f, 101.3961f, 2852.623f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew39", "Player_Herb_WildFeverFew", -1008.839f, 100.3922f, 2932.839f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew38", "Player_Herb_WildFeverFew", -1056f, 100.3922f, 2848.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew37", "Player_Herb_WildFeverFew", -1172f, 95.37256f, 2892.693f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew36", "Player_Herb_WildFeverFew", -1360f, 95.37256f, 2908.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew35", "Player_Herb_WildFeverFew", -1320f, 96.37646f, 2980.488f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew34", "Player_Herb_WildFeverFew", -1200.504f, 110.2503f, 2844.896f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew33", "Player_Herb_WildFeverFew", -1328f, 118.4628f, 2800.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew32", "Player_Herb_WildFeverFew", -1444.78f, 115.451f, 2700.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew31", "Player_Herb_WildFeverFew", -1184f, 98.38432f, 2581.499f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew30", "Player_Herb_WildFeverFew", -1152.0f, 99.99776f, 2483.981f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew29", "Player_Herb_WildFeverFew", -1258.333f, 92.15118f, 2541.586f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew28", "Player_Herb_WildFeverFew", -1331.99f, 94.37176f, 2584.034f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew27", "Player_Herb_WildFeverFew", -1367.219f, 96.36912f, 2526.926f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew26", "Player_Herb_WildFeverFew", -1435.734f, 97.38392f, 2523.012f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_stay7", "horse_stay", -487.679f, 72.291f, 2206.794f, 0.0f, 234.1342f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_tend7", "horse_tend", -491.2f, 72.336f, 2199.114f, 0.0f, -170.8492f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_stay6", "horse_stay", -494.0805f, 72.54624f, 2198.433f, 0.0f, 70.08273f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_tend6", "horse_tend", -501.2441f, 75.6872f, 2227.825f, 0.0f, 175.3533f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_sit_ground_smoke2", "sit_ground_smoke", -484.8762f, 71.99495f, 2203.452f, 0.0f, -51.32996f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_sit_ground_smoke", "sit_ground_smoke", -481.8283f, 71.87337f, 2201.816f, 0.0f, 129.3626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_sit_ground_play_harmonica", "sit_ground_play_harmonica", -485.2202f, 72.02464f, 2201.932f, 0.0f, -94.26432f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_Sit_Ground_Drink", "Sit_Ground_Drink", -482.8451f, 71.85525f, 2203.732f, 0.0f, 18.83562f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -477.8831f, 71.81006f, 2202.998f, 0.0f, -86.38677f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -481.474f, 71.80349f, 2199.808f, 0.0f, -18.62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -486.1086f, 72.11655f, 2200.902f, 0.0f, -18.62923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_lookdistance_w_any", "stand_lookdistance_w_any", -485.8302f, 72.53257f, 2211.344f, 0.0f, 162.0719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_lookdistance3", "stand_lookdistance_w_any", -489.738f, 75.217f, 2246.711f, 0.0f, 210.8284f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -483.6721f, 72.0414f, 2200.771f, 0.0f, -156.7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_rand_idle_stand2", "rand_idle_stand", -513.642f, 78.714f, 2228.851f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_rand_idle_stand1", "rand_idle_stand", -494.992f, 74.165f, 2222.989f, 0.0f, 139.7007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_yawning_n_any1", "stand_yawning_n_any", -476.394f, 72.594f, 2208.338f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -487.985f, 72.13816f, 2203.913f, 0.0f, -80.51714f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_tend5", "horse_tend", -485.1934f, 73.68908f, 2227.357f, 0.0f, 175.3533f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_stay5", "horse_stay", -483.493f, 72.62349f, 2208.31f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_tend4", "horse_tend", -486.133f, 73.017f, 2219.355f, 0.0f, -170.8492f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_horse_stay4", "horse_stay", -494.391f, 73.535f, 2216.439f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_Pee2", "Pee", -500.917f, 75.958f, 2222.902f, 0.0f, 28.07549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_guntricks_e_any1", "stand_guntricks_e_any", -503.7881f, 76.21277f, 2224.989f, 0.0f, -154.3103f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mtf_stand_lookdistance2", "stand_lookdistance_w_any", -509.9192f, 76.2117f, 2242.053f, 0.0f, 220.4564f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew25", "Player_Herb_WildFeverFew", -1468.0f, 99.38824f, 2560.833f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew24", "Player_Herb_WildFeverFew", -1549.159f, 101.3961f, 2545.159f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew23", "Player_Herb_WildFeverFew", -1552f, 99.38818f, 2588.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew22", "Player_Herb_WildFeverFew", -1635.405f, 104.4078f, 2508.201f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew21", "Player_Herb_WildFeverFew", -1362.88f, 97.13873f, 2502.447f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", -1476.0f, 101.3961f, 2506.032f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", -1560.0f, 107.4196f, 2492.373f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew18", "Player_Herb_WildFeverFew", -1548.0f, 98.38428f, 2204.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew17", "Player_Herb_WildFeverFew", -1553.751f, 100.3922f, 2276.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew16", "Player_Herb_WildFeverFew", -1592.0f, 102.4f, 2304.0f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew15", "Player_Herb_WildFeverFew", -1556.0f, 101.3961f, 2345.271f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", -1627.523f, 96.37029f, 2150.974f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", -1841.983f, 54.47337f, 1869.646f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", -1824.0f, 57.18702f, 1852.473f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "repair_kneel1", "repair_kneel", -902.2922f, 100.3209f, 2754.921f, 0.0f, 214.3136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "stand_lookdistance_w_any", "stand_lookdistance_w_any", -905.372f, 102.4f, 2714.956f, 0.0f, -33.62195f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sit_fence_low1", "sit_fence_low", -926.543f, 102.3234f, 2736.779f, 0.0f, 116.8946f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "repair_kneel", "repair_kneel", -931.642f, 102.4139f, 2749.984f, 0.0f, 137.5986f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sit_fence_low", "sit_fence_low", -894.3243f, 100.392f, 2739.188f, 0.0f, -84.98307f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "stand_hammer_wall", "stand_hammer_wall", -928.8274f, 102.4108f, 2743.607f, 0.0f, 127.8027f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "nsit_docks", "nsit_docks", -928.1281f, 105.605f, 2752.568f, 0.0f, 37.12743f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "any_washCloths", "any_washCloths", -933.0951f, 102.4479f, 2758.384f, 0.0f, -65.5621f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "look_out_window_L", "look_out_window_L", -982.127f, 104.716f, 2722.818f, 0.0f, 91.278f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sit_docks1", "nsit_docks", -982.0966f, 104.716f, 2721.483f, 0.0f, 67.37092f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", -1258.205f, 103.8316f, 2092.937f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", -1440.801f, 98.38428f, 2152.988f, 0.0f, 80.5882f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", -1442.045f, 99.40326f, 2240.109f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", -890.355f, 99.87654f, 2194.054f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", -1016f, 111.3676f, 2224f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -1617.097f, 93.76676f, 2187.019f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", -1760.903f, 96.82294f, 1933.656f, 0.0f, 54.47325f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -1269.262f, 110.4314f, 2072.898f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -1910.234f, 40.64242f, 1863.484f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -1816.805f, 53.13725f, 1890.521f, 0.0f, 0.0f, 0.0f);
	CREATE_GRINGO_IN_LAYOUT(Local_8, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -1959.485f, 75.21778f, 1828.361f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_tend41", "horse_tend", -282.807f, 73.153f, 2397.404f, 0.0f, -105.3701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay31", "horse_stay", -285.8602f, 73.25476f, 2394.963f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_sit_docks1", "nsit_docks", -290.5338f, 72.49307f, 2419.896f, 0.0f, -179.4226f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay71", "horse_stay", -119.6366f, 72.03043f, 2427.21f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_tend31", "horse_tend", -121.785f, 72.25f, 2429.164f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay61", "horse_stay", -132.6584f, 73.51955f, 2425.296f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay51", "horse_stay", -130.0145f, 73.31475f, 2424.778f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_stand_lookdistanc21", "stand_lookdistance_w_any", -112.3357f, 73.28622f, 2448.212f, 0.0f, -113.7659f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "nStil_Pee1", "Pee", -104.0126f, 72.15959f, 2431.303f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_stand_lookdistance11", "stand_lookdistance_w_any", -121.4438f, 73.18758f, 2444.482f, 0.0f, 82.29852f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_Rand_Idle_NearWall11", "Rand_Idle_NearWall", -112.6356f, 72.353f, 2443.39f, 0.0f, -25.94683f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_campfire_talk1", "campfire_talk", -115.0204f, 72.35263f, 2440.231f, 0.0f, 131.5032f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_Campfire_Tend11", "Sit_Ground_Campfire_Tend", -112.7236f, 72.353f, 2441.722f, 0.0f, 69.00607f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_stand_lookdistance1", "stand_lookdistance_w_any", -279.7706f, 73.139f, 2391.325f, 0.0f, 22.22883f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_Rand_Idle_NearWall", "Rand_Idle_NearWall", -274.7329f, 73.15596f, 2395.753f, 0.0f, 179.5037f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_lie_sleep_on_bed_l", "lie_sleep_on_bed_l", -274.4596f, 73.25157f, 2391.465f, 0.0f, -92.90387f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_lean_rail", "nlean_rail", -275.3539f, 73.12715f, 2398.184f, 0.0f, -179.8969f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_rand_idle_stand1", "rand_idle_stand", -274.7468f, 73.148f, 2396.871f, 0.0f, 254.0465f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_Campfire_Tend", "Sit_Ground_Campfire_Tend", -171.5715f, 72.39375f, 2330.361f, 0.0f, 89.22446f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_horse_tend1", "horse_tend", -109.4213f, 55.21569f, 2806.907f, 0.0f, -141.5272f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_horse_tend", "horse_tend", -111.8189f, 55.2157f, 2809.007f, 0.0f, 103.6899f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_horse_stay3", "horse_stay", -114.0363f, 55.2157f, 2810.398f, 0.0f, -134.0859f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_horse_stay2", "horse_stay", -112.4162f, 55.2157f, 2807.465f, 0.0f, 91.06381f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_horse_stay1", "horse_stay", -118.7427f, 55.2157f, 2812.998f, 0.0f, 206.9627f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_horse_stay", "horse_stay", -109.9179f, 55.21569f, 2807.491f, 0.0f, 49.26177f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_smoking_stand", "smoking_stand", -104.1135f, 55.47424f, 2807.156f, 0.0f, 211.2294f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_sit_ground_smoke", "sit_ground_smoke", -103.5438f, 55.44496f, 2801.546f, 0.0f, -132.4733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_play_harmonica", "sit_ground_play_harmonica", -104.0469f, 55.32558f, 2803.035f, 0.0f, -82.07317f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_stand_guntricks_e_any", "stand_guntricks_e_any", -102.1707f, 55.36632f, 2804.345f, 0.0f, -3.558987f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_stand_lookdistance", "stand_lookdistance_w_any", -117.0521f, 55.2157f, 2805.38f, 0.0f, 58.87966f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "pasted__Man_Pee", "Pee", -95.50251f, 55.21611f, 2799.677f, 0.0f, 241.5218f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "pasted__Man_smoking_stand", "smoking_stand", -100.1235f, 55.34239f, 2802.147f, 0.0f, 74.89233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_look_distance_binocs", "look_distance_binocs", -119.8045f, 55.2157f, 2815.365f, 0.0f, 172.6626f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay2", "horse_stay", -176.4697f, 72.47968f, 2336.637f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay1", "horse_stay", -178.5961f, 72.28235f, 2344.056f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_stay", "horse_stay", -176.0005f, 72.40929f, 2338.774f, 0.0f, 85.15128f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_tend1", "horse_tend", -182.9534f, 72.61275f, 2342.223f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", -178.0995f, 72.53835f, 2332.596f, 0.0f, -18.7411f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_stand_guntricks_e_any", "stand_guntricks_e_any", -174.1021f, 72.39375f, 2332.586f, 0.0f, -23.18213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_look_distance_binocs", "look_distance_binocs", -163.9925f, 72.23011f, 2335.94f, 0.0f, -4.903682f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_rand_idle_stand", "rand_idle_stand", -169.1717f, 72.3328f, 2331.828f, 0.0f, -11.84327f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_smoking_stand", "smoking_stand", -172.7588f, 72.39375f, 2331.682f, 0.0f, 10.0226f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -174.9404f, 72.39375f, 2330.198f, 0.0f, -99.68264f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Stil_horse_tend", "horse_tend", -173.0439f, 72.21784f, 2337.289f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_rand_idle_stand3", "rand_idle_stand", -1310.823f, 108.507f, 2759.502f, 0.0f, 109.37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_rand_idle_stand2", "rand_idle_stand", -1290.639f, 109.428f, 2772.813f, 0.0f, 109.37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_rand_idle_stand1", "rand_idle_stand", -1277.641f, 109.427f, 2777.696f, 0.0f, 109.37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay11", "horse_stay", -1277.705f, 109.427f, 2753.559f, 0.0f, 9.925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay10", "horse_stay", -1290.404f, 116.455f, 2716.549f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay9", "horse_stay", -1303.118f, 108.424f, 2746.513f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay8", "horse_stay", -1291.411f, 108.424f, 2745.976f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_stand_holy_water", "stand_holy_water", -1266.753f, 109.4274f, 2762.999f, 0.0f, 91.55917f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_Campfire_Tend2", "Sit_Ground_Campfire_Tend", -1304.773f, 111.4353f, 2731.426f, 0.0f, -138.5776f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "smoking_stand1", "smoking_stand", -1302.064f, 111.4353f, 2730.996f, 0.0f, 125.0703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_sleeping_wal1", "sleeping_wall_scripted", -1267.786f, 109.4274f, 2786.777f, 0.0f, -234.9549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay12", "horse_stay", -1246.143f, 109.779f, 2734.597f, 0.0f, 9.925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay7", "horse_stay", -1309.688f, 109.325f, 2771.592f, 0.0f, 9.925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay6", "horse_stay", -1279.988f, 109.427f, 2788.018f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay5", "horse_stay", -1284.899f, 109.428f, 2779.304f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay4", "horse_stay", -1275.122f, 109.427f, 2793.871f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_stand_guntricks1", "stand_guntricks_e_any", -1273.336f, 109.4274f, 2749.484f, 0.0f, -76.89563f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_Campfire_Tend", "Sit_Ground_Drink", -1232.077f, 22.27966f, 3211.868f, 0.0f, 68.73868f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_648), 0);
	Local_8.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_8, "look_out_window_L1", "look_out_window_L", -1237.542f, 22.2412f, 3212.973f, 0.0f, 178.7504f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_652), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_horse_tend2", "horse_tend", -1246.379f, 22.62883f, 3213.033f, 0.0f, -101.8198f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_horse_tend1", "horse_tend", -1252.025f, 23.933f, 3209.663f, 0.0f, -95.92507f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_horse_tend", "horse_tend", -1218.964f, 24.87803f, 3201.336f, 0.0f, 96.76688f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_horse_stay2", "horse_stay", -1249.464f, 23.35681f, 3211.482f, 0.0f, -78.81496f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_horse_stay1", "horse_stay", -1217.079f, 24.57645f, 3202.547f, 0.0f, 88.79853f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_horse_stay", "horse_stay", -1216.456f, 23.98988f, 3204.24f, 0.0f, 63.17963f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_look_distance_binocs", "look_distance_binocs", -1230.744f, 22.27831f, 3209.075f, 0.0f, -98.96873f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_Rand_Idle_NearWall", "Rand_Idle_NearWall", -1240.388f, 22.12842f, 3206.192f, 0.0f, 88.11987f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_Pee", "Pee", -1225.842f, 22.606f, 3204.7f, 0.0f, -31.56896f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_stand_guntricks_e_any", "stand_guntricks_e_any", -1236.22f, 22.24551f, 3207.925f, 0.0f, 36.00572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -1234.064f, 22.25175f, 3207.401f, 0.0f, -97.59713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1238.701f, 22.34453f, 3206.441f, 0.0f, -115.5628f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Grn_smoking_stand", "smoking_stand", -1233.578f, 22.25408f, 3212.0f, 0.0f, 45.14069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bac_hhorse_tend2", "horse_tend", 97.78033f, 71.27844f, 2684.0f, 0.0f, -203.1011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bac_hhorse_tend1", "horse_tend", 100.0754f, 71.27844f, 2683.136f, 0.0f, -181.4435f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bac_hhorse_tend", "horse_tend", 108f, 71.27842f, 2675.017f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bac_hhorse_stay2", "horse_stay", 102.0794f, 71.27847f, 2682.786f, 0.0f, -35.9964f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bac_hhorse_stay1", "horse_stay", 106.0782f, 71.15269f, 2676.675f, 0.0f, 33.68391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bac_horse_stay", "horse_stay", 102.9418f, 71.1523f, 2677.747f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bach_use_shelf", "nuse_shelf", 0.0f, 0.0f, 0.0f, 0.0f, 294.9007f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bach_look_out_window", "look_out_window_L", 121.8701f, 72.41193f, 2670.781f, 0.0f, 117.1071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bach_look_distance", "stand_lookdistance_w_any", 129.3817f, 72.4876f, 2674.44f, 0.0f, -93.00282f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bach_smoking_stand", "rand_idle_stand", 126.5116f, 72.4119f, 2675.403f, 0.0f, 182.2345f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Bach_NearWall_Shoulder_R", "Rand_Idle_NearWall", 122.0145f, 72.40353f, 2674.539f, 0.0f, -240.2579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_stand_guntricks", "stand_guntricks_e_any", -1270.788f, 109.4274f, 2749.184f, 0.0f, 84.16376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_drunk_throwbottle", "stand_drunk_throwbottle", -1265.812f, 109.4274f, 2746.996f, 0.0f, -70.91444f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_drunk_rowdydrink", "stand_drunk_rowdydrink", -1263.234f, 109.4274f, 2748.075f, 0.0f, -8.879789f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_play_harmonica", "sit_ground_play_harmonica", -1264.823f, 109.4274f, 2745.407f, 0.0f, -131.5376f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -1261.675f, 109.4274f, 2745.347f, 0.0f, 97.42413f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_Sit_Ground1", "Rand_Idle_Sit_Ground", -1261.765f, 109.4274f, 2747.085f, 0.0f, -317.9632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay3", "horse_stay", -1246.143f, 109.779f, 2734.597f, 0.0f, 9.925353f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay2", "horse_stay", -1231.185f, 109.4274f, 2745.39f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay1", "horse_stay", -1251.29f, 109.4274f, 2761.342f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_horse_stay", "horse_stay", -1255.198f, 109.4274f, 2763.017f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_Pee", "Pee", -1235.608f, 109.4274f, 2751.687f, 0.0f, 96.73806f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_rand_idle_stand", "rand_idle_stand", -1249.862f, 109.5147f, 2754.044f, 0.0f, 109.37f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_sleeping_wall_scripted", "sleeping_wall_scripted", -1241.34f, 108.515f, 2755.404f, 0.0f, 122.3701f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_smoking_stand", "smoking_stand", -1244.553f, 109.4274f, 2768.205f, 0.0f, -77.75138f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -1243.383f, 109.4517f, 2766.101f, 0.0f, -156.7047f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1242.411f, 109.4274f, 2769.383f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_sit_ground_smoke", "sit_ground_smoke", -1240.573f, 109.4021f, 2768.07f, 0.0f, 83.22361f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_stand_lookdistance2", "stand_lookdistance_w_any", -1339.527f, 116.455f, 2778.435f, 0.0f, -160.6844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_stand_lookdistance1", "stand_lookdistance_w_any", -1286.395f, 116.417f, 2719.064f, 0.0f, -160.6844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_stand_lookdistance", "stand_lookdistance_w_any", -1281.565f, 113.7627f, 2808.0f, 0.0f, -160.6844f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Mesc_lookdistance_binocs", "look_distance_binocs", -1246.043f, 112.232f, 2789.971f, 0.0f, -122.5477f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_yawning_n_any1", "stand_yawning_n_any", -484.842f, 20.486f, 3036.186f, 0.0f, 103.7064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_smoking_stand4", "smoking_stand", -490.907f, 20.081f, 3028.224f, 0.0f, -92.93414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_rand_idle_stand3", "rand_idle_stand", -483.113f, 20.354f, 3018.092f, 0.0f, -27.62441f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_rand_idle_stand2", "rand_idle_stand", -485.8575f, 20.11623f, 3020.444f, 0.0f, -16.63606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_guntricks_e_any1", "stand_guntricks_e_any", -487.818f, 20.08f, 3027.049f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_lookdistance3", "stand_lookdistance_w_any", -472.17f, 23.539f, 3002.219f, 0.0f, -22.8892f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_rand_idle_stand1", "rand_idle_stand", -479.193f, 21.395f, 3011.36f, 0.0f, -54.23795f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_yawning_n_any", "stand_yawning_n_any", -490.8237f, 20.09063f, 3018.624f, 0.0f, 314.5764f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_smoking_stand3", "smoking_stand", -489.166f, 22.934f, 3008.071f, 0.0f, 125.0703f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_smoking_stand2", "smoking_stand", -486.841f, 20.486f, 3033.398f, 0.0f, -92.93414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_rand_idle_stand", "rand_idle_stand", -487.3976f, 20.04222f, 3030.592f, 0.0f, 0.05803982f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_lookdistance2", "stand_lookdistance_w_any", -516.832f, 22.626f, 3011.923f, 0.0f, 71.97202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_guntricks_e_any", "stand_guntricks_e_any", -484.013f, 20.46403f, 3030.633f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_horse_stay3", "horse_stay", -486.5086f, 20.25895f, 3023.12f, 0.0f, -73.51933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_horse_stay2", "horse_stay", -485.694f, 20.12819f, 3025.852f, 0.0f, -70.77419f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_Pee1", "Pee", -502.053f, 22.795f, 3020.031f, 0.0f, -245.9337f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_smoking_stand1", "smoking_stand", -481.0595f, 20.49036f, 3034.915f, 0.0f, -92.93414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_horse_stay1", "horse_stay", -497.898f, 22.734f, 3008.745f, 0.0f, -71.77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_horse_stay", "horse_stay", -501.242f, 22.723f, 3007.798f, 0.0f, -71.77749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_lie_sleep_on_bed_r", "lie_sleep_on_bed_r", -488.8596f, 20.48626f, 3033.328f, 0.0f, 21.64087f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_look_out_window_L", "look_out_window_L", -486.3459f, 20.5107f, 3032.663f, 0.0f, -66.49553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_lookdistance1", "stand_lookdistance_w_any", -499.0f, 22.663f, 3009.645f, 0.0f, 247.5717f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_Pee", "Pee", -491.229f, 20.038f, 3030.695f, 0.0f, 62.1369f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_stand_lookdistance", "stand_lookdistance_w_any", -481.405f, 24.341f, 2997.675f, 0.0f, -22.8892f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_Rand_Idle_NearWall", "Rand_Idle_NearWall", -490.3297f, 20.08626f, 3026.724f, 0.0f, -66.90773f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_lean_rail", "nlean_rail", -488.092f, 20.47741f, 3037.65f, 0.0f, -162.8951f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_8, "any_washCloths1", "any_washCloths", 119.6759f, 72.28231f, 2672.96f, 0.0f, 101.6139f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_656), 0);
	Local_8.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_8, "rand_idle_stand", "rand_idle_stand", 125.609f, 72.40736f, 2675.811f, 0.0f, 221.8964f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_660), 0);
	Local_8.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_8, "sit_docks2", "nsit_docks", 120.7647f, 71.27381f, 2683.097f, 0.0f, -154.344f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_664), 0);
	Local_8.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_8, "digging", "digging", 129.3431f, 72.33885f, 2666.097f, 0.0f, -53.53743f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_668), 0);
	Local_8.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_8, "mex_flirt_sit_stool_attached", "mex_flirt_sit_stool_attached_link", 123.4719f, 72.37572f, 2675.644f, 0.0f, 21.733f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_8.f_672), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "brb_rand_idle_stand4", "rand_idle_stand", -479.348f, 20.168f, 3030.72f, 0.0f, -16.63606f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_sit_ground_smoke1", "sit_ground_smoke", -101.755f, 55.48045f, 2800.974f, 0.0f, -174.9355f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_8, "Man_stand_lookdistance1", "stand_lookdistance_w_any", -117.9614f, 55.2157f, 2809.237f, 0.0f, 110.4136f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_8.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_8, "treasure_hunting_z_2", "zombie_treasure_hunting_2", -1381.446f, 61.31684f, 3016.734f, 0.0f, 123.8197f, 0.0f);
	Local_8.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_8, "treasure_hunting_z_1", "zombie_treasure_hunting_1", -1512.982f, 219.0359f, 1738.493f, 0.0f, 133.2135f, 0.0f);
	Local_8.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_8, "ZombiePack_player_sleep_bed_R", "ZombiePack_player_sleep_bed_R", 123.1745f, 72.42126f, 2670.188f, 0.0f, -63.854f, 0.0f);
	return 1;
}

bool Function_102(int iParam0) //Position: 0xD171 / 53617
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_106();
	iVar1 = 0;
	if (!Function_21(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_105(iParam0[iVar03], 8);
		}
		else if (Function_104())
		{
			iVar1 = 1;
			Function_105(iParam0[iVar03], 8);
		}
		Function_105(iParam0[iVar03], 16);
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
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_21(iParam0[03], 8) || iVar1));
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
				Function_105(iParam0[iVar03], 1);
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
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
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
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_105(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_105(iParam0[iVar03], 2);
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
	Function_103();
	return 1;
}

void Function_103() //Position: 0xD4EC / 54508
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

bool Function_104() //Position: 0xD52C / 54572
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

void Function_105(var uParam0, int iParam1) //Position: 0xD557 / 54615
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_106() //Position: 0xD568 / 54632
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

var Function_107(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xD5AA / 54698
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_108(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_105(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_108(var uParam0, int iParam1, int iParam2) //Position: 0xD5E2 / 54754
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_21(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_105(uParam0[iVar03], 4);
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

bool Function_109() //Position: 0xD6A6 / 54950
{
	return Function_110();
}

int Function_110() //Position: 0xD6AF / 54959
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = uVar0;
	Local_6 = FIND_NAMED_LAYOUT("HennigansStead_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("HennigansStead_layout");
	}
	Local_6.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_6, "pikv_helperHerdDest", 3, -764.0f, 101.3961f, 2200.0f, 0.0f, 20.0f, 0.0f, 26.34139f, 9.701624f, 26.34139f);
	return 1;
}

void Function_111() //Position: 0xD747 / 55111
{
	ALLOW_TUMBLEWEEDS(0);
	return;
}

void Function_112(bool bParam0, int iParam1) //Position: 0xD751 / 55121
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

