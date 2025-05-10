//Decompiled with MagicRDR v1.0
//Function Count : 123
//Statics Count : 459
//Natives Count : 171
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	struct<49> Local_6 = { 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<669> Local_274 = { 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<16> Var0;
	
	strcpy(&Var0, "Initializing ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_122(&Var0, 3);
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
				if (Function_118())
				{
					iLocal_0 = 2;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000002:
				if (Function_109())
				{
					Function_108();
					Function_107(&(Global_29008[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_104())
				{
					Function_107(&(Global_29008[iScriptParam_0]), 16);
					iLocal_0 = 4;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000004:
				Function_103(&uLocal_3);
				Function_100(iScriptParam_0);
				iLocal_0 = 5;
				bLocal_1 = false;
				break;
			
			case 0x00000005:
				if (Function_99())
				{
					Function_87();
					iLocal_0 = 6;
					bLocal_1 = false;
				}
				else
				{
					bLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_86(iScriptParam_0);
				Function_85();
				Function_107(&(Global_29008[iScriptParam_0]), 8);
				if (Function_84(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_83(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				bLocal_1 = false;
				break;
			
			case 0x00000007:
				Function_82(iScriptParam_0);
				iLocal_0 = 8;
				bLocal_1 = false;
				break;
			
			case 0x00000008:
				if (!Function_81(iScriptParam_0))
				{
					Function_75(iScriptParam_0);
					Function_74(64);
				}
				Function_107(&(Global_29008[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_81(iScriptParam_0))
				{
					Function_72(Function_73(), iScriptParam_0);
				}
				Function_71(iScriptParam_0);
				strcpy(&Var0, "Finished Initializing ", 64);
				stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
				Function_70(&Var0, 5.0f);
				Function_107(&(Global_29008[iScriptParam_0]), 4);
				iLocal_0 = 10;
				bLocal_1 = false;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_81(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						bLocal_1 = false;
					}
					Function_24(&uLocal_3, &uLocal_444, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_84(&(Global_29008[iScriptParam_0]), 131072))
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
	Function_8(&uLocal_3, &uLocal_444);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_74(64);
	Function_83(&(Global_29008[iScriptParam_0]), 32);
	Function_83(&(Global_29008[iScriptParam_0]), 64);
	Function_83(&(Global_29008[iScriptParam_0]), 512);
	Function_83(&(Global_29008[iScriptParam_0]), 16);
	Function_83(&(Global_29008[iScriptParam_0]), 4);
	Function_1();
	strcpy(&Var0, "nUnloaded ", 64);
	stradd(&Var0, &Global_29155[iScriptParam_010] + 20, 64);
	Function_70(&Var0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	SET_DUST_LEVEL(1);
	return;
}

void Function_2(int iParam0) //Position: 0x2F1 / 753
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

void Function_3(int iParam0) //Position: 0x327 / 807
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x349 / 841
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x35F / 863
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x375 / 885
{
	Function_7();
	return;
}

void Function_7() //Position: 0x37E / 894
{
	RELEASE_LAYOUT_REF(Local_274);
	return;
}

void Function_8(var uParam0, int iParam1) //Position: 0x38A / 906
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

void Function_9(int iParam0, int iParam1, int iParam2) //Position: 0x3E2 / 994
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

void Function_10(int iParam0, bool bParam1, bool bParam2) //Position: 0x4C8 / 1224
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

void Function_11() //Position: 0x641 / 1601
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_12(bool bParam0) //Position: 0x64D / 1613
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

void Function_13(int iParam0) //Position: 0x693 / 1683
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

void Function_14(int iParam0, int iParam1) //Position: 0x6D9 / 1753
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	iParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_15(int iParam0, int iParam1) //Position: 0x6F3 / 1779
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x710 / 1808
{
	Function_17();
	return;
}

void Function_17() //Position: 0x719 / 1817
{
	Function_18(&Local_19 + 4);
	RELEASE_LAYOUT_REF(Local_19);
	return;
}

void Function_18(int iParam0) //Position: 0x72B / 1835
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

void Function_19(var uParam0, int iParam1) //Position: 0x751 / 1873
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

void Function_20(var uParam0, int iParam1) //Position: 0x87F / 2175
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_21(int iParam0, int iParam1) //Position: 0x899 / 2201
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x8B6 / 2230
{
	Function_23();
	return;
}

void Function_23() //Position: 0x8BF / 2239
{
	Function_18(&Local_6 + 4);
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
	Function_83(&(Global_29008[iParam2]), 4194304);
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
				if (!Function_84(&(Global_29008[iParam2]), 262144))
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
	if (Function_84(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_107(&(Global_29008[iParam0]), 4096);
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

void Function_32(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x11BF / 4543
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
	
	iVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
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
	bool bVar0;
	vector3 vVar1;
	
	iParam0 = iParam0;
	if (!iLocal_443)
	{
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			bVar0 = FIND_OBJECT_IN_LAYOUT(Global_30616, "f_playerHorse");
			if (IS_OBJECT_VALID(bVar0))
			{
				vVar1 = { 0.0f, 0.0f, 0.0f };
				GET_OBJECT_POSITION(bVar0, &vVar1);
				iLocal_443 = Function_65(StackVal, StackVal, vVar1, 0, 0);
				Function_64(StackVal, StackVal, vVar1, 1, &bLocal_442);
			}
		}
	}
	else if (!IS_GRINGO_VALID(bLocal_442))
	{
		iLocal_443 = 0;
	}
	return;
}

void Function_64(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x250B / 9483
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	if (bParam3)
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	}
	else
	{
		*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
	}
}

bool Function_65(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x25BD / 9661
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_67(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam3)
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[0], 1);
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			GRINGO_ENABLE_SPAWN(uVar0[1], 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(uVar0[0]))
		{
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_66(uVar0[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar4) && !bVar4 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar4);
			}
			GRINGO_ENABLE_SPAWN(uVar0[0], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[0], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(uVar0[1]))
		{
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_66(uVar0[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar5) && !bVar5 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar5);
			}
			GRINGO_ENABLE_SPAWN(uVar0[1], 0);
			if (bParam4)
			{
				GRINGO_ALLOW_ACTIVATION(uVar0[1], false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
	}
	return iVar3;
}

var Function_66(bool bParam0, bool bParam1) //Position: 0x271E / 10014
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_67(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x272B / 10027
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(bVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
		if (!Function_68())
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
		}
		else
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &uParam0, 2.0f, 0);
		}
	}
}

bool Function_68() //Position: 0x286E / 10350
{
	if (Function_69(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_69(var uParam0, int iParam1) //Position: 0x2889 / 10377
{
	return (uParam0 && iParam1) == 0;
}

void Function_70(bool bParam0, float fParam1) //Position: 0x2896 / 10390
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

void Function_71(int iParam0) //Position: 0x28D4 / 10452
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

void Function_72(bool bParam0, bool bParam1) //Position: 0x2966 / 10598
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

var Function_73() //Position: 0x2A60 / 10848
{
	return Local_6;
}

void Function_74(int iParam0) //Position: 0x2A68 / 10856
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_75(bool bParam0) //Position: 0x2A7B / 10875
{
	Function_76(StackVal, 0, 0.25f, 0, Local_6, !Function_80(&Global_30685));
	return;
}

void Function_76(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x2A9D / 10909
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
		Function_79();
	}
	if (bParam5)
	{
		Function_77(1048576);
	}
}

void Function_77(int iParam0) //Position: 0x2BB0 / 11184
{
	Function_78(&Global_28842, iParam0);
	return;
}

void Function_78(var uParam0, var uParam1) //Position: 0x2BBE / 11198
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_79() //Position: 0x2BD9 / 11225
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_77(16384);
	}
	return;
}

bool Function_80(int iParam0) //Position: 0x2BF5 / 11253
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

bool Function_81(int iParam0) //Position: 0x2C42 / 11330
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
		return Function_80(&Global_30640);
	}
	if (iParam0 == Global_30628[1])
	{
		return Function_80(&Global_30658);
	}
	if (iParam0 == Global_30628[2])
	{
		return Function_80(&Global_30668);
	}
	if (iParam0 == Global_30628[3])
	{
		return Function_80(&Global_30679);
	}
	if (iParam0 == Global_30633[0])
	{
		return Function_80(&Global_30685);
	}
	if (iParam0 == Global_30633[2])
	{
		return Function_80(&Global_30693);
	}
	if (iParam0 == Global_30633[1])
	{
		return Function_80(&Global_30707);
	}
	if (iParam0 == Global_30637[1])
	{
		return Function_80(&Global_30723);
	}
	if (iParam0 == Global_30637[0])
	{
		return Function_80(&Global_30717);
	}
	return 0;
}

void Function_82(int iParam0) //Position: 0x2D1F / 11551
{
	iParam0 = iParam0;
	return;
}

void Function_83(var uParam0, int iParam1) //Position: 0x2D29 / 11561
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_84(int iParam0, int iParam1) //Position: 0x2D40 / 11584
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_85() //Position: 0x2D5C / 11612
{
	return;
}

void Function_86(var uParam0) //Position: 0x2D62 / 11618
{
	uParam0 = uParam0;
	return;
}

void Function_87() //Position: 0x2D6C / 11628
{
	Function_93(Global_30633[0]);
	Global_29004 = 1;
	Function_88(4, Local_19.f_1016, Local_19.f_480, 0, 0, 0, Local_6.f_32);
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Local_19, "punv_player_house")))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_19, "punv_player_house"));
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(Local_19, "punv_player_house"));
	}
	else
	{
		LOG_ERROR("PUN: Cannot find punv_player_house to restrict players room");
	}
	return;
}

void Function_88(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x2E2F / 11823
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_92(bParam1, bParam2);
	if (!Function_91(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_90(bParam4, 0);
		}
		else
		{
			Function_89(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_90(bParam5, 0);
		}
		else
		{
			Function_89(bParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		Global_16537[iParam021].f_80 = bParam1;
		if (Global_16537[iParam021].f_40 != 3 || !Global_3365)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), true);
			DECOR_SET_BOOL(bParam1, "SavingAtBedAllowed", true);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), false);
			if (DECOR_CHECK_EXIST(bParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(bParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(bParam6))
	{
		GET_OBJECT_POSITION(bParam6, &uVar0);
		bVar3[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		bVar3[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(bVar3[0]))
		{
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_66(bVar3[0], "UseCase1"));
			if (IS_ACTOR_VALID(bVar6) && !bVar6 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar6);
			}
			GRINGO_ENABLE_SPAWN(bVar3[0], 0);
		}
		if (IS_GRINGO_VALID(bVar3[1]))
		{
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_66(bVar3[1], "UseCase1"));
			if (IS_ACTOR_VALID(bVar7) && !bVar7 != Global_12976.f_36)
			{
				if (DECOR_CHECK_EXIST(bVar7, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(bVar7, "HorseLeash"));
				}
				DESTROY_OBJECT(bVar7);
			}
			GRINGO_ENABLE_SPAWN(bVar3[1], 0);
		}
		if (Global_16537[iParam021].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(bParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(bParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(bParam6, "PlayerHouse_NoHorse", true);
		}
	}
	Global_16537[iParam021].f_68 = bParam4;
	Global_16537[iParam021].f_72 = bParam5;
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_56))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_56);
		Global_16537[iParam021].f_56 = "";
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_60))
	{
		DESTROY_OBJECT(Global_16537[iParam021].f_60);
		Global_16537[iParam021].f_60 = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Global_16537[iParam021].f_64))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_16537[iParam021].f_64);
		Global_16537[iParam021].f_64 = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(bParam2, &(Global_16537[iParam021]));
	}
	Global_16537[iParam021].f_12 = GET_OBJECT_HEADING(bParam2);
	GET_OBJECT_POSITION(bParam3, &Global_16537[iParam021] + 16);
	Global_16537[iParam021].f_76 = bParam6;
}

void Function_89(bool bParam0, bool bParam1) //Position: 0x31C2 / 12738
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
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

void Function_90(bool bParam0, bool bParam1) //Position: 0x3216 / 12822
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

bool Function_91(int iParam0) //Position: 0x3267 / 12903
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_92(bool bParam0, bool bParam1) //Position: 0x327D / 12925
{
	if (!IS_OBJECT_VALID(bParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(bParam0), "nPlayerUse", "MyRestartFlag", bParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

void Function_93(int iParam0) //Position: 0x33D7 / 13271
{
	int iVar0;
	
	iVar0 = Function_94(111, 111, 5);
	if (iParam0 != Global_30628[0] && !Function_69(Global_13172[iVar011].f_20, 8388608))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[0]);
	}
	else if (iParam0 != Global_30628[2] && !Function_69(Global_13172[iVar011].f_20, 4194304))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[2]);
	}
	else if (iParam0 != Global_30628[1] && !Function_69(Global_13172[iVar011].f_20, 0x1000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[1]);
	}
	else if (iParam0 != Global_30628[3] && !Function_69(Global_13172[iVar011].f_20, 0x2000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30628[3]);
	}
	else if (iParam0 != Global_30633[2] && !Function_69(Global_13172[iVar011].f_20, 0x40000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[2]);
	}
	else if (iParam0 != Global_30633[0] && !Function_69(Global_13172[iVar011].f_20, 0x10000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[0]);
	}
	else if (iParam0 != Global_30633[1] && !Function_69(Global_13172[iVar011].f_20, 0x20000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30633[1]);
	}
	else if (iParam0 != Global_30637[1] && !Function_69(Global_13172[iVar011].f_20, 0x4000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[1]);
	}
	else if (iParam0 != Global_30637[0] && !Function_69(Global_13172[iVar011].f_20, 0x8000000))
	{
		DECOR_SET_INT(Global_34573, "InitDistrict", Global_30637[0]);
	}
	return;
}

int Function_94(bool bParam0, bool bParam1, bool bParam2) //Position: 0x360F / 13839
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_98(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_95(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_95(bParam0, bParam1, bParam2, 4294967295);
}

int Function_95(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x366D / 13933
{
	var uVar0;
	
	if (!Function_97(bParam2))
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
	uVar0 = Function_98(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_96(uVar0);
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

int Function_96(int iParam0) //Position: 0x37C2 / 14274
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

bool Function_97(int iParam0) //Position: 0x3800 / 14336
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x3815 / 14357
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_99() //Position: 0x3835 / 14389
{
	return 1;
}

void Function_100(int iParam0) //Position: 0x383C / 14396
{
	Function_102(StackVal, &uLocal_3, &uLocal_444, 2, 4294967295, 0);
	Function_102(&uLocal_3, &uLocal_444, 5, Local_274.f_172, 4294967295, 0);
	Function_102(&uLocal_3, &uLocal_444, 5, Local_274.f_176, 4294967295, 0);
	Function_102(&uLocal_3, &uLocal_444, 5, Local_274.f_248, 4294967295, 0);
	Function_101(Local_274.f_248, 12);
	return;
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x3890 / 14480
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

void Function_102(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5) //Position: 0x38F7 / 14583
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

void Function_103(var uParam0) //Position: 0x39D2 / 14802
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

bool Function_104() //Position: 0x39E1 / 14817
{
	return Function_105();
}

int Function_105() //Position: 0x39EA / 14826
{
	var uVar0;
	
	Function_106(3, 3);
	uVar0 = uVar0;
	Local_274 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(Local_274))
	{
		Local_274 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	Local_274.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_274, "npunv_tran", 2, -4842.567f, 33.78479f, 4970.404f, 0.0f, 87.97502f, 0.0f, 68.0244f, 21.45282f, 44.2508f);
	Local_274.f_8 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_esc_nos_battle", 3, -4609.521f, 13.98175f, 4137.299f, 0.0f, 60.0f, 0.0f, 200.0f, 50.0f, 300.0f);
	Local_274.f_12 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_tran1", 3, -4327.271f, 13.98175f, 4397.527f, 0.0f, -3.631602f, 0.0f, 92.06374f, 58.7631f, 90.68874f);
	Local_274.f_16 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_tran2", 2, -3266.412f, 33.78479f, 4546.414f, 0.0f, 87.97502f, 0.0f, 75.51233f, 37.61528f, 88.3866f);
	Local_274.f_60 = CREATE_VOLUME_SET_IN_LAYOUT(Local_274, "punv_flk_WEST_set");
	(*&Local_274 + 20)[0] = CREATE_VOLUME_IN_LAYOUT(Local_274, "coyotes6", 3, -4053.511f, 31.61791f, 4256.35f, 0.0f, 20.0f, 0.0f, 192.6178f, 44.6306f, 126.3124f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[0]);
	(*&Local_274 + 20)[1] = CREATE_VOLUME_IN_LAYOUT(Local_274, "coyotes1", 3, -4283.042f, 19.36054f, 4115.044f, 0.0f, 20.0f, 0.0f, 119.3484f, 82.62196f, 120.0395f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[1]);
	(*&Local_274 + 20)[2] = CREATE_VOLUME_IN_LAYOUT(Local_274, "coyotes3", 3, -4567.866f, 19.961f, 4109.342f, 0.0f, 20.0f, 0.0f, 154.9664f, 82.62196f, 178.2139f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[2]);
	(*&Local_274 + 20)[3] = CREATE_VOLUME_IN_LAYOUT(Local_274, "coyotes4", 3, -4325.205f, 20.17509f, 4623.838f, 0.0f, 20.0f, 0.0f, 98.60401f, 82.62196f, 129.3296f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[3]);
	(*&Local_274 + 20)[4] = CREATE_VOLUME_IN_LAYOUT(Local_274, "coyotes5", 3, -4754.885f, 71.98521f, 4885.782f, 0.0f, 20.0f, 0.0f, 92.62215f, 82.62196f, 129.3296f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[4]);
	(*&Local_274 + 20)[5] = CREATE_VOLUME_IN_LAYOUT(Local_274, "ncoyotes10", 3, -4875.985f, 46.44733f, 4963.133f, 0.0f, 20.0f, 0.0f, 58.77868f, 74.20964f, 70.03761f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[5]);
	(*&Local_274 + 20)[6] = CREATE_VOLUME_IN_LAYOUT(Local_274, "coyotes9", 3, -4512.592f, 38.78421f, 4442.362f, 0.0f, 20.0f, 0.0f, 86.0778f, 74.20964f, 165.4384f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[6]);
	(*&Local_274 + 20)[7] = CREATE_VOLUME_IN_LAYOUT(Local_274, "goats14", 3, -4372.829f, 27.13992f, 4815.416f, 0.0f, 20.0f, 0.0f, 79.04242f, 55.95125f, 75.64068f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[7]);
	(*&Local_274 + 20)[8] = CREATE_VOLUME_IN_LAYOUT(Local_274, "goats24", 3, -4580.596f, 46.69889f, 4750.83f, 0.0f, 20.0f, 0.0f, 125.3083f, 43.02709f, 157.6022f);
	ADD_TO_VOLUME_SET(Local_274.f_60, (*&Local_274 + 20)[8]);
	Local_274.f_88 = CREATE_VOLUME_SET_IN_LAYOUT(Local_274, "punv_flk_EAST_set");
	(*&Local_274 + 64)[0] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wolfs", 3, -3398.574f, 97.65329f, 4419.211f, 0.0f, 20.0f, 0.0f, 58.66848f, 19.16315f, 137.4961f);
	ADD_TO_VOLUME_SET(Local_274.f_88, (*&Local_274 + 64)[0]);
	(*&Local_274 + 64)[1] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wolfs1", 3, -3184.232f, 54.10172f, 4300.294f, 0.0f, 2.679045f, 0.0f, 151.1155f, 17.93411f, 194.6789f);
	ADD_TO_VOLUME_SET(Local_274.f_88, (*&Local_274 + 64)[1]);
	(*&Local_274 + 64)[2] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wolfs2", 3, -3206.257f, 66.46912f, 4636.435f, 0.0f, -11.54876f, 0.0f, 265.7644f, 19.28539f, 93.74146f);
	ADD_TO_VOLUME_SET(Local_274.f_88, (*&Local_274 + 64)[2]);
	(*&Local_274 + 64)[3] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wolfs3", 3, -3613.859f, 128.8785f, 4535.32f, 0.0f, 20.0f, 0.0f, 132.8462f, 18.94953f, 155.3031f);
	ADD_TO_VOLUME_SET(Local_274.f_88, (*&Local_274 + 64)[3]);
	(*&Local_274 + 64)[4] = CREATE_VOLUME_IN_LAYOUT(Local_274, "goats", 3, -3549.181f, 76.45248f, 4796.4f, 0.0f, 20.0f, 0.0f, 183.6342f, 33.18642f, 79.31761f);
	ADD_TO_VOLUME_SET(Local_274.f_88, (*&Local_274 + 64)[4]);
	Local_274.f_116 = CREATE_VOLUME_SET_IN_LAYOUT(Local_274, "punv_flk_CENTER_set");
	(*&Local_274 + 92)[0] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wildHorses", 3, -4140.523f, 64.02142f, 4521.697f, 0.0f, 20.0f, 0.0f, 112.8827f, 56.05088f, 137.2034f);
	ADD_TO_VOLUME_SET(Local_274.f_116, (*&Local_274 + 92)[0]);
	(*&Local_274 + 92)[1] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wildHorses1", 3, -3866.674f, 36.41291f, 4403.495f, 0.0f, 20.0f, 0.0f, 137.2034f, 42.62727f, 97.33247f);
	ADD_TO_VOLUME_SET(Local_274.f_116, (*&Local_274 + 92)[1]);
	(*&Local_274 + 92)[2] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wildHorses2", 3, -3939.405f, 39.44256f, 4631.492f, 0.0f, 20.0f, 0.0f, 78.74556f, 42.62727f, 124.5381f);
	ADD_TO_VOLUME_SET(Local_274.f_116, (*&Local_274 + 92)[2]);
	(*&Local_274 + 92)[3] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wildHorses3", 3, -4129.055f, 40.76117f, 4787.472f, 0.0f, 41.75226f, 0.0f, 158.0032f, 54.5681f, 137.2034f);
	ADD_TO_VOLUME_SET(Local_274.f_116, (*&Local_274 + 92)[3]);
	(*&Local_274 + 92)[4] = CREATE_VOLUME_IN_LAYOUT(Local_274, "wildHorses4", 3, -3923.579f, 31.12158f, 4847.364f, 0.0f, 50.48258f, 0.0f, 108.1141f, 40.94079f, 76.08596f);
	ADD_TO_VOLUME_SET(Local_274.f_116, (*&Local_274 + 92)[4]);
	Local_274.f_164 = CREATE_VOLUME_SET_IN_LAYOUT(Local_274, "punv_flk_BIRD_set");
	(*&Local_274 + 120)[0] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds1", 3, -4752.0f, 33.53765f, 4056.0f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[0]);
	(*&Local_274 + 120)[1] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds2", 3, -4576.0f, 26.98331f, 4372f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[1]);
	(*&Local_274 + 120)[2] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds3", 3, -4510.71f, 31.26405f, 3952f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[2]);
	(*&Local_274 + 120)[3] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds4", 3, -4064f, 30.32837f, 4304.0f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[3]);
	(*&Local_274 + 120)[4] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds5", 3, -3871.368f, 42.61471f, 4306.821f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[4]);
	(*&Local_274 + 120)[5] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds6", 3, -3472f, 39.96742f, 4260.0f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[5]);
	(*&Local_274 + 120)[6] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds7", 3, -4208.0f, 59.79043f, 4704f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[6]);
	(*&Local_274 + 120)[7] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds8", 3, -4756.0f, 66.91064f, 4908f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[7]);
	(*&Local_274 + 120)[8] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds9", 3, -3736f, 45.54935f, 4714.0f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[8]);
	(*&Local_274 + 120)[9] = CREATE_VOLUME_IN_LAYOUT(Local_274, "birds10", 3, -3308.0f, 72.19768f, 4540f, 0.0f, 20.0f, 0.0f, 345.6112f, 47.12199f, 340.4008f);
	ADD_TO_VOLUME_SET(Local_274.f_164, (*&Local_274 + 120)[9]);
	Local_274.f_168 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_corr_g", 3, -4394.522f, 42.22266f, 4329.721f, 0.0f, 20.0f, 0.0f, 19.06864f, 21.58452f, 13.16881f);
	Local_274.f_172 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_vista_1", 3, -4723.343f, 61.142f, 4708.676f, 0.0f, 0.0f, 0.0f, 5.0f, 20.0f, 5.0f);
	Local_274.f_176 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_vista_2", 3, -4502.206f, 48.573f, 4278.378f, 0.0f, 0.0f, 0.0f, 10.0f, 20.0f, 10.0f);
	Local_274.f_180 = CREATE_VOLUME_IN_LAYOUT(Local_274, "PLT_bats", 3, -3370.941f, 60.25747f, 4768.961f, 0.0f, 282.2999f, 0.0f, 16.35729f, 5.60464f, 25.5488f);
	Local_274.f_224 = CREATE_VOLUME_SET_IN_LAYOUT(Local_274, "punv_aquaticWildlife_set");
	(*&Local_274 + 184)[0] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness9", 2, -3256.872f, 1.768422f, 3988.495f, 0.0f, 12.37247f, 0.0f, 368.4553f, 28.50097f, 129.9468f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[0]);
	(*&Local_274 + 184)[1] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness8", 2, -3553.333f, 1.170906f, 4135.474f, 0.0f, 9.2336f, 0.0f, 408.202f, 28.50097f, 101.0467f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[1]);
	(*&Local_274 + 184)[2] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness7", 2, -3890.82f, -9.707797f, 4075.958f, 0.0f, 52.61807f, 0.0f, 132.6222f, 28.50097f, 418.6697f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[2]);
	(*&Local_274 + 184)[3] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness6", 2, -4164.0f, -10.36915f, 3928.0f, 0.0f, -28.16471f, 0.0f, 219.4432f, 28.50097f, 202.146f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[3]);
	(*&Local_274 + 184)[4] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness5", 2, -4444.0f, -8.29268f, 3888.521f, 0.0f, 0.0f, 0.0f, 440.7853f, 28.50097f, 151.8147f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[4]);
	(*&Local_274 + 184)[5] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness4", 2, -4718.319f, -8.481395f, 4088.914f, 0.0f, 36.44233f, 0.0f, 438.6112f, 38.5436f, 166.0771f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[5]);
	(*&Local_274 + 184)[6] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness3", 2, -4727.755f, 0.09645043f, 4250.598f, 0.0f, 61.69999f, 0.0f, 172.8494f, 28.50097f, 381.0598f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[6]);
	(*&Local_274 + 184)[7] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness2", 2, -4743.079f, -3.361446f, 4528f, 0.0f, -28.1262f, 0.0f, 144.2621f, 32.11439f, 340.5732f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[7]);
	(*&Local_274 + 184)[8] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_aquaticWilderness1", 2, -4999.959f, -3.257817f, 4588.019f, 0.0f, -39.11819f, 0.0f, 193.3242f, 0.2104689f, 123.0471f);
	ADD_TO_VOLUME_SET(Local_274.f_224, (*&Local_274 + 184)[8]);
	Local_274.f_228 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_bhstop", 2, -4343.281f, 31.61466f, 4385.777f, 0.0f, 4.245905f, 0.0f, 21.1225f, 7.161017f, 10.41845f);
	Local_274.f_232 = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_player_house", 2, -3837.362f, 4.180588f, 4225.974f, 0.0f, 4.245905f, 0.0f, 6.321364f, 5.02245f, 4.020336f);
	Local_274.f_248 = CREATE_VOLUME_SET_IN_LAYOUT(Local_274, "punv_plata_caves_set");
	(*&Local_274 + 236)[0] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_plata_02", 2, -3371.545f, 59.80634f, 4773.75f, 0.3701224f, 21.03401f, -0.2902972f, 19.94097f, 7.980592f, 21.51182f);
	ADD_TO_VOLUME_SET(Local_274.f_248, (*&Local_274 + 236)[0]);
	(*&Local_274 + 236)[1] = CREATE_VOLUME_IN_LAYOUT(Local_274, "punv_plata_01", 2, -3349.833f, 60.82028f, 4766.098f, -8.770242f, 28.54804f, 2.587362f, 28.46577f, 6.975687f, 18.88288f);
	ADD_TO_VOLUME_SET(Local_274.f_248, (*&Local_274 + 236)[1]);
	*(&Local_274 + 252) = { -4115.892f, 22.086f, 4708.979f };
	*(&Local_274 + 252 + 12) = { 0.0f, 290.0f, 0.0f };
	Local_274.f_276 = CREATE_POINT_IN_LAYOUT(Local_274, "npunf_tran", -4115.892f, 22.086f, 4708.979f, 0.0f, 290.0f, 0.0f);
	*(&Local_274 + 280) = { -3994.026f, 16.895f, 4693.762f };
	*(&Local_274 + 280 + 12) = { 0.0f, 146.779f, 0.0f };
	Local_274.f_304 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran1", -3994.026f, 16.895f, 4693.762f, 0.0f, 146.779f, 0.0f);
	*(&Local_274 + 308) = { -4145.799f, 21.082f, 4710.389f };
	*(&Local_274 + 308 + 12) = { 0.0f, 69.084f, 0.0f };
	Local_274.f_332 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran2", -4145.799f, 21.082f, 4710.389f, 0.0f, 69.084f, 0.0f);
	*(&Local_274 + 336) = { -3561.648f, 6.032f, 4513.19f };
	*(&Local_274 + 336 + 12) = { 0.0f, 221.152f, 0.0f };
	Local_274.f_360 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran3", -3561.648f, 6.032f, 4513.19f, 0.0f, 221.152f, 0.0f);
	*(&Local_274 + 364) = { -3296.803f, 38.178f, 4501.235f };
	*(&Local_274 + 364 + 12) = { 0.0f, 149.359f, 0.0f };
	Local_274.f_388 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran4", -3296.803f, 38.178f, 4501.235f, 0.0f, 149.359f, 0.0f);
	*(&Local_274 + 392) = { -3106.449f, 34.244f, 4601.692f };
	*(&Local_274 + 392 + 12) = { 0.0f, 14.633f, 0.0f };
	Local_274.f_416 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran5", -3106.449f, 34.244f, 4601.692f, 0.0f, 14.633f, 0.0f);
	*(&Local_274 + 420) = { -3514.543f, 8.554f, 4243.936f };
	*(&Local_274 + 420 + 12) = { 0.0f, 100.655f, 0.0f };
	Local_274.f_444 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran6", -3514.543f, 8.554f, 4243.936f, 0.0f, 100.655f, 0.0f);
	*(&Local_274 + 448) = { -3884.977f, 8.031f, 4412.518f };
	*(&Local_274 + 448 + 12) = { 0.0f, 358.598f, 0.0f };
	Local_274.f_472 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran7", -3884.977f, 8.031f, 4412.518f, 0.0f, 358.598f, 0.0f);
	*(&Local_274 + 476) = { -4384.167f, 3.163f, 3897.498f };
	*(&Local_274 + 476 + 12) = { 0.0f, 100.135f, 0.0f };
	Local_274.f_500 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran8", -4384.167f, 3.163f, 3897.498f, 0.0f, 100.135f, 0.0f);
	*(&Local_274 + 504) = { -4465.502f, 3.012f, 3996.664f };
	*(&Local_274 + 504 + 12) = { 0.0f, 213.845f, 0.0f };
	Local_274.f_528 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran9", -4465.502f, 3.012f, 3996.664f, 0.0f, 213.845f, 0.0f);
	*(&Local_274 + 532) = { -4691.783f, 25.123f, 4898.886f };
	*(&Local_274 + 532 + 12) = { 0.0f, 358.836f, 0.0f };
	Local_274.f_556 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran10", -4691.783f, 25.123f, 4898.886f, 0.0f, 358.836f, 0.0f);
	*(&Local_274 + 560) = { -4279.235f, 21.352f, 4823.072f };
	*(&Local_274 + 560 + 12) = { 0.0f, 331.647f, 0.0f };
	Local_274.f_584 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran11", -4279.235f, 21.352f, 4823.072f, 0.0f, 331.647f, 0.0f);
	*(&Local_274 + 588) = { -3802.477f, 6.023f, 4552.769f };
	*(&Local_274 + 588 + 12) = { 0.0f, 284.321f, 0.0f };
	Local_274.f_612 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran12", -3802.477f, 6.023f, 4552.769f, 0.0f, 284.321f, 0.0f);
	*(&Local_274 + 616) = { -3169.164f, 38.25f, 4477.19f };
	*(&Local_274 + 616 + 12) = { 0.0f, 70.547f, 0.0f };
	Local_274.f_640 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_tran13", -3169.164f, 38.25f, 4477.19f, 0.0f, 70.547f, 0.0f);
	*(&Local_274 + 644) = { -3832.19f, 2.16f, 4212.83f };
	*(&Local_274 + 644 + 12) = { 0.0f, -23.08565f, 0.0f };
	Local_274.f_668 = CREATE_POINT_IN_LAYOUT(Local_274, "punf_respawn_water_01", -3832.19f, 2.16f, 4212.83f, 0.0f, -23.08565f, 0.0f);
	return 1;
}

void Function_106(int iParam0, int iParam1) //Position: 0x4F86 / 20358
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

void Function_107(var uParam0, int iParam1) //Position: 0x4FCF / 20431
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_108() //Position: 0x4FDE / 20446
{
	return;
}

bool Function_109() //Position: 0x4FE4 / 20452
{
	return Function_110();
}

int Function_110() //Position: 0x4FED / 20461
{
	bool bVar0;
	
	Function_106(3, 3);
	bVar0 = bVar0;
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_only", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/sleeping", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/pee_nospawn", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_116(&Local_19 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	if (!Function_111(&Local_19 + 4))
	{
		return 0;
	}
	Local_19 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(Local_19))
	{
		Local_19 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	*(&Local_19 + 344) = { -3568f, 10.03922f, 4690.101f };
	*(&Local_19 + 344 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_19.f_368 = CREATE_POINT_IN_LAYOUT(Local_19, "punf_bhint", -3568f, 10.03922f, 4690.101f, 0.0f, 0.0f, 0.0f);
	*(&Local_19 + 372) = { -3385.052f, 55.49248f, 4743.046f };
	*(&Local_19 + 372 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_19.f_396 = CREATE_POINT_IN_LAYOUT(Local_19, "punf_bhint1", -3385.052f, 55.49248f, 4743.046f, 0.0f, 0.0f, 0.0f);
	*(&Local_19 + 400) = { -3858.618f, 7.561752f, 4324.156f };
	*(&Local_19 + 400 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_19.f_424 = CREATE_POINT_IN_LAYOUT(Local_19, "punf_bhint2", -3858.618f, 7.561752f, 4324.156f, 0.0f, 0.0f, 0.0f);
	*(&Local_19 + 428) = { -2719.469f, 56.13536f, 4626.306f };
	*(&Local_19 + 428 + 12) = { 0.0f, 0.0f, 0.0f };
	Local_19.f_452 = CREATE_POINT_IN_LAYOUT(Local_19, "punf_bhint4", -2719.469f, 56.13536f, 4626.306f, 0.0f, 0.0f, 0.0f);
	*(&Local_19 + 456) = { -3838.222f, 2.936056f, 4224.813f };
	*(&Local_19 + 456 + 12) = { 0.0f, 9.896287f, 0.0f };
	Local_19.f_480 = CREATE_POINT_IN_LAYOUT(Local_19, "player_save_flag_PUC", -3838.222f, 2.936056f, 4224.813f, 0.0f, 9.896287f, 0.0f);
	*(&Local_19 + 484) = { -3361.005f, 57.105f, 4753.646f };
	*(&Local_19 + 484 + 12) = { 0.0f, 71.122f, 0.0f };
	Local_19.f_508 = CREATE_POINT_IN_LAYOUT(Local_19, "punf_bhint5", -3361.005f, 57.105f, 4753.646f, 0.0f, 71.122f, 0.0f);
	*(&Local_19 + 512) = { -3387.089f, 56.047f, 4760.838f };
	*(&Local_19 + 512 + 12) = { 0.0f, 66.78f, 0.0f };
	Local_19.f_536 = CREATE_POINT_IN_LAYOUT(Local_19, "punf_bhint6", -3387.089f, 56.047f, 4760.838f, 0.0f, 66.78f, 0.0f);
	*(&Local_19 + 540) = { -3342.636f, 60.009f, 4761.252f };
	*(&Local_19 + 540 + 12) = { 0.0f, 80.667f, 0.0f };
	Local_19.f_564 = CREATE_POINT_IN_LAYOUT(Local_19, "pltf_bhtreas", -3342.636f, 60.009f, 4761.252f, 0.0f, 80.667f, 0.0f);
	Local_19.f_568 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", -4632.535f, 11.04314f, 4158.549f, 0.0f, 0.0f, 0.0f);
	Local_19.f_572 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", -4426.68f, 9.035282f, 4084.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_576 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", -4493.135f, 31.7201f, 4356.126f, 0.0f, 92.51361f, 0.0f);
	Local_19.f_580 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", -4558.406f, 28.35676f, 4676f, 0.0f, 0.0f, 0.0f);
	Local_19.f_584 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", -4805.758f, 56.31878f, 4690.146f, 0.0f, 0.0f, 0.0f);
	Local_19.f_588 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", -4668f, 37.131f, 4772f, 0.0f, 0.0f, 0.0f);
	Local_19.f_592 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", -4364.523f, 38.22166f, 4939.899f, 0.0f, 0.0f, 0.0f);
	Local_19.f_596 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", -4409.146f, 21.25448f, 4785.146f, 0.0f, 0.0f, 0.0f);
	Local_19.f_600 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", -4189.719f, 33.21698f, 4571.824f, 0.0f, 0.0f, 0.0f);
	Local_19.f_604 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", -4472.893f, 19.16406f, 4472.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_608 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", -4084f, 28.10982f, 4472.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_612 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", -4149.149f, 26.06166f, 4640.418f, 0.0f, 0.0f, 0.0f);
	Local_19.f_616 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", -4356.042f, 19.05772f, 4866.668f, 0.0f, 0.0f, 0.0f);
	Local_19.f_620 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", -3978.189f, 22.98985f, 4722.898f, 0.0f, 0.0f, 0.0f);
	Local_19.f_624 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", -3843.246f, 19.07475f, 4624.743f, 0.0f, 0.0f, 0.0f);
	Local_19.f_628 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", -3794.123f, 16.16675f, 4523.952f, 0.0f, 0.0f, 0.0f);
	Local_19.f_632 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", -3684f, 42.5381f, 4797.563f, 0.0f, 0.0f, 0.0f);
	Local_19.f_636 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", -4380.303f, 20.46654f, 4539.749f, 0.0f, 0.0f, 0.0f);
	Local_19.f_640 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", -3656.912f, 16.05293f, 4323.089f, 0.0f, 0.0f, 0.0f);
	Local_19.f_644 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", -4185.621f, 26.89562f, 4823.349f, 0.0f, 0.0f, 0.0f);
	Local_19.f_648 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", -4076.728f, 8.020976f, 4300.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_652 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", -3381.186f, 41.79821f, 4516.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_656 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", -3293.425f, 24.08786f, 4250.755f, 0.0f, 0.0f, 0.0f);
	Local_19.f_660 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", -3163.528f, 12.40064f, 4184.124f, 0.0f, 0.0f, 0.0f);
	Local_19.f_664 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", -3914.963f, 6.85247f, 4232.754f, 0.0f, 0.0f, 0.0f);
	Local_19.f_668 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", -4341.831f, 10.03922f, 3941.085f, 0.0f, 0.0f, 0.0f);
	Local_19.f_672 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear26", "Player_Herb_PricklyPear", -3491.775f, 39.79387f, 4621.221f, 0.0f, 0.0f, 0.0f);
	Local_19.f_676 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", -3763.327f, 11.09543f, 4268.9f, 0.0f, 0.0f, 0.0f);
	Local_19.f_680 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", -4177.569f, 19.92033f, 4230.45f, 0.0f, 0.0f, 0.0f);
	Local_19.f_684 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", -3877.123f, 7.098152f, 4314.877f, 0.0f, 0.0f, 0.0f);
	Local_19.f_688 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear30", "Player_Herb_PricklyPear", -4604.543f, 13.05097f, 4078.206f, 0.0f, 0.0f, 0.0f);
	Local_19.f_692 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear31", "Player_Herb_PricklyPear", -4189.641f, 6.694569f, 4036.434f, 0.0f, 0.0f, 0.0f);
	Local_19.f_696 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear33", "Player_Herb_PricklyPear", -4286.105f, 19.51563f, 4523.792f, 0.0f, 0.0f, 0.0f);
	Local_19.f_700 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear34", "Player_Herb_PricklyPear", -3964f, 26.36402f, 4591.619f, 0.0f, 0.0f, 0.0f);
	Local_19.f_704 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear73", "Player_Herb_PricklyPear", -3921.737f, 10.23184f, 4457.994f, 0.0f, 0.0f, 0.0f);
	Local_19.f_708 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear74", "Player_Herb_PricklyPear", -3462.793f, 48.18824f, 4724.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_712 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear75", "Player_Herb_PricklyPear", -3242.406f, 52.46712f, 4662.22f, 0.0f, 0.0f, 0.0f);
	Local_19.f_716 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear76", "Player_Herb_PricklyPear", -3834.247f, 52.18822f, 4872.777f, 0.0f, 0.0f, 0.0f);
	Local_19.f_720 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear77", "Player_Herb_PricklyPear", -3600f, 21.08236f, 4282.167f, 0.0f, 0.0f, 0.0f);
	Local_19.f_724 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Sit_Ground_Drink10", "Sit_Ground_Drink", -3566.151f, 10.03922f, 4684.807f, 0.0f, 125.7517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_724), 0);
	Local_19.f_728 = CREATE_GRINGO_IN_LAYOUT(Local_19, "rand_idle_stand", "rand_idle_stand", -3543.14f, 14.39135f, 4677.602f, 0.0f, 104.3152f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_728), 0);
	Local_19.f_732 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Sit_Ground_Drink2", "Sit_Ground_Drink", -3542.386f, 14.49005f, 4675.354f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_732), 0);
	Local_19.f_736 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Sit_Ground_Drink1", "Sit_Ground_Drink", -3542.094f, 14.49005f, 4673.319f, 0.0f, 136.8575f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_736), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_rand_idle_stand2", "rand_idle_stand", -2748.117f, 46.183f, 4608.924f, 0.0f, 72.66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_rand_idle_stand1", "rand_idle_stand", -2738.463f, 52.114f, 4605.324f, 0.0f, 72.66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "ndiab_Pee1", "Pee", -2732.317f, 55.88308f, 4602.23f, 0.0f, -78.35882f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", -2721.312f, 56.135f, 4626.071f, 0.0f, -71.04374f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", -2717.047f, 56.13536f, 4626.959f, 0.0f, 28.81129f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", -2719.872f, 56.14576f, 4632.723f, 0.0f, -160.4651f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_Pee", "Pee", -2719.947f, 56.14061f, 4619.677f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_rand_idle_stand", "rand_idle_stand", -2732.475f, 54.799f, 4620.533f, 0.0f, 72.66499f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -2719.381f, 56.136f, 4624.018f, 0.0f, -86.41405f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -2717.162f, 56.13536f, 4622.923f, 0.0f, -199.554f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", -2718.725f, 56.19336f, 4625.808f, 0.0f, -49.80202f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_stand", "rand_idle_stand", -2755.338f, 44.574f, 4608.967f, 0.0f, 47.45972f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", -2747.982f, 46.58796f, 4617.084f, 0.0f, -261.3201f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_sit_smokediab", "sit_ground_smoke", -2750.69f, 46.5379f, 4619.904f, 0.0f, -279.5391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_smoking_stand", "smoking_stand", -2713.061f, 57.17479f, 4633.203f, 0.0f, -192.8825f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", -2730.924f, 55.25158f, 4607.433f, 0.0f, 70.70719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_horse_stay7", "horse_stay", -2717.415f, 46.003f, 4670.128f, 0.0f, -28.21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_horse_stay6", "horse_stay", -2728.029f, 48.83f, 4663.372f, 0.0f, -302.0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_horse_stay5", "horse_stay", -2744.786f, 47.842f, 4622.784f, 0.0f, -28.21038f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_horse_stay", "horse_stay", -2752.478f, 45.581f, 4613.565f, 0.0f, -302.0126f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_lookdistance_binocs", "look_distance_binocs", -2739.578f, 52.528f, 4609.783f, 0.0f, 120.0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "diab_lookdistance_binocs1", "look_distance_binocs", -2723.603f, 48.057f, 4670.079f, 0.0f, 120.0453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "stand_lookdistance_diab", "stand_lookdistance_w_any", -2711.862f, 45.174f, 4549.208f, 0.0f, 183.9572f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Dia_lookdistance_binocs", "look_distance_binocs", -2751.219f, 41.231f, 4569.213f, 0.0f, 105.7632f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_740 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Sit_Ground_Only", "Sit_Ground_Only", -3544.161f, 14.49005f, 4675.211f, 0.0f, -35.80775f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_740), 0);
	Local_19.f_744 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sit_ground_smoke10", "sit_ground_smoke", -3552.318f, 20.33336f, 4707.359f, 0.0f, -96.85366f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_744), 0);
	Local_19.f_748 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Sit_Ground_Drink", "Sit_Ground_Drink", -3550.872f, 20.26141f, 4706.266f, 0.0f, -184.3158f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_748), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_look_distance_binocs2", "look_distance_binocs", -3563.442f, 17.07998f, 4662.798f, 0.0f, 14.69602f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_horse_tend2", "horse_tend", -3569.781f, 10.02471f, 4677.918f, 0.0f, -183.2637f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_horse_stay1", "horse_stay", -3567.08f, 10.039f, 4678.634f, 0.0f, -38.47382f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_horse_tend1", "horse_tend", -3585.365f, 10.03922f, 4692.382f, 0.0f, -58.05069f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_horse_stay", "horse_stay", -3582.068f, 10.16748f, 4693.933f, 0.0f, -76.20228f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_752 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_horse_tend", "horse_tend", -3583.761f, 10.06808f, 4690.108f, 0.0f, -61.44313f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_752), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_rand_idle_stand1", "rand_idle_stand", -3546.922f, 14.49005f, 4672.127f, 0.0f, 133.9157f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_sleeping_scripted2", "sleeping_scripted", -3563.274f, 10.108f, 4684.026f, 0.0f, -218.0335f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_756 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sit_ground_smoke", "sit_ground_smoke", -3831.97f, 2.137364f, 4213.593f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_756), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_horse_stay1", "horse_stay", -3846.59f, 2.616897f, 4220.0f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_horse_stay", "horse_stay", -3842.54f, 2.837366f, 4226.175f, 0.0f, -193.8496f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_horse_tend", "horse_tend", -3844.865f, 2.973f, 4226.62f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_Pee", "Pee", -3850.322f, 4.144f, 4229.261f, 0.0f, 102.0665f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_stand_guntrick", "stand_guntricks_e_any", -3834.501f, 2.258546f, 4216.329f, 0.0f, -6.798063f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_riverwash", "nriverwash", -3831.051f, 1.483f, 4220.467f, 0.0f, -57.8837f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_stand_lookdistance", "stand_lookdistance_w_any", -3849.787f, 7.337f, 4240.15f, 0.0f, 270.0022f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_window_R", "look_out_window_R", -3839.42f, 2.941082f, 4224.783f, 0.0f, 93.35406f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_Sit_Ground", "Rand_Idle_Sit_Ground", -3838.539f, 2.941082f, 4225.021f, 0.0f, 54.31423f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Pue_sit_docks", "nsit_docks", -3830.538f, 2.177495f, 4213.612f, 0.0f, -135.9579f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_sleeping_scripted1", "sleeping_scripted", -3551.362f, 20.431f, 4709.676f, 0.0f, 13.06262f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_sit_ground_play_harmonica", "sit_ground_play_harmonica", -3549.921f, 20.32929f, 4708.246f, 0.0f, 69.86318f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3563.03f, 18.60939f, 4708.513f, 0.0f, 136.4816f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_look_distance_binocs1", "look_distance_binocs", -3549.38f, 20.22122f, 4704.918f, 0.0f, 23.99923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_stand_guntricks_e_any", "stand_guntricks_e_any", -3569.209f, 10.03922f, 4686.378f, 0.0f, -62.98453f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3577.605f, 9.625031f, 4667.982f, 0.0f, -9.328076f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_Pee", "Pee", -3551.588f, 10.68554f, 4688.082f, 0.0f, -87.17547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3567.046f, 10.03922f, 4687.078f, 0.0f, 13.78003f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_smoking_stand", "smoking_stand", -3579.044f, 9.793329f, 4671.625f, 0.0f, -319.5549f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", -3568.74f, 10.02699f, 4684.736f, 0.0f, 230.0923f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_sleeping_scripted", "sleeping_scripted", -3542.32f, 14.49005f, 4672.359f, 0.0f, -126.5194f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_stand_announce", "stand_announce", -3558.897f, 17.39976f, 4661.43f, 0.0f, -179.4728f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_stand_lookdistance_w_any", "stand_lookdistance_w_any", -3565.633f, 16.92693f, 4663.674f, 0.0f, -11.63906f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "sid_look_distance_binocs", "look_distance_binocs", -3555.776f, 18.28032f, 4658.035f, 0.0f, 51.24591f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_760 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear78", "Player_Herb_PricklyPear", -3590.427f, 24.09413f, 4297.574f, 0.0f, 0.0f, 0.0f);
	Local_19.f_764 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear79", "Player_Herb_PricklyPear", -4140.784f, 30.07766f, 4359.824f, 0.0f, 0.0f, 0.0f);
	Local_19.f_768 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear80", "Player_Herb_PricklyPear", -4727.197f, 59.61876f, 4714.125f, 0.0f, -108.8801f, 0.0f);
	Local_19.f_772 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear81", "Player_Herb_PricklyPear", -4274.932f, 20.08273f, 4767.003f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_horse_stay3", "horse_stay", -3374.934f, 47.48188f, 4702.021f, 0.0f, -18.36461f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_horse_stay2", "horse_stay", -3405.209f, 49.85294f, 4723.533f, 0.0f, 97.535f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_smoking_stand2", "smoking_stand", -3368.674f, 56.19841f, 4749.482f, 0.0f, -337.4679f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_Rand_Idle_Sit_Ground5", "Rand_Idle_Sit_Ground", -3359.302f, 57.98686f, 4759.069f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", -3385.947f, 56.12448f, 4761.743f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_lookdistance_binocs5", "look_distance_binocs", -3364.368f, 50.58201f, 4712.998f, 0.0f, 56.20469f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_lookdistance_binocs4", "look_distance_binocs", -3358.165f, 48.05708f, 4680.735f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_stand_lookdistance1", "stand_lookdistance_w_any", -3386.745f, 48.04662f, 4706.654f, 0.0f, 29.63346f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_lookdistance_binocs3", "look_distance_binocs", -3402.552f, 51.57449f, 4734.544f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plta_stand_lookdistance", "stand_lookdistance_w_any", -3397.058f, 48.07362f, 4708.585f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "pun_smoking_stand1", "smoking_stand", -3362.111f, 56.98337f, 4750.522f, 0.0f, -267.2515f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_stand1", "rand_idle_stand", -3367.398f, 55.96766f, 4740.842f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_stand_spit", "stand_spit", -3400.005f, 53.02031f, 4739.182f, 0.0f, 18.25717f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_sit_ground_smoke", "sit_ground_smoke", -3376.3f, 56.40027f, 4746.254f, 0.0f, 61.63646f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_rand_idle_stand", "rand_idle_stand", -3408.065f, 52.341f, 4739.222f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_horse_stay1", "horse_stay", -3398.433f, 55.29071f, 4753.295f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_horse_stay", "horse_stay", -3405.549f, 53.05554f, 4742.302f, 0.0f, 98.06629f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_drunk_throwbottle", "stand_drunk_throwbottle", -3380.9f, 55.83662f, 4741.939f, 0.0f, -17.49117f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_Rand_Idle_Sit_Ground3", "Rand_Idle_Sit_Ground", -3369.956f, 56.21962f, 4747.671f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_Pee", "Pee", -3390.581f, 55.248f, 4749.821f, 0.0f, -166.7814f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", -3367.293f, 56.27127f, 4747.336f, 0.0f, 87.42749f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_smoking_stand", "smoking_stand", -3369.253f, 56.20813f, 4743.391f, 0.0f, 87.17111f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_stand_guntricks_e_any", "stand_guntricks_e_any", -3371.387f, 56.2196f, 4746.512f, 0.0f, 24.36719f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "plt_look_distance_binocs2", "look_distance_binocs", -3389.051f, 47.53177f, 4700.163f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_776 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear82", "Player_Herb_PricklyPear", -4501.43f, 19.14546f, 4487.654f, 0.0f, 0.0f, 0.0f);
	Local_19.f_780 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear72", "Player_Herb_PricklyPear", -3306.959f, 39.31733f, 4485.227f, 0.0f, 0.0f, 0.0f);
	Local_19.f_784 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear71", "Player_Herb_PricklyPear", -3294.075f, 6.459073f, 4080f, 0.0f, 0.0f, 0.0f);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_stand_lookdistance_w_any2", "stand_lookdistance_w_any", -3875.95f, 9.035301f, 4332.05f, 0.0f, -223.8547f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_sleeping1", "sleeping", -3859.652f, 7.0667f, 4320.313f, 0.0f, 116.6932f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_Pee_nospawn", "Pee_nospawn", -3867.383f, 7.484222f, 4281.296f, 0.0f, 425.9995f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_sleeping", "sleeping", -3859.669f, 6.903308f, 4317.758f, 0.0f, -131.6545f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_sit_ground_smoke1", "sit_ground_smoke", -3862.264f, 6.999852f, 4319.712f, 0.0f, -142.6826f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_stand_lookdistance_w_any1", "stand_lookdistance_w_any", -3888.642f, 7.098955f, 4311.407f, 0.0f, 132.3517f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_stand_lookdistance_w_any", "stand_lookdistance_w_any", -3872f, 8.045292f, 4285.055f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_rand_idle_stand", "rand_idle_stand", -3859.487f, 8.505493f, 4293.897f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", -3860f, 7.522324f, 4325.883f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_horse_stay2", "horse_stay", -3856.691f, 8.325266f, 4293.951f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_horse_stay1", "horse_stay", -3854.29f, 8.783296f, 4335.07f, 0.0f, 1.794803f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_horse_stay", "horse_stay", -3856.527f, 8.618322f, 4334.046f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "nCrT_Yawn2", "stand_yawning_n_any", -3839.57f, 9.503844f, 4315.619f, 0.0f, 300.2774f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_horse_tend1", "horse_tend", -3851.085f, 9.136021f, 4338.731f, 0.0f, -175.3594f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_rand_idle_stand1", "rand_idle_stand", -3907.57f, 8.015f, 4308.359f, 0.0f, -120.7614f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_look_distance_binocs1", "look_distance_binocs", -3919.962f, 8.015f, 4306.852f, 0.0f, 103.8305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_788 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_horse_tend", "horse_tend", -3852.886f, 8.974073f, 4336.7f, 0.0f, -176.1855f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_788), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT__look_distance_binocs", "look_distance_binocs", -3871.676f, 9.375f, 4305.959f, 0.0f, -224.6903f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", -3857.507f, 7.871f, 4307.467f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_horse_stay5", "horse_stay", -3847.016f, 9.325869f, 4338.026f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_19, "CrT_horse_stay4", "horse_stay", -3848.894f, 9.203953f, 4339.044f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_19.f_792 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear35", "Player_Herb_PricklyPear", -3133.017f, 36.10571f, 4557.55f, 0.0f, 0.0f, 0.0f);
	Local_19.f_796 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear36", "Player_Herb_PricklyPear", -3163.875f, 37.14511f, 4557.292f, 0.0f, 0.0f, 0.0f);
	Local_19.f_800 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear37", "Player_Herb_PricklyPear", -3108f, 35.13727f, 4484.593f, 0.0f, 0.0f, 0.0f);
	Local_19.f_804 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear38", "Player_Herb_PricklyPear", -3116f, 34.13333f, 4440.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_808 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear39", "Player_Herb_PricklyPear", -3313.94f, 40.27979f, 4434.933f, 0.0f, 0.0f, 0.0f);
	Local_19.f_812 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear40", "Player_Herb_PricklyPear", -3196f, 38.14905f, 4668.886f, 0.0f, 0.0f, 0.0f);
	Local_19.f_816 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear41", "Player_Herb_PricklyPear", -3116f, 40.15668f, 4684.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_820 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear42", "Player_Herb_PricklyPear", -3110.445f, 35.13728f, 4660.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_824 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear43", "Player_Herb_PricklyPear", -3282.099f, 40.15684f, 4583.203f, 0.0f, 0.0f, 0.0f);
	Local_19.f_828 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear44", "Player_Herb_PricklyPear", -3312.71f, 38.14905f, 4667.29f, 0.0f, 0.0f, 0.0f);
	Local_19.f_832 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear45", "Player_Herb_PricklyPear", -3387.117f, 44.17185f, 4646.421f, 0.0f, 0.0f, 0.0f);
	Local_19.f_836 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear46", "Player_Herb_PricklyPear", -3436.896f, 22.08629f, 4417.115f, 0.0f, 0.0f, 0.0f);
	Local_19.f_840 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear47", "Player_Herb_PricklyPear", -3395.47f, 41.1608f, 4602.824f, 0.0f, 0.0f, 0.0f);
	Local_19.f_844 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear48", "Player_Herb_PricklyPear", -3550.464f, 6.620461f, 4570.535f, 0.0f, 0.0f, 0.0f);
	Local_19.f_848 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear49", "Player_Herb_PricklyPear", -3873.01f, 18.0706f, 4561.492f, 0.0f, 0.0f, 0.0f);
	Local_19.f_852 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear50", "Player_Herb_PricklyPear", -3860.274f, 15.07009f, 4639.726f, 0.0f, 0.0f, 0.0f);
	Local_19.f_856 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear51", "Player_Herb_PricklyPear", -3720.529f, 12.21378f, 4781.691f, 0.0f, 0.0f, 0.0f);
	Local_19.f_860 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear52", "Player_Herb_PricklyPear", -3906.22f, 27.1059f, 4755.946f, 0.0f, 0.0f, 0.0f);
	Local_19.f_864 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear53", "Player_Herb_PricklyPear", -4028.633f, 34.2771f, 4916.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_868 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear54", "Player_Herb_PricklyPear", -4113.239f, 33.12943f, 4933.24f, 0.0f, 0.0f, 0.0f);
	Local_19.f_872 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear55", "Player_Herb_PricklyPear", -4142.28f, 28.91674f, 4837.522f, 0.0f, 0.0f, 0.0f);
	Local_19.f_876 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear56", "Player_Herb_PricklyPear", -4157.844f, 23.29663f, 4739.758f, 0.0f, 0.0f, 0.0f);
	Local_19.f_880 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear57", "Player_Herb_PricklyPear", -4187.375f, 24.64962f, 4735.156f, 0.0f, 0.0f, 0.0f);
	Local_19.f_884 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear58", "Player_Herb_PricklyPear", -4246.079f, 23.09832f, 4833.922f, 0.0f, 0.0f, 0.0f);
	Local_19.f_888 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear59", "Player_Herb_PricklyPear", -4089.535f, 23.56466f, 4705.024f, 0.0f, 0.0f, 0.0f);
	Local_19.f_892 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear60", "Player_Herb_PricklyPear", -4042.739f, 26.21959f, 4665.643f, 0.0f, 0.0f, 0.0f);
	Local_19.f_896 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear61", "Player_Herb_PricklyPear", -3985.936f, 25.14525f, 4650.064f, 0.0f, 0.0f, 0.0f);
	Local_19.f_900 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear62", "Player_Herb_PricklyPear", -3964f, 24.09413f, 4620.622f, 0.0f, 0.0f, 0.0f);
	Local_19.f_904 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear63", "Player_Herb_PricklyPear", -3925.73f, 14.05492f, 4520.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_908 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear64", "Player_Herb_PricklyPear", -3896f, 16.05245f, 4513.779f, 0.0f, 0.0f, 0.0f);
	Local_19.f_912 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear65", "Player_Herb_PricklyPear", -3902.233f, 8.031385f, 4477.767f, 0.0f, 0.0f, 0.0f);
	Local_19.f_916 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear66", "Player_Herb_PricklyPear", -3949.548f, 11.5296f, 4456.587f, 0.0f, 0.0f, 0.0f);
	Local_19.f_920 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear67", "Player_Herb_PricklyPear", -4072f, 7.012664f, 4276.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_924 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear68", "Player_Herb_PricklyPear", -4032f, 7.883675f, 4240.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_928 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear69", "Player_Herb_PricklyPear", -3908.567f, 7.907296f, 4267.709f, 0.0f, 0.0f, 0.0f);
	Local_19.f_932 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_PricklyPear70", "Player_Herb_PricklyPear", -3869.266f, 7.051301f, 4274.734f, 0.0f, 0.0f, 0.0f);
	Local_19.f_936 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", -3116.625f, 7.027439f, 4040f, 0.0f, 0.0f, 0.0f);
	Local_19.f_940 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", -3195.682f, 11.05647f, 4070.123f, 0.0f, 0.0f, 0.0f);
	Local_19.f_944 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", -3236.957f, 7.02744f, 4039.739f, 0.0f, 0.0f, 0.0f);
	Local_19.f_948 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", -3318.133f, 6.285552f, 4099.07f, 0.0f, 0.0f, 0.0f);
	Local_19.f_952 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", -3418.286f, 6.273073f, 4178.574f, 0.0f, 0.0f, 0.0f);
	Local_19.f_956 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", -3116.365f, 13.19427f, 4303.721f, 0.0f, 0.0f, 0.0f);
	Local_19.f_960 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", -3181.101f, 13.2906f, 4349.328f, 0.0f, 0.0f, 0.0f);
	Local_19.f_964 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", -3168f, 11.53559f, 4393.568f, 0.0f, 0.0f, 0.0f);
	Local_19.f_968 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", -3328.261f, 39.34695f, 4431.806f, 0.0f, 0.0f, 0.0f);
	Local_19.f_972 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", -3372.252f, 39.11925f, 4463.432f, 0.0f, 0.0f, 0.0f);
	Local_19.f_976 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", -3357.001f, 24.09412f, 4357.001f, 0.0f, 0.0f, 0.0f);
	Local_19.f_980 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", -3244.0f, 37.14493f, 4520f, 0.0f, 0.0f, 0.0f);
	Local_19.f_984 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", -3287.507f, 70.34961f, 4733.125f, 0.0f, 0.0f, 0.0f);
	Local_19.f_988 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", -3336f, 39.37475f, 4630.026f, 0.0f, 0.0f, 0.0f);
	Local_19.f_992 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", -3378.919f, 46.0826f, 4685.082f, 0.0f, 0.0f, 0.0f);
	Local_19.f_996 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", -3458.412f, 40.1588f, 4595.002f, 0.0f, 0.0f, 0.0f);
	Local_19.f_1000 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", -3482.208f, 40.39444f, 4524.735f, 0.0f, 0.0f, 0.0f);
	Local_19.f_1004 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", -3433.55f, 22.08629f, 4419.86f, 0.0f, 0.0f, 0.0f);
	Local_19.f_1008 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", -3510.125f, 25.09805f, 4357.875f, 0.0f, 0.0f, 0.0f);
	Local_19.f_1012 = CREATE_GRINGO_IN_LAYOUT(Local_19, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", -3473.502f, 7.027458f, 4284.0f, 0.0f, 0.0f, 0.0f);
	Local_19.f_1016 = CREATE_GRINGO_IN_LAYOUT(Local_19, "player_sleep_PUC", "player_sleep_bed_R", -3837.743f, 2.943747f, 4225.485f, 0.0f, -174.3147f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_19.f_1016), 1);
	return 1;
}

bool Function_111(int iParam0) //Position: 0x9DDE / 40414
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_115();
	iVar1 = 0;
	if (!Function_21(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_114(iParam0[iVar03], 8);
		}
		else if (Function_113())
		{
			iVar1 = 1;
			Function_114(iParam0[iVar03], 8);
		}
		Function_114(iParam0[iVar03], 16);
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
				Function_114(iParam0[iVar03], 1);
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
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
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
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_114(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_114(iParam0[iVar03], 2);
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
	Function_112();
	return 1;
}

void Function_112() //Position: 0xA159 / 41305
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

bool Function_113() //Position: 0xA199 / 41369
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

void Function_114(var uParam0, int iParam1) //Position: 0xA1C4 / 41412
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_115() //Position: 0xA1D5 / 41429
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

var Function_116(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA217 / 41495
{
	int iVar0;
	int iVar1;
	
	if (Global_30842[32])
	{
	}
	iVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_117(uParam0, iVar1, iParam2);
	if (bParam3)
	{
		Function_114(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_117(var uParam0, int iParam1, int iParam2) //Position: 0xA24F / 41551
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_21(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_114(uParam0[iVar03], 4);
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

bool Function_118() //Position: 0xA313 / 41747
{
	return Function_119();
}

int Function_119() //Position: 0xA31C / 41756
{
	var uVar0;
	
	Function_106(3, 3);
	uVar0 = uVar0;
	Function_116(&Local_6 + 4, "p_uti_cover2x1x", 0, 0);
	Function_116(&Local_6 + 4, "p_uti_cover1x1x", 0, 0);
	if (!Function_111(&Local_6 + 4))
	{
		return 0;
	}
	Local_6 = FIND_NAMED_LAYOUT("PuntaOrgullo_layout");
	if (!IS_LAYOUTREF_VALID(Local_6))
	{
		Local_6 = CREATE_LAYOUT("PuntaOrgullo_layout");
	}
	Local_6.f_32 = CREATE_POINT_IN_LAYOUT(Local_6, "f_playerHorse", -3829.98f, 2.74f, 4227.475f, 0.0f, 0.0f, 0.0f);
	Local_6.f_36 = Function_120(Local_6, "cover2x1x0", "p_uti_cover2x1x", -3825.586f, 2.900937f, 4226.143f, 0.0f, 82.24956f, 0.0f, 1);
	Local_6.f_40 = Function_120(Local_6, "cover2x1x1", "p_uti_cover2x1x", -3849.503f, 3.143f, 4213.479f, 0.0f, 77.38024f, 0.0f, 1);
	Local_6.f_44 = Function_120(Local_6, "cover1x1x0", "p_uti_cover1x1x", -3850.03f, 3.715f, 4225.948f, 0.0f, 16.0873f, 0.0f, 1);
	Local_6.f_48 = Function_120(Local_6, "cover1x1x1", "p_uti_cover1x1x", -3850.701f, 3.365f, 4220.66f, 0.0f, 29.73987f, 0.0f, 1);
	return 1;
}

var Function_120(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9) //Position: 0xA4D7 / 42199
{
	uParam0 = uParam0;
	uParam1 = uParam1;
	uParam2 = uParam2;
	vParam3 = { StackVal, StackVal, vParam3 };
	vParam6 = { StackVal, StackVal, vParam6 };
	iParam9 = iParam9;
	return "";
}

void Function_121() //Position: 0xA501 / 42241
{
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	return;
}

void Function_122(bool bParam0, int iParam1) //Position: 0xA510 / 42256
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

