//Decompiled with MagicRDR v1.0
//Function Count : 66
//Statics Count : 386
//Natives Count : 125
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 14;
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
	var uLocal_42 = 7;
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
	var uLocal_60 = 3;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 2;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 3;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 5;
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
	var uLocal_102 = 5;
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
	var uLocal_120 = 2;
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
	var uLocal_134 = 2;
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
	var uLocal_146 = 2;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 1;
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
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	var uLocal_236 = 0;
	bool bLocal_237 = false;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 9;
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
	char[] cLocal_300[4] = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 10;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
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
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_234 = 0;
	iLocal_235 = &iScriptParam_0;
	Function_65("Initializing Rathskeller Fork Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_237 = 500;
		uLocal_238 = Function_64();
		switch (iLocal_234)
		{
			case 0x00000000:
				if (Function_62())
				{
					cLocal_300 = Function_61(&iLocal_0, "rathskellerFork", iScriptParam_0);
					iLocal_234 = 1;
				}
				bLocal_237 = false;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_300))
				{
					iLocal_234 = 2;
				}
				bLocal_237 = false;
				break;
			
			case 0x00000002:
				Function_60(&uLocal_240);
				Function_59(&uLocal_240, &uLocal_244, 4, &iLocal_0 + 32, 4294967295, 4);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 560, 4294967295, 266);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 528, 4294967295, 258);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 464, 4294967295, 266);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 16, 4294967295, 266);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 24, 4294967295, 266);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 8, 4294967295, 266);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 472, 4294967295, 266);
				Function_59(&uLocal_240, &uLocal_244, 5, &iLocal_0 + 568, 4294967295, 0x1000000);
				Function_57(&uLocal_302, &cLocal_300, "saloon01", 5, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 528, 0, 1);
				Function_57(&uLocal_302, &cLocal_300, "bunkHouse01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "bunkHouse01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "bunkHouse01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "bunkHouse01", 5, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "saloon01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "saloon01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "saloon01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "saloon01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_57(&uLocal_302, &cLocal_300, "saloon01", 6, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				iLocal_234 = 3;
				bLocal_237 = false;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iLocal_235]), 16);
				Function_55("Finished Initializing Rathskeller Fork Volumes", 5.0f);
				iLocal_234 = 4;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_240, &uLocal_244, &uLocal_238, iScriptParam_0);
				Function_12(&uLocal_302, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_237);
	}
	Function_4(&uLocal_240, &uLocal_244);
	Function_3(&uLocal_302);
	Function_2();
	Function_1(&(Global_43791[iLocal_235]), 16);
	Function_55("Unloaded Rathskeller Fork Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x39F / 927
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x3B9 / 953
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0x3C5 / 965
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
		}
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x42A / 1066
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_11(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(&(vParam1[iVar03]), 4);
		}
		if (Function_11(&(vParam1[iVar03]), 8))
		{
			Function_5(0, 0, 30);
			Function_10(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(bool bParam0, int iParam1, int iParam2) //Position: 0x487 / 1159
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_26182 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
	{
		Global_26182 = Global_26182.f_48;
	}
	else
	{
		Global_26182 = StackVal;
	}
	Global_26182.f_4 = 4294967295;
	Global_26182.f_24 = 0;
	if (!StackVal != Global_26182)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, &iParam1, &iParam2);
		Function_6(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_6(bool bParam0, bool bParam1, bool bParam2) //Position: 0x571 / 1393
{
	int iVar0;
	
	Function_9(bParam0);
	Function_8(&bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, &bParam1);
	Function_7();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&bParam1), 0);
	Global_26182.f_8 = bParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_7() //Position: 0x6F0 / 1776
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x6FC / 1788
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

void Function_9(int iParam0) //Position: 0x746 / 1862
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

void Function_10(struct<17> Param0) //Position: 0x78C / 1932
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0x7A9 / 1961
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0x7C7 / 1991
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	
	bVar6 = false;
	if (Global_46721 > Param0)
	{
		Global_46721 = 0;
	}
	iVar0 = Global_46721;
	while (iVar0 < Function_15((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_14(&(Param0[iVar04]), 16384);
				uVar8 = Param0[iVar04].f_12;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(&uVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(&uVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (&bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_64(), &Param0[iVar04] + 16))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(&Param0[iVar04] + 24))
							{
								if (IS_PERS_CHAR_ALIVE(&Param0[iVar04] + 24))
								{
									uVar10 = GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar04] + 24);
									if (IS_ACTOR_VALID(&uVar10))
									{
										if (IS_ACTOR_IN_VOLUME(&uVar10, &Param0[iVar04] + 16))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
						else
						{
							Function_13(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_14(&(Param0[iVar04]), 1);
						uVar8 = Param0[iVar04].f_12;
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(&uVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_13(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(&uVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_14(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			bVar3 = IS_DOOR_LOCKED(&uVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_6630)
				{
					if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_64(), &Param0[iVar04] + 16))
							{
								SET_DOOR_LOCK(&uVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(&uVar7, 1);
				}
			}
			else if (Global_6630)
			{
				if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_64(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_14(&(Param0[iVar04]), 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(&uVar7, 0);
			}
		}
		iVar0++;
	}
	Global_46721 = iVar0;
	return;
}

void Function_13(struct<13> Param0) //Position: 0xBE8 / 3048
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0xBFB / 3067
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xC18 / 3096
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0xC2A / 3114
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_6630)
	{
		vParam0.f_8 = 1;
	}
	else if (Global_6629)
	{
		vParam0.f_8 = 1;
	}
	else if (vParam0.z)
	{
		vParam0.f_8 = 0;
	}
}

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xCB4 / 3252
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(&vParam0))
	{
		return 0;
	}
	Function_1(&(Global_43791[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(&vParam0 + 8, "locflag");
	if (bVar0 != 0 && vParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (vParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
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
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_51(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_50(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_50(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_47(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
							{
								if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime");
								}
							}
							if (bVar2)
							{
								Function_50(&vParam0, 16);
								Function_39(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 16))
					{
						Function_10(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_38(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_37(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_50(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_18(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x110C / 4364
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_38(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_23(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_44085[iParam09].f_64 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x11FD / 4605
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x123A / 4666
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1273 / 4723
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

var Function_22(int iParam0) //Position: 0x12DD / 4829
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
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1335 / 4917
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_24(iParam0);
	return 1;
}

void Function_24(bool bParam0) //Position: 0x155D / 5469
{
	switch (bParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_25(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x15FB / 5627
{
	char* cVar0[32];
	bool bVar8;
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
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_19(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_20(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_20(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_26(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x1C39 / 7225
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x1C42 / 7234
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C53 / 7251
{
	char* cVar0[32];
	
	if (&bParam3)
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x1D4A / 7498
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D65 / 7525
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1DCC / 7628
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1DDE / 7646
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_33(int iParam0) //Position: 0x1F12 / 7954
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x1F21 / 7969
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x20BB / 8379
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

void Function_36(var uParam0, int iParam1) //Position: 0x22FF / 8959
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x230C / 8972
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2336 / 9014
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x2353 / 9043
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
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
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&iParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_42(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &iParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&iParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_40();
		}
		SET_CRIME_FACTION(StackVal, &uVar2);
		SET_CRIME_TALLIED(&uVar2, 0);
		SET_CRIME_COUNTER(&uVar2, 1);
		SET_CRIME_WORLD_REGION(&uVar2, Global_40000.f_12);
		if ((Global_41252[iParam111].f_36 != 2 || Global_41252[iParam111].f_36 != 3) || Global_41252[iParam111].f_36 != 4)
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 1);
		}
		else
		{
			SET_CRIME_IN_PROGRESS(&uVar2, 0);
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(&uVar2), GET_OBJECTSET_FROM_OBJECT(&uVar3));
		SET_ACTOR_TIME_OF_LAST_CRIME(&uParam2, GET_CURRENT_GAME_TIME());
	}
	return &uVar2;
}

void Function_40() //Position: 0x2606 / 9734
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_41(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (IS_CRIME_VALID(&bVar3))
		{
			SET_CRIME_WITNESSED(&bVar3, 3);
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_41(var uParam0, int iParam1) //Position: 0x2679 / 9849
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&iParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &iParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

bool Function_42(bool bParam0) //Position: 0x26AF / 9903
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
	if (Global_6621)
	{
		return 0;
	}
	if (Function_47(2048))
	{
		return 0;
	}
	if (0 || !&bParam0)
	{
		if (Global_43790 != 2 || Global_43790 != 5)
		{
			return 0;
		}
	}
	return 1;
}

int Function_43(int iParam0) //Position: 0x2725 / 10021
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2736 / 10038
{
	if (Global_46720 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_45(int iParam0) //Position: 0x274F / 10063
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2765 / 10085
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x277A / 10106
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2798 / 10136
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_49(int iParam0) //Position: 0x2847 / 10311
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x285D / 10333
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2870 / 10352
{
	int iVar0;
	bool bVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x28EA / 10474
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2913 / 10515
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam0 + 8))
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x2933 / 10547
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x294F / 10575
{
	if (!Function_54(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 2;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = (Global_21610.f_128 + fParam1);
	}
	return;
}

void Function_56(var uParam0, bool bParam1) //Position: 0x298F / 10639
{
	uParam0 = (uParam0 || bParam1);
	return;
}

var Function_57(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0x29A0 / 10656
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_58(&Param0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, &cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, &cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_13(&(Param0[iVar04]), 1);
	}
	Function_13(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_13(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_13(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_58(struct<4>[] Param0) //Position: 0x2A94 / 10900
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (!IS_DOOR_VALID(&(Param0[iVar04])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_59(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x2AC5 / 10949
{
	if (uParam0 >= (vParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_60(struct<5> Param0) //Position: 0x2BB2 / 11186
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_61(int iParam0, var uParam1, int iParam2) //Position: 0x2BC3 / 11203
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_62() //Position: 0x2BE6 / 11238
{
	var uVar0;
	
	Function_63(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("RathskellerFork_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("RathskellerFork_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_garden", 2,802597E-45f, Vector(-3693,255f, 42,3148f, 2125,701f), Vector(0.0f, 44,51831f, 0.0f), Vector(9,925219f, 9,925219f, 9,925219f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_sty", 2,802597E-45f, Vector(-3621,196f, 43,9767f, 2119,432f), Vector(0.0f, -44,95447f, 0.0f), Vector(8,86199f, 8,86199f, 14,07406f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_stable", 2,802597E-45f, Vector(-3662,146f, 42,16473f, 2154,364f), Vector(0.0f, 44,8574f, 0.0f), Vector(18,53334f, 15,97864f, 20,40537f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_region", 2,802597E-45f, Vector(-3657,196f, 42,16477f, 2124.0f), Vector(0.0f, 44,51225f, 0.0f), Vector(100,1779f, 100,1779f, 100,1779f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_crows_set");
	*(&iLocal_0 + 40[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder12", 4,203895E-45f, Vector(-3667,996f, 50,28079f, 2128,001f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[0]);
	*(&iLocal_0 + 40[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder1", 4,203895E-45f, Vector(-3663,123f, 50,28079f, 2153,339f), Vector(0.0f, 20.0f, 0.0f), Vector(12,97006f, 18,59737f, 11,29908f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[1]);
	*(&iLocal_0 + 40[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder2", 4,203895E-45f, Vector(-3692,968f, 50,28079f, 2128,001f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[2]);
	*(&iLocal_0 + 40[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder3", 4,203895E-45f, Vector(-3619,695f, 50,28079f, 2118,437f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[3]);
	*(&iLocal_0 + 40[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder4", 4,203895E-45f, Vector(-3658,227f, 50,28079f, 2139,811f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[4]);
	*(&iLocal_0 + 40[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder5", 4,203895E-45f, Vector(-3641,509f, 50,28079f, 2142,275f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[5]);
	*(&iLocal_0 + 40[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder6", 4,203895E-45f, Vector(-3694,344f, 50,28079f, 2141,383f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[6]);
	*(&iLocal_0 + 40[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder7", 4,203895E-45f, Vector(-3648,459f, 50,28079f, 2096,775f), Vector(0.0f, 45,10091f, 0.0f), Vector(12,58875f, 18,59737f, 18,2455f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[7]);
	*(&iLocal_0 + 40[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder8", 4,203895E-45f, Vector(-3630,325f, 50,28079f, 2113,575f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[8]);
	*(&iLocal_0 + 40[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nCylinder9", 4,203895E-45f, Vector(-3647,141f, 50,28079f, 2121,827f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[9]);
	*(&iLocal_0 + 40[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder10", 4,203895E-45f, Vector(-3681,653f, 50,28079f, 2144,476f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[10]);
	*(&iLocal_0 + 40[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder11", 4,203895E-45f, Vector(-3667,996f, 50,28079f, 2128,001f), Vector(0.0f, 20.0f, 0.0f), Vector(5,208708f, 18,59737f, 5,328751f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[11]);
	*(&iLocal_0 + 40[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder13", 4,203895E-45f, Vector(-3677,346f, 67,70795f, 2111,989f), Vector(0.0f, 43,88285f, 0.0f), Vector(22,30366f, 44,16914f, 10,43942f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[12]);
	*(&iLocal_0 + 40[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder14", 4,203895E-45f, Vector(-3618,137f, 55,39209f, 2104.0f), Vector(0.0f, 42,34747f, 0.0f), Vector(5,228905f, 32,45801f, 13,83174f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 160, &iLocal_0 + 40[13]);
	*(&iLocal_0 + 232) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_vultures_set");
	*(&iLocal_0 + 168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder21", 4,203895E-45f, Vector(-3645,254f, 62,21743f, 2068,658f), Vector(0.0f, 20.0f, 0.0f), Vector(10,21942f, 35,64838f, 10,42494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 168[0]);
	*(&iLocal_0 + 168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder15", 4,203895E-45f, Vector(-3704,5f, 62,21743f, 2125,481f), Vector(0.0f, 20.0f, 0.0f), Vector(10,21942f, 35,64838f, 10,42494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 168[1]);
	*(&iLocal_0 + 168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder16", 4,203895E-45f, Vector(-3684,737f, 62,21743f, 2151,741f), Vector(0.0f, 20.0f, 0.0f), Vector(10,21942f, 35,64838f, 10,42494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 168[2]);
	*(&iLocal_0 + 168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder17", 4,203895E-45f, Vector(-3651,746f, 62,21743f, 2164,688f), Vector(0.0f, 20.0f, 0.0f), Vector(10,21942f, 35,64838f, 10,42494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 168[3]);
	*(&iLocal_0 + 168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder18", 4,203895E-45f, Vector(-3687,232f, 62,21743f, 2095,677f), Vector(0.0f, 20.0f, 0.0f), Vector(10,21942f, 35,64838f, 10,42494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 168[4]);
	*(&iLocal_0 + 168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder19", 4,203895E-45f, Vector(-3659,434f, 62,21743f, 2139,26f), Vector(0.0f, 20.0f, 0.0f), Vector(10,21942f, 35,64838f, 10,42494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 168[5]);
	*(&iLocal_0 + 168[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder20", 4,203895E-45f, Vector(-3626,506f, 62,21743f, 2125,481f), Vector(0.0f, 20.0f, 0.0f), Vector(10,21942f, 35,64838f, 10,42494f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 232, &iLocal_0 + 168[6]);
	*(&iLocal_0 + 272) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_dogs_set");
	*(&iLocal_0 + 240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder25", 4,203895E-45f, Vector(-3668,338f, 42,57071f, 2127,185f), Vector(0.0f, 41,02739f, 0.0f), Vector(26,52049f, 10,58024f, 12,71264f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 272, &iLocal_0 + 240[0]);
	*(&iLocal_0 + 240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder49", 4,203895E-45f, Vector(-3647,38f, 42,57071f, 2126,344f), Vector(0.0f, -44,90509f, 0.0f), Vector(18,74602f, 7,478643f, 8,985932f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 272, &iLocal_0 + 240[1]);
	*(&iLocal_0 + 240[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder50", 4,203895E-45f, Vector(-3633,482f, 42,57071f, 2116,284f), Vector(0.0f, 42,50925f, 0.0f), Vector(14,85578f, 5,926651f, 7,121143f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 272, &iLocal_0 + 240[2]);
	*(&iLocal_0 + 304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_rabbits_set");
	*(&iLocal_0 + 280[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder33", 4,203895E-45f, Vector(-3620,92f, 42,28122f, 2126,759f), Vector(0.0f, 20.0f, 0.0f), Vector(16,35258f, 16,35258f, 16,35258f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 280[0]);
	*(&iLocal_0 + 280[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder29", 4,203895E-45f, Vector(-3693,331f, 42,28122f, 2133,986f), Vector(0.0f, 20.0f, 0.0f), Vector(9,970144f, 9,970144f, 14,92122f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 304, &iLocal_0 + 280[1]);
	*(&iLocal_0 + 344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_owls_set");
	*(&iLocal_0 + 312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder30", 4,203895E-45f, Vector(-3670,436f, 42,18943f, 2155,838f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 312[0]);
	*(&iLocal_0 + 312[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder31", 4,203895E-45f, Vector(-3615,168f, 42,18943f, 2121,688f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 312[1]);
	*(&iLocal_0 + 312[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder32", 4,203895E-45f, Vector(-3705,158f, 42,18943f, 2124f), Vector(0.0f, 20.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 344, &iLocal_0 + 312[2]);
	*(&iLocal_0 + 400) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_snakes_set");
	*(&iLocal_0 + 352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder38", 4,203895E-45f, Vector(-3700,949f, 42,34898f, 2122,962f), Vector(0.0f, 20.0f, 0.0f), Vector(3,610236f, 3,421223f, 2,652358f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 400, &iLocal_0 + 352[0]);
	*(&iLocal_0 + 352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder34", 4,203895E-45f, Vector(-3613,97f, 42,34898f, 2128,212f), Vector(0.0f, 20.0f, 0.0f), Vector(3,610236f, 3,421223f, 2,652358f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 400, &iLocal_0 + 352[1]);
	*(&iLocal_0 + 352[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder35", 4,203895E-45f, Vector(-3666,562f, 42,34898f, 2163,008f), Vector(0.0f, 20.0f, 0.0f), Vector(3,610236f, 3,421223f, 2,652358f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 400, &iLocal_0 + 352[2]);
	*(&iLocal_0 + 352[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder36", 4,203895E-45f, Vector(-3643,612f, 42,34898f, 2083,865f), Vector(0.0f, 20.0f, 0.0f), Vector(3,610236f, 3,421223f, 2,652358f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 400, &iLocal_0 + 352[3]);
	*(&iLocal_0 + 352[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder37", 4,203895E-45f, Vector(-3640,333f, 42,34898f, 2153,589f), Vector(0.0f, 20.0f, 0.0f), Vector(3,610236f, 3,421223f, 2,652358f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 400, &iLocal_0 + 352[4]);
	*(&iLocal_0 + 456) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_raccoons_set");
	*(&iLocal_0 + 408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder43", 4,203895E-45f, Vector(-3695,979f, 42,23679f, 2136,317f), Vector(0.0f, 20.0f, 0.0f), Vector(4,824193f, 10,8969f, 5,528018f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 408[0]);
	*(&iLocal_0 + 408[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder39", 4,203895E-45f, Vector(-3683,682f, 42,23679f, 2096,461f), Vector(0.0f, 20.0f, 0.0f), Vector(4,824193f, 10,8969f, 5,528018f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 408[1]);
	*(&iLocal_0 + 408[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder40", 4,203895E-45f, Vector(-3638,214f, 42,23679f, 2149,041f), Vector(0.0f, 20.0f, 0.0f), Vector(4,824193f, 10,8969f, 5,528018f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 408[2]);
	*(&iLocal_0 + 408[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder41", 4,203895E-45f, Vector(-3611,295f, 42,23679f, 2121,366f), Vector(0.0f, 20.0f, 0.0f), Vector(4,824193f, 10,8969f, 5,528018f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 408[3]);
	*(&iLocal_0 + 408[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Cylinder42", 4,203895E-45f, Vector(-3648,867f, 42,23679f, 2074,036f), Vector(0.0f, 20.0f, 0.0f), Vector(4,824193f, 10,8969f, 5,528018f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 456, &iLocal_0 + 408[4]);
	*(&iLocal_0 + 464) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nratv_bunk", 2,802597E-45f, Vector(-3682,061f, 42,5698f, 2111,87f), Vector(0.0f, 45,59922f, 0.0f), Vector(25,31392f, 9,060952f, 8,177214f));
	*(&iLocal_0 + 472) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nratv_Dine", 2,802597E-45f, Vector(-3668,304f, 43,94373f, 2102,041f), Vector(0.0f, -46,31173f, 0.0f), Vector(11,99691f, 6,113931f, 7,192955f));
	*(&iLocal_0 + 504) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_Whores_set");
	*(&iLocal_0 + 480[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_Whores01", 2,802597E-45f, Vector(-3646,066f, 42,56909f, 2101,388f), Vector(0.0f, -44,76482f, 0.0f), Vector(25,06916f, 14,2938f, 19,08414f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 504, &iLocal_0 + 480[0]);
	*(&iLocal_0 + 480[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_Whores02", 2,802597E-45f, Vector(-3655,999f, 42,56909f, 2088,728f), Vector(0.0f, -44,76482f, 0.0f), Vector(6,673093f, 14,2938f, 3,680476f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 504, &iLocal_0 + 480[1]);
	*(&iLocal_0 + 512) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_HorseShoePit", 2,802597E-45f, Vector(-3662,472f, 43,93107f, 2134,971f), Vector(0.0f, 135,107f, 0.0f), Vector(6,81608f, 6,964901f, 16,74516f));
	*(&iLocal_0 + 520) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_BlackJack", 2,802597E-45f, Vector(-3640,298f, 43,93376f, 2104,451f), Vector(0.0f, 133,1409f, 0.0f), Vector(4,37964f, 2,965514f, 3,916286f));
	*(&iLocal_0 + 528) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_players_room", 2,802597E-45f, Vector(-3652,793f, 44,6935f, 2085,093f), Vector(0.0f, 45,59922f, 0.0f), Vector(4,759793f, 5,430603f, 6,321949f));
	*(&iLocal_0 + 560) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_main_set");
	*(&iLocal_0 + 536[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_main01", 2,802597E-45f, Vector(-3645,046f, 42,56982f, 2099,732f), Vector(0.0f, -45,05889f, 0.0f), Vector(25,56203f, 13,85471f, 14,44504f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 560, &iLocal_0 + 536[0]);
	*(&iLocal_0 + 536[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_main02", 2,802597E-45f, Vector(-3657,712f, 42,56982f, 2090,174f), Vector(0.0f, -45,05889f, 0.0f), Vector(7,878011f, 13,85471f, 9,139983f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 560, &iLocal_0 + 536[1]);
	*(&iLocal_0 + 568) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_corall", 2,802597E-45f, Vector(-3651,32f, 42,16473f, 2143,592f), Vector(0.0f, 44,8574f, 0.0f), Vector(12,70692f, 15,97864f, 20,40537f));
	*(&iLocal_0 + 576) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_horses", 2,802597E-45f, Vector(-3657,382f, 42,16473f, 2149,623f), Vector(0.0f, 44,8574f, 0.0f), Vector(28,14958f, 15,02053f, 19,18183f));
	*(&iLocal_0 + 608) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_chickens_set");
	*(&iLocal_0 + 584[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_chickens_01", 4,203895E-45f, Vector(-3649,241f, 42,57071f, 2123,689f), Vector(0.0f, -122,7184f, 0.0f), Vector(7,975013f, 7,642354f, 15,51084f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 584[0]);
	*(&iLocal_0 + 584[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_chickens_02", 4,203895E-45f, Vector(-3664,541f, 42,57071f, 2123,689f), Vector(0.0f, -48,57617f, 0.0f), Vector(7,975013f, 7,642354f, 15,51084f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 584[1]);
	*(&iLocal_0 + 616) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_saloon", 2,802597E-45f, Vector(-3646,287f, 44,28983f, 2100,976f), Vector(0.0f, 135,6248f, 0.0f), Vector(24,87583f, 4,187143f, 18,12609f));
	*(&iLocal_0 + 640) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "ratv_pigs_set");
	*(&iLocal_0 + 624[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "ratv_pigs_01", 2,802597E-45f, Vector(-3620,959f, 42,7423f, 2119,239f), Vector(0.0f, 44,8574f, 0.0f), Vector(10,96561f, 6,400937f, 7,425486f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 640, &iLocal_0 + 624[0]);
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_report_crime_road", Vector(-3709,576f, 38,298f, 2180,219f), Vector(0.0f, 134,997f, 0.0f));
	*(&iLocal_0 + 648) = Vector(-3679,57f, 42,76945f, 2116,521f);
	*(&iLocal_0 + 648 + 12) = Vector(0.0f, 46,5f, 0.0f);
	*(&iLocal_0 + 672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_merc_giver", Vector(-3679,57f, 42,76945f, 2116,521f), Vector(0.0f, 46,5f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_report_crime_road1", Vector(-3600,961f, 33,418f, 2198,256f), Vector(0.0f, 261,738f, 0.0f));
	*(&iLocal_0 + 680) = Vector(-3660,212f, 42,212f, 2118,864f);
	*(&iLocal_0 + 680 + 12) = Vector(0.0f, 234,371f, 0.0f);
	*(&iLocal_0 + 704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_playerDuel1", Vector(-3660,212f, 42,212f, 2118,864f), Vector(0.0f, 234,371f, 0.0f));
	*(&iLocal_0 + 712) = Vector(-3653,307f, 42,189f, 2124,016f);
	*(&iLocal_0 + 712 + 12) = Vector(0.0f, 54,53135f, 0.0f);
	*(&iLocal_0 + 736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_enDuel1", Vector(-3653,307f, 42,189f, 2124,016f), Vector(0.0f, 54,53135f, 0.0f));
	*(&iLocal_0 + 744) = Vector(-3688,435f, 42,97049f, 2118,117f);
	*(&iLocal_0 + 744 + 12) = Vector(0.0f, -135,7672f, 0.0f);
	*(&iLocal_0 + 768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_interiorPoint_room", Vector(-3688,435f, 42,97049f, 2118,117f), Vector(0.0f, -135,7672f, 0.0f));
	*(&iLocal_0 + 776) = Vector(-3681,78f, 42,8261f, 2111,366f);
	*(&iLocal_0 + 776 + 12) = Vector(0.0f, -128,9299f, 0.0f);
	*(&iLocal_0 + 800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_interiorPoint_room1", Vector(-3681,78f, 42,8261f, 2111,366f), Vector(0.0f, -128,9299f, 0.0f));
	*(&iLocal_0 + 808) = Vector(-3676,121f, 42,84285f, 2105,66f);
	*(&iLocal_0 + 808 + 12) = Vector(0.0f, -133,9488f, 0.0f);
	*(&iLocal_0 + 832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_interiorPoint_room2", Vector(-3676,121f, 42,84285f, 2105,66f), Vector(0.0f, -133,9488f, 0.0f));
	*(&iLocal_0 + 840) = Vector(-3665,583f, 42,97049f, 2104,722f);
	*(&iLocal_0 + 840 + 12) = Vector(0.0f, 133,635f, 0.0f);
	*(&iLocal_0 + 864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_interiorPoint_kitchen", Vector(-3665,583f, 42,97049f, 2104,722f), Vector(0.0f, 133,635f, 0.0f));
	*(&iLocal_0 + 872) = Vector(-3640,909f, 42,81192f, 2108,583f);
	*(&iLocal_0 + 872 + 12) = Vector(0.0f, 133,3033f, 0.0f);
	*(&iLocal_0 + 896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_interiorPoint_saloon", Vector(-3640,909f, 42,81192f, 2108,583f), Vector(0.0f, 133,3033f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos1", Vector(-3537,666f, 51,095f, 2197,576f), Vector(-8,571f, 74,576f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos2", Vector(-3740,636f, 66,742f, 2234,344f), Vector(-3,548f, -35,045f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos3", Vector(-3790,722f, 35,46f, 2374,584f), Vector(-3,846f, -38,871f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos4", Vector(-3517,717f, 27,906f, 2478,56f), Vector(-0,879f, 29,392f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos5", Vector(-3637,22f, 53,512f, 2077,482f), Vector(-19,611f, -165,941f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos6", Vector(-3661,797f, 50,852f, 2099,953f), Vector(-21,407f, -175,593f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos7", Vector(-3696,647f, 42,663f, 2145,779f), Vector(8,18f, -94,142f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos8", Vector(-3625,752f, 43,288f, 2128,093f), Vector(-4,06f, 86,964f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos9", Vector(-3658,883f, 43,521f, 2119,656f), Vector(-5,587f, -41,994f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "rat_vista_cam_pos10", Vector(-3680,953f, 43,298f, 2146,535f), Vector(6,062f, -88,992f, 0.0f));
	*(&iLocal_0 + 904) = Vector(-3642,582f, 42,81192f, 2103,989f);
	*(&iLocal_0 + 904 + 12) = Vector(0.0f, 171,5513f, 0.0f);
	*(&iLocal_0 + 928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ratf_interiorSettlement01", Vector(-3642,582f, 42,81192f, 2103,989f), Vector(0.0f, 171,5513f, 0.0f));
	return 1;
}

void Function_63(int iParam0, int iParam1) //Position: 0x4617 / 17943
{
	switch (&iParam1)
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

var Function_64() //Position: 0x4661 / 18017
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(char* cParam0) //Position: 0x4676 / 18038
{
	if (!Function_54(128))
	{
		return;
	}
	if (!STRING_CONTAINS_STRING(&Global_21610, &cParam0))
	{
		strcpy(&Global_21610, &cParam0, 64);
		Global_21610.f_132 = 1;
		Global_21610.f_128 = GET_CURRENT_GAME_TIME();
		Global_21610.f_136 = Global_21610.f_128;
	}
	return;
}

