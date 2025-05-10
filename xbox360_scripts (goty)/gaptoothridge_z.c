//Decompiled with MagicRDR v1.0
//Function Count : 124
//Statics Count : 513
//Natives Count : 163
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<29> Local_6 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	struct<1089> Local_234 = { 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_123(&Var0, 3);
	Function_121();
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
				if (Function_119())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_110())
				{
					Function_109();
					Function_108(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_105())
				{
					Function_108(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_104(&uLocal_3);
				Function_102(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_101())
				{
					Function_94();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_93(iScriptParam_0);
				Function_92();
				Function_108(&(Global_29008[iScriptParam_0]), 8);
				if (Function_91(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_90(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_89(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_88(iScriptParam_0))
				{
					Function_82(iScriptParam_0);
					Function_81(64);
				}
				Function_108(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_88(iScriptParam_0))
				{
					Function_79(Function_80(), iScriptParam_0);
				}
				Function_78(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_77(&Var0, 5.0f);
				Function_108(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_65(iScriptParam_0);
				if (!Function_88(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_26(&uLocal_3, &uLocal_507, Function_64(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_91(&(Global_29008[iScriptParam_0]), 131072))
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
	Function_24();
	Function_18();
	Function_10(&uLocal_3, &uLocal_507);
	Function_8();
	Function_4(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_81(64);
	Function_90(&(Global_29008[iScriptParam_0]), 32);
	Function_90(&(Global_29008[iScriptParam_0]), 64);
	Function_90(&(Global_29008[iScriptParam_0]), 512);
	Function_90(&(Global_29008[iScriptParam_0]), 16);
	Function_90(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_77(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	SET_DUST_LEVEL(1);
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_26282[44]));
	return;
}

void Function_2(int iParam0) //Position: 0x30A / 778
{
	if (IS_OBJECTSET_VALID(iParam0->f_12))
	{
		Function_3(iParam0->f_12);
		DESTROY_OBJECTSET(iParam0->f_12);
	}
	iParam0->f_8 = 0;
	*iParam0 = 0;
	iParam0->f_4 = 0;
	return;
}

void Function_3(bool bParam0) //Position: 0x336 / 822
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_4(int iParam0) //Position: 0x37B / 891
{
	int iVar0;
	
	if (!Function_7(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_17483)
	{
		if (Global_17483[iVar075].f_92 == iParam0)
		{
			Function_5(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x3B1 / 945
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x3D3 / 979
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x3E9 / 1001
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x3FF / 1023
{
	HORSE_REMOVE_REPULSION_EXCLUSION_VOLUME(Local_234.f_276);
	Function_9();
	return;
}

void Function_9() //Position: 0x411 / 1041
{
	RELEASE_LAYOUT_REF(Local_234);
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0x41C / 1052
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_17(iParam1[iVar03], 4))
		{
			SET_CURRENT_MAP(false);
			Function_16(iParam1[iVar03], 4);
		}
		if (Function_17(iParam1[iVar03], 8))
		{
			Function_11(0, 0, 30);
			Function_16(iParam1[iVar03], 8);
		}
		iVar0++;
	}
	return;
}

void Function_11(int iParam0, int iParam1, int iParam2) //Position: 0x474 / 1140
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
		Function_12(Global_16524, bVar0, 1);
	}
	return;
}

void Function_12(int iParam0, bool bParam1, bool bParam2) //Position: 0x55A / 1370
{
	int iVar0;
	
	Function_15(iParam0);
	Function_14(bParam1);
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
	Function_13();
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

void Function_13() //Position: 0x6D3 / 1747
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_14(bool bParam0) //Position: 0x6DF / 1759
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

void Function_15(int iParam0) //Position: 0x725 / 1829
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

void Function_16(int iParam0, int iParam1) //Position: 0x76B / 1899
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x785 / 1925
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x7A2 / 1954
{
	Function_19();
	return;
}

void Function_19() //Position: 0x7AB / 1963
{
	Function_20(&Local_14 + 4);
	RELEASE_LAYOUT_REF(Local_14);
	return;
}

void Function_20(int iParam0) //Position: 0x7BD / 1981
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_21(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_21(var uParam0, int iParam1) //Position: 0x7E3 / 2019
{
	if (Function_23(uParam0[iParam13], 4))
	{
		if (Function_23(uParam0[iParam13], 1))
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
			Function_22(uParam0[iParam13], 1);
			Function_22(uParam0[iParam13], 2);
			Function_22(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_22(var uParam0, int iParam1) //Position: 0x911 / 2321
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_23(int iParam0, int iParam1) //Position: 0x92B / 2347
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24() //Position: 0x948 / 2376
{
	Function_25();
	return;
}

void Function_25() //Position: 0x951 / 2385
{
	RELEASE_LAYOUT_REF(Local_6);
	return;
}

void Function_26(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x95C / 2396
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	uParam0->f_4 = 0;
	uVar2 = Global_3386;
	Global_3386 = 0;
	if (!Function_63(32) || !IS_ACTOR_VALID(bParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (Function_27(uParam1[iVar03], bParam2, uParam3, iVar1, uVar2))
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

bool Function_27(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x9DD / 2525
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_62(iParam0))
	{
		return 0;
	}
	Function_90(&(Global_29008[iParam2]), 4194304);
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
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 8))
						{
							if (DECOR_CHECK_EXIST(StackVal, "customweather"))
							{
								Function_60(DECOR_GET_INT(StackVal, "customweather"), 0, 0, 30, 1);
								Function_59(iParam0, 8);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_11(0, 0, 0);
						}
						else
						{
							Function_11(0, 0, 30);
						}
						Function_16(iParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 4))
						{
							if (DECOR_CHECK_EXIST(StackVal, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(StackVal, "ncustommap"));
								Function_59(iParam0, 4);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_16(iParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_58(0, 0, 1, 1)) && !Global_3403) && !Global_3404) && !Function_57(2048)) && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (!Function_17(iParam0, 2))
					{
						if (!Function_17(iParam0, 16))
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
							if (Function_56())
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								Function_59(iParam0, 16);
								Function_48(StackVal, 3, 28, GET_OBJECT_FROM_VOLUME(bParam1), 0);
							}
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (Function_17(iParam0, 16))
					{
						Function_16(iParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_3380)
				{
					if (!Function_17(iParam0, 2))
					{
						if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(StackVal, DECOR_GET_INT(StackVal, "factionswap"), DECOR_GET_INT(2, "relationship"));
						}
					}
				}
				else if (Function_17(iParam0, 2))
				{
					if (StackVal && DECOR_CHECK_EXIST(DECOR_CHECK_EXIST(StackVal, "factionswap"), "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(StackVal, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_59(iParam0, 2);
			}
			else
			{
				Function_16(iParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_7(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(StackVal, bParam1))
			{
				if (!Function_91(&(Global_29008[iParam2]), 262144))
				{
					if (!Function_17(iParam0, 1))
					{
						if (!Global_3377)
						{
							Function_47(StackVal, StackVal, *iParam0);
						}
						else
						{
							Global_3377 = 0;
						}
						Function_59(iParam0, 1);
					}
				}
				if (*iParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_46(Global_29155[Global_29155[iParam210]10].f_20, Global_29155[iParam210].f_20);
					}
					Global_3386 = 1;
				}
				Function_28(iParam2);
			}
			else if (*iParam0 == 4)
			{
				Global_3386 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_28(int iParam0) //Position: 0xDF6 / 3574
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_91(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_108(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_33(473, 1, 0, 0);
		iVar0 = Function_32(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_33(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_33(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_33(476, 1, 0, 0);
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
		Function_31(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_31(7, 30);
	}
	if (Function_30(473) <= Function_29(473))
	{
		if (!Function_56())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

float Function_29(int iParam0) //Position: 0xEF5 / 3829
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

float Function_30(int iParam0) //Position: 0xF32 / 3890
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xF6B / 3947
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

var Function_32(int iParam0) //Position: 0xFD2 / 4050
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_7(iParam0))
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

int Function_33(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x102A / 4138
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
	Function_45(iParam0, TO_FLOAT(bParam1), 1);
	Function_44(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_34(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_34(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x124A / 4682
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_29(390))), 32);
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
					bVar19 = (Function_30(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_30(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_42(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_39(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_36(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_35(), &Var9);
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

var Function_35() //Position: 0x1877 / 6263
{
	int iVar0;
	
	return iVar0;
}

var Function_36(int iParam0) //Position: 0x187F / 6271
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_37(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1890 / 6288
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_38(char* cParam0, bool bParam1) //Position: 0x1985 / 6533
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_39(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x199E / 6558
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_41(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_40(Function_41(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_40(int iParam0, int iParam1) //Position: 0x1A03 / 6659
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_41(int iParam0, bool bParam1) //Position: 0x1A15 / 6677
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_42(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1A27 / 6695
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
	if (((Function_43(iParam0) != 19 || Function_43(iParam0) != 17) || Function_43(iParam0) != 10) || Function_43(iParam0) != 9)
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

int Function_43(int iParam0) //Position: 0x1B57 / 6999
{
	return Global_35278[iParam020].f_48;
}

void Function_44(int iParam0) //Position: 0x1B66 / 7014
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

int Function_45(int iParam0, float fParam1, bool bParam2) //Position: 0x1D00 / 7424
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

void Function_46(var uParam0, int iParam1) //Position: 0x1F44 / 8004
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_47(struct<5> Param0) //Position: 0x1F51 / 8017
{
	if (!StackVal != Global_13053)
	{
		Global_13053 = StackVal;
		Global_13053.f_8 = Param0;
		Global_13053.f_4 = 0;
	}
	return;
}

var Function_48(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1F77 / 8055
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Function_55(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_54(iParam1))
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
	if (!Function_51(1))
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
		bVar5 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar3, bVar5);
		if (!bParam4)
		{
			SET_CRIME_WITNESSED(bVar3, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(bVar3, 3);
			Function_49();
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

void Function_49() //Position: 0x2207 / 8711
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_50(bVar0, iVar1);
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

void Function_50(bool bParam0, bool bParam1) //Position: 0x226A / 8810
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

bool Function_51(bool bParam0) //Position: 0x2299 / 8857
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_53())
	{
		return 0;
	}
	if (!Function_57(1))
	{
		return 0;
	}
	if (!Function_57(4096))
	{
		return 0;
	}
	if (bParam0 && Function_52(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_57(2048))
	{
		return 0;
	}
	if (Function_56() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_52(int iParam0) //Position: 0x230F / 8975
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_53() //Position: 0x2320 / 8992
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

bool Function_54(int iParam0) //Position: 0x2339 / 9017
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x234F / 9039
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_56() //Position: 0x2364 / 9060
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_57(int iParam0) //Position: 0x236D / 9069
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x238B / 9099
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

void Function_59(int iParam0, int iParam1) //Position: 0x242F / 9263
{
	iParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x2440 / 9280
{
	int iVar0;
	bool bVar1;
	
	Function_15(uParam0);
	Global_16524.f_4 = uParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_61(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_12(StackVal, bVar1, bParam4);
		}
	}
}

void Function_61(int iParam0, int iParam1) //Position: 0x24B2 / 9394
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_15(iParam0);
	Function_14(iVar0);
	PRINTNL();
	Function_12(iParam0, iVar0, iParam1);
	return;
}

bool Function_62(int iParam0) //Position: 0x24D7 / 9431
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

bool Function_63(int iParam0) //Position: 0x24F4 / 9460
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x2510 / 9488
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(int iParam0) //Position: 0x2525 / 9509
{
	iParam0 = iParam0;
	Function_66(&(Global_26282[44]), "TWG", 18, Local_6, 4);
	return;
}

void Function_66(int iParam0, char* cParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2543 / 9539
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (StackVal)
	{
		if (iParam4 == 1)
		{
			if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 250.0f)
			{
				Function_2(iParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_75(iParam0, 63))
			{
				if (Function_74(76) || Function_73(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_72(cParam1, iParam0, 3, bParam3);
						Function_69(iParam0, 63);
					}
					else
					{
						return;
					}
				}
			}
		}
		return;
	}
	if (iParam4 == 1)
	{
		if (VDIST(Global_34574, -1804.95f, 23.088f, 2810.314f) < 200.0f)
		{
			return;
		}
		if (Global_26282[14] == 0)
		{
			Function_68();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(Global_34574, -2912.0f, 19.075f, 2693.999f) < 200.0f)
		{
			return;
		}
		if (Global_26282[34] == 0)
		{
			Function_67();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_75(iParam0, 63))
		{
			if (Function_74(76) || Function_73(76))
			{
				Function_72(cParam1, iParam0, 3, bParam3);
				Function_69(iParam0, 63);
			}
		}
	}
	iParam0->f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_72(cParam1, iParam0, bVar0, bParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_67() //Position: 0x273E / 10046
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_26282[34] = 0;
	Global_26282[34].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_69(&(Global_26282[34]), iVar0);
		iVar0++;
	}
	return;
}

void Function_68() //Position: 0x2785 / 10117
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_26282[14] = 0;
	Global_26282[14].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_69(&(Global_26282[14]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x27D7 / 10199
{
	if (iParam1 <= 32)
	{
		Function_70(iParam0, Function_71(iParam1));
	}
	else
	{
		Function_70(iParam0 + 4, Function_71((iParam1 - 32)));
	}
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x2800 / 10240
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_71(bool bParam0) //Position: 0x280F / 10255
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_72(char* cParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x281B / 10267
{
	bool bVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(iParam1->f_12))
	{
		iParam1->f_12 = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", bParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_75(iParam1, bParam2))
		{
			bVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(bParam3, Function_35(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(bVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(bVar0, iParam1->f_12);
			}
			else
			{
				return 0;
			}
		}
		bVar5++;
	}
	return 1;
}

int Function_73(int iParam0) //Position: 0x28BB / 10427
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_74(int iParam0) //Position: 0x28D0 / 10448
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_75(int iParam0, bool bParam1) //Position: 0x28E5 / 10469
{
	if (bParam1 <= 32)
	{
		return Function_76(*iParam0, Function_71(bParam1));
	}
	return Function_76(StackVal, Function_71((bParam1 - 32)));
}

bool Function_76(bool bParam0, int iParam1) //Position: 0x2910 / 10512
{
	return (bParam0 && iParam1) == 0;
}

void Function_77(bool bParam0, float fParam1) //Position: 0x291D / 10525
{
	if (!Function_63(128))
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

void Function_78(int iParam0) //Position: 0x295B / 10587
{
	if (!Function_7(iParam0))
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

void Function_79(bool bParam0, bool bParam1) //Position: 0x29ED / 10733
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
		Function_46(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_56())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

var Function_80() //Position: 0x2AE7 / 10983
{
	return Local_6;
}

void Function_81(int iParam0) //Position: 0x2AEF / 10991
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_82(bool bParam0) //Position: 0x2B02 / 11010
{
	Function_83(StackVal, 0, 0.25f, 0, Local_6, !Function_87(&Global_30658));
	return;
}

void Function_83(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2B24 / 11044
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
		Function_86();
	}
	if (bParam5)
	{
		Function_84(1048576);
	}
}

void Function_84(int iParam0) //Position: 0x2C37 / 11319
{
	Function_85(&Global_28842, iParam0);
	return;
}

void Function_85(var uParam0, var uParam1) //Position: 0x2C45 / 11333
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_86() //Position: 0x2C60 / 11360
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_84(16384);
	}
	return;
}

bool Function_87(int iParam0) //Position: 0x2C7C / 11388
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_7((*iParam0)[iVar0]))
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

bool Function_88(int iParam0) //Position: 0x2CC9 / 11465
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_30628[0])
	{
		return Function_87(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_87(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_87(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_87(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_87(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_87(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_87(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_87(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_87(&Global_30717);
	}
	return 0;
}

void Function_89(int iParam0) //Position: 0x2DA6 / 11686
{
	iParam0 = iParam0;
	return;
}

void Function_90(var uParam0, int iParam1) //Position: 0x2DB0 / 11696
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_91(int iParam0, int iParam1) //Position: 0x2DC7 / 11719
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_92() //Position: 0x2DE3 / 11747
{
	return;
}

void Function_93(var uParam0) //Position: 0x2DE9 / 11753
{
	uParam0 = uParam0;
	return;
}

void Function_94() //Position: 0x2DF3 / 11763
{
	Function_95(Global_30628[1]);
	Global_29004 = 0;
	return;
}

void Function_95(int iParam0) //Position: 0x2E06 / 11782
{
	int iVar0;
	
	iVar0 = Function_96(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_76(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_76(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_76(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_76(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_76(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_76(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_76(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_76(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_76(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

int Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x303E / 12350
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_100(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_97(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_97(bParam0, bParam1, bParam2, 4294967295);
}

int Function_97(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x309C / 12444
{
	var uVar0;
	
	if (!Function_99(bParam2))
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
	uVar0 = Function_100(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_98(uVar0);
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

int Function_98(int iParam0) //Position: 0x31F1 / 12785
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

bool Function_99(int iParam0) //Position: 0x322F / 12847
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x3244 / 12868
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_101() //Position: 0x3264 / 12900
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_102(bool bParam0) //Position: 0x327A / 12922
{
	Function_103(StackVal, &uLocal_3, &uLocal_507, 2, 4294967295, 0);
	return;
}

void Function_103(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4, bool bParam5) //Position: 0x3294 / 12948
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

void Function_104(var uParam0) //Position: 0x336F / 13167
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_105() //Position: 0x337E / 13182
{
	if (Function_106())
	{
		HORSE_ADD_REPULSION_EXCLUSION_VOLUME(Local_234.f_276);
		return 1;
	}
	return 0;
}

bool Function_106() //Position: 0x3396 / 13206
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = uVar0;
	Local_234 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(Local_234))
	{
		Local_234 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	Local_234.f_36 = CREATE_VOLUME_SET_IN_LAYOUT(Local_234, "gapv_flk_SW_set");
	(*&Local_234 + 4)[0] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_cougar1", 3, -3730.356f, 36.8742f, 3889.749f, 0.0f, -24.86723f, 0.0f, 304.9792f, 62.04052f, 150.1546f);
	ADD_TO_VOLUME_SET(Local_234.f_36, (*&Local_234 + 4)[0]);
	(*&Local_234 + 4)[1] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_cougar2", 3, -4134.223f, 12.24644f, 3666.115f, 0.0f, -15.36179f, 0.0f, 171.6768f, 71.60851f, 101.9429f);
	ADD_TO_VOLUME_SET(Local_234.f_36, (*&Local_234 + 4)[1]);
	(*&Local_234 + 4)[2] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_cougar3", 3, -4491.881f, 57.92462f, 3660.276f, 0.0f, 2.802504f, 0.0f, 236.791f, 71.60851f, 82.65063f);
	ADD_TO_VOLUME_SET(Local_234.f_36, (*&Local_234 + 4)[2]);
	(*&Local_234 + 4)[3] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_cougar4", 3, -4578.422f, 59.23138f, 3413.898f, 0.0f, 20.0f, 0.0f, 131.124f, 87.22605f, 181.0108f);
	ADD_TO_VOLUME_SET(Local_234.f_36, (*&Local_234 + 4)[3]);
	(*&Local_234 + 4)[4] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_cougar5", 3, -4668.099f, 73.28625f, 3155.711f, 0.0f, 20.0f, 0.0f, 140.4411f, 110.4049f, 90.32107f);
	ADD_TO_VOLUME_SET(Local_234.f_36, (*&Local_234 + 4)[4]);
	(*&Local_234 + 4)[5] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_cougar6", 3, -4723.405f, 45.17632f, 2960.281f, 0.0f, 20.0f, 0.0f, 150.1546f, 105.9404f, 112.3504f);
	ADD_TO_VOLUME_SET(Local_234.f_36, (*&Local_234 + 4)[5]);
	(*&Local_234 + 4)[6] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_cougar9", 3, -4515.046f, 40.54584f, 2733.641f, 0.0f, 20.0f, 0.0f, 150.1546f, 105.9404f, 102.4075f);
	ADD_TO_VOLUME_SET(Local_234.f_36, (*&Local_234 + 4)[6]);
	Local_234.f_108 = CREATE_VOLUME_SET_IN_LAYOUT(Local_234, "gapv_flk_CENTER_set");
	(*&Local_234 + 40)[0] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote13", 3, -3852.005f, 43.54098f, 3084.998f, 0.0f, 20.0f, 0.0f, 93.92755f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[0]);
	(*&Local_234 + 40)[1] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote12", 3, -3863.799f, 40.15688f, 2789.859f, 0.0f, -12.97189f, 0.0f, 177.9536f, 46.625f, 96.68821f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[1]);
	(*&Local_234 + 40)[2] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote11", 3, -4013.259f, 43.35964f, 2709.135f, 0.0f, 20.0f, 0.0f, 118.6683f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[2]);
	(*&Local_234 + 40)[3] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote10", 3, -4440.555f, 21.08234f, 2939.447f, 0.0f, 20.0f, 0.0f, 128.5317f, 46.625f, 105.729f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[3]);
	(*&Local_234 + 40)[4] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote9", 3, -3980.355f, 17.56864f, 3519.065f, 0.0f, 20.0f, 0.0f, 83.27316f, 46.625f, 111.4658f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[4]);
	(*&Local_234 + 40)[5] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote8", 3, -3664.592f, 22.15984f, 3224.203f, 0.0f, 20.0f, 0.0f, 116.8603f, 46.625f, 100.8802f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[5]);
	(*&Local_234 + 40)[6] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote7", 3, -3890.831f, 48.57193f, 3324.378f, 0.0f, 20.0f, 0.0f, 113.1811f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[6]);
	(*&Local_234 + 40)[7] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote6", 3, -4175.384f, 20.45136f, 2847.836f, 0.0f, 20.0f, 0.0f, 148.9403f, 46.625f, 82.46219f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[7]);
	(*&Local_234 + 40)[8] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote5", 3, -4258.71f, 20.07837f, 3098.507f, 0.0f, 20.0f, 0.0f, 111.7724f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[8]);
	(*&Local_234 + 40)[9] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote4", 3, -4145.278f, 8.031376f, 3324.61f, 0.0f, 20.0f, 0.0f, 94.02903f, 46.625f, 117.4999f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[9]);
	(*&Local_234 + 40)[10] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote3", 3, -3624f, 38.65096f, 3012f, 0.0f, 20.0f, 0.0f, 128.5317f, 46.625f, 105.9383f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[10]);
	(*&Local_234 + 40)[11] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote2", 3, -4047.658f, 31.78262f, 3123.171f, 0.0f, 20.0f, 0.0f, 74.5942f, 46.625f, 128.5317f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[11]);
	(*&Local_234 + 40)[12] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote1", 3, -3726.287f, 26.10191f, 3495.43f, 0.0f, 45.93203f, 0.0f, 215.7331f, 46.625f, 83.69476f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[12]);
	(*&Local_234 + 40)[13] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_coyote23", 3, -4372.67f, 7.027458f, 3300.181f, 0.0f, 28.99118f, 0.0f, 87.18033f, 65.00832f, 284.0809f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[13]);
	(*&Local_234 + 40)[14] = CREATE_VOLUME_IN_LAYOUT(Local_234, "wild_horses1", 3, -3774.399f, 33.12946f, 2507.993f, 0.0f, 20.0f, 0.0f, 164.3489f, 80.34592f, 193.7874f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[14]);
	(*&Local_234 + 40)[15] = CREATE_VOLUME_IN_LAYOUT(Local_234, "wild_horses2", 3, -3549.128f, 38.02006f, 2774.042f, 0.0f, 20.0f, 0.0f, 128.2424f, 51.37399f, 128.2424f);
	ADD_TO_VOLUME_SET(Local_234.f_108, (*&Local_234 + 40)[15]);
	Local_234.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_234, "gapv_flk_BIRD_set");
	(*&Local_234 + 112)[0] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird1", 3, -4673.488f, 49.81181f, 3619.366f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[0]);
	(*&Local_234 + 112)[1] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird2", 3, -4158.848f, 49.81181f, 3610.948f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[1]);
	(*&Local_234 + 112)[2] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird3", 3, -3743.4f, 49.81181f, 3900.585f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[2]);
	(*&Local_234 + 112)[3] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird4", 3, -4224.0f, 49.81181f, 2514.306f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[3]);
	(*&Local_234 + 112)[4] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird5", 3, -4223.394f, 49.81181f, 3067.605f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[4]);
	(*&Local_234 + 112)[5] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird6", 3, -3850.352f, 49.81181f, 3213.313f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[5]);
	(*&Local_234 + 112)[6] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird7", 3, -3737.023f, 49.81181f, 2288.829f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[6]);
	(*&Local_234 + 112)[7] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird8", 3, -3727.507f, 49.81181f, 3392.048f, 0.0f, 20.0f, 0.0f, 323.9767f, 94.73581f, 323.9767f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[7]);
	(*&Local_234 + 112)[8] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird9", 3, -4544.312f, 72.68917f, 2828.797f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[8]);
	(*&Local_234 + 112)[9] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird10", 3, -4387.063f, 72.68917f, 3291.948f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[9]);
	(*&Local_234 + 112)[10] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird11", 3, -4749.257f, 72.68917f, 3153.838f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[10]);
	(*&Local_234 + 112)[11] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_bird12", 3, -3801.342f, 72.68917f, 2786.786f, 0.0f, 20.0f, 0.0f, 316.7415f, 106.1634f, 316.7415f);
	ADD_TO_VOLUME_SET(Local_234.f_164, (*&Local_234 + 112)[11]);
	Local_234.f_196 = CREATE_VOLUME_SET_IN_LAYOUT(Local_234, "gapv_flk_NORTH_set");
	(*&Local_234 + 168)[0] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_wolf1", 3, -4228.547f, 29.1136f, 2643.438f, 0.0f, 20.0f, 0.0f, 111.5883f, 136.3014f, 95.68554f);
	ADD_TO_VOLUME_SET(Local_234.f_196, (*&Local_234 + 168)[0]);
	(*&Local_234 + 168)[1] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_wolf2", 3, -4090.676f, 3.011772f, 2466.493f, 0.0f, 20.0f, 0.0f, 110.3815f, 91.51485f, 107.7598f);
	ADD_TO_VOLUME_SET(Local_234.f_196, (*&Local_234 + 168)[1]);
	(*&Local_234 + 168)[2] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_wolf3", 3, -3864.493f, 89.40626f, 2090.393f, 0.0f, 20.0f, 0.0f, 123.8143f, 129.7085f, 227.4212f);
	ADD_TO_VOLUME_SET(Local_234.f_196, (*&Local_234 + 168)[2]);
	(*&Local_234 + 168)[3] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_wolf4", 3, -4083.459f, 94.8625f, 2190.223f, 0.0f, 20.0f, 0.0f, 117.2605f, 129.7085f, 176.7809f);
	ADD_TO_VOLUME_SET(Local_234.f_196, (*&Local_234 + 168)[3]);
	(*&Local_234 + 168)[4] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_wolf5", 3, -4182.706f, 61.91979f, 2404.235f, 0.0f, 40.66191f, 0.0f, 86.04659f, 91.51485f, 320.4328f);
	ADD_TO_VOLUME_SET(Local_234.f_196, (*&Local_234 + 168)[4]);
	(*&Local_234 + 168)[5] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gtrv_wolf6", 3, -4379.103f, 30.77201f, 2512.407f, 0.0f, 58.91275f, 0.0f, 132.8442f, 91.51485f, 97.09076f);
	ADD_TO_VOLUME_SET(Local_234.f_196, (*&Local_234 + 168)[5]);
	Local_234.f_200 = CREATE_VOLUME_IN_LAYOUT(Local_234, "ngtrv_bats", 3, -4346.91f, 30.45788f, 2756.438f, 0.0f, 148.838f, 0.0f, 14.41106f, 11.15615f, 16.66331f);
	Local_234.f_272 = CREATE_VOLUME_SET_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_set");
	(*&Local_234 + 204)[0] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_01", 3, -5209.555f, 22.96273f, 3348.832f, 0.0f, 20.0f, 0.0f, 137.0641f, 137.0641f, 137.0641f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[0]);
	(*&Local_234 + 204)[1] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_02", 3, -4843.528f, 22.96273f, 3439.209f, 0.0f, 20.0f, 0.0f, 89.7691f, 89.7691f, 89.7691f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[1]);
	(*&Local_234 + 204)[2] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_03", 3, -4983.613f, 22.96273f, 3592.85f, 0.0f, 29.19471f, 0.0f, 112.0248f, 89.7691f, 250.294f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[2]);
	(*&Local_234 + 204)[3] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_04", 3, -4899.261f, 22.96273f, 3839.88f, 0.0f, 29.19471f, 0.0f, 145.6729f, 89.7691f, 111.7454f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[3]);
	(*&Local_234 + 204)[4] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_05", 3, -4518.043f, 22.96273f, 3733.987f, 0.0f, 0.06501988f, 0.0f, 162.1872f, 79.42868f, 98.87355f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[4]);
	(*&Local_234 + 204)[5] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_06", 3, -4731.243f, 22.96273f, 3767.873f, 0.0f, 16.62488f, 0.0f, 97.6675f, 47.83115f, 31.87144f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[5]);
	(*&Local_234 + 204)[6] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_07", 3, -4128.314f, 22.96273f, 3861.144f, 0.0f, -18.41745f, 0.0f, 162.1872f, 79.42868f, 98.87355f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[6]);
	(*&Local_234 + 204)[7] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_08", 3, -3890.513f, 22.96273f, 4014.724f, 0.0f, -32.20895f, 0.0f, 162.1872f, 79.42868f, 80.98814f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[7]);
	(*&Local_234 + 204)[8] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_09", 3, -3513.995f, 22.96273f, 4009.769f, 0.0f, 19.85783f, 0.0f, 116.8982f, 57.2491f, 58.3731f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[8]);
	(*&Local_234 + 204)[9] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_010", 3, -3730.328f, 22.96273f, 4046.1f, 0.0f, -19.16317f, 0.0f, 116.8982f, 57.2491f, 58.3731f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[9]);
	(*&Local_234 + 204)[10] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_011", 3, -3302.616f, 22.96273f, 3849.584f, 0.0f, 19.62695f, 0.0f, 178.1278f, 87.23534f, 88.94808f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[10]);
	(*&Local_234 + 204)[11] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_012", 3, -3021.879f, 22.96273f, 3826.465f, 0.0f, 19.62695f, 0.0f, 178.1278f, 87.23534f, 88.94808f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[11]);
	(*&Local_234 + 204)[12] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_013", 3, -2795.638f, 22.96273f, 3750.5f, 0.0f, -9.077846f, 0.0f, 123.1342f, 87.23534f, 104.1018f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[12]);
	(*&Local_234 + 204)[13] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_014", 3, -2610.682f, 22.96273f, 3814.905f, 0.0f, -9.077846f, 0.0f, 123.1342f, 87.23534f, 74.04646f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[13]);
	(*&Local_234 + 204)[14] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_015", 3, -4314.921f, 22.96273f, 3752.152f, 0.0f, -31.03139f, 0.0f, 116.8665f, 57.23357f, 71.24488f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[14]);
	(*&Local_234 + 204)[15] = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_aquaticWildlife_016", 3, -4974.818f, 22.96273f, 3987.288f, 0.0f, -86.81307f, 0.0f, 116.8665f, 57.23357f, 71.24488f);
	ADD_TO_VOLUME_SET(Local_234.f_272, (*&Local_234 + 204)[15]);
	Local_234.f_276 = CREATE_VOLUME_IN_LAYOUT(Local_234, "gapv_RepulsionExclusion", 3, -3775.939f, 27.31711f, 2676.473f, 0.0f, 13.22444f, 0.0f, 12.58057f, 17.39492f, 56.1422f);
	*(&Local_234 + 280) = { -3934.543f, 29.14526f, 2942.613f };
	*(&Local_234 + 280 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_304 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_bad", -3934.543f, 29.14526f, 2942.613f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 308) = { -3975.657f, 27.81833f, 2920.438f };
	*(&Local_234 + 308 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_332 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_good", -3975.657f, 27.81833f, 2920.438f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 336) = { -3977.408f, 28.62815f, 2909.98f };
	*(&Local_234 + 336 + 12) = { 0.0f, 168.126f, 0.0f };
	Local_234.f_360 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_loot", -3977.408f, 28.62815f, 2909.98f, 0.0f, 168.126f, 0.0f);
	*(&Local_234 + 364) = { -3951.192f, 28.53456f, 2969.987f };
	*(&Local_234 + 364 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_388 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_bad1", -3951.192f, 28.53456f, 2969.987f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 392) = { -3936.816f, 29.46948f, 2922.49f };
	*(&Local_234 + 392 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_416 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_bad2", -3936.816f, 29.46948f, 2922.49f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 420) = { -3988.763f, 29.1018f, 2972.469f };
	*(&Local_234 + 420 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_444 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_bad3", -3988.763f, 29.1018f, 2972.469f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 448) = { -3990.54f, 27.53285f, 2911.297f };
	*(&Local_234 + 448 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_472 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_good1", -3990.54f, 27.53285f, 2911.297f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 476) = { -3973.481f, 27.91159f, 2902.941f };
	*(&Local_234 + 476 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_500 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_good2", -3973.481f, 27.91159f, 2902.941f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 504) = { -3998.449f, 27.70465f, 2914.286f };
	*(&Local_234 + 504 + 12) = { 0.0f, 168.1262f, 0.0f };
	Local_234.f_528 = CREATE_POINT_IN_LAYOUT(Local_234, "tumf_robbery_good3", -3998.449f, 27.70465f, 2914.286f, 0.0f, 168.1262f, 0.0f);
	*(&Local_234 + 532) = { -3935.961f, 28.107f, 2635.271f };
	*(&Local_234 + 532 + 12) = { 0.0f, 213.155f, 0.0f };
	Local_234.f_556 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingTree_gtr1", -3935.961f, 28.107f, 2635.271f, 0.0f, 213.155f, 0.0f);
	*(&Local_234 + 560) = { -3941.559f, 27.512f, 2623.708f };
	*(&Local_234 + 560 + 12) = { 0.0f, 81.667f, 0.0f };
	Local_234.f_584 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingHorses_gtr1", -3941.559f, 27.512f, 2623.708f, 0.0f, 81.667f, 0.0f);
	*(&Local_234 + 588) = { -3945.927f, 27.519f, 2636.138f };
	*(&Local_234 + 588 + 12) = { 0.0f, 265.59f, 0.0f };
	Local_234.f_612 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard1_gtr1", -3945.927f, 27.519f, 2636.138f, 0.0f, 265.59f, 0.0f);
	*(&Local_234 + 616) = { -3942.989f, 27.608f, 2635.25f };
	*(&Local_234 + 616 + 12) = { 0.0f, 277.076f, 0.0f };
	Local_234.f_640 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard2_gtr1", -3942.989f, 27.608f, 2635.25f, 0.0f, 277.076f, 0.0f);
	*(&Local_234 + 644) = { -3942.084f, 27.596f, 2631.013f };
	*(&Local_234 + 644 + 12) = { 0.0f, 243.758f, 0.0f };
	Local_234.f_668 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard3_gtr1", -3942.084f, 27.596f, 2631.013f, 0.0f, 243.758f, 0.0f);
	*(&Local_234 + 672) = { -3788.462f, 21.377f, 2650.921f };
	*(&Local_234 + 672 + 12) = { 0.0f, 15.563f, 0.0f };
	Local_234.f_696 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingOffScreen_gtr1", -3788.462f, 21.377f, 2650.921f, 0.0f, 15.563f, 0.0f);
	*(&Local_234 + 700) = { -3936.042f, 31.487f, 2638.841f };
	*(&Local_234 + 700 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_234.f_724 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingNoose___1", -3936.042f, 31.487f, 2638.841f, 0.0f, 0.0f, 0.0f);
	*(&Local_234 + 728) = { -3936.05f, 27.751f, 2638.806f };
	*(&Local_234 + 728 + 12) = { 0.0f, 343.3f, 0.0f };
	Local_234.f_752 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingguy_gtr1", -3936.05f, 27.751f, 2638.806f, 0.0f, 343.3f, 0.0f);
	*(&Local_234 + 756) = { -4424.0f, 25.73199f, 2967.308f };
	*(&Local_234 + 756 + 12) = { 0.0f, -183.4835f, 0.0f };
	Local_234.f_780 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingTree_gtr2", -4424.0f, 25.73199f, 2967.308f, 0.0f, -183.4835f, 0.0f);
	*(&Local_234 + 784) = { -4420.0f, 25.59995f, 2968f };
	*(&Local_234 + 784 + 12) = { 0.0f, -20.80237f, 0.0f };
	Local_234.f_808 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingHorses_gtr2", -4420.0f, 25.59995f, 2968f, 0.0f, -20.80237f, 0.0f);
	*(&Local_234 + 812) = { -4427.648f, 25.59995f, 2973.27f };
	*(&Local_234 + 812 + 12) = { 0.0f, -54.54519f, 0.0f };
	Local_234.f_836 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard1_gtr2", -4427.648f, 25.59995f, 2973.27f, 0.0f, -54.54519f, 0.0f);
	*(&Local_234 + 840) = { -4416.209f, 25.59994f, 2971.18f };
	*(&Local_234 + 840 + 12) = { 0.0f, 92.50725f, 0.0f };
	Local_234.f_864 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard2_gtr2", -4416.209f, 25.59994f, 2971.18f, 0.0f, 92.50725f, 0.0f);
	*(&Local_234 + 868) = { -4416.0f, 25.59996f, 2968f };
	*(&Local_234 + 868 + 12) = { 0.0f, 111.9049f, 0.0f };
	Local_234.f_892 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard3_gtr2", -4416.0f, 25.59996f, 2968f, 0.0f, 111.9049f, 0.0f);
	*(&Local_234 + 896) = { -4424.0f, 25.69681f, 2970.613f };
	*(&Local_234 + 896 + 12) = { 0.0f, 132.7829f, 0.0f };
	Local_234.f_920 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingguy_gtr2", -4424.0f, 25.69681f, 2970.613f, 0.0f, 132.7829f, 0.0f);
	*(&Local_234 + 924) = { -4064f, 9.035286f, 3491.478f };
	*(&Local_234 + 924 + 12) = { 0.0f, 178.4079f, 0.0f };
	Local_234.f_948 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingTree_gtr3", -4064f, 9.035286f, 3491.478f, 0.0f, 178.4079f, 0.0f);
	*(&Local_234 + 952) = { -4067.176f, 9.03529f, 3501.938f };
	*(&Local_234 + 952 + 12) = { 0.0f, -30.33124f, 0.0f };
	Local_234.f_976 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingHorses_gtr3", -4067.176f, 9.03529f, 3501.938f, 0.0f, -30.33124f, 0.0f);
	*(&Local_234 + 980) = { -4064.0f, 9.03529f, 3498.493f };
	*(&Local_234 + 980 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_234.f_1004 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard1_gtr3", -4064.0f, 9.03529f, 3498.493f, 0.0f, 0.0f, 0.0f);
	*(&Local_234 + 1008) = { -4069.828f, 9.03529f, 3496f };
	*(&Local_234 + 1008 + 12) = { 0.0f, -80.80447f, 0.0f };
	Local_234.f_1032 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard2_gtr3", -4069.828f, 9.03529f, 3496f, 0.0f, -80.80447f, 0.0f);
	*(&Local_234 + 1036) = { -4058.72f, 9.035286f, 3494.306f };
	*(&Local_234 + 1036 + 12) = { 0.0f, 110.2133f, 0.0f };
	Local_234.f_1060 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingGuard3_gtr3", -4058.72f, 9.035286f, 3494.306f, 0.0f, 110.2133f, 0.0f);
	*(&Local_234 + 1064) = { -4064.083f, 9.03529f, 3494.821f };
	*(&Local_234 + 1064 + 12) = { 0.0f, 179.5099f, 0.0f };
	Local_234.f_1088 = CREATE_POINT_IN_LAYOUT(Local_234, "hangingguy_gtr3", -4064.083f, 9.03529f, 3494.821f, 0.0f, 179.5099f, 0.0f);
	return 1;
}

void Function_107(int iParam0, int iParam1) //Position: 0x519C / 20892
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

void Function_108(var uParam0, int iParam1) //Position: 0x51E5 / 20965
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_109() //Position: 0x51F4 / 20980
{
	return;
}

bool Function_110() //Position: 0x51FA / 20986
{
	return Function_111();
}

int Function_111() //Position: 0x5203 / 20995
{
	bool bVar0;
	
	Function_107(3, 3);
	bVar0 = bVar0;
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall_shoulder_l", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_h_talking", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/player_herb_redsage", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/player_herb_wildfeverfew", 1, 0);
	Function_117(&Local_14 + 4, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_3", 1, 0);
	if (!Function_112(&Local_14 + 4))
	{
		return 0;
	}
	Local_14 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(Local_14))
	{
		Local_14 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	Local_14.f_308 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint", -4349.063f, 25.66054f, 2755.295f, 0.0f, 0.0f, 0.0f);
	Local_14.f_312 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint1", -4314.583f, 5.097f, 3743.292f, 0.0f, 0.0f, 0.0f);
	Local_14.f_316 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint2", -3512.0f, 13.42503f, 3144.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_320 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint3", -4013.675f, 21.468f, 2399.785f, 0.0f, 73.49f, 0.0f);
	Local_14.f_324 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint4", -3434.18f, 23.592f, 2499.154f, 0.0f, 0.0f, 0.0f);
	Local_14.f_328 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint5", -4018.102f, 21.094f, 2395.404f, 0.0f, 5.037f, 0.0f);
	Local_14.f_332 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint6", -4019.233f, 21.468f, 2398.425f, 0.0f, 215.465f, 0.0f);
	Local_14.f_336 = CREATE_POINT_IN_LAYOUT(Local_14, "gtrf_bhint8", -4016.299f, 21.468f, 2398.219f, 0.0f, 219.242f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "sil_stand_guntricks_e_any", "stand_guntricks_e_any", -4012.576f, 21.031f, 2390.771f, 0.0f, -161.3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_14.f_340 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_Sit_Ground3", "Rand_Idle_Sit_Ground", -3554.44f, 15.6855f, 3158.265f, 0.0f, 209.569f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_14.f_340), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_rand_idle_stand3", "stand_lookdistance_w_any", -3552.909f, 15.63719f, 3157.377f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_rand_idle_stand2", "rand_idle_stand", -3555.438f, 15.60915f, 3159.332f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_stand_guntricks_e_any1", "stand_guntricks_e_any", -3543.762f, 15.3694f, 3162.819f, 0.0f, -210.2364f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_14.f_344 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_Sit_Ground2", "Rand_Idle_Sit_Ground", -3545.373f, 15.49567f, 3162.648f, 0.0f, 34.25905f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_14.f_344), 0);
	Local_14.f_348 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_Sit_Ground1", "Rand_Idle_Sit_Ground", -3544.541f, 15.49885f, 3161.289f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_14.f_348), 0);
	Local_14.f_352 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_look_distance_binocs2", "look_distance_binocs", -3545.451f, 15.64982f, 3159.776f, 0.0f, 138.5309f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_horse_tend1", "horse_tend", -3495.967f, 19.65504f, 3136.116f, 0.0f, -91.20521f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_Sit_Ground", "Rand_Idle_Sit_Ground", -3437.098f, 23.592f, 2502.806f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_smoking_stand", "smoking_stand", -3436.582f, 23.592f, 2501.046f, 0.0f, 128.5334f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_sleeping_wall", "sleeping_wall_scripted", -3447.271f, 23.09f, 2499.005f, 0.0f, -71.2832f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_stand_guntricks1", "stand_guntricks_e_any", -3437.837f, 23.592f, 2492.929f, 0.0f, -182.7671f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_stand_guntricks2", "stand_guntricks_e_any", -3437.837f, 23.592f, 2494.971f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_sit_play_harmonica", "sit_ground_play_harmonica", -3434.18f, 23.592f, 2495.733f, 0.0f, 102.2661f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_look_distance_b", "look_distance_binocs", -3404.325f, 23.462f, 2509.804f, 0.0f, -132.933f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_look_distance_b1", "look_distance_binocs", -3428.11f, 24.024f, 2508.341f, 0.0f, -218.5979f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_Pee", "Pee", -3433.225f, 23.594f, 2505.034f, 0.0f, 35.20251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_horse_stay", "horse_stay", -3429.818f, 23.89949f, 2495.733f, 0.0f, -80.89567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_horse_stay1", "horse_stay", -3430.55f, 24.05026f, 2493.8f, 0.0f, -80.89567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_horse_stay2", "horse_stay", -3427.528f, 24.09412f, 2497.654f, 0.0f, -80.89567f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Ham_horse_tend", "horse_tend", -3431.699f, 24.01186f, 2488.961f, 0.0f, -240.6283f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_horse_tend", "horse_tend", -3499.674f, 16.25382f, 3147.382f, 0.0f, 21.67242f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_horse_stay2", "horse_stay", -3497.875f, 16.7437f, 3146.125f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_horse_stay1", "horse_stay", -3496f, 17.07369f, 3146.051f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_horse_stay", "horse_stay", -3494.914f, 17.262f, 3150.906f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_look_distance_binocs1", "look_distance_binocs", -3516.268f, 15.515f, 3124.192f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_Pee", "Pee", -3492.114f, 19.66672f, 3136.246f, 0.0f, -26.90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_rand_idle_stand1", "rand_idle_stand", -3520.276f, 11.12099f, 3146.674f, 0.0f, 78.99949f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_rand_idle_stand", "rand_idle_stand", -3509.928f, 13.78963f, 3146.481f, 0.0f, -82.29346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_stand_guntricks_e_any", "stand_guntricks_e_any", -3511.514f, 13.83953f, 3143.129f, 0.0f, -161.3654f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_lookdistance_w_any11", "stand_lookdistance_w_any", -3497.143f, 17.32072f, 3150.853f, 0.0f, -105.2133f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_lean_rail", "look_distance_binocs", -3520.693f, 15.672f, 3127.985f, 0.0f, 37.36112f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_lean_fence_L_talking", "Rand_Idle_NearWall_Shoulder_L", -3516.66f, 15.74677f, 3134.089f, 0.0f, 41.5251f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_14.f_356 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_look_distance_binocs", "look_distance_binocs", -3503.269f, 15.4507f, 3126.436f, 0.0f, -47.4214f, 0.0f);
	Local_14.f_360 = CREATE_GRINGO_IN_LAYOUT(Local_14, "ben_Sit_Ground", "Rand_Idle_Sit_Ground", -3507.42f, 14.41f, 3147.197f, 0.0f, 71.79088f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_14.f_360), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "sil_rand_idle_stand3", "rand_idle_stand", -4023.081f, 21.083f, 2397.041f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "sil_rand_idle_stand2", "rand_idle_stand", -4020.073f, 21.237f, 2393.398f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "sil_rand_idle_stand1", "rand_idle_stand", -4016.466f, 21.146f, 2392.174f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "sil_rand_idle_stand", "rand_idle_stand", -4018.865f, 21.126f, 2394.072f, 0.0f, 171.8535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_smoking_stand2", "smoking_stand", -4012.661f, 21.083f, 2394.79f, 0.0f, -145.0029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "sil_Pee", "Pee", -4023.667f, 21.581f, 2384.949f, 0.0f, -26.90434f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_stand_lookdistance2", "stand_lookdistance_w_any", -4030.676f, 20.114f, 2430.51f, 0.0f, -163.9767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_stand_lookdistance1", "stand_lookdistance_w_any", -3989.216f, 21.083f, 2403.324f, 0.0f, 196.0233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_stand_lookdistance", "stand_lookdistance_w_any", -4006.974f, 20.809f, 2415.464f, 0.0f, -163.9767f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Srtch_tand1", "rand_idle_stand", -4021.151f, 20.963f, 2406.973f, 0.0f, 19.92132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_smoking_stand1", "smoking_stand", -4023.764f, 21.029f, 2404.943f, 0.0f, -145.0029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_horse_tend1", "horse_tend", -4008.54f, 21.08242f, 2403.371f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_horse_stay1", "horse_stay", -4011.225f, 21.08242f, 2403.748f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_horse_stay", "horse_stay", -4018.831f, 20.98951f, 2406.15f, 0.0f, -343.0331f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_horse_tend", "horse_tend", -4017.555f, 21.00073f, 2405.466f, 0.0f, -162.3719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_smoking_stand", "smoking_stand", -4016.168f, 21.46727f, 2403.016f, 0.0f, -145.0029f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_NearWall", "Rand_Idle_NearWall", -4018.77f, 21.08617f, 2403.276f, 0.0f, -154.2826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_lean_rail", "nlean_rail", -4022.136f, 21.09104f, 2395.346f, 0.0f, 111.8315f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_look_out_window_L", "look_out_window_L", -4017.984f, 21.53371f, 2401.449f, 0.0f, -162.0249f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_Campfire_Tend", "Sit_Ground_Campfire_Tend", -4018.937f, 21.468f, 2399.804f, 0.0f, 109.2064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Sil_lie_sleep", "lie_sleep_on_bed_l", -4014.51f, 21.46768f, 2397.119f, 0.0f, 17.92818f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_sleeping_wall_scripted", "sleeping_wall_scripted", -4344.907f, 25.66f, 2754.942f, 0.0f, 92.61431f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_sleeping_scripted1", "sleeping_scripted", -4352.348f, 25.73698f, 2756.987f, 0.0f, 152.4998f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_sleeping_scripted", "sleeping_scripted", -4346.533f, 25.72214f, 2760.332f, 0.0f, 266.5974f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_horse_stay4", "horse_stay", -4327.33f, 22.86164f, 2739.777f, 0.0f, 359.664f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_stand_lookdistance1", "stand_lookdistance_w_any", -4323.297f, 25.25694f, 2767.16f, 0.0f, 164.4313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_horse_stay3", "horse_stay", -4332.893f, 23.56775f, 2744.058f, 0.0f, 220.287f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_horse_stay1", "horse_stay", -4334.617f, 23.76846f, 2744.07f, 0.0f, 214.233f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "scrg_smoking_stand", "smoking_stand", -4315.55f, 5.001161f, 3736.073f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "scrg_horse_stay", "horse_stay", -4304.485f, 5.33743f, 3740.595f, 0.0f, 91.16744f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "scrg_horse_stay1", "horse_stay", -4304.792f, 5.033688f, 3742.499f, 0.0f, 93.17829f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "scrg_horse_stay2", "horse_stay", -4304.333f, 4.743784f, 3753.198f, 0.0f, 58.93742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "scrg_horse_stay3", "horse_stay", -4305.479f, 4.682098f, 3754.989f, 0.0f, 44.86414f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_14.f_364 = CREATE_GRINGO_IN_LAYOUT(Local_14, "scrg_horse_stay4", "horse_stay", -4307.521f, 4.700052f, 3756.242f, 0.0f, 28.09162f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_14.f_364), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Srtch_tand", "rand_idle_stand", -4313.591f, 5.043624f, 3731.379f, 0.0f, 19.92132f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Srtch_stand_lookdistance", "stand_lookdistance_w_any", -4313.458f, 4.998623f, 3757.347f, 0.0f, -159.4057f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "nSrtch_Pee", "Pee", -4302.91f, 4.6f, 3746.519f, 0.0f, -60.70978f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Srtch_horse_tend", "horse_tend", -4291.733f, 4.015f, 3725.523f, 0.0f, -30.20316f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Srtch_leantalking", "lean_fence_H_talking", -4319.066f, 4.969989f, 3738.232f, 0.0f, -87.61311f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Srtch_stand_guntrick", "stand_guntricks_e_any", -4312.03f, 5.001168f, 3748.336f, 0.0f, -164.7508f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_stand_guntricks", "stand_guntricks_e_any", -4346.817f, 25.65767f, 2757.716f, 0.0f, -197.8129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_look_distance_2", "look_distance_binocs", -4292.0f, 26.16155f, 2740f, 0.0f, -55.24271f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_look_distance_1", "look_distance_binocs", -4312.805f, 26.48f, 2781.945f, 0.0f, -163.8071f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_horse_stay", "horse_stay", -4348.085f, 25.66132f, 2751.858f, 0.0f, -58.94202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_horse_tend", "horse_tend", -4348.798f, 25.73481f, 2750.844f, 0.0f, 126.0001f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_Pee", "Pee", -4324.907f, 23.21055f, 2741.697f, 0.0f, -67.74636f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_stand_rowdydrink", "stand_dnd_rowdydrink", -4345.435f, 25.648f, 2762.341f, 0.0f, 52.18678f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_smoking_stand1", "smoking_stand", -4345.533f, 25.66132f, 2752.487f, 0.0f, -30.65489f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -4351.443f, 25.66132f, 2760.146f, 0.0f, -48.31028f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_look_distance_binocs", "look_distance_binocs", -4340.744f, 27.61138f, 2753.304f, 0.0f, -57.35819f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_campfire_talk", "campfire_talk", -4348.996f, 25.66f, 2757.668f, 0.0f, -21.34858f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Cuev_smoking_stand", "smoking_stand", -4345.924f, 25.656f, 2759.327f, 0.0f, 81.03186f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_14.f_368 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage", "Player_Herb_DesertSage", -3952.0f, 9.047268f, 3836f, 0.0f, 0.0f, 0.0f);
	Local_14.f_372 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage1", "Player_Herb_DesertSage", -4072.0f, 7.008393f, 3804.831f, 0.0f, 0.0f, 0.0f);
	Local_14.f_376 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", -4036.0f, 8.031368f, 3740f, 0.0f, 0.0f, 0.0f);
	Local_14.f_380 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", -3884.0f, 9.035286f, 3588f, 0.0f, 0.0f, 0.0f);
	Local_14.f_384 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", -3708.0f, 20.00255f, 3722.527f, 0.0f, 0.0f, 0.0f);
	Local_14.f_388 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", -3774.253f, 17.56825f, 3780.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_392 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", -3709.885f, 23.09019f, 3576.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_396 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", -3604f, 33.12941f, 3410.084f, 0.0f, 0.0f, 0.0f);
	Local_14.f_400 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", -3534.479f, 34.13447f, 3535.625f, 0.0f, 0.0f, 0.0f);
	Local_14.f_404 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage10", "Player_Herb_DesertSage", -3564f, 35.14058f, 3470.161f, 0.0f, 0.0f, 0.0f);
	Local_14.f_408 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage11", "Player_Herb_DesertSage", -3658.068f, 16.06274f, 3401.932f, 0.0f, 0.0f, 0.0f);
	Local_14.f_412 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage12", "Player_Herb_DesertSage", -3489.141f, 36.14825f, 3432.11f, 0.0f, 0.0f, 0.0f);
	Local_14.f_416 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage13", "Player_Herb_DesertSage", -3481.672f, 36.44746f, 3318.328f, 0.0f, 0.0f, 0.0f);
	Local_14.f_420 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage14", "Player_Herb_DesertSage", -3397.868f, 38.14902f, 3376f, 0.0f, 0.0f, 0.0f);
	Local_14.f_424 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage15", "Player_Herb_DesertSage", -3532f, 38.14902f, 3486.979f, 0.0f, 0.0f, 0.0f);
	Local_14.f_428 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage16", "Player_Herb_DesertSage", -3314.075f, 44.86954f, 3468f, 0.0f, 0.0f, 0.0f);
	Local_14.f_432 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", -3246.021f, 49.19217f, 3461.98f, 0.0f, 0.0f, 0.0f);
	Local_14.f_436 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", -3172.93f, 40.41358f, 3368.436f, 0.0f, 0.0f, 0.0f);
	Local_14.f_440 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", -4268.0f, 3.129975f, 3764.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_444 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", -4255.395f, 4.015678f, 3666.991f, 0.0f, 0.0f, 0.0f);
	Local_14.f_448 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", -4400.0f, 7.02992f, 3546.233f, 0.0f, 0.0f, 0.0f);
	Local_14.f_452 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", -4235.268f, 6.018927f, 3604.036f, 0.0f, 0.0f, 0.0f);
	Local_14.f_456 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", -4100.0f, 8.031364f, 3652.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_460 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", -4007.208f, 9.035286f, 3678.818f, 0.0f, 0.0f, 0.0f);
	Local_14.f_464 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", -3975.274f, 9.035286f, 3607.208f, 0.0f, 0.0f, 0.0f);
	Local_14.f_468 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", -4076.0f, 8.031368f, 3505.56f, 0.0f, 0.0f, 0.0f);
	Local_14.f_472 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", -4256.0f, 12.04707f, 3472.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_476 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", -4404.0f, 7.027458f, 3476.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_480 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", -4471.791f, 6.023648f, 3568.106f, 0.0f, 0.0f, 0.0f);
	Local_14.f_484 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage30", "Player_Herb_DesertSage", -4764.0f, 3.011771f, 3825.594f, 0.0f, 0.0f, 0.0f);
	Local_14.f_488 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage31", "Player_Herb_DesertSage", -4809.424f, 3.011765f, 3524.559f, 0.0f, 0.0f, 0.0f);
	Local_14.f_492 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage32", "Player_Herb_DesertSage", -4908.0f, 3.994267f, 3520.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_496 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage33", "Player_Herb_DesertSage", -4516.0f, 11.04314f, 3336.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_500 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage34", "Player_Herb_DesertSage", -4269.605f, 7.027458f, 3334.644f, 0.0f, 0.0f, 0.0f);
	Local_14.f_504 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage35", "Player_Herb_DesertSage", -4164.0f, 9.035301f, 3396.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_508 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage36", "Player_Herb_DesertSage", -4292.033f, 7.027458f, 3386.503f, 0.0f, 0.0f, 0.0f);
	Local_14.f_512 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage37", "Player_Herb_DesertSage", -4226.439f, 7.027458f, 3298.602f, 0.0f, 0.0f, 0.0f);
	Local_14.f_516 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage38", "Player_Herb_DesertSage", -4437.59f, 8.505199f, 3274.462f, 0.0f, 0.0f, 0.0f);
	Local_14.f_520 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage39", "Player_Herb_DesertSage", -4491.802f, 9.035066f, 3220.199f, 0.0f, 0.0f, 0.0f);
	Local_14.f_524 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage40", "Player_Herb_DesertSage", -4556.113f, 16.06275f, 3168.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_528 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage41", "Player_Herb_DesertSage", -4565.822f, 29.76156f, 3043.362f, 0.0f, 0.0f, 0.0f);
	Local_14.f_532 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage42", "Player_Herb_DesertSage", -4420.134f, 34.06581f, 3067.813f, 0.0f, 0.0f, 0.0f);
	Local_14.f_536 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage43", "Player_Herb_DesertSage", -4294.341f, 36.14112f, 3008f, 0.0f, 0.0f, 0.0f);
	Local_14.f_540 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage44", "Player_Herb_DesertSage", -4414.286f, 25.59914f, 2990.792f, 0.0f, 0.0f, 0.0f);
	Local_14.f_544 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage45", "Player_Herb_DesertSage", -4403.191f, 22.08621f, 2910.951f, 0.0f, 0.0f, 0.0f);
	Local_14.f_548 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage46", "Player_Herb_DesertSage", -4382.816f, 22.0862f, 2910.604f, 0.0f, 0.0f, 0.0f);
	Local_14.f_552 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage47", "Player_Herb_DesertSage", -4060.0f, 8.031368f, 3264f, 0.0f, 0.0f, 0.0f);
	Local_14.f_556 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage48", "Player_Herb_DesertSage", -4100.0f, 11.04314f, 3196.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_560 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage49", "Player_Herb_DesertSage", -3948.0f, 14.38007f, 3142.053f, 0.0f, 0.0f, 0.0f);
	Local_14.f_564 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage50", "Player_Herb_DesertSage", -4090.483f, 32.12549f, 3059.999f, 0.0f, 0.0f, 0.0f);
	Local_14.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage51", "Player_Herb_DesertSage", -3848f, 43.16864f, 3012f, 0.0f, 0.0f, 0.0f);
	Local_14.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage52", "Player_Herb_DesertSage", -3713.901f, 39.15966f, 3045.659f, 0.0f, 0.0f, 0.0f);
	Local_14.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage53", "Player_Herb_DesertSage", -3778.651f, 38.40936f, 3011.134f, 0.0f, 0.0f, 0.0f);
	Local_14.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage54", "Player_Herb_DesertSage", -3771.132f, 24.91142f, 2916.551f, 0.0f, 0.0f, 0.0f);
	Local_14.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage55", "Player_Herb_DesertSage", -3741.274f, 39.65488f, 2852f, 0.0f, 0.0f, 0.0f);
	Local_14.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage56", "Player_Herb_DesertSage", -3850.146f, 41.66276f, 2818.583f, 0.0f, 0.0f, 0.0f);
	Local_14.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage57", "Player_Herb_DesertSage", -3787.081f, 39.6091f, 2748f, 0.0f, 0.0f, 0.0f);
	Local_14.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage58", "Player_Herb_DesertSage", -3745.765f, 44.04614f, 2675.957f, 0.0f, 0.0f, 0.0f);
	Local_14.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage59", "Player_Herb_DesertSage", -3684.408f, 45.17479f, 2734.258f, 0.0f, 0.0f, 0.0f);
	Local_14.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage60", "Player_Herb_DesertSage", -3724f, 41.16078f, 2767.084f, 0.0f, 0.0f, 0.0f);
	Local_14.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage61", "Player_Herb_DesertSage", -3596.568f, 35.13754f, 2868f, 0.0f, 0.0f, 0.0f);
	Local_14.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage62", "Player_Herb_DesertSage", -3621.026f, 38.65096f, 2758.974f, 0.0f, 0.0f, 0.0f);
	Local_14.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage63", "Player_Herb_DesertSage", -3596.868f, 19.57643f, 2628.868f, 0.0f, 0.0f, 0.0f);
	Local_14.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage64", "Player_Herb_DesertSage", -3676f, 27.81974f, 2608.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage65", "Player_Herb_DesertSage", -3849.412f, 27.1059f, 2548.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage66", "Player_Herb_DesertSage", -3937.188f, 29.12008f, 2589.45f, 0.0f, 0.0f, 0.0f);
	Local_14.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage67", "Player_Herb_DesertSage", -4042.042f, 19.07454f, 2513.958f, 0.0f, 0.0f, 0.0f);
	Local_14.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage68", "Player_Herb_DesertSage", -3810.401f, 21.08241f, 2482.219f, 0.0f, 0.0f, 0.0f);
	Local_14.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage69", "Player_Herb_DesertSage", -3780f, 21.58438f, 2388.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage70", "Player_Herb_DesertSage", -3773.926f, 26.10201f, 2308.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage71", "Player_Herb_DesertSage", -3637.146f, 32.62749f, 2284.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage72", "Player_Herb_DesertSage", -3688f, 28.61178f, 2309.697f, 0.0f, 0.0f, 0.0f);
	Local_14.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage73", "Player_Herb_DesertSage", -4080f, 27.60781f, 2572.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage74", "Player_Herb_DesertSage", -4138.697f, 24.59602f, 2632f, 0.0f, 0.0f, 0.0f);
	Local_14.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage75", "Player_Herb_DesertSage", -4172.763f, 25.54855f, 2642.833f, 0.0f, 0.0f, 0.0f);
	Local_14.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage76", "Player_Herb_DesertSage", -4162.929f, 29.45779f, 2711.155f, 0.0f, 0.0f, 0.0f);
	Local_14.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage77", "Player_Herb_DesertSage", -3988.466f, 22.60344f, 2719.299f, 0.0f, 0.0f, 0.0f);
	Local_14.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage78", "Player_Herb_DesertSage", -4069.154f, 29.094f, 2756.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage79", "Player_Herb_DesertSage", -4200.0f, 15.52993f, 2867.578f, 0.0f, 0.0f, 0.0f);
	Local_14.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage80", "Player_Herb_DesertSage", -4187.933f, 18.57248f, 3024f, 0.0f, 0.0f, 0.0f);
	Local_14.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage81", "Player_Herb_DesertSage", -4176.0f, 7.027458f, 3252.478f, 0.0f, 0.0f, 0.0f);
	Local_14.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage82", "Player_Herb_DesertSage", -4512.0f, 10.9085f, 3268f, 0.0f, 0.0f, 0.0f);
	Local_14.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage83", "Player_Herb_DesertSage", -4308.0f, 30.76601f, 3056f, 0.0f, 0.0f, 0.0f);
	Local_14.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage84", "Player_Herb_DesertSage", -4650.549f, 41.28893f, 3426.549f, 0.0f, 0.0f, 0.0f);
	Local_14.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage85", "Player_Herb_DesertSage", -4288.0f, 6.023537f, 3584.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage86", "Player_Herb_DesertSage", -4064.0f, 8.031368f, 3436f, 0.0f, 0.0f, 0.0f);
	Local_14.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage87", "Player_Herb_DesertSage", -4128.0f, 7.027458f, 3297.254f, 0.0f, 0.0f, 0.0f);
	Local_14.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage88", "Player_Herb_DesertSage", -3880.0f, 11.77989f, 3804f, 0.0f, 0.0f, 0.0f);
	Local_14.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage90", "Player_Herb_DesertSage", -4522.118f, 3.104359f, 3733.303f, 0.0f, 0.0f, 0.0f);
	Local_14.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage91", "Player_Herb_DesertSage", -4269.966f, 5.025835f, 3629.378f, 0.0f, 0.0f, 0.0f);
	Local_14.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage92", "Player_Herb_DesertSage", -3568.036f, 35.13725f, 3505.278f, 0.0f, 0.0f, 0.0f);
	Local_14.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage93", "Player_Herb_DesertSage", -4092f, 34.69775f, 2891.08f, 0.0f, 0.0f, 0.0f);
	Local_14.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage94", "Player_Herb_DesertSage", -3856f, 40.15688f, 2912.489f, 0.0f, 0.0f, 0.0f);
	Local_14.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage95", "Player_Herb_DesertSage", -3432f, 10.54121f, 3020f, 0.0f, 0.0f, 0.0f);
	Local_14.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage96", "Player_Herb_DesertSage", -4351.688f, 31.55952f, 2960f, 0.0f, 0.0f, 0.0f);
	Local_14.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage98", "Player_Herb_DesertSage", -3636.967f, 24.09412f, 3748f, 0.0f, 0.0f, 0.0f);
	Local_14.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage99", "Player_Herb_DesertSage", -3712.517f, 27.10588f, 3876f, 0.0f, 0.0f, 0.0f);
	Local_14.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_DesertSage100", "Player_Herb_DesertSage", -3745.852f, 23.04988f, 4014.149f, 0.0f, 0.0f, 0.0f);
	Local_14.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage", "Player_Herb_RedSage", -3932.0f, 11.12991f, 3866.598f, 0.0f, 0.0f, 0.0f);
	Local_14.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage1", "Player_Herb_RedSage", -4108.0f, 7.027443f, 3752.0f, 0.0f, -47.3344f, 0.0f);
	Local_14.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage2", "Player_Herb_RedSage", -3823.903f, 8.950692f, 3773.063f, 0.0f, 0.0f, 0.0f);
	Local_14.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage4", "Player_Herb_RedSage", -3873.778f, 10.04307f, 3564.585f, 0.0f, 231.0161f, 0.0f);
	Local_14.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage5", "Player_Herb_RedSage", -3708.0f, 8.031372f, 3533.32f, 0.0f, 0.0f, 0.0f);
	Local_14.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage6", "Player_Herb_RedSage", -3753.52f, 8.031372f, 3378.48f, 0.0f, 0.0f, 0.0f);
	Local_14.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage7", "Player_Herb_RedSage", -3808.0f, 8.031368f, 3488.421f, 0.0f, 0.0f, 0.0f);
	Local_14.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage8", "Player_Herb_RedSage", -3836.0f, 8.031364f, 3339.555f, 0.0f, 0.0f, 0.0f);
	Local_14.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage9", "Player_Herb_RedSage", -3682.142f, 16.06274f, 3372.312f, 0.0f, 0.0f, 0.0f);
	Local_14.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage10", "Player_Herb_RedSage", -3716.0f, 8.031372f, 3392f, 0.0f, 0.0f, 0.0f);
	Local_14.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage11", "Player_Herb_RedSage", -3836.0f, 8.031372f, 3328f, 0.0f, 0.0f, 0.0f);
	Local_14.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage12", "Player_Herb_RedSage", -3920.0f, 9.242051f, 3296.819f, 0.0f, 0.0f, 0.0f);
	Local_14.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage13", "Player_Herb_RedSage", -4012f, 8.031368f, 3328f, 0.0f, 0.0f, 0.0f);
	Local_14.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_RedSage14", "Player_Herb_RedSage", -4088.0f, 9.030048f, 3476f, 0.0f, 0.0f, 0.0f);
	Local_14.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew", "Player_Herb_WildFeverFew", -3628f, 38.65094f, 2724.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew1", "Player_Herb_WildFeverFew", -3632.644f, 22.96937f, 2600f, 0.0f, 0.0f, 0.0f);
	Local_14.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew2", "Player_Herb_WildFeverFew", -3728f, 20.58045f, 2544.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew3", "Player_Herb_WildFeverFew", -3869.212f, 42.72093f, 2827.31f, 0.0f, 0.0f, 0.0f);
	Local_14.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew4", "Player_Herb_WildFeverFew", -3585.45f, 35.19801f, 2884f, 0.0f, 0.0f, 0.0f);
	Local_14.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew5", "Player_Herb_WildFeverFew", -3601.879f, 44.77793f, 2964f, 0.0f, 0.0f, 0.0f);
	Local_14.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew6", "Player_Herb_WildFeverFew", -3680f, 11.04314f, 3128f, 0.0f, 0.0f, 0.0f);
	Local_14.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew7", "Player_Herb_WildFeverFew", -3628.368f, 13.02255f, 3189.57f, 0.0f, 0.0f, 0.0f);
	Local_14.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew8", "Player_Herb_WildFeverFew", -3816.532f, 15.06214f, 3152.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew9", "Player_Herb_WildFeverFew", -4069.874f, 33.22112f, 3111.949f, 0.0f, 0.0f, 0.0f);
	Local_14.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew10", "Player_Herb_WildFeverFew", -4076.621f, 33.12941f, 3030.53f, 0.0f, 0.0f, 0.0f);
	Local_14.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew11", "Player_Herb_WildFeverFew", -4136.493f, 18.17956f, 3042.862f, 0.0f, 0.0f, 0.0f);
	Local_14.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew12", "Player_Herb_WildFeverFew", -4019.553f, 25.34963f, 2737.871f, 0.0f, 0.0f, 0.0f);
	Local_14.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew13", "Player_Herb_WildFeverFew", -3732.0f, 39.15295f, 2884.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_14, "Player_Herb_WildFeverFew14", "Player_Herb_WildFeverFew", -4058.721f, 8.031364f, 3232.0f, 0.0f, 0.0f, 0.0f);
	Local_14.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_14, "treasure_hunting_z_3", "zombie_treasure_hunting_3", -4339.0f, 24.66854f, 3691.287f, 0.0f, -137.9031f, 0.0f);
	return 1;
}

bool Function_112(int iParam0) //Position: 0x9D74 / 40308
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_116();
	iVar1 = 0;
	if (!Function_23(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_115(iParam0[iVar03], 8);
		}
		else if (Function_114())
		{
			iVar1 = 1;
			Function_115(iParam0[iVar03], 8);
		}
		Function_115(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_23(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_23(iParam0[03], 8) || iVar1));
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
				Function_115(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_23(iParam0[iVar03], 4))
		{
			if (!Function_23(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
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
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_115(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_115(iParam0[iVar03], 2);
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
	Function_113();
	return 1;
}

void Function_113() //Position: 0xA0EF / 41199
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_114() //Position: 0xA12F / 41263
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

void Function_115(var uParam0, int iParam1) //Position: 0xA15A / 41306
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_116() //Position: 0xA16B / 41323
{
	if (!Function_63(128))
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

var Function_117(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA1AD / 41389
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_118(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_115(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_118(var uParam0, int iParam1, int iParam2) //Position: 0xA1E5 / 41445
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_23(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_115(uParam0[iVar03], 4);
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

bool Function_119() //Position: 0xA2A9 / 41641
{
	return Function_120();
}

int Function_120() //Position: 0xA2B2 / 41650
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = uVar0;
	Local_6 = FIND_NAMED_LAYOUT("GaptoothRidge_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("GaptoothRidge_layout");
	}
	*(&Local_6 + 4) = { -3899.251f, 30.91323f, 2935.108f };
	*(&Local_6 + 4 + 12) = { 0.0f, 129.2136f, 0.0f };
	Local_6.f_28 = CREATE_POINT_IN_LAYOUT(Local_6, "gtrf_two_crows", -3899.251f, 30.91323f, 2935.108f, 0.0f, 129.2136f, 0.0f);
	return 1;
}

void Function_121() //Position: 0xA357 / 41815
{
	SET_DUST_LEVEL(2);
	Function_122();
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_122() //Position: 0xA375 / 41845
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("tum_churchCemetary01x");
	Global_26282[44] = 0;
	Global_26282[44].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Function_69(&(Global_26282[44]), iVar0 + 3);
		iVar0++;
	}
	Function_69(&(Global_26282[44]), 15);
	Function_69(&(Global_26282[44]), 16);
	return;
}

void Function_123(bool bParam0, int iParam1) //Position: 0xA3DC / 41948
{
	if (!Function_63(128))
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

