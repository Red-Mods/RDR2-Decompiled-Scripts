//Decompiled with MagicRDR v1.0
//Function Count : 161
//Statics Count : 596
//Natives Count : 226
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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	char[] cLocal_31[4] = 14;
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
	struct<2> Local_98 = { 0, 0 } ;
	var uLocal_100 = 0;
	struct<8> Local_101 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = false;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	bool bLocal_153 = false;
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
	char[] cLocal_168[4] = 0;
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
	var uLocal_187 = 3;
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
	var uLocal_214 = 3;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 3;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 3;
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
	var uLocal_268 = 3;
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
	var uLocal_295 = 3;
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
	var uLocal_323 = 3;
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
	var uLocal_349 = 3;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 3;
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
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
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
	float fLocal_446 = 0.0f;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	float fLocal_451 = 0.0f;
	struct<2> Local_452 = { 0, 0 } ;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	float fLocal_458 = 0.0f;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
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
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	int iLocal_526 = 0;
	float fLocal_527 = 0.0f;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	struct<31> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	struct<5> Var1;
	var uVar23;
	float fVar25;
	var uVar34;
	int iVar35;
	
	iLocal_15 = 0;
	iLocal_18 = 0;
	iLocal_142 = 0;
	iLocal_143 = 0;
	bLocal_144 = false;
	iLocal_145 = 0;
	iLocal_146 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
	bLocal_149 = false;
	bLocal_150 = false;
	iLocal_151 = 1;
	iLocal_152 = 0;
	bLocal_153 = false;
	iLocal_448 = 0;
	iLocal_449 = 0;
	iLocal_450 = 0;
	iLocal_459 = 4294967295;
	iLocal_461 = 4294967295;
	iLocal_526 = 0;
	iLocal_532 = 0;
	iLocal_533 = 15;
	*(&Var1 + 28) = 1;
	fVar25 = 10.0f;
	bLocal_149 = Function_160("npressDemo");
	Function_159(&uLocal_528, 2.0f);
	GET_POSITION(GET_PLAYER_ACTOR(0), &uVar23);
	uVar34 = Function_158();
	ADD_TIME(&uVar34, 0, 23, false, 0);
	iLocal_19 = 0;
	iLocal_133 = GET_TIME_OF_DAY();
	ADD_TIME(&iLocal_133, 1, 0, false, 0);
	uLocal_135 = GET_TIME_OF_DAY();
	ADD_TIME(&uLocal_135, 0, 2, false, 0);
	while (!IS_EXITFLAG_SET())
	{
		if (!IS_ACTOR_VALID(&Global_54076) || !IS_ACTOR_ALIVE(&Global_54076))
		{
			iLocal_19 = 5;
		}
		else if (Function_157() == 1)
		{
			iLocal_19 = 5;
		}
		else if (Global_6623)
		{
			iLocal_19 = 5;
		}
		else if (iLocal_146 != 0 && (IS_EARLIER_THAN(&uLocal_135, GET_TIME_OF_DAY()) || IS_LATER_THAN(GET_TIME_OF_DAY(), Function_156(32))))
		{
			iLocal_19 = 5;
		}
		else if (IS_OBJECT_VALID(&uLocal_156))
		{
			if (((IS_EARLIER_THAN(&iLocal_133, GET_TIME_OF_DAY()) && VDIST(Global_54078, *(&ScriptParam_0 + 16)) < 50.0f) && !WOULD_ACTOR_BE_VISIBLE(false, &ScriptParam_0 + 16, 3212836864)) && bLocal_149 != 0)
			{
				iLocal_19 = 5;
			}
		}
		else if (Global_6650 == 1)
		{
			iLocal_19 = 5;
		}
		if (Function_155(uLocal_141, 64) && IS_OBJECT_VALID(&uLocal_166))
		{
			DESTROY_OBJECT(&uLocal_166);
		}
		if (VDIST(Global_54078, Local_98) > 3.0f)
		{
			bLocal_30 = false;
		}
		else
		{
			bLocal_30 = 500;
		}
		if (Function_154(&uLocal_528, 0,5f))
		{
			bLocal_144 = true;
			Function_153(&uLocal_528);
			iLocal_532 = (iLocal_532 + 1 % 4);
		}
		switch (iLocal_19)
		{
			case 0x00000000:
				switch (iLocal_18)
				{
					case 0x00000000:
						if (Function_152(128))
						{
							if (IS_LAYOUTREF_VALID(&Global_46715))
							{
								uLocal_16 = CREATE_OBJECT_ITERATOR(&Global_46715);
							}
							else
							{
								iLocal_19 = 5;
							}
							iLocal_18++;
						}
						else
						{
							iLocal_19 = 5;
						}
						break;
					
					case 0x00000001:
						if (bLocal_149 == 1)
						{
							if (!Function_150(&Global_39906, 4, 4294967294, 0, 0, 1))
							{
								iLocal_19 = 5;
							}
						}
						else
						{
							if (Global_43789 == Global_46760[0])
							{
								iVar35 = 5;
								iLocal_461 = 4;
							}
							else if (Global_43789 == Global_46816[0])
							{
								iVar35 = 6;
								iLocal_461 = 5;
							}
							else if (Global_43789 == Global_46796[1])
							{
								iVar35 = 3;
								iLocal_461 = 6;
							}
							else
							{
								iLocal_461 = 4294967295;
								iVar35 = 0;
							}
							if (!iLocal_461 != 4294967295)
							{
								if (Function_148(iLocal_461, 8))
								{
									iVar35 = 0;
								}
							}
							else
							{
								iVar35 = 0;
							}
							if (Function_150(&Global_39906, Function_146(), 4294967294, 0, iVar35, 1))
							{
								if (Global_43789 == Global_46760[0])
								{
									if (Global_39428[4] || Function_144(32768))
									{
										if (!Function_148(2, 4))
										{
											Function_143(&Global_39906, 44);
										}
									}
								}
							}
							else
							{
								bLocal_30 = false;
								iLocal_19 = 5;
							}
						}
						iLocal_18++;
						break;
					
					case 0x00000002:
						Function_142();
						Global_39906.f_24 = Function_128(&Global_39906, 0, 80, 2000, 4294967295);
						iLocal_459 = Global_43789;
						Function_113();
						Function_112("EVENT_INIT: BOUNTYHUNTER_GET_A_VALID_REGION_FROM_STRUCT");
						iLocal_18++;
						break;
					
					case 0x00000003:
						if ((Global_6629 != 0 || IS_EARLIER_THAN(GET_TIME_OF_DAY(), Function_111(1))) || IS_LATER_THAN(GET_TIME_OF_DAY(), Function_156(32)))
						{
							bLocal_30 = 2000;
							break;
						}
						else if (Function_110(&(Global_43791[Global_43789]), 4))
						{
							iLocal_18++;
						}
						else
						{
							bLocal_30 = 2000;
							break;
						}
						break;
					
					case 0x00000004:
						if (Function_103(Global_43789))
						{
							iLocal_18++;
						}
						else
						{
							bLocal_30 = 600;
							break;
						}
						break;
					
					case 0x00000005:
						ScriptParam_0.f_60 = 5.0f;
						if (iLocal_142 == 0)
						{
							if (Function_101(0) == 1)
							{
								ScriptParam_0.f_72 = 5;
								(&ScriptParam_0 + 72)->f_4 = 512;
								Function_142();
								if (Function_100())
								{
									PRINTSTRING("WANTED POSTER spawnPos: ");
									PRINTVECTOR(*(&ScriptParam_0 + 16));
									PRINTNL();
									Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("wpLay") };
									iVar0 = CREATE_LAYOUT(&Local_101);
									if (!IS_LAYOUTREF_VALID(&iVar0))
									{
										bLocal_30 = false;
										iLocal_19 = 5;
										break;
									}
									if (Function_97())
									{
										STREAMING_LOAD_BOUNDS(Local_452, fLocal_458, 0);
									}
									else
									{
										LOG_ERROR("Cannot load bounds for poster");
									}
									iLocal_18++;
									bLocal_30 = 1000;
								}
								else
								{
									iLocal_19 = 5;
									bLocal_30 = false;
								}
								Function_112("EVENT_INIT: WANTEDPOSTER_FindPosterFlag");
							}
							else
							{
								bLocal_30 = 3000;
							}
						}
						break;
					
					case 0x00000006:
						if (IS_OBJECT_VALID(&uLocal_164))
						{
							if (Function_91(&uLocal_455, &fVar25, 0, 0))
							{
								GET_OBJECT_POSITION(&uLocal_164, &ScriptParam_0 + 16);
								GET_OBJECT_ORIENTATION(&uLocal_164, &ScriptParam_0 + 28);
								ScriptParam_0.f_56 = &uLocal_164;
								bLocal_30 = false;
								iLocal_18 = 9;
								iLocal_19 = 1;
							}
							else
							{
								iLocal_19 = 5;
								bLocal_30 = false;
							}
						}
						else
						{
							iLocal_19 = 5;
							bLocal_30 = false;
						}
						break;
					
					case 0x00000007:
						break;
					
					default:
						LOG_ERROR("Wanted poster initilization went weird");
						iLocal_19 = 5;
						bLocal_30 = false;
						break;
				}
				if (iLocal_19 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_162)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_162));
				}
				break;
			
			case 0x00000001:
				if (STREAMING_ARE_BOUNDS_LOADED(Local_452, fLocal_458))
				{
					if (!Function_155(uLocal_141, 32) && iLocal_148 != 1)
					{
						if (Function_89(StackVal, StackVal, &iVar0, *(&ScriptParam_0 + 16), *(&ScriptParam_0 + 28)))
						{
							Function_88(&uLocal_141, 32);
						}
						else
						{
							bLocal_30 = false;
							iLocal_19 = 5;
							break;
						}
						PRINTSTRING("BOUNTYHUNTER spawnPos: ");
						PRINTVECTOR(*(&ScriptParam_0 + 16));
						PRINTNL();
					}
					Function_142();
					if (iLocal_148 == 0)
					{
						if (!Function_86(StackVal, &iVar0, *(&ScriptParam_0 + 16)))
						{
							bLocal_30 = false;
							iLocal_19 = 5;
							break;
						}
						iLocal_148 = 1;
					}
					Function_112("WANTEDPOSTER_CreatePosterBeforeHand");
					if (Function_155(uLocal_141, 32))
					{
						if (!Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0, &iVar0, *(&ScriptParam_0 + 28)))
						{
							bLocal_30 = false;
							iLocal_19 = 5;
							break;
						}
						else if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_442) && !iLocal_450)
						{
							bLocal_30 = false;
							iLocal_19 = 5;
							break;
						}
						else if (iLocal_460 <= 5 && IS_OBJECT_VALID(&uLocal_156))
						{
							Function_73(0);
							Function_153(&iLocal_117);
							iLocal_19 = 2;
							bLocal_30 = false;
						}
					}
				}
				if (iLocal_19 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_162)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_162));
				}
				break;
			
			case 0x00000002:
				if (!Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0, &iVar0, *(&ScriptParam_0 + 28)))
				{
					iLocal_19 = 5;
				}
				else if (iLocal_146 == 1)
				{
					Function_71(1);
					if (IS_BLIP_VALID(&uLocal_154))
					{
						SET_BLIP_BLINK(&uLocal_154, 0, 0, 5f);
					}
					iLocal_19 = 3;
				}
				else if (Function_70(1, 0, 1, 1) | 0)
				{
					iLocal_19 = 5;
				}
				else if (Global_6646 || Global_6647)
				{
					iLocal_19 = 5;
				}
				else if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_442) && !iLocal_450)
				{
					bLocal_30 = false;
					iLocal_19 = 5;
				}
				else if (Function_69(iLocal_459))
				{
					if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iLocal_4599] + 8))
					{
						iLocal_19 = 5;
					}
				}
				if (iLocal_19 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_162)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_162));
				}
				break;
			
			case 0x00000003:
				if (Function_68(1))
				{
					Function_74(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0, &iVar0, *(&ScriptParam_0 + 28));
				}
				if (Function_68(4294967295))
				{
					bLocal_153 = VDIST(Global_54078, Local_98) > 3.0f;
					if (StackVal < StackVal)
					{
						iLocal_448 = 1;
						bLocal_153 = VDIST(Global_54078, Local_98) > 6.0f;
					}
					else if (bLocal_153 == 0)
					{
						iLocal_448 = 0;
					}
					else if (Function_64(&Global_54076, IS_CAMERA_FOCUS_ENABLED(&uLocal_444), 0))
					{
						iLocal_448 = 1;
					}
					else if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
					{
						iLocal_448 = 1;
					}
					else
					{
						iLocal_448 = 0;
					}
				}
				if (iLocal_146 == 1)
				{
					if (IS_OBJECT_VALID(&uLocal_162))
					{
						GET_OBJECT_POSITION(&uLocal_162, &Local_98);
					}
					Function_142();
					if (!Function_155(uLocal_141, 64))
					{
						if (Function_68(0))
						{
							if (Global_6646 || Global_6647)
							{
								if (iLocal_145 == 1)
								{
									Function_51(0, &iVar0);
								}
							}
							else if (Function_70(1, 0, 1, 1) | 0)
							{
								if (iLocal_145 == 1)
								{
									Function_51(0, &iVar0);
								}
							}
							else if (iLocal_448 != 1 && bLocal_153 != 1)
							{
								if (iLocal_145 == 1)
								{
									Function_51(0, &iVar0);
								}
							}
							else if (iLocal_145 == 0)
							{
								Function_51(1, &iVar0);
							}
						}
					}
					Function_112("Activate Poster Check");
					if (Function_49())
					{
						if (Function_69(Global_39906.f_24))
						{
							bLocal_150 = true;
							Var1.f_4 = 512;
							Function_48();
							Function_48();
							if (Function_43(StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_48(), Function_48(), 0, 0, 0, Global_39906.f_24, 0, 0, 0, &Var1, 1, 1, 0x40a00000, 4294967295, 0, 0))
							{
								Function_42(1);
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
						if (iLocal_147 == 1)
						{
							HUD_CLEAR_HELP_QUEUE();
						}
						iLocal_19 = 5;
						bLocal_30 = 1500;
					}
					else if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_442) && !iLocal_450)
					{
						bLocal_30 = false;
						iLocal_19 = 5;
					}
					else if (!Function_155(uLocal_141, 128))
					{
						Function_142();
						Function_71(1);
						if (IS_BLIP_VALID(&uLocal_154))
						{
							SET_BLIP_BLINK(&uLocal_154, 1, 0, 5f);
						}
						Function_88(&uLocal_141, 128);
						bLocal_30 = false;
						Function_112("showing blip");
					}
					else
					{
						Function_142();
						if (Function_68(3))
						{
							if (Global_6629 == 1)
							{
								if (Function_155(uLocal_141, 16) && iLocal_145 != 1)
								{
									if (bLocal_149 == 0)
									{
										if (Function_40())
										{
											Function_39(&cLocal_168);
											Function_31(&cLocal_168, "npm_bh_nb1", 0);
											Function_31(&cLocal_168, "npm_bh_nb2", 0);
										}
									}
									Function_30(&uLocal_141, 16);
									if (Function_28(&cLocal_168, 0, 0))
									{
										Function_24(&cLocal_168);
									}
								}
							}
						}
						Function_112("PlayerInTown Check");
					}
					if (iLocal_145 == 1)
					{
						if (IS_OBJECT_VALID(&uLocal_444))
						{
							if (Function_155(uLocal_141, 64))
							{
								if (IS_OBJECT_VALID(&uLocal_444))
								{
									SET_CAMERA_FOCUS_ENABLED(&uLocal_444, 0);
									DESTROY_OBJECT(&uLocal_444);
								}
							}
							else
							{
								Function_142();
								Function_21();
								Function_112("WANTEDPOSTER_UpdateContextUse");
								if (iLocal_151 == 0)
								{
									uLocal_95 = Vector(0.0f, 0.0f, -1.0f);
									Function_20(&uLocal_95, fLocal_451);
									uLocal_95 = Function_20(&uLocal_95, fLocal_451);
									Function_19(StackVal, StackVal, Local_98, Global_54078, &uLocal_92);
									fLocal_446 = VDOT(&uLocal_95, &uLocal_92);
									iLocal_447 = IS_CAMERA_FOCUS_ENABLED(&uLocal_444);
									Function_142();
									if (iLocal_447 == 1)
									{
										if (IS_CAMERA_FOCUS_ACTIVE(&uLocal_444) != 1 && !Function_155(uLocal_141, 1))
										{
											MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
											if (!Function_15(57, 0))
											{
												if (iLocal_459 == Global_46760[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2190,127f, 16,58f, 2614,479f), 6,985f, 1, 1, 1);
												}
												else if (iLocal_459 == Global_46914[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(663,996f, 78,755f, 1315,594f), 181,049f, 1, 1, 1);
												}
												else if (iLocal_459 == Global_46866[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2664,823f, 31,387f, 4249,94f), 259,823f, 1, 1, 1);
												}
												else if (iLocal_459 == Global_46894[1])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-717,414f, 63,247f, 3292,827f), 139,017f, 1, 1, 1);
												}
												else if (iLocal_459 == Global_46850[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-4335,978f, 30,189f, 4382,272f), 7,678f, 1, 1, 1);
												}
												else if (iLocal_459 == Global_46816[0])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-817,061f, 93,809f, 2425,982f), 162,56f, 1, 1, 1);
												}
												else if (iLocal_459 == Global_46926[1])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-416,355f, 152,043f, 1603,441f), 282,897f, 1, 1, 1);
												}
												else if (iLocal_459 == Global_46796[1])
												{
													TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-3679,052f, 42,778f, 2116,671f), 52,789f, 1, 1, 1);
												}
											}
											else if (iLocal_459 == Global_46760[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2190,127f, 16,58f, 2614,479f), 6,985f, 1, 1, 1);
											}
											else if (iLocal_459 == Global_46914[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(663,996f, 78,755f, 1315,594f), 181,049f, 1, 1, 1);
											}
											else if (iLocal_459 == Global_46866[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2664,802f, 31,387f, 4249,888f), 257,764f, 1, 1, 1);
											}
											else if (iLocal_459 == Global_46894[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-717,414f, 63,247f, 3292,827f), 139,017f, 1, 1, 1);
											}
											else if (iLocal_459 == Global_46850[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-4335,978f, 30,189f, 4382,272f), 7,678f, 1, 1, 1);
											}
											else if (iLocal_459 == Global_46816[0])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-817,061f, 93,809f, 2425,982f), 162,56f, 1, 1, 1);
											}
											else if (iLocal_459 == Global_46926[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-416,355f, 152,043f, 1603,441f), 282,897f, 1, 1, 1);
											}
											else if (iLocal_459 == Global_46796[1])
											{
												TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-3679,052f, 42,778f, 2116,671f), 52,789f, 1, 1, 1);
											}
											Function_88(&uLocal_141, 1);
										}
										else if (IS_CAMERA_FOCUS_ACTIVE(&uLocal_444) != 0 && Function_155(uLocal_141, 1))
										{
											SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "post_wanted/PostWantedAnim");
											Function_30(&uLocal_141, 1);
										}
									}
									Function_112("camerafocus usage logic");
									Function_142();
									if ((iLocal_447 != 1 && fLocal_446 > 0.0f) && bLocal_153 != 1)
									{
										Function_51(0, &iVar0);
									}
									else if (iLocal_447 != 0 && fLocal_446 < 0.0f)
									{
										Function_51(1, &iVar0);
									}
									else if (Function_155(uLocal_141, 64) && iLocal_447 != 1)
									{
										Function_51(0, &iVar0);
									}
									Function_112("camerafocus angle logic");
								}
								else if (IS_CAMERA_FOCUS_ENABLED(&uLocal_444))
								{
									Function_51(0, &iVar0);
								}
							}
						}
					}
				}
				if (Global_6629 == 0)
				{
					bLocal_30 = 3000;
					break;
				}
				if (iLocal_19 != 5 && IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_162)))
				{
					GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_162));
				}
				break;
			
			case 0x00000005:
				RELEASE_LAYOUT_REF(&iVar0);
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bLocal_30 = false;
				break;
		}
		WAIT(bLocal_30);
	}
	Function_8(&iVar0);
	if (Function_155(uLocal_141, 4))
	{
		Function_3();
	}
	Function_1(iLocal_533);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xFC0 / 4032
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_2(105)), 0);
	return;
}

int Function_2(bool bParam0) //Position: 0xFE3 / 4067
{
	return CEIL(((IntToFloat(bParam0) * Global_99471) / 60.0f));
}

void Function_3() //Position: 0xFFA / 4090
{
	Function_4(&cLocal_31);
	return;
}

void Function_4(int iParam0) //Position: 0x1005 / 4101
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

void Function_5(struct<2>[] Param0, int iParam1) //Position: 0x102D / 4141
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

void Function_6(struct<13> Param0) //Position: 0x1178 / 4472
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_7(struct<13> Param0) //Position: 0x1195 / 4501
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_8(var uParam0) //Position: 0x11B3 / 4531
{
	if (bLocal_150)
	{
		TASK_CLEAR(&Global_54076);
	}
	if (IS_OBJECT_VALID(&uLocal_166))
	{
		DESTROY_OBJECT(&uLocal_166);
	}
	if (Function_155(uLocal_141, 512))
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (IS_BLIP_VALID(&uLocal_154))
	{
		REMOVE_BLIP(&uLocal_154);
	}
	if (IS_ACTOR_VALID(&iLocal_20))
	{
		CLEAR_ACTOR_STAY_WITHIN_VOLUME(&iLocal_20);
		CLEAR_ACTOR_MAX_SPEED(&iLocal_20);
	}
	if (IS_VOLUME_VALID(&uLocal_137))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_137);
		DESTROY_VOLUME(&uLocal_137);
	}
	if (IS_OBJECT_VALID(&uLocal_156))
	{
		DESTROY_OBJECT(&uLocal_156);
	}
	if (IS_OBJECT_VALID(&uLocal_158))
	{
		DESTROY_OBJECT(&uLocal_158);
	}
	if (IS_VOLUME_VALID(&uLocal_139))
	{
		DESTROY_VOLUME(&uLocal_139);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_442))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_442);
	}
	if (IS_OBJECT_VALID(&uLocal_160))
	{
		DESTROY_OBJECT(&uLocal_160);
	}
	if (IS_OBJECT_VALID(&uLocal_162))
	{
		DESTROY_OBJECT(&uLocal_162);
	}
	if (IS_OBJECT_VALID(&uLocal_444))
	{
		DESTROY_OBJECT(&uLocal_444);
	}
	Function_13();
	Function_11(1);
	Function_39(&cLocal_168);
	DESTROY_OBJECT(&uLocal_160);
	Function_9();
	if (IS_BLIP_VALID(&uLocal_154))
	{
		SET_BLIP_BLINK(&uLocal_154, 0, 0, 5f);
	}
	if (IS_ITERATOR_VALID(&uLocal_462))
	{
		DESTROY_ITERATOR(&uLocal_462);
	}
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		DESTROY_LAYOUT(&uParam0);
	}
	return;
}

void Function_9() //Position: 0x12D4 / 4820
{
	if (!Function_10(StackVal, Local_452))
	{
		STREAMING_UNLOAD_BOUNDS();
	}
	Local_452 = Vector(0.0f, 0.0f, 0.0f);
	return;
}

bool Function_10(vector3 vParam0) //Position: 0x12F1 / 4849
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_11(int iParam0) //Position: 0x1309 / 4873
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

bool Function_12() //Position: 0x1349 / 4937
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

void Function_13() //Position: 0x136E / 4974
{
	if (iLocal_143 == 0)
	{
		if (IS_ACTOR_VALID(&iLocal_20))
		{
			if (Global_6646 == 0)
			{
				TASK_CLEAR(&iLocal_20);
				TASK_WANDER(&iLocal_20, 3212836864);
				iLocal_533 = 30;
			}
			AI_CONVERSE_ENABLE(&iLocal_20);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iLocal_20, 1);
			RELEASE_ACTOR(&iLocal_20);
			Function_14(&iLocal_20, 1);
		}
		iLocal_143 = 1;
	}
	return;
}

void Function_14(int iParam0, bool bParam1) //Position: 0x13BD / 5053
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&iParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &(Global_39591[0]), 0);
	}
	return;
}

bool Function_15(int iParam0, bool bParam1) //Position: 0x13F1 / 5105
{
	int iVar0;
	
	iVar0 = Function_17(iParam0);
	if (!Function_16(iVar0))
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

bool Function_16(int iParam0) //Position: 0x142F / 5167
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_17(int iParam0) //Position: 0x1446 / 5190
{
	if (!Function_18(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_18(int iParam0) //Position: 0x1460 / 5216
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_19(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1476 / 5238
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<8> Function_20(struct<2> Param0) //Position: 0x149A / 5274
{
	struct<2> Var0;
	
	Var0 = Param0;
	ROTATE_VECTOR_XZ(&Var0, bParam1, 0);
	return StackVal, Var0;
}

void Function_21() //Position: 0x14B4 / 5300
{
	if (!Function_155(uLocal_141, 64))
	{
		if (iLocal_145 == 1)
		{
			if (!Function_155(uLocal_141, 256))
			{
				if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_442))
				{
					if (IS_OBJECT_VALID(&uLocal_166))
					{
						DESTROY_OBJECT(&uLocal_166);
					}
					MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1);
					Function_88(&uLocal_141, 256);
				}
				if (iLocal_151 == 1)
				{
					Function_23();
				}
			}
			if (Function_155(uLocal_141, 256))
			{
				if (iLocal_146 != 1 && iLocal_152 != 0)
				{
					SNAP_ACTOR_TO_GRINGO(&Global_54076, &uLocal_162, "nPlayerUse", false, 1, 0);
					TASK_CLEAR(&Global_54076);
					TASK_USE_GRINGO(&Global_54076, GET_GRINGO_FROM_OBJECT(&uLocal_162), "nPlayerUse", 1, 1);
					TASK_PRIORITY_SET(&Global_54076, true);
					if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_442))
					{
						Function_88(&uLocal_141, 512);
						iLocal_450 = 1;
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_442);
						ENABLE_USE_CONTEXTS(0);
					}
					iLocal_152 = 1;
					Function_22();
				}
			}
		}
	}
	return;
}

void Function_22() //Position: 0x158C / 5516
{
	SET_OBJECT_POSITION(StackVal, &uLocal_139, Vector(50.0f, 50.0f, 50.0f));
	SET_CAMERA_FOCUS_ENABLED(&uLocal_444, 0);
	iLocal_151 = 1;
	return;
}

void Function_23() //Position: 0x15B4 / 5556
{
	SET_OBJECT_POSITION(&uLocal_139, Local_98);
	SET_CAMERA_FOCUS_ENABLED(&uLocal_444, 1);
	iLocal_151 = 0;
	return;
}

void Function_24(struct<909> Param0) //Position: 0x15D0 / 5584
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
			Function_25(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

void Function_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1678 / 5752
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_26(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &Var0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5, &uVar4, &uParam6);
	}
}

struct<16> Function_26(int iParam0) //Position: 0x1703 / 5891
{
	char* cVar0[16];
	
	if (!Function_27())
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

bool Function_27() //Position: 0x1742 / 5954
{
	if (Function_155(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_28(struct<909> Param0) //Position: 0x175D / 5981
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
	else if (Function_29() && &iParam2 != 0)
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

var Function_29() //Position: 0x1804 / 6148
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_30(var uParam0, int iParam1) //Position: 0x1831 / 6193
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

int Function_31(struct<1093> Param0) //Position: 0x1847 / 6215
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
	if (Function_155(Param0.f_1048, 32))
	{
		if (!Function_37(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	uVar21 = Function_34(Function_36(Param0.f_1092), Function_35(Param0.f_1092));
	iVar22 = Function_32(Function_36(Param0.f_1092), Function_35(Param0.f_1092));
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

int Function_32(int iParam0, int iParam1) //Position: 0x19BB / 6587
{
	int iVar0;
	int iVar1;
	
	if (!Function_33(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_36(iVar1) != iParam0 && Function_35(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[iVar17].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_33(int iParam0) //Position: 0x1A07 / 6663
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_34(int iParam0, int iParam1) //Position: 0x1A1C / 6684
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_36(iVar1) != iParam0 && Function_35(iVar1) != iParam1)
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

int Function_35(int iParam0) //Position: 0x1A6D / 6765
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_36(int iParam0) //Position: 0x1A8C / 6796
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

bool Function_37(int iParam0) //Position: 0x1AA7 / 6823
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_38(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_38(int iParam0) //Position: 0x1ACB / 6859
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_39(char* cParam0) //Position: 0x1AE0 / 6880
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

bool Function_40() //Position: 0x1B20 / 6944
{
	if (Function_41(359) < 0 || Function_41(358) < 0)
	{
		return 0;
	}
	return 1;
}

int Function_41(int iParam0) //Position: 0x1B40 / 6976
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

void Function_42(bool bParam0) //Position: 0x1B81 / 7041
{
	if (bParam0 == 1)
	{
		Function_88(&Global_39906 + 8, 1);
	}
	else
	{
		Function_30(&Global_39906 + 8, 1);
	}
	return;
}

bool Function_43(int iParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) //Position: 0x1BA2 / 7074
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
			if (Function_47(&(Global_38380[iVar036]), 4))
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
					Function_46(&uParam14, &Global_38380[iVar036] + 112);
					Global_38380[iVar036].f_112 = uParam1;
					Function_45(&(Global_38380[iVar036]), 1);
					Function_44(&(Global_38380[iVar036]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_44(vector3 vParam0) //Position: 0x1CF0 / 7408
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	vParam0.f_8 = (vParam0.z - iVar0);
	return;
}

void Function_45(vector3 vParam0) //Position: 0x1D0D / 7437
{
	vParam0.f_8 = (vParam0.z || iParam1);
	return;
}

void Function_46(struct<157> Param0) //Position: 0x1D20 / 7456
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

bool Function_47(vector3 vParam0) //Position: 0x1ED0 / 7888
{
	int iVar0;
	
	iVar0 = (vParam0.z && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

struct<8> Function_48() //Position: 0x1EEE / 7918
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_49() //Position: 0x1EF8 / 7928
{
	if (Function_155(uLocal_141, 256) && Function_50(&iLocal_125))
	{
		if (Function_155(uLocal_141, 64) && GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_162))
		{
			return 1;
		}
		if (Function_154(&iLocal_125, 4.0f))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_162)))
			{
				GRINGO_DEACTIVATE(GET_GRINGO_FROM_OBJECT(&uLocal_162));
			}
			return 1;
		}
		return 0;
	}
	if (Function_68(4294967295))
	{
		if (iLocal_146 == 1)
		{
			if (GET_CURRENT_GRINGO(&Global_54076) == GET_GRINGO_FROM_OBJECT(&uLocal_162))
			{
				bLocal_30 = false;
			}
			if (GET_CURRENT_GRINGO(&Global_54076) != GET_GRINGO_FROM_OBJECT(&uLocal_162) && !Function_155(uLocal_141, 64))
			{
				DESTROY_OBJECT(&uLocal_444);
				Function_22();
				Function_88(&uLocal_141, 64);
			}
			if (Function_155(uLocal_141, 256))
			{
				iLocal_133 = GET_TIME_OF_DAY();
				ADD_TIME(&iLocal_133, 1, 0, false, 0);
				Function_153(&iLocal_125);
				bLocal_30 = false;
			}
		}
	}
	return 0;
}

bool Function_50(int iParam0) //Position: 0x1FC4 / 8132
{
	return Function_155(iParam0, 1);
}

void Function_51(int iParam0, int iParam1) //Position: 0x1FD2 / 8146
{
	if (!Function_52(&iParam1))
	{
	}
	if (iParam0 == 0)
	{
		if (IS_OBJECT_VALID(&uLocal_444))
		{
			SET_CAMERA_FOCUS_ENABLED(&uLocal_444, 0);
		}
		Function_71(0);
		Function_22();
	}
	else
	{
		if (IS_OBJECT_VALID(&uLocal_444))
		{
			SET_CAMERA_FOCUS_ENABLED(&uLocal_444, 1);
		}
		Function_71(1);
		Function_23();
	}
	iLocal_145 = iParam0;
	return;
}

bool Function_52(int iParam0) //Position: 0x2021 / 8225
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	
	iVar4 = 1;
	if (!IS_OBJECT_VALID(&uLocal_156))
	{
		return 0;
	}
	Function_63(&Var0, &Var2);
	SET_OBJECT_POSITION(&uLocal_156, Var0);
	SET_OBJECT_ORIENTATION(&uLocal_156, Var2);
	if (IS_OBJECT_VALID(&uLocal_166))
	{
		DESTROY_OBJECT(&uLocal_166);
	}
	if (!Function_155(uLocal_141, 256))
	{
		Function_53(&iParam0, &uLocal_156, &uLocal_166, Global_39906.f_12);
	}
	return iVar4;
}

int Function_53(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2081 / 8321
{
	var uVar0;
	bool bVar2;
	struct<8> Var3;
	var uVar11;
	var uVar27;
	var uVar43;
	var uVar59;
	
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return 0;
	}
	GET_OBJECT_POSITION(&uParam1, &uVar0);
	Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("posterText") };
	Function_62(uParam3, &uVar43);
	bVar2 = Function_61(Global_39906.f_20);
	Function_60(bVar2, &uVar59);
	Function_59(Global_39906.f_24, &uVar11);
	Function_54(&uVar27);
	PRINTSTRING("Bounty Gang: ");
	PRINTINT(bVar2);
	PRINTNL();
	if (IS_OBJECT_VALID(&uParam2))
	{
		DESTROY_OBJECT(&uParam2);
	}
	uParam2 = UNK_0x211DE185(&uParam0, &Var3, "pm_wp_text", &uVar59, &uVar43, &uVar11, &uVar27, &uParam1, 0, 4278649856);
	if (!IS_OBJECT_VALID(&uParam2))
	{
		return 0;
	}
	return 1;
}

void Function_54(int iParam0) //Position: 0x2145 / 8517
{
	memcpy(&iParam0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_55(&Global_39906), 16);
	return;
}

struct<32> Function_55(int iParam0) //Position: 0x2158 / 8536
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	
	iVar8 = Function_56(&iParam0, 0);
	iVar9 = Function_56(&iParam0, 1);
	UI_SET_MONEY("blah", "wanted_poster_dead_amount", iVar8);
	UI_SET_MONEY("blah", "wanted_poster_alive_amount", iVar9);
	strcpy(&cVar0, "wanted_poster_bounty_format", 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_56(struct<13> Param0) //Position: 0x21EA / 8682
{
	bool bVar0;
	char* cVar1[32];
	
	switch (Param0.f_12)
	{
		case 0x00000001:
			if (&bParam1)
			{
				bVar0 = 20;
			}
			else
			{
				bVar0 = 10;
			}
			break;
		
		case 0x00000000:
		case 0x00000002:
			if (&bParam1)
			{
				bVar0 = 80;
			}
			else
			{
				bVar0 = 40;
			}
			break;
		
		case 0x00000003:
			if (&bParam1)
			{
				bVar0 = 120;
			}
			else
			{
				bVar0 = 60;
			}
			break;
		
		case 0x00000004:
			if (&bParam1)
			{
				bVar0 = 200;
			}
			else
			{
				bVar0 = 100;
			}
			break;
		
		case 0x00000005:
			if (&bParam1)
			{
				bVar0 = 300;
			}
			else
			{
				bVar0 = 150;
			}
			break;
		
		case 0x00000006:
			if (&bParam1)
			{
				bVar0 = 400;
			}
			else
			{
				bVar0 = 200;
			}
			break;
		
		default:
			if (&bParam1)
			{
				bVar0 = 20;
			}
			else
			{
				bVar0 = 10;
			}
			break;
			if (&bParam1 == 1)
			{
				strcpy(&cVar1, "Bounty Alive reward: ", 32);
			}
			else
			{
				strcpy(&cVar1, "Bounty Dead reward: ", 32);
			}
			stradd(&cVar1, INT_TO_STRING(bVar0), 32);
	}
	if (Function_58() > 4)
	{
		bVar0 *= 2;
	}
	if (Function_57())
	{
		return (bVar0 / 2);
	}
	return bVar0;
}

bool Function_57() //Position: 0x2316 / 8982
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_58() //Position: 0x2341 / 9025
{
	return Global_21369.f_244;
}

void Function_59(int iParam0, char* cParam1) //Position: 0x234C / 9036
{
	strcpy(&cParam1, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 64);
	return;
}

void Function_60(char* cParam0, char* cParam1) //Position: 0x2364 / 9060
{
	switch (cParam0)
	{
		case 0x00000004:
			strcpy(&cParam1, "npm_bh_ban", 64);
			break;
		
		case 0x00000006:
			strcpy(&cParam1, "npm_bh_ctl", 64);
			break;
		
		case 0x00000001:
			strcpy(&cParam1, "pm_bh_dtch", 64);
			break;
		
		case 0x00000005:
			strcpy(&cParam1, "npm_bh_dnd", 64);
			break;
		
		case 0x00000003:
			strcpy(&cParam1, "npm_bh_tre", 64);
			break;
		
		case 0x00000007:
			strcpy(&cParam1, "npm_bh_gen", 64);
			break;
		
		case 0x00000000:
			strcpy(&cParam1, "", 64);
			LOG_ERROR("WANTEDPOSTER_GetGangString - Invalid gang type");
			break;
	}
	return;
}

int Function_61(int iParam0) //Position: 0x2453 / 9299
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_ACTOR_ENUM_FACTION(iParam0);
	switch (iVar0)
	{
		case 0x0000000F:
			iVar1 = 1;
			break;
		
		case 0x0000001B:
			iVar1 = 2;
			break;
		
		case 0x00000018:
			iVar1 = 3;
			break;
		
		case 0x0000000C:
			iVar1 = 4;
			break;
		
		case 0x00000019:
			iVar1 = 5;
			break;
		
		case 0x0000000E:
			iVar1 = 6;
			break;
		
		case 0x0000000D:
			iVar1 = 7;
			break;
		
		default:
			LOG_ERROR("BOUNTYHUNTER_GET_GANG_TYPE found an invalid actor faction");
			iVar1 = 7;
			break;
	}
	return iVar1;
}

void Function_62(char* cParam0, char* cParam1) //Position: 0x2502 / 9474
{
	switch (cParam0)
	{
		case 0x00000001:
			strcpy(&cParam1, "pm_bh_wpc1", 64);
			break;
		
		case 0x00000002:
			strcpy(&cParam1, "pm_bh_wpc2", 64);
			break;
		
		case 0x00000003:
			strcpy(&cParam1, "pm_bh_wpc3", 64);
			break;
		
		case 0x00000004:
			strcpy(&cParam1, "pm_bh_wpc4", 64);
			break;
		
		case 0x00000005:
			strcpy(&cParam1, "pm_bh_wpc5", 64);
			break;
		
		case 0x00000006:
			strcpy(&cParam1, "pm_bh_wpc6", 64);
			break;
		
		case 0x00000000:
			strcpy(&cParam1, "pm_bh_wpcd", 64);
			break;
		
		default:
			strcpy(&cParam1, "pm_bh_wpc1", 64);
			break;
	}
	return;
}

var Function_63(float fParam0, int iParam1) //Position: 0x25E1 / 9697
{
	int iVar0;
	
	iVar0 = 1;
	if (iLocal_459 == Global_46760[0])
	{
		fParam0 = Vector(-2190,419f, 17,62955f, 2613,313f);
		iParam1 = Vector(-0,042413f, 1,854375f, -0,5594838f);
	}
	else if (iLocal_459 == Global_46914[0])
	{
		fParam0 = Vector(664,2913f, 79,80457f, 1316,56f);
		iParam1 = Vector(179,9807f, -0,002636f, -179,4155f);
	}
	else if (iLocal_459 == Global_46816[0])
	{
		fParam0 = Vector(-817,2354f, 94,85875f, 2427,042f);
		iParam1 = Vector(-179,4077f, 12,68162f, -179,3707f);
	}
	else if (iLocal_459 == Global_46796[1])
	{
		fParam0 = Vector(-3679,977f, 43,82752f, 2116,094f);
		iParam1 = Vector(-0,688952f, 45,63879f, -0,90303f);
	}
	else if (iLocal_459 == Global_46850[0])
	{
		fParam0 = Vector(-4336,39f, 31,23863f, 4381,447f);
		iParam1 = Vector(-0,068632f, 5,60906f, -0,567574f);
	}
	else if (iLocal_459 == Global_46926[1])
	{
		fParam0 = Vector(-415,3171f, 153,0927f, 1602,938f);
		iParam1 = Vector(2,397115f, -76,85792f, -2,474441f);
	}
	else if (iLocal_459 == Global_46894[1])
	{
		fParam0 = Vector(-717,9177f, 64,29659f, 3293,778f);
		iParam1 = Vector(-179,5706f, 37,63261f, -179,2682f);
	}
	else if (iLocal_459 == Global_46866[0])
	{
		fParam0 = Vector(-2663,823f, 32,43675f, 4249,949f);
		iParam1 = Vector(176,3454f, -80,69141f, -176,3203f);
	}
	else
	{
		LOG_ERROR("Undefined wanted poster location");
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_64(int iParam0, bool bParam1, bool bParam2) //Position: 0x27CD / 10189
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
	if (Function_67(&iParam0))
	{
		return 1;
	}
	if (Function_66(&iParam0))
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
	if (Function_65())
	{
		return 1;
	}
	return 0;
}

bool Function_65() //Position: 0x2891 / 10385
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_66(int iParam0) //Position: 0x28A8 / 10408
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_67(int iParam0) //Position: 0x28B4 / 10420
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

bool Function_68(int iParam0) //Position: 0x28C3 / 10435
{
	if (bLocal_144)
	{
		if (iLocal_532 != iParam0 || iParam0 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_69(int iParam0) //Position: 0x28DF / 10463
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_70(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x28F5 / 10485
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

void Function_71(int iParam0) //Position: 0x29A4 / 10660
{
	var uVar0;
	
	if (IS_BLIP_VALID(&uLocal_154))
	{
		REMOVE_BLIP(&uLocal_154);
	}
	if (IS_OBJECT_VALID(&uLocal_156))
	{
		uVar0 = &uLocal_156;
	}
	else if (IS_OBJECT_VALID(&uLocal_160))
	{
		uVar0 = &uLocal_160;
	}
	if (iParam0 != 1 && IS_OBJECT_VALID(&uVar0))
	{
		uLocal_154 = ADD_BLIP_FOR_OBJECT(&uVar0, 393, 0f, 2, 0);
		SET_BLIP_SCALE(&uLocal_154, 1.0f);
		UNK_0x6077F3AE(&uLocal_154, 0);
		Function_72(1, 0x41200000);
	}
	return;
}

void Function_72(int iParam0, var uParam1) //Position: 0x2A11 / 10769
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

void Function_73(float fParam0) //Position: 0x2A4B / 10827
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&fParam0 + Function_2(90)), 0);
	return;
}

bool Function_74(struct<45> Param0) //Position: 0x2A6E / 10862
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<2> Var5;
	
	iVar0 = 1;
	Param32 = Param32;
	uParam31 = &uParam31;
	Function_142();
	if (iLocal_460 == 8)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iLocal_20) || IS_ACTOR_DEAD(&iLocal_20))
	{
		return 0;
	}
	GET_POSITION(&iLocal_20, &uVar1);
	if (iLocal_460 < 3)
	{
		if (Global_99472 == 32)
		{
			if (Param0.f_44 == 0)
			{
				iLocal_460 = 8;
				iLocal_19 = 5;
				return 0;
			}
		}
	}
	if ((iLocal_460 == 8 && iLocal_460 == 7) && iLocal_146 != 1)
	{
		if (Function_85(&iLocal_20))
		{
			Function_84();
			iLocal_460 = 7;
		}
	}
	switch (iLocal_460)
	{
		case 0x00000000:
			if (bLocal_149)
			{
				Var3 = Vector(-2660,408f, 31,386f, 4255,722f);
			}
			else
			{
				GET_OBJECT_POSITION(&uLocal_160, &Var3);
			}
			Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("wandvol") };
			Var5 = Var3;
			Var5.f_4 = (StackVal - 1.0f);
			uLocal_137 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam31, &Local_101, 4,203895E-45f, Var5, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f));
			ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&uLocal_137, 2);
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iLocal_20, 1);
			if (bLocal_149)
			{
				TASK_CLEAR(&iLocal_20);
				TASK_WANDER_IN_VOLUME(&iLocal_20, &uLocal_137, -1f);
				TASK_PRIORITY_SET(&iLocal_20, 2);
				SET_ACTOR_INVULNERABILITY(&iLocal_20, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_20, 0);
			}
			AI_CONVERSE_DISABLE(&iLocal_20);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_20, 1);
			Function_14(&iLocal_20, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&iLocal_20, false);
			iLocal_460 = 1;
			break;
		
		case 0x00000001:
			if (bLocal_149)
			{
				GET_OBJECT_POSITION(&uLocal_160, &Var3);
				if (VDIST(Global_54078, Var3) > 25.0f)
				{
					MAKE_ACTOR_READY_FOR_ACTION(&iLocal_20, 1);
					TASK_CLEAR(&iLocal_20);
					TASK_USE_GRINGO(&iLocal_20, GET_GRINGO_FROM_OBJECT(&uLocal_160), "UseCase1", 1, 1);
					TASK_PRIORITY_SET(&iLocal_20, false);
					SET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(&uLocal_137), Var3);
					iLocal_460 = 3;
				}
			}
			else
			{
				MAKE_ACTOR_READY_FOR_ACTION(&iLocal_20, 1);
				TASK_CLEAR(&iLocal_20);
				TASK_USE_GRINGO(&iLocal_20, GET_GRINGO_FROM_OBJECT(&uLocal_160), "UseCase1", 1, 1);
				TASK_PRIORITY_SET(&iLocal_20, 2);
				iLocal_460 = 3;
			}
			break;
		
		case 0x00000003:
			if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(&uLocal_160)) == 0)
			{
				Function_153(&iLocal_121);
				iLocal_460 = 4;
			}
			else if (GET_TASK_STATUS(&iLocal_20, 19) == 1 && GET_TASK_STATUS(&iLocal_20, 19) == 3)
			{
				iLocal_460 = 7;
			}
			if (GET_CURRENT_GRINGO(&iLocal_20) == GET_GRINGO_FROM_OBJECT(&uLocal_160))
			{
				Function_153(&iLocal_129);
				iLocal_460 = 5;
			}
			break;
		
		case 0x00000004:
			if (Function_154(&iLocal_121, 2.0f))
			{
				TASK_CLEAR(&iLocal_20);
				TASK_USE_GRINGO(&iLocal_20, GET_GRINGO_FROM_OBJECT(&uLocal_160), "UseCase1", 1, 1);
				TASK_PRIORITY_SET(&iLocal_20, 2);
				iLocal_460 = 3;
			}
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(&iLocal_20, 19) != 0 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iLocal_20), "PosterDone"))
			{
				Function_78(&uParam31);
			}
			else if (((iLocal_146 != 0 && !IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_20, "stand_place_poster")) && GET_CURRENT_GRINGO(&iLocal_20) == GET_GRINGO_FROM_OBJECT(&uLocal_160)) && !GET_TASK_STATUS(&iLocal_20, 19) != 0)
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iLocal_20), "PosterGood"))
				{
					Function_78(&uParam31);
				}
				else
				{
					Function_84();
					iLocal_460 = 7;
					iVar0 = 0;
				}
			}
			else if (GET_TASK_STATUS(&iLocal_20, 19) != 0 && DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iLocal_20), "PosterGood"))
			{
				Function_78(&uParam31);
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iLocal_20, "stand_place_poster") && Function_76(&iLocal_129) < 0,1f)
			{
				if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iLocal_20), "PosterDone") && !DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iLocal_20), "PosterGood"))
				{
					Function_84();
					iLocal_460 = 7;
					iVar0 = 0;
				}
			}
			break;
		
		case 0x00000006:
			if (Function_75(&uParam31) == 1)
			{
				Function_51(1, &uParam31);
				iLocal_146 = 1;
				if (IS_BLIP_VALID(&uLocal_154))
				{
					SET_BLIP_BLINK(&uLocal_154, 1, 0, 5f);
				}
				Function_88(&uLocal_141, 16);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_20, &uLocal_137, 1, 0);
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iLocal_20), "PosterGood");
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iLocal_20), "PosterDone");
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iLocal_20, 0);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uLocal_137);
			iLocal_460 = 8;
			break;
		
		case 0x00000007:
			if (!Function_155(uLocal_141, 8))
			{
				Function_88(&uLocal_141, 8);
				TASK_CLEAR(&iLocal_20);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_20, 1);
				Function_9();
			}
			if (MAKE_ACTOR_READY_FOR_ACTION(&iLocal_20, 1))
			{
				iLocal_460 = 8;
			}
			break;
		
		case 0x00000008:
			break;
	}
	if (iLocal_460 == 8)
	{
		Function_13();
	}
	Function_112("WANTEDPOSTER_UpdateMissionGiver");
	return iVar0;
}

int Function_75(int iParam0) //Position: 0x2F2F / 12079
{
	if (!IS_OBJECT_VALID(&uLocal_156))
	{
		LOG_ERROR("invalid poster object");
		return 0;
	}
	if (IS_OBJECT_VALID(&uLocal_162))
	{
		if (IS_GRINGO_READY(&uLocal_162))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uLocal_162), true);
			return 1;
		}
	}
	if (!Function_52(&iParam0))
	{
		LOG_ERROR("Could not force the poster position/rotation");
	}
	Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("bhGet") };
	uLocal_162 = CREATE_GRINGO_ON_OBJECT(StackVal, StackVal, &uLocal_156, &Local_101, "$/content/scripting/gringo/simplegringo/get_wanted_poster", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	GET_OBJECT_POSITION(&uLocal_156, &Local_98);
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&uLocal_162)))
	{
		return 0;
		LOG_ERROR("invalid get wanted poster gringo created");
	}
	fLocal_451 = (GET_OBJECT_HEADING(&uLocal_162) + 180.0f);
	iLocal_146 = 1;
	Function_9();
	return 1;
	return 0;
}

float Function_76(vector3 vParam0) //Position: 0x3076 / 12406
{
	if (Function_50(&vParam0))
	{
		if (Function_77(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_77(int iParam0) //Position: 0x3143 / 12611
{
	return Function_155(iParam0, 2);
}

void Function_78(var uParam0) //Position: 0x3151 / 12625
{
	DESTROY_OBJECT(&uLocal_156);
	Function_80(&uParam0);
	uLocal_156 = &uLocal_158;
	uLocal_158 = "";
	Function_52(&uParam0);
	uLocal_444 = CREATE_CAMERA_FOCUS_POINT_OBJECT_WITH_TUNING(&uParam0, Function_79(), &uLocal_156, "wantedPoster", 2,5f, 2,5001f);
	if (!IS_OBJECT_VALID(&uLocal_444))
	{
		LOG_ERROR("Could not create wanted poster camera focus");
	}
	else
	{
		SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_444, "npm_bh_cfp");
		SET_CAMERA_FOCUS_PLAYER_INVULNERABLE(&uLocal_444, 1);
		SET_CAMERA_FOCUS_PLAYER_INPUT_DISABLED(&uLocal_444, 1);
	}
	iLocal_460 = 6;
	return;
}

var Function_79() //Position: 0x3204 / 12804
{
	int iVar0;
	
	return &iVar0;
}

void Function_80(int iParam0) //Position: 0x320D / 12813
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (iLocal_449 == 0)
	{
		if (!Function_81(Function_82(Global_39906.f_20)))
		{
			strcpy(&cVar0, "$/fragments/p_pos_wanted", 64);
			if (Global_39906.f_40 <= 10)
			{
				stradd(&cVar0, "0", 64);
			}
			stradd(&cVar0, INT_TO_STRING(Global_39906.f_40), 64);
			stradd(&cVar0, "x", 64);
		}
		else
		{
			strcpy(&cVar0, "$/fragments/p_pos_wanted61x", 64);
		}
		Function_63(&Var16, &Var18);
		Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("nbhNewPost") };
		uLocal_158 = CREATE_PROP_IN_LAYOUT(&iParam0, &Local_101, &cVar0, Var16, Var18, 0);
		if (IS_OBJECT_VALID(&uLocal_158))
		{
			SET_PROP_AI_OBSTACLE_ENABLED(&uLocal_158, 0);
			SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_158, 0);
			SET_OBJECT_COLLIDE_WITH_MOVABLES(&uLocal_158, 0);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uLocal_158), 1);
			iLocal_449 = 1;
		}
		else
		{
			LOG_ERROR("WANTEDPOSTER - Invalid backup object returned by prop creation");
		}
	}
	return;
}

bool Function_81(bool bParam0) //Position: 0x3339 / 13113
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = true;
	if (bParam0 <= 32)
	{
		bVar1 = SHIFT_LEFT(bVar0, bParam0);
		if ((Global_39906 && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	else
	{
		bVar1 = SHIFT_LEFT(bVar0, (bParam0 - 32));
		if ((StackVal && bVar1) >= 0)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
	}
	return iVar2;
}

bool Function_82(bool bParam0) //Position: 0x338B / 13195
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	
	iVar1 = 4294967295;
	if (Function_83(bParam0))
	{
		while (iVar0 <= 45)
		{
			Function_143(&Var2, iVar0);
			if (Var2.f_20 == bParam0)
			{
				iVar1 = iVar0;
				iVar0 = 45 + 1;
			}
			iVar0++;
		}
	}
	return iVar1;
}

bool Function_83(bool bParam0) //Position: 0x33C9 / 13257
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_84() //Position: 0x33E0 / 13280
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var2 = Vector(0.0f, -1.0f, 0.0f);
	GET_OBJECT_RELATIVE_POSITION(&uLocal_160, Var2, &Var0);
	SET_OBJECT_POSITION(&uLocal_156, Var0);
	return;
}

bool Function_85(int iParam0) //Position: 0x3405 / 13317
{
	return DECOR_CHECK_EXIST(&iParam0, "nsharedlaw");
}

bool Function_86(int iParam0, struct<2> Param1) //Position: 0x341D / 13341
{
	var uVar0;
	struct<2> Var2;
	char* cVar4[64];
	bool bVar20;
	
	if (Function_10(StackVal, Param1))
	{
		return 0;
	}
	Var2 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, -1.0f, 0.0f), Param1, StackVal);
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_VALID(&uLocal_156))
	{
		return 0;
	}
	GET_OBJECT_RELATIVE_POSITION(&uLocal_160, Var2, &uVar0);
	bVar20 = Function_82(Global_39906.f_20);
	if (!Function_87(bVar20))
	{
		LOG_ERROR("Invalid bounty hunter actorenum");
		return 0;
	}
	if (!Function_81(bVar20))
	{
		strcpy(&cVar4, "$/fragments/p_pos_wanted", 64);
		if (Global_39906.f_40 <= 10)
		{
			stradd(&cVar4, "0", 64);
		}
		stradd(&cVar4, INT_TO_STRING(Global_39906.f_40), 64);
		stradd(&cVar4, "x", 64);
	}
	else
	{
		strcpy(&cVar4, "$/fragments/p_pos_wanted61x", 64);
	}
	Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("bhPoster") };
	uLocal_156 = CREATE_PROP_IN_LAYOUT(StackVal, &iParam0, &Local_101, &cVar4, Var2, Vector(0.0f, 0.0f, 0.0f), 0);
	if (!IS_OBJECT_VALID(&uLocal_156))
	{
		return 0;
	}
	SET_PROP_AI_OBSTACLE_ENABLED(&uLocal_156, 0);
	SET_OBJECT_COLLIDE_WITH_WORLD(&uLocal_156, 0);
	SET_OBJECT_COLLIDE_WITH_MOVABLES(&uLocal_156, 0);
	SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uLocal_156), 1);
	Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("wpcntxt") };
	uLocal_139 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, &Local_101, 4,203895E-45f, Vector(0.0f, 10.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2,5f, 2.0f, 2,5f));
	if (!IS_VOLUME_VALID(&uLocal_139))
	{
		return 0;
	}
	uLocal_442 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("get_wanted_poster", &uLocal_139, 36, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_442))
	{
		return 0;
	}
	return 1;
}

bool Function_87(int iParam0) //Position: 0x35E6 / 13798
{
	if (iParam0 > 0 || iParam0 <= 45)
	{
		return 0;
	}
	return 1;
}

void Function_88(var uParam0, int iParam1) //Position: 0x35FC / 13820
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_89(char* cParam0, struct<2> Param1, struct<2> Param3) //Position: 0x360D / 13837
{
	struct<2> Var0;
	
	if (!IS_LAYOUTREF_VALID(&cParam0))
	{
		return 0;
	}
	Var0 = Param1;
	Function_142();
	Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("bhGringo") };
	Var0 = Param1;
	uLocal_160 = CREATE_GRINGO_IN_LAYOUT(&cParam0, &Local_101, "$/content/scripting/gringo/SimpleGringo/stand_place_poster", Var0, Param3);
	if (!IS_OBJECT_VALID(&uLocal_160))
	{
		SCRIPT_BREAKPOINT("Invalid gringo created");
		return 0;
	}
	Function_112("WANTEDPOSTER_CreateScene - GRINGO");
	if (!Function_10(StackVal, Local_452))
	{
		PRINTSTRING("Setting the bounds position");
		PRINTVECTOR(Local_452);
		PRINTNL();
		Var0 = Local_452;
	}
	else
	{
		LOG_ERROR("Invalid boundsPos");
	}
	Function_142();
	Local_101 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_98("nmissgiver") };
	iLocal_20 = CREATE_ACTOR_IN_LAYOUT(&cParam0, &Local_101, (&iLocal_20 + 8)->f_16, Var0, Param3);
	Function_112("WANTEDPOSTER_CreateScene - ACTOR");
	Function_142();
	if (IS_ACTOR_VALID(&iLocal_20))
	{
		SET_ACTOR_UPDATE_PRIORITY(&iLocal_20, false);
		(&iLocal_20 + 8)->f_8 = 1;
		(&iLocal_20 + 8)->f_12 = 0;
		iLocal_460 = 0;
		if (!Function_90(&iLocal_20, 0))
		{
		}
	}
	else
	{
		return 0;
	}
	Function_112("WANTEDPOSTER_CreateScene - ACTORSETUP");
	return 1;
}

bool Function_90(int iParam0, int iParam1) //Position: 0x37FE / 14334
{
	var uVar0;
	var uVar1;
	
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_39918);
		ITERATE_EVERYWHERE(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 2);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "nSharedLaw");
		uVar0 = GET_OBJECTSET_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar1));
		DESTROY_ITERATOR(&uVar1);
	}
	else
	{
		uVar0 = &iParam1;
	}
	if (!IS_OBJECTSET_VALID(&uVar0))
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(&iParam0, &uVar0))
	{
		return 0;
	}
	ADD_OBJECT_TO_OBJECTSET(&iParam0, &uVar0);
	CLEAN_OBJECTSET(&uVar0);
	return 1;
}

bool Function_91(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x3889 / 14473
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_93(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = uParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_92(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

float Function_92(struct<2> Param0) //Position: 0x3965 / 14693
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_93(int iParam0) //Position: 0x3984 / 14724
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
						Function_96(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_94(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_96(iVar0);
						}
					}
					else if (Function_94(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_96(iVar0);
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
			Function_96(iVar0);
		}
		iVar0++;
	}
	return 0;
}

float Function_94(var uParam0, struct<2> Param1) //Position: 0x3AF2 / 15090
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_95(&uParam0);
		Var0 = Function_95(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_95(int iParam0) //Position: 0x3B69 / 15209
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_96(int iParam0) //Position: 0x3BD5 / 15317
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

bool Function_97() //Position: 0x3C3D / 15421
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	if (iLocal_459 == Global_46760[0])
	{
		Var0 = Vector(-2191,256f, 16,943f, 2603,014f);
		Var2 = Vector(-2170,909f, 16,874f, 2591,107f);
		Var4 = Vector(-2163,57f, 16,391f, 2584,042f);
	}
	else if (iLocal_459 == Global_46914[0])
	{
		Var0 = Vector(702,462f, 78,306f, 1346,007f);
		Var2 = Vector(700,721f, 78,359f, 1302,521f);
		Var4 = Vector(677,636f, 78,555f, 1224,394f);
	}
	else if (iLocal_459 == Global_46816[0])
	{
		Var0 = Vector(-824,226f, 93,344f, 2440,564f);
		Var2 = Vector(-812,179f, 92,26f, 2376,612f);
		Var4 = Vector(-768,31f, 92,879f, 2413,724f);
	}
	else if (iLocal_459 == Global_46796[1])
	{
		Var0 = Vector(-3689,717f, 42,574f, 2116,131f);
		Var2 = Vector(-3633,973f, 42,309f, 2142,744f);
		Var4 = Vector(-3661,634f, 42,571f, 2099,374f);
	}
	else if (iLocal_459 == Global_46850[0])
	{
		Var0 = Vector(-4292,663f, 29,753f, 4387.0f);
		Var2 = Vector(-4353,992f, 29,344f, 4413,363f);
		Var4 = Vector(-4308,613f, 23,106f, 4401,273f);
	}
	else if (iLocal_459 == Global_46926[1])
	{
		Var0 = Vector(-464,296f, 152,352f, 1586,306f);
		Var2 = Vector(-403,744f, 151,585f, 1617,957f);
		Var4 = Vector(-450,624f, 153,275f, 1635,315f);
	}
	else if (iLocal_459 == Global_46894[1])
	{
		Var0 = Vector(-712,614f, 66,81f, 3275,213f);
		Var2 = Vector(-718,829f, 67,513f, 3288,952f);
		Var4 = Vector(-717,856f, 63,328f, 3298,042f);
	}
	else if (iLocal_459 == Global_46866[0])
	{
		Var0 = Vector(-2653,145f, 31,387f, 4263,75f);
		Var2 = Vector(-2655,729f, 35,704f, 4257,177f);
		Var4 = Vector(-2645,429f, 31,078f, 4247,096f);
	}
	else
	{
		return 0;
	}
	if (!WOULD_ACTOR_BE_VISIBLE((&iLocal_20 + 8)->f_16, &Var0, 3212836864))
	{
		Local_452 = Var0;
	}
	else if (!WOULD_ACTOR_BE_VISIBLE((&iLocal_20 + 8)->f_16, &Var2, 3212836864))
	{
		Local_452 = Var2;
	}
	else
	{
		Local_452 = Var4;
	}
	fLocal_458 = 25.0f;
	if (bLocal_149 && iLocal_459 != Global_46866[0])
	{
		Local_452 = Vector(-2658,637f, 31,386f, 4257,7f);
	}
	return 1;
}

struct<32> Function_98(char* cParam0) //Position: 0x3EF8 / 16120
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_99("0", &cVar8, ""), 4);
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

struct<32> Function_99(char* cParam0) //Position: 0x3F64 / 16228
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_100() //Position: 0x3F86 / 16262
{
	struct<2> Var0;
	var uVar2;
	int iVar4;
	
	iVar4 = 1;
	if (!Function_69(iLocal_459))
	{
		LOG_ERROR("WANTEDPOSTER_FindPosterFlag - Invalid wanted poster region");
		return 0;
	}
	Function_63(&Var0, &uVar2);
	ITERATE_ON_PARTIAL_NAME(&uLocal_16, "f_merc_");
	ITERATE_ON_OBJECT_TYPE(&uLocal_16, 8);
	ITERATE_IN_SPHERE(&uLocal_16, Var0, 5.0f);
	uLocal_164 = START_OBJECT_ITERATOR(&uLocal_16);
	if (!IS_OBJECT_VALID(&uLocal_164))
	{
		iVar4 = 0;
	}
	if (IS_OBJECT_VALID(&uLocal_16))
	{
		DESTROY_ITERATOR(&uLocal_16);
	}
	return iVar4;
}

int Function_101(int iParam0) //Position: 0x402F / 16431
{
	if (&iParam0 == 1)
	{
		if (Global_6629 == 1)
		{
			return 0;
		}
	}
	if (Global_6629 == 0)
	{
		return 0;
	}
	if (Global_43789 == Global_46760[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46914[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46816[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46796[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46850[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46926[1])
	{
		return 1;
	}
	if (Global_43789 == Global_46866[0])
	{
		return 1;
	}
	if (Global_43789 == Global_46894[1])
	{
		if (!Function_102(Global_46894[1]))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_102(int iParam0) //Position: 0x40E4 / 16612
{
	if (!Function_69(iParam0))
	{
		return 0;
	}
	return Function_110(&(Global_43791[iParam0]), 2048);
}

bool Function_103(int iParam0) //Position: 0x4102 / 16642
{
	if (!Function_104(&cLocal_31))
	{
		return 0;
	}
	if (!Function_110(&(Global_43791[iParam0]), 8))
	{
		return 0;
	}
	return 1;
}

bool Function_104(struct<2>[] Param0) //Position: 0x4126 / 16678
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_109();
	iVar1 = 0;
	if (!Function_7(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_108(&(Param0[iVar02]), 8);
		}
		else if (Function_107())
		{
			iVar1 = 1;
			Function_108(&(Param0[iVar02]), 8);
		}
		Function_108(&(Param0[iVar02]), 16);
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
				Function_108(&(Param0[iVar02]), 1);
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
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
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
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_108(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_108(&(Param0[iVar02]), 2);
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
	Function_105();
	return 1;
}

void Function_105() //Position: 0x44E8 / 17640
{
	if (!Function_106(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_106(int iParam0) //Position: 0x4528 / 17704
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_107() //Position: 0x4544 / 17732
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

void Function_108(struct<13> Param0) //Position: 0x4572 / 17778
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_109() //Position: 0x4585 / 17797
{
	if (!Function_106(128))
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

bool Function_110(var uParam0, int iParam1) //Position: 0x45C7 / 17863
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_111(int iParam0) //Position: 0x45E4 / 17892
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 32)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

void Function_112(float fParam0) //Position: 0x4650 / 18000
{
	if (iLocal_526 == 1)
	{
		fLocal_527 = (GET_PROFILE_TIME() - fLocal_527);
		PRINTSTRING(">>>>> BH_Profile for ");
		PRINTSTRING(&fParam0);
		PRINTSTRING(": ");
		PRINTSTRING(FLOAT_TO_STRING_FORMATED(fLocal_527, 6, 8));
		PRINTNL();
		if (fLocal_527 < 5000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was super long. You should check this.");
		}
		else if (fLocal_527 < 2500.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was really long. You should check this.");
		}
		else if (fLocal_527 < 1000.0f)
		{
			LOG_ERROR(">>>>> BH_Profile was kinda long. You should check this.");
		}
	}
	return;
}

void Function_113() //Position: 0x4781 / 18305
{
	char* cVar0[32];
	char* cVar8[64];
	int iVar24;
	
	iVar24 = 4;
	if (bLocal_149)
	{
		(&iLocal_20 + 8)->f_16 = 457;
	}
	else if (Function_15(40, 0) && iLocal_459 != Global_46894[1])
	{
		if (Function_127())
		{
			(&iLocal_20 + 8)->f_16 = 752;
		}
		else
		{
			(&iLocal_20 + 8)->f_16 = 754;
		}
	}
	else
	{
		(&iLocal_20 + 8)->f_16 = Function_117(iVar24, 0, 2, 4294967295, 1);
	}
	Function_116(&cLocal_31, (&iLocal_20 + 8)->f_16, 2, 0);
	strcpy(&cVar8, "WANTEDPOSTER - spawning AE_", 64);
	straddi(&cVar8, (&iLocal_20 + 8)->f_16, 64);
	Function_114(&cLocal_31, "$/content/scripting/gringo/simplegringo/get_wanted_poster", 1, 0);
	Function_114(&cLocal_31, "$/content/scripting/gringo/SimpleGringo/stand_place_poster", 1, 0);
	strcpy(&cVar0, "$/fragments/p_pos_wanted", 32);
	if (Global_39906.f_40 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	stradd(&cVar0, INT_TO_STRING(Global_39906.f_40), 32);
	stradd(&cVar0, "x", 32);
	Function_114(&cLocal_31, &cVar0, 0, 0);
	Function_114(&cLocal_31, "stand_place_poster", 5, 0);
	Function_114(&cLocal_31, "custom/stand_place_poster", 8, 0);
	Function_114(&cLocal_31, "stand_poster", 5, 0);
	Function_114(&cLocal_31, "custom/stand_poster", 8, 0);
	Function_114(&cLocal_31, "post_wanted", 5, 0);
	Function_114(&cLocal_31, "custom/post_wanted", 8, 0);
	Function_114(&cLocal_31, "procmissions", 10, 0);
	Function_88(&uLocal_141, 4);
	return;
}

var Function_114(struct<2>[] Param0, char* cParam1, int iParam2, bool bParam3) //Position: 0x49B8 / 18872
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&cParam1, iParam2);
	iVar0 = Function_115(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_108(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_115(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x49F6 / 18934
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_108(&(Param0[iVar02]), 4);
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

var Function_116(struct<2>[] Param0, int iParam1, var uParam2, bool bParam3) //Position: 0x4AC5 / 19141
{
	int iVar0;
	
	uParam2 = &uParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_7(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_108(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_108(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (iParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

var Function_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x4BA1 / 19361
{
	return Function_118(StackVal, uParam0, uParam1, &uParam2, &uParam3, &uParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_118(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x4BBE / 19390
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_121(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_121(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_121(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_121(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_121(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_121(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_121(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_121(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_121(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_121(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_121(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_121(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_121(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_121(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_119(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_119(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x4E21 / 20001
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_120(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_120(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_120(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_120(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_120(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_120(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_120(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_120(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_120(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_120(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_120(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_120(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_120(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_120(&(Global_46972[13]), &bVar0);
	}
	return Function_121(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_120(var uParam0, bool bParam1) //Position: 0x4F90 / 20368
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

var Function_121(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x5054 / 20564
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_126();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_83(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_125(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_125(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_124(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_83(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_124(bVar0))
				{
					Function_123();
				}
				Function_122(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_83(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
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
	return bVar0;
}

void Function_122(int iParam0) //Position: 0x534D / 21325
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

void Function_123() //Position: 0x5401 / 21505
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

bool Function_124(bool bParam0) //Position: 0x543C / 21564
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_125(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x5469 / 21609
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

void Function_126() //Position: 0x55C4 / 21956
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_123();
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
	Function_123();
	return;
}

bool Function_127() //Position: 0x5610 / 22032
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

var Function_128(struct<25> Param0) //Position: 0x5623 / 22051
{
	var uVar0;
	var uVar1;
	
	uVar0 = Param0.f_24;
	iParam3 = &iParam3;
	iParam2 = &iParam2;
	if (StackVal || Param0.f_24 != 4294967295 != 1)
	{
		uVar1 = Function_129(uVar0, 80.0f, 20000.0f, &iParam1, 1, &iParam4);
	}
	else if (StackVal != 6)
	{
		LOG_ERROR("Unhandled Bounty Hunter Landmark type");
	}
	else
	{
		uVar1 = Param0.f_24;
	}
	return uVar1;
}

var Function_129(int iParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) //Position: 0x56B9 / 22201
{
	int iVar0;
	int iVar1[146];
	int iVar148[146];
	int iVar295;
	struct<2> Var296;
	struct<2> Var298;
	bool bVar300;
	bool bVar301;
	bool bVar302[146];
	bool bVar449[146];
	int iVar596;
	int iVar597;
	int iVar598;
	int iVar599;
	int iVar600;
	int iVar601;
	struct<8> Var602;
	
	iVar0 = 4294967295;
	bVar301 = 1,001638E+07.0f;
	iVar599 = 0;
	iVar600 = 0;
	iVar601 = 0;
	iVar596 = 0;
	while (iVar596 < 145)
	{
		iVar1[iVar596] = 4294967295;
		iVar148[iVar596] = 4294967295;
		iVar596++;
	}
	if (!Function_69(iParam0))
	{
		iParam0 = Global_43788;
	}
	iVar295 = Function_140(iParam0);
	PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - Checking Regions for a bountyhunter landmark: ");
	PRINTNL();
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var298);
	iVar596 = 0;
	while (iVar596 < 145)
	{
		Function_139(&Global_44085[iVar5969] + 8);
		Var296 = Function_139(&Global_44085[iVar5969] + 8);
		bVar300 = VDIST(Var298, Var296);
		if (&iParam3 == 0)
		{
			iParam3 = 0;
		}
		if (((StackVal && !(IS_VOLUME_VALID(&Global_44085[iVar5969] + 8) && (iVar295 != Function_140(Global_44085[iVar5969]) || iParam0 != 4294967295)) != 1) && Function_110(&(Global_43791[iVar596]), 8192)) && iVar596 == 0)
		{
			if (iVar596 == 146)
			{
				LOG_ERROR("The bountyhunter region count is screwy. Tell Ben.");
				return 4294967294;
			}
			if (bVar300 > bVar301)
			{
				bVar301 = bVar300;
				iVar598 = iVar596;
			}
			if (bVar300 < &fParam1 && bVar300 > &fParam2)
			{
				iVar1[iVar599] = iVar596;
				bVar302[iVar599] = bVar300;
				iVar599++;
				if (Function_134(Function_135(iVar596, 0, 2)) == 0)
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is NOT FINISHED.");
					PRINTNL();
					iVar148[iVar600] = iVar596;
					bVar449[iVar600] = bVar300;
					iVar600++;
				}
				else
				{
					PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK - This location is FINISHED. ");
					PRINTNL();
				}
			}
		}
		if (iVar599 == iVar1)
		{
			iVar596 = 146;
			LOG_ERROR("Reached regCount max? Tell Ben.");
		}
		iVar596++;
	}
	if (&iParam5 != 4294967295)
	{
		Function_133(&iVar1, &bVar302, iVar599);
		Function_133(&iVar148, &bVar449, iVar600);
	}
	if (iVar600 < 0 && &iParam4 != 1)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_132(3, iVar600);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_132(5, iVar600);
				break;
			
			case 0x00000004:
				iVar601 = Function_132(7, iVar600);
				break;
			
			case 0x00000005:
				iVar601 = Function_132(10, iVar600);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_132(5, iVar600);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar148[iVar597];
		if (Function_69(iVar0))
		{
			PRINTSTRING("Randomly picked NOT FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_131();
			PRINTSTRING("Picked close NOT FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_139(&Global_44085[iVar09] + 8);
		Var296 = Function_139(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else if (iVar599 >= 0)
	{
		switch (&iParam5)
		{
			case 0x00000001:
			case 0x00000002:
				iVar601 = Function_132(3, iVar599);
				break;
			
			case 0x00000000:
			case 0x00000003:
				iVar601 = Function_132(5, iVar599);
				break;
			
			case 0x00000004:
				iVar601 = Function_132(7, iVar599);
				break;
			
			case 0x00000005:
			case 0x00000006:
				iVar601 = Function_132(10, iVar599);
				break;
			
			case 0xFFFFFFFF:
			default:
				iVar601 = Function_132(5, iVar599);
		}
		RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
		iVar597 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 99.0f)) % iVar601);
		iVar0 = iVar1[iVar597];
		if (Function_69(iVar0))
		{
			PRINTSTRING("Randomly picked FINISHED Bounty Hunter location ");
		}
		else
		{
			LOG_ERROR("Invalid bountyHunterRegion picked. Using failsafe.");
			iVar0 = Function_131();
			PRINTSTRING("Picked close FINISHED Bounty Hunter location ");
		}
		Var602 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_130(iVar0) };
		PRINTSTRING(&Var602);
		PRINTSTRING(" with a distance of ");
		Function_139(&Global_44085[iVar09] + 8);
		Var296 = Function_139(&Global_44085[iVar09] + 8);
		bVar300 = VDIST(Var298, Var296);
		PRINTFLOAT(bVar300);
		PRINTNL();
	}
	else
	{
		LOG_ERROR("No valid landmark picked");
		PRINTSTRING("PICK_BOUNTYHUNTER_LANDMARK found no valid landmarks");
		PRINTNL();
		return iVar598;
	}
	return iVar0;
}

struct<32> Function_130(int iParam0) //Position: 0x5D6B / 23915
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_69(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[iParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_131() //Position: 0x5E2D / 24109
{
	if (Global_43787 == 0)
	{
		return Global_46760[6];
	}
	if (Global_43787 == 1)
	{
		return Global_46866[3];
	}
	return Global_46926[5];
}

int Function_132(int iParam0, int iParam1) //Position: 0x5E5B / 24155
{
	if (iParam0 <= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_133(int[] iParam0, bool[] bParam1, int iParam2) //Position: 0x5E6D / 24173
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = 1;
	while (iVar0 < (iParam2 - 1))
	{
		fVar3 = bParam1[iVar0];
		uVar2 = iParam0[iVar0];
		iVar1 = (iVar0 - 1);
		iVar4 = 0;
		while (iVar4 == 0)
		{
			if (bParam1[iVar1] < fVar3)
			{
				bParam1[iVar1 + 1] = bParam1[iVar1];
				iParam0[iVar1 + 1] = iParam0[iVar1];
				iVar1 = (iVar1 - 1);
				if (iVar1 <= 0)
				{
					iVar4 = 1;
				}
			}
			else
			{
				iVar4 = 1;
			}
		}
		iParam0[iVar1 + 1] = uVar2;
		bParam1[iVar1 + 1] = fVar3;
		iVar0++;
	}
	return;
}

int Function_134(int iParam0) //Position: 0x5F04 / 24324
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

int Function_135(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5F1E / 24350
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_138(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_136(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_136(bParam0, bParam1, bParam2, 4294967295);
}

int Function_136(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x5F7C / 24444
{
	var uVar0;
	
	if (!Function_33(bParam2))
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
	uVar0 = Function_138(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_137(uVar0);
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

var Function_137(int iParam0) //Position: 0x60E0 / 24800
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

var Function_138(int iParam0, int iParam1, int iParam2) //Position: 0x611E / 24862
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

struct<8> Function_139(int iParam0) //Position: 0x613E / 24894
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

int Function_140(int iParam0) //Position: 0x6150 / 24912
{
	return Function_141(iParam0);
}

int Function_141(int iParam0) //Position: 0x615B / 24923
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_69(iParam0))
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

void Function_142() //Position: 0x61B3 / 25011
{
	if (iLocal_526 == 1)
	{
		fLocal_527 = GET_PROFILE_TIME();
	}
	return;
}

bool Function_143(struct<41> Param0) //Position: 0x61C6 / 25030
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam1)
	{
		case 0x00000000:
			Param0.f_12 = 3;
			Param0.f_20 = 415;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 26;
			break;
		
		case 0x00000001:
			Param0.f_12 = 3;
			Param0.f_20 = 416;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 27;
			break;
		
		case 0x00000002:
			Param0.f_12 = 5;
			Param0.f_20 = 422;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 28;
			break;
		
		case 0x00000003:
			Param0.f_12 = 5;
			Param0.f_20 = 423;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 29;
			break;
		
		case 0x00000004:
			Param0.f_12 = 4;
			Param0.f_20 = 418;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 30;
			break;
		
		case 0x00000005:
			Param0.f_12 = 4;
			Param0.f_20 = 419;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 31;
			break;
		
		case 0x00000006:
			Param0.f_12 = 2;
			Param0.f_20 = 397;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 12;
			break;
		
		case 0x00000007:
			Param0.f_12 = 4;
			Param0.f_20 = 398;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 32;
			break;
		
		case 0x00000008:
			Param0.f_12 = 5;
			Param0.f_20 = 403;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 33;
			break;
		
		case 0x00000009:
			Param0.f_12 = 5;
			Param0.f_20 = 404;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 34;
			break;
		
		case 0x0000000A:
			Param0.f_12 = 4;
			Param0.f_20 = 400;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 35;
			break;
		
		case 0x0000000B:
			Param0.f_12 = 5;
			Param0.f_20 = 401;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 36;
			break;
		
		case 0x0000000C:
			Param0.f_12 = 2;
			Param0.f_20 = 496;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 13;
			break;
		
		case 0x0000000D:
			Param0.f_12 = 2;
			Param0.f_20 = 497;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 14;
			break;
		
		case 0x0000000E:
			Param0.f_12 = 4;
			Param0.f_20 = 502;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 17;
			break;
		
		case 0x0000000F:
			Param0.f_12 = 4;
			Param0.f_20 = 503;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 5;
			break;
		
		case 0x00000010:
			Param0.f_12 = 3;
			Param0.f_20 = 499;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 18;
			break;
		
		case 0x00000011:
			Param0.f_12 = 3;
			Param0.f_20 = 500;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 19;
			break;
		
		case 0x00000012:
			Param0.f_12 = 1;
			Param0.f_20 = 477;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 1;
			break;
		
		case 0x00000013:
			Param0.f_12 = 1;
			Param0.f_20 = 478;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 42;
			break;
		
		case 0x00000014:
			Param0.f_12 = 3;
			Param0.f_20 = 483;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 41;
			break;
		
		case 0x00000015:
			Param0.f_12 = 3;
			Param0.f_20 = 484;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 2;
			break;
		
		case 0x00000016:
			Param0.f_12 = 2;
			Param0.f_20 = 480;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 3;
			break;
		
		case 0x00000017:
			Param0.f_12 = 2;
			Param0.f_20 = 481;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 4;
			break;
		
		case 0x00000018:
			Param0.f_12 = 1;
			Param0.f_20 = 505;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 43;
			break;
		
		case 0x00000019:
			Param0.f_12 = 1;
			Param0.f_20 = 506;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 44;
			break;
		
		case 0x0000001A:
			Param0.f_12 = 3;
			Param0.f_20 = 513;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 15;
			break;
		
		case 0x0000001B:
			Param0.f_12 = 3;
			Param0.f_20 = 514;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 6;
			break;
		
		case 0x0000001C:
			Param0.f_12 = 2;
			Param0.f_20 = 508;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 16;
			break;
		
		case 0x0000001D:
			Param0.f_12 = 2;
			Param0.f_20 = 509;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 7;
			break;
		
		case 0x0000001E:
			Param0.f_12 = 1;
			Param0.f_20 = 486;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 45;
			break;
		
		case 0x0000001F:
			Param0.f_12 = 1;
			Param0.f_20 = 487;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 46;
			break;
		
		case 0x00000020:
			Param0.f_12 = 3;
			Param0.f_20 = 492;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 8;
			break;
		
		case 0x00000021:
			Param0.f_12 = 3;
			Param0.f_20 = 493;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 9;
			break;
		
		case 0x00000022:
			Param0.f_12 = 2;
			Param0.f_20 = 489;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 10;
			break;
		
		case 0x00000023:
			Param0.f_12 = 2;
			Param0.f_20 = 490;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 11;
			break;
		
		case 0x00000024:
			Param0.f_12 = 3;
			Param0.f_20 = 467;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 47;
			break;
		
		case 0x00000025:
			Param0.f_12 = 3;
			Param0.f_20 = 468;
			Param0.f_24 = Global_46722[2];
			Param0.f_32 = 0;
			Param0.f_40 = 48;
			break;
		
		case 0x00000026:
			Param0.f_12 = 2;
			Param0.f_20 = 406;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 20;
			break;
		
		case 0x00000027:
			Param0.f_12 = 3;
			Param0.f_20 = 407;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 21;
			break;
		
		case 0x00000028:
			Param0.f_12 = 4;
			Param0.f_20 = 412;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 22;
			break;
		
		case 0x00000029:
			Param0.f_12 = 4;
			Param0.f_20 = 413;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 23;
			break;
		
		case 0x0000002A:
			Param0.f_12 = 3;
			Param0.f_20 = 410;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 24;
			break;
		
		case 0x0000002B:
			Param0.f_12 = 3;
			Param0.f_20 = 411;
			Param0.f_24 = Global_46722[1];
			Param0.f_32 = 0;
			Param0.f_40 = 25;
			break;
		
		case 0x0000002C:
			Param0.f_12 = 2;
			Param0.f_20 = 787;
			Param0.f_24 = Global_46722[0];
			Param0.f_32 = 0;
			Param0.f_40 = 60;
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int Function_144(int iParam0) //Position: 0x6A1A / 27162
{
	return Function_145(Global_131807.f_1304, iParam0);
}

int Function_145(var uParam0, bool bParam1) //Position: 0x6A2C / 27180
{
	return (uParam0 && bParam1) == 0;
}

int Function_146() //Position: 0x6A39 / 27193
{
	int iVar0;
	
	iVar0 = Function_147(0);
	return iVar0;
}

var Function_147(int iParam0) //Position: 0x6A47 / 27207
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = (Function_41(358) + Function_41(359));
	if (&iParam0 == 1)
	{
		iVar2 = Function_132(iVar1, 7);
		if (iVar2 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = (FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2);
		}
	}
	else
	{
		if (iVar1 <= 2)
		{
			iVar0 = 1;
		}
		else if (iVar1 <= 4)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 3;
		}
		if (Global_43787 == 0)
		{
			iVar0 = iVar0;
		}
		else if (Global_43787 == 1)
		{
			iVar0++;
		}
		else
		{
			iVar0 += 2;
		}
	}
	return iVar0;
}

bool Function_148(int iParam0, int iParam1) //Position: 0x6ACC / 27340
{
	int iVar0;
	
	if (!Function_149(iParam0))
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

bool Function_149(bool bParam0) //Position: 0x6B2B / 27435
{
	if (bParam0 > 0 || bParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_150(struct<25> Param0) //Position: 0x6B41 / 27457
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[45];
	int iVar50[45];
	struct<33> Var96;
	
	iVar0 = 0;
	if (Function_157())
	{
		return 0;
	}
	Param0.f_16 = Function_151(&iParam1);
	if (&iParam3 == 0)
	{
		iParam3 = 0;
	}
	if (&iParam1 == 4294967295)
	{
		iParam1 = Function_146();
	}
	if (&iParam4 > 0 || &iParam4 < 8)
	{
		iParam4 = 0;
	}
	Global_39906.f_12 = &iParam1;
	iVar1 = 0;
	while (iVar1 < (45 - 1))
	{
		if (Function_143(&Var96, iVar1) == 1)
		{
			if (Function_140(Var96.f_24) == Global_46722[Global_43787])
			{
				if (Var96.f_32 == &iParam3)
				{
					if (((&iParam1 != 4294967295 || &iParam1 <= Var96.f_12) || (&iParam1 != 0 && Var96.f_12 != 3)) || (&iParam1 != 0 && Var96.f_12 != 4))
					{
						if (&iParam4 != 0 || &iParam4 != Function_61(Var96.f_20))
						{
							iVar4[iVar2] = iVar1;
							iVar2++;
							if (&iParam5 == 1)
							{
								if (!Function_81(iVar1))
								{
									iVar50[iVar3] = iVar1;
									iVar3++;
								}
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 >= 0)
	{
		if (iVar3 >= 0)
		{
			iVar1 = iVar50[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar3)];
		}
		else
		{
			iVar1 = iVar4[(FLOOR(RAND_FLOAT_RANGE(0.0f, 1000.0f)) % iVar2)];
		}
		if (Function_143(&Param0, iVar1))
		{
			PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY found actor");
			PRINTSTRING("With ActorEnum: ");
			PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(Param0.f_20));
			PRINTNL();
			Param0.f_24 = Function_128(&Param0, &iParam4, 80, 20000, Param0.f_12);
			iVar0 = 1;
		}
		else
		{
			LOG_ERROR("There's something wrong here");
		}
	}
	else
	{
		iVar0 = 0;
		LOG_ERROR("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find a valid actor");
		PRINTSTRING("BOUNTYHUNTER_FILL_DATA_BY_DIFFICULTY did not find an actor");
		PRINTNL();
	}
	if (&iParam2 != 4294967294)
	{
		Param0.f_24 = &iParam2;
	}
	return iVar0;
}

var Function_151(int iParam0) //Position: 0x6DC6 / 28102
{
	int iVar0;
	
	switch (&iParam0)
	{
		case 0x00000001:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000002:
			iVar0 = (5 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000003:
			iVar0 = (6 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000004:
			iVar0 = (7 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000005:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 2.0f)));
			break;
		
		case 0x00000006:
			iVar0 = (8 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 3.0f)));
			break;
		
		case 0x00000000:
		default:
			iVar0 = (4 + FLOOR((RAND_FLOAT_RANGE(0.0f, 1000.0f) % 5.0f)));
			break;
	}
	return iVar0;
}

bool Function_152(int iParam0) //Position: 0x6E95 / 28309
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_38380 - 1))
	{
		if (Global_38380[iVar036] != iParam0 || iParam0 != 4096)
		{
			if (Function_47(&(Global_38380[iVar036]), 4) && !IS_SCRIPT_VALID(&Global_38380[iVar036] + 48))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_153(int iParam0) //Position: 0x6EE5 / 28389
{
	Function_159(&iParam0, 0.0f);
	return;
}

bool Function_154(int iParam0, float fParam1) //Position: 0x6EF2 / 28402
{
	if (Function_50(&iParam0))
	{
		if (Function_76(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_155(var uParam0, int iParam1) //Position: 0x6F10 / 28432
{
	return (uParam0 && iParam1) == 0;
}

var Function_156(bool bParam0) //Position: 0x6F1D / 28445
{
	int iVar0;
	
	iVar0 = 0;
	if ((bParam0 && 33) == 1)
	{
		iVar0 = 5;
	}
	else if ((bParam0 && 3) == 2)
	{
		iVar0 = 7;
	}
	else if ((bParam0 && 6) == 4)
	{
		iVar0 = 11;
	}
	else if ((bParam0 && 12) == 8)
	{
		iVar0 = 14;
	}
	else if ((bParam0 && 24) == 16)
	{
		iVar0 = 18;
	}
	else if ((bParam0 && 48) == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

bool Function_157() //Position: 0x6F89 / 28553
{
	return Function_155(StackVal, 1);
}

var Function_158() //Position: 0x6F98 / 28568
{
	return &Global_21369 + 8;
}

void Function_159(vector3 vParam0) //Position: 0x6FA4 / 28580
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_88(&vParam0, 1);
	Function_30(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_160(int iParam0) //Position: 0x6FC9 / 28617
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

