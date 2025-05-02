//Decompiled with MagicRDR v1.0
//Function Count : 108
//Statics Count : 661
//Natives Count : 163
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
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 46;
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
	var uLocal_206 = 2;
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
	var uLocal_222 = 15;
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
	int iLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	bool bLocal_411 = false;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 11;
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
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	int iLocal_658 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_408 = 0;
	Function_107("Initializing ManzanitaPost", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_411 = 1000;
		switch (iLocal_408)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_408 = 1;
				}
				bLocal_411 = false;
				break;
			
			case 0x00000001:
				if (Function_106())
				{
					Global_98961 = 0;
					iLocal_408 = 2;
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 5, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10, 2);
					SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 10, 2);
					AI_SET_ALLOW_HOSTILE_ATTACK_AI(0);
					AI_SET_ALLOW_HOSTILE_ATTACK_PLAYER(0);
					CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, &iLocal_4, Function_105(), Vector(-697,212f, 93,806f, 1448,455f), 0,9f, 0,6f, 0.0f, 5.0f);
					CREATE_POINT_LIGHT_IN_LAYOUT(StackVal, &iLocal_4, Function_105(), Vector(-688,916f, 93,769f, 1453,96f), 0,9f, 0,6f, 0.0f, 5.0f);
				}
				bLocal_411 = false;
				break;
			
			case 0x00000002:
				if (Function_96())
				{
					Function_95(&(Global_43791[iScriptParam_0]), 32);
					iLocal_408 = 3;
				}
				bLocal_411 = false;
				break;
			
			case 0x00000003:
				uLocal_412 = LAUNCH_NEW_SCRIPT_WITH_ARGS("ManzanitaPostVol", &iScriptParam_0, 2, 0);
				Function_94(&Global_12714, &Global_15312, iScriptParam_0);
				iLocal_408 = 5;
				bLocal_411 = false;
				break;
			
			case 0x00000005:
				if (Function_93(&Global_12714, &Global_15312, iScriptParam_0))
				{
					iLocal_408 = 4;
					bLocal_411 = false;
				}
				else
				{
					bLocal_411 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_92(&(Global_43791[iScriptParam_0]), 16) && Function_91(Global_44085[iScriptParam_09]))
				{
					iLocal_408 = 6;
				}
				bLocal_411 = false;
				break;
			
			case 0x00000006:
				Function_90(StackVal, 0, &uLocal_414, Vector(-455,949f, 153,642f, 1622,078f));
				Function_89(StackVal, 0, &uLocal_414, Vector(-455,949f, 153,642f, 1622,078f));
				Function_88(StackVal, 0, &uLocal_414, Vector(-455,949f, 153,642f, 1622,078f));
				Function_87(StackVal, 0, &uLocal_414, Vector(-455,949f, 153,642f, 1622,078f));
				Function_86(StackVal, 0, &uLocal_414, Vector(-455,949f, 153,642f, 1622,078f));
				Function_85(StackVal, 0, &uLocal_414, Vector(-455,949f, 153,642f, 1622,078f));
				Function_84(0, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 1, &uLocal_414, Vector(-448,2578f, 153,6423f, 1627,731f));
				Function_89(StackVal, 1, &uLocal_414, Vector(-446,574f, 152,346f, 1646,275f));
				Function_88(StackVal, 1, &uLocal_414, Vector(-459,953f, 149,459f, 1561,889f));
				Function_87(StackVal, 1, &uLocal_414, Vector(-446,574f, 152,346f, 1646,275f));
				Function_86(StackVal, 1, &uLocal_414, Vector(-437,631f, 153,342f, 1666,013f));
				Function_85(StackVal, 1, &uLocal_414, Vector(-437,631f, 153,342f, 1666,013f));
				Function_84(1, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 2, &uLocal_414, Vector(-452,074f, 153,474f, 1631,432f));
				Function_89(StackVal, 2, &uLocal_414, Vector(-412,185f, 152,261f, 1603,835f));
				Function_88(StackVal, 2, &uLocal_414, Vector(-412,185f, 152,261f, 1603,835f));
				Function_87(StackVal, 2, &uLocal_414, Vector(-412,185f, 152,261f, 1603,835f));
				Function_86(StackVal, 2, &uLocal_414, Vector(-445,101f, 152,347f, 1645,452f));
				Function_85(StackVal, 2, &uLocal_414, Vector(-452,074f, 153,474f, 1631,432f));
				Function_84(2, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 3, &uLocal_414, Vector(-462,632f, 152,352f, 1593,147f));
				Function_89(StackVal, 3, &uLocal_414, Vector(-455,476f, 153,356f, 1608,949f));
				Function_88(StackVal, 3, &uLocal_414, Vector(-455,476f, 153,356f, 1608,949f));
				Function_87(StackVal, 3, &uLocal_414, Vector(-455,476f, 153,356f, 1608,949f));
				Function_86(StackVal, 3, &uLocal_414, Vector(-461,241f, 149,459f, 1562,406f));
				Function_85(StackVal, 3, &uLocal_414, Vector(-473,56f, 152,347f, 1591,056f));
				Function_84(3, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 4, &uLocal_414, Vector(-465,779f, 152,352f, 1593,718f));
				Function_89(StackVal, 4, &uLocal_414, Vector(-439,308f, 152,348f, 1644,212f));
				Function_88(StackVal, 4, &uLocal_414, Vector(-447,111f, 152,347f, 1643,379f));
				Function_87(StackVal, 4, &uLocal_414, Vector(-439,308f, 152,348f, 1644,212f));
				Function_86(StackVal, 4, &uLocal_414, Vector(-465,779f, 152,352f, 1593,718f));
				Function_85(StackVal, 4, &uLocal_414, Vector(-473,419f, 152,37f, 1589,005f));
				Function_84(4, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 5, &uLocal_414, Vector(-461,582f, 152,361f, 1583,649f));
				Function_89(StackVal, 5, &uLocal_414, Vector(-444,593f, 152,35f, 1639,272f));
				Function_88(StackVal, 5, &uLocal_414, Vector(-463,1508f, 152,3521f, 1595,154f));
				Function_87(StackVal, 5, &uLocal_414, Vector(-444,593f, 152,35f, 1639,272f));
				Function_86(StackVal, 5, &uLocal_414, Vector(-459,778f, 152,3525f, 1586,68f));
				Function_85(StackVal, 5, &uLocal_414, Vector(-461,582f, 152,361f, 1583,649f));
				Function_84(5, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 6, &uLocal_414, Vector(-462,391f, 149,459f, 1560,881f));
				Function_89(StackVal, 6, &uLocal_414, Vector(-448,694f, 152,347f, 1640,205f));
				Function_88(StackVal, 6, &uLocal_414, Vector(-462,391f, 149,459f, 1560,881f));
				Function_87(StackVal, 6, &uLocal_414, Vector(-448,694f, 152,347f, 1640,205f));
				Function_86(StackVal, 6, &uLocal_414, Vector(-462,391f, 149,459f, 1560,881f));
				Function_85(StackVal, 6, &uLocal_414, Vector(-460,0324f, 152,5537f, 1584,717f));
				Function_84(6, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 7, &uLocal_414, Vector(-462,4196f, 149,4585f, 1559,729f));
				Function_89(StackVal, 7, &uLocal_414, Vector(-404,3477f, 154,7072f, 1611,336f));
				Function_88(StackVal, 7, &uLocal_414, Vector(-437,096f, 152,593f, 1624,446f));
				Function_87(StackVal, 7, &uLocal_414, Vector(-404,3477f, 154,7072f, 1611,336f));
				Function_86(StackVal, 7, &uLocal_414, Vector(-462,4196f, 149,4585f, 1559,729f));
				Function_85(StackVal, 7, &uLocal_414, Vector(-468,58f, 149,521f, 1556,178f));
				Function_84(7, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 8, &uLocal_414, Vector(-461,497f, 149,459f, 1564,401f));
				Function_89(StackVal, 8, &uLocal_414, Vector(-443,811f, 152,352f, 1614,669f));
				Function_88(StackVal, 8, &uLocal_414, Vector(-461,497f, 149,459f, 1564,401f));
				Function_87(StackVal, 8, &uLocal_414, Vector(-443,811f, 152,352f, 1614,669f));
				Function_86(StackVal, 8, &uLocal_414, Vector(-461,497f, 149,459f, 1564,401f));
				Function_85(StackVal, 8, &uLocal_414, Vector(-469,4194f, 149,6297f, 1557,313f));
				Function_84(8, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 9, &uLocal_414, Vector(-451,811f, 149,471f, 1559,002f));
				Function_89(StackVal, 9, &uLocal_414, Vector(-437,1096f, 153,5043f, 1607,202f));
				Function_88(StackVal, 9, &uLocal_414, Vector(-463,48f, 149,459f, 1563,787f));
				Function_87(StackVal, 9, &uLocal_414, Vector(-410,661f, 151,997f, 1594,701f));
				Function_86(StackVal, 9, &uLocal_414, Vector(-463,48f, 149,459f, 1563,787f));
				Function_85(StackVal, 9, &uLocal_414, Vector(-451,811f, 149,471f, 1559,002f));
				Function_84(9, &uLocal_414, &iLocal_4);
				Function_90(StackVal, 10, &uLocal_414, Vector(-411,461f, 151,984f, 1598,108f));
				Function_89(StackVal, 10, &uLocal_414, Vector(-411,461f, 151,984f, 1598,108f));
				Function_88(StackVal, 10, &uLocal_414, Vector(-460,936f, 149,459f, 1555,77f));
				Function_87(StackVal, 10, &uLocal_414, Vector(-411,461f, 151,984f, 1598,108f));
				Function_86(StackVal, 10, &uLocal_414, Vector(-460,936f, 149,459f, 1555,77f));
				Function_85(StackVal, 10, &uLocal_414, Vector(-456,733f, 149,475f, 1567,765f));
				Function_84(10, &uLocal_414, &iLocal_4);
				Function_80(&Global_12714, &Global_15312, &uLocal_414, &Global_10996, iScriptParam_0);
				if (Function_92(&(Global_43791[iScriptParam_0]), 256) || !Function_79(2))
				{
					iLocal_658 = 1;
				}
				uLocal_409 = Function_78(Global_46926[1], "ManzanitaPost", "tradepost01", 3);
				if (IS_DOOR_VALID(&uLocal_409))
				{
					Function_77(&uLocal_409, &Global_15312[03] + 16);
				}
				Function_76(&iLocal_16 + 1288, GET_OBJECT_FROM_PERS_CHAR(&Global_15312[13] + 16));
				Function_76(&iLocal_16 + 1296, GET_OBJECT_FROM_PERS_CHAR(&Global_15312[03] + 16));
				Function_76(&iLocal_16 + 1304, GET_OBJECT_FROM_PERS_CHAR(&Global_15312[43] + 16));
				Function_76(&iLocal_16 + 1368, GET_OBJECT_FROM_PERS_CHAR(&Global_15312[23] + 16));
				Function_75(&Global_15312[03] + 16, FIND_VOLUME_IN_LAYOUT(&iLocal_16, "mtpv_store_set"));
				Function_74(&Global_15312[03] + 16, 1);
				Function_73(&Global_15312[03] + 16, 397);
				Function_67(10, &iLocal_16 + 1320, &iLocal_16 + 1248, &iLocal_16 + 1280, Function_78(iScriptParam_0, "nmanzanita", "cabin01", 99), 0, &iLocal_4 + 40);
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&iLocal_16, "mtpv_Players_House")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_16, "mtpv_Players_House"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&iLocal_16, "mtpv_Players_House"));
				}
				else
				{
					LOG_ERROR("MTP: Cannot find mtpv_Players_House to restrict players room");
				}
				Function_95(&(Global_43791[iScriptParam_0]), 8);
				if (Function_92(&(Global_43791[iScriptParam_0]), 131072))
				{
					Function_66(&(Global_43791[iScriptParam_0]), 131072);
					iLocal_408 = 10;
				}
				else
				{
					iLocal_408 = 7;
				}
				bLocal_411 = false;
				break;
			
			case 0x00000007:
				Function_57(16, 1, 0, 50, 50, 7, 2, 0, 2, iScriptParam_0, "$/Content/Ambient/Town/first_time_manzanita", 63, 0, 350.0f, 2, 60, Function_61(1, 1, 3));
				Function_56(&Global_27462[1652] + 188, 4, &Global_44085[Global_46926[1]9] + 8, 1);
				Function_55(iScriptParam_0);
				Function_54(iScriptParam_0);
				Function_53(iScriptParam_0);
				Function_51(iScriptParam_0);
				Function_42(StackVal, &Global_98318, 8, Global_46926[1], "$/content/North/Mini_Games/FiveFingerFillet_MTP/FiveFingerFillet_MTP", 4294967295, 0, "MTP5Finger", 353, Vector(-464,88f, 152,352f, 1596,61f), 2,5f, 0, FIND_VOLUME_IN_LAYOUT(&iLocal_4, "mtpv_fff"));
				Function_41(&Global_98318, 8, 1);
				Function_40(&Global_98318, 8);
				iLocal_408 = 8;
				bLocal_411 = false;
				break;
			
			case 0x00000008:
				Function_36(3, 1.0f, 4, &iLocal_4, &Global_44085[iScriptParam_09] + 8, 1);
				Function_35(64);
				Function_31(0, 8, 4, 7, 2);
				Function_29(&iLocal_4);
				Function_95(&(Global_43791[iScriptParam_0]), 512);
				bLocal_411 = false;
				iLocal_408 = 9;
				break;
			
			case 0x00000009:
				Function_27(&iLocal_4, iScriptParam_0);
				Function_95(&(Global_43791[iScriptParam_0]), 4);
				Function_26("Finished Initializing ManzanitaPost", 5.0f);
				bLocal_411 = false;
				iLocal_408 = 10;
				break;
			
			case 0x0000000A:
				if (!Function_25(Global_98961, 8))
				{
					if (Function_21(&(Global_46926[1])))
					{
						Function_20(&Global_98961, 8);
					}
				}
				if (Function_92(&(Global_43791[iScriptParam_0]), 131072))
				{
					iLocal_408 = 6;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_411);
	}
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(13, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 5);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 10);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(5, 10);
	Function_11(&Global_12714, &Global_15312, iScriptParam_0, (iLocal_658 || Global_6623));
	Function_10();
	Function_5();
	Function_1(iScriptParam_0);
	Function_66(&(Global_43791[iScriptParam_0]), 32);
	Function_66(&(Global_43791[iScriptParam_0]), 64);
	Function_66(&(Global_43791[iScriptParam_0]), 8);
	Function_66(&(Global_43791[iScriptParam_0]), 512);
	Function_66(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_412))
	{
		TERMINATE_SCRIPT(&uLocal_412);
	}
	Function_26("Unloaded ManzanitaPost", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0xE4E / 3662
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

void Function_2(int iParam0) //Position: 0xE84 / 3716
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_3(int iParam0) //Position: 0xEA6 / 3750
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0xEBC / 3772
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_5() //Position: 0xED2 / 3794
{
	Function_6(&iLocal_16 + 8);
	RELEASE_LAYOUT_REF(&iLocal_16);
	return;
}

void Function_6(int iParam0) //Position: 0xEE5 / 3813
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

void Function_7(struct<2>[] Param0, int iParam1) //Position: 0xF0D / 3853
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

void Function_8(struct<13> Param0) //Position: 0x1058 / 4184
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_9(struct<13> Param0) //Position: 0x1075 / 4213
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_10() //Position: 0x1093 / 4243
{
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_11(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x109F / 4255
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
	strcpy(&cVar0, Function_19(bParam2), 64);
	if (Function_18())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_92(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_66(&(Global_43791[bParam2]), 0x40000000);
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
	if (!Function_92(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_79(2) || Function_92(&(Global_43791[bParam2]), 256))
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
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_95(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x12BD / 4797
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_15(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_17(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_17(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_15(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_14(Global_43790), Function_13(Global_43790), false, 0);
	}
}

int Function_13(int iParam0) //Position: 0x1423 / 5155
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

int Function_14(int iParam0) //Position: 0x144E / 5198
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

void Function_15(var uParam0, int iParam1) //Position: 0x1482 / 5250
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_16(var uParam0, int iParam1) //Position: 0x1493 / 5267
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_17(int iParam0, int iParam1) //Position: 0x14AD / 5293
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_18() //Position: 0x14CA / 5322
{
	if (Function_25(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_19(int iParam0) //Position: 0x14E5 / 5349
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

void Function_20(var uParam0, int iParam1) //Position: 0x1993 / 6547
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_21(int iParam0) //Position: 0x19A4 / 6564
{
	var uVar0;
	
	Function_24(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_24(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_23(iParam0);
	uVar0 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(Function_23(iParam0), 1.0f, "p_gen_chair01x", 1);
	if (IS_PHYSINST_VALID(&uVar0))
	{
		SET_PROP_FIXED(&uVar0, 1);
	}
	else
	{
		return 0;
		LOG_ERROR("Trying to make fivefingerfillet chair fixed but the physinst is invalid");
	}
	Function_22(&iParam0);
	return 1;
}

void Function_22(var uParam0) //Position: 0x1AB5 / 6837
{
	var uVar0;
	var uVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	var uVar6;
	
	Function_24(uParam0);
	uVar0 = Function_24(uParam0);
	uVar2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &uVar0, 1.0f, 0);
	if (IS_GRINGO_VALID(&uVar2))
	{
		uVar3 = GRINGO_GET_USE_COMPONENT_EXT(&uVar2, "UseCase1");
		if (IS_GRINGO_COMPONENT_VALID(&uVar3))
		{
			bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, 0);
			while (bVar4 >= 4294967295)
			{
				iVar5 = GRINGO_GET_INDEXED_CHILD_COMPONENT(bVar4, &uVar3);
				uVar6 = GRINGO_GET_PROP_FROM_COMPONENT_EXT(&iVar5, &uVar2);
				if (IS_PHYSINST_VALID(&uVar6))
				{
					SET_OBJECT_COLLIDE_WITH_MOVABLES(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
					SET_OBJECT_COLLIDE_WITH_WORLD(GET_OBJECT_FROM_PHYSINST(&uVar6), 0);
				}
				bVar4 = GRINGO_GET_INDEX_OF_NEXT_NAMED_CHILD("AttachProp", 1, &uVar3, bVar4 + 1);
			}
		}
	}
	return;
}

struct<8> Function_23(int iParam0) //Position: 0x1BA3 / 7075
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,299f, 16,57026f, 2593,136f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,0631f, 73,82803f, 2294,619f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,766f, 18,07059f, 4453,27f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,6982f, 76,28821f, 3447,546f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-465,0943f, 152,3517f, 1596,716f);
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

struct<8> Function_24(int iParam0) //Position: 0x1C7B / 7291
{
	if (iParam0 == Global_46760[0])
	{
		return StackVal, Vector(-2194,388f, 16,57687f, 2592,54f);
	}
	if (iParam0 == Global_46816[1])
	{
		return StackVal, Vector(161,1002f, 73,83751f, 2294,133f);
	}
	if (iParam0 == Global_46850[0])
	{
		return StackVal, Vector(-4274,772f, 18,07059f, 4453,844f);
	}
	if (iParam0 == Global_46894[3])
	{
		return StackVal, Vector(354,5946f, 76,28807f, 3448,024f);
	}
	if (iParam0 == Global_46926[1])
	{
		return StackVal, Vector(-464,3469f, 152,3559f, 1596,59f);
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_25(var uParam0, int iParam1) //Position: 0x1D4F / 7503
{
	return (uParam0 && iParam1) == 0;
}

void Function_26(char* cParam0) //Position: 0x1D5C / 7516
{
	if (!Function_79(128))
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

void Function_27(int iParam0, bool bParam1) //Position: 0x1D9C / 7580
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
		Function_28(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x1E8C / 7820
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_29(int iParam0) //Position: 0x1E99 / 7833
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
		*(&Global_40000 + 32) = GET_OBJECT_FROM_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_40000 + 16, Function_105(), 4,203895E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 5.0f, 2.0f)));
		Function_30(2097152);
	}
	ITERATE_ON_PARTIAL_NAME(&Global_40000 + 24, "report_crime");
	return;
}

void Function_30(int iParam0) //Position: 0x1F95 / 8085
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_31(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0x1FB2 / 8114
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
	Global_40000.f_8 = uParam0;
	Global_40000 = iParam1;
	Global_40000.f_4 = iParam2;
	Global_40000.f_64 = 99;
	Global_40000.f_68 = &uParam3;
	Global_40000.f_72 = 0;
	Global_40000.f_76 = &iParam4;
	Global_40000.f_80 = 0.0f;
	if (StackVal != StackVal)
	{
		Function_32();
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

void Function_32() //Position: 0x20A0 / 8352
{
	int iVar0;
	
	Global_41176 = Function_33(StackVal);
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

int Function_33(int iParam0) //Position: 0x20EE / 8430
{
	if (!Function_34(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_34(int iParam0) //Position: 0x2106 / 8454
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_35(bool bParam0) //Position: 0x211B / 8475
{
	Global_39922.f_88 = (Global_39922.f_88 || bParam0);
	return;
}

void Function_36(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x212E / 8494
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
		Function_39();
	}
	if (&bParam5)
	{
		Function_37(1048576);
	}
}

void Function_37(int iParam0) //Position: 0x223C / 8764
{
	Function_38(&Global_43580, iParam0);
	return;
}

void Function_38(var uParam0, var uParam1) //Position: 0x224A / 8778
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_39() //Position: 0x2269 / 8809
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_37(16384);
	}
	return;
}

void Function_40(struct<28>[] Param0, int iParam1) //Position: 0x2285 / 8837
{
	Param0[iParam128].f_184 |= 2097152;
	return;
}

void Function_41(struct<28>[] Param0, int iParam1, bool bParam2) //Position: 0x22A2 / 8866
{
	Param0[iParam128].f_196 = bParam2;
	Param0[iParam128].f_184 |= 8192;
	return;
}

void Function_42(struct<28>[] Param0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, char* cParam6, int iParam10, bool bParam11, int iParam12) //Position: 0x22C9 / 8905
{
	if (0 && !&bParam11)
	{
		return;
	}
	if (1 && bParam11)
	{
		return;
	}
	if (IS_OBJECTSET_VALID(&(Global_98936[bParam1])))
	{
		DESTROY_OBJECTSET(&(Global_98936[bParam1]));
	}
	Param0[bParam128].f_4 = Function_61(bParam2, bParam1, 4);
	if (STRING_LENGTH(&iParam3) >= 0)
	{
		*(&Param0[bParam128] + 8) = GET_ASSET_ID(&iParam3, 4);
	}
	else
	{
		*(&Param0[bParam128] + 8) = 4294967295;
	}
	(&Param0[bParam128] + 64) = "";
	(&Param0[bParam128] + 72) = "";
	*(&Param0[bParam128] + 80) = &iParam12;
	Param0[bParam128].f_136 = iParam7;
	Param0[bParam128].f_152 = 5;
	Param0[bParam128].f_184 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	Param0[bParam128].f_188 = iParam4;
	Param0[bParam128].f_192 = 4294967295;
	Param0[bParam128].f_196 = 4294967295;
	Param0[bParam128].f_200 = 4294967295;
	strcpy(&Param0[bParam128] + 16, &cParam6, 16);
	*(&Param0[bParam128] + 88) = Param8;
	Param0[bParam128].f_100 = iParam10;
	Param0[bParam128].f_112 = bParam2;
	if (Global_39266[bParam1] && Function_50(bParam1))
	{
		Function_43(StackVal, bParam2, (1 + bParam1), Param8, 63);
	}
	Param0[bParam128].f_196 = 1;
	Param0[bParam128].f_184 |= 8192;
}

int Function_43(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x2432 / 9266
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_49(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_48(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_47(StackVal, Param2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_15863[iVar02] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_46(uVar3);
		Var6 = Function_46(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_46(StackVal);
				Var4 = Function_46(StackVal);
				if (Function_45(StackVal, StackVal, Var4, Var6))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_15863[iVar12] = iParam0;
		Global_15863[iVar12].f_4 = iParam1;
		Global_15863[iVar12].f_8 = uVar3;
		Global_15863[iVar12].f_12 = &iParam4;
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_44(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(&(Global_16865[iVar1]), 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(&(Global_16865[iVar1]), "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(&(Global_16865[iVar1]), 1);
		SET_BLIP_PRIORITY(&(Global_16865[iVar1]), true);
		return iVar1;
	}
	return 0;
}

int Function_44(int iParam0) //Position: 0x261B / 9755
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

bool Function_45(struct<2> Param0, struct<2> Param2) //Position: 0x2752 / 10066
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_46(int iParam0) //Position: 0x277E / 10110
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	
	bVar2 = iParam0 & 32767;
	bVar3 = SHIFT_RIGHT(iParam0, 15) & 32767;
	Var0 = TO_FLOAT(bVar2);
	Var0.f_8 = TO_FLOAT(bVar3);
	if (iParam0 & 1073741824 == 0)
	{
		Var0 = (Var0 * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		Var0.f_8 = (StackVal * -1.0f);
	}
	return StackVal, Var0;
}

var Function_47(vector3 vParam0) //Position: 0x27D5 / 10197
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_48(int iParam0) //Position: 0x2823 / 10275
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

bool Function_49(vector3 vParam0) //Position: 0x28DB / 10459
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_50(int iParam0) //Position: 0x28F3 / 10483
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_39380)
	{
		return 1;
	}
	return Global_39380[iVar0];
}

void Function_51(int iParam0) //Position: 0x2916 / 10518
{
	Function_57(33, 1, 100, 50, 15, 3, 32832, 1, 8, iParam0, "$/content/Ambient/Traffic/tevent_rowdy_gangs", 63, 2, 150.0f, 8, 115, 0);
	Function_52(&Global_27462[3352] + 188, 2, 0);
	return;
}

void Function_52(struct<149> Param0) //Position: 0x2979 / 10617
{
	Param0.f_148 = iParam1;
	(&Param0 + 148)->f_4 = &iParam2;
	return;
}

void Function_53(int iParam0) //Position: 0x2990 / 10640
{
	Function_57(36, 1, 0, 0, 15, 3, 0, 0, 8, iParam0, "$/content/Ambient/Traffic/tevent_town_buildingEnter", 63, 2, 25.0f, 2, 30, 0);
	Function_52(&Global_27462[3652] + 188, 1, 0);
	return;
}

void Function_54(int iParam0) //Position: 0x29F7 / 10743
{
	Function_57(6, 1, 0, 10, 25, 2, 0, 0, 4, iParam0, "$/content/Ambient/Town/beat_dog_fetch", 31, 2, 50.0f, 2, 55, 0);
	return;
}

void Function_55(int iParam0) //Position: 0x2A40 / 10816
{
	Function_57(2, 1, 25, 4294967276, 50, 2, 32964, 3, 4, iParam0, "$/content/Ambient/Town/beat_crime_holdup", 30, 2, 65.0f, 8, 55, 0);
	return;
}

void Function_56(struct<157> Param0) //Position: 0x2A92 / 10898
{
	Param0.f_156 = uParam1;
	(&Param0 + 156)->f_4 = uParam2;
	(&Param0 + 156)->f_8 = uParam3;
}

void Function_57(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, int iParam16) //Position: 0x2AB3 / 10931
{
	if (!Function_3(iParam0))
	{
		return;
	}
	Function_58(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, &uParam10, iParam11, iParam12, &fParam13, &iParam14, &iParam15, &iParam16);
	Global_27462[iParam052].f_156 = iParam9;
}

void Function_58(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, char* cParam9) //Position: 0x2AFA / 11002
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
		cVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
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
					bVar2 = Function_60(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&cVar1, 0, 7, bVar2, 0);
			}
		}
		Function_59(iParam0, &Global_27462[iParam052] + 160);
		*(&Global_27462[iParam052] + 376) = &cVar1;
		Global_26652[iParam04] = &cVar1;
	}
	else
	{
		*(&Global_27462[iParam052] + 376) = &Global_26652[iParam04];
	}
	iParam14 = Function_60(&iParam14 * 60);
	ADD_TIME(&uVar0, 0, 0, &iParam14, 0);
	*(&Global_27462[iParam052] + 368) = &uVar0;
	Global_27462[iParam052].f_384 = -1.0f;
	Global_27462[iParam052].f_392 = 4294967295;
	Global_27462[iParam052].f_388 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, &cParam9, 64);
	Global_38376++;
}

int Function_59(int iParam0, int iParam1) //Position: 0x2EB8 / 11960
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	*(&Global_26652[iParam04] + 24) = &iParam1;
	return 1;
}

bool Function_60(int iParam0) //Position: 0x2EDB / 11995
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

int Function_61(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2EF2 / 12018
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_65(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_62(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_62(bParam0, bParam1, bParam2, 4294967295);
}

int Function_62(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2F50 / 12112
{
	var uVar0;
	
	if (!Function_64(bParam2))
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
	uVar0 = Function_65(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_63(uVar0);
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

var Function_63(int iParam0) //Position: 0x30B4 / 12468
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

bool Function_64(int iParam0) //Position: 0x30F2 / 12530
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_65(int iParam0, int iParam1, int iParam2) //Position: 0x3107 / 12551
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_66(var uParam0, int iParam1) //Position: 0x3127 / 12583
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_67(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) //Position: 0x3141 / 12609
{
	var uVar0;
	var uVar2[2];
	int iVar5;
	int iVar6;
	
	Function_72(&uParam1, &uParam2);
	if (!Function_71(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&uParam4))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_70(&uParam4, 0);
		}
		else
		{
			Function_69(&uParam4, 1);
		}
	}
	if (IS_DOOR_VALID(&iParam5))
	{
		if (Global_26200[iParam014].f_40 == 3)
		{
			Function_70(&iParam5, 0);
		}
		else
		{
			Function_69(&iParam5, 1);
		}
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		*(&Global_26200[iParam014] + 104) = &uParam1;
		if (Global_26200[iParam014].f_40 != 3 || !Global_6606)
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), true);
			DECOR_SET_BOOL(&uParam1, "SavingAtBedAllowed", 1);
		}
		else
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&uParam1), false);
			if (DECOR_CHECK_EXIST(&uParam1, "SavingAtBedAllowed"))
			{
				DECOR_REMOVE(&uParam1, "SavingAtBedAllowed");
			}
		}
	}
	if (IS_OBJECT_VALID(&iParam6))
	{
		GET_OBJECT_POSITION(&iParam6, &uVar0);
		uVar2[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uVar0, 3.0f, 0);
		uVar2[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uVar0, 3.0f, 0);
		if (IS_GRINGO_VALID(&(uVar2[0])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_68(&(uVar2[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[0]), 0);
		}
		if (IS_GRINGO_VALID(&(uVar2[1])))
		{
			iVar6 = GET_ACTOR_FROM_OBJECT(Function_68(&(uVar2[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar6) && !&iVar6 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar6, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar6, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar6);
			}
			GRINGO_ENABLE_SPAWN(&(uVar2[1]), 0);
		}
		if (Global_26200[iParam014].f_40 == 3)
		{
			if (DECOR_CHECK_EXIST(&iParam6, "PlayerHouse_NoHorse"))
			{
				DECOR_REMOVE(&iParam6, "PlayerHouse_NoHorse");
			}
		}
		else
		{
			DECOR_SET_BOOL(&iParam6, "PlayerHouse_NoHorse", 1);
		}
	}
	*(&Global_26200[iParam014] + 80) = &uParam4;
	*(&Global_26200[iParam014] + 88) = &iParam5;
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 56))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 56);
		(&Global_26200[iParam014] + 56) = "";
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 64))
	{
		DESTROY_OBJECT(&Global_26200[iParam014] + 64);
		(&Global_26200[iParam014] + 64) = "";
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&Global_26200[iParam014] + 72))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Global_26200[iParam014] + 72);
		(&Global_26200[iParam014] + 72) = "";
	}
	if (!iParam0 != 1)
	{
		GET_OBJECT_POSITION(&uParam2, &(Global_26200[iParam014]));
	}
	Global_26200[iParam014].f_12 = GET_OBJECT_HEADING(&uParam2);
	GET_OBJECT_POSITION(&uParam3, &Global_26200[iParam014] + 16);
	*(&Global_26200[iParam014] + 96) = &iParam6;
}

var Function_68(var uParam0, int iParam1) //Position: 0x3511 / 13585
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_69(var uParam0, int iParam1) //Position: 0x3520 / 13600
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

void Function_70(var uParam0, int iParam1) //Position: 0x357B / 13691
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

bool Function_71(int iParam0) //Position: 0x35D3 / 13779
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_72(var uParam0, int iParam1) //Position: 0x35E9 / 13801
{
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Flag passed!");
		return 0;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: Invalid Bad Gringo passed!");
		return 0;
	}
	if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(&uParam0), "nPlayerUse", "MyRestartFlag", &iParam1))
	{
		return 1;
	}
	LOG_ERROR("SAVE_SET_PLAYER_WAK_UP_FLAG_FOR_BED_GRINGO: falied to update bed gringo - does it have a PlayerUse and MyRestartFlag???");
	return 0;
}

int Function_73(bool bParam0, int iParam1) //Position: 0x3747 / 14151
{
	var uVar0;
	int iVar1;
	
	if (!IS_PERS_CHAR_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(&uVar0), "Settings", "blipID", iParam1))
		{
			iVar1 = GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&bParam0));
			if (IS_BLIP_VALID(&iVar1))
			{
				REMOVE_BLIP(&iVar1);
			}
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_BLIP_ICON: This Shopkeeper is not set up correctly in the XML data - Missing blipID in Settings");
	}
	return 0;
}

int Function_74(var uParam0, int iParam1) //Position: 0x383F / 14399
{
	var uVar0;
	
	if (!IS_PERS_CHAR_VALID(&uParam0))
	{
		return 0;
	}
	uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&uParam0), "Persistent_Char_Brain");
	if (IS_OBJECT_VALID(&uVar0))
	{
		if (GRINGO_UPDATE_INT(GET_GRINGO_FROM_OBJECT(&uVar0), "ShopSettings", "ShopType", iParam1))
		{
			return 1;
		}
		LOG_ERROR("SK_SHOP_REGISTER_TYPE: This Shopkeeper is not set up correctly in the XML data - Missing ShopType in ShopSettings");
	}
	return 0;
}

int Function_75(var uParam0, int iParam1) //Position: 0x3923 / 14627
{
	var uVar0;
	
	if (!IS_PERS_CHAR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_VOLUME_VALID(&iParam1))
	{
		uVar0 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&uParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar0))
		{
			if (GRINGO_UPDATE_OBJECT_REF(GET_GRINGO_FROM_OBJECT(&uVar0), "ShopSettings", "ShopVolumeRef", GET_OBJECT_FROM_VOLUME(&iParam1)))
			{
				return 1;
			}
			LOG_ERROR("SK_SHOP_REGISTER_VOLUME: This Shopkeeper is not set up correctly in the XML data - Missing ShopVolumeRef in ShopSettings");
		}
	}
	else
	{
		LOG_ERROR("SK_SHOP_REGISTER_VOLUME: called with an invalid volume");
	}
	return 0;
}

void Function_76(var uParam0, int iParam1) //Position: 0x3A5F / 14943
{
	bool bVar0;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&uParam0))
	{
		if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)))
		{
			GRINGO_SET_ALL_USES_OWNERSHIP(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam0)), &iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_77(var uParam0, int iParam1) //Position: 0x3AAC / 15020
{
	if (!IS_DOOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_OBJECT(&uParam0, "owner", &iParam1);
	return;
}

var Function_78(int iParam0, char* cParam1, bool bParam3) //Position: 0x3ACF / 15055
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_4(iParam0))
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

bool Function_79(int iParam0) //Position: 0x3B74 / 15220
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_80(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0x3B90 / 15248
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_79(2))
	{
		return;
	}
	if (Function_92(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_17(&(Param0[iVar02]), 2))
		{
			if (Function_81(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_66(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_95(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_81(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0x3C48 / 15432
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_92(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_17(&iParam0, 2))
	{
		return 1;
	}
	if (Function_17(&iParam0, 4))
	{
		if (IS_LATER_THAN(&iParam0 + 8, false))
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
		(&iParam1 + 16) = Function_83(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_49(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_16(&iParam0, 4);
	}
	Function_82(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_82(int iParam0, struct<2> Param1) //Position: 0x3DC9 / 15817
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_49(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_49(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_49(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_49(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_49(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_49(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

var Function_83(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x3F0F / 16143
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_105(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

void Function_84(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0x403F / 16447
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

void Function_85(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x409E / 16542
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_45(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

void Function_86(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x4105 / 16645
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_45(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_87(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x416E / 16750
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_45(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_88(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x41D9 / 16857
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_45(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_89(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x423F / 16959
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_45(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_90(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0x42A8 / 17064
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_45(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_91(int iParam0) //Position: 0x430C / 17164
{
	if (!Function_4(iParam0))
	{
		return 1;
	}
	return Function_92(&(Global_43791[iParam0]), 4);
}

bool Function_92(var uParam0, int iParam1) //Position: 0x4328 / 17192
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_93(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x4345 / 17221
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
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_92(&(Global_43791[iParam2]), 0x40000000))
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

void Function_94(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0x442E / 17454
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
	strcpy(&cVar1, Function_19(iParam2), 64);
	if (Function_18())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_92(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_95(&(Global_43791[iParam2]), 0x40000000);
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

void Function_95(var uParam0, int iParam1) //Position: 0x451E / 17694
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_96() //Position: 0x452F / 17711
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
	
	Function_104(3, 3);
	uVar0 = &uVar0;
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_bucket", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_campfire_tend", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_dnd_rowdydrink", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_drunk_rowdydrink", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_fiddle_w_fiddle", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_guntricks_e_any", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_lookdistance_w_any", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand_nospawn", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_r", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/multistage_sweeping", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_wall", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/use_shelf", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_fence_l_talking", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/pee", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_nearwall", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/smoking_stand", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_pocketwatch_e_any", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_check_clipboard", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_rail", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_docks", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/skin_scraper", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_sit_ground", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_smoke", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_hammer_table", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lie_sleep_on_bed_l", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_no_table", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_drink", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_ground_play_harmonica", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_hammerground_w_any", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_sellpaper", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/player_sleep_bed_r", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/locked_footlocker", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/lean_table", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/stand_eat_fruit_barrel", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/look_out_window_l", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_cleanknife", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/dog_sitting_nosun_norain", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/dog_sleeping_nosun_norain", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/dog_peeing", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/dog_begging", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/sit_embroidery_e_any", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_c", 1, 0);
	Function_102(&iLocal_16 + 8, "$/content/scripting/gringo/simplegringo/fivefingerfillet_spectate_b", 1, 0);
	if (!Function_97(&iLocal_16 + 8))
	{
		return 0;
	}
	iLocal_16 = FIND_NAMED_LAYOUT("ManzanitaPost_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_16))
	{
		iLocal_16 = CREATE_LAYOUT("ManzanitaPost_layout");
	}
	*(&iLocal_16 + 752) = CREATE_OBJECTSET_IN_LAYOUT("bucketgrpSet", &iLocal_16, 8, 0);
	*(&iLocal_16 + 760[03]) = Vector(-452,5478f, 153,3997f, 1607,365f);
	*(&iLocal_16 + 760[03] + 12) = Vector(0.0f, -260,1784f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "pour2", Vector(-452,5478f, 153,3997f, 1607,365f), Vector(0.0f, -260,1784f, 0.0f));
	DECOR_SET_STRING(&uVar1, "UseAnim", "PourBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_16 + 752);
	*(&iLocal_16 + 760[13]) = Vector(-442,5407f, 152,3502f, 1631,036f);
	*(&iLocal_16 + 760[13] + 12) = Vector(0.0f, -123,177f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "drop2", Vector(-442,5407f, 152,3502f, 1631,036f), Vector(0.0f, -123,177f, 0.0f));
	DECOR_SET_STRING(&uVar2, "UseAnim", "DropBucket");
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_16 + 752);
	*(&iLocal_16 + 816) = CREATE_OBJECTSET_IN_LAYOUT("sweepgrpSet", &iLocal_16, 8, 0);
	*(&iLocal_16 + 824[03]) = Vector(-456,1563f, 153,643f, 1619,154f);
	*(&iLocal_16 + 824[03] + 12) = Vector(0.0f, -50,07809f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag44", Vector(-456,1563f, 153,643f, 1619,154f), Vector(0.0f, -50,07809f, 0.0f));
	DECOR_SET_STRING(&uVar3, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_16 + 816);
	*(&iLocal_16 + 824[13]) = Vector(-455,0947f, 153,642f, 1621,985f);
	*(&iLocal_16 + 824[13] + 12) = Vector(0.0f, 323,8815f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag1", Vector(-455,0947f, 153,642f, 1621,985f), Vector(0.0f, 323,8815f, 0.0f));
	DECOR_SET_STRING(&uVar4, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_16 + 816);
	*(&iLocal_16 + 824[23]) = Vector(-453,578f, 153,642f, 1625,001f);
	*(&iLocal_16 + 824[23] + 12) = Vector(0.0f, 65,81509f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag2", Vector(-453,578f, 153,642f, 1625,001f), Vector(0.0f, 65,81509f, 0.0f));
	DECOR_SET_STRING(&uVar5, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_16 + 816);
	*(&iLocal_16 + 824[33]) = Vector(-453,168f, 153,643f, 1621,892f);
	*(&iLocal_16 + 824[33] + 12) = Vector(0.0f, 378,9476f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag3", Vector(-453,168f, 153,643f, 1621,892f), Vector(0.0f, 378,9476f, 0.0f));
	DECOR_SET_STRING(&uVar6, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_16 + 816);
	*(&iLocal_16 + 824[43]) = Vector(-449,705f, 153,642f, 1627,892f);
	*(&iLocal_16 + 824[43] + 12) = Vector(0.0f, 446,4536f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag4", Vector(-449,705f, 153,642f, 1627,892f), Vector(0.0f, 446,4536f, 0.0f));
	DECOR_SET_STRING(&uVar7, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_16 + 816);
	*(&iLocal_16 + 824[53]) = Vector(-448,093f, 153,643f, 1627,031f);
	*(&iLocal_16 + 824[53] + 12) = Vector(0.0f, 492,0889f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag5", Vector(-448,093f, 153,643f, 1627,031f), Vector(0.0f, 492,0889f, 0.0f));
	DECOR_SET_STRING(&uVar8, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_16 + 816);
	*(&iLocal_16 + 824[63]) = Vector(-449,419f, 153,643f, 1624,528f);
	*(&iLocal_16 + 824[63] + 12) = Vector(0.0f, 83,83551f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag6", Vector(-449,419f, 153,643f, 1624,528f), Vector(0.0f, 83,83551f, 0.0f));
	DECOR_SET_STRING(&uVar9, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_16 + 816);
	*(&iLocal_16 + 824[73]) = Vector(-450,882f, 153,643f, 1620,995f);
	*(&iLocal_16 + 824[73] + 12) = Vector(0.0f, 358,1332f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag7", Vector(-450,882f, 153,643f, 1620,995f), Vector(0.0f, 358,1332f, 0.0f));
	DECOR_SET_STRING(&uVar10, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_16 + 816);
	*(&iLocal_16 + 824[83]) = Vector(-449,5082f, 153,643f, 1622,307f);
	*(&iLocal_16 + 824[83] + 12) = Vector(0.0f, 359,5456f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag8", Vector(-449,5082f, 153,643f, 1622,307f), Vector(0.0f, 359,5456f, 0.0f));
	DECOR_SET_STRING(&uVar11, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_16 + 816);
	*(&iLocal_16 + 824[93]) = Vector(-451,011f, 153,643f, 1617,428f);
	*(&iLocal_16 + 824[93] + 12) = Vector(0.0f, 87,18411f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag9", Vector(-451,011f, 153,643f, 1617,428f), Vector(0.0f, 87,18411f, 0.0f));
	DECOR_SET_STRING(&uVar12, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &iLocal_16 + 816);
	*(&iLocal_16 + 824[103]) = Vector(-450,934f, 153,643f, 1613,469f);
	*(&iLocal_16 + 824[103] + 12) = Vector(0.0f, 181,5617f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag10", Vector(-450,934f, 153,643f, 1613,469f), Vector(0.0f, 181,5617f, 0.0f));
	DECOR_SET_STRING(&uVar13, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &iLocal_16 + 816);
	*(&iLocal_16 + 824[113]) = Vector(-453,23f, 153,69f, 1614,675f);
	*(&iLocal_16 + 824[113] + 12) = Vector(0.0f, 165,9542f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag11", Vector(-453,23f, 153,69f, 1614,675f), Vector(0.0f, 165,9542f, 0.0f));
	DECOR_SET_STRING(&uVar14, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &iLocal_16 + 816);
	*(&iLocal_16 + 824[123]) = Vector(-457,668f, 153,643f, 1615,681f);
	*(&iLocal_16 + 824[123] + 12) = Vector(0.0f, 187,6034f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag12", Vector(-457,668f, 153,643f, 1615,681f), Vector(0.0f, 187,6034f, 0.0f));
	DECOR_SET_STRING(&uVar15, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &iLocal_16 + 816);
	*(&iLocal_16 + 824[133]) = Vector(-461,361f, 153,643f, 1616,722f);
	*(&iLocal_16 + 824[133] + 12) = Vector(0.0f, 176,8521f, 0.0f);
	uVar16 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag13", Vector(-461,361f, 153,643f, 1616,722f), Vector(0.0f, 176,8521f, 0.0f));
	DECOR_SET_STRING(&uVar16, "UseAnim", "sweeping");
	ADD_OBJECT_TO_OBJECTSET(&uVar16, &iLocal_16 + 816);
	*(&iLocal_16 + 824[143]) = Vector(-448,296f, 153,642f, 1627,836f);
	*(&iLocal_16 + 824[143] + 12) = Vector(0.0f, 203,677f, 0.0f);
	uVar17 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Flag14", Vector(-448,296f, 153,642f, 1627,836f), Vector(0.0f, 203,677f, 0.0f));
	DECOR_SET_STRING(&uVar17, "UseAnim", "nbroom_pst");
	ADD_OBJECT_TO_OBJECTSET(&uVar17, &iLocal_16 + 816);
	*(&iLocal_16 + 1192) = Vector(-448,2052f, 153,6423f, 1621,561f);
	*(&iLocal_16 + 1192 + 12) = Vector(0.0f, -75,39217f, 0.0f);
	*(&iLocal_16 + 1216) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_shop_flag_GEN", Vector(-448,2052f, 153,6423f, 1621,561f), Vector(0.0f, -75,39217f, 0.0f));
	*(&iLocal_16 + 1224) = Vector(-442,8723f, 153,7947f, 1669,459f);
	*(&iLocal_16 + 1224 + 12) = Vector(0.0f, -36,67345f, 0.0f);
	*(&iLocal_16 + 1248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_save_flag_MTP", Vector(-442,8723f, 153,7947f, 1669,459f), Vector(0.0f, -36,67345f, 0.0f));
	*(&iLocal_16 + 1256) = Vector(-440,8558f, 153,5406f, 1666,612f);
	*(&iLocal_16 + 1256 + 12) = Vector(0.0f, -35,27298f, 0.0f);
	*(&iLocal_16 + 1280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_purchase_flag_MTP", Vector(-440,8558f, 153,5406f, 1666,612f), Vector(0.0f, -35,27298f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_bucket", "Multistage_bucket", Vector(-462,1409f, 153,3525f, 1611,207f), Vector(0.0f, -125,1834f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Sit_Ground_Campfire_Tend", "Sit_Ground_Campfire_Tend", Vector(-459,9532f, 149,4585f, 1561,889f), Vector(0.0f, 13,19862f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_announce", "stand_announce", Vector(-416,2707f, 152,0026f, 1601,502f), Vector(0.0f, 125,61f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_dnd_rowdydrink", "stand_dnd_rowdydrink", Vector(-459,8463f, 149,4585f, 1565,049f), Vector(0.0f, -354,0893f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_dnd_rowdydrink1", "stand_dnd_rowdydrink", Vector(-461,2959f, 152,3523f, 1591,514f), Vector(0.0f, -211,0874f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_dnd_rowdydrink2", "stand_dnd_rowdydrink", Vector(-460,9363f, 149,4585f, 1555,77f), Vector(0.0f, -185,2899f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_dnd_rowdydrink3", "stand_dnd_rowdydrink", Vector(-461,7334f, 152,3524f, 1588,257f), Vector(0.0f, -191,8179f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_drunk_rowdydrink", "stand_drunk_rowdydrink", Vector(-458,2216f, 152,3524f, 1592,276f), Vector(0.0f, -273,1395f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_fiddle_w_fiddle", "stand_fiddle_w_fiddle", Vector(-466,1032f, 152,3522f, 1590,397f), Vector(0.0f, 246,4254f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_guntricks_e_any", "stand_guntricks_e_any", Vector(-468,1964f, 149,4585f, 1562,297f), Vector(0.0f, 246,0368f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any", "stand_lookdistance_w_any", Vector(-449,123f, 148,4325f, 1548,121f), Vector(0.0f, -0,05513339f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand_nospawn2", "smoking_stand_nospawn", Vector(-461,4967f, 149,4585f, 1564,401f), Vector(0.0f, -13,85528f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand_nospawn4", "smoking_stand_nospawn", Vector(-458,7669f, 152,3523f, 1593,473f), Vector(0.0f, -261,6133f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand_nospawn6", "smoking_stand_nospawn", Vector(-434,0815f, 152,79f, 1621,101f), Vector(0.0f, 56,15094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand_nospawn7", "smoking_stand_nospawn", Vector(-410,988f, 152,0356f, 1592,481f), Vector(0.0f, -119,7902f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sleep_grandPa", "lie_sleep_on_bed_r", Vector(-452,0739f, 153,4744f, 1631,432f), Vector(0.0f, 18,95132f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1288) = CREATE_OBJECTSET_IN_LAYOUT(Function_105(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Multistage_sweeping", "Multistage_sweeping", Vector(-448,2578f, 153,6423f, 1627,849f), Vector(0.0f, 15,8413f, 0.0f)), &iLocal_16 + 1288);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_16 + 1288)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_wall", "stand_hammer_wall", Vector(-437,1265f, 153,5043f, 1607,222f), Vector(0.0f, 120,0099f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nuse_shelf", "nuse_shelf", Vector(-449,4108f, 153,643f, 1617,507f), Vector(0.0f, 287,9146f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "use_shelf1", "nuse_shelf", Vector(-460,4286f, 153,643f, 1615,165f), Vector(0.0f, 17,97539f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand_nospawn9", "smoking_stand_nospawn", Vector(-445,9973f, 153,679f, 1616,922f), Vector(0.0f, 24,17162f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_L_talking", "lean_fence_L_talking", Vector(-444,7703f, 153,2616f, 1633,877f), Vector(0.0f, -165,3139f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Pee", "Pee", Vector(-470,4628f, 153,6592f, 1619,805f), Vector(0.0f, 64,41236f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall", "Rand_Idle_NearWall", Vector(-463,3304f, 153,6527f, 1615,456f), Vector(0.0f, 108,6642f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_fence_L_talking1", "lean_fence_L_talking", Vector(-417,3629f, 151,981f, 1602,125f), Vector(0.0f, 106,8246f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand", "smoking_stand", Vector(-445,616f, 152,3474f, 1642,978f), Vector(0.0f, -233,1524f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_pocketwatch_e_any", "stand_pocketwatch_e_any", Vector(-410,6606f, 151,997f, 1594,701f), Vector(0.0f, -130,5263f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Sit_Ground_Campfire_Tend1", "Sit_Ground_Campfire_Tend", Vector(-462,6324f, 152,3521f, 1593,147f), Vector(0.0f, -192,5572f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1296) = CREATE_OBJECTSET_IN_LAYOUT(Function_105(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard", "stand_check_clipboard", Vector(-448,5985f, 153,6164f, 1626,065f), Vector(0.0f, 70,10171f, 0.0f)), &iLocal_16 + 1296);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_16 + 1296)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard1", "stand_check_clipboard", Vector(-450,3533f, 153,6544f, 1619,079f), Vector(0.0f, -37,12104f, 0.0f)), &iLocal_16 + 1296);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_16 + 1296)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard2", "stand_check_clipboard", Vector(-454,9886f, 153,712f, 1622,02f), Vector(0.0f, 48,9295f, 0.0f)), &iLocal_16 + 1296);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_16 + 1296)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard3", "stand_check_clipboard", Vector(-458,1244f, 153,6399f, 1615,224f), Vector(0.0f, 53,55996f, 0.0f)), &iLocal_16 + 1296);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_16 + 1296)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nlean_rail", "nlean_rail", Vector(-450,6583f, 153,2753f, 1635,898f), Vector(0.0f, 104,668f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_rail1", "nlean_rail", Vector(-444,3425f, 153,2879f, 1630,637f), Vector(0.0f, -67,20634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_NearWall1", "Rand_Idle_NearWall", Vector(-410,9013f, 151,9952f, 1607,521f), Vector(0.0f, -161,4946f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "nsit_docks", "nsit_docks", Vector(-405,4461f, 154,6343f, 1612,14f), Vector(0.0f, -72,48959f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any1", "stand_lookdistance_w_any", Vector(-420,1948f, 152,4629f, 1655,096f), Vector(0.0f, 213,3387f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1304) = CREATE_OBJECTSET_IN_LAYOUT(Function_105(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "skin_scraper1", "skin_scraper", Vector(-434,4794f, 152,349f, 1641,24f), Vector(0.0f, -21,40638f, 0.0f)), &iLocal_16 + 1304);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_16 + 1304)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "skin_scraper", "skin_scraper", Vector(-437,1036f, 152,5303f, 1634,07f), Vector(0.0f, 103,4843f, 0.0f)), &iLocal_16 + 1304);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_16 + 1304)), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Sit_Ground_Campfire_Tend2", "Sit_Ground_Campfire_Tend", Vector(-447,1107f, 152,3468f, 1643,379f), Vector(0.0f, -201,0855f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground", "Rand_Idle_Sit_Ground", Vector(-468,9283f, 152,3521f, 1589,258f), Vector(0.0f, -102,1921f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand1", "smoking_stand", Vector(-454,8755f, 153,3557f, 1606,73f), Vector(0.0f, 189,3744f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_smoke", "sit_ground_smoke", Vector(-454,6824f, 149,4585f, 1557,282f), Vector(0.0f, 136,9088f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand2", "smoking_stand", Vector(-440,0928f, 153,3415f, 1667,247f), Vector(0.0f, 16,43336f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand3", "smoking_stand", Vector(-408,1328f, 151,9963f, 1602,398f), Vector(0.0f, -87,2506f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any2", "stand_lookdistance_w_any", Vector(-406,7569f, 151,9909f, 1605,909f), Vector(0.0f, -153,9074f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammer_table", "stand_hammer_table", Vector(-457,4655f, 153,3579f, 1606,031f), Vector(0.0f, -164,6332f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_l", "lie_sleep_on_bed_l", Vector(-473,56f, 152,3472f, 1591,056f), Vector(0.0f, -192,0127f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_r", "lie_sleep_on_bed_r", Vector(-473,4189f, 152,3701f, 1589,005f), Vector(0.0f, -14,10636f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand1", "rand_idle_stand", Vector(-459,7059f, 152,3525f, 1588,754f), Vector(0.0f, -197,5577f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_l1", "lie_sleep_on_bed_l", Vector(-461,5822f, 152,3611f, 1583,649f), Vector(0.0f, 88,64276f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground1", "Rand_Idle_Sit_Ground", Vector(-454,6555f, 149,4585f, 1560,61f), Vector(0.0f, 60,39952f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_r1", "lie_sleep_on_bed_r", Vector(-459,8169f, 152,3665f, 1583,556f), Vector(0.0f, -88,47569f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_guntricks_e_any1", "stand_guntricks_e_any", Vector(-462,4196f, 149,4585f, 1559,729f), Vector(0.0f, -118,2966f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_no_table", "sit_no_table", Vector(-438,9066f, 152,3818f, 1621,612f), Vector(0.0f, -86,36549f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Sit_Ground_Drink", "Sit_Ground_Drink", Vector(-468,9798f, 149,4585f, 1559,522f), Vector(0.0f, -98,14437f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_ground_play_harmonica", "sit_ground_play_harmonica", Vector(-463,9873f, 152,3523f, 1591,785f), Vector(0.0f, -160,5356f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_r2", "lie_sleep_on_bed_r", Vector(-468,5805f, 149,5208f, 1556,178f), Vector(0.0f, -41,88407f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_l2", "lie_sleep_on_bed_l", Vector(-469,7071f, 149,4597f, 1557,398f), Vector(0.0f, 137,6603f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_hammerground_w_any", "stand_hammerground_w_any", Vector(-440,1285f, 153,668f, 1608,727f), Vector(0.0f, 0.0f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_l3", "lie_sleep_on_bed_l", Vector(-451,811f, 149,4708f, 1559,002f), Vector(0.0f, -3,798198f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_sellPaper", "stand_sellPaper", Vector(-412,2684f, 152,0363f, 1598,35f), Vector(0.0f, -266,8094f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lie_sleep_on_bed_l4", "lie_sleep_on_bed_l", Vector(-456,7327f, 149,4752f, 1567,765f), Vector(0.0f, -61,64766f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "player_sleep_MTP", "player_sleep_bed_R", Vector(-445,8252f, 153,5015f, 1671,3f), Vector(0.0f, 53,38073f, 0.0f));
	*(&iLocal_16 + 1328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Locked_Footlocker", "Locked_Footlocker", Vector(-440,5854f, 153,5015f, 1670,476f), Vector(0.0f, 54,29902f, 0.0f));
	DECOR_SET_BOOL(&iLocal_16 + 1328, "PlayerHouseChest", 1);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand4", "smoking_stand", Vector(-436,0515f, 152,63f, 1621,181f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "rand_idle_stand", "rand_idle_stand", Vector(-442,4321f, 152,3474f, 1644,395f), Vector(0.0f, -178,1945f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "fivefingerfillet_spectate2", "fivefingerfillet_spectate", Vector(-463,5462f, 152,3519f, 1598,171f), Vector(0.0f, 38,81675f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "use_shelf2", "nuse_shelf", Vector(-451,6537f, 153,643f, 1612,983f), Vector(0.0f, 379,0972f, 0.0f));
	*(&iLocal_16 + 1336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_table", "lean_table", Vector(-450,4998f, 153,643f, 1615,213f), Vector(0.0f, -72,67769f, 0.0f));
	CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "use_shelf3", "nuse_shelf", Vector(-456,4213f, 153,643f, 1614,634f), Vector(0.0f, 379,0972f, 0.0f));
	*(&iLocal_16 + 1344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_eat_fruit_barrel", "stand_eat_fruit_barrel", Vector(-452,6484f, 153,6451f, 1628,632f), Vector(0.0f, -190,907f, 0.0f));
	*(&iLocal_16 + 1352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_table1", "lean_table", Vector(-450,2936f, 153,6423f, 1624,704f), Vector(0.0f, 108,4065f, 0.0f));
	*(&iLocal_16 + 1360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "look_out_window_L", "look_out_window_L", Vector(-445,1767f, 153,6423f, 1619,694f), Vector(0.0f, -71,39623f, 0.0f));
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "lean_rail2", "nlean_rail", Vector(-444,1862f, 153,6423f, 1622,052f), Vector(0.0f, -67,20634f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_lookdistance_w_any3", "stand_lookdistance_w_any", Vector(-411,8651f, 151,997f, 1593,836f), Vector(0.0f, 338,7438f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar0), 0);
	*(&iLocal_16 + 1368) = CREATE_OBJECTSET_IN_LAYOUT(Function_105(), &iLocal_16, 12, 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_announce10", "stand_announce", Vector(-410,5049f, 151,997f, 1593,359f), Vector(0.0f, 141,1104f, 0.0f)), &iLocal_16 + 1368);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &iLocal_16 + 1368)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_announce2", "stand_announce", Vector(-408,2245f, 151,997f, 1599,509f), Vector(0.0f, 141,1104f, 0.0f)), &iLocal_16 + 1368);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(true, &iLocal_16 + 1368)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard10", "stand_check_clipboard", Vector(-409,4391f, 151,9843f, 1597,628f), Vector(0.0f, 113,7952f, 0.0f)), &iLocal_16 + 1368);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(2, &iLocal_16 + 1368)), 0);
	ADD_OBJECT_TO_OBJECTSET(CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "stand_check_clipboard11", "stand_check_clipboard", Vector(-412,4676f, 152,2611f, 1604,859f), Vector(0.0f, 198,7511f, 0.0f)), &iLocal_16 + 1368);
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(3, &iLocal_16 + 1368)), 0);
	*(&iLocal_16 + 1376) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "smoking_stand5", "smoking_stand", Vector(-445,1013f, 152,3468f, 1645,452f), Vector(0.0f, 63,90519f, 0.0f));
	*(&iLocal_16 + 1384) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_cleanknife", "sit_cleanknife", Vector(-442,6447f, 153,3415f, 1664,753f), Vector(0.0f, -216,4481f, 0.0f));
	*(&iLocal_16 + 1392) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sitting_nosun_norain", "dog_sitting_nosun_norain", Vector(-440,0685f, 153,3459f, 1664,678f), Vector(0.0f, -27,45122f, 0.0f));
	*(&iLocal_16 + 1400) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping_nosun_norain", "dog_sleeping_nosun_norain", Vector(-438,7783f, 153,3572f, 1667,334f), Vector(0.0f, -141,8282f, 0.0f));
	*(&iLocal_16 + 1408) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_peeing", "dog_peeing", Vector(-443,2755f, 153,2498f, 1661,958f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_16 + 1416) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging", "dog_begging", Vector(-436,2619f, 153,3488f, 1669,269f), Vector(0.0f, 10,37688f, 0.0f));
	*(&iLocal_16 + 1424) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_peeing1", "dog_peeing", Vector(-433,3273f, 152,3761f, 1643,377f), Vector(0.0f, -45,58448f, 0.0f));
	*(&iLocal_16 + 1432) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping_nosun_norain1", "dog_sleeping_nosun_norain", Vector(-441,2228f, 152,3542f, 1638,416f), Vector(0.0f, -141,8282f, 0.0f));
	*(&iLocal_16 + 1440) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_peeing2", "dog_peeing", Vector(-442,5812f, 152,3761f, 1636,6f), Vector(0.0f, -66,10598f, 0.0f));
	*(&iLocal_16 + 1448) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging1", "dog_begging", Vector(-438,5992f, 152,5514f, 1625,365f), Vector(0.0f, -17,66698f, 0.0f));
	*(&iLocal_16 + 1456) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_peeing3", "dog_peeing", Vector(-435,5265f, 152,7129f, 1624,947f), Vector(0.0f, 6,06516f, 0.0f));
	*(&iLocal_16 + 1464) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping_nosun_norain2", "dog_sleeping_nosun_norain", Vector(-445,8478f, 152,3542f, 1613,405f), Vector(0.0f, -141,8282f, 0.0f));
	*(&iLocal_16 + 1472) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging2", "dog_begging", Vector(-439,7459f, 153,6289f, 1610,004f), Vector(0.0f, 156,8025f, 0.0f));
	*(&iLocal_16 + 1480) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sitting_nosun_norain1", "dog_sitting_nosun_norain", Vector(-453,5348f, 153,3649f, 1608,518f), Vector(0.0f, 150,4019f, 0.0f));
	*(&iLocal_16 + 1488) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping_nosun_norain3", "dog_sleeping_nosun_norain", Vector(-456,9132f, 152,3646f, 1585,292f), Vector(0.0f, -243,6771f, 0.0f));
	*(&iLocal_16 + 1496) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging3", "dog_begging", Vector(-467,8965f, 152,3872f, 1600,456f), Vector(0.0f, 324,0213f, 0.0f));
	*(&iLocal_16 + 1504) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_peeing4", "dog_peeing", Vector(-459,7479f, 152,3851f, 1593,538f), Vector(0.0f, 6,06516f, 0.0f));
	*(&iLocal_16 + 1512) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_sleeping_nosun_norain4", "dog_sleeping_nosun_norain", Vector(-455,6593f, 149,4729f, 1564,71f), Vector(0.0f, -204,3772f, 0.0f));
	*(&iLocal_16 + 1520) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_peeing5", "dog_peeing", Vector(-448,7225f, 149,4146f, 1557,173f), Vector(0.0f, 35,3625f, 0.0f));
	*(&iLocal_16 + 1528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "dog_begging4", "dog_begging", Vector(-464,4003f, 149,4313f, 1556,434f), Vector(0.0f, 550,6816f, 0.0f));
	*(&iLocal_16 + 1536) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "Rand_Idle_Sit_Ground2", "Rand_Idle_Sit_Ground", Vector(-458,3015f, 152,3525f, 1588,673f), Vector(0.0f, -202,4089f, 0.0f));
	*(&iLocal_16 + 1544) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "sit_embroidery_e_any", "sit_embroidery_e_any", Vector(-441,7943f, 153,3415f, 1665,747f), Vector(0.0f, -33,8605f, 0.0f));
	*(&iLocal_16 + 1552) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "fivefingerfillet_spectate_C", "fivefingerfillet_spectate_C", Vector(-464,753f, 152,3517f, 1598,612f), Vector(0.0f, 4,575131f, 0.0f));
	*(&iLocal_16 + 1560) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_16, "fivefingerfillet_spectate_B", "fivefingerfillet_spectate_B", Vector(-462,8687f, 152,352f, 1597,15f), Vector(0.0f, -290,5611f, 0.0f));
	return 1;
}

bool Function_97(struct<2>[] Param0) //Position: 0x7E95 / 32405
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_101();
	iVar1 = 0;
	if (!Function_9(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_100(&(Param0[iVar02]), 8);
		}
		else if (Function_99())
		{
			iVar1 = 1;
			Function_100(&(Param0[iVar02]), 8);
		}
		Function_100(&(Param0[iVar02]), 16);
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
				Function_100(&(Param0[iVar02]), 1);
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
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_100(&(Param0[iVar02]), 2);
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
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_100(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_100(&(Param0[iVar02]), 2);
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
	Function_98();
	return 1;
}

void Function_98() //Position: 0x8259 / 33369
{
	if (!Function_79(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_99() //Position: 0x8299 / 33433
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

void Function_100(struct<13> Param0) //Position: 0x82C7 / 33479
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_101() //Position: 0x82DA / 33498
{
	if (!Function_79(128))
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

var Function_102(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x831C / 33564
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_103(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_100(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_103(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x835A / 33626
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_9(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_100(&(Param0[iVar02]), 4);
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

void Function_104(int iParam0, int iParam1) //Position: 0x8429 / 33833
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

var Function_105() //Position: 0x8473 / 33907
{
	var uVar0;
	
	return &uVar0;
}

bool Function_106() //Position: 0x847C / 33916
{
	var uVar0;
	
	Function_104(3, 3);
	uVar0 = &uVar0;
	iLocal_4 = FIND_NAMED_LAYOUT("ManzanitaPost_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		iLocal_4 = CREATE_LAYOUT("ManzanitaPost_layout");
	}
	*(&iLocal_4 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "mtpv_wolf_trigger", 4,203895E-45f, Vector(-648,4926f, 87,459f, 1488,032f), Vector(0.0f, -31,57944f, 0.0f), Vector(11,27725f, 3.0f, 20,08958f));
	*(&iLocal_4 + 16) = Vector(-444,8913f, 153,2378f, 1663,379f);
	*(&iLocal_4 + 16 + 12) = Vector(0.0f, -79,87083f, 0.0f);
	*(&iLocal_4 + 40) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "f_playerHorse", Vector(-444,8913f, 153,2378f, 1663,379f), Vector(0.0f, -79,87083f, 0.0f));
	return 1;
}

void Function_107(char* cParam0) //Position: 0x856D / 34157
{
	if (!Function_79(128))
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

