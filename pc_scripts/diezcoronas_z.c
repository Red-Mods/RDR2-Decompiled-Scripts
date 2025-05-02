//Decompiled with MagicRDR v1.0
//Function Count : 114
//Statics Count : 582
//Natives Count : 154
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 1;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 40;
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
	int iLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 15;
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
	var uLocal_501 = 6;
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
	var uLocal_517 = 5;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 7;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 7;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 1;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	int iLocal_579 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	iLocal_579 = 0;
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_113(&cVar0, 3);
	Function_112();
	iLocal_0 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_1 = 1000;
		switch (iLocal_0)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_0 = 1;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000001:
				if (Function_109())
				{
					iLocal_0 = 2;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_100())
				{
					Function_99();
					Function_98(&(Global_43791[iScriptParam_0]), 32);
					iLocal_0 = 3;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_1 = 500;
				if (Function_95())
				{
					Function_98(&(Global_43791[iScriptParam_0]), 16);
					iLocal_0 = 4;
					iLocal_1 = 0;
				}
				break;
			
			case 0x00000004:
				Function_94(&uLocal_3);
				Function_92(iScriptParam_0);
				iLocal_0 = 5;
				iLocal_1 = 0;
				break;
			
			case 0x00000005:
				if (Function_91())
				{
					Function_83();
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				else
				{
					iLocal_1 = 100;
				}
				break;
			
			case 0x00000006:
				Function_82(iScriptParam_0);
				Function_81();
				Function_98(&(Global_43791[iScriptParam_0]), 8);
				if (Function_80(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_79(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_0 = 10;
				}
				else
				{
					iLocal_0 = 7;
				}
				iLocal_1 = 0;
				break;
			
			case 0x00000007:
				Function_78(iScriptParam_0);
				iLocal_0 = 8;
				iLocal_1 = 0;
				break;
			
			case 0x00000008:
				if (!Function_77(iScriptParam_0))
				{
					Function_71(iScriptParam_0);
					Function_70(64);
				}
				Function_98(&(Global_43791[iScriptParam_0]), 512);
				iLocal_0 = 9;
				iLocal_1 = 0;
				break;
			
			case 0x00000009:
				if (!Function_77(iScriptParam_0))
				{
					Function_68(Function_69(), iScriptParam_0);
				}
				Function_67(iScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
				Function_66(&cVar0, 5.0f);
				Function_98(&(Global_43791[iScriptParam_0]), 4);
				iLocal_0 = 10;
				iLocal_1 = 0;
				break;
			
			case 0x0000000A:
				Function_63(iScriptParam_0);
				if (!Function_77(iScriptParam_0))
				{
					if (iLocal_2)
					{
						iLocal_2 = 0;
						iLocal_0 = 8;
						iLocal_1 = 0;
					}
					Function_24(&uLocal_3, &uLocal_569, Function_62(), iScriptParam_0);
				}
				else
				{
					iLocal_2 = 1;
				}
				if (Function_80(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_0 = 6;
					iLocal_1 = 0;
				}
				break;
			
			case 0x0000000B:
				break;
		}
		WAIT(iLocal_1);
	}
	Function_22();
	Function_16();
	Function_8(&uLocal_3, &uLocal_569);
	Function_6();
	Function_2(iScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_70(64);
	Function_79(&(Global_43791[iScriptParam_0]), 32);
	Function_79(&(Global_43791[iScriptParam_0]), 64);
	Function_79(&(Global_43791[iScriptParam_0]), 512);
	Function_79(&(Global_43791[iScriptParam_0]), 16);
	Function_79(&(Global_43791[iScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[iScriptParam_09] + 32, 64);
	Function_66(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x2EA / 746
{
	SET_DUST_LEVEL(1);
	if (IS_SCRIPT_VALID(&uLocal_577))
	{
		TERMINATE_SCRIPT(&uLocal_577);
	}
	return;
}

void Function_2(int iParam0) //Position: 0x306 / 774
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x33C / 828
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x35E / 862
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x374 / 884
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x38A / 906
{
	Function_7();
	return;
}

void Function_7() //Position: 0x393 / 915
{
	RELEASE_LAYOUT_REF(&iLocal_465);
	return;
}

void Function_8(var uParam0, vector3[] vParam1) //Position: 0x3A0 / 928
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_15(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_14(&(vParam1[iVar03]), 4);
		}
		if (Function_15(&(vParam1[iVar03]), 8))
		{
			Function_9(0, 0, 30);
			Function_14(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_9(int iParam0, int iParam1, int iParam2) //Position: 0x3FD / 1021
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &iParam2);
		Function_10(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_10(int iParam0, int iParam1, bool bParam2) //Position: 0x4E7 / 1255
{
	int iVar0;
	
	Function_13(iParam0);
	Function_12(&iParam1);
	PRINTNL();
	if (StackVal == iParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!&bParam2)
	{
		iVar0 = GET_HOUR(0);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(iParam0, &iParam1);
	Function_11();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
	Global_26182.f_8 = iParam0;
	if (Global_26182.f_32 > 0.0f && Global_26182.f_36 > 0.0f)
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
		if (Global_26182.f_32 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_26182.f_32);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_26182.f_36 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_26182.f_36);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_11() //Position: 0x666 / 1638
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_12(int iParam0) //Position: 0x672 / 1650
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

void Function_13(int iParam0) //Position: 0x6BC / 1724
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

void Function_14(struct<17> Param0) //Position: 0x702 / 1794
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_15(struct<17> Param0) //Position: 0x71F / 1823
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_16() //Position: 0x73D / 1853
{
	Function_17();
	return;
}

void Function_17() //Position: 0x746 / 1862
{
	Function_18(&iLocal_15 + 8);
	RELEASE_LAYOUT_REF(&iLocal_15);
	return;
}

void Function_18(int iParam0) //Position: 0x759 / 1881
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_19(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_19(struct<2>[] Param0, int iParam1) //Position: 0x781 / 1921
{
	if (Function_21(&(Param0[iParam12]), 4))
	{
		if (Function_21(&(Param0[iParam12]), 1))
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
			Function_20(&(Param0[iParam12]), 1);
			Function_20(&(Param0[iParam12]), 2);
			Function_20(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_20(struct<13> Param0) //Position: 0x8CC / 2252
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_21(struct<13> Param0) //Position: 0x8E9 / 2281
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_22() //Position: 0x907 / 2311
{
	Function_23();
	return;
}

void Function_23() //Position: 0x910 / 2320
{
	Function_18(&iLocal_7 + 8);
	RELEASE_LAYOUT_REF(&iLocal_7);
	return;
}

void Function_24(vector3 vParam0) //Position: 0x923 / 2339
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_61(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_25(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_25(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x9AD / 2477
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_60(&vParam0))
	{
		return 0;
	}
	Function_79(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_58(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_57(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_9(0, 0, 0);
						}
						else
						{
							Function_9(0, 0, 30);
						}
						Function_14(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_57(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_14(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_5(iParam2)) && !Function_56(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_55(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_15(&vParam0, 2))
					{
						if (!Function_15(&vParam0, 16))
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
								Function_57(&vParam0, 16);
								Function_47(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (Function_15(&vParam0, 16))
					{
						Function_14(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_15(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_15(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_57(&vParam0, 2);
			}
			else
			{
				Function_14(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_5(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_80(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_15(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_46(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_57(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_5(iParam2))
					{
						Function_45(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_26(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_26(int iParam0) //Position: 0xE05 / 3589
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_80(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_98(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_31(473, 1, 0, 0);
		iVar0 = Function_30(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_31(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_31(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_31(476, 1, 0, 0);
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
		Function_29(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_29(7, 30);
	}
	if (Function_28(473) <= Function_27(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_27(int iParam0) //Position: 0xEF6 / 3830
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_28(int iParam0) //Position: 0xF33 / 3891
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_29(int iParam0, int iParam1) //Position: 0xF6C / 3948
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

var Function_30(int iParam0) //Position: 0xFD6 / 4054
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

int Function_31(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x102E / 4142
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
	Function_44(iParam0, TO_FLOAT(bParam1), 1);
	Function_43(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_33(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_32(iParam0);
	return 1;
}

void Function_32(bool bParam0) //Position: 0x1256 / 4694
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

void Function_33(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x12F4 / 4852
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_27(390))), 32);
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
					fVar19 = (Function_28(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_28(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_41(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_38(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_36(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_35(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_34(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_34() //Position: 0x1932 / 6450
{
	int iVar0;
	
	return &iVar0;
}

var Function_35(int iParam0) //Position: 0x193B / 6459
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_36(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x194C / 6476
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_37("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_37(char* cParam0) //Position: 0x1A43 / 6723
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_38(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1A5E / 6750
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_40(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_39(Function_40(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_39(int iParam0, int iParam1) //Position: 0x1AC5 / 6853
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_40(int iParam0, bool bParam1) //Position: 0x1AD7 / 6871
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_41(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1AE9 / 6889
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
	if (((Function_42(iParam0) != 19 || Function_42(iParam0) != 17) || Function_42(iParam0) != 10) || Function_42(iParam0) != 9)
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

int Function_42(int iParam0) //Position: 0x1C1D / 7197
{
	return Global_55480[iParam016].f_96;
}

void Function_43(int iParam0) //Position: 0x1C2C / 7212
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

int Function_44(int iParam0, float fParam1, bool bParam2) //Position: 0x1DC6 / 7622
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

void Function_45(var uParam0, int iParam1) //Position: 0x200A / 8202
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_46(int iParam0, var uParam1, int iParam2) //Position: 0x2017 / 8215
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_47(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2041 / 8257
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_54(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_53(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_50(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_48();
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

void Function_48() //Position: 0x22F4 / 8948
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_49(&uVar0, &uVar1);
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

void Function_49(var uParam0, int iParam1) //Position: 0x2367 / 9063
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

bool Function_50(bool bParam0) //Position: 0x239D / 9117
{
	if (Function_55(256))
	{
		return 0;
	}
	if (Function_55(262144))
	{
		return 0;
	}
	if (Function_52())
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
	if (bParam0 && Function_51(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_55(2048))
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

int Function_51(int iParam0) //Position: 0x2413 / 9235
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_52() //Position: 0x2424 / 9252
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

bool Function_53(int iParam0) //Position: 0x243D / 9277
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x2453 / 9299
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_55(int iParam0) //Position: 0x2468 / 9320
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_56(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2486 / 9350
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

void Function_57(struct<17> Param0) //Position: 0x2535 / 9525
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_58(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2548 / 9544
{
	int iVar0;
	int iVar1;
	
	Function_13(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_59(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_10(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_59(int iParam0, int iParam1) //Position: 0x25C2 / 9666
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_13(iParam0);
	Function_12(&uVar0);
	PRINTNL();
	Function_10(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x25EB / 9707
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

bool Function_61(int iParam0) //Position: 0x260B / 9739
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_62() //Position: 0x2627 / 9767
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_63(var uParam0) //Position: 0x263C / 9788
{
	uParam0 = uParam0;
	if (!iLocal_579)
	{
		if (!IS_SCRIPT_VALID(&uLocal_577))
		{
			if (Function_65(1) >= 4)
			{
				if (Function_65(2) >= 4)
				{
					if (!Function_64())
					{
						uLocal_577 = LAUNCH_NEW_SCRIPT("$/content/DLC/ZombiePack/Beats/beat_unicorn.sc", 0);
						iLocal_579 = 1;
					}
				}
			}
		}
	}
	return;
}

bool Function_64() //Position: 0x26AC / 9900
{
	var uVar0;
	
	if (StackVal == 1267)
	{
		return 1;
	}
	uVar0 = GET_MOUNT(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (GET_ACTOR_ENUM(&uVar0) == 1267)
		{
			return 1;
		}
	}
	uVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		if (GET_ACTOR_ENUM(&uVar0) == 1267)
		{
			return 1;
		}
	}
	return 0;
}

int Function_65(int iParam0) //Position: 0x2704 / 9988
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_66(char* cParam0) //Position: 0x272C / 10028
{
	if (!Function_61(128))
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

void Function_67(int iParam0) //Position: 0x276C / 10092
{
	if (!Function_5(iParam0))
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

void Function_68(int iParam0, bool bParam1) //Position: 0x27FE / 10238
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
		Function_45(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

var Function_69() //Position: 0x28EE / 10478
{
	return &iLocal_7;
}

void Function_70(int iParam0) //Position: 0x28F7 / 10487
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_71(bool bParam0) //Position: 0x290A / 10506
{
	Function_72(0, 0,25f, 0, &iLocal_7, &Global_44085[bParam09] + 8, !Function_76(&Global_46894));
	return;
}

void Function_72(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x292E / 10542
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
	(&Global_43580 + 24) = &uParam3;
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
		Function_75();
	}
	if (&bParam5)
	{
		Function_73(1048576);
	}
}

void Function_73(int iParam0) //Position: 0x2A3C / 10812
{
	Function_74(&Global_43580, iParam0);
	return;
}

void Function_74(var uParam0, var uParam1) //Position: 0x2A4A / 10826
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_75() //Position: 0x2A69 / 10857
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_73(16384);
	}
	return;
}

bool Function_76(int[] iParam0) //Position: 0x2A85 / 10885
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		if (Function_5(iParam0[iVar0]))
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

bool Function_77(int iParam0) //Position: 0x2AD6 / 10966
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (iParam0 == Global_46736[0])
	{
		return Function_76(&Global_46760);
	}
	if (iParam0 == Global_46736[1])
	{
		return Function_76(&Global_46796);
	}
	if (iParam0 == Global_46736[2])
	{
		return Function_76(&Global_46816);
	}
	if (iParam0 == Global_46736[3])
	{
		return Function_76(&Global_46838);
	}
	if (iParam0 == Global_46746[0])
	{
		return Function_76(&Global_46850);
	}
	if (iParam0 == Global_46746[2])
	{
		return Function_76(&Global_46866);
	}
	if (iParam0 == Global_46746[1])
	{
		return Function_76(&Global_46894);
	}
	if (iParam0 == Global_46754[1])
	{
		return Function_76(&Global_46926);
	}
	if (iParam0 == Global_46754[0])
	{
		return Function_76(&Global_46914);
	}
	return 0;
}

void Function_78(int iParam0) //Position: 0x2BB3 / 11187
{
	iParam0 = iParam0;
	return;
}

void Function_79(var uParam0, int iParam1) //Position: 0x2BBD / 11197
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_80(int iParam0, int iParam1) //Position: 0x2BD7 / 11223
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_81() //Position: 0x2BF4 / 11252
{
	return;
}

void Function_82(var uParam0) //Position: 0x2BFA / 11258
{
	uParam0 = uParam0;
	return;
}

void Function_83() //Position: 0x2C04 / 11268
{
	Function_84(Global_46746[1]);
	Global_43787 = 1;
	return;
}

void Function_84(int iParam0) //Position: 0x2C17 / 11287
{
	int iVar0;
	
	iVar0 = Function_86(111, 111, 5);
	if (iParam0 != Global_46736[0] && !Function_85(Global_21684[iVar07].f_20, 8388608))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[0]);
	}
	else if (iParam0 != Global_46736[2] && !Function_85(Global_21684[iVar07].f_20, 4194304))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[2]);
	}
	else if (iParam0 != Global_46736[1] && !Function_85(Global_21684[iVar07].f_20, 0x1000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[1]);
	}
	else if (iParam0 != Global_46736[3] && !Function_85(Global_21684[iVar07].f_20, 0x2000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46736[3]);
	}
	else if (iParam0 != Global_46746[2] && !Function_85(Global_21684[iVar07].f_20, 0x40000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[2]);
	}
	else if (iParam0 != Global_46746[0] && !Function_85(Global_21684[iVar07].f_20, 0x10000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[0]);
	}
	else if (iParam0 != Global_46746[1] && !Function_85(Global_21684[iVar07].f_20, 0x20000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46746[1]);
	}
	else if (iParam0 != Global_46754[1] && !Function_85(Global_21684[iVar07].f_20, 0x4000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[1]);
	}
	else if (iParam0 != Global_46754[0] && !Function_85(Global_21684[iVar07].f_20, 0x8000000))
	{
		DECOR_SET_INT(&Global_54076, "InitDistrict", Global_46754[0]);
	}
	return;
}

bool Function_85(var uParam0, int iParam1) //Position: 0x2E58 / 11864
{
	return (uParam0 && iParam1) == 0;
}

int Function_86(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2E65 / 11877
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_90(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_87(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_87(bParam0, bParam1, bParam2, 4294967295);
}

int Function_87(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2EC3 / 11971
{
	var uVar0;
	
	if (!Function_89(bParam2))
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
	uVar0 = Function_90(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_88(uVar0);
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

var Function_88(int iParam0) //Position: 0x3027 / 12327
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

bool Function_89(int iParam0) //Position: 0x3065 / 12389
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_90(int iParam0, int iParam1, bool bParam2) //Position: 0x307A / 12410
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

bool Function_91() //Position: 0x309A / 12442
{
	return 1;
}

void Function_92(bool bParam0) //Position: 0x30A1 / 12449
{
	Function_93(&uLocal_3, &uLocal_569, 2, &Global_44085[bParam09] + 8, 4294967295, 0);
	return;
}

void Function_93(var uParam0, vector3[] vParam1, int iParam2, var uParam3, var uParam4, var uParam5) //Position: 0x30BC / 12476
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

void Function_94(struct<5> Param0) //Position: 0x31A9 / 12713
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

bool Function_95() //Position: 0x31BA / 12730
{
	return Function_96();
}

int Function_96() //Position: 0x31C3 / 12739
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	iLocal_465 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_465))
	{
		iLocal_465 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	*(&iLocal_465 + 136) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_465, "dzcv_flk_BIRD_set");
	*(&iLocal_465 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird1", 4,203895E-45f, Vector(-611,829f, 38,219f, 3827,132f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[0]);
	*(&iLocal_465 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird2", 4,203895E-45f, Vector(-866,4571f, 22,49439f, 3931,92f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[1]);
	*(&iLocal_465 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird3", 4,203895E-45f, Vector(-313,7093f, 21,75904f, 3726,008f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[2]);
	*(&iLocal_465 + 8[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird4", 4,203895E-45f, Vector(-510,6579f, 29,49834f, 3541,931f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[3]);
	*(&iLocal_465 + 8[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird5", 4,203895E-45f, Vector(-1219,403f, 6,319977f, 4040,926f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[4]);
	*(&iLocal_465 + 8[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird6", 4,203895E-45f, Vector(-637,6205f, 29,80308f, 4300,197f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[5]);
	*(&iLocal_465 + 8[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird7", 4,203895E-45f, Vector(290,432f, 34,87038f, 3480,95f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[6]);
	*(&iLocal_465 + 8[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird8", 4,203895E-45f, Vector(-108,391f, 38,21025f, 3434,176f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[7]);
	*(&iLocal_465 + 8[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_bird9", 4,203895E-45f, Vector(-712.0f, 17,23909f, 3079,969f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[8]);
	*(&iLocal_465 + 8[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bird10", 4,203895E-45f, Vector(-925,6773f, 17,23909f, 4212,848f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[9]);
	*(&iLocal_465 + 8[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bird11", 4,203895E-45f, Vector(-352,4366f, 21,4454f, 4107,059f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[10]);
	*(&iLocal_465 + 8[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bird12", 4,203895E-45f, Vector(-1279,938f, 18,19875f, 3673,032f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[11]);
	*(&iLocal_465 + 8[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bird13", 4,203895E-45f, Vector(-930,9156f, 20,02059f, 3494,921f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[12]);
	*(&iLocal_465 + 8[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bird14", 4,203895E-45f, Vector(-649,6989f, 36,98386f, 3207,082f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[13]);
	*(&iLocal_465 + 8[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bird15", 4,203895E-45f, Vector(-1370,839f, 33,3484f, 3323,744f), Vector(0.0f, 20.0f, 0.0f), Vector(371,0182f, 95,43382f, 325,5865f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 136, &iLocal_465 + 8[14]);
	*(&iLocal_465 + 200) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_465, "dzcv_flk_NORTH_set");
	*(&iLocal_465 + 144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_deer1", 4,203895E-45f, Vector(183,2115f, 2,510682f, 3253,547f), Vector(0.0f, 20.0f, 0.0f), Vector(281,9918f, 89,35717f, 179,1817f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 200, &iLocal_465 + 144[0]);
	*(&iLocal_465 + 144[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_deer2", 4,203895E-45f, Vector(-146,5327f, 32,12549f, 3481,587f), Vector(0.0f, 20.0f, 0.0f), Vector(152,6265f, 89,35717f, 151,084f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 200, &iLocal_465 + 144[1]);
	*(&iLocal_465 + 144[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_deer3", 4,203895E-45f, Vector(-496,7743f, -25,0744f, 3307,334f), Vector(0.0f, 20.0f, 0.0f), Vector(134,0671f, 89,35717f, 140,6055f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 200, &iLocal_465 + 144[2]);
	*(&iLocal_465 + 144[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_deer4", 4,203895E-45f, Vector(246,9567f, 1,866014f, 3601,049f), Vector(0.0f, 20.0f, 0.0f), Vector(160,3628f, 70,34444f, 154,0316f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 200, &iLocal_465 + 144[3]);
	*(&iLocal_465 + 144[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_deer5", 4,203895E-45f, Vector(-1157,915f, 33,55283f, 3680,932f), Vector(0.0f, 42,43787f, 0.0f), Vector(468,457f, 89,35717f, 255,2923f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 200, &iLocal_465 + 144[4]);
	*(&iLocal_465 + 144[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "ndzc_deer6", 4,203895E-45f, Vector(-18,09855f, 2,510682f, 2951,459f), Vector(0.0f, 40,72098f, 0.0f), Vector(315,7549f, 126,4596f, 93,80151f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 200, &iLocal_465 + 144[5]);
	*(&iLocal_465 + 256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_465, "dzcv_flk_CENTER_set");
	*(&iLocal_465 + 208[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_wildHorse1", 4,203895E-45f, Vector(-581,5504f, 0,5420829f, 3671,503f), Vector(0.0f, 20.0f, 0.0f), Vector(141,8387f, 59,55745f, 147,3043f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 256, &iLocal_465 + 208[0]);
	*(&iLocal_465 + 208[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_wildHorse2", 4,203895E-45f, Vector(-493,5024f, 0,7923921f, 3894,903f), Vector(0.0f, 20.0f, 0.0f), Vector(109,9956f, 59,55745f, 89,54243f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 256, &iLocal_465 + 208[1]);
	*(&iLocal_465 + 208[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_wildHorse3", 4,203895E-45f, Vector(-759,9346f, -12,84043f, 3899,402f), Vector(0.0f, 20.0f, 0.0f), Vector(138,0682f, 59,55745f, 137,679f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 256, &iLocal_465 + 208[2]);
	*(&iLocal_465 + 208[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_wildHorse4", 4,203895E-45f, Vector(-307,3904f, 37,0189f, 3708,881f), Vector(0.0f, 20.0f, 0.0f), Vector(123,4423f, 59,55745f, 136,9776f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 256, &iLocal_465 + 208[3]);
	*(&iLocal_465 + 208[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_wildHorse7", 4,203895E-45f, Vector(-272f, -0,3381402f, 3968.0f), Vector(0.0f, 20.0f, 0.0f), Vector(125,6101f, 59,55745f, 130,064f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 256, &iLocal_465 + 208[4]);
	*(&iLocal_465 + 328) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_465, "dzcv_flk_SOUTH_set");
	*(&iLocal_465 + 264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bobcat2", 4,203895E-45f, Vector(-1123,103f, 30,4954f, 4443,961f), Vector(0.0f, 20.0f, 0.0f), Vector(147,2831f, 35,79898f, 163,0907f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 328, &iLocal_465 + 264[0]);
	*(&iLocal_465 + 264[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bobcat5", 4,203895E-45f, Vector(-586,597f, 19,71896f, 4380,45f), Vector(0.0f, 20.0f, 0.0f), Vector(161,0917f, 35,79898f, 163,0907f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 328, &iLocal_465 + 264[1]);
	*(&iLocal_465 + 264[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bobcat7", 4,203895E-45f, Vector(-496,9962f, 21,61504f, 4106,414f), Vector(0.0f, 20.0f, 0.0f), Vector(131,9805f, 35,79898f, 117,3314f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 328, &iLocal_465 + 264[2]);
	*(&iLocal_465 + 264[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bobcat8", 4,203895E-45f, Vector(-298,3602f, 20,21682f, 4293,722f), Vector(0.0f, 20.0f, 0.0f), Vector(142,1019f, 35,79898f, 152,6231f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 328, &iLocal_465 + 264[3]);
	*(&iLocal_465 + 264[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bobcat14", 4,203895E-45f, Vector(-850,075f, 6,92048f, 4473,812f), Vector(0.0f, 20.0f, 0.0f), Vector(110,5808f, 34,04399f, 155,0954f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 328, &iLocal_465 + 264[4]);
	*(&iLocal_465 + 264[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bobcat13", 4,203895E-45f, Vector(-862,697f, 25,3591f, 4180,081f), Vector(0.0f, 20.0f, 0.0f), Vector(215,6465f, 37,4021f, 135,8368f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 328, &iLocal_465 + 264[5]);
	*(&iLocal_465 + 264[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzc_bobcat12", 4,203895E-45f, Vector(-1439,972f, 31,61843f, 4396,93f), Vector(0.0f, 20.0f, 0.0f), Vector(155,0954f, 34,04399f, 155,0954f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 328, &iLocal_465 + 264[6]);
	*(&iLocal_465 + 400) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_465, "dzcv_aquaticWildlife_set");
	*(&iLocal_465 + 336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_aquaticWildlife10", 2,802597E-45f, Vector(-249,935f, 4,074929f, 3072,152f), Vector(0.0f, 43,30123f, 0.0f), Vector(320,5055f, 42,68611f, 180,343f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 400, &iLocal_465 + 336[0]);
	*(&iLocal_465 + 336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_aquaticWildlife9", 2,802597E-45f, Vector(-545,003f, -5,849846f, 3184,051f), Vector(0.0f, 0.0f, 0.0f), Vector(469,1619f, 60,29255f, 182,7418f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 400, &iLocal_465 + 336[1]);
	*(&iLocal_465 + 336[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_aquaticWildlife8", 2,802597E-45f, Vector(-907,4448f, -6,917324f, 3308,913f), Vector(0.0f, 32,04573f, 0.0f), Vector(365,7122f, 60,29255f, 124,2856f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 400, &iLocal_465 + 336[2]);
	*(&iLocal_465 + 336[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_aquaticWildlife7", 2,802597E-45f, Vector(-1373,302f, -9,389809f, 3409,714f), Vector(0.0f, 18,31845f, 0.0f), Vector(660,2542f, 60,29255f, 139,5668f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 400, &iLocal_465 + 336[3]);
	*(&iLocal_465 + 336[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_aquaticWildlife6", 2,802597E-45f, Vector(-1493,303f, -12,2371f, 3619,515f), Vector(0.0f, 27,62256f, 0.0f), Vector(92,58046f, 60,29255f, 198,8555f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 400, &iLocal_465 + 336[4]);
	*(&iLocal_465 + 336[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_aquaticWildlife5", 2,802597E-45f, Vector(-1592,424f, -12,7732f, 3712,559f), Vector(0.0f, 22,51199f, 0.0f), Vector(327,7378f, 60,29255f, 86,73923f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 400, &iLocal_465 + 336[5]);
	*(&iLocal_465 + 336[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_aquaticWildlife4", 2,802597E-45f, Vector(-1897,605f, -15,24222f, 3749,151f), Vector(0.0f, 0.0f, 0.0f), Vector(323,3455f, 60,29255f, 154,5044f));
	ADD_TO_VOLUME_SET(&iLocal_465 + 400, &iLocal_465 + 336[6]);
	*(&iLocal_465 + 408) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_465, "dzcv_BB_Restriction", 2,802597E-45f, Vector(34,01668f, 94,87236f, 2740,988f), Vector(0.0f, 33,96989f, 0.0f), Vector(40,76286f, 57,50324f, 112,8068f));
	return 1;
}

void Function_97(int iParam0, int iParam1) //Position: 0x4179 / 16761
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

void Function_98(var uParam0, int iParam1) //Position: 0x41C3 / 16835
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_99() //Position: 0x41D4 / 16852
{
	return;
}

bool Function_100() //Position: 0x41DA / 16858
{
	return Function_101();
}

int Function_101() //Position: 0x41E3 / 16867
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/horse_stay", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_smokelean_e_any", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/campfire03", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/horse_tend", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/riverwash", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_spit", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/stand_key_twirling", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/player_herb_pricklypear", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/player_herb_woollybluecurls", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/player_herb_desertsage", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/player_herb_butterflyweed", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/mex_talking_soldiers_link", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground_nospawn", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	Function_107(&iLocal_15 + 8, "$/content/scripting/gringo/simplegringo/zombie_treasure_hunting_5", 1, 0);
	if (!Function_102(&iLocal_15 + 8))
	{
		return 0;
	}
	iLocal_15 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_15))
	{
		iLocal_15 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint", Vector(-1328,862f, 83,27f, 3602,278f), Vector(0.0f, 9,33f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint1", Vector(-596.0f, 30,83434f, 4006,688f), Vector(0.0f, 10,879f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint2", Vector(-528.0f, 28,61168f, 3587,232f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint3", Vector(-111,0578f, 55,2157f, 2808f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 656) = Vector(-578,514f, 28,459f, 3838,448f);
	*(&iLocal_15 + 656 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_15 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint4", Vector(-578,514f, 28,459f, 3838,448f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint5", Vector(-1341,777f, 13,05099f, 4301,776f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint6", Vector(-1352f, 13,05099f, 4281,627f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint7", Vector(-1370,036f, 13,05099f, 4317,523f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint8", Vector(-1378,815f, 13,05099f, 4295,221f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "dzcf_bhint9", Vector(-1344f, 13,482f, 4260.0f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-1362,953f, 13,07964f, 4300,644f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-1359,716f, 13,05099f, 4298,842f), Vector(0.0f, -272,5584f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_sit_ground_smoke3", "sit_ground_smoke", Vector(-1364,03f, 13,04671f, 4298,394f), Vector(0.0f, -112,4335f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-1362,544f, 13,05099f, 4296,964f), Vector(0.0f, -180,1093f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay13", "horse_stay", Vector(-1394,776f, 12,977f, 4308,042f), Vector(0.0f, 74,33443f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay12", "horse_stay", Vector(-1386,643f, 13,051f, 4290,629f), Vector(0.0f, 41,19416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay11", "horse_stay", Vector(-1396,363f, 13,05099f, 4300,878f), Vector(0.0f, 48,00632f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay10b", "horse_stay", Vector(-1400,339f, 11,495f, 4292,966f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_Pee3", "Pee", Vector(-1385,775f, 13,05099f, 4298,206f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_stand_guntricks_e_any2", "stand_guntricks_e_any", Vector(-1378,63f, 13,056f, 4306,34f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_Rand_Idle_Sit_Grnd02", "Rand_Idle_Sit_Ground", Vector(-1372,292f, 13,05099f, 4291,89f), Vector(0.0f, -28,9995f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-1374,563f, 13,05099f, 4297,688f), Vector(0.0f, 9,780541f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_look_out_window_R", "look_out_window_R", Vector(-1380,752f, 13,04853f, 4297,446f), Vector(0.0f, -41,49537f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay21", "horse_stay", Vector(-1365,99f, 13,051f, 4324,597f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay20", "horse_stay", Vector(-1384,05f, 12,988f, 4324,893f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay19", "horse_stay", Vector(-1388,964f, 12,966f, 4324,276f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay18", "horse_stay", Vector(-1364,119f, 13,051f, 4332,481f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_Rand_Idle_Sit_Grnd03", "Rand_Idle_Sit_Ground", Vector(-1354,34f, 13,05099f, 4309,859f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1361,21f, 13,05939f, 4316,554f), Vector(0.0f, 192,786f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-1368,854f, 13,05759f, 4314,05f), Vector(0.0f, -18,15423f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_sit_ground_smoke2", "sit_ground_smoke", Vector(-1371,078f, 13,05098f, 4315,158f), Vector(0.0f, 82,18061f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_rand_idle_stand6", "rand_idle_stand", Vector(-1381,432f, 13,037f, 4321,681f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay15", "horse_stay", Vector(-1331,086f, 13,691f, 4317,092f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay14", "horse_stay", Vector(-1335,886f, 13,273f, 4317,106f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay17", "horse_stay", Vector(-1329,264f, 13,051f, 4300,218f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_horse_stay16", "horse_stay", Vector(-1327,329f, 13,051f, 4303,468f), Vector(0.0f, 27,06931f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_Rand_Idle_Sit_Grnd04", "Rand_Idle_Sit_Ground", Vector(-1347,543f, 13,051f, 4305,105f), Vector(0.0f, 27,99822f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_rand_idle_stand4", "rand_idle_stand", Vector(-1334,242f, 13,051f, 4304,613f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_rand_idle_stand5", "rand_idle_stand", Vector(-1336,62f, 13,051f, 4294,1f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_rand_idle_stand3", "rand_idle_stand", Vector(-1353,39f, 13,051f, 4312,579f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_sit_ground_smoke4", "sit_ground_smoke", Vector(-1343,849f, 13,056f, 4296,042f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_Pee4", "Pee", Vector(-1352,655f, 13,051f, 4301,614f), Vector(0.0f, 28,35016f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_rand_idle_stand", "rand_idle_stand", Vector(-1346,009f, 13,056f, 4294,357f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_StandSmokeleanEAny1", "stand_smokelean_e_any", Vector(-1346,468f, 13,05098f, 4307,142f), Vector(0.0f, 118,1131f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_horse_stay10", "horse_stay", Vector(-1361,381f, 13,103f, 4268,063f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_horse_stay9", "horse_stay", Vector(-1344,416f, 13,051f, 4267,783f), Vector(0.0f, -161,8634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_horse_stay8", "horse_stay", Vector(-1361,88f, 13,051f, 4274,834f), Vector(0.0f, -185,5081f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_horse_stay", "horse_stay", Vector(-1352,36f, 13,051f, 4270,885f), Vector(0.0f, 212,416f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_sit_ground_smoke", "sit_ground_smoke", Vector(-1350,854f, 13,051f, 4272,156f), Vector(0.0f, -73,48672f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_smoking_stand2", "smoking_stand", Vector(-1349,743f, 13,05099f, 4283,362f), Vector(0.0f, -55,15614f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_Pee2", "Pee", Vector(-1356,144f, 13,05099f, 4286,991f), Vector(0.0f, -151,8606f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_rand_idle_stand2", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sep_Pee", "Pee", Vector(-1360,661f, 13,107f, 4286,437f), Vector(0.0f, 152,3031f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_smoking_stand", "smoking_stand", Vector(-1358,714f, 13,051f, 4282,462f), Vector(0.0f, -53,74414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_rand_idle_stand1", "rand_idle_stand", Vector(-1341,542f, 13,051f, 4278,057f), Vector(0.0f, 93,61817f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "sep_stand_guntricks_e_any02", "stand_guntricks_e_any", Vector(-1343,447f, 13,056f, 4286,479f), Vector(0.0f, -35,46272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "SegStandLookdistanceWAny04", "stand_lookdistance_w_any", Vector(-1339,343f, 13,051f, 4267,934f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "SegStandLookdistanceWAny03", "stand_lookdistance_w_any", Vector(-1324,474f, 13,051f, 4303,514f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "SegStandLookdistanceWAny02", "stand_lookdistance_w_any", Vector(-1372,628f, 13,05f, 4335,497f), Vector(0.0f, 14,92106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "SegStandLookdistanceWAny01", "stand_lookdistance_w_any", Vector(-1408,984f, 14,318f, 4305,296f), Vector(0.0f, 2,252319f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_15 + 688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Campfire014", "Campfire03", Vector(-238,2539f, 31,12157f, 4266,254f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_BOOL(&iLocal_15 + 688, "MP_ONLY", 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark1", "horse_tend", Vector(-101,656f, 55,227f, 2801,408f), Vector(0.0f, -141,5272f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark2", "horse_tend", Vector(-111,4741f, 55,2157f, 2810,284f), Vector(0.0f, 66,63183f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark3", "horse_stay", Vector(-113,5305f, 55,2157f, 2812.0f), Vector(0.0f, -134,0859f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark4", "horse_stay", Vector(-100,0075f, 55,38091f, 2800,44f), Vector(0.0f, 38,61838f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark5", "horse_stay", Vector(-118,1587f, 55,2157f, 2812,576f), Vector(0.0f, 224,0045f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark6", "horse_stay", Vector(-102,8546f, 55,37479f, 2802,538f), Vector(0.0f, 49,26177f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark7", "sit_ground_smoke", Vector(-109,1386f, 55,21569f, 2807,325f), Vector(0.0f, -280,0471f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark8", "sit_ground_play_harmonica", Vector(-112,5914f, 55,2157f, 2806,592f), Vector(0.0f, -108,6369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark9", "stand_guntricks_e_any", Vector(-111,0713f, 55,2157f, 2808,681f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark10", "stand_yawning_n_any", Vector(-106,3725f, 55,29201f, 2806,399f), Vector(0.0f, 100,3735f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark11", "stand_lookdistance_w_any", Vector(-117,9617f, 55,2157f, 2809,962f), Vector(0.0f, 96,93845f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark12", "Pee", Vector(-98,37971f, 55,19736f, 2802,857f), Vector(0.0f, 249,0699f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark13", "rand_idle_stand", Vector(-104,064f, 55,47073f, 2807,075f), Vector(0.0f, -109,9886f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark14", "nsit_docks", Vector(-101,3585f, 55,47161f, 2807,162f), Vector(0.0f, -136,5345f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark15", "smoking_stand", Vector(-109,5375f, 55,21568f, 2805,538f), Vector(0.0f, 142,1955f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark16", "look_distance_binocs", Vector(-114,3744f, 54,75f, 2814,374f), Vector(0.0f, 191,7611f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Man_landmark17", "Rand_Idle_Sit_Ground", Vector(-111,3886f, 55,21569f, 2804,94f), Vector(0.0f, 182,6724f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark1", "horse_stay", Vector(-485,8965f, 20,02694f, 3026,479f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_15 + 696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark1", "Sit_Ground_Campfire_Tend", Vector(-1237,767f, 22,29545f, 3209,357f), Vector(0.0f, 87,69044f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 696), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark2", "horse_tend", Vector(-1245,056f, 22,3515f, 3213,548f), Vector(0.0f, -101,8198f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark1", "sleeping_wall_scripted", Vector(-524,7726f, 28,61168f, 3585,052f), Vector(0.0f, 141,0826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark2", "horse_tend", Vector(-523,9998f, 28,09874f, 3593,792f), Vector(0.0f, 82,67101f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark3", "Sit_Ground_Campfire_Tend", Vector(-529,402f, 28,61169f, 3586,814f), Vector(0.0f, -106,4862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark4", "horse_tend", Vector(-528,4648f, 28,61169f, 3584.0f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark5", "stand_yawning_n_any", Vector(-526,808f, 28,61168f, 3586,416f), Vector(0.0f, 123,4238f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark6", "smoking_stand_nospawn", Vector(-530,215f, 28,612f, 3588,583f), Vector(0.0f, 302,8259f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark7", "stand_lookdistance_w_any", Vector(-532,8776f, 28,59505f, 3586,723f), Vector(0.0f, 119,1744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark8", "stand_lookdistance_w_any", Vector(-523,8267f, 27,21791f, 3603,666f), Vector(0.0f, 188,5482f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark9", "horse_stay", Vector(-524,2856f, 28,57678f, 3592,028f), Vector(0.0f, 466,0749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark10", "horse_stay", Vector(-526,8679f, 28,61168f, 3584.0f), Vector(0.0f, 369,76f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark11", "horse_stay", Vector(-530,737f, 28,612f, 3584,215f), Vector(0.0f, -0,6411512f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark12", "stand_drunk_rowdydrink", Vector(-528,0726f, 28,61168f, 3589,514f), Vector(0.0f, 12,18899f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark13", "stand_guntricks_e_any", Vector(-530,475f, 28,612f, 3586,142f), Vector(0.0f, -103,6828f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sol_landmark14", "Rand_Idle_Sit_Ground", Vector(-527,2328f, 28,61168f, 3588,458f), Vector(0.0f, 38,3594f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_15 + 704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-596,7665f, 30,87692f, 4008,65f), Vector(0.0f, -39,59076f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 704), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark1", "stand_lookdistance_w_any", Vector(-613,8975f, 27,71271f, 4015,721f), Vector(0.0f, 38,57999f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark2", "smoking_stand_nospawn", Vector(-598,088f, 30,877f, 4007,252f), Vector(0.0f, -88,51762f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark3", "stand_lookdistance_w_any", Vector(-595,0942f, 30,87692f, 4003,644f), Vector(0.0f, 40,7513f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark4", "stand_lookdistance_w_any", Vector(-568,1231f, 34,93197f, 4019,918f), Vector(0.0f, -134,8334f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark5", "horse_stay", Vector(-598,0424f, 30,87692f, 4005,047f), Vector(0.0f, -109,1773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark6", "horse_stay", Vector(-652,4681f, 12,93578f, 3998,157f), Vector(0.0f, -178,8803f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark7", "horse_stay", Vector(-596,8939f, 30,87373f, 4003,538f), Vector(0.0f, -146,6455f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark8", "horse_stay", Vector(-650,021f, 13,01396f, 3997,718f), Vector(0.0f, -63,92681f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark9", "horse_stay", Vector(-654,9255f, 12,7644f, 3998,088f), Vector(0.0f, -132,133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark10", "sleeping_wall_scripted", Vector(-595,894f, 30,877f, 4009,931f), Vector(0.0f, 13,83779f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark11", "stand_guntricks_e_any", Vector(-593,51f, 30,876f, 4006,038f), Vector(0.0f, 127,0322f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark12", "Rand_Idle_Sit_Ground", Vector(-594,076f, 30,877f, 4007,19f), Vector(0.0f, 101,0548f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "cab_landmark13", "look_distance_binocs", Vector(-577,5045f, 32,83132f, 4002,572f), Vector(0.0f, -67,42719f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark3", "horse_tend", Vector(-1245,323f, 21,83688f, 3217,079f), Vector(0.0f, -95,92507f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark4", "horse_tend", Vector(-1229,347f, 22,0393f, 3216,383f), Vector(0.0f, 96,76688f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark5", "horse_stay", Vector(-1249,337f, 23,3665f, 3211,135f), Vector(0.0f, -33,82539f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark6", "horse_stay", Vector(-1224,93f, 22,02998f, 3213,278f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark8", "stand_lookdistance_w_any", Vector(-1245,312f, 21,15314f, 3219,846f), Vector(0.0f, 176,0394f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark9", "look_distance_binocs", Vector(-1226,53f, 22,09952f, 3215,262f), Vector(0.0f, -144,2426f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark10", "Rand_Idle_NearWall", Vector(-1239,73f, 22,0971f, 3205,014f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark11", "rand_idle_stand", Vector(-1220,766f, 23,494f, 3204,79f), Vector(0.0f, -54,23795f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark12", "Pee", Vector(-1225,842f, 22,606f, 3204,7f), Vector(0.0f, -31,56896f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark13", "stand_lookdistance_w_any", Vector(-1236,023f, 20,958f, 3221,002f), Vector(0.0f, 175,0627f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark14", "stand_guntricks_e_any", Vector(-1236,338f, 22,24551f, 3208f), Vector(0.0f, 36,00572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark15", "stand_drunk_rowdydrink", Vector(-1233,859f, 22,23026f, 3207,647f), Vector(0.0f, 62,26207f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark16", "Rand_Idle_Sit_Ground", Vector(-1238,578f, 22,33991f, 3206,593f), Vector(0.0f, -115,5628f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Grn_landmark17", "smoking_stand", Vector(-1232,763f, 22,24354f, 3212,812f), Vector(0.0f, 45,14069f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark2", "horse_stay", Vector(-486,6529f, 20,15339f, 3025,138f), Vector(0.0f, -71,77749f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark3", "horse_tend", Vector(-486,7703f, 20,2141f, 3023,461f), Vector(0.0f, -254,62f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark4", "horse_tend", Vector(-486,9326f, 20,22241f, 3021,869f), Vector(0.0f, -249,1905f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark5", "smoking_stand", Vector(-484,2574f, 20,49877f, 3031,654f), Vector(0.0f, -93,37111f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark6", "stand_guntricks_e_any", Vector(-482,7634f, 20,4562f, 3032,894f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark7", "lie_sleep_on_bed_r", Vector(-488,9799f, 20,48626f, 3033,376f), Vector(0.0f, 21,64087f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark8", "look_out_window_L", Vector(-486,3158f, 20,5107f, 3032,65f), Vector(0.0f, -66,49553f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark10", "stand_lookdistance_w_any", Vector(-483,0443f, 18,67955f, 3048,706f), Vector(0.0f, 176,6462f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark12", "lean_fence_L_talking", Vector(-484,9706f, 20,49036f, 3036,224f), Vector(0.0f, -156,5074f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark13", "Pee", Vector(-492,1762f, 20,335f, 3022,99f), Vector(0.0f, 62,1369f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark14", "stand_lookdistance_w_any", Vector(-479,421f, 21,113f, 3013,55f), Vector(0.0f, -22,8892f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark15", "Rand_Idle_NearWall", Vector(-490,3453f, 20,08626f, 3026,755f), Vector(0.0f, -71,52729f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark16", "nriverwash", Vector(-472,1022f, 17,75337f, 3031,939f), Vector(0.0f, -125,2288f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark17", "nsit_docks", Vector(-476,763f, 18,7006f, 3037,619f), Vector(0.0f, -71,01546f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Brit_landmark18", "nlean_rail", Vector(-488,092f, 20,486f, 3037,493f), Vector(0.0f, -162,8951f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark1", "horse_tend", Vector(97,78033f, 71,27844f, 2684.0f), Vector(0.0f, -203,1011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark2", "horse_tend", Vector(100,282f, 71,27846f, 2683,792f), Vector(0.0f, -203,1011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark3", "horse_tend", Vector(108,8526f, 71,28279f, 2675,14f), Vector(0.0f, 124,6175f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark4", "horse_stay", Vector(93,90526f, 71,27841f, 2684,384f), Vector(0.0f, 18,86558f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark5", "horse_stay", Vector(103,9007f, 71,12509f, 2677,505f), Vector(0.0f, -48,71856f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark6", "horse_stay", Vector(90,52749f, 71,27842f, 2684,49f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark7", "nuse_shelf", Vector(124,6688f, 72,42136f, 2671,896f), Vector(0.0f, 294,9007f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark8", "lie_sleep_on_bed_r", Vector(123,5967f, 72,42126f, 2669,792f), Vector(0.0f, -63,85365f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark9", "look_out_window_L", Vector(121,8093f, 72,41193f, 2670,812f), Vector(0.0f, 117,1071f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark10", "look_distance_binocs", Vector(128,4899f, 72,50111f, 2674,588f), Vector(0.0f, -74,37722f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark12", "stand_kneelvomit_n_any", Vector(127,0404f, 72,41193f, 2668,225f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark14", "stand_drunk_throwbottle", Vector(120,5929f, 71,25062f, 2682,702f), Vector(0.0f, -149,8333f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark15", "smoking_stand", Vector(126,9357f, 72,4119f, 2675,583f), Vector(0.0f, 164,1807f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark16", "nsit_docks", Vector(118,6707f, 71,25098f, 2684,139f), Vector(0.0f, -153,0388f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Bach_landmark17", "Rand_Idle_NearWall", Vector(122,0053f, 72,41192f, 2674,544f), Vector(0.0f, -240,2579f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_15 + 712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark18", "look_distance_binocs", Vector(-573,2406f, 28,33539f, 3840,228f), Vector(0.0f, -93,01151f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 712), 0);
	*(&iLocal_15 + 720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark2", "stand_spit", Vector(-560,3032f, 22,78524f, 3833,79f), Vector(0.0f, -49,85806f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 720), 0);
	*(&iLocal_15 + 728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark3", "stand_key_twirling", Vector(-582,897f, 34,49655f, 3814,11f), Vector(0.0f, -53,07253f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 728), 0);
	*(&iLocal_15 + 736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark4", "stand_guntricks_e_any", Vector(-576,779f, 28,94148f, 3847,087f), Vector(0.0f, -131,297f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 736), 0);
	*(&iLocal_15 + 744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark5", "smoking_stand", Vector(-586,2288f, 34,64845f, 3850,912f), Vector(0.0f, -138,8816f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 744), 0);
	*(&iLocal_15 + 752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark6", "nsit_docks", Vector(-583,4898f, 34,5748f, 3837,621f), Vector(0.0f, -130,979f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 752), 0);
	*(&iLocal_15 + 760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark7", "sit_ground_smoke", Vector(-578,5978f, 28,4573f, 3841,574f), Vector(0.0f, -101,907f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 760), 0);
	*(&iLocal_15 + 768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark8", "sit_ground_smoke", Vector(-583,3972f, 26,90271f, 3852.0f), Vector(0.0f, -88,43743f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 768), 0);
	*(&iLocal_15 + 776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark9", "sit_ground_play_harmonica", Vector(-575,2004f, 28,40461f, 3841,486f), Vector(0.0f, -313,2773f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 776), 0);
	*(&iLocal_15 + 784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark11", "rand_idle_stand", Vector(-576,1994f, 29,7793f, 3820,138f), Vector(0.0f, -67,84433f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 784), 0);
	*(&iLocal_15 + 792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark12", "rand_idle_stand", Vector(-568,0064f, 27,37984f, 3846,823f), Vector(0.0f, -85,34988f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 792), 0);
	*(&iLocal_15 + 800) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark13", "Rand_Idle_Sit_Ground", Vector(-576,6311f, 28,47113f, 3838,295f), Vector(0.0f, -163,0736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 800), 0);
	*(&iLocal_15 + 808) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark14", "Pee", Vector(-570,251f, 26,61557f, 3819,763f), Vector(0.0f, -86,62787f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 808), 0);
	*(&iLocal_15 + 816) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark15", "look_distance_binocs", Vector(-580,898f, 33,55491f, 3827,646f), Vector(0.0f, -93,01151f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 816), 0);
	*(&iLocal_15 + 824) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark16", "stand_lookdistance_w_any", Vector(-580,4172f, 34,52888f, 3818,119f), Vector(0.0f, -122,0883f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 824), 0);
	*(&iLocal_15 + 832) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Mes_landmark17", "stand_lookdistance_w_any", Vector(-564,8317f, 23,73019f, 3826,123f), Vector(0.0f, -71,81815f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_15 + 832), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark17", "stand_lookdistance_w_any", Vector(-1331,238f, 82,91322f, 3605,093f), Vector(0.0f, 138,2342f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark1", "look_distance_binocs", Vector(-1337,197f, 81,134f, 3586,58f), Vector(0.0f, 60,24803f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark2", "stand_lookdistance_w_any", Vector(-1306,063f, 77,58575f, 3594,078f), Vector(0.0f, -126,0736f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark3", "stand_lookdistance_w_any", Vector(-1350,953f, 77,415f, 3596,393f), Vector(0.0f, 93,68055f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark4", "stand_lookdistance_w_any", Vector(-1329,711f, 83,16241f, 3604,284f), Vector(0.0f, 235,914f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark5", "smoking_stand_nospawn", Vector(-1336,671f, 81,20458f, 3588,376f), Vector(0.0f, 107,5332f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark7", "horse_stay", Vector(-1352,224f, 76,71698f, 3602,276f), Vector(0.0f, 242,6949f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark8", "horse_stay", Vector(-1349,171f, 77,00807f, 3601,257f), Vector(0.0f, 36,29667f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark9", "horse_stay", Vector(-1338,272f, 80,34926f, 3592,964f), Vector(0.0f, 256,7841f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark10", "horse_stay", Vector(-1353,553f, 76,02035f, 3606,206f), Vector(0.0f, 67,47733f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark11", "sleeping_wall_scripted", Vector(-1331,993f, 81,58298f, 3580,936f), Vector(0.0f, 157,8373f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark12", "look_distance_binocs", Vector(-1333,419f, 83,48002f, 3573,536f), Vector(0.0f, 76,9311f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark13", "stand_guntricks_e_any", Vector(-1310,068f, 78,20392f, 3584,787f), Vector(0.0f, 236,313f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark14", "rand_idle_stand", Vector(-1313,753f, 78,817f, 3584,856f), Vector(0.0f, -51,82711f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark15", "horse_tend", Vector(-1337,189f, 80,76552f, 3591,217f), Vector(0.0f, 73,23474f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rocg_landmark16", "Rand_Idle_Sit_Ground", Vector(-1333,754f, 81,13485f, 3587,381f), Vector(0.0f, 125,5873f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_15 + 840) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear", "Player_Herb_PricklyPear", Vector(-905,2795f, 6,120781f, 4018,96f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear1", "Player_Herb_PricklyPear", Vector(-724,2992f, 12,04706f, 3904.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear2", "Player_Herb_PricklyPear", Vector(-1072,128f, 8,031372f, 4152,004f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 864) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear3", "Player_Herb_PricklyPear", Vector(-736,3608f, 7,827786f, 4146,011f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 872) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear4", "Player_Herb_PricklyPear", Vector(-460,1092f, 18,21953f, 3704,093f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 880) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear5", "Player_Herb_PricklyPear", Vector(-504,6984f, 22,20414f, 3388,045f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 888) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear6", "Player_Herb_PricklyPear", Vector(-435,1801f, 19,84951f, 3594,031f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 896) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear7", "Player_Herb_PricklyPear", Vector(-270,4164f, 49,59292f, 3911,249f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 904) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear8", "Player_Herb_PricklyPear", Vector(-557,9813f, 15,90394f, 3926,233f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 912) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear9", "Player_Herb_PricklyPear", Vector(-561,4404f, 11,10295f, 4351,428f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 920) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear10", "Player_Herb_PricklyPear", Vector(-400,0199f, 20,16208f, 4239,861f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 928) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear11", "Player_Herb_PricklyPear", Vector(-444,8199f, 15,53144f, 4313,396f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 936) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear12", "Player_Herb_PricklyPear", Vector(-552.0f, 11,04317f, 4352.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 944) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear13", "Player_Herb_PricklyPear", Vector(228.0f, 27,9649f, 3817,106f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 952) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear14", "Player_Herb_PricklyPear", Vector(139,8584f, 31,81403f, 3688,034f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 960) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear15", "Player_Herb_PricklyPear", Vector(244,4953f, 29,08238f, 3510,065f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 968) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear16", "Player_Herb_PricklyPear", Vector(-342,3104f, 45,48911f, 3915,337f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 976) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear17", "Player_Herb_PricklyPear", Vector(-688,5254f, 17,06666f, 3627,078f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 984) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear18", "Player_Herb_PricklyPear", Vector(-284.0f, 26,46134f, 3532,476f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_PricklyPear19", "Player_Herb_PricklyPear", Vector(-896.0f, 13,05101f, 4324.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage", "Player_Herb_woollyBlueCurls", Vector(-1352.0f, 13,66009f, 4239,98f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage1", "Player_Herb_woollyBlueCurls", Vector(-1128,61f, 18,37431f, 4315,084f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage2", "Player_Herb_DesertSage", Vector(-1088.0f, 7,042808f, 4070,731f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1024) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage3", "Player_Herb_DesertSage", Vector(-873,3788f, 13,05101f, 4333,379f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1032) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage4", "Player_Herb_DesertSage", Vector(-743,6987f, 9,114012f, 4515,974f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1040) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage5", "Player_Herb_DesertSage", Vector(-752.0f, 11,04317f, 4277,421f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1048) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage6", "Player_Herb_DesertSage", Vector(-636,0112f, 12,04709f, 4220.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage7", "Player_Herb_DesertSage", Vector(-531,8919f, 22,29921f, 4154,04f), Vector(0.0f, -64,5629f, 0.0f));
	*(&iLocal_15 + 1064) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage8", "Player_Herb_DesertSage", Vector(-904,9533f, 6,089074f, 3976,993f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1072) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage9", "Player_Herb_DesertSage", Vector(-1041,081f, 13,448f, 3868,099f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1080) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage10", "Player_Herb_woollyBlueCurls", Vector(-1282,566f, 67,2627f, 3813,828f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1088) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage11", "Player_Herb_woollyBlueCurls", Vector(-992.0f, 71,27844f, 3576.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1096) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage12", "Player_Herb_woollyBlueCurls", Vector(-984,6598f, 76,29416f, 3402,395f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage13", "Player_Herb_woollyBlueCurls", Vector(-460,402f, 18,07059f, 3547,07f), Vector(0.0f, 20,28518f, 0.0f));
	*(&iLocal_15 + 1112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage14", "Player_Herb_woollyBlueCurls", Vector(-378,6794f, 36,16063f, 3893,247f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1120) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage15", "Player_Herb_woollyBlueCurls", Vector(-482,8534f, 30,20636f, 3232.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1128) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage16", "Player_Herb_woollyBlueCurls", Vector(-826,3027f, 21,37297f, 3224,528f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1136) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage17", "Player_Herb_DesertSage", Vector(280f, 44,15651f, 3280.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1144) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage18", "Player_Herb_DesertSage", Vector(204f, 48,97747f, 3536.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1152) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage19", "Player_Herb_DesertSage", Vector(248.0f, 33,515f, 3368.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1160) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage20", "Player_Herb_DesertSage", Vector(-180,7101f, 31,2964f, 3610,375f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1168) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage21", "Player_Herb_DesertSage", Vector(308.0f, 28,59479f, 3680.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1176) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage22", "Player_Herb_DesertSage", Vector(-496,095f, 16,88821f, 4112,057f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1184) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed29", "Player_Herb_ButterflyWeed", Vector(-1292,595f, 66,30639f, 3924,595f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1192) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage23", "Player_Herb_DesertSage", Vector(-46,87721f, 39,15293f, 3436f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1200) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage24", "Player_Herb_DesertSage", Vector(-663,9893f, 13,61824f, 3891,603f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1208) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage25", "Player_Herb_DesertSage", Vector(-713,616f, 23,59388f, 4444,34f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1216) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage26", "Player_Herb_DesertSage", Vector(-166,1611f, 38,14902f, 3088,026f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1224) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage27", "Player_Herb_DesertSage", Vector(-928,0001f, 71,33346f, 3520.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1232) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage28", "Player_Herb_DesertSage", Vector(-508,5906f, 17,06666f, 3804.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1240) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_DesertSage29", "Player_Herb_DesertSage", Vector(-286,5252f, 51,81712f, 4088,712f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1248) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed", "Player_Herb_ButterflyWeed", Vector(-1232,669f, 38,07505f, 3352,668f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1256) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed1", "Player_Herb_ButterflyWeed", Vector(-1469,036f, 22,27979f, 3511,638f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1264) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed2", "Player_Herb_ButterflyWeed", Vector(-1106f, 77,11635f, 3591,26f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed3", "Player_Herb_ButterflyWeed", Vector(-225,3674f, 29,2757f, 3079,019f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1280) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed4", "Player_Herb_ButterflyWeed", Vector(227,6754f, 44,81975f, 3264.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1288) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed5", "Player_Herb_ButterflyWeed", Vector(-540.0f, 37,84377f, 3540.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1296) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed6", "Player_Herb_ButterflyWeed", Vector(-434,9474f, 21,08234f, 3766,917f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed7", "Player_Herb_ButterflyWeed", Vector(-647,7579f, 15,04771f, 3590,837f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed8", "Player_Herb_ButterflyWeed", Vector(-596.0f, 18,07059f, 3339,244f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed9", "Player_Herb_ButterflyWeed", Vector(-986,0681f, 7,731964f, 3952,793f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed10", "Player_Herb_ButterflyWeed", Vector(256.0f, 28,10977f, 3529,897f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed11", "Player_Herb_ButterflyWeed", Vector(-279,0793f, 31,43542f, 3783,705f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed12", "Player_Herb_ButterflyWeed", Vector(300.0f, 28,80191f, 3724f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed13", "Player_Herb_ButterflyWeed", Vector(-224,0991f, 30,63802f, 4270,219f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed14", "Player_Herb_ButterflyWeed", Vector(-701,8191f, 9,685109f, 4120,612f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1368) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed15", "Player_Herb_ButterflyWeed", Vector(-374,2852f, 21,12761f, 4327,816f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed16", "Player_Herb_ButterflyWeed", Vector(-1325,839f, 67,05676f, 3892.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed17", "Player_Herb_ButterflyWeed", Vector(-1180.0f, 16,94636f, 4289,671f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed18", "Player_Herb_ButterflyWeed", Vector(-1067,828f, 14,09871f, 3951,976f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed19", "Player_Herb_ButterflyWeed", Vector(-522,1499f, 17,06667f, 3984.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed20", "Player_Herb_ButterflyWeed", Vector(176,1462f, 64,41196f, 3132,123f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed21", "Player_Herb_ButterflyWeed", Vector(-436,0832f, 43,10912f, 3328,062f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed22", "Player_Herb_ButterflyWeed", Vector(-520.0f, 30,11765f, 3256f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed23", "Player_Herb_ButterflyWeed", Vector(-1109,437f, 9,035294f, 4284.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed24", "Player_Herb_ButterflyWeed", Vector(-491,3083f, 16,07239f, 4271,612f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed25", "Player_Herb_ButterflyWeed", Vector(-1392f, 7,027454f, 4408.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed26", "Player_Herb_ButterflyWeed", Vector(-1468f, 11,04314f, 4343,305f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed27", "Player_Herb_ButterflyWeed", Vector(-1494,949f, 13,05098f, 4440.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed28", "Player_Herb_ButterflyWeed", Vector(-1432.0f, 69,27054f, 4036,591f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed30", "Player_Herb_ButterflyWeed", Vector(-1000,878f, 44,00829f, 3825,16f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed31", "Player_Herb_ButterflyWeed", Vector(-1154,268f, 12,13892f, 4439,583f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed32", "Player_Herb_ButterflyWeed", Vector(-932,7137f, 20,15159f, 4543,724f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed33", "Player_Herb_ButterflyWeed", Vector(-1073,241f, 19,25794f, 4382.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed34", "Player_Herb_ButterflyWeed", Vector(-896.0f, 14,05493f, 4340.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed35", "Player_Herb_ButterflyWeed", Vector(-925,2434f, 6,113177f, 4415,63f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed36", "Player_Herb_ButterflyWeed", Vector(-848.0f, 11,04317f, 4500.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed37", "Player_Herb_ButterflyWeed", Vector(-736,5878f, 10,03925f, 4350,856f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed38", "Player_Herb_ButterflyWeed", Vector(-528.0f, 11,04317f, 4348.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed39", "Player_Herb_ButterflyWeed", Vector(-553,654f, 14,06855f, 4250,448f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed40", "Player_Herb_ButterflyWeed", Vector(-670,5288f, 27,3503f, 4317,688f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1568) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed41", "Player_Herb_ButterflyWeed", Vector(-965,9622f, 76,71277f, 3534,832f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1576) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed42", "Player_Herb_ButterflyWeed", Vector(-92,50905f, 41,1608f, 3005,489f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1584) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed43", "Player_Herb_ButterflyWeed", Vector(418,3058f, 57,71587f, 3293,716f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1592) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed44", "Player_Herb_ButterflyWeed", Vector(376,9338f, 54,58826f, 3157,095f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1600) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed45", "Player_Herb_ButterflyWeed", Vector(-55,61684f, 32,23711f, 3396,743f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1608) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed46", "Player_Herb_ButterflyWeed", Vector(19,37307f, 38,42727f, 3458,521f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1616) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed47", "Player_Herb_ButterflyWeed", Vector(429,962f, 21,8845f, 3587,73f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1624) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed48", "Player_Herb_ButterflyWeed", Vector(209,6463f, 28,0322f, 3604,245f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1632) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed49", "Player_Herb_ButterflyWeed", Vector(-422,619f, 26,22769f, 3542,444f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1640) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed50", "Player_Herb_ButterflyWeed", Vector(-493,5766f, 17,06666f, 3616,596f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1648) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed51", "Player_Herb_ButterflyWeed", Vector(-620.0f, 14,91997f, 3558,162f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1656) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed52", "Player_Herb_ButterflyWeed", Vector(-1068,755f, 54,27743f, 3806,161f), Vector(0.0f, -110,965f, 0.0f));
	*(&iLocal_15 + 1664) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed53", "Player_Herb_ButterflyWeed", Vector(-797,5426f, 9,062623f, 3884,759f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1672) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed54", "Player_Herb_ButterflyWeed", Vector(-686,5418f, 12,04706f, 3906,474f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1680) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed55", "Player_Herb_ButterflyWeed", Vector(-775,9088f, 6,049286f, 4054,486f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1688) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed56", "Player_Herb_ButterflyWeed", Vector(-972.0f, 7,027447f, 3984.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1696) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed57", "Player_Herb_ButterflyWeed", Vector(-1087,176f, 14,97461f, 3950,302f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1704) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed58", "Player_Herb_ButterflyWeed", Vector(-1258,826f, 12,94118f, 4074,825f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1712) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed59", "Player_Herb_ButterflyWeed", Vector(-1136.0f, 8,031372f, 4220.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed60", "Player_Herb_ButterflyWeed", Vector(-1162,391f, 18,19985f, 4286,317f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed61", "Player_Herb_ButterflyWeed", Vector(-781,8239f, 8,021932f, 4128,854f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed62", "Player_Herb_ButterflyWeed", Vector(-560.0f, 14,0549f, 4088.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed63", "Player_Herb_ButterflyWeed", Vector(-348,3476f, 31,78596f, 4120,968f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed64", "Player_Herb_ButterflyWeed", Vector(-697,5889f, 11,12089f, 4526,161f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed65", "Player_Herb_ButterflyWeed", Vector(-1024.0f, 16,06274f, 4528.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed66", "Player_Herb_ButterflyWeed", Vector(-1016.0f, 16,06277f, 4384.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Player_Herb_ButterflyWeed67", "Player_Herb_ButterflyWeed", Vector(-1200.0f, 11,04314f, 4436.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_15 + 1784) = CREATE_OBJECTSET_IN_LAYOUT(Function_34(), &iLocal_15, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "mex_talking_soldiers_link", "mex_talking_soldiers_link", Vector(36,00005f, 93,0325f, 2952.0f), Vector(0.0f, -45,75198f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "mex_talking_soldiers_link1", "mex_talking_soldiers_link", Vector(20,00004f, 93,36469f, 2956.0f), Vector(0.0f, -88,02906f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "mex_talking_soldiers_link2", "mex_talking_soldiers_link", Vector(52,00005f, 93,36469f, 2948.0f), Vector(0.0f, 134,4493f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Rand_Idle_Sit_Ground_nospawn", "Rand_Idle_Sit_Ground_nospawn", Vector(32.0f, 92,506f, 2968.0f), Vector(0.0f, 22,79796f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Rand_Idle_Sit_Ground_nospawn1", "Rand_Idle_Sit_Ground_nospawn", Vector(30,19795f, 93,365f, 2953,052f), Vector(0.0f, -115,576f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Rand_Idle_Sit_Ground_nospawn2", "Rand_Idle_Sit_Ground_nospawn", Vector(16.0f, 93,278f, 2964.0f), Vector(0.0f, -113,554f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "Rand_Idle_Sit_Ground_nospawn3", "Rand_Idle_Sit_Ground_nospawn", Vector(28.0f, 91,888f, 2972.0f), Vector(0.0f, -24,07149f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(36.0f, 91,497f, 2976.0f), Vector(0.0f, -175,1794f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rand_idle_stand_nospawn1", "rand_idle_stand_nospawn", Vector(28.0f, 91,086f, 2980.0f), Vector(0.0f, -114,1734f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rand_idle_stand_nospawn2", "rand_idle_stand_nospawn", Vector(20.0f, 91,762f, 2976.0f), Vector(0.0f, 108,5983f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "rand_idle_stand_nospawn3", "rand_idle_stand_nospawn", Vector(16.0f, 92,155f, 2976.0f), Vector(0.0f, -120,0937f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(12.0f, 93,393f, 2956.0f), Vector(0.0f, 96,716f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(52.0f, 93,558f, 2936.0f), Vector(0.0f, -48,40675f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(20.0f, 90,154f, 2992.0f), Vector(0.0f, 154,5021f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(48.0f, 92,06221f, 2968.0f), Vector(0.0f, 203,9767f, 0.0f)), &iLocal_15 + 1784);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "stand_lookdistance_w_any4", "stand_lookdistance_w_any", Vector(8.0f, 99,388f, 2928.0f), Vector(0.0f, 100,0739f, 0.0f)), &iLocal_15 + 1784);
	*(&iLocal_15 + 1792) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_15, "treasure_hunting_z_5", "zombie_treasure_hunting_5", Vector(-1102,306f, 27,91685f, 3933,224f), Vector(0.0f, -96,51962f, 0.0f));
	return 1;
}

bool Function_102(struct<2>[] Param0) //Position: 0xB5EB / 46571
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_106();
	iVar1 = 0;
	if (!Function_21(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_105(&(Param0[iVar02]), 8);
		}
		else if (Function_104())
		{
			iVar1 = 1;
			Function_105(&(Param0[iVar02]), 8);
		}
		Function_105(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_21(&(Param0[iVar02]), 4))
		{
			if (!Function_21(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_21(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_21(&(Param0[02]), 8) || iVar1));
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
				Function_105(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_21(&(Param0[iVar02]), 4))
		{
			if (!Function_21(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
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
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_105(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_105(&(Param0[iVar02]), 2);
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

void Function_103() //Position: 0xB9AD / 47533
{
	if (!Function_61(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_104() //Position: 0xB9ED / 47597
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

void Function_105(struct<13> Param0) //Position: 0xBA1B / 47643
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_106() //Position: 0xBA2E / 47662
{
	if (!Function_61(128))
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

var Function_107(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xBA70 / 47728
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_108(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_105(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_108(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xBAAE / 47790
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_21(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_105(&(Param0[iVar02]), 4);
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

bool Function_109() //Position: 0xBB7D / 47997
{
	return Function_110();
}

int Function_110() //Position: 0xBB86 / 48006
{
	var uVar0;
	
	Function_97(3, 3);
	uVar0 = &uVar0;
	Function_107(&iLocal_7 + 8, "p_uti_cover1x1x", 0, 0);
	if (!Function_102(&iLocal_7 + 8))
	{
		return 0;
	}
	iLocal_7 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_7))
	{
		iLocal_7 = CREATE_LAYOUT("DiezCoronas_layout");
	}
	Function_111(StackVal, StackVal, &iLocal_7, "cover1x1x0", "p_uti_cover1x1x", Vector(-237,6518f, 34,38753f, 3754,085f), Vector(11,40923f, -140,8511f, 0.0f), 1);
	Function_111(StackVal, StackVal, &iLocal_7, "cover1x1x1", "p_uti_cover1x1x", Vector(-223,8871f, 34,55111f, 3741,238f), Vector(0.0f, -43,30798f, 0.0f), 1);
	Function_111(StackVal, StackVal, &iLocal_7, "cover1x1x2", "p_uti_cover1x1x", Vector(-262,1187f, 34,4931f, 3763,64f), Vector(0.0f, -30,92613f, 0.0f), 1);
	return 1;
}

var Function_111(int iParam0, float fParam1, float fParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0xBCC2 / 48322
{
	iParam0 = &iParam0;
	fParam1 = &fParam1;
	fParam2 = &fParam2;
	Param3 = Param3;
	Param5 = Param5;
	iParam7 = iParam7;
	return "";
}

void Function_112() //Position: 0xBCF0 / 48368
{
	ALLOW_TUMBLEWEEDS(1);
	SET_DUST_LEVEL(2);
	return;
}

void Function_113(char* cParam0) //Position: 0xBCFF / 48383
{
	if (!Function_61(128))
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

