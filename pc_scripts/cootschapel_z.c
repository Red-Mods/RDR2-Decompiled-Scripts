//Decompiled with MagicRDR v1.0
//Function Count : 468
//Statics Count : 684
//Natives Count : 653
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	char[] cLocal_7[4] = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 8;
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
	var uLocal_107 = 1;
	var uLocal_108 = 0;
	var uLocal_109 = 13;
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
	var uLocal_167 = -1;
	var uLocal_168 = 0;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = false;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 26;
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
	var uLocal_240 = 5;
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
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 4;
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
	var uLocal_272 = 7;
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
	var uLocal_298 = 14;
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
	var uLocal_330 = 5;
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
	var uLocal_344 = 8;
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
	var uLocal_364 = 4;
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
	var uLocal_376 = 4;
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
	struct<13> Local_408 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0 } ;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	bool bLocal_428 = false;
	bool bLocal_429 = false;
	bool bLocal_430 = false;
	bool bLocal_431 = false;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	var uLocal_434 = 0;
	int iLocal_435 = 5;
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
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	bool bLocal_461 = false;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	var uLocal_464 = 0;
	int iLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	int iLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	int iLocal_477 = 0;
	bool bLocal_478 = false;
	int iLocal_479 = 0;
	float fLocal_480 = 0.0f;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	float fLocal_488 = 0.0f;
	int iLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	int iLocal_492 = 0;
	var uLocal_493 = 0;
	struct<9> Local_494 = { 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
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
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	var uLocal_538 = 6;
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
	var uLocal_549 = 0;
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
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 4;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	struct<265> Local_614 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_467(&cVar0, 3);
	Function_466();
	if (StackVal && (((((!Global_6666 && bScriptParam_0 == Global_46838[1]) && bScriptParam_0 == Global_46894[1]) && bScriptParam_0 == Global_46894[2]) && bScriptParam_0 == Global_46914[1]) && bScriptParam_0 == Global_46796[0]) == 5)
	{
		bLocal_177 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_6632)
				{
					if (bLocal_177)
					{
						Function_461(&iLocal_13, bScriptParam_0, 0);
					}
					else
					{
						Function_460(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_457())
				{
					Function_456();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_455())
				{
					Function_454();
					Function_453(&(Global_43791[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_450())
				{
					Function_448(bScriptParam_0);
					if (bLocal_177)
					{
						Function_446(&iLocal_13, Function_447(), bScriptParam_0);
						Function_445(&iLocal_13, Function_447());
					}
					Function_453(&(Global_43791[bScriptParam_0]), 16);
					iLocal_5 = 4;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_7))
				{
					iLocal_5 = 5;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000005:
				Function_444(&uLocal_9);
				Function_442();
				Function_439(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_438() && Function_437(Global_44085[bScriptParam_09])) && Function_436(&iLocal_13))
				{
					Function_435();
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				else
				{
					iLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_177)
				{
					Function_423(&iLocal_13, bScriptParam_0, Function_447());
				}
				Function_422(bScriptParam_0);
				Function_421();
				Function_420();
				Function_453(&(Global_43791[bScriptParam_0]), 8);
				if (Function_419(&(Global_43791[bScriptParam_0]), 131072))
				{
					Function_418(&(Global_43791[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_417(bScriptParam_0);
				Function_416();
				Function_415(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_410(bScriptParam_0);
				Function_409(64);
				Function_453(&(Global_43791[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_408(Function_447(), bScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
				Function_407(&cVar0, 5.0f);
				Function_453(&(Global_43791[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_226(bScriptParam_0);
				if (Function_419(&(Global_43791[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_177)
				{
					Function_112(&iLocal_13, bScriptParam_0);
				}
				Function_76(&uLocal_9, &uLocal_538, Function_111(), bScriptParam_0);
				Function_72(&uLocal_576, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_177)
	{
		Function_57(&iLocal_13, bScriptParam_0);
	}
	Function_55(bScriptParam_0);
	Function_21();
	Function_20();
	Function_19();
	Function_11(&uLocal_9, &uLocal_538);
	Function_10(&uLocal_576);
	Function_8();
	Function_4(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_409(64);
	Function_418(&(Global_43791[bScriptParam_0]), 32);
	Function_418(&(Global_43791[bScriptParam_0]), 64);
	Function_418(&(Global_43791[bScriptParam_0]), 8);
	Function_418(&(Global_43791[bScriptParam_0]), 512);
	Function_418(&(Global_43791[bScriptParam_0]), 16);
	Function_418(&(Global_43791[bScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_407(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3C9 / 969
{
	SET_DUST_LEVEL(2);
	REMOVE_STRING_TABLE("graveyards");
	Function_2(&(Global_39874[13]));
	return;
}

void Function_2(vector3 vParam0) //Position: 0x3ED / 1005
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

void Function_3(var uParam0) //Position: 0x422 / 1058
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uParam0);
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

void Function_4(int iParam0) //Position: 0x471 / 1137
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

void Function_5(int iParam0) //Position: 0x4A7 / 1191
{
	if (!Function_6(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_6(int iParam0) //Position: 0x4C9 / 1225
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_7(int iParam0) //Position: 0x4DF / 1247
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_8() //Position: 0x4F5 / 1269
{
	Function_9();
	return;
}

void Function_9() //Position: 0x4FE / 1278
{
	RELEASE_LAYOUT_REF(&iLocal_256);
	return;
}

void Function_10(struct<4>[] Param0) //Position: 0x50B / 1291
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

void Function_11(var uParam0, vector3[] vParam1) //Position: 0x570 / 1392
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_18(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_17(&(vParam1[iVar03]), 4);
		}
		if (Function_18(&(vParam1[iVar03]), 8))
		{
			Function_12(0, 0, 30);
			Function_17(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_12(int iParam0, int iParam1, int iParam2) //Position: 0x5CD / 1485
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
		Function_13(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_13(int iParam0, int iParam1, bool bParam2) //Position: 0x6B7 / 1719
{
	int iVar0;
	
	Function_16(iParam0);
	Function_15(&iParam1);
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
	Function_14();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
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

void Function_14() //Position: 0x836 / 2102
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_15(int iParam0) //Position: 0x842 / 2114
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

void Function_16(int iParam0) //Position: 0x88C / 2188
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

void Function_17(struct<17> Param0) //Position: 0x8D2 / 2258
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_18(struct<17> Param0) //Position: 0x8EF / 2287
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_19() //Position: 0x90D / 2317
{
	return;
}

void Function_20() //Position: 0x913 / 2323
{
	return;
}

void Function_21() //Position: 0x919 / 2329
{
	Function_54(1);
	Function_23(&Local_614);
	iLocal_6 = 1000;
	Function_22();
	return;
}

void Function_22() //Position: 0x931 / 2353
{
	RELEASE_LAYOUT_REF(&iLocal_178);
	return;
}

void Function_23(struct<265> Param0) //Position: 0x93D / 2365
{
	int iVar0;
	
	if (!bLocal_461)
	{
		if (!Function_52(&Param0))
		{
			return;
		}
		if (Function_46(Param0.f_264))
		{
			return;
		}
	}
	RESET_TREE_TYPE_CLEARING();
	STREAMING_UNLOAD_BOUNDS();
	Function_44();
	Function_40(&iLocal_435);
	if (!Function_52(&Param0) || Global_6666)
	{
		Param0.f_4 = 1;
	}
	else
	{
		Param0.f_4 = 14;
	}
	Function_31(&Param0);
	if (Global_6666)
	{
		Function_30(0);
	}
	else
	{
		Function_30(bLocal_461);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iLocal_416[iVar0] == 4294967295 && iLocal_416[iVar0] == 0)
		{
			STREAMING_EVICT_ACTOR(iLocal_416[iVar0], 4294967295);
			iLocal_416[iVar0] = 4294967295;
		}
		iVar0++;
	}
	if (iLocal_428 == 4294967295 && iLocal_428 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_428, 4294967295);
		bLocal_428 = 4294967295;
	}
	if (iLocal_431 == 4294967295 && iLocal_431 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_431, 4294967295);
		bLocal_431 = 4294967295;
	}
	if (iLocal_430 == 4294967295 && iLocal_430 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_430, 4294967295);
		bLocal_430 = 4294967295;
	}
	if (iLocal_429 == 4294967295 && iLocal_429 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_429, 4294967295);
		bLocal_429 = 4294967295;
	}
	if (iLocal_462)
	{
		Function_29(0.0f);
		iLocal_462 = 0;
	}
	Global_6628 = 0;
	if (DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
	{
		DECOR_REMOVE(&Global_54076, "bStartedGY");
	}
	CLEAR_ACTOR_PROOF(&Global_54076, 16);
	if (Function_26(Global_46914[0]) && Param0.f_264 != 0)
	{
		AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	}
	else
	{
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	}
	ENABLE_WEATHER_SPHERE(Function_25(Param0.f_264), 0);
	if (Global_6666)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 8, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 20.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 15, 5.0f, 0);
		ADD_ITEM(Function_24(3), &Global_54076, 0);
		ADD_ITEM(Function_24(3), &Global_54076, 0);
		ADD_ITEM(Function_24(3), &Global_54076, 0);
		ADD_ITEM(Function_24(3), &Global_54076, 0);
		ADD_ITEM(Function_24(3), &Global_54076, 0);
		ADD_ITEM(Function_24(1), &Global_54076, 0);
		ADD_ITEM(Function_24(1), &Global_54076, 0);
		ADD_ITEM(Function_24(1), &Global_54076, 0);
		ADD_ITEM(Function_24(1), &Global_54076, 0);
		ADD_ITEM(Function_24(1), &Global_54076, 0);
		ADD_ITEM(Function_24(20), &Global_54076, 0);
	}
	if (Global_6666)
	{
		DESTROY_LAYOUT(&uLocal_490);
		CLEAR_ALL_CORPSES();
	}
	else
	{
		RELEASE_LAYOUT_REF(&uLocal_490);
	}
	return;
}

var Function_24(bool bParam0) //Position: 0xBBE / 3006
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

int Function_25(int iParam0) //Position: 0xCB2 / 3250
{
	switch (iParam0)
	{
		case 0x00000000:
			return 31;
			break;
		
		case 0x00000001:
			return 30;
			break;
		
		case 0x00000002:
			return 32;
			break;
		
		case 0x00000003:
			return 33;
			break;
		
		case 0x00000004:
			return 29;
			break;
	}
	LOG_ERROR("should not be here");
	return 31;
}

bool Function_26(bool bParam0) //Position: 0xD15 / 3349
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_46894[2] || bParam0 != Global_46894[1]) || bParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[bParam0];
	return (((Function_28(uVar0, 0x1000000) || Function_28(uVar0, 0x2000000)) || Function_28(uVar0, 0x4000000)) || Function_27(bParam0));
}

bool Function_27(int iParam0) //Position: 0xD88 / 3464
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_28(bool bParam0, bool bParam1) //Position: 0xDA5 / 3493
{
	return (bParam0 && bParam1) == 0;
}

void Function_29(int iParam0) //Position: 0xDB2 / 3506
{
	Global_26182.f_32 = iParam0;
	SET_RAIN_AMOUNT(Global_26182.f_32);
	return;
}

void Function_30(bool bParam0) //Position: 0xDC7 / 3527
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (IS_OBJECT_VALID(&(Local_502[iVar04])))
		{
			if (bParam0)
			{
				RELEASE_OBJECT_REF(&(Local_502[iVar04]));
			}
			else
			{
				DESTROY_OBJECT(&(Local_502[iVar04]));
			}
		}
		Local_502[iVar04].f_8 = 0;
		iVar0++;
	}
	if (IS_OBJECT_VALID(&vLocal_494))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(&vLocal_494);
		}
		else
		{
			DESTROY_OBJECT(&vLocal_494);
		}
	}
	vLocal_494.f_8 = 0;
	return;
}

void Function_31(int iParam0) //Position: 0xE3B / 3643
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&iParam0 + 8))
	{
		Function_32(SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, iVar0));
		iVar0++;
	}
	if (IS_ACTOR_VALID(&iLocal_463))
	{
		SET_ACTOR_INVULNERABILITY(&iLocal_463, 0);
		Function_32(&iLocal_463);
	}
	return;
}

void Function_32(int iParam0) //Position: 0xE85 / 3717
{
	Function_33(&iParam0, 1);
	SET_ACTOR_HEALTH(&iParam0, 0.0f);
	return;
}

void Function_33(int iParam0, bool bParam1) //Position: 0xE99 / 3737
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 30, false);
		}
		else
		{
			if (((Function_39() || Function_38(&iParam0)) || Function_37(&iParam0)) || Function_36(&iParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam0), "head", &Var0))
			{
				uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, Function_35(), 2,802597E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(0,5f, 0,5f, 0,5f));
				RESET_RMPTFX_IN_VOLUME(&uVar2);
				DESTROY_VOLUME(&uVar2);
			}
			if (DECOR_CHECK_EXIST(&iParam0, "oLeftEyeGlow"))
			{
				uVar3 = DECOR_GET_OBJECT(&iParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(&uVar3))
				{
					UNK_0x1A59E608(&uVar3);
				}
				DECOR_REMOVE(&iParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(&iParam0, "oRightEyeGlow"))
			{
				uVar3 = DECOR_GET_OBJECT(&iParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(&uVar3))
				{
					UNK_0x1A59E608(&uVar3);
				}
				DECOR_REMOVE(&iParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(&iParam0, "Zombie_NoHead", 1);
			Function_34();
			bVar4 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_35(), "blood_zombie_shotgun_exit", "head", &iParam0, Function_34(), &iParam0);
			if (IS_OBJECT_VALID(&bVar4))
			{
				Function_34();
				UNK_0x6745191B(&bVar4, Function_34());
			}
		}
	}
	return;
}

struct<8> Function_34() //Position: 0x108B / 4235
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_35() //Position: 0x1095 / 4245
{
	int iVar0;
	
	return &iVar0;
}

bool Function_36(int iParam0, int iParam1) //Position: 0x109E / 4254
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_37(int iParam0) //Position: 0x10E3 / 4323
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1228 && iVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_38(int iParam0) //Position: 0x1104 / 4356
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_39() //Position: 0x1125 / 4389
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_40(int iParam0) //Position: 0x1138 / 4408
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_41(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_41(struct<2>[] Param0, int iParam1) //Position: 0x1160 / 4448
{
	if (Function_43(&(Param0[iParam12]), 4))
	{
		if (Function_43(&(Param0[iParam12]), 1))
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
			Function_42(&(Param0[iParam12]), 1);
			Function_42(&(Param0[iParam12]), 2);
			Function_42(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_42(struct<13> Param0) //Position: 0x12AB / 4779
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_43(struct<13> Param0) //Position: 0x12C8 / 4808
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_44() //Position: 0x12E6 / 4838
{
	Local_408.f_12 = 0;
	Local_408.f_8 = 0;
	Local_408 = 0.0f;
	Function_45(&Local_408 + 4, 3);
	UI_HIDE("XPMultiplierSP");
	return;
}

void Function_45(int iParam0, int iParam1) //Position: 0x1319 / 4889
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_46(int iParam0) //Position: 0x132F / 4911
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (Global_6666)
	{
		return 0;
	}
	uVar0 = Function_47(Function_51(iParam0));
	iVar1 = CONVERT_TIME_OF_DAY_TO_INT(&uVar0);
	uVar2 = MAKE_TIME_OF_DAY(24, 0, 0);
	iVar3 = CONVERT_TIME_OF_DAY_TO_INT(&uVar2);
	iVar4 = CONVERT_TIME_OF_DAY_TO_INT(GET_TIME_OF_DAY());
	if ((iVar4 - iVar1) <= iVar3)
	{
		return 1;
	}
	return 0;
}

var Function_47(int iParam0) //Position: 0x1377 / 4983
{
	if (!Function_48(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_48(int iParam0) //Position: 0x1397 / 5015
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	if (!Function_49(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_49(int iParam0) //Position: 0x13BB / 5051
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_50(int iParam0) //Position: 0x13D0 / 5072
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_51(int iParam0) //Position: 0x13E7 / 5095
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

bool Function_52(struct<265> Param0) //Position: 0x14A9 / 5289
{
	if (Global_6666)
	{
		return 1;
	}
	switch (Param0.f_264)
	{
		case 0x00000000:
			if (Function_53(4) && !Global_6625)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if ((Function_53(4) && Function_53(6)) && !Global_6625)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (Function_53(26) && !Global_6625)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_53(int iParam0) //Position: 0x1523 / 5411
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_54(bool bParam0) //Position: 0x1538 / 5432
{
	if (Function_28(bParam0, 1) && !Function_28(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_55(bool bParam0) //Position: 0x1565 / 5477
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (Function_419(&(Global_43791[bParam0]), 0x20000000))
	{
		Function_418(&(Global_43791[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(&Global_43578))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Global_43578);
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			START_OBJECT_ITERATOR(&uVar0);
			iVar1 = START_OBJECT_ITERATOR(&uVar0);
			while (IS_OBJECT_VALID(&iVar1))
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar2)))
				{
					DEREFERENCE_ACTOR(&uVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar2);
					TASK_CLEAR(&uVar2);
				}
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
			DESTROY_ITERATOR(&uVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_26(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_56(1));
		}
	}
	return;
}

bool Function_56(int iParam0) //Position: 0x161F / 5663
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_57(int iParam0, int iParam1) //Position: 0x163B / 5691
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_7(iParam1) || Function_28(&iParam0 + 608, 16))
	{
		return;
	}
	if (iParam1 == Global_46760[0])
	{
		Function_60(&iParam0, &Global_11014, iParam1);
	}
	else if (iParam1 == Global_46760[1])
	{
		Function_60(&iParam0, &Global_11146, iParam1);
	}
	else if (iParam1 == Global_46760[2])
	{
		Function_60(&iParam0, &Global_11120, iParam1);
	}
	else if (iParam1 == Global_46796[1])
	{
		Function_60(&iParam0, &Global_11222, iParam1);
	}
	else if (iParam1 == Global_46796[3])
	{
		Function_60(&iParam0, &Global_11284, iParam1);
	}
	else if (iParam1 == Global_46796[4])
	{
		Function_60(&iParam0, &Global_11492, iParam1);
	}
	else if (iParam1 == Global_46816[0])
	{
		Function_60(&iParam0, &Global_11544, iParam1);
	}
	else if (iParam1 == Global_46816[1])
	{
		Function_60(&iParam0, &Global_11646, iParam1);
	}
	else if (iParam1 == Global_46816[2])
	{
		Function_60(&iParam0, &Global_11704, iParam1);
	}
	else if (iParam1 == Global_46838[1])
	{
		Function_60(&iParam0, &Global_11752, iParam1);
	}
	else if (iParam1 == Global_46838[0])
	{
		Function_60(&iParam0, &Global_11726, iParam1);
	}
	else if (iParam1 == Global_46850[0])
	{
		Function_60(&iParam0, &Global_11836, iParam1);
	}
	else if (iParam1 == Global_46850[1])
	{
		Function_60(&iParam0, &Global_11946, iParam1);
	}
	else if (iParam1 == Global_46850[2])
	{
		Function_60(&iParam0, &Global_11988, iParam1);
	}
	else if (iParam1 == Global_46866[0])
	{
		Function_60(&iParam0, &Global_12048, iParam1);
	}
	else if (iParam1 == Global_46866[1])
	{
		Function_60(&iParam0, &Global_12150, iParam1);
	}
	else if (iParam1 == Global_46866[2])
	{
		Function_60(&iParam0, &Global_11398, iParam1);
	}
	else if (iParam1 == Global_46894[2])
	{
		Function_60(&iParam0, &Global_12284, iParam1);
	}
	else if (iParam1 == Global_46894[1])
	{
		Function_60(&iParam0, &Global_12342, iParam1);
	}
	else if (iParam1 == Global_46894[0])
	{
		Function_60(&iParam0, &Global_12422, iParam1);
	}
	else if (iParam1 == Global_46894[3])
	{
		Function_60(&iParam0, &Global_12392, iParam1);
	}
	else if (iParam1 == Global_46926[0])
	{
		Function_60(&iParam0, &Global_12760, iParam1);
	}
	else if (iParam1 == Global_46926[1])
	{
		Function_60(&iParam0, &Global_12714, iParam1);
	}
	else if (iParam1 == Global_46926[2])
	{
		Function_60(&iParam0, &Global_12644, iParam1);
	}
	else if (iParam1 == Global_46914[0])
	{
		Function_60(&iParam0, &Global_12488, iParam1);
	}
	else if (iParam1 == Global_46914[1])
	{
		Function_60(&iParam0, &Global_12482, iParam1);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_55(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_6623)
	{
		Function_58(iParam1);
	}
	return;
}

void Function_58(int iParam0) //Position: 0x19A2 / 6562
{
	var uVar0;
	
	if (Global_6623 || Function_56(0x8000000))
	{
		return;
	}
	uVar0 = Function_59(iParam0);
	if (Function_26(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

int Function_59(int iParam0) //Position: 0x1A09 / 6665
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_46838[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46894[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46926[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46850[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46850[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46850[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46866[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46894[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46760[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46760[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46760[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_46796[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46796[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46838[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return &iVar0;
}

void Function_60(vector3 vParam0) //Position: 0x1D51 / 7505
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (!IS_ACTOR_VALID(&uVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(&uVar1))
		{
		}
		else
		{
			Function_71(&(Param1[iVar02]), 4);
		}
		if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
		{
			DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
		}
		iVar0++;
	}
	if (!Function_26(iParam2))
	{
		Global_21684[&vParam0 + 6247].f_32 = 0.0f;
		if (!Function_70(Global_119934, 0x4000000))
		{
			Function_65(&Global_54076, 0x4000000, 1, 0);
		}
	}
	else if (Function_28(&vParam0 + 608, 32))
	{
		if (!Function_70(Global_119934, 8388608))
		{
			Function_65(&Global_54076, 8388608, 1, 0);
		}
	}
	else if (!Function_70(Global_119934, 4194304))
	{
		Function_65(&Global_54076, 4194304, 1, 0);
	}
	Function_63(&vParam0, 0, 0);
	DESTROY_OBJECT(&vParam0);
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRifles"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumPistols"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	Function_40(&vParam0 + 384);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_61(iParam2, Function_26(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_56(1));
	return;
}

void Function_61(int iParam0, bool bParam1) //Position: 0x2031 / 8241
{
	if (!Function_7(iParam0))
	{
		return;
	}
	if (bParam1 && Function_62("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_46760[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[4])
	{
	}
	else if (iParam0 == Global_46816[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_53(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46838[1])
	{
	}
	else if (iParam0 == Global_46838[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[1])
	{
	}
	else if (iParam0 == Global_46894[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[0])
	{
	}
	else if (iParam0 == Global_46926[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[1])
	{
	}
	return;
}

int Function_62(int iParam0) //Position: 0x2787 / 10119
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_63(var uParam0, bool bParam1, bool bParam2) //Position: 0x27A9 / 10153
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_64(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
			iVar0++;
		}
	}
	return;
}

bool Function_64(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2832 / 10290
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_65(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x2852 / 10322
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_67(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_66(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_66(char* cParam0) //Position: 0x28C7 / 10439
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

bool Function_67(int iParam0, var uParam1, int iParam2) //Position: 0x2901 / 10497
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
		if (Function_69(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_68(uVar0))
		{
			case 0x00000002:
				if (!Function_70(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_68(char* cParam0) //Position: 0x297D / 10621
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

int Function_69(int iParam0) //Position: 0x2A1E / 10782
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_45(&iVar1, 2147483648);
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

bool Function_70(var uParam0, int iParam1) //Position: 0x2A5B / 10843
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_71(var uParam0, int iParam1) //Position: 0x2A6E / 10862
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_72(struct<4>[] Param0, bool bParam1) //Position: 0x2A88 / 10888
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
	while (iVar0 < Function_75((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_74(&(Param0[iVar04]), 16384);
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
								Function_73(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_74(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_111(), &Param0[iVar04] + 16))
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
								Function_73(&(Param0[iVar04]), 1);
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
							Function_73(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_74(&(Param0[iVar04]), 1);
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
					Function_73(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_73(&(Param0[iVar04]), 1);
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
					Function_74(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_74(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_111(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_111(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_74(&(Param0[iVar04]), 32768);
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

void Function_73(struct<13> Param0) //Position: 0x2EA9 / 11945
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_74(struct<13> Param0) //Position: 0x2EBC / 11964
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_75(int iParam0, bool bParam1) //Position: 0x2ED9 / 11993
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_76(vector3 vParam0) //Position: 0x2EEB / 12011
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_56(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_77(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_77(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x2F75 / 12149
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_110(&vParam0))
	{
		return 0;
	}
	Function_418(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_18(&vParam0, 2))
					{
						if (!Function_18(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_108(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_107(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_18(&vParam0, 2))
				{
					if (Function_18(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_12(0, 0, 0);
						}
						else
						{
							Function_12(0, 0, 30);
						}
						Function_17(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_18(&vParam0, 2))
					{
						if (!Function_18(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_107(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_18(&vParam0, 2))
				{
					if (Function_18(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_17(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_7(iParam2)) && !Function_106(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_105(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_18(&vParam0, 2))
					{
						if (!Function_18(&vParam0, 16))
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
								Function_107(&vParam0, 16);
								Function_97(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_18(&vParam0, 2))
				{
					if (Function_18(&vParam0, 16))
					{
						Function_17(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_18(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_18(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_107(&vParam0, 2);
			}
			else
			{
				Function_17(&vParam0, 2);
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
				if (!Function_419(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_18(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_96(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_107(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_7(iParam2))
					{
						Function_95(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_78(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_78(int iParam0) //Position: 0x33CD / 13261
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_419(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_453(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_83(473, 1, 0, 0);
		iVar0 = Function_82(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_83(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_83(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_83(476, 1, 0, 0);
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
		Function_81(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_81(7, 30);
	}
	if (Function_80(473) <= Function_79(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_79(int iParam0) //Position: 0x34BE / 13502
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_80(int iParam0) //Position: 0x34FB / 13563
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_81(int iParam0, int iParam1) //Position: 0x3534 / 13620
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

var Function_82(int iParam0) //Position: 0x359E / 13726
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

int Function_83(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x35F6 / 13814
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
	Function_94(iParam0, TO_FLOAT(bParam1), 1);
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_84(iParam0);
	return 1;
}

void Function_84(bool bParam0) //Position: 0x381E / 14366
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

void Function_85(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x38BC / 14524
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_79(390))), 32);
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
					fVar19 = (Function_80(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_80(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_91(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_89(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_86(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_35(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_86(int iParam0) //Position: 0x3EFA / 16122
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_87(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3F0B / 16139
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_88(char* cParam0) //Position: 0x4003 / 16387
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_89(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x401E / 16414
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_75(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_90(Function_75(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_90(int iParam0, int iParam1) //Position: 0x4085 / 16517
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_91(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x4097 / 16535
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
	if (((Function_92(iParam0) != 19 || Function_92(iParam0) != 17) || Function_92(iParam0) != 10) || Function_92(iParam0) != 9)
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

int Function_92(int iParam0) //Position: 0x41CB / 16843
{
	return Global_55480[iParam016].f_96;
}

void Function_93(int iParam0) //Position: 0x41DA / 16858
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

int Function_94(int iParam0, float fParam1, bool bParam2) //Position: 0x4374 / 17268
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

void Function_95(var uParam0, int iParam1) //Position: 0x45B8 / 17848
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_96(int iParam0, var uParam1, int iParam2) //Position: 0x45C5 / 17861
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_97(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x45EF / 17903
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_104(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_103(iParam1))
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
	if (!Function_100(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_98();
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

void Function_98() //Position: 0x48A2 / 18594
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_99(&uVar0, &uVar1);
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

void Function_99(var uParam0, int iParam1) //Position: 0x4915 / 18709
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

bool Function_100(bool bParam0) //Position: 0x494B / 18763
{
	if (Function_105(256))
	{
		return 0;
	}
	if (Function_105(262144))
	{
		return 0;
	}
	if (Function_102())
	{
		return 0;
	}
	if (!Function_105(1))
	{
		return 0;
	}
	if (!Function_105(4096))
	{
		return 0;
	}
	if (bParam0 && Function_101(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_105(2048))
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

int Function_101(int iParam0) //Position: 0x49C1 / 18881
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_102() //Position: 0x49D2 / 18898
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

bool Function_103(int iParam0) //Position: 0x49EB / 18923
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_104(int iParam0) //Position: 0x4A01 / 18945
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_105(int iParam0) //Position: 0x4A16 / 18966
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_106(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x4A34 / 18996
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

void Function_107(struct<17> Param0) //Position: 0x4AE3 / 19171
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_108(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4AF6 / 19190
{
	int iVar0;
	int iVar1;
	
	Function_16(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_109(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_13(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_109(int iParam0, int iParam1) //Position: 0x4B70 / 19312
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_16(iParam0);
	Function_15(&uVar0);
	PRINTNL();
	Function_13(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_110(int iParam0) //Position: 0x4B99 / 19353
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

var Function_111() //Position: 0x4BB9 / 19385
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_112(struct<82> Param0) //Position: 0x4BCE / 19406
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	char* cVar5[32];
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	struct<5> Var24;
	bool bVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(&Global_54076, "QM_TriggerAttack");
		Function_45(&Param0 + 608, 16);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		if (&Param0 + 624 == 4294967295)
		{
			(&Param0 + 624) = Function_221(0, bParam1, 3);
		}
		if (!Function_28(&Param0 + 608, 64))
		{
			*(&Param0 + 376) = 8;
		}
	}
	else if (bParam1 != Global_46914[1] || HUD_IS_FADED())
	{
		if (!Function_28(&Param0 + 608, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_220(1, 0));
			Function_219(&Param0 + 608, 0x20000000);
		}
		return;
	}
	if (Function_28(&Param0 + 608, 16))
	{
		Function_218(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_28(&Param0 + 608, 4))
	{
		return;
	}
	if (Global_6623 && !Function_28(&Param0 + 608, 4))
	{
		Function_219(&Param0 + 608, 4);
		Function_57(&Param0, bParam1);
		DECOR_SET_FLOAT(&Global_44085[bParam19] + 8, "ZombieScore", 0.0f);
		Function_217(0, 4294967295);
		Function_216();
		Function_55(bParam1);
		return;
	}
	fVar0 = Function_214(Function_215(bParam1));
	fVar1 = Function_213(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (&Param0 + 616 == 4294967295)
	{
		*(&Param0 + 616) = Function_221(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			uVar4 = &Param0 + 8[iVar35];
			if (IS_ACTOR_ALIVE(&uVar4))
			{
				Function_212(&Param0 + 8[iVar35]);
			}
			iVar3++;
		}
		Function_211(&Param0);
		*(&Param0 + 376) = 7;
		return;
	}
	if (Function_210(Function_215(bParam1)))
	{
		if (((&Param0 + 376 > 7 && !Function_28(&Param0 + 608, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
		{
			strcpy(&cVar5, "SURVIVOR_LOC:", 32);
			stradd(&cVar5, &Global_44085[bParam19] + 32, 32);
			SET_MISSION_INFO(&cVar5, "");
			if (Function_28(&Param0 + 608, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_207(&Param0, 0);
				Function_212(&Param0 + 336);
				iVar13 = 0;
				while (StackVal < (iVar13 - 1))
				{
					Function_212(&Param0 + 8[iVar135]);
					iVar13++;
				}
				Function_219(&Param0 + 608, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_218(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0,5f);
				Function_54(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(&Global_54076, "nDecayRate", 3);
				*(&Param0 + 376) = 5;
			}
			else
			{
				Function_205();
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(&Global_54076, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(&Global_54076, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (&Param0 + 376 <= 1 && &Param0 + 376 >= 6)
		{
			if (&Param0 + 376 >= 1)
			{
				Function_201(&Param0, bParam1, fVar2);
			}
			if (!Function_28(&Param0 + 608, 131072))
			{
				if (&Param0 + 376 == 6 && &Param0 + 376 < 1)
				{
					if ((Global_6629 && !Function_28(&Param0 + 608, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_219(&Param0 + 608, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar14 = Function_213(bParam1);
						fVar15 = (fVar14 % 10.0f);
						fVar16 = (fVar14 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar15 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar16));
						UI_REFRESH("ZMeter");
					}
					if (((Function_28(&Param0 + 608, 32768) && !DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && &Param0 + 376 > 5)
					{
						Function_211(&Param0);
					}
				}
			}
		}
	}
	Function_199(&Param0, bParam1);
	if (Function_28(&Param0 + 608, 1024))
	{
		Function_198(&Param0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_99146)
	{
		if (!Function_28(&Param0 + 608, 16384))
		{
			Function_219(&Param0 + 608, 16384);
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 0);
				iVar17++;
			}
		}
	}
	else if (Function_28(&Param0 + 608, 16384))
	{
		Function_45(&Param0 + 608, 16384);
		iVar17 = 0;
		while (StackVal < (iVar17 - 1))
		{
			MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 1);
			iVar17++;
		}
	}
	if (Function_28(&Param0 + 608, 262144))
	{
		if (Function_436(&Param0))
		{
			Function_45(&Param0 + 608, 262144);
			Function_196(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_46715, bParam1, Param0);
			if (!Function_26(bParam1))
			{
				if (!Function_28(&Param0 + 608, 8))
				{
					Function_219(&Param0 + 608, 8);
					Function_195();
				}
			}
		}
	}
	if (Function_28(&Param0 + 608, 524288))
	{
		if (Function_195())
		{
			Function_219(&Param0 + 608, 8);
			Function_45(&Param0 + 608, 524288);
		}
	}
	switch (&Param0 + 376)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_70(Global_119934, 65536) || !Global_6606)) && Global_6629) && !Global_6628)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
				{
					DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
				}
				Function_187(&Param0);
				Function_219(&Param0 + 608, 262144);
				if (Function_26(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_460(bParam1, 1);
					Function_181(bParam1);
					Function_217(0, 4294967295);
					Function_218(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_28(&Param0 + 608, 1))
					{
						Function_180(&Param0, bParam1);
						Function_179("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						*(&Param0 + 376) = 2;
					}
					else
					{
						*(&Param0 + 376) = 4;
					}
					Function_176("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_460(bParam1, 0);
					Function_181(bParam1);
					Function_219(&Param0 + 608, 2);
					Function_217(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					*(&Param0 + 632) = 1000.0f;
					*(&Param0 + 376) = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_170(&Param0 + 336, 1, &Param0 + 608))
			{
				SET_ANIM_SET_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo", 0);
				iVar18 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&Param0 + 336));
				if (((iVar18 != 41 || iVar18 != 42) || iVar18 != 43) || iVar18 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_138(&Param0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(&Param0 + 336, "GET_US_AMMO_P", &Global_54076, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				*(&Param0 + 376) = 3;
			}
			break;
		
		case 0x00000003:
			bVar19 = false;
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				uVar20 = &Param0 + 8[iVar175];
				if (IS_ACTOR_ALIVE(&uVar20))
				{
					if (Function_28((&Param0 + 8[iVar175])->f_32, 2))
					{
						if (DECOR_CHECK_EXIST(&uVar20, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(&uVar20, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&uVar20, "nUC_NoAmmo"));
								DECOR_REMOVE(&uVar20, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(&uVar20, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_170(&Param0 + 8[iVar175], 0, &Param0 + 8[iVar175] + 32))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
							iVar21 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&uVar20));
							Global_21684[&Param0 + 6247].f_32 = (Global_21684[&Param0 + 6247].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&Param0 + 8[iVar175]);
							Function_127(&Param0 + 8[iVar175], iVar21);
							Function_45(&Param0 + 8[iVar175] + 32, 2);
							Function_219(&Param0 + 8[iVar175] + 32, 16);
						}
						bVar19++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar20, "DLC_give_ammo") && Function_28((&Param0 + 8[iVar175])->f_32, 16)) && (GET_TASK_STATUS(&uVar20, 6) != 0 || GET_TASK_STATUS(&uVar20, 6) != 2))
					{
						Function_45(&Param0 + 8[iVar175] + 32, 16);
						AI_CLEAR_DONT_HARM_ACTOR(&uVar20);
						AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
						SET_MOVER_FROZEN(&uVar20, 0);
						RESET_ANIM_SET_FOR_ACTOR(&uVar20, 1);
						uVar22 = Vector(0.0f, 0.0f, 0.0f);
						Var24 = Vector(0.0f, 0.0f, 0.0f);
						GET_OBJECT_POSITION(&Param0 + 8[iVar175] + 8, &uVar22);
						GET_OBJECT_ORIENTATION(&Param0 + 8[iVar175] + 8, &Var24);
						TASK_PRIORITY_SET(&uVar20, true);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar20, &uVar22, -1f);
						strcpy(&cVar26, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(&uVar20))
						{
							stradd(&cVar26, "M", 64);
						}
						else
						{
							stradd(&cVar26, "F", 64);
						}
						if (Function_126(&uVar20))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "THANKS_FOR_AMMO_P", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "nTHANK_YOU", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						Param0.f_640 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(&uVar20))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
					}
					if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
					{
						DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
					}
				}
				iVar17++;
			}
			if (Global_47151[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar19);
				PRINTNL();
			}
			if (bVar19 == 0)
			{
				*(&Param0 + 376) = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(&Global_54076, "bNoSurvivorHelp", 1);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "nDecayRate"))
			{
				bVar42 = DECOR_GET_INT(&Global_54076, "nDecayRate");
				if (bVar42 == 3)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,5f);
				}
				else if (bVar42 == 2)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,75f);
				}
				else if (bVar42 == 1)
				{
					DECOR_REMOVE(&Global_54076, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_54(1);
			if (Function_121(&Param0))
			{
				DECOR_SET_FLOAT(&Global_54076, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_120(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				*(&Param0 + 376) = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 600) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_218(bParam1, 300.0f);
			}
			else
			{
				Function_218(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_28(&Param0 + 608, 8))
			{
				Function_219(&Param0 + 608, 8);
				Function_195();
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
			{
				DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
			}
			Function_119(bParam1);
			Function_118(&Param0);
			Function_207(&Param0, 1);
			Function_55(Global_43789);
			CLEAR_MISSION_INFO();
			*(&Param0 + 624) = Function_221(0, bParam1, 3);
			Function_219(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			Function_219(&Param0 + 608, 512);
			if (!Function_28(Global_21684[&Param0 + 6247].f_24, 1))
			{
				bVar43 = Function_115(Function_215(bParam1));
				Function_83(660, bVar43, 0, 0);
				Function_219(&Global_21684[&Param0 + 6247] + 24, 1);
			}
			*(&Param0 + 376) = 11;
			break;
		
		case 0x00000008:
			Function_461(&Param0, bParam1, 1);
			Function_446(&Param0, &Global_46715, bParam1);
			Function_445(&Param0, &Global_46715);
			*(&Param0 + 376) = 9;
			break;
		
		case 0x00000009:
			if (Function_436(&Param0))
			{
				if (!bParam1 != Global_46914[0])
				{
					Function_423(&Param0, bParam1, &Global_46715);
					*(&Param0 + 376) = 1;
				}
				else if (!DECOR_CHECK_EXIST(&Global_54076, "BLACKWATER_WAIT"))
				{
					Function_423(&Param0, bParam1, &Global_46715);
					DECOR_SET_FLOAT(&Global_54076, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(&Global_54076, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns");
					*(&Param0 + 376) = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(&Global_54076, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(&Global_54076, "Special_BLK_Ready");
				Function_138(&Param0, bParam1);
				Function_187(&Param0);
				Function_219(&Param0 + 608, 262144);
				Function_460(bParam1, 1);
				Function_219(&Global_21684[Function_221(111, 111, 5)7] + 20, 4);
				Function_181(bParam1);
				Function_217(0, 4294967295);
				Function_218(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], 0);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], 0);
				*(&Param0 + 376) = 3;
			}
			break;
	}
	iVar17 = 0;
	while (StackVal < (iVar17 - 1))
	{
		iVar44 = &Param0 + 8[iVar175];
		if (IS_ACTOR_VALID(&iVar44))
		{
			if (!IS_ACTOR_ALIVE(&iVar44))
			{
				if (!DECOR_CHECK_EXIST(&iVar44, "DeathTallied"))
				{
					DECOR_SET_BOOL(&iVar44, "DeathTallied", 1);
					Global_21684[&Param0 + 6247].f_28 = (Global_21684[&Param0 + 6247].f_28 + 1.0f);
					if (Function_28(Global_21684[&Param0 + 6247].f_24, 1))
					{
						Function_114(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (DECOR_CHECK_EXIST(&Param0 + 8[iVar175], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&Param0 + 8[iVar175], "nUC_NoAmmo"));
				}
				if (&iVar44 == &Param0 + 336)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
					}
					if (&Param0 + 376 <= 7)
					{
						if ((!GET_LAST_ATTACKER(&iVar44) != &Global_54076 && &Param0 + 376 != 2) && !Function_28(&Param0 + 608, 8192))
						{
							Function_219(&Param0 + 608, 8192);
							Function_176("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar45 = 0;
							while (StackVal < (iVar45 - 1))
							{
								Function_212(&Param0 + 8[iVar455]);
								SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar455], true);
								iVar45++;
							}
							if (&Param0 + 376 <= 4)
							{
								*(&Param0 + 376) = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
				{
					DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
				}
			}
			if (GET_LAST_ATTACKER(&iVar44) != &Global_54076 && !Function_28(&Param0 + 608, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
				}
				iVar46 = 0;
				while (StackVal < (iVar46 - 1))
				{
					Function_212(&Param0 + 8[iVar465]);
					SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar465], true);
					MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8[iVar465], &Global_54076);
					iVar46++;
				}
				if (&Param0 + 376 <= 7)
				{
					if (&Param0 + 376 <= 5)
					{
						*(&Param0 + 376) = 4;
					}
					Function_176("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_219(&Param0 + 608, 0x4000000);
				*(&Param0 + 624) = Function_221(0, bParam1, 3);
				Function_219(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			}
		}
		iVar17++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	}
	uVar47 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar47))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar47)), "footlock"))
		{
			Function_113(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar47, Param0);
		}
	}
	return;
}

void Function_113(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, bool bParam80, var uParam81, char* cParam82) //Position: 0x60B0 / 24752
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	uVar0 = GET_OBJECT_FROM_GRINGO(&uParam0);
	uVar1 = GET_OBJECT_NAME(&uVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
	uVar3 = STRING_GET_TOKEN((iVar2 - 2));
	fVar4 = TO_FLOAT(STRING_TO_INT(&uVar3));
	Function_219(&Global_21684[&iParam1 + 6247] + 20, FLOOR(POW(2.0f, fVar4)));
}

int Function_114(int iParam0, bool bParam1, int iParam2) //Position: 0x6107 / 24839
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
	Function_93(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_85(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_115(int iParam0) //Position: 0x6304 / 25348
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	iVar0 = Function_117(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_116(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					bVar13 = Global_11014[iVar102];
					break;
				
				case 0x00000002:
					bVar13 = Global_11120[iVar102];
					break;
				
				case 0x00000003:
					bVar13 = Global_11146[iVar102];
					break;
				
				case 0x00000004:
					bVar13 = Global_11222[iVar102];
					break;
				
				case 0x00000005:
					bVar13 = Global_11284[iVar102];
					break;
				
				case 0x00000008:
					bVar13 = Global_11544[iVar102];
					break;
				
				case 0x00000009:
					bVar13 = Global_11646[iVar102];
					break;
				
				case 0x0000000B:
					bVar13 = Global_11726[iVar102];
					break;
				
				case 0x0000000C:
					bVar13 = Global_11836[iVar102];
					break;
				
				case 0x0000000D:
					bVar13 = Global_11946[iVar102];
					break;
				
				case 0x0000000E:
					bVar13 = Global_11988[iVar102];
					break;
				
				case 0x0000000F:
					bVar13 = Global_12048[iVar102];
					break;
				
				case 0x00000010:
					bVar13 = Global_12150[iVar102];
					break;
				
				case 0x00000011:
					bVar13 = Global_11398[iVar102];
					break;
				
				case 0x00000019:
					bVar13 = Global_12284[iVar102];
					break;
				
				case 0x00000012:
					bVar13 = Global_12392[iVar102];
					break;
				
				case 0x00000013:
					bVar13 = Global_12422[iVar102];
					break;
				
				case 0x00000015:
					bVar13 = Global_12488[iVar102];
					break;
				
				case 0x00000016:
					bVar13 = Global_12644[iVar102];
					break;
				
				case 0x00000017:
					bVar13 = Global_12714[iVar102];
					break;
				
				case 0x00000018:
					bVar13 = Global_12760[iVar102];
					break;
			}
			if (!Function_28(bVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_116(int[] iParam0) //Position: 0x64EE / 25838
{
	iParam1 = iParam1;
	if (iParam1 == Global_46760[0])
	{
		iParam0[0] = 65;
		iParam0[1] = 68;
		iParam0[2] = 435;
		iParam0[3] = 428;
		iParam0[4] = 107;
		iParam0[5] = 140;
		return 6;
	}
	if (iParam1 == Global_46914[0])
	{
		iParam0[0] = 89;
		iParam0[1] = 95;
		iParam0[2] = 146;
		return 3;
	}
	if (iParam1 == Global_46816[1])
	{
		iParam0[0] = 56;
		iParam0[1] = 24;
		iParam0[2] = 138;
		iParam0[3] = 139;
		return 4;
	}
	if (iParam1 == Global_46816[0])
	{
		iParam0[0] = 54;
		iParam0[1] = 420;
		iParam0[2] = 38;
		iParam0[3] = 213;
		iParam0[4] = 55;
		return 5;
	}
	if (iParam1 == Global_46866[0])
	{
		iParam0[0] = 276;
		iParam0[1] = 237;
		iParam0[2] = 290;
		iParam0[3] = 460;
		iParam0[4] = 269;
		iParam0[5] = 283;
		return 6;
	}
	if (iParam1 == Global_46850[0])
	{
		iParam0[0] = 289;
		iParam0[1] = 392;
		iParam0[2] = 268;
		iParam0[3] = 266;
		iParam0[4] = 382;
		iParam0[5] = 245;
		iParam0[6] = 304;
		return 7;
	}
	if (iParam1 == Global_46760[2])
	{
		iParam0[0] = 487;
		iParam0[1] = 491;
		iParam0[2] = 493;
		return 3;
	}
	if (iParam1 == Global_46894[3])
	{
		iParam0[0] = 379;
		iParam0[1] = 380;
		iParam0[2] = 391;
		iParam0[3] = 455;
		return 4;
	}
	if (iParam1 == Global_46850[2])
	{
		iParam0[0] = 410;
		iParam0[1] = 411;
		iParam0[2] = 465;
		return 3;
	}
	if (iParam1 == Global_46760[1])
	{
		iParam0[0] = 152;
		iParam0[1] = 176;
		return 2;
	}
	if (iParam1 == Global_46796[1])
	{
		iParam0[0] = 133;
		iParam0[1] = 144;
		return 2;
	}
	if (iParam1 == Global_46926[2])
	{
		iParam0[0] = 29;
		iParam0[1] = 30;
		iParam0[2] = 28;
		return 3;
	}
	if (iParam1 == Global_46850[1])
	{
		iParam0[0] = 516;
		iParam0[1] = 529;
		return 2;
	}
	if (iParam1 == Global_46926[1])
	{
		iParam0[0] = 169;
		iParam0[1] = 39;
		iParam0[2] = 149;
		return 3;
	}
	if (iParam1 == Global_46866[1])
	{
		iParam0[0] = 62;
		iParam0[1] = 242;
		iParam0[2] = 244;
		iParam0[3] = 296;
		iParam0[4] = 297;
		iParam0[5] = 260;
		iParam0[6] = 295;
		iParam0[7] = 141;
		return 8;
	}
	if (iParam1 == Global_46796[3])
	{
		iParam0[0] = 505;
		iParam0[1] = 506;
		iParam0[2] = 507;
		iParam0[3] = 508;
		iParam0[4] = 510;
		iParam0[5] = 509;
		return 6;
	}
	if (iParam1 == Global_46796[4])
	{
		iParam0[0] = 400;
		return 1;
	}
	if (iParam1 == Global_46894[2])
	{
		iParam0[0] = 281;
		iParam0[1] = 282;
		iParam0[2] = 456;
		return 3;
	}
	if (iParam1 == Global_46894[0])
	{
		iParam0[0] = 396;
		iParam0[1] = 462;
		iParam0[2] = 15;
		iParam0[3] = 11;
		iParam0[4] = 461;
		return 5;
	}
	if (iParam1 == Global_46866[2])
	{
		iParam0[0] = 238;
		iParam0[1] = 530;
		iParam0[2] = 294;
		return 3;
	}
	if (iParam1 == Global_46926[0])
	{
		iParam0[0] = 404;
		return 1;
	}
	if (iParam1 == Global_46838[0])
	{
		iParam0[0] = 168;
		iParam0[1] = 176;
		iParam0[2] = 177;
		return 3;
	}
	return 0;
}

var Function_117(int iParam0) //Position: 0x691D / 26909
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

void Function_118(vector3 vParam0) //Position: 0x6AA3 / 27299
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 8[iVar05] + 16))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 8[iVar05] + 16);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 336 + 16);
	}
	return;
}

void Function_119(int iParam0) //Position: 0x6AFD / 27389
{
	var uVar0;
	
	if (Global_6623 || Function_56(0x8000000))
	{
		return;
	}
	uVar0 = Function_59(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_120(int iParam0) //Position: 0x6B37 / 27447
{
	int iVar0;
	
	if (Function_28(iParam0, 1) && Function_28(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_121(int iParam0) //Position: 0x6B6B / 27499
{
	return Function_122(&iParam0 + 600);
}

int Function_122(int iParam0) //Position: 0x6B7A / 27514
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	var uVar11;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_35()));
	}
	uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_35()));
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	ITERATE_IN_VOLUME(&uVar1, &Global_44085[Global_437899] + 8);
	START_OBJECT_ITERATOR(&uVar1);
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		uVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
		if ((!IS_ACTOR_HORSE(&uVar3) && !IS_ACTOR_HOGTIED(&uVar3)) && IS_ACTOR_ALIVE(&uVar3))
		{
			iVar4 = GET_ACTOR_ENUM(&uVar3);
			if ((iVar4 > 1128 || iVar4 < 1130) && iVar4 == 1247)
			{
				Var5 = Vector(0.0f, 0.0f, 0.0f);
				GET_POSITION(&uVar3, &Var5);
				bVar7 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar8 = (Function_28(bVar7, 1024) && bVar7 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
					iVar9 = SQUAD_GET_SIZE(&iParam0);
					if (iVar9 >= 6)
					{
						if (Function_124(StackVal, &uVar3, Global_54078) < 20.0f && !Function_64(&uVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar8 = true;
						}
					}
					if (!bVar8)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar8 = true;
						}
					}
				}
				if (bVar8)
				{
					SQUAD_JOIN(&uVar3, &uVar0);
				}
				else
				{
					SQUAD_JOIN(&uVar3, &iParam0);
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	if (SQUAD_GET_SIZE(&iParam0) > 4)
	{
		Function_123(&uVar0);
		DESTROY_OBJECT(&uVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0, 2560);
		Function_453(&(Global_43791[Global_43789]), 0x20000000);
		Function_179("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iVar10 = 0;
		while (iVar10 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar11 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar10);
			REFERENCE_ACTOR(&uVar11);
			SET_ACTOR_STAY_WITHIN_VOLUME(&uVar11, &Global_44085[Global_437899] + 8, 1, 1);
			TASK_PRIORITY_SET(&uVar11, false);
			TASK_GO_NEAR_OBJECT(&uVar11, &Global_54076, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(&uVar11))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&uVar11, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(&uVar11, 322, 0, 2, 0);
			iVar10++;
		}
		return 1;
	}
	DESTROY_OBJECT(&uVar0);
	DESTROY_OBJECT(&iParam0);
	return 0;
}

void Function_123(int iParam0) //Position: 0x6DD1 / 28113
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			iVar0++;
		}
	}
	return;
}

float Function_124(var uParam0, struct<2> Param1) //Position: 0x6E28 / 28200
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_125(&uParam0);
		Var0 = Function_125(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_125(int iParam0) //Position: 0x6E9F / 28319
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

bool Function_126(int iParam0) //Position: 0x6F0B / 28427
{
	int iVar0;
	
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 9 || iVar0 != 15) || iVar0 != 24) || iVar0 != 420) || iVar0 != 28) || iVar0 != 29) || iVar0 != 30) || iVar0 != 36) || iVar0 != 38) || iVar0 != 39) || iVar0 != 54) || iVar0 != 55) || iVar0 != 56) || iVar0 != 65) || iVar0 != 68) || iVar0 != 404) || iVar0 != 400) || iVar0 != 89) || iVar0 != 95) || iVar0 != 96) || iVar0 != 107) || iVar0 != 139) || iVar0 != 140) || iVar0 != 141) || iVar0 != 144) || iVar0 != 146) || iVar0 != 149) || iVar0 != 152) || iVar0 != 168) || iVar0 != 169) || iVar0 != 176) || iVar0 != 177) || iVar0 != 213) || iVar0 != 509) || iVar0 != 493) || iVar0 != 529) || iVar0 != 237) || iVar0 != 238) || iVar0 != 245) || iVar0 != 266) || iVar0 != 268) || iVar0 != 269) || iVar0 != 276) || iVar0 != 283) || iVar0 != 289) || iVar0 != 294) || iVar0 != 304) || iVar0 != 428) || iVar0 != 435) || iVar0 != 461) || iVar0 != 465) || iVar0 != 455) || iVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_127(int iParam0, bool bParam1) //Position: 0x707C / 28796
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	var uVar8;
	int iVar9;
	int iVar10;
	
	Function_137();
	Function_136();
	GET_POSITION(&iParam0, &Var0);
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar2, "Ammo");
	ITERATE_IN_SPHERE(&uVar2, Var0, 2.0f);
	uVar5 = START_OBJECT_ITERATOR(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar3 = &uVar5;
	}
	uVar5 = OBJECT_ITERATOR_NEXT(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar4 = &uVar5;
	}
	DESTROY_ITERATOR(&uVar2);
	Function_83(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(&uVar3) || !IS_OBJECT_VALID(&uVar4))
	{
		SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_135(bParam1, 5.0f, 1);
		Function_212(&iParam0);
		Function_134(Global_43789, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(&uVar3, &Var6);
	uVar8 = GET_OBJECT_HEADING(&uVar3);
	SET_OBJECT_POSITION(&Global_54076, Var6);
	SET_ACTOR_HEADING(&Global_54076, uVar8, 1);
	SET_MOVER_FROZEN(&iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "DLC_give_ammo", 1);
	if (!Function_133(StackVal, &iParam0, Var6))
	{
		iVar9 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar9 != 41 || iVar9 != 42) || iVar9 != 43) || iVar9 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(&Global_54076) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(&iParam0, true);
	TASK_STAND_STILL(&iParam0, 3.0f, 0, 0);
	Function_128(&iParam0, 0, &Global_54076, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_135(bParam1, 5.0f, 1);
	Function_212(&iParam0);
	Function_134(Global_43789, 10.0f);
	return;
}

var Function_128(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x7376 / 29558
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_129(&uVar0, &uParam2);
	if (uParam5 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam4)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam4);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_129(var uParam0, int iParam1) //Position: 0x7404 / 29700
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_132(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_131(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_130(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 1,6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 1,5f, 1, 0);
	return;
}

void Function_130(int iParam0, int iParam1) //Position: 0x746D / 29805
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,402189f, 1,415817f, -0,851866f), Vector(6,384388f, -147,5115f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_131(int iParam0, var uParam1) //Position: 0x74FE / 29950
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,421349f, 1,41818f, -0,861325f), Vector(-6,658212f, -134,564f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_132(int iParam0, int iParam1) //Position: 0x758F / 30095
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,442921f, 1,420794f, -0,871029f), Vector(4,479696f, -143,4034f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

bool Function_133(var uParam0, struct<2> Param1) //Position: 0x7625 / 30245
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&uParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_134(int iParam0, float fParam1) //Position: 0x7660 / 30304
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", fVar0);
	return;
}

void Function_135(bool bParam0, float fParam1, bool bParam2) //Position: 0x76A4 / 30372
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(&Global_54076, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(&Global_54076, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar0);
	if (fVar1 <= fParam1)
	{
		fVar3 = fParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (fParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(&Global_54076, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, bParam0, (fVar1 - fVar3), 0);
	}
	if (&bParam2)
	{
		bVar5 = FLOOR(fParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(&bVar6), INT_TO_STRING(bVar5), 5.0f, Function_35(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_136() //Position: 0x77E8 / 30696
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_137() //Position: 0x77FA / 30714
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_138(int iParam0, bool bParam1) //Position: 0x780F / 30735
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(&Global_54076, "bTalkedToLeader", 1);
	Function_141(StackVal, Global_54078, 1, &iParam0 + 336, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 336 + 16);
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", &(uVar0[0]), 0, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", &(uVar0[0]), &(uVar0[1]), 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), 0, 2, 0, 0);
	}
	Function_179("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_28(&iParam0 + 608, 8))
	{
		if (Function_195())
		{
			Function_219(&iParam0 + 608, 8);
		}
		else
		{
			Function_219(&iParam0 + 608, 524288);
		}
	}
	Function_219(&iParam0 + 608, 32);
	*(&iParam0 + 624) = Function_221(0, bParam1, 3);
	Function_219(&Global_21684[&iParam0 + 6247] + 24, 0x40000000);
	Function_139(&iParam0);
	return;
}

void Function_139(vector3 vParam0) //Position: 0x7B17 / 31511
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		iVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&iVar1))
		{
			if (!DECOR_CHECK_EXIST(&iVar1, "PreSaved") || (DECOR_CHECK_EXIST(&iVar1, "PreSaved") && DECOR_CHECK_EXIST(&iVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iVar1));
				}
				uVar2 = ADD_BLIP_FOR_ACTOR(&iVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(&uVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar2, 1);
				if (Global_43789 == Global_46914[0])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 2,5f);
				}
				else if (Global_43789 == Global_46816[1])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 1,75f);
				}
				UNK_0x1E98AFEC(&uVar2, 1);
				if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
				{
					DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
				}
				*(&vParam0 + 8[iVar05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_35(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &vParam0 + 8[iVar05] + 24, &iVar1, Function_35(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iVar1));
				uVar4 = Function_140(&iVar1);
				if (_GET_AMMO_AMOUNT(&Global_54076, bVar3, 1) <= 5.0f)
				{
					*(&vParam0 + 8[iVar05] + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(&iVar1, "nUC_NoAmmo"))
				{
					uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
					DECOR_SET_INT(&iVar1, "nUC_NoAmmo", &uVar5);
				}
				Function_219(&vParam0 + 8[iVar05] + 32, 2);
				uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iVar1, Function_35(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uVar6, &iVar1, Function_35(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar7 = ADD_BLIP_FOR_OBJECT(&uVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(&uVar7, 1);
				DECOR_SET_INT(&iVar1, "PauseMapBlip", &uVar7);
				SET_BLIP_NAME(&uVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar7, 1);
			}
			else
			{
				Function_134(Global_43789, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_140(int iParam0) //Position: 0x7DE5 / 32229
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(&iParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_141(struct<2> Param0, bool bParam2, int iParam3, bool bParam4) //Position: 0x7EA9 / 32425
{
	bool bVar0;
	var uVar1;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	var uVar10;
	int iVar12;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	int iVar19;
	var uVar20;
	
	if (Function_169(StackVal, Param0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	bVar0 = false;
	Global_53524.f_16 = 0;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	if (&bParam2)
	{
		Global_53524.f_24 = Global_43789;
		if (IS_ACTOR_VALID(&iParam3))
		{
			Function_168(&iParam3);
			uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_168(&iParam3), StackVal);
			VNORMALIZE(&uVar1);
			Global_53524.f_12 = UNK_0x9C40E671(&uVar1);
		}
		else
		{
			Global_53524.f_12 = Function_167(&Global_54076);
		}
		Global_53524 = Param0;
		if (IS_PS3())
		{
			Global_53524.f_4 = (StackVal + 0,1f);
		}
		bVar0 = true;
	}
	else if (&bParam4)
	{
		Global_53524.f_24 = Global_43789;
		if (!Function_166(&Global_53524, &Global_53524 + 12, &uVar3))
		{
			GET_VOLUME_CENTER(&uVar3, &Var4);
			if (Function_162(StackVal, Var4, &uVar3, &Var6, &Var8, 1))
			{
				uVar10 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var8, StackVal);
				VNORMALIZE(&uVar10);
				Global_53524.f_12 = UNK_0x9C40E671(&uVar10);
				Global_53524 = Var6;
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_53524 + 76)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_166(&Global_53524, &Global_53524 + 12, &iVar12))
	{
		Global_53524.f_24 = Function_160(StackVal, Param0, 0.0f, 1);
		if (Function_7(Global_53524.f_24))
		{
			iVar12 = &Global_44085[Global_53524.f_249] + 8;
			GET_VOLUME_CENTER(&iVar12, &Var13);
			if (Function_162(StackVal, Var13, &iVar12, &Var15, &Var17, 0))
			{
				iVar19 = Function_159(StackVal, Var15, 1);
				if ((StackVal && ((iVar19 == Global_46746[0] && iVar19 == Global_46746[2]) && iVar19 == Global_46746[1]) != 3) && Global_43787 != 1)
				{
					Global_53524 = Vector(-3515,646f, 19,234f, 4205,955f);
					Global_53524.f_12 = 225,789f;
				}
				else if (Global_53524.f_24 == Global_46914[1])
				{
					Global_53524 = Vector(-66,023f, 116,861f, 1411,445f);
					Global_53524.f_12 = 64,688f;
				}
				else if (Global_53524.f_24 == Global_46796[3])
				{
					Global_53524 = Vector(-4504,957f, 20,121f, 3406,793f);
					Global_53524.f_12 = 324,417f;
				}
				else if (Global_53524.f_24 == Global_46894[1])
				{
					Global_53524 = Vector(-746,495f, 67,416f, 3414,803f);
					Global_53524.f_12 = 316,104f;
				}
				else if (Global_53524.f_24 == Global_46894[3])
				{
					Global_53524 = Vector(451,281f, 78,306f, 3474,125f);
					Global_53524.f_12 = 79,05f;
				}
				else
				{
					uVar20 = Vector(StackVal, StackVal, StackVal) - Vector(Var15, Var17, StackVal);
					VNORMALIZE(&uVar20);
					Global_53524.f_12 = UNK_0x9C40E671(&uVar20);
					Global_53524 = Var15;
				}
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else if (Global_43789 == Global_46926[0])
			{
				Global_53524 = Vector(-737,414f, 178,366f, 782,796f);
				Global_53524.f_12 = 117,832f;
				Global_53524.f_24 = Global_46926[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_53524.f_24 = Global_43789;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_142();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_142() //Position: 0x82B7 / 33463
{
	Function_155();
	Function_154();
	Function_154();
	Function_153();
	Function_153();
	Function_152();
	Function_152();
	Function_149(0);
	Function_149(0);
	Function_147();
	Function_146();
	Function_145();
	Function_144();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_143();
	return;
}

void Function_143() //Position: 0x8302 / 33538
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

void Function_144() //Position: 0x8408 / 33800
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

void Function_145() //Position: 0x843B / 33851
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

void Function_146() //Position: 0x85CE / 34254
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

void Function_147() //Position: 0x8787 / 34695
{
	Function_148(&Global_42918, 1, 0);
	return;
}

void Function_148(struct<2317> Param0) //Position: 0x8795 / 34709
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
	
	uVar0 = Function_111();
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

struct<8> Function_149(int iParam0) //Position: 0x89B2 / 35250
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_151((50 + iVar4)) + Function_151((183 + iVar4))) + Function_151((90 + iVar4)));
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
	Function_150(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_150(int iParam0, bool bParam1, bool bParam2) //Position: 0x8A59 / 35417
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
		Function_94(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_93(iParam0);
	if (&bParam2)
	{
		Function_85(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_151(bool bParam0) //Position: 0x8CF5 / 36085
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_152() //Position: 0x8D36 / 36150
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
		iVar2 = ((Function_151((50 + iVar3) + 15) + Function_151((183 + iVar3) + 15)) + Function_151((90 + iVar3) + 15));
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
	Function_150(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_153() //Position: 0x8DBF / 36287
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
			iVar2 = ((Function_151((50 + iVar3) + 8) + Function_151((183 + iVar3) + 8)) + Function_151((90 + iVar3) + 8));
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
	Function_150(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_154() //Position: 0x8E56 / 36438
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
		iVar2 = ((Function_151((50 + iVar3)) + Function_151((183 + iVar3))) + Function_151((90 + iVar3)));
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
	Function_150(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_155() //Position: 0x8ED5 / 36565
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_156(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_150(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_156(int iParam0, float fParam1, int iParam2) //Position: 0x8F12 / 36626
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
	Function_94(iParam0, fParam1, 1);
	Function_93(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_85(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
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

int Function_157(int iParam0) //Position: 0x911E / 37150
{
	if (!Function_158(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_158(int iParam0) //Position: 0x9138 / 37176
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_159(struct<2> Param0, bool bParam2) //Position: 0x914E / 37198
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 4294967295;
	while (iVar1 > 146 && !bVar0)
	{
		if (StackVal == 2)
		{
			if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
				{
					iVar2 = iVar1;
					bVar0 = true;
				}
			}
		}
		iVar1++;
	}
	if (&bParam2)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

var Function_160(struct<2> Param0, float fParam2, int iParam3) //Position: 0x91BA / 37306
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_169(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_161(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (!Function_419(&(Global_43791[iVar5]), 4096) && !IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iVar59] + 8))
			{
				iVar4 = 0;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_7(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_161(bool bParam0) //Position: 0x92BA / 37562
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_7(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_44085[bParam09];
		}
		else
		{
			bVar0 = Global_44085[bParam09];
			bVar0 = Global_44085[bVar09];
		}
	}
	return bVar0;
}

bool Function_162(struct<2> Param0, int iParam2, struct<2> Param3, bool bParam5) //Position: 0x9312 / 37650
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	var uVar13;
	int iVar16;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	var uVar25;
	
	if (Function_169(StackVal, Param0) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(&Global_43578, Param0, 2096, 0,1f, 300.0f, Function_165(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) < 0)
	{
		UNK_0xDF93BD7C(&uVar0);
		return 0;
	}
	bVar7 = -1.0f;
	bVar9 = false;
	iVar1 = 0;
	while (iVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar0, iVar1, &vVar2);
		Var5 = vVar2.x;
		Var5.f_4 = vVar2.y;
		Var5.f_8 = vVar2.z;
		if ((bVar7 > 0.0f || bVar7 < VDIST(Param0, Var5)) && !IS_POINT_IN_VOLUME(Var5, &iParam2))
		{
			bVar7 = VDIST(Param0, Var5);
			Param3 = Var5;
			uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, iVar1);
			bVar9 = true;
		}
		iVar1++;
	}
	UNK_0xDF93BD7C(&uVar0);
	if (bVar9)
	{
		Function_164(StackVal, Param3);
		vVar10 = { StackVal, StackVal, Function_164(StackVal, Param3) };
		if (!bParam5)
		{
			UNK_0x19D652F9(&uVar8, 100.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -100.0f, &vVar10, &iVar16);
		}
		else
		{
			UNK_0x19D652F9(&uVar8, 10.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -10.0f, &vVar10, &iVar16);
		}
		Function_163(&uVar13);
		Var19 = Function_163(&uVar13);
		Function_163(&iVar16);
		Var21 = Function_163(&iVar16);
		GET_VOLUME_CENTER(&iParam2, &Var23);
		if (!bParam5)
		{
			if (VDIST(Var19, Var23) >= VDIST(Var21, Var23))
			{
				bParam4 = Var19;
			}
			else
			{
				bParam4 = Var21;
			}
		}
		else
		{
			uVar25 = Param3;
			Param3 = Var21;
			if (!IS_POINT_IN_VOLUME(Var19, &iParam2))
			{
				Param3 = Var19;
			}
			bParam4 = Var23;
		}
	}
	return bVar9;
}

struct<8> Function_163(vector3 vParam0) //Position: 0x94CC / 38092
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_164(vector3 vParam0) //Position: 0x94EE / 38126
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_165(int iParam0, int iParam1) //Position: 0x950C / 38156
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_166(float fParam0, var uParam1, int iParam2) //Position: 0x951F / 38175
{
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (Function_419(&(Global_43791[Global_46914[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 298,377f;
			fParam0 = Vector(422,321f, 101,465f, 1199,226f);
			return 1;
		}
	}
	if (Function_419(&(Global_43791[Global_46760[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 214,92f;
			fParam0 = Vector(-1812,829f, 22,935f, 2813,963f);
			return 1;
		}
	}
	if (Function_419(&(Global_43791[Global_46760[12]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 24,686f;
			fParam0 = Vector(-2897,155f, 17,974f, 2715,677f);
			return 1;
		}
	}
	if (Function_419(&(Global_43791[Global_46796[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 332,057f;
			fParam0 = Vector(-3911,452f, 31,16f, 2975,941f);
			return 1;
		}
	}
	if (Function_419(&(Global_43791[Global_46866[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 285,436f;
			fParam0 = Vector(-1402,147f, 10,939f, 4317,528f);
			return 1;
		}
	}
	return 0;
}

var Function_167(int iParam0) //Position: 0x976D / 38765
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_168(int iParam0) //Position: 0x9779 / 38777
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_169(vector3 vParam0) //Position: 0x978B / 38795
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_170(int iParam0, bool bParam1, int iParam2) //Position: 0x97A3 / 38819
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(&iParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0 + 24) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076))) && !FIRE_IS_ACTOR_ON_FIRE(&iParam0)) && IS_ACTOR_ALIVE(&iParam0)) && !Function_172(&Global_54076, 0, 0))
		{
			DECOR_REMOVE(&iParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iParam0));
		bVar0 = _GET_AMMO_AMOUNT(&Global_54076, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		if (Function_172(&Global_54076, 0, 0) || !IS_ACTOR_ALIVE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_28(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_171(&Global_54076, &iParam0) > 3.0f)
				{
					Function_219(&iParam2, 65536);
					Function_176("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				uVar2 = Function_140(&iParam0);
				uVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar2, "", "", "", 4, 0);
				DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_28(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_171(&Global_54076, &iParam0) > 3.0f)
			{
				Function_219(&iParam2, 65536);
				Function_176("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
		{
			uVar4 = Function_140(&iParam0);
			uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
			DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar5);
		}
		return 0;
	}
	if (!Function_172(&Global_54076, 0, 0))
	{
		if (bParam1)
		{
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 24, 10, "@GENERIC.USE", "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&iParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
			}
			uVar6 = Function_140(&iParam0);
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iParam0 + 16);
	}
	return 0;
}

float Function_171(var uParam0, int iParam1) //Position: 0x9BB9 / 39865
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

bool Function_172(int iParam0, bool bParam1, bool bParam2) //Position: 0x9CAE / 40110
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
	if (Function_175(&iParam0))
	{
		return 1;
	}
	if (Function_174(&iParam0))
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
	if (Function_173())
	{
		return 1;
	}
	return 0;
}

bool Function_173() //Position: 0x9D72 / 40306
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_174(int iParam0) //Position: 0x9D89 / 40329
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_175(int iParam0) //Position: 0x9D95 / 40341
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9DA4 / 40356
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_177(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_177(int iParam0) //Position: 0x9E2F / 40495
{
	char* cVar0[16];
	
	if (!Function_178())
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

bool Function_178() //Position: 0x9E6E / 40558
{
	if (Function_28(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_179(float fParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9E89 / 40585
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
			Var0 = { StackVal, StackVal, StackVal, Function_177(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&fParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&fParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_180(int iParam0, bool bParam1) //Position: 0x9F1E / 40734
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&iParam0 + 336, 325, 0, 2, 0);
	SET_BLIP_NAME(&uVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(&uVar0, 1);
	(&iParam0 + 336 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_35(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 336 + 24, &iParam0 + 336, Function_35(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	if (&iParam0 + 624 == 4294967295)
	{
		*(&iParam0 + 624) = Function_221(0, bParam1, 3);
	}
	*(&iParam0 + 336 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 336 + 24, 10, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(&iParam0 + 336, "Core", 1);
	return;
}

void Function_181(bool bParam0) //Position: 0xA006 / 40966
{
	var uVar0;
	var uVar1;
	var uVar5;
	var uVar6;
	var uVar9;
	var uVar11;
	var uVar12;
	var uVar13;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_44085[bParam09] + 32);
	PRINTNL();
	if (Function_27(bParam0))
	{
		if ((bParam0 != Global_46838[1] || bParam0 != Global_46894[1]) || bParam0 != Global_46894[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_OBJECT_POSITION(&Global_44085[bParam09] + 8, &uVar1);
			uVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0, 2, 0);
			SET_BLIP_NAME(&uVar0, "Status_SafeZone");
			UNK_0xFF3DB575(&uVar0, 1);
			SET_BLIP_PRIORITY(&uVar0, 3);
			uVar5 = Global_43791[bParam0];
			Function_219(&uVar5, 0x8000000);
			Function_219(&uVar5, 0x10000000);
			Global_43791[bParam0] = uVar5;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_VOLUME_SCALE(&Global_44085[bParam09] + 8, &uVar9);
			uVar6 = Function_186(&Global_44085[bParam09] + 8, 563, 0.0f);
			SET_BLIP_NAME(&uVar6, "Status_UnderAttack");
			UNK_0xFF3DB575(&uVar6, 1);
			uVar11 = Function_215(bParam0);
			uVar12 = Function_221(111, 111, 5);
			Function_185(uVar11, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_184(uVar11, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_182(uVar12);
			uVar13 = Global_43791[bParam0];
			Function_219(&uVar13, 0x1000000);
			Function_219(&uVar13, 0x10000000);
			Global_43791[bParam0] = uVar13;
		}
	}
	return;
}

void Function_182(int iParam0) //Position: 0xA1C7 / 41415
{
	int iVar0;
	int iVar1;
	
	if (&iParam0 == 4294967295)
	{
		iParam0 = Function_221(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar1) && !Function_183(1))
	{
		iVar0 = 1;
		iVar1 = &Global_11014[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar1) && !Function_183(2))
	{
		iVar0 = 2;
		iVar1 = &Global_11120[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar1) && !Function_183(3))
	{
		iVar0 = 3;
		iVar1 = &Global_11146[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar1) && !Function_183(4))
	{
		iVar0 = 4;
		iVar1 = &Global_11222[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar1) && !Function_183(5))
	{
		iVar0 = 5;
		iVar1 = &Global_11284[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar1) && !Function_183(8))
	{
		iVar0 = 8;
		iVar1 = &Global_11544[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar1) && !Function_183(9))
	{
		iVar0 = 9;
		iVar1 = &Global_11646[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar1) && !Function_183(11))
	{
		iVar0 = 11;
		iVar1 = &Global_11726[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar1) && !Function_183(12))
	{
		iVar0 = 12;
		iVar1 = &Global_11836[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar1) && !Function_183(13))
	{
		iVar0 = 13;
		iVar1 = &Global_11946[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar1) && !Function_183(14))
	{
		iVar0 = 14;
		iVar1 = &Global_11988[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar1) && !Function_183(15))
	{
		iVar0 = 15;
		iVar1 = &Global_12048[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar1) && !Function_183(16))
	{
		iVar0 = 16;
		iVar1 = &Global_12150[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar1) && !Function_183(17))
	{
		iVar0 = 17;
		iVar1 = &Global_11398[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar1) && !Function_183(18))
	{
		iVar0 = 18;
		iVar1 = &Global_12392[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar1) && !Function_183(19))
	{
		iVar0 = 19;
		iVar1 = &Global_12422[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar1) && !Function_183(21))
	{
		iVar0 = 21;
		iVar1 = &Global_12488[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar1) && !Function_183(22))
	{
		iVar0 = 22;
		iVar1 = &Global_12644[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar1) && !Function_183(23))
	{
		iVar0 = 23;
		iVar1 = &Global_12714[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar1) && !Function_183(24))
	{
		iVar0 = 24;
		iVar1 = &Global_12760[02] + 8;
	}
	Global_21684[&iParam07].f_16 = iVar0;
	Global_21684[&iParam07].f_24 = &iVar1;
	return;
}

bool Function_183(int iParam0) //Position: 0xA531 / 42289
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_117(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA555 / 42325
{
	while (&iParam4 > 60)
	{
		iParam4 = (&iParam4 - 60);
		iParam3 = &iParam3 + 1;
	}
	while (&iParam3 > 60)
	{
		iParam3 = (&iParam3 - 60);
		iParam2 = &iParam2 + 1;
	}
	while (&iParam2 > 24)
	{
		iParam2 = (&iParam2 - 24);
		iParam1 = &iParam1 + 1;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11014[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11120[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11146[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11222[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11284[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11544[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11646[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11726[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11836[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11946[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11988[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12048[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12150[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11398[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12392[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12422[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12488[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12644[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12714[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12760[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
	}
}

void Function_185(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xA874 / 43124
{
	switch (iParam0)
	{
		case 0x00000001:
			*(&Global_11014[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000002:
			*(&Global_11120[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000003:
			*(&Global_11146[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000004:
			*(&Global_11222[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000005:
			*(&Global_11284[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000008:
			*(&Global_11544[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000009:
			*(&Global_11646[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000B:
			*(&Global_11726[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000C:
			*(&Global_11836[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000D:
			*(&Global_11946[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000E:
			*(&Global_11988[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000F:
			*(&Global_12048[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000010:
			*(&Global_12150[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000011:
			*(&Global_11398[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000012:
			*(&Global_12392[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000013:
			*(&Global_12422[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000015:
			*(&Global_12488[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000016:
			*(&Global_12644[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000017:
			*(&Global_12714[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000018:
			*(&Global_12760[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
	}
}

var Function_186(var uParam0, int iParam1, int iParam2) //Position: 0xAB17 / 43799
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
	if (IS_BLIP_VALID(&iVar0))
	{
		if (GET_BLIP_ICON(&iVar0) == iParam1)
		{
			return &iVar0;
		}
		REMOVE_BLIP(&iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(&uParam0, iParam1, &iParam2, 2, 0);
	if (IS_BLIP_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_187(int iParam0) //Position: 0xAB70 / 43888
{
	Function_193(&iParam0 + 384, "DLC_give_ammo", 5, 1);
	Function_193(&iParam0 + 384, "custom/DLC_give_ammo", 8, 1);
	Function_193(&iParam0 + 384, "ZombiePack_Footlocker", 1, 1);
	Function_188(&iParam0 + 384);
	return;
}

bool Function_188(struct<2>[] Param0) //Position: 0xABE4 / 44004
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_192();
	iVar1 = 0;
	if (!Function_43(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_191(&(Param0[iVar02]), 8);
		}
		else if (Function_190())
		{
			iVar1 = 1;
			Function_191(&(Param0[iVar02]), 8);
		}
		Function_191(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_43(&(Param0[iVar02]), 4))
		{
			if (!Function_43(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_43(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_43(&(Param0[02]), 8) || iVar1));
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
				Function_191(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_43(&(Param0[iVar02]), 4))
		{
			if (!Function_43(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
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
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_191(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_191(&(Param0[iVar02]), 2);
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
	Function_189();
	return 1;
}

void Function_189() //Position: 0xAFA6 / 44966
{
	if (!Function_56(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_190() //Position: 0xAFE6 / 45030
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

void Function_191(struct<13> Param0) //Position: 0xB014 / 45076
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_192() //Position: 0xB027 / 45095
{
	if (!Function_56(128))
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

var Function_193(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB069 / 45161
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_194(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_191(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_194(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB0A7 / 45223
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_43(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_191(&(Param0[iVar02]), 4);
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

bool Function_195() //Position: 0xB176 / 45430
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar1, "ZombiePack_foot");
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		if (!DECOR_CHECK_EXIST(&uVar2, "GringoIsDone"))
		{
			uVar3 = ADD_BLIP_FOR_OBJECT(&uVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(&uVar3, "Chest_BlipName");
			DECOR_SET_INT(&uVar2, "ChestBlip_AsInt", &uVar3);
			SET_BLIP_PRIORITY(&uVar3, 1);
			if (Global_43789 == Global_46914[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 2,3f);
			}
			else if (Global_43789 == Global_46926[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 1,5f);
			}
		}
		bVar0 = true;
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return bVar0;
}

void Function_196(var uParam0, var uParam1, struct<82> Param2) //Position: 0xB26F / 45679
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	char* cVar5[32];
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	var uVar17;
	float fVar18;
	struct<2> Var19;
	struct<2> Var21;
	var uVar23;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = Function_197(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), &uParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(&uVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(&uVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			uVar14 = GET_OBJECTSET_FROM_OBJECT(&uVar1);
			iVar13 = 0;
			while (iVar13 < (GET_OBJECTSET_SIZE(&uVar14) - 1))
			{
				uVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar13, &uVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(&uVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				uVar17 = STRING_GET_TOKEN((iVar16 - 1));
				fVar18 = TO_FLOAT(STRING_TO_INT(&uVar17));
				if (!Function_28(Global_21684[&Param2 + 6247].f_20, FLOOR(POW(2.0f, fVar18))))
				{
					Var19 = Vector(0.0f, 0.0f, 0.0f);
					Var21 = Vector(0.0f, 0.0f, 0.0f);
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(&uVar15, &Var19);
					GET_OBJECT_ORIENTATION(&uVar15, &Var21);
					uVar23 = CREATE_GRINGO_IN_LAYOUT(&uParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", Var19, Var21);
					ADD_OBJECT_TO_OBJECTSET(&uVar23, &uVar3);
				}
				iVar13++;
			}
			bVar4 = true;
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(&uVar3);
}

var Function_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81) //Position: 0xB3F9 / 46073
{
	return Global_21684[&iParam0 + 6247].f_20;
}

void Function_198(vector3 vParam0) //Position: 0xB40E / 46094
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < (vParam0.z - 1))
	{
		if (Function_28((&vParam0 + 8[iVar15])->f_32, 1))
		{
			if (IS_ACTOR_ALIVE(&vParam0 + 8[iVar15]))
			{
				Var2 = Vector(0.0f, 0.0f, 0.0f);
				GET_OBJECT_POSITION(&vParam0 + 8[iVar15] + 8, &Var2);
				if (STREAMING_ARE_BOUNDS_LOADED(Var2, 3.0f))
				{
					if (!Function_64(&vParam0 + 8[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_45(&vParam0 + 8[iVar15] + 32, 1);
						SET_OBJECT_POSITION(&vParam0 + 8[iVar15], Var2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_45(&vParam0 + 608, 1024);
	}
	return;
}

void Function_199(struct<649> Param0) //Position: 0xB4D1 / 46289
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_200(&iVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(&iVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (&iVar0 == &Param0 + 8[iVar15])
			{
				uVar3 = &iVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(&uVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_46816[0])
		{
			if (!Function_28(&Param0 + 608, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(&uVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(&uVar3))
				{
					if (Function_171(&uVar3, &Global_54076) > 3,5f)
					{
						Function_219(&Param0 + 608, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(&uVar3, 118, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						Param0.f_648 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_28(&Param0 + 608, 2))
		{
			fVar6 = Function_171(&uVar3, &Global_54076);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_28((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_219(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
			else if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else if (Function_28(&Param0 + 608, 512))
		{
			if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_171(&uVar3, &Global_54076);
			if (fVar7 < 16.0f && !Function_28((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_219(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_28((&Param0 + 8[iVar25])->f_32, 8))
			{
				Function_219(&Param0 + 8[iVar25] + 32, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_648 = fVar4;
			}
			else if (!Function_28((&Param0 + 8[iVar25])->f_32, 2))
			{
				if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
					Param0.f_640 = fVar4;
					Param0.f_648 = fVar4;
				}
			}
			else if (fVar4 - Param0.f_648) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
		}
	}
	return;
}

bool Function_200(var uParam0, int iParam1, bool bParam2) //Position: 0xB951 / 47441
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	ITERATE_IN_SPHERE(&uVar0, Global_54078, &iParam1);
	bVar1 = false;
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2) && !bVar1)
	{
		iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
		if (IS_ACTOR_RIDING(&iVar3))
		{
			if (&bParam2)
			{
				uParam0 = &iVar3;
			}
		}
		else
		{
			uParam0 = &iVar3;
		}
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			bVar1 = true;
		}
		else
		{
			uParam0 = "";
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return bVar1;
}

void Function_201(int iParam0, int iParam1, bool bParam2) //Position: 0xB9E3 / 47587
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Global_6623 || Function_56(0x8000000))
	{
		return;
	}
	uVar0 = Function_59(iParam1);
	if (iParam1 == Global_46760[0])
	{
		uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "spawnresrict_2");
		if (IS_VOLUME_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
			{
				if (!Function_28(&iParam0 + 608, 0x2000000))
				{
					Function_45(&iParam0 + 608, 4194304);
					Function_45(&iParam0 + 608, 8388608);
					Function_45(&iParam0 + 608, 0x1000000);
					Function_45(&iParam0 + 608, 1048576);
					Function_45(&iParam0 + 608, 2097152);
					Function_219(&iParam0 + 608, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_45(&iParam0 + 608, 0x2000000);
		}
	}
	if (!Function_28(&iParam0 + 608, 2097152))
	{
		if (bParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_219(&iParam0 + 608, 1048576);
			Function_219(&iParam0 + 608, 2097152);
			Function_219(&iParam0 + 608, 4194304);
			Function_219(&iParam0 + 608, 8388608);
			Function_219(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	if (!Function_28(&iParam0 + 608, 1048576))
	{
		if (bParam2 <= 40.0f && bParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_219(&iParam0 + 608, 1048576);
			Function_219(&iParam0 + 608, 4194304);
			Function_219(&iParam0 + 608, 8388608);
			Function_219(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	iVar2 = Function_202(StackVal, Global_54078, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_28(&iParam0 + 608, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_219(&iParam0 + 608, 4194304);
		Function_219(&iParam0 + 608, 8388608);
		Function_219(&iParam0 + 608, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_28(&iParam0 + 608, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_219(&iParam0 + 608, 8388608);
		Function_219(&iParam0 + 608, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_28(&iParam0 + 608, 0x1000000))
	{
		Function_219(&iParam0 + 608, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_202(struct<2> Param0, float fParam2, var uParam3, var uParam4, var uParam5) //Position: 0xBCED / 48365
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_35(), 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &uParam3, fParam2));
	uVar1 = Function_203(&uVar0, &uParam4, &uParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_203(var uParam0, var uParam1, bool bParam2) //Position: 0xBD29 / 48425
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_35(), &Global_46715, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(&uVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(&uVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		iVar3 = 0;
		while (iVar3 <= iVar2)
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, &uVar0);
			if (IS_OBJECT_VALID(&uVar4))
			{
				uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
				if (IS_ACTOR_VALID(&uVar5))
				{
					if (Function_204(&uVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(&uVar5))
						{
							if (&bParam2)
							{
								if (Function_64(&uVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	return iVar1;
}

bool Function_204(int iParam0) //Position: 0xBE07 / 48647
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_36(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

void Function_205() //Position: 0xBE56 / 48726
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = Function_215(Global_43789);
	fVar1 = Function_213(Global_43789);
	fVar2 = Function_214(iVar0);
	iVar3 = (((fVar2 - fVar1) / fVar2) * 1,5f);
	iVar3 = Function_206(0,33f, Function_165(iVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(iVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_54(1);
	return;
}

int Function_206(int iParam0, int iParam1) //Position: 0xBEA4 / 48804
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_207(vector3 vParam0) //Position: 0xBEB7 / 48823
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<5> Var4;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&uVar1))
		{
			SET_MOVER_FROZEN(&uVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&uVar1, 4);
			if (!Function_28(&vParam0 + 608, 0x4000000))
			{
				MEMORY_CLEAR_ALL(&uVar1);
				MEMORY_CONSIDER_AS(&uVar1, &Global_54076, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(&uVar1);
			iVar2 = Vector(0.0f, 0.0f, 0.0f);
			Var4 = Vector(0.0f, 0.0f, 0.0f);
			GET_OBJECT_POSITION(&vParam0 + 8[iVar05] + 8, &iVar2);
			GET_OBJECT_ORIENTATION(&vParam0 + 8[iVar05] + 8, &Var4);
			if (!&bParam1)
			{
				TASK_PRIORITY_SET(&uVar1, true);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar1, &iVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, true);
				if (!Function_28(&vParam0 + 608, 0x4000000))
				{
					TASK_PRIORITY_SET(&uVar1, false);
					TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_208(&vParam0, &vParam0, 0);
	return;
}

void Function_208(int iParam0, int iParam1, int iParam2) //Position: 0xBFB8 / 49080
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_209(&uVar1, &iParam1, iParam2);
		}
		iVar0++;
	}
	return;
}

void Function_209(var uParam0, var uParam1, bool bParam2) //Position: 0xC010 / 49168
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		iVar0++;
	}
	return;
}

bool Function_210(int iParam0) //Position: 0xC062 / 49250
{
	int iVar0;
	
	iVar0 = Function_117(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_26(iVar0) || Function_183(iParam0));
}

void Function_211(int iParam0) //Position: 0xC0A1 / 49313
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (!Function_28(&iParam0 + 608, 512))
	{
		fVar0 = Function_213(Global_43789);
		iVar1 = Function_215(Global_43789);
		if (iVar1 == 0 && &iParam0 + 632 >= 120.0f)
		{
			fVar2 = Function_214(iVar1);
			iVar3 = ((fVar0 / fVar2) * 100.0f);
			if (iVar3 <= 120.0f)
			{
				(&iParam0 + 632) = 1000.0f;
				return;
			}
			if (iVar3 == &iParam0 + 632)
			{
				fVar4 = (fVar0 % 10.0f);
				fVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar5));
				UI_REFRESH("ZMeter");
				*(&iParam0 + 632) = iVar3;
			}
		}
	}
	return;
}

void Function_212(int iParam0) //Position: 0xC16C / 49516
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
	if (GET_BLIP_ICON(&uVar0) == 325)
	{
		REMOVE_BLIP(&uVar0);
	}
	uVar1 = DECOR_GET_INT(&iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(&uVar1))
	{
		REMOVE_BLIP(&uVar1);
	}
	DECOR_REMOVE(&iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
	{
		uVar2 = DECOR_GET_INT(&iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uVar2);
		}
		DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(&iParam0 + 24))
	{
		DESTROY_VOLUME(&iParam0 + 24);
	}
	return;
}

var Function_213(bool bParam0) //Position: 0xC246 / 49734
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	uVar2 = &Global_44085[bParam09] + 8;
	if (IS_VOLUME_VALID(&uVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(&uVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(&uVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_214(int iParam0) //Position: 0xC2A5 / 49829
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_215(bool bParam0) //Position: 0xC3E8 / 50152
{
	if (bParam0 == Global_46760[0])
	{
		return 1;
	}
	if (bParam0 == Global_46760[2])
	{
		return 2;
	}
	if (bParam0 == Global_46760[1])
	{
		return 3;
	}
	if (bParam0 == Global_46796[1])
	{
		return 4;
	}
	if (bParam0 == Global_46796[3])
	{
		return 5;
	}
	if (bParam0 == Global_46816[0])
	{
		return 8;
	}
	if (bParam0 == Global_46816[1])
	{
		return 9;
	}
	if (bParam0 == Global_46838[0])
	{
		return 11;
	}
	if (bParam0 == Global_46850[0])
	{
		return 12;
	}
	if (bParam0 == Global_46850[1])
	{
		return 13;
	}
	if (bParam0 == Global_46850[2])
	{
		return 14;
	}
	if (bParam0 == Global_46866[0])
	{
		return 15;
	}
	if (bParam0 == Global_46866[1])
	{
		return 16;
	}
	if (bParam0 == Global_46866[2])
	{
		return 17;
	}
	if (bParam0 == Global_46894[2])
	{
		return 25;
	}
	if (bParam0 == Global_46894[3])
	{
		return 18;
	}
	if (bParam0 == Global_46894[0])
	{
		return 19;
	}
	if (bParam0 == Global_46914[0])
	{
		return 21;
	}
	if (bParam0 == Global_46926[2])
	{
		return 22;
	}
	if (bParam0 == Global_46926[1])
	{
		return 23;
	}
	if (bParam0 == Global_46926[0])
	{
		return 24;
	}
	if (bParam0 == Global_46838[1])
	{
		return 26;
	}
	if (bParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

void Function_216() //Position: 0xC56E / 50542
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar0, "ZombiePack_foot");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
		if (IS_BLIP_VALID(&uVar2))
		{
			REMOVE_BLIP(&uVar2);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

var Function_217(bool bParam0, int iParam1) //Position: 0xC5DA / 50650
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "player_sleep");
		if (&iParam1 == Global_46736[2])
		{
			ITERATE_IN_SPHERE(StackVal, &uVar1, Vector(123,033f, 72,791f, 2669,954f), 10.0f);
		}
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		if (IS_OBJECT_VALID(&uVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(&uVar2);
			if (IS_GRINGO_VALID(&bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(&bVar3, bParam0);
				uVar4 = GET_OBJECT_FROM_GRINGO(&bVar3);
				uVar5 = GET_BLIP_ON_OBJECT(&uVar4);
				if (IS_BLIP_VALID(&uVar5))
				{
					REMOVE_BLIP(&uVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(&uVar4, "SavingAtBedAllowed", 1);
					uVar5 = ADD_BLIP_FOR_OBJECT(&uVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uVar5, 1);
					if (&iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(&uVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(&uVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return iVar0;
}

void Function_218(bool bParam0, float fParam1) //Position: 0xC719 / 50969
{
	DECOR_SET_FLOAT(&Global_44085[bParam09] + 8, "ZombieScore", fParam1);
	return;
}

void Function_219(var uParam0, bool bParam1) //Position: 0xC73D / 51005
{
	uParam0 = (uParam0 || bParam1);
	return;
}

bool Function_220(int iParam0, bool bParam1) //Position: 0xC74E / 51022
{
	int iVar0;
	
	iVar0 = Function_157(iParam0);
	if (!Function_50(iVar0))
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

int Function_221(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC78C / 51084
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_225(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_222(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_222(bParam0, bParam1, bParam2, 4294967295);
}

int Function_222(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC7EA / 51178
{
	var uVar0;
	
	if (!Function_224(bParam2))
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
	uVar0 = Function_225(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_223(uVar0);
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

var Function_223(int iParam0) //Position: 0xC94E / 51534
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

bool Function_224(int iParam0) //Position: 0xC98C / 51596
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_225(int iParam0, int iParam1, int iParam2) //Position: 0xC9A1 / 51617
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_226(int iParam0) //Position: 0xC9C1 / 51649
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	
	iParam0 = iParam0;
	Function_400(&(Global_39874[13]), "CCG", 27, &iLocal_178, 1);
	if (!iLocal_612 && !iLocal_613)
	{
		GET_VOLUME_CENTER(&iLocal_256 + 480[3], &Var0);
		uVar2 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Var0, 5.0f, "campfirecombined", 1);
		uVar3 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(-1786,22f, 23,971f, 2862,953f), 5.0f, "wheelbarrow", 1);
		if (IS_PHYSINST_VALID(&uVar2))
		{
			if (IS_PHYSINST_IN_LEVEL(&uVar2))
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(&uVar2));
				iLocal_612 = 1;
			}
		}
		if (IS_PHYSINST_VALID(&uVar3))
		{
			if (IS_PHYSINST_IN_LEVEL(&uVar3))
			{
				DESTROY_OBJECT(GET_OBJECT_FROM_PHYSINST(&uVar3));
				iLocal_613 = 1;
			}
		}
	}
	if (IS_ACTOR_IN_VOLUME(Function_111(), &iLocal_256 + 528))
	{
		iLocal_610 = 1;
		iLocal_611 = 0;
	}
	else if ((StackVal && (StackVal || (StackVal || iLocal_610 != 6 != 10) != 9)) && !iLocal_611)
	{
		Function_179("nGY_Return", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_611 = 1;
	}
	if ((StackVal || (StackVal || IS_ACTOR_IN_VOLUME(Function_111(), &iLocal_256 + 536) != 11) != 12) && iLocal_610)
	{
		iLocal_6 = 0;
		if (Function_227(&Local_614))
		{
			Function_23(&Local_614);
		}
	}
	else if (iLocal_610)
	{
		iLocal_610 = 0;
		iLocal_611 = 0;
		iLocal_6 = 1000;
		Function_23(&Local_614);
		Local_614.f_4 = 1;
	}
	return;
}

bool Function_227(struct<265> Param0) //Position: 0xCB36 / 52022
{
	int iVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_398(&Param0);
			Param0.f_4 = 1;
			break;
		
		case 0x00000001:
			if (Function_397())
			{
				if (!Function_52(&Param0))
				{
					return 1;
				}
				if (Function_46(Param0.f_264) && Function_396(Function_51(Param0.f_264)) < 0)
				{
					if (!Param0.f_256)
					{
						Param0.f_256 = 1;
						Function_176("GY_STILL_CLENSED", 0x41200000, 1, 0, 2, 1, 0);
					}
					return 1;
				}
				Function_392(&Param0);
			}
			break;
		
		case 0x00000002:
			Function_391();
			if (Function_390())
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				vLocal_494.f_8 = 1;
				if (!DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
				{
					Function_141(StackVal, Global_54078, 0, 0, 1);
					DECOR_SET_BOOL(&Global_54076, "bStartedGY", 1);
				}
				CANCEL_DEADEYE();
				Function_389(&Param0);
				Function_387(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0x3f800000, 0);
				iLocal_433 = Function_383(&uLocal_490, 0, 1, 0, 0);
				iLocal_479 = 1;
				fLocal_480 = GET_CURRENT_GAME_TIME();
				SET_ACTOR_PROOF(&Global_54076, 16);
				iLocal_462 = 1;
				Function_29(1.0f);
				Function_382(&iLocal_473, -10.0f);
				Function_381(&iLocal_484);
				ENABLE_WEATHER_SPHERE(Function_25(Param0.f_264), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&Global_54076)))
				{
					TASK_FLEE_ACTOR(Function_375(1, 0, 0, 0, 0, 0, 1, 0), &Global_54076, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_369(&Param0);
				Param0.f_4 = 4;
			}
			break;
		
		case 0x00000003:
			Function_391();
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&vLocal_494, "LootCoffin")))
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				vLocal_494.f_8 = 1;
				if (!DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
				{
					Function_141(StackVal, Global_54078, 0, 0, 1);
					DECOR_SET_BOOL(&Global_54076, "bStartedGY", 1);
				}
				Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_462 = 1;
				Function_29(1.0f);
				Function_382(&iLocal_473, -10.0f);
				Function_381(&iLocal_484);
				ENABLE_WEATHER_SPHERE(Function_25(Param0.f_264), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&Global_54076)))
				{
					TASK_FLEE_ACTOR(Function_375(1, 0, 0, 0, 0, 0, 1, 0), &Global_54076, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_369(&Param0);
				Param0.f_4 = 6;
			}
			break;
		
		case 0x00000004:
			if (!IS_OBJECT_VALID(&iLocal_433) || Function_367())
			{
				if (bLocal_478)
				{
					AI_IGNORE_ACTOR(&Global_54076);
					Param0.f_4 = 5;
				}
				else
				{
					Function_364(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					ACTOR_DRAW_LAST_WEAPON(&Global_54076, 0);
					if (IS_OBJECT_VALID(&iLocal_433))
					{
						DESTROY_OBJECT(&iLocal_433);
					}
					Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_479 = 1;
					fLocal_480 = GET_CURRENT_GAME_TIME();
					SET_ACTOR_PROOF(&Global_54076, 16);
					Param0.f_4 = 6;
				}
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_364(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(&Global_54076, 0);
				if (IS_OBJECT_VALID(&iLocal_433))
				{
					DESTROY_OBJECT(&iLocal_433);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(549,994f, 94,248f, 1189,528f), 107,628f, 1, 1, 1);
				AI_STOP_IGNORING_ACTOR(&Global_54076);
				Function_363(2,5f);
				Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Param0.f_4 = 6;
			}
			break;
		
		case 0x00000006:
			Function_391();
			Function_361(&Param0);
			if (Function_360(&iLocal_473, 0.0f))
			{
				Function_359();
				if (Param0.f_264 == 4)
				{
					Function_358(&iLocal_473, TO_FLOAT(RAND_INT_RANGE(4294967276, 4294967286)));
				}
				else
				{
					Function_358(&iLocal_473, TO_FLOAT(RAND_INT_RANGE(4294967251, 4294967271)));
				}
			}
			return Function_331(&Param0);
			break;
		
		case 0x00000007:
			if (Function_329(&iLocal_412, 0.0f))
			{
				AUDIO_MUSIC_SET_MOOD("HIGH_FIGHT_DARK", 0, 4294967295, 4294967295);
				AI_IGNORE_ACTOR(&Global_54076);
				Function_382(&uLocal_469, -10.0f);
				CANCEL_DEADEYE();
				Function_326(&Param0);
				Function_387(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0x3f800000, 0);
				Function_303(&Param0);
				Function_358(&iLocal_412, 0.0f);
				Param0.f_4 = 8;
				UNK_0x3B93B981(1);
			}
			break;
		
		case 0x00000008:
			if (Function_329(&iLocal_412, 5.0f))
			{
				Function_294(&Param0);
			}
			if (!IS_OBJECT_VALID(&iLocal_433))
			{
				AI_STOP_IGNORING_ACTOR(&Global_54076);
				Function_364(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(&Global_54076, 0);
				Param0.f_4 = 9;
				Function_293(Param0.f_264);
				Function_292(&Param0 + 8, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				UNK_0x3B93B981(0);
			}
			break;
		
		case 0x00000009:
			Function_361(&Param0);
			Function_391();
			if (!IS_ACTOR_ALIVE(&iLocal_463) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 8) != 0)
			{
				Function_44();
				if (!Function_291())
				{
					Param0.f_4 = 10;
				}
				else
				{
					Function_358(&iLocal_412, 0.0f);
					Function_290(&Param0);
					Param0.f_4 = 11;
				}
			}
			break;
		
		case 0x0000000A:
			Function_286(&Param0);
			Function_361(&Param0);
			Function_391();
			Function_285(&Param0);
			if (Function_291())
			{
				Function_290(&Param0);
				Function_358(&iLocal_412, 2,6f);
				Param0.f_4 = 11;
			}
			else if (iLocal_459)
			{
				Function_179("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_459 = 0;
			}
			break;
		
		case 0x0000000B:
			if (Function_360(&iLocal_412, 2,5f))
			{
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
				bLocal_461 = true;
				CANCEL_DEADEYE();
				Function_387(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0x3f800000, 0);
				UI_PUSH("CutsceneWithMessages");
				Function_264(&Param0);
				if (IS_OBJECT_VALID(&iLocal_433))
				{
					Function_263(&iLocal_412);
					Param0.f_4 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_329(&iLocal_412, 2,5f))
			{
				Function_262(&Param0);
			}
			if (!IS_OBJECT_VALID(&iLocal_433))
			{
				Function_364(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				UI_POP("CutsceneWithMessages");
				if (Param0.f_264 == 0)
				{
					if (Function_396(Global_46948) == 0)
					{
						Function_179("GY_RETURN_BLK", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[343].f_224);
						iVar1 = 0;
						while (iVar1 <= iVar0)
						{
							SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[343].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[343].f_224, iVar1), 4, 0);
							iVar1++;
						}
						APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, 0);
						Function_261(Global_99725[343].f_224, 0);
					}
				}
				Function_228(&Param0);
				if (Global_6666)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2899,875f, 19,075f, 2710,246f), 24,269f, 1, 1, 1);
				}
				Param0.f_4 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_23(&Param0);
			return 1;
			break;
	}
	return 0;
}

void Function_228(struct<265> Param0) //Position: 0xD297 / 53911
{
	int iVar0;
	
	if (Function_260(&iLocal_484))
	{
		fLocal_488 = Function_258(&iLocal_484);
		iVar0 = Function_257(Param0.f_264);
		if (Function_80(iVar0) < 0.0f)
		{
			if (fLocal_488 > Function_80(iVar0))
			{
				Function_256(iVar0, fLocal_488, 0);
			}
		}
		else
		{
			Function_256(iVar0, fLocal_488, 0);
		}
	}
	if (Function_396(Function_51(Param0.f_264)) == 0)
	{
		Function_83(656, 1, 0, 0);
	}
	Function_229(Function_51(Param0.f_264), 1, 1, 0);
	return;
}

void Function_229(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD310 / 54032
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_48(iParam0))
	{
		Function_254();
		return;
	}
	bVar0 = Function_253(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_252())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_251(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_177(Global_10966) };
		}
		if (Function_252())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_246();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_252())
	{
		Function_245();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_243("DEED_COMPLETE", iParam0);
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
			Function_241(iParam0);
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
						switch (Function_251(iParam0))
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
			Function_232(1);
			Function_231(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_230(iParam0, &Var14);
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

void Function_230(int iParam0, struct<41> Param1) //Position: 0xD56E / 54638
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_231(var uParam0, int iParam1) //Position: 0xD5AC / 54700
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_232(bool bParam0) //Position: 0xD5EB / 54763
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_233();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_142();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_45(&Global_99144, 1);
		Function_45(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_233() //Position: 0xD640 / 54848
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_178())
	{
		Function_238(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_238(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_234(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_234(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_169(StackVal, Var0))
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

struct<8> Function_234(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xD6F7 / 55031
{
	int iVar0;
	
	iVar0 = Function_236(&uParam2, &uParam3);
	if (Function_235(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_219(&Global_99144, 1);
			Function_45(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_219(&Global_99144, 2);
			Function_45(&Global_99144, 1);
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
		Function_219(&Global_99144, 2);
		Function_45(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_34();
	return StackVal, Function_34();
}

bool Function_235(int iParam0) //Position: 0xD7EF / 55279
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_236(bool bParam0, bool bParam1) //Position: 0xD805 / 55301
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
				fVar2 = Function_237(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_237(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_235(iVar0) && !&bParam1)
	{
		iVar0 = Function_236(&bParam0, 1);
	}
	return iVar0;
}

float Function_237(struct<2> Param0, struct<2> Param2) //Position: 0xD8D1 / 55505
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_238(float fParam0, int iParam1) //Position: 0xD8EE / 55534
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_240(&Global_54076, &Var3);
	if (!Function_239(Global_46760[0]))
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
	if (!Function_239(Global_46760[2]))
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
	if (!Function_239(Global_46760[1]))
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
	if (!Function_239(Global_46796[1]))
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
	if (!Function_239(Global_46796[3]))
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
	if (!Function_239(Global_46796[2]))
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
	if (!Function_239(Global_46796[4]))
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
	if (!Function_239(Global_46816[0]))
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
	if (!Function_239(Global_46816[1]))
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
	if (!Function_239(Global_46816[2]))
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
	if (!Function_239(Global_46838[0]))
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
	if (!Function_239(Global_46850[0]))
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
	if (!Function_239(Global_46850[1]))
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
	if (!Function_239(Global_46850[2]))
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
	if (!Function_239(Global_46866[0]))
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
	if (!Function_239(Global_46866[1]))
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
	if (!Function_239(Global_46866[2]))
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
	if (!Function_239(Global_46894[2]))
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
	if (!Function_239(Global_46894[3]))
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
	if (!Function_239(Global_46894[0]))
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
	if (!Function_239(Global_46914[0]))
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
	if (!Function_239(Global_46926[2]))
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
	if (!Function_239(Global_46926[1]))
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
	if (!Function_239(Global_46926[0]))
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
	if (!Function_239(Global_46838[1]))
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
	if (!Function_239(Global_46894[1]))
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
	Function_219(&Global_99144, 2);
	Function_45(&Global_99144, 1);
	iParam1 = 0;
	if (Function_169(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_239(int iParam0) //Position: 0xE11A / 57626
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_28(bVar0, 0x1000000) || Function_28(bVar0, 0x2000000)) || Function_28(bVar0, 0x4000000)) || !Function_28(bVar0, 0x10000000));
}

void Function_240(var uParam0, int iParam1) //Position: 0xE155 / 57685
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_241(int iParam0) //Position: 0xE164 / 57700
{
	int iVar0;
	int iVar1;
	
	if (!Function_50(iParam0))
	{
		return;
	}
	switch (Function_253(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_251(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_83(12, 1, 0, 0);
				Function_81(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_83(13, 1, 0, 0);
				Function_81(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_83(14, 1, 0, 0);
				Function_81(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_83(15, 1, 0, 0);
				Function_81(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_83(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_251(iParam0))
			{
				case 0x00000000:
					if (Function_396(iParam0) == 1)
					{
						iVar0 = Function_242(iParam0);
						if (Function_7(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_81(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_81(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_81(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_81(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_81(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_81(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_81(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_81(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_81(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_81(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_81(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_81(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_81(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_81(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_81(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_81(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_81(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_81(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_81(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_81(4, 19);
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
								Function_83(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_83(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_83(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_242(iParam0) == 0)
			{
				if (Function_396(iParam0) == 1)
				{
					Function_83(458, 1, 0, 0);
					iVar0 = Function_251(iParam0);
					if (Function_7(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_81(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_81(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_81(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_81(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_81(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_81(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_81(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_81(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_396(iParam0) == 1)
			{
				Function_83(400, 1, 0, 0);
			}
			switch (Function_251(iParam0))
			{
				case 0x00000001:
					Function_83(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_81(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_81(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_81(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_83(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_81(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_81(6, 9);
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

int Function_242(int iParam0) //Position: 0xE640 / 58944
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

void Function_243(var uParam0, int iParam1) //Position: 0xE65F / 58975
{
	struct<4> Var0;
	
	if (!Function_48(iParam1))
	{
		return;
	}
	switch (Function_253(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_244(Function_251(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_253(iParam1), Function_251(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_253(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_244(int iParam0) //Position: 0xE789 / 59273
{
	char* cVar0[16];
	
	if (!Function_178())
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

void Function_245() //Position: 0xE7C3 / 59331
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
	PLAYSTAT_INT("HC_MONEY", Function_151(0));
	PLAYSTAT_INT("HC_FAME", Function_151(3));
	PLAYSTAT_INT("HC_HONOR", Function_151(1));
	return;
}

void Function_246() //Position: 0xE925 / 59685
{
	int iVar0;
	int iVar1;
	
	if (!Function_158(Global_10966))
	{
		return;
	}
	iVar0 = Function_151(24);
	iVar1 = Function_157(Global_10966);
	if (!Function_158(iVar0) && Function_249(iVar1) < 0)
	{
		Function_150(24, Global_10966, 0);
		Function_247(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_249(Function_157(iVar0)))
	{
		Function_150(24, Global_10966, 0);
		Function_247(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_247(int iParam0, char* cParam1) //Position: 0xE9A5 / 59813
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
		Function_248(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_248(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0xECFC / 60668
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_249(int iParam0) //Position: 0xED84 / 60804
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_250(char* cParam0) //Position: 0xED9E / 60830
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

int Function_251(int iParam0) //Position: 0xEFF4 / 61428
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_252() //Position: 0xF014 / 61460
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_253(int iParam0) //Position: 0xF03F / 61503
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_254() //Position: 0xF05A / 61530
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
			Function_255(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_255(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xF2A1 / 62113
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

int Function_256(int iParam0, float fParam1, bool bParam2) //Position: 0xF2CD / 62157
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > fParam1)
	{
		Function_94(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_93(iParam0);
	if (&bParam2)
	{
		Function_85(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_257(int iParam0) //Position: 0xF53A / 62778
{
	switch (iParam0)
	{
		case 0x00000000:
			return 662;
			break;
		
		case 0x00000001:
			return 663;
			break;
		
		case 0x00000002:
			return 665;
			break;
		
		case 0x00000003:
			return 664;
			break;
		
		case 0x00000004:
			return 666;
			break;
	}
	LOG_ERROR("should not be here");
	return 662;
}

float Function_258(vector3 vParam0) //Position: 0xF5A3 / 62883
{
	if (Function_260(&vParam0))
	{
		if (Function_259(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_259(int iParam0) //Position: 0xF670 / 63088
{
	return Function_28(iParam0, 2);
}

bool Function_260(int iParam0) //Position: 0xF67E / 63102
{
	return Function_28(iParam0, 1);
}

void Function_261(var uParam0, int iParam1) //Position: 0xF68C / 63116
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

void Function_262(struct<265> Param0) //Position: 0xF6B1 / 63153
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			PRINT_BIG("BLK_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000001:
			PRINT_BIG("COOTS_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000004:
			PRINT_BIG("SEP_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG("TUM_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000002:
			PRINT_BIG("ODD_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
	}
	return;
}

void Function_263(int iParam0) //Position: 0xF7A5 / 63397
{
	Function_358(&iParam0, 0.0f);
	return;
}

void Function_264(struct<265> Param0) //Position: 0xF7B2 / 63410
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			iLocal_433 = Function_281(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			iLocal_433 = Function_277(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			iLocal_433 = Function_273(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			iLocal_433 = Function_269(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			iLocal_433 = Function_265(&uLocal_490, 0, 1, 0, 0);
			break;
	}
	return;
}

int Function_265(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xF83B / 63547
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "oddgraveyardComplete", 2, 1);
	}
	Function_266(&uVar0);
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

void Function_266(int iParam0) //Position: 0xF8C9 / 63689
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_268(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_267(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_267(int iParam0) //Position: 0xF926 / 63782
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2897,067f, 20,62931f, 2714,683f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,039979f, 0,583588f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_268(int iParam0) //Position: 0xF99B / 63899
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2898,525f, 21,02192f, 2712,473f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,282773f, 0,575102f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_269(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFA10 / 64016
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TumgraveyardComplete", 2, 1);
	}
	Function_270(&uVar0);
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

void Function_270(int iParam0) //Position: 0xFA9E / 64158
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_272(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_271(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_271(int iParam0) //Position: 0xFAFB / 64251
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3918,087f, 31,29665f, 2938,344f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,228078f, -0,797786f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_272(int iParam0) //Position: 0xFB70 / 64368
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3919,805f, 30,81222f, 2939,652f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,222407f, -0,792953f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_273(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFBE5 / 64485
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "sepgraveyardComplete", 2, 1);
	}
	Function_274(&uVar0);
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

void Function_274(int iParam0) //Position: 0xFC73 / 64627
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_276(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_275(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_275(int iParam0) //Position: 0xFCD0 / 64720
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1389,109f, 16,60661f, 4315,52f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,088543f, -0,979924f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_276(int iParam0) //Position: 0xFD45 / 64837
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1389,484f, 14,59394f, 4315,136f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,120229f, -0,992252f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_277(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFDBA / 64954
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "cootsgraveyardComplete", 2, 1);
	}
	Function_278(&uVar0);
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

void Function_278(int iParam0) //Position: 0xFE4A / 65098
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_280(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_279(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_279(int iParam0) //Position: 0xFEA7 / 65191
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1804,425f, 23,51718f, 2823,539f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,312112f, -2,467991f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_280(int iParam0) //Position: 0xFF1C / 65308
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1807,816f, 23,14842f, 2825,066f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,329485f, -2,366173f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_281(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xFF91 / 65425
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blkgraveyardComplete", 2, 1);
	}
	Function_282(&uVar0);
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

void Function_282(int iParam0) //Position: 0x10020 / 65568
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_284(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_283(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_283(int iParam0) //Position: 0x1007D / 65661
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(592,2622f, 91,29121f, 1199,506f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,334294f, 1,381979f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_284(int iParam0) //Position: 0x100F2 / 65778
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(590,5406f, 91,34983f, 1205,931f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,310153f, 1,227103f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_285(struct<5> Param0) //Position: 0x10167 / 65895
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		uVar2 = GET_CURRENT_GRINGO(&Global_54076);
		if (IS_GRINGO_VALID(&uVar2))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar2)), "dlc_player_burn_coffin"))
			{
				if (!iLocal_536)
				{
					Function_382(&iLocal_412, 0.0f);
					iLocal_536 = 1;
				}
				else if (Function_360(&iLocal_412, 1,2f))
				{
					iLocal_536 = 0;
					Function_290(&Param0);
					Function_382(&iLocal_412, 2,6f);
					Param0.f_4 = 11;
				}
			}
		}
	}
	return;
}

void Function_286(struct<17> Param0) //Position: 0x10212 / 66066
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&(Local_502[iVar04]), "LootCoffin")))
			{
				Local_502[iVar04].f_8 = 1;
				Function_287();
				iLocal_482++;
				if (iLocal_482 <= 2 && !iLocal_481)
				{
					iLocal_481 = 1;
					Param0.f_16++;
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_287() //Position: 0x10288 / 66184
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	Function_288(Function_111(), &uVar0, &iVar7);
	iVar8 = 0;
	while (iVar8 <= iVar7)
	{
		if (uVar0[iVar8] != 4294967295)
		{
			if (_GET_AMMO_AMOUNT(Function_111(), GET_AMMO_ENUM(uVar0[iVar8]), 1) > _GET_MAX_AMMO_AMOUNT(Function_111(), GET_AMMO_ENUM(uVar0[iVar8])))
			{
				_ADD_AMMO_OF_TYPE(Function_111(), GET_AMMO_ENUM(uVar0[iVar8]), 6.0f, 1, 1);
			}
		}
		iVar8++;
	}
	return;
}

void Function_288(var uParam0, int[] iParam1, int iParam2) //Position: 0x102F2 / 66290
{
	iParam2 = 0;
	if (Function_289(&uParam0, 39) != 4294967295)
	{
		iParam1[iParam2] = 0;
		iParam2++;
	}
	if (Function_289(&uParam0, 41) != 4294967295)
	{
		iParam1[iParam2] = 8;
		iParam2++;
	}
	if (Function_289(&uParam0, 40) != 4294967295)
	{
		iParam1[iParam2] = 4;
		iParam2++;
	}
	if (Function_289(&uParam0, 42) != 4294967295)
	{
		iParam1[iParam2] = 12;
		iParam2++;
	}
	if (Function_289(&uParam0, 43) != 4294967295)
	{
		iParam1[iParam2] = 17;
		iParam2++;
	}
	if (Function_289(&uParam0, 44) != 4294967295)
	{
		iParam1[iParam2] = 19;
		iParam2++;
	}
	return;
}

int Function_289(var uParam0, int iParam1) //Position: 0x103C1 / 66497
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_290(struct<265> Param0) //Position: 0x103D3 / 66515
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 8, 0.0f, 1, 0);
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(8), 18.0f, 0, 1);
			break;
	}
	return;
}

bool Function_291() //Position: 0x1040C / 66572
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_292(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x10434 / 66612
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		iVar0++;
	}
}

void Function_293(float fParam0) //Position: 0x10544 / 66884
{
	switch (fParam0)
	{
		case 0x00000000:
			Function_179("GY_Blackwater_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			Function_179("GY_coots_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			Function_179("GY_Oddfellows_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			Function_179("GY_Tumbleweed_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000004:
			Function_179("GY_Sepulcro_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_294(struct<265> Param0) //Position: 0x10626 / 67110
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			Function_302();
			break;
		
		case 0x00000001:
			Function_301();
			break;
		
		case 0x00000004:
			Function_300();
			break;
		
		case 0x00000003:
			Function_299();
			break;
		
		case 0x00000002:
			Function_295();
			break;
	}
	return;
}

void Function_295() //Position: 0x10673 / 67187
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Pturner1", "RCMBoss_Pturner1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_296(bool bParam0) //Position: 0x106BC / 67260
{
	Function_297(0, &Global_54076, bParam0, 0);
	Function_297(1, &iLocal_463, bParam0, 0);
	return;
}

void Function_297(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x106D8 / 67288
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_28(bParam2, Function_298(bParam0)))
	{
		bVar0 = bParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

int Function_298(bool bParam0) //Position: 0x10700 / 67328
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_299() //Position: 0x1070C / 67340
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_JimySaint1", "RCMBoss_JimySaint1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_300() //Position: 0x10759 / 67417
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_DeSanta1", "RCMBoss_DeSanta1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_301() //Position: 0x107A2 / 67490
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_MissHorlk1", "RCMBoss_MissHorlk1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_302() //Position: 0x107EF / 67567
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Mordecai1", "RCMBoss_Mordecai1", 0, 3, 1, 0, 1);
		Function_296(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_303(struct<265> Param0) //Position: 0x1083A / 67642
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			iLocal_433 = Function_322(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			iLocal_433 = Function_318(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			iLocal_433 = Function_312(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			iLocal_433 = Function_308(&uLocal_490, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			iLocal_433 = Function_304(&uLocal_490, 0, 1, 0, 0);
			break;
	}
	return;
}

int Function_304(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x108C3 / 67779
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "oddBossFightGraveyard", 2, 1);
	}
	Function_305(&uVar0);
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

void Function_305(int iParam0) //Position: 0x10952 / 67922
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_307(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_306(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_306(int iParam0) //Position: 0x109AF / 68015
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,66159f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2903,974f, 19,79888f, 2710,857f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,150541f, 0,507457f, 0,004521f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_307(int iParam0) //Position: 0x10A28 / 68136
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,66233f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2904,165f, 19,51034f, 2708,177f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,102399f, 1,165359f, 0,004493f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_308(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10AA1 / 68257
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TumBossFightGraveyard", 2, 1);
	}
	Function_309(&uVar0);
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

void Function_309(int iParam0) //Position: 0x10B30 / 68400
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_311(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_310(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_310(int iParam0) //Position: 0x10B8D / 68493
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,86192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3911,766f, 31,83612f, 2921,979f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,078771f, 2,88158f, 0,004278f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_311(int iParam0) //Position: 0x10C06 / 68614
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 25,76166f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3913,444f, 31,26865f, 2924,223f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,117483f, -2,70611f, 0,004294f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_312(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10C7F / 68735
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "SepBossFightGraveyard", 4, 1);
	}
	Function_313(&uVar0);
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

void Function_313(int iParam0) //Position: 0x10D0E / 68878
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_317(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_316(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_315(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_314(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&iParam0, 0, 1, 4,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 0,001f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 2, 3, 2,5f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1.0f, 4);
	return;
}

void Function_314(int iParam0) //Position: 0x10DA7 / 69031
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,537f, 13,61537f, 4300,938f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,525523f, 1,490034f, 0,001164f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_315(int iParam0) //Position: 0x10E20 / 69152
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,537f, 13,61537f, 4300,938f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,373518f, 1,402987f, 0,001081f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_316(int iParam0) //Position: 0x10E99 / 69273
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,477f, 13,66733f, 4299,932f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,072472f, 1,915836f, 0,001009f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_317(int iParam0) //Position: 0x10F12 / 69394
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 25,45625f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,713f, 13,89411f, 4300,767f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,043377f, 1,765097f, -0,000861f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_318(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10F8B / 69515
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "cootsBossFightGraveyard", 2, 1);
	}
	Function_319(&uVar0);
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

void Function_319(int iParam0) //Position: 0x1101C / 69660
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_321(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_320(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_320(int iParam0) //Position: 0x11079 / 69753
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,26746f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1763,659f, 25,13008f, 2844,199f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,133221f, -2,84744f, 0,000148f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_321(int iParam0) //Position: 0x110F2 / 69874
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 23,50987f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1763,345f, 24,48004f, 2845,35f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,039157f, -2,624838f, 0,000147f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_322(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1116B / 69995
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blkBossFightGraveyard", 2, 1);
	}
	Function_323(&uVar0);
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

void Function_323(int iParam0) //Position: 0x111FA / 70138
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_325(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_324(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 8,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_324(int iParam0) //Position: 0x11257 / 70231
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 32,89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(530,6407f, 95,02366f, 1201,827f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,183638f, -1,091771f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_325(int iParam0) //Position: 0x112CC / 70348
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 32,89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(531,275f, 94,5818f, 1201,307f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,145415f, -1,242507f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_326(struct<265> Param0) //Position: 0x11341 / 70465
{
	Function_328(&iLocal_463, 2, 0);
	TASK_MELEE_ATTACK(&iLocal_463, &Global_54076, -1.0f);
	SET_ACTOR_INVULNERABILITY(&iLocal_463, 0);
	Function_327(&iLocal_463, 1, 1, 1, 1, 0, 1);
	ENABLE_MOVER(&iLocal_463);
	switch (Param0.f_264)
	{
		case 0x00000000:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_463, 392, 0, 2, 0), "BLK_BOSS_NAME");
			break;
		
		case 0x00000001:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_463, 392, 0, 2, 0), "COOTS_BOSS_NAME");
			break;
		
		case 0x00000002:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_463, 392, 0, 2, 0), "ODD_BOSS_NAME");
			break;
		
		case 0x00000003:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_463, 392, 0, 2, 0), "TUM_BOSS_NAME");
			break;
		
		case 0x00000004:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_463, 392, 0, 2, 0), "SEP_BOSS_NAME");
			break;
	}
	return;
}

void Function_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x11452 / 70738
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&iParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&iParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&iParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&iParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&iParam0, &iParam4);
	}
}

void Function_328(int iParam0, int iParam1, bool bParam2) //Position: 0x1149C / 70812
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_35(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_34();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_35(), Var2, Function_34());
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_35(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_34();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_35(), Var0, Function_34());
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

bool Function_329(int iParam0, float fParam1) //Position: 0x11668 / 71272
{
	if (Function_360(&iParam0, fParam1))
	{
		Function_330(&iParam0);
		return 1;
	}
	return 0;
}

void Function_330(vector3 vParam0) //Position: 0x11682 / 71298
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_331(struct<261> Param0) //Position: 0x11699 / 71321
{
	if (!iLocal_460)
	{
		Function_357(&Param0);
		iLocal_460 = 1;
	}
	if (Param0 <= Param0.f_260 && !IS_PLAYER_DEADEYE(0))
	{
		Function_358(&iLocal_465, -1.0f);
		Function_358(&iLocal_412, -2.0f);
		Param0.f_4 = 7;
	}
	Function_340(&Param0);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 32))
	{
		Param0.f_24++;
		Function_336(&Param0 + 32);
		Function_334(&Param0, EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 40));
		EVENT_TRAP_CLEAR_EVENTS(&Param0 + 32);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 32);
		EVENT_TRAP_CLEAR_EVENTS(&Param0 + 40);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 40);
	}
	if (Param0.f_60 >= Param0.f_64)
	{
		Function_332(&Param0);
	}
	Function_286(&Param0);
	if (iLocal_459 && Function_291())
	{
		Function_179("GY_objective_1", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_459 = 0;
	}
	return 0;
}

void Function_332(struct<21> Param0) //Position: 0x1177D / 71549
{
	Function_358(&iLocal_465, -5.0f);
	Function_333(&Param0);
	Param0++;
	if (Param0.f_16 <= Param0.f_20)
	{
		Param0.f_16++;
	}
	return;
}

void Function_333(struct<65> Param0) //Position: 0x117B7 / 71607
{
	Param0.f_64 = (Param0.f_64 + (50 * Param0));
	return;
}

void Function_334(var uParam0, bool bParam1) //Position: 0x117CF / 71631
{
	int iVar0;
	
	iVar0 = 0;
	switch (StackVal)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 10;
			break;
		
		case 0x00000004:
			iVar0 = 10;
			break;
		
		case 0x00000005:
			iVar0 = 15;
			break;
		
		case 0x00000006:
			iVar0 = 20;
			break;
		
		case 0x00000007:
			iVar0 = 25;
			break;
		
		case 0x00000008:
			iVar0 = 30;
			break;
		
		case 0x00000009:
			iVar0 = 40;
			break;
		
		default:
			if (StackVal <= 15)
			{
				iVar0 = 50;
			}
			else
			{
				iVar0 = 100;
			}
			break;
	}
	if (bParam1)
	{
		Function_335(&uParam0, ((10 + iVar0) * CEIL(1,25f)));
	}
	else
	{
		Function_335(&uParam0, (10 + iVar0));
	}
	return;
}

void Function_335(struct<61> Param0) //Position: 0x118A0 / 71840
{
	Param0.f_60 = (&iParam1 + Param0.f_60);
	return;
}

void Function_336(var uParam0) //Position: 0x118B4 / 71860
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_490);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
		return;
	}
	ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	if (!IS_OBJECT_VALID(&iVar4))
	{
	}
	while (IS_OBJECT_VALID(&iVar4))
	{
		uVar2 = GET_EVENT_FROM_OBJECT(&iVar4);
		uVar3 = GET_EVENT_TARGET_AS_OBJECT(&uVar2);
		iVar1 = GET_ACTOR_FROM_OBJECT(&uVar3);
		if (IS_OBJECT_VALID(&uVar3))
		{
			if (IS_ACTOR_VALID(&iVar1))
			{
				if ((Function_339(&iVar1) || Function_338(&iVar1)) || Function_337(&iVar1))
				{
					iLocal_457 = (iLocal_457 - 1);
				}
			}
			else
			{
				LOG_ERROR("our actor is not valid?!");
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

bool Function_337(int iParam0) //Position: 0x1198F / 72079
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1222 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

int Function_338(int iParam0) //Position: 0x119B0 / 72112
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1214 && iVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

int Function_339(int iParam0) //Position: 0x119D1 / 72145
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

void Function_340(struct<265> Param0) //Position: 0x119F2 / 72178
{
	int iVar1;
	
	if (Function_258(&iLocal_465) < 0.0f)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 8) <= Param0.f_16)
		{
			Function_351(&Param0);
			if (iLocal_457 <= Param0.f_264)
			{
				if (Param0 <= 4 && iLocal_457 > Param0.f_264)
				{
					iVar1 = 2;
				}
				else if (Param0 <= 3 && iLocal_457 > Param0.f_264)
				{
					iVar1 = 1;
				}
				else if (Param0 <= 2 && iLocal_457 > Param0.f_264)
				{
					iVar1 = 0;
				}
				else
				{
					iVar1 = 4294967295;
				}
				if (iLocal_458 >= iVar1)
				{
					iLocal_458 = 0;
				}
				if (iVar1 != 4294967295)
				{
					switch (iLocal_458)
					{
						case 0x00000000:
							Function_347(&Param0, bLocal_429);
							Function_345(&bLocal_429, 1214, 1221);
							break;
						
						case 0x00000001:
							Function_347(&Param0, bLocal_430);
							Function_345(&bLocal_430, 1204, 1213);
							break;
						
						case 0x00000002:
							Function_347(&Param0, bLocal_431);
							Function_345(&bLocal_431, 1222, 1227);
							break;
					}
					iLocal_489++;
					iLocal_457++;
					iLocal_458++;
				}
			}
			Function_344(&Param0);
			Function_358(&iLocal_465, -0,5f);
			iLocal_489++;
			if (iLocal_489 >= 20)
			{
				Function_341(StackVal, *(&Param0 + 48), 20.0f);
				iLocal_489 = 0;
			}
		}
	}
	return;
}

void Function_341(struct<2> Param0, bool bParam2) //Position: 0x11B38 / 72504
{
	var uVar0;
	bool bVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&bVar1))
	{
		Function_343(&bVar1);
		if ((GET_OBJECT_TYPE(&bVar1) != 29 && VDIST(Param0, Function_343(&bVar1)) >= bParam2) && !Function_342(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			DESTROY_OBJECT(&bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

bool Function_342(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x11BAC / 72620
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

struct<8> Function_343(int iParam0) //Position: 0x11BCC / 72652
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_344(int iParam0) //Position: 0x11BF5 / 72693
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&iParam0 + 8))
	{
		if (IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, iVar0)))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, iVar0);
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
			Function_335(&iParam0, 40);
		}
		iVar0++;
	}
	return "";
}

void Function_345(bool bParam0, int iParam1, bool bParam2) //Position: 0x11C4A / 72778
{
	STREAMING_EVICT_ACTOR(bParam0, 4294967295);
	bParam0 = Function_346(iParam1, bParam2);
	STREAMING_REQUEST_ACTOR(bParam0, 1, false);
	return;
}

var Function_346(int iParam0, bool bParam1) //Position: 0x11C6C / 72812
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	iVar1 = RAND_INT_RANGE(iParam0, bParam1);
	iVar0 = iVar1;
	return iVar0;
}

void Function_347(int iParam0, bool bParam1) //Position: 0x11C93 / 72851
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Function_350();
	Function_343(&iParam0 + 116[iVar1]);
	Function_349(&iParam0 + 116[iVar1]);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), bParam1, Function_343(&iParam0 + 116[iVar1]), Function_349(&iParam0 + 116[iVar1]));
	Function_348(&uVar0, 1, 1);
	SQUAD_JOIN(&uVar0, &iParam0 + 8);
	if (Function_337(&uVar0))
	{
		TASK_GO_NEAR_ACTOR(&uVar0, &Global_54076, 20.0f, 2);
	}
	else
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(0, &Global_54076, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
	}
	return;
}

void Function_348(var uParam0, int iParam1, bool bParam2) //Position: 0x11D39 / 73017
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_328(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

struct<8> Function_349(int iParam0) //Position: 0x11DF6 / 73206
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&iParam0, &Var0);
	return StackVal, Var0;
}

var Function_350() //Position: 0x11E1F / 73247
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 14);
	if (iLocal_483 != iVar0)
	{
		iLocal_483 = iVar0;
	}
	else
	{
		iVar0++;
		if (iVar0 >= 14)
		{
			iVar0 = 0;
		}
		iLocal_483 = iVar0;
	}
	return iVar0;
}

void Function_351(bool bParam0) //Position: 0x11E54 / 73300
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (STREAMING_IS_ACTOR_LOADED(iLocal_416[iLocal_432], 4294967295))
	{
		iVar1 = Function_350();
		Function_343(&bParam0 + 116[iVar1]);
		Function_349(&bParam0 + 116[iVar1]);
		iVar0 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), iLocal_416[iLocal_432], Function_343(&bParam0 + 116[iVar1]), Function_349(&bParam0 + 116[iVar1]));
		Function_353(&iVar0, 1254, 4294967295, 4294967295, 2, 1, 1, 1);
		SQUAD_JOIN(&iVar0, &bParam0 + 8);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(0, &Global_54076, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
		Function_352();
		iLocal_432++;
		if (iLocal_432 > 5)
		{
			iLocal_432 = 0;
		}
	}
	else
	{
		iLocal_432++;
		if (iLocal_432 > 5)
		{
			iLocal_432 = 0;
		}
	}
	return;
}

void Function_352() //Position: 0x11F26 / 73510
{
	iLocal_477++;
	if (iLocal_477 >= (GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])) - 1))
	{
		iLocal_477 = 0;
	}
	STREAMING_EVICT_ACTOR(iLocal_416[iLocal_432], 4294967295);
	iLocal_416[iLocal_432] = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), iLocal_477);
	STREAMING_REQUEST_ACTOR(iLocal_416[iLocal_432], 1, false);
	return;
}

void Function_353(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x11F78 / 73592
{
	var uVar0;
	
	if (Function_38(&iParam0) && !Function_36(&iParam0, 1))
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
	Function_355(&iParam0);
	DECOR_SET_BOOL(&iParam0, "Zombie", 1);
	Function_354(&iParam0);
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
	Function_348(&iParam0, &iParam4, &iParam5);
}

void Function_354(int iParam0) //Position: 0x12215 / 74261
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", 1);
	}
	return;
}

void Function_355(int iParam0) //Position: 0x1224C / 74316
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
	Function_356(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_356(var uParam0, bool bParam1) //Position: 0x1260A / 75274
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

void Function_357(int iParam0) //Position: 0x1262D / 75309
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Function_343(&iParam0 + 68[iVar0 + 1]);
		Function_349(&iParam0 + 68[iVar0 + 1]);
		Local_502[iVar04] = CREATE_PROP_IN_LAYOUT(&uLocal_490, Function_35(), "$/fragments/p_gen_coffin04x", Function_343(&iParam0 + 68[iVar0 + 1]), Function_349(&iParam0 + 68[iVar0 + 1]), 1);
		SNAP_OBJECT_TO_GROUND(&(Local_502[iVar04]), 5.0f, 1, 1092616192);
		Function_343(&(Local_502[iVar04]));
		CLEAR_AREA_OF_GRASS(Function_343(&(Local_502[iVar04])), 2.0f);
		Function_343(&(Local_502[iVar04]));
		CLEAR_AREA_OF_TREE_TYPE(Function_343(&(Local_502[iVar04])), 2.0f, "");
		Local_502[iVar04].f_8 = 0;
		SET_PROP_AI_OBSTACLE_ENABLED(&(Local_502[iVar04]), 1);
		uVar1 = ADD_BLIP_FOR_OBJECT(&(Local_502[iVar04]), 330, 0f, 2, 0);
		SET_BLIP_SCALE(&uVar1, 0,75f);
		SET_BLIP_NAME(&uVar1, "blip_coffin");
		Function_343(&iParam0 + 68[iVar0 + 1]);
		Function_349(&iParam0 + 68[iVar0 + 1]);
		(&Local_502[iVar04] + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, &uLocal_490, Function_35(), 2,802597E-45f, Function_343(&iParam0 + 68[iVar0 + 1]), Function_349(&iParam0 + 68[iVar0 + 1]), Vector(3.0f, 1,5f, 3.0f));
		*(&Local_502[iVar04] + 24) = CREATE_EVENT_TRAP(Function_35(), 17, &uLocal_490);
		EVENT_TRAP_STORE_EVENTS(&Local_502[iVar04] + 24, 1);
		EVENT_TRAP_ON_VOLUME(&Local_502[iVar04] + 24, &Local_502[iVar04] + 16);
		iVar0++;
	}
	return;
}

void Function_358(vector3 vParam0) //Position: 0x1278A / 75658
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_219(&vParam0, 1);
	Function_45(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_359() //Position: 0x127AF / 75695
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	Function_168(&Global_54076);
	Var0 = Function_168(&Global_54076);
	iVar2 = RAND_INT_RANGE(50, 100);
	bVar3 = Function_39();
	if (bVar3)
	{
		iVar2 *= 1;
	}
	else
	{
		iVar2 = (iVar2 * 4294967295);
	}
	Var0 = (Var0 + IntToFloat(iVar2));
	Var0.f_8 = (StackVal + IntToFloat(iVar2));
	if (IS_OBJECT_VALID(&iLocal_492))
	{
		UNK_0x7246F438(&iLocal_492);
	}
	iLocal_492 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_490, Function_35(), "env_lightningForked_stormy", Var0);
	UNK_0x6745191B(StackVal, &iLocal_492, Vector(0.0f, 0.0f, 0.0f));
	return;
}

bool Function_360(int iParam0, float fParam1) //Position: 0x12841 / 75841
{
	if (Function_260(&iParam0))
	{
		if (Function_258(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_361(struct<17> Param0) //Position: 0x1285F / 75871
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (StackVal && !IS_OBJECT_VALID(&Local_502[iVar04] + 24))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&Local_502[iVar04] + 24))
			{
				if (Function_362(&Local_502[iVar04] + 24))
				{
					Local_502[iVar04].f_8 = 1;
					Function_287();
					DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&(Local_502[iVar04]), "LootCoffin"));
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&(Local_502[iVar04])));
					EVENT_TRAP_CLEAR_TRAP_FLAG(&Local_502[iVar04] + 24);
					EVENT_TRAP_CLEAR_EVENTS(&Local_502[iVar04] + 24);
					iVar1 = &Local_502[iVar04];
					iVar2 = 0;
					if (GET_OBJECT_TYPE(&iVar1) == 17)
					{
						Function_343(&iVar1);
						UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_490, Function_35(), "fire_zombie_02_dataSphere", Function_343(&iVar1)), Vector(0.0f, 0.0f, 0.0f));
					}
					iLocal_482++;
					if (iLocal_482 <= 2 && !iLocal_481)
					{
						iLocal_481 = 1;
						Param0.f_16++;
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

bool Function_362(var uParam0) //Position: 0x12974 / 76148
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_490);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
		return 0;
	}
	ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	if (!IS_OBJECT_VALID(&iVar2))
	{
	}
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar1 = GET_EVENT_FROM_OBJECT(&iVar2);
		if (DECOR_GET_STRING_HASH(&uVar1, "ExplosionType") == STRING_TO_HASH("FireBottleExplosion"))
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

void Function_363(bool bParam0) //Position: 0x12A1D / 76317
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

void Function_364(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x12A3A / 76346
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
		uVar0 = Function_111();
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
		Function_83(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_137();
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
	Function_365(&iParam9, &iParam10);
}

void Function_365(var uParam0, bool bParam1) //Position: 0x12B09 / 76553
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
		Function_366();
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

void Function_366() //Position: 0x12BD8 / 76760
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

int Function_367() //Position: 0x12C50 / 76880
{
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return 0;
		}
	}
	if (HUD_IS_FADING())
	{
		return 0;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				Function_83(20, 1, 0, 0);
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
				Function_368(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				bLocal_478 = true;
				STREAMING_RELEASE_MAIN_POI();
				return 1;
			}
		}
	}
	return 0;
}

void Function_368(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5) //Position: 0x12CEB / 77035
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

void Function_369(struct<265> Param0) //Position: 0x12D15 / 77077
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			Function_374(&Param0 + 248);
			break;
		
		case 0x00000001:
			Function_373(&Param0 + 248);
			break;
		
		case 0x00000002:
			Function_372(&Param0 + 248);
			break;
		
		case 0x00000003:
			Function_371(&Param0 + 248);
			break;
		
		case 0x00000004:
			Function_370(&Param0 + 248);
			break;
	}
	SET_ACTOR_MAX_HEALTH(&iLocal_463, 35.0f);
	SET_ACTOR_HEALTH(&iLocal_463, 35.0f);
	DECOR_SET_BOOL(&iLocal_463, "CanBeLasso", 0);
	SET_ACTOR_INVULNERABILITY(&iLocal_463, 1);
	Function_327(&iLocal_463, 0, 1, 1, 1, 0, 1);
	SUSPEND_MOVER(&iLocal_463);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(GET_OBJECT_FROM_ACTOR(&iLocal_463));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_463, false);
	Function_343(&Param0 + 248);
	STREAMING_LOAD_BOUNDS(Function_343(&Param0 + 248), 3.0f, 0);
	return;
}

void Function_370(int iParam0) //Position: 0x12DEA / 77290
{
	Function_343(&iParam0);
	Function_349(&iParam0);
	iLocal_463 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), 556, Function_343(&iParam0), Function_349(&iParam0));
	Function_353(&iLocal_463, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_371(int iParam0) //Position: 0x12E1D / 77341
{
	Function_343(&iParam0);
	Function_349(&iParam0);
	iLocal_463 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), 357, Function_343(&iParam0), Function_349(&iParam0));
	Function_353(&iLocal_463, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_372(int iParam0) //Position: 0x12E50 / 77392
{
	Function_343(&iParam0);
	Function_349(&iParam0);
	iLocal_463 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), 182, Function_343(&iParam0), Function_349(&iParam0));
	Function_353(&iLocal_463, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_373(int iParam0) //Position: 0x12E82 / 77442
{
	Function_343(&iParam0);
	Function_349(&iParam0);
	iLocal_463 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), 332, Function_343(&iParam0), Function_349(&iParam0));
	Function_353(&iLocal_463, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_374(bool bParam0) //Position: 0x12EB5 / 77493
{
	Function_343(&bParam0);
	Function_349(&bParam0);
	iLocal_463 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), 1220, Function_343(&bParam0), Function_349(&bParam0));
	Function_348(&iLocal_463, 2, 0);
	SET_ACTOR_PROOF(&iLocal_463, 4194304);
	return;
}

var Function_375(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x12EEC / 77548
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_6624)
	{
		Function_380(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_379())
		{
			return "";
		}
	}
	if (!Function_377())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_366();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_343(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_343(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_343(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_343(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_376(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_376(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
				if (IS_ACTOR_HORSE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
				}
				else if (IS_ACTOR_MULE(&Global_21369 + 72))
				{
					ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
				}
			}
			else
			{
				Var8 = Vector(&iParam2, &iParam3, &iParam4);
				if (!Function_169(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_35(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(&Global_21369 + 72);
		if (IS_ACTOR_HORSE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 4);
		}
		else if (IS_ACTOR_MULE(&Global_21369 + 72))
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 9 || ANIMAL_ACTOR_GET_SPECIES(&Global_21369 + 72) != 8)
		{
			ACCESSORIZE_HORSE(&Global_21369 + 72, 8);
		}
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	if (bVar1)
	{
		if (&bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(&Global_21369 + 72, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(&Global_54076);
		SET_ACTORS_HORSE(&Global_54076, &Global_21369 + 72);
		Function_327(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_376(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13249 / 78409
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar19] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar19] + 8))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!&bParam2)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!&bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (&bParam4)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_377() //Position: 0x132E9 / 78569
{
	if (Function_378() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_378() //Position: 0x132FF / 78591
{
	return Global_21369.f_244;
}

bool Function_379() //Position: 0x1330A / 78602
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_380(var uParam0, bool bParam1, bool bParam2) //Position: 0x1332A / 78634
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_219(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_219(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_381(int iParam0) //Position: 0x13359 / 78681
{
	if (!Function_260(&iParam0))
	{
		Function_358(&iParam0, 0.0f);
	}
	return;
}

void Function_382(int iParam0, int iParam1) //Position: 0x13370 / 78704
{
	if (!Function_260(&iParam0))
	{
		Function_358(&iParam0, iParam1);
	}
	return;
}

var Function_383(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x13388 / 78728
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_35(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blkFirstTimeGraveyard", 2, 1);
	}
	Function_384(&uVar0);
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

void Function_384(int iParam0) //Position: 0x13417 / 78871
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_386(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_385(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 8,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,09f, 2);
	return;
}

void Function_385(int iParam0) //Position: 0x13474 / 78964
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,71252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(542,7578f, 93,98339f, 1198,781f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,325511f, 2,072496f, -2E-06f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_386(float fParam0) //Position: 0x134ED / 79085
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 29,73172f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &fParam0, Vector(542,1422f, 93,89145f, 1200,29f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &fParam0, Vector(0,249336f, 1,708657f, -2E-06f), 1);
	RESET_CAMERASHOT_TARGET(&fParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_387(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x13566 / 79206
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_137();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_111();
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
			if (IS_VOLUME_VALID(&iParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&iParam7);
				DELETE_PROJECTILES_IN_VOLUME(&iParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_168(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_35(), 2,802597E-45f, Function_168(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_83(19, 1, 0, 0);
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
	if (iParam10 && !Function_178())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_388()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_388()));
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
	if (Function_56(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_120(0x4000000);
	}
	if (Function_56(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_120(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_388() //Position: 0x13818 / 79896
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		iVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&iVar2))
		{
			while (IS_OBJECT_VALID(&iVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&iVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&iVar2), "bino_camera"))
				{
					return &iVar2;
				}
				iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_389(bool bParam0) //Position: 0x138A6 / 80038
{
	var uVar0;
	
	Function_343(&bParam0 + 116[0]);
	Function_349(&bParam0 + 116[0]);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uLocal_490, Function_35(), iLocal_416[iLocal_432], Function_343(&bParam0 + 116[0]), Function_349(&bParam0 + 116[0]));
	Function_353(&uVar0, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	SQUAD_JOIN(&uVar0, &bParam0 + 8);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	TASK_GO_NEAR_ACTOR(&uVar0, &Global_54076, 3.0f, 1);
	Function_352();
	iLocal_432++;
	return;
}

bool Function_390() //Position: 0x13911 / 80145
{
	var uVar0;
	
	uVar0 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar0)), "dlc_player_burn_coffin"))
		{
			if (!iLocal_537)
			{
				Function_382(&iLocal_412, 0.0f);
				iLocal_537 = 1;
			}
			else if (Function_360(&iLocal_412, 1,5f))
			{
				iLocal_537 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void Function_391() //Position: 0x1397C / 80252
{
	var uVar0;
	
	uVar0 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar0)), "dlc_player_burn_coffin"))
		{
			iLocal_479 = 1;
			SET_ACTOR_PROOF(&Global_54076, 16);
			fLocal_480 = GET_CURRENT_GAME_TIME();
		}
	}
	if (iLocal_479)
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_480) < 7,5f)
		{
			CLEAR_ACTOR_PROOF(&Global_54076, 16);
			iLocal_479 = 0;
		}
	}
	return;
}

void Function_392(struct<265> Param0) //Position: 0x139F3 / 80371
{
	int iVar0;
	int iVar1;
	
	uLocal_490 = CREATE_LAYOUT("ngraveyard");
	if (IS_LAYOUTREF_VALID(&uLocal_490))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			iLocal_416[iVar0] = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), iLocal_477);
			STREAMING_REQUEST_ACTOR(iLocal_416[iVar0], 1, false);
			iLocal_477++;
			iVar0++;
		}
		bLocal_428 = Function_346(9, 15);
		STREAMING_REQUEST_ACTOR(bLocal_428, 1, false);
		bLocal_429 = Function_346(1214, 1221);
		STREAMING_REQUEST_ACTOR(bLocal_429, 1, false);
		bLocal_430 = Function_346(1204, 1213);
		STREAMING_REQUEST_ACTOR(bLocal_430, 1, false);
		bLocal_431 = Function_346(1222, 1227);
		STREAMING_REQUEST_ACTOR(bLocal_431, 1, false);
		iLocal_432 = 0;
		iLocal_457 = 0;
		iLocal_458 = 0;
		iLocal_459 = 1;
		bLocal_461 = false;
		iLocal_462 = 0;
		bLocal_478 = false;
		iLocal_482 = 0;
		iLocal_481 = 0;
		if (!SQUAD_IS_VALID(&Param0 + 8))
		{
			(&Param0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_490, "Squad_Zombie"));
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 8);
			iVar1 |= 2048;
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 8, iVar1);
		}
		Param0 = 1;
		Param0.f_60 = 0;
		Param0.f_24 = 0;
		Param0.f_64 = 75;
		if (Param0.f_264 != 0 && Function_396(Global_46948) >= 0)
		{
			Param0.f_4 = 2;
		}
		else
		{
			Param0.f_4 = 3;
		}
		if (Global_6666)
		{
			Param0.f_16 = 2;
			Param0.f_20 = 6;
		}
		iLocal_460 = 0;
		Function_382(&iLocal_465, -5.0f);
		if (!IS_OBJECT_VALID(&Param0 + 32))
		{
			*(&Param0 + 32) = CREATE_EVENT_TRAP("killET", 2, &uLocal_490);
			EVENT_TRAP_ON_PERPETRATOR(&Param0 + 32, &Global_54076);
			EVENT_TRAP_STORE_EVENTS(&Param0 + 32, 1);
		}
		if (!IS_OBJECT_VALID(&Param0 + 40))
		{
			*(&Param0 + 40) = CREATE_EVENT_TRAP("headshotET", 10, &uLocal_490);
			EVENT_TRAP_ON_PERPETRATOR(&Param0 + 40, &Global_54076);
			EVENT_TRAP_STORE_EVENTS(&Param0 + 40, 1);
		}
		Function_343(&Param0 + 68[0]);
		Function_349(&Param0 + 68[0]);
		vLocal_494 = CREATE_PROP_IN_LAYOUT(&uLocal_490, Function_35(), "$/fragments/p_gen_coffin04x", Function_343(&Param0 + 68[0]), Function_349(&Param0 + 68[0]), 1);
		SNAP_OBJECT_TO_GROUND(&vLocal_494, 5.0f, 1, 1092616192);
		SET_PROP_AI_OBSTACLE_ENABLED(&vLocal_494, 1);
		Function_343(&vLocal_494);
		CLEAR_AREA_OF_GRASS(Function_343(&vLocal_494), 2.0f);
		Function_343(&vLocal_494);
		CLEAR_AREA_OF_TREE_TYPE(Function_343(&vLocal_494), 2.0f, "");
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(&vLocal_494, 330, 0f, 2, 0), "blip_coffin");
		Function_179("GY_Burn_coffin", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_394(&Param0);
		Global_6628 = 1;
		if (DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
		{
			DECOR_REMOVE(&Global_54076, "bStartedGY");
		}
		AUDIO_MUSIC_FORCE_TRACK(Function_393(Param0.f_264), "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_393(int iParam0) //Position: 0x13CF2 / 81138
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, RETURN TC_NRT_SONG_01!");
		return "TC_NRT_SONG_01";
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "TC_NRT_SONG_01";
			break;
		
		case 0x00000001:
			return "TC_FTR_SONG_02";
			break;
		
		case 0x00000004:
			return "TC_MEX_SONG_01";
			break;
		
		case 0x00000003:
			return "TC_FTR_SONG_04";
			break;
		
		case 0x00000002:
			return "TC_FTR_SONG_03";
			break;
	}
	return "TC_NRT_SONG_01";
}

void Function_394(struct<265> Param0) //Position: 0x13E10 / 81424
{
	int iVar0;
	
	switch (Param0.f_264)
	{
		case 0x00000000:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_395(&iVar0);
			}
			break;
		
		case 0x00000001:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "coots_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_395(&iVar0);
			}
			break;
		
		case 0x00000003:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "tumbleweed_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_395(&iVar0);
			}
			break;
		
		case 0x00000002:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "oddfellows_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_395(&iVar0);
			}
			break;
		
		case 0x00000004:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "sepulcro_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_395(&iVar0);
			}
			break;
	}
	return;
}

void Function_395(var uParam0) //Position: 0x13FA0 / 81824
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		}
	}
	return;
}

int Function_396(int iParam0) //Position: 0x13FD3 / 81875
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_397() //Position: 0x13FED / 81901
{
	if (!Function_188(&iLocal_435))
	{
		return 0;
	}
	return 1;
}

void Function_398(struct<265> Param0) //Position: 0x14000 / 81920
{
	Function_193(&iLocal_435, "repeater_carbine01x", 0, 0);
	switch (Param0.f_264)
	{
		case 0x00000000:
			Function_399(&iLocal_435, 1220, 3, 0);
			break;
		
		case 0x00000001:
			Function_399(&iLocal_435, 332, 3, 0);
			break;
		
		case 0x00000003:
			Function_399(&iLocal_435, 357, 3, 0);
			break;
		
		case 0x00000002:
			Function_399(&iLocal_435, 182, 3, 0);
			break;
		
		case 0x00000004:
			Function_399(&iLocal_435, 556, 3, 0);
			break;
	}
	return;
}

var Function_399(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x14098 / 82072
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_43(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_191(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_191(&(Param0[iVar02]), 8);
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

void Function_400(vector3 vParam0) //Position: 0x14174 / 82292
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
			if (!Function_406(&vParam0, 63))
			{
				if (Function_405(76) || Function_53(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_404(&cParam1, &vParam0, 3, &uParam3);
						Function_403(&vParam0, 63);
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
			Function_402();
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
			Function_401();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_406(&vParam0, 63))
		{
			if (Function_405(76) || Function_53(76))
			{
				Function_404(&cParam1, &vParam0, 3, &uParam3);
				Function_403(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_404(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_401() //Position: 0x14385 / 82821
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_403(&(Global_39874[33]), bVar0);
		bVar0++;
	}
	return;
}

void Function_402() //Position: 0x143CC / 82892
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_403(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_403(int iParam0, bool bParam1) //Position: 0x1441E / 82974
{
	if (bParam1 <= 32)
	{
		Function_219(&iParam0, Function_298(bParam1));
	}
	else
	{
		Function_219(&iParam0 + 4, Function_298((bParam1 - 32)));
	}
	return;
}

bool Function_404(char* cParam0) //Position: 0x14449 / 83017
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(&iParam1 + 16))
	{
		*(&iParam1 + 16) = CREATE_OBJECTSET_IN_LAYOUT("graveTextSet", &uParam3, 4294967295, 0);
	}
	bVar5 = false;
	bVar5 = false;
	while (bVar5 <= 3)
	{
		strcpy(&cVar1, &cParam0, 16);
		stradd(&cVar1, I2STR(bParam2), 16);
		stradd(&cVar1, "_", 16);
		stradd(&cVar1, I2STR(bVar5), 16);
		if (bVar5 != 0 || Function_406(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_35(), &cVar1, bParam2, bVar5, 4278716679);
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

int Function_405(int iParam0) //Position: 0x144F6 / 83190
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_406(struct<5> Param0) //Position: 0x1450B / 83211
{
	if (bParam1 <= 32)
	{
		return Function_28(Param0, Function_298(bParam1));
	}
	return Function_28(StackVal, Function_298((bParam1 - 32)));
}

void Function_407(char* cParam0) //Position: 0x14538 / 83256
{
	if (!Function_56(128))
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

void Function_408(int iParam0, bool bParam1) //Position: 0x14578 / 83320
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
		Function_95(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_409(int iParam0) //Position: 0x14668 / 83560
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_410(bool bParam0) //Position: 0x1467B / 83579
{
	Function_411(0, 0.0f, 3, &iLocal_178, &Global_44085[bParam09] + 8, 1);
	return;
}

void Function_411(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x14695 / 83605
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
		Function_414();
	}
	if (&bParam5)
	{
		Function_412(1048576);
	}
}

void Function_412(int iParam0) //Position: 0x147A3 / 83875
{
	Function_413(&Global_43580, iParam0);
	return;
}

void Function_413(var uParam0, var uParam1) //Position: 0x147B1 / 83889
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_414() //Position: 0x147D0 / 83920
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_412(16384);
	}
	return;
}

void Function_415(var uParam0) //Position: 0x147EC / 83948
{
	uParam0 = uParam0;
	return;
}

void Function_416() //Position: 0x147F6 / 83958
{
	return;
}

void Function_417(int iParam0) //Position: 0x147FC / 83964
{
	iParam0 = iParam0;
	return;
}

void Function_418(var uParam0, int iParam1) //Position: 0x14806 / 83974
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_419(int iParam0, int iParam1) //Position: 0x14820 / 84000
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_420() //Position: 0x1483D / 84029
{
	return;
}

void Function_421() //Position: 0x14843 / 84035
{
	return;
}

void Function_422(int iParam0) //Position: 0x14849 / 84041
{
	iParam0 = iParam0;
	return;
}

void Function_423(int iParam0, bool bParam1, int iParam2) //Position: 0x14853 / 84051
{
	if ((!Function_7(bParam1) || Global_6623) || Function_28(&iParam0 + 608, 16))
	{
		return;
	}
	if (bParam1 == Global_46760[0])
	{
		Function_424(&iParam0, bParam1, &Global_11014, &iParam2);
	}
	else if (bParam1 == Global_46760[1])
	{
		Function_424(&iParam0, bParam1, &Global_11146, &iParam2);
	}
	else if (bParam1 == Global_46760[2])
	{
		Function_424(&iParam0, bParam1, &Global_11120, &iParam2);
	}
	else if (bParam1 == Global_46796[1])
	{
		Function_424(&iParam0, bParam1, &Global_11222, &iParam2);
	}
	else if (bParam1 == Global_46796[3])
	{
		Function_424(&iParam0, bParam1, &Global_11284, &iParam2);
	}
	else if (bParam1 == Global_46796[4])
	{
		Function_424(&iParam0, bParam1, &Global_11492, &iParam2);
	}
	else if (bParam1 == Global_46816[0])
	{
		Function_424(&iParam0, bParam1, &Global_11544, &iParam2);
	}
	else if (bParam1 == Global_46816[1])
	{
		Function_424(&iParam0, bParam1, &Global_11646, &iParam2);
	}
	else if (bParam1 == Global_46816[2])
	{
		Function_424(&iParam0, bParam1, &Global_11704, &iParam2);
	}
	else if (bParam1 == Global_46838[1])
	{
		Function_424(&iParam0, bParam1, &Global_11752, &iParam2);
	}
	else if (bParam1 == Global_46838[0])
	{
		Function_424(&iParam0, bParam1, &Global_11726, &iParam2);
	}
	else if (bParam1 == Global_46850[0])
	{
		Function_424(&iParam0, bParam1, &Global_11836, &iParam2);
	}
	else if (bParam1 == Global_46850[1])
	{
		Function_424(&iParam0, bParam1, &Global_11946, &iParam2);
	}
	else if (bParam1 == Global_46850[2])
	{
		Function_424(&iParam0, bParam1, &Global_11988, &iParam2);
	}
	else if (bParam1 == Global_46866[0])
	{
		Function_424(&iParam0, bParam1, &Global_12048, &iParam2);
	}
	else if (bParam1 == Global_46866[1])
	{
		Function_424(&iParam0, bParam1, &Global_12150, &iParam2);
	}
	else if (bParam1 == Global_46866[2])
	{
		Function_424(&iParam0, bParam1, &Global_11398, &iParam2);
	}
	else if (bParam1 == Global_46894[2])
	{
		Function_424(&iParam0, bParam1, &Global_12284, &iParam2);
	}
	else if (bParam1 == Global_46894[1])
	{
		Function_424(&iParam0, bParam1, &Global_12342, &iParam2);
	}
	else if (bParam1 == Global_46894[0])
	{
		Function_424(&iParam0, bParam1, &Global_12422, &iParam2);
	}
	else if (bParam1 == Global_46894[3])
	{
		Function_424(&iParam0, bParam1, &Global_12392, &iParam2);
	}
	else if (bParam1 == Global_46926[0])
	{
		Function_424(&iParam0, bParam1, &Global_12760, &iParam2);
	}
	else if (bParam1 == Global_46926[1])
	{
		Function_424(&iParam0, bParam1, &Global_12714, &iParam2);
	}
	else if (bParam1 == Global_46926[2])
	{
		Function_424(&iParam0, bParam1, &Global_12644, &iParam2);
	}
	else if (bParam1 == Global_46914[0])
	{
		Function_424(&iParam0, bParam1, &Global_12488, &iParam2);
	}
	else if (bParam1 == Global_46914[1])
	{
		Function_424(&iParam0, bParam1, &Global_12482, &iParam2);
	}
	Function_219(&iParam0 + 608, 64);
	return;
}

void Function_424(int iParam0, int iParam1, struct<2>[] Param2, var uParam3) //Position: 0x14B57 / 84823
{
	struct<8> Var0;
	var uVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<8> Var28;
	
	Function_45(&iParam0 + 608, 1);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_433("localSurvSquad") };
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam3, &Var0));
	}
	uVar8 = Function_432(&uParam3, iParam1);
	iVar18 = Function_116(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_21684[&iParam0 + 6247].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_26(iParam1);
	iVar22 = 0;
	while (iVar22 < (iVar18 - 1))
	{
		if (iVar22 <= Param2)
		{
			if (!Function_431(&(Param2[iVar222]), 4))
			{
				*(&iParam0 + 8[iVar225] + 8) = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar22, &uVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(&iParam0 + 8[iVar225] + 8, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(&iParam0 + 8[iVar225] + 8, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					Var24 = Vector(0.0f, 0.0f, 0.0f);
					Var26 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION(&iParam0 + 8[iVar225] + 8, &Var24);
					GET_OBJECT_ORIENTATION(&iParam0 + 8[iVar225] + 8, &Var26);
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_433("nSurvivor_") };
					*(&iParam0 + 8[iVar225]) = CREATE_ACTOR_IN_LAYOUT(&uParam3, &Var28, iVar9[iVar22], Var24, Var26);
					Function_426(iVar22, &iParam0, &uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(Var24, 3.0f))
					{
						Function_219(&iParam0 + 8[iVar225] + 32, 1);
						Function_219(&iParam0 + 608, 1024);
					}
					Function_219(&iParam0 + 608, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_425(&(Param2[iVar222]), 4);
				}
			}
		}
		iVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_208(&iParam0, &iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_425(var uParam0, int iParam1) //Position: 0x14D63 / 85347
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_426(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x14D74 / 85364
{
	int iVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	struct<5> Var6;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	var uVar21;
	var uVar22;
	
	iVar0 = &iParam1 + 8[iParam05];
	uVar1 = &iParam1 + 8[iParam05] + 8;
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SQUAD_JOIN(&iVar0, &iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(&iVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(&iVar0);
	SET_ACTOR_MAX_HEALTH(&iVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(&iVar0, 0);
	uVar4 = Vector(0.0f, 0.0f, 0.0f);
	Var6 = Vector(0.0f, 0.0f, 0.0f);
	GET_OBJECT_POSITION(&iParam1 + 8[iParam05] + 8, &uVar4);
	GET_OBJECT_ORIENTATION(&iParam1 + 8[iParam05] + 8, &Var6);
	bVar8 = true;
	if (DECOR_CHECK_EXIST(&uVar1, "GiveWeapon"))
	{
		bVar9 = DECOR_GET_INT(&uVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(&iVar0, bVar9, 0f, 1, 1);
		iVar10 = UNK_0xDB679ED9(bVar9);
		if (iVar10 == 40)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 7);
		}
		else if (iVar10 == 39)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 6);
		}
		else if (iVar10 == 41)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 8);
		}
		else if (iVar10 == 42)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 9);
		}
		else if (iVar10 == 43)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 10);
		}
		else if (iVar10 == 44)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0f, 1, 1);
		bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
		DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
		DECOR_SET_INT(&iVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&iVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&iVar0, false);
	AI_BEHAVIOR_SET_ALLOW(&iVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iVar0, 1);
	Function_430(&iVar0, 0);
	Function_429(&iVar0, 0);
	SET_CRIPPLE_ENABLE(&iVar0, 0);
	SET_ACTOR_ALLOW_DISARM(&iVar0, 0);
	if (DECOR_CHECK_EXIST(&uVar1, "Accuracy"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "Accuracy");
		Function_428(&iVar0, TO_FLOAT(bVar11), 1.0f, 1.0f);
	}
	else
	{
		Function_428(&iVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 61, RAND_FLOAT_RANGE(0,1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(&iVar0, (RAND_INT_RANGE(0, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(&iVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(&iVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(&uVar1, "nShoot_Vol"))
	{
		bVar12 = DECOR_GET_INT(&uVar1, "nShoot_Vol");
		strcpy(&cVar13, "survVol_", 32);
		stradd(&cVar13, INT_TO_STRING(bVar12), 32);
		uVar21 = FIND_VOLUME_IN_LAYOUT(&uParam2, &cVar13);
		if (IS_VOLUME_VALID(&uVar21))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &uVar21, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, true);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_OVERRIDE_SET_POSTURE(&iVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "Gringo") || !bParam3)
	{
		uVar22 = LOCATE_GRINGO_OF_TYPE("", &uVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(&uVar22))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_427(&uVar22, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowSun", 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowRain", 1);
					SNAP_ACTOR_TO_GRINGO(&iVar0, GET_OBJECT_FROM_GRINGO(&uVar22), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(&iVar0, 2);
					TASK_USE_GRINGO(&iVar0, &uVar22, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse", 1);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, 2);
			TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	Function_428(&iVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,75f);
	MEMORY_CONSIDER_AS(&iVar0, &Global_54076, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, &iVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(&uVar1, "Core"))
		{
			*(&iParam1 + 336) = &iVar0;
		}
		else if (Global_21684[&iParam1 + 6247].f_32 < 0.0f)
		{
			Global_21684[&iParam1 + 6247].f_32 = (Global_21684[&iParam1 + 6247].f_32 - 1.0f);
			DECOR_SET_BOOL(&iVar0, "PreSaved", 1);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	}
}

var Function_427(var uParam0, int iParam1) //Position: 0x1545B / 87131
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_428(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x1546A / 87146
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

void Function_429(var uParam0, bool bParam1) //Position: 0x154BB / 87227
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[7]));
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[5]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[7]), 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[5]), 0);
	}
	return;
}

void Function_430(var uParam0, bool bParam1) //Position: 0x1550A / 87306
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

bool Function_431(var uParam0, int iParam1) //Position: 0x1553E / 87358
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_432(int iParam0, int iParam1) //Position: 0x1555B / 87387
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar8 = GET_OBJECT_NAME(&iVar1);
		if (Function_26(iParam1))
		{
			if (STRING_CONTAINS_STRING(&uVar8, "_def"))
			{
				uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(&uVar8, "_safe"))
		{
			uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
			iVar2++;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return &(uVar3[(RAND_INT_RANGE(0, 100000) % iVar2)]);
}

struct<32> Function_433(char* cParam0) //Position: 0x15611 / 87569
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("0", &cVar8, ""), 4);
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

struct<32> Function_434(char* cParam0) //Position: 0x1567D / 87677
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_435() //Position: 0x1569F / 87711
{
	return;
}

bool Function_436(int iParam0) //Position: 0x156A5 / 87717
{
	if (Function_28(&iParam0 + 608, 16))
	{
		return 1;
	}
	return Function_188(&iParam0 + 384);
}

int Function_437(int iParam0) //Position: 0x156C8 / 87752
{
	if (!Function_7(iParam0))
	{
		return 1;
	}
	return Function_419(&(Global_43791[iParam0]), 4);
}

var Function_438() //Position: 0x156E4 / 87780
{
	return HAS_STRING_TABLE_LOADED("graveyards");
}

void Function_439(bool bParam0) //Position: 0x156FA / 87802
{
	Function_440(&uLocal_576, &cLocal_7, "chapel01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_440(&uLocal_576, &cLocal_7, "chapel01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_440(&uLocal_576, &cLocal_7, "chapel01", 3, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_440(&uLocal_576, &cLocal_7, "chapel01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	return;
}

var Function_440(struct<4>[] Param0, var uParam1, char* cParam2) //Position: 0x1578C / 87948
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_441(&Param0);
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
		Function_73(&(Param0[iVar04]), 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), 1);
	}
	Function_73(&(Param0[iVar04]), 4096);
	*(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_73(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_73(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_441(struct<4>[] Param0) //Position: 0x1588F / 88207
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

void Function_442() //Position: 0x158C0 / 88256
{
	Function_443(&uLocal_9, &uLocal_538, 4, &iLocal_256 + 8, 4294967295, 4);
	Function_443(&uLocal_9, &uLocal_538, 5, &iLocal_256 + 56, 4294967295, 266);
	Function_443(&uLocal_9, &uLocal_538, 5, &iLocal_256 + 136, 4294967295, 258);
	Function_443(&uLocal_9, &uLocal_538, 5, &iLocal_256 + 144, 4294967295, 258);
	Function_443(&uLocal_9, &uLocal_538, 5, &iLocal_256 + 152, 4294967295, 258);
	Function_443(&uLocal_9, &uLocal_538, 5, &iLocal_256 + 160, 4294967295, 258);
	return;
}

void Function_443(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x15936 / 88374
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

void Function_444(struct<5> Param0) //Position: 0x15A23 / 88611
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_445(int iParam0, int iParam1) //Position: 0x15A34 / 88628
{
	var uVar0;
	int iVar1;
	
	if (Function_28(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "MoveRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_446(int iParam0, int iParam1, bool bParam2) //Position: 0x15AAA / 88746
{
	var uVar0;
	int iVar1;
	
	if (Function_28(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "SpawnRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	if (!Function_26(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_44085[bParam29] + 8))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam29] + 8);
		}
	}
	return;
}

var Function_447() //Position: 0x15B48 / 88904
{
	return &iLocal_178;
}

void Function_448(int iParam0) //Position: 0x15B51 / 88913
{
	cLocal_7 = Function_449(&iLocal_178, "coots", iParam0);
	return;
}

int Function_449(int iParam0, var uParam1, int iParam2) //Position: 0x15B6A / 88938
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_450() //Position: 0x15B8D / 88973
{
	return Function_451();
}

int Function_451() //Position: 0x15B96 / 88982
{
	var uVar0;
	
	Function_452(3, 3);
	uVar0 = &uVar0;
	iLocal_256 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_256))
	{
		iLocal_256 = CREATE_LAYOUT("CootsChapel_layout");
	}
	*(&iLocal_256 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_region", 4,203895E-45f, Vector(-1785,518f, 24,0941f, 2855,945f), Vector(0.0f, 20.0f, 0.0f), Vector(50.0f, 25.0f, 50,0001f));
	*(&iLocal_256 + 56) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_256, "coov_church_set");
	*(&iLocal_256 + 16[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_church_main_chapel", 2,802597E-45f, Vector(-1789,893f, 25,8545f, 2852,787f), Vector(0.0f, 20,3847f, 0.0f), Vector(6,533716f, 7,185509f, 17,1488f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 56, &iLocal_256 + 16[0]);
	*(&iLocal_256 + 16[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_church_rooms2", 2,802597E-45f, Vector(-1793,754f, 25,79757f, 2857,363f), Vector(0.0f, 19,37619f, 0.0f), Vector(4,932437f, 5,594979f, 6,661956f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 56, &iLocal_256 + 16[1]);
	*(&iLocal_256 + 16[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_church_bck_room", 2,802597E-45f, Vector(-1788,075f, 26,8661f, 2857,867f), Vector(0.0f, 20,23496f, 0.0f), Vector(7,067983f, 4,820869f, 3,81275f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 56, &iLocal_256 + 16[2]);
	*(&iLocal_256 + 16[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_church_front_porch", 2,802597E-45f, Vector(-1793,703f, 25,72257f, 2843,684f), Vector(1,770297f, 22,35086f, 0,9407392f), Vector(5,656374f, 5,426769f, 2,722607f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 56, &iLocal_256 + 16[3]);
	*(&iLocal_256 + 128) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_256, "coov_vultures_set");
	*(&iLocal_256 + 64[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_pop_vultures2", 4,203895E-45f, Vector(-1780,068f, 34,45401f, 2864,857f), Vector(0.0f, 20.0f, 0.0f), Vector(4,164067f, 28,79622f, 4,291873f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 128, &iLocal_256 + 64[0]);
	*(&iLocal_256 + 64[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_pop_vultures", 4,203895E-45f, Vector(-1768,1f, 32,80341f, 2839,247f), Vector(0.0f, 20.0f, 0.0f), Vector(6,014821f, 24,53327f, 6,199431f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 128, &iLocal_256 + 64[1]);
	*(&iLocal_256 + 64[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_pop_vultuers3", 4,203895E-45f, Vector(-1802,182f, 26,63374f, 2842,637f), Vector(0.0f, 20.0f, 0.0f), Vector(4,036973f, 7,376061f, 3,307151f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 128, &iLocal_256 + 64[2]);
	*(&iLocal_256 + 64[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder4", 4,203895E-45f, Vector(-1805,36f, 24,09713f, 2872,041f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 128, &iLocal_256 + 64[3]);
	*(&iLocal_256 + 64[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder1", 4,203895E-45f, Vector(-1813,237f, 24,09713f, 2858,151f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 128, &iLocal_256 + 64[4]);
	*(&iLocal_256 + 64[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder2", 4,203895E-45f, Vector(-1761,424f, 24,09713f, 2848,518f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 128, &iLocal_256 + 64[5]);
	*(&iLocal_256 + 64[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder3", 4,203895E-45f, Vector(-1767,435f, 24,09713f, 2874,551f), Vector(0.0f, 20.0f, 0.0f), Vector(6,860088f, 32,06005f, 4,968766f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 128, &iLocal_256 + 64[6]);
	*(&iLocal_256 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_abd_house1", 2,802597E-45f, Vector(-1804,489f, 27,10587f, 2750,655f), Vector(0.0f, 0.0f, 0.0f), Vector(10,92896f, 7,066658f, 10,80309f));
	*(&iLocal_256 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_abd_house2", 2,802597E-45f, Vector(-1757,247f, 27,28255f, 2801,044f), Vector(0.0f, 0.0f, 0.0f), Vector(7,434853f, 7,991008f, 5,037548f));
	*(&iLocal_256 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_abd_house3", 2,802597E-45f, Vector(-1876f, 26,93258f, 2728,318f), Vector(0.0f, 0.0f, 0.0f), Vector(7,562485f, 5,027176f, 8,347751f));
	*(&iLocal_256 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_abd_house4", 2,802597E-45f, Vector(-1890,149f, 25,36248f, 2704,97f), Vector(0.0f, -35,02938f, 0.0f), Vector(6,897596f, 4,889504f, 5,126114f));
	*(&iLocal_256 + 288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_256, "coov_crows_set");
	*(&iLocal_256 + 168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder12", 4,203895E-45f, Vector(-1764f, 29,14208f, 2868,377f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[0]);
	*(&iLocal_256 + 168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder5", 4,203895E-45f, Vector(-1809,529f, 29,14208f, 2871,397f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[1]);
	*(&iLocal_256 + 168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder6", 4,203895E-45f, Vector(-1796,498f, 29,14208f, 2875,382f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[2]);
	*(&iLocal_256 + 168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder7", 4,203895E-45f, Vector(-1759,427f, 29,14208f, 2848,11f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[3]);
	*(&iLocal_256 + 168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder8", 4,203895E-45f, Vector(-1814,701f, 29,14208f, 2847,058f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[4]);
	*(&iLocal_256 + 168[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "nCylinder9", 4,203895E-45f, Vector(-1778,111f, 29,14208f, 2868,861f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[5]);
	*(&iLocal_256 + 168[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder10", 4,203895E-45f, Vector(-1802,34f, 29,14208f, 2862,686f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[6]);
	*(&iLocal_256 + 168[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder11", 4,203895E-45f, Vector(-1772,332f, 29,14208f, 2840,827f), Vector(0.0f, 20.0f, 0.0f), Vector(3,980274f, 12,27519f, 5,739097f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[7]);
	*(&iLocal_256 + 168[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder39", 4,203895E-45f, Vector(-1790,557f, 24,8034f, 2853,52f), Vector(0.0f, 20.0f, 0.0f), Vector(10,53282f, 14,56414f, 14,63171f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[8]);
	*(&iLocal_256 + 168[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder34", 4,203895E-45f, Vector(-1842,569f, 25,18892f, 2789,768f), Vector(0.0f, 20.0f, 0.0f), Vector(8,642062f, 7,830865f, 8,470125f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[9]);
	*(&iLocal_256 + 168[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder35", 4,203895E-45f, Vector(-1877,087f, 26,2377f, 2729,079f), Vector(0.0f, 20.0f, 0.0f), Vector(8,642062f, 7,830865f, 8,470125f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[10]);
	*(&iLocal_256 + 168[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder36", 4,203895E-45f, Vector(-1900,127f, 26,19918f, 2711,338f), Vector(0.0f, 20.0f, 0.0f), Vector(8,642062f, 7,830865f, 8,470125f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[11]);
	*(&iLocal_256 + 168[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder37", 4,203895E-45f, Vector(-1805,213f, 26,18672f, 2749,628f), Vector(0.0f, 20.0f, 0.0f), Vector(10,48037f, 7,830865f, 10,78617f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[12]);
	*(&iLocal_256 + 168[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder38", 4,203895E-45f, Vector(-1756,097f, 27,12459f, 2799,404f), Vector(0.0f, 20.0f, 0.0f), Vector(14,56298f, 7,830865f, 10,09194f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 288, &iLocal_256 + 168[13]);
	*(&iLocal_256 + 344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_256, "coov_snakes_set");
	*(&iLocal_256 + 296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder17", 4,203895E-45f, Vector(-1818,7f, 24,0941f, 2862,11f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 344, &iLocal_256 + 296[0]);
	*(&iLocal_256 + 296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder13", 4,203895E-45f, Vector(-1808,88f, 24,0941f, 2841,824f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 344, &iLocal_256 + 296[1]);
	*(&iLocal_256 + 296[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder14", 4,203895E-45f, Vector(-1818,7f, 24,0941f, 2862,11f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 344, &iLocal_256 + 296[2]);
	*(&iLocal_256 + 296[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder15", 4,203895E-45f, Vector(-1753,891f, 24,0941f, 2862,11f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 344, &iLocal_256 + 296[3]);
	*(&iLocal_256 + 296[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder16", 4,203895E-45f, Vector(-1797,701f, 24,0941f, 2878,21f), Vector(0.0f, 20.0f, 0.0f), Vector(2,373678f, 2,345387f, 4,521883f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 344, &iLocal_256 + 296[4]);
	*(&iLocal_256 + 424) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_256, "coov_rabbits_set");
	*(&iLocal_256 + 352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder24", 4,203895E-45f, Vector(-1757,547f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[0]);
	*(&iLocal_256 + 352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder23", 4,203895E-45f, Vector(-1763,895f, 24,11529f, 2864,358f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[1]);
	*(&iLocal_256 + 352[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder22", 4,203895E-45f, Vector(-1811,275f, 24,11529f, 2856,734f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[2]);
	*(&iLocal_256 + 352[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder21", 4,203895E-45f, Vector(-1770,172f, 24,11529f, 2836f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[3]);
	*(&iLocal_256 + 352[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder20", 4,203895E-45f, Vector(-1805,128f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[4]);
	*(&iLocal_256 + 352[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder19", 4,203895E-45f, Vector(-1757,547f, 24,11529f, 2843,368f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[5]);
	*(&iLocal_256 + 352[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder18", 4,203895E-45f, Vector(-1783,435f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[6]);
	*(&iLocal_256 + 352[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder25", 4,203895E-45f, Vector(-1757,547f, 24,11529f, 2874,453f), Vector(0.0f, 20.0f, 0.0f), Vector(5,776541f, 1,88908f, 3,142002f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 424, &iLocal_256 + 352[7]);
	*(&iLocal_256 + 472) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_256, "coov_owls_set");
	*(&iLocal_256 + 432[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder29", 4,203895E-45f, Vector(-1802,821f, 23,90474f, 2842,227f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 472, &iLocal_256 + 432[0]);
	*(&iLocal_256 + 432[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder26", 4,203895E-45f, Vector(-1801,651f, 23,90474f, 2866,974f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 472, &iLocal_256 + 432[1]);
	*(&iLocal_256 + 432[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder27", 4,203895E-45f, Vector(-1766,998f, 23,90474f, 2837,912f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 472, &iLocal_256 + 432[2]);
	*(&iLocal_256 + 432[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder28", 4,203895E-45f, Vector(-1780,78f, 23,90474f, 2864,049f), Vector(0.0f, 20.0f, 0.0f), Vector(2,876812f, 5,645661f, 2,80788f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 472, &iLocal_256 + 432[3]);
	*(&iLocal_256 + 520) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_256, "coov_racoons_set");
	*(&iLocal_256 + 480[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder33", 4,203895E-45f, Vector(-1793,024f, 24,0941f, 2867,051f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 520, &iLocal_256 + 480[0]);
	*(&iLocal_256 + 480[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder30", 4,203895E-45f, Vector(-1772,763f, 24,0941f, 2849,425f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 520, &iLocal_256 + 480[1]);
	*(&iLocal_256 + 480[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder31", 4,203895E-45f, Vector(-1762,158f, 24,0941f, 2866,07f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 520, &iLocal_256 + 480[2]);
	*(&iLocal_256 + 480[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "Cylinder32", 4,203895E-45f, Vector(-1807,124f, 24,0941f, 2848,914f), Vector(0.0f, 20.0f, 0.0f), Vector(3,464828f, 7,636977f, 3,326022f));
	ADD_TO_VOLUME_SET(&iLocal_256 + 520, &iLocal_256 + 480[3]);
	*(&iLocal_256 + 528) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_graveyard_vol", 2,802597E-45f, Vector(-1785,547f, 23,09018f, 2859,256f), Vector(0,8028672f, -157,644f, -2,567306f), Vector(80,0778f, 24,2342f, 58,8811f));
	*(&iLocal_256 + 536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_256, "coov_graveyardExit", 2,802597E-45f, Vector(-1785,547f, 23,09018f, 2859,256f), Vector(0,8028672f, -157,644f, -2,567306f), Vector(140,6954f, 24,2342f, 114,3077f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coof_report_crime_road", Vector(-1832,186f, 21,52767f, 2761,121f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_256 + 544) = Vector(-1790,84f, 24,63191f, 2850,71f);
	*(&iLocal_256 + 544 + 12) = Vector(0.0f, 19,8483f, 0.0f);
	*(&iLocal_256 + 568) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coof_interiorPoint_church", Vector(-1790,84f, 24,63191f, 2850,71f), Vector(0.0f, 19,8483f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos1", Vector(-1835,793f, 35,72f, 2832,312f), Vector(-4,914f, -106,184f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos2", Vector(-1837,374f, 27,155f, 2887,6f), Vector(-1,381f, -41,101f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos3", Vector(-1813,378f, 40,519f, 2899,532f), Vector(-7,912f, -38,781f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos4", Vector(-1728,119f, 28,017f, 2895,264f), Vector(-3,2f, 78,61f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos5", Vector(-1753,918f, 31,581f, 2784,02f), Vector(-6,478f, 147,332f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos6", Vector(-1807,283f, 25,045f, 2834,438f), Vector(20,106f, -114,66f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos7", Vector(-1789,035f, 25,84f, 2839,085f), Vector(47,024f, 124,252f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos8", Vector(-1805,974f, 36,017f, 2873,514f), Vector(-8,181f, -16,462f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos9", Vector(-1683,052f, 36,15f, 2906,98f), Vector(-6,383f, 56,004f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coo_vista_cam_pos10", Vector(-1761,432f, 26,45f, 2876,792f), Vector(6,053f, 52,013f, 0.0f));
	*(&iLocal_256 + 576) = Vector(-1793,186f, 24,63191f, 2848,563f);
	*(&iLocal_256 + 576 + 12) = Vector(0.0f, -0,3551953f, 0.0f);
	*(&iLocal_256 + 600) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_256, "coof_interiorSettlement01", Vector(-1793,186f, 24,63191f, 2848,563f), Vector(0.0f, -0,3551953f, 0.0f));
	return 1;
}

void Function_452(int iParam0, int iParam1) //Position: 0x17279 / 94841
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

void Function_453(var uParam0, int iParam1) //Position: 0x172C3 / 94915
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_454() //Position: 0x172D4 / 94932
{
	return;
}

bool Function_455() //Position: 0x172DA / 94938
{
	return 1;
}

void Function_456() //Position: 0x172E1 / 94945
{
	return;
}

bool Function_457() //Position: 0x172E7 / 94951
{
	if (Function_459())
	{
		Function_120(1);
		Function_458();
		return 1;
	}
	return 0;
}

void Function_458() //Position: 0x172FD / 94973
{
	int iVar0;
	
	Local_614.f_16 = 2;
	Local_614.f_20 = 4;
	*(&Local_614 + 48) = Vector(-1792,576f, 24,675f, 2850,352f);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		*(&Local_614 + 68[iVar0]) = &iLocal_178 + 248[iVar0];
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		*(&Local_614 + 116[iVar0]) = &iLocal_178 + 24[iVar0];
		iVar0++;
	}
	*(&Local_614 + 248) = &iLocal_178 + 8;
	Local_614.f_264 = 1;
	if (Function_396(Global_46949) >= 0)
	{
		Local_614.f_256 = 0;
	}
	else
	{
		Local_614.f_256 = 1;
	}
	Local_614.f_260 = 4;
	return;
}

bool Function_459() //Position: 0x173A4 / 95140
{
	var uVar0;
	
	Function_452(3, 3);
	uVar0 = &uVar0;
	iLocal_178 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_178))
	{
		iLocal_178 = CREATE_LAYOUT("CootsChapel_layout");
	}
	*(&iLocal_178 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "gy_Boss_Spawn", Vector(-1762,437f, 24,17636f, 2847,037f), Vector(0.0f, 32,4143f, 0.0f));
	*(&iLocal_178 + 16) = CREATE_OBJECTSET_IN_LAYOUT("zombieSpawnsSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 24[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_0", Vector(-1764,691f, 24,15298f, 2841,853f), Vector(0.0f, 28,84385f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[0], &iLocal_178 + 16);
	*(&iLocal_178 + 24[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_2", Vector(-1764,984f, 24,03647f, 2847,887f), Vector(0.0f, 21,41122f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[1], &iLocal_178 + 16);
	*(&iLocal_178 + 24[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_3", Vector(-1767,292f, 24,19904f, 2848,934f), Vector(0.0f, 17,73694f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[2], &iLocal_178 + 16);
	*(&iLocal_178 + 24[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_4", Vector(-1770,447f, 24,20039f, 2849,896f), Vector(0.0f, 23,70994f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[3], &iLocal_178 + 16);
	*(&iLocal_178 + 24[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_5", Vector(-1768,674f, 24,16245f, 2843,152f), Vector(-0,7955891f, 19,86011f, -1,67975f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[4], &iLocal_178 + 16);
	*(&iLocal_178 + 24[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_6", Vector(-1771,174f, 24,03451f, 2844,251f), Vector(0.0f, 16,18531f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[5], &iLocal_178 + 16);
	*(&iLocal_178 + 24[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_7", Vector(-1773,385f, 24,16241f, 2844,997f), Vector(0.0f, 14,59764f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[6], &iLocal_178 + 16);
	*(&iLocal_178 + 24[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_8", Vector(-1769,245f, 24,08986f, 2871,441f), Vector(0.0f, 27,69567f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[7], &iLocal_178 + 16);
	*(&iLocal_178 + 24[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_9", Vector(-1770,976f, 24,21327f, 2866,501f), Vector(0.0f, 26,03356f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[8], &iLocal_178 + 16);
	*(&iLocal_178 + 24[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_10", Vector(-1773,651f, 24,23312f, 2871,46f), Vector(0.0f, 25,88277f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[9], &iLocal_178 + 16);
	*(&iLocal_178 + 24[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_11", Vector(-1776,227f, 24,09807f, 2866,808f), Vector(0.0f, 20,40146f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[10], &iLocal_178 + 16);
	*(&iLocal_178 + 24[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_12", Vector(-1776,979f, 24,23426f, 2872,509f), Vector(0.0f, 13,98659f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[11], &iLocal_178 + 16);
	*(&iLocal_178 + 24[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_13", Vector(-1778,91f, 24,24636f, 2867,78f), Vector(0.0f, 19,443f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[12], &iLocal_178 + 16);
	*(&iLocal_178 + 24[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_14", Vector(-1780,13f, 24,09412f, 2873,933f), Vector(0.0f, 31,42674f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[13], &iLocal_178 + 16);
	*(&iLocal_178 + 24[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_15", Vector(-1782,18f, 24,24489f, 2869,132f), Vector(0.0f, 14,08117f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[14], &iLocal_178 + 16);
	*(&iLocal_178 + 24[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_16", Vector(-1787,9f, 24,2051f, 2872,357f), Vector(0.0f, 12,41054f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[15], &iLocal_178 + 16);
	*(&iLocal_178 + 24[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_17", Vector(-1791,145f, 24,20211f, 2873,433f), Vector(0.0f, 14,36137f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[16], &iLocal_178 + 16);
	*(&iLocal_178 + 24[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_18", Vector(-1793,283f, 24,2269f, 2868,604f), Vector(0.0f, 13,86759f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[17], &iLocal_178 + 16);
	*(&iLocal_178 + 24[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_19", Vector(-1806,186f, 24,08918f, 2870,69f), Vector(0.0f, -72,12144f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[18], &iLocal_178 + 16);
	*(&iLocal_178 + 24[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_20", Vector(-1808,058f, 24,23553f, 2868,085f), Vector(0.0f, -70,54736f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[19], &iLocal_178 + 16);
	*(&iLocal_178 + 24[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_21", Vector(-1809,593f, 24,23326f, 2864,969f), Vector(0.0f, -70,55991f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[20], &iLocal_178 + 16);
	*(&iLocal_178 + 24[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_22", Vector(-1805,49f, 24,23457f, 2863,169f), Vector(0.0f, -70,88947f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[21], &iLocal_178 + 16);
	*(&iLocal_178 + 24[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_23", Vector(-1810,657f, 24,1228f, 2862,678f), Vector(0.0f, -71,75198f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[22], &iLocal_178 + 16);
	*(&iLocal_178 + 24[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_24", Vector(-1811,402f, 24,24503f, 2860,427f), Vector(0.0f, -72,02574f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[23], &iLocal_178 + 16);
	*(&iLocal_178 + 24[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_25", Vector(-1806,86f, 24,22989f, 2860,032f), Vector(0.0f, -72,15488f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[24], &iLocal_178 + 16);
	*(&iLocal_178 + 24[25]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_26", Vector(-1804,038f, 24,19606f, 2865,985f), Vector(0.0f, -77,63298f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 24[25], &iLocal_178 + 16);
	*(&iLocal_178 + 240) = CREATE_OBJECTSET_IN_LAYOUT("coffinSpawnsSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 248[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_0", Vector(-1788,89f, 24,09503f, 2865,25f), Vector(0.0f, -94,68063f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 248[0], &iLocal_178 + 240);
	*(&iLocal_178 + 248[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_1", Vector(-1797,018f, 24,07969f, 2871,146f), Vector(0.0f, 13,5915f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 248[1], &iLocal_178 + 240);
	*(&iLocal_178 + 248[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_2", Vector(-1769,876f, 24,09361f, 2861,483f), Vector(0.0f, 34,14956f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 248[2], &iLocal_178 + 240);
	*(&iLocal_178 + 248[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_3", Vector(-1772,294f, 24,0665f, 2840,76f), Vector(0.0f, 83,19403f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 248[3], &iLocal_178 + 240);
	*(&iLocal_178 + 248[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_4", Vector(-1801,449f, 24,09376f, 2860,05f), Vector(0.0f, -94,68063f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 248[4], &iLocal_178 + 240);
	PushArrayP();
	*(&iLocal_178 + 296) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_178, "coop_patrolpath");
	PushArrayP();
	*(&iLocal_178 + 304) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_178, "coop_patrolpath1");
	return 1;
}

void Function_460(bool bParam0, bool bParam1) //Position: 0x17EBF / 97983
{
	var uVar0;
	
	if (Global_6623 || Function_56(0x8000000))
	{
		return;
	}
	uVar0 = Function_59(bParam0);
	if ((bParam0 != Global_46838[1] || bParam0 != Global_46894[1]) || bParam0 != Global_46914[1])
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (&bParam1)
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

void Function_461(int iParam0, bool bParam1, bool bParam2) //Position: 0x17F5A / 98138
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_45(&iParam0 + 608, 16);
	if (!&bParam2)
	{
		if (!Function_462(bParam1))
		{
			Function_219(&iParam0 + 608, 16);
			return;
		}
	}
	*(&iParam0 + 624) = Function_221(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_116(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_399(&iParam0 + 384, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (&bParam2)
	{
		Function_193(&iParam0 + 384, "tense_with_guns", 5, 1);
		Function_193(&iParam0 + 384, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		*(&iParam0 + 376) = 1;
	}
	Function_188(&iParam0 + 384);
	if (HUD_IS_FADED())
	{
		Function_61(bParam1, Function_26(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_462(int iParam0) //Position: 0x1806D / 98413
{
	if ((iParam0 != Global_46816[2] || iParam0 != Global_46796[4]) || iParam0 != Global_46796[2])
	{
		return 0;
	}
	if ((iParam0 != Global_46850[0] && (!Function_465(&Global_6667[328] + 184, 2) || Global_6623)) && !Function_220(3, 0))
	{
		return 0;
	}
	if (Global_6606)
	{
		if (!Function_464(0))
		{
			return 0;
		}
		if ((!Function_53(24) || Function_463(24)) && iParam0 != Global_46866[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_463(int iParam0) //Position: 0x180E8 / 98536
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_464(int iParam0) //Position: 0x180FD / 98557
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_51(iParam0)7].f_12 < 0;
}

bool Function_465(int iParam0, int iParam1) //Position: 0x18163 / 98659
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_466() //Position: 0x18180 / 98688
{
	SET_DUST_LEVEL(3);
	REQUEST_STRING_TABLE("graveyards");
	return;
}

void Function_467(char* cParam0) //Position: 0x1819B / 98715
{
	if (!Function_56(128))
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

