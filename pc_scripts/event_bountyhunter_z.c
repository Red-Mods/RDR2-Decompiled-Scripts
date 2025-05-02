//Decompiled with MagicRDR v1.0
//Function Count : 437
//Statics Count : 874
//Natives Count : 651
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 2;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_113 = 30;
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
	int iLocal_235 = 6;
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
	int iLocal_261 = 0;
	bool bLocal_262 = false;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	char* cLocal_265[32] = "";
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
	int iLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	int iLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	int iLocal_313 = 0;
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
	var uLocal_328[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	char* cLocal_344[32] = "";
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	bool bLocal_375 = false;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	bool bLocal_380 = false;
	var uLocal_381 = 0;
	bool bLocal_382 = false;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	bool bLocal_402 = false;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	var uLocal_406 = 0;
	struct<1093> Local_407 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	struct<5> Var1;
	var uVar7;
	int iVar8;
	int iVar9;
	var uVar31;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	iLocal_350 = 4294967295;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_353 = 0;
	iLocal_354 = 0;
	iLocal_355 = 0;
	iLocal_356 = 0;
	iLocal_357 = 0;
	iLocal_358 = 0;
	iLocal_359 = 0;
	iLocal_360 = 0;
	iLocal_361 = 0;
	iLocal_362 = 0;
	iLocal_363 = 0;
	iLocal_364 = 0;
	iLocal_367 = 1;
	iLocal_368 = 0;
	iLocal_369 = 1;
	iLocal_370 = 0;
	iLocal_371 = 0;
	iLocal_372 = 0;
	iLocal_373 = 0;
	iLocal_374 = 0;
	bLocal_375 = false;
	iLocal_376 = 0;
	iLocal_377 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	uLocal_400 = "";
	iLocal_404 = 4294967295;
	iLocal_803 = 0;
	iLocal_810 = 0;
	*(&iVar9 + 28) = 1;
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var1);
	uVar31 = Function_436();
	ADD_TIME(&uVar31, 0, 0, 10, 0);
	ScriptParam_0.f_60 = 100.0f;
	iLocal_30 = 0;
	uLocal_318 = GET_TIME_OF_DAY();
	ADD_TIME(&uLocal_318, 2, 0, false, 0);
	cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bountyHunterLay") };
	iLocal_405 = CREATE_LAYOUT(&cLocal_265);
	Local_407.f_920 = 4294967295;
	Function_433();
	if (Function_432() == 0)
	{
		if (Function_431(Global_46838[1]))
		{
			if (Function_429(&Global_39906, Global_46838[1]))
			{
			}
			else
			{
				iLocal_261 = 0;
				iLocal_30 = 5;
			}
		}
		else if (Function_431(Global_46894[1]))
		{
			if (Function_429(&Global_39906, Global_46894[1]))
			{
			}
			else
			{
				iLocal_261 = 0;
				iLocal_30 = 5;
			}
		}
		else
		{
			iLocal_261 = 0;
			iLocal_30 = 5;
		}
	}
	iLocal_797 = (*&Global_40060 + 68[0181][75])[3];
	iLocal_798 = (*&Global_40060 + 68[0181][225])[3];
	iLocal_799 = (*&Global_40060 + 68[0181][125])[3];
	iLocal_800 = (*&Global_40060 + 68[1181][75])[3];
	iLocal_801 = (*&Global_40060 + 68[1181][225])[3];
	iLocal_802 = (*&Global_40060 + 68[1181][125])[3];
	if (StackVal || !Function_428(Global_39906.f_24) != 1)
	{
		LOG_ERROR("Bad Bounty Hunter Region Calculated?");
	}
	ScriptParam_0.f_52 = Global_39906.f_24;
	Function_422(&Local_407, Function_423(Global_39906.f_28));
	Function_421(&Local_407, 0);
	Function_420(&Local_407, 1);
	PRINTSTRING("Bounty Hunter Target Volume = ");
	PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[ScriptParam_0.f_529] + 8)));
	PRINTNL();
	PRINTSTRING("Deed ID = Region: ");
	PRINTINT(Function_419(Local_407.f_1092));
	Global_39906.f_24 = Function_415(&Global_39906);
	if (Function_428(Global_39906.f_24) && Global_39906.f_24 < 0)
	{
		if (Function_428(Global_39906.f_24))
		{
			bLocal_402 = Global_39906.f_24;
			uLocal_322 = &Global_44085[bLocal_4029] + 8;
			Function_414();
			Function_413();
			PRINTSTRING("Bounty Hunter Target Volume = ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&uLocal_322)));
			PRINTNL();
		}
		else
		{
			LOG_ERROR("Invalid. No starting region found for bountyhunter");
		}
		Function_412(1);
	}
	else
	{
		iLocal_30 = 5;
	}
	iLocal_404 = Global_39906.f_28;
	Function_411();
	while (!IS_EXITFLAG_SET())
	{
		if ((StackVal && !Function_409(!Function_410(0, 0, 1, 1), 4096)) && !iLocal_363)
		{
			Function_408(&Global_39906 + 8, 4096);
			Global_6655 = 0;
			Function_387(1);
			Function_386(0, 4294967295);
		}
		iLocal_261 = 1000;
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			iLocal_30 = 5;
		}
		else if (!Function_428(bLocal_402))
		{
			iLocal_30 = 5;
		}
		else if (!Function_428(iLocal_404) && iLocal_264 <= 7)
		{
			iLocal_30 = 5;
		}
		else if (Global_6623 != 1 && 0 != ScriptParam_0.f_44)
		{
			Function_345(13);
		}
		else if (Global_6646 && Function_344())
		{
			iLocal_359 = 1;
			Function_345(10);
		}
		else if (Function_343() != 1 && iLocal_357 != 0)
		{
			iLocal_357 = 1;
			Function_345(10);
		}
		else if (iLocal_264 >= 5 && !Function_342("npressDemo"))
		{
			if (IS_EARLIER_THAN(&uLocal_318, GET_TIME_OF_DAY()))
			{
				iLocal_30 = 5;
			}
		}
		if (Global_6625 && iLocal_264 > 8)
		{
			Function_326();
		}
		if (HAS_ITEM(Function_325(72), &Global_54076))
		{
			if (iLocal_369 == 1)
			{
				if (UI_ISACTIVE("WantedPoster"))
				{
					Function_324();
					PAUSE_GAME(GET_THIS_SCRIPT_ID());
					iLocal_369 = 0;
				}
			}
			else if (!UI_ISACTIVE("WantedPoster"))
			{
				Function_323();
				UNPAUSE_GAME();
				iLocal_369 = 1;
			}
		}
		else
		{
			UNPAUSE_GAME();
		}
		Function_318();
		Function_311(&Local_407, 0, 0);
		switch (iLocal_30)
		{
			case 0x00000000:
				if (Function_310() || ScriptParam_0.f_44 != 1)
				{
					if (Function_309() == 1)
					{
						strcpy(&cLocal_265, "bountyhunter", 32);
						cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&cLocal_265) };
						Function_345(1);
						if (!HAS_ITEM(Function_325(72), &Global_54076))
						{
							Function_308(72, 1, 0);
						}
						CLEAR_JOURNAL_ENTRY(Global_39906.f_36);
						if (Function_344())
						{
							Global_39906.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_39906.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_joua", 0, 0, 0);
						}
						else
						{
							Global_39906.f_36 = CREATE_JOURNAL_ENTRY("pm_bh_jout", 4, false, 0);
							APPEND_JOURNAL_ENTRY(Global_39906.f_36, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_jou1", 0, 0, 0);
						}
						Function_307(&iLocal_309);
						Function_307(&iLocal_305);
						Function_307(&iLocal_301);
						iLocal_30 = 3;
						iLocal_261 = 0;
					}
				}
				else
				{
					iLocal_261 = 1000;
				}
				break;
			
			case 0x00000003:
				if (Global_6628 == 0)
				{
					Function_305();
					switch (iLocal_264)
					{
						case 0x00000001:
							GET_VOLUME_CENTER(&uLocal_322, &Var1);
							Function_304(StackVal, StackVal, Var1, Global_54078, &Var1);
							if ((VMAG(Var1) > 450.0f && Function_303(64)) && Function_303(8))
							{
								if (!Function_409(StackVal, 8))
								{
									Function_296();
									Function_408(&Global_39906 + 8, 8);
								}
								iLocal_264 = 2;
								iLocal_261 = 0;
							}
							if (Function_295(&Local_407, 0, 0) != 0 && Function_294(&iLocal_289, 10.0f))
							{
								if (IS_BLIP_VALID(&uLocal_388))
								{
									SET_BLIP_BLINK(&uLocal_388, 0, 0, 5f);
								}
							}
							uLocal_317 = Global_39906.f_12;
							if (!IS_BLIP_VALID(&uLocal_388))
							{
								Function_292(1);
							}
							break;
						
						case 0x00000002:
							if (Function_291())
							{
								if (Global_46722[Global_43787] != Function_289(bLocal_402) && (Function_287(&(Global_43791[Function_288(bLocal_402)]), 32) || Function_286()))
								{
									iLocal_264 = 3;
									iLocal_261 = 0;
								}
							}
							break;
						
						case 0x00000003:
							if (bLocal_402 == Global_46866[1] || Function_285(24))
							{
								if (iLocal_353 == 0)
								{
									GET_VOLUME_CENTER(&uLocal_322, &Var1);
									Function_284(&uLocal_322);
									Var5 = Function_284(&uLocal_322);
									Function_304(StackVal, StackVal, Global_54078, Var5, &Var1);
									if (StackVal && !Function_409(VMAG(Var1) > 250.0f, 4))
									{
										cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("restrictVol") };
										uVar7 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &cLocal_265, 4,203895E-45f, Var5, Vector(0.0f, 0.0f, 0.0f), Vector(ScriptParam_0.f_60, ScriptParam_0.f_60, ScriptParam_0.f_60));
										DECOR_SET_INT(&uVar7, "script", GET_THIS_SCRIPT_ID());
										Function_280(&uVar7, ScriptParam_0.f_40);
										Function_408(&Global_39906 + 8, 4);
										ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&uLocal_322, 0);
									}
									Function_304(StackVal, StackVal, Global_54078, Var5, &Var1);
									if (VMAG(Var1) > 200.0f && !Function_279(&Local_407))
									{
										Function_278(&Local_407, 1);
										Function_277(&Local_407, "pm_bh_nrng", 1);
										Function_269(StackVal, &Local_407, 0, 4294967295, Var1, 1, 1, 3);
									}
									iVar8 = 4294967294;
									if (Function_428(iLocal_403))
									{
										if (Function_287(&(Global_43791[iLocal_403]), 32))
										{
											iVar8 = iLocal_403;
										}
									}
									if (!Function_428(iVar8))
									{
										if (Function_428(Global_43788))
										{
											if (Function_287(&(Global_43791[Global_43788]), 32))
											{
												iVar8 = Global_43788;
											}
										}
									}
									Function_304(StackVal, StackVal, Global_54078, Var5, &Var1);
									if (((VMAG(Var1) > 200.0f || IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_322)) && Function_428(iVar8)) && !Global_6634)
									{
										Function_268(bLocal_402);
										Var1 = Function_268(bLocal_402);
										if (!Function_267(StackVal, Var1))
										{
											if (STREAMING_ARE_BOUNDS_LOADED(Var1, 10.0f))
											{
												if (Function_249())
												{
													iLocal_353 = 1;
												}
												else
												{
													iLocal_350 = 4;
													iLocal_30 = 5;
													iLocal_261 = 0;
													break;
												}
											}
										}
										else
										{
											LOG_ERROR("PoiObject at zero? Tell Ben.");
										}
									}
								}
								else
								{
									if (IS_ACTOR_VALID(&iLocal_71))
									{
										GET_POSITION(&iLocal_71, &Var5);
										GET_POSITION(&Global_54076, &Var1);
										if (ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 100.0f))
										{
											if (ABS(FLOOR((StackVal - StackVal))) <= 15)
											{
												Function_345(4);
												iLocal_261 = 0;
											}
										}
									}
									if (iLocal_353 == 1)
									{
										if (!Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
										{
											iLocal_30 = 5;
											iLocal_261 = 0;
											break;
										}
									}
								}
							}
							break;
						
						case 0x00000004:
							if (Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0) == 0)
							{
								iLocal_30 = 5;
								iLocal_261 = 0;
							}
							break;
						
						case 0x00000005:
						case 0x00000007:
							Function_307(&iLocal_289);
							if (!Function_186(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0))
							{
								if (iLocal_354 == 1)
								{
									iLocal_30 = 5;
									iLocal_261 = 0;
								}
								break;
							}
							break;
					}
				}
				else
				{
					Function_292(0);
					iLocal_261 = 5000;
				}
				break;
			
			case 0x00000005:
				if (!HUD_IS_SHOWING_OBJECTIVE())
				{
					strcpy(&cLocal_265, "bh print try ", 32);
					stradd(&cLocal_265, INT_TO_STRING(bLocal_811), 32);
					bLocal_811++;
					Function_185(&cLocal_265, 0x40f00000, 1, 2, 0, 0, 0, 0);
				}
				if (iLocal_362 == 0)
				{
					if (IS_OBJECT_VALID(&bLocal_380))
					{
						Function_184(&bLocal_380);
					}
					iLocal_362 = 1;
					if (!IS_ACTOR_ALIVE(&Global_54076) || iLocal_350 == 2)
					{
						iLocal_367 = 0;
					}
					if (iLocal_367 == 0)
					{
						Function_307(&iLocal_293);
						Function_109();
						iLocal_366 = 1;
					}
					AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				}
				if (iLocal_366 != 0 && iLocal_362 != 1)
				{
					if (iLocal_365 == 0)
					{
						if (iLocal_367 == 1)
						{
							if (!IS_ACTOR_ALIVE(&(iLocal_31[0])))
							{
								cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhHndShake") };
								if (Function_108(iLocal_73[0]))
								{
									Function_107();
									iLocal_31[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_265, &iLocal_405, StackVal) + Vector(Vector(-1.0f, -5.0f, -5.0f), Local_687, iLocal_73[0]), Function_107());
									Function_106(&Local_407, &(iLocal_31[0]), 1);
								}
							}
							iVar0 = 0;
							while (iVar0 < 5)
							{
								if (IS_ACTOR_VALID(&(iLocal_31[iVar0])))
								{
									CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[iVar0]));
									if (IS_MOVER_FROZEN(&(iLocal_31[iVar0])))
									{
										SET_MOVER_FROZEN(&(iLocal_31[iVar0]), 0);
									}
									AI_GOAL_LOOK_CLEAR(&(iLocal_31[iVar0]));
								}
								iVar0++;
							}
							if (iLocal_404 == Global_46838[1])
							{
								cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhPosObj") };
								bLocal_382 = CREATE_POINT_IN_LAYOUT(StackVal, &iLocal_405, &cLocal_265, Global_54078, Vector(0.0f, 0.0f, 0.0f));
								Function_104(&Local_407, &Global_54076, &bLocal_382, &(iLocal_31[0]));
								Function_103(&Local_407, 1);
							}
							else if (iLocal_404 == Global_46894[1])
							{
								cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhPosObj") };
								bLocal_382 = CREATE_POINT_IN_LAYOUT(StackVal, &iLocal_405, &cLocal_265, Global_54078, Vector(0.0f, 0.0f, 0.0f));
								Function_104(&Local_407, &Global_54076, &bLocal_382, &(iLocal_31[0]));
								Function_103(&Local_407, 1);
							}
							else
							{
								cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhPosObj") };
								bLocal_382 = CREATE_POINT_IN_LAYOUT(StackVal, &iLocal_405, &cLocal_265, Global_54078, Vector(0.0f, 0.0f, 0.0f));
								Function_104(&Local_407, &Global_54076, &bLocal_382, &(iLocal_31[0]));
								Function_103(&Local_407, 1);
							}
							Function_84(&Local_407, &iLocal_405, 1);
							iLocal_365 = 1;
						}
						else
						{
							iLocal_366 = 1;
							Function_307(&iLocal_293);
						}
					}
					if (iLocal_365 == 1)
					{
						if (Function_64(&Local_407) == 5)
						{
							Function_40(&Local_407);
							Function_109();
							Function_307(&iLocal_293);
							if (IS_ACTOR_VALID(&iLocal_71))
							{
								DESTROY_ACTOR(&iLocal_71);
							}
							iLocal_366 = 1;
						}
					}
				}
				else
				{
					if (Function_294(&iLocal_293, 5.0f))
					{
						if (IS_ACTOR_ALIVE(&iLocal_71))
						{
							Function_30();
						}
						Function_28(0);
						Function_27(12);
						SET_PLAYER_CONTROL(0, 1, 0, 0);
						RELEASE_LAYOUT_REF(&iLocal_405);
						TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
					}
					else
					{
						if (GET_TASK_STATUS(&(iLocal_31[0]), 19) == 4)
						{
							TASK_CLEAR(&(iLocal_31[0]));
							TASK_WANDER(&(iLocal_31[0]), 3212836864);
						}
						if (IS_ACTOR_ALIVE(&iLocal_71))
						{
							if (!UNK_0x7A207FFE(&iLocal_71))
							{
								Function_26();
							}
						}
					}
					Function_311(&Local_407, 0, 0);
				}
				if (StackVal && !Function_409(iLocal_366 != 1, 64))
				{
					Function_23();
					Function_408(&Global_39906 + 8, 64);
				}
				iLocal_261 = 0;
				break;
		}
		WAIT(iLocal_261);
	}
	if (iLocal_350 == 2)
	{
		if (Global_39906.f_40 != 10 || Global_39906.f_40 != 16)
		{
			PRINT_HELP_B("pm_bh_completed_all", 7,5f, 1, 0, 0, 1, 0, 0);
		}
	}
	Function_1();
	DESTROY_ITERATOR(&ScriptParam_0 + 8);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0xD3E / 3390
{
	bool bVar0;
	var uVar1;
	
	Function_23();
	REMOVE_OBJECT_ATTACHMENT(&uLocal_697);
	if (IS_OBJECT_VALID(&uLocal_342))
	{
		DESTROY_VOLUME(&uLocal_342);
	}
	if (IS_OBJECT_VALID(&uLocal_326))
	{
		DESTROY_VOLUME(&uLocal_326);
	}
	REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&uLocal_322, 0);
	if (IS_VOLUME_VALID(&uLocal_320))
	{
		DESTROY_VOLUME(&uLocal_320);
	}
	if (IS_OBJECTSET_VALID(&uLocal_681))
	{
		DESTROY_OBJECTSET(&uLocal_681);
	}
	if (IS_OBJECTSET_VALID(&uLocal_683))
	{
		DESTROY_OBJECTSET(&uLocal_683);
	}
	if (IS_OBJECTSET_VALID(&uLocal_685))
	{
		DESTROY_OBJECTSET(&uLocal_685);
	}
	Function_292(0);
	bVar0 = false;
	while (bVar0 < (bLocal_262 - 1))
	{
		if (IS_ACTOR_VALID(&(uLocal_45[bVar0])))
		{
			DEREFERENCE_ACTOR(&(uLocal_45[bVar0]));
		}
		if (IS_ACTOR_ALIVE(&(uLocal_45[bVar0])) && IS_ACTOR_VALID(&(uLocal_45[bVar0])))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&(uLocal_45[bVar0]))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&(uLocal_45[bVar0])));
			}
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(uLocal_45[bVar0])), "bountyhunter_blip");
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&(uLocal_45[bVar0])), "bhnt_state");
			if (StackVal && Function_409(bVar0 != 0, 256))
			{
				DESTROY_ACTOR(&iLocal_71);
			}
			else if (IS_ACTOR_ALIVE(&Global_54076))
			{
				RELEASE_ACTOR_AS_AMBIENT(&(uLocal_45[bVar0]));
			}
			else
			{
				RELEASE_ACTOR(&(uLocal_45[bVar0]));
			}
		}
		bVar0++;
	}
	if (IS_ACTORSET_VALID(&uLocal_699))
	{
		bVar0 = false;
		while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_699))
		{
			uVar1 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				DEREFERENCE_ACTOR(&uVar1);
				RELEASE_ACTOR(&uVar1);
			}
			bVar0++;
		}
		DESTROY_ACTORSET(&uLocal_699);
	}
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (IS_ACTOR_VALID(&(iLocal_31[bVar0])))
		{
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(iLocal_31[bVar0]), 0);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&(iLocal_31[bVar0]), 1);
			RELEASE_ACTOR(&(iLocal_31[bVar0]));
			DEREFERENCE_ACTOR(&(iLocal_31[bVar0]));
		}
		bVar0++;
	}
	if (Function_22())
	{
		Function_14();
	}
	Function_12(1);
	if (IS_OBJECT_VALID(&bLocal_380))
	{
		Function_184(&bLocal_380);
	}
	Function_9();
	Function_109();
	if (IS_LAYOUTREF_VALID(&iLocal_405))
	{
		DESTROY_LAYOUT(&iLocal_405);
	}
	Function_4();
	if (iLocal_351 == 0)
	{
		Function_412(0);
		Function_2(1);
		iLocal_351 = 1;
	}
	return;
}

void Function_2(int iParam0) //Position: 0xF7B / 3963
{
	Function_412(0);
	Function_433();
	Global_39906.f_12 = 4294967295;
	Global_39906.f_16 = 0;
	Global_39906.f_20 = 4294967295;
	Global_39906.f_24 = 4294967295;
	Global_39906.f_32 = 0;
	Global_39906.f_36 = 0;
	if (&iParam0 == 1)
	{
		Function_3(&Global_39906 + 8, 4096);
	}
	return;
}

void Function_3(int iParam0, int iParam1) //Position: 0xFBE / 4030
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_4() //Position: 0xFD4 / 4052
{
	Function_5(&iLocal_113);
	Function_5(&iLocal_235);
	return;
}

void Function_5(int iParam0) //Position: 0xFE4 / 4068
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_6(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_6(struct<2>[] Param0, int iParam1) //Position: 0x100C / 4108
{
	if (Function_8(&(Param0[iParam12]), 4))
	{
		if (Function_8(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_7(&(Param0[iParam12]), 1);
			Function_7(&(Param0[iParam12]), 2);
			Function_7(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_7(struct<13> Param0) //Position: 0x1157 / 4439
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_8(struct<13> Param0) //Position: 0x1174 / 4468
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_9() //Position: 0x1192 / 4498
{
	if (SQUAD_IS_VALID(&iLocal_804))
	{
		Function_11(&iLocal_804);
		Function_10(&iLocal_804);
		DESTROY_OBJECT(&iLocal_804);
	}
	return;
}

void Function_10(int iParam0) //Position: 0x11BA / 4538
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_11(int iParam0) //Position: 0x11EF / 4591
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_12(int iParam0) //Position: 0x123A / 4666
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_13())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_13() //Position: 0x127A / 4730
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_14() //Position: 0x129F / 4767
{
	Function_16();
	Function_15(10, 3);
	return;
}

void Function_15(int iParam0, int iParam1) //Position: 0x12AE / 4782
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_16() //Position: 0x13FB / 5115
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_21())
	{
		Function_20(10, 3);
	}
	else
	{
		Function_18();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_17(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_17());
	UI_POP("nDebugMenu");
	return;
}

var Function_17() //Position: 0x1446 / 5190
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_18() //Position: 0x145B / 5211
{
	Function_19(25, 2);
	return;
}

void Function_19(int iParam0, int iParam1) //Position: 0x1467 / 5223
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_20(int iParam0, int iParam1) //Position: 0x1693 / 5779
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_21() //Position: 0x17E0 / 6112
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_409(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_22() //Position: 0x1848 / 6216
{
	return Global_54085;
}

void Function_23() //Position: 0x1851 / 6225
{
	int iVar0;
	int iVar1;
	
	if (!Function_409(StackVal, 64))
	{
		Function_408(&Global_39906 + 8, 64);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		if (SQUAD_IS_VALID(&cLocal_344))
		{
			SQUAD_GOALS_CLEAR(&cLocal_344);
			DESTROY_OBJECT(&cLocal_344);
		}
		if (SQUAD_IS_VALID(&cLocal_348))
		{
			SQUAD_GOALS_CLEAR(&cLocal_348);
			DESTROY_OBJECT(&cLocal_348);
		}
		if (SQUAD_IS_VALID(&Local_346))
		{
			SQUAD_GOALS_CLEAR(&Local_346);
			DESTROY_OBJECT(&Local_346);
		}
		if (iLocal_352 == 1)
		{
			if (IS_ACTOR_VALID(&iLocal_71))
			{
				DESTROY_ACTOR(&iLocal_71);
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(&(iLocal_31[iVar0])))
			{
				Function_25(&Global_54076, &(iLocal_31[iVar0]), 1, 1);
				MEMORY_CLEAR_EVENTS(&(iLocal_31[iVar0]), 1);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(iLocal_31[iVar0]), 1);
				DEREFERENCE_ACTOR(&(iLocal_31[iVar0]));
				MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(&(iLocal_31[iVar0]));
				GIVE_WEAPON_TO_ACTOR(&(iLocal_31[iVar0]), 40, 0f, 1, 1);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[iVar0]));
				Function_24(&(iLocal_31[iVar0]));
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(iLocal_31[iVar0]), 1);
				SET_ACTOR_FACTION(&(iLocal_31[iVar0]), 7);
				TASK_CLEAR(&(iLocal_31[iVar0]));
				TASK_PRIORITY_SET(&(iLocal_31[iVar0]), 3);
				iVar1 = TASK_SEQUENCE_OPEN();
				if (iLocal_350 == 2)
				{
					TASK_DRAW_HOLSTER_WEAPON(0, 0);
				}
				TASK_WANDER(0, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&(iLocal_31[iVar0]), iVar1);
				TASK_SEQUENCE_RELEASE(iVar1, 1);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&(iLocal_31[iVar0]), 1);
				RELEASE_ACTOR(&(iLocal_31[iVar0]));
				if (iLocal_350 == 2)
				{
					MEMORY_CLEAR_ALL(&(iLocal_31[iVar0]));
					CLEAR_LAST_HIT(&(iLocal_31[iVar0]));
					ACTOR_HOLSTER_WEAPON(&(iLocal_31[iVar0]), 0);
					AI_IGNORE_ACTOR(&(iLocal_31[iVar0]));
				}
			}
			if (IS_VOLUME_VALID(&(uLocal_328[iVar0])))
			{
				DESTROY_VOLUME(&(uLocal_328[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

void Function_24(int iParam0) //Position: 0x1A09 / 6665
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_REMOVE(&iParam0, "nocrime");
	}
	return;
}

int Function_25(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1A3E / 6718
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_26() //Position: 0x1A9E / 6814
{
	SET_ACTOR_HEALTH(&iLocal_71, GET_ACTOR_MAX_HEALTH(&iLocal_71));
	AI_IGNORE_ACTOR(&iLocal_71);
	_SET_ACTOR_HEALTH_3(&iLocal_71, 5.0f);
	SET_ACTOR_KO_POINTS(&iLocal_71, 0.0f);
	return;
}

void Function_27(int iParam0) //Position: 0x1AC5 / 6853
{
	(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_28(int iParam0) //Position: 0x1AE2 / 6882
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_29(105)), 0);
	return;
}

int Function_29(bool bParam0) //Position: 0x1B05 / 6917
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_30() //Position: 0x1B1C / 6940
{
	SET_CRIPPLE_FLAG(&iLocal_71, 0);
	SET_ACTOR_HEALTH(&iLocal_71, GET_ACTOR_MAX_HEALTH(&iLocal_71));
	SET_ACTOR_KO_POINTS(&iLocal_71, GET_ACTOR_MAX_KO_POINTS(&iLocal_71));
	SET_ACTOR_UNKILLABLE(&iLocal_71, 0);
	Function_33(&iLocal_71, 1254, 4294967295, 4294967295, 0, 0, 0, 1);
	TASK_MELEE_ATTACK(&iLocal_71, &Global_54076, -1.0f);
	SET_ACTOR_FACTION(&iLocal_71, 32);
	AI_STOP_IGNORING_ACTOR(&iLocal_71);
	MEMORY_EVERYBODY_FORGET_ABOUT(&iLocal_71);
	MEMORY_CLEAR_ALL(&iLocal_71);
	MEMORY_CONSIDER_AS_ENEMY(&iLocal_71, &Global_54076);
	ADD_ACTORSET_MEMBER(&uLocal_699, &iLocal_71);
	SET_ACTOR_OVERHEALTH_MODE(&iLocal_71, false);
	if (GET_ACTOR_INCAPACITATED(&iLocal_71))
	{
		ACTOR_REPAIR_INCAPACITATION(&iLocal_71);
	}
	Function_31(&iLocal_71, 0, 0);
	return;
}

void Function_31(int iParam0, int iParam1, bool bParam2) //Position: 0x1BB0 / 7088
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	SET_ALLOW_EXECUTE(&iParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&iParam0);
	switch (&iParam1)
	{
		case 0x00000001:
			GET_POSITION(&iParam0, &Var0);
			GET_ACTOR_AXIS(&iParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Var0, 10.0f, &Var2, &Var4);
			Var2.f_4 = (StackVal + 0,05f);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_32(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_107();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_32(), Var2, Function_107());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&iParam0, &Var0);
			GET_ACTOR_AXIS(&iParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_32(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_107();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_32(), Var0, Function_107());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
	}
	if (!&bParam2)
	{
		if (!DECOR_CHECK_EXIST(&iParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(&iParam0, "WakeUp", 1);
		}
	}
	else if (!DECOR_CHECK_EXIST(&iParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&iParam0, "WakeUpFast", 1);
	}
	return;
}

var Function_32() //Position: 0x1D7C / 7548
{
	int iVar0;
	
	return &iVar0;
}

void Function_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x1D85 / 7557
{
	var uVar0;
	
	if (Function_39(&iParam0) && !Function_38(&iParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&iParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
		}
		if (!ADD_ZOMBIE_TO_ACTOR(&iParam0, &iParam2, &iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (&bParam6)
	{
		DEEQUIP_ACCESSORY(&iParam0, 0);
	}
	if (&bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
	}
	Function_36(&iParam0);
	DECOR_SET_BOOL(&iParam0, "Zombie", 1);
	Function_35(&iParam0);
	SET_ACTOR_ALLOW_DISARM(&iParam0, 0);
	SET_CRIPPLE_ENABLE(&iParam0, 0);
	SET_CRIPPLE_FLAG(&iParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&iParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(&uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &uVar0, 1);
	}
	if (&iParam1 <= 1204 && &iParam1 >= 1213)
	{
		DECOR_SET_BOOL(&iParam0, "FastZombie", 1);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&iParam0, "BruiserZombie", 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 12,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 0,5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&iParam0, "head");
	if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2020.0f, 1);
	}
	Function_34(&iParam0, &iParam4, &iParam5);
}

void Function_34(int iParam0, int iParam1, bool bParam2) //Position: 0x2022 / 8226
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&iParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&iParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_31(&iParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&iParam0);
			SET_ALLOW_EXECUTE(&iParam0, 0);
		}
	}
	return;
}

void Function_35(bool bParam0) //Position: 0x20DF / 8415
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

void Function_36(int iParam0) //Position: 0x2116 / 8470
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 6, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 14, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 15, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 17, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 27, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 36, 0,75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 42, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 54, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 55, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 56, -0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 57, -0,05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 58, -0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 59, 0,2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 61, 0,1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 50, -0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 51, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 52, 0,25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 8, 0,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(&iParam0, 0.0f);
	Function_37(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_37(var uParam0, bool bParam1) //Position: 0x24D4 / 9428
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		TOUGH_ARMOUR_SET_TUNING_HIT_DEDUCTION(&uParam0, iVar0, bParam1);
		iVar0++;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x24F7 / 9463
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_39(int iParam0) //Position: 0x253C / 9532
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_40(struct<1049> Param0) //Position: 0x255D / 9565
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
		{
			uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Param0 + 992);
			if (GET_OBJECT_TYPE(&uVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar2)) && GET_ACTOR_FROM_OBJECT(&uVar2) == &Global_54076)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(&uVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_409(Param0.f_1048, 512) && Function_409(Param0.f_1048, 256))
	{
		if (IS_OBJECT_VALID(&Param0 + 936))
		{
			DESTROY_OBJECT(&Param0 + 936);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 928));
		}
		if (IS_OBJECT_VALID(&Param0 + 944))
		{
			DESTROY_VOLUME(&Param0 + 944);
		}
		while (GET_OBJECTSET_SIZE(&Param0 + 992) >= 0)
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			if (IS_OBJECT_VALID(&uVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &Param0 + 992);
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar0)))
					{
						Function_63(GET_ACTOR_FROM_OBJECT(&uVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(&uVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(&uVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(&Param0 + 992);
		}
		if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
		{
			Function_63(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
		}
		*(&Param0 + 1000) = Vector(0.0f, 0.0f, 0.0f);
		Param0.f_1012 = 0;
		Function_44(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_43(1.0f);
		Function_42(&Param0, 5);
		if (Function_409(Param0.f_1048, 32768))
		{
			Function_41(256);
		}
		Function_408(&Param0 + 1048, 512);
		Function_3(&Param0 + 1048, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_41(int iParam0) //Position: 0x2751 / 10065
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_42(struct<985> Param0) //Position: 0x276E / 10094
{
	Param0.f_984 = iParam1;
	return;
}

void Function_43(bool bParam0) //Position: 0x277C / 10108
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

void Function_44(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x2799 / 10137
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_17();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_48(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_47();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_45(&uParam9, &uParam10);
}

void Function_45(var uParam0, bool bParam1) //Position: 0x2868 / 10344
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_46();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_46() //Position: 0x2937 / 10551
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_47() //Position: 0x29AF / 10671
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_48(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x29C4 / 10692
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
	Function_62(iParam0, TO_FLOAT(bParam1), 1);
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_50(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_49(iParam0);
	return 1;
}

void Function_49(bool bParam0) //Position: 0x2BEC / 11244
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

void Function_50(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2C8A / 11402
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_60(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_59(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_59(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_57(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_54(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_52(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_51(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_32(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_51(int iParam0) //Position: 0x32C8 / 13000
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_52(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x32D9 / 13017
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_53("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_53(char* cParam0) //Position: 0x33D0 / 13264
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_54(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x33EB / 13291
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_56(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_55(Function_56(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_55(int iParam0, int iParam1) //Position: 0x3452 / 13394
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_56(int iParam0, bool bParam1) //Position: 0x3464 / 13412
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_57(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3476 / 13430
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
	if (((Function_58(iParam0) != 19 || Function_58(iParam0) != 17) || Function_58(iParam0) != 10) || Function_58(iParam0) != 9)
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

int Function_58(int iParam0) //Position: 0x35AA / 13738
{
	return Global_55480[iParam016].f_96;
}

float Function_59(int iParam0) //Position: 0x35B9 / 13753
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_60(int iParam0) //Position: 0x35F2 / 13810
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_61(int iParam0) //Position: 0x362F / 13871
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

int Function_62(int iParam0, float fParam1, bool bParam2) //Position: 0x37C9 / 14281
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

void Function_63(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3A0D / 14861
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&bParam0))
		{
			FIRE_STOP_ON_ACTOR(&bParam0);
		}
		SET_ACTOR_INVULNERABILITY(&bParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(&bParam0);
		CLEAR_ACTOR_MAX_SPEED(&bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bParam0);
		RESET_ACTOR_GAITS(&bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&bParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&bParam0);
		SET_ACTOR_INVULNERABILITY(&bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&bParam0, 0);
	}
	return;
}

int Function_64(struct<1017> Param0) //Position: 0x3ABD / 15037
{
	int iVar0;
	char* cVar1[64];
	bool bVar29;
	
	if (iLocal_404 == Global_46838[1])
	{
		bVar12 = true;
	}
	else
	{
		bVar12 = false;
	}
	switch (Param0.f_984)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (Function_267(StackVal, *(&Param0 + 1000)))
			{
				GET_POSITION(&Global_54076, &Param0 + 1000);
			}
			if (!Function_267(StackVal, *(&Param0 + 1000)))
			{
				STREAMING_LOAD_BOUNDS(*(&Param0 + 1000), 10.0f, 0);
			}
			switch (Param0.f_988)
			{
				case 0x00000001:
					if (IS_ACTOR_PLAYER(&Global_54076))
					{
						SET_PLAYER_CONTROL(0, 0, 0, 0);
					}
					SQUAD_GOALS_CLEAR(&Local_346);
					Function_83(&Local_346);
					Function_81(&Global_54076, 0);
					REQUEST_ACTION_TREE("custom/handoff");
					REQUEST_ANIM_SET("handoff", 0);
					if (IS_PLAYER_DEADEYE(0))
					{
						CANCEL_DEADEYE();
						CANCEL_TIME_WARP(1);
					}
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&Global_54076), "procStop", 1);
					if (Param0.f_1016 == 1)
					{
						Function_42(&Param0, 4);
						Function_307(&Param0 + 952);
					}
					else
					{
						Function_42(&Param0, 3);
					}
					break;
				
				default:
					Function_42(&Param0, 4);
					Function_307(&Param0 + 952);
					break;
			}
			break;
		
		case 0x00000003:
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procStop") == 1)
			{
				GET_ACTOR_VELOCITY(&Global_54076, &Var9);
				if (VMAG(Var9) > 1.0f)
				{
					if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj", GET_MOUNT(&Global_54076));
						TASK_CLEAR(&Global_54076);
						TASK_DISMOUNT(&Global_54076, 1);
						TASK_PRIORITY_SET(&Global_54076, true);
					}
					else if (IS_ACTOR_VALID(GET_VEHICLE(&Global_54076)))
					{
						DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj", GET_VEHICLE(&Global_54076));
						Function_72(GET_VEHICLE(&Global_54076), 0, 0, 2);
						TASK_CLEAR(&Global_54076);
						TASK_VEHICLE_LEAVE(&Global_54076);
						TASK_PRIORITY_SET(&Global_54076, true);
					}
					DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
				}
			}
			else if (!(((GET_TASK_STATUS(&Global_54076, 12) != 1 || GET_TASK_STATUS(&Global_54076, 12) != 3) || GET_TASK_STATUS(&Global_54076, 55) != 1) || GET_TASK_STATUS(&Global_54076, 55) != 3))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))))
				{
					START_VEHICLE(GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj")));
				}
				cVar1 = Function_71(&Param0, 1);
				if (IS_ACTOR_VALID(&cVar1))
				{
					TASK_CLEAR(&Global_54076);
					TASK_GO_NEAR_ACTOR(&Global_54076, &cVar1, 2,5f, 1);
					TASK_PRIORITY_SET(&Global_54076, true);
				}
				else
				{
					LOG_ERROR("Cutscene could not find actor for player to greet");
				}
				Function_42(&Param0, 4);
				Function_307(&Param0 + 952);
			}
			break;
		
		case 0x00000004:
			if (IS_OBJECT_VALID(&Param0 + 936))
			{
				switch (Param0.f_988)
				{
					case 0x00000001:
						switch (Param0.f_1012)
						{
							case 0x00000000:
								if (HUD_IS_FADED())
								{
									if (HAS_ANIM_SET_LOADED("handoff") || Function_294(&Param0 + 952, 1.0f))
									{
										if (bVar12)
										{
											Var3 = Vector(-2653,531f, 67,263f, 3425,407f);
											TELEPORT_ACTOR(&Global_54076, &Var3, 1, 1, 1);
											Var3 = Vector(-2654,323f, 67,263f, 3426,423f);
											TELEPORT_ACTOR(&cVar2, &Var3, 1, 1, 1);
										}
										else
										{
											Var3 = Vector(-707,851f, 63,247f, 3285,772f);
											TELEPORT_ACTOR(&Global_54076, &Var3, 1, 1, 1);
											Var3 = Vector(-706,93f, 63,25f, 3284,69f);
											TELEPORT_ACTOR(&cVar2, &Var3, 1, 1, 1);
										}
										Function_67(&cVar2, &Global_54076);
										Function_67(&Global_54076, &cVar2);
										Function_307(&Param0 + 952);
										Param0.f_1012++;
									}
								}
								break;
							
							case 0x00000001:
								iVar0 = Function_71(&Param0, 1);
								if (IS_ACTOR_VALID(&iVar0))
								{
									Function_66(&iVar0, &Var3);
								}
								else
								{
									Var3 = Vector(0.0f, 0.0f, 0.0f);
								}
								if ((Function_294(&Param0 + 952, 0,5f) || Param0.f_1016 != 1) || VDIST(Global_54078, Var3) > 3.0f)
								{
									if (IS_OBJECT_VALID(&Param0 + 944))
									{
										DESTROY_VOLUME(&Param0 + 944);
									}
									if (bVar12)
									{
										Var3 = Vector(-2655,584f, 67,263f, 3422,558f);
									}
									else
									{
										Var3 = Vector(-716,264f, 63,247f, 3292,297f);
									}
									cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhCutsceneVol") };
									*(&Param0 + 944) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 32, &cLocal_265, 4,203895E-45f, Var3, Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
									if (bVar12)
									{
										Var3 = Vector(-2655,584f, 67,263f, 3422,558f);
										Var7 = Vector(0.0f, 334,845f, 0.0f);
									}
									else
									{
										Var3 = Vector(-707,02f, 63,247f, 3284,883f);
										Var7 = Vector(0.0f, 72,427f, 0.0f);
									}
									TELEPORT_ACTOR_WITH_HEADING(StackVal, &iVar0, Var3, 1, 1, 1);
									PLAY_CUTSCENEOBJECT(&Param0 + 936, false, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0);
									ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
									ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0 + 944);
									CLEAR_AMBIENT_OBJECTS_VOLUME(&Param0 + 944, 15);
									DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&Param0 + 944);
									if (IS_ACTORSET_VALID(&uLocal_699))
									{
										Function_65(&uLocal_699);
									}
									if (bVar12)
									{
										Var3 = Vector(-2655,584f, 67,263f, 3422,558f);
										Var7 = Vector(0.0f, 334,845f, 0.0f);
									}
									else
									{
										Var3 = Vector(-708,121f, 63,247f, 3286,062f);
										Var7 = Vector(0.0f, 72,427f, 0.0f);
									}
									*(&Param0 + 928) = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT(&Param0 + 32, "handoffGringo", "$/content/scripting/gringo/simplegringo/handoff", Var3, Var7));
									TASK_GO_NEAR_COORD(&Global_54076, &Var3, 3.0f, 1);
									Function_25(&iVar0, Function_71(&Param0, 0), 0, 1);
									iVar11 = 0;
									while (iVar11 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
									{
										iVar0 = Function_71(&Param0, iVar11);
										if (IS_ACTOR_VALID(&iVar0))
										{
											if (!IS_ACTOR_PLAYER(&iVar0))
											{
												SET_ACTOR_UPDATE_PRIORITY(&iVar0, false);
												TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
											}
											switch (iVar11)
											{
												case 0x00000000:
													if (bVar12)
													{
														Var3 = Vector(-2656,256f, 67,797f, 3423,427f);
														Var7 = Vector(0.0f, 234,172f, 0.0f);
													}
													else
													{
														Var3 = Vector(-704,415f, 63,247f, 3286,654f);
														Var7 = Vector(0.0f, 200,189f, 0.0f);
													}
													CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar0);
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &iVar0, Var3, 1, 0, 1);
													Function_63(&iVar0, 1, 1);
													MEMORY_CLEAR_EVENTS(&iVar0, 0);
													TASK_CLEAR(&iVar0);
													if (bVar12)
													{
														Var3 = Vector(-2668,377f, 67,956f, 3436,608f);
														Var7 = Vector(0.0f, 346.0f, 0.0f);
														uVar5 = Vector(-2642,666f, 68,36f, 3412,139f);
													}
													else
													{
														Var3 = Vector(-703,092f, 63,247f, 3299,374f);
														Var7 = Vector(0.0f, 56,578f, 0.0f);
														uVar5 = Vector(-728,42f, 64,669f, 3281,75f);
													}
													Function_63(&iVar0, 1, 1);
													SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar0, 1);
													AI_GOAL_SHOOT_AT_COORD(&iVar0, &uVar5);
													TASK_GO_TO_COORD_AND_STAY(StackVal, &iVar0, &Var3, 1);
													TASK_PRIORITY_SET(&iVar0, true);
													DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
													break;
												
												case 0x00000001:
													Function_63(&iVar0, 1, 1);
													SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar0, 1);
													CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar0);
													MEMORY_CONSIDER_AS(&iVar0, &Global_54076, false);
													ACTOR_HOLSTER_WEAPON(&iVar0, 0);
													TASK_FACE_ACTOR(&iVar0, &Global_54076, 1, 3212836864);
													TASK_PRIORITY_SET(&iVar0, true);
													DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
													break;
												
												case 0x00000002:
													DESTROY_ACTOR(&iVar0);
													break;
												
												case 0x00000003:
													DESTROY_ACTOR(&iVar0);
													break;
												
												case 0x00000004:
													DESTROY_ACTOR(&iVar0);
													break;
												
												case 0x00000005:
													DESTROY_ACTOR(&iVar0);
													break;
												
												case 0x00000006:
													DESTROY_ACTOR(&iVar0);
													break;
												
												default:
													LOG_ERROR("Unknown actor index for PROCMISSION_CUTSCENE_TYPE_BOUNTY_");
													break;
												}
										}
										iVar11++;
									}
									if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
									{
										iVar0 = GET_ACTOR_FROM_OBJECT(DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"));
										if (IS_ACTOR_VALID(&iVar0))
										{
											DESTROY_ACTOR(&iVar0);
										}
									}
									if (IS_ACTOR_VALID(GET_MOST_RECENT_MOUNT(&Global_54076)))
									{
										DESTROY_ACTOR(GET_MOST_RECENT_MOUNT(&Global_54076));
									}
									if (IS_ACTOR_VALID(&Global_21369 + 72))
									{
										DESTROY_ACTOR(&Global_21369 + 72);
									}
									cVar1 = Function_71(&Param0, 0);
									if (!IS_ACTOR_VALID(&cVar1))
									{
										cVar1 = &Global_54076;
									}
									cVar2 = Function_71(&Param0, 1);
									Function_63(&cVar2, 1, 1);
									if (bVar12)
									{
										Var3 = Vector(-2653,531f, 67,263f, 3425,407f);
										TELEPORT_ACTOR(&Global_54076, &Var3, 1, 1, 1);
										Var3 = Vector(-2654,323f, 67,263f, 3426,423f);
										TELEPORT_ACTOR(&cVar2, &Var3, 1, 1, 1);
									}
									else
									{
										Var3 = Vector(-707,851f, 63,247f, 3285,772f);
										TELEPORT_ACTOR(&Global_54076, &Var3, 1, 1, 1);
										Var3 = Vector(-706,93f, 63,25f, 3284,69f);
										TELEPORT_ACTOR(&cVar2, &Var3, 1, 1, 1);
									}
									Function_67(&cVar2, &Global_54076);
									Function_67(&Global_54076, &cVar2);
									TASK_CLEAR(&Global_54076);
									RESET_ANIM_SET_FOR_ACTOR(&cVar2, 0);
									RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
									SET_ANIM_SET_FOR_ACTOR(&cVar2, "handoff", 0);
									SET_LINKED_ANIM_TARGET(&cVar2, &Global_54076);
									SET_ACTION_NODE_FOR_ACTOR(&cVar2, "handoff");
									Function_307(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000002:
								if (Function_294(&Param0 + 952, 0,01f))
								{
									Function_43(1.0f);
									Function_307(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000003:
								if (!HUD_IS_FADING() && !HUD_IS_FADED())
								{
									cVar1 = Function_71(&Param0, 0);
									if (!IS_ACTOR_VALID(&cVar1))
									{
										cVar1 = &Global_54076;
									}
									cVar2 = Function_71(&Param0, 1);
									if (bVar12)
									{
										strcpy(&cVar13, "MISSING_PERSON_REWARD_P_", 64);
										if (Global_39906.f_40 <= 10)
										{
											stradd(&cVar13, "0", 64);
										}
										stradd(&cVar13, INT_TO_STRING(Global_39906.f_40), 64);
									}
									else
									{
										strcpy(&cVar13, "MISSING_PERSON_REWARD_P_0", 64);
										bVar29 = (Global_39906.f_40 - 10);
										stradd(&cVar13, INT_TO_STRING(bVar29), 64);
									}
									PRINTSTRING(&cVar13);
									PRINTSTRING("******");
									PRINTNL();
									SAY_SINGLE_LINE_STRING_WITH_REPLY_OVER_PAIN(&cVar2, &cVar13, &Global_54076, "PLAYER_RESPOND_TO_THANKS_Z_M", 1, 1, 1, 0);
									Function_307(&Param0 + 952);
									Param0.f_1012++;
								}
								break;
							
							case 0x00000004:
								if (Function_294(&Param0 + 952, 7.0f))
								{
									cVar2 = Function_71(&Param0, 1);
									REMOVE_ACTION_TREE("custom/handoff");
									REMOVE_ANIM_SET("handoff");
									CLEAR_LINKED_ANIM_TARGET(&Global_54076);
									RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
									RESET_ANIM_SET_FOR_ACTOR(&cVar2, 0);
									Function_42(&Param0, 5);
									iVar11 = 0;
									while (iVar11 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
									{
										iVar0 = Function_71(&Param0, iVar11);
										if (IS_ACTOR_VALID(&iVar0))
										{
											MEMORY_CLEAR_EVENTS(&iVar0, 0);
											Function_63(&iVar0, 0, 1);
										}
										Function_63(&iVar0, 0, 1);
										iVar11++;
									}
									Param0.f_1012++;
								}
								break;
							
							default:
								break;
						}
						break;
					
					case 0x00000000:
					default:
						LOG_ERROR("Undefined cutscene type");
						break;
				}
			}
			else
			{
				Function_43(1.0f);
				REMOVE_ACTION_TREE("custom/handoff");
				REMOVE_ANIM_SET("handoff");
				Function_42(&Param0, 5);
			}
			break;
		
		case 0x00000005:
			break;
		
		default:
			LOG_ERROR("Unhandled cutscene case");
			break;
	}
	return Param0.f_984;
}

void Function_65(int iParam0) //Position: 0x4760 / 18272
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				DESTROY_ACTOR(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

void Function_66(var uParam0, int iParam1) //Position: 0x47AB / 18347
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_67(int iParam0, int iParam1) //Position: 0x47BA / 18362
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_68(StackVal, &iParam0, Var0);
	return;
}

void Function_68(int iParam0, struct<2> Param1) //Position: 0x47D6 / 18390
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_69(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_69(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_69(int iParam0, struct<2> Param1) //Position: 0x4811 / 18449
{
	struct<2> Var0;
	
	Function_70(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_70(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_70(int iParam0) //Position: 0x4892 / 18578
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

int Function_71(int iParam0, int iParam1) //Position: 0x48A4 / 18596
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar2 = "";
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&iParam0 + 992) - 1))
	{
		iVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0 + 992);
		if (IS_OBJECT_VALID(&iVar1))
		{
			if (GET_OBJECT_TYPE(&iVar1) == 15)
			{
				uVar3 = GET_ACTOR_FROM_OBJECT(&iVar1);
				if (DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&uVar3), "procCutsceneIdx") == iParam1)
				{
					iVar2 = &uVar3;
					bVar0 = GET_OBJECTSET_SIZE(&iParam0 + 992) + 1;
				}
			}
		}
		bVar0++;
	}
	return &iVar2;
}

int Function_72(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x492F / 18735
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!IS_ACTOR_VEHICLE(&uParam0))
		{
			SQUAD_LEAVE(&uParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&uParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &uParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_73(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_73(&uParam0, &iParam1, &uParam2, &uParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int Function_73(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4) //Position: 0x4A1D / 18973
{
	char* cVar0[32];
	
	Function_80();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_79(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_78(&uParam0, 0);
	Function_77(&uParam0, iParam1);
	Function_76(&uParam0, &uParam2);
	Function_75(&uParam0, uParam3);
	if (Function_74(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_74(int iParam0) //Position: 0x4C89 / 19593
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_75(var uParam0, bool bParam1) //Position: 0x4CAD / 19629
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_76(var uParam0, int iParam1) //Position: 0x4CD1 / 19665
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_77(var uParam0, bool bParam1) //Position: 0x4CF7 / 19703
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_78(var uParam0, bool bParam1) //Position: 0x4D1E / 19742
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_79(bool bParam0) //Position: 0x4D42 / 19778
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_80() //Position: 0x4D61 / 19809
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

void Function_81(var uParam0, bool bParam1) //Position: 0x4DB0 / 19888
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_RIDING(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			RESET_ACTOR_GAITS(&uVar0, 1);
		}
	}
	else if (IS_ACTOR_INSIDE_VEHICLE(&uParam0))
	{
		uVar1 = GET_VEHICLE(&uParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			STOP_VEHICLE(&uVar1);
		}
	}
	else if (!&bParam1 || Function_82(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_82(var uParam0, bool bParam1) //Position: 0x4E1A / 19994
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_83(int iParam0) //Position: 0x4E3B / 20027
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

int Function_84(struct<989> Param0) //Position: 0x4E8A / 20106
{
	var uVar0;
	var uVar1;
	
	uVar1 = &uVar1;
	switch (Param0.f_988)
	{
		case 0x00000001:
			if (!IS_OBJECTSET_VALID(&Param0 + 992))
			{
				return 0;
			}
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, &Param0 + 992);
			if (!IS_OBJECT_VALID(&uVar0))
			{
			}
			REFERENCE_OBJECT(&uVar0);
			Function_63(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
			if (iLocal_404 == Global_46838[1])
			{
				(&Param0 + 936) = Function_97(&uParam1, 0, 1, 1, 0);
			}
			else
			{
				*(&Param0 + 936) = Function_91(&uParam1, 0, 1, 1, 0);
			}
			break;
	}
	Function_42(&Param0, 1);
	if (&iParam2 == 1)
	{
		Function_408(&Param0 + 1048, 32768);
		Function_90(256);
	}
	Function_85(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_408(&Param0 + 1048, 256);
	return 1;
}

void Function_85(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13) //Position: 0x4F73 / 20339
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uParam1 = &uParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_47();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_17();
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_WEAPON_IN_HAND(&iVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&iVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&iVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&iVar1, 0);
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, 1);
			AI_IGNORE_ACTOR(&iVar1);
		}
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
		if (&bParam8)
		{
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_70(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_32(), 2,802597E-45f, Function_70(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_48(19, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(0.0f);
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(1);
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(0);
	}
	AI_GLOBAL_CLEAR_ALL_DANGER();
	if (uParam10 && !Function_89())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_88()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_88()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", 1);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, 1);
		SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&Global_54076));
		if (UI_ISACTIVE("BinocularsUI"))
		{
			UI_POP("BinocularsUI");
		}
	}
	ACTOR_DATA_GRAVITY_LIMIT(1);
	ENABLE_PIP(0, 0, 1);
	Global_99146 = 1;
	Global_99168 = GET_THIS_SCRIPT_ID();
	Global_99170 = "";
	if (IS_VOLUME_VALID(&uVar0))
	{
		DESTROY_VOLUME(&uVar0);
	}
	if (Function_87(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_86(0x4000000);
	}
	if (Function_87(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_86(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&uParam12);
	SET_USES_QUAD_IK_FIX(&uParam13);
}

void Function_86(bool bParam0) //Position: 0x5225 / 21029
{
	bool bVar0;
	
	if (Function_409(bParam0, 1) && Function_409(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_87(int iParam0) //Position: 0x5259 / 21081
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_88() //Position: 0x5275 / 21109
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

bool Function_89() //Position: 0x5303 / 21251
{
	if (Function_409(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_90(int iParam0) //Position: 0x531E / 21278
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

var Function_91(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x5331 / 21297
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_32(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "missingPersonReturnElPresidio", 4, 1);
	}
	Function_92(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_92(int iParam0) //Position: 0x53C8 / 21448
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_96(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_95(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_94(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_93(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 2, 3, 25.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&iParam0, 3, 1);
	return;
}

void Function_93(int iParam0) //Position: 0x5431 / 21553
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-710,2491f, 64,69716f, 3283,914f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,049189f, -2,033144f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_94(int iParam0) //Position: 0x54E8 / 21736
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 26.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-709,6307f, 64,69374f, 3283,188f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,044305f, -2,267533f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 50.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_95(int iParam0) //Position: 0x559F / 21919
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-724,7874f, 65,17257f, 3285,026f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,025612f, -2,264807f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_96(int iParam0) //Position: 0x5656 / 22102
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,5f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-725,3794f, 68,59247f, 3284,409f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,011136f, -2,267333f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 45.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0,5f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

var Function_97(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x570D / 22285
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_32(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "missingPersonReturnFortMercer", 4, 1);
	}
	Function_98(&uVar0);
	if (uParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam3)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam3);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_98(int iParam0) //Position: 0x57A4 / 22436
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_102(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_101(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_100(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_99(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 2, 3, 25.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&iParam0, 3, 1);
	return;
}

void Function_99(int iParam0) //Position: 0x580D / 22541
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2652,428f, 68,54108f, 3428,384f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,027235f, 0,584554f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_100(int iParam0) //Position: 0x58C0 / 22720
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2651,387f, 68,55533f, 3427,366f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,031002f, 1,122704f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_101(int iParam0) //Position: 0x5973 / 22899
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2646,727f, 68,98794f, 3412,211f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,050896f, 2,540627f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_102(int iParam0) //Position: 0x5A26 / 23078
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2650,684f, 72,57206f, 3412,697f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,065498f, -2,605389f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FIXED_DISTANCE(&iParam0, 25.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&iParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&iParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&iParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&iParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&iParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&iParam0, 16.0f);
	return;
}

void Function_103(struct<989> Param0) //Position: 0x5AD9 / 23257
{
	Param0.f_988 = iParam1;
	return;
}

int Function_104(bool bParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x5AE7 / 23271
{
	struct<8> Var0;
	
	Function_105(&bParam0);
	if (!IS_OBJECTSET_VALID(&bParam0 + 992))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("cutscTargets") };
		(&bParam0 + 992) = CREATE_OBJECTSET_IN_LAYOUT(&Var0, &bParam0 + 32, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam1, &bParam0 + 992);
	}
	if (IS_OBJECT_VALID(&bParam2))
	{
		ADD_OBJECT_TO_OBJECTSET(&bParam2, &bParam0 + 992);
	}
	if (IS_OBJECT_VALID(&uParam3))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam3, &bParam0 + 992);
	}
	return 1;
}

void Function_105(int iParam0) //Position: 0x5B7D / 23421
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&Var0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_106(bool bParam0, var uParam1, bool bParam2) //Position: 0x5BF8 / 23544
{
	struct<8> Var0;
	
	Function_105(&bParam0);
	if (!IS_OBJECTSET_VALID(&bParam0 + 992))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("cutscTargets") };
		*(&bParam0 + 992) = CREATE_OBJECTSET_IN_LAYOUT(&Var0, &bParam0 + 32, 4294967295, 0);
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam1, &bParam0 + 992);
		DECOR_SET_INT(&uParam1, "procCutsceneIdx", bParam2);
	}
	else
	{
		LOG_ERROR("PROCMISSION_CUTSCENE_ADD_TARGET - Invalid target passed in");
	}
	return;
}

struct<8> Function_107() //Position: 0x5CB2 / 23730
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_108(int iParam0) //Position: 0x5CBC / 23740
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_109() //Position: 0x5CD3 / 23763
{
	int iVar0;
	var uVar1;
	
	if (iLocal_363 == 1)
	{
		return;
	}
	Function_182();
	Function_292(0);
	Function_181(72, 1);
	Function_155();
	iVar0 = 0;
	while (iVar0 < (bLocal_262 - 1))
	{
		if (IS_ACTOR_VALID(&(uLocal_45[iVar0])))
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_45[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_350 == 2)
	{
		uVar1 = GET_MOST_RECENT_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&uVar1))
		{
			DESTROY_ACTOR(&uVar1);
		}
		Function_154(0);
		if (iLocal_351 == 0)
		{
			Function_412(0);
			Function_2(1);
			iLocal_351 = 1;
		}
		Function_420(&Local_407, 2);
		if ((*&Global_40060 + 32)[0] >= 0)
		{
			(*&Global_40060 + 32)[0] = 0;
			Function_153("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
		else if ((*&Global_40060 + 32)[1] >= 0)
		{
			(*&Global_40060 + 32)[1] = 0;
			Function_153("community_complete", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	else if (iLocal_350 == 3)
	{
		if (IS_OBJECT_VALID(&uLocal_400))
		{
			DESTROY_OBJECT(&uLocal_400);
		}
		if (iLocal_351 == 0)
		{
			Function_412(0);
			Function_2(1);
			iLocal_351 = 1;
		}
		Function_420(&Local_407, 3);
		if (iLocal_359 == 1)
		{
			Function_149(0, 0, 1);
			Function_149(1, 0, 1);
		}
		else
		{
			Function_149(0, 1, 1);
			Function_149(1, 1, 1);
		}
	}
	else
	{
		iLocal_350 = 4;
		Function_420(&Local_407, iLocal_350);
		Function_149(0, 1, 1);
		Function_149(1, 1, 1);
	}
	Function_146();
	CLEAR_JOURNAL_ENTRY(Global_39906.f_36);
	APPEND_JOURNAL_ENTRY(Global_39906.f_36, 1);
	Function_145(&Local_407, 1);
	Function_110(&Local_407);
	Function_292(0);
	iLocal_363 = 1;
	return;
}

void Function_110(struct<1093> Param0) //Position: 0x5E6A / 24170
{
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj");
	}
	if (Param0.f_984 == 5)
	{
		if (Function_409(Param0.f_1048, 32768))
		{
			Function_41(256);
		}
	}
	Function_144();
	Function_12(1);
	if (Function_409(Param0.f_1048, 32))
	{
		if (Function_142(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_127(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_124(Param0.f_1092);
					break;
				
				default:
					Function_116(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_111(&Param0, 0);
	}
	if (IS_VOLUME_VALID(&Param0 + 944))
	{
		DESTROY_VOLUME(&Param0 + 944);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		DESTROY_OBJECTSET(&Param0 + 992);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 32))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0 + 32);
		DESTROY_LAYOUT(&Param0 + 32);
	}
	if (Function_409(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_409(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_111(int iParam0, bool bParam1) //Position: 0x5FEA / 24554
{
	if (SQUAD_IS_VALID(&iParam0 + 1024))
	{
		Function_10(&iParam0 + 1024);
		Function_114(&iParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_113(&iParam0 + 1024);
			Function_10(&iParam0 + 1024);
			Function_112(&iParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_114(&iParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&iParam0 + 1024);
		DESTROY_OBJECT(&iParam0 + 1024);
	}
	return;
}

void Function_112(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0x6061 / 24673
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_113(int iParam0) //Position: 0x60DA / 24794
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_114(var uParam0, bool bParam1, bool bParam2) //Position: 0x6112 / 24850
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_115(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
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

bool Function_115(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x619B / 24987
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_116(int iParam0) //Position: 0x61BB / 25019
{
	int iVar0;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	iVar0 = Function_121(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_117("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_117(var uParam0, int iParam1) //Position: 0x620E / 25102
{
	struct<4> Var0;
	
	if (!Function_142(iParam1))
	{
		return;
	}
	switch (Function_121(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_118(Function_119(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_121(iParam1), Function_119(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_121(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_118(int iParam0) //Position: 0x6338 / 25400
{
	char* cVar0[16];
	
	if (!Function_89())
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

int Function_119(int iParam0) //Position: 0x6372 / 25458
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_120(int iParam0) //Position: 0x6392 / 25490
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_121(int iParam0) //Position: 0x63A9 / 25513
{
	if (!Function_120(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_122() //Position: 0x63C4 / 25540
{
	int iVar0;
	int iVar1;
	char* cVar2[64];
	int iVar18;
	int iVar19;
	int iVar20;
	
	iVar0 = 1;
	iVar1 = 0;
	if (!Global_47151[49])
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= Global_26088)
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
			straddi(&cVar2, Global_26088[iVar18][iVar0], 64);
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 1;
	iVar0 = 0;
	while (iVar0 <= Global_21684)
	{
		if (!Global_21684[iVar07] != 0)
		{
			Function_123(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_123(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x660B / 26123
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_124(int iParam0) //Position: 0x6637 / 26167
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_142(iParam0))
	{
		return;
	}
	iVar0 = Function_121(iParam0);
	if (StackVal == 2)
	{
		Function_117("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_125(int iParam0) //Position: 0x66DD / 26333
{
	char* cVar0[16];
	
	if (!Function_89())
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

struct<24> Function_126(char* cParam0) //Position: 0x671C / 26396
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

void Function_127(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x6972 / 26994
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	bVar0 = Function_121(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_141())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_119(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		if (Function_141())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_134();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_141())
	{
		Function_132();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_117("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_129(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
						switch (Function_119(iParam0))
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
			Function_387(1);
			Function_386(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_128(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_128(int iParam0, struct<41> Param1) //Position: 0x6BD0 / 27600
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_129(int iParam0) //Position: 0x6C0E / 27662
{
	int iVar0;
	int iVar1;
	
	if (!Function_120(iParam0))
	{
		return;
	}
	switch (Function_121(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_119(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_48(12, 1, 0, 0);
				Function_131(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_48(13, 1, 0, 0);
				Function_131(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_48(14, 1, 0, 0);
				Function_131(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_48(15, 1, 0, 0);
				Function_131(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_48(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_119(iParam0))
			{
				case 0x00000000:
					if (Function_130(iParam0) == 1)
					{
						iVar0 = Function_419(iParam0);
						if (Function_428(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_131(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_131(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_131(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_131(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_131(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_131(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_131(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_131(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_131(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_131(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_131(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_131(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_131(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_131(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_131(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_131(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_131(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_131(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_131(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_131(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_48(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_48(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_48(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_419(iParam0) == 0)
			{
				if (Function_130(iParam0) == 1)
				{
					Function_48(458, 1, 0, 0);
					iVar0 = Function_119(iParam0);
					if (Function_428(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_131(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_131(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_131(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_131(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_131(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_131(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_131(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_131(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_130(iParam0) == 1)
			{
				Function_48(400, 1, 0, 0);
			}
			switch (Function_119(iParam0))
			{
				case 0x00000001:
					Function_48(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_131(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_131(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_131(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_48(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_131(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_131(6, 9);
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

int Function_130(int iParam0) //Position: 0x70EA / 28906
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_131(int iParam0, int iParam1) //Position: 0x7104 / 28932
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

void Function_132() //Position: 0x716E / 29038
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_133(0));
	PLAYSTAT_INT("HC_FAME", Function_133(3));
	PLAYSTAT_INT("HC_HONOR", Function_133(1));
	return;
}

int Function_133(bool bParam0) //Position: 0x72D0 / 29392
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

void Function_134() //Position: 0x7311 / 29457
{
	int iVar0;
	int iVar1;
	
	if (!Function_140(Global_10966))
	{
		return;
	}
	iVar0 = Function_133(24);
	iVar1 = Function_139(Global_10966);
	if (!Function_140(iVar0) && Function_138(iVar1) < 0)
	{
		Function_137(24, Global_10966, 0);
		Function_135(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_138(Function_139(iVar0)))
	{
		Function_137(24, Global_10966, 0);
		Function_135(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_135(int iParam0, char* cParam1) //Position: 0x7391 / 29585
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_136(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_136(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x76E8 / 30440
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_137(int iParam0, bool bParam1, bool bParam2) //Position: 0x7770 / 30576
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_62(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_61(iParam0);
	if (&bParam2)
	{
		Function_50(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_138(int iParam0) //Position: 0x7A0C / 31244
{
	if (!Function_142(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_139(int iParam0) //Position: 0x7A26 / 31270
{
	if (!Function_140(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_140(int iParam0) //Position: 0x7A40 / 31296
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_141() //Position: 0x7A56 / 31318
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_142(int iParam0) //Position: 0x7A81 / 31361
{
	if (!Function_120(iParam0))
	{
		return 0;
	}
	if (!Function_143(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_143(int iParam0) //Position: 0x7AA5 / 31397
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_144() //Position: 0x7ABA / 31418
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_145(int iParam0, int iParam1) //Position: 0x7AD0 / 31440
{
	if (iParam1 == 1)
	{
		Function_408(&iParam0 + 1048, 32);
	}
	else
	{
		Function_3(&iParam0 + 1048, 32);
	}
	return;
}

void Function_146() //Position: 0x7AF5 / 31477
{
	int iVar0;
	
	Global_41176 = Function_147(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_147(int iParam0) //Position: 0x7B43 / 31555
{
	if (!Function_148(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7B5B / 31579
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_149(int iParam0, bool bParam1, bool bParam2) //Position: 0x7B70 / 31600
{
	if ((*&Global_40060 + 32)[iParam0] >= 0)
	{
		Function_152(iParam0, (*&Global_40060 + 32)[iParam0]);
		(*&Global_40060 + 32)[iParam0] = 0;
		if (bParam2)
		{
			Function_150(iParam0, 0, 0, Function_29(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(&Global_54076))
			{
				Function_153("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x7BDA / 31706
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_151(&Global_39922 + 148[iParam0]))
	{
		(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_151(int iParam0) //Position: 0x7C2A / 31786
{
	return (((GET_DAY(&iParam0) != 0 && GET_HOUR(&iParam0) != 0) && GET_MINUTE(&iParam0) != 0) && GET_SECOND(&iParam0) != 1);
}

void Function_152(int iParam0, bool bParam1) //Position: 0x7C53 / 31827
{
	if (!Function_148(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_40060[iParam0] = (Global_40060[iParam0] + bParam1);
	Function_48((*&Global_40060 + 4428)[iParam0], bParam1, 0, 0);
	Function_48(222, bParam1, 0, 0);
	return;
}

void Function_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7C98 / 31896
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_154(int iParam0) //Position: 0x7D23 / 32035
{
	(&Global_21369 + 16) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 16, 0, 0, (&iParam0 + Function_29(90)), 0);
	return;
}

void Function_155() //Position: 0x7D46 / 32070
{
	int iVar0;
	
	if (iLocal_350 == 2)
	{
		Function_180(&Local_407);
		Function_48(657, 1, 0, 0);
		iVar0 = uLocal_317;
		if (_GET_AMMO_AMOUNT(&Global_54076, 7, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 7))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 7, (IntToFloat(iVar0) + 5.0f), 0, 1);
		}
		if (_GET_AMMO_AMOUNT(&Global_54076, 8, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 8))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 8, (IntToFloat(iVar0) + 5.0f), 0, 1);
		}
		if (_GET_AMMO_AMOUNT(&Global_54076, 10, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 10))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, 10, (IntToFloat(iVar0) + 5.0f), 0, 1);
		}
		if (iLocal_404 == Global_46894[1])
		{
			if (!Function_179(4, 0))
			{
				Function_156(18, 8, 0, 0, 0);
			}
			else
			{
				Function_156(23, 8, 0, 0, 0);
			}
		}
	}
	if (iLocal_361 == 1)
	{
		Function_43(1.0f);
	}
	return;
}

void Function_156(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x7E0F / 32271
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_178(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_177(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_176(bParam0, 2))
	{
		Function_48(456, 1, 0, 0);
		Function_175(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_153(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_174(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_175(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_410(0, 0, 1, 1))
			{
				Function_387(1);
				Function_386(1, 0);
			}
			else
			{
				Function_173();
			}
		}
		Function_168(bParam0);
		if (StackVal && !Function_409(((((!Function_167() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_409((((Function_167() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_89())
		{
			if (!Function_166(Global_119934, 2))
			{
				Function_161(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_158();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_157(3, bParam1);
				break;
			
			case 0x00000005:
				Function_157(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_157(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_157(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_157(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_157(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_131(2, 24);
				break;
			
			case 0x00000003:
				Function_131(2, 25);
				break;
			
			case 0x0000000F:
				Function_131(2, 26);
				break;
			
			case 0x0000000D:
				Function_131(2, 27);
				break;
			
			case 0x0000000E:
				Function_131(2, 28);
				break;
			}
	}
}

void Function_157(int iParam0, bool bParam1) //Position: 0x80C5 / 32965
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_158() //Position: 0x8134 / 33076
{
	if (Function_178(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_159(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_159(int iParam0, int iParam1) //Position: 0x81B4 / 33204
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_179(6, 0) || Function_179(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_285(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_179(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_285(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_285(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_285(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_285(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_179(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_285(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_285(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_285(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_285(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_285(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_285(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_285(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_179(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_285(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_179(6, 0) && Function_285(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_285(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_179(9, 0) && Function_285(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_285(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_179(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_267(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_267(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_267(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_160(int iParam0) //Position: 0x8E17 / 36375
{
	int iVar0;
	int iVar1;
	
	if (!Function_178(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
	{
		if ((StackVal && iVar0) == 0)
		{
			return iVar0;
		}
		iVar0 *= 2;
		iVar1++;
	}
	return 0;
}

void Function_161(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x8E66 / 36454
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_163(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_162(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_162(char* cParam0) //Position: 0x8EDB / 36571
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_163(int iParam0, var uParam1, int iParam2) //Position: 0x8F15 / 36629
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_165(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_164(uVar0))
		{
			case 0x00000002:
				if (!Function_166(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_164(char* cParam0) //Position: 0x8F91 / 36753
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

int Function_165(int iParam0) //Position: 0x9032 / 36914
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_3(&iVar1, 2147483648);
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

bool Function_166(int iParam0, int iParam1) //Position: 0x906F / 36975
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_167() //Position: 0x9082 / 36994
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_168(bool bParam0) //Position: 0x90AF / 37039
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_174(bParam0, Function_172(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_174(bParam0, Function_172(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_171(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_170(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_169(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_169(int iParam0) //Position: 0x925F / 37471
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_178(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_170(var uParam0, int iParam1) //Position: 0x92B6 / 37558
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

var Function_171(int iParam0) //Position: 0x92DB / 37595
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_178(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_172(bool bParam0) //Position: 0x9331 / 37681
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_173() //Position: 0x933D / 37693
{
	return;
}

bool Function_174(bool bParam0, int iParam1) //Position: 0x9343 / 37699
{
	int iVar0;
	
	if (!Function_178(bParam0))
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

void Function_175(int iParam0, int iParam1) //Position: 0x93A2 / 37794
{
	if (!Function_178(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_176(int iParam0, int iParam1) //Position: 0x93F7 / 37879
{
	int iVar0;
	
	if (!Function_178(iParam0))
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

bool Function_177(int iParam0) //Position: 0x9424 / 37924
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_178(int iParam0) //Position: 0x9440 / 37952
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_179(int iParam0, bool bParam1) //Position: 0x9456 / 37974
{
	int iVar0;
	
	iVar0 = Function_139(iParam0);
	if (!Function_120(iVar0))
	{
		return 0;
	}
	if (StackVal == 3)
	{
		return 1;
	}
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

void Function_180(struct<909> Param0) //Position: 0x9494 / 38036
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_620 - 1))
	{
		strcpy(&Param0 + 620[iVar04], "", 16);
		(*&Param0 + 724)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_908 = 0;
	return;
}

int Function_181(bool bParam0, bool bParam1) //Position: 0x94D4 / 38100
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_325(bParam0), Function_17()) >= 0)
		{
			DELETE_ITEM(Function_325(bParam0), Function_17(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_325(bParam0), Function_17(), 1);
	return 1;
}

void Function_182() //Position: 0x951C / 38172
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_705)
	{
		if (Local_705[iVar06])
		{
			if (IS_DOOR_VALID(&Local_705[iVar06] + 32))
			{
				Function_183(&Local_705[iVar06] + 32, 1);
			}
		}
		iVar0++;
	}
	iLocal_376 = 1;
	return;
}

void Function_183(var uParam0, int iParam1) //Position: 0x9562 / 38242
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "lockMe"))
	{
		DECOR_REMOVE(&uParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 0);
	}
	return;
}

void Function_184(bool bParam0) //Position: 0x95BA / 38330
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		if (DECOR_CHECK_EXIST(&bParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(&uVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar0);
				}
			}
		}
		DESTROY_OBJECT(&bParam0);
	}
	return;
}

void Function_185(char* cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9650 / 38480
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&cParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_186(struct<31> Param0) //Position: 0x96E5 / 38629
{
	int iVar0;
	var uVar1;
	float fVar2;
	
	fVar2 = -1.0f;
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	if (!IS_LAYOUTREF_VALID(&iLocal_405))
	{
	}
	if (iLocal_264 <= 5)
	{
		if (IS_ACTOR_VALID(&iLocal_71))
		{
			if (ACTORS_IN_RANGE(&iLocal_71, &Global_54076, 45.0f))
			{
				Function_345(5);
			}
		}
		iVar0 = 0;
		while (iVar0 < (bLocal_262 - 1))
		{
			if (IS_ACTOR_VALID(&(uLocal_45[iVar0])))
			{
				if (IS_ACTOR_DRUNK(&(uLocal_45[iVar0])))
				{
					SET_ACTOR_DRUNK(&(uLocal_45[iVar0]), 0);
				}
				if ((Function_245(&(uLocal_45[iVar0]), &uVar1, &fVar2, 0, 0, 0x40400000) || GET_LAST_ATTACK_TARGET(&(uLocal_45[iVar0])) != &Global_54076) || AI_IS_AGGROING(&(uLocal_45[iVar0]), &Global_54076))
				{
					if (!Function_345(5))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_264 > 5)
	{
		iLocal_263 = Function_244();
	}
	Function_230();
	if (IS_ACTOR_VALID(&iLocal_71))
	{
		Function_227();
	}
	if (iLocal_264 > 5)
	{
		Function_220();
	}
	else
	{
		Function_212();
	}
	if (iLocal_264 == 7)
	{
		if (Global_39906.f_40 <= 16)
		{
			if (!IS_OBJECT_VALID(&uLocal_400))
			{
				if (iLocal_404 == Global_46838[1])
				{
					if (Global_39906.f_40 <= 10)
					{
						uLocal_400 = Function_211(StackVal, StackVal, Global_46838[1], "fortMercer_layout", Vector(-2651,921f, 68,3f, 3424,928f), Vector(-0,4054303f, 580,7257f, -3,193105f), 4294967295);
					}
				}
				else if (Global_39906.f_40 <= 16)
				{
					uLocal_400 = Function_211(StackVal, StackVal, Global_46894[1], "elpresidio_layout", Vector(-717,9177f, 64,29659f, 3293,778f), Vector(-179,5706f, 37,63261f, -179,2682f), 4294967295);
				}
			}
		}
		if (!IS_OBJECT_VALID(&bLocal_380) && !IS_VOLUME_VALID(&uLocal_324))
		{
			Function_210();
			if (!Function_267(StackVal, Local_687))
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhGateway") };
				bLocal_380 = Function_209(StackVal, StackVal, &iLocal_405, &cLocal_265, Local_687, Vector(0.0f, 0.0f, 0.0f), &Global_54076, (2,5f * 6.0f), 5, 3, 330, 4294967295, 1, -1.0f, -1.0f, 0);
				if (IS_OBJECT_VALID(&bLocal_380))
				{
					cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGatewayVol") };
					uLocal_324 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Local_687, Vector(0.0f, fLocal_696, 0.0f), Vector(10.0f, 10.0f, 5.0f));
				}
				else
				{
					LOG_ERROR("Problem creating dropoff gateway");
				}
				Function_292(1);
			}
			else
			{
				LOG_ERROR("Invalid dropOffPos found");
			}
			Function_208(&uLocal_755);
			Function_206();
		}
		else if (StackVal && !Function_409(Function_200(), 2048))
		{
			Function_198();
			Function_408(&Global_39906 + 8, 2048);
		}
		else if (Function_409(StackVal, 2048))
		{
			if (StackVal && !Function_409(VDIST(Global_54078, Local_687) > 100.0f, 512))
			{
				Function_197();
				Function_408(&Global_39906 + 8, 512);
			}
		}
	}
	if (iLocal_264 == 7)
	{
		if (Global_6650)
		{
			Function_345(10);
		}
	}
	if (Function_187())
	{
		return 0;
	}
	if (iLocal_264 == 7)
	{
	}
	return 1;
}

bool Function_187() //Position: 0x9A2B / 39467
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (iLocal_354 == 1)
	{
		return 1;
	}
	if (Function_428(iLocal_404))
	{
		if (iLocal_264 > 7)
		{
			if (iLocal_355 == 1)
			{
				if (IS_VOLUME_VALID(&uLocal_324))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iLocal_4049] + 8))
					{
						bVar3 = false;
						if (!iLocal_377)
						{
							if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_324))
							{
								if (IS_ACTOR_VALID(&iLocal_71) && IS_ACTOR_ALIVE(&iLocal_71))
								{
									if (IS_ACTOR_IN_VOLUME(&iLocal_71, &uLocal_324) || ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 30.0f))
									{
										if (Function_194(StackVal, Local_690, 20.0f) >= 0)
										{
											bVar0 = false;
											while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_699))
											{
												iVar2 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar0);
												if (IS_ACTOR_VALID(&iVar2))
												{
													if (IS_ACTOR_ALIVE(&iVar2))
													{
														if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar2)))
														{
															ADD_BLIP_FOR_ACTOR(&iVar2, 322, 0, 2, 0);
														}
													}
												}
												bVar0++;
											}
											Function_278(&Local_407, 1);
											Function_277(&Local_407, "pm_bh_killUn", 1);
											iLocal_377 = 1;
											Function_292(1);
											Function_184(&bLocal_380);
											AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
										}
										else
										{
											bVar3 = true;
										}
									}
								}
							}
						}
						else if (!iLocal_378)
						{
							if (Function_194(StackVal, Local_690, 20.0f) < 0)
							{
								if (!Function_193(&iLocal_313))
								{
									Function_307(&iLocal_313);
								}
								else if (Function_294(&iLocal_313, 3.0f))
								{
									bVar0 = false;
									while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_699))
									{
										iVar2 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar0);
										if (IS_ACTOR_VALID(&iVar2))
										{
											if (IS_ACTOR_ALIVE(&iVar2))
											{
												if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar2)))
												{
													Function_192(&iVar2);
												}
											}
										}
										bVar0++;
									}
									iLocal_378 = 1;
									Function_278(&Local_407, 1);
									Function_277(&Local_407, "pm_bh_goToGate", 1);
									Function_292(1);
								}
							}
							else if (Function_193(&iLocal_313))
							{
								Function_191(&iLocal_313);
							}
						}
						else if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_324))
						{
							if (IS_ACTOR_VALID(&iLocal_71) && IS_ACTOR_ALIVE(&iLocal_71))
							{
								if (IS_ACTOR_IN_VOLUME(&iLocal_71, &uLocal_324) || ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 20.0f))
								{
									bVar3 = true;
								}
							}
						}
						if (!bVar3)
						{
							if ((IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_755) && Function_190(&iLocal_71) != 8) || IS_ACTOR_IN_VOLUME(&iLocal_71, &uLocal_755))
							{
								bVar3 = true;
							}
						}
						if (iVar1 != 0 && bVar3 != 1)
						{
							bVar0 = false;
							while (bVar0 < 5)
							{
								Function_35(&(iLocal_31[bVar0]));
								bVar0++;
							}
							iVar1 = 1;
							if (iVar1 == 1)
							{
								if (IS_ACTOR_PLAYER(&Global_54076))
								{
									SET_PLAYER_CONTROL(0, 0, 0, 0);
								}
								Function_189(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
								Function_188(&Global_54076);
								Function_345(8);
							}
						}
					}
				}
			}
		}
	}
	return iLocal_354;
}

void Function_188(bool bParam0) //Position: 0x9CE1 / 40161
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_PLAYER(&Global_54076))
		{
			SET_PLAYER_CONTROL(0, 0, 0, 0);
		}
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
			CANCEL_TIME_WARP(1);
		}
	}
	return;
}

void Function_189(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5) //Position: 0x9D0F / 40207
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &uParam5);
		}
	}
}

int Function_190(int iParam0) //Position: 0x9D39 / 40249
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_state");
}

void Function_191(vector3 vParam0) //Position: 0x9D55 / 40277
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_192(int iParam0) //Position: 0x9D6C / 40300
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&iParam0);
		}
	}
	return;
}

bool Function_193(int iParam0) //Position: 0x9D9F / 40351
{
	return Function_409(iParam0, 1);
}

int Function_194(struct<2> Param0, float fParam2) //Position: 0x9DAD / 40365
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	Function_107();
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, &Global_46715, Function_32(), 4,203895E-45f, Param0, Function_107(), Vector(fParam2, 1.0f, fParam2));
	if (!IS_VOLUME_VALID(&uVar0))
	{
		return 0;
	}
	uVar1 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), &Global_46715, 15, 1);
	iVar2 = 0;
	if (IS_OBJECTSET_VALID(&uVar1))
	{
		LOCATE_ACTORS_IN_VOLUME(&uVar0, &uVar1, 0, 1);
		iVar5 = GET_OBJECTSET_SIZE(&uVar1);
		if (iVar5 < 0)
		{
			return iVar2;
		}
		bVar3 = false;
		while (bVar3 <= iVar5)
		{
			uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar3, &uVar1);
			if (IS_OBJECT_VALID(&uVar6))
			{
				iVar4 = GET_ACTOR_FROM_OBJECT(&uVar6);
				if (IS_ACTOR_VALID(&iVar4))
				{
					if (IS_ACTOR_ALIVE(&iVar4))
					{
						if (!IS_ACTOR_HORSE(&iVar4))
						{
							if (Function_196(&iVar4))
							{
								if (&iVar4 != &Global_54076)
								{
									if (!IS_ACTOR_HOGTIED(&iVar4))
									{
										if (!IS_ACTOR_IN_ACTORSET(&uLocal_699, &iVar4))
										{
											if (Function_195(&iVar4))
											{
												SQUAD_JOIN(&iVar4, &cLocal_348);
											}
											else
											{
												SQUAD_JOIN(&iVar4, &cLocal_344);
											}
											if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar4)))
											{
												ADD_BLIP_FOR_ACTOR(&iVar4, 322, 0, 2, 0);
											}
											ADD_ACTORSET_MEMBER(&uLocal_699, &iVar4);
											REFERENCE_ACTOR(&iVar4);
										}
										iVar2++;
									}
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	bVar3 = false;
	while (bVar3 <= GET_ACTORSET_SIZE(&uLocal_699))
	{
		iVar4 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar3);
		if (IS_ACTOR_VALID(&iVar4))
		{
			if (!IS_ACTOR_IN_VOLUME(&iVar4, &uVar0))
			{
				Function_192(&iVar4);
				REMOVE_ACTORSET_MEMBER(&uLocal_699, &iVar4);
				SQUAD_LEAVE(&iVar4);
				DEREFERENCE_ACTOR(&iVar4);
				RELEASE_ACTOR_AS_AMBIENT(&iVar4);
			}
		}
		bVar3++;
	}
	DESTROY_OBJECTSET(&uVar1);
	return iVar2;
}

bool Function_195(int iParam0) //Position: 0x9F50 / 40784
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_196(int iParam0) //Position: 0x9F71 / 40817
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_38(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

void Function_197() //Position: 0x9FC0 / 40896
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (IS_ACTOR_VALID(&(iLocal_31[iVar0])))
		{
			if (iVar0 == 0)
			{
				TASK_CLEAR(&(iLocal_31[iVar0]));
				TASK_FACE_ACTOR(&(iLocal_31[iVar0]), &Global_54076, 1, 3212836864);
				TASK_PRIORITY_SET(&(iLocal_31[iVar0]), 2);
			}
			AI_GOAL_LOOK_AT_ACTOR_NEW(&(iLocal_31[iVar0]), &Global_54076, -1.0f, 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&(iLocal_31[iVar0]), 0);
			if (IS_MOVER_FROZEN(&(iLocal_31[iVar0])))
			{
				SET_MOVER_FROZEN(&(iLocal_31[iVar0]), 0);
			}
		}
		iVar0++;
	}
	if (iLocal_404 == Global_46838[1])
	{
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		uLocal_328[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Vector(-2660,768f, 67,263f, 3428,706f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 4.0f, 5.0f));
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[0]), Vector(-2660,768f, 67,263f, 3428,706f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[0]), &(uLocal_328[0]), 1, true);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		uLocal_328[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Vector(-2648,331f, 67,263f, 3403,011f), Vector(0.0f, 314,982f, 0.0f), Vector(10.0f, 4.0f, 5.0f));
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[1]), Vector(-2645,699f, 67,263f, 3413,741f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[1]), &(uLocal_328[1]), 3, false);
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[2]), Vector(-2646,205f, 67,263f, 3411,177f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[2]), &(uLocal_328[1]), 3, false);
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[3]), Vector(-2641,76f, 67,263f, 3419,482f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[3]), &(uLocal_328[1]), 3, false);
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[4]), Vector(-2641,76f, 67,263f, 3419,482f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[2]), &(uLocal_328[1]), 3, false);
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[5]), Vector(-2641,76f, 67,263f, 3419,482f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[3]), &(uLocal_328[1]), 3, false);
		TASK_CLEAR(&(iLocal_31[0]));
		TASK_PRIORITY_SET(&(iLocal_31[0]), 3);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(iLocal_31[0]), 0.0f);
		GIVE_WEAPON_TO_ACTOR(&(iLocal_31[0]), 40, 0.0f, 1, 1);
	}
	else if (iLocal_404 == Global_46894[1])
	{
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		uLocal_328[0] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_405, &cLocal_265, 4,203895E-45f, Vector(-710,131f, 63,247f, 3296,8f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 4.0f, 5.0f));
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[0]), Vector(-714,085f, 63,247f, 3293,886f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[0]), &(uLocal_328[0]), 1, true);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbhDropVol") };
		uLocal_328[1] = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Vector(-721,489f, 63,247f, 3280,714f), Vector(0.0f, 117,359f, 0.0f), Vector(10.0f, 4.0f, 5.0f));
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[1]), Vector(-723,78f, 63,247f, 3286,078f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[1]), &(uLocal_328[1]), 1, true);
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[2]), Vector(-721,978f, 63,247f, 3280,356f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[2]), &(uLocal_328[1]), 1, true);
		SET_OBJECT_POSITION(StackVal, &(iLocal_31[3]), Vector(-727,102f, 63,247f, 3288,233f));
		SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[3]), &(uLocal_328[1]), 1, true);
		TASK_CLEAR(&(iLocal_31[0]));
		TASK_PRIORITY_SET(&(iLocal_31[0]), 3);
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(iLocal_31[0]), 0.0f);
		GIVE_WEAPON_TO_ACTOR(&(iLocal_31[0]), 40, 0.0f, 1, 1);
	}
	return;
}

int Function_198() //Position: 0xA37C / 41852
{
	int iVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(&(iLocal_31[0])))
	{
		if (iLocal_404 != Global_46838[1] || iLocal_404 != Global_46894[1])
		{
			if (IS_ACTOR_VALID(&iLocal_71))
			{
				Function_106(&Local_407, &iLocal_71, 0);
			}
			cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhHndShake") };
			if (Function_108(iLocal_73[0]))
			{
				Function_107();
				iLocal_31[0] = CREATE_ACTOR_IN_LAYOUT(&iLocal_405, &cLocal_265, iLocal_73[0], Local_693, Function_107());
				Function_106(&Local_407, &(iLocal_31[0]), 1);
			}
			if (Function_108(iLocal_73[1]))
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGunner") };
				Function_107();
				iLocal_31[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_265, &iLocal_405, StackVal) + Vector(Vector(1.0f, 0.0f, 1.0f), Local_687, iLocal_73[1]), Function_107());
				Function_106(&Local_407, &(iLocal_31[1]), 2);
			}
			if (Function_108(iLocal_73[2]))
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGunner") };
				Function_107();
				iLocal_31[2] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_265, &iLocal_405, StackVal) + Vector(Vector(0.0f, 0.0f, 0.0f), Local_687, iLocal_73[2]), Function_107());
				Function_106(&Local_407, &(iLocal_31[2]), 3);
			}
			if (Function_108(iLocal_73[3]))
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhGunner") };
				Function_107();
				iLocal_31[3] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_265, &iLocal_405, StackVal) + Vector(Vector(1.0f, 0.0f, 0.0f), Local_687, iLocal_73[3]), Function_107());
				Function_106(&Local_407, &(iLocal_31[3]), 4);
			}
			if (Function_108(iLocal_73[4]))
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhWalker") };
				Function_107();
				iLocal_31[4] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_265, &iLocal_405, StackVal) + Vector(Vector(0.0f, 0.0f, 1.0f), Local_687, iLocal_73[4]), Function_107());
				Function_106(&Local_407, &(iLocal_31[4]), 5);
			}
			if (Function_108(iLocal_73[5]))
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bhWalker") };
				Function_107();
				iLocal_31[5] = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Vector(&cLocal_265, &iLocal_405, StackVal) + Vector(Vector(-1.0f, 0.0f, 1.0f), Local_687, iLocal_73[5]), Function_107());
				Function_106(&Local_407, &(iLocal_31[5]), 6);
			}
		}
		else
		{
			cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("bountyDropGuy") };
			Function_107();
			iLocal_31[0] = CREATE_ACTOR_IN_LAYOUT(&iLocal_405, &cLocal_265, iLocal_73[0], Local_687, Function_107());
			if (!IS_ACTOR_VALID(&(iLocal_31[0])))
			{
				LOG_ERROR("Problem creating dropOffGuy");
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (IS_ACTOR_VALID(&(iLocal_31[iVar0])))
			{
				TASK_CLEAR(&(iLocal_31[iVar0]));
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(iLocal_31[iVar0]), 1);
				AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(iLocal_31[iVar0]), 0);
				Function_25(&(iLocal_31[iVar0]), &Global_54076, 0, 0);
				if (IS_ACTOR_ALIVE(&iLocal_71))
				{
					Function_25(&(iLocal_31[iVar0]), &iLocal_71, 0, 1);
				}
				SQUAD_JOIN(&(iLocal_31[iVar0]), &Local_346);
				REFERENCE_ACTOR(&(iLocal_31[iVar0]));
				SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&(iLocal_31[iVar0]), 0,1f);
				MEMORY_ALLOW_TAKE_COVER(&(iLocal_31[iVar0]), 0);
				iVar1 = 0;
				while (iVar1 < 5)
				{
					Function_25(&(iLocal_31[iVar0]), &(iLocal_31[iVar1]), 0, 0);
					iVar1++;
				}
			}
			iVar0++;
		}
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Local_346, 0);
		Function_199(&Local_407 + 992);
		Function_292(1);
		iLocal_355 = 1;
	}
	return 1;
}

void Function_199(var uParam0) //Position: 0xA6CE / 42702
{
	var uVar0;
	bool bVar1;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		PRINTSTRING("Contents of OBJECTSET ");
		if (STRING_LENGTH(GET_OBJECT_NAME(&uParam0)) >= 0)
		{
			PRINTSTRING(GET_OBJECT_NAME(&uParam0));
		}
		else
		{
			PRINTSTRING("n(no name)");
		}
		PRINTNL();
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(&uParam0) - 1))
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				PRINTINT(bVar1);
				PRINTSTRING(") ");
				PRINTSTRING(GET_OBJECT_NAME(&uVar0));
				PRINTNL();
			}
			bVar1++;
		}
		PRINTSTRING("Displayed ");
		PRINTINT(GET_OBJECTSET_SIZE(&uParam0));
		PRINTSTRING("n objects.");
	}
	return;
}

bool Function_200() //Position: 0xA79B / 42907
{
	if (iLocal_360 == 0)
	{
		return 0;
	}
	if (!Function_201(&iLocal_235))
	{
		return 0;
	}
	return 1;
}

bool Function_201(struct<2>[] Param0) //Position: 0xA7B6 / 42934
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_205();
	iVar1 = 0;
	if (!Function_8(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_204(&(Param0[iVar02]), 8);
		}
		else if (Function_203())
		{
			iVar1 = 1;
			Function_204(&(Param0[iVar02]), 8);
		}
		Function_204(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_8(&(Param0[iVar02]), 4))
		{
			if (!Function_8(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_8(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_8(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_204(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_8(&(Param0[iVar02]), 4))
		{
			if (!Function_8(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_204(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_204(&(Param0[iVar02]), 2);
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
	Function_202();
	return 1;
}

void Function_202() //Position: 0xAB78 / 43896
{
	if (!Function_87(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_203() //Position: 0xABB8 / 43960
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_204(struct<13> Param0) //Position: 0xABE6 / 44006
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_205() //Position: 0xABF9 / 44025
{
	if (!Function_87(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

void Function_206() //Position: 0xAC3B / 44091
{
	int iVar0;
	
	if (iLocal_404 == Global_46838[1])
	{
		iLocal_73[0] = 107;
		iLocal_73[1] = 444;
		iLocal_73[2] = 375;
		iLocal_73[3] = 449;
		iLocal_73[4] = 4294967295;
		iLocal_73[5] = 4294967295;
	}
	else if (iLocal_404 == Global_46894[1])
	{
		iLocal_73[0] = 268;
		iLocal_73[1] = 531;
		iLocal_73[2] = 414;
		iLocal_73[3] = 394;
		iLocal_73[4] = 4294967295;
		iLocal_73[5] = 4294967295;
	}
	else
	{
		LOG_ERROR("Invalid bounty hunter AE");
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Function_108(iLocal_73[iVar0]))
		{
			Function_207(&iLocal_235, iLocal_73[iVar0], 3, 0);
		}
		iVar0++;
	}
	iLocal_360 = 1;
	return;
}

var Function_207(char** cParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xAD04 / 44292
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (cParam0 - 1))
	{
		if (!Function_8(&(cParam0[iVar02]), 4))
		{
			cParam0[iVar02] = bParam1;
			cParam0[iVar02].f_8 = 3;
			Function_204(&(cParam0[iVar02]), 4);
			if (&bParam3)
			{
				Function_204(&(cParam0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &cParam0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_208(bool bParam0) //Position: 0xADE0 / 44512
{
	bool bVar0;
	struct<2> Var1;
	float fVar3;
	
	if (IS_VOLUME_VALID(&bParam0))
	{
		DESTROY_VOLUME(&bParam0);
	}
	cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVolSet") };
	bParam0 = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_405, &cLocal_265);
	if (iLocal_404 == Global_46838[1])
	{
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		Var1 = Vector(-2641,491f, 71,655f, 3442,535f);
		fVar3 = 270,648f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var1, Vector(0.0f, fVar3, 0.0f), Vector(2.0f, 2.0f, 2.0f));
		ADD_TO_VOLUME_SET(&bParam0, &bVar0);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		Var1 = Vector(-2659,466f, 71,655f, 3477,794f);
		fVar3 = 100,567f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var1, Vector(0.0f, fVar3, 0.0f), Vector(2.0f, 2.0f, 2.0f));
		ADD_TO_VOLUME_SET(&bParam0, &bVar0);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		Var1 = Vector(-2730,855f, 71,498f, 3474,863f);
		fVar3 = 121,226f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var1, Vector(0.0f, fVar3, 0.0f), Vector(2.0f, 2.0f, 2.0f));
		ADD_TO_VOLUME_SET(&bParam0, &bVar0);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		Var1 = Vector(-2697,938f, 71,656f, 3419,079f);
		fVar3 = 74,619f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var1, Vector(0.0f, fVar3, 0.0f), Vector(2.0f, 2.0f, 2.0f));
		ADD_TO_VOLUME_SET(&bParam0, &bVar0);
	}
	else
	{
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		Var1 = Vector(-716,347f, 66,753f, 3274,991f);
		fVar3 = 171,546f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var1, Vector(0.0f, fVar3, 0.0f), Vector(2.0f, 2.0f, 2.0f));
		ADD_TO_VOLUME_SET(&bParam0, &bVar0);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		Var1 = Vector(-689,719f, 69,625f, 3321,432f);
		fVar3 = 51,372f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var1, Vector(0.0f, fVar3, 0.0f), Vector(2.0f, 2.0f, 2.0f));
		ADD_TO_VOLUME_SET(&bParam0, &bVar0);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpLadderVol") };
		Var1 = Vector(-683,206f, 66,391f, 3291,753f);
		fVar3 = 349,269f;
		bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var1, Vector(0.0f, fVar3, 0.0f), Vector(2.0f, 2.0f, 2.0f));
		ADD_TO_VOLUME_SET(&bParam0, &bVar0);
	}
	return;
}

var Function_209(var uParam0, char* cParam1, float fParam9, int iParam10, var uParam11, var uParam12, float fParam13, float fParam14, int iParam15) //Position: 0xB088 / 45192
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &uParam8, &uParam11, 0, &uParam12, &iParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2,802597E-45f, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&fVar11);
		if (&iParam10 != 4294967295)
		{
			uVar12 = ADD_BLIP_FOR_OBJECT(&cVar2, &iParam10, 0.0f, 2, 0);
		}
		if (&fParam13 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(&uVar12, &fParam13);
		}
		if (&fParam14 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(&uVar12, &fParam14);
		}
		DECOR_SET_OBJECT(&cVar2, "volrestrict", &fVar11);
	}
	return &cVar2;
}

void Function_210() //Position: 0xB173 / 45427
{
	if (iLocal_404 == Global_46894[1])
	{
		Local_693 = Vector(-714,085f, 63,247f, 3293,886f);
		Local_687 = Vector(-723,146f, 63,247f, 3286,348f);
		fLocal_696 = 63,252f;
		Local_690 = Vector(-733,258f, 63,02f, 3282,045f);
	}
	else if (iLocal_404 == Global_46838[1])
	{
		Local_693 = Vector(-2660,768f, 67,263f, 3428,706f);
		Local_687 = Vector(-2646,26f, 67,263f, 3414,39f);
		fLocal_696 = 314,213f;
		Local_690 = Vector(-2639,8f, 67,263f, 3408,189f);
	}
	else
	{
		LOG_ERROR("Dropoff position not properly defined.");
	}
	return;
}

bool Function_211(int iParam0, float fParam1, struct<2> Param2, struct<2> Param4, char* cParam6) //Position: 0xB24B / 45643
{
	char[] cVar0[4];
	char* cVar1[64];
	var uVar17;
	
	if (Function_431(iParam0))
	{
		cVar0 = FIND_NAMED_LAYOUT(&fParam1);
		if (IS_LAYOUTREF_VALID(&cVar0))
		{
			if (&cParam6 == 4294967295)
			{
				cParam6 = Global_39906.f_40 + 1;
				if (&cParam6 == 6)
				{
					cParam6 = 7;
				}
			}
			if (&cParam6 < 16)
			{
				strcpy(&cVar1, "$/fragments/p_pos_missing", 64);
				if (&cParam6 <= 10)
				{
					stradd(&cVar1, "0", 64);
				}
				stradd(&cVar1, INT_TO_STRING(&cParam6), 64);
				stradd(&cVar1, "x", 64);
				uVar17 = CREATE_PROP_IN_LAYOUT(&cVar0, "mpNextPoster", &cVar1, Param2, Param4, 0);
				if (!IS_OBJECT_VALID(&uVar17))
				{
					return "";
				}
				SET_PROP_AI_OBSTACLE_ENABLED(&uVar17, 0);
				SET_OBJECT_COLLIDE_WITH_WORLD(&uVar17, 0);
				SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar17, 0);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uVar17), 1);
				return &uVar17;
			}
		}
	}
	return "";
}

void Function_212() //Position: 0xB32D / 45869
{
	int iVar0;
	
	if (IS_ACTORSET_VALID(&uLocal_699))
	{
		if (GET_ACTORSET_SIZE(&uLocal_699) <= bLocal_262)
		{
			if (!Function_193(&iLocal_285))
			{
				Function_219(&iLocal_285, 10.0f);
			}
			else if (Function_217(&iLocal_285) < 5.0f)
			{
				PRINTNL();
				PRINTNL();
				PRINTSTRING("Number of Missing Person Zombies before spawning: ");
				PRINTINT(GET_ACTORSET_SIZE(&uLocal_699));
				PRINTNL();
				iVar0 = Function_216();
				Function_213(iVar0, 0);
				PRINTNL();
				PRINTSTRING("Number of Missing Person Zombies after spawning: ");
				PRINTINT(GET_ACTORSET_SIZE(&uLocal_699));
				PRINTNL();
				PRINTNL();
				Function_191(&iLocal_285);
			}
		}
	}
	return;
}

void Function_213(int iParam0, int iParam1) //Position: 0xB413 / 46099
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	
	iVar8 = 0;
	while (iVar8 <= iParam0)
	{
		if (IS_OBJECTSET_VALID(&uLocal_703))
		{
			cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieReAttacker") };
			uVar4 = Function_215(&uLocal_703);
			if (IS_OBJECT_VALID(&uVar4))
			{
				bVar7 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % 12);
				if (bVar7 > 12)
				{
					bVar7 = 11;
				}
				bVar6 = iLocal_87[bVar7];
				GET_OBJECT_POSITION(&uVar4, &Var0);
				GET_OBJECT_ORIENTATION(&uVar4, &Var2);
				Var0 = Vector(StackVal, StackVal, ((Var0 + RAND_FLOAT_RANGE(-0,5f, 0,5f)) + RAND_FLOAT_RANGE(-0,5f, 0,5f)));
				iVar5 = CREATE_ACTOR_IN_LAYOUT(&iLocal_405, &cLocal_265, bVar6, Var0, Var2);
			}
			if (IS_ACTOR_VALID(&iVar5))
			{
				DECOR_SET_BOOL(&iVar5, "bShopDontKill", 1);
				REFERENCE_ACTOR(&iVar5);
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar5, 1);
				if (!IS_ACTOR_VALID(&iVar5))
				{
				}
				Function_214(&iVar5, 0);
				Function_35(GET_OBJECT_FROM_ACTOR(&iVar5));
				ADD_ACTORSET_MEMBER(&uLocal_699, &iVar5);
				if (!Function_196(&iVar5))
				{
					Function_33(&iVar5, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
				}
				if (!Function_195(&iVar5))
				{
					SQUAD_JOIN(&iVar5, &cLocal_344);
				}
				else
				{
					SQUAD_JOIN(&iVar5, &cLocal_348);
				}
				SET_ACTOR_FACTION(&iVar5, 32);
				if (WOULD_ACTOR_BE_VISIBLE(bVar6, &Var0, 150.0f) || iParam1)
				{
					Function_34(&iVar5, 1, 1);
				}
				PRINTSTRING("Created zombie of type: ");
				PRINTSTRING(GET_ACTOR_ENUM_STRING(&iVar5));
				PRINTNL();
				PRINTSTRING("Which is variation ");
				PRINTINT(bVar7);
				PRINTSTRING(" of ");
				PRINTINT(11);
				PRINTNL();
				MEMORY_CONSIDER_AS_ENEMY(&iLocal_71, &iVar5);
				MEMORY_REPORT_POSITION_AUTO(&iLocal_71, &iVar5, 1);
			}
		}
		iVar8++;
	}
	return;
}

void Function_214(int iParam0, bool bParam1) //Position: 0xB5F8 / 46584
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "bhnt_state", bParam1);
	return;
}

var Function_215(var uParam0) //Position: 0xB617 / 46615
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	uVar0 = "";
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		iVar1 = GET_OBJECTSET_SIZE(&uParam0);
		if (iVar1 >= 0)
		{
			bVar2 = FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % IntToFloat(iVar1)));
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uParam0);
		}
	}
	PRINTSTRING("Finished getting random object");
	PRINTNL();
	return &uVar0;
}

int Function_216() //Position: 0xB683 / 46723
{
	switch (Global_39906.f_12)
	{
		case 0x00000001:
			return RAND_INT_RANGE(1, 2);
		
		case 0x00000002:
			return RAND_INT_RANGE(1, 3);
		
		case 0x00000003:
			return RAND_INT_RANGE(2, 3);
		
		case 0x00000004:
			return RAND_INT_RANGE(2, 4);
		
		case 0x00000005:
			return RAND_INT_RANGE(3, 4);
		
		case 0x00000006:
			return RAND_INT_RANGE(3, 5);
		
		default:
	}
	return 2;
	return 1;
}

float Function_217(vector3 vParam0) //Position: 0xB6DE / 46814
{
	if (Function_193(&vParam0))
	{
		if (Function_218(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_218(int iParam0) //Position: 0xB7AB / 47019
{
	return Function_409(iParam0, 2);
}

void Function_219(vector3 vParam0) //Position: 0xB7B9 / 47033
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_408(&vParam0, 1);
	Function_3(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_220() //Position: 0xB7DE / 47070
{
	int iVar0;
	
	if (GET_ACTORSET_SIZE(&uLocal_699) <= bLocal_262)
	{
		if (!Function_193(&iLocal_285))
		{
			Function_219(&iLocal_285, 4.0f);
		}
		else if (Function_217(&iLocal_285) < 5.0f)
		{
			iVar0 = Function_216();
			if (iLocal_263 != 4294967295)
			{
				if (StackVal && !Function_225(IS_OBJECT_VALID(&bLocal_380), &Global_54076, Local_690, 150.0f))
				{
					if (!Local_763[iLocal_2632].f_12)
					{
						if (Function_225(StackVal, &Global_54076, Local_763[iLocal_2632], 150.0f))
						{
							PRINTNL();
							PRINTNL();
							PRINTSTRING("Number of Missing Person Zombies before spawning: ");
							PRINTINT(GET_ACTORSET_SIZE(&uLocal_699));
							PRINTNL();
							Function_221(StackVal, iVar0 * 2, Local_763[iLocal_2632], 0);
							PRINTNL();
							PRINTSTRING("Number of Missing Person Zombies after spawning: ");
							PRINTINT(GET_ACTORSET_SIZE(&uLocal_699));
							PRINTNL();
							PRINTNL();
						}
					}
				}
			}
			else if (!iLocal_373)
			{
				if (StackVal && Function_225(IS_OBJECT_VALID(&bLocal_380), &Global_54076, Local_690, 150.0f))
				{
					PRINTNL();
					PRINTNL();
					PRINTSTRING("Number of Missing Person Zombies before spawning: ");
					PRINTINT(GET_ACTORSET_SIZE(&uLocal_699));
					PRINTNL();
					Function_221(StackVal, iVar0 * 3, Local_690, 1);
					PRINTNL();
					PRINTSTRING("Number of Missing Person Zombies after spawning: ");
					PRINTINT(GET_ACTORSET_SIZE(&uLocal_699));
					PRINTNL();
					PRINTNL();
				}
			}
			if (GET_ACTORSET_SIZE(&uLocal_699) >= bLocal_262)
			{
				Function_191(&iLocal_285);
				if (iLocal_263 != 4294967295)
				{
					Local_763[iLocal_2632].f_12 = 1;
				}
				else
				{
					iLocal_373 = 1;
				}
			}
		}
	}
	return;
}

void Function_221(int iParam0, struct<2> Param1, bool bParam3) //Position: 0xB9FB / 47611
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	float fVar7;
	
	if (&bParam3)
	{
		fVar7 = 30.0f;
	}
	else
	{
		fVar7 = 15.0f;
	}
	if (IS_VOLUME_VALID(&uLocal_342))
	{
		GET_VOLUME_CENTER(&uLocal_342, &Var4);
		if (VDIST(Var4, Param1) < 25.0f)
		{
			DESTROY_VOLUME(&uLocal_342);
		}
	}
	if (!IS_VOLUME_VALID(&uLocal_342))
	{
		Function_107();
		uLocal_342 = CREATE_VOLUME_IN_LAYOUT(StackVal, &iLocal_405, "AmbushVolume", 2,802597E-45f, Param1, Function_107(), Vector(fVar7, fVar7, fVar7));
	}
	iVar6 = 0;
	while (iVar6 <= iParam0)
	{
		if (Function_224())
		{
			Var0 = Vector(RAND_FLOAT_RANGE(-2,5f, 2,5f), 0.0f, RAND_FLOAT_RANGE(-4.0f, 4.0f));
		}
		else
		{
			Var0 = Vector(RAND_FLOAT_RANGE(-10.0f, 10.0f), 0.0f, RAND_FLOAT_RANGE(-10.0f, 10.0f));
		}
		Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Param1, StackVal);
		Function_222(StackVal, Var2, 0);
		iVar6++;
	}
}

void Function_222(var uParam0, var uParam1, bool bParam2) //Position: 0xBAE6 / 47846
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	
	if (&bParam2)
	{
		fVar9 = 25.0f;
	}
	else
	{
		fVar9 = 5.0f;
	}
	if (FIND_GROUND_INTERSECTION(&uParam0, fVar9, &Var0, &Var4))
	{
		Function_223(StackVal, Var4);
		Var2 = Function_223(StackVal, Var4);
		cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieSpawn") };
		bVar8 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % 12);
		if (bVar8 > 12)
		{
			bVar8 = 11;
		}
		bVar7 = iLocal_87[bVar8];
		iVar6 = CREATE_ACTOR_IN_LAYOUT(&iLocal_405, &cLocal_265, bVar7, Var0, Var2);
		DECOR_SET_BOOL(&iVar6, "bShopDontKill", 1);
		REFERENCE_ACTOR(&iVar6);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iVar6, 1);
		if (!IS_ACTOR_VALID(&iVar6))
		{
		}
		Function_214(&iVar6, 0);
		Function_35(GET_OBJECT_FROM_ACTOR(&iVar6));
		ADD_ACTORSET_MEMBER(&uLocal_699, &iVar6);
		if (!Function_196(&iVar6))
		{
			Function_33(&iVar6, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
		}
		if (!Function_195(&iVar6))
		{
			SQUAD_JOIN(&iVar6, &cLocal_344);
		}
		else
		{
			SQUAD_JOIN(&iVar6, &cLocal_348);
		}
		SET_ACTOR_FACTION(&iVar6, 32);
		if (!&bParam2)
		{
			Function_34(&iVar6, 1, 1);
		}
		PRINTSTRING("Created zombie of type: ");
		PRINTSTRING(GET_ACTOR_ENUM_STRING(&iVar6));
		PRINTNL();
		PRINTSTRING("Which is variation ");
		PRINTINT(bVar8);
		PRINTSTRING(" of ");
		PRINTINT(11);
		PRINTNL();
		MEMORY_CONSIDER_AS_ENEMY(&iLocal_71, &iVar6);
		MEMORY_REPORT_POSITION_AUTO(&iLocal_71, &iVar6, 1);
		bVar8 = false;
		while (bVar8 <= iLocal_31)
		{
			if (IS_ACTOR_VALID(&(iLocal_31[bVar8])))
			{
				MEMORY_CONSIDER_AS_ENEMY(&(iLocal_31[bVar8]), &iVar6);
				MEMORY_REPORT_POSITION_AUTO(&(iLocal_31[bVar8]), &iVar6, 1);
			}
			bVar8++;
		}
		if (IS_VOLUME_VALID(&uLocal_342))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(&iVar6, &uLocal_342, 4, true);
			DECOR_SET_BOOL(&iVar6, "bhAmbusher", 1);
		}
	}
	return;
}

struct<8> Function_223(vector3 vParam0) //Position: 0xBCDA / 48346
{
	struct<2> Var0;
	
	Var0 = (-1.0f * (ATAN2_DEGREE(vParam0.y, vParam0.z) - 90.0f));
	Var0.f_4 = 0.0f;
	Var0.f_8 = (ATAN2_DEGREE(vParam0.y, vParam0.x) - 90.0f);
	return StackVal, Var0;
}

bool Function_224() //Position: 0xBD11 / 48401
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

bool Function_225(var uParam0, struct<2> Param1, float fParam3) //Position: 0xBD24 / 48420
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_226(&uParam0);
		if (VDIST(Function_226(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_226(var uParam0) //Position: 0xBDB0 / 48560
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_227() //Position: 0xBE1C / 48668
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<2> Var4;
	
	if (IS_VOLUME_VALID(&uLocal_342))
	{
		GET_VOLUME_CENTER(&uLocal_342, &Var4);
		if (Function_229(StackVal, &Global_54076, Var4) > 25.0f)
		{
			DESTROY_VOLUME(&uLocal_342);
		}
		else if (iLocal_263 != 4294967295)
		{
			if (VDIST(Var4, Local_763[iLocal_2632]) < 25.0f)
			{
				DESTROY_VOLUME(&uLocal_342);
			}
		}
		else if (VDIST(Var4, Local_690) < 25.0f)
		{
			DESTROY_VOLUME(&uLocal_342);
		}
	}
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_699))
	{
		iVar1 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (IS_ACTOR_ALIVE(&iVar1))
			{
				if (!ACTORS_IN_RANGE(&iVar1, &iLocal_71, 65.0f) && !ACTORS_IN_RANGE(&iVar1, &Global_54076, 65.0f))
				{
					if (iLocal_263 != 4294967295)
					{
						if (!Function_225(StackVal, &iVar1, Local_763[iLocal_2632], 15.0f))
						{
							REMOVE_ACTORSET_MEMBER(&uLocal_699, &iVar1);
							Function_192(&iVar1);
							SQUAD_LEAVE(&iVar1);
							DEREFERENCE_ACTOR(&iVar1);
							RELEASE_ACTOR(&iVar1);
						}
					}
					else if (!Function_225(StackVal, &iVar1, Local_690, 25.0f))
					{
						REMOVE_ACTORSET_MEMBER(&uLocal_699, &iVar1);
						Function_192(&iVar1);
						SQUAD_LEAVE(&iVar1);
						DEREFERENCE_ACTOR(&iVar1);
						RELEASE_ACTOR(&iVar1);
					}
				}
				else if (IS_ACTOR_HOGTIED(&iVar1))
				{
					REMOVE_ACTORSET_MEMBER(&uLocal_699, &iVar1);
					Function_192(&iVar1);
					SQUAD_LEAVE(&iVar1);
					DEREFERENCE_ACTOR(&iVar1);
					RELEASE_ACTOR(&iVar1);
				}
				else
				{
					if (DECOR_CHECK_EXIST(&iVar1, "bhAmbusher"))
					{
						iVar2 = GET_LAST_ATTACKER(&iVar1);
						if (IS_ACTOR_VALID(&iVar2))
						{
							if (&iVar2 != &Global_54076 || SQUAD_GET(&iVar2) != &Local_346)
							{
								TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar1);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar1);
								DECOR_REMOVE(&iVar1, "bhAmbusher");
								if (IS_VOLUME_VALID(&uLocal_342))
								{
									DESTROY_VOLUME(&uLocal_342);
								}
							}
						}
						if (IS_VOLUME_VALID(&uLocal_342))
						{
							if (Function_228(&iVar1, &uLocal_342, 15.0f))
							{
								TASK_OVERRIDE_SET_MOVETYPE(&iVar1, 1);
							}
							else
							{
								TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar1);
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar1);
								DECOR_REMOVE(&iVar1, "bhAmbusher");
							}
						}
						else
						{
							TASK_OVERRIDE_CLEAR_MOVETYPE(&iVar1);
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iVar1);
							DECOR_REMOVE(&iVar1, "bhAmbusher");
						}
					}
					if (iLocal_264 == 7)
					{
						if (IS_ACTOR_RIDING(&Global_54076))
						{
							if (!iLocal_371)
							{
								if (Function_225(StackVal, &Global_54076, Local_687, 75.0f))
								{
									if (ACTORS_IN_RANGE(&Global_54076, &iVar1, 2.0f))
									{
										TASK_FLEE_ACTOR(GET_MOUNT(&Global_54076), &Global_54076, 20.0f, 10.0f, 0, 0, 0);
										if (IS_ACTOR_RIDING(&iLocal_71))
										{
											TASK_DISMOUNT(&iLocal_71, 1);
										}
										SET_ACTOR_HEALTH(&iLocal_71, GET_ACTOR_MAX_HEALTH(&iLocal_71));
										SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
										iLocal_371 = 1;
									}
								}
							}
						}
					}
					bVar3 = Function_190(&iVar1);
					switch (bVar3)
					{
						case 0x00000000:
							Function_214(&iVar1, 3);
							break;
						
						case 0x00000008:
						case 0x00000004:
							break;
						
						case 0x00000003:
							TASK_CLEAR(&iVar1);
							Function_214(&iVar1, 4);
							break;
						
						default:
							Function_214(&iVar1, 0);
							break;
						}
				}
			}
			else if (!Function_190(&iVar1) != 33)
			{
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (Function_193(&iLocal_285))
					{
						PRINTNL();
						if (Function_217(&iLocal_285) < 1.0f)
						{
							Function_219(&iLocal_285, (Function_217(&iLocal_285) - 1.0f));
						}
						else
						{
							Function_307(&iLocal_285);
						}
					}
					else
					{
						Function_307(&iLocal_285);
						Function_307(&iLocal_285);
					}
					PRINTSTRING("Time to next zombie attack: ");
					PRINTFLOAT((5.0f - Function_217(&iLocal_285)));
					PRINTNL();
					PRINTNL();
					REMOVE_ACTORSET_MEMBER(&uLocal_699, &iVar1);
					SQUAD_LEAVE(&iVar1);
				}
				Function_214(&iVar1, 33);
			}
		}
		bVar0++;
	}
	return;
}

bool Function_228(var uParam0, int iParam1, float fParam2) //Position: 0xC231 / 49713
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_284(&iParam1);
		Function_226(&uParam0);
		if (VDIST(Function_284(&iParam1), Function_226(&uParam0)) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("\Attempting to check whether an INVALID actor is in range of volume centre. Returning FALSE.");
	return 0;
	return 0;
}

float Function_229(int iParam0, struct<2> Param1) //Position: 0xC2BE / 49854
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_226(&iParam0);
		Var0 = Function_226(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_230() //Position: 0xC335 / 49973
{
	struct<2> Var0;
	bool bVar2;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	if (IS_ACTOR_VALID(&iLocal_71))
	{
		if (IS_ACTOR_ALIVE(&iLocal_71))
		{
			GET_POSITION(&iLocal_71, &Var0);
			if (iLocal_264 > 5)
			{
				if (Function_243(StackVal, Var0) == 1)
				{
					Function_345(6);
				}
			}
			if (IS_ACTOR_VALID(&iLocal_71))
			{
				iVar6 = Function_190(&iLocal_71);
			}
			if (IS_ACTOR_RIDING(&iLocal_71))
			{
				if ((iVar6 == 28 && iVar6 == 26) && iVar6 == 30)
				{
					Function_214(&iLocal_71, 28);
					iVar6 = 28;
				}
			}
			switch (iVar6)
			{
				case 0x00000000:
					TASK_PRIORITY_SET(&iLocal_71, true);
					iLocal_370 = 0;
					Function_268(bLocal_402);
					bVar2 = Function_268(bLocal_402);
					TELEPORT_ACTOR(&iLocal_71, &bVar2, 1, 1, 1);
					if (IS_VOLUME_VALID(&uLocal_326))
					{
						DESTROY_VOLUME(&uLocal_326);
					}
					cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpDefend") };
					Function_70(&iLocal_71);
					uLocal_326 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Function_70(&iLocal_71), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
					SET_ACTOR_STAY_WITHIN_VOLUME(&iLocal_71, &uLocal_326, 4, true);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_326);
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_326);
					FIRE_STOP_FLAMES_IN_VOLUME(&uLocal_326);
					RESET_RMPTFX_IN_VOLUME(&uLocal_326);
					CLEAR_ACTOR_PROOF(&iLocal_71, 16);
					iLocal_701 = Function_241(&iLocal_71, &iLocal_405);
					Function_214(&iLocal_71, 1);
					break;
				
				case 0x00000001:
					Function_210();
					if (ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 10.0f) && Function_240(&uLocal_699, &iLocal_71, 25.0f) >= 1)
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_71);
						if (IS_VOLUME_VALID(&uLocal_326))
						{
							DESTROY_VOLUME(&uLocal_326);
						}
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_71, 0,75f);
						Function_214(&iLocal_71, 7);
					}
					else if (Function_229(StackVal, &iLocal_71, Local_687) < 50.0f)
					{
						TASK_CLEAR(&iLocal_71);
						if (!IS_VOLUME_VALID(&uLocal_326))
						{
							cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpDefend") };
							Function_70(&iLocal_71);
							uLocal_326 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Function_70(&iLocal_71), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
							SET_ACTOR_STAY_WITHIN_VOLUME(&iLocal_71, &uLocal_326, 4, true);
							ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_326);
							ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_326);
						}
						TASK_FLEE_ACTORSET(&iLocal_71, &uLocal_699, 5.0f, 3.0f, 0, 1, 0);
						if (iLocal_264 > 4)
						{
							Function_239(&iLocal_701);
						}
						if (iLocal_370)
						{
							AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
							if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 20.0f))
							{
								SAY_SINGLE_LINE_STRING_OVER_PAIN(&iLocal_71, "MISSING_PLAYER_DESERTS_P", 1, 0, 2, 0);
								Function_307(&iLocal_297);
							}
						}
						else
						{
							iLocal_370 = 1;
						}
						Function_292(1);
						Function_214(&iLocal_71, 2);
					}
					else
					{
						CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_71);
						if (IS_VOLUME_VALID(&uLocal_326))
						{
							DESTROY_VOLUME(&uLocal_326);
						}
						SAY_SINGLE_LINE_STRING_OVER_PAIN(&iLocal_71, "MISSING_SPRINT_LINE", 1, 0, 2, 0);
						Function_307(&iLocal_297);
						Function_214(&iLocal_71, 7);
						Function_292(1);
					}
					TASK_PRIORITY_SET(&iLocal_71, true);
					ACTOR_END_FORCE_HOLSTER(&iLocal_71);
					MEMORY_ALLOW_SHOOTING(&iLocal_71, 1);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_71, 0);
					GIVE_WEAPON_TO_ACTOR(&iLocal_71, 40, 0f, 1, 1);
					SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_71, 0,1f);
					break;
				
				case 0x00000002:
					if (bLocal_375 && !iLocal_374)
					{
						if (Function_240(&uLocal_699, &iLocal_71, 35.0f) < 1)
						{
							if (!iLocal_376)
							{
								if (ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 25.0f))
								{
									Function_278(&Local_407, 1);
									Function_277(&Local_407, "pm_bh_fnd3", 1);
									SAY_SINGLE_LINE_STRING_OVER_PAIN(&iLocal_71, "MISSING_PLAYER_NEAR_P", 1, 0, 2, 0);
									Function_307(&iLocal_297);
									iLocal_376 = 1;
								}
								else
								{
									Function_237(iVar6);
								}
							}
							else if (ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 5.0f))
							{
								CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_71);
								if (IS_VOLUME_VALID(&uLocal_326))
								{
									DESTROY_VOLUME(&uLocal_326);
								}
								SAY_SINGLE_LINE_STRING_OVER_PAIN(&iLocal_71, "MISSING_PLAYER_NEAR_P", 1, 0, 2, 0);
								Function_307(&iLocal_297);
								Function_214(&iLocal_71, 7);
							}
							else
							{
								Function_237(iVar6);
							}
						}
						else
						{
							if (GET_TASK_STATUS(&iLocal_71, 50) != 1)
							{
								TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_71, -1.0f);
							}
							Function_237(iVar6);
						}
					}
					else if (Function_240(&uLocal_699, &iLocal_71, 25.0f) < 1)
					{
						if (ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 10.0f))
						{
							CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_71);
							if (IS_VOLUME_VALID(&uLocal_326))
							{
								DESTROY_VOLUME(&uLocal_326);
							}
							SAY_SINGLE_LINE_STRING_OVER_PAIN(&iLocal_71, "MISSING_PLAYER_NEAR_P", 1, 0, 2, 0);
							Function_307(&iLocal_297);
							Function_214(&iLocal_71, 7);
						}
						else
						{
							Function_237(iVar6);
						}
					}
					else
					{
						if (GET_TASK_STATUS(&iLocal_71, 87) != 1)
						{
							if (Function_240(&uLocal_699, &iLocal_71, 3.0f) >= 1)
							{
								TASK_FLEE_ACTORSET(&iLocal_71, &uLocal_699, 5.0f, 10.0f, 0, 1, 0);
							}
							else if (GET_TASK_STATUS(&iLocal_71, 5) != 1)
							{
								uVar5 = Function_234(&iLocal_71, &uLocal_699);
								if (IS_ACTOR_VALID(&uVar5))
								{
									TASK_KILL_CHAR(&iLocal_71, &uVar5);
								}
							}
						}
						Function_237(iVar6);
					}
					break;
				
				case 0x0000000E:
					if (Function_229(StackVal, &iLocal_71, Local_687) >= 10.0f)
					{
						TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_71, &Local_687, 0.0f, -1f);
						Function_214(&iLocal_71, 17);
					}
					else if (GET_TASK_STATUS(&iLocal_71, 61) != 1)
					{
						TASK_GO_NEAR_COORD(&iLocal_71, &Local_687, 5.0f, 4);
					}
					break;
				
				case 0x00000011:
					if (GET_TASK_STATUS(&iLocal_71, 18) != 1)
					{
						TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_71, &Local_687, 0.0f, -1f);
					}
					break;
				
				case 0x00000007:
					if (!iLocal_374)
					{
						Function_213(Function_216(), 1);
						iLocal_374 = 1;
						iLocal_376 = 1;
					}
					AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
					Function_233(&iLocal_701);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&iLocal_71, &Global_54076, 5.0f, 4);
					TASK_PRIORITY_SET(&iLocal_71, true);
					Function_345(7);
					Function_214(&iLocal_71, 8);
					break;
				
				case 0x00000008:
					if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
					{
						SET_ALLOW_RIDE_BY_AI(GET_MOUNT(&Global_54076), 1);
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_71, 1);
						if (IS_ACTOR_MALE(&iLocal_71))
						{
							SET_ANIM_SET_FOR_ACTOR(&iLocal_71, "gent_ride_passenger", 0);
						}
						else
						{
							SET_ANIM_SET_FOR_ACTOR(&iLocal_71, "fema_ride_passenger", 0);
							AI_SET_ALLOWED_MOUNT_DIRECTIONS(&iLocal_71, 79);
						}
						if (!iLocal_379)
						{
							SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_TELL_MISSING_PERSON_TO_GET_ON_HORSE", true, true, 2, 0, true, true);
							iLocal_379 = 1;
						}
						SET_MOUNTS_AS_PASSENGER(&iLocal_71, 1);
						TASK_MOUNT(&iLocal_71, GET_MOUNT(&Global_54076), 0, 1, 4, 2147483647);
						TASK_PRIORITY_SET(&iLocal_71, true);
						Function_214(&iLocal_71, 26);
					}
					else if (IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
					{
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_71, GET_VEHICLE(&Global_54076), 1, 4, 0);
						TASK_PRIORITY_SET(&iLocal_71, true);
						Function_214(&iLocal_71, 27);
					}
					else if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 25.0f))
					{
						Function_214(&iLocal_71, 1);
					}
					else
					{
						Function_237(iVar6);
					}
					break;
				
				case 0x0000001A:
					if (!IS_ACTOR_RIDING(&Global_54076) || !ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 25.0f))
					{
						Function_214(&iLocal_71, 1);
					}
					else if (IS_ACTOR_RIDING(&iLocal_71))
					{
						TASK_CLEAR(&iLocal_71);
						ACTOR_START_FORCE_HOLSTER(&iLocal_71, 1, 0);
						MEMORY_ALLOW_SHOOTING(&iLocal_71, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_71, 1);
						Function_214(&iLocal_71, 28);
						Function_345(7);
					}
					else if (ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 3.0f))
					{
						Function_232();
					}
					break;
				
				case 0x0000001B:
					if (!IS_ACTOR_DRIVING_VEHICLE(&Global_54076) || !ACTORS_IN_RANGE(&Global_54076, &iLocal_71, 25.0f))
					{
						Function_214(&iLocal_71, 1);
					}
					else if (IS_ACTOR_RIDING_VEHICLE(&iLocal_71))
					{
						TASK_CLEAR(&iLocal_71);
						ACTOR_START_FORCE_HOLSTER(&iLocal_71, 1, 0);
						MEMORY_ALLOW_SHOOTING(&iLocal_71, 0);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_71, 1);
						Function_214(&iLocal_71, 29);
						Function_345(7);
					}
					break;
				
				case 0x0000001C:
					iVar4 = 1;
					if (!IS_ACTOR_RIDING(&Global_54076) || !IS_ACTOR_RIDING(&iLocal_71))
					{
						TASK_DISMOUNT(&iLocal_71, 1);
						TASK_PRIORITY_SET(&iLocal_71, true);
						Function_214(&iLocal_71, 30);
					}
					else if (IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_71, "PassengerMount"))
					{
						Function_232();
					}
					else
					{
						Function_231();
						Function_237(iVar6);
					}
					break;
				
				case 0x0000001D:
					iVar4 = 1;
					if (!IS_ACTOR_RIDING(&Global_54076))
					{
						TASK_VEHICLE_LEAVE(&iLocal_71);
						TASK_PRIORITY_SET(&iLocal_71, true);
						Function_214(&iLocal_71, 30);
					}
					else
					{
						Function_237(iVar6);
					}
					break;
				
				case 0x0000001E:
					if (IS_ACTOR_RIDING(&iLocal_71))
					{
						if (GET_TASK_STATUS(&iLocal_71, 12) != 1)
						{
							TASK_DISMOUNT(&iLocal_71, 1);
							TASK_PRIORITY_SET(&iLocal_71, true);
						}
					}
					if (!IS_ACTOR_RIDING_VEHICLE(&iLocal_71) && !IS_ACTOR_RIDING(&iLocal_71))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_71, 1);
						Function_214(&iLocal_71, 1);
					}
					break;
				
				default:
					Function_214(&iLocal_71, 1);
					break;
				}
			}
	}
	if (iLocal_264 == 7)
	{
		if (IS_ACTOR_VALID(&iLocal_71))
		{
			if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip") == 1)
			{
				if (iVar4 == 1)
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip", 0);
					Function_292(1);
				}
			}
			else if (iVar4 == 0)
			{
				DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip", 1);
				Function_292(1);
			}
		}
		if (IS_VOLUME_VALID(&(uLocal_328[1])) && IS_VOLUME_VALID(&uLocal_324))
		{
			if (!DECOR_CHECK_EXIST(&(uLocal_328[1]), "bFallbackVolume"))
			{
				if (Function_229(StackVal, &iLocal_71, Local_687) > 15.0f)
				{
					if (iLocal_404 == Global_46838[1])
					{
						DESTROY_VOLUME(&(uLocal_328[1]));
						uLocal_328[1] = &uLocal_324;
						DECOR_SET_BOOL(&(uLocal_328[1]), "bFallbackVolume", 1);
						iVar7 = 0;
						while (iVar7 <= iLocal_31)
						{
							if (iVar7 != 0)
							{
								SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[iVar7]), &(uLocal_328[1]), 4, false);
							}
							iVar7++;
						}
					}
					else
					{
						DESTROY_VOLUME(&(uLocal_328[1]));
						uLocal_328[1] = &uLocal_324;
						DECOR_SET_BOOL(&(uLocal_328[1]), "bFallbackVolume", 1);
						iVar7 = 0;
						while (iVar7 <= iLocal_31)
						{
							if (iVar7 != 0)
							{
								SET_ACTOR_STAY_WITHIN_VOLUME(&(iLocal_31[iVar7]), &(uLocal_328[1]), 4, false);
							}
							iVar7++;
						}
					}
				}
			}
		}
	}
	if (!IS_ACTOR_VALID(&iLocal_71))
	{
		iLocal_372 = 1;
		Function_345(10);
	}
	else if (GET_ACTOR_HEALTH(&iLocal_71) >= 0.0f || GET_ACTOR_INCAPACITATED(&iLocal_71))
	{
		iLocal_372 = 1;
		Function_26();
		Function_345(10);
	}
	else if (IS_ACTOR_CRIPPLED(&iLocal_71, 3))
	{
		iLocal_372 = 1;
		Function_26();
		Function_345(10);
	}
	return;
}

void Function_231() //Position: 0xCDD3 / 52691
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_699))
	{
		uVar1 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (GET_TASK_STATUS(&uVar1, 6) != 1 || GET_TASK_STATUS(&uVar1, 84) != 1)
				{
					TASK_CLEAR(&uVar1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_232() //Position: 0xCE2C / 52780
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_699))
	{
		uVar1 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (ACTORS_IN_RANGE(&uVar1, &iLocal_71, 5.0f))
				{
					if (GET_TASK_STATUS(&uVar1, 6) != 1)
					{
						TASK_STAND_STILL(&uVar1, 3.0f, 0, 0);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_233(int iParam0) //Position: 0xCE89 / 52873
{
	if (IS_OBJECT_VALID(&iParam0))
	{
		SET_CAMERA_FOCUS_ENABLED(&iParam0, 0);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&iParam0, 0);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&iParam0, "pm_bh_look");
	}
	return;
}

var Function_234(var uParam0, int iParam1) //Position: 0xCEB9 / 52921
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (GET_ACTORSET_SIZE(&iParam1) != 0 || !IS_ACTORSET_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+20.0f;
	fVar3 = (fVar2 + 1.0f);
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(&iParam1) - 1))
	{
		if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0)))
		{
			fVar3 = Function_235(&uParam0, GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0));
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(&iParam1, bVar1);
	}
	return "";
}

float Function_235(var uParam0, int iParam1) //Position: 0xCF46 / 53062
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_236(&uVar0, &uVar2);
	return iVar4;
}

var Function_236(struct<2> Param0) //Position: 0xCF67 / 53095
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_237(int iParam0) //Position: 0xCF86 / 53126
{
	var uVar0;
	
	if (!Function_193(&iLocal_297))
	{
		Function_238(&iLocal_297, 10.0f);
	}
	else if (Function_294(&iLocal_297, 5.0f))
	{
		uVar0 = GET_LAST_ATTACK_TARGET(&Global_54076);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar0)) > 1.0f)
			{
				if (ACTORS_IN_RANGE(&iLocal_71, &uVar0, 10.0f) || ACTORS_IN_RANGE(&iLocal_71, &Global_54076, 6.0f))
				{
					if (GET_ACTOR_HEALTH(&uVar0) > 1.0f)
					{
						if (GET_ACTOR_FACTION(&uVar0) == 32)
						{
							SAY_SINGLE_LINE_STRING(&iLocal_71, "PLAYER_KILLS_ZOMBIE_P", true, true, 2, 0, true, false);
							Function_307(&iLocal_297);
						}
						else if (IS_ACTOR_HUMAN(&uVar0))
						{
							SAY_SINGLE_LINE_STRING(&iLocal_71, "PLAYER_KILLS_INNOCENT_P", true, true, 2, 0, true, false);
							Function_307(&iLocal_297);
						}
					}
				}
			}
		}
		uVar0 = GET_LAST_ATTACK_TARGET(&iLocal_71);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar0)) > 1.0f)
			{
				if (GET_ACTOR_HEALTH(&uVar0) > 1.0f)
				{
					if (GET_ACTOR_FACTION(&uVar0) == 32)
					{
						SAY_SINGLE_LINE_STRING(&iLocal_71, "SURVIVOR_TAUNTS_ZOMBIES_Z", true, true, 2, 0, true, false);
						Function_307(&iLocal_297);
					}
				}
			}
		}
		if (IS_ACTORSET_VALID(&uLocal_699))
		{
			if (Function_240(&uLocal_699, &iLocal_71, 25.0f) > 1)
			{
				if (Function_294(&iLocal_297, 15.0f))
				{
					SAY_SINGLE_LINE_STRING(&iLocal_71, "CRIES_OUT_IN_TEROR", true, true, 2, 0, true, false);
					Function_307(&iLocal_297);
				}
			}
			else if ((iParam0 != 28 || iParam0 != 29) || iParam0 != 8)
			{
				if (Function_294(&iLocal_297, 15.0f))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_71, "MISSING_RETURN_LINE_P", "", 0, 0, 0, 2, 0, 0, "GOSSIP_ABOUT_ZOMBIES", 1000, 0, 0);
					}
					else
					{
						SAY_SINGLE_LINE_STRING(&iLocal_71, "MISSING_RETURN_LINE_P", true, true, 2, 0, true, false);
					}
					Function_307(&iLocal_297);
				}
			}
		}
	}
	return;
}

void Function_238(int iParam0, float fParam1) //Position: 0xD1B9 / 53689
{
	if (!Function_193(&iParam0))
	{
		Function_219(&iParam0, fParam1);
	}
	return;
}

void Function_239(int iParam0) //Position: 0xD1D1 / 53713
{
	if (IS_OBJECT_VALID(&iParam0))
	{
		SET_CAMERA_FOCUS_ENABLED(&iParam0, 1);
		SET_CAMERA_FOCUS_PROMPT_ENABLED(&iParam0, 1);
		SET_CAMERA_FOCUS_PROMPT_TEXT(&iParam0, "pm_bh_look");
	}
	return;
}

int Function_240(var uParam0, int iParam1, bool bParam2) //Position: 0xD201 / 53761
{
	int iVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = GET_ACTORSET_SIZE(&uParam0);
	iVar3 = 0;
	if (IS_ACTOR_VALID(&iParam1))
	{
		if (IS_ACTOR_ALIVE(&iParam1))
		{
			bVar2 = false;
			while (bVar2 < (iVar0 - 1))
			{
				uVar1 = GET_ACTOR_FROM_ACTORSET(&uParam0, bVar2);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_ALIVE(&uVar1))
					{
						if (ACTORS_IN_RANGE(&uVar1, &iParam1, bParam2))
						{
							iVar3++;
						}
					}
				}
				bVar2++;
			}
		}
	}
	return iVar3;
}

var Function_241(var uParam0, int iParam1) //Position: 0xD26C / 53868
{
	int iVar0;
	
	iVar0 = Function_242(&iParam1, "missingPersonFocus", &uParam0, 50.0f, 100.0f);
	SET_CAMERA_FOCUS_PROMPT_TEXT(&iVar0, "pm_bh_look");
	SET_CAMERA_FOCUS_ENABLED(&iVar0, 0);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(&iVar0, 0);
	return &iVar0;
}

int Function_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xD2C1 / 53953
{
	if (IS_ACTOR_RIDING(&uParam2) || IS_ACTOR_RIDING_VEHICLE(&uParam2))
	{
		return CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uParam0, &uParam1, &uParam2, Vector(0.0f, 0,6f, 0.0f), uParam3, uParam4);
	}
	return CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &uParam0, &uParam1, &uParam2, Vector(0.0f, 1,6f, 0.0f), uParam3, uParam4);
}

int Function_243(struct<2> Param0) //Position: 0xD30F / 54031
{
	if (Global_6634 == 0)
	{
		if (VDIST(Param0, Global_54078) < 280.0f && !WOULD_ACTOR_BE_VISIBLE(false, &Param0, 3212836864))
		{
			Function_408(&Global_39906 + 8, 256);
			return 1;
		}
		if ((VDIST(Param0, Global_54078) < 220.0f && Function_294(&iLocal_301, 25.0f)) && iLocal_368 != 1)
		{
			iLocal_368 = 0;
			Function_307(&iLocal_301);
			Function_278(&Local_407, 1);
			if (IS_ACTOR_HOGTIED(&iLocal_71))
			{
				Function_277(&Local_407, "npm_bh_es3", 1);
			}
			else
			{
				Function_277(&Local_407, "npm_bh_es2", 1);
			}
		}
		else if (VDIST(Param0, Global_54078) > 220.0f)
		{
			iLocal_368 = 1;
		}
	}
	return 0;
}

var Function_244() //Position: 0xD3D7 / 54231
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 1000.0f;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		fVar3 = Function_229(StackVal, &Global_54076, Local_763[iVar02]);
		if (fVar3 > fVar2)
		{
			if (StackVal > Function_229(fVar3, &Global_54076, Local_690))
			{
				fVar2 = Function_229(StackVal, &Global_54076, Local_763[iVar02]);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (StackVal > Function_229(Function_229(StackVal, &Global_54076, Local_763[iVar12]), &Global_54076, Local_690))
	{
		return iVar1;
	}
	return 4294967295;
}

int Function_245(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xD460 / 54368
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_248(&iParam0, &Global_54076);
		if (!Function_409(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_246(&iParam0);
				return 1;
			}
		}
		if (!Function_409(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_246(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_246(&iParam0);
				return 1;
			}
		}
		if (!Function_409(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (uParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_246(&iParam0);
					return 1;
				}
				if (uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - uParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_246(&iParam0);
						return 1;
					}
				}
				uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_409(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_246(&iParam0);
				return 1;
			}
		}
		if (!Function_409(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_246(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_246(int iParam0) //Position: 0xD629 / 54825
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_247(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_247(int iParam0) //Position: 0xD666 / 54886
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_248(float fParam0, bool bParam1) //Position: 0xD67F / 54911
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_249() //Position: 0xD774 / 55156
{
	int iVar0;
	var uVar1;
	
	strcpy(&cLocal_265, "zombieMeleeSquad", 32);
	cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&cLocal_265) };
	cLocal_344 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_405, &cLocal_265));
	strcpy(&cLocal_265, "zombieShooterSquad", 32);
	cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&cLocal_265) };
	cLocal_348 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_405, &cLocal_265));
	strcpy(&cLocal_265, "missingPersonSquad", 32);
	cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&cLocal_265) };
	Local_346 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_405, &cLocal_265));
	strcpy(&cLocal_265, "nzombieset", 32);
	cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434(&cLocal_265) };
	uLocal_699 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_405, &cLocal_265, 0);
	if (!IS_VOLUME_VALID(&uLocal_322))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_322))
	{
		CLEAR_AMBIENT_OBJECTS_VOLUME(&uLocal_322, 15);
	}
	Function_268(bLocal_402);
	uVar1 = Function_268(bLocal_402);
	Function_292(1);
	Function_254();
	Function_268(bLocal_402);
	uVar1 = Function_268(bLocal_402);
	TELEPORT_ACTOR(&iLocal_71, &uVar1, 1, 1, 1);
	if (!IS_OBJECTSET_VALID(&uLocal_703))
	{
		iVar0 = 1;
		while (iVar0 < (bLocal_262 - 1))
		{
			Function_253();
			uVar1 = Function_253();
			TELEPORT_ACTOR(&(uLocal_45[iVar0]), &uVar1, 1, 1, 1);
			iVar0++;
		}
	}
	Function_252(&cLocal_344, &Global_54076, 4);
	Function_252(&Local_346, &Global_54076, 0);
	Function_251(&cLocal_344, &cLocal_344, 0);
	Function_250(&Local_346, 1, 3);
	Local_407.f_920 = 32;
	Function_292(1);
	return 1;
}

void Function_250(var uParam0, int iParam1, bool bParam2) //Position: 0xD906 / 55558
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				TASK_DRAW_HOLSTER_WEAPON(&uVar1, iParam1);
				TASK_PRIORITY_SET(&uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_251(var uParam0, char* cParam1, bool bParam2) //Position: 0xD95D / 55645
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&cParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			Function_252(&cParam1, &iVar1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_252(char* cParam0, int iParam1, bool bParam2) //Position: 0xD9B1 / 55729
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&cParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&cParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&cParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &iParam1, bParam2);
			MEMORY_IDENTIFY(&uVar1, &iParam1);
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(&iParam1, &uVar1);
				MEMORY_CONSIDER_AS(&iParam1, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

struct<8> Function_253() //Position: 0xDA2E / 55854
{
	struct<2> Var0;
	struct<9> Var2;
	
	Function_268(bLocal_402);
	vVar2 = Function_268(bLocal_402);
	if (!Function_267(StackVal, vVar2))
	{
		AMBIENT_SET_SEARCH_CENTER(vVar2);
		AMBIENT_SET_DISTANCE_FILTER(1.0f, 20.0f);
		if (AMBIENT_GET_POINT(&Var0, 0))
		{
			return StackVal, Var0;
		}
		Var0 = Vector((vVar2.x + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar2.y + RAND_FLOAT_RANGE(0.0f, 5.0f)), (vVar2.z + RAND_FLOAT_RANGE(0.0f, 5.0f)));
		vVar2 = Var0;
		FIND_GROUND_INTERSECTION(&vVar2, 25.0f, &Var0, &uVar4);
	}
	return StackVal, Var0;
}

int Function_254() //Position: 0xDAA3 / 55971
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	bool bVar9;
	var uVar10;
	float fVar11;
	float fVar12;
	
	Function_268(bLocal_402);
	Var7 = Function_268(bLocal_402);
	cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("mpDefend") };
	uLocal_326 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iLocal_405, &cLocal_265, 2,802597E-45f, Var7, Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 10.0f, 10.0f));
	FIRE_STOP_FLAMES_IN_VOLUME(&uLocal_326);
	RESET_RMPTFX_IN_VOLUME(&uLocal_326);
	iVar5 = 0;
	while (iVar5 < (bLocal_262 - 1))
	{
		bVar0 = iLocal_87[iVar5];
		if (!Function_108(bVar0) || bVar0 != 0)
		{
			bVar0 = Function_257(8, 0, 0, 4294967295, 1);
		}
		if (!IS_OBJECTSET_VALID(&uLocal_703))
		{
			uVar10 = CREATE_OBJECTSET_IN_LAYOUT(Function_32(), &iLocal_405, 4294967295, 0);
			bVar9 = Function_215(&uVar10);
			if (IS_OBJECT_VALID(&bVar9))
			{
				GET_OBJECT_POSITION(&bVar9, &Var1);
				REMOVE_OBJECT_FROM_OBJECTSET(&bVar9, &uVar10);
			}
			else
			{
				GET_VOLUME_CENTER(&Global_44085[bLocal_4029] + 8, &Var1);
				FIND_GROUND_INTERSECTION(&Var1, 40.0f, &Var1, &Var3);
			}
			DESTROY_OBJECTSET(&uVar10);
			if (iVar5 == 0)
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("missingPerson") };
				Var1 = Vector(StackVal, StackVal, (((Var1 + IntToFloat(iVar5 * 1)) + IntToFloat(iVar5 * 1)) + IntToFloat(iVar5 * 1)));
				uLocal_45[iVar5] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_405, &cLocal_265, Global_39906.f_20, Var1, Vector(0.0f, 0.0f, 0.0f));
			}
			else
			{
				cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieAttacker") };
				Var1 = Vector(StackVal, StackVal, (((Var1 + IntToFloat(iVar5 * 1)) + IntToFloat(iVar5 * 1)) + IntToFloat(iVar5 * 1)));
				uLocal_45[iVar5] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_405, &cLocal_265, bVar0, Var1, Vector(0.0f, 0.0f, 0.0f));
			}
		}
		else if (iVar5 == 0)
		{
			cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("missingPerson") };
			Function_268(bLocal_402);
			Var1 = Function_268(bLocal_402);
			uLocal_45[iVar5] = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_405, &cLocal_265, Global_39906.f_20, Var1, Vector(0.0f, 0.0f, 0.0f));
		}
		else
		{
			cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("zombieAttacker") };
			bVar9 = Function_215(&uLocal_703);
			if (IS_OBJECT_VALID(&bVar9))
			{
				GET_OBJECT_POSITION(&bVar9, &Var1);
				GET_OBJECT_ORIENTATION(&bVar9, &Var3);
				Var1 = Vector(StackVal, StackVal, ((Var1 + RAND_FLOAT_RANGE(-0,5f, 0,5f)) + RAND_FLOAT_RANGE(-0,5f, 0,5f)));
				uLocal_45[iVar5] = CREATE_ACTOR_IN_LAYOUT(&iLocal_405, &cLocal_265, bVar0, Var1, Var3);
			}
		}
		DECOR_SET_BOOL(&(uLocal_45[iVar5]), "bShopDontKill", 1);
		REFERENCE_ACTOR(&(uLocal_45[iVar5]));
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uLocal_45[iVar5]), 1);
		if (!IS_ACTOR_VALID(&(uLocal_45[iVar5])))
		{
			return 0;
		}
		Function_214(&(uLocal_45[iVar5]), 0);
		Function_35(GET_OBJECT_FROM_ACTOR(&(uLocal_45[iVar5])));
		if (iVar5 == 0)
		{
			Function_268(bLocal_402);
			Var7 = Function_268(bLocal_402);
			TELEPORT_ACTOR(&iLocal_71, &Var7, 1, 1, 1);
			iVar6 = 32;
			Function_256(&Local_407, iVar6);
		}
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&(uLocal_45[iVar5]));
		if (iVar5 == 0)
		{
			iLocal_71 = &uLocal_45[iVar5];
			MEMORY_ALLOW_SHOOTING(&iLocal_71, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_71, 0);
			SET_ACTOR_FACTION(&iLocal_71, 20);
			GIVE_WEAPON_TO_ACTOR(&iLocal_71, 40, 0f, 1, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_71, 0,1f);
			ACTOR_END_FORCE_HOLSTER(&iLocal_71);
			SQUAD_JOIN(&iLocal_71, &Local_346);
			SQUAD_GOAL_ADD_COMBAT(&Local_346, 0, 4294967295, 0);
			TASK_PRIORITY_SET(&iLocal_71, true);
			DECOR_SET_BOOL(&iLocal_71, "BeLassoBounceOff", 1);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_71, 0, 0);
			MEMORY_CONSIDER_AS(&iLocal_71, &Global_54076, false);
			SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, &iLocal_71, 3);
			SET_ACTOR_UNKILLABLE(&iLocal_71, 1);
			SET_ACTOR_OVERHEALTH_MODE(&iLocal_71, true);
			fVar11 = GET_ACTOR_MAX_HEALTH(&iLocal_71);
			fVar12 = COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&iLocal_71);
			SET_ACTOR_MAX_HEALTH(&iLocal_71, (fVar11 * 1,8f));
			SET_ACTOR_HEALTH(&iLocal_71, (fVar11 * 1,8f));
			fVar12 = (fVar12 * 1,6f);
			Function_255(&iLocal_71, fVar12, 0x40400000, 0x40000000);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iLocal_71, 1.0f, 2.0f);
			AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iLocal_71, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&iLocal_71, 1);
			UNK_0x261A4C0E(&iLocal_71, 40, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_71, 28, 1.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_71, 0, 1);
			AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&iLocal_71, 0, 1);
			SET_ACTOR_PROOF(&iLocal_71, 16);
		}
		else
		{
			ADD_ACTORSET_MEMBER(&uLocal_699, &(uLocal_45[iVar5]));
			if (!Function_196(&(uLocal_45[iVar5])))
			{
				Function_33(&(uLocal_45[iVar5]), 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
			}
			if (!Function_195(&(uLocal_45[iVar5])))
			{
				SQUAD_JOIN(&(uLocal_45[iVar5]), &cLocal_344);
			}
			else
			{
				SQUAD_JOIN(&(uLocal_45[iVar5]), &cLocal_348);
			}
			SET_ACTOR_FACTION(&(uLocal_45[iVar5]), 32);
			MEMORY_CONSIDER_AS_ENEMY(&iLocal_71, &(uLocal_45[iVar5]));
			MEMORY_REPORT_POSITION_AUTO(&iLocal_71, &(uLocal_45[iVar5]), 1);
		}
		SET_ACTOR_VOLUME_PARAMETERS(&(uLocal_45[iVar5]), 1, 0);
		iVar5++;
	}
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iLocal_71, 0,1f);
	return 1;
}

void Function_255(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0xDF6F / 57199
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

void Function_256(struct<921> Param0) //Position: 0xDFC0 / 57280
{
	Param0.f_920 = iParam1;
	return;
}

int Function_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xDFCE / 57294
{
	return Function_258(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_258(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xDFEB / 57323
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_261(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_261(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_261(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_261(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_261(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_261(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_261(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_261(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_261(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_261(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_261(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_261(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_261(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_261(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_259(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_259(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0xE24E / 57934
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_260(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_260(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_260(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_260(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_260(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_260(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_260(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_260(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_260(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_260(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_260(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_260(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_260(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_260(&(Global_46972[13]), &bVar0);
	}
	return Function_261(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_260(var uParam0, bool bParam1) //Position: 0xE3BD / 58301
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_261(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0xE481 / 58497
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_266();
	}
	iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_108(iVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_265(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_265(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	iVar0 = iVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_264(iVar0) && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_108(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_264(iVar0))
				{
					Function_263();
				}
				Function_262(iVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(iVar1) != iParam3 && iVar2 > 20)
			{
				iVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_108(iVar1))
				{
					iVar0 = iVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(iVar0))
	{
		if (iParam2 == 0)
		{
			LOG_ERROR("Did not get a matching species, but RANDACTORFILTER_IGNORE was passed in. Did you really mean RANDACTORFILTER_ONLY_SPECIES_SPECIFIED? Update to use RANDACTORFILTER_ONLY_SPECIES_SPECIFIED or RANDACTORFILTER_IGNORE + ANIMALSPECIES_INVALID");
		}
		else
		{
			LOG_ERROR("We asked for a matching species, and did not get one");
		}
	}
	return iVar0;
}

void Function_262(int iParam0) //Position: 0xE77A / 59258
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_263() //Position: 0xE82E / 59438
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_264(int iParam0) //Position: 0xE869 / 59497
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_265(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xE896 / 59542
{
	int iVar0;
	
	PRINTSTRING("NoDupes=");
	if (bParam1)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  RANDACTOR_FILTER=");
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_266() //Position: 0xE9F1 / 59889
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_263();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_263();
	return;
}

bool Function_267(char* cParam0) //Position: 0xEA3D / 59965
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_268(bool bParam0) //Position: 0xEA55 / 59989
{
	struct<2> Var0;
	
	if (bParam0 == Global_46838[3])
	{
		Var0 = Vector(-3118,961f, 49,42f, 3286,439f);
	}
	else if (bParam0 == Global_46760[5])
	{
		Var0 = Vector(-1864,33f, 25,664f, 3306,285f);
	}
	else if (bParam0 == Global_46760[13])
	{
		Var0 = Vector(-1949,244f, 30,338f, 3469,343f);
	}
	else if (bParam0 == Global_46760[16])
	{
		Var0 = Vector(-2007,135f, 42,041f, 3046,983f);
	}
	else if (bParam0 == Global_46760[3])
	{
		Var0 = Vector(-2335,732f, 17,067f, 3169,393f);
	}
	else if (bParam0 == Global_46796[4])
	{
		Var0 = Vector(-3690,673f, 9,528f, 3468,674f);
	}
	else if (bParam0 == Global_46816[5])
	{
		Var0 = Vector(-1235,133f, 22,243f, 3208,729f);
	}
	else if (bParam0 == Global_46796[6])
	{
		Var0 = Vector(-4314,44f, 5,097f, 3743,612f);
	}
	else if (bParam0 == Global_46796[7])
	{
		Var0 = Vector(-4015,083f, 21,468f, 2398,392f);
	}
	else if (bParam0 == Global_46760[15])
	{
		Var0 = Vector(-2901,481f, 16,386f, 2946,03f);
	}
	else if (bParam0 == Global_46760[1])
	{
		Var0 = Vector(-3245,906f, 16,316f, 2715,521f);
	}
	else if (bParam0 == Global_46838[0])
	{
		Var0 = Vector(-3196,196f, 41,156f, 3738,181f);
	}
	else if (bParam0 == Global_46760[14])
	{
		Var0 = Vector(-2303,734f, 24,287f, 3008,607f);
	}
	else if (bParam0 == Global_46760[0])
	{
		Var0 = Vector(-2129,758f, 16,612f, 2630,102f);
	}
	else if (bParam0 == Global_46760[11])
	{
		Var0 = Vector(-2829,906f, 20,079f, 3076,325f);
	}
	else if (bParam0 == Global_46760[2])
	{
		Var0 = Vector(-2426,047f, 26,369f, 2120,875f);
	}
	else if (bParam0 == Global_46796[1])
	{
		Var0 = Vector(-3646,912f, 42,814f, 2093,528f);
	}
	else if (bParam0 == Global_46796[3])
	{
		Var0 = Vector(-4453,476f, 12,618f, 3223,782f);
	}
	else if (bParam0 == Global_46816[8])
	{
		Var0 = Vector(123,738f, 72,413f, 2671,731f);
	}
	else if (bParam0 == Global_46866[3])
	{
		Var0 = Vector(-2233,617f, 23,09f, 4449,934f);
	}
	else if (bParam0 == Global_46894[3])
	{
		Var0 = Vector(344,477f, 78,948f, 3455,223f);
	}
	else if (bParam0 == Global_46894[8])
	{
		Var0 = Vector(-83,019f, 53,032f, 2844,255f);
	}
	else if (bParam0 == Global_46866[11])
	{
		Var0 = Vector(-1146,471f, 28,072f, 4818,883f);
	}
	else if (bParam0 == Global_46866[8])
	{
		Var0 = Vector(-1450,569f, 19,691f, 4914,006f);
	}
	else if (bParam0 == Global_46866[12])
	{
		Var0 = Vector(-2150,069f, 18,748f, 4971,016f);
	}
	else if (bParam0 == Global_46894[2])
	{
		Var0 = Vector(-804,788f, 16,665f, 3699,215f);
	}
	else if (bParam0 == Global_46894[0])
	{
		Var0 = Vector(-403,609f, 27,601f, 3892,949f);
	}
	else if (bParam0 == Global_46866[2])
	{
		Var0 = Vector(-1470,671f, 17,202f, 3914,359f);
	}
	else if (bParam0 == Global_46894[4])
	{
		Var0 = Vector(-1323,309f, 82,925f, 3596,965f);
	}
	else if (bParam0 == Global_46894[5])
	{
		Var0 = Vector(-594,065f, 30,878f, 4006,953f);
	}
	else if (bParam0 == Global_46866[1])
	{
		Var0 = Vector(-1717,67f, 11,281f, 4220,109f);
	}
	else if (bParam0 == Global_46760[10])
	{
		Var0 = Vector(-2832,871f, 50,332f, 2416,219f);
	}
	else
	{
		PRINTSTRING("The bad bh region is: ");
		PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
		PRINTNL();
		LOG_ERROR("No True bounty location...we're guessing here!");
		GET_VOLUME_CENTER(&Global_44085[bParam09] + 8, &Var0);
	}
	return StackVal, Var0;
}

void Function_269(struct<1093> Param0) //Position: 0xEEFF / 61183
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_105(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_267(StackVal, Param3))
	{
		(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_408(&Param0 + 1048, 4);
	}
	else
	{
		Function_3(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_120(Param0.f_1092))
		{
			Function_276(Param0.f_1092, 1);
			Function_408(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_408(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_271(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_270(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_307(&Param0 + 1032);
	}
	Function_307(&Param0 + 60);
	Function_28(0);
}

void Function_270(var uParam0, bool bParam1) //Position: 0xF076 / 61558
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_271(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, float fParam5) //Position: 0xF0BD / 61629
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	int iVar15;
	
	Function_274(10.0f);
	Var12 = { StackVal, Function_274(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_108(&iParam4) || &iParam4 != 0)
		{
			bVar14 = Function_257(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &iParam4;
		}
		iVar15 = 0;
		while (iVar15 < (iParam2 - 1))
		{
			Function_272(&Var12, iVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_272(&Var12, iVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			iVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

struct<8> Function_272(vector3 vParam0) //Position: 0xF1B7 / 61879
{
	struct<2> Var0;
	
	if (!Function_273(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (iParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, iParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_273(int iParam0) //Position: 0xF304 / 62212
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_274(int iParam0) //Position: 0xF328 / 62248
{
	Function_275(iParam0, 10);
	return StackVal, Function_275(iParam0, 10);
}

struct<8> Function_275(var uParam0, int iParam1) //Position: 0xF335 / 62261
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_276(int iParam0, int iParam1) //Position: 0xF350 / 62288
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	iVar0 = Function_121(iParam0);
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_387(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_119(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

var Function_277(int iParam0, struct<4> Param1) //Position: 0xF3F7 / 62455
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(&iParam0 + 76[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(&iParam0 + 76[iVar24], &Param1, 16);
			iVar1 = 3;
		}
		iVar1++;
	}
	if (iVar2 <= 3)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (!IS_STRING_VALID(&Param1))
	{
		iVar0 = 0;
	}
	strcpy(&iParam0 + 76[iVar24], &Param1, 16);
	(*&iParam0 + 184)[iVar2] = 0;
	(*&iParam0 + 216)[iVar2] = &iParam2;
	return iVar0;
}

void Function_278(struct<181> Param0) //Position: 0xF479 / 62585
{
	int iVar0;
	
	if (&bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (Param0.f_76 - 1))
	{
		strcpy(&Param0 + 76[iVar04], "", 16);
		(*&Param0 + 184)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_180 = 0;
	return;
}

bool Function_279(struct<1049> Param0) //Position: 0xF4C7 / 62663
{
	if (Function_409(Param0.f_1048, 1024))
	{
		return 1;
	}
	return 0;
}

int Function_280(var uParam0, int iParam1) //Position: 0xF4E2 / 62690
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_282(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_281(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_281(int iParam0, var uParam1, struct<2> Param2) //Position: 0xF64C / 63052
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

int Function_282(int iParam0) //Position: 0xF6F4 / 63220
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_283(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_229(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_283(iVar0);
						}
					}
					else if (Function_229(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_283(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_283(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_283(int iParam0) //Position: 0xF862 / 63586
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

struct<8> Function_284(int iParam0) //Position: 0xF8CA / 63690
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_285(int iParam0) //Position: 0xF8DC / 63708
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_286() //Position: 0xF8F1 / 63729
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_268(bLocal_402);
	Var2 = Function_268(bLocal_402);
	Function_304(StackVal, StackVal, Global_54078, Var2, &Var0);
	if (Function_287(&(Global_43791[Global_43788]), 32) && VMAG(Var0) > 100.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_287(var uParam0, int iParam1) //Position: 0xF92F / 63791
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_288(int iParam0) //Position: 0xF94C / 63820
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_428(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = 4294967295;
		}
		else if (StackVal == 2)
		{
			iVar0 = iParam0;
		}
		else if (StackVal || (StackVal || (StackVal || (StackVal || StackVal != 6 != 5) != 3) != 4) != 7)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			LOG_ERROR("GET_DISTRICT_FROM_REGION - This area type needs to be defined");
			iVar0 = Global_44085[iParam09];
		}
	}
	return iVar0;
}

int Function_289(int iParam0) //Position: 0xFA22 / 64034
{
	return Function_290(iParam0);
}

int Function_290(int iParam0) //Position: 0xFA2D / 64045
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_428(iParam0))
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

bool Function_291() //Position: 0xFA85 / 64133
{
	if (!Function_201(&iLocal_113))
	{
		return 0;
	}
	return 1;
}

void Function_292(int iParam0) //Position: 0xFA97 / 64151
{
	var uVar0;
	
	if (IS_BLIP_VALID(&uLocal_388))
	{
		REMOVE_BLIP(&uLocal_388);
	}
	if (IS_BLIP_VALID(&uLocal_390))
	{
		REMOVE_BLIP(&uLocal_390);
	}
	if (IS_OBJECT_VALID(&uLocal_386))
	{
		DESTROY_OBJECT(&uLocal_386);
	}
	if (iParam0 == 1)
	{
		if (IS_VOLUME_VALID(&uLocal_324))
		{
			if (!iLocal_377)
			{
				uLocal_390 = ADD_BLIP_FOR_OBJECT(GET_VOLUME_FROM_OBJECT(&uLocal_324), 330, -1.0f, 3, 0);
				SET_BLIP_PRIORITY(&uLocal_390, 3);
			}
			else if (iLocal_378)
			{
				uLocal_390 = ADD_BLIP_FOR_OBJECT(GET_VOLUME_FROM_OBJECT(&uLocal_324), 330, -1.0f, 3, 0);
				SET_BLIP_PRIORITY(&uLocal_390, 3);
			}
		}
		switch (iLocal_264)
		{
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				if (IS_VOLUME_VALID(&uLocal_326))
				{
					uLocal_388 = ADD_BLIP_FOR_OBJECT(GET_OBJECT_FROM_VOLUME(&uLocal_326), 549, -1.0f, 3, 0);
					SET_BLIP_PRIORITY(&uLocal_388, 3);
				}
				else if (IS_VOLUME_VALID(&uLocal_322))
				{
					if (!IS_OBJECT_VALID(&uLocal_386))
					{
						Function_268(bLocal_402);
						uLocal_386 = CREATE_POINT_IN_LAYOUT(StackVal, &iLocal_405, "targetBlip", Function_268(bLocal_402), Vector(0.0f, 0.0f, 0.0f));
					}
					uLocal_388 = ADD_BLIP_FOR_OBJECT(&uLocal_386, 549, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uLocal_388, 3);
				}
				if (IS_BLIP_VALID(&uLocal_388) && iLocal_803 != 0)
				{
					SET_BLIP_BLINK(&uLocal_388, 1, 0, 5f);
					Function_307(&iLocal_289);
					iLocal_803 = 1;
				}
				uVar0 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_39906.f_20);
				SET_BLIP_NAME(&uLocal_388, &uVar0);
				SET_BLIP_COLOR(&uLocal_388, 0,34f, 0,58f, 0,74f, 1.0f);
				break;
			
			case 0x00000005:
				Function_252(&cLocal_344, &Global_54076, 4);
			
			case 0x00000004:
			case 0x00000006:
				if (IS_ACTOR_VALID(&iLocal_71))
				{
					if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip") == 0)
					{
						DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip", 1);
					}
					if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip") == 1)
					{
						uLocal_388 = ADD_BLIP_FOR_ACTOR(&iLocal_71, 549, -1.0f, 3, 0);
						SET_BLIP_PRIORITY(&uLocal_388, 3);
					}
				}
				if (IS_ACTOR_ALIVE(&iLocal_71))
				{
					uVar0 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_39906.f_20);
					if (IS_BLIP_VALID(&uLocal_388))
					{
						SET_BLIP_NAME(&uLocal_388, &uVar0);
						SET_BLIP_COLOR(&uLocal_388, 0,34f, 0,58f, 0,74f, 1.0f);
					}
				}
				else if (IS_BLIP_VALID(&uLocal_388))
				{
					SET_BLIP_NAME(&uLocal_388, "npm_bh_tnm");
					SET_BLIP_IMPAIRMENT_MASK(&uLocal_388, false);
				}
				break;
			
			case 0x00000007:
				if (iLocal_364 == 0)
				{
					if (IS_ACTOR_VALID(&iLocal_71))
					{
						if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip") == 0)
						{
							DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip", 1);
						}
						if (IS_ACTOR_ALIVE(&iLocal_71))
						{
							if (DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&iLocal_71), "bountyhunter_blip") == 1)
							{
								uLocal_388 = ADD_BLIP_FOR_ACTOR(&iLocal_71, 549, -1.0f, 3, 0);
								uVar0 = GET_ACTOR_ENUM_STRING_FROM_ENUM(Global_39906.f_20);
								SET_BLIP_NAME(&uLocal_388, &uVar0);
								SET_BLIP_COLOR(&uLocal_388, 0,34f, 0,58f, 0,74f, 1.0f);
							}
						}
					}
				}
				break;
		}
		Function_293(1, 0x41200000);
	}
	return;
}

void Function_293(int iParam0, var uParam1) //Position: 0xFDE4 / 64996
{
	if (!Function_13())
	{
		switch (&iParam0)
		{
			case 0x00000001:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &uParam1, 0);
				break;
			
			case 0x00000002:
				SET_HUD_MAP_DRAW_ENABLED_TIMED(1, &uParam1, 0);
				break;
			
			default:
				break;
			}
	}
	return;
}

bool Function_294(int iParam0, float fParam1) //Position: 0xFE1E / 65054
{
	if (Function_193(&iParam0))
	{
		if (Function_217(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_295(struct<909> Param0) //Position: 0xFE3C / 65084
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_54078, *(&Param0 + 8));
	bVar3 = VDIST(Global_54078, *(&Param0 + 20));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_99146 != 1 || Global_6637 != 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_167() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_908 <= Param0.f_756)
	{
		if (STRING_LENGTH(&Param0 + 620[Param0.f_9084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_296() //Position: 0xFEE3 / 65251
{
	int iVar0;
	char* cVar1[64];
	char* cVar17[32];
	
	bLocal_262 = Global_39906.f_16;
	if (bLocal_262 == 0)
	{
		bLocal_262 = 4;
		LOG_ERROR("0 BOUNTY ENEMIES?");
	}
	strcpy(&cVar1, "bh number of enemies = ", 64);
	stradd(&cVar1, INT_TO_STRING(bLocal_262), 64);
	Function_299(&iLocal_87, Global_39906.f_12);
	iVar0 = 0;
	while (iVar0 <= iLocal_87)
	{
		Function_207(&iLocal_113, iLocal_87[iVar0], 2, 0);
		PRINTSTRING("Adding to the bad guy enums: ");
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(iLocal_87[iVar0]));
		PRINTNL();
		iVar0++;
	}
	Function_207(&iLocal_113, Global_39906.f_20, 2, 0);
	Function_297(&iLocal_113, "dlc_zombiepack_pmp", 10, 0);
	if (Global_39906.f_40 <= 16)
	{
		strcpy(&cVar17, "$/fragments/p_pos_missing", 32);
		if (Global_39906.f_40 + 1 <= 10)
		{
			stradd(&cVar17, "0", 32);
		}
		stradd(&cVar17, INT_TO_STRING(Global_39906.f_40 + 1), 32);
		stradd(&cVar17, "x", 32);
		Function_297(&iLocal_113, &cVar17, 0, 0);
	}
	Function_297(&iLocal_113, "$/content/scripting/gringo/simplegringo/handoff", 1, 0);
	Function_297(&iLocal_113, "$/content/scripting/gringo/SimpleGringo/Locked_FootLocker", 1, 0);
	Function_207(&iLocal_113, 1129, 3, 0);
	return;
}

var Function_297(struct<2>[] Param0, char* cParam1, int iParam2, bool bParam3) //Position: 0x100AC / 65708
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&cParam1, iParam2);
	iVar0 = Function_298(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_204(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_298(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x100EA / 65770
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_8(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_204(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_299(int[] iParam0, int iParam1) //Position: 0x101B9 / 65977
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (&iParam1 == 0)
	{
		iParam1 = 3;
	}
	switch (&iParam1)
	{
		case 0x00000001:
			iParam0[iVar1] = 1216;
			iVar1++;
			iParam0[iVar1] = 1214;
			iVar1++;
			iParam0[iVar1] = 1215;
			iVar1++;
			break;
		
		case 0x00000002:
			iParam0[iVar1] = 1204;
			iVar1++;
			iParam0[iVar1] = 1219;
			iVar1++;
			iParam0[iVar1] = 1218;
			iVar1++;
			iParam0[iVar1] = 1217;
			iVar1++;
			break;
		
		case 0x00000003:
			iParam0[iVar1] = 1204;
			iVar1++;
			iParam0[iVar1] = 1205;
			iVar1++;
			iParam0[iVar1] = 1220;
			iVar1++;
			iParam0[iVar1] = 1221;
			iVar1++;
			break;
		
		case 0x00000004:
			iParam0[iVar1] = 1222;
			iVar1++;
			iParam0[iVar1] = 1209;
			iVar1++;
			iParam0[iVar1] = 1214;
			iVar1++;
			iParam0[iVar1] = 1215;
			iVar1++;
			iParam0[iVar1] = 1216;
			iVar1++;
			iParam0[iVar1] = 1217;
			iVar1++;
			break;
		
		case 0x00000005:
			iParam0[iVar1] = 1208;
			iVar1++;
			iParam0[iVar1] = 1209;
			iVar1++;
			iParam0[iVar1] = 1222;
			iVar1++;
			iParam0[iVar1] = 1221;
			iVar1++;
			iParam0[iVar1] = 1218;
			iVar1++;
			iParam0[iVar1] = 1219;
			iVar1++;
			break;
		
		case 0x00000006:
			iParam0[iVar1] = 1208;
			iVar1++;
			iParam0[iVar1] = 1209;
			iVar1++;
			iParam0[iVar1] = 1222;
			iVar1++;
			iParam0[iVar1] = 1204;
			iVar1++;
			iParam0[iVar1] = 1220;
			iVar1++;
			iParam0[iVar1] = 1221;
			iVar1++;
			break;
		
		default:
			LOG_ERROR("Unhandled Bounty Hunter Target Type");
			break;
	}
	while (iVar1 <= 12)
	{
		iVar0 = Function_300(&iParam0);
		if (Function_108(iVar0))
		{
			iParam0[iVar1] = iVar0;
			iVar1++;
		}
	}
	return;
}

var Function_300(int iParam0) //Position: 0x10430 / 66608
{
	int iVar0;
	
	iVar0 = Function_302(&(Global_46972[1]), 4, 0, 1);
	if (Function_108(iVar0))
	{
		if (!Function_301(iVar0, &iParam0))
		{
			return iVar0;
		}
		iVar0 = Function_302(&(Global_46972[0]), 4, 0, 1);
		if (Function_108(iVar0))
		{
			if (!Function_301(iVar0, &iParam0))
			{
				return iVar0;
			}
			iVar0 = Function_302(&(Global_46972[3]), 4, 0, 1);
			if (Function_108(iVar0))
			{
				if (!Function_301(iVar0, &iParam0))
				{
					return iVar0;
				}
				iVar0 = Function_302(&(Global_46972[2]), 4, 0, 1);
				if (Function_108(iVar0))
				{
					return iVar0;
				}
			}
		}
	}
	return 4294967295;
}

bool Function_301(int iParam0, int[] iParam1) //Position: 0x104CC / 66764
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= iParam1)
	{
		if (iParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_302(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0x10500 / 66816
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(StackVal, &uParam0, &iParam1, &iParam2, &iParam3, 0f, Vector(0.0f, 0.0f, 0.0f));
}

var Function_303(int iParam0) //Position: 0x1051C / 66844
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = IS_POPSET_VALID(&(Global_46972[0]));
			break;
		
		case 0x00000002:
			bVar0 = IS_POPSET_VALID(&(Global_46972[1]));
			break;
		
		case 0x00000004:
			bVar0 = IS_POPSET_VALID(&(Global_46972[2]));
			break;
		
		case 0x00000008:
			bVar0 = IS_POPSET_VALID(&(Global_46972[3]));
			break;
		
		case 0x00000010:
			bVar0 = IS_POPSET_VALID(&(Global_46972[4]));
			break;
		
		case 0x00000020:
			bVar0 = IS_POPSET_VALID(&(Global_46972[5]));
			break;
		
		case 0x00000040:
			bVar0 = IS_POPSET_VALID(&(Global_46972[6]));
			break;
		
		case 0x00000080:
			bVar0 = IS_POPSET_VALID(&(Global_46972[7]));
			break;
		
		case 0x00000100:
			bVar0 = IS_POPSET_VALID(&(Global_46972[8]));
			break;
		
		case 0x00000200:
			bVar0 = IS_POPSET_VALID(&(Global_46972[9]));
			break;
		
		case 0x00000400:
			bVar0 = IS_POPSET_VALID(&(Global_46972[10]));
			break;
		
		case 0x00000800:
			bVar0 = IS_POPSET_VALID(&(Global_46972[11]));
			break;
		
		case 0x00001000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[12]));
			break;
		
		case 0x00002000:
			bVar0 = IS_POPSET_VALID(&(Global_46972[13]));
			break;
		
		case 0x40000000:
			bVar0 = false;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			bVar0 = false;
			break;
	}
	return bVar0;
}

void Function_304(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1069C / 67228
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_305() //Position: 0x106C0 / 67264
{
	var uVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	var uVar6;
	struct<2> Var8;
	var uVar10;
	bool bVar11;
	
	switch (iLocal_810)
	{
		case 0x00000000:
			if (iLocal_353 == 1)
			{
				if (IS_ACTOR_ALIVE(&iLocal_71))
				{
					if (!IS_OBJECT_VALID(&uVar0))
					{
						cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbirdpoint") };
						Function_70(&iLocal_71);
						Var1 = Function_70(&iLocal_71);
						uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, &iLocal_405, &cLocal_265, Var1, Vector(0.0f, 0.0f, 0.0f));
						iVar3 = 1;
					}
					if (!SQUAD_IS_VALID(&iLocal_804))
					{
						cLocal_265 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nbirdSquad") };
						iLocal_804 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_405, &cLocal_265));
						if (SQUAD_IS_VALID(&iLocal_804))
						{
							Function_271(&iLocal_405, &iLocal_804, 3, &uVar0, 1129, 0x41200000);
							Function_270(&iLocal_804, 0);
						}
					}
					if (iVar3 == 1)
					{
						DESTROY_OBJECT(&uVar0);
					}
					Function_307(&iLocal_806);
					iLocal_810 = 1;
				}
				else
				{
					iLocal_810 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (Function_294(&iLocal_806, 7.0f))
			{
				if (SQUAD_IS_VALID(&iLocal_804))
				{
					if (IS_ACTOR_VALID(&iLocal_71))
					{
						Function_70(&iLocal_71);
						Var1 = Function_70(&iLocal_71);
						bVar11 = false;
						while (bVar11 < (SQUAD_GET_SIZE(&iLocal_804) - 1))
						{
							uVar10 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_804, bVar11);
							Var8 = Vector(0.0f, 0.0f, RAND_FLOAT_RANGE(3.0f, 9.0f));
							ROTATE_VECTOR_XZ(&Var8, RAND_FLOAT_RANGE(0.0f, 360.0f), 0);
							uVar4 = Vector(StackVal, StackVal, StackVal) + Vector(Var8, Var1, StackVal);
							FIND_GROUND_INTERSECTION(&uVar4, 100.0f, &uVar4, &uVar6);
							TASK_BIRD_LAND_AT_COORD(&uVar10, &uVar4);
							bVar11++;
						}
						Function_306(&iLocal_804, 1);
						Function_307(&iLocal_806);
					}
				}
				else
				{
					iLocal_810 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_9();
			iLocal_810 = 3;
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_306(var uParam0, bool bParam1) //Position: 0x10862 / 67682
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_PRIORITY_SET(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_307(int iParam0) //Position: 0x108A3 / 67747
{
	Function_219(&iParam0, 0.0f);
	return;
}

int Function_308(bool bParam0, bool bParam1, int iParam2) //Position: 0x108B0 / 67760
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_325(bParam0), Function_17()) == 0)
		{
			ADD_ITEM(Function_325(bParam0), Function_17(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_325(bParam0), Function_17(), &iParam2);
	return 1;
}

int Function_309() //Position: 0x108FE / 67838
{
	if (!Function_201(&iLocal_113))
	{
		return 0;
	}
	return 1;
}

int Function_310() //Position: 0x10910 / 67856
{
	if (Global_6623)
	{
		return 0;
	}
	return 1;
}

void Function_311(bool bParam0, int iParam1, int iParam2) //Position: 0x1091F / 67871
{
	if (&iParam2 == 1)
	{
		if (Function_317(&bParam0, &iParam1, &iParam2))
		{
			Function_316(&bParam0);
		}
		else if (Function_315(&bParam0, &iParam1))
		{
			Function_313(&bParam0);
		}
		if (Function_295(&bParam0, &iParam1, &iParam2))
		{
			Function_312(&bParam0);
		}
	}
	else if (Function_317(&bParam0, &iParam1, 0))
	{
		Function_316(&bParam0);
	}
	else if (Function_295(&bParam0, &iParam1, 0))
	{
		Function_312(&bParam0);
	}
	else if (Function_315(&bParam0, &iParam1))
	{
		Function_313(&bParam0);
	}
	return;
}

void Function_312(struct<909> Param0) //Position: 0x109AE / 68014
{
	char* cVar0[32];
	
	if (Param0.f_908 <= Param0.f_620)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, &Param0 + 620[Param0.f_9084], 32);
		if ((*&Param0 + 724)[Param0.f_908] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, &Param0 + 620[Param0.f_9084], &Param0 + 756[Param0.f_9086], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_153(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

var Function_313(struct<1049> Param0) //Position: 0x10A56 / 68182
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_409(Param0.f_1048, 8) && Param0.f_612 > 3)
	{
		if (VDIST(Global_54078, *(&Param0 + 8)) < VDIST(Global_54078, *(&Param0 + 20)) && IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
			{
				Function_314(&Param0 + 508[Param0.f_6124], 3.0f, 0, 2, 1, 0);
				Param0.f_612++;
				Function_307(&Param0 + 60);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(&Param0 + 400[Param0.f_5044]))
		{
			Function_314(&Param0 + 400[Param0.f_5044], 3.0f, 0, 2, 1, 0);
			Param0.f_504++;
			Param0.f_504 = (Param0.f_504 % 3);
			Function_307(&Param0 + 60);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_314(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x10B53 / 68435
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_125(Global_10966) };
		}
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_315(int iParam0, int iParam1) //Position: 0x10BD8 / 68568
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, (&iParam0 + 8)) >= VDIST(Global_54078, *(&iParam0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&iParam0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&iParam0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&iParam0 + 400[04]))
	{
		iVar0 = 0;
	}
	else if (Function_167())
	{
		iVar0 = 0;
	}
	else if (Function_294(&iParam0 + 60, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_316(struct<181> Param0) //Position: 0x10C84 / 68740
{
	char* cVar0[32];
	
	if (Param0.f_180 <= Param0.f_76)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, &Param0 + 76[Param0.f_1804], 32);
		if ((*&Param0 + 184)[Param0.f_180] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, &Param0 + 76[Param0.f_1804], &Param0 + 248[Param0.f_1806], "", "", "", "", 0, (*&Param0 + 216)[Param0.f_180], 0, 0);
		}
		else
		{
			Function_185(&Param0 + 76[Param0.f_1804], 8,5f, (*&Param0 + 216)[Param0.f_180], 2, 0, 0, 0, 0);
		}
		Param0.f_180++;
	}
	return;
}

bool Function_317(struct<181> Param0) //Position: 0x10D38 / 68920
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, *(&Param0 + 8)) >= VDIST(Global_54078, *(&Param0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&Param0 + 76[04]))
	{
		iVar0 = 0;
	}
	else if (Function_167() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_180 <= Param0.f_76)
	{
		if (STRING_LENGTH(&Param0 + 76[Param0.f_1804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_318() //Position: 0x10DFB / 69115
{
	Function_319(iLocal_376);
	return;
}

void Function_319(bool bParam0) //Position: 0x10E07 / 69127
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Local_705)
	{
		if (Local_705[iVar06])
		{
			if (!IS_DOOR_VALID(&Local_705[iVar06] + 32))
			{
				if (Function_431(StackVal))
				{
					if (!Local_705[iVar06].f_40)
					{
						*(&Local_705[iVar06] + 32) = Function_322(StackVal, &Local_705[iVar06] + 16, &Local_705[iVar06] + 8, Local_705[iVar06].f_24);
					}
					else
					{
						*(&Local_705[iVar06] + 32) = Function_321(StackVal, &Local_705[iVar06] + 16, &Local_705[iVar06] + 8, Local_705[iVar06].f_24);
					}
					if (IS_DOOR_VALID(&Local_705[iVar06] + 32))
					{
					}
				}
			}
			else if (bParam0)
			{
				if (IS_DOOR_LOCKED(&Local_705[iVar06] + 32))
				{
					Function_183(&Local_705[iVar06] + 32, 1);
					OPEN_DOOR_DIRECTION(&Local_705[iVar06] + 32, Local_705[iVar06].f_28);
					SET_DOOR_CURRENT_SPEED(&Local_705[iVar06] + 32, 15.0f, 0.0f);
				}
			}
			else
			{
				if (!IS_DOOR_LOCKED(&Local_705[iVar06] + 32))
				{
					Function_320(&Local_705[iVar06] + 32, 1);
				}
				if (!IS_DOOR_CLOSED(&Local_705[iVar06] + 32) && !IS_DOOR_CLOSING(&Local_705[iVar06] + 32))
				{
					CLOSE_DOOR(&Local_705[iVar06] + 32, 1.0f);
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_320(var uParam0, int iParam1) //Position: 0x10F73 / 69491
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&uParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&uParam0, "unlockMe"))
	{
		DECOR_REMOVE(&uParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&uParam0))
	{
		SET_DOOR_LOCK(&uParam0, 1);
	}
	return;
}

var Function_321(int iParam0, var uParam1, char* cParam2) //Position: 0x10FCE / 69582
{
	var uVar0;
	char* cVar1[8];
	char* cVar3[32];
	var uVar11;
	
	if (!Function_428(iParam0))
	{
		return "";
	}
	uVar0 = CREATE_WORLD_SECTOR(FIND_NAMED_LAYOUT("formations"), &uParam1);
	if (!IS_WORLD_SECTOR_LOADED(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
		return "";
	}
	strcpy(&cVar1, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar1, "0", 8);
	}
	straddi(&cVar1, iParam3, 8);
	memcpy(&cVar3, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar3, "_", 32);
	stradd(&cVar3, &cParam2, 32);
	stradd(&cVar3, "*", 32);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uVar0, &cVar3, &cVar1);
	DESTROY_OBJECT(&uVar0);
	if (!IS_OBJECT_VALID(&uVar11))
	{
		PRINTSTRING("Door not found:");
		PRINTSTRING(&cVar3);
		PRINTSTRING(" door");
		PRINTSTRING(&cVar1);
		PRINTNL();
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar11);
}

var Function_322(int iParam0, char* cParam1, bool bParam3) //Position: 0x110AE / 69806
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_428(iParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[iParam09] + 56))
	{
		return "";
	}
	cParam1 = &cParam1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[iParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

void Function_323() //Position: 0x11153 / 69971
{
	SET_OBJECT_POSITION(StackVal, &uLocal_384, Vector(0.0f, 20.0f, 0.0f));
	return;
}

void Function_324() //Position: 0x11169 / 69993
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	uVar0 = GET_GAME_CAMERA();
	Var3 = Vector(-0,18683f, -0,296919f, -0,621785f);
	GET_OBJECT_RELATIVE_POSITION(&uVar0, Var3, &Var1);
	GET_OBJECT_ORIENTATION(&uVar0, &Var5);
	SET_OBJECT_POSITION(&uLocal_384, Var1);
	SET_OBJECT_ORIENTATION(&uLocal_384, Var5);
	SET_CAMERA_ASPECT_RATIO(&uVar0, 0.0f);
	SET_CAMERA_FOV(&uVar0, 42,97919f);
	SET_CAMERA_NEAR_CLIP_PLANE(&uVar0, 0,3f);
	SET_CAMERA_FAR_CLIP_PLANE(&uVar0, 2800.0f);
	SET_CAMERA_COLLISION_PARAMETERS(&uVar0, 0,3f, 1);
	SET_CAMERA_COLLISION_ENABLED(&uVar0, 0);
	RESET_CAMERA_TARGET(&uVar0, 0);
	RESET_CAMERA_TARGETDOF(&uVar0);
	return;
}

var Function_325(bool bParam0) //Position: 0x111FE / 70142
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &bVar0;
}

int Function_326() //Position: 0x112F2 / 70386
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	
	if (Function_341())
	{
		uVar0[0] = "BountyHunter Pass";
		uVar0[1] = "BountyHunter Fail";
		uVar0[2] = "BountyHunter Cancel";
		uVar0[3] = "BountyHunter Collect Proof";
		iVar5 = Function_327(&uLocal_392, &uVar0, "RDR MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (iVar5 == 0)
		{
			Function_14();
			Function_345(11);
		}
		else if (iVar5 == 1)
		{
			Function_14();
			Function_345(12);
		}
		else if (iVar5 == 2)
		{
			Function_14();
			Function_345(13);
		}
		else if (iVar5 == 3)
		{
			Function_14();
			iVar6 = 0;
			while (iVar6 < (bLocal_262 - 1))
			{
				KILL_ACTOR(&(uLocal_45[iVar6]));
				iVar6++;
			}
			Function_345(7);
			Function_292(1);
		}
		iLocal_261 = 0;
		return 1;
	}
	return 0;
}

var Function_327(struct<17> Param0) //Position: 0x11406 / 70662
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_340(&Var12, &Var0);
	uVar15 = Function_339(uParam1, &Var12);
	Function_338(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_337(&Param0, uVar15);
	Function_335(StackVal, &Param0, Var12.f_12);
	Function_333(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_332(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_329(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_328(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_328(int iParam0, int iParam1, int iParam2) //Position: 0x114FA / 70906
{
	var uVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam1 * iParam2);
	if (iParam0 <= iVar2)
	{
		bVar1 = iParam0;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_329(struct<17> Param0) //Position: 0x1155A / 71002
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_331(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_331(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_328(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_330(Param1.f_64);
	}
	else
	{
		Function_330(Param1.f_64);
	}
	return 0;
}

void Function_330(bool bParam0) //Position: 0x116ED / 71405
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_331(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x1172B / 71467
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_332(int iParam0, struct<21> Param1) //Position: 0x117E1 / 71649
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_333(vector3 vParam0) //Position: 0x11808 / 71688
{
	switch (Function_334())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_334() //Position: 0x118B4 / 71860
{
	if (IS_DEBUGKEY_PRESSED(200))
	{
		return 200;
	}
	if (IS_DEBUGKEY_PRESSED(203))
	{
		return 203;
	}
	if (IS_DEBUGKEY_PRESSED(205))
	{
		return 205;
	}
	if (IS_DEBUGKEY_PRESSED(208))
	{
		return 208;
	}
	return 4294967295;
}

void Function_335(vector3 vParam0) //Position: 0x118F0 / 71920
{
	switch (Function_336(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_336(int iParam0) //Position: 0x11999 / 72089
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_409(iParam0, 0x40000000))
		{
			Function_408(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_409(iParam0, 0x40000000))
		{
			Function_408(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_3(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_409(iParam0, 0x20000000))
		{
			Function_408(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_409(iParam0, 0x20000000))
		{
			Function_408(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_3(&iParam0, 0x20000000);
	return 0;
}

var Function_337(struct<21> Param0) //Position: 0x11AB9 / 72377
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_338(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x11C73 / 72819
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_339(int iParam0, struct<13> Param1) //Position: 0x11D0F / 72975
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_340(struct<17> Param0) //Position: 0x11D2B / 73003
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_341() //Position: 0x11D85 / 73093
{
	return Global_47307;
}

bool Function_342(bool bParam0) //Position: 0x11D8E / 73102
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&bParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

int Function_343() //Position: 0x11DB0 / 73136
{
	if (Function_148(StackVal))
	{
		if ((((((*&Global_40060 + 68[0181][75])[3] < iLocal_797 || (*&Global_40060 + 68[0181][225])[3] < iLocal_798) || (*&Global_40060 + 68[0181][125])[3] < iLocal_799) || (*&Global_40060 + 68[1181][75])[3] < iLocal_800) || (*&Global_40060 + 68[1181][225])[3] < iLocal_801) || (*&Global_40060 + 68[1181][125])[3] < iLocal_802)
		{
			return 1;
		}
		iLocal_797 = (*&Global_40060 + 68[0181][75])[3];
		iLocal_798 = (*&Global_40060 + 68[0181][225])[3];
		iLocal_799 = (*&Global_40060 + 68[0181][125])[3];
		iLocal_800 = (*&Global_40060 + 68[1181][75])[3];
		iLocal_801 = (*&Global_40060 + 68[1181][225])[3];
		iLocal_802 = (*&Global_40060 + 68[1181][125])[3];
	}
	return 0;
}

bool Function_344() //Position: 0x11EA9 / 73385
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_40060.f_32 - 1))
	{
		if ((*&Global_40060 + 32)[iVar0] >= 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_345(bool bParam0) //Position: 0x11ED7 / 73431
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<16> Var4;
	
	iVar1 = 1;
	if (!iLocal_264 != bParam0)
	{
		switch (bParam0)
		{
			case 0x00000001:
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				if (IS_VOLUME_VALID(&uLocal_322))
				{
					uVar3 = GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&uLocal_322));
				}
				if (IS_STRING_VALID(&uVar3) && STRING_LENGTH(&uVar3) < 0)
				{
					Function_384(bLocal_402);
					Function_278(&Local_407, 1);
					if (Function_409(StackVal, 16))
					{
						Function_277(&Local_407, "npm_bh_mt3", 1);
						Function_3(&Global_39906 + 8, 16);
					}
					else
					{
						Function_277(&Local_407, "npm_bh_mt2", 1);
					}
					strcpy(&cLocal_265, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&uLocal_322)), 32);
					Function_383(&Local_407, &cLocal_265, 0);
				}
				else if (!Function_342("npressDemo"))
				{
					if (Function_382())
					{
						Function_378(&Local_407, "pm_bh_h", 0);
					}
				}
				break;
			
			case 0x00000004:
				Function_239(&iLocal_701);
				if (iLocal_404 == Global_46838[1])
				{
					AUDIO_MUSIC_FORCE_TRACK("FTR_ZMB_SONG_01", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				}
				else
				{
					AUDIO_MUSIC_FORCE_TRACK("MEX_ZMB_SONG_01", "SUSPENSE", 0, 4294967295, 4294967295, 3212836864, 0);
				}
				Function_10(&cLocal_344);
				SQUAD_GOALS_CLEAR(&cLocal_344);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&cLocal_344, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 1, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &iLocal_71, 2.0f, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 3, 3, 4294967295);
				TASK_WANDER(0, -1.0f);
				Function_10(&cLocal_348);
				SQUAD_GOALS_CLEAR(&cLocal_348);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&cLocal_348, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_348, 0, 1, 1);
				TASK_TAUNT_ACTOR(0, &iLocal_71, 10.0f, 25.0f, 0, -1.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_348, 1, 1, 4294967295);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &iLocal_71, 25.0f, 1);
				if (iLocal_356 == 0)
				{
					Function_278(&Local_407, 1);
					Function_277(&Local_407, "pm_bh_fnd1", 1);
					iLocal_356 = 1;
					if (iLocal_264 <= 4)
					{
						Function_9();
						Function_351(&Local_407);
						if (Function_341())
						{
							Function_14();
						}
						Function_307(&uLocal_281);
						if (IS_BLIP_VALID(&uLocal_388))
						{
							SET_BLIP_BLINK(&uLocal_388, 0, 0, 5f);
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_350();
				if (iLocal_358 == 0)
				{
					if (IS_ACTOR_ALIVE(&iLocal_71))
					{
						Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_349() };
						PRINTSTRING(&Var4);
						PRINTSTRING("******");
						PRINTNL();
						SAY_SINGLE_LINE_STRING_OVER_PAIN(&Global_54076, &Var4, 1, 1, 2, 0);
					}
					iLocal_358 = 1;
				}
				AUDIO_SET_PLAYER_MOOD(1, 0);
				AUDIO_MUSIC_SET_MOOD("GUNFIGHT", 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(&uLocal_388))
				{
					SET_BLIP_BLINK(&uLocal_388, 0, 0, 5f);
				}
				Function_348(1);
				Function_10(&cLocal_344);
				SQUAD_GOALS_CLEAR(&cLocal_344);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&cLocal_344, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 0, 0, 1);
				TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
				if (!bLocal_375)
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 1, 0, 1);
					TASK_MELEE_ATTACK(0, &iLocal_71, -1.0f);
				}
				else
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 1, 0, 1);
					TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
				}
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 2, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 7.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 3, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &iLocal_71, 7.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 4, 3, 4294967295);
				TASK_WANDER(0, -1.0f);
				Function_10(&cLocal_344);
				SQUAD_GOALS_CLEAR(&cLocal_348);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&cLocal_348, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_348, 0, 3, 2);
				TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &uLocal_757, 0, 0, 0, 0, 0, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_348, 1, 3, 4294967295);
				TASK_FOLLOW_AND_ATTACK_OBJECT(0, &iLocal_71, &uLocal_760, 0, 0, 0, 0, 0, 1);
				bVar0 = false;
				while (bVar0 <= GET_ACTORSET_SIZE(&uLocal_699))
				{
					uVar2 = GET_ACTOR_FROM_ACTORSET(&uLocal_699, bVar0);
					if (IS_ACTOR_VALID(&uVar2))
					{
						Function_347(&uVar2);
					}
					bVar0++;
				}
				break;
			
			case 0x00000007:
				AUDIO_MUSIC_SET_MOOD("CHASE", 0, 4294967295, 4294967295);
				AUDIO_SET_PLAYER_MOOD(0, 0);
				SQUAD_GOALS_CLEAR(&cLocal_344);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&cLocal_344, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 0, 0, 1);
				TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 1, 0, 1);
				TASK_MELEE_ATTACK(0, &iLocal_71, -1.0f);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 2, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &Global_54076, 5.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 3, 1, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(0, &iLocal_71, 5.0f, 4);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_344, 4, 3, 4294967295);
				TASK_WANDER(0, -1.0f);
				SQUAD_GOALS_CLEAR(&cLocal_348);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&cLocal_348, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_348, 0, 3, 1);
				TASK_FOLLOW_AND_ATTACK_OBJECT(0, &Global_54076, &uLocal_757, 0, 0, 0, 0, 0, 1);
				SQUAD_GOAL_ADD_GENERAL_TASK(&cLocal_348, 1, 3, 4294967295);
				TASK_FOLLOW_AND_ATTACK_OBJECT(0, &iLocal_71, &uLocal_760, 0, 0, 0, 0, 0, 1);
				CLEAR_JOURNAL_ENTRY(Global_39906.f_36);
				APPEND_JOURNAL_ENTRY(Global_39906.f_36, 0);
				if (iLocal_364 == 1)
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_jou2", 0, 0, 0);
				}
				else
				{
					APPEND_JOURNAL_ENTRY_DETAIL(Global_39906.f_36, "pm_bh_jou3", 0, 0, 0);
				}
				if (Function_382())
				{
					Function_180(&Local_407);
					Function_378(&Local_407, "pm_bh_fndhelp", 0);
				}
				Function_278(&Local_407, 1);
				Function_277(&Local_407, "pm_bh_oh_z", 1);
				strcpy(&cLocal_265, GET_OBJECT_NAME(GET_OBJECT_FROM_VOLUME(&Global_44085[iLocal_4049] + 8)), 32);
				Function_383(&Local_407, &cLocal_265, 0);
				break;
			
			case 0x0000000B:
				Function_351(&Local_407);
			
			case 0x00000008:
				iLocal_354 = 1;
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				if (IS_ACTOR_ALIVE(&Global_54076))
				{
					DELETE_ITEM(Function_325(72), &Global_54076, 0);
				}
				if (iLocal_364 == 0)
				{
					Function_346(&Local_407, 1);
				}
				else
				{
					Function_346(&Local_407, 0);
				}
				if (bParam0 == 8)
				{
					iLocal_367 = 1;
				}
				else
				{
					bVar0 = false;
					while (bVar0 < (bLocal_262 - 1))
					{
						if (IS_ACTOR_ALIVE(&(uLocal_45[bVar0])) && IS_ACTOR_VALID(&(uLocal_45[bVar0])))
						{
							if (bVar0 == 0)
							{
								REMOVE_OBJECT_FROM_ATTACHMENT(&(uLocal_45[bVar0]));
								FREE_FROM_HOGTIE(&(uLocal_45[bVar0]));
								DECOR_SET_STRING(GET_OBJECT_FROM_ACTOR(&(uLocal_45[bVar0])), "sHogtie", "kneel");
								HOGTIE_ACTOR(&(uLocal_45[bVar0]));
								DELETE_ACCESSORY("ANKLE_BIND", &(uLocal_45[bVar0]));
							}
							RELEASE_ACTOR_AS_AMBIENT(&(uLocal_45[bVar0]));
						}
						bVar0++;
					}
				}
				iVar1 = 0;
				iLocal_350 = 2;
				iLocal_30 = 5;
				break;
			
			case 0x00000009:
				if (!Function_342("npressDemo"))
				{
					Function_278(&Local_407, 1);
					Function_277(&Local_407, "npm_bh_diw", 1);
				}
				Function_311(&Local_407, 0, 0);
				Function_307(&iLocal_293);
				iLocal_350 = 4;
				iLocal_30 = 5;
				iVar1 = 0;
				break;
			
			case 0x0000000C:
				Function_351(&Local_407);
			
			case 0x0000000A:
				Function_278(&Local_407, 1);
				if (iLocal_359 == 1)
				{
				}
				else if (iLocal_357 == 1)
				{
					Function_277(&Local_407, "pm_bh_alaw", 1);
				}
				else if (iLocal_372)
				{
					if (GET_LAST_ATTACKER(&iLocal_71) == &Global_54076)
					{
						Function_277(&Local_407, "pm_bh_dead0", 1);
					}
					else
					{
						Function_277(&Local_407, "pm_bh_dead1", 1);
					}
				}
				else if (IS_ACTOR_HOGTIED(&iLocal_71))
				{
					Function_277(&Local_407, "npm_bh_es0", 1);
				}
				else
				{
					Function_277(&Local_407, "npm_bh_es1", 1);
				}
				Function_311(&Local_407, 0, 1);
				iLocal_352 = 0;
				iLocal_350 = 3;
				iLocal_30 = 5;
				iVar1 = 0;
				break;
			
			case 0x00000006:
				Function_278(&Local_407, 1);
				if (IS_ACTOR_HOGTIED(&iLocal_71))
				{
					Function_277(&Local_407, "npm_bh_es0", 1);
				}
				else
				{
					Function_277(&Local_407, "npm_bh_es1", 1);
				}
				Function_311(&Local_407, 0, 0);
				iLocal_352 = 1;
				iLocal_350 = 3;
				iLocal_30 = 5;
				iVar1 = 0;
				break;
			
			case 0x0000000D:
				iLocal_30 = 5;
				iLocal_350 = 4;
				break;
			
			default:
				break;
		}
		iLocal_264 = bParam0;
		Function_292(1);
	}
	return iVar1;
}

void Function_346(int iParam0, int iParam1) //Position: 0x126D9 / 75481
{
	if (iParam1 == 0)
	{
		Function_408(&iParam0 + 1048, 16384);
	}
	else
	{
		Function_3(&iParam0 + 1048, 16384);
	}
	return;
}

void Function_347(int iParam0) //Position: 0x12700 / 75520
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_ALIVE(&iParam0))
	{
		if (&iParam0 != &iLocal_71)
		{
			CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iParam0);
			uVar0 = GET_CURRENT_GRINGO(&iParam0);
			if (IS_GRINGO_VALID(&uVar0))
			{
				GRINGO_DEACTIVATE(&uVar0);
			}
			Function_214(&iParam0, 16);
			MEMORY_GET_MUST_IDENTIFY(&iParam0, &Global_54076);
			SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
			SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
		}
	}
	return;
}

void Function_348(int iParam0) //Position: 0x1275F / 75615
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_13())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

struct<64> Function_349() //Position: 0x12798 / 75672
{
	char* cVar0[64];
	
	switch (Global_39906.f_20)
	{
		case 0x00000009:
			strcpy(&cVar0, "FIND_Asian_Male_Laborer01", 64);
			break;
		
		case 0x00000018:
			strcpy(&cVar0, "FIND_Black_Female_Traveler01", 64);
			break;
		
		case 0x0000001D:
			strcpy(&cVar0, "FIND_Black_Male_FactoryWorker02", 64);
			break;
		
		case 0x00000038:
			strcpy(&cVar0, "FIND_Caucasian_Female_Farmer10", 64);
			break;
		
		case 0x00000044:
			strcpy(&cVar0, "FIND_Caucasian_Female_Prostitute04", 64);
			break;
		
		case 0x00000059:
			strcpy(&cVar0, "FIND_Caucasian_Male_Businessman02", 64);
			break;
		
		case 0x0000005F:
			strcpy(&cVar0, "FIND_Caucasian_Male_Businessman07", 64);
			break;
		
		case 0x00000060:
			strcpy(&cVar0, "FIND_Caucasian_Male_DocksWorker01", 64);
			break;
		
		case 0x000000A8:
			strcpy(&cVar0, "FIND_Caucasian_Male_Laborer26", 64);
			break;
		
		case 0x000000A9:
			strcpy(&cVar0, "FIND_Caucasian_Male_Laborer27", 64);
			break;
		
		case 0x000000ED:
			strcpy(&cVar0, "FIND_Hispanic_Female_Farmer01", 64);
			break;
		
		case 0x000000F5:
			strcpy(&cVar0, "FIND_Hispanic_Female_Prostitute01", 64);
			break;
		
		case 0x0000010A:
			strcpy(&cVar0, "FIND_Hispanic_Male_Doctor01", 64);
			break;
		
		case 0x0000010D:
			strcpy(&cVar0, "FIND_Hispanic_Male_Farmer06", 64);
			break;
		
		case 0x00000114:
			strcpy(&cVar0, "FIND_Hispanic_Male_Generic_Shopkeeper04", 64);
			break;
		
		case 0x00000121:
			strcpy(&cVar0, "FIND_Hispanic_Male_Laborer05", 64);
			break;
		
		default:
			strcpy(&cVar0, "GENERIC_FIND_MISSING_PERSONS", 64);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_350() //Position: 0x12ABD / 76477
{
	if (Global_39906.f_28 == Global_46838[1])
	{
		Local_763[02] = Vector(-2734,201f, 52,597f, 3232,82f);
		Local_763[12] = Vector(-2428,155f, 33,298f, 3199,148f);
		Local_763[22] = Vector(-3292,178f, 35,991f, 3131,298f);
		Local_763[32] = Vector(-2827,205f, 65,714f, 3581,248f);
		Local_763[42] = Vector(-2795,279f, 36,54f, 3119,951f);
		Local_763[52] = Vector(-2956,503f, 46,211f, 3281,013f);
	}
	else
	{
		Local_763[02] = Vector(-785,108f, 12,801f, 3732,498f);
		Local_763[12] = Vector(-502,108f, 17,467f, 3873,661f);
		Local_763[22] = Vector(-1222,832f, 68,909f, 3753,275f);
		Local_763[32] = Vector(390,536f, 37,491f, 3279,565f);
		Local_763[42] = Vector(-1598,714f, 25,715f, 3725,918f);
		Local_763[52] = Vector(-1191,45f, 38,123f, 3360,997f);
		Local_763[62] = Vector(-1316,214f, 13,794f, 4112,835f);
	}
	return;
}

void Function_351(struct<1093> Param0) //Position: 0x12BFF / 76799
{
	if (Function_409(Param0.f_1048, 4))
	{
		Function_377();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_348(1);
	if (Function_409(Param0.f_1048, 32))
	{
		if (Function_120(Param0.f_1092))
		{
			Function_376(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_111(&Param0, 0);
	}
	Function_408(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_409(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_352(&Param0, 1);
	return;
}

void Function_352(struct<1089> Param0) //Position: 0x12C8E / 76942
{
	char* cVar0;
	
	if (Param0.f_1088 != 0 && iParam1 != 1)
	{
		Param0.f_1088 = iParam1;
	}
	else if (Param0.f_1088 == 1)
	{
		Param0.f_1088 = iParam1;
		if (Param0.f_916 != 4294967295)
		{
			if (Param0.f_1088 == 2)
			{
				cVar0 = Function_375(&Param0);
				if ((cVar0 == 4294967295 && cVar0 == 0) && Function_374(&Param0) != 1)
				{
					Function_372(Param0.f_916, cVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_369(200, 1, 0);
				}
				else
				{
					Function_356(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_355(Param0.f_616, 1, 1);
				}
				else
				{
					Function_353(Param0.f_616, 1);
				}
			}
			else if (Param0.f_1088 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_353(bool bParam0, bool bParam1) //Position: 0x12D73 / 77171
{
	bool bVar0;
	
	bVar0 = Function_133(0);
	if ((Function_133(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_354(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_133(0));
	return 1;
}

int Function_354(int iParam0, bool bParam1, int iParam2) //Position: 0x12E04 / 77316
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_61(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_50(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

int Function_355(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13001 / 77825
{
	bool bVar0;
	
	bVar0 = Function_133(0);
	if ((Function_133(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_48(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_133(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_48(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_133(597) + Function_133(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_356(int iParam0, bool bParam1, bool bParam2) //Position: 0x130D3 / 78035
{
	int iVar0;
	bool bVar1;
	
	if (Function_368(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_141())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_133(3);
	Function_365();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_363(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_166(Global_119936, 4))
			{
				Function_161(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_48(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_59(3));
	iVar0 = Function_133(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_358(4, Function_362(Global_21369.f_248), 1);
				Function_357(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_358(4, Function_362(Global_21369.f_248), 1);
				Function_357(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_358(4, Function_362(Global_21369.f_248), 1);
				Function_357(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_358(4, Function_362(Global_21369.f_248), 1);
				Function_357(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_358(4, Function_362(Global_21369.f_248), 1);
				Function_357(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000005:
			break;
	}
	return;
}

void Function_357(int iParam0, int iParam1) //Position: 0x132A7 / 78503
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_358(int iParam0, char* cParam1) //Position: 0x13511 / 79121
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_135(iParam0, &cParam1, 0, 1);
	iVar1 = Function_359();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_359() //Position: 0x136A1 / 79521
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_360();
	return 0;
}

void Function_360() //Position: 0x13742 / 79682
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_361(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_361(int iParam0) //Position: 0x13800 / 79872
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_362(int iParam0) //Position: 0x13866 / 79974
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_ntr1";
			break;
		
		case 0x00000001:
			return "sr_ntr2";
			break;
		
		case 0x00000002:
			return "sr_ntr3";
			break;
		
		case 0x00000003:
			return "sr_ntr4";
			break;
		
		case 0x00000004:
			return "sr_ntr5";
			break;
		
		case 0x00000005:
			return "sr_ntr6";
			break;
	}
	return "sr_ntr1";
}

int Function_363(int iParam0, bool bParam1) //Position: 0x138F5 / 80117
{
	bool bVar0;
	int iVar1;
	
	Function_48(iParam0, bParam1, 0, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_364(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_359();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_364(int iParam0, int iParam1) //Position: 0x13AA1 / 80545
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

void Function_365() //Position: 0x13AE6 / 80614
{
	Function_367(3, 0.0f);
	Function_366(3, 10000.0f);
	return;
}

int Function_366(int iParam0, int iParam1) //Position: 0x13AFC / 80636
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_367(int iParam0, int iParam1) //Position: 0x13B3C / 80700
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_368(int iParam0) //Position: 0x13B7C / 80764
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_369(int iParam0, bool bParam1, bool bParam2) //Position: 0x13B8B / 80779
{
	int iVar0;
	bool bVar1;
	
	if (Function_368(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_141())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_133(1);
	if ((iVar0 + bVar1) >= 5000)
	{
		bVar1 = (5000 - iVar0);
	}
	if ((iVar0 + bVar1) <= 4294962296)
	{
		bVar1 = (4294962296 - iVar0);
	}
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_363(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_166(Global_119936, 1))
				{
					Function_161(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_371(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_166(Global_119936, 2))
				{
					Function_161(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_48(1, bVar1, 0, 0);
	}
	else
	{
		Function_354(1, (4294967295 * bVar1), 0);
	}
	if (Function_133(1) <= 4294962296)
	{
		Function_137(1, 4294962296, 0);
	}
	else if (Function_133(1) >= 5000)
	{
		Function_137(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_59(1));
	iVar0 = Function_133(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_358(2, Function_370(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_358(2, Function_370(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_358(2, Function_370(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_358(2, Function_370(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_358(2, Function_370(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_358(2, Function_370(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_358(2, Function_370(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_358(2, Function_370(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_358(2, Function_370(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_358(2, Function_370(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_358(2, Function_370(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iVar0 < 4500)
			{
				Global_21369.f_244 = 5;
				Function_358(2, Function_370(Global_21369.f_244), 0);
			}
			break;
	}
	Function_357(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_370(int iParam0) //Position: 0x13EB2 / 81586
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sr_hnr7";
			break;
		
		case 0x00000001:
			return "sr_hnr6";
			break;
		
		case 0x00000002:
			return "sr_hnr5";
			break;
		
		case 0x00000003:
			return "sr_hnr4";
			break;
		
		case 0x00000004:
			return "sr_hnr3";
			break;
		
		case 0x00000005:
			return "sr_hnr2";
			break;
		
		case 0x00000006:
			return "sr_hnr1";
			break;
	}
	return "sr_hnr4";
}

int Function_371(int iParam0, bool bParam1) //Position: 0x13F55 / 81749
{
	bool bVar0;
	int iVar1;
	
	Function_354(iParam0, bParam1, 0);
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	iVar1 = Function_364(iParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_359();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

void Function_372(int iParam0, char* cParam1, bool bParam2) //Position: 0x14149 / 82249
{
	char* cVar0[32];
	
	if (!Function_177(3))
	{
		return;
	}
	if (Function_89())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (&bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_373())
						{
							Function_156(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_156(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_156(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_373())
					{
						Function_156(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_156(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_156(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_156(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

bool Function_373() //Position: 0x1425F / 82527
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_409(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_374(struct<1049> Param0) //Position: 0x1428F / 82575
{
	return !Function_409(Param0.f_1048, 16384);
}

var Function_375(struct<921> Param0) //Position: 0x142A2 / 82594
{
	return Param0.f_920;
}

void Function_376(int iParam0, var uParam1) //Position: 0x142AE / 82606
{
	int iVar0;
	
	if (!Function_142(iParam0))
	{
		Function_122();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_121(iParam0);
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && uParam1)
	{
		Function_387(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_119(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_377() //Position: 0x14316 / 82710
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

int Function_378(struct<1093> Param0) //Position: 0x1432C / 82732
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(&cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_409(Param0.f_1048, 32))
	{
		if (!Function_142(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	uVar21 = Function_381(Function_121(Param0.f_1092), Function_419(Param0.f_1092));
	iVar22 = Function_379(Function_121(Param0.f_1092), Function_419(Param0.f_1092));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(&uVar21, &uVar20))
	{
		ADD_TIME(&uVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(&uVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(&Param0 + 620[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(&Param0 + 620[iVar174], &cParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(&Param0 + 620[iVar174], &cParam1, 16);
			if (&iParam2 == 1)
			{
				(*&Param0 + 724)[iVar17] = &iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_379(int iParam0, int iParam1) //Position: 0x144A0 / 83104
{
	int iVar0;
	int iVar1;
	
	if (!Function_380(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_121(iVar1) != iParam0 && Function_419(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[iVar17].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_380(int iParam0) //Position: 0x144EC / 83180
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_381(int iParam0, int iParam1) //Position: 0x14501 / 83201
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_121(iVar1) != iParam0 && Function_419(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(&Global_21684[iVar17] + 40, &iVar0))
			{
				iVar0 = &Global_21684[iVar17] + 40;
			}
		}
		iVar1++;
	}
	return &iVar0;
}

bool Function_382() //Position: 0x14552 / 83282
{
	if (Function_133(359) < 0 || Function_133(358) < 0)
	{
		return 0;
	}
	return 1;
}

int Function_383(int iParam0, char* cParam1) //Position: 0x14572 / 83314
{
	if (IS_STRING_VALID(&cParam1))
	{
		strcpy(&iParam0 + 248[06], &cParam1, 24);
		(*&iParam0 + 184)[0] = 1;
	}
	else
	{
		strcpy(&iParam0 + 248[06], "", 24);
		(*&iParam0 + 184)[0] = 0;
	}
	if (IS_STRING_VALID(&cParam2))
	{
		strcpy(&iParam0 + 248[16], &cParam2, 24);
		(*&iParam0 + 184)[1] = 1;
	}
	else
	{
		strcpy(&iParam0 + 248[16], "", 24);
		(*&iParam0 + 184)[1] = 0;
	}
	return 1;
}

void Function_384(int iParam0) //Position: 0x145E9 / 83433
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_287(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_385(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_48(473, 1, 0, 0);
		iVar0 = Function_290(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_48(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_48(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_48(476, 1, 0, 0);
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
		Function_131(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_131(7, 30);
	}
	if (Function_59(473) <= Function_60(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

void Function_385(var uParam0, int iParam1) //Position: 0x146DA / 83674
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_386(bool bParam0, int iParam1) //Position: 0x146EB / 83691
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_387(bool bParam0) //Position: 0x1472A / 83754
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_401();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_388();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_3(&Global_99144, 1);
		Function_3(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_388() //Position: 0x1477F / 83839
{
	Function_399();
	Function_398();
	Function_398();
	Function_397();
	Function_397();
	Function_396();
	Function_396();
	Function_395(0);
	Function_395(0);
	Function_393();
	Function_392();
	Function_391();
	Function_390();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_389();
	return;
}

void Function_389() //Position: 0x147CA / 83914
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_390() //Position: 0x148D0 / 84176
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_391() //Position: 0x14903 / 84227
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_392() //Position: 0x14A96 / 84630
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_393() //Position: 0x14C4F / 85071
{
	Function_394(&Global_42918, 1, 0);
	return;
}

void Function_394(struct<2317> Param0) //Position: 0x14C5D / 85085
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_17();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

struct<8> Function_395(char* cParam0) //Position: 0x14E7A / 85626
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_133((50 + iVar4)) + Function_133((183 + iVar4))) + Function_133((90 + iVar4)));
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
	Function_137(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_396() //Position: 0x14F21 / 85793
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
		iVar2 = ((Function_133((50 + iVar3) + 15) + Function_133((183 + iVar3) + 15)) + Function_133((90 + iVar3) + 15));
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
	Function_137(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_397() //Position: 0x14FAA / 85930
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
			iVar2 = ((Function_133((50 + iVar3) + 8) + Function_133((183 + iVar3) + 8)) + Function_133((90 + iVar3) + 8));
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
	Function_137(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_398() //Position: 0x15041 / 86081
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
		iVar2 = ((Function_133((50 + iVar3)) + Function_133((183 + iVar3))) + Function_133((90 + iVar3)));
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
	Function_137(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_399() //Position: 0x150C0 / 86208
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_400(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_137(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_400(int iParam0, float fParam1, int iParam2) //Position: 0x150FD / 86269
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_62(iParam0, fParam1, 1);
	Function_61(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_50(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_401() //Position: 0x15309 / 86793
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_89())
	{
		Function_406(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_406(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_402(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_402(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_267(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_402(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x153C0 / 86976
{
	int iVar0;
	
	iVar0 = Function_404(&uParam2, &fParam3);
	if (Function_403(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_408(&Global_99144, 1);
			Function_3(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_408(&Global_99144, 2);
			Function_3(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_408(&Global_99144, 2);
		Function_3(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_107();
	return StackVal, Function_107();
}

bool Function_403(int iParam0) //Position: 0x154B8 / 87224
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_404(bool bParam0, bool bParam1) //Position: 0x154CE / 87246
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_405(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_405(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_403(iVar0) && !&bParam1)
	{
		iVar0 = Function_404(&bParam0, 1);
	}
	return iVar0;
}

float Function_405(struct<2> Param0, struct<2> Param2) //Position: 0x1559A / 87450
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_406(float fParam0, int iParam1) //Position: 0x155B7 / 87479
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_66(&Global_54076, &Var3);
	if (!Function_407(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_407(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_408(&Global_99144, 2);
	Function_3(&Global_99144, 1);
	iParam1 = 0;
	if (Function_267(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_407(int iParam0) //Position: 0x15DE3 / 89571
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_409(bVar0, 0x1000000) || Function_409(bVar0, 0x2000000)) || Function_409(bVar0, 0x4000000)) || !Function_409(bVar0, 0x10000000));
}

void Function_408(int iParam0, int iParam1) //Position: 0x15E1E / 89630
{
	iParam0 = (iParam0 || iParam1);
	return;
}

bool Function_409(bool bParam0, int iParam1) //Position: 0x15E2F / 89647
{
	return (bParam0 && iParam1) == 0;
}

bool Function_410(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x15E3C / 89660
{
	iParam0 = &iParam0;
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
	if (Global_6636 && iParam2)
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
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_411() //Position: 0x15EEB / 89835
{
	Function_297(&iLocal_113, "dlc_zombiepack_pmp", 10, 0);
	Function_297(&iLocal_113, "stats", 10, 0);
	Function_297(&iLocal_113, "gent_ride_passenger", 5, 0);
	Function_297(&iLocal_113, "fema_ride_passenger", 5, 0);
	return;
}

void Function_412(int iParam0) //Position: 0x15F5C / 89948
{
	if (iParam0 == 1)
	{
		Function_408(&Global_39906 + 8, 1);
	}
	else
	{
		Function_3(&Global_39906 + 8, 1);
	}
	return;
}

void Function_413() //Position: 0x15F7D / 89981
{
	if (bLocal_402 == Global_46760[5])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46760[5];
		*(&Local_705[06] + 16) = "lakeDonJulio";
		*(&Local_705[06] + 8) = "shack01props01";
		Local_705[06].f_24 = 1;
		Local_705[06].f_28 = 1;
		Local_705[06].f_40 = 1;
	}
	else if (bLocal_402 == Global_46760[13])
	{
	}
	else if (bLocal_402 == Global_46760[16])
	{
	}
	else if (bLocal_402 == Global_46760[3])
	{
	}
	else if (bLocal_402 == Global_46796[4])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46796[4];
		*(&Local_705[06] + 16) = "benedictPoint";
		*(&Local_705[06] + 8) = "trainStation01Props01";
		Local_705[06].f_24 = 1;
		Local_705[06].f_28 = 0;
		Local_705[06].f_40 = 1;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46796[4];
		*(&Local_705[16] + 16) = "benedictPoint";
		*(&Local_705[16] + 8) = "trainStation01Props01";
		Local_705[16].f_24 = 2;
		Local_705[16].f_28 = 1;
		Local_705[16].f_40 = 1;
		Local_705[26] = 1;
		Local_705[26].f_4 = Global_46796[4];
		*(&Local_705[26] + 16) = "benedictPoint";
		*(&Local_705[26] + 8) = "trainStation01Props01";
		Local_705[26].f_24 = 3;
		Local_705[26].f_28 = 0;
		Local_705[26].f_40 = 1;
		Local_705[36] = 1;
		Local_705[36].f_4 = Global_46796[4];
		*(&Local_705[36] + 16) = "benedictPoint";
		*(&Local_705[36] + 8) = "trainStation01Props01";
		Local_705[36].f_24 = 4;
		Local_705[36].f_28 = 1;
		Local_705[36].f_40 = 1;
	}
	else if (bLocal_402 == Global_46796[3])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46796[3];
		*(&Local_705[06] + 16) = "gaptoothBreach_03";
		*(&Local_705[06] + 8) = "supplyShack01props01";
		Local_705[06].f_24 = 3;
		Local_705[06].f_28 = 1;
		Local_705[06].f_40 = 0;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46796[3];
		*(&Local_705[16] + 16) = "gaptoothBreach_03";
		*(&Local_705[16] + 8) = "supplyShack01props01";
		Local_705[16].f_24 = 2;
		Local_705[16].f_28 = 1;
		Local_705[16].f_40 = 0;
		Local_705[26] = 1;
		Local_705[26].f_4 = Global_46796[3];
		*(&Local_705[26] + 16) = "gaptoothBreach_03";
		*(&Local_705[26] + 8) = "supplyShack01props01";
		Local_705[26].f_24 = 5;
		Local_705[26].f_28 = 1;
		Local_705[26].f_40 = 0;
	}
	else if (bLocal_402 == Global_46760[15])
	{
	}
	else if (bLocal_402 == Global_46760[1])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46760[1];
		*(&Local_705[06] + 16) = "ridgewoodFarm";
		*(&Local_705[06] + 8) = "mainHouse01Props01";
		Local_705[06].f_24 = 2;
		Local_705[06].f_28 = 1;
		Local_705[06].f_40 = 1;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46760[1];
		*(&Local_705[16] + 16) = "ridgewoodFarm";
		*(&Local_705[16] + 8) = "mainHouse01Props01";
		Local_705[16].f_24 = 14;
		Local_705[16].f_28 = 0;
		Local_705[16].f_40 = 1;
	}
	else if (bLocal_402 == Global_46838[0])
	{
	}
	else if (bLocal_402 == Global_46760[14])
	{
	}
	else if (bLocal_402 == Global_46760[0])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46760[0];
		*(&Local_705[06] + 16) = "narmadillo";
		*(&Local_705[06] + 8) = "ruinedBankProps01";
		Local_705[06].f_24 = 2;
		Local_705[06].f_28 = 0;
		Local_705[06].f_40 = 1;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46760[0];
		*(&Local_705[16] + 16) = "narmadillo";
		*(&Local_705[16] + 8) = "ruinedBankProps01";
		Local_705[16].f_24 = 4;
		Local_705[16].f_28 = 0;
		Local_705[16].f_40 = 1;
	}
	else if (bLocal_402 == Global_46894[3])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46894[3];
		*(&Local_705[06] + 16) = "torquemada01";
		*(&Local_705[06] + 8) = "mainStructure01props01";
		Local_705[06].f_24 = 2;
		Local_705[06].f_28 = 0;
		Local_705[06].f_40 = 0;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46894[3];
		*(&Local_705[16] + 16) = "torquemada01";
		*(&Local_705[16] + 8) = "mainStructure01props01";
		Local_705[16].f_24 = 10;
		Local_705[16].f_28 = 1;
		Local_705[16].f_40 = 0;
	}
	else if (bLocal_402 == Global_46894[2])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46894[2];
		*(&Local_705[06] + 16) = "casaMadrugada";
		*(&Local_705[06] + 8) = "whorehouse01Props01";
		Local_705[06].f_24 = 6;
		Local_705[06].f_28 = 1;
		Local_705[06].f_40 = 1;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46894[2];
		*(&Local_705[16] + 16) = "casaMadrugada";
		*(&Local_705[16] + 8) = "whorehouse01Props01";
		Local_705[16].f_24 = 5;
		Local_705[16].f_28 = 0;
		Local_705[16].f_40 = 1;
	}
	else if (bLocal_402 == Global_46894[0])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46894[0];
		*(&Local_705[06] + 16) = "elMatadero01";
		*(&Local_705[06] + 8) = "slaughterHouse01props01";
		Local_705[06].f_24 = 1;
		Local_705[06].f_28 = 1;
		Local_705[06].f_40 = 0;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46894[0];
		*(&Local_705[16] + 16) = "elMatadero01";
		*(&Local_705[16] + 8) = "slaughterHouse01props01";
		Local_705[16].f_24 = 2;
		Local_705[16].f_28 = 0;
		Local_705[16].f_40 = 0;
		Local_705[26] = 1;
		Local_705[26].f_4 = Global_46894[0];
		*(&Local_705[26] + 16) = "elMatadero01";
		*(&Local_705[26] + 8) = "slaughterHouse01props01";
		Local_705[26].f_24 = 3;
		Local_705[26].f_28 = 0;
		Local_705[26].f_40 = 0;
	}
	else if (bLocal_402 == Global_46866[2])
	{
	}
	else if (bLocal_402 == Global_46894[4])
	{
	}
	else if (bLocal_402 == Global_46866[1])
	{
		bLocal_375 = true;
		Local_705[06] = 1;
		Local_705[06].f_4 = Global_46866[1];
		*(&Local_705[06] + 16) = "lashermanas";
		*(&Local_705[06] + 8) = "prayerRoom01Props01";
		Local_705[06].f_24 = 11;
		Local_705[06].f_28 = 1;
		Local_705[06].f_40 = 1;
		Local_705[16] = 1;
		Local_705[16].f_4 = Global_46866[1];
		*(&Local_705[16] + 16) = "lashermanas";
		*(&Local_705[16] + 8) = "prayerRoom01Props01";
		Local_705[16].f_24 = 12;
		Local_705[16].f_28 = 0;
		Local_705[16].f_40 = 1;
	}
	else
	{
		LOG_ERROR("Missing Persons: unhandled location spawn points.");
	}
	return;
}

void Function_414() //Position: 0x16979 / 92537
{
	struct<2> Var0[5];
	float fVar11[5];
	int iVar17;
	var uVar18;
	
	if (!IS_OBJECTSET_VALID(&uLocal_703))
	{
		uLocal_703 = CREATE_OBJECTSET_IN_LAYOUT("zombiespawnset", &iLocal_405, 8, 1);
	}
	if (bLocal_402 == Global_46760[5])
	{
		Var0[02] = Vector(-1864,743f, 24,924f, 3296,365f);
		fVar11[0] = 184,028f;
		Var0[12] = Vector(-1858,08f, 25,059f, 3308,678f);
		fVar11[1] = 0,782f;
		Var0[22] = Vector(-1878,678f, 24,78f, 3310,663f);
		fVar11[2] = 319,002f;
		Var0[32] = Vector(-1871,677f, 24,923f, 3300,376f);
		fVar11[3] = 275,11f;
		Var0[42] = Vector(-1888,976f, 24,524f, 3305,415f);
		fVar11[4] = 291,559f;
	}
	else if (bLocal_402 == Global_46760[13])
	{
		Var0[02] = Vector(-1926,95f, 32,096f, 3464,557f);
		fVar11[0] = 113,583f;
		Var0[12] = Vector(-1953,436f, 29,378f, 3473,306f);
		fVar11[1] = 281,092f;
		Var0[22] = Vector(-1953,737f, 29,972f, 3462,801f);
		fVar11[2] = 238,478f;
		Var0[32] = Vector(-1962,782f, 26,043f, 3445,146f);
		fVar11[3] = 260,067f;
		Var0[42] = Vector(-1929,203f, 37,688f, 3419,257f);
		fVar11[4] = 178,575f;
	}
	else if (bLocal_402 == Global_46760[16])
	{
		Var0[02] = Vector(-2015,367f, 42,122f, 3015,473f);
		fVar11[0] = 190,734f;
		Var0[12] = Vector(-1998,525f, 42,088f, 3053,703f);
		fVar11[1] = 50,563f;
		Var0[22] = Vector(-2015,842f, 42,041f, 3042,002f);
		fVar11[2] = 235,381f;
		Var0[32] = Vector(-1999,785f, 42,041f, 3033,278f);
		fVar11[3] = 152,561f;
		Var0[42] = Vector(-2024,216f, 42,041f, 3013,539f);
		fVar11[4] = 190,594f;
	}
	else if (bLocal_402 == Global_46760[3])
	{
		Var0[02] = Vector(-2317,711f, 17,067f, 3190,225f);
		fVar11[0] = 19,568f;
		Var0[12] = Vector(-2292,442f, 17,067f, 3183,256f);
		fVar11[1] = 92,678f;
		Var0[22] = Vector(-2304,687f, 17,087f, 3158,002f);
		fVar11[2] = 111,196f;
		Var0[32] = Vector(-2323,122f, 17,074f, 3152,098f);
		fVar11[3] = 153,837f;
		Var0[42] = Vector(-2341,379f, 17,274f, 3171,074f);
		fVar11[4] = 277,331f;
	}
	else if (bLocal_402 == Global_46796[4])
	{
		Var0[02] = Vector(-3671,168f, 8,267f, 3473,887f);
		fVar11[0] = 104,901f;
		Var0[12] = Vector(-3674,73f, 8,04f, 3503,94f);
		fVar11[1] = 9,263f;
		Var0[22] = Vector(-3695,806f, 8,43f, 3451,708f);
		fVar11[2] = 212,029f;
		Var0[32] = Vector(-3677,822f, 8,354f, 3464,26f);
		fVar11[3] = 119,429f;
		Var0[42] = Vector(-3703,608f, 8,651f, 3473,019f);
		fVar11[4] = 290,304f;
	}
	else if (bLocal_402 == Global_46796[3])
	{
		Var0[02] = Vector(-4448,649f, 21,09f, 3194,198f);
		fVar11[0] = 113,019f;
		Var0[12] = Vector(-4437,685f, 9,478f, 3210,763f);
		fVar11[1] = 69,37f;
		Var0[22] = Vector(-4466,163f, 9,153f, 3226,035f);
		fVar11[2] = 313,754f;
		Var0[32] = Vector(-4465,179f, 16,356f, 3211,708f);
		fVar11[3] = 255,195f;
		Var0[42] = Vector(-4444,32f, 8,984f, 3218,083f);
		fVar11[4] = 35,873f;
	}
	else if (bLocal_402 == Global_46760[15])
	{
		Var0[02] = Vector(-2909,349f, 13,051f, 2945,653f);
		fVar11[0] = 221,038f;
		Var0[12] = Vector(-2900,731f, 13,051f, 2947,321f);
		fVar11[1] = 87,143f;
		Var0[22] = Vector(-2903,308f, 13,051f, 2950,498f);
		fVar11[2] = 64,469f;
		Var0[32] = Vector(-2931,863f, 12,426f, 2958,618f);
		fVar11[3] = 303,274f;
		Var0[42] = Vector(-2917,766f, 13,517f, 2978,641f);
		fVar11[4] = 349,744f;
	}
	else if (bLocal_402 == Global_46760[1])
	{
		Var0[02] = Vector(-3257,5f, 16,308f, 2727,449f);
		fVar11[0] = 266,257f;
		Var0[12] = Vector(-3231,844f, 15,957f, 2728,76f);
		fVar11[1] = 78,466f;
		Var0[22] = Vector(-3222,27f, 16,101f, 2714,374f);
		fVar11[2] = 100,676f;
		Var0[32] = Vector(-3238,94f, 15,921f, 2732,915f);
		fVar11[3] = 83,091f;
		Var0[42] = Vector(-3256,753f, 15,972f, 2715,602f);
		fVar11[4] = 192,544f;
	}
	else if (bLocal_402 == Global_46838[0])
	{
		Var0[02] = Vector(-3159,301f, 43,165f, 3732,541f);
		fVar11[0] = 100,174f;
		Var0[12] = Vector(-3217,006f, 40,157f, 3722,45f);
		fVar11[1] = 212,984f;
		Var0[22] = Vector(-3187,682f, 41,629f, 3753,23f);
		fVar11[2] = 8,052f;
		Var0[32] = Vector(-3159,357f, 43,169f, 3752,85f);
		fVar11[3] = 60,316f;
		Var0[42] = Vector(-3177,539f, 41,946f, 3723,433f);
		fVar11[4] = 123,631f;
	}
	else if (bLocal_402 == Global_46760[14])
	{
		Var0[02] = Vector(-2307,739f, 24,094f, 3012,534f);
		fVar11[0] = 11,052f;
		Var0[12] = Vector(-2312,1f, 23,672f, 3000,959f);
		fVar11[1] = 233,043f;
		Var0[22] = Vector(-2300,867f, 24,094f, 2986,392f);
		fVar11[2] = 168,024f;
		Var0[32] = Vector(-2307,512f, 23,412f, 3026,23f);
		fVar11[3] = 16,567f;
		Var0[42] = Vector(-2326,87f, 23,09f, 3010,99f);
		fVar11[4] = 262,54f;
	}
	else if (bLocal_402 == Global_46760[0])
	{
		Var0[02] = Vector(-2130,745f, 16,447f, 2645,467f);
		fVar11[0] = 338,745f;
		Var0[12] = Vector(-2118,261f, 16,302f, 2645,184f);
		fVar11[1] = 68,438f;
		Var0[22] = Vector(-2141,534f, 16,449f, 2619,682f);
		fVar11[2] = 310,934f;
		Var0[32] = Vector(-2132,26f, 16,201f, 2606,282f);
		fVar11[3] = 193,861f;
		Var0[42] = Vector(-2114,023f, 16,495f, 2604,881f);
		fVar11[4] = 139,516f;
	}
	else if (bLocal_402 == Global_46894[3])
	{
		Var0[02] = Vector(366,438f, 76,298f, 3445,81f);
		fVar11[0] = 133,422f;
		Var0[12] = Vector(356,238f, 77,459f, 3462,039f);
		fVar11[1] = 46,664f;
		Var0[22] = Vector(338,52f, 78,306f, 3459,81f);
		fVar11[2] = 322,897f;
		Var0[32] = Vector(347,291f, 76,298f, 3447,231f);
		fVar11[3] = 227,469f;
		Var0[42] = Vector(335,556f, 76,278f, 3440,161f);
		fVar11[4] = 260,415f;
	}
	else if (bLocal_402 == Global_46894[2])
	{
		Var0[02] = Vector(-804,864f, 16,665f, 3692,388f);
		fVar11[0] = 11,616f;
		Var0[12] = Vector(-812,934f, 16,665f, 3694,437f);
		fVar11[1] = 249,799f;
		Var0[22] = Vector(-827,322f, 16,665f, 3709,247f);
		fVar11[2] = 310,064f;
		Var0[32] = Vector(-818,341f, 16,665f, 3699,982f);
		fVar11[3] = 214,655f;
		Var0[42] = Vector(-812,788f, 16,665f, 3693,572f);
		fVar11[4] = 209,787f;
	}
	else if (bLocal_402 == Global_46894[0])
	{
		Var0[02] = Vector(-411,818f, 23,853f, 3913,663f);
		fVar11[0] = 330,284f;
		Var0[12] = Vector(-397,824f, 24,112f, 3906,219f);
		fVar11[1] = 341,729f;
		Var0[22] = Vector(-423,009f, 23,17f, 3915,786f);
		fVar11[2] = 275,119f;
		Var0[32] = Vector(-404,59f, 25,046f, 3929,721f);
		fVar11[3] = 356,238f;
		Var0[42] = Vector(-427,654f, 22,083f, 3924,683f);
		fVar11[4] = 318,9f;
	}
	else if (bLocal_402 == Global_46866[2])
	{
		Var0[02] = Vector(-1492,954f, 17,202f, 3899,458f);
		fVar11[0] = 342,605f;
		Var0[12] = Vector(-1470,411f, 17,196f, 3898,539f);
		fVar11[1] = 58,701f;
		Var0[22] = Vector(-1474,271f, 16,883f, 3926,486f);
		fVar11[2] = 146,483f;
		Var0[32] = Vector(-1503,285f, 17,201f, 3922,811f);
		fVar11[3] = 232,992f;
		Var0[42] = Vector(-1475,031f, 16,545f, 3940,707f);
		fVar11[4] = 42,586f;
	}
	else if (bLocal_402 == Global_46894[4])
	{
		Var0[02] = Vector(-1299,621f, 76,963f, 3619.0f);
		fVar11[0] = 54,317f;
		Var0[12] = Vector(-1311,821f, 77,3f, 3622,382f);
		fVar11[1] = 333,277f;
		Var0[22] = Vector(-1305,274f, 77,622f, 3597,396f);
		fVar11[2] = 82,902f;
		Var0[32] = Vector(-1334,778f, 81,488f, 3608,436f);
		fVar11[3] = 2,867f;
		Var0[42] = Vector(-1337,695f, 81,02f, 3589,016f);
		fVar11[4] = 330,266f;
	}
	else if (bLocal_402 == Global_46866[1])
	{
		Var0[02] = Vector(-1719,562f, 8,206f, 4215,835f);
		fVar11[0] = 84,614f;
		Var0[12] = Vector(-1732,778f, 8,206f, 4220,444f);
		fVar11[1] = 321,368f;
		Var0[22] = Vector(-1743,328f, 9,288f, 4210,2f);
		fVar11[2] = 264,199f;
		Var0[32] = Vector(-1717,733f, 8,031f, 4252,317f);
		fVar11[3] = 356,208f;
		Var0[42] = Vector(-1714,232f, 8,07f, 4215,73f);
		fVar11[4] = 89,72f;
	}
	else
	{
		LOG_ERROR("Missing Persons: unhandled location spawn points.");
	}
	if (IS_OBJECTSET_VALID(&uLocal_703))
	{
		iVar17 = 0;
		while (iVar17 <= Var0)
		{
			if (!Function_267(StackVal, Var0[iVar172]))
			{
				uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, &iLocal_405, Function_32(), Var0[iVar172], Vector(0.0f, fVar11[iVar17], 0.0f));
				if (IS_OBJECT_VALID(&uVar18))
				{
					ADD_OBJECT_TO_OBJECTSET(&uVar18, &uLocal_703);
				}
			}
			iVar17++;
		}
	}
	return;
}

var Function_415(struct<25> Param0) //Position: 0x175EB / 95723
{
	int iVar0;
	
	iVar0 = Function_416(Param0.f_20);
	switch (iVar0)
	{
		case 0x00000000:
			Param0.f_24 = Global_46760[3];
			return Global_46760[3];
			break;
		
		case 0x00000001:
			Param0.f_24 = Global_46760[5];
			return Global_46760[5];
			break;
		
		case 0x00000002:
			Param0.f_24 = Global_46760[16];
			return Global_46760[16];
			break;
		
		case 0x00000003:
			Param0.f_24 = Global_46760[15];
			return Global_46760[15];
			break;
		
		case 0x00000004:
			Param0.f_24 = Global_46796[4];
			return Global_46796[4];
			break;
		
		case 0x00000005:
			Param0.f_24 = Global_46760[13];
			return Global_46760[13];
			break;
		
		case 0x00000006:
			Param0.f_24 = Global_46796[3];
			return Global_46796[3];
			break;
		
		case 0x00000007:
			Param0.f_24 = Global_46760[1];
			return Global_46760[1];
			break;
		
		case 0x00000008:
			Param0.f_24 = Global_46838[0];
			return Global_46838[0];
			break;
		
		case 0x00000009:
			Param0.f_24 = Global_46760[0];
			return Global_46760[0];
			break;
		
		case 0x0000000A:
			Param0.f_24 = Global_46894[4];
			return Global_46894[4];
			break;
		
		case 0x0000000B:
			Param0.f_24 = Global_46894[3];
			return Global_46894[3];
			break;
		
		case 0x0000000C:
			Param0.f_24 = Global_46866[1];
			return Global_46866[1];
			break;
		
		case 0x0000000D:
			Param0.f_24 = Global_46866[2];
			return Global_46866[2];
			break;
		
		case 0x0000000E:
			Param0.f_24 = Global_46894[0];
			return Global_46894[0];
			break;
		
		case 0x0000000F:
			Param0.f_24 = Global_46894[2];
			return Global_46894[2];
			break;
		
		case 0x00000010:
			Param0.f_24 = Global_46760[10];
			return Global_46760[10];
			break;
		
		default:
			Param0.f_24 = Global_46838[3];
			return Global_46838[3];
			break;
	}
	return 4294967295;
}

var Function_416(int iParam0) //Position: 0x177EB / 96235
{
	int iVar0;
	struct<21> Var1;
	
	iVar0 = 4294967295;
	iVar7 = 0;
	while (iVar7 <= 17)
	{
		if (Function_417(&Var1, iVar7) == 1)
		{
			if (iParam0 == Var1.f_20)
			{
				iVar0 = iVar7;
				iVar7 = 45;
			}
		}
		iVar7++;
	}
	return iVar0;
}

int Function_417(struct<41> Param0) //Position: 0x17825 / 96293
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			Param0.f_12 = 1;
			Param0.f_20 = 56;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 1;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000001:
			Param0.f_12 = 1;
			Param0.f_20 = 24;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 2;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000002:
			Param0.f_12 = 2;
			Param0.f_20 = 95;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 3;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000003:
			Param0.f_12 = 2;
			Param0.f_20 = 96;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 4;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000004:
			Param0.f_12 = 2;
			Param0.f_20 = 29;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 5;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000005:
			Param0.f_12 = 2;
			Param0.f_20 = 168;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 6;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000006:
			Param0.f_12 = 3;
			Param0.f_20 = 9;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 7;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000007:
			Param0.f_12 = 3;
			Param0.f_20 = 89;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 8;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000008:
			Param0.f_12 = 3;
			Param0.f_20 = 169;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 9;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000009:
			Param0.f_12 = 4;
			Param0.f_20 = 68;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 10;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x0000000A:
			Param0.f_12 = 3;
			Param0.f_20 = 266;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 11;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x0000000B:
			Param0.f_12 = 3;
			Param0.f_20 = 269;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 12;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x0000000C:
			Param0.f_12 = 4;
			Param0.f_20 = 245;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 13;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x0000000D:
			Param0.f_12 = 4;
			Param0.f_20 = 289;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 14;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x0000000E:
			Param0.f_12 = 5;
			Param0.f_20 = 276;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 15;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x0000000F:
			Param0.f_12 = 6;
			Param0.f_20 = 237;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 16;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		case 0x00000010:
			Param0.f_12 = 1;
			Param0.f_20 = 339;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 0;
			Param0.f_16 = Function_418(Param0.f_12);
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_418(int iParam0) //Position: 0x17CE0 / 97504
{
	int iVar0;
	
	switch (&iParam0)
	{
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 6;
			break;
		
		case 0x00000004:
			iVar0 = 6;
			break;
		
		case 0x00000005:
			iVar0 = 7;
			break;
		
		case 0x00000006:
			iVar0 = 7;
			break;
		
		case 0x00000000:
		default:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

int Function_419(int iParam0) //Position: 0x17D44 / 97604
{
	if (!Function_120(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

void Function_420(struct<1089> Param0) //Position: 0x17D63 / 97635
{
	int iVar0;
	
	if (Param0.f_1088 != 0 && iParam1 != 1)
	{
		Param0.f_1088 = iParam1;
	}
	else if (Param0.f_1088 == 1)
	{
		Param0.f_1088 = iParam1;
		if (Param0.f_916 != 4294967295)
		{
			if (Param0.f_1088 == 2)
			{
				iVar0 = Function_375(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_374(&Param0) != 1)
				{
					Function_372(Param0.f_916, iVar0, 1);
				}
			}
			else if (Param0.f_1088 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

void Function_421(struct<917> Param0) //Position: 0x17DFF / 97791
{
	Param0.f_916 = iParam1;
	return;
}

void Function_422(struct<1093> Param0) //Position: 0x17E0D / 97805
{
	if (Function_120(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_408(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_423(int iParam0) //Position: 0x17E64 / 97892
{
	if (Function_428(iParam0))
	{
		return Function_424(iParam0, 0, 2);
	}
	return 4294967295;
}

int Function_424(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17E7E / 97918
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_427(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_425(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_425(bParam0, bParam1, bParam2, 4294967295);
}

int Function_425(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x17EDC / 98012
{
	var uVar0;
	
	if (!Function_380(bParam2))
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
	uVar0 = Function_427(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_426(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_426(int iParam0) //Position: 0x18053 / 98387
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_427(int iParam0, int iParam1, int iParam2) //Position: 0x18091 / 98449
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_428(int iParam0) //Position: 0x180B1 / 98481
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_429(struct<33> Param0) //Position: 0x180C7 / 98503
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = 1;
	bVar2 = 4294967295;
	if (Function_432())
	{
		return 0;
	}
	uVar1 = Function_423(&iParam1);
	bVar2 = Function_130(uVar1);
	if (Function_430(Param0.f_20) != 16 && !Function_285(21))
	{
		Function_417(&Param0, 16);
	}
	else if (Function_289(&iParam1) == Global_46722[0])
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_417(&Param0, 0);
				break;
			
			case 0x00000001:
				Function_417(&Param0, 1);
				break;
			
			case 0x00000002:
				Function_417(&Param0, 2);
				break;
			
			case 0x00000003:
				Function_417(&Param0, 3);
				break;
			
			case 0x00000004:
				Function_417(&Param0, 4);
				break;
			
			case 0x00000005:
				Function_417(&Param0, 6);
				break;
			
			case 0x00000006:
				Function_417(&Param0, 7);
				break;
			
			case 0x00000007:
				Function_417(&Param0, 8);
				break;
			
			case 0x00000008:
				Function_417(&Param0, 9);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Frontier.");
				Function_417(&Param0, 10);
				iVar0 = 0;
				break;
		}
	}
	else
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_417(&Param0, 10);
				break;
			
			case 0x00000001:
				Function_417(&Param0, 11);
				break;
			
			case 0x00000002:
				Function_417(&Param0, 12);
				break;
			
			case 0x00000003:
				Function_417(&Param0, 13);
				break;
			
			case 0x00000004:
				Function_417(&Param0, 14);
				break;
			
			case 0x00000005:
				Function_417(&Param0, 15);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Mexico.");
				Function_417(&Param0, 10);
				iVar0 = 0;
				break;
			}
	}
	Param0.f_32 = 0;
	Param0.f_16 = Function_418(Param0.f_12);
	if (&iParam1 != 4294967294)
	{
		Param0.f_24 = &iParam1;
	}
	return iVar0;
}

int Function_430(int iParam0) //Position: 0x1831C / 99100
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	
	iVar1 = 4294967295;
	if (Function_108(iParam0))
	{
		while (iVar0 <= 17)
		{
			Function_417(&Var2, iVar0);
			if (Var2.f_20 == iParam0)
			{
				iVar1 = iVar0;
				iVar0 = 17 + 1;
			}
			iVar0++;
		}
	}
	return iVar1;
}

bool Function_431(int iParam0) //Position: 0x1835A / 99162
{
	if (!Function_428(iParam0))
	{
		return 1;
	}
	return Function_287(&(Global_43791[iParam0]), 4);
}

bool Function_432() //Position: 0x18376 / 99190
{
	return Function_409(StackVal, 1);
}

void Function_433() //Position: 0x18385 / 99205
{
	Function_3(&Global_39906 + 8, 2);
	Function_3(&Global_39906 + 8, 4);
	Function_3(&Global_39906 + 8, 8);
	Function_3(&Global_39906 + 8, 16);
	Function_3(&Global_39906 + 8, 32);
	Function_3(&Global_39906 + 8, 64);
	Function_3(&Global_39906 + 8, 128);
	Function_3(&Global_39906 + 8, 256);
	Function_3(&Global_39906 + 8, 512);
	Function_3(&Global_39906 + 8, 1024);
	Function_3(&Global_39906 + 8, 2048);
	Function_3(&Global_39906 + 8, 131072);
	Function_3(&Global_39906 + 8, 262144);
	Function_3(&Global_39906 + 8, 524288);
	return;
}

struct<32> Function_434(struct<8> Param0) //Position: 0x1841F / 99359
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_435("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_435(char* cParam0) //Position: 0x1848B / 99467
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_436() //Position: 0x184AD / 99501
{
	return &Global_21369 + 8;
}

