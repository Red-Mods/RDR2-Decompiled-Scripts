//Decompiled with MagicRDR v1.0
//Function Count : 83
//Statics Count : 636
//Natives Count : 132
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	struct<33> Local_4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_147 = 5;
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
	var uLocal_179 = 5;
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
	var uLocal_211 = 3;
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
	var uLocal_231 = 1;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 1;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 4;
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
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	bool bLocal_309 = false;
	var uLocal_310 = 1;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	bool bLocal_331 = false;
	int iLocal_332 = 0;
	struct<20> Local_333[15];
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_331 = false;
	iLocal_307 = 0;
	if ((!Function_82(49, 0) && !Function_76(49)) && Global_3365)
	{
		iLocal_332 = 1;
		Function_75(&(Global_29008[iScriptParam_0]), 2048);
	}
	else
	{
		iLocal_332 = 0;
	}
	if (Function_74(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_73(0x4000000);
	}
	Function_72("Initializing BeechersHope", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_308 = 1000;
		switch (iLocal_307)
		{
			case 0x00000000:
				if (Global_3389)
				{
					iLocal_307 = 1;
				}
				iLocal_308 = 0;
				break;
			
			case 0x00000001:
				if (Function_71())
				{
					Global_62981 = 0;
					iLocal_307 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
				}
				iLocal_308 = 0;
				break;
			
			case 0x00000002:
				if (Function_62())
				{
					Function_75(&(Global_29008[iScriptParam_0]), 32);
					iLocal_307 = 3;
				}
				iLocal_308 = 0;
				break;
			
			case 0x00000003:
				bLocal_309 = LAUNCH_NEW_SCRIPT_WITH_ARGS("BeechersHopeVol", &iScriptParam_0, 2, 0);
				Function_61(&Global_7032, &Global_8275, iScriptParam_0);
				iLocal_307 = 5;
				iLocal_308 = 0;
				break;
			
			case 0x00000005:
				if (Function_60(&Global_7032, &Global_8275, iScriptParam_0))
				{
					iLocal_307 = 4;
					iLocal_308 = 0;
				}
				else
				{
					iLocal_308 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_59(&(Global_29008[iScriptParam_0]), 16) && Function_58(Global_29155[iScriptParam_010]))
				{
					iLocal_307 = 6;
				}
				iLocal_308 = 0;
				break;
			
			case 0x00000006:
				if (IS_PERS_CHAR_VALID(Global_8492[1214]))
				{
					if (Function_82(53, 0) && (!Function_82(56, 0) || !Function_82(51, 0)))
					{
						Function_57(12, &Local_333, -104.413f, 119.521f, 1367.917f);
						Function_56(12, &Local_333, -104.413f, 119.521f, 1367.917f);
						Function_55(12, &Local_333, -104.413f, 119.521f, 1367.917f);
						Function_54(12, &Local_333, -104.413f, 119.521f, 1367.917f);
						Function_53(12, &Local_333, -104.413f, 119.521f, 1367.917f);
						Function_51(12, &Local_333, -104.826f, 119.489f, 1368.328f);
						Function_50(Global_8492[1214], &(Local_333[1220]));
					}
					else
					{
						Function_57(12, &Local_333, -108.119f, 119.477f, 1357.974f);
						Function_56(12, &Local_333, -116.552f, 118.869f, 1346.602f);
						Function_55(12, &Local_333, -108.119f, 119.477f, 1357.974f);
						Function_54(12, &Local_333, -116.552f, 118.869f, 1346.602f);
						Function_53(12, &Local_333, -108.119f, 119.477f, 1357.974f);
						Function_51(12, &Local_333, -104.826f, 119.489f, 1368.328f);
						Function_50(Global_8492[1214], &(Local_333[1220]));
					}
				}
				Function_46(&Global_7032, &Global_8275, &uLocal_310, Global_6289, iScriptParam_0);
				if (Function_59(&(Global_29008[iScriptParam_0]), 256) || !Function_74(2))
				{
					iLocal_332 = 1;
				}
				Function_41(11, Local_13.f_1036, Local_13.f_528, 0, 0, 0, Local_4.f_32);
				if (Function_82(49, 0))
				{
					if (Global_16537[1121].f_40 == 6)
					{
						Global_16537[1121].f_40 = 3;
					}
				}
				Function_41(12, Local_13.f_1168, Local_13.f_500, 0, 0, 0, Local_4.f_32);
				Function_75(&(Global_29008[iScriptParam_0]), 8);
				if (Function_59(&(Global_29008[iScriptParam_0]), 131072))
				{
					Function_40(&(Global_29008[iScriptParam_0]), 131072);
					iLocal_307 = 10;
				}
				else
				{
					iLocal_307 = 7;
				}
				iLocal_308 = 0;
				break;
			
			case 0x00000007:
				iLocal_307 = 8;
				iLocal_308 = 0;
				break;
			
			case 0x00000008:
				Function_36(StackVal, 2, 0.5f, 4, Local_4, 1);
				Function_32(2, 4294967295, 4294967295, 0, 3);
				Function_31(64);
				Function_28(Local_4);
				Function_75(&(Global_29008[iScriptParam_0]), 512);
				iLocal_308 = 0;
				iLocal_307 = 9;
				break;
			
			case 0x00000009:
				Function_26(Local_4, iScriptParam_0);
				Function_75(&(Global_29008[iScriptParam_0]), 4);
				Function_25("Finished Initializing BeechersHope", 5.0f);
				iLocal_308 = 0;
				iLocal_307 = 10;
				break;
			
			case 0x0000000A:
				if (!Function_24(Global_62981, 1))
				{
					if (Function_22(&(Global_30717[1]), 0))
					{
						Function_21(&Global_62981, 1);
					}
				}
				if (!bLocal_331)
				{
					if (!Function_82(48, 0))
					{
						bLocal_331 = Function_18(-75.95f, 116.86f, 1418.33f, 0, 0);
					}
				}
				if (Function_59(&(Global_29008[iScriptParam_0]), 131072))
				{
					iLocal_307 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_308);
	}
	if ((!Function_82(49, 0) && !Function_76(49)) && Global_3365)
	{
		Function_75(&(Global_29008[iScriptParam_0]), 2048);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	Function_7(&Global_7032, &Global_8275, iScriptParam_0, (iLocal_332 || Global_3380));
	Function_6();
	Function_1();
	Function_40(&(Global_29008[iScriptParam_0]), 32);
	Function_40(&(Global_29008[iScriptParam_0]), 64);
	Function_40(&(Global_29008[iScriptParam_0]), 8);
	Function_40(&(Global_29008[iScriptParam_0]), 512);
	Function_40(&(Global_29008[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(bLocal_309))
	{
		TERMINATE_SCRIPT(bLocal_309);
	}
	Function_25("Unloaded BeechersHope", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x59B / 1435
{
	Function_2(&Local_13 + 4);
	RELEASE_LAYOUT_REF(Local_13);
	return;
}

void Function_2(int iParam0) //Position: 0x5AD / 1453
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_3(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(var uParam0, int iParam1) //Position: 0x5D3 / 1491
{
	if (Function_5(uParam0[iParam13], 4))
	{
		if (Function_5(uParam0[iParam13], 1))
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
			Function_4(uParam0[iParam13], 1);
			Function_4(uParam0[iParam13], 2);
			Function_4(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x701 / 1793
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_5(int iParam0, int iParam1) //Position: 0x71B / 1819
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6() //Position: 0x738 / 1848
{
	RELEASE_LAYOUT_REF(Local_4);
	return;
}

void Function_7(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x743 / 1859
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	
	if (StackVal != 5 && Function_17())
	{
		return;
	}
	strcpy(&cVar0, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_59(&(Global_29008[iParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_40(&(Global_29008[iParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (!Function_13(uParam0[iVar162], 1))
		{
			if ((!(*uParam1)[iVar163] != 4294967295 && !(*uParam1)[iVar163] != 0) && Function_13(uParam0[iVar162], 8))
			{
				STREAMING_EVICT_ACTOR((*uParam1)[iVar163], 4294967295);
				Function_12(uParam0[iVar162], 8);
			}
		}
		if (UNK_0x214AFB8C(StackVal) && Function_13(uParam0[iVar162], 16))
		{
			STREAMING_EVICT_GRINGO(StackVal);
			Function_12(uParam0[iVar162], 16);
		}
		iVar16++;
	}
	if (!Function_59(&(Global_29008[iParam2]), 8))
	{
		bParam3 = true;
	}
	bVar17 = true;
	if (!Function_74(2) || Function_59(&(Global_29008[iParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= *uParam0)
	{
		if (Function_13(uParam0[iVar162], 2) && !Function_13(uParam0[iVar162], 4))
		{
			Function_8(uParam0, uParam1, iVar16, bParam3);
		}
		if (bVar17)
		{
			if (Function_13(uParam0[iVar162], 2) && !Function_13(uParam0[iVar162], 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		iVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(Global_6289, "ncorpseSet");
		iVar21 = GET_OBJECTSET_FROM_OBJECT(bVar20);
		if (IS_OBJECTSET_VALID(iVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(iVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iVar21));
				CLEAN_OBJECTSET(iVar21);
			}
			DESTROY_OBJECTSET(iVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !iParam2 != 4294967295) && !bParam3) != 3)
		{
			Function_75(&(Global_29008[iParam2]), 2048);
		}
	}
}

void Function_8(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x943 / 2371
{
	if (IS_PERS_CHAR_VALID(StackVal))
	{
		if (!IS_PERS_CHAR_ALIVE(StackVal))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(StackVal) > GET_CURRENT_GAME_TIME())
			{
				Function_11(uParam0[iParam22], 4);
				uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
				ADD_TIME(uParam0[iParam22] + 4, Function_10(Global_29007), Function_9(Global_29007), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_13(uParam0[iParam22], 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(StackVal, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(StackVal);
			uParam1[iParam23]->f_8 = "";
		}
	}
	else if (!Function_13(uParam0[iParam22], 1) && !bParam3)
	{
		Function_11(uParam0[iParam22], 4);
		uParam0[iParam22]->f_4 = GET_TIME_OF_DAY();
		ADD_TIME(uParam0[iParam22] + 4, Function_10(Global_29007), Function_9(Global_29007), false, 0);
	}
}

int Function_9(int iParam0) //Position: 0xA92 / 2706
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return 0;
			break;
		
		default:
			return 12;
			break;
	}
	return 0;
}

int Function_10(int iParam0) //Position: 0xABD / 2749
{
	switch (iParam0)
	{
		case 0x00000003:
			return 5;
			break;
		
		case 0x00000004:
			return 3;
			break;
		
		case 0x00000005:
			break;
			return 1;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_11(var uParam0, int iParam1) //Position: 0xAF1 / 2801
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0xB00 / 2816
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_13(int iParam0, int iParam1) //Position: 0xB17 / 2839
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_14() //Position: 0xB33 / 2867
{
	if (Function_24(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_15(int iParam0) //Position: 0xB4E / 2894
{
	if (!Function_16(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_30640[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_30640[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_30640[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_30658[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_30640[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_30693[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_30658[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_30658[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_30658[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_30658[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_30668[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_30668[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_30668[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_30679[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_30679[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_30685[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_30685[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_30685[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_30693[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_30693[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_30693[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_30707[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_30707[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_30707[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_30707[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_30723[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_30723[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_30723[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_30717[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_30717[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_30717[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_30628[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_30628[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_30628[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_30628[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_30633[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_30633[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_30633[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_30637[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_30637[0])
	{
		return "GreatPlains";
	}
	return "";
}

bool Function_16(int iParam0) //Position: 0xFFC / 4092
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_17() //Position: 0x1012 / 4114
{
	return NET_IS_MANAGER_INITIALIZED();
}

bool Function_18(vector3 vParam0, bool bParam3, bool bParam4) //Position: 0x101B / 4123
{
	var uVar0[2];
	int iVar3;
	bool bVar4;
	bool bVar5;
	
	Function_20(StackVal, StackVal, vParam0, &(uVar0[0]), &(uVar0[1]));
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
			bVar4 = GET_ACTOR_FROM_OBJECT(Function_19(uVar0[0], "UseCase1"));
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
			bVar5 = GET_ACTOR_FROM_OBJECT(Function_19(uVar0[1], "UseCase1"));
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

var Function_19(bool bParam0, bool bParam1) //Position: 0x117C / 4476
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_20(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1189 / 4489
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(bVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
		if (!Function_14())
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

void Function_21(var uParam0, int iParam1) //Position: 0x12CC / 4812
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_22(float fParam0, bool bParam1) //Position: 0x12DB / 4827
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (bParam1)
		{
			Function_23(*fParam0, iVar1, bParam1);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(*fParam0, iVar1, bParam1), 1.0f, "p_gen_chairpokerfancy01x", 1);
		}
		else
		{
			Function_23(*fParam0, iVar1, 0);
			bVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(*fParam0, iVar1, 0), 1.0f, "p_gen_chair05x", 1);
		}
		if (IS_PHYSINST_VALID(bVar0))
		{
			SET_PROP_FIXED(bVar0, 1);
		}
		else
		{
			return 0;
			LOG_ERROR("Trying to make poker chair fixed but the physinst is invalid");
		}
		iVar1++;
	}
	return 1;
}

vector3 Function_23(int iParam0, int iParam1, bool bParam2) //Position: 0x139E / 5022
{
	if (iParam0 == Global_30668[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -801.0966f, 92.75807f, 2375.792f;
				break;
			
			case 0x00000001:
				return -801.4974f, 92.75435f, 2375.295f;
				break;
			
			case 0x00000002:
				return -801.2829f, 92.75435f, 2374.737f;
				break;
			
			case 0x00000003:
				return -800.724f, 92.76255f, 2374.656f;
				break;
			
			case 0x00000004:
				return -800.3233f, 92.75678f, 2375.122f;
				break;
			
			case 0x00000005:
				return -800.5463f, 92.75435f, 2375.677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return 164.353f, 73.75671f, 2230.925f;
				break;
			
			case 0x00000001:
				return 164.5807f, 73.82056f, 2231.472f;
				break;
			
			case 0x00000002:
				return 164.2043f, 73.75299f, 2231.971f;
				break;
			
			case 0x00000003:
				return 163.6548f, 73.76118f, 2231.889f;
				break;
			
			case 0x00000004:
				return 163.4103f, 73.76118f, 2231.366f;
				break;
			
			case 0x00000005:
				return 163.7511f, 73.75671f, 2230.869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2157.424f, 16.88292f, 2596.033f;
				break;
			
			case 0x00000001:
				return -2158.012f, 16.94059f, 2595.997f;
				break;
			
			case 0x00000002:
				return -2158.228f, 16.87845f, 2595.416f;
				break;
			
			case 0x00000003:
				return -2157.847f, 16.87845f, 2594.96f;
				break;
			
			case 0x00000004:
				return -2157.261f, 16.87845f, 2595.042f;
				break;
			
			case 0x00000005:
				return -2157.04f, 16.87845f, 2595.596f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 748.5359f, 82.6927f, 1267.343f;
					break;
				
				case 0x00000001:
					return 749.138f, 82.6927f, 1266.645f;
					break;
				
				case 0x00000002:
					return 750.045f, 82.6927f, 1266.796f;
					break;
				
				case 0x00000003:
					return 750.0344f, 82.6917f, 1267.552f;
					break;
				
				case 0x00000004:
					return 749.7606f, 82.6927f, 1268.372f;
					break;
				
				case 0x00000005:
					return 748.8501f, 82.6927f, 1268.207f;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return 717.6248f, 78.47099f, 1325.972f;
					break;
				
				case 0x00000001:
					return 717.0453f, 78.47099f, 1325.919f;
					break;
				
				case 0x00000002:
					return 716.8008f, 78.47099f, 1325.396f;
					break;
				
				case 0x00000003:
					return 717.1418f, 78.47099f, 1324.928f;
					break;
				
				case 0x00000004:
					return 717.7181f, 78.47099f, 1324.969f;
					break;
				
				case 0x00000005:
					return 717.9684f, 78.47099f, 1325.495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -138.6693f, 119.2419f, 1344.049f;
				break;
			
			case 0x00000001:
				return -139.2573f, 119.2419f, 1343.961f;
				break;
			
			case 0x00000002:
				return -139.4945f, 119.2419f, 1343.419f;
				break;
			
			case 0x00000003:
				return -139.1212f, 119.2419f, 1342.946f;
				break;
			
			case 0x00000004:
				return -138.5368f, 119.2419f, 1343.024f;
				break;
			
			case 0x00000005:
				return -138.2953f, 119.2419f, 1343.58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -2701.487f, 31.151f, 4278.554f;
				break;
			
			case 0x00000001:
				return -2701.713f, 31.151f, 4277.994f;
				break;
			
			case 0x00000002:
				return -2701.347f, 31.151f, 4277.538f;
				break;
			
			case 0x00000003:
				return -2700.726f, 31.151f, 4277.604f;
				break;
			
			case 0x00000004:
				return -2700.508f, 31.151f, 4278.2f;
				break;
			
			case 0x00000005:
				return -2700.919f, 31.151f, 4278.653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (iParam1)
		{
			case 0x00000000:
				return -795.5794f, 13.16767f, 3699.937f;
				break;
			
			case 0x00000001:
				return -795.8744f, 13.16057f, 3699.083f;
				break;
			
			case 0x00000002:
				return -794.9905f, 13.16057f, 3698.687f;
				break;
			
			case 0x00000003:
				return -794.196f, 13.16057f, 3699.235f;
				break;
			
			case 0x00000004:
				return -794.2787f, 13.16057f, 3700.203f;
				break;
			
			case 0x00000005:
				return -795.169f, 13.16057f, 3700.608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

bool Function_24(var uParam0, int iParam1) //Position: 0x1918 / 6424
{
	return (uParam0 && iParam1) == 0;
}

void Function_25(bool bParam0, float fParam1) //Position: 0x1925 / 6437
{
	if (!Function_74(128))
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

void Function_26(bool bParam0, bool bParam1) //Position: 0x1963 / 6499
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
		Function_27(Global_29155[bParam110].f_20, cVar0);
	}
	if (!Global_3380 && !Function_17())
	{
		SET_RICH_PRESENCE(2, Global_29155[bParam110].f_36, 0, 0, 0);
	}
	DECOR_SET_INT(bParam0, "regid", bParam1);
	Global_30620 = 0;
	return;
}

void Function_27(var uParam0, int iParam1) //Position: 0x1A5D / 6749
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_28(bool bParam0) //Position: 0x1A6A / 6762
{
	vector3 vVar0;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	Global_26361.f_16 = bParam0;
	Global_26361.f_20 = CREATE_OBJECT_ITERATOR(Global_26361.f_16);
	ITERATE_EVERYWHERE(Global_26361.f_20);
	ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(Global_26361.f_20) >= 0)
	{
		Global_26361.f_24 = START_OBJECT_ITERATOR(Global_26361.f_20);
		GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
		Global_26361.f_24 = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(Global_26361.f_16, Function_30(), 3, vVar0, 0.0f, 0.0f, 0.0f, 2.0f, 5.0f, 2.0f));
		Function_29(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
	return;
}

void Function_29(var uParam0) //Position: 0x1B55 / 6997
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && uParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

var Function_30() //Position: 0x1B72 / 7026
{
	int iVar0;
	
	return iVar0;
}

void Function_31(int iParam0) //Position: 0x1B7A / 7034
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_32(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1B8D / 7053
{
	if (Global_26361 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_26361, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_26376 = Global_26361;
	Global_26376.f_4 = StackVal;
	Global_26376.f_8 = StackVal;
	Global_26376.f_12 = Global_26361.f_12;
	Global_26376.f_16 = Global_26361.f_16;
	Global_26376.f_20 = Global_26361.f_20;
	Global_26376.f_24 = Global_26361.f_24;
	Global_26376.f_32 = Global_26361.f_32;
	Global_26376.f_40 = Global_26361.f_40;
	Global_26376.f_44 = Global_26361.f_44;
	Global_26361.f_8 = uParam0;
	Global_26361 = iParam1;
	Global_26361.f_4 = iParam2;
	Global_26361.f_40 = 99;
	Global_26361.f_44 = uParam3;
	Global_26361.f_48 = 0;
	Global_26361.f_52 = iParam4;
	Global_26361.f_56 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_33();
	}
	if (iParam1 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam1, 0);
	}
	if (iParam2 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(iParam2, 0);
	}
}

void Function_33() //Position: 0x1C71 / 7281
{
	int iVar0;
	
	Global_26960 = Function_34(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26960 + 4)[iVar0] = (*&Global_26401 + 36[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_34(int iParam0) //Position: 0x1CBF / 7359
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_35(bool bParam0) //Position: 0x1CD7 / 7383
{
	if (bParam0 > 0 || bParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_36(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x1CEC / 7404
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
		Function_39();
	}
	if (bParam5)
	{
		Function_37(1048576);
	}
}

void Function_37(int iParam0) //Position: 0x1DFF / 7679
{
	Function_38(&Global_28842, iParam0);
	return;
}

void Function_38(var uParam0, var uParam1) //Position: 0x1E0D / 7693
{
	*uParam0 = (*uParam0 || uParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_39() //Position: 0x1E28 / 7720
{
	if (!Global_34165.f_44 && !Global_34165.f_28)
	{
		Function_37(16384);
	}
	return;
}

void Function_40(var uParam0, int iParam1) //Position: 0x1E44 / 7748
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_41(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x1E5B / 7771
{
	var uVar0;
	bool bVar3[2];
	bool bVar6;
	bool bVar7;
	
	Function_45(bParam1, bParam2);
	if (!Function_44(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(bParam4))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_43(bParam4, 0);
		}
		else
		{
			Function_42(bParam4, 1);
		}
	}
	if (IS_DOOR_VALID(bParam5))
	{
		if (Global_16537[iParam021].f_40 == 3)
		{
			Function_43(bParam5, 0);
		}
		else
		{
			Function_42(bParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(bParam1))
	{
		Global_16537[iParam021].f_80 = bParam1;
		if (Global_16537[iParam021].f_40 != 3 || !Global_3365)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam1), true);
			DECOR_SET_BOOL(bParam1, "SavingAtBedAllowed", 1);
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
			bVar6 = GET_ACTOR_FROM_OBJECT(Function_19(bVar3[0], "UseCase1"));
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
			bVar7 = GET_ACTOR_FROM_OBJECT(Function_19(bVar3[1], "UseCase1"));
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
			DECOR_SET_BOOL(bParam6, "PlayerHouse_NoHorse", 1);
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

void Function_42(bool bParam0, int iParam1) //Position: 0x21EE / 8686
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

void Function_43(bool bParam0, int iParam1) //Position: 0x2242 / 8770
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", iParam1);
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

bool Function_44(int iParam0) //Position: 0x2293 / 8851
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_45(bool bParam0, bool bParam1) //Position: 0x22A9 / 8873
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

void Function_46(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) //Position: 0x2403 / 9219
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_74(2))
	{
		return;
	}
	if (Function_59(&(Global_29008[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_13(uParam0[iVar02], 2))
		{
			if (Function_47(uParam0[iVar02], uParam1[iVar03], iVar0, uParam2, uParam3, iParam4))
			{
				iVar1++;
			}
			else
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (StackVal == 3)
	{
		return;
	}
	if (iVar1 >= 0)
	{
		Function_40(&(Global_29008[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_75(&(Global_29008[iParam4]), 2048);
	}
}

bool Function_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) //Position: 0x24B5 / 9397
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_59(&(Global_29008[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_13(iParam0, 2))
	{
		return 1;
	}
	if (Function_13(iParam0, 4))
	{
		if (IS_LATER_THAN(StackVal, 0))
		{
			return 0;
		}
	}
	if (StackVal == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_29155[iParam510] + 20, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		uParam1->f_8 = Function_49(StackVal, StackVal, StackVal, uParam4, &cVar1, *uParam1, *uParam3[iVar020], uParam3[iVar020]->f_76);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(*uParam3[iVar020]);
		PRINTNL();
		if (Function_48(StackVal, StackVal, *uParam3[iVar020]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_12(iParam0, 4);
	}
	Function_50(StackVal, uParam3[iVar020]);
	return 1;
}

bool Function_48(vector3 vParam0) //Position: 0x2620 / 9760
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_49(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, float fParam7) //Position: 0x2638 / 9784
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<73> Var5;
	
	if (fParam7 > 1.0f)
	{
		fParam7 = 60.0f;
	}
	bVar3 = CREATE_PERS_CHAR_IN_LAYOUT(uParam0, uParam1, uParam2, vParam4, fParam7);
	if (!IS_PERS_CHAR_VALID(bVar3))
	{
		return "";
	}
	bVar4 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(bVar3), "Persistent_Char_Brain", uParam3, vVar0, vVar0);
	if (IS_OBJECT_VALID(bVar4))
	{
		ATTACH_OBJECTS(bVar4, GET_OBJECT_FROM_PERS_CHAR(bVar3), Function_30(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(bVar3);
		return "";
	}
	*(&Var5 + 36) = { StackVal, StackVal, vParam4 };
	Var5 = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 12) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 24) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 48) = { StackVal, StackVal, *(&Var5 + 36) };
	*(&Var5 + 60) = { StackVal, StackVal, *(&Var5 + 36) };
	Var5.f_72 = uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar4), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var5, 20);
	return bVar3;
}

int Function_50(bool bParam0, int iParam1) //Position: 0x2751 / 10065
{
	vector3 vVar0;
	bool bVar20;
	
	bVar20 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20))
	{
		if (!Function_48(StackVal, StackVal, *iParam1))
		{
			vVar0 = { StackVal, StackVal, *iParam1 };
		}
		if (!Function_48(StackVal, StackVal, *(iParam1 + 12)))
		{
			*(&vVar0 + 12) = { StackVal, StackVal, *(iParam1 + 12) };
		}
		if (!Function_48(StackVal, StackVal, *(iParam1 + 24)))
		{
			*(&vVar0 + 24) = { StackVal, StackVal, *(iParam1 + 24) };
		}
		if (!Function_48(StackVal, StackVal, *(iParam1 + 36)))
		{
			*(&vVar0 + 36) = { StackVal, StackVal, *(iParam1 + 36) };
		}
		if (!Function_48(StackVal, StackVal, *(iParam1 + 48)))
		{
			*(&vVar0 + 48) = { StackVal, StackVal, *(iParam1 + 48) };
		}
		if (!Function_48(StackVal, StackVal, *(iParam1 + 60)))
		{
			*(&vVar0 + 60) = { StackVal, StackVal, *(iParam1 + 60) };
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar20), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &vVar0, 20);
	}
	return 0;
	return 0;
}

void Function_51(int iParam0, var uParam1, vector3 vParam2) //Position: 0x288D / 10381
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_52(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 60) = { StackVal, StackVal, vParam2 };
}

bool Function_52(vector3 vParam0, vector3 vParam3) //Position: 0x28F3 / 10483
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_53(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2920 / 10528
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_52(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 48) = { StackVal, StackVal, vParam2 };
}

void Function_54(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2988 / 10632
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_52(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 36) = { StackVal, StackVal, vParam2 };
}

void Function_55(int iParam0, var uParam1, vector3 vParam2) //Position: 0x29F2 / 10738
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_52(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 24) = { StackVal, StackVal, vParam2 };
}

void Function_56(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2A57 / 10839
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_52(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(uParam1[bVar020] + 12) = { StackVal, StackVal, vParam2 };
}

void Function_57(int iParam0, var uParam1, vector3 vParam2) //Position: 0x2ABF / 10943
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (Function_52(StackVal, StackVal, vParam2, 0.0f, 0.0f, 0.0f))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*uParam1[bVar020] = { StackVal, StackVal, vParam2 };
}

int Function_58(int iParam0) //Position: 0x2B22 / 11042
{
	if (!Function_16(iParam0))
	{
		return 1;
	}
	return Function_59(&(Global_29008[iParam0]), 4);
}

bool Function_59(var uParam0, int iParam1) //Position: 0x2B3E / 11070
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_60(var uParam0, var uParam1, int iParam2) //Position: 0x2B5A / 11098
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && Function_17())
	{
		return 1;
	}
	strcpy(&cVar1, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_59(&(Global_29008[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal) && Function_13(uParam0[iVar02], 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(StackVal))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0) && Function_13(uParam0[iVar02], 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED((*uParam1)[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_61(var uParam0, var uParam1, int iParam2) //Position: 0x2C3B / 11323
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_16(iParam2))
	{
		return;
	}
	if (StackVal != 5 && Function_17())
	{
		return;
	}
	strcpy(&cVar1, Function_15(iParam2), 64);
	if (Function_14())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_59(&(Global_29008[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_75(&(Global_29008[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (UNK_0x214AFB8C(StackVal))
		{
			STREAMING_REQUEST_GRINGO(StackVal);
			Function_11(uParam0[iVar02], 16);
		}
		if (StackVal == 5)
		{
			if (!(*uParam1)[iVar03] != 4294967295 && !(*uParam1)[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR((*uParam1)[iVar03], 4294967295, true);
				Function_11(uParam0[iVar02], 8);
			}
		}
		iVar0++;
	}
	return;
}

bool Function_62() //Position: 0x2D23 / 11555
{
	bool bVar0;
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
	
	Function_70(3, 3);
	bVar0 = bVar0;
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_horseshoe", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/repair_kneel", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/cow_knl", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/player_sleep_bed_l", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/fake_horseshoe", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_sleeping", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_begging", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/dog_sitting", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/pet_dog", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_cleanwindow_w_any", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/stand_stirringpot_w_any", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_hay_bale", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_68(&Local_13 + 4, "$/content/scripting/gringo/simplegringo/multistage_dusting", 1, 0);
	if (!Function_63(&Local_13 + 4))
	{
		return 0;
	}
	Local_13 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (!IS_LAYOUTREF_VALID(Local_13))
	{
		Local_13 = CREATE_LAYOUT("BeechersHope_layout");
	}
	*(&Local_13 + 476) = { -107.2321f, 119.5577f, 1366.284f };
	*(&Local_13 + 476 + 12) = { 0.0f, 55.70536f, 0.0f };
	Local_13.f_500 = CREATE_POINT_IN_LAYOUT(Local_13, "player_save_flag_JACK", -107.2321f, 119.5577f, 1366.284f, 0.0f, 55.70536f, 0.0f);
	*(&Local_13 + 504) = { -100.4297f, 119.5743f, 1354.821f };
	*(&Local_13 + 504 + 12) = { 0.0f, 58.4006f, 0.0f };
	Local_13.f_528 = CREATE_POINT_IN_LAYOUT(Local_13, "player_save_flag_BEH", -100.4297f, 119.5743f, 1354.821f, 0.0f, 58.4006f, 0.0f);
	Local_13.f_532 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp1Set", Local_13, 8, 0);
	*(&Local_13 + 536[06]) = { -105.4197f, 119.5033f, 1373.529f };
	*(&Local_13 + 536[06] + 12) = { 0.0f, 179.3702f, 0.0f };
	bVar1 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep1_1", -105.4197f, 119.5033f, 1373.529f, 0.0f, 179.3702f, 0.0f);
	DECOR_SET_STRING(bVar1, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar1, Local_13.f_532);
	*(&Local_13 + 536[16]) = { -108.0978f, 119.5118f, 1371.784f };
	*(&Local_13 + 536[16] + 12) = { 0.0f, 139.5811f, 0.0f };
	bVar2 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep2_1", -108.0978f, 119.5118f, 1371.784f, 0.0f, 139.5811f, 0.0f);
	DECOR_SET_STRING(bVar2, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar2, Local_13.f_532);
	*(&Local_13 + 536[26]) = { -111.8172f, 119.5901f, 1370.219f };
	*(&Local_13 + 536[26] + 12) = { -170.5704f, 63.91483f, -180.1553f };
	bVar3 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep3_1", -111.8172f, 119.5901f, 1370.219f, -170.5704f, 63.91483f, -180.1553f);
	DECOR_SET_STRING(bVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar3, Local_13.f_532);
	*(&Local_13 + 536[36]) = { -114.1426f, 119.5033f, 1368.287f };
	*(&Local_13 + 536[36] + 12) = { 0.0f, -182.395f, 0.0f };
	bVar4 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep4_1", -114.1426f, 119.5033f, 1368.287f, 0.0f, -182.395f, 0.0f);
	DECOR_SET_STRING(bVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar4, Local_13.f_532);
	*(&Local_13 + 536[46]) = { -103.9247f, 119.5118f, 1370.959f };
	*(&Local_13 + 536[46] + 12) = { 0.0f, 50.88084f, 0.0f };
	bVar5 = CREATE_POINT_IN_LAYOUT(Local_13, "done_1", -103.9247f, 119.5118f, 1370.959f, 0.0f, 50.88084f, 0.0f);
	DECOR_SET_STRING(bVar5, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar5, Local_13.f_532);
	Local_13.f_660 = CREATE_OBJECTSET_IN_LAYOUT("sweepgrp2Set", Local_13, 8, 0);
	*(&Local_13 + 664[06]) = { -110.1809f, 119.5033f, 1355.216f };
	*(&Local_13 + 664[06] + 12) = { 0.0f, 199.9467f, 0.0f };
	bVar6 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep1_2", -110.1809f, 119.5033f, 1355.216f, 0.0f, 199.9467f, 0.0f);
	DECOR_SET_STRING(bVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar6, Local_13.f_660);
	*(&Local_13 + 664[16]) = { -112.2184f, 119.5118f, 1358.335f };
	*(&Local_13 + 664[16] + 12) = { 0.0f, -76.55879f, 0.0f };
	bVar7 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep2_2", -112.2184f, 119.5118f, 1358.335f, 0.0f, -76.55879f, 0.0f);
	DECOR_SET_STRING(bVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar7, Local_13.f_660);
	*(&Local_13 + 664[26]) = { -108.4821f, 119.5033f, 1360.458f };
	*(&Local_13 + 664[26] + 12) = { 0.0f, -142.6832f, 0.0f };
	bVar8 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep3_2", -108.4821f, 119.5033f, 1360.458f, 0.0f, -142.6832f, 0.0f);
	DECOR_SET_STRING(bVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar8, Local_13.f_660);
	*(&Local_13 + 664[36]) = { -106.9941f, 119.5033f, 1358.121f };
	*(&Local_13 + 664[36] + 12) = { 0.0f, -81.75877f, 0.0f };
	bVar9 = CREATE_POINT_IN_LAYOUT(Local_13, "sweep4_2", -106.9941f, 119.5033f, 1358.121f, 0.0f, -81.75877f, 0.0f);
	DECOR_SET_STRING(bVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(bVar9, Local_13.f_660);
	*(&Local_13 + 664[46]) = { -108.4515f, 119.4611f, 1353.988f };
	*(&Local_13 + 664[46] + 12) = { 0.02209556f, -118.8418f, -0.1335062f };
	bVar10 = CREATE_POINT_IN_LAYOUT(Local_13, "done_2", -108.4515f, 119.4611f, 1353.988f, 0.02209556f, -118.8418f, -0.1335062f);
	DECOR_SET_STRING(bVar10, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(bVar10, Local_13.f_660);
	Local_13.f_788 = CREATE_OBJECTSET_IN_LAYOUT("dustgrp3Set", Local_13, 8, 0);
	*(&Local_13 + 792[06]) = { 1.273794f, -2.993408f, -2.225903f };
	*(&Local_13 + 792[06] + 12) = { 0.0f, 101.8641f, 0.0f };
	bVar11 = CREATE_POINT_IN_LAYOUT(Local_13, "nFlag_up_3", 1.273794f, -2.993408f, -2.225903f, 0.0f, 101.8641f, 0.0f);
	DECOR_SET_STRING(bVar11, "UseAnim", "up");
	ADD_OBJECT_TO_OBJECTSET(bVar11, Local_13.f_788);
	*(&Local_13 + 792[16]) = { 6.963618f, -3.006767f, 2.015471f };
	*(&Local_13 + 792[16] + 12) = { 0.0f, 152.1741f, 0.0f };
	bVar12 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag_mid_3", 6.963618f, -3.006767f, 2.015471f, 0.0f, 152.1741f, 0.0f);
	DECOR_SET_STRING(bVar12, "UseAnim", "mid");
	ADD_OBJECT_TO_OBJECTSET(bVar12, Local_13.f_788);
	*(&Local_13 + 792[26]) = { 9.50996f, -2.944557f, -0.4558564f };
	*(&Local_13 + 792[26] + 12) = { 0.0f, 152.1741f, 0.0f };
	bVar13 = CREATE_POINT_IN_LAYOUT(Local_13, "Flag_low_3", 9.50996f, -2.944557f, -0.4558564f, 0.0f, 152.1741f, 0.0f);
	DECOR_SET_STRING(bVar13, "UseAnim", "low");
	ADD_OBJECT_TO_OBJECTSET(bVar13, Local_13.f_788);
	Local_13.f_868 = CREATE_OBJECTSET_IN_LAYOUT("haygrp5Set", Local_13, 8, 0);
	*(&Local_13 + 872[06]) = { -43.91641f, 116.3913f, 1424.329f };
	*(&Local_13 + 872[06] + 12) = { 0.0f, -75.76684f, 0.0f };
	bVar14 = CREATE_POINT_IN_LAYOUT(Local_13, "nputdown_5", -43.91641f, 116.3913f, 1424.329f, 0.0f, -75.76684f, 0.0f);
	DECOR_SET_STRING(bVar14, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar14, Local_13.f_868);
	DECOR_SET_INT(bVar14, "FlagSetNum", 5);
	Local_13.f_900 = CREATE_OBJECTSET_IN_LAYOUT("corngrp6Set", Local_13, 8, 0);
	*(&Local_13 + 904[06]) = { -72.68994f, 117.9034f, 1372.789f };
	*(&Local_13 + 904[06] + 12) = { 0.0f, -73.22466f, 0.0f };
	bVar15 = CREATE_POINT_IN_LAYOUT(Local_13, "nputdown_6", -72.68994f, 117.9034f, 1372.789f, 0.0f, -73.22466f, 0.0f);
	DECOR_SET_STRING(bVar15, "UseAnim", "putdown");
	ADD_OBJECT_TO_OBJECTSET(bVar15, Local_13.f_900);
	DECOR_SET_INT(bVar15, "FlagSetNum", 6);
	Local_13.f_932 = CREATE_OBJECTSET_IN_LAYOUT("bucketgrp7Set", Local_13, 8, 0);
	*(&Local_13 + 936[06]) = { -66.1328f, 116.8612f, 1419.525f };
	*(&Local_13 + 936[06] + 12) = { 0.0f, -28.12998f, 0.0f };
	bVar16 = CREATE_POINT_IN_LAYOUT(Local_13, "pour01_7", -66.1328f, 116.8612f, 1419.525f, 0.0f, -28.12998f, 0.0f);
	DECOR_SET_STRING(bVar16, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar16, Local_13.f_932);
	DECOR_SET_INT(bVar16, "FlagSetNum", 7);
	*(&Local_13 + 936[16]) = { -56.61061f, 116.8612f, 1405.268f };
	*(&Local_13 + 936[16] + 12) = { 0.0f, 130.9747f, 0.0f };
	bVar17 = CREATE_POINT_IN_LAYOUT(Local_13, "pour02_7", -56.61061f, 116.8612f, 1405.268f, 0.0f, 130.9747f, 0.0f);
	DECOR_SET_STRING(bVar17, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar17, Local_13.f_932);
	DECOR_SET_INT(bVar17, "FlagSetNum", 7);
	*(&Local_13 + 936[26]) = { -72.68713f, 116.8611f, 1413.265f };
	*(&Local_13 + 936[26] + 12) = { 0.0f, 244.0819f, 0.0f };
	bVar18 = CREATE_POINT_IN_LAYOUT(Local_13, "pour03_7", -72.68713f, 116.8611f, 1413.265f, 0.0f, 244.0819f, 0.0f);
	DECOR_SET_STRING(bVar18, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar18, Local_13.f_932);
	DECOR_SET_INT(bVar18, "FlagSetNum", 7);
	*(&Local_13 + 936[36]) = { -58.56321f, 116.8612f, 1411.939f };
	*(&Local_13 + 936[36] + 12) = { 0.0f, -34.14276f, 0.0f };
	bVar19 = CREATE_POINT_IN_LAYOUT(Local_13, "drop_7", -58.56321f, 116.8612f, 1411.939f, 0.0f, -34.14276f, 0.0f);
	DECOR_SET_STRING(bVar19, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(bVar19, Local_13.f_932);
	DECOR_SET_INT(bVar19, "FlagSetNum", 7);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_horseshoe", "stand_horseshoe", -68.081f, 116.862f, 1401.589f, 0.0f, -112.5008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Pee", "Pee", -47.30545f, 116.0642f, 1403.5f, 0.0f, -143.124f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel", "repair_kneel", -62.85281f, 116.88f, 1420.207f, 0.0f, -26.97176f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_smoke1", "sit_ground_smoke", -68.3712f, 117.8994f, 1375.234f, 0.0f, 177.5229f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_pocketwatch_e_any1", "stand_pocketwatch_e_any", -70.73973f, 116.8612f, 1410.74f, 0.0f, 24.8673f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", -124.2164f, 118.8691f, 1360.034f, 0.0f, 122.5013f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_smoke2", "sit_ground_smoke", -134.6759f, 118.8691f, 1344.804f, 0.0f, -95.58513f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall", "stand_hammer_wall", -68.88495f, 116.8612f, 1407.315f, 0.0f, -119.7389f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand4", "smoking_stand", -56.22635f, 116.8503f, 1404f, 0.0f, 112.4391f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "smoking_stand5", "smoking_stand", -99.54283f, 119.5089f, 1364.756f, 0.0f, 244.8431f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_table", "stand_hammer_table", -70.29629f, 116.955f, 1413.849f, 0.0f, -251.781f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_docks2", "nsit_docks", -65.8644f, 120.0907f, 1414.059f, 0.0f, -381.1815f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Rand_Idle_Sit_Ground4", "Rand_Idle_Sit_Ground", -33.25951f, 109.3224f, 1231.643f, 0.0f, -170.6252f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel1", "repair_kneel", -39.47673f, 116.8544f, 1404.335f, 0.0f, -191.9064f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "repair_kneel2", "repair_kneel", -71.53109f, 117.893f, 1371.573f, 0.0f, -77.70592f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking", "lean_fence_L_talking", -106.5684f, 119.4729f, 1374.202f, 0.0f, 144.8407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend1", "horse_tend", -61.121f, 116.862f, 1409.782f, 0.0f, 154.0079f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "horse_tend3", "horse_tend", -114.9358f, 118.8691f, 1352f, 0.0f, 48.57609f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl", "cow_knl", -36.66331f, 116.7444f, 1431.112f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl1", "cow_knl", -40.53645f, 116.5308f, 1427.849f, 0.0f, -22.36959f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl2", "cow_knl", -36.43493f, 116.7302f, 1426.232f, 0.0f, -40.66824f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl3", "cow_knl", -35.03898f, 116.812f, 1431.223f, 0.0f, -16.64305f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl4", "cow_knl", -37.28973f, 116.6848f, 1427.886f, 0.0f, -110.3049f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl5", "cow_knl", -33.80853f, 116.809f, 1425.674f, 0.0f, -110.1721f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl6", "cow_knl", -37.8181f, 116.6578f, 1429.349f, 0.0f, -44.75875f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "cow_knl7", "cow_knl", -34.00191f, 116.8029f, 1427.975f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Drink", -30.42544f, 109.4274f, 1234.323f, 0.0f, 90.44947f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", -35.28805f, 109.3499f, 1234.094f, 0.0f, -103.2497f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", -31.28155f, 109.4274f, 1232.223f, 0.0f, 164.4735f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_drunk_throwbottle", "stand_drunk_throwbottle", -31.12493f, 109.6657f, 1237.315f, 0.0f, -285.5465f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "campfire_talk", "campfire_talk", -34.17603f, 109.4274f, 1236.422f, 0.0f, -140.1742f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nsit_docks", "nsit_docks", -72.96541f, 126.6906f, 1368.62f, 0.0f, 57.12511f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "look_out_window_wife", "look_out_window_L", -96.10863f, 119.489f, 1355.567f, 0.0f, -123.7328f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1036 = CREATE_GRINGO_IN_LAYOUT(Local_13, "player_sleep_BEH", "player_sleep_bed_L", -97.59983f, 119.506f, 1356.074f, 0.0f, 147.1008f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1036), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_fence_L_talking1f", "look_out_window_R", -115.3381f, 119.4791f, 1370.451f, 0.0f, 144.8407f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	bVar0 = CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_docks3", "look_out_window_L", -68.90897f, 119.9008f, 1410.369f, 0.0f, -298.0027f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(bVar0), 0);
	Local_13.f_1040 = CREATE_GRINGO_IN_LAYOUT(Local_13, "nuse_shelf", "nuse_shelf", -103.8778f, 119.4992f, 1350.666f, 0.0f, -65.56792f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1040), 0);
	Local_13.f_1044 = CREATE_GRINGO_IN_LAYOUT(Local_13, "kneel_hammer", "kneel_hammer", -110.5367f, 119.0837f, 1345.096f, 0.0f, 328.9553f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1044), 0);
	Local_13.f_1048 = CREATE_GRINGO_IN_LAYOUT(Local_13, "use_shelf1", "nuse_shelf", -111.8043f, 119.0837f, 1344.289f, 0.0f, -32.36226f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1048), 0);
	Local_13.f_1052 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_yawning_n_any", "stand_yawning_n_any", -114.1781f, 119.0837f, 1345.989f, 0.0f, 146.1789f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1052), 0);
	Local_13.f_1056 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_uncle", "lie_sleep_on_bed_l", -113.7102f, 119.5028f, 1361.113f, 0.0f, 60.53054f, 0.0f), Local_13.f_1056);
	Local_13.f_1060 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_play_harmonica", "sit_ground_play_harmonica", -113.3007f, 119.0837f, 1344.679f, 0.0f, 179.1369f, 0.0f), Local_13.f_1060);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "sleep_jack", "lie_sleep_on_bed_l", -104.4134f, 119.5213f, 1367.917f, 0.0f, -29.91541f, 0.0f), Local_13.f_1060);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "sit_ground_play_harmonica1", "sit_ground_play_harmonica", -101.8226f, 119.5891f, 1361.562f, 0.0f, 80.84962f, 0.0f), Local_13.f_1060);
	Local_13.f_1064 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fake_horseshoe1", "fake_horseshoe", -129.444f, 118.9213f, 1354.36f, 0.0f, 105.6435f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1064), 0);
	Local_13.f_1068 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker", "Locked_Footlocker", -98.43189f, 119.521f, 1353.811f, 0.0f, 148.9373f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1068), 0);
	DECOR_SET_BOOL(Local_13.f_1068, "PlayerHouseChest", 1);
	Local_13.f_1072 = CREATE_GRINGO_IN_LAYOUT(Local_13, "fake_horseshoe2", "fake_horseshoe", -125.614f, 118.863f, 1365.313f, 0.0f, 21.74f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1072), 0);
	Local_13.f_1076 = CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_hammer_wall1", "stand_hammer_wall", -116.9523f, 118.833f, 1345.114f, 0.0f, -123.4636f, 0.0f);
	Local_13.f_1080 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping", "dog_sleeping", -105.1306f, 119.4894f, 1369.151f, 0.0f, 10.65152f, 0.0f);
	Local_13.f_1084 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging", "dog_begging", -118.6403f, 118.8691f, 1373.118f, 0.0f, -102.6573f, 0.0f);
	Local_13.f_1088 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging1", "dog_begging", -100.9568f, 118.8691f, 1347.297f, 0.0f, -165.343f, 0.0f);
	Local_13.f_1092 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_table", "lean_table", -108.1174f, 119.5028f, 1357.445f, 0.0f, 0.0f, 0.0f);
	Local_13.f_1096 = CREATE_GRINGO_IN_LAYOUT(Local_13, "lean_table1", "lean_table", -109.4603f, 119.5028f, 1356.463f, 0.0f, -55.72653f, 0.0f);
	Local_13.f_1100 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_begging2", "dog_begging", -119.7795f, 118.8691f, 1347.713f, 0.0f, -64.84069f, 0.0f);
	Local_13.f_1104 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping1", "dog_sleeping", -120.834f, 118.8691f, 1345.187f, 0.0f, -124.8037f, 0.0f);
	Local_13.f_1108 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting", "dog_sitting", -121.8695f, 118.8691f, 1347.471f, 0.0f, -76.92809f, 0.0f);
	Local_13.f_1112 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting1", "dog_sitting", -75.28917f, 116.8612f, 1406.281f, 0.0f, -76.92809f, 0.0f);
	Local_13.f_1116 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sleeping2", "dog_sleeping", -73.05419f, 116.8612f, 1404.079f, 0.0f, -152.1074f, 0.0f);
	Local_13.f_1120 = CREATE_GRINGO_IN_LAYOUT(Local_13, "pet_dog", "pet_dog", -119.0552f, 118.8691f, 1349.283f, 0.0f, -23.58746f, 0.0f);
	Local_13.f_1124 = CREATE_GRINGO_IN_LAYOUT(Local_13, "pet_dog1", "pet_dog", -118.3628f, 118.8691f, 1374.42f, 0.0f, -52.3928f, 0.0f);
	Local_13.f_1128 = CREATE_GRINGO_IN_LAYOUT(Local_13, "pet_dog2", "pet_dog", -74.32178f, 116.8612f, 1404.78f, 0.0f, -122.4743f, 0.0f);
	Local_13.f_1132 = CREATE_GRINGO_IN_LAYOUT(Local_13, "dog_sitting2", "dog_sitting", -99.43192f, 118.7265f, 1346.955f, 0.0f, -203.4876f, 0.0f);
	Local_13.f_1136 = CREATE_GRINGO_IN_LAYOUT(Local_13, "pet_dog3", "pet_dog", -97.72821f, 118.2989f, 1347.766f, 0.0f, 138.3672f, 0.0f);
	Local_13.f_1140 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Locked_Footlocker1", "Locked_Footlocker", -110.9382f, 122.7085f, 1357.436f, 0.0f, -55.68401f, 0.0f);
	DECOR_SET_INT(Local_13.f_1140, "Give_AvatarItem", 3);
	Local_13.f_1144 = CREATE_OBJECTSET_IN_LAYOUT(Function_30(), Local_13, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_cleanwindow_w_any", "stand_cleanwindow_w_any", -108.8618f, 119.4979f, 1369.334f, 0.0f, -31.46099f, 0.0f), Local_13.f_1144);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_cleanwindow_w_any1", "stand_cleanwindow_w_any", -107.6191f, 119.4979f, 1370.094f, 0.0f, -31.46099f, 0.0f), Local_13.f_1144);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_cleanwindow_w_any2", "stand_cleanwindow_w_any", -103.4612f, 119.4979f, 1370.084f, 0.0f, 57.97958f, 0.0f), Local_13.f_1144);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_cleanwindow_w_any3", "stand_cleanwindow_w_any", -100.2437f, 119.4979f, 1364.939f, 0.0f, 57.97958f, 0.0f), Local_13.f_1144);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(Local_13, "stand_stirringpot_w_any", "stand_stirringpot_w_any", -107.766f, 119.4992f, 1351.867f, 0.0f, -374.9603f, 0.0f), Local_13.f_1144);
	Local_13.f_1148 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_bucket7", "Multistage_bucket", -58.56321f, 116.8612f, 1411.939f, 0.0f, 0.0f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1148), 0);
	DECOR_SET_INT(Local_13.f_1148, "FlagSetNum", 7);
	Local_13.f_1152 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_hay_bale6", "Multistage_hay_bale", -74.75643f, 116.7162f, 1427.312f, 0.0f, -327.5011f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1152), 0);
	DECOR_SET_INT(Local_13.f_1152, "FlagSetNum", 6);
	Local_13.f_1156 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_sweeping1", "Multistage_sweeping", -103.9247f, 119.4873f, 1370.959f, 0.0f, -122.2566f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1156), 0);
	DECOR_SET_INT(Local_13.f_1156, "FlagSetNum", true);
	Local_13.f_1160 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_sweeping2", "Multistage_sweeping", -108.4515f, 119.4911f, 1353.988f, 0.0f, 58.7788f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1160), 0);
	DECOR_SET_INT(Local_13.f_1160, "FlagSetNum", 2);
	Local_13.f_1164 = CREATE_GRINGO_IN_LAYOUT(Local_13, "Multistage_dusting3", "Multistage_dusting", -111.2221f, 119.4896f, 1359.888f, 0.0f, 100.8621f, 0.0f);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(Local_13.f_1164), 0);
	DECOR_SET_INT(Local_13.f_1164, "FlagSetNum", 3);
	Local_13.f_1168 = CREATE_GRINGO_IN_LAYOUT(Local_13, "player_sleep_JACK", "player_sleep_bed_L", -104.6258f, 119.5213f, 1368.267f, 0.0f, -31.28675f, 0.0f);
	Local_13.f_1172 = CREATE_GRINGO_IN_LAYOUT(Local_13, "wife_bed", "lie_sleep_on_bed_l", -99.25463f, 119.547f, 1358.703f, 0.0f, -30.35554f, 0.0f);
	return 1;
}

bool Function_63(int iParam0) //Position: 0x598E / 22926
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_67();
	iVar1 = 0;
	if (!Function_5(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_66(iParam0[iVar03], 8);
		}
		else if (Function_65())
		{
			iVar1 = 1;
			Function_66(iParam0[iVar03], 8);
		}
		Function_66(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_5(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_5(iParam0[03], 8) || iVar1));
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
				Function_66(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_5(iParam0[iVar03], 4))
		{
			if (!Function_5(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
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
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_66(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_66(iParam0[iVar03], 2);
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
	Function_64();
	return 1;
}

void Function_64() //Position: 0x5D09 / 23817
{
	if (!Function_74(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_65() //Position: 0x5D49 / 23881
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

void Function_66(var uParam0, int iParam1) //Position: 0x5D74 / 23924
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_67() //Position: 0x5D85 / 23941
{
	if (!Function_74(128))
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

var Function_68(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5DC7 / 24007
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_69(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_66(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_69(var uParam0, int iParam1, int iParam2) //Position: 0x5DFF / 24063
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_5(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_66(uParam0[iVar03], 4);
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

void Function_70(int iParam0, int iParam1) //Position: 0x5EC3 / 24259
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

bool Function_71() //Position: 0x5F0C / 24332
{
	var uVar0;
	
	Function_70(3, 3);
	uVar0 = uVar0;
	Local_4 = FIND_NAMED_LAYOUT("BeechersHope_layout");
	if (!IS_LAYOUTREF_VALID(Local_4))
	{
		Local_4 = CREATE_LAYOUT("BeechersHope_layout");
	}
	Local_4.f_4 = CREATE_VOLUME_IN_LAYOUT(Local_4, "volume_ring", 3, -39.807f, 118.0408f, 1421.272f, 0.0f, 250.874f, 0.0f, 10.66521f, 3.031578f, 9.346188f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_HorseBreaking", -39.807f, 116.861f, 1421.272f, 0.0f, 250.874f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "flag_helper", -38.2962f, 116.861f, 1419.669f, 0.0f, 281.199f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_playerpos", -36.231f, 116.861f, 1418.899f, 0.0f, 155.044f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker", -37.93142f, 116.8612f, 1424.651f, 0.0f, 27.66844f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker1", -36f, 116.8612f, 1423.091f, 0.0f, 68.23293f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker2", -40.69986f, 116.8612f, 1424.7f, 0.0f, -13.77079f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_onlooker3", -41.96623f, 116.8612f, 1417.966f, 0.0f, -149.4004f, 0.0f);
	CREATE_POINT_IN_LAYOUT(Local_4, "f_BullRiding", -39.807f, 116.861f, 1421.272f, 0.0f, -110.6603f, 0.0f);
	*(&Local_4 + 8) = { -110.2831f, 118.8691f, 1374.114f };
	*(&Local_4 + 8 + 12) = { 0.0f, -137.9937f, 0.0f };
	Local_4.f_32 = CREATE_POINT_IN_LAYOUT(Local_4, "f_playerHorse", -110.2831f, 118.8691f, 1374.114f, 0.0f, -137.9937f, 0.0f);
	return 1;
}

void Function_72(bool bParam0, int iParam1) //Position: 0x613F / 24895
{
	if (!Function_74(128))
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

void Function_73(int iParam0) //Position: 0x617A / 24954
{
	int iVar0;
	
	if (Function_24(iParam0, 1) && Function_24(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_74(int iParam0) //Position: 0x61AE / 25006
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_75(var uParam0, int iParam1) //Position: 0x61CA / 25034
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_76(int iParam0) //Position: 0x61D9 / 25049
{
	int iVar0;
	
	if (!Function_81(iParam0))
	{
		return 0;
	}
	iVar0 = Function_80(iParam0);
	if (!Function_77(Function_80(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_77(int iParam0) //Position: 0x620F / 25103
{
	if (!Function_79(iParam0))
	{
		return 0;
	}
	if (!Function_78(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_78(int iParam0) //Position: 0x6233 / 25139
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_79(int iParam0) //Position: 0x6248 / 25160
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_80(int iParam0) //Position: 0x625F / 25183
{
	if (!Function_81(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_81(int iParam0) //Position: 0x6279 / 25209
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_82(int iParam0, bool bParam1) //Position: 0x628F / 25231
{
	int iVar0;
	
	iVar0 = Function_80(iParam0);
	if (!Function_79(iVar0))
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

