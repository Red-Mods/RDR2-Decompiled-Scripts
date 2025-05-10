//Decompiled with MagicRDR v1.0
//Function Count : 111
//Statics Count : 395
//Natives Count : 150
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<17> Local_6 = { 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	struct<717> Local_209 = { 0, 1, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_110(&Var0, 3);
	Function_109();
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
				if (Function_107())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_98())
				{
					Function_97();
					Function_96(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_93())
				{
					Function_96(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_92(&uLocal_3);
				Function_90(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_89())
				{
					Function_81();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_80(iScriptParam_0);
				Function_79();
				Function_96(&(Global_29008[iScriptParam_0]), 8);
				if (Function_78(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_77(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_76(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_75(iScriptParam_0))
				{
					Function_69(iScriptParam_0);
					Function_68(64);
				}
				Function_96(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_75(iScriptParam_0))
				{
					Function_66(Function_67(), iScriptParam_0);
				}
				Function_65(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_64(&Var0, 5.0f);
				Function_96(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_75(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_24(&uLocal_3, &uLocal_389, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_78(&(Global_29008[iScriptParam_0]), 131072))
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
	Function_8(&uLocal_3, &uLocal_389);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_68(64);
	Function_77(&(Global_29008[iScriptParam_0]), 32);
	Function_77(&(Global_29008[iScriptParam_0]), 64);
	Function_77(&(Global_29008[iScriptParam_0]), 512);
	Function_77(&(Global_29008[iScriptParam_0]), 16);
	Function_77(&(Global_29008[iScriptParam_0]), 4);
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
	RELEASE_LAYOUT_REF(Local_209);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x384 / 900
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

void Function_9(int iParam0, int iParam1, int iParam2) //Position: 0x3DC / 988
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

void Function_10(int iParam0, bool bParam1, bool bParam2) //Position: 0x4C2 / 1218
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

void Function_11() //Position: 0x63B / 1595
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_12(bool bParam0) //Position: 0x647 / 1607
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

void Function_13(int iParam0) //Position: 0x68D / 1677
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

void Function_14(int iParam0, int iParam1) //Position: 0x6D3 / 1747
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x6ED / 1773
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x70A / 1802
{
	Function_17();
	return;
}

void Function_17() //Position: 0x713 / 1811
{
	Function_18(&Local_11 + 4);
	RELEASE_LAYOUT_REF(Local_11);
	return;
}

void Function_18(int iParam0) //Position: 0x725 / 1829
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

void Function_19(var uParam0, int iParam1) //Position: 0x74B / 1867
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

void Function_20(var uParam0, int iParam1) //Position: 0x879 / 2169
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_21(int iParam0, int iParam1) //Position: 0x893 / 2195
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8B0 / 2224
{
	Function_23();
	return;
}

void Function_23() //Position: 0x8B9 / 2233
{
	RELEASE_LAYOUT_REF(Local_6);
	return;
}

void Function_24(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x8C4 / 2244
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

bool Function_25(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x945 / 2373
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_60(iParam0))
	{
		return 0;
	}
	Function_77(&(Global_29008[iParam2]), 4194304);
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
				if (!Function_78(&(Global_29008[iParam2]), 262144))
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

void Function_26(int iParam0) //Position: 0xD5E / 3422
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_78(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_96(&(Global_29008[iParam0]), 4096);
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

float Function_27(int iParam0) //Position: 0xE5D / 3677
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_28(int iParam0) //Position: 0xE9A / 3738
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, bool bParam1) //Position: 0xED3 / 3795
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

var Function_30(int iParam0) //Position: 0xF3A / 3898
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xF92 / 3986
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

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x11B2 / 4530
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

var Function_33() //Position: 0x17DF / 6111
{
	int iVar0;
	
	return iVar0;
}

var Function_34(int iParam0) //Position: 0x17E7 / 6119
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_35(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x17F8 / 6136
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

struct<32> Function_36(char* cParam0, bool bParam1) //Position: 0x18ED / 6381
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_37(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1906 / 6406
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_39(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_38(Function_39(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_38(int iParam0, int iParam1) //Position: 0x196B / 6507
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_39(int iParam0, bool bParam1) //Position: 0x197D / 6525
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_40(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x198F / 6543
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

int Function_41(int iParam0) //Position: 0x1ABF / 6847
{
	return Global_35278[iParam020].f_48;
}

void Function_42(int iParam0) //Position: 0x1ACE / 6862
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

int Function_43(int iParam0, float fParam1, bool bParam2) //Position: 0x1C68 / 7272
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

void Function_44(var uParam0, int iParam1) //Position: 0x1EAC / 7852
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_45(struct<5> Param0) //Position: 0x1EB9 / 7865
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_46(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1EDF / 7903
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

void Function_47() //Position: 0x216F / 8559
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

void Function_48(bool bParam0, bool bParam1) //Position: 0x21D2 / 8658
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

bool Function_49(bool bParam0) //Position: 0x2201 / 8705
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

int Function_50(int iParam0) //Position: 0x2277 / 8823
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_51() //Position: 0x2288 / 8840
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

bool Function_52(int iParam0) //Position: 0x22A1 / 8865
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_53(int iParam0) //Position: 0x22B7 / 8887
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_54() //Position: 0x22CC / 8908
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_55(int iParam0) //Position: 0x22D5 / 8917
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x22F3 / 8947
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

void Function_57(int iParam0, int iParam1) //Position: 0x2397 / 9111
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_58(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x23A8 / 9128
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

void Function_59(int iParam0, int iParam1) //Position: 0x241A / 9242
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_13(iParam0);
	Function_12(iVar0);
	PRINTNL();
	Function_10(iParam0, iVar0, iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x243F / 9279
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

bool Function_61(int iParam0) //Position: 0x245C / 9308
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x2478 / 9336
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(int iParam0) //Position: 0x248D / 9357
{
	iParam0 = iParam0;
	return;
}

void Function_64(bool bParam0, float fParam1) //Position: 0x2497 / 9367
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

void Function_65(int iParam0) //Position: 0x24D5 / 9429
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

void Function_66(bool bParam0, bool bParam1) //Position: 0x2567 / 9575
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

var Function_67() //Position: 0x2661 / 9825
{
	return Local_6;
}

void Function_68(int iParam0) //Position: 0x2669 / 9833
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_69(bool bParam0) //Position: 0x267C / 9852
{
	Function_70(StackVal, 0, 0.25f, 0, Local_6, !Function_74(&Global_30679));
	return;
}

void Function_70(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x269E / 9886
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
		Function_73();
	}
	if (bParam5)
	{
		Function_71(1048576);
	}
}

void Function_71(int iParam0) //Position: 0x27B1 / 10161
{
	Function_72(&Global_28842, iParam0);
	return;
}

void Function_72(var uParam0, var uParam1) //Position: 0x27BF / 10175
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_73() //Position: 0x27DA / 10202
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_71(16384);
	}
	return;
}

bool Function_74(int iParam0) //Position: 0x27F6 / 10230
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

bool Function_75(int iParam0) //Position: 0x2843 / 10307
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

void Function_76(int iParam0) //Position: 0x2920 / 10528
{
	iParam0 = iParam0;
	return;
}

void Function_77(var uParam0, int iParam1) //Position: 0x292A / 10538
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_78(int iParam0, int iParam1) //Position: 0x2941 / 10561
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_79() //Position: 0x295D / 10589
{
	return;
}

void Function_80(var uParam0) //Position: 0x2963 / 10595
{
	uParam0 = uParam0;
	return;
}

void Function_81() //Position: 0x296D / 10605
{
	Function_82(Global_30628[3]);
	Global_29004 = 0;
	return;
}

void Function_82(int iParam0) //Position: 0x2980 / 10624
{
	int iVar0;
	
	iVar0 = Function_84(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_83(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_83(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_83(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_83(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_83(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_83(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_83(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_83(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_83(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

bool Function_83(var uParam0, int iParam1) //Position: 0x2BB8 / 11192
{
	return (uParam0 && iParam1) == 0;
}

int Function_84(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2BC5 / 11205
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_88(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_85(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_85(bParam0, bParam1, bParam2, 4294967295);
}

int Function_85(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2C23 / 11299
{
	var uVar0;
	
	if (!Function_87(bParam2))
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
	uVar0 = Function_88(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_86(uVar0);
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

int Function_86(int iParam0) //Position: 0x2D78 / 11640
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

bool Function_87(int iParam0) //Position: 0x2DB6 / 11702
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_88(int iParam0, int iParam1, bool bParam2) //Position: 0x2DCB / 11723
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_89() //Position: 0x2DEB / 11755
{
	return 1;
}

void Function_90(bool bParam0) //Position: 0x2DF2 / 11762
{
	Function_91(StackVal, &uLocal_3, &uLocal_389, 2, 4294967295, 0);
	return;
}

void Function_91(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x2E0C / 11788
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

void Function_92(var uParam0) //Position: 0x2EE7 / 12007
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_93() //Position: 0x2EF6 / 12022
{
	return Function_94();
}

int Function_94() //Position: 0x2EFF / 12031
{
	var uVar0;
	
	Function_95(3, 3);
	uVar0 = uVar0;
	Local_209 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(Local_209))
	{
		Local_209 = CREATE_LAYOUT("RioBravo_layout");
	}
	Local_209.f_12 = CREATE_VOLUME_SET_IN_LAYOUT(Local_209, "riov_flk_BIRD_set");
	(*&Local_209 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_209, "birds", 2, -2936.324f, 50.52718f, 3478.539f, 0.0f, 0.0f, 0.0f, 2009.946f, 220.2406f, 1271.405f);
	ADD_TO_VOLUME_SET(Local_209.f_12, (*&Local_209 + 4)[0]);
	Local_209.f_48 = CREATE_VOLUME_SET_IN_LAYOUT(Local_209, "riov_flk_SOUTH_set");
	(*&Local_209 + 16)[0] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_wolfs1", 3, -3743.686f, 16.8916f, 3916.521f, 0.0f, 20.0f, 0.0f, 105.5447f, 154.5452f, 127.4068f);
	ADD_TO_VOLUME_SET(Local_209.f_48, (*&Local_209 + 16)[0]);
	(*&Local_209 + 16)[1] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_wolfs2", 3, -3506.154f, 30.11765f, 3982.611f, 0.0f, 20.0f, 0.0f, 142.0115f, 121.3969f, 90.83942f);
	ADD_TO_VOLUME_SET(Local_209.f_48, (*&Local_209 + 16)[1]);
	(*&Local_209 + 16)[2] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_wolfs3", 3, -3362.548f, 57.9931f, 3815.707f, 0.0f, 20.0f, 0.0f, 101.16f, 155.6165f, 93.06902f);
	ADD_TO_VOLUME_SET(Local_209.f_48, (*&Local_209 + 16)[2]);
	(*&Local_209 + 16)[3] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_wolfs4", 3, -3133.079f, 44.66625f, 3831.112f, 0.0f, 10.86343f, 0.0f, 139.1676f, 133.4854f, 41.1269f);
	ADD_TO_VOLUME_SET(Local_209.f_48, (*&Local_209 + 16)[3]);
	(*&Local_209 + 16)[4] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_wolfs5", 3, -2952.329f, 37.14508f, 3688.871f, 0.0f, 20.0f, 0.0f, 118.3164f, 118.3164f, 118.3164f);
	ADD_TO_VOLUME_SET(Local_209.f_48, (*&Local_209 + 16)[4]);
	(*&Local_209 + 16)[5] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_wolfs6", 3, -2762.144f, 29.45689f, 3700.321f, 0.0f, 2.40104f, 0.0f, 69.76539f, 141.8443f, 55.03979f);
	ADD_TO_VOLUME_SET(Local_209.f_48, (*&Local_209 + 16)[5]);
	(*&Local_209 + 16)[6] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_wolfs7", 3, -2506.896f, 15.99935f, 3744.206f, 0.0f, -11.53117f, 0.0f, 185.0573f, 90.62341f, 67.17472f);
	ADD_TO_VOLUME_SET(Local_209.f_48, (*&Local_209 + 16)[6]);
	Local_209.f_80 = CREATE_VOLUME_SET_IN_LAYOUT(Local_209, "riov_flk_NORTH_set");
	(*&Local_209 + 52)[0] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_coyote1", 3, -2543.914f, 28.1098f, 3241.62f, 0.0f, 20.0f, 0.0f, 167.0734f, 167.0734f, 119.6312f);
	ADD_TO_VOLUME_SET(Local_209.f_80, (*&Local_209 + 52)[0]);
	(*&Local_209 + 52)[1] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_coyote2", 3, -2835.932f, 43.16861f, 3294.67f, 0.0f, 20.0f, 0.0f, 141.1532f, 167.0734f, 75.033f);
	ADD_TO_VOLUME_SET(Local_209.f_80, (*&Local_209 + 52)[1]);
	(*&Local_209 + 52)[2] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_coyote3", 3, -3068.626f, 38.24369f, 3231.372f, 0.0f, 4.810986f, 0.0f, 125.0495f, 167.0734f, 94.41615f);
	ADD_TO_VOLUME_SET(Local_209.f_80, (*&Local_209 + 52)[2]);
	(*&Local_209 + 52)[3] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_coyote4", 3, -3350.161f, 36.14117f, 3274.167f, 0.0f, 20.0f, 0.0f, 150.0992f, 167.0734f, 136.9624f);
	ADD_TO_VOLUME_SET(Local_209.f_80, (*&Local_209 + 52)[3]);
	(*&Local_209 + 52)[4] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_coyote5", 3, -3649.194f, 26.09475f, 3335.014f, 0.0f, 20.0f, 0.0f, 143.9794f, 167.0734f, 141.4556f);
	ADD_TO_VOLUME_SET(Local_209.f_80, (*&Local_209 + 52)[4]);
	(*&Local_209 + 52)[5] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_coyote7", 3, -3762.593f, 9.663376f, 3614.673f, 0.0f, 20.0f, 0.0f, 116.0434f, 167.0734f, 142.3679f);
	ADD_TO_VOLUME_SET(Local_209.f_80, (*&Local_209 + 52)[5]);
	Local_209.f_140 = CREATE_VOLUME_SET_IN_LAYOUT(Local_209, "riov_flk_CENTER_set");
	(*&Local_209 + 84)[0] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar14", 3, -2187.696f, 64.25098f, 3575.605f, 0.0f, 20.0f, 0.0f, 27.86323f, 157.1503f, 42.22984f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[0]);
	(*&Local_209 + 84)[1] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar13", 3, -2320.311f, 70.27448f, 3561.265f, 0.0f, 20.0f, 0.0f, 95.70407f, 144.6171f, 97.58847f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[1]);
	(*&Local_209 + 84)[2] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar12", 3, -2480.455f, 82.55096f, 3444.212f, 0.0f, 20.0f, 0.0f, 122.6014f, 122.6014f, 91.0615f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[2]);
	(*&Local_209 + 84)[3] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar11", 3, -2485.426f, 64.84901f, 3595.959f, 0.0f, 20.0f, 0.0f, 73.32108f, 113.1796f, 56.82574f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[3]);
	(*&Local_209 + 84)[4] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar10", 3, -2701.399f, 49.12183f, 3584.517f, 0.0f, 8.018439f, 0.0f, 155.7843f, 116.0861f, 55.75488f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[4]);
	(*&Local_209 + 84)[5] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar9", 3, -2851.949f, 60.09787f, 3466.981f, 0.0f, 20.0f, 0.0f, 93.83244f, 99.31574f, 91.00473f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[5]);
	(*&Local_209 + 84)[6] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar8", 3, -3028.939f, 50.63153f, 3528.086f, 0.0f, 20.0f, 0.0f, 91.15942f, 100.0843f, 57.18759f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[6]);
	(*&Local_209 + 84)[7] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar7", 3, -3175.788f, 40.15686f, 3598.743f, 1.624279f, 44.85572f, 0.887722f, 76.40627f, 125.5066f, 97.42728f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[7]);
	(*&Local_209 + 84)[8] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar6", 3, -3370.746f, 26.10194f, 3588.201f, 0.0f, 20.0f, 0.0f, 97.32235f, 97.32235f, 97.32235f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[8]);
	(*&Local_209 + 84)[9] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar5", 3, -3542.015f, 29.66954f, 3709.699f, 0.0f, 20.0f, 0.0f, 104.6366f, 184.9402f, 129.9607f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[9]);
	(*&Local_209 + 84)[10] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar4", 3, -3531.635f, 38.14902f, 3508.3f, 0.0f, 20.0f, 0.0f, 96.00407f, 101.9702f, 67.79285f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[10]);
	(*&Local_209 + 84)[11] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar3", 3, -3246.255f, 44.17255f, 3452.389f, 0.0f, 20.0f, 0.0f, 81.35522f, 104.0305f, 68.30022f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[11]);
	(*&Local_209 + 84)[12] = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_cougar2", 3, -3068.657f, 60.23529f, 3405.431f, 0.0f, 20.0f, 0.0f, 98.48691f, 98.48691f, 71.01986f);
	ADD_TO_VOLUME_SET(Local_209.f_140, (*&Local_209 + 84)[12]);
	Local_209.f_144 = CREATE_VOLUME_IN_LAYOUT(Local_209, "riov_fomFTEStart", 3, -2677.207f, 71.65489f, 3442.786f, 0.0f, 3.664182f, 0.0f, 350.7747f, 219.6455f, 257.9375f);
	Local_209.f_212 = CREATE_VOLUME_SET_IN_LAYOUT(Local_209, "riov_aquaticWildlife_set");
	(*&Local_209 + 148)[0] = CREATE_VOLUME_IN_LAYOUT(Local_209, "Cylinder", 3, -3218.068f, 11.0468f, 3847.991f, 0.0f, 20.0f, 0.0f, 213.1174f, 120.1759f, 120.1759f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[0]);
	(*&Local_209 + 148)[1] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder1", 3, -2941.48f, 11.0468f, 3792.045f, 0.0f, 20.0f, 0.0f, 171.9794f, 120.1759f, 99.91642f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[1]);
	(*&Local_209 + 148)[2] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder2", 3, -2686.061f, 11.0468f, 3747.897f, 0.0f, -28.28134f, 0.0f, 171.9794f, 120.1759f, 94.77378f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[2]);
	(*&Local_209 + 148)[3] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder3", 3, -2384.365f, 11.0468f, 3823.475f, 0.0f, 21.16579f, 0.0f, 132.1029f, 120.1759f, 109.5332f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[3]);
	(*&Local_209 + 148)[4] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder4", 3, -2514.742f, 11.0468f, 3798.418f, 0.0f, 21.16579f, 0.0f, 79.56471f, 88.09631f, 80.29457f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[4]);
	(*&Local_209 + 148)[5] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder5", 3, -2257.712f, 11.0468f, 3725.557f, 0.0f, 21.16579f, 0.0f, 70.058f, 77.5702f, 70.70065f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[5]);
	(*&Local_209 + 148)[6] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder6", 3, -2098.511f, 11.0468f, 3594.111f, 0.0f, 21.16579f, 0.0f, 187.9939f, 77.5702f, 55.92756f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[6]);
	(*&Local_209 + 148)[7] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder7", 3, -1629.272f, 11.0468f, 3561.406f, 0.0f, 21.16579f, 0.0f, 104.9413f, 77.5702f, 51.65447f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[7]);
	(*&Local_209 + 148)[8] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder8", 3, -1794.395f, 11.0468f, 3580.832f, 0.0f, -18.15128f, 0.0f, 104.9413f, 77.5702f, 51.65447f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[8]);
	(*&Local_209 + 148)[9] = CREATE_VOLUME_IN_LAYOUT(Local_209, "nCylinder9", 3, -1908.039f, 11.0468f, 3551.692f, 0.0f, 0.5567674f, 0.0f, 104.9413f, 77.5702f, 63.30935f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[9]);
	(*&Local_209 + 148)[10] = CREATE_VOLUME_IN_LAYOUT(Local_209, "Cylinder10", 3, -3993.832f, 11.0468f, 3886.646f, 0.0f, 52.62321f, 0.0f, 83.51431f, 120.1759f, 168.2393f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[10]);
	(*&Local_209 + 148)[11] = CREATE_VOLUME_IN_LAYOUT(Local_209, "Cylinder11", 3, -3755.156f, 11.0468f, 4020.613f, 0.0f, 78.40577f, 0.0f, 65.93489f, 120.1759f, 168.2393f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[11]);
	(*&Local_209 + 148)[12] = CREATE_VOLUME_IN_LAYOUT(Local_209, "Cylinder12", 3, -3461.047f, 11.0468f, 3982.886f, 0.0f, 114.7503f, 0.0f, 54.94436f, 120.1759f, 101.3502f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[12]);
	(*&Local_209 + 148)[13] = CREATE_VOLUME_IN_LAYOUT(Local_209, "Cylinder13", 3, -3602.673f, 11.0468f, 4017.808f, 0.0f, 94.9091f, 0.0f, 54.94436f, 120.1759f, 101.3502f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[13]);
	(*&Local_209 + 148)[14] = CREATE_VOLUME_IN_LAYOUT(Local_209, "Cylinder14", 3, -3234.876f, 0.0f, 3981.952f, 165.0756f, 61.89607f, 173.9577f, 59.65659f, 82.87489f, 163.6885f);
	ADD_TO_VOLUME_SET(Local_209.f_212, (*&Local_209 + 148)[14]);
	*(&Local_209 + 216) = { -3491.979f, 29.20257f, 3781.121f };
	*(&Local_209 + 216 + 12) = { 0.0f, 176.8638f, 0.0f };
	Local_209.f_240 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingTree_rio1", -3491.979f, 29.20257f, 3781.121f, 0.0f, 176.8638f, 0.0f);
	*(&Local_209 + 244) = { -3496.0f, 29.15734f, 3782.336f };
	*(&Local_209 + 244 + 12) = { 0.0f, -93.25693f, 0.0f };
	Local_209.f_268 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingHorses_rio1", -3496.0f, 29.15734f, 3782.336f, 0.0f, -93.25693f, 0.0f);
	*(&Local_209 + 272) = { -3488.353f, 29.22202f, 3784.775f };
	*(&Local_209 + 272 + 12) = { 0.0f, 91.63598f, 0.0f };
	Local_209.f_296 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard1_rio1", -3488.353f, 29.22202f, 3784.775f, 0.0f, 91.63598f, 0.0f);
	*(&Local_209 + 300) = { -3485.45f, 29.29042f, 3782.769f };
	*(&Local_209 + 300 + 12) = { 0.0f, 106.103f, 0.0f };
	Local_209.f_324 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard2_rio1", -3485.45f, 29.29042f, 3782.769f, 0.0f, 106.103f, 0.0f);
	*(&Local_209 + 328) = { -3486.898f, 29.29042f, 3781.429f };
	*(&Local_209 + 328 + 12) = { 0.0f, 137.6902f, 0.0f };
	Local_209.f_352 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard3_rio1", -3486.898f, 29.29042f, 3781.429f, 0.0f, 137.6902f, 0.0f);
	*(&Local_209 + 356) = { -3491.979f, 29.22202f, 3784.775f };
	*(&Local_209 + 356 + 12) = { 0.0f, -85.94526f, 0.0f };
	Local_209.f_380 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingguy_rio1", -3491.979f, 29.22202f, 3784.775f, 0.0f, -85.94526f, 0.0f);
	*(&Local_209 + 384) = { -3329.551f, 42.9619f, 3262.086f };
	*(&Local_209 + 384 + 12) = { 0.0f, 160.6098f, 0.0f };
	Local_209.f_408 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingTree_rio2", -3329.551f, 42.9619f, 3262.086f, 0.0f, 160.6098f, 0.0f);
	*(&Local_209 + 412) = { -3348f, 39.27028f, 3260f };
	*(&Local_209 + 412 + 12) = { 0.0f, -50.21075f, 0.0f };
	Local_209.f_436 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingHorses_rio2", -3348f, 39.27028f, 3260f, 0.0f, -50.21075f, 0.0f);
	*(&Local_209 + 440) = { -3333.033f, 43.0371f, 3262.948f };
	*(&Local_209 + 440 + 12) = { 0.0f, -129.0054f, 0.0f };
	Local_209.f_464 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard1_rio2", -3333.033f, 43.0371f, 3262.948f, 0.0f, -129.0054f, 0.0f);
	*(&Local_209 + 468) = { -3336f, 42.26438f, 3269.568f };
	*(&Local_209 + 468 + 12) = { 0.0f, -36.00678f, 0.0f };
	Local_209.f_492 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard2_rio2", -3336f, 42.26438f, 3269.568f, 0.0f, -36.00678f, 0.0f);
	*(&Local_209 + 496) = { -3344f, 39.2618f, 3260f };
	*(&Local_209 + 496 + 12) = { 0.0f, -118.137f, 0.0f };
	Local_209.f_520 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard3_rio2", -3344f, 39.2618f, 3260f, 0.0f, -118.137f, 0.0f);
	*(&Local_209 + 524) = { -3329.979f, 42.79713f, 3265.775f };
	*(&Local_209 + 524 + 12) = { 0.0f, 48.33434f, 0.0f };
	Local_209.f_548 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingguy_rio2", -3329.979f, 42.79713f, 3265.775f, 0.0f, 48.33434f, 0.0f);
	*(&Local_209 + 552) = { -2375.709f, 80.88108f, 3428.962f };
	*(&Local_209 + 552 + 12) = { 0.0f, 161.6762f, 0.0f };
	Local_209.f_576 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingTree_rio3", -2375.709f, 80.88108f, 3428.962f, 0.0f, 161.6762f, 0.0f);
	*(&Local_209 + 580) = { -2370.019f, 81.33321f, 3430.07f };
	*(&Local_209 + 580 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_209.f_604 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingHorses_rio3", -2370.019f, 81.33321f, 3430.07f, 0.0f, 0.0f, 0.0f);
	*(&Local_209 + 608) = { -2373.481f, 81.02461f, 3430.985f };
	*(&Local_209 + 608 + 12) = { 0.0f, 123.5192f, 0.0f };
	Local_209.f_632 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard1_rio3", -2373.481f, 81.02461f, 3430.985f, 0.0f, 123.5192f, 0.0f);
	*(&Local_209 + 636) = { -2380.0f, 81.39855f, 3436.0f };
	*(&Local_209 + 636 + 12) = { 0.0f, -47.29213f, 0.0f };
	Local_209.f_660 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard2_rio3", -2380.0f, 81.39855f, 3436.0f, 0.0f, -47.29213f, 0.0f);
	*(&Local_209 + 664) = { -2378.847f, 81.56503f, 3438.408f };
	*(&Local_209 + 664 + 12) = { 0.0f, -23.36502f, 0.0f };
	Local_209.f_688 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingGuard3_rio3", -2378.847f, 81.56503f, 3438.408f, 0.0f, -23.36502f, 0.0f);
	*(&Local_209 + 692) = { -2376.083f, 80.94261f, 3432.821f };
	*(&Local_209 + 692 + 12) = { 0.0f, -59.15118f, 0.0f };
	Local_209.f_716 = CREATE_POINT_IN_LAYOUT(Local_209, "hangingguy_rio3", -2376.083f, 80.94261f, 3432.821f, 0.0f, -59.15118f, 0.0f);
	return 1;
}

void Function_95(int iParam0, int iParam1) //Position: 0x4358 / 17240
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

void Function_96(var uParam0, int iParam1) //Position: 0x43A1 / 17313
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_97() //Position: 0x43B0 / 17328
{
	return;
}

bool Function_98() //Position: 0x43B6 / 17334
{
	return Function_99();
}

int Function_99() //Position: 0x43BF / 17343
{
	bool bVar0;
	
	Function_95(3, 3);
	bVar0 = bVar0;
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_r", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_105(&Local_11 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	if (!Function_100(&Local_11 + 4))
	{
		return 0;
	}
	Local_11 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(Local_11))
	{
		Local_11 = CREATE_LAYOUT("RioBravo_layout");
	}
	Local_11.f_368 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint", -3160f, 44.41193f, 3292f, 0.0f, 0.0f, 0.0f);
	Local_11.f_372 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint1", -3119.047f, 47.93179f, 3283.574f, 0.0f, 0.0f, 0.0f);
	Local_11.f_376 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint3", -2000.0f, 42.88177f, 3572.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_380 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint4", -3512f, 13.42503f, 3144.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_384 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint5", -1948.986f, 30.338f, 3468.504f, 0.0f, 0.0f, 0.0f);
	Local_11.f_388 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint6", -2400.747f, 9.362f, 3965.143f, 0.0f, 0.0f, 0.0f);
	Local_11.f_392 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint7", -2832.009f, 20.221f, 3076.099f, 0.0f, 0.0f, 0.0f);
	Local_11.f_396 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint8", -2830.891f, 20.21f, 3077.916f, 0.0f, 0.0f, 0.0f);
	Local_11.f_400 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint9", -2827.172f, 20.218f, 3076.897f, 0.0f, 0.0f, 0.0f);
	Local_11.f_404 = CREATE_POINT_IN_LAYOUT(Local_11, "riof_bhint10", -3125.57f, 52.958f, 3331.625f, 0.0f, 328.684f, 0.0f);
	Local_11.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage", "Player_Herb_RedSage", -2128.0f, 78.30591f, 3568f, 0.0f, 0.0f, 0.0f);
	Local_11.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage1", "Player_Herb_RedSage", -2060.095f, 65.44154f, 3567.905f, 0.0f, 0.0f, 0.0f);
	Local_11.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage2", "Player_Herb_RedSage", -2204.0f, 81.87195f, 3536.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage3", "Player_Herb_RedSage", -2196.0f, 72.28235f, 3622.289f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_horse_stay6", "horse_stay", -3159.17f, 40.74809f, 3357.375f, 0.0f, -161.252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_horse_stay5", "horse_stay", -3161.255f, 40.81056f, 3357.217f, 0.0f, 1.104314f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_horse_stay4", "horse_stay", -3162.257f, 40.88935f, 3355.897f, 0.0f, -33.70702f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_rand_idle_stand1", "rand_idle_stand", -3163.328f, 48.60288f, 3338.12f, 0.0f, 24.23989f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_guntricks_e_any2", "stand_guntricks_e_any", -3170.379f, 48.039f, 3335.295f, 0.0f, -116.8604f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_Sit_Ground7", "sit_ground_smoke", -3184.32f, 47.07455f, 3334.734f, 0.0f, 171.0371f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Sit_Ground4", "stand_lookdistance_w_any", -2341.574f, 8.03136f, 3929.239f, 0.0f, -273.3786f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Sit_Ground3", "rand_idle_stand", -2342.725f, 8.031624f, 3925.27f, 0.0f, -206.3736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Sit_Ground2", "Rand_Idle_Sit_Ground", -2343.372f, 8.031362f, 3929.253f, 0.0f, -329.1709f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", -2341.646f, 8.031359f, 3927.058f, 0.0f, -247.171f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_look_distance_binocs2", "look_distance_binocs", -2385.283f, 13.65843f, 3944.406f, 0.0f, -11.7156f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Ground_Campfire_Tend4", "sit_ground_smoke", -2392.38f, 9.035279f, 3975.027f, 0.0f, -256.7545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Ground_Campfire_Tend3", "Sit_Ground_Only", -2393.851f, 9.03528f, 3974.437f, 0.0f, -232.1839f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Ground_Campfire_Tend2", "Sit_Ground_Drink", -2395.36f, 9.035281f, 3973.386f, 0.0f, -181.9568f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", -2396.675f, 9.035282f, 3975.035f, 0.0f, -108.9257f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_horse_stay7", "horse_stay", -2418.596f, 8.455927f, 3947.523f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_horse_stay6", "horse_stay", -2417.423f, 8.40713f, 3948.75f, 0.0f, -126.3067f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_horse_tend5", "horse_tend", -2420.452f, 8.474426f, 3946.628f, 0.0f, -178.6461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_horse_stay5", "horse_stay", -2392.424f, 9.035282f, 3972.488f, 0.0f, -77.91962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_horse_stay", "horse_stay", -2390.601f, 9.035286f, 3974.18f, 0.0f, -77.91962f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_horse_tend", "horse_tend", -2393.498f, 9.035286f, 3970.294f, 0.0f, -178.2487f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_rand_idle_stand", "rand_idle_stand", -2410.299f, 8.794f, 3970.471f, 0.0f, 74.69887f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_look_distance_binocs1", "look_distance_binocs", -2406.953f, 8.885f, 3972.906f, 0.0f, -179.8559f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "pasted__Ram_Pee", "Pee", -2427.78f, 8.031357f, 3952.751f, 0.0f, -220.2258f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_look_distance_binocs", "look_distance_binocs", -2379.605f, 13.45116f, 3959.745f, 0.0f, -145.4083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", -2403.277f, 8.82728f, 3971.173f, 0.0f, -235.7263f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_stand_guntricks", "stand_guntricks_e_any", -2397.134f, 9.035282f, 3973.341f, 0.0f, -125.0145f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_smoking_stand", "smoking_stand", -2401.506f, 8.984141f, 3972f, 0.0f, 108.3262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", -2344.619f, 8.11066f, 3926.381f, 0.0f, -160.6333f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_Sit_Ground6", "Rand_Idle_Sit_Ground", -3157.05f, 49.874f, 3335.208f, 0.0f, 199.8863f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_play_harmonica2", "sit_ground_play_harmonica", -2826.924f, 20.222f, 3075.662f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_peeing3", "stand_peeing_b_any", -2839.318f, 19.804f, 3087.875f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_424), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_Sit_Ground1", "Rand_Idle_Sit_Ground", -2828.607f, 20.079f, 3076.498f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_play_harmonica1", "sit_ground_play_harmonica", -2830.344f, 20.079f, 3077.056f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_Sit_Ground", "Rand_Idle_Sit_Ground", -2825.495f, 20.078f, 3065.822f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", -3554.44f, 15.6855f, 3158.265f, 0.0f, 209.569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_428), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_rand_idle_stand3", "stand_lookdistance_w_any", -3552.909f, 15.63719f, 3157.377f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DIR_WildFeverFew", "Player_Herb_WildFeverFew", -2011.576f, 45.81986f, 3593.491f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -1996.0f, 40.42086f, 3556.0f, 0.0f, 28.35921f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_look_distance_binocs2", "look_distance_binocs", -1998.833f, 50.1581f, 3599.239f, 0.0f, 180.5422f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -1983.027f, 48.83636f, 3599.454f, 0.0f, -152.7213f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_horse_tend", "horse_tend", -2000.002f, 42.62162f, 3569.909f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_horse_stay2", "horse_stay", -2000.0f, 41.35714f, 3561.477f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_horse_stay1", "horse_stay", -2000.0f, 41.78054f, 3563.465f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_horse_stay", "horse_stay", -1999.953f, 42.07273f, 3565.992f, 0.0f, -81.13202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_rand_idle_stand", "rand_idle_stand", -1997.602f, 43.169f, 3578.858f, 0.0f, 34.43791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_look_distance_binocs1", "look_distance_binocs", -2013.013f, 45.82755f, 3597.033f, 0.0f, 205.1078f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_stand_announce", "stand_announce", -1978.738f, 49.22998f, 3593.193f, 0.0f, -32.34185f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_stand_lookdistance_w_any", "stand_lookdistance_w_any", -1971.158f, 52.98363f, 3597.076f, 0.0f, -118.8713f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_Pee", "Pee", -2005.785f, 45.09604f, 3597.083f, 0.0f, -149.6704f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_look_distance_binocs", "look_distance_binocs", -1992.156f, 42.48289f, 3572.075f, 0.0f, -64.38241f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_sleeping_scripted", "sleeping_scripted", -1997.227f, 43.229f, 3575.407f, 0.0f, 29.99957f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_stand_drunk_throwbottle", "stand_drunk_throwbottle", -2002.435f, 43.169f, 3577.113f, 0.0f, -68.14408f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_smoking_stand", "smoking_stand", -1994.3f, 44.10772f, 3587.234f, 0.0f, 27.99556f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_sit_ground_play_harmonica", "sit_ground_play_harmonica", -1998.269f, 43.07348f, 3575.167f, 0.0f, -245.3799f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "DlR_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -1999.387f, 43.169f, 3577.917f, 0.0f, 0.6212928f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_rand_idle_stand2", "rand_idle_stand", -3555.438f, 15.60915f, 3159.332f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", -3543.762f, 15.3694f, 3162.819f, 0.0f, -210.2364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_432 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", -3545.373f, 15.49567f, 3162.648f, 0.0f, 34.25905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_432), 0);
	Local_11.f_436 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", -3544.541f, 15.49885f, 3161.289f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_436), 0);
	Local_11.f_440 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_look_distance_binocs2", "look_distance_binocs", -3545.451f, 15.64982f, 3159.776f, 0.0f, 138.5309f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_440), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_horse_tend1", "horse_tend", -3495.967f, 19.65504f, 3136.116f, 0.0f, -91.20521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_horse_tend", "horse_tend", -3499.674f, 16.25382f, 3147.382f, 0.0f, 21.67242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_horse_stay2", "horse_stay", -3497.875f, 16.7437f, 3146.125f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_horse_stay1", "horse_stay", -3496f, 17.07369f, 3146.051f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_horse_stay", "horse_stay", -3494.914f, 17.262f, 3150.906f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_look_distance_binocs1", "look_distance_binocs", -3516.268f, 15.515f, 3124.192f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_Pee", "Pee", -3492.114f, 19.66672f, 3136.246f, 0.0f, -26.90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_rand_idle_stand1", "rand_idle_stand", -3520.276f, 11.12099f, 3146.674f, 0.0f, 78.99949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_rand_idle_stand", "rand_idle_stand", -3509.928f, 13.78963f, 3146.481f, 0.0f, -82.29346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", -3511.514f, 13.83953f, 3143.129f, 0.0f, -161.3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", -3497.143f, 17.32072f, 3150.853f, 0.0f, -105.2133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_lean_rail", "look_distance_binocs", -3520.693f, 15.672f, 3127.985f, 0.0f, 37.36112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", -3516.66f, 15.74677f, 3134.089f, 0.0f, 41.5251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_look_distance_binocs", "look_distance_binocs", -3503.269f, 15.4507f, 3126.436f, 0.0f, -47.4214f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", -3507.42f, 14.41f, 3147.197f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_444 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_horse_stay", "horse_stay", -2809.631f, 20.06283f, 3078.922f, 0.0f, 262.5791f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_444), 0);
	Local_11.f_448 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_horse_stay1", "horse_stay", -2825.325f, 20.078f, 3061.285f, 0.0f, 291.1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_448), 0);
	Local_11.f_452 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_horse_stay2", "horse_stay", -2842.107f, 20.07843f, 3077.05f, 0.0f, -62.75959f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_452), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_horse_stay3", "horse_stay", -2839.699f, 19.8962f, 3083.606f, 0.0f, -92.17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_horse_stay4", "horse_stay", -2833.166f, 20.082f, 3098.089f, 0.0f, -92.17142f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_456 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_horse_stay5", "horse_stay", -2832.59f, 20.078f, 3061.418f, 0.0f, 291.1736f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_456), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_guntricks2", "stand_guntricks_e_any", -2831.572f, 20.078f, 3071.561f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_smoking_stand1", "smoking_stand", -2819.144f, 20.898f, 3097.647f, 0.0f, 8.869471f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_lookdistance1", "stand_lookdistance_w_any", -2860.124f, 18.071f, 3052.454f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_lookdistance2", "stand_lookdistance_w_any", -2839.148f, 19.074f, 3047.189f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_lookdistance3", "stand_lookdistance_w_any", -2816.013f, 19.074f, 3054.258f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_lookdistance4", "stand_lookdistance_w_any", -2794.852f, 19.075f, 3074.642f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_lookdistance5", "stand_lookdistance_w_any", -2807.877f, 20.397f, 3089.516f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_lookdistance6", "stand_lookdistance_w_any", -2877.226f, 18.9f, 3088.852f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_460 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_peeing2", "stand_peeing_b_any", -2856.467f, 18.07058f, 3083.134f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_460), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_guntricks1", "stand_guntricks_e_any", -2820.465f, 20.07843f, 3077.348f, 0.0f, -216.9882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_guntricks", "stand_guntricks_e_any", -2822.097f, 20.07843f, 3079.603f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_sleeping_wall_scripted", "sleeping_wall_scripted", -2832.129f, 20.19984f, 3075.018f, 0.0f, -91.55288f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_lookdistance_binocs", "look_distance_binocs", -2810.723f, 20.06739f, 3080.786f, 0.0f, -93.60166f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_NearWall_Shoulder_R", "Rand_Idle_NearWall_Shoulder_R", -2827.709f, 20.21305f, 3073.477f, 0.0f, -93.82076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_lean_fence_L_talking", "lean_fence_L_talking", -2815.689f, 20.069f, 3080.324f, 0.0f, -86.0629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_look_out_window_R", "look_out_window_R", -2827.741f, 20.22371f, 3077.974f, 0.0f, -183.1475f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_Rand_Idle_NearWall", "Rand_Idle_NearWall", -2834.184f, 20.0484f, 3078.272f, 0.0f, -269.9485f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "mrc_stand_lookdistance", "stand_lookdistance_w_any", -2808.104f, 19.074f, 3061.17f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_Sit_Ground5", "Rand_Idle_Sit_Ground", -3159.587f, 49.208f, 3337.611f, 0.0f, 125.8836f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_horse_stay5", "horse_stay", -1931.363f, 31.714f, 3457.895f, 0.0f, -90.69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_horse_stay4", "horse_stay", -1922.429f, 33.198f, 3457.79f, 0.0f, -119.5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_guntricks1", "stand_guntricks_e_any", -1935.254f, 31.071f, 3465.635f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_smoking_stand2", "smoking_stand", -1946.722f, 30.068f, 3464.956f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_Sit_Ground4", "Rand_Idle_Sit_Ground", -1954.085f, 30.043f, 3461.345f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_Sit_Ground3", "Rand_Idle_Sit_Ground", -1913.139f, 35.528f, 3465.48f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_Sit_Ground2", "Rand_Idle_Sit_Ground", -1931.168f, 31.081f, 3472.563f, 0.0f, -10.50106f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_smoking_stand1", "smoking_stand", -1947.871f, 30.049f, 3454.507f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_play_harmonica4", "sit_ground_play_harmonica", -1949.729f, 30.338f, 3468.748f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_play_harmonica3", "sit_ground_play_harmonica", -1944.537f, 30.174f, 3462.752f, 0.0f, -28.36382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_guntricks", "stand_guntricks_e_any", -1940.999f, 30.465f, 3466.823f, 0.0f, -37.21741f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_lookdistance4", "stand_lookdistance_w_any", -1938.157f, 40.077f, 3411.248f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_464 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_peeing4", "stand_peeing_b_any", -1938.611f, 31.35f, 3445.034f, 0.0f, 88.69489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_11.f_464), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_lookdistance3", "stand_lookdistance_w_any", -1928.01f, 31.471f, 3470.586f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_lookdistance2", "stand_lookdistance_w_any", -1905.697f, 37.586f, 3460.313f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_lookdistance1", "stand_lookdistance_w_any", -1973.683f, 23.404f, 3452.104f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_stand_lookdistance", "stand_lookdistance_w_any", -1966.768f, 24.473f, 3444.756f, 0.0f, 12.70308f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_horse_stay3", "horse_stay", -1928.781f, 32.027f, 3459.594f, 0.0f, -90.69595f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_horse_stay2", "horse_stay", -1919.589f, 33.631f, 3452.771f, 0.0f, -119.5589f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_sit_play_harmonica", "sit_ground_play_harmonica", -1945.132f, 30.25158f, 3468.703f, 0.0f, -76.99028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_smoking_stand", "smoking_stand", -1944.187f, 30.25158f, 3467.699f, 0.0f, -120.1609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_sleeping_scripted", "sleeping_scripted", -1948.295f, 30.42581f, 3469.483f, 0.0f, -56.70472f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_lookdistance_b2", "look_distance_binocs", -1937.952f, 30.59689f, 3471.31f, 0.0f, -168.9819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_lookdistance_b1", "look_distance_binocs", -1955.76f, 29.60071f, 3464.03f, 0.0f, 93.37398f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_look_out", "look_out_window_L", -1946.82f, 30.33619f, 3470.723f, 0.0f, -173.4546f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_sit_docks", "Rand_Idle_NearWall_Shoulder_L", -1944.898f, 30.25158f, 3469.718f, 0.0f, -89.65778f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "del_Pee", "Pee", -1949.664f, 30.068f, 3463.846f, 0.0f, -239.1129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3126.541f, 55.26898f, 3325.715f, 0.0f, 208.3396f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_drunk_throwbottle2", "stand_drunk_throwbottle", -3120f, 48.05134f, 3285.886f, 0.0f, -85.74197f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_drunk_rowdydrink2", "stand_drunk_rowdydrink", -3116.289f, 48.02755f, 3283.983f, 0.0f, -165.7704f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -3116.299f, 48.0468f, 3286.97f, 0.0f, 4.880137f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_horse_stay3", "horse_stay", -3122.469f, 44.295f, 3276.393f, 0.0f, -62.41935f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_horse_stay2", "horse_stay", -3116.799f, 44.8482f, 3275.256f, 0.0f, -84.97229f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_horse_stay1", "horse_stay", -3148.185f, 45.21606f, 3285.917f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_horse_stayf", "horse_stay", -3145.843f, 44.94708f, 3284.708f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_guntricks_e_any1", "stand_guntricks_e_any", -3164.408f, 48.90765f, 3306.279f, 0.0f, -107.4971f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_yawning_n_any", "stand_yawning_n_any", -3147.888f, 52.50456f, 3331.406f, 0.0f, -25.10501f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_guntricks_e_any", "stand_guntricks_e_any", -3162.687f, 43.39395f, 3284.156f, 0.0f, -116.8604f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_rand_idle_stand", "rand_idle_stand", -3161.706f, 44.13537f, 3285.432f, 0.0f, -34.07877f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_Pee", "Pee", -3181.828f, 44.61724f, 3291.591f, 0.0f, -145.4428f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_smoking_stand", "smoking_stand", -3161.215f, 48.66968f, 3305.215f, 0.0f, -193.7699f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3160.971f, 49.1858f, 3307.668f, 0.0f, 64.33193f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_Sit_Ground4", "Rand_Idle_Sit_Ground", -3118.486f, 48.08616f, 3286.486f, 0.0f, -57.33881f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Rep_look_distance_binocs6", "look_distance_binocs", -3116.516f, 47.90384f, 3282.219f, 0.0f, -15.7782f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_look_distance_binocs5", "look_distance_binocs", -3165.171f, 47.88364f, 3339.91f, 0.0f, 172.8329f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_lookdistance_w_any", "stand_lookdistance_w_any", -3208.021f, 48.54655f, 3325.991f, 0.0f, 60.81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_lookdistance_w_any6", "stand_lookdistance_w_any", -3151.599f, 55.1331f, 3326.926f, 0.0f, 60.81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_lookdistance_w_any4", "stand_lookdistance_w_any", -3153.294f, 44.676f, 3283.202f, 0.0f, 60.81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_lookdistance_w_any3", "stand_lookdistance_w_any", -3235.002f, 43.37407f, 3289.337f, 0.0f, 60.81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_stand_lookdistance_w_any5", "stand_lookdistance_w_any", -3239.588f, 45.36124f, 3323.61f, 0.0f, 60.81117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_lookdistance_binocs1", "look_distance_binocs", -3093.237f, 54.06651f, 3295.742f, 0.0f, 50.78083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_lookdistance_binocs", "look_distance_binocs", -3199.912f, 49.23763f, 3294.363f, 0.0f, 50.78083f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_11.f_468 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage10", "Player_Herb_RedSage", -2584f, 18.96817f, 3836.951f, 0.0f, 0.0f, 0.0f);
	Local_11.f_472 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage12", "Player_Herb_RedSage", -2653.214f, 71.27073f, 3674.935f, 0.0f, 0.0f, 0.0f);
	Local_11.f_476 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage13", "Player_Herb_RedSage", -2752f, 64.25098f, 3660.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_480 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage14", "Player_Herb_RedSage", -2860.954f, 84.32941f, 3656.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_484 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage15", "Player_Herb_RedSage", -2772.946f, 78.30584f, 3622.849f, 0.0f, 0.0f, 0.0f);
	Local_11.f_488 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage16", "Player_Herb_RedSage", -2650.237f, 81.31765f, 3614.626f, 0.0f, 0.0f, 0.0f);
	Local_11.f_492 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage17", "Player_Herb_RedSage", -2579.453f, 75.2982f, 3571.804f, 0.0f, 0.0f, 0.0f);
	Local_11.f_496 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage18", "Player_Herb_RedSage", -2528.0f, 73.28625f, 3516.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_500 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage19", "Player_Herb_RedSage", -2398.533f, 88.00005f, 3578.744f, 0.0f, 0.0f, 0.0f);
	Local_11.f_504 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage54", "Player_Herb_RedSage", -3720.0f, 19.47223f, 4068f, 0.0f, 0.0f, 0.0f);
	Local_11.f_508 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage20", "Player_Herb_RedSage", -2480.0f, 77.30194f, 3512.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_512 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage21", "Player_Herb_RedSage", -2376.0f, 90.35297f, 3484.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_516 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage22", "Player_Herb_RedSage", -2544.0f, 72.28235f, 3524.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_520 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage23", "Player_Herb_RedSage", -2575.155f, 69.27057f, 3386.922f, 0.0f, 0.0f, 0.0f);
	Local_11.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage24", "Player_Herb_RedSage", -2340.0f, 91.34657f, 3470.586f, 0.0f, 0.0f, 0.0f);
	Local_11.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage25", "Player_Herb_RedSage", -2406.008f, 88.34509f, 3540f, 0.0f, 0.0f, 0.0f);
	Local_11.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage26", "Player_Herb_RedSage", -2568.0f, 70.27451f, 3372.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage27", "Player_Herb_RedSage", -2380.0f, 78.16766f, 3413.836f, 0.0f, 0.0f, 0.0f);
	Local_11.f_540 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage28", "Player_Herb_RedSage", -2523.415f, 63.24707f, 3292.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_544 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage29", "Player_Herb_RedSage", -2618.338f, 60.23529f, 3261.621f, 0.0f, 0.0f, 0.0f);
	Local_11.f_548 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage30", "Player_Herb_RedSage", -2584.0f, 72.2552f, 3344.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_552 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage31", "Player_Herb_RedSage", -2640.04f, 70.66639f, 3343.903f, 0.0f, 0.0f, 0.0f);
	Local_11.f_556 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage32", "Player_Herb_RedSage", -2623.346f, 61.2392f, 3252.757f, 0.0f, -100.696f, 0.0f);
	Local_11.f_560 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage33", "Player_Herb_RedSage", -2608.0f, 58.22832f, 3220.38f, 0.0f, 0.0f, 0.0f);
	Local_11.f_564 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage45", "Player_Herb_RedSage", -3088.0f, 43.16861f, 3793.174f, 0.0f, 0.0f, 0.0f);
	Local_11.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage47", "Player_Herb_RedSage", -3261.243f, 37.4289f, 3796.019f, 0.0f, 0.0f, 0.0f);
	Local_11.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage48", "Player_Herb_RedSage", -3312.0f, 28.1098f, 3874.001f, 0.0f, 0.0f, 0.0f);
	Local_11.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage49", "Player_Herb_RedSage", -3354.739f, 31.10819f, 3872f, 0.0f, 0.0f, 0.0f);
	Local_11.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage50", "Player_Herb_RedSage", -3479.23f, 29.11372f, 3790.93f, 0.0f, 0.0f, 0.0f);
	Local_11.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage53", "Player_Herb_RedSage", -3552.0f, 31.12157f, 4032f, 0.0f, 0.0f, 0.0f);
	Local_11.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage55", "Player_Herb_RedSage", -3780.0f, 12.04705f, 3864f, 0.0f, 0.0f, 0.0f);
	Local_11.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage56", "Player_Herb_RedSage", -3784.537f, 20.34153f, 3820f, 0.0f, 0.0f, 0.0f);
	Local_11.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage58", "Player_Herb_RedSage", -3884.0f, 15.05882f, 3868f, 0.0f, 0.0f, 0.0f);
	Local_11.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage59", "Player_Herb_RedSage", -3740.0f, 16.88192f, 3676f, 0.0f, 0.0f, 0.0f);
	Local_11.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage60", "Player_Herb_RedSage", -3720.0f, 19.02363f, 3664f, 0.0f, 0.0f, 0.0f);
	Local_11.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage63", "Player_Herb_RedSage", -3600.0f, 28.1098f, 3548f, 0.0f, 0.0f, 0.0f);
	Local_11.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage65", "Player_Herb_RedSage", -3304.0f, 37.14508f, 3639.991f, 0.0f, 0.0f, 0.0f);
	Local_11.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage69", "Player_Herb_RedSage", -3159.258f, 46.17721f, 3395.738f, 0.0f, 0.0f, 0.0f);
	Local_11.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage72", "Player_Herb_RedSage", -3428f, 39.15937f, 3437.872f, 0.0f, 0.0f, 0.0f);
	Local_11.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage73", "Player_Herb_RedSage", -3370.748f, 39.15295f, 3353.252f, 0.0f, 0.0f, 0.0f);
	Local_11.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage76", "Player_Herb_RedSage", -3592.0f, 33.12939f, 3440f, 0.0f, 0.0f, 0.0f);
	Local_11.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage77", "Player_Herb_RedSage", -3736.011f, 8.031368f, 3367.968f, 0.0f, 0.0f, 0.0f);
	Local_11.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage78", "Player_Herb_RedSage", -3760.0f, 8.031368f, 3500.001f, 0.0f, 0.0f, 0.0f);
	Local_11.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage80", "Player_Herb_RedSage", -3700.347f, 8.047106f, 3547.551f, 0.0f, 0.0f, 0.0f);
	Local_11.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage81", "Player_Herb_RedSage", -3692.0f, 14.05489f, 3268f, 0.0f, 0.0f, 0.0f);
	Local_11.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage82", "Player_Herb_RedSage", -3566.34f, 14.0549f, 3256f, 0.0f, 0.0f, 0.0f);
	Local_11.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage84", "Player_Herb_RedSage", -3412f, 43.16864f, 3300f, 0.0f, 0.0f, 0.0f);
	Local_11.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage85", "Player_Herb_RedSage", -3278.227f, 42.16839f, 3394.21f, 0.0f, 0.0f, 0.0f);
	Local_11.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage86", "Player_Herb_RedSage", -3252f, 44.17255f, 3416f, 0.0f, 0.0f, 0.0f);
	Local_11.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage89", "Player_Herb_RedSage", -3244f, 38.06852f, 3156f, 0.0f, 0.0f, 0.0f);
	Local_11.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage90", "Player_Herb_RedSage", -3176f, 39.1916f, 3176f, 0.0f, 0.0f, 0.0f);
	Local_11.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage97", "Player_Herb_RedSage", -3384f, 17.06667f, 3149.725f, 0.0f, 0.0f, 0.0f);
	Local_11.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_RedSage98", "Player_Herb_RedSage", -3552f, 14.0549f, 3244f, 0.0f, 0.0f, 0.0f);
	Local_11.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -3360f, 17.06667f, 3160f, 0.0f, 0.0f, 0.0f);
	Local_11.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -3564.983f, 14.99426f, 3196.983f, 0.0f, 0.0f, 0.0f);
	Local_11.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -3480f, 36.41875f, 3330.627f, 0.0f, 0.0f, 0.0f);
	Local_11.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -3290.742f, 47.18433f, 3289.645f, 0.0f, 0.0f, 0.0f);
	Local_11.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -2971.6f, 20.96024f, 3082.742f, 0.0f, 0.0f, 0.0f);
	Local_11.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_WildFeverFew19", "Player_Herb_WildFeverFew", -2208.0f, 81.29002f, 3552.0f, 0.0f, 0.0f, 0.0f);
	Local_11.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_WildFeverFew20", "Player_Herb_WildFeverFew", -2176.0f, 78.30591f, 3564f, 0.0f, 0.0f, 0.0f);
	Local_11.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage", "Player_Herb_DesertSage", -3788.0f, 8.031364f, 3344f, 0.0f, 0.0f, 0.0f);
	Local_11.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", -3564f, 37.14511f, 3396f, 0.0f, 0.0f, 0.0f);
	Local_11.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -3436f, 35.13725f, 3360f, 0.0f, 0.0f, 0.0f);
	Local_11.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", -3541.646f, 38.14902f, 3470.473f, 0.0f, 0.0f, 0.0f);
	Local_11.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -3413.799f, 34.9981f, 3570.201f, 0.0f, 0.0f, 0.0f);
	Local_11.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -3508.0f, 25.09804f, 3628f, 0.0f, 0.0f, 0.0f);
	Local_11.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -3604.0f, 28.1098f, 3656.467f, 0.0f, 0.0f, 0.0f);
	Local_11.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -3750.897f, 17.9346f, 3692f, 0.0f, 0.0f, 0.0f);
	Local_11.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -3820.0f, 9.024844f, 3792f, 0.0f, 0.0f, 0.0f);
	Local_11.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -3761.782f, 21.08235f, 3824f, 0.0f, 0.0f, 0.0f);
	Local_11.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", -3861.371f, 14.15964f, 3828f, 0.0f, 0.0f, 0.0f);
	Local_11.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", -3908.0f, 12.17647f, 3879.762f, 0.0f, 0.0f, 0.0f);
	Local_11.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", -3612.0f, 29.11754f, 3912f, 0.0f, 0.0f, 0.0f);
	Local_11.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", -3576.0f, 46.08669f, 3796f, 0.0f, 0.0f, 0.0f);
	Local_11.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", -3477.363f, 30.11763f, 3828f, 0.0f, 0.0f, 0.0f);
	Local_11.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", -3562.483f, 31.12157f, 3997.31f, 0.0f, 0.0f, 0.0f);
	Local_11.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", -3872.0f, 13.92223f, 3932f, 0.0f, 0.0f, 0.0f);
	Local_11.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", -3777.49f, 21.30838f, 4002.51f, 0.0f, 0.0f, 0.0f);
	Local_11.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", -3456.0f, 29.23476f, 3956f, 0.0f, 0.0f, 0.0f);
	Local_11.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", -3277.899f, 40.15022f, 3530.462f, 0.0f, 0.0f, 0.0f);
	Local_11.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_11, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", -3248.0f, 39.15292f, 3708f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_11, "rep_rand_idle_stand2", "rand_idle_stand", -3159.823f, 43.95999f, 3285.607f, 0.0f, 48.95183f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	return 1;
}

bool Function_100(int iParam0) //Position: 0x9907 / 39175
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_104();
	iVar1 = 0;
	if (!Function_21(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_103(iParam0[iVar03], 8);
		}
		else if (Function_102())
		{
			iVar1 = 1;
			Function_103(iParam0[iVar03], 8);
		}
		Function_103(iParam0[iVar03], 16);
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
				Function_103(iParam0[iVar03], 1);
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
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_103(iParam0[iVar03], 2);
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
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_103(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_103(iParam0[iVar03], 2);
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
	Function_101();
	return 1;
}

void Function_101() //Position: 0x9C82 / 40066
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

bool Function_102() //Position: 0x9CC2 / 40130
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

void Function_103(var uParam0, int iParam1) //Position: 0x9CED / 40173
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_104() //Position: 0x9CFE / 40190
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

var Function_105(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x9D40 / 40256
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_106(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_103(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_106(var uParam0, int iParam1, int iParam2) //Position: 0x9D78 / 40312
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_21(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_103(uParam0[iVar03], 4);
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

bool Function_107() //Position: 0x9E3C / 40508
{
	return Function_108();
}

int Function_108() //Position: 0x9E45 / 40517
{
	var uVar0;
	
	Function_95(3, 3);
	uVar0 = uVar0;
	Local_6 = FIND_NAMED_LAYOUT("RioBravo_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("RioBravo_layout");
	}
	Local_6.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_6, "riov_fom_TL", 2, -2698.75f, 67.26273f, 3594.622f, 0.0f, 46.90526f, 0.0f, 233.9071f, 51.19311f, 162.187f);
	Local_6.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_6, "riov_fom_TR", 2, -2816.708f, 67.26276f, 3471.476f, 0.0f, -43.06648f, 0.0f, 182.4189f, 56.81593f, 216.5262f);
	Local_6.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_6, "riov_fom_BL", 2, -2552.932f, 70.78741f, 3466.534f, 0.0f, 47.35273f, 0.0f, 164.3603f, 46.83172f, 200.9831f);
	Local_6.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_6, "riov_fom_BR", 2, -2689.511f, 69.99854f, 3324.288f, 0.0f, 47.24931f, 0.0f, 182.6157f, 58.32756f, 197.6764f);
	return 1;
}

void Function_109() //Position: 0x9F80 / 40832
{
	ALLOW_TUMBLEWEEDS(0);
	return;
}

void Function_110(bool bParam0, int iParam1) //Position: 0x9F8A / 40842
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

