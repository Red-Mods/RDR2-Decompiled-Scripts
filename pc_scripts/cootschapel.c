//Decompiled with MagicRDR v1.0
//Function Count : 91
//Statics Count : 635
//Natives Count : 120
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 27;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
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
	int iLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 30;
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
	var uLocal_302 = 30;
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
	var uLocal_486 = 6;
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
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 3;
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
	var uLocal_576 = 0;
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
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	int iLocal_632 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_560 = 0;
	SET_DUST_LEVEL(3);
	Function_90("Initializing CootsChapel", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_561 = 1000;
		switch (iLocal_560)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_560 = 1;
				}
				iLocal_561 = 0;
				break;
			
			case 0x00000001:
				if (Function_89())
				{
					iLocal_560 = 2;
				}
				iLocal_561 = 0;
				break;
			
			case 0x00000002:
				if (Function_80())
				{
					Function_79(&(Global_43791[iScriptParam_0]), 32);
					iLocal_560 = 3;
				}
				iLocal_561 = 0;
				break;
			
			case 0x00000003:
				uLocal_562 = LAUNCH_NEW_SCRIPT_WITH_ARGS("CootsChapelVol", &iScriptParam_0, 2, 0);
				Function_78(&Global_11000, &Global_12776, iScriptParam_0);
				iLocal_560 = 5;
				iLocal_561 = 0;
				break;
			
			case 0x00000005:
				if (Function_77(&Global_11000, &Global_12776, iScriptParam_0))
				{
					iLocal_560 = 4;
					iLocal_561 = 0;
				}
				else
				{
					iLocal_561 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_76(&(Global_43791[iScriptParam_0]), 16) && Function_75(Global_44085[iScriptParam_09]))
				{
					iLocal_560 = 6;
				}
				iLocal_561 = 0;
				break;
			
			case 0x00000006:
				if (Function_71(14, 0))
				{
					Function_70(StackVal, 0, &uLocal_564, Vector(-1786,403f, 24,586f, 2857,457f));
					Function_69(StackVal, 0, &uLocal_564, Vector(-1787,993f, 24,803f, 2853,985f));
					Function_68(StackVal, 0, &uLocal_564, Vector(-1807,625f, 24,0941f, 2847,801f));
					Function_67(StackVal, 0, &uLocal_564, Vector(-1762,569f, 24,291f, 2869,928f));
					Function_66(StackVal, 0, &uLocal_564, Vector(-1806,814f, 23,968f, 2843,845f));
					Function_64(StackVal, 0, &uLocal_564, Vector(-1806,814f, 23,968f, 2843,845f));
					Function_63(0, &uLocal_564, &iLocal_176);
					Function_70(StackVal, 1, &uLocal_564, Vector(-1794,463f, 24,674f, 2855,888f));
					Function_69(StackVal, 1, &uLocal_564, Vector(-1802,623f, 24,094f, 2855,205f));
					Function_68(StackVal, 1, &uLocal_564, Vector(-1794,358f, 24,094f, 2841,138f));
					Function_67(StackVal, 1, &uLocal_564, Vector(-1770,069f, 24,034f, 2842,155f));
					Function_66(StackVal, 1, &uLocal_564, Vector(-1804,739f, 24,094f, 2845,423f));
					Function_64(StackVal, 1, &uLocal_564, Vector(-1800,208f, 23,839f, 2840,495f));
					Function_63(1, &uLocal_564, &iLocal_176);
					Function_70(StackVal, 2, &uLocal_564, Vector(-1800,208f, 23,839f, 2840,495f));
					Function_69(StackVal, 2, &uLocal_564, Vector(-1768,876f, 24,09f, 2867,963f));
					Function_68(StackVal, 2, &uLocal_564, Vector(-1776f, 24,0941f, 2832.0f));
					Function_67(StackVal, 2, &uLocal_564, Vector(-1805,743f, 24,062f, 2858,751f));
					Function_66(StackVal, 2, &uLocal_564, Vector(-1806,033f, 24,004f, 2846,005f));
					Function_64(StackVal, 2, &uLocal_564, Vector(-1794,545f, 24,63f, 2858,731f));
					Function_63(2, &uLocal_564, &iLocal_176);
					Function_58(&Global_11000, &Global_12776, &uLocal_564, &Global_10996, iScriptParam_0);
				}
				else
				{
					iLocal_632 = 1;
				}
				if (Function_76(&(Global_43791[iScriptParam_0]), 256) || !Function_57(2))
				{
					iLocal_632 = 1;
				}
				Function_56(&iLocal_176 + 1408, GET_OBJECT_FROM_PERS_CHAR(&Global_12776[03] + 16));
				Function_56(&iLocal_176 + 1416, GET_OBJECT_FROM_PERS_CHAR(&Global_12776[13] + 16));
				Function_79(&(Global_43791[iScriptParam_0]), 8);
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_55(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_560 = 10;
				}
				else
				{
					iLocal_560 = 7;
				}
				iLocal_561 = 0;
				break;
			
			case 0x00000007:
				Function_49(iScriptParam_0);
				iLocal_560 = 8;
				iLocal_561 = 0;
				break;
			
			case 0x00000008:
				Function_45(0, 0,5f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
				if (Function_44(iScriptParam_0, &Global_11000, iLocal_632))
				{
					Function_40(2, 4294967295, 4294967295, 0, 3);
					Function_38(&iLocal_4);
				}
				else
				{
					Function_37(64);
					Function_40(0, 8, 4, 4, 2);
					Function_38(&iLocal_4);
				}
				Function_79(&(Global_43791[iScriptParam_0]), 512);
				iLocal_560 = 9;
				iLocal_561 = 0;
				break;
			
			case 0x00000009:
				Function_35(&iLocal_4, iScriptParam_0);
				Function_79(&(Global_43791[iScriptParam_0]), 4);
				Function_34("Finished Initializing CootsChapel", 5.0f);
				iLocal_560 = 10;
				iLocal_561 = 0;
				break;
			
			case 0x0000000A:
				Function_21(&(Global_39874[13]), "CCG", 27, &iLocal_4, 1);
				if (Function_76(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_560 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(iLocal_561);
	}
	Function_11(&Global_11000, &Global_12776, iScriptParam_0, (iLocal_632 || Global_6623));
	SET_DUST_LEVEL(2);
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_55(&(Global_43791[iScriptParam_0]), 32);
	Function_55(&(Global_43791[iScriptParam_0]), 64);
	Function_55(&(Global_43791[iScriptParam_0]), 8);
	Function_55(&(Global_43791[iScriptParam_0]), 512);
	Function_55(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_562))
	{
		TERMINATE_SCRIPT(&uLocal_562);
	}
	Function_34("Unloaded CootsChapel", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x54F / 1359
{
	int iVar0;
	
	if (!Function_4(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_2(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_2(int iParam0) //Position: 0x585 / 1413
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0x5A7 / 1447
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x5BD / 1469
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0x5D3 / 1491
{
	Function_6(&iLocal_176 + 8);
	RELEASE_LAYOUT_REF(&iLocal_176);
	return;
}

void Function_6(int iParam0) //Position: 0x5E6 / 1510
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_7(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0x60E / 1550
{
	if (Function_9(&(Param0[iParam12]), 4))
	{
		if (Function_9(&(Param0[iParam12]), 1))
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
			Function_8(&(Param0[iParam12]), 1);
			Function_8(&(Param0[iParam12]), 2);
			Function_8(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_8(struct<13> Param0) //Position: 0x759 / 1881
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x776 / 1910
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x794 / 1940
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x7A0 / 1952
{
	char* cVar0[64];
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar0, Function_20(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_76(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_55(&(Global_43791[bParam2]), 0x40000000);
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (!Function_17(&(Param0[iVar162]), 1))
		{
			if ((!vParam1[iVar163] != 4294967295 && !vParam1[iVar163] != 0) && Function_17(&(Param0[iVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[iVar163], 4294967295);
				Function_16(&(Param0[iVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[iVar163] + 8) && Function_17(&(Param0[iVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[iVar163] + 8);
			Function_16(&(Param0[iVar162]), 16);
		}
		iVar16++;
	}
	if (!Function_76(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_57(2) || Function_76(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 <= Param0)
	{
		if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
		{
			Function_12(&Param0, &vParam1, iVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_17(&(Param0[iVar162]), 2) && !Function_17(&(Param0[iVar162]), 4))
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
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			iVar16 = 0;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_79(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9BE / 2494
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0xB24 / 2852
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

int Function_14(int iParam0) //Position: 0xB4F / 2895
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

void Function_15(var uParam0, int iParam1) //Position: 0xB83 / 2947
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0xB94 / 2964
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0xBAE / 2990
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0xBCB / 3019
{
	if (Function_19(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_19(bool bParam0, int iParam1) //Position: 0xBE6 / 3046
{
	return (bParam0 && iParam1) == 0;
}

var Function_20(int iParam0) //Position: 0xBF3 / 3059
{
	if (!Function_4(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_46760[0])
	{
		return "nArmadillo";
	}
	if (iParam0 == Global_46760[1])
	{
		return "RidgewoodFarm";
	}
	if (iParam0 == Global_46760[2])
	{
		return "nTwinRocks";
	}
	if (iParam0 == Global_46796[0])
	{
		return "Tumbleweed";
	}
	if (iParam0 == Global_46760[4])
	{
		return "CootsChapel";
	}
	if (iParam0 == Global_46866[4])
	{
		return "Sepulcro";
	}
	if (iParam0 == Global_46796[1])
	{
		return "RathskellerFork";
	}
	if (iParam0 == Global_46796[3])
	{
		return "GaptoothBreach";
	}
	if (iParam0 == Global_46796[2])
	{
		return "SolomonsFolly";
	}
	if (iParam0 == Global_46796[4])
	{
		return "BenedictPoint";
	}
	if (iParam0 == Global_46816[0])
	{
		return "HennigansRanch";
	}
	if (iParam0 == Global_46816[1])
	{
		return "ThievesLanding";
	}
	if (iParam0 == Global_46816[2])
	{
		return "PikesBasin";
	}
	if (iParam0 == Global_46838[1])
	{
		return "FortMercer";
	}
	if (iParam0 == Global_46838[0])
	{
		return "nPlainview";
	}
	if (iParam0 == Global_46850[0])
	{
		return "Escalera";
	}
	if (iParam0 == Global_46850[1])
	{
		return "Nosalida";
	}
	if (iParam0 == Global_46850[2])
	{
		return "TesoroAzul";
	}
	if (iParam0 == Global_46866[0])
	{
		return "nChuparosa";
	}
	if (iParam0 == Global_46866[1])
	{
		return "LasHermanas";
	}
	if (iParam0 == Global_46866[2])
	{
		return "AgaveViejo";
	}
	if (iParam0 == Global_46894[2])
	{
		return "CasaMadrugada";
	}
	if (iParam0 == Global_46894[1])
	{
		return "ElPresidio";
	}
	if (iParam0 == Global_46894[0])
	{
		return "ElMataderoTown";
	}
	if (iParam0 == Global_46894[3])
	{
		return "Torquemada";
	}
	if (iParam0 == Global_46926[1])
	{
		return "ManzanitaPost";
	}
	if (iParam0 == Global_46926[2])
	{
		return "PacificUnionRailroadCamp";
	}
	if (iParam0 == Global_46926[0])
	{
		return "Cochinay";
	}
	if (iParam0 == Global_46914[1])
	{
		return "BeechersHope";
	}
	if (iParam0 == Global_46914[0])
	{
		return "Blackwater";
	}
	if (iParam0 == Global_46914[3])
	{
		return "WreckSerendipity";
	}
	if (iParam0 == Global_46736[0])
	{
		return "ChollaSprings";
	}
	if (iParam0 == Global_46736[1])
	{
		return "GaptoothRidge";
	}
	if (iParam0 == Global_46736[2])
	{
		return "HennigansStead";
	}
	if (iParam0 == Global_46736[3])
	{
		return "RioBravo";
	}
	if (iParam0 == Global_46746[0])
	{
		return "PuntaOrgullo";
	}
	if (iParam0 == Global_46746[2])
	{
		return "Perdido";
	}
	if (iParam0 == Global_46746[1])
	{
		return "DiezCoronas";
	}
	if (iParam0 == Global_46754[1])
	{
		return "nTallTrees";
	}
	if (iParam0 == Global_46754[0])
	{
		return "GreatPlains";
	}
	return "";
}

void Function_21(vector3 vParam0) //Position: 0x10A1 / 4257
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
				Function_32(&vParam0);
			}
		}
		else if (iParam4 == 3)
		{
			if (VDIST(StackVal, Global_54078, Vector(-2912.0f, 19,075f, 2693,999f)) < 250.0f)
			{
				Function_32(&vParam0);
			}
		}
		else if (iParam4 == 2)
		{
			if (!Function_31(&vParam0, 63))
			{
				if (Function_30(76) || Function_29(76))
				{
					if (IS_GRAVESTONE_SECTOR_READY())
					{
						Function_27(&cParam1, &vParam0, 3, &uParam3);
						Function_24(&vParam0, 63);
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
			Function_23();
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
			Function_22();
		}
	}
	if (!IS_GRAVESTONE_SECTOR_READY())
	{
		return;
	}
	if (iParam4 == 2)
	{
		if (!Function_31(&vParam0, 63))
		{
			if (Function_30(76) || Function_29(76))
			{
				Function_27(&cParam1, &vParam0, 3, &uParam3);
				Function_24(&vParam0, 63);
			}
		}
	}
	vParam0.f_8 = 1;
	bVar0 = false;
	while (bVar0 <= iParam2)
	{
		if (iParam4 == 2 || bVar0 == 3)
		{
			if (!Function_27(&cParam1, &vParam0, bVar0, &uParam3))
			{
				LOG_ERROR("Failed to create gravestone text!");
				return;
			}
		}
		bVar0++;
	}
	return;
}

void Function_22() //Position: 0x12B2 / 4786
{
	bool bVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("ofr_Props_01x");
	Global_39874[33] = 0;
	Global_39874[33].f_4 = 0;
	bVar0 = false;
	while (bVar0 <= 20)
	{
		Function_24(&(Global_39874[33]), bVar0);
		bVar0++;
	}
	return;
}

void Function_23() //Position: 0x12F9 / 4857
{
	int iVar0;
	
	SET_CURRENT_GRAVESTONE_SECTOR("coo_cemetary01Props01x");
	Global_39874[13] = 0;
	Global_39874[13].f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Function_24(&(Global_39874[13]), iVar0 + 5);
		iVar0++;
	}
	return;
}

void Function_24(int iParam0, bool bParam1) //Position: 0x134B / 4939
{
	if (bParam1 <= 32)
	{
		Function_25(&iParam0, Function_26(bParam1));
	}
	else
	{
		Function_25(&iParam0 + 4, Function_26((bParam1 - 32)));
	}
	return;
}

void Function_25(var uParam0, int iParam1) //Position: 0x1376 / 4982
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_26(bool bParam0) //Position: 0x1387 / 4999
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_27(char* cParam0) //Position: 0x1393 / 5011
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
		if (bVar5 != 0 || Function_31(&iParam1, bParam2))
		{
			uVar0 = CREATE_GRAVESTONE_TEXT_IN_LAYOUT(&uParam3, Function_28(), &cVar1, bParam2, bVar5, 4278716679);
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

var Function_28() //Position: 0x1440 / 5184
{
	int iVar0;
	
	return &iVar0;
}

int Function_29(int iParam0) //Position: 0x1449 / 5193
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_30(int iParam0) //Position: 0x145E / 5214
{
	if (Global_116927[iParam06] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_31(struct<5> Param0) //Position: 0x1473 / 5235
{
	if (bParam1 <= 32)
	{
		return Function_19(Param0, Function_26(bParam1));
	}
	return Function_19(StackVal, Function_26((bParam1 - 32)));
}

void Function_32(vector3 vParam0) //Position: 0x14A0 / 5280
{
	if (IS_OBJECTSET_VALID(&vParam0 + 16))
	{
		Function_33(&vParam0 + 16);
		DESTROY_OBJECTSET(&vParam0 + 16);
	}
	vParam0.f_8 = 0;
	vParam0 = 0;
	vParam0.f_4 = 0;
	return;
}

void Function_33(var uParam0) //Position: 0x14D5 / 5333
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

void Function_34(char* cParam0) //Position: 0x1524 / 5412
{
	if (!Function_57(128))
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

void Function_35(int iParam0, bool bParam1) //Position: 0x1564 / 5476
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
		Function_36(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_36(var uParam0, int iParam1) //Position: 0x1654 / 5716
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0) //Position: 0x1661 / 5729
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_38(int iParam0) //Position: 0x1674 / 5748
{
	struct<2> Var0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to configure local law with an invalid layout");
		return;
	}
	*(&Global_40000 + 16) = &iParam0;
	*(&Global_40000 + 24) = CREATE_OBJECT_ITERATOR(&Global_40000 + 16);
	ITERATE_EVERYWHERE(&Global_40000 + 24);
	ITERATE_ON_OBJECT_TYPE(&Global_40000 + 24, 8);
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "clear_bounty");
	if (GET_NUM_ITERATOR_MATCHES(&Global_40000 + 24) >= 0)
	{
		*(&Global_40000 + 32) = START_OBJECT_ITERATOR(&Global_40000 + 24);
		GET_OBJECT_POSITION(&Global_40000 + 32, &Var0);
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_28(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_39(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_39(int iParam0) //Position: 0x1770 / 6000
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x178D / 6029
{
	if (Global_40000 != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(Global_40000, 0);
	}
	if (StackVal != 4294967295)
	{
		SET_FACTION_IS_LAWFUL_TO_ATTACK(StackVal, 0);
	}
	Global_40022 = Global_40000;
	Global_40022.f_4 = StackVal;
	Global_40022.f_8 = StackVal;
	Global_40022.f_12 = Global_40000.f_12;
	*(&Global_40022 + 16) = &Global_40000 + 16;
	*(&Global_40022 + 24) = &Global_40000 + 24;
	*(&Global_40022 + 32) = &Global_40000 + 32;
	*(&Global_40022 + 48) = &Global_40000 + 48;
	Global_40022.f_64 = Global_40000.f_64;
	Global_40022.f_68 = Global_40000.f_68;
	Global_40000.f_8 = iParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &iParam3;
	Global_40000.f_72 = 0;
	Global_40000.f_76 = &iParam4;
	Global_40000.f_80 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_41();
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

void Function_41() //Position: 0x187B / 6267
{
	int iVar0;
	
	Global_41176 = Function_42(StackVal);
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

int Function_42(int iParam0) //Position: 0x18C9 / 6345
{
	if (!Function_43(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_43(int iParam0) //Position: 0x18E1 / 6369
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

bool Function_44(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0x18F6 / 6390
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_76(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_71(49, 0))
	{
		return 0;
	}
	if (bParam2)
	{
		return 0;
	}
	strcpy(&cVar0, "$/content/init/pop/", 64);
	Var16 = iParam0;
	Var16.f_4 = Param1;
	stradd(&cVar0, &Global_44085[Global_46722[Global_43787]9] + 32, 64);
	stradd(&cVar0, "_ghost_town", 64);
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	Global_46717 = LAUNCH_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var16, 2, 0);
	return 1;
}

void Function_45(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x19B4 / 6580
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
		Function_48();
	}
	if (&bParam5)
	{
		Function_46(1048576);
	}
}

void Function_46(int iParam0) //Position: 0x1AC2 / 6850
{
	Function_47(&Global_43580, iParam0);
	return;
}

void Function_47(var uParam0, var uParam1) //Position: 0x1AD0 / 6864
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_48() //Position: 0x1AEF / 6895
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_46(16384);
	}
	return;
}

void Function_49(int iParam0) //Position: 0x1B0B / 6923
{
	Function_51(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_50(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_50(struct<149> Param0) //Position: 0x1B72 / 7026
{
	Param0.f_148 = uParam1;
	(&Param0 + 148)->f_4 = &fParam2;
	return;
}

void Function_51(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) //Position: 0x1B89 / 7049
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_52(iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, &uParam10, uParam11, uParam12, &uParam13, &uParam14, &uParam15, &uParam16);
	Global_27462[iParam052].f_156 = uParam9;
}

void Function_52(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x1BD0 / 7120
{
	var uVar0;
	char[] cVar1[4];
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052][0] = iParam2;
	Global_27462[iParam052][1] = iParam3;
	Global_27462[iParam052][2] = iParam4;
	(*&Global_27462[iParam052] + 32)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_27462[iParam052] + 32)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_27462[iParam052] + 32)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_27462[iParam052] + 64)[0] = (Global_27462[iParam052][0] - (*&Global_27462[iParam052] + 32)[0]);
	(*&Global_27462[iParam052] + 64)[1] = (Global_27462[iParam052][1] - (*&Global_27462[iParam052] + 32)[1]);
	(*&Global_27462[iParam052] + 64)[2] = (Global_27462[iParam052][2] - (*&Global_27462[iParam052] + 32)[2]);
	Global_27462[iParam052].f_140 = uParam1;
	Global_27462[iParam052].f_188 = uParam5;
	(&Global_27462[iParam052] + 188)->f_4 = iParam6;
	(&Global_27462[iParam052] + 188)->f_8 = &bParam13;
	Global_27462[iParam052].f_144 = uParam7;
	Global_27462[iParam052].f_148 = uParam8;
	Global_27462[iParam052].f_156 = 4294967295;
	Global_27462[iParam052].f_152 = &uParam15;
	*(&Global_27462[iParam052] + 160) = GET_ASSET_ID(&cParam9, 4);
	Global_27462[iParam052].f_168 = uParam10;
	Global_27462[iParam052].f_172 = uParam11;
	Global_27462[iParam052].f_136 = &uParam12;
	(&Global_27462[iParam052] + 188)->f_156 = 0;
	strcpy(&Global_27462[iParam052] + 188 + 36, "", 8);
	(&Global_27462[iParam052] + 188 + 36)->f_16 = 50.0f;
	(&Global_27462[iParam052] + 188 + 36)->f_20 = 4294967295;
	(&Global_27462[iParam052] + 188)->f_84 = 1;
	(&Global_27462[iParam052] + 188 + 84)->f_4 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_8 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_12 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_16 = 4294967295;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_24 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_32 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_20 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_28 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_36 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_40 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_44 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_52 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_48 = 0.0f;
	(&Global_27462[iParam052] + 188 + 84)->f_56 = 0.0f;
	(&Global_27462[iParam052] + 188)->f_148 = 0;
	if (!Function_18())
	{
		Global_99471 = 30.0f;
	}
	else
	{
		Global_99471 = (30.0f * 0,8f);
	}
	if (!UNK_0x214AFB8C(&Global_26652[iParam04] + 24))
	{
		cVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
		if (!Global_6606)
		{
			if (Global_6665)
			{
				bVar2 = false;
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_54(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_53(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_54(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_53(int iParam0, int iParam1) //Position: 0x1F8E / 8078
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_54(int iParam0) //Position: 0x1FB1 / 8113
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_55(var uParam0, int iParam1) //Position: 0x1FC8 / 8136
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_56(var uParam0, int iParam1) //Position: 0x1FE2 / 8162
{
	int iVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(iVar0, &uParam0)), &iParam1);
		}
		iVar0++;
	}
	return;
}

bool Function_57(int iParam0) //Position: 0x202F / 8239
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_58(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x204B / 8267
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_57(2))
	{
		return;
	}
	if (Function_76(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_59(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_55(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_79(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_59(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x2103 / 8451
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_76(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, 0))
		{
			return 0;
		}
	}
	if (&iParam1 + 8 == "")
	{
		return 0;
	}
	strcpy(&cVar1, "__", 16);
	stradd(&cVar1, &Global_44085[iParam59] + 32, 16);
	stradd(&cVar1, "_char_", 16);
	straddi(&cVar1, iVar0, 16);
	if (!IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		(&iParam1 + 16) = Function_62(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_61(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_60(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_60(int iParam0, struct<2> Param1) //Position: 0x2284 / 8836
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_61(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_61(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_61(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_61(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_61(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_61(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

bool Function_61(vector3 vParam0) //Position: 0x23CA / 9162
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

var Function_62(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x23E2 / 9186
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (&fParam6 > 1.0f)
	{
		fParam6 = 60.0f;
	}
	uVar2 = CREATE_PERS_CHAR_IN_LAYOUT(&uParam0, &uParam1, uParam2, Param4, &fParam6);
	if (!IS_PERS_CHAR_VALID(&uVar2))
	{
		return "";
	}
	uVar3 = CREATE_GRINGO_ON_OBJECT_BY_ID(GET_OBJECT_FROM_PERS_CHAR(&uVar2), "Persistent_Char_Brain", &uParam3, Var0, Var0);
	if (IS_OBJECT_VALID(&uVar3))
	{
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_28(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	}
	else
	{
		DESTROY_PERS_CHAR(&uVar2);
		return "";
	}
	(&iVar4 + 36) = Param4;
	iVar4 = *(&iVar4 + 36);
	*(&iVar4 + 12) = *(&iVar4 + 36);
	*(&iVar4 + 24) = *(&iVar4 + 36);
	*(&iVar4 + 48) = *(&iVar4 + 36);
	*(&iVar4 + 60) = *(&iVar4 + 36);
	*(&iVar4 + 72) = &uParam0;
	GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar3), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar4, 22);
	return &uVar2;
}

void Function_63(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x2509 / 9481
{
	bool bVar0;
	
	bVar0 = iParam0;
	if (!IS_LAYOUTREF_VALID(&iParam2))
	{
		LOG_ERROR("Layout ref not valid, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 72) = &iParam2;
	return;
}

void Function_64(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2568 / 9576
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_65(struct<2> Param0, struct<2> Param2) //Position: 0x25CF / 9679
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_66(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x25FB / 9723
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_67(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2664 / 9828
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_68(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x26CF / 9935
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_69(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x2735 / 10037
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_70(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x279E / 10142
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_65(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

bool Function_71(int iParam0, bool bParam1) //Position: 0x2802 / 10242
{
	int iVar0;
	
	iVar0 = Function_73(iParam0);
	if (!Function_72(iVar0))
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

bool Function_72(int iParam0) //Position: 0x2840 / 10304
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_73(int iParam0) //Position: 0x2857 / 10327
{
	if (!Function_74(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_74(int iParam0) //Position: 0x2871 / 10353
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_75(int iParam0) //Position: 0x2887 / 10375
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_76(&(Global_43791[iParam0]), 4);
}

bool Function_76(var uParam0, int iParam1) //Position: 0x28A3 / 10403
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_77(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x28C0 / 10432
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_76(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_17(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_17(&(Param0[iVar02]), 8))
			{
				if (!STREAMING_IS_ACTOR_LOADED(vParam1[iVar03], 4294967295))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void Function_78(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x29A9 / 10665
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_4(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_20(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_76(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_79(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_15(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_15(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_79(var uParam0, int iParam1) //Position: 0x2A99 / 10905
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_80() //Position: 0x2AAA / 10922
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	
	Function_88(3, 3);
	iVar0 = &iVar0;
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/look_distance_binocs", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/campfire_talk", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/lean_rail_back", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_yawning_n_any", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanrifle", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_throwbottle", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sit_headinhands_n_any", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sleeping_wall_scripted", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_up", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_kneelvomit_n_any", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_yelling_mid", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_r", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanpistol", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/sleeping_scripted", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/digging", 1, 0);
	Function_86(&iLocal_176 + 8, "$/content/scripting/gringo/simplegringo/smoking_lean", 1, 0);
	if (!Function_81(&iLocal_176 + 8))
	{
		return 0;
	}
	iLocal_176 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_176))
	{
		iLocal_176 = CREATE_LAYOUT("CootsChapel_layout");
	}
	*(&iLocal_176 + 496) = CREATE_OBJECTSET_IN_LAYOUT("DigGraveGRPSet", &iLocal_176, 8, 0);
	*(&iLocal_176 + 504[03]) = Vector(-1791,138f, 24,0941f, 2873,333f);
	*(&iLocal_176 + 504[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag1", Vector(-1791,138f, 24,0941f, 2873,333f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_176 + 496);
	*(&iLocal_176 + 504[13]) = Vector(-1793,437f, 24,0941f, 2869,1f);
	*(&iLocal_176 + 504[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag2", Vector(-1793,437f, 24,0941f, 2869,1f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_176 + 496);
	*(&iLocal_176 + 504[23]) = Vector(-1790,703f, 24,0941f, 2867,708f);
	*(&iLocal_176 + 504[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag3", Vector(-1790,703f, 24,0941f, 2867,708f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_176 + 496);
	*(&iLocal_176 + 504[33]) = Vector(-1809,796f, 24,0941f, 2865,744f);
	*(&iLocal_176 + 504[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag4", Vector(-1809,796f, 24,0941f, 2865,744f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_176 + 496);
	*(&iLocal_176 + 504[43]) = Vector(-1810,897f, 24,0941f, 2862,831f);
	*(&iLocal_176 + 504[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag5", Vector(-1810,897f, 24,0941f, 2862,831f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_176 + 496);
	*(&iLocal_176 + 504[53]) = Vector(-1811,677f, 24,0941f, 2860,433f);
	*(&iLocal_176 + 504[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag6", Vector(-1811,677f, 24,0941f, 2860,433f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_176 + 496);
	*(&iLocal_176 + 504[63]) = Vector(-1806,693f, 24,0941f, 2860,279f);
	*(&iLocal_176 + 504[63] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag7", Vector(-1806,693f, 24,0941f, 2860,279f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_176 + 496);
	*(&iLocal_176 + 504[73]) = Vector(-1805,937f, 24,0941f, 2863,213f);
	*(&iLocal_176 + 504[73] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag8", Vector(-1805,937f, 24,0941f, 2863,213f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_176 + 496);
	*(&iLocal_176 + 504[83]) = Vector(-1804,429f, 24,0941f, 2866,233f);
	*(&iLocal_176 + 504[83] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag9", Vector(-1804,429f, 24,0941f, 2866,233f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_176 + 496);
	*(&iLocal_176 + 504[93]) = Vector(-1806,886f, 24,0941f, 2870,948f);
	*(&iLocal_176 + 504[93] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag10", Vector(-1806,886f, 24,0941f, 2870,948f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_176 + 496);
	*(&iLocal_176 + 504[103]) = Vector(-1808,502f, 24,0941f, 2868f);
	*(&iLocal_176 + 504[103] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag11", Vector(-1808,502f, 24,0941f, 2868f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_176 + 496);
	*(&iLocal_176 + 504[113]) = Vector(-1779,962f, 24,0941f, 2873,802f);
	*(&iLocal_176 + 504[113] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag12", Vector(-1779,962f, 24,0941f, 2873,802f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_176 + 496);
	*(&iLocal_176 + 504[123]) = Vector(-1782,256f, 24,0941f, 2869,23f);
	*(&iLocal_176 + 504[123] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag13", Vector(-1782,256f, 24,0941f, 2869,23f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_176 + 496);
	*(&iLocal_176 + 504[133]) = Vector(-1777,077f, 24,0941f, 2872,876f);
	*(&iLocal_176 + 504[133] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag14", Vector(-1777,077f, 24,0941f, 2872,876f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_176 + 496);
	*(&iLocal_176 + 504[143]) = Vector(-1779,385f, 24,0941f, 2868,211f);
	*(&iLocal_176 + 504[143] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag15", Vector(-1779,385f, 24,0941f, 2868,211f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_176 + 496);
	*(&iLocal_176 + 504[153]) = Vector(-1776,385f, 24,0941f, 2866,919f);
	*(&iLocal_176 + 504[153] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag16", Vector(-1776,385f, 24,0941f, 2866,919f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_176 + 496);
	*(&iLocal_176 + 504[163]) = Vector(-1773,78f, 24,0941f, 2871,616f);
	*(&iLocal_176 + 504[163] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag17", Vector(-1773,78f, 24,0941f, 2871,616f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_176 + 496);
	*(&iLocal_176 + 504[173]) = Vector(-1771f, 24,0941f, 2867,056f);
	*(&iLocal_176 + 504[173] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag18", Vector(-1771f, 24,0941f, 2867,056f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar18, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_176 + 496);
	*(&iLocal_176 + 504[183]) = Vector(-1769,349f, 24,0941f, 2871,104f);
	*(&iLocal_176 + 504[183] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag19", Vector(-1769,349f, 24,0941f, 2871,104f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar19, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_176 + 496);
	*(&iLocal_176 + 504[193]) = Vector(-1762,363f, 24,0941f, 2847,219f);
	*(&iLocal_176 + 504[193] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag20", Vector(-1762,363f, 24,0941f, 2847,219f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar20, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_176 + 496);
	*(&iLocal_176 + 504[203]) = Vector(-1765,216f, 24,0941f, 2848,028f);
	*(&iLocal_176 + 504[203] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag21", Vector(-1765,216f, 24,0941f, 2848,028f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar21, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_176 + 496);
	*(&iLocal_176 + 504[213]) = Vector(-1767,254f, 24,0941f, 2848,983f);
	*(&iLocal_176 + 504[213] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag22", Vector(-1767,254f, 24,0941f, 2848,983f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar22, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_176 + 496);
	*(&iLocal_176 + 504[223]) = Vector(-1770,077f, 24,0941f, 2850,264f);
	*(&iLocal_176 + 504[223] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag23", Vector(-1770,077f, 24,0941f, 2850,264f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar23, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_176 + 496);
	*(&iLocal_176 + 504[233]) = Vector(-1776,822f, 24,0941f, 2845,937f);
	*(&iLocal_176 + 504[233] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag24", Vector(-1776,822f, 24,0941f, 2845,937f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar24, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_176 + 496);
	*(&iLocal_176 + 504[243]) = Vector(-1775,388f, 24,0941f, 2848,332f);
	*(&iLocal_176 + 504[243] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag25", Vector(-1775,388f, 24,0941f, 2848,332f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar25, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_176 + 496);
	*(&iLocal_176 + 504[253]) = Vector(-1773,707f, 24,0941f, 2844,948f);
	*(&iLocal_176 + 504[253] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag26", Vector(-1773,707f, 24,0941f, 2844,948f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar26, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_176 + 496);
	*(&iLocal_176 + 504[263]) = Vector(-1771,293f, 24,0941f, 2843,839f);
	*(&iLocal_176 + 504[263] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag27", Vector(-1771,293f, 24,0941f, 2843,839f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar27, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_176 + 496);
	*(&iLocal_176 + 504[273]) = Vector(-1768,839f, 24,0941f, 2843,179f);
	*(&iLocal_176 + 504[273] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar28 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag28", Vector(-1768,839f, 24,0941f, 2843,179f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar28, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar28, &iLocal_176 + 496);
	*(&iLocal_176 + 504[283]) = Vector(-1764,975f, 24,0941f, 2841,869f);
	*(&iLocal_176 + 504[283] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar29 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag29", Vector(-1764,975f, 24,0941f, 2841,869f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar29, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar29, &iLocal_176 + 496);
	*(&iLocal_176 + 504[293]) = Vector(-1788,265f, 24,0941f, 2872,502f);
	*(&iLocal_176 + 504[293] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar30 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag30", Vector(-1788,265f, 24,0941f, 2872,502f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar30, "UseAnim", "Short");
	ADD_OBJECT_TO_OBJECTSET(&uVar30, &iLocal_176 + 496);
	*(&iLocal_176 + 1232) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", &iLocal_176, 8, 0);
	*(&iLocal_176 + 1240[03]) = Vector(-1792,613f, 24,0941f, 2849,66f);
	*(&iLocal_176 + 1240[03] + 12) = Vector(0.0f, 108,6343f, 0.0f);
	uVar31 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag36", Vector(-1792,613f, 24,0941f, 2849,66f), Vector(0.0f, 108,6343f, 0.0f));
	DECOR_SET_STRING(&uVar31, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar31, &iLocal_176 + 1232);
	*(&iLocal_176 + 1240[13]) = Vector(-1793,772f, 24,0941f, 2848,106f);
	*(&iLocal_176 + 1240[13] + 12) = Vector(0.0f, 103,8098f, 0.0f);
	uVar32 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag32", Vector(-1793,772f, 24,0941f, 2848,106f), Vector(0.0f, 103,8098f, 0.0f));
	DECOR_SET_STRING(&uVar32, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar32, &iLocal_176 + 1232);
	*(&iLocal_176 + 1240[23]) = Vector(-1792,741f, 24,0941f, 2845,751f);
	*(&iLocal_176 + 1240[23] + 12) = Vector(0.0f, 105,7128f, 0.0f);
	uVar33 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag33", Vector(-1792,741f, 24,0941f, 2845,751f), Vector(0.0f, 105,7128f, 0.0f));
	DECOR_SET_STRING(&uVar33, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar33, &iLocal_176 + 1232);
	*(&iLocal_176 + 1240[33]) = Vector(-1789,922f, 24,53676f, 2858,598f);
	*(&iLocal_176 + 1240[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar34 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag34", Vector(-1789,922f, 24,53676f, 2858,598f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_STRING(&uVar34, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar34, &iLocal_176 + 1232);
	*(&iLocal_176 + 1240[43]) = Vector(-1786,3f, 24,53676f, 2858,814f);
	*(&iLocal_176 + 1240[43] + 12) = Vector(0.0f, 286,8687f, 0.0f);
	uVar35 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag35", Vector(-1786,3f, 24,53676f, 2858,814f), Vector(0.0f, 286,8687f, 0.0f));
	DECOR_SET_STRING(&uVar35, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar35, &iLocal_176 + 1232);
	*(&iLocal_176 + 1240[53]) = Vector(-1787,305f, 24,537f, 2859,212f);
	*(&iLocal_176 + 1240[53] + 12) = Vector(0.0f, 202,223f, 0.0f);
	uVar36 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Flag37", Vector(-1787,305f, 24,537f, 2859,212f), Vector(0.0f, 202,223f, 0.0f));
	DECOR_SET_STRING(&uVar36, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar36, &iLocal_176 + 1232);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Locked_Footlocker", "Locked_Footlocker", Vector(-1752,691f, 27,10587f, 2799,222f), Vector(0.0f, -105,5641f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	DECOR_SET_BOOL(&iVar0, "scrap", 1);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "look_distance_binocs", "look_distance_binocs", Vector(-1804f, 22,98828f, 2824.0f), Vector(0.0f, 27,23829f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_176 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sit_ground_smoke", "Rand_Idle_Sit_Ground", Vector(-1766,84f, 24,0941f, 2858,496f), Vector(0.0f, -273,9927f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_176 + 1392), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-1806,033f, 24,00386f, 2846,005f), Vector(0.0f, -222,3631f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_176 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sit_ground_smoke1", "Rand_Idle_Sit_Ground", Vector(-1808f, 24,0941f, 2848,924f), Vector(0.0f, -21,12764f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_176 + 1400), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-1805,363f, 24,07307f, 2847,461f), Vector(0.0f, 90,97639f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "campfire_talk", "campfire_talk", Vector(-1809,055f, 24,04941f, 2846,854f), Vector(0.0f, -624,5691f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_stand1", "smoking_stand", Vector(-1781,455f, 24,08785f, 2847,205f), Vector(0.0f, 0,1567854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-1780,945f, 24,0941f, 2863,735f), Vector(0.0f, 46,34106f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_stand2", "smoking_stand", Vector(-1808,041f, 23,95104f, 2844,33f), Vector(0.0f, -161,536f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_stand3", "smoking_stand", Vector(-1763,892f, 24,09411f, 2857,125f), Vector(0.0f, 105,1414f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "lean_rail_back1", "lean_rail_back", Vector(-1783,1f, 24,0941f, 2855,66f), Vector(0.0f, 107,7302f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Multistage_sweeping", "Multistage_sweeping", Vector(-1787,305f, 24,61875f, 2859,212f), Vector(0.0f, 22,85354f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-1795,42f, 24,61427f, 2850,602f), Vector(0.0f, -70,25011f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_yawning_n_any", "stand_yawning_n_any", Vector(-1793,98f, 24,62459f, 2849,298f), Vector(0.0f, -113,9741f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sit_cleanrifle", "sit_cleanrifle", Vector(-1790,931f, 24,6884f, 2847,948f), Vector(0.0f, 201,7716f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-1777,726f, 24,09516f, 2829,261f), Vector(0.0f, 47,37621f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-1800,208f, 23,83851f, 2840,495f), Vector(0.0f, 10,57467f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Pee", "Pee", Vector(-1762,569f, 24,29103f, 2869,927f), Vector(0.0f, -259,5125f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Pee1", "Pee", Vector(-1807,733f, 24,09411f, 2874,99f), Vector(0.0f, -179,9612f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_176 + 1408) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &iLocal_176, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_drunk_rowdydrink8", "stand_drunk_rowdydrink", Vector(-1809,055f, 23,97929f, 2845,055f), Vector(0.0f, 230,0579f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &iLocal_176 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_drunk_throwbottle8", "stand_drunk_throwbottle", Vector(-1812f, 24,0941f, 2848.0f), Vector(0.0f, -73,29539f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(1, &iLocal_176 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sit_headinhands_n_any8", "sit_headinhands_n_any", Vector(-1790,076f, 24,67377f, 2852,947f), Vector(0.0f, -159,4069f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_176 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sleeping_wall_scripted8", "sleeping_wall_scripted", Vector(-1795,705f, 24,67363f, 2848,735f), Vector(0.0f, -70,28345f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_176 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_yelling_up8", "stand_yelling_up", Vector(-1787,993f, 24,80334f, 2853,985f), Vector(0.0f, 169,9047f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(4, &iLocal_176 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_drunk_throwbottle9", "stand_drunk_throwbottle", Vector(-1791,626f, 24,67727f, 2852.0f), Vector(0.0f, -150,6394f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_176 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_kneelvomit_n_an8", "stand_kneelvomit_n_any", Vector(-1808,081f, 24,08655f, 2863,843f), Vector(0.0f, 69,88171f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(6, &iLocal_176 + 1408)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_yelling_mid10", "stand_yelling_mid", Vector(-1793,464f, 24,63731f, 2843,78f), Vector(0.0f, -337,6558f, 0.0f)), &iLocal_176 + 1408);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(7, &iLocal_176 + 1408)), 0);
	*(&iLocal_176 + 1416) = CREATE_OBJECTSET_IN_LAYOUT(Function_28(), &iLocal_176, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_guntricks_e_any9", "stand_guntricks_e_any", Vector(-1805,362f, 24,041f, 2844,178f), Vector(0.0f, -228,2945f, 0.0f)), &iLocal_176 + 1416);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(0, &iLocal_176 + 1416)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sit_ground_play_harmonica9", "sit_ground_play_harmonica", Vector(-1804,739f, 24,09411f, 2845,423f), Vector(0.0f, 123,0379f, 0.0f)), &iLocal_176 + 1416);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(1, &iLocal_176 + 1416)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Sit_Ground_Drink9", "Sit_Ground_Drink", Vector(-1770,913f, 24,03705f, 2843,87f), Vector(0.0f, -169,3158f, 0.0f)), &iLocal_176 + 1416);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_176 + 1416)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_yelling_mid9", "stand_yelling_mid", Vector(-1794,358f, 24,0941f, 2841,138f), Vector(0.0f, -162,6631f, 0.0f)), &iLocal_176 + 1416);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_176 + 1416)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "rand_idle_stand2", "rand_idle_stand", Vector(-1794,664f, 24,0941f, 2841,285f), Vector(0.0f, -154,3885f, 0.0f)), &iLocal_176 + 1416);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(4, &iLocal_176 + 1416)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "rand_idle_stand9", "rand_idle_stand", Vector(-1794,069f, 24,0941f, 2841,13f), Vector(0.0f, -174,8596f, 0.0f)), &iLocal_176 + 1416);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(5, &iLocal_176 + 1416)), 0);
	*(&iLocal_176 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_drunk_rowdydrink1", "stand_drunk_rowdydrink", Vector(-1807,101f, 24,0941f, 2849,154f), Vector(0.0f, -7,650817f, 0.0f));
	*(&iLocal_176 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sleeping_scripted1", "sleeping_wall_scripted", Vector(-1794,545f, 24,63028f, 2858,731f), Vector(0.0f, -432,26f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-1786,403f, 24,58643f, 2857,457f), Vector(0.0f, 21,1392f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_176 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "look_out_window_R", "look_out_window_R", Vector(-1795,738f, 24,67363f, 2849,529f), Vector(0.0f, 111,478f, 0.0f));
	*(&iLocal_176 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "look_out_window_R1", "look_out_window_R", Vector(-1788,951f, 24,67363f, 2848,356f), Vector(0.0f, -68,9173f, 0.0f));
	*(&iLocal_176 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sit_cleanpistol", "sit_cleanpistol", Vector(-1791,978f, 24,6884f, 2848,318f), Vector(0.0f, -160,5457f, 0.0f));
	*(&iLocal_176 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "look_out_window_R2", "look_out_window_R", Vector(-1795,165f, 24,67363f, 2857,764f), Vector(0.0f, 111,478f, 0.0f));
	*(&iLocal_176 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sleeping_scripted", "sleeping_scripted", Vector(-1794,463f, 24,67363f, 2855,887f), Vector(0.0f, 18,59632f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "digging2", "digging", Vector(-1769,577f, 24,06987f, 2866,87f), Vector(0.0f, -262,2327f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_176 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_stand4", "smoking_stand", Vector(-1768,876f, 24,08986f, 2867,963f), Vector(0.0f, 53,61832f, 0.0f));
	*(&iLocal_176 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_lean", "smoking_lean", Vector(-1770,01f, 24,08986f, 2868,238f), Vector(0.0f, -150,0039f, 0.0f));
	*(&iLocal_176 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_stand5", "smoking_stand", Vector(-1808,464f, 24,09015f, 2862,06f), Vector(0.0f, -14,23038f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "digging3", "digging", Vector(-1805,743f, 24,062f, 2858,751f), Vector(0.0f, -203,7751f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_176 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_lean1", "smoking_lean", Vector(-1808,66f, 24,11813f, 2860,709f), Vector(0.0f, -251,4647f, 0.0f));
	*(&iLocal_176 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_stand6", "smoking_stand", Vector(-1769,645f, 24,03448f, 2844,461f), Vector(0.0f, 24,34268f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "digging6", "digging", Vector(-1770,069f, 24,03446f, 2842,155f), Vector(0.0f, -455,4968f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	*(&iLocal_176 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "sleeping_wall_scripted", "sleeping_wall_scripted", Vector(-1767,977f, 24,00438f, 2845,455f), Vector(0.0f, -165,4893f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "Locked_Footlocker1", "Locked_Footlocker", Vector(-1793,944f, 24,69088f, 2854,814f), Vector(0.0f, -160,6455f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	DECOR_SET_BOOL(&iVar0, "scrap", 1);
	*(&iLocal_176 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "stand_drunk_rowdydrink2", "stand_drunk_rowdydrink", Vector(-1806,814f, 23,96786f, 2843,845f), Vector(0.0f, -175,9393f, 0.0f));
	iVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_176, "smoking_stand7", "smoking_stand", Vector(-1799,63f, 23,82908f, 2840,366f), Vector(0.0f, 0,1567854f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iVar0), 0);
	return 1;
}

bool Function_81(struct<2>[] Param0) //Position: 0x569C / 22172
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_85();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
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
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_9(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_9(&(Param0[02]), 8) || iVar1));
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
		if (Function_9(&(Param0[iVar02]), 4))
		{
			if (!Function_9(&(Param0[iVar02]), 2))
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
	Function_82();
	return 1;
}

void Function_82() //Position: 0x5A5E / 23134
{
	if (!Function_57(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_83() //Position: 0x5A9E / 23198
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

void Function_84(struct<13> Param0) //Position: 0x5ACC / 23244
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_85() //Position: 0x5ADF / 23263
{
	if (!Function_57(128))
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

var Function_86(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x5B21 / 23329
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_87(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_84(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_87(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x5B5F / 23391
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
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

void Function_88(int iParam0, int iParam1) //Position: 0x5C2E / 23598
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

bool Function_89() //Position: 0x5C78 / 23672
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	
	Function_88(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("CootsChapel_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("CootsChapel_layout");
	}
	*(&iLocal_4 + 8) = CREATE_OBJECTSET_IN_LAYOUT("GraveGroupSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 16[03]) = Vector(-1764,691f, 24,15298f, 2841,853f);
	*(&iLocal_4 + 16[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_0", Vector(-1764,691f, 24,15298f, 2841,853f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 8);
	*(&iLocal_4 + 16[13]) = Vector(-1762,43f, 24,03798f, 2846,971f);
	*(&iLocal_4 + 16[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_1", Vector(-1762,43f, 24,03798f, 2846,971f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 8);
	*(&iLocal_4 + 16[23]) = Vector(-1765,129f, 24,03647f, 2847,887f);
	*(&iLocal_4 + 16[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_2", Vector(-1765,129f, 24,03647f, 2847,887f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 8);
	*(&iLocal_4 + 16[33]) = Vector(-1767,327f, 24,01973f, 2848,823f);
	*(&iLocal_4 + 16[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_3", Vector(-1767,327f, 24,01973f, 2848,823f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 8);
	*(&iLocal_4 + 16[43]) = Vector(-1769,982f, 24,03169f, 2849,716f);
	*(&iLocal_4 + 16[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_4", Vector(-1769,982f, 24,03169f, 2849,716f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 8);
	*(&iLocal_4 + 16[53]) = Vector(-1768,691f, 24,02576f, 2842,78f);
	*(&iLocal_4 + 16[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_5", Vector(-1768,691f, 24,02576f, 2842,78f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 8);
	*(&iLocal_4 + 16[63]) = Vector(-1771,062f, 24,03306f, 2843,944f);
	*(&iLocal_4 + 16[63] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_6", Vector(-1771,062f, 24,03306f, 2843,944f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 8);
	*(&iLocal_4 + 16[73]) = Vector(-1773,361f, 24,03058f, 2844,944f);
	*(&iLocal_4 + 16[73] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_7", Vector(-1773,361f, 24,03058f, 2844,944f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 8);
	*(&iLocal_4 + 16[83]) = Vector(-1769,282f, 24,09351f, 2871,042f);
	*(&iLocal_4 + 16[83] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_8", Vector(-1769,282f, 24,09351f, 2871,042f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 8);
	*(&iLocal_4 + 16[93]) = Vector(-1770,971f, 24,0778f, 2866,689f);
	*(&iLocal_4 + 16[93] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nf_grave_9", Vector(-1770,971f, 24,0778f, 2866,689f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 8);
	*(&iLocal_4 + 16[103]) = Vector(-1773,7f, 24,09412f, 2871,649f);
	*(&iLocal_4 + 16[103] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_10", Vector(-1773,7f, 24,09412f, 2871,649f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 8);
	*(&iLocal_4 + 16[113]) = Vector(-1775,979f, 24,09498f, 2866,82f);
	*(&iLocal_4 + 16[113] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_11", Vector(-1775,979f, 24,09498f, 2866,82f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_4 + 8);
	*(&iLocal_4 + 16[123]) = Vector(-1776,94f, 24,09413f, 2872,561f);
	*(&iLocal_4 + 16[123] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_12", Vector(-1776,94f, 24,09413f, 2872,561f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_4 + 8);
	*(&iLocal_4 + 16[133]) = Vector(-1779,098f, 24,09423f, 2867,937f);
	*(&iLocal_4 + 16[133] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_13", Vector(-1779,098f, 24,09423f, 2867,937f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_4 + 8);
	*(&iLocal_4 + 16[143]) = Vector(-1779,851f, 24,09412f, 2873,638f);
	*(&iLocal_4 + 16[143] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_14", Vector(-1779,851f, 24,09412f, 2873,638f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_4 + 8);
	*(&iLocal_4 + 16[153]) = Vector(-1782,129f, 23,75929f, 2869,125f);
	*(&iLocal_4 + 16[153] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_15", Vector(-1782,129f, 23,75929f, 2869,125f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_4 + 8);
	*(&iLocal_4 + 16[163]) = Vector(-1787,777f, 24,10192f, 2872,284f);
	*(&iLocal_4 + 16[163] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_16", Vector(-1787,777f, 24,10192f, 2872,284f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_4 + 8);
	*(&iLocal_4 + 16[173]) = Vector(-1790,59f, 24,09413f, 2873,007f);
	*(&iLocal_4 + 16[173] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar18 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_17", Vector(-1790,59f, 24,09413f, 2873,007f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar18, &iLocal_4 + 8);
	*(&iLocal_4 + 16[183]) = Vector(-1793,108f, 24,09412f, 2868,807f);
	*(&iLocal_4 + 16[183] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar19 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_18", Vector(-1793,108f, 24,09412f, 2868,807f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar19, &iLocal_4 + 8);
	*(&iLocal_4 + 16[193]) = Vector(-1806,166f, 24,10192f, 2870,718f);
	*(&iLocal_4 + 16[193] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar20 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_19", Vector(-1806,166f, 24,10192f, 2870,718f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar20, &iLocal_4 + 8);
	*(&iLocal_4 + 16[203]) = Vector(-1808,095f, 24,09413f, 2867,849f);
	*(&iLocal_4 + 16[203] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar21 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_20", Vector(-1808,095f, 24,09413f, 2867,849f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar21, &iLocal_4 + 8);
	*(&iLocal_4 + 16[213]) = Vector(-1809,297f, 24,08252f, 2865,529f);
	*(&iLocal_4 + 16[213] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar22 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_21", Vector(-1809,297f, 24,08252f, 2865,529f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar22, &iLocal_4 + 8);
	*(&iLocal_4 + 16[223]) = Vector(-1805,552f, 24,09612f, 2863,149f);
	*(&iLocal_4 + 16[223] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar23 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_22", Vector(-1805,552f, 24,09612f, 2863,149f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar23, &iLocal_4 + 8);
	*(&iLocal_4 + 16[233]) = Vector(-1810,452f, 24,10351f, 2862,704f);
	*(&iLocal_4 + 16[233] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar24 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_23", Vector(-1810,452f, 24,10351f, 2862,704f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar24, &iLocal_4 + 8);
	*(&iLocal_4 + 16[243]) = Vector(-1811,524f, 24,10192f, 2860,5f);
	*(&iLocal_4 + 16[243] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar25 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_24", Vector(-1811,524f, 24,10192f, 2860,5f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar25, &iLocal_4 + 8);
	*(&iLocal_4 + 16[253]) = Vector(-1806,85f, 24,1006f, 2860,42f);
	*(&iLocal_4 + 16[253] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar26 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_25", Vector(-1806,85f, 24,1006f, 2860,42f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar26, &iLocal_4 + 8);
	*(&iLocal_4 + 16[263]) = Vector(-1803,853f, 23,31106f, 2866,121f);
	*(&iLocal_4 + 16[263] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar27 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_grave_26", Vector(-1803,853f, 23,31106f, 2866,121f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar27, &iLocal_4 + 8);
	PushArrayP();
	*(&iLocal_4 + 672) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "coop_patrolpath");
	PushArrayP();
	*(&iLocal_4 + 680) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "coop_patrolpath1");
	return 1;
}

void Function_90(char* cParam0) //Position: 0x68A3 / 26787
{
	if (!Function_57(128))
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

