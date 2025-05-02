//Decompiled with MagicRDR v1.0
//Function Count : 116
//Statics Count : 550
//Natives Count : 171
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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
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
	bool bLocal_28 = false;
	var uLocal_29 = 5;
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
	struct<5> Local_60 = { 0, 0, 0, 0, 0 } ;
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
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = false;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = false;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = false;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	char[] cLocal_110[4] = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	char[] cLocal_120[4] = 0;
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
	var uLocal_139 = 3;
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
	var uLocal_166 = 3;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 3;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 3;
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
	var uLocal_220 = 3;
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
	var uLocal_247 = 3;
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
	var uLocal_275 = 3;
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
	var uLocal_301 = 3;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 3;
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
	float fLocal_398 = 0.0f;
	bool bLocal_399 = false;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	float fLocal_403 = 0.0f;
	struct<2> Local_404 = { 0, 0 } ;
	var uLocal_406 = 0;
	struct<2> Local_407 = { 0, 0 } ;
	var uLocal_409 = 0;
	struct<2> Local_410 = { 0, 0 } ;
	var uLocal_412 = 0;
	int iLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	int iLocal_478 = 0;
	var uLocal_479 = 0;
	int iLocal_480 = 0;
	float fLocal_481 = 0.0f;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	struct<73> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<5> Var0;
	struct<2> Var22;
	struct<2> Var24;
	float fVar26;
	var uVar35;
	
	iLocal_15 = 0;
	iLocal_16 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	bLocal_98 = false;
	iLocal_99 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	iLocal_102 = 0;
	iLocal_103 = 0;
	bLocal_104 = false;
	iLocal_105 = 1;
	iLocal_106 = 0;
	bLocal_107 = false;
	iLocal_400 = 0;
	iLocal_401 = 0;
	iLocal_402 = 0;
	iLocal_413 = 4294967295;
	iLocal_480 = 0;
	iLocal_486 = 0;
	iLocal_487 = 15;
	*(&Var0 + 28) = 1;
	fVar26 = 10.0f;
	iLocal_103 = Function_115("npressDemo");
	Function_114(&uLocal_482, 2.0f);
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var22);
	uVar35 = Function_113();
	ADD_TIME(&uVar35, 0, 23, false, 0);
	iLocal_17 = 0;
	iLocal_87 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_87, 1, 0, false, 0);
	uLocal_89 = GET_TIME_OF_DAY();
	ADD_TIME(&uLocal_89, 0, 2, false, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			iLocal_17 = 5;
		}
		else if (Function_112() == 1)
		{
			iLocal_17 = 5;
		}
		else if (Global_6623)
		{
			iLocal_17 = 5;
		}
		else if (IS_OBJECT_VALID(&cLocal_110))
		{
			if (((IS_EARLIER_THAN(&iLocal_87, GET_TIME_OF_DAY()) && VDIST(Global_54078, *(&ScriptParam_0 + 16)) < 50.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &ScriptParam_0 + 16, 3212836864)) && iLocal_103 != 0)
			{
				iLocal_17 = 5;
			}
		}
		else if (Global_6650 == 1)
		{
			iLocal_17 = 5;
		}
		if (Function_111(uLocal_95, 64) && IS_OBJECT_VALID(&uLocal_118))
		{
			DESTROY_OBJECT(&uLocal_118);
		}
		if (VDIST(Global_54078, Local_60) > 3.0f)
		{
			bLocal_28 = false;
		}
		else
		{
			bLocal_28 = 500;
		}
		if (Function_108(&uLocal_482, 0,5f))
		{
			bLocal_98 = true;
			Function_107(&uLocal_482);
			iLocal_486 = (iLocal_486 + 1 % 4);
		}
		switch (iLocal_17)
		{
			case 0x00000000:
				switch (iLocal_16)
				{
					case 0x00000000:
						if (Function_106(128))
						{
							if (IS_LAYOUTREF_VALID(&Global_46715))
							{
							}
							else
							{
								iLocal_17 = 5;
							}
							iLocal_16++;
						}
						else
						{
							iLocal_17 = 5;
						}
						break;
					
					case 0x00000001:
						if (Function_105(&(Global_43791[Global_43789]), 4))
						{
							if (Function_104(Global_46838[1]))
							{
								if (Function_94(&Global_39906, Global_46838[1]))
								{
								}
								else
								{
									bLocal_28 = false;
									iLocal_17 = 5;
								}
							}
							else if (Function_104(Global_46894[1]))
							{
								if (Function_94(&Global_39906, Global_46894[1]))
								{
								}
								else
								{
									bLocal_28 = false;
									iLocal_17 = 5;
								}
							}
							else
							{
								bLocal_28 = false;
								iLocal_17 = 5;
							}
							iLocal_16++;
						}
						break;
					
					case 0x00000002:
						Function_93();
						Global_39906.f_24 = Function_90(&Global_39906, 0, 80, 2000, 4294967295);
						iLocal_413 = Global_43789;
						Function_87();
						Function_86("EVENT_INIT: BOUNTYHUNTER_GET_A_VALID_REGION_FROM_STRUCT_Z");
						iLocal_16++;
						break;
					
					case 0x00000003:
						if (Function_105(&(Global_43791[Global_43789]), 4))
						{
							iLocal_16++;
						}
						else
						{
							bLocal_28 = 2000;
							break;
						}
						break;
					
					case 0x00000004:
						if (Function_79(Global_43789))
						{
							iLocal_16++;
						}
						else
						{
							bLocal_28 = 600;
							break;
						}
						break;
					
					case 0x00000005:
						ScriptParam_0.f_60 = 5.0f;
						if (iLocal_96 == 0)
						{
							if (Function_78() == 1)
							{
								ScriptParam_0.f_72 = 5;
								(&ScriptParam_0 + 72)->f_4 = 512;
								Function_93();
								if (Function_77())
								{
									PRINTSTRING("WANTED POSTER spawnPos: ");
									PRINTVECTOR(Local_407);
									PRINTNL();
									Local_63 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("wpLay") };
									iLocal_478 = CREATE_LAYOUT(&Local_63);
									if (!IS_LAYOUTREF_VALID(&iLocal_478))
									{
										bLocal_28 = false;
										iLocal_17 = 5;
										break;
									}
									iLocal_16++;
									bLocal_28 = 1000;
								}
								else
								{
									iLocal_17 = 5;
									bLocal_28 = false;
								}
								Function_86("EVENT_INIT: WANTEDPOSTER_FindPosterFlag");
							}
							else
							{
								bLocal_28 = 3000;
							}
						}
						break;
					
					case 0x00000006:
						*(&ScriptParam_0 + 16) = Local_407;
						*(&ScriptParam_0 + 28) = Local_410;
						bLocal_28 = false;
						iLocal_16 = 9;
						iLocal_17 = 1;
						break;
					
					case 0x00000007:
						break;
					
					default:
						LOG_ERROR("Wanted poster initilization went weird");
						iLocal_17 = 5;
						bLocal_28 = false;
						break;
				}
				if (iLocal_17 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_116));
				}
				break;
			
			case 0x00000001:
				Function_93();
				if (!iLocal_102)
				{
					if (!IS_VOLUME_VALID(&uLocal_91))
					{
						Function_74(&Var22, &Var24);
						uLocal_91 = CREATE_VOLUME_IN_LAYOUT(StackVal, &iLocal_478, "posterVolume", 2,802597E-45f, Var22, Var24, Vector(3.0f, 3.0f, 3.0f));
					}
					if (IS_VOLUME_VALID(&uLocal_91))
					{
						if (!CAMERA_IS_VISIBLE_VOLUME(GET_GAME_CAMERA(), &uLocal_91, 1065353216, 1117126656, 1, 1, 0) || IS_OBJECT_VALID(FIND_OBJECT_IN_LAYOUT(&Global_46715, "mpNextPoster")))
						{
							if (!Function_72(StackVal, StackVal, &iLocal_478, Local_407, Local_410))
							{
								bLocal_28 = false;
								iLocal_17 = 5;
								break;
							}
							DESTROY_VOLUME(&uLocal_91);
							Function_71(&uLocal_95, 32);
							iLocal_102 = 1;
						}
					}
				}
				Function_86("WANTEDPOSTER_CreatePosterBeforeHand");
				if (Function_111(uLocal_95, 32))
				{
					if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_394) && !iLocal_402)
					{
						bLocal_28 = false;
						iLocal_17 = 5;
						break;
					}
					else if (IS_OBJECT_VALID(&cLocal_110))
					{
						Function_70(0);
						Function_107(&iLocal_79);
						iLocal_17 = 2;
						bLocal_28 = false;
					}
				}
				if (iLocal_17 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_116));
				}
				break;
			
			case 0x00000002:
				if (Function_69(&iLocal_478) == 1)
				{
					Function_68(1, &iLocal_478);
					iLocal_100 = 1;
					uLocal_396 = CREATE_CAMERA_FOCUS_POINT_OBJECT_WITH_TUNING(&iLocal_478, Function_67(), &cLocal_110, "wantedPoster", 2.0f, 2,0001f);
					if (!IS_OBJECT_VALID(&uLocal_396))
					{
						LOG_ERROR("Could not create wanted poster camera focus");
					}
					else
					{
						SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_396, "npm_bh_cfp");
						SET_CAMERA_FOCUS_PLAYER_INVULNERABLE(&uLocal_396, 1);
						SET_CAMERA_FOCUS_PLAYER_INPUT_DISABLED(&uLocal_396, 1);
					}
					if (IS_BLIP_VALID(&uLocal_108))
					{
						SET_BLIP_BLINK(&uLocal_108, 1, 0, 5f);
					}
					Function_71(&uLocal_95, 16);
				}
				if (iLocal_100 == 1)
				{
					Function_65(1);
					if (IS_BLIP_VALID(&uLocal_108))
					{
						SET_BLIP_BLINK(&uLocal_108, 0, 0, 5f);
					}
					iLocal_17 = 3;
				}
				else if (Function_64(1, 0, 1, 1) | 0)
				{
					iLocal_17 = 5;
				}
				else if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_394) && !iLocal_402)
				{
					bLocal_28 = false;
					iLocal_17 = 5;
				}
				else if (Function_63(iLocal_413))
				{
					if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iLocal_4139] + 8))
					{
						iLocal_17 = 5;
					}
				}
				if (iLocal_17 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_116));
				}
				break;
			
			case 0x00000003:
				Function_62();
				if (Function_61(4294967295))
				{
					bLocal_107 = VDIST(Global_54078, Local_60) > 3.0f;
					if (StackVal < StackVal)
					{
						iLocal_400 = 1;
						bLocal_107 = VDIST(Global_54078, Local_60) > 6.0f;
					}
					else if (bLocal_107 == 0)
					{
						iLocal_400 = 0;
					}
					else if (Function_57(&Global_54076, IS_CAMERA_FOCUS_ENABLED(&uLocal_396), 0))
					{
						iLocal_400 = 1;
					}
					else if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
					{
						iLocal_400 = 1;
					}
					else
					{
						iLocal_400 = 0;
					}
				}
				if (iLocal_100 == 1)
				{
					if (IS_OBJECT_VALID(&uLocal_116))
					{
						GET_OBJECT_POSITION(&uLocal_116, &Local_60);
					}
					Function_93();
					if (!Function_111(uLocal_95, 64))
					{
						if (Function_61(0))
						{
							if (Function_64(1, 0, 1, 1) | 0)
							{
								if (iLocal_99 == 1)
								{
									Function_68(0, &iLocal_478);
								}
							}
							else if (iLocal_400 != 1 && bLocal_107 != 1)
							{
								if (iLocal_99 == 1)
								{
									Function_68(0, &iLocal_478);
								}
							}
							else if (iLocal_99 == 0)
							{
								Function_68(1, &iLocal_478);
							}
						}
					}
					Function_86("Activate Poster Check");
					if (Function_46())
					{
						if (Function_63(Global_39906.f_24))
						{
							bLocal_104 = true;
							Var0.f_4 = 512;
							Function_45();
							Function_45();
							if (Function_40(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/DLC/ZombiePack/MissingPersons/event_bountyhunter_z.sc", 4), Function_45(), Function_45(), 0, 0, 0, Global_39906.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
							{
								Function_39(1);
							}
							else
							{
								LOG_ERROR("Problem setting bounty hunter beat from wanted poster");
							}
						}
						else
						{
							LOG_ERROR("Bad location found, search settings should be changed");
						}
						if (iLocal_101 == 1)
						{
							HUD_CLEAR_HELP_QUEUE();
						}
						iLocal_17 = 5;
						bLocal_28 = 1500;
					}
					else if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_394) && !iLocal_402)
					{
						bLocal_28 = false;
						iLocal_17 = 5;
					}
					else if (!Function_111(uLocal_95, 128))
					{
						Function_93();
						Function_65(1);
						if (IS_BLIP_VALID(&uLocal_108))
						{
							SET_BLIP_BLINK(&uLocal_108, 1, 0, 5f);
						}
						Function_71(&uLocal_95, 128);
						bLocal_28 = false;
						Function_86("showing blip");
					}
					else
					{
						Function_93();
						if (Function_61(3))
						{
							if (Global_6629 == 1)
							{
								if (Function_111(uLocal_95, 16) && iLocal_99 != 1)
								{
									if (iLocal_103 == 0)
									{
										if (Function_37())
										{
											Function_36(&cLocal_120);
											Function_27(&cLocal_120, "npm_bh_nb1", 0);
											Function_27(&cLocal_120, "npm_bh_nb2", 0);
										}
									}
									Function_26(&uLocal_95, 16);
									if (Function_24(&cLocal_120, 0, 0))
									{
										Function_20(&cLocal_120);
									}
								}
							}
						}
						Function_86("PlayerInTown Check");
					}
					if (iLocal_99 == 1)
					{
						if (IS_OBJECT_VALID(&uLocal_396))
						{
							if (Function_111(uLocal_95, 64))
							{
								if (IS_OBJECT_VALID(&uLocal_396))
								{
									SET_CAMERA_FOCUS_ENABLED(&uLocal_396, 0);
									DESTROY_OBJECT(&uLocal_396);
								}
							}
							else
							{
								Function_93();
								Function_17();
								Function_86("WANTEDPOSTER_UpdateContextUse");
								if (iLocal_105 == 0)
								{
									uLocal_57 = Vector(0.0f, 0.0f, -1.0f);
									Function_16(&uLocal_57, fLocal_403);
									uLocal_57 = Function_16(&uLocal_57, fLocal_403);
									Function_15(StackVal, StackVal, Local_60, Global_54078, &uLocal_54);
									fLocal_398 = VDOT(&uLocal_57, &uLocal_54);
									bLocal_399 = IS_CAMERA_FOCUS_ENABLED(&uLocal_396);
									Function_93();
									if (bLocal_399 == 1)
									{
										if (IS_CAMERA_FOCUS_ACTIVE(&uLocal_396) != 1 && !Function_111(uLocal_95, 1))
										{
											MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
											if (iLocal_413 == Global_46838[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2653,303f, 67,263f, 3424,062f), 228,253f, 1, 1, 1);
											}
											else if (iLocal_413 == Global_46914[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(663,996f, 78,755f, 1315,594f), 181,049f, 1, 1, 1);
											}
											else if (iLocal_413 == Global_46866[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2664,823f, 31,387f, 4249,94f), 259,823f, 1, 1, 1);
											}
											else if (iLocal_413 == Global_46894[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-717,414f, 63,247f, 3292,827f), 139,017f, 1, 1, 1);
											}
											else if (iLocal_413 == Global_46850[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-4335,978f, 30,189f, 4382,272f), 7,678f, 1, 1, 1);
											}
											else if (iLocal_413 == Global_46816[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-817,061f, 93,809f, 2425,982f), 162,56f, 1, 1, 1);
											}
											else if (iLocal_413 == Global_46926[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-416,355f, 152,043f, 1603,441f), 282,897f, 1, 1, 1);
											}
											else if (iLocal_413 == Global_46796[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-3679,052f, 42,778f, 2116,671f), 52,789f, 1, 1, 1);
											}
											Function_71(&uLocal_95, 1);
										}
										else if (IS_CAMERA_FOCUS_ACTIVE(&uLocal_396) != 0 && Function_111(uLocal_95, 1))
										{
											Function_26(&uLocal_95, 1);
										}
									}
									Function_86("camerafocus usage logic");
									Function_93();
									if (StackVal || (FABS((StackVal - ((bLocal_399 != 1 && fLocal_398 > 0.0f) && bLocal_107 != 1))) < 2.0f && bLocal_399 != 1))
									{
										Function_68(0, &iLocal_478);
									}
									else if (bLocal_399 != 0 && fLocal_398 < 0.0f)
									{
										Function_68(1, &iLocal_478);
									}
									else if (Function_111(uLocal_95, 64) && bLocal_399 != 1)
									{
										Function_68(0, &iLocal_478);
									}
									Function_86("camerafocus angle logic");
								}
								else if (IS_CAMERA_FOCUS_ENABLED(&uLocal_396))
								{
									Function_68(0, &iLocal_478);
								}
							}
						}
					}
				}
				if (Global_6629 == 0)
				{
					bLocal_28 = 3000;
					break;
				}
				if (iLocal_17 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_116)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_116));
				}
				break;
			
			case 0x00000005:
				RELEASE_LAYOUT_REF(&iLocal_478);
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_28 = false;
				break;
		}
		WAIT(bLocal_28);
	}
	Function_8(&iLocal_478);
	if (Function_111(uLocal_95, 4))
	{
		Function_3();
	}
	Function_1(iLocal_487);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xD63 / 3427
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_2(105)), 0);
	return;
}

int Function_2(bool bParam0) //Position: 0xD86 / 3462
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_3() //Position: 0xD9D / 3485
{
	Function_4(&uLocal_29);
	return;
}

void Function_4(int iParam0) //Position: 0xDA8 / 3496
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_5(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_5(struct<2>[] Param0, int iParam1) //Position: 0xDD0 / 3536
{
	if (Function_7(&(Param0[iParam12]), 4))
	{
		if (Function_7(&(Param0[iParam12]), 1))
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
			Function_6(&(Param0[iParam12]), 1);
			Function_6(&(Param0[iParam12]), 2);
			Function_6(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_6(struct<13> Param0) //Position: 0xF1B / 3867
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_7(struct<13> Param0) //Position: 0xF38 / 3896
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0) //Position: 0xF56 / 3926
{
	if (bLocal_104)
	{
		TASK_CLEAR(&Global_54076);
	}
	if (IS_OBJECT_VALID(&uLocal_118))
	{
		DESTROY_OBJECT(&uLocal_118);
	}
	if (Function_111(uLocal_95, 512))
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (IS_BLIP_VALID(&uLocal_108))
	{
		REMOVE_BLIP(&uLocal_108);
	}
	if (IS_ACTOR_VALID(&uLocal_18))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uLocal_18);
		CLEAR_ACTOR_MAX_SPEED(&uLocal_18);
	}
	if (IS_VOLUME_VALID(&uLocal_91))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_91);
		DESTROY_VOLUME(&uLocal_91);
	}
	if (IS_OBJECT_VALID(&cLocal_110))
	{
		DESTROY_OBJECT(&cLocal_110);
	}
	if (IS_OBJECT_VALID(&uLocal_112))
	{
		DESTROY_OBJECT(&uLocal_112);
	}
	if (IS_VOLUME_VALID(&uLocal_93))
	{
		DESTROY_VOLUME(&uLocal_93);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_394))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_394);
	}
	if (IS_OBJECT_VALID(&uLocal_114))
	{
		DESTROY_OBJECT(&uLocal_114);
	}
	if (IS_OBJECT_VALID(&uLocal_116))
	{
		DESTROY_OBJECT(&uLocal_116);
	}
	if (IS_OBJECT_VALID(&uLocal_396))
	{
		DESTROY_OBJECT(&uLocal_396);
	}
	Function_13();
	Function_11(1);
	Function_36(&cLocal_120);
	DESTROY_OBJECT(&uLocal_114);
	Function_9();
	if (IS_BLIP_VALID(&uLocal_108))
	{
		SET_BLIP_BLINK(&uLocal_108, 0, 0, 5f);
	}
	if (IS_ITERATOR_VALID(&uLocal_414))
	{
		DESTROY_ITERATOR(&uLocal_414);
	}
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		DESTROY_LAYOUT(&uParam0);
	}
	return;
}

void Function_9() //Position: 0x1077 / 4215
{
	if (!Function_10(StackVal, Local_404))
	{
		STREAMING_UNLOAD_BOUNDS();
	}
	Local_404 = Vector(0.0f, 0.0f, 0.0f);
	return;
}

bool Function_10(vector3 vParam0) //Position: 0x1094 / 4244
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_11(int iParam0) //Position: 0x10AC / 4268
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_12())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_12() //Position: 0x10EC / 4332
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

void Function_13() //Position: 0x1111 / 4369
{
	if (iLocal_97 == 0)
	{
		if (IS_ACTOR_VALID(&uLocal_18))
		{
			if (Global_6646 == 0)
			{
				TASK_CLEAR(&uLocal_18);
				TASK_WANDER(&uLocal_18, 3212836864);
				iLocal_487 = 30;
			}
			AI_CONVERSE_ENABLE(&uLocal_18);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uLocal_18, 1);
			RELEASE_ACTOR(&uLocal_18);
			Function_14(&uLocal_18, 1);
		}
		iLocal_97 = 1;
	}
	return;
}

void Function_14(var uParam0, bool bParam1) //Position: 0x1160 / 4448
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[0]), 0);
	}
	return;
}

void Function_15(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1194 / 4500
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<8> Function_16(struct<2> Param0) //Position: 0x11B8 / 4536
{
	struct<2> Var0;
	
	Var0 = Param0;
	ROTATE_VECTOR_XZ(&Var0, bParam1, 0);
	return StackVal, Var0;
}

void Function_17() //Position: 0x11D2 / 4562
{
	if (!Function_111(uLocal_95, 64))
	{
		if (iLocal_99 == 1)
		{
			if (!Function_111(uLocal_95, 256))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_394))
				{
					if (IS_OBJECT_VALID(&uLocal_118))
					{
						DESTROY_OBJECT(&uLocal_118);
					}
					DESTROY_OBJECT(&uLocal_116);
					Function_69(&iLocal_478);
					Function_71(&uLocal_95, 256);
				}
				if (iLocal_105 == 1)
				{
					Function_19();
				}
			}
			if (Function_111(uLocal_95, 256))
			{
				if (iLocal_100 != 1 && iLocal_106 != 0)
				{
					if (MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
					{
						GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_116), true);
						TASK_CLEAR(&Global_54076);
						TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_116), "nPlayerUse", 1, 1);
						SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_116, "nPlayerUse", false, 0, 0);
						TASK_PRIORITY_SET(&Global_54076, true);
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_394))
						{
							Function_71(&uLocal_95, 512);
							iLocal_402 = 1;
							if (IS_VOLUME_VALID(&uLocal_93))
							{
								DESTROY_VOLUME(&uLocal_93);
							}
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_394);
							ENABLE_USE_CONTEXTS(0);
						}
						iLocal_106 = 1;
						Function_18();
					}
				}
			}
		}
	}
	return;
}

void Function_18() //Position: 0x12D3 / 4819
{
	SET_CAMERA_FOCUS_ENABLED(&uLocal_396, 0);
	iLocal_105 = 1;
	return;
}

void Function_19() //Position: 0x12E4 / 4836
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Vector(0.0f, -1.0f, 1,5f);
	GET_OBJECT_RELATIVE_POSITION(&cLocal_110, Var0, &Var2);
	SET_OBJECT_POSITION(&uLocal_93, Var2);
	SET_CAMERA_FOCUS_ENABLED(&uLocal_396, 1);
	iLocal_105 = 0;
	return;
}

void Function_20(struct<909> Param0) //Position: 0x1318 / 4888
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
			Function_21(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

void Function_21(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x13C0 / 5056
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_22(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_22(int iParam0) //Position: 0x144B / 5195
{
	char* cVar0[16];
	
	if (!Function_23())
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

bool Function_23() //Position: 0x148A / 5258
{
	if (Function_111(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_24(struct<909> Param0) //Position: 0x14A5 / 5285
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_54078, (&Param0 + 8));
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
	else if (Function_25() && &iParam2 != 0)
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

var Function_25() //Position: 0x154C / 5452
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_26(var uParam0, int iParam1) //Position: 0x1579 / 5497
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

int Function_27(struct<1093> Param0) //Position: 0x158F / 5519
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
	if (Function_111(Param0.f_1048, 32))
	{
		if (!Function_34(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	uVar21 = Function_30(Function_33(Param0.f_1092), Function_31(Param0.f_1092));
	iVar22 = Function_28(Function_33(Param0.f_1092), Function_31(Param0.f_1092));
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

int Function_28(int iParam0, int iParam1) //Position: 0x1703 / 5891
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_33(iVar1) != iParam0 && Function_31(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[iVar17].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_29(int iParam0) //Position: 0x174F / 5967
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_30(int iParam0, int iParam1) //Position: 0x1764 / 5988
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_33(iVar1) != iParam0 && Function_31(iVar1) != iParam1)
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

int Function_31(int iParam0) //Position: 0x17B5 / 6069
{
	if (!Function_32(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

bool Function_32(int iParam0) //Position: 0x17D4 / 6100
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_33(int iParam0) //Position: 0x17EB / 6123
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_34(int iParam0) //Position: 0x1806 / 6150
{
	if (!Function_32(iParam0))
	{
		return 0;
	}
	if (!Function_35(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0) //Position: 0x182A / 6186
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_36(char* cParam0) //Position: 0x183F / 6207
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (cParam0.f_620 - 1))
	{
		strcpy(&cParam0 + 620[iVar04], "", 16);
		(*&cParam0 + 724)[iVar0] = 0;
		iVar0++;
	}
	cParam0.f_908 = 0;
	return;
}

bool Function_37() //Position: 0x187F / 6271
{
	if (Function_38(359) < 0 || Function_38(358) < 0)
	{
		return 0;
	}
	return 1;
}

int Function_38(int iParam0) //Position: 0x189F / 6303
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_39(bool bParam0) //Position: 0x18E0 / 6368
{
	if (bParam0 == 1)
	{
		Function_71(&Global_39906 + 8, 1);
	}
	else
	{
		Function_26(&Global_39906 + 8, 1);
	}
	return;
}

bool Function_40(int iParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) //Position: 0x1901 / 6401
{
	int iVar0;
	
	uParam11 = uParam11;
	uParam12 = uParam12;
	uParam13 = uParam13;
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_44(&(Global_38380[iVar036]), 4))
			{
				if (!IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
				{
					Global_38380[iVar036].f_4 = uParam7;
					Global_38380[iVar036].f_88 = &uParam19;
					Global_38380[iVar036].f_104 = &uParam20;
					Global_38380[iVar036].f_84 = &uParam17;
					Global_38380[iVar036].f_92 = &uParam18;
					Global_38380[iVar036].f_12 = 4294967295;
					*(&Global_38380[iVar036] + 16) = &uParam2;
					*(&Global_38380[iVar036] + 24) = Param3;
					*(&Global_38380[iVar036] + 36) = Param5;
					*(&Global_38380[iVar036] + 72) = &uParam8;
					Global_38380[iVar036].f_56 = uParam10;
					*(&Global_38380[iVar036] + 64) = &uParam9;
					Global_38380[iVar036].f_96 = &uParam15;
					Global_38380[iVar036].f_100 = &uParam16;
					Global_38380[iVar036].f_108 = 0.0f;
					Function_43(&uParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = uParam1;
					Function_42(&(Global_38380[iVar036]), 1);
					Function_41(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_41(vector3 vParam0) //Position: 0x1A4F / 6735
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

void Function_42(vector3 vParam0) //Position: 0x1A6C / 6764
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_43(struct<157> Param0) //Position: 0x1A7F / 6783
{
	Param1 = Param0;
	Param1.f_24 = Param0.f_24;
	*(&Param1 + 28) = &Param0 + 28;
	Param1.f_4 = StackVal;
	Param1.f_8 = StackVal;
	*(&Param1 + 36) = { StackVal, *(&Param0 + 36) };
	(&Param1 + 36)->f_16 = (&Param0 + 36)->f_16;
	(&Param1 + 36)->f_20 = (&Param0 + 36)->f_20;
	(&Param1 + 36)->f_24 = (&Param0 + 36)->f_24;
	(&Param1 + 36)->f_28 = (&Param0 + 36)->f_28;
	Param1.f_68 = Param0.f_68;
	(&Param1 + 68)->f_4 = StackVal;
	(&Param1 + 68)->f_8 = StackVal;
	Param1.f_84 = Param0.f_84;
	(&Param1 + 84)->f_4 = StackVal;
	(&Param1 + 84)->f_8 = StackVal;
	(&Param1 + 84)->f_12 = (&Param0 + 84)->f_12;
	(&Param1 + 84)->f_16 = (&Param0 + 84)->f_16;
	(&Param1 + 84)->f_20 = (&Param0 + 84)->f_20;
	(&Param1 + 84)->f_24 = (&Param0 + 84)->f_24;
	(&Param1 + 84)->f_32 = (&Param0 + 84)->f_32;
	(&Param1 + 84)->f_36 = (&Param0 + 84)->f_36;
	(&Param1 + 84)->f_40 = (&Param0 + 84)->f_40;
	(&Param1 + 84)->f_44 = (&Param0 + 84)->f_44;
	(&Param1 + 84)->f_52 = (&Param0 + 84)->f_52;
	(&Param1 + 84)->f_48 = (&Param0 + 84)->f_48;
	(&Param1 + 84)->f_56 = (&Param0 + 84)->f_56;
	(&Param1 + 84)->f_28 = (&Param0 + 84)->f_28;
	Param1.f_148 = Param0.f_148;
	(&Param1 + 148)->f_4 = StackVal;
	Param1.f_156 = Param0.f_156;
	(&Param1 + 156)->f_4 = StackVal;
	(&Param1 + 156)->f_8 = StackVal;
	return;
}

bool Function_44(vector3 vParam0) //Position: 0x1C2F / 7215
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_45() //Position: 0x1C4D / 7245
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_46() //Position: 0x1C57 / 7255
{
	if (Function_111(uLocal_95, 256) && Function_56(&iLocal_83))
	{
		if (Function_111(uLocal_95, 64) && GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_116))
		{
			return 1;
		}
		if (Function_108(&iLocal_83, 4.0f))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_116)))
			{
				GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_116));
			}
			return 1;
		}
		return 0;
	}
	if (Function_61(4294967295))
	{
		if (iLocal_100 == 1)
		{
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_116))
			{
				bLocal_28 = false;
			}
			if (GET_CURRENT_GRINGO(&Global_54076) != GET_GRINGO_FROM_OBJECT(&uLocal_116) && !Function_111(uLocal_95, 64))
			{
				DESTROY_OBJECT(&uLocal_396);
				Function_47(&iLocal_478);
				if (IS_OBJECT_VALID(&uLocal_396))
				{
					SET_CAMERA_FOCUS_ENABLED(&uLocal_396, 0);
				}
				Function_65(0);
				Function_18();
				Function_71(&uLocal_95, 64);
			}
			if (Function_111(uLocal_95, 64))
			{
				if (Function_111(uLocal_95, 256))
				{
					iLocal_87 = GET_TIME_OF_DAY();
					ADD_TIME(&iLocal_87, 1, 0, false, 0);
					Function_107(&iLocal_83);
					bLocal_28 = false;
				}
			}
		}
	}
	return 0;
}

bool Function_47(int iParam0) //Position: 0x1D4B / 7499
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	iVar4 = 1;
	if (!IS_OBJECT_VALID(&cLocal_110))
	{
		return 0;
	}
	Function_74(&Var0, &Var2);
	SET_OBJECT_POSITION(&cLocal_110, Var0);
	SET_OBJECT_ORIENTATION(&cLocal_110, Var2);
	if (IS_OBJECT_VALID(&uLocal_118))
	{
		DESTROY_OBJECT(&uLocal_118);
	}
	if (!Function_111(uLocal_95, 256))
	{
		Function_48(&iParam0, &cLocal_110, &uLocal_118, Global_39906.f_12);
	}
	return iVar4;
}

int Function_48(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1DAB / 7595
{
	var uVar0;
	bool bVar2;
	struct<8> Var3;
	var uVar11;
	var uVar27;
	var uVar43;
	char* cVar59[64];
	
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return 0;
	}
	GET_OBJECT_POSITION(&uParam1, &uVar0);
	Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("posterText") };
	uParam3 = uParam3;
	strcpy(&cVar59, "", 64);
	bVar2 = Function_52(Global_39906.f_20);
	Function_51(bVar2, &uVar43);
	Function_50(Global_39906.f_24, &uVar11);
	Function_49(&uVar27);
	PRINTSTRING("Bounty Gang: ");
	PRINTINT(bVar2);
	PRINTNL();
	if (IS_OBJECT_VALID(&uParam2))
	{
		DESTROY_OBJECT(&uParam2);
	}
	uParam2 = UNK_0x211DE185(&uParam0, &Var3, "pm_wp_text", &uVar43, &uVar11, &uVar27, &cVar59, &uParam1, 0, 4278649856);
	if (!IS_OBJECT_VALID(&uParam2))
	{
		return 0;
	}
	return 1;
}

void Function_49(char* cParam0) //Position: 0x1E73 / 7795
{
	switch (Global_39906.f_12)
	{
		case 0x00000001:
		case 0x00000002:
			strcpy(&cParam0, "npm_bh_mn4", 64);
			break;
		
		case 0x00000003:
		case 0x00000004:
			strcpy(&cParam0, "npm_bh_mn5", 64);
			break;
		
		case 0x00000005:
		case 0x00000006:
			strcpy(&cParam0, "npm_bh_mn6", 64);
			break;
		
		default:
			strcpy(&cParam0, "npm_bh_mn7", 64);
			break;
	}
	return;
}

void Function_50(int iParam0, char* cParam1) //Position: 0x1EF7 / 7927
{
	strcpy(&cParam1, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 64);
	return;
}

void Function_51(char* cParam0, char* cParam1) //Position: 0x1F0F / 7951
{
	switch (cParam0)
	{
		case 0x00000000:
			strcpy(&cParam1, "pm_bh_wpc1", 64);
			break;
		
		case 0x00000001:
			strcpy(&cParam1, "pm_bh_wpc2", 64);
			break;
		
		case 0x00000002:
			strcpy(&cParam1, "pm_bh_wpc3", 64);
			break;
		
		case 0x00000003:
			strcpy(&cParam1, "pm_bh_wpc4", 64);
			break;
		
		case 0x00000004:
			strcpy(&cParam1, "pm_bh_wpc5", 64);
			break;
		
		case 0x00000005:
			strcpy(&cParam1, "pm_bh_wpc6", 64);
			break;
		
		case 0x00000006:
			strcpy(&cParam1, "pm_bh_wpc7", 64);
			break;
		
		case 0x00000007:
			strcpy(&cParam1, "pm_bh_wpc8", 64);
			break;
		
		case 0x00000008:
			strcpy(&cParam1, "pm_bh_wpc9", 64);
			break;
		
		case 0x00000009:
			strcpy(&cParam1, "pm_bh_wpc10", 64);
			break;
		
		case 0x0000000A:
			strcpy(&cParam1, "pm_bh_wpc11", 64);
			break;
		
		case 0x0000000B:
			strcpy(&cParam1, "pm_bh_wpc12", 64);
			break;
		
		case 0x0000000C:
			strcpy(&cParam1, "pm_bh_wpc13", 64);
			break;
		
		case 0x0000000D:
			strcpy(&cParam1, "pm_bh_wpc14", 64);
			break;
		
		case 0x0000000E:
			strcpy(&cParam1, "pm_bh_wpc15", 64);
			break;
		
		case 0x0000000F:
			strcpy(&cParam1, "pm_bh_wpc16", 64);
			break;
		
		case 0x00000010:
			strcpy(&cParam1, "pm_bh_wpc10", 64);
			break;
		
		default:
			strcpy(&cParam1, "pm_bh_friend", 64);
			break;
	}
	return;
}

int Function_52(int iParam0) //Position: 0x2106 / 8454
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	
	iVar1 = 4294967295;
	if (Function_55(iParam0))
	{
		while (iVar0 <= 17)
		{
			Function_53(&Var2, iVar0);
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

int Function_53(struct<41> Param0) //Position: 0x2144 / 8516
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
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000001:
			Param0.f_12 = 1;
			Param0.f_20 = 24;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 2;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000002:
			Param0.f_12 = 2;
			Param0.f_20 = 95;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 3;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000003:
			Param0.f_12 = 2;
			Param0.f_20 = 96;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 4;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000004:
			Param0.f_12 = 2;
			Param0.f_20 = 29;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 5;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000005:
			Param0.f_12 = 2;
			Param0.f_20 = 168;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 6;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000006:
			Param0.f_12 = 3;
			Param0.f_20 = 9;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 7;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000007:
			Param0.f_12 = 3;
			Param0.f_20 = 89;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 8;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000008:
			Param0.f_12 = 3;
			Param0.f_20 = 169;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 9;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000009:
			Param0.f_12 = 4;
			Param0.f_20 = 68;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 10;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x0000000A:
			Param0.f_12 = 3;
			Param0.f_20 = 266;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 11;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x0000000B:
			Param0.f_12 = 3;
			Param0.f_20 = 269;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 12;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x0000000C:
			Param0.f_12 = 4;
			Param0.f_20 = 245;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 13;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x0000000D:
			Param0.f_12 = 4;
			Param0.f_20 = 289;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 14;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x0000000E:
			Param0.f_12 = 5;
			Param0.f_20 = 276;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 15;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x0000000F:
			Param0.f_12 = 6;
			Param0.f_20 = 237;
			Param0.f_24 = Global_46894[1];
			Param0.f_28 = Global_46894[1];
			Param0.f_32 = 0;
			Param0.f_40 = 16;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		case 0x00000010:
			Param0.f_12 = 1;
			Param0.f_20 = 339;
			Param0.f_24 = Global_46838[1];
			Param0.f_28 = Global_46838[1];
			Param0.f_32 = 0;
			Param0.f_40 = 0;
			Param0.f_16 = Function_54(Param0.f_12);
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

var Function_54(int iParam0) //Position: 0x25FF / 9727
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

bool Function_55(int iParam0) //Position: 0x2663 / 9827
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

bool Function_56(int iParam0) //Position: 0x267A / 9850
{
	return Function_111(iParam0, 1);
}

bool Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x2688 / 9864
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
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
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_60(&iParam0))
	{
		return 1;
	}
	if (Function_59(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_58())
	{
		return 1;
	}
	return 0;
}

bool Function_58() //Position: 0x274C / 10060
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_59(int iParam0) //Position: 0x2763 / 10083
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_60(int iParam0) //Position: 0x276F / 10095
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

bool Function_61(int iParam0) //Position: 0x277E / 10110
{
	if (bLocal_98)
	{
		if (iLocal_486 != iParam0 || iParam0 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

void Function_62() //Position: 0x279A / 10138
{
	struct<2> Var0;
	
	if (Function_111(uLocal_95, 256) && !Function_111(uLocal_95, 64))
	{
		GET_OBJECT_ORIENTATION(&cLocal_110, &Var0);
		if (Function_10(StackVal, Var0))
		{
			Function_47(&iLocal_478);
		}
	}
	return;
}

bool Function_63(int iParam0) //Position: 0x27CF / 10191
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_64(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x27E5 / 10213
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

void Function_65(int iParam0) //Position: 0x2894 / 10388
{
	var uVar0;
	
	if (IS_BLIP_VALID(&uLocal_108))
	{
		REMOVE_BLIP(&uLocal_108);
	}
	if (IS_OBJECT_VALID(&cLocal_110))
	{
		uVar0 = &cLocal_110;
	}
	else if (IS_OBJECT_VALID(&uLocal_114))
	{
		uVar0 = &uLocal_114;
	}
	if (iParam0 != 1 && IS_OBJECT_VALID(&uVar0))
	{
		uLocal_108 = ADD_BLIP_FOR_OBJECT(&uVar0, 549, 0f, 2, 0);
		SET_BLIP_NAME(&uLocal_108, "pm_wp_posterBlip");
		SET_BLIP_SCALE(&uLocal_108, 1.0f);
		UNK_0x6077F3AE(&uLocal_108, 0);
		Function_66(1, 0x41200000);
	}
	return;
}

void Function_66(int iParam0, var uParam1) //Position: 0x291A / 10522
{
	if (!Function_12())
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

var Function_67() //Position: 0x2954 / 10580
{
	int iVar0;
	
	return &iVar0;
}

void Function_68(int iParam0, int iParam1) //Position: 0x295D / 10589
{
	if (!Function_47(&iParam1))
	{
	}
	if (iParam0 == 0)
	{
		if (IS_OBJECT_VALID(&uLocal_396))
		{
			SET_CAMERA_FOCUS_ENABLED(&uLocal_396, 0);
		}
		Function_65(1);
		Function_18();
	}
	else
	{
		if (IS_OBJECT_VALID(&uLocal_396))
		{
			SET_CAMERA_FOCUS_ENABLED(&uLocal_396, 1);
		}
		Function_65(1);
		Function_19();
	}
	iLocal_99 = iParam0;
	return;
}

int Function_69(int iParam0) //Position: 0x29AC / 10668
{
	if (!IS_OBJECT_VALID(&cLocal_110))
	{
		LOG_ERROR("invalid poster object");
		return 0;
	}
	if (IS_OBJECT_VALID(&uLocal_116))
	{
		if (IS_GRINGO_READY(&uLocal_116))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_116), false);
			return 1;
		}
	}
	if (!Function_47(&iParam0))
	{
		LOG_ERROR("Could not force the poster position/rotation");
	}
	Local_63 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("bhGet") };
	uLocal_116 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &cLocal_110, &Local_63, "$/content/DLC/ZombiePack/Gringos/ZombiePack_getmissingposter", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	GET_OBJECT_POSITION(&cLocal_110, &Local_60);
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_116)))
	{
		return 0;
		LOG_ERROR("invalid get wanted poster gringo created");
	}
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_116), false);
	fLocal_403 = (GET_OBJECT_HEADING(&uLocal_116) + 180.0f);
	iLocal_100 = 1;
	Function_9();
	return 1;
	return 0;
}

void Function_70(int iParam0) //Position: 0x2B00 / 11008
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_2(90)), 0);
	return;
}

void Function_71(var uParam0, int iParam1) //Position: 0x2B23 / 11043
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_72(var uParam0, struct<2> Param1, struct<2> Param3) //Position: 0x2B34 / 11060
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	int iVar20;
	var uVar21;
	
	if (Function_10(StackVal, Param1))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(&cLocal_110))
	{
		return 0;
	}
	Var0 = Param1;
	Var2 = Param3;
	iVar20 = Function_52(Global_39906.f_20);
	if (!Function_73(iVar20))
	{
		LOG_ERROR("Invalid bounty hunter actorenum");
		return 0;
	}
	strcpy(&cVar4, "$/fragments/p_pos_missing", 64);
	if (Global_39906.f_40 <= 10)
	{
		stradd(&cVar4, "0", 64);
	}
	stradd(&cVar4, INT_TO_STRING(Global_39906.f_40), 64);
	stradd(&cVar4, "x", 64);
	uVar21 = FIND_OBJECT_IN_LAYOUT(&Global_46715, "mpNextPoster");
	if (IS_OBJECT_VALID(&uVar21))
	{
		GIVE_OBJECT_TO_LAYOUT(&uVar21, &uParam0);
		cLocal_110 = &uVar21;
	}
	else
	{
		Local_63 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("bhPoster") };
		cLocal_110 = CREATE_PROP_IN_LAYOUT(&uParam0, &Local_63, &cVar4, Var0, Var2, 0);
	}
	if (!IS_OBJECT_VALID(&cLocal_110))
	{
		return 0;
	}
	SET_PROP_AI_OBSTACLE_ENABLED(&cLocal_110, 0);
	SET_OBJECT_COLLIDE_WITH_WORLD(&cLocal_110, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&cLocal_110, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&cLocal_110), 1);
	Local_63 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_75("wpcntxt") };
	uLocal_93 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uParam0, &Local_63, 4,203895E-45f, Vector(0.0f, 10.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1,5f, 1.0f, 1,5f));
	if (!IS_VOLUME_VALID(&uLocal_93))
	{
		return 0;
	}
	uLocal_394 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("pm_wp_takePoster", &uLocal_93, 36, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_394))
	{
		return 0;
	}
	return 1;
}

bool Function_73(int iParam0) //Position: 0x2D09 / 11529
{
	if (iParam0 > 0 || iParam0 <= 17)
	{
		return 0;
	}
	return 1;
}

var Function_74(float fParam0, int iParam1) //Position: 0x2D1F / 11551
{
	int iVar0;
	
	iVar0 = 1;
	if (iLocal_413 == Global_46838[1])
	{
		fParam0 = Vector(-2651,921f, 68,3f, 3424,928f);
		iParam1 = Vector(-0,4054303f, 580,7257f, -3,193105f);
	}
	else if (iLocal_413 == Global_46894[1])
	{
		fParam0 = Vector(-717,9177f, 64,29659f, 3293,778f);
		iParam1 = Vector(-179,5706f, 37,63261f, -179,2682f);
	}
	else
	{
		LOG_ERROR("Undefined wanted poster location");
		iVar0 = 0;
	}
	return iVar0;
}

struct<32> Function_75(char* cParam0) //Position: 0x2DC1 / 11713
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&cParam0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_76("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &cParam0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_76(char* cParam0) //Position: 0x2E2D / 11821
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_77() //Position: 0x2E4F / 11855
{
	bool bVar0;
	
	bVar0 = true;
	if (!Function_63(iLocal_413))
	{
		LOG_ERROR("WANTEDPOSTER_FindPosterFlag - Invalid wanted poster region");
		return 0;
	}
	Function_74(&Local_407, &Local_410);
	return bVar0;
}

int Function_78() //Position: 0x2EB0 / 11952
{
	if (Global_43789 == Global_46838[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46894[1])
	{
		return 1;
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x2ED6 / 11990
{
	if (!Function_80(&uLocal_29))
	{
		return 0;
	}
	if (!Function_105(&(Global_43791[iParam0]), 8))
	{
		return 0;
	}
	return 1;
}

bool Function_80(struct<2>[] Param0) //Position: 0x2EFA / 12026
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_85();
	iVar1 = 0;
	if (!Function_7(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_84(&(Param0[iVar02]), 8);
		}
		else if (Function_83())
		{
			iVar1 = 1;
			Function_84(&(Param0[iVar02]), 8);
		}
		Function_84(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_7(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_7(&(Param0[02]), 8) || iVar1));
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
				Function_84(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_7(&(Param0[iVar02]), 4))
		{
			if (!Function_7(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
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
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_84(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_84(&(Param0[iVar02]), 2);
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
	Function_81();
	return 1;
}

void Function_81() //Position: 0x32BC / 12988
{
	if (!Function_82(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_82(int iParam0) //Position: 0x32FC / 13052
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_83() //Position: 0x3318 / 13080
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

void Function_84(struct<13> Param0) //Position: 0x3346 / 13126
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_85() //Position: 0x3359 / 13145
{
	if (!Function_82(128))
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

void Function_86(var uParam0) //Position: 0x339B / 13211
{
	if (iLocal_480 == 1)
	{
		fLocal_481 = (GET_PROFILE_TIME() - fLocal_481);
		PRINTSTRING(">>>>> BH_Profile for ");
		PRINTSTRING(&uParam0);
		PRINTSTRING(": ");
		PRINTSTRING(FLOAT_TO_STRING_FORMATED(fLocal_481, 6, 8));
		PRINTNL();
		if (fLocal_481 < 5000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was super long. You should check this.");
		}
		else if (fLocal_481 < 2500.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was really long. You should check this.");
		}
		else if (fLocal_481 < 1000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was kinda long. You should check this.");
		}
	}
	return;
}

void Function_87() //Position: 0x34CC / 13516
{
	char* cVar0[32];
	
	strcpy(&cVar0, "$/fragments/p_pos_missing", 32);
	if (Global_39906.f_40 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	stradd(&cVar0, INT_TO_STRING(Global_39906.f_40), 32);
	stradd(&cVar0, "x", 32);
	Function_88(&uLocal_29, &cVar0, 0, 0);
	Function_88(&uLocal_29, "stand_poster", 5, 0);
	Function_88(&uLocal_29, "custom/stand_poster", 8, 0);
	Function_88(&uLocal_29, "$/content/DLC/ZombiePack/Gringos/ZombiePack_getmissingposter", 1, 0);
	Function_88(&uLocal_29, "dlc_zombiepack_pmp", 10, 0);
	Function_71(&uLocal_95, 4);
	return;
}

var Function_88(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x35C3 / 13763
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_89(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_84(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_89(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x3601 / 13825
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_84(&(Param0[iVar02]), 4);
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

var Function_90(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x36D0 / 14032
{
	uParam1 = &uParam1;
	uParam4 = &uParam4;
	uParam2 = &uParam2;
	uParam3 = &uParam3;
	return Function_91(&uParam0);
}

var Function_91(struct<25> Param0) //Position: 0x36F6 / 14070
{
	int iVar0;
	
	iVar0 = Function_92(Param0.f_20);
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

var Function_92(int iParam0) //Position: 0x38F6 / 14582
{
	int iVar0;
	struct<21> Var1;
	
	iVar0 = 4294967295;
	iVar7 = 0;
	while (iVar7 <= 17)
	{
		if (Function_53(&Var1, iVar7) == 1)
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

void Function_93() //Position: 0x3930 / 14640
{
	if (iLocal_480 == 1)
	{
		fLocal_481 = GET_PROFILE_TIME();
	}
	return;
}

bool Function_94(struct<33> Param0) //Position: 0x3943 / 14659
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = 1;
	bVar2 = 4294967295;
	if (Function_112())
	{
		return 0;
	}
	uVar1 = Function_99(&iParam1);
	bVar2 = Function_98(uVar1);
	if (Function_52(Param0.f_20) != 16 && !Function_97(21))
	{
		Function_53(&Param0, 16);
	}
	else if (Function_95(&iParam1) == Global_46722[0])
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_53(&Param0, 0);
				break;
			
			case 0x00000001:
				Function_53(&Param0, 1);
				break;
			
			case 0x00000002:
				Function_53(&Param0, 2);
				break;
			
			case 0x00000003:
				Function_53(&Param0, 3);
				break;
			
			case 0x00000004:
				Function_53(&Param0, 4);
				break;
			
			case 0x00000005:
				Function_53(&Param0, 6);
				break;
			
			case 0x00000006:
				Function_53(&Param0, 7);
				break;
			
			case 0x00000007:
				Function_53(&Param0, 8);
				break;
			
			case 0x00000008:
				Function_53(&Param0, 9);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Frontier.");
				Function_53(&Param0, 10);
				iVar0 = 0;
				break;
		}
	}
	else
	{
		switch (bVar2)
		{
			case 0x00000000:
				Function_53(&Param0, 10);
				break;
			
			case 0x00000001:
				Function_53(&Param0, 11);
				break;
			
			case 0x00000002:
				Function_53(&Param0, 12);
				break;
			
			case 0x00000003:
				Function_53(&Param0, 13);
				break;
			
			case 0x00000004:
				Function_53(&Param0, 14);
				break;
			
			case 0x00000005:
				Function_53(&Param0, 15);
				break;
			
			default:
				LOG_ERROR("Bounty Hunter - Have already completed all bounties for this region: Mexico.");
				Function_53(&Param0, 10);
				iVar0 = 0;
				break;
			}
	}
	Param0.f_32 = 0;
	Param0.f_16 = Function_54(Param0.f_12);
	if (&iParam1 != 4294967294)
	{
		Param0.f_24 = &iParam1;
	}
	return iVar0;
}

int Function_95(int iParam0) //Position: 0x3B98 / 15256
{
	return Function_96(iParam0);
}

int Function_96(int iParam0) //Position: 0x3BA3 / 15267
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_63(iParam0))
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

bool Function_97(int iParam0) //Position: 0x3BFB / 15355
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_98(int iParam0) //Position: 0x3C10 / 15376
{
	if (!Function_32(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

int Function_99(int iParam0) //Position: 0x3C2A / 15402
{
	if (Function_63(iParam0))
	{
		return Function_100(iParam0, 0, 2);
	}
	return 4294967295;
}

int Function_100(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3C44 / 15428
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_103(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_101(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_101(bParam0, bParam1, bParam2, 4294967295);
}

int Function_101(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3CA2 / 15522
{
	var uVar0;
	
	if (!Function_29(bParam2))
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
	uVar0 = Function_103(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_102(uVar0);
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

var Function_102(int iParam0) //Position: 0x3E06 / 15878
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

var Function_103(int iParam0, int iParam1, int iParam2) //Position: 0x3E44 / 15940
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_104(int iParam0) //Position: 0x3E64 / 15972
{
	if (!Function_63(iParam0))
	{
		return 1;
	}
	return Function_105(&(Global_43791[iParam0]), 4);
}

bool Function_105(var uParam0, int iParam1) //Position: 0x3E80 / 16000
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_106(int iParam0) //Position: 0x3E9D / 16029
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_38380 - 1))
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_44(&(Global_38380[iVar036]), 4) && !IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_107(int iParam0) //Position: 0x3EED / 16109
{
	Function_114(&iParam0, 0.0f);
	return;
}

bool Function_108(int iParam0, float fParam1) //Position: 0x3EFA / 16122
{
	if (Function_56(&iParam0))
	{
		if (Function_109(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_109(vector3 vParam0) //Position: 0x3F18 / 16152
{
	if (Function_56(&vParam0))
	{
		if (Function_110(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_110(int iParam0) //Position: 0x3FE5 / 16357
{
	return Function_111(iParam0, 2);
}

bool Function_111(var uParam0, bool bParam1) //Position: 0x3FF3 / 16371
{
	return (uParam0 && bParam1) == 0;
}

bool Function_112() //Position: 0x4000 / 16384
{
	return Function_111(StackVal, 1);
}

var Function_113() //Position: 0x400F / 16399
{
	return &Global_21369 + 8;
}

void Function_114(vector3 vParam0) //Position: 0x401B / 16411
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_71(&vParam0, 1);
	Function_26(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_115(int iParam0) //Position: 0x4040 / 16448
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

