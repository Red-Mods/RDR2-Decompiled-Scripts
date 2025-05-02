//Decompiled with MagicRDR v1.0
//Function Count : 124
//Statics Count : 561
//Natives Count : 159
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 44;
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
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	int iLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 8;
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
	var uLocal_475 = 5;
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
	var uLocal_489 = 7;
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
	var uLocal_507 = 8;
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
	var uLocal_526 = 0;
	var uLocal_527 = 5;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 2;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 1;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_123(&cVar0, 3);
	Function_121();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_6632)
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
					Function_108(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					bLocal_1 = false;
				}
				break;
			
			case 0x00000003:
				bLocal_1 = 500;
				if (Function_105())
				{
					Function_108(&(Global_43791[iScriptParam_0]), 16);
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
				Function_108(&(Global_43791[iScriptParam_0]), 8);
				if (Function_91(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_90(&(Global_43791[iScriptParam_0]), 131072);
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
				Function_108(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				bLocal_1 = false;
				break;
			
			case 0x00000009:
				if (!Function_88(iScriptParam_0))
				{
					Function_79(Function_80(), iScriptParam_0);
				}
				Function_78(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_77(&cVar0, 5.0f);
				Function_108(&(Global_43791[iScriptParam_0]), 4);
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
					Function_26(&uLocal_3, &uLocal_551, Function_64(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_91(&(Global_43791[iScriptParam_0]), 131072))
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
	Function_10(&uLocal_3, &uLocal_551);
	Function_8();
	Function_4(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_81(64);
	Function_90(&(Global_43791[iScriptParam_0]), 32);
	Function_90(&(Global_43791[iScriptParam_0]), 64);
	Function_90(&(Global_43791[iScriptParam_0]), 512);
	Function_90(&(Global_43791[iScriptParam_0]), 16);
	Function_90(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_77(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2E6 / 742
{
	SET_DUST_LEVEL(1);
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_39874[03]));
	return;
}

void Function_2(vector3 vParam0) //Position: 0x30A / 778
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_3(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_3(var uParam0) //Position: 0x33F / 831
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_4(int iParam0) //Position: 0x38E / 910
{
	int iVar0;
	
	if (!Function_7(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_5(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0) //Position: 0x3C4 / 964
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x3E6 / 998
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x3FC / 1020
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x412 / 1042
{
	Function_9();
	return;
}

void Function_9() //Position: 0x41B / 1051
{
	RELEASE_LAYOUT_REF(&iLocal_453);
	return;
}

void Function_10(var uParam0, vector3[] vParam1) //Position: 0x428 / 1064
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_16(&(vParam1[iVar03]), 4);
		}
		if (Function_17(&(vParam1[iVar03]), 8))
		{
			Function_11(0, 0, 30);
			Function_16(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_11(bool bParam0, int iParam1, int iParam2) //Position: 0x485 / 1157
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
		Function_12(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_12(bool bParam0, bool bParam1, bool bParam2) //Position: 0x56F / 1391
{
	int iVar0;
	
	Function_15(bParam0);
	Function_14(&bParam1);
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
	Function_13();
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

void Function_13() //Position: 0x6EE / 1774
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_14(int iParam0) //Position: 0x6FA / 1786
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

void Function_15(int iParam0) //Position: 0x744 / 1860
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

void Function_16(struct<17> Param0) //Position: 0x78A / 1930
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_17(struct<17> Param0) //Position: 0x7A7 / 1959
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_18() //Position: 0x7C5 / 1989
{
	Function_19();
	return;
}

void Function_19() //Position: 0x7CE / 1998
{
	Function_20(&iLocal_9 + 8);
	RELEASE_LAYOUT_REF(&iLocal_9);
	return;
}

void Function_20(int iParam0) //Position: 0x7E1 / 2017
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_21(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_21(struct<2>[] Param0, int iParam1) //Position: 0x809 / 2057
{
	if (Function_23(&(Param0[iParam12]), 4))
	{
		if (Function_23(&(Param0[iParam12]), 1))
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
			Function_22(&(Param0[iParam12]), 1);
			Function_22(&(Param0[iParam12]), 2);
			Function_22(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_22(struct<13> Param0) //Position: 0x954 / 2388
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_23(struct<13> Param0) //Position: 0x971 / 2417
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_24() //Position: 0x98F / 2447
{
	Function_25();
	return;
}

void Function_25() //Position: 0x998 / 2456
{
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_26(vector3 vParam0) //Position: 0x9A4 / 2468
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_63(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_27(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_27(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xA2E / 2606
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_62(&vParam0))
	{
		return 0;
	}
	Function_90(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_17(&vParam0, 2))
					{
						if (!Function_17(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_60(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_59(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (Function_17(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_11(0, 0, 0);
						}
						else
						{
							Function_11(0, 0, 30);
						}
						Function_16(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_17(&vParam0, 2))
					{
						if (!Function_17(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_59(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (Function_17(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_16(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_58(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_57(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_17(&vParam0, 2))
					{
						if (!Function_17(&vParam0, 16))
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
								Function_59(&vParam0, 16);
								Function_49(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (Function_17(&vParam0, 16))
					{
						Function_16(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_17(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_17(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_59(&vParam0, 2);
			}
			else
			{
				Function_16(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_7(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_91(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_17(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_48(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_59(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_47(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_28(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_28(int iParam0) //Position: 0xE86 / 3718
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_91(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_108(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_33(473, 1, 0, 0);
		iVar0 = Function_32(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_33(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_33(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_33(476, 1, 0, 0);
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
		Function_31(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_31(7, 30);
	}
	if (Function_30(473) <= Function_29(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_29(int iParam0) //Position: 0xF77 / 3959
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_30(int iParam0) //Position: 0xFB4 / 4020
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_31(int iParam0, int iParam1) //Position: 0xFED / 4077
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

var Function_32(int iParam0) //Position: 0x1057 / 4183
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

int Function_33(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x10AF / 4271
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
	Function_46(iParam0, TO_FLOAT(bParam1), 1);
	Function_45(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_35(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_34(iParam0);
	return 1;
}

void Function_34(bool bParam0) //Position: 0x12D7 / 4823
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

void Function_35(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x1375 / 4981
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_29(390))), 32);
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
						Function_43(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_40(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_38(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_37(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_36(), &Var9);
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

var Function_36() //Position: 0x19B3 / 6579
{
	int iVar0;
	
	return &iVar0;
}

var Function_37(int iParam0) //Position: 0x19BC / 6588
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_38(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x19CD / 6605
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_39(char* cParam0) //Position: 0x1AC4 / 6852
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_40(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1ADF / 6879
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_42(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_41(Function_42(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_41(int iParam0, int iParam1) //Position: 0x1B46 / 6982
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_42(int iParam0, bool bParam1) //Position: 0x1B58 / 7000
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_43(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1B6A / 7018
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
	if (((Function_44(iParam0) != 19 || Function_44(iParam0) != 17) || Function_44(iParam0) != 10) || Function_44(iParam0) != 9)
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

int Function_44(int iParam0) //Position: 0x1C9E / 7326
{
	return Global_55480[iParam016].f_96;
}

void Function_45(int iParam0) //Position: 0x1CAD / 7341
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

int Function_46(int iParam0, float fParam1, bool bParam2) //Position: 0x1E47 / 7751
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

void Function_47(var uParam0, int iParam1) //Position: 0x208B / 8331
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_48(int iParam0, var uParam1, int iParam2) //Position: 0x2098 / 8344
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_49(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x20C2 / 8386
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_56(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_55(iParam1))
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
	if (!Function_52(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_36(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, true);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_50();
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

void Function_50() //Position: 0x2375 / 9077
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_51(&uVar0, &uVar1);
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

void Function_51(var uParam0, int iParam1) //Position: 0x23E8 / 9192
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

bool Function_52(bool bParam0) //Position: 0x241E / 9246
{
	if (Function_57(256))
	{
		return 0;
	}
	if (Function_57(262144))
	{
		return 0;
	}
	if (Function_54())
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
	if (bParam0 && Function_53(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_57(2048))
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

int Function_53(int iParam0) //Position: 0x2494 / 9364
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_54() //Position: 0x24A5 / 9381
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

bool Function_55(int iParam0) //Position: 0x24BE / 9406
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_56(int iParam0) //Position: 0x24D4 / 9428
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_57(int iParam0) //Position: 0x24E9 / 9449
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_58(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2507 / 9479
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

void Function_59(struct<17> Param0) //Position: 0x25B6 / 9654
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_60(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x25C9 / 9673
{
	int iVar0;
	bool bVar1;
	
	Function_15(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_61(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_12(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_61(int iParam0, int iParam1) //Position: 0x2643 / 9795
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_15(iParam0);
	Function_14(&uVar0);
	PRINTNL();
	Function_12(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_62(int iParam0) //Position: 0x266C / 9836
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

bool Function_63(int iParam0) //Position: 0x268C / 9868
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_64() //Position: 0x26A8 / 9896
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_65(int iParam0) //Position: 0x26BD / 9917
{
	iParam0 = iParam0;
	Function_66(&(Global_39874[03]), "SPG", 14, &iLocal_7, 0);
	return;
}

void Function_66(vector3 vParam0) //Position: 0x26DC / 9948
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
	{
		LOG_ERROR("invalid layout ref in UPDATE_GRAVEYARD()");
		return;
	}
	if (vParam0.z)
	{
		if (iParam4 == 1)
		{
			if (VDIST(StackVal, Global_54078, Vector(-1804,95f, 23,088f, 2810,314f)) < 250.0f)
			{
				Function_2(&vParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 250.0f)
			{
				Function_2(&vParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_75(&vParam0, 63))
			{
				if (Function_74(76) || Function_73(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_72(&cParam1, &vParam0, 3, &uParam3);
						Function_69(&vParam0, 63);
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
		if (VDIST(StackVal, Global_54078, Vector(-1804,95f, 23,088f, 2810,314f)) < 200.0f)
		{
			return;
		}
		if (Global_39874[13] == 0)
		{
			Function_68();
		}
	}
	else if (iParam4 == 3)
	{
		if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 200.0f)
		{
			return;
		}
		if (Global_39874[33] == 0)
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
		if (!Function_75(&vParam0, 63))
		{
			if (Function_74(76) || Function_73(76))
			{
				Function_72(&cParam1, &vParam0, 3, &uParam3);
				Function_69(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_72(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_67() //Position: 0x28ED / 10477
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_69(&(Global_39874[33]), iVar0);
		iVar0++;
	}
	return;
}

void Function_68() //Position: 0x2934 / 10548
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_69(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x2986 / 10630
{
	if (iParam1 <= 32)
	{
		Function_70(&iParam0, Function_71(iParam1));
	}
	else
	{
		Function_70(&iParam0 + 4, Function_71((iParam1 - 32)));
	}
	return;
}

void Function_70(var uParam0, int iParam1) //Position: 0x29B1 / 10673
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_71(bool bParam0) //Position: 0x29C2 / 10690
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_72(char* cParam0) //Position: 0x29CE / 10702
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(&iParam1 + 16))
	{
		(&iParam1 + 16) = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", &uParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, &cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_75(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_36(), &cVar1, bParam2, bVar5, 4278716679);
			if (IS_OBJECT_VALID(&uVar0))
			{
				ADD_OBJECT_TO_OBJECTSET(&uVar0, &iParam1 + 16);
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

int Function_73(int iParam0) //Position: 0x2A7B / 10875
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_74(int iParam0) //Position: 0x2A90 / 10896
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_75(struct<5> Param0) //Position: 0x2AA5 / 10917
{
	if (bParam1 <= 32)
	{
		return Function_76(Param0, Function_71(bParam1));
	}
	return Function_76(StackVal, Function_71((bParam1 - 32)));
}

bool Function_76(bool bParam0, int iParam1) //Position: 0x2AD2 / 10962
{
	return (bParam0 && iParam1) == 0;
}

void Function_77(char* cParam0) //Position: 0x2ADF / 10975
{
	if (!Function_63(128))
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

void Function_78(int iParam0) //Position: 0x2B1F / 11039
{
	if (!Function_7(iParam0))
	{
		return;
	}
	if (!StackVal != 2)
	{
		return;
	}
	if (((iParam0 != Global_46736[0] || iParam0 != Global_46736[1]) || iParam0 != Global_46736[2]) || iParam0 != Global_46736[3])
	{
		Global_43787 = 0;
	}
	else if ((iParam0 != Global_46746[0] || iParam0 != Global_46746[2]) || iParam0 != Global_46746[1])
	{
		Global_43787 = 1;
	}
	else if (iParam0 != Global_46754[1] || iParam0 != Global_46754[0])
	{
		Global_43787 = 2;
	}
	return;
}

void Function_79(int iParam0, bool bParam1) //Position: 0x2BB1 / 11185
{
	char[] cVar0[4];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("New region layout is not valid.");
		return;
	}
	Global_46715 = &iParam0;
	Global_40000.f_12 = bParam1;
	Global_43789 = bParam1;
	if (IS_OBJECT_VALID(&Global_44085[bParam19] + 56))
	{
		if (!IS_WORLD_SECTOR_LOADED(&Global_44085[bParam19] + 56))
		{
			LOG_ERROR("We expect gRegionSector to be loaded if its valid");
		}
		MARK_REGION_READY(&Global_44085[bParam19] + 56);
	}
	if (StackVal == 2)
	{
		strcpy(&cVar0, "", 4);
		Function_47(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

var Function_80() //Position: 0x2CA1 / 11425
{
	return &iLocal_7;
}

void Function_81(int iParam0) //Position: 0x2CAA / 11434
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_82(bool bParam0) //Position: 0x2CBD / 11453
{
	Function_83(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_87(&Global_46866));
	return;
}

void Function_83(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x2CE1 / 11489
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
	{
		LOG_ERROR("Invalid Layout passed to traffic system");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam4))
	{
		LOG_ERROR("Invalid Region Vol passed to traffic system");
		return;
	}
	Global_43580.f_4 = iParam2;
	Global_43580.f_12 = uParam0;
	*(&Global_43580 + 24) = &uParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = uParam1;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_43580 + 24);
	if (IS_ITERATOR_VALID(&uVar0))
	{
		ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
		ITERATE_ON_PARTIAL_NAME(&uVar0, "region");
		if (GET_NUM_ITERATOR_MATCHES(&uVar0) >= 0)
		{
			*(&Global_43580 + 40) = GET_VOLUME_FROM_OBJECT(START_OBJECT_ITERATOR(&uVar0));
		}
		DESTROY_ITERATOR(&uVar0);
	}
	if (iParam2 != 2 || iParam2 != 1)
	{
		Function_86();
	}
	if (&bParam5)
	{
		Function_84(1048576);
	}
}

void Function_84(int iParam0) //Position: 0x2DEF / 11759
{
	Function_85(&Global_43580, iParam0);
	return;
}

void Function_85(var uParam0, var uParam1) //Position: 0x2DFD / 11773
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_86() //Position: 0x2E1C / 11804
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_84(16384);
	}
	return;
}

bool Function_87(int[] iParam0) //Position: 0x2E38 / 11832
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_7(iParam0[iVar0]))
		{
			if (!StackVal != 6)
			{
				if (Global_43791[iParam0[iVar0]] & 5 >= 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_88(int iParam0) //Position: 0x2E89 / 11913
{
	if (!Function_7(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_46736[0])
	{
		return Function_87(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_87(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_87(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_87(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_87(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_87(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_87(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_87(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_87(&Global_46914);
	}
	return 0;
}

void Function_89(int iParam0) //Position: 0x2F66 / 12134
{
	iParam0 = iParam0;
	return;
}

void Function_90(var uParam0, int iParam1) //Position: 0x2F70 / 12144
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_91(int iParam0, int iParam1) //Position: 0x2F8A / 12170
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_92() //Position: 0x2FA7 / 12199
{
	return;
}

void Function_93(var uParam0) //Position: 0x2FAD / 12205
{
	uParam0 = uParam0;
	return;
}

void Function_94() //Position: 0x2FB7 / 12215
{
	Function_95(Global_46746[2]);
	Global_43787 = 1;
	return;
}

void Function_95(int iParam0) //Position: 0x2FCA / 12234
{
	int iVar0;
	
	iVar0 = Function_96(111, 111, 5);
	if (iParam0 != Global_46736[0] && !Function_76(Global_21684[iVar07].f_20, 8388608))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[0]);
	}
	else if (iParam0 != Global_46736[2] && !Function_76(Global_21684[iVar07].f_20, 4194304))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[2]);
	}
	else if (iParam0 != Global_46736[1] && !Function_76(Global_21684[iVar07].f_20, 0x1000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[1]);
	}
	else if (iParam0 != Global_46736[3] && !Function_76(Global_21684[iVar07].f_20, 0x2000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[3]);
	}
	else if (iParam0 != Global_46746[2] && !Function_76(Global_21684[iVar07].f_20, 0x40000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[2]);
	}
	else if (iParam0 != Global_46746[0] && !Function_76(Global_21684[iVar07].f_20, 0x10000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[0]);
	}
	else if (iParam0 != Global_46746[1] && !Function_76(Global_21684[iVar07].f_20, 0x20000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[1]);
	}
	else if (iParam0 != Global_46754[1] && !Function_76(Global_21684[iVar07].f_20, 0x4000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[1]);
	}
	else if (iParam0 != Global_46754[0] && !Function_76(Global_21684[iVar07].f_20, 0x8000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[0]);
	}
	return;
}

int Function_96(bool bParam0, bool bParam1, bool bParam2) //Position: 0x320B / 12811
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_100(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_97(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_97(bParam0, bParam1, bParam2, 4294967295);
}

int Function_97(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3269 / 12905
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
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_98(uVar0);
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

var Function_98(int iParam0) //Position: 0x33CD / 13261
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

bool Function_99(int iParam0) //Position: 0x340B / 13323
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x3420 / 13344
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_101() //Position: 0x3440 / 13376
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_102(bool bParam0) //Position: 0x3456 / 13398
{
	Function_103(&uLocal_3, &uLocal_551, 2, &Global_44085[bParam09] + 8, 4294967295, 0);
	return;
}

void Function_103(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x3471 / 13425
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
	uParam4 = uParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &uParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_104(struct<5> Param0) //Position: 0x355E / 13662
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_105() //Position: 0x356F / 13679
{
	return Function_106();
}

int Function_106() //Position: 0x3578 / 13688
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = &uVar0;
	iLocal_453 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_453))
	{
		iLocal_453 = CREATE_LAYOUT("Perdido_layout");
	}
	*(&iLocal_453 + 80) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_453, "prdv_flk_SOUTH_set");
	*(&iLocal_453 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat1", 4,203895E-45f, Vector(-1828,121f, -16,81786f, 4629,818f), Vector(0.0f, 13,94146f, 0.0f), Vector(63,75682f, 72,01299f, 203,9456f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[0]);
	*(&iLocal_453 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat2", 4,203895E-45f, Vector(-1447,001f, -4,178105f, 4618,954f), Vector(0.0f, -28,07365f, 0.0f), Vector(355,9802f, 72,01299f, 89,08501f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[1]);
	*(&iLocal_453 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat3", 4,203895E-45f, Vector(-2557,778f, 36,67545f, 4713,361f), Vector(-3,286861f, 25,58159f, 7,708992f), Vector(135,4665f, 72,01299f, 71,92216f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[2]);
	*(&iLocal_453 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat4", 4,203895E-45f, Vector(-2830,068f, -16,47022f, 4491,745f), Vector(0.0f, 20.0f, 0.0f), Vector(205,0921f, 72,01299f, 230,7468f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[3]);
	*(&iLocal_453 + 8[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat5", 4,203895E-45f, Vector(-3289,058f, 23,21941f, 4541,805f), Vector(0.0f, 20.0f, 0.0f), Vector(241,3856f, 72,01299f, 140,3481f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[4]);
	*(&iLocal_453 + 8[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat6", 4,203895E-45f, Vector(-2462,511f, 23,21941f, 4883,754f), Vector(6,291782f, -14,22287f, -6,360377f), Vector(155,7044f, 145,8797f, 50,74638f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[5]);
	*(&iLocal_453 + 8[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat8", 4,203895E-45f, Vector(-2214,937f, 23,21941f, 4805,725f), Vector(-2,417868f, 51,80917f, -11,85691f), Vector(124,2386f, 145,8797f, 61,15795f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[6]);
	*(&iLocal_453 + 8[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_bobcat7", 4,203895E-45f, Vector(-2335,95f, 23,21941f, 4702,228f), Vector(0.0f, 37,73186f, 0.0f), Vector(124,2386f, 145,8797f, 40,25771f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 80, &iLocal_453 + 8[7]);
	*(&iLocal_453 + 136) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_453, "prdv_flk_CENTER_set");
	*(&iLocal_453 + 88[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_wildHorse1", 4,203895E-45f, Vector(-1223,112f, -45,37247f, 4408,328f), Vector(0.0f, 20.0f, 0.0f), Vector(214,866f, 82,75365f, 204,0539f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 136, &iLocal_453 + 88[0]);
	*(&iLocal_453 + 88[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_wildHorse3", 4,203895E-45f, Vector(-1641,027f, 17,77773f, 4352,699f), Vector(0.0f, 82,46896f, 0.0f), Vector(88,24771f, 82,75365f, 206,5756f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 136, &iLocal_453 + 88[1]);
	*(&iLocal_453 + 88[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_wildHorse5", 4,203895E-45f, Vector(-2127,066f, 29,30035f, 4394,087f), Vector(0.0f, 20.0f, 0.0f), Vector(259,3963f, 82,75365f, 165,8565f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 136, &iLocal_453 + 88[2]);
	*(&iLocal_453 + 88[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_wildHorse6", 4,203895E-45f, Vector(-2491,284f, 41,55529f, 4393,549f), Vector(0.0f, 20.0f, 0.0f), Vector(117,4157f, 59,02151f, 139,5618f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 136, &iLocal_453 + 88[3]);
	*(&iLocal_453 + 88[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prd_wildHorse7", 4,203895E-45f, Vector(-2011,8f, 44,02881f, 4658,308f), Vector(0.0f, 66,39283f, 0.0f), Vector(116,6155f, 32,19167f, 123,9349f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 136, &iLocal_453 + 88[4]);
	*(&iLocal_453 + 208) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_453, "prdv_flk_NORTH_set");
	*(&iLocal_453 + 144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_deer1", 4,203895E-45f, Vector(-3105,978f, 48,22567f, 4183,158f), Vector(0.0f, 20.0f, 0.0f), Vector(539,1265f, 78,47768f, 128,9335f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 208, &iLocal_453 + 144[0]);
	*(&iLocal_453 + 144[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_deer2", 4,203895E-45f, Vector(-2525,599f, 16,45514f, 4150,215f), Vector(0.0f, 20.0f, 0.0f), Vector(140,6065f, 78,47768f, 98,50089f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 208, &iLocal_453 + 144[1]);
	*(&iLocal_453 + 144[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_deer3", 4,203895E-45f, Vector(-2143,044f, 13,05099f, 4098,297f), Vector(0.0f, 20.0f, 0.0f), Vector(250,3469f, 78,47768f, 124,9134f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 208, &iLocal_453 + 144[2]);
	*(&iLocal_453 + 144[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_deer4", 4,203895E-45f, Vector(-1655,763f, -38,8814f, 3963,979f), Vector(0.0f, 7,033805f, 0.0f), Vector(250,3469f, 78,47768f, 168,6821f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 208, &iLocal_453 + 144[3]);
	*(&iLocal_453 + 144[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_deer5", 4,203895E-45f, Vector(-1424,871f, 15,49219f, 4164,382f), Vector(0.0f, 20.0f, 0.0f), Vector(164,2588f, 78,47768f, 100,6236f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 208, &iLocal_453 + 144[4]);
	*(&iLocal_453 + 144[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_deer6", 4,203895E-45f, Vector(-1972,307f, 65,01617f, 3860,816f), Vector(0.0f, 20.0f, 0.0f), Vector(103,358f, 78,47768f, 99,85926f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 208, &iLocal_453 + 144[5]);
	*(&iLocal_453 + 144[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_deer8", 4,203895E-45f, Vector(-1154,453f, 18,53422f, 4073,343f), Vector(0.0f, 20.0f, 0.0f), Vector(118,9803f, 45,99867f, 116,0368f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 208, &iLocal_453 + 144[6]);
	*(&iLocal_453 + 288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_453, "prdv_flk_BIRD_set");
	*(&iLocal_453 + 216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird1", 4,203895E-45f, Vector(-3120f, 58,08666f, 4252.0f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[0]);
	*(&iLocal_453 + 216[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird2", 4,203895E-45f, Vector(-3155,767f, 50,0108f, 4769,81f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[1]);
	*(&iLocal_453 + 216[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird3", 4,203895E-45f, Vector(-2605,138f, 84,00835f, 4508,109f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[2]);
	*(&iLocal_453 + 216[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird4", 4,203895E-45f, Vector(-2392f, 22,26755f, 4161,506f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[3]);
	*(&iLocal_453 + 216[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird5", 4,203895E-45f, Vector(-2228,666f, 37,32635f, 4886,939f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[4]);
	*(&iLocal_453 + 216[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird6", 4,203895E-45f, Vector(-1952,681f, 21,26359f, 4309,989f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[5]);
	*(&iLocal_453 + 216[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird7", 4,203895E-45f, Vector(-1592,513f, 83,95605f, 4740,449f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[6]);
	*(&iLocal_453 + 216[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "nprd_bird8", 4,203895E-45f, Vector(-1466,186f, -40,05158f, 4200,113f), Vector(0.0f, 20.0f, 0.0f), Vector(406,7785f, 80,68261f, 337,0939f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 288, &iLocal_453 + 216[7]);
	*(&iLocal_453 + 344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_453, "prdv_aquaticWildlife_set");
	*(&iLocal_453 + 296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_aquaticWildlife8", 2,802597E-45f, Vector(-1700.0f, -3,94879f, 3745,079f), Vector(0.0f, 0.0f, 0.0f), Vector(437,5048f, 41,69571f, 102,6289f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 344, &iLocal_453 + 296[0]);
	*(&iLocal_453 + 296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_aquaticWildlife7", 2,802597E-45f, Vector(-2092,369f, -8,501405f, 3800,851f), Vector(0.0f, 18,87418f, 0.0f), Vector(416,9886f, 41,69571f, 132,3871f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 344, &iLocal_453 + 296[1]);
	*(&iLocal_453 + 296[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_aquaticWildlife6", 2,802597E-45f, Vector(-2430,955f, -9,925787f, 3946,889f), Vector(0.0f, -0,2951764f, 0.0f), Vector(440,3749f, 41,69571f, 216,6301f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 344, &iLocal_453 + 296[2]);
	*(&iLocal_453 + 296[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_aquaticWildlife5", 2,802597E-45f, Vector(-2987,053f, -12,32654f, 3982,231f), Vector(0.0f, 8,733288f, 0.0f), Vector(759,4329f, 41,69571f, 233,799f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 344, &iLocal_453 + 296[3]);
	*(&iLocal_453 + 296[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_aquaticWildlife4", 2,802597E-45f, Vector(-3456f, -8,810408f, 4171,868f), Vector(0.0f, 31,01138f, 0.0f), Vector(268,922f, 41,69571f, 137,7348f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 344, &iLocal_453 + 296[4]);
	*(&iLocal_453 + 376) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_453, "prdv_chickens_set");
	*(&iLocal_453 + 352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_chickens1", 4,203895E-45f, Vector(-2145,031f, 16,41659f, 4951,188f), Vector(0.0f, -4,057003f, 0.0f), Vector(17,94717f, 8,588286f, 10,40963f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 376, &iLocal_453 + 352[0]);
	*(&iLocal_453 + 352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_chickens2", 4,203895E-45f, Vector(-2156,94f, 18,07939f, 4991,802f), Vector(0.0f, -6,529206f, 0.0f), Vector(33,9479f, 8,922362f, 13,94726f));
	ADD_TO_VOLUME_SET(&iLocal_453 + 376, &iLocal_453 + 352[1]);
	*(&iLocal_453 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_453, "prdv_bhstop", 2,802597E-45f, Vector(-2670,965f, 32,97532f, 4253,5f), Vector(0.0f, -10,23049f, 0.0f), Vector(11,19157f, 7,334846f, 19,66724f));
	return 1;
}

void Function_107(int iParam0, int iParam1) //Position: 0x4365 / 17253
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

void Function_108(var uParam0, int iParam1) //Position: 0x43AF / 17327
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_109() //Position: 0x43C0 / 17344
{
	return;
}

bool Function_110() //Position: 0x43C6 / 17350
{
	return Function_111();
}

int Function_111() //Position: 0x43CF / 17359
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = &uVar0;
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sit_barrel", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_peeing_b_any", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/leaning_stand", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/spittoon", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_forward", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/mex_chair_sit", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/mex_sitground", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/mex_stool_sit", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_worried_n_any", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_117(&iLocal_9 + 8, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_4", 1, 0);
	if (!Function_112(&iLocal_9 + 8))
	{
		return 0;
	}
	iLocal_9 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_9))
	{
		iLocal_9 = CREATE_LAYOUT("Perdido_layout");
	}
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint", Vector(-2234,103f, 23,09f, 4450,451f), Vector(0.0f, 327,653f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint1", Vector(-2808,015f, 16,467f, 3991,746f), Vector(0.0f, 132,438f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint3", Vector(-2719,469f, 56,13536f, 4626,306f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint4", Vector(-2401,135f, 9,357473f, 3965,135f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint5", Vector(-1197,553f, 19,07451f, 4961,553f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint6", Vector(-1446,914f, 19,69032f, 4912.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint7", Vector(-1755,834f, 28,35469f, 4824.0f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint8", Vector(-2136,56f, 19,42f, 5001,652f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint9", Vector(-1146,611f, 27,98853f, 4818,058f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint910", Vector(-1341,777f, 13,05099f, 4301,776f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint11", Vector(-1352f, 13,05099f, 4281,627f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint12", Vector(-1370,036f, 13,05099f, 4317,523f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint13", Vector(-1378,815f, 13,05099f, 4295,221f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 720) = Vector(-3385,052f, 55,49248f, 4743,046f);
	*(&iLocal_9 + 720 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_9 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint15", Vector(-3385,052f, 55,49248f, 4743,046f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 752) = Vector(-2143,072f, 19,566f, 5003,717f);
	*(&iLocal_9 + 752 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_9 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhtreas", Vector(-2143,072f, 19,566f, 5003,717f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 784) = Vector(-2169,115f, 19,743f, 5013,526f);
	*(&iLocal_9 + 784 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_9 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhtreas1", Vector(-2169,115f, 19,743f, 5013,526f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 816) = Vector(-2151,229f, 18,553f, 4973,971f);
	*(&iLocal_9 + 816 + 12) = Vector(0.0f, 180.0f, 0.0f);
	*(&iLocal_9 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhtreas2", Vector(-2151,229f, 18,553f, 4973,971f), Vector(0.0f, 180.0f, 0.0f));
	*(&iLocal_9 + 848) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint911", Vector(-1201,65f, 19,075f, 4963,207f), Vector(0.0f, 240,685f, 0.0f));
	*(&iLocal_9 + 856) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint912", Vector(-1198,822f, 19,075f, 4956,911f), Vector(0.0f, 190,323f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint913", Vector(-2232,852f, 23,085f, 4457,229f), Vector(0.0f, 87,258f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint914", Vector(-2239,331f, 23,086f, 4456,599f), Vector(0.0f, 135,904f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhtreas3", Vector(-2228,931f, 23,09f, 4456,119f), Vector(0.0f, 210,21f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "prdf_bhint915", Vector(-2733,588f, 55,062f, 4606,517f), Vector(0.0f, 99,203f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sit_cleanrifle", "sit_cleanrifle", Vector(-1442,006f, 19,69032f, 4912,689f), Vector(0.0f, 47,24794f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-1362,953f, 13,07964f, 4300,644f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-1359,716f, 13,05099f, 4298,842f), Vector(0.0f, -272,5584f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_sit_ground_smoke3", "sit_ground_smoke", Vector(-1364,03f, 13,04671f, 4298,394f), Vector(0.0f, -112,4335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-1362,544f, 13,05099f, 4296,964f), Vector(0.0f, -180,1093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay13", "horse_stay", Vector(-1394,776f, 12,977f, 4308,042f), Vector(0.0f, 74,33443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay12", "horse_stay", Vector(-1386,643f, 13,051f, 4290,629f), Vector(0.0f, 41,19416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay11", "horse_stay", Vector(-1396,363f, 13,05099f, 4300,878f), Vector(0.0f, 48,00632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay10", "horse_stay", Vector(-1400,339f, 11,495f, 4292,966f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_Pee3", "Pee", Vector(-1385,775f, 13,05099f, 4298,206f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1378,63f, 13,056f, 4306,34f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", Vector(-1372,292f, 13,05099f, 4291,89f), Vector(0.0f, -28,9995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1374,563f, 13,05099f, 4297,688f), Vector(0.0f, 9,780541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_look_out_window_R", "look_out_window_R", Vector(-1380,752f, 13,04853f, 4297,446f), Vector(0.0f, -41,49537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay21", "horse_stay", Vector(-1365,99f, 13,051f, 4324,597f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay20", "horse_stay", Vector(-1384,05f, 12,988f, 4324,893f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay19", "horse_stay", Vector(-1388,964f, 12,966f, 4324,276f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay18", "horse_stay", Vector(-1364,119f, 13,051f, 4332,481f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", Vector(-1354,34f, 13,05099f, 4309,859f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1361,21f, 13,05939f, 4316,554f), Vector(0.0f, 192,786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1368,854f, 13,05759f, 4314,05f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_sit_ground_smoke2", "sit_ground_smoke", Vector(-1371,078f, 13,05098f, 4315,158f), Vector(0.0f, 82,18061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_rand_idle_stand6", "rand_idle_stand", Vector(-1381,432f, 13,037f, 4321,681f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay15", "horse_stay", Vector(-1331,086f, 13,691f, 4317,092f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay14", "horse_stay", Vector(-1335,886f, 13,273f, 4317,106f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay17", "horse_stay", Vector(-1329,264f, 13,051f, 4300,218f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_horse_stay16", "horse_stay", Vector(-1327,329f, 13,051f, 4303,468f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", Vector(-1347,543f, 13,051f, 4305,105f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_rand_idle_stand4", "rand_idle_stand", Vector(-1334,242f, 13,051f, 4304,613f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_rand_idle_stand5", "rand_idle_stand", Vector(-1336,62f, 13,051f, 4294,1f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_rand_idle_stand3", "rand_idle_stand", Vector(-1353,39f, 13,051f, 4312,579f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_sit_ground_smoke4", "sit_ground_smoke", Vector(-1343,849f, 13,056f, 4296,042f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_Pee4", "Pee", Vector(-1352,655f, 13,051f, 4301,614f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_rand_idle_stand", "rand_idle_stand", Vector(-1346,009f, 13,056f, 4294,357f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", Vector(-1346,468f, 13,05098f, 4307,142f), Vector(0.0f, 118,1131f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_horse_stay10c", "horse_stay", Vector(-1361,381f, 13,103f, 4268,063f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_horse_stay9", "horse_stay", Vector(-1344,416f, 13,051f, 4267,783f), Vector(0.0f, -161,8634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_horse_stay8", "horse_stay", Vector(-1361,88f, 13,051f, 4274,834f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_horse_stay", "horse_stay", Vector(-1352,36f, 13,051f, 4270,885f), Vector(0.0f, 212,416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_sit_ground_smoke", "sit_ground_smoke", Vector(-1350,854f, 13,051f, 4272,156f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_smoking_stand2", "smoking_stand", Vector(-1349,743f, 13,05099f, 4283,362f), Vector(0.0f, -55,15614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_Pee2", "Pee", Vector(-1356,144f, 13,05099f, 4286,991f), Vector(0.0f, -151,8606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_rand_idle_stand2", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Sep_Pee", "Pee", Vector(-1360,661f, 13,107f, 4286,437f), Vector(0.0f, 152,3031f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_smoking_stand", "smoking_stand", Vector(-1358,714f, 13,051f, 4282,462f), Vector(0.0f, -53,74414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_rand_idle_stand1", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", Vector(-1343,447f, 13,056f, 4286,479f), Vector(0.0f, -35,46272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", Vector(-1339,343f, 13,051f, 4267,934f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", Vector(-1324,474f, 13,051f, 4303,514f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", Vector(-1372,628f, 13,05f, 4335,497f), Vector(0.0f, 14,92106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", Vector(-1408,984f, 14,318f, 4305,296f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_look_out_window_L1", "look_out_window_L", Vector(-2150,377f, 18,76063f, 4969,059f), Vector(0.0f, -26,47319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sleeping_scripted1", "sleeping_scripted", Vector(-2144,55f, 18,6851f, 4975,894f), Vector(0.0f, -88,98843f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sleeping_scripted", "sleeping_scripted", Vector(-2150,153f, 18,88321f, 4972,78f), Vector(0.0f, -88,98843f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_lean_table", "lean_table", Vector(-2147,479f, 18,65697f, 4971,42f), Vector(0.0f, 167,0051f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-2145,568f, 18,68168f, 4966,235f), Vector(0.0f, -2,904451f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_look_out_window_L", "look_out_window_L", Vector(-2147,026f, 18,68168f, 4966,039f), Vector(0.0f, 11,03522f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_RandIdleNearWall1", "Rand_Idle_NearWall", Vector(-2144,973f, 18,68168f, 4967,628f), Vector(0.0f, -0,2829188f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sit_barrel1", "sit_barrel", Vector(-2148,418f, 18,58588f, 4977,662f), Vector(0.0f, 304,4866f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_rand_idle_stand4", "rand_idle_stand", Vector(-2183,856f, 21,39841f, 4981,333f), Vector(0.0f, -60,1594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_peeing3", "stand_peeing_b_any", Vector(-2107,46f, 21,99772f, 5025,458f), Vector(0.0f, -52,97831f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_peeing2", "stand_peeing_b_any", Vector(-2121,297f, 20,69375f, 4956,572f), Vector(0.0f, -55,82038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sit_ground_smoke3", "sit_ground_smoke", Vector(-2109,987f, 26,07461f, 4977,125f), Vector(0.0f, 54,48457f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_rand_idle_stand3", "rand_idle_stand", Vector(-2121,831f, 20,61072f, 4955,092f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_rand_idle_stand2", "rand_idle_stand", Vector(-2163,704f, 18,88586f, 4949,102f), Vector(0.0f, -19,02433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_rand_idle_stand1", "rand_idle_stand", Vector(-2147,941f, 18,0743f, 4985,551f), Vector(0.0f, -26,28773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_rand_idle_stand", "rand_idle_stand", Vector(-2149,982f, 18,14022f, 4983,896f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sit_harmonica2", "sit_ground_play_harmonica", Vector(-2155,802f, 19,9801f, 5017,955f), Vector(0.0f, -17,66678f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sit_ground_smoke2", "sit_ground_smoke", Vector(-2168,007f, 20,96798f, 5023,034f), Vector(0.0f, -116,3746f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_smoking_stand2", "smoking_stand", Vector(-2168.0f, 20,26305f, 5016.0f), Vector(0.0f, -38,86214f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_9 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_yelling_mid", "stand_yelling_mid", Vector(-2139,542f, 25,13448f, 5021,14f), Vector(0.0f, 15,77838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_9 + 864), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_guntricks3", "stand_guntricks_e_any", Vector(-2175,003f, 19,79538f, 4967,382f), Vector(0.0f, -97,18321f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay14", "horse_stay", Vector(-1169,324f, 25,09804f, 4848,183f), Vector(0.0f, -51,58591f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sit_ground_smoke1", "sit_ground_smoke", Vector(-1146,617f, 27,98853f, 4816,168f), Vector(0.0f, -227,0327f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_guntricks1", "stand_guntricks_e_any", Vector(-1149,78f, 28,08622f, 4824,229f), Vector(0.0f, 109,0677f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-1147,647f, 28,1014f, 4824,906f), Vector(0.0f, -939,9426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay13", "horse_stay", Vector(-1154,639f, 25,45039f, 4840,386f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay12", "horse_stay", Vector(-1158,92f, 25,95507f, 4832,619f), Vector(0.0f, -359,8061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay11", "horse_stay", Vector(-1170,505f, 25,098f, 4845,793f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Pee", "Pee", Vector(-1166,162f, 25,4834f, 4827,507f), Vector(0.0f, 38,67871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay10", "horse_stay", Vector(-1153,202f, 25,77849f, 4837,963f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_rand_idle_stand2", "rand_idle_stand", Vector(-1151,732f, 26,68782f, 4826,975f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sit_ground_smoke", "sit_ground_smoke", Vector(-1147,908f, 27,98853f, 4815,805f), Vector(0.0f, -169,97f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_rand_idle_stand1", "rand_idle_stand", Vector(-1155,885f, 26,11555f, 4831,447f), Vector(0.0f, 163,3344f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_lookdistance7", "stand_lookdistance_w_any", Vector(-1165,903f, 26,199f, 4816,392f), Vector(0.0f, 11,74429f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_lookdistance6", "stand_lookdistance_w_any", Vector(-1142,304f, 27,06421f, 4829,555f), Vector(0.0f, -140,6723f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1153,553f, 27,915f, 4812,71f), Vector(0.0f, 8,464398f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1138,232f, 27,92258f, 4821,114f), Vector(0.0f, -95,10341f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1153,667f, 25,19662f, 4842,685f), Vector(0.0f, -229,6765f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay9", "horse_stay", Vector(-1158,446f, 26,204f, 4827,642f), Vector(0.0f, -91,62663f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay8", "horse_stay", Vector(-1140,124f, 28,109f, 4817,715f), Vector(0.0f, 91,29439f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_horse_stay", "horse_stay", Vector(-1161,263f, 25,92668f, 4830,808f), Vector(0.0f, -378,4707f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_yawning", "stand_yawning_n_any", Vector(-1141,497f, 27,527f, 4823,505f), Vector(0.0f, 135,6908f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_guntricks", "stand_guntricks_e_any", Vector(-1141,31f, 28,07663f, 4816,137f), Vector(0.0f, 109,0677f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_look_out_window_L", "look_out_window_L", Vector(-1149,772f, 27,989f, 4825,187f), Vector(0.0f, 52,4463f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1144,439f, 28,16429f, 4820,793f), Vector(0.0f, 52,06534f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_rand_idle_stand", "rand_idle_stand", Vector(-1148,397f, 28,083f, 4824,674f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_sit_docks", "nsit_docks", Vector(-1152,421f, 28,09809f, 4823,037f), Vector(0.0f, 138,8232f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1154,668f, 26,40717f, 4825,65f), Vector(0.0f, 180,2952f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1143,384f, 28,077f, 4812,623f), Vector(0.0f, -31,23636f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ran_lookdistance_binocs", "look_distance_binocs", Vector(-1158,382f, 27,096f, 4811,459f), Vector(0.0f, 15,42521f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_guntricks2", "stand_guntricks_e_any", Vector(-2112.0f, 24,78965f, 4984.0f), Vector(0.0f, 24,5157f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_leaning_stand", "leaning_stand", Vector(-2162,551f, 18,11316f, 4962,492f), Vector(0.0f, 169,6326f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_pocketwatch", "stand_pocketwatch_e_any", Vector(-2142,839f, 17,06667f, 4953,641f), Vector(0.0f, 25,44062f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_key_twirl", "stand_key_twirling", Vector(-2142,178f, 18,2133f, 4967,677f), Vector(0.0f, 21,08159f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_guntricks1", "stand_guntricks_e_any", Vector(-2150,272f, 17,06667f, 4955,959f), Vector(0.0f, -10,82537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_spittoon1", "spittoon", Vector(-2141,107f, 17,06667f, 4953,017f), Vector(0.0f, 179,5756f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_spittoon", "spittoon", Vector(-2168.0f, 19,44606f, 4952.0f), Vector(0.0f, 13,08312f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sit_play_harmonica", "sit_ground_play_harmonica", Vector(-2159,549f, 18,08265f, 4964,163f), Vector(0.0f, -38,89871f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_lean_rail_fwd", "lean_rail_forward", Vector(-2146,244f, 18,37671f, 4993,393f), Vector(0.0f, 18,53289f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_mex_chair_sit", "mex_chair_sit", Vector(-2140,079f, 18,07059f, 4987,028f), Vector(0.0f, -183,9298f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_sit_barrel", "sit_barrel", Vector(-2141,56f, 18,06992f, 4987,607f), Vector(0.0f, 238,0275f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_RandIdleNearWall", "Rand_Idle_NearWall", Vector(-2153,9f, 18,54898f, 4973,194f), Vector(0.0f, 84,53752f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_mex_sitGround1", "mex_sitGround", Vector(-2145,565f, 18,1965f, 4963,157f), Vector(0.0f, 169,7416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_mex_sitGround", "mex_sitGround", Vector(-2151,62f, 18,62823f, 4967,137f), Vector(0.0f, 188,22f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_mex_stool_sit", "mex_stool_sit", Vector(-2143,014f, 18,40978f, 4972,36f), Vector(0.0f, 270,9647f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_look_binocs2", "look_distance_binocs", Vector(-2125,51f, 21,88434f, 4976,438f), Vector(0.0f, 20,74133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_worried", "stand_worried_n_any", Vector(-2147,102f, 18,25595f, 4963,947f), Vector(0.0f, 1,017094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_yawning", "stand_yawning_n_any", Vector(-2142,325f, 18,26016f, 4969,863f), Vector(0.0f, -27,79862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_Pee", "Pee", Vector(-2141,521f, 18,26262f, 4989,459f), Vector(0.0f, 274,3436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_horse_stay10", "horse_stay", Vector(-2156,871f, 18,32751f, 4968,682f), Vector(0.0f, -93,17694f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_horse_stay9", "horse_stay", Vector(-2146,335f, 18,07149f, 4989,306f), Vector(0.0f, -34,30241f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_horse_tend", "horse_tend", Vector(-2139,4f, 18,17197f, 4973,717f), Vector(0.0f, -112,1472f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_guntricks", "stand_guntricks_e_any", Vector(-2151,342f, 18,59703f, 4975,875f), Vector(0.0f, -586,383f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2122,872f, 20,44026f, 4952,769f), Vector(0.0f, -2,904451f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_smoking_stand", "smoking_stand", Vector(-2148,095f, 18,58343f, 4978,466f), Vector(0.0f, -255,1086f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_look_binocs", "look_distance_binocs", Vector(-2154,062f, 17,335f, 4951,49f), Vector(0.0f, 6,739808f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ncam_stand", "rand_idle_stand", Vector(-2144,354f, 18,18847f, 4963,678f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2141,606f, 18,32081f, 4973,772f), Vector(0.0f, -20,28081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "cam_horse_staye", "horse_stay", Vector(-2139,533f, 18,28407f, 4971,81f), Vector(0.0f, -244,4586f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_9 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", Vector(-3087,487f, 34,13335f, 4568.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", Vector(-2924,045f, 12,11589f, 4522,543f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", Vector(-3123,044f, 12,85511f, 4296,765f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", Vector(-3147,61f, 13,04445f, 4349,696f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", Vector(-2920,644f, 13,88983f, 4184f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", Vector(-2874,131f, 15,28646f, 4357,87f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", Vector(-2748,333f, 37,12934f, 4416,379f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", Vector(-2818,678f, 32,12549f, 4600f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", Vector(-2604.0f, 29,12662f, 4336f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", Vector(-2784.0f, 32,12549f, 4348f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_rand_idle_stand", "rand_idle_stand", Vector(-2238,265f, 23,082f, 4457,25f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_guntricks3", "stand_guntricks_e_any", Vector(-2246,608f, 23,09f, 4454,54f), Vector(0.0f, 45,55705f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "hen_smoking_stand1", "smoking_stand", Vector(-1748,846f, 29,389f, 4821,137f), Vector(0.0f, -53,74414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "hen_rand_idle_stand5", "rand_idle_stand", Vector(-1742,056f, 29,825f, 4826,535f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_horse_stay11", "horse_stay", Vector(-1758,203f, 32,04f, 4839,499f), Vector(0.0f, 26,17468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "hen_rand_idle_stand4", "rand_idle_stand", Vector(-1760,731f, 29,988f, 4812,287f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "hen_rand_idle_stand3", "rand_idle_stand", Vector(-1759,747f, 30,356f, 4818,834f), Vector(0.0f, 146,4252f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_guntricks2", "stand_guntricks_e_any", Vector(-1761,983f, 31,035f, 4829,209f), Vector(0.0f, -198,7769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "hen_pee1", "Pee", Vector(-1754,625f, 32,599f, 4841,774f), Vector(0.0f, 274,3436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "hen_pee", "Pee", Vector(-1750,039f, 31,213f, 4832,931f), Vector(0.0f, 274,3436f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_lookdistance5", "stand_lookdistance_w_any", Vector(-1767,221f, 29,813f, 4816,635f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_lookdistance4", "stand_lookdistance_w_any", Vector(-1760,551f, 29,471f, 4799,91f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_lookdistance3", "stand_lookdistance_w_any", Vector(-1738,453f, 28,481f, 4815,337f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_lookdistance2", "stand_lookdistance_w_any", Vector(-1735,159f, 31,502f, 4837,971f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1761,964f, 32,427f, 4843,662f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1757,995f, 30,40155f, 4819,907f), Vector(0.0f, -167,475f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_horse_stay10", "horse_stay", Vector(-1756,031f, 30,91866f, 4830,044f), Vector(0.0f, 26,17468f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_horse_stay8", "horse_stay", Vector(-1762,697f, 31,18394f, 4830,312f), Vector(0.0f, 35,7719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_horse_stay", "horse_stay", Vector(-1759,648f, 30,8288f, 4828,202f), Vector(0.0f, 26,65729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_Rand_Ground1", "Rand_Idle_Sit_Ground", Vector(-1753,325f, 29,80431f, 4821,001f), Vector(0.0f, 39,70086f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen__drunk_throwbottle", "stand_drunk_throwbottle", Vector(-1763,918f, 30,20828f, 4818,522f), Vector(0.0f, 92,05388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_guntricks1", "stand_guntricks_e_any", Vector(-1756,531f, 30,36356f, 4819,299f), Vector(0.0f, -198,7769f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_guntricks", "stand_guntricks_e_any", Vector(-1756,578f, 30,61364f, 4824,122f), Vector(0.0f, 23,2416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_campfire_talk", "campfire_talk", Vector(-1758,249f, 30,5826f, 4823,424f), Vector(0.0f, -108,3938f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen__stand", "rand_idle_stand", Vector(-1755,974f, 30,53736f, 4823,08f), Vector(0.0f, -323,2545f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_Sit_Grounde", "Rand_Idle_Sit_Ground", Vector(-1759,385f, 30,48355f, 4821,405f), Vector(0.0f, 268,905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1754,221f, 29,264f, 4806,449f), Vector(0.0f, -101,2015f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Hen_look_binocs", "look_distance_binocs", Vector(-1757,968f, 29,94079f, 4809,994f), Vector(0.0f, -8,110764f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-2266,168f, 22,992f, 4469,771f), Vector(0.0f, -142,5218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_rand_idle_stand2", "rand_idle_stand", Vector(-2748,117f, 46,183f, 4608,924f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_rand_idle_stand1", "rand_idle_stand", Vector(-2738,463f, 52,114f, 4605,324f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_rand_idle_stand5", "rand_idle_stand", Vector(-1202,635f, 19,137f, 4955,752f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_stand_guntricks1", "stand_guntricks_e_any", Vector(-1457,679f, 19,4f, 4899,244f), Vector(0.0f, -42,21369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_smoking_stand1", "smoking_stand", Vector(-1448,115f, 19,663f, 4903,778f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_rand_idle_stand4", "rand_idle_stand", Vector(-1453,147f, 19,691f, 4904,472f), Vector(0.0f, 66,39404f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_rand_idle_stand3", "rand_idle_stand", Vector(-1437,73f, 19,063f, 4916,631f), Vector(0.0f, 66,39404f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag__dnd_rowdydrink2", "stand_dnd_rowdydrink", Vector(-1443,396f, 19,69032f, 4914,826f), Vector(0.0f, 13,5401f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag__dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-1446,205f, 19,69032f, 4909,839f), Vector(0.0f, -134,5815f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1467,928f, 20,55f, 4901,703f), Vector(0.0f, -112,4326f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_stand_guntricks", "stand_guntricks_e_any", Vector(-1446,765f, 19,69032f, 4914,313f), Vector(0.0f, -42,21369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_rand_idle_stand2", "rand_idle_stand", Vector(-1463,796f, 20,541f, 4914,44f), Vector(0.0f, 66,39404f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1456,628f, 19,736f, 4922,165f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_sleeping_scripted", "sleeping_scripted", Vector(-1450,952f, 19,691f, 4913,889f), Vector(0.0f, -86,56843f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1444,607f, 19,69032f, 4912,771f), Vector(0.0f, 1,664795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_rand_idle_stand1", "rand_idle_stand", Vector(-1441,416f, 19,691f, 4911,683f), Vector(0.0f, 76,25448f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_horse_stay9", "horse_stay", Vector(-1469,932f, 20,605f, 4910,774f), Vector(0.0f, 28,4633f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_horse_stay8", "horse_stay", Vector(-1472,083f, 20,605f, 4914,579f), Vector(0.0f, -1,15879f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_horse_stay", "horse_stay", Vector(-1474,744f, 20,605f, 4909,638f), Vector(0.0f, -240,4191f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag__dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-1441,756f, 19,69032f, 4909,068f), Vector(0.0f, -209,2599f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_smoking_stand", "smoking_stand", Vector(-1465,869f, 20,605f, 4903,611f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_rand_idle_stand", "rand_idle_stand", Vector(-1448,869f, 19,69032f, 4910,447f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1442,816f, 19,69032f, 4910,106f), Vector(0.0f, 131,1772f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_lookdistance_binocs1", "look_distance_binocs", Vector(-1404,737f, 19,93f, 4875,994f), Vector(0.0f, -38,38484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_lookdistance_binocs", "look_distance_binocs", Vector(-1480,194f, 29,799f, 4871,489f), Vector(0.0f, -38,38484f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_lookdistance1", "stand_lookdistance_w_any", Vector(-1432,518f, 16,699f, 4868,561f), Vector(0.0f, 4,833208f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "lag_lookdistance", "stand_lookdistance_w_any", Vector(-1463,929f, 21,485f, 4866,299f), Vector(0.0f, 4,833208f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_smoking_stand2", "smoking_stand", Vector(-1204,964f, 19,075f, 4960,957f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_smoking_stand1", "smoking_stand", Vector(-1195,916f, 18,885f, 4967,823f), Vector(0.0f, 261,8007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_rand_idle_stand4", "rand_idle_stand", Vector(-1195,711f, 18,07f, 4971,998f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "stand_guntricks_e_any3", "stand_guntricks_e_any", Vector(-1195,711f, 18,07f, 4971,998f), Vector(0.0f, -127,008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_rand_idle_stand3", "rand_idle_stand", Vector(-1191,375f, 18,68f, 4964,364f), Vector(0.0f, -43,25648f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_look_out_window_R", "look_out_window_R", Vector(-1198,27f, 19,07451f, 4965,246f), Vector(0.0f, -156,2962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1190,268f, 19,075f, 4959,37f), Vector(0.0f, -127,008f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "look_distance_binocs2", "look_distance_binocs", Vector(-1173,602f, 24,305f, 4949,526f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "barg_horse_stay9", "horse_stay", Vector(-1185,661f, 18,157f, 4965,001f), Vector(0.0f, -278,5182f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "barg_horse_stay7", "horse_stay", Vector(-1202,677f, 20,19039f, 4950,121f), Vector(0.0f, -180,3898f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "barg_horse_stay6", "horse_stay", Vector(-1198,855f, 20,15f, 4945,947f), Vector(0.0f, -241,8f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_horse_stay9", "horse_stay", Vector(-1209,177f, 18,47f, 4977,493f), Vector(0.0f, -255,5196f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_horse_stay8", "horse_stay", Vector(-1207,309f, 19,07451f, 4966,914f), Vector(0.0f, 129,8418f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_standrowdydrink", "stand_dnd_rowdydrink", Vector(-1201,334f, 19,177f, 4961,892f), Vector(0.0f, -131,9079f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_stand_guntricks1", "stand_guntricks_e_any", Vector(-1201,784f, 19,07451f, 4963,372f), Vector(0.0f, -460,9612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_stand_guntricks", "stand_guntricks_e_any", Vector(-1195,662f, 18,95542f, 4966,104f), Vector(0.0f, -162,3401f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1200,147f, 19,07451f, 4963,931f), Vector(0.0f, -3,744514f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_smoking_stand", "smoking_stand", Vector(-1198,138f, 19,035f, 4966,952f), Vector(0.0f, 237,8594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-1204,836f, 18,396f, 4999,079f), Vector(0.0f, 155,3814f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_stand_lookdistance", "stand_lookdistance_w_any", Vector(-1168,964f, 22,503f, 4956,782f), Vector(0.0f, -50,58932f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Prim_lookdistance_binocs2", "look_distance_binocs", Vector(-1172,956f, 24,22f, 4950,359f), Vector(0.0f, -108,8531f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "ndiab_Pee1", "Pee", Vector(-2732,317f, 55,88308f, 4602,23f), Vector(0.0f, -78,35882f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2721,312f, 56,135f, 4626,071f), Vector(0.0f, -71,04374f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_stand_drunk_throwbottle", "stand_drunk_throwbottle", Vector(-2717,047f, 56,13536f, 4626,959f), Vector(0.0f, 28,81129f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2394,351f, 9,03528f, 3973,731f), Vector(0.0f, -188,7163f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-2396,917f, 9,035282f, 3975,122f), Vector(0.0f, -97,93723f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_rand_idle_stand1", "rand_idle_stand", Vector(-2423,362f, 8,347816f, 3953,373f), Vector(0.0f, 148,2504f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_horse_stay7", "horse_stay", Vector(-2421,392f, 8,098345f, 3950,982f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_horse_stay6", "horse_stay", Vector(-2418,207f, 8,091701f, 3952,367f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_horse_tend5", "horse_tend", Vector(-2419,592f, 8,276022f, 3948,489f), Vector(0.0f, -178,6461f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_horse_stay5", "horse_stay", Vector(-2391,552f, 9,035282f, 3973,452f), Vector(0.0f, -77,91962f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_horse_stay", "horse_stay", Vector(-2390,36f, 9,035282f, 3976,159f), Vector(0.0f, -108,218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_horse_tend", "horse_tend", Vector(-2393,498f, 9,035286f, 3970,294f), Vector(0.0f, -178,2487f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_rand_idle_stand", "rand_idle_stand", Vector(-2409,836f, 8,863125f, 3970,2f), Vector(0.0f, 74,69887f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_look_distance_binocs1", "look_distance_binocs", Vector(-2406,953f, 8,885f, 3972,906f), Vector(0.0f, -179,8559f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_Pee", "Pee", Vector(-2403,695f, 9,127972f, 3961,985f), Vector(0.0f, -339,9337f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_look_distance_binocs", "look_distance_binocs", Vector(-2377,361f, 13,70045f, 3959,298f), Vector(0.0f, -145,4083f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_stand_guntricks_e_any4", "stand_guntricks_e_any", Vector(-2392,574f, 9,035279f, 3977,499f), Vector(0.0f, -288,6662f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_stand_guntricks", "stand_guntricks_e_any", Vector(-2395,221f, 9,035282f, 3978,009f), Vector(0.0f, -14,52901f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_smoking_stand", "smoking_stand", Vector(-2392,542f, 9,035279f, 3975,33f), Vector(0.0f, 108,3262f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Ram_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2405,164f, 8,857721f, 3973,518f), Vector(0.0f, -26,27371f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2719,872f, 56,14576f, 4632,723f), Vector(0.0f, -160,4651f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_Pee", "Pee", Vector(-2719,947f, 56,14061f, 4619,677f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_rand_idle_stand", "rand_idle_stand", Vector(-2732,475f, 54,799f, 4620,533f), Vector(0.0f, 72,66499f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-2719,381f, 56,136f, 4624,018f), Vector(0.0f, -86,41405f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2717,162f, 56,13536f, 4622,923f), Vector(0.0f, -199,554f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-2718,725f, 56,19336f, 4625,808f), Vector(0.0f, -49,80202f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_stand", "rand_idle_stand", Vector(-2755,338f, 44,574f, 4608,967f), Vector(0.0f, 47,45972f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-2747,982f, 46,58796f, 4617,084f), Vector(0.0f, -261,3201f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sit_smokediab", "sit_ground_smoke", Vector(-2750,69f, 46,5379f, 4619,904f), Vector(0.0f, -279,5391f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_smoking_stand", "smoking_stand", Vector(-2713,061f, 57,17479f, 4633,203f), Vector(0.0f, -192,8825f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Diab_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2730,924f, 55,25158f, 4607,433f), Vector(0.0f, 70,70719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_horse_stay7", "horse_stay", Vector(-2717,415f, 46,003f, 4670,128f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_horse_stay6", "horse_stay", Vector(-2728,029f, 48,83f, 4663,372f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_horse_stay5", "horse_stay", Vector(-2744,786f, 47,842f, 4622,784f), Vector(0.0f, -28,21038f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_horse_stay", "horse_stay", Vector(-2752,478f, 45,581f, 4613,565f), Vector(0.0f, -302,0126f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_lookdistance_binocs", "look_distance_binocs", Vector(-2739,578f, 52,528f, 4609,783f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "diab_lookdistance_binocs1", "look_distance_binocs", Vector(-2723,603f, 48,057f, 4670,079f), Vector(0.0f, 120,0453f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "stand_lookdistance_diab", "stand_lookdistance_w_any", Vector(-2711,862f, 45,174f, 4549,208f), Vector(0.0f, 183,9572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Dia_lookdistance_binocs", "look_distance_binocs", Vector(-2751,219f, 41,231f, 4569,213f), Vector(0.0f, 105,7632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-2235,211f, 23,07668f, 4458,44f), Vector(0.0f, -220,2354f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_smoking_stand4", "smoking_stand", Vector(-2248,473f, 23,09f, 4459,871f), Vector(0.0f, -278,4407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_smoking_stand3", "smoking_stand", Vector(-2251,981f, 23,09363f, 4453,836f), Vector(0.0f, 16,17786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_guntricks2", "stand_guntricks_e_any", Vector(-2236,704f, 23,09021f, 4445,694f), Vector(0.0f, 45,55705f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_smoking_stand2", "smoking_stand", Vector(-2237,801f, 23,08828f, 4450,994f), Vector(0.0f, -162,5718f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_Sit_Ground_Drink1", "Sit_Ground_Drink", Vector(-2238,287f, 23,01221f, 4458,699f), Vector(0.0f, 185,9857f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_look_out_window1", "look_out_window_L", Vector(-2225,412f, 23,27891f, 4451,979f), Vector(0.0f, 52,1422f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_stand_lookdistance", "stand_lookdistance_w_any", Vector(-2800f, 12,99747f, 3976.0f), Vector(0.0f, -33,86443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_look_distance_binocs", "look_distance_binocs", Vector(-2821,198f, 14,178f, 3990,256f), Vector(0.0f, 107,9522f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_stand_yawning_n_any", "stand_yawning_n_any", Vector(-2808f, 15,63685f, 4000.0f), Vector(0.0f, 123,7318f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_stand_worried_n_any", "stand_worried_n_any", Vector(-2801,499f, 15,81774f, 3993,3f), Vector(0.0f, -69,93935f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "rio_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-2803,31f, 15,6673f, 3997,191f), Vector(0.0f, -120,7834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_horse_tend1", "horse_tend", Vector(-2809,067f, 14,55902f, 4007,062f), Vector(0.0f, -182,7983f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_horse_tend4", "horse_tend", Vector(-2785,864f, 15,38389f, 3997,784f), Vector(0.0f, -176,7439f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_horse_stay2", "horse_stay", Vector(-2812,66f, 14,77457f, 4006,476f), Vector(0.0f, -24,8493f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_horse_stay1", "horse_stay", Vector(-2782,363f, 15,07267f, 3997,314f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_horse_stay4", "horse_stay", Vector(-2792f, 15,52056f, 3997,487f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Pee_rio", "Pee", Vector(-2796,444f, 13,75379f, 3981,866f), Vector(0.0f, -45,26333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_stand_guntricks3", "stand_guntricks_e_any", Vector(-2801,323f, 15,64117f, 3995,094f), Vector(0.0f, -84,98148f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "stand_guntricks_4", "stand_guntricks_e_any", Vector(-2796.0f, 15,55481f, 4000.0f), Vector(0.0f, -97,24407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_stand_lookdistance1", "stand_lookdistance_w_any", Vector(-2803,821f, 15,45894f, 4002,666f), Vector(0.0f, -159,2758f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_look_distance_binocs10", "look_distance_binocs", Vector(-2802,01f, 15,8971f, 3991,164f), Vector(0.0f, -13,09345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Rio_smoking_stand", "smoking_stand", Vector(-2809,624f, 15,99161f, 3992.0f), Vector(0.0f, 48,59919f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "sleeping_wall_rio", "sleeping_wall_scripted", Vector(-2809,184f, 15,98761f, 3996,572f), Vector(0.0f, 107,063f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_smoking_stand1", "smoking_stand", Vector(-2231,056f, 23,08467f, 4453,438f), Vector(0.0f, -39,62713f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_sit_ground_smoke2", "sit_ground_smoke", Vector(-2249,137f, 23,08695f, 4454,318f), Vector(0.0f, -27,94823f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_ground_harmonica", "sit_ground_play_harmonica", Vector(-2235,434f, 23,08521f, 4455,663f), Vector(0.0f, -27,9268f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_sit_ground_smoke1", "sit_ground_smoke", Vector(-2231,816f, 23,09146f, 4444,698f), Vector(0.0f, -38,92004f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_peeing_b_any", "stand_peeing_b_any", Vector(-2224,567f, 23,06506f, 4460,793f), Vector(0.0f, -59,44532f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_spit1", "stand_spit", Vector(-2242,161f, 23,09f, 4465,899f), Vector(0.0f, -259,1897f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_spit", "stand_spit", Vector(-2242,714f, 23,09f, 4458,329f), Vector(0.0f, 173,8711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-2238,399f, 21,7327f, 4480,835f), Vector(0.0f, -142,5218f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-2245,74f, 23,10797f, 4448.0f), Vector(0.0f, 20,09966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-2227,261f, 22,78294f, 4446,88f), Vector(0.0f, -37,47246f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_horse_stay3", "horse_stay", Vector(-2241,171f, 23,09021f, 4466,272f), Vector(0.0f, -151,222f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_horse_stay2", "horse_stay", Vector(-2238,423f, 23,00134f, 4465,598f), Vector(0.0f, 188,6003f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_horse_stay1", "horse_stay", Vector(-2249,609f, 23,09021f, 4459,841f), Vector(0.0f, -346,9635f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_horse_stay", "horse_stay", Vector(-2247,84f, 23,09021f, 4458,915f), Vector(0.0f, -332,9286f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-2232,32f, 23,09239f, 4447,919f), Vector(0.0f, -37,95788f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-2229,033f, 23,09021f, 4448,373f), Vector(0.0f, -39,34164f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "bar_lookdistance_binocs", "look_distance_binocs", Vector(-2236,719f, 23,09021f, 4441,224f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_9 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", Vector(-2568.0f, 17,35954f, 4184f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", Vector(-2429,295f, 15,05885f, 4280.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", Vector(-2501,216f, 25,89587f, 4432,677f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", Vector(-2666,291f, 53,98365f, 4780,74f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", Vector(-2580,778f, 15,49983f, 4620,063f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", Vector(-2358,007f, 10,03923f, 4465,936f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", Vector(-2346,138f, 12,9453f, 4697,183f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", Vector(-2090,028f, 10,03923f, 4525,774f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", Vector(-2140f, 7,02747f, 4372.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", Vector(-2064f, 7,02747f, 4211,936f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear20", "Player_Herb_PricklyPear", Vector(-2191,708f, 12,04772f, 4124,719f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear21", "Player_Herb_PricklyPear", Vector(-1933,636f, 8,031361f, 4312.0f), Vector(0.0f, -39,45688f, 0.0f));
	*(&iLocal_9 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear22", "Player_Herb_PricklyPear", Vector(-1948,161f, 9,040389f, 4601,057f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear23", "Player_Herb_PricklyPear", Vector(-1885,215f, 9,370696f, 4433,224f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear24", "Player_Herb_PricklyPear", Vector(-1827,297f, 13,05566f, 4252,745f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear25", "Player_Herb_PricklyPear", Vector(-1856f, 7,027451f, 4084.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear27", "Player_Herb_PricklyPear", Vector(-1658,559f, 18,04464f, 4426,559f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear28", "Player_Herb_PricklyPear", Vector(-1844f, 17,06665f, 4516.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_PricklyPear29", "Player_Herb_PricklyPear", Vector(-2316f, 8,767691f, 4281,776f), Vector(0.0f, -115,5078f, 0.0f));
	*(&iLocal_9 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", Vector(-2910,036f, 44,57027f, 4654,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", Vector(-2726,28f, 36,25617f, 4521,987f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", Vector(-2441,885f, 11,04316f, 4488.0f), Vector(0.0f, 101,156f, 0.0f));
	*(&iLocal_9 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", Vector(-2354,037f, 22,08627f, 4788.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", Vector(-2839,25f, 32,12549f, 4316,75f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", Vector(-2554,774f, 18,07061f, 4153,149f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", Vector(-2504,785f, 26,10197f, 4451,215f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", Vector(-2380f, 14,05492f, 4240,4f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", Vector(-2131,301f, 12,04518f, 4245,068f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", Vector(-2132.0f, 10,0281f, 4634,028f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", Vector(-2168,012f, 15,10399f, 4691,06f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", Vector(-1952,991f, 41,95831f, 4893,371f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", Vector(-1660,062f, 32,53368f, 4710,832f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", Vector(-1637,863f, 20,07843f, 4621,863f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", Vector(-1778,279f, 17,00437f, 4576,003f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", Vector(-1666,141f, 17,71151f, 4478,913f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", Vector(-1933,051f, 9,035278f, 4488.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", Vector(-1400f, 20,07843f, 4590,162f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", Vector(-1376,957f, 17,09519f, 4781,746f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", Vector(-1526,312f, 18,05862f, 4830,312f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", Vector(-1897,378f, 14,05489f, 4230,172f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", Vector(-2352,539f, 25,11804f, 4588,779f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", Vector(-2673,413f, 34,65824f, 4552f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", Vector(-2749,371f, 38,14902f, 4436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", Vector(-2852,56f, 13,00819f, 4501,605f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", Vector(-2607,575f, 41,13937f, 4866,815f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", Vector(-3035,985f, 13,35887f, 4342,248f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", Vector(-2039,102f, 16,05764f, 4753,391f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", Vector(-1716f, 19,07449f, 4434,045f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", Vector(-1343,297f, 19,558f, 4844,218f), Vector(0.0f, 87,85265f, 0.0f));
	*(&iLocal_9 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", Vector(-1370,594f, 17,08653f, 4826,005f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", Vector(-2982,333f, 30,5575f, 4402,333f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", Vector(-2713,959f, 9,200555f, 4116.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", Vector(-2374,489f, 13,051f, 4214,489f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", Vector(-2217,438f, 11,71084f, 4497,232f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", Vector(-1927,737f, 7,023766f, 4579,011f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", Vector(-1764.0f, 35,04422f, 4464.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", Vector(-1832f, 15,05882f, 4022,384f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls", "Player_Herb_woollyBlueCurls", Vector(-3506,558f, 20,30957f, 4201,442f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls1", "Player_Herb_woollyBlueCurls", Vector(-3436f, 6,023544f, 4248.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls2", "Player_Herb_woollyBlueCurls", Vector(-3381,324f, 9,035736f, 4149,359f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls3", "Player_Herb_woollyBlueCurls", Vector(-3312,873f, 40,31164f, 4434,389f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls4", "Player_Herb_woollyBlueCurls", Vector(-3487,395f, 25,28656f, 4452,401f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls5", "Player_Herb_woollyBlueCurls", Vector(-3316,056f, 38,90699f, 4626,938f), Vector(0.0f, 101,5016f, 0.0f));
	*(&iLocal_9 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls6", "Player_Herb_woollyBlueCurls", Vector(-3168,985f, 36,14119f, 4644.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls7", "Player_Herb_woollyBlueCurls", Vector(-3052,09f, 34,46273f, 4689,37f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls8", "Player_Herb_woollyBlueCurls", Vector(-2844,54f, 34,36322f, 4617,301f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls9", "Player_Herb_woollyBlueCurls", Vector(-2892,009f, 12,37078f, 4512f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls10", "Player_Herb_woollyBlueCurls", Vector(-2820.0f, 12,02767f, 4480,763f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls11", "Player_Herb_woollyBlueCurls", Vector(-2809,987f, 32,11597f, 4342,014f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls12", "Player_Herb_woollyBlueCurls", Vector(-2725,906f, 31,28142f, 4200f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls13", "Player_Herb_woollyBlueCurls", Vector(-2840.0f, 9,035294f, 4170,232f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls14", "Player_Herb_woollyBlueCurls", Vector(-2609,779f, 17,13632f, 4136,288f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls15", "Player_Herb_woollyBlueCurls", Vector(-2588.0f, 27,81133f, 4162,203f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls16", "Player_Herb_woollyBlueCurls", Vector(-2431,989f, 13,05544f, 4259,917f), Vector(0.0f, -89,17472f, 0.0f));
	*(&iLocal_9 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls17", "Player_Herb_woollyBlueCurls", Vector(-2332f, 7,02747f, 4312.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls18", "Player_Herb_woollyBlueCurls", Vector(-2220f, 10,98272f, 4403,61f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls19", "Player_Herb_woollyBlueCurls", Vector(-2089,201f, 6,02355f, 4274,799f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls20", "Player_Herb_woollyBlueCurls", Vector(-2144f, 7,967607f, 4320.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls21", "Player_Herb_woollyBlueCurls", Vector(-2004.0f, 7,569696f, 4457,416f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls22", "Player_Herb_woollyBlueCurls", Vector(-2075,324f, 7,02747f, 4460,676f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls23", "Player_Herb_woollyBlueCurls", Vector(-1944f, 8,031358f, 4425,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls24", "Player_Herb_woollyBlueCurls", Vector(-1820,795f, 13,11664f, 4354,409f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls25", "Player_Herb_woollyBlueCurls", Vector(-1910,817f, 8,031357f, 4340,306f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls26", "Player_Herb_woollyBlueCurls", Vector(-1912.0f, 9,035278f, 4287,747f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls27", "Player_Herb_woollyBlueCurls", Vector(-1834,083f, 10,03617f, 4223,111f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls28", "Player_Herb_woollyBlueCurls", Vector(-1956.0f, 8,031357f, 4093,11f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls29", "Player_Herb_woollyBlueCurls", Vector(-2022,958f, 10,89698f, 4017,618f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls30", "Player_Herb_woollyBlueCurls", Vector(-2116,598f, 8,031363f, 4032,598f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls31", "Player_Herb_woollyBlueCurls", Vector(-2222,41f, 15,04577f, 4032.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls32", "Player_Herb_woollyBlueCurls", Vector(-2195,403f, 10,13291f, 3860,817f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls33", "Player_Herb_woollyBlueCurls", Vector(-2125,854f, 14,02664f, 3845,857f), Vector(0.0f, -256,6531f, 0.0f));
	*(&iLocal_9 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls34", "Player_Herb_woollyBlueCurls", Vector(-2062,496f, 14,73775f, 3837,177f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls35", "Player_Herb_woollyBlueCurls", Vector(-2084f, 14,55479f, 3910,628f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls36", "Player_Herb_woollyBlueCurls", Vector(-2000,621f, 12,43142f, 3955,702f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls37", "Player_Herb_woollyBlueCurls", Vector(-1832f, 13,08149f, 4040,557f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls38", "Player_Herb_woollyBlueCurls", Vector(-1820,948f, 6,01367f, 4139,051f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls40", "Player_Herb_woollyBlueCurls", Vector(-1620.0f, 11,68288f, 4373,344f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls41", "Player_Herb_woollyBlueCurls", Vector(-1632.0f, 9,652975f, 4488.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls42", "Player_Herb_woollyBlueCurls", Vector(-1744f, 13,05098f, 3926,992f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls43", "Player_Herb_woollyBlueCurls", Vector(-1786,523f, 12,64444f, 3809,08f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls44", "Player_Herb_woollyBlueCurls", Vector(-1825,098f, 10,60763f, 3718,17f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_9 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "Player_Herb_woollyBlueCurls45", "Player_Herb_woollyBlueCurls", Vector(-1772f, 11,97172f, 3778,428f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "nsit_docks", "nsit_docks", Vector(-1149,049f, 28,10178f, 4825,696f), Vector(0.0f, 142,3014f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "look_out_window_R", "look_out_window_R", Vector(-1150,912f, 28,08622f, 4823,648f), Vector(0.0f, 143,5482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_9 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_9, "treasure_hunting_z_4", "zombie_treasure_hunting_4", Vector(-1340,6f, 6,3f, 4493,1f), Vector(0.0f, 91,40795f, 0.0f));
	return 1;
}

bool Function_112(struct<2>[] Param0) //Position: 0xDC55 / 56405
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_116();
	iVar1 = 0;
	if (!Function_23(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_115(&(Param0[iVar02]), 8);
		}
		else if (Function_114())
		{
			iVar1 = 1;
			Function_115(&(Param0[iVar02]), 8);
		}
		Function_115(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_23(&(Param0[iVar02]), 4))
		{
			if (!Function_23(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_23(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_23(&(Param0[02]), 8) || iVar1));
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
				Function_115(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_23(&(Param0[iVar02]), 4))
		{
			if (!Function_23(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
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
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_115(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_115(&(Param0[iVar02]), 2);
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

void Function_113() //Position: 0xE017 / 57367
{
	if (!Function_63(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_114() //Position: 0xE057 / 57431
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

void Function_115(struct<13> Param0) //Position: 0xE085 / 57477
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_116() //Position: 0xE098 / 57496
{
	if (!Function_63(128))
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

var Function_117(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xE0DA / 57562
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_118(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_115(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_118(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xE118 / 57624
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_23(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_115(&(Param0[iVar02]), 4);
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

bool Function_119() //Position: 0xE1E7 / 57831
{
	return Function_120();
}

int Function_120() //Position: 0xE1F0 / 57840
{
	var uVar0;
	
	Function_107(3, 3);
	uVar0 = &uVar0;
	iLocal_7 = FIND_NAMED_LAYOUT("Perdido_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("Perdido_layout");
	}
	return 1;
}

void Function_121() //Position: 0xE23A / 57914
{
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	Function_122();
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_122() //Position: 0xE25C / 57948
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("sep_placement01x");
	Global_39874[03] = 0;
	Global_39874[03].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Function_69(&(Global_39874[03]), iVar0);
		iVar0++;
	}
	return;
}

void Function_123(char* cParam0) //Position: 0xE2A6 / 58022
{
	if (!Function_63(128))
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

