//Decompiled with MagicRDR v1.0
//Function Count : 531
//Statics Count : 958
//Natives Count : 687
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 9;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
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
	var uLocal_44 = 1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 5;
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
	var uLocal_76 = 6;
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
	var uLocal_104 = 3;
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
	var uLocal_120 = 4;
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
	var uLocal_132 = 7;
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
	var uLocal_196 = 8;
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
	var uLocal_216 = 5;
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
	var uLocal_230 = 5;
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
	var uLocal_244 = 5;
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
	var uLocal_258 = 11;
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
	var uLocal_284 = 4;
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
	var uLocal_296 = 4;
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
	var uLocal_308 = 4;
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
	var uLocal_320 = 4;
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
	var uLocal_332 = 4;
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
	var uLocal_344 = 4;
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
	var uLocal_356 = 4;
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
	var uLocal_368 = 4;
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
	var uLocal_380 = 4;
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
	var uLocal_392 = 4;
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
	var uLocal_404 = 4;
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
	char[] cLocal_462[4] = 0;
	var uLocal_463 = 0;
	struct<6> Local_464 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	int iLocal_476 = 3;
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
	int iLocal_490 = 8;
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
	int iLocal_532 = 0;
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
	bool bLocal_544 = false;
	int iLocal_545 = 0;
	bool bLocal_546 = false;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	bool bLocal_549 = false;
	var uLocal_550 = 0;
	bool bLocal_551 = false;
	var uLocal_552 = 0;
	bool bLocal_553 = false;
	var uLocal_554 = 0;
	int iLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	int iLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	int iLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	int iLocal_567[5] = { 0, 0, 0, 0, 0 };
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	bool bLocal_579 = false;
	bool bLocal_580 = false;
	bool bLocal_581 = false;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	var uLocal_584 = 13;
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
	struct<15> Local_638[6];
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 5;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 5;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 5;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	int iLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	bool bLocal_834 = false;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	bool bLocal_837 = false;
	bool bLocal_838 = false;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	bool bLocal_841 = false;
	int iLocal_842 = 0;
	bool bLocal_843 = false;
	var uLocal_844 = 0;
	bool bLocal_845 = false;
	var uLocal_846 = 0;
	bool bLocal_847 = false;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	bool bLocal_857 = false;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	bool bLocal_862 = false;
	var uLocal_863 = 0;
	int iLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	int iLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	int iLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	int iLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	int iLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	int iLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	struct<2> Local_892[3];
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	int iLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	struct<2> Local_912 = { 0, 0 } ;
	var uLocal_914 = 0;
	struct<2> Local_915 = { 0, 0 } ;
	var uLocal_917 = 0;
	struct<2> Local_918 = { 0, 0 } ;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	struct<2> Local_927 = { 0, 0 } ;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932[2] = { 0, 0 };
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	float fLocal_938 = 0.0f;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	struct<6> ScriptParam_0 = { 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	Local_464 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_544 = 99;
	iLocal_545 = 6;
	iLocal_532 = 1000;
	while (Function_263())
	{
		Function_218();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x40 / 64
{
	Function_217(1);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_551);
	Function_214(12, 1, 0, 1, 1);
	Function_214(13, 0, 0, 1, 1);
	Function_214(11, 0, 0, 1, 1);
	Function_214(14, 0, 0, 1, 1);
	if (IS_ACTOR_VALID(&bLocal_843))
	{
		TASK_CLEAR(&bLocal_843);
		SET_ACTOR_INVULNERABILITY(&bLocal_843, 0);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_843);
	}
	Function_213(&cLocal_462);
	Function_213(&iLocal_4);
	Function_212();
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_211();
	Function_182(bLocal_580, 1, 0, 1, 0, 0, 1, 1);
	Function_181();
	Function_177(&iLocal_476);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_547))
	{
		DESTROY_ITERATOR(&uLocal_547);
	}
	RELEASE_LAYOUT_REF(&cLocal_462);
	if (bLocal_579)
	{
		Function_26(Local_464, 1, 1, 1, 0);
	}
	else if (bLocal_580)
	{
		Function_22(Local_464);
	}
	else
	{
		Function_2(Local_464);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x11F / 287
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x140 / 320
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x15D / 349
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x180 / 384
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x197 / 407
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	*(&Global_21369 + 48) = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	ADD_TIME(&Global_21369 + 48, 0, 0, &iParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_8(&Global_21369 + 48);
	PRINTNL();
	Function_7(&iParam0);
	return;
}

void Function_7(int iParam0) //Position: 0x239 / 569
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x25C / 604
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&uParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&uParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&uParam0));
	return;
}

void Function_9() //Position: 0x2A6 / 678
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x2BF / 703
{
	int iVar0;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x312 / 786
{
	struct<4> Var0;
	
	if (!Function_20(iParam1))
	{
		return;
	}
	switch (Function_17(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(iParam1), Function_15(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x43C / 1084
{
	char* cVar0[16];
	
	if (!Function_13())
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

bool Function_13() //Position: 0x476 / 1142
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x491 / 1169
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x49E / 1182
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x4BE / 1214
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x4D5 / 1237
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x4F0 / 1264
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
			Function_19(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x737 / 1847
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x763 / 1891
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	if (!Function_21(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_21(int iParam0) //Position: 0x787 / 1927
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x79C / 1948
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x7BA / 1978
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_20(iParam0))
	{
		return;
	}
	iVar0 = Function_17(iParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", iParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(cVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x860 / 2144
{
	char* cVar0[16];
	
	if (!Function_13())
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

struct<24> Function_25(char* cParam0) //Position: 0x89F / 2207
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xAF5 / 2805
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(iParam0) == 1)
	{
		iVar2 = Function_15(iParam0);
		Function_170(&(Global_6667[iVar228]));
		Function_169(4194304);
		if (&bParam3)
		{
			Function_121(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_115(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_121(iVar2, &uVar0, 0);
		}
		bVar1 = Function_114();
		if (&bParam1)
		{
			Function_98(iVar2, iParam0, bVar1);
			Function_97();
		}
	}
	Function_39(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_31(iVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_17(iParam0) == 1)
		{
			iVar2 = Function_15(iParam0);
			if (iVar2 != 1)
			{
				(&Global_21369 + 72)->f_52++;
				if ((&Global_21369 + 72)->f_52 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_27();
}

void Function_27() //Position: 0xBE9 / 3049
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_28(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_28(int iParam0, bool bParam1) //Position: 0xC1B / 3099
{
	int iVar0;
	
	iVar0 = Function_29(iParam0);
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

int Function_29(int iParam0) //Position: 0xC59 / 3161
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC73 / 3187
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xC89 / 3209
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_6667)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_32(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_31(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_31(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_31(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_31(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_31(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF86 / 3974
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_34(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_33(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_33(char* cParam0) //Position: 0xFFB / 4091
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x1035 / 4149
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
		if (Function_37(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_36(uVar0))
		{
			case 0x00000002:
				if (!Function_35(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_35(var uParam0, int iParam1) //Position: 0x10B1 / 4273
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x10C4 / 4292
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

int Function_37(int iParam0) //Position: 0x1165 / 4453
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_38(&bVar1, 2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (bVar1 >= 0)
	{
		bVar1 = (bVar1 && (bVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x11A2 / 4514
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11B8 / 4536
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(iParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(iParam0);
	if (!bVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_96())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", iParam0);
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
			Function_84(iParam0);
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
						switch (Function_15(iParam0))
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
			Function_42(1);
			Function_41(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_40(iParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x1416 / 5142
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x1454 / 5204
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

void Function_42(bool bParam0) //Position: 0x1493 / 5267
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_73();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_38(&Global_99144, 1);
		Function_38(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_43() //Position: 0x14E8 / 5352
{
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_68();
	Function_68();
	Function_51(0);
	Function_51(0);
	Function_48();
	Function_47();
	Function_46();
	Function_45();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_44();
	return;
}

void Function_44() //Position: 0x1533 / 5427
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

void Function_45() //Position: 0x1639 / 5689
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

void Function_46() //Position: 0x166C / 5740
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

void Function_47() //Position: 0x17FF / 6143
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

void Function_48() //Position: 0x19B8 / 6584
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x19C6 / 6598
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(bVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
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

bool Function_50() //Position: 0x1BE3 / 7139
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1BF8 / 7160
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
					iVar2 = ((Function_67((50 + iVar4)) + Function_67((183 + iVar4))) + Function_67((90 + iVar4)));
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
	Function_52(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C9F / 7327
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (&bParam2)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1F3B / 7995
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_58(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_56(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_55(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_54(), &Var9);
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

var Function_54() //Position: 0x2579 / 9593
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2582 / 9602
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2593 / 9619
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_57(char* cParam0) //Position: 0x268A / 9866
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26A5 / 9893
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x270C / 9996
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x271E / 10014
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2730 / 10032
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x2864 / 10340
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2873 / 10355
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x28AC / 10412
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x28E9 / 10473
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A83 / 10883
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

int Function_67(bool bParam0) //Position: 0x2CC7 / 11463
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2D08 / 11528
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
		iVar2 = ((Function_67((50 + iVar3) + 15) + Function_67((183 + iVar3) + 15)) + Function_67((90 + iVar3) + 15));
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
	Function_52(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_69() //Position: 0x2D91 / 11665
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
			iVar2 = ((Function_67((50 + iVar3) + 8) + Function_67((183 + iVar3) + 8)) + Function_67((90 + iVar3) + 8));
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
	Function_52(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x2E28 / 11816
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
		iVar2 = ((Function_67((50 + iVar3)) + Function_67((183 + iVar3))) + Function_67((90 + iVar3)));
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
	Function_52(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_71() //Position: 0x2EA7 / 11943
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_72(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_52(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2EE4 / 12004
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_66(iParam0, bParam1, 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_53(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_73() //Position: 0x30F0 / 12528
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_81(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_81(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_75(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_74(StackVal, Var0))
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
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_74(char* cParam0) //Position: 0x31A7 / 12711
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x31BF / 12735
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &fParam3);
	if (Function_78(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_77(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_77(&Global_99144, 2);
			Function_38(&Global_99144, 1);
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
		Function_77(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_76();
	return StackVal, Function_76();
}

struct<8> Function_76() //Position: 0x32B7 / 12983
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x32C1 / 12993
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x32D2 / 13010
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x32E8 / 13032
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
				fVar2 = Function_80(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_80(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_78(iVar0) && !&bParam1)
	{
		iVar0 = Function_79(&bParam0, 1);
	}
	return iVar0;
}

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x33B4 / 13236
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x33D1 / 13265
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_83(&Global_54076, &Var3);
	if (!Function_82(Global_46760[0]))
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
	if (!Function_82(Global_46760[2]))
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
	if (!Function_82(Global_46760[1]))
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
	if (!Function_82(Global_46796[1]))
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
	if (!Function_82(Global_46796[3]))
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
	if (!Function_82(Global_46796[2]))
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
	if (!Function_82(Global_46796[4]))
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
	if (!Function_82(Global_46816[0]))
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
	if (!Function_82(Global_46816[1]))
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
	if (!Function_82(Global_46816[2]))
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
	if (!Function_82(Global_46838[0]))
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
	if (!Function_82(Global_46850[0]))
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
	if (!Function_82(Global_46850[1]))
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
	if (!Function_82(Global_46850[2]))
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
	if (!Function_82(Global_46866[0]))
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
	if (!Function_82(Global_46866[1]))
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
	if (!Function_82(Global_46866[2]))
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
	if (!Function_82(Global_46894[2]))
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
	if (!Function_82(Global_46894[3]))
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
	if (!Function_82(Global_46894[0]))
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
	if (!Function_82(Global_46914[0]))
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
	if (!Function_82(Global_46926[2]))
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
	if (!Function_82(Global_46926[1]))
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
	if (!Function_82(Global_46926[0]))
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
	if (!Function_82(Global_46838[1]))
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
	if (!Function_82(Global_46894[1]))
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
	Function_77(&Global_99144, 2);
	Function_38(&Global_99144, 1);
	iParam1 = 0;
	if (Function_74(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_82(int iParam0) //Position: 0x3BFD / 15357
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3C38 / 15416
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3C47 / 15431
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(iParam0))
	{
		return;
	}
	switch (Function_17(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_89(12, 1, 0, 0);
				Function_88(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_89(13, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_89(14, 1, 0, 0);
				Function_88(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_89(15, 1, 0, 0);
				Function_88(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_89(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_87(iParam0) == 1)
					{
						iVar0 = Function_86(iParam0);
						if (Function_85(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_88(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_88(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_88(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_88(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_88(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_88(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_88(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_88(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_88(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_88(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_88(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_88(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_88(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_88(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_88(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_88(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_88(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_88(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_88(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_88(4, 19);
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
								Function_89(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_89(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_89(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_86(iParam0) == 0)
			{
				if (Function_87(iParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_85(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_88(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_88(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_88(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_88(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_88(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_88(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_88(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_88(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_87(iParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_89(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_88(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_88(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_89(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_88(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_88(6, 9);
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

bool Function_85(int iParam0) //Position: 0x4124 / 16676
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x413A / 16698
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x4159 / 16729
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4173 / 16755
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x41DD / 16861
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x4405 / 17413
{
	switch (iParam0)
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

void Function_91() //Position: 0x44A3 / 17571
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

void Function_92() //Position: 0x4605 / 17925
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_95(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_95(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_93(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_93(int iParam0, char* cParam1) //Position: 0x4685 / 18053
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x49DC / 18908
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

int Function_95(int iParam0) //Position: 0x4A64 / 19044
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A7E / 19070
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4AA9 / 19113
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4AD7 / 19159
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_113(iParam0);
		Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
		if (Global_21684[iParam17].f_32 != 0.0f || Global_53524.f_192 > Global_21684[iParam17].f_32)
		{
			Global_21684[iParam17].f_32 = Global_53524.f_192;
			cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_53524.f_192, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_67(42) - Global_53524.f_168);
				bVar1 = (Function_67(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_64(49)) - Global_53524.f_176);
				bVar3 = (Function_67(49) - Global_53524.f_180);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_67(355) - Global_53524.f_168);
				bVar5 = Global_53524.f_176;
				bVar6 = Global_53524.f_180;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_21684[iParam17].f_28)
				{
					Global_21684[iParam17].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_112(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_99(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_6667[iParam028] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_24(iParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_53524.f_188 = 0.0f;
	Global_53524.f_192 = 0.0f;
	Global_53524.f_168 = 0;
	Global_53524.f_172 = 0;
	Global_53524.f_176 = 0;
	Global_53524.f_180 = 0;
	return;
}

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D73 / 19827
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
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
	iVar0 = Function_67(3);
	Function_108();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_106(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_35(Global_119936, 4))
			{
				Function_32(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_101(4, Function_105(Global_21369.f_248), 1);
				Function_100(Global_21369.f_244, Global_21369.f_248);
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

void Function_100(int iParam0, int iParam1) //Position: 0x4F47 / 20295
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, true);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, true);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, true);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, false);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_101(int iParam0, char* cParam1) //Position: 0x51B1 / 20913
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
	Function_93(iParam0, &cParam1, 0, 1);
	iVar1 = Function_102();
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

int Function_102() //Position: 0x5341 / 21313
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
	Function_103();
	return 0;
}

void Function_103() //Position: 0x53E2 / 21474
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
		Function_104(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_104(int iParam0) //Position: 0x54A0 / 21664
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

var Function_105(int iParam0) //Position: 0x5506 / 21766
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5595 / 21909
{
	bool bVar0;
	int iVar1;
	
	Function_89(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_107(int iParam0, int iParam1) //Position: 0x5741 / 22337
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

void Function_108() //Position: 0x5786 / 22406
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x579C / 22428
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x57DC / 22492
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x581C / 22556
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x582B / 22571
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_9917[iParam09] + 24)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_9917[iParam09] + 24)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	fParam3 = (fParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (fParam3 <= Global_9917[iParam09][0])
			{
				iVar1 = 3;
			}
			else if (fParam3 <= Global_9917[iParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (iParam4 > (*&Global_9917[iParam09] + 48)[0])
			{
				iVar2 = 3;
			}
			else if (iParam4 > (*&Global_9917[iParam09] + 48)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

int Function_113(int iParam0) //Position: 0x59F3 / 23027
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

var Function_114() //Position: 0x5A88 / 23176
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5AAD / 23213
{
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_99(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_99(25, 1, 0);
			Function_120(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			Function_116(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_120(50, 1, 1);
			Function_99(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_120(5, 1, 1);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_99(75, 1, 0);
			Function_116(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_120(5, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_120(25, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_120(10, 1, 1);
			Function_99(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_99(50, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_99(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_120(20, 1, 1);
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_120(25, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_120(10, 1, 1);
			Function_99(150, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_99(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_116(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_116(100, 1, 0);
			Function_120(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_120(3, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_116(125, 1, 0);
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_120(50, 1, 1);
			Function_99(100, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_120(75, 1, 1);
			Function_99(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_99(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_99(250, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_99(75, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_99(200, 1, 0);
			Function_116(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_99(75, 1, 0);
			Function_116(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_99(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_120(50, 1, 1);
			Function_99(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_120(100, 1, 1);
			Function_99(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_99(200, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_99(300, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_99(500, 1, 0);
			Function_116(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_99(150, 1, 0);
			Function_116(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_116(25, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_99(150, 1, 0);
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_116(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_116(150, 1, 0);
			Function_120(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_116(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F7C / 24444
{
	int iVar0;
	bool bVar1;
	
	if (Function_111(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_96())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_67(1);
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
			Function_106(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_35(Global_119936, 1))
				{
					Function_32(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_119(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_35(Global_119936, 2))
				{
					Function_32(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_89(1, bVar1, 0, 0);
	}
	else
	{
		Function_118(1, (4294967295 * bVar1), 0);
	}
	if (Function_67(1) <= 4294962296)
	{
		Function_52(1, 4294962296, 0);
	}
	else if (Function_67(1) >= 5000)
	{
		Function_52(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_67(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_101(2, Function_117(Global_21369.f_244), 0);
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
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_101(2, Function_117(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_101(2, Function_117(Global_21369.f_244), 1);
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
				Function_101(2, Function_117(Global_21369.f_244), 0);
			}
			break;
	}
	Function_100(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_117(int iParam0) //Position: 0x62A3 / 25251
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x6346 / 25414
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_53(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_119(int iParam0, bool bParam1) //Position: 0x6543 / 25923
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0);
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
	iVar1 = Function_107(iParam0, 4294967295);
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
	iVar1 = Function_102();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x66EE / 26350
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_89(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_67(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_89(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_67(597) + Function_67(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x67C0 / 26560
{
	struct<4> Var0;
	
	if (!Function_30(iParam0))
	{
		return;
	}
	if (Global_6624 && Global_10964 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_167(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_164(Global_46816[0]);
			Function_154(0);
			Function_152(2, 1);
			Function_152(0, 1);
			Function_152(1, 1);
			break;
		
		case 0x00000003:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_164(Global_46816[0]);
			Function_164(Global_46760[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_152(3, 1);
			break;
		
		case 0x00000005:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46816[0]);
			Function_152(39, 1);
			break;
		
		case 0x00000007:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_149())
				{
					if (!Function_148(4))
					{
						Function_138(4, 0, 0, 1, 0);
					}
				}
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_164(Global_46760[0]);
			Function_164(Global_46816[2]);
			Function_137(&(Global_43791[Global_46816[2]]), 32768);
			Function_136(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_46760[0]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(Global_46760[0]);
			Function_164(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_164(Global_46760[1]);
			Function_164(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_164(Global_46838[0]);
			Function_164(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_164(Global_46796[5]);
			Function_164(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_162(21, &bParam2, 4);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_43791[Global_46760[4]]), 256);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_46760[0]);
			Function_164(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_136(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_43791[Global_46838[1]]), 32768);
			Function_164(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_162(12, &bParam2, 4);
			Function_136(&(Global_43791[Global_46838[1]]), 256);
			Function_164(Global_46816[3]);
			Function_164(Global_46866[0]);
			Function_164(Global_46850[0]);
			Function_154(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_152(34, 1);
			Function_152(44, 1);
			Function_152(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_162(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_164(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_164(Global_46866[0]);
			Function_164(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_164(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_164(Global_46850[0]);
			Function_164(Global_46866[0]);
			Function_164(Global_46866[1]);
			Function_164(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_162(23, &bParam2, 3);
			Function_150(23, 1);
			Function_164(Global_46850[0]);
			Function_164(Global_46850[2]);
			Function_137(&(Global_43791[Global_46850[2]]), 32768);
			Function_136(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_162(19, &bParam2, 4);
			Function_164(Global_46850[0]);
			Function_164(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_162(24, &bParam2, 3);
			Function_150(24, 1);
			Function_164(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_164(Global_46850[0]);
			Function_164(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_164(Global_46866[12]);
			Function_164(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_164(Global_46866[12]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_162(25, &bParam2, 10);
			Function_164(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_164(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_162(13, &bParam2, 4);
			Function_164(Global_46866[2]);
			Function_164(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_164(Global_46850[0]);
			Function_154(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_152(57, 1);
			break;
		
		case 0x0000002A:
			Function_162(2, &bParam2, 4);
			Function_164(Global_46914[0]);
			Function_164(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_164(Global_46914[0]);
			Function_164(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_164(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_162(17, &bParam2, 4);
			Function_164(Global_46926[0]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_133(15))
				{
					Function_128(15, 0, 1);
				}
			}
			Function_88(2, 26);
			Function_136(&(Global_43791[Global_46914[1]]), 256);
			Function_154(11);
			Function_164(Global_46914[1]);
			Function_164(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_164(Global_46914[1]);
			Function_164(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_164(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_164(Global_46914[1]);
			Function_122(11);
			Function_154(12);
			Global_26200[1114].f_40 = 0;
			Function_152(56, 1);
			if (!&bParam2)
			{
				if (!Function_148(9))
				{
					Function_138(9, 0, 0, 0, 0);
				}
				if (!Function_148(10))
				{
					Function_138(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_122(int iParam0) //Position: 0x70DB / 28891
{
	var uVar0;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_127(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_127(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), false);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (!DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", 1);
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Global_26200[iParam014].f_40 = 6;
			Function_123(Global_26200[iParam014].f_48, 16, 0, 0);
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", 1);
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_REMOVE(&Global_26200[iParam014] + 104, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7258 / 29272
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal && Global_15863[iVar02] != iParam0 != iParam1)
			{
				Global_15863[iVar02] = 4294967294;
				Global_15863[iVar02].f_4 = 0;
				Global_15863[iVar02].f_8 = 0;
				if (IS_BLIP_VALID(&(Global_16865[iVar0])))
				{
					REMOVE_BLIP(&(Global_16865[iVar0]));
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_125(Function_126(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var1 = Function_125(StackVal);
				if (Function_124(StackVal, StackVal, Var1, Var3))
				{
					Global_15863[iVar02] = 4294967294;
					Global_15863[iVar02].f_4 = 0;
					Global_15863[iVar02].f_8 = 0;
					if (IS_BLIP_VALID(&(Global_16865[iVar0])))
					{
						REMOVE_BLIP(&(Global_16865[iVar0]));
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7363 / 29539
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x738F / 29583
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

var Function_126(vector3 vParam0) //Position: 0x73E6 / 29670
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

void Function_127(var uParam0, int iParam1) //Position: 0x7434 / 29748
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x748F / 29839
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0))
	{
		if (!Function_148(bParam0))
		{
			Function_138(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, 0, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_131(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
	}
	return;
}

void Function_129() //Position: 0x7630 / 30256
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7636 / 30262
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

void Function_131(bool bParam0, int iParam1) //Position: 0x76E5 / 30437
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x773A / 30522
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7750 / 30544
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_134(int iParam0, int iParam1) //Position: 0x77A1 / 30625
{
	int iVar0;
	
	if (!Function_132(iParam0))
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

void Function_135(var uParam0, int iParam1) //Position: 0x77CE / 30670
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x77DF / 30687
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x77F9 / 30713
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x780A / 30730
{
	char* cVar0[32];
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_147(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_148(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_140() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_139(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7966 / 31078
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x79F1 / 31217
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7A1E / 31262
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
			if (Function_145(bParam0, Function_146(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7BCE / 31694
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7C25 / 31781
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7C4A / 31818
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_132(iParam0))
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7CA0 / 31904
{
	int iVar0;
	
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_146(bool bParam0) //Position: 0x7CFF / 31999
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7D0B / 32011
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7D27 / 32039
{
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_134(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x7D79 / 32121
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7DA9 / 32169
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x7E1E / 32286
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7E7B / 32379
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x7EEE / 32494
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7F49 / 32585
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_161(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_161(&Global_26200[iParam014] + 88, 0);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&Global_26200[iParam014] + 104), true);
	}
	if (IS_OBJECT_VALID(&Global_26200[iParam014] + 96))
	{
		if (DECOR_CHECK_EXIST(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_26200[iParam014].f_40)
	{
		case 0x00000002:
			Function_89(468, 1, 0, 0);
			Function_88(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_123(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_129();
			}
			uVar0 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar0))
			{
				DECOR_REMOVE(&uVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			break;
		
		case 0x00000001:
			uVar1 = LOCATE_NAMED_POINT(Global_26200[iParam014], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(&uVar1))
			{
				DECOR_REMOVE(&uVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(&Global_26200[iParam014] + 104))
			{
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", 1);
			}
			Global_26200[iParam014].f_40 = 4;
			Function_139("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_89(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_88(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8214 / 33300
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_147(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_134(bParam0, 2))
	{
		Function_89(456, 1, 0, 0);
		Function_131(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_139(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_145(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_131(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_130(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_129();
			}
		}
		Function_141(bParam0);
		if (StackVal && !Function_14(((((!Function_140() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_140() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_35(Global_119934, 2))
			{
				Function_32(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_157();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_156(3, bParam1);
				break;
			
			case 0x00000005:
				Function_156(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_156(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_156(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_156(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_156(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_88(2, 24);
				break;
			
			case 0x00000003:
				Function_88(2, 25);
				break;
			
			case 0x0000000F:
				Function_88(2, 26);
				break;
			
			case 0x0000000D:
				Function_88(2, 27);
				break;
			
			case 0x0000000E:
				Function_88(2, 28);
				break;
			}
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x84B3 / 33971
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

void Function_157() //Position: 0x8522 / 34082
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_160(Global_42827);
			(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_160(Global_42827);
			*(&Global_42827 + 8) = Function_158(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_158(int iParam0, int iParam1) //Position: 0x85A2 / 34210
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
					if (Function_28(6, 0) || Function_28(12, 0))
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
					if (Function_159(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_28(5, 0))
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
					if (Function_159(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_159(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_28(26, 0))
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
					if (Function_159(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_159(27) && iVar16)
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
					if (Function_159(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_159(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_28(17, 0) && iVar13)
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
					if (Function_159(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_159(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_159(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_159(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_28(8, 0) && iVar17)
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
	if (Function_74(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_74(StackVal, vVar2))
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
	if (!Function_74(StackVal, vVar2))
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

int Function_159(int iParam0) //Position: 0x9205 / 37381
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x921A / 37402
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
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

void Function_161(var uParam0, int iParam1) //Position: 0x9269 / 37481
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x92C1 / 37569
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_163(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_167(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_6624 && &iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0x9334 / 37684
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9348 / 37704
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_166(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_89(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_89(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_89(476, 1, 0, 0);
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
		Function_88(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_88(7, 30);
	}
	if (Function_63(473) <= Function_64(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x9439 / 37945
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_85(iParam0))
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

bool Function_166(var uParam0, int iParam1) //Position: 0x9491 / 38033
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x94AE / 38062
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_50(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_50(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_50(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x9508 / 38152
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x951A / 38170
{
	bool bVar0;
	
	if (Function_14(bParam0, 1) && Function_14(Global_39556, 1))
	{
	}
	bVar0 = (Global_39556 && bParam0);
	Global_39556 = (Global_39556 - bVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_170(struct<185> Param0) //Position: 0x954E / 38222
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (Param0.f_184 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x95B9 / 38329
{
	var uVar0;
	
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
		uVar0 = MAKE_TIME_OF_DAY(iParam0, &uParam1, &iParam2);
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(bool bParam0, int iParam1, bool bParam2) //Position: 0x96A3 / 38563
{
	int iVar0;
	
	Function_174(bParam0);
	Function_8(&iParam1);
	PRINTNL();
	if (StackVal == bParam0)
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
	SET_WEATHER(bParam0, &iParam1);
	Function_173();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
	*(&Global_26182 + 64) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_26182 + 64, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(&iParam1), 0);
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

void Function_173() //Position: 0x9822 / 38946
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x982E / 38958
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

void Function_175() //Position: 0x9874 / 39028
{
	Function_176();
	return;
}

void Function_176() //Position: 0x987D / 39037
{
	Function_177(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_177(int iParam0) //Position: 0x9890 / 39056
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_178(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_178(struct<2>[] Param0, int iParam1) //Position: 0x98B8 / 39096
{
	if (Function_180(&(Param0[iParam12]), 4))
	{
		if (Function_180(&(Param0[iParam12]), 1))
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
			Function_179(&(Param0[iParam12]), 1);
			Function_179(&(Param0[iParam12]), 2);
			Function_179(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_179(struct<13> Param0) //Position: 0x9A03 / 39427
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_180(struct<13> Param0) //Position: 0x9A20 / 39456
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181() //Position: 0x9A3E / 39486
{
	CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_553);
	if (IS_BLIP_VALID(&uLocal_851))
	{
		REMOVE_BLIP(&uLocal_851);
	}
	if (IS_OBJECT_VALID(&bLocal_862))
	{
		DESTROY_OBJECT(&bLocal_862);
	}
	if (IS_OBJECT_VALID(&uLocal_930))
	{
		DESTROY_OBJECT(&uLocal_930);
	}
	return;
}

void Function_182(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9A85 / 39557
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_210());
	SET_IS_MISSION_SCRIPT(0);
	SET_TIME_ACCELERATION(Global_99471);
	RESET_EXCLUSIVE_JOURNAL_ID();
	ABORT_SCRIPTED_CONVERSATION(0);
	AUDIO_CLEAR_MISSION_NAME_FOR_JOURNAL();
	AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	UNK_0xAC72E757(0);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	AUDIO_MISSION_RELEASE();
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	AUDIO_ATTACH_MICROPHONE_TO_ACTOR(0);
	Global_47151[2] = 0;
	if (&bParam6)
	{
		HUD_ENABLE(1);
	}
	Function_212();
	CLEAR_PRINTED_OBJECTIVE();
	Function_209();
	Function_207(0);
	Function_206();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_205();
	Function_204();
	Function_212();
	ENABLE_JOURNAL_REPLAY(1);
	Function_203(1);
	if (bParam0 && !IS_EXITFLAG_SET())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
	}
	else if (&bParam7)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	}
	if (&bParam7)
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			TASK_CLEAR(&Global_54076);
		}
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		ACTOR_END_FORCE_HOLSTER(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		Function_202(&Global_54076);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	}
	if (IS_ACTOR_VALID(&Global_54076))
	{
		SET_PLAYER_ENDLESS_READYMODE(0, 1);
	}
	if (IS_ACTOR_VALID(&Global_54076) && uParam5)
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_199(Global_42825);
	SET_DUST_LEVEL_MODIFIER(0);
	bParam1 = bParam1;
	if (bParam1)
	{
	}
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	DISABLE_VERIFY_SS(1.0f);
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(0);
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	AI_STOP_IGNORING_ACTORS();
	AI_GLOBAL_CLEAR_ALL_DANGER();
	SET_GLOBAL_AGGRESSIVE_CORPSE_RECYCLING(0);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_198();
	Function_197(1178687);
	Function_195(33039);
	Function_194(0x218003f);
	Function_193(4194560);
	Function_192();
	Function_191();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_188(0, 1, 1);
	}
	else
	{
		Function_188(0, 1, 1);
	}
	Function_187();
	STREAMING_RELEASE_MAIN_POI();
	STREAMING_UNLOAD_SCENE();
	STREAMING_ENABLE_BOUNDS(1);
	if ((!bParam0 && !&bParam2) && !IS_GAME_RESETTING())
	{
		if (HUD_IS_FADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_IN(1.0f, 1065353216);
		}
	}
	Function_183();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_183() //Position: 0x9C91 / 40081
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_186() > 3)
		{
			bVar0 *= 2;
		}
		Function_184(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_184(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9CE8 / 40168
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_185(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_185(bool bParam0) //Position: 0x9D38 / 40248
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_186() //Position: 0x9D61 / 40289
{
	return Global_21369.f_248;
}

void Function_187() //Position: 0x9D6C / 40300
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_136(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_188(int iParam0, bool bParam1, int iParam2) //Position: 0x9D96 / 40342
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_85(Global_43789))
		{
			Function_137(&(Global_43791[Global_43789]), 131072);
			Function_136(&(Global_43791[Global_43789]), 2097152);
			Function_189(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_136(&(Global_43791[iVar0]), 2097155);
					Function_137(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (iParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_189(int iParam0) //Position: 0x9EA2 / 40610
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_190())
			{
				return;
			}
		}
		if (!Function_166(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_190() //Position: 0x9F21 / 40737
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_166(&(Global_43791[iVar0]), 4) || Function_166(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_191() //Position: 0x9F8A / 40842
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47080)
	{
		Global_47080[iVar0] = 1;
		iVar0++;
	}
	Global_47147 = 0;
	return;
}

void Function_192() //Position: 0x9FB0 / 40880
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_47006)
	{
		Global_47006[iVar0] = 1;
		iVar0++;
	}
	Global_47146 = 0;
	return;
}

void Function_193(int iParam0) //Position: 0x9FD6 / 40918
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_194(int iParam0) //Position: 0x9FF3 / 40947
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_195(int iParam0) //Position: 0xA006 / 40966
{
	Function_196(&Global_43580, iParam0);
	return;
}

void Function_196(var uParam0, int iParam1) //Position: 0xA014 / 40980
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_197(bool bParam0) //Position: 0xA033 / 41011
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_198() //Position: 0xA060 / 41056
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

void Function_199(int iParam0) //Position: 0xA0D8 / 41176
{
	int iVar0;
	int iVar1;
	
	if (!Function_132(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_200(78, 1, 1);
		if (!Function_35(Global_119935, 64))
		{
			Function_32(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_200(bool bParam0, bool bParam1, int iParam2) //Position: 0xA20E / 41486
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_201(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_201(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_201(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_201(bool bParam0) //Position: 0xA25C / 41564
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

void Function_202(int iParam0) //Position: 0xA350 / 41808
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&iParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26170);
		}
	}
	return;
}

void Function_203(bool bParam0) //Position: 0xA3D3 / 41939
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

void Function_204() //Position: 0xA44A / 42058
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "ResetMenuDelay"))
		{
			DECOR_REMOVE(&Global_54076, "ResetMenuDelay");
		}
	}
	return;
}

void Function_205() //Position: 0xA48E / 42126
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			DECOR_REMOVE(&Global_54076, "missionFailRmd");
		}
	}
	return;
}

void Function_206() //Position: 0xA4D2 / 42194
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_207(int iParam0) //Position: 0xA4E8 / 42216
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_208())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_208() //Position: 0xA528 / 42280
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

void Function_209() //Position: 0xA54D / 42317
{
	Global_15862 = 0.0f;
	return;
}

int Function_210() //Position: 0xA557 / 42327
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_211() //Position: 0xA574 / 42356
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_212() //Position: 0xA57D / 42365
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_213(int iParam0) //Position: 0xA5A8 / 42408
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

int Function_214(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xA610 / 42512
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: **WARNING** you are releasing COMPANION_DUMMY!");
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_RELEASE_ACTOR: CompanionsList out of bounds.");
		return 0;
	}
	if (Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 0;
		STREAMING_EVICT_ACTOR(&Global_15402[iParam014] + 16, 4294967295);
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		if (iParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
		{
			ACTOR_HOLSTER_WEAPON(&Global_15402[iParam014] + 8, 1);
		}
		if (&bParam1)
		{
			RESET_ANIM_SET_FOR_ACTOR(&Global_15402[iParam014] + 8, 1);
			TASK_CLEAR(&Global_15402[iParam014] + 8);
			MEMORY_CLEAR_ALL(&Global_15402[iParam014] + 8);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&Global_15402[iParam014] + 8, 0);
		}
		Function_216(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_215(&Global_15402[iParam014] + 8);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			MEMORY_CLEAR_RIDING_PREFERENCE(&Global_15402[iParam014] + 8);
			DEREFERENCE_ACTOR(&Global_15402[iParam014] + 8);
			if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
			{
				DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
			}
			if (&bParam2)
			{
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", 1);
			}
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
			uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
			bVar1 = GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 0);
		}
		else
		{
			if (&bParam1)
			{
				DESTROY_ACTOR(&Global_15402[iParam014] + 8);
			}
			else if (&bParam3)
			{
				RELEASE_ACTOR(&Global_15402[iParam014] + 8);
				if (DECOR_CHECK_EXIST(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS"))
				{
					DECOR_REMOVE(&Global_15402[iParam014] + 8, "bACTOR_AVOID_SMALLBRAINS");
				}
			}
			bVar1 = true;
		}
	}
	(&Global_15402[iParam014] + 8) = "";
	return bVar1;
}

void Function_215(int iParam0) //Position: 0xA952 / 43346
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

void Function_216(int iParam0) //Position: 0xA985 / 43397
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_217(bool bParam0) //Position: 0xA99C / 43420
{
	if (bParam0)
	{
		Function_77(&Global_21369 + 72 + 32, 4);
	}
	else
	{
		Function_38(&Global_21369 + 72 + 32, 4);
	}
	return;
}

void Function_218() //Position: 0xA9C0 / 43456
{
	var uVar0[7];
	int iVar8;
	
	if (Function_262())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Wolf Hunt";
		uVar0[4] = "Stage 03 - Wolf Den";
		uVar0[5] = "Stage 04 - Ride Home";
		uVar0[6] = "Last Stage";
		iVar8 = Function_248(&uLocal_524, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_247(&iVar8, &bLocal_544, &iLocal_545, &iLocal_532))
		{
			Function_240();
			Function_239();
		}
		if (iVar8 == 0)
		{
			Function_240();
			Function_239();
			Function_238(&bLocal_579, 8);
		}
		else if (iVar8 == 1)
		{
			Function_240();
			Function_239();
			Function_233(bLocal_544);
			Function_229(StackVal, 5, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
		}
		else if (iVar8 == 2)
		{
			Function_240();
			Function_239();
			Function_224(&bLocal_581, 4);
		}
		else if (iVar8 == 3)
		{
			Function_222();
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_220(&iLocal_555);
			bLocal_544 = true;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar8 == 4)
		{
			Function_222();
			Function_219(Local_464, 3);
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_220(&iLocal_555);
			bLocal_544 = 2;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar8 == 5)
		{
			Function_222();
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_220(&iLocal_555);
			bLocal_544 = 3;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
		else if (iVar8 == 6)
		{
			Function_222();
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_220(&iLocal_555);
			bLocal_544 = 101;
			iLocal_545 = 0;
			iLocal_532 = 1000;
		}
	}
	return;
}

void Function_219(int iParam0, int iParam1) //Position: 0xABCD / 43981
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

void Function_220(int iParam0) //Position: 0xABE8 / 44008
{
	Function_221(&iParam0, 0.0f);
	return;
}

void Function_221(vector3 vParam0) //Position: 0xABF5 / 44021
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_222() //Position: 0xAC1A / 44058
{
	CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
	if (IS_BLIP_VALID(&uLocal_851))
	{
		REMOVE_BLIP(&uLocal_851);
	}
	if (IS_OBJECT_VALID(&bLocal_862))
	{
		DESTROY_OBJECT(&bLocal_862);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 184))
	{
		Function_223(&iLocal_4 + 184);
		DESTROY_OBJECT(&iLocal_4 + 184);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 280))
	{
		Function_223(&iLocal_4 + 280);
		DESTROY_OBJECT(&iLocal_4 + 280);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 392))
	{
		Function_223(&iLocal_4 + 392);
		DESTROY_OBJECT(&iLocal_4 + 392);
	}
	if (IS_OBJECT_VALID(&uLocal_930))
	{
		DESTROY_OBJECT(&uLocal_930);
	}
	return;
}

void Function_223(int iParam0) //Position: 0xACAE / 44206
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
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_224(bool bParam0, int iParam1) //Position: 0xACFC / 44284
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_225(&iParam1);
	bParam0 = 1;
	return;
}

void Function_225(int iParam0) //Position: 0xAD21 / 44321
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_228("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_227(2) || Function_227(8)) || Function_227(9)) || Function_227(10))
			{
				if (iVar0 + 1 != 3)
				{
					iVar0++;
					SET_EXP_MODE_PROMPT_STATE(iVar0);
				}
			}
			else
			{
				SET_EXP_MODE_PROMPT_STATE(0);
			}
		}
	}
	else if (iVar0 != 3)
	{
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	if (iParam0 == 2)
	{
		Function_228("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_228("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_228("");
	}
	else if (iParam0 == 8)
	{
		Function_226();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_226();
	}
	return;
}

void Function_226() //Position: 0xAE18 / 44568
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_227(int iParam0) //Position: 0xAE24 / 44580
{
	int iVar0;
	
	if (!Function_30(iParam0))
	{
		return 0;
	}
	iVar0 = Function_29(iParam0);
	if (!Function_20(Function_29(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_228(char* cParam0) //Position: 0xAE5A / 44634
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_229(int iParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xAEC6 / 44742
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_230(StackVal, Param4, uParam3, &iParam6);
		Function_225(iParam0);
		iParam1 = 1;
		iParam2 = 100;
	}
}

void Function_230(struct<2> Param0, var uParam2, var uParam3) //Position: 0xAF07 / 44807
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_232(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_231(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_231(int iParam0) //Position: 0xAF89 / 44937
{
	if (!Function_85(iParam0))
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

var Function_232(struct<2> Param0, bool bParam2) //Position: 0xB437 / 46135
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

struct<8> Function_233(int iParam0) //Position: 0xB4A3 / 46243
{
	Function_234(iParam0 + 1);
	return StackVal, Function_234(iParam0 + 1);
}

struct<8> Function_234(bool bParam0) //Position: 0xB4B0 / 46256
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_235(&iLocal_4 + 768[0]);
			return StackVal, Function_235(&iLocal_4 + 768[0]);
			break;
		
		case 0x00000001:
			Function_235(&iLocal_4 + 848[0]);
			return StackVal, Function_235(&iLocal_4 + 848[0]);
			break;
		
		case 0x00000002:
			Function_235(&iLocal_4 + 904[0]);
			return StackVal, Function_235(&iLocal_4 + 904[0]);
			break;
		
		case 0x00000003:
			Function_235(&iLocal_4 + 960[0]);
			return StackVal, Function_235(&iLocal_4 + 960[0]);
			break;
		
		default:
			Function_235(&iLocal_4 + 1016[0]);
			return StackVal, Function_235(&iLocal_4 + 1016[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_235(&iLocal_4 + 768[0]);
	return StackVal, Function_235(&iLocal_4 + 768[0]);
}

struct<8> Function_235(bool bParam0) //Position: 0xB595 / 46485
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_236(int iParam0) //Position: 0xB5BE / 46526
{
	return Function_237(iParam0 + 1);
}

int Function_237(bool bParam0) //Position: 0xB5CB / 46539
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 768[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 848[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 904[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 960[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 1016[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 768[0]);
}

void Function_238(bool bParam0, int iParam1) //Position: 0xB6B0 / 46768
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_225(&iParam1);
	bParam0 = 1;
	return;
}

void Function_239() //Position: 0xB6D5 / 46805
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_240() //Position: 0xB6EA / 46826
{
	Function_242();
	Function_241(10, 3);
	return;
}

void Function_241(int iParam0, int iParam1) //Position: 0xB6F9 / 46841
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

void Function_242() //Position: 0xB846 / 47174
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_246())
	{
		Function_245(10, 3);
	}
	else
	{
		Function_243();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_243() //Position: 0xB891 / 47249
{
	Function_244(25, 2);
	return;
}

void Function_244(int iParam0, int iParam1) //Position: 0xB89D / 47261
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

void Function_245(int iParam0, int iParam1) //Position: 0xBAC9 / 47817
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

bool Function_246() //Position: 0xBC16 / 48150
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
				if (!Function_14(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_247(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xBC7E / 48254
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_240();
			Function_239();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			uParam1++;
			uParam2 = 0;
			uParam3 = 1000;
			if (!ARE_USE_CONTEXTS_ENABLED())
			{
				ENABLE_USE_CONTEXTS(1);
			}
			if (!IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
			}
		}
		return 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_0))
	{
		uParam0 = 0;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_1))
	{
		Function_228("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_248(struct<17> Param0) //Position: 0xBD2D / 48429
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_261(&Var12, &Var0);
	uVar15 = Function_260(uParam1, &Var12);
	Function_259(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_258(&Param0, uVar15);
	Function_256(StackVal, &Param0, Var12.f_12);
	Function_254(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_253(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_250(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_249(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_249(int iParam0, int iParam1, int iParam2) //Position: 0xBE21 / 48673
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

bool Function_250(struct<17> Param0) //Position: 0xBE81 / 48769
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
				Function_252(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					*(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_252(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_249(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_251(Param1.f_64);
	}
	else
	{
		Function_251(Param1.f_64);
	}
	return 0;
}

void Function_251(bool bParam0) //Position: 0xC015 / 49173
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

void Function_252(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC053 / 49235
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

var Function_253(int iParam0, struct<21> Param1) //Position: 0xC109 / 49417
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_254(vector3 vParam0) //Position: 0xC130 / 49456
{
	switch (Function_255())
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

int Function_255() //Position: 0xC1DC / 49628
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

void Function_256(vector3 vParam0) //Position: 0xC218 / 49688
{
	switch (Function_257(&vParam0))
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

int Function_257(bool bParam0) //Position: 0xC2C1 / 49857
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_77(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_77(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_258(struct<21> Param0) //Position: 0xC3E1 / 50145
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

void Function_259(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xC59B / 50587
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

var Function_260(int iParam0, struct<13> Param1) //Position: 0xC637 / 50743
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_261(struct<17> Param0) //Position: 0xC653 / 50771
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

bool Function_262() //Position: 0xC6AD / 50861
{
	return Global_47307;
}

bool Function_263() //Position: 0xC6B6 / 50870
{
	if (IS_EXITFLAG_SET())
	{
		Function_233(bLocal_544);
		Function_229(StackVal, 4, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
		return 0;
	}
	Function_530(StackVal, StackVal, StackVal, StackVal, StackVal, Local_464, bLocal_544, iLocal_545, &bLocal_581, &bLocal_579, &bLocal_580);
	if (bLocal_544 == 99 && bLocal_544 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_233(bLocal_544);
			Function_229(StackVal, 1, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
			return 1;
		}
		if (Function_510(&Local_638, &uLocal_584, &uLocal_820, &uLocal_547, iLocal_583))
		{
			if (Function_508(&uLocal_820))
			{
				Function_233(bLocal_544);
				Function_229(StackVal, 5, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
				return 1;
			}
		}
		if (Global_6646 || Global_6647)
		{
			Function_233(bLocal_544);
			Function_229(StackVal, 2, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
			return 1;
		}
		if (Function_507(2048))
		{
			Function_233(bLocal_544);
			Function_229(StackVal, 3, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
			return 1;
		}
		if (iLocal_853)
		{
			Function_228("home02_son02_fail_shoot");
			Function_233(bLocal_544);
			Function_229(StackVal, 5, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
			return 1;
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (IS_ACTOR_VALID(&bLocal_553))
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_553)
				{
					Function_506(&bLocal_551, &bLocal_549);
				}
			}
			else
			{
				Function_506(&bLocal_551, &bLocal_549);
			}
		}
		Function_505();
	}
	switch (bLocal_544)
	{
		case 0x00000063:
			Function_486();
			break;
		
		case 0x00000000:
			Function_482();
			break;
		
		case 0x00000001:
			Function_462();
			break;
		
		case 0x00000002:
			Function_418();
			break;
		
		case 0x00000003:
			Function_350();
			break;
		
		case 0x00000065:
			Function_266();
			break;
		
		case 0x00000064:
			if (Function_265(&bLocal_580))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_264(&bLocal_544, &iLocal_545, &iLocal_532))
			{
				return 0;
			}
			break;
	}
	if (bLocal_579)
	{
		Function_238(&bLocal_579, 8);
		return 0;
	}
	if (bLocal_580 && bLocal_544 == 100)
	{
		Function_233(bLocal_544);
		Function_229(StackVal, 5, &bLocal_580, &bLocal_544, Function_236(bLocal_544), Function_233(bLocal_544), 0);
	}
	if (bLocal_581)
	{
		Function_224(&bLocal_581, 4);
		return 0;
	}
	return 1;
}

bool Function_264(var uParam0, var uParam1, int iParam2) //Position: 0xC8DA / 51418
{
	if (uParam0 <= 98)
	{
		uParam0++;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else if (uParam0 == 98)
	{
		uParam0 = 101;
		uParam1 = 0;
		iParam2 = 1000;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_265(int iParam0) //Position: 0xC923 / 51491
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_266() //Position: 0xC937 / 51511
{
	Function_346();
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_342(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			iLocal_839 = 0;
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_551, true);
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
				MEMORY_PREFER_RIDING(&bLocal_549, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_549, true);
			}
			if (IS_ACTOR_VALID(&bLocal_845))
			{
				TASK_STAND_STILL(&bLocal_845, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_845, true);
			}
			if (IS_ACTOR_VALID(&bLocal_847))
			{
				TASK_STAND_STILL(&bLocal_847, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_847, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				bLocal_546 = Global_46914[1];
				if (!Function_337(bLocal_546))
				{
					Function_336(&Local_464);
				}
				Function_335(&Global_54076, &iLocal_4 + 1016[0], 1, 1, 1);
				Function_220(&iLocal_555);
				iLocal_545 = 1;
			}
			else
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_337(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_334())
			{
				Function_220(&iLocal_555);
				iLocal_545 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_270("$/cutscene/son_02_end/son_02_end", &iLocal_532, &Local_464, &bLocal_544, 75475, 74997, 73896, 73470, 73188, 55244, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_220(&iLocal_555);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_267(&iLocal_555) < 1.0f)
			{
				if (HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						ADVANCE_TIME_HOURS(2.0f);
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "default_character_Main/Default/DefaultGait/Idles/StandIdle/Sometimes/CanPlayHatIdle/StreamedHatIdle");
						HUD_FADE_IN(1.0f, 1065353216);
					}
				}
				else if (!HUD_IS_FADING())
				{
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					bLocal_579 = true;
				}
			}
			break;
	}
	return;
}

float Function_267(vector3 vParam0) //Position: 0xCBBE / 52158
{
	if (Function_269(&vParam0))
	{
		if (Function_268(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_268(int iParam0) //Position: 0xCC8B / 52363
{
	return Function_14(iParam0, 2);
}

bool Function_269(float fParam0) //Position: 0xCC99 / 52377
{
	return Function_14(fParam0, 1);
}

bool Function_270(int iParam0, int iParam1, struct<41> Param2) //Position: 0xCCA7 / 52391
{
	if (!&bParam15)
	{
		Function_280(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_279(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&iParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_220(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_278())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_277(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_220(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else
				{
					if (!HUD_IS_FADED() && !HUD_IS_FADING())
					{
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_277(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_267(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_267(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
				{
					UI_ENTER("LoadingScreen");
					DECOR_SET_FLOAT(&Global_54076, "globalcutloadscreen", GET_CURRENT_GAME_TIME());
				}
			}
			if (STREAMING_IS_WORLD_LOADED() || !HUD_IS_FADED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					Call_Loc(&iParam5);
					if (StackVal)
					{
						Function_275(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_277(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_220(&iParam1 + 4);
						iParam1 = 1004;
					}
				}
			}
			else if (HUD_IS_FADED())
			{
			}
			break;
		
		case 0x000003EC:
			Call_Loc(&iParam6);
			if (!StackVal)
			{
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&Global_54076, "globalcutloadscreen")) < 1.0f)
				{
					UI_EXIT("LoadingScreen");
					if (UI_ISACTIVE("FadeToBlack"))
					{
						UI_POP("FadeToBlack");
						Function_274(1.0f);
					}
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iParam1 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				Call_Loc(&iParam7);
				if (StackVal)
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					if (&bParam16)
					{
						Function_272();
						if (!IS_OBJECT_VALID(&iParam1 + 24))
						{
							HUD_ENABLE(1);
						}
						else
						{
							CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(1);
						}
					}
				}
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				Call_Loc(&iParam8);
				if (StackVal)
				{
					Function_271(1, 1);
					if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
					{
						DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
					}
					if (IS_VOLUME_VALID(&iParam1 + 32))
					{
						if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iParam1 + 32))
						{
							REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iParam1 + 32);
						}
						DESTROY_VOLUME(&iParam1 + 32);
					}
					if (IS_LAYOUTREF_VALID(&Global_10996))
					{
						if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
						{
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
							}
							DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
						}
					}
					iParam1 = 1000;
					return 1;
				}
			}
			break;
		
		case 0x00000451:
			if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
			{
				UI_EXIT("LoadingScreen");
				DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
			}
			if (!HUD_IS_FADING())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				Call_Loc(&iParam9);
				if (StackVal)
				{
					Call_Loc(&iParam7);
					if (StackVal)
					{
						Global_99147 = 0;
						iParam1 = 1104;
					}
				}
			}
			break;
		
		case 0x00000452:
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_279(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_271(var uParam0, bool bParam1) //Position: 0xD309 / 54025
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
		Function_198();
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

void Function_272() //Position: 0xD3D8 / 54232
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_273();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_273() //Position: 0xD41D / 54301
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_274(bool bParam0) //Position: 0xD42F / 54319
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

void Function_275(var uParam0, int iParam1) //Position: 0xD44C / 54348
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&iParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_276(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_276(int iParam0) //Position: 0xD4DE / 54494
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0) == &iParam0)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

int Function_277(bool bParam0) //Position: 0xD50F / 54543
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (bParam0)
				{
					if (!DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
					{
						REFERENCE_ACTOR(&uVar1);
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", 1);
					}
					if (!IS_ACTOR_ALIVE(GET_MOST_RECENT_MOUNT(&uVar1)))
					{
						SET_MOST_RECENT_MOUNT(&uVar1, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar1, "refdbycutscene"))
				{
					DEREFERENCE_ACTOR(&uVar1);
					DECOR_REMOVE(&uVar1, "refdbycutscene");
				}
			}
		}
		bVar0++;
	}
	return 1;
}

bool Function_278() //Position: 0xD5D2 / 54738
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_ALIVE(&uVar1))
			{
				return 0;
			}
		}
		return 0;
		bVar0++;
	}
	return 1;
}

bool Function_279(struct<37> Param0) //Position: 0xD60F / 54799
{
	return Param0.f_36;
}

void Function_280(var uParam0, int iParam1) //Position: 0xD61A / 54810
{
	Function_281(&uParam0, &iParam1, 0);
	return;
}

void Function_281(var uParam0, bool bParam1, bool bParam2) //Position: 0xD62A / 54826
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return;
	}
	if (Global_98250 && DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "forcecutsceneskip"))
	{
		DECOR_REMOVE(GET_PLAYER_ACTOR(0), "forcecutsceneskip");
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
			Function_282(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		uParam0 = 1105;
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return;
		}
	}
	if (HUD_IS_FADING())
	{
		return;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				if (((((((uParam0 == 1000 && uParam0 == 1001) && uParam0 == 1002) && uParam0 == 1003) && uParam0 == 1103) && uParam0 == 1104) && uParam0 == 1105) && uParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_282(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_89(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_282(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD7A2 / 55202
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &iParam5);
		}
	}
}

int Function_283() //Position: 0xD7CC / 55244
{
	switch (bLocal_544)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				if (Function_293())
				{
					Function_290();
					Function_335(&Global_54076, &iLocal_4 + 768[0], 0, 0, 0);
					Function_335(&bLocal_549, &iLocal_4 + 768[1], 0, 0, 0);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else if (Function_284())
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_GRINGO_VALID(&(uLocal_932[0])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_932[0])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_551, &(uLocal_932[0]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_551, true);
					}
					else
					{
						Function_335(&bLocal_551, &iLocal_4 + 768[2], 1, 1, 1);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_553))
				{
					if (IS_GRINGO_VALID(&(uLocal_932[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_553, GET_OBJECT_FROM_GRINGO(&(uLocal_932[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_553, &(uLocal_932[1]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_553, true);
					}
					else
					{
						Function_335(&bLocal_553, &iLocal_4 + 768[3], 1, 1, 1);
					}
				}
				return 1;
			}
			break;
		
		case 0x00000065:
			Function_335(&Global_54076, &iLocal_4 + 1016[0], 1, 1, 1);
			Function_335(&bLocal_549, &iLocal_4 + 1016[2], 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

bool Function_284() //Position: 0xD95E / 55646
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 184))
	{
		Function_289();
		if (SQUAD_IS_VALID(&iLocal_4 + 184))
		{
			Function_288(&iLocal_4 + 184, 0);
			Function_287(&iLocal_4 + 184, 3);
			Function_286(&iLocal_4 + 184, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				bLocal_553 = &iLocal_4 + 160[02];
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_553);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_553);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_553, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 184, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_843))
	{
		Function_335(&bLocal_843, &iLocal_4 + 768[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_843))
		{
			SET_ACTOR_FACTION(&bLocal_843, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_843, false);
			Function_285(&bLocal_843, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_843, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_843, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_843, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_843, 1);
			DECOR_SET_BOOL(&bLocal_843, "Frank", 1);
			TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_843, true);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_843))
	{
		return 1;
	}
	return 0;
}

void Function_285(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xDA88 / 55944
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&bParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&bParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&bParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&bParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&bParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&bParam0, &iParam4);
	}
}

void Function_286(var uParam0, int iParam1, int iParam2, int iParam3) //Position: 0xDAD2 / 56018
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		Function_285(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), &iParam1, &iParam2, &iParam3, 1, 0, 1);
		bVar0++;
	}
}

void Function_287(var uParam0, bool bParam1) //Position: 0xDB0D / 56077
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				ACCESSORIZE_HORSE(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_288(var uParam0, bool bParam1) //Position: 0xDB55 / 56149
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

void Function_289() //Position: 0xDB9C / 56220
{
	*(&iLocal_4 + 184) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Horse01"));
	*(&iLocal_4 + 160[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_01_01", 981, Vector(-77,75027f, 116,8612f, 1417,455f), Vector(0.0f, 239,8608f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 160[02], &iLocal_4 + 184);
	return;
}

struct<8> Function_290() //Position: 0xDC01 / 56321
{
	var uVar0;
	
	Function_292(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("home02_son02_layout");
	*(&iLocal_4 + 504) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 464[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-85,33762f, 116,9092f, 1399,748f), Vector(0.0f, 0.0f, 0.0f), Vector(20,0378f, 15,90599f, 31,62923f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 504, &iLocal_4 + 464[0]);
	*(&iLocal_4 + 464[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 504, &iLocal_4 + 464[1]);
	*(&iLocal_4 + 464[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 504, &iLocal_4 + 464[2]);
	*(&iLocal_4 + 464[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-2178,029f, 16,44929f, 2611,982f), Vector(0.0f, 0.0f, 0.0f), Vector(6.0f, 6.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 504, &iLocal_4 + 464[3]);
	*(&iLocal_4 + 576) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary01_set");
	*(&iLocal_4 + 512[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_01", 2,802597E-45f, Vector(-854,4728f, 191,0073f, 1220,19f), Vector(0.0f, 16,64638f, 0.0f), Vector(500.0f, 150.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 512[0]);
	*(&iLocal_4 + 512[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_02", 2,802597E-45f, Vector(-662,2866f, 191,0073f, 1948,24f), Vector(0.0f, 16,64638f, 0.0f), Vector(500.0f, 150.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 512[1]);
	*(&iLocal_4 + 512[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_03", 2,802597E-45f, Vector(-536,0001f, 169,8867f, 1520f), Vector(0.0f, -75,70767f, 0.0f), Vector(900.0f, 150.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 512[2]);
	*(&iLocal_4 + 512[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_04", 2,802597E-45f, Vector(-811,2886f, 187,3396f, 1861,414f), Vector(0.0f, -71,29336f, 0.0f), Vector(250.0f, 150.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 512[3]);
	*(&iLocal_4 + 512[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_05", 2,802597E-45f, Vector(-851,8507f, 187,3396f, 1731,188f), Vector(0.0f, -75,08729f, 0.0f), Vector(100.0f, 150.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 512[4]);
	*(&iLocal_4 + 512[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_06", 2,802597E-45f, Vector(-930,2598f, 187,3396f, 1604,158f), Vector(0.0f, -52,87895f, 0.0f), Vector(250.0f, 150.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 512[5]);
	*(&iLocal_4 + 512[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_07", 2,802597E-45f, Vector(-974,0422f, 187,3396f, 1424,598f), Vector(0.0f, -106,8301f, 0.0f), Vector(500.0f, 150.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 576, &iLocal_4 + 512[6]);
	*(&iLocal_4 + 584) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective01", 2,802597E-45f, Vector(-80.0f, 116,8943f, 1409,173f), Vector(0.0f, -95,13693f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	*(&iLocal_4 + 592) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict01", 4,203895E-45f, Vector(-659,8f, 175,1f, 1672.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 600) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict02", 4,203895E-45f, Vector(-912.0f, 186,0702f, 1491,999f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 608) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict03", 4,203895E-45f, Vector(-600,923f, 177,3287f, 1831,38f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 616) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict04", 4,203895E-45f, Vector(-856.0f, 187,1995f, 1303,999f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 624) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict06", 4,203895E-45f, Vector(-763,6307f, 144,3996f, 1816,154f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 632) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_restrict07", 4,203895E-45f, Vector(-568.0f, 156,8f, 1276.0f), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 50.0f, 20.0f));
	*(&iLocal_4 + 640) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent01a", 2,802597E-45f, Vector(-273,2569f, 129,0196f, 1393,485f), Vector(0.0f, -78,56577f, 0.0f), Vector(39,64245f, 30.0f, 38,99609f));
	*(&iLocal_4 + 648) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent01b", 2,802597E-45f, Vector(-420,9789f, 143,5374f, 1311,1f), Vector(0.0f, 58,5927f, 0.0f), Vector(46,77365f, 46,32108f, 45,86789f));
	*(&iLocal_4 + 656) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent01c", 2,802597E-45f, Vector(-663,7518f, 165,8754f, 1265,201f), Vector(0.0f, -8,594595f, 0.0f), Vector(73,36561f, 47,86254f, 65,07625f));
	*(&iLocal_4 + 664) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent02a", 2,802597E-45f, Vector(-732.0f, 175,7754f, 1432f), Vector(0.0f, -12,9296f, 0.0f), Vector(30.0f, 30.0f, 20.0f));
	*(&iLocal_4 + 672) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent02b", 2,802597E-45f, Vector(-700,4442f, 186,4009f, 1584,819f), Vector(0.0f, -1,840937f, 0.0f), Vector(35,39049f, 30.0f, 41,92284f));
	*(&iLocal_4 + 680) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent03a", 2,802597E-45f, Vector(-769,7068f, 144,4473f, 1798,349f), Vector(0.0f, 6,912414f, 0.0f), Vector(31,63766f, 73,41389f, 88,43046f));
	*(&iLocal_4 + 688) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent03b", 2,802597E-45f, Vector(-814,4131f, 174,2658f, 1636,536f), Vector(0.0f, 20,8294f, 0.0f), Vector(41,36372f, 60,13356f, 27,39386f));
	*(&iLocal_4 + 696) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent03c", 2,802597E-45f, Vector(-876,1072f, 186,136f, 1491,164f), Vector(0.0f, -16,62619f, 0.0f), Vector(36,39529f, 30.0f, 30.0f));
	*(&iLocal_4 + 704) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent04a", 2,802597E-45f, Vector(-759,8919f, 172,7957f, 1476,262f), Vector(0.0f, -27,73153f, 0.0f), Vector(42,66057f, 30.0f, 30.0f));
	*(&iLocal_4 + 712) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent04b", 2,802597E-45f, Vector(-663,9115f, 181,2283f, 1639,288f), Vector(0.0f, -76,25941f, 0.0f), Vector(39,58846f, 30.0f, 27,56261f));
	*(&iLocal_4 + 720) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_scent04c", 2,802597E-45f, Vector(-676,8344f, 173,007f, 1801,941f), Vector(0.0f, -31,52727f, 0.0f), Vector(20.0f, 30.0f, 30.0f));
	*(&iLocal_4 + 728) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_dog_wander01", 2,802597E-45f, Vector(-73,11471f, 116,8612f, 1412,084f), Vector(0.0f, -27,63333f, 0.0f), Vector(1,5f, 3.0f, 3.0f));
	*(&iLocal_4 + 736) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseRestrictVol", 2,802597E-45f, Vector(-76,76527f, 116,8612f, 1418,719f), Vector(0.0f, 1,801902f, 0.0f), Vector(8,316153f, 21,97295f, 8,834089f));
	*(&iLocal_4 + 744) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HomeVolume", 2,802597E-45f, Vector(-98,76239f, 116,8612f, 1421,283f), Vector(0.0f, 1,801902f, 0.0f), Vector(298,1205f, 96,79464f, 258,7495f));
	*(&iLocal_4 + 752) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HomeVolume1", 2,802597E-45f, Vector(-66,13993f, 116,8612f, 1284,599f), Vector(0.0f, 21,70756f, 0.0f), Vector(216,1188f, 96,79464f, 100,835f));
	*(&iLocal_4 + 760) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 768[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-96,32269f, 117,2182f, 1405,297f), Vector(0.0f, -121,324f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[0], &iLocal_4 + 760);
	*(&iLocal_4 + 768[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart01", Vector(-95,45261f, 117,0843f, 1404,241f), Vector(0.0f, -129,4202f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[1], &iLocal_4 + 760);
	*(&iLocal_4 + 768[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart01", Vector(-78,44617f, 116,8612f, 1419,268f), Vector(0.0f, -469,0598f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[2], &iLocal_4 + 760);
	*(&iLocal_4 + 768[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart01", Vector(-77,75027f, 116,8612f, 1417,455f), Vector(0.0f, 247,0944f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[3], &iLocal_4 + 760);
	*(&iLocal_4 + 768[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DogStart01", Vector(-85,84542f, 117,2746f, 1405,845f), Vector(0.0f, -293,4656f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[4], &iLocal_4 + 760);
	*(&iLocal_4 + 768[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "UncleStart01", Vector(-60f, 117,4718f, 1364f), Vector(0.0f, -46,25925f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[5], &iLocal_4 + 760);
	*(&iLocal_4 + 768[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WifeStart01", Vector(-100.0f, 118,8691f, 1348f), Vector(0.0f, -46,25925f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[6], &iLocal_4 + 760);
	*(&iLocal_4 + 768[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionWait01", Vector(-66,75728f, 116,8612f, 1410,757f), Vector(0.0f, -129,4202f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 768[7], &iLocal_4 + 760);
	*(&iLocal_4 + 840) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 848[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(-632,0001f, 165,647f, 1264f), Vector(0.0f, 91,04778f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 848[0], &iLocal_4 + 840);
	*(&iLocal_4 + 848[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart02", Vector(-300f, 131,5137f, 1400f), Vector(0.0f, -17,17521f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 848[1], &iLocal_4 + 840);
	*(&iLocal_4 + 848[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart02", Vector(-628,0001f, 165,647f, 1266,171f), Vector(0.0f, -267,9607f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 848[2], &iLocal_4 + 840);
	*(&iLocal_4 + 848[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart02", Vector(-624,0001f, 165,647f, 1264f), Vector(0.0f, 89,05537f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 848[3], &iLocal_4 + 840);
	*(&iLocal_4 + 848[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DogStart02", Vector(-640.0f, 165,8754f, 1264f), Vector(0.0f, -268,2986f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 848[4], &iLocal_4 + 840);
	*(&iLocal_4 + 896) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 904[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(-860,0001f, 185,2891f, 1492f), Vector(0.0f, -61,10565f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 904[0], &iLocal_4 + 896);
	*(&iLocal_4 + 904[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart03", Vector(-860,0001f, 183,8625f, 1484f), Vector(0.0f, 65,71352f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 904[1], &iLocal_4 + 896);
	*(&iLocal_4 + 904[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart03", Vector(-864,0001f, 185,2587f, 1492f), Vector(0.0f, -274,909f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 904[2], &iLocal_4 + 896);
	*(&iLocal_4 + 904[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart03", Vector(-859,9999f, 184,7018f, 1488f), Vector(0.0f, 94,96701f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 904[3], &iLocal_4 + 896);
	*(&iLocal_4 + 904[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DogStart03", Vector(-883,7531f, 185,2349f, 1492f), Vector(0.0f, -265,8327f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 904[4], &iLocal_4 + 896);
	*(&iLocal_4 + 952) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 960[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart04", Vector(-766,8483f, 182,9535f, 1589,163f), Vector(0.0f, -61,10565f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 960[0], &iLocal_4 + 952);
	*(&iLocal_4 + 960[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart04", Vector(-763,0418f, 181,5971f, 1590,882f), Vector(0.0f, 65,71352f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 960[1], &iLocal_4 + 952);
	*(&iLocal_4 + 960[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart04", Vector(-767,1047f, 183,021f, 1590,873f), Vector(0.0f, -450,2303f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 960[2], &iLocal_4 + 952);
	*(&iLocal_4 + 960[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart04", Vector(-763,0178f, 181,5971f, 1592,664f), Vector(0.0f, 67,95207f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 960[3], &iLocal_4 + 952);
	*(&iLocal_4 + 960[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DogStart04", Vector(-759,0615f, 181,2669f, 1589,221f), Vector(0.0f, -668,3749f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 960[4], &iLocal_4 + 952);
	*(&iLocal_4 + 1008) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1016[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStartLast", Vector(-75,11958f, 116,8401f, 1405,88f), Vector(0.0f, 404,4818f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[0], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEndLast", Vector(-71,3356f, 118,3956f, 1409,704f), Vector(1,318914f, 35,23423f, 1,380166f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[1], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStartLast", Vector(-86,29118f, 117,0022f, 1411,959f), Vector(0.0f, 56,19948f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[2], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEndLast", Vector(-86,37331f, 117,0036f, 1411,957f), Vector(0.0f, 54,33067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[3], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStartLast", Vector(-78,44617f, 116,8612f, 1419,268f), Vector(0.0f, -109,6219f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[4], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEndLast", Vector(-78,44617f, 116,8612f, 1419,268f), Vector(0.0f, -109,6885f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[5], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStartLast", Vector(-77,75027f, 116,8612f, 1417,455f), Vector(0.0f, 248,4741f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[6], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEndLast", Vector(-77,75027f, 116,8612f, 1417,455f), Vector(0.0f, 248,5597f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[7], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DogStartLast", Vector(-74,09431f, 116,8612f, 1412,929f), Vector(0.0f, 9,852109f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[8], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DogEndLast", Vector(-52f, 116,4573f, 1400f), Vector(0.0f, -69,81378f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[9], &iLocal_4 + 1008);
	*(&iLocal_4 + 1016[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionGoLast", Vector(-116.0f, 118,8691f, 1376f), Vector(0.0f, 54,33067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1016[10], &iLocal_4 + 1008);
	*(&iLocal_4 + 1112) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01aSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1120[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01a_01", Vector(-264.0f, 129,0196f, 1404f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1120[0], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01a_02", Vector(-272.0f, 130,0709f, 1404.0f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1120[1], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01a_03", Vector(-276f, 130,0687f, 1396.0f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1120[2], &iLocal_4 + 1112);
	*(&iLocal_4 + 1120[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01a_04", Vector(-284.0f, 130,4199f, 1388.0f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1120[3], &iLocal_4 + 1112);
	*(&iLocal_4 + 1160) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01bSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1168[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01b_01", Vector(-412,1961f, 143,5374f, 1316,463f), Vector(0.0f, 124,4338f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1168[0], &iLocal_4 + 1160);
	*(&iLocal_4 + 1168[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01b_02", Vector(-424f, 145,5685f, 1324f), Vector(0.0f, 124,4338f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1168[1], &iLocal_4 + 1160);
	*(&iLocal_4 + 1168[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01b_03", Vector(-432.0f, 147,5764f, 1316f), Vector(0.0f, 124,4338f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1168[2], &iLocal_4 + 1160);
	*(&iLocal_4 + 1168[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01b_04", Vector(-440f, 148,5803f, 1308f), Vector(0.0f, 124,4338f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1168[3], &iLocal_4 + 1160);
	*(&iLocal_4 + 1208) = CREATE_OBJECTSET_IN_LAYOUT("DogScent01cSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1216[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01c_01", Vector(-640.0f, 165,8754f, 1264f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1216[0], &iLocal_4 + 1208);
	*(&iLocal_4 + 1216[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01c_02", Vector(-660.0f, 167,7223f, 1264f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1216[1], &iLocal_4 + 1208);
	*(&iLocal_4 + 1216[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01c_03", Vector(-672,0001f, 168,335f, 1280f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1216[2], &iLocal_4 + 1208);
	*(&iLocal_4 + 1216[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent01c_04", Vector(-692,1267f, 169,6626f, 1279,873f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1216[3], &iLocal_4 + 1208);
	*(&iLocal_4 + 1256) = CREATE_OBJECTSET_IN_LAYOUT("DogScent02aSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1264[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02a_01", Vector(-732.0f, 175,7754f, 1432f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1264[0], &iLocal_4 + 1256);
	*(&iLocal_4 + 1264[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02a_02", Vector(-728.0f, 174,6725f, 1448f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1264[1], &iLocal_4 + 1256);
	*(&iLocal_4 + 1264[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02a_03", Vector(-728.0f, 174,6823f, 1459,762f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1264[2], &iLocal_4 + 1256);
	*(&iLocal_4 + 1264[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02a_04", Vector(-732,0001f, 175,6862f, 1476f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1264[3], &iLocal_4 + 1256);
	*(&iLocal_4 + 1304) = CREATE_OBJECTSET_IN_LAYOUT("DogScent02bSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1312[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02b_01", Vector(-702,0375f, 186,4009f, 1568f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1312[0], &iLocal_4 + 1304);
	*(&iLocal_4 + 1312[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02b_02", Vector(-704.0f, 185,7701f, 1576f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1312[1], &iLocal_4 + 1304);
	*(&iLocal_4 + 1312[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02b_03", Vector(-700.0f, 183,9236f, 1580f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1312[2], &iLocal_4 + 1304);
	*(&iLocal_4 + 1312[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent02b_04", Vector(-700.0f, 183,7175f, 1584f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1312[3], &iLocal_4 + 1304);
	*(&iLocal_4 + 1352) = CREATE_OBJECTSET_IN_LAYOUT("DogScent03aSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1360[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03a_01", Vector(-763,5035f, 144,4028f, 1816,287f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1360[0], &iLocal_4 + 1352);
	*(&iLocal_4 + 1360[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03a_02", Vector(-765,9759f, 145,0721f, 1797,973f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1360[1], &iLocal_4 + 1352);
	*(&iLocal_4 + 1360[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03a_03", Vector(-770,9464f, 147,0571f, 1783,406f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1360[2], &iLocal_4 + 1352);
	*(&iLocal_4 + 1360[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03a_04", Vector(-780,0822f, 148,4459f, 1773,537f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1360[3], &iLocal_4 + 1352);
	*(&iLocal_4 + 1400) = CREATE_OBJECTSET_IN_LAYOUT("DogScent03bSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1408[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03b_01", Vector(-820,0001f, 174,3971f, 1644,07f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1408[0], &iLocal_4 + 1400);
	*(&iLocal_4 + 1408[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03b_02", Vector(-820.0f, 178,5079f, 1632,05f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1408[1], &iLocal_4 + 1400);
	*(&iLocal_4 + 1408[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03b_03", Vector(-812,0001f, 179,4034f, 1631,966f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1408[2], &iLocal_4 + 1400);
	*(&iLocal_4 + 1408[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03b_04", Vector(-812,0001f, 181,6098f, 1624,403f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1408[3], &iLocal_4 + 1400);
	*(&iLocal_4 + 1448) = CREATE_OBJECTSET_IN_LAYOUT("DogScent03cSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1456[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03c_01", Vector(-868,0001f, 186,136f, 1496f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1456[0], &iLocal_4 + 1448);
	*(&iLocal_4 + 1456[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03c_02", Vector(-876,0001f, 186,3549f, 1496f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1456[1], &iLocal_4 + 1448);
	*(&iLocal_4 + 1456[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03c_03", Vector(-880.0f, 185,0693f, 1496f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1456[2], &iLocal_4 + 1448);
	*(&iLocal_4 + 1456[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent03c_04", Vector(-884,0001f, 185,2533f, 1492,053f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1456[3], &iLocal_4 + 1448);
	*(&iLocal_4 + 1496) = CREATE_OBJECTSET_IN_LAYOUT("DogScent04aSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1504[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04a_01", Vector(-768,0001f, 172,7957f, 1472f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1504[0], &iLocal_4 + 1496);
	*(&iLocal_4 + 1504[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04a_02", Vector(-756.0f, 170,7451f, 1472.0f), Vector(-0,4912682f, -236,6013f, -0,2668532f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1504[1], &iLocal_4 + 1496);
	*(&iLocal_4 + 1504[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04a_03", Vector(-752.0f, 170,9199f, 1484f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1504[2], &iLocal_4 + 1496);
	*(&iLocal_4 + 1504[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04a_04", Vector(-744.0f, 173,3974f, 1480f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1504[3], &iLocal_4 + 1496);
	*(&iLocal_4 + 1544) = CREATE_OBJECTSET_IN_LAYOUT("DogScent04bSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1552[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04b_01", Vector(-663,8893f, 181,2283f, 1624,107f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1552[0], &iLocal_4 + 1544);
	*(&iLocal_4 + 1552[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04b_02", Vector(-671,778f, 178,2905f, 1633,159f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1552[1], &iLocal_4 + 1544);
	*(&iLocal_4 + 1552[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04b_03", Vector(-668,1965f, 177,4162f, 1640,097f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1552[2], &iLocal_4 + 1544);
	*(&iLocal_4 + 1552[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04b_04", Vector(-664,5844f, 176,2014f, 1650,065f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1552[3], &iLocal_4 + 1544);
	*(&iLocal_4 + 1592) = CREATE_OBJECTSET_IN_LAYOUT("DogScent04cSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1600[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04c_01", Vector(-680,0002f, 173,007f, 1799,999f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1600[0], &iLocal_4 + 1592);
	*(&iLocal_4 + 1600[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04c_02", Vector(-680,0001f, 172,2256f, 1804f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1600[1], &iLocal_4 + 1592);
	*(&iLocal_4 + 1600[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04c_03", Vector(-676,0001f, 171,6704f, 1804f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1600[2], &iLocal_4 + 1592);
	*(&iLocal_4 + 1600[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_scent04c_04", Vector(-672.0f, 170,6665f, 1808f), Vector(0.0f, -235,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1600[3], &iLocal_4 + 1592);
	*(&iLocal_4 + 1640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_hunting01", Vector(-659,8233f, 174,6981f, 1672,03f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_hunting02", Vector(-912,0001f, 185,5726f, 1484f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_hunting03", Vector(-600,0988f, 172,5992f, 1832,064f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1664) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_hunting04", Vector(-856.0f, 187,1995f, 1303,999f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective01", Vector(-80.0f, 116,8943f, 1409,173f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1680) = Vector(-81,64797f, 117,0198f, 1405,648f);
	*(&iLocal_4 + 1680 + 12) = Vector(0.0f, 69,68945f, 0.0f);
	*(&iLocal_4 + 1704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_dog_face", Vector(-354,9265f, 134,877f, 1284,8f), Vector(0.0f, 69,68945f, 0.0f));
	*(&iLocal_4 + 1712) = Vector(-75,842f, 117,858f, 1419,23f);
	*(&iLocal_4 + 1712 + 12) = Vector(0.0f, 268,941f, 0.0f);
	*(&iLocal_4 + 1736) = Vector(-75,856f, 117,858f, 1417,472f);
	*(&iLocal_4 + 1736 + 12) = Vector(0.0f, 267.0f, 0.0f);
	*(&iLocal_4 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "gringo_wolf_eating01", "wolf_eating", Vector(-659,3139f, 174,7291f, 1667,556f), Vector(0.0f, 76,74277f, 0.0f));
	*(&iLocal_4 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "gringo_wolf_eating02", "wolf_eating", Vector(-655,712f, 174,7267f, 1672,044f), Vector(0.0f, 7,86733f, 0.0f));
	*(&iLocal_4 + 1776) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "gringo_wolf_eating03", "wolf_eating", Vector(-651,998f, 174,7347f, 1672,001f), Vector(0.0f, -36,79684f, 0.0f));
	*(&iLocal_4 + 1784) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "rand_idle_stand_nospawn", "rand_idle_stand_nospawn", Vector(-73,80203f, 116,8612f, 1410,729f), Vector(0.0f, 119,1313f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 1792) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_flee01");
}

struct<8> ¿DçþÄ' CeEDèÿþÄ  C(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) //Position: 0x10639 / 67129
{
	*StackVal = StackVal;
	StackVal->f_59903 = StackVal;
	return (StackVal / StackVal >= StackVal), 0.0f->f_8556;
	StackVal->f_59783 = StackVal;
}

void Function_292(int iParam0, int iParam1) //Position: 0x10A16 / 68118
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

bool Function_293() //Position: 0x10A60 / 68192
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_311(&iLocal_490))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_551))
		{
			bLocal_551 = Function_305(1, 1, -78,446f, 116,861f, 1419,268f, -469,06f, 1, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_549))
		{
			bLocal_549 = Function_294(12, 0, 1, -94,785f, 117,663f, 1405,207f, 0, 0, 0);
			return 0;
		}
		if (!iLocal_582)
		{
			if (IS_ACTOR_INITED(&bLocal_549))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_549);
				GIVE_WEAPON_TO_ACTOR(&bLocal_549, 22, false, 1, 1);
				GIVE_WEAPON_TO_ACTOR(&bLocal_549, 8, false, 1, 1);
				ACTOR_SET_NEXT_EQUIP_SLOT(&bLocal_549, 5, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_549, 8, 0);
				iLocal_582 = 1;
				return 0;
			}
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_843))
		{
			bLocal_843 = Function_294(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_843, 1))
		{
			return 0;
		}
	}
	return 1;
}

var Function_294(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0x10B5E / 68446
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	
	if (iParam0 == 15)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: **WARNING** you are stealing COMPANION_DUMMY!");
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 >= 16)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: CompanionsList out of bounds.");
		return "";
	}
	iParam2 = &iParam2;
	if (((iParam0 != 12 || iParam0 != 11) || iParam0 != 13) || iParam0 != 14)
	{
		if (!Function_166(&(Global_43791[Global_46722[3]]), 4))
		{
			return "";
		}
		if (!IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			if (iParam0 == 12)
			{
			}
			else if (iParam0 == 11)
			{
			}
			else if (iParam0 == 13)
			{
			}
			else if (iParam0 == 14)
			{
			}
			return "";
		}
	}
	if (!Global_15402[iParam014].f_32)
	{
		Global_15402[iParam014].f_32 = 1;
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, 1, false);
		return "";
	}
	if (!STREAMING_IS_ACTOR_LOADED(&Global_15402[iParam014] + 16, 4294967295))
	{
		return "";
	}
	if (&bParam1)
	{
		LOG_ERROR("COMPANION_STEAL_ACTOR: bCreateMounted option has been discontinued. Please set this as FALSE!");
	}
	if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar2 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "Persistent_Char_Brain");
		GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar2), "ScriptStructure", "stolen_flag", 1);
		ACTIVATE_ACTOR_FOR_PERS_CHAR(&(Global_15402[iParam014]));
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&(Global_15402[iParam014]), 1);
		Function_303(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_302(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_297(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &fParam3;
			Var3.f_4 = &fParam4;
			Var3.f_8 = &fParam5;
			if (Function_74(StackVal, Var3))
			{
				iVar5 = 0;
				while (iVar5 <= Global_6667)
				{
					if (IS_SCRIPT_VALID(&Global_6667[iVar528] + 160))
					{
						Var3 = (&Global_6667[iVar528] + 88);
					}
					iVar5++;
				}
			}
			bVar1 = CREATE_ACTOR_IN_LAYOUT(StackVal, &Global_15402[iParam014] + 24, &Global_15402[iParam014] + 36, &Global_15402[iParam014] + 16, Var3, Vector(0.0f, 0.0f, 0.0f));
		}
	}
	if (IS_ACTOR_VALID(&bVar1))
	{
		REFERENCE_ACTOR(&bVar1);
		TASK_CLEAR(&bVar1);
		TASK_PRIORITY_SET(&bVar1, true);
		MAKE_ACTOR_READY_FOR_ACTION(&bVar1, 1);
		SET_ACTOR_UPDATE_PRIORITY(&bVar1, false);
		Function_296(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, 0);
		AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&bVar1, 1);
		TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bVar1, 8, "FASTWALK");
		if (IS_ACTOR_HOGTIED(&bVar1))
		{
			FREE_FROM_HOGTIE(&bVar1);
		}
		if (iParam0 == 2)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bVar1, 0);
			SET_ANIM_SET_FOR_ACTOR(&bVar1, "merchant_veh", 0);
		}
		if (iParam0 == 4)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&bVar1, 20, true);
		}
		if (iParam0 != 2 || iParam0 != 9)
		{
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bVar1, 8, 0.0f);
		}
		UNK_0x99AFD2D1(&bVar1, 1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 12, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 13, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 14, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 64, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 65, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 66, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 67, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 68, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 46, 0);
		LIMIT_BLOOD_ON_ACTOR(&bVar1, 3);
		SET_ACTOR_IS_COMPANION(&bVar1, 1);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bVar1, 0);
		SET_ACTOR_IS_AMBIENT(&bVar1, 0);
		AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&bVar1, 0);
		SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&bVar1, 0);
		SET_ACTOR_CAN_PLAY_BORED_IDLES(&bVar1, 0);
		Function_295(&bVar1, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 111, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 112, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 30, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bVar1, 31, 0);
		SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&bVar1, 1);
		SET_ACTOR_MOVE_CONFLICT_ALLOWED_TO_RUN_OVER_SMALL_ANIMALS(&bVar1, 1);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bVar1, 1);
		if (DECOR_CHECK_EXIST(&bVar1, "hidden"))
		{
			DECOR_REMOVE(&bVar1, "hidden");
		}
		SET_DRAW_ACTOR(&bVar1, 1);
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bVar1, 1);
		*(&Global_15402[iParam014] + 8) = &bVar1;
		return &bVar1;
	}
	return "";
}

void Function_295(var uParam0, bool bParam1) //Position: 0x1109E / 69790
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_296(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x110C0 / 69824
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &bParam3);
		if (IS_ACTOR_RIDING(&uParam0))
		{
			uVar0 = GET_MOUNT(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				SET_ALLOW_JACK(&uVar0, &uParam2);
			}
		}
	}
}

var Function_297(int iParam0, int iParam1) //Position: 0x11121 / 69921
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_301(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		return "";
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_26172))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_26172);
		if (IS_OBJECT_VALID(&uVar1))
		{
			if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (GET_ACTOR_ENUM(&uVar2) == iParam0)
					{
						Function_298(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_298(var uParam0, int iParam1) //Position: 0x111AF / 70063
{
	Function_300(&uParam0);
	Function_299(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_299(int iParam0) //Position: 0x111DB / 70107
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_300(int iParam0) //Position: 0x11201 / 70145
{
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	return;
}

bool Function_301(int iParam0) //Position: 0x112D7 / 70359
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_302(int iParam0, int iParam1) //Position: 0x112EE / 70382
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (GET_OBJECT_TYPE(&iVar1) != 15 || GET_OBJECT_TYPE(&iVar1) != 24)
		{
			iVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				if (GET_ACTOR_ENUM(&iVar2) == iParam0)
				{
					if (IS_LAYOUTREF_VALID(&iParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &iParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &iVar2;
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

void Function_303(int iParam0, bool bParam1, bool bParam2) //Position: 0x11394 / 70548
{
	var uVar0;
	var uVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[iParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[iParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[iParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[iParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[iParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[iParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[iParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						Function_215(&uVar1);
					}
				}
				Function_304(&uVar0);
			}
		}
	}
	return;
}

void Function_304(bool bParam0) //Position: 0x114A3 / 70819
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

var Function_305(int iParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x114D6 / 70870
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
		Function_310(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_309())
		{
			return "";
		}
	}
	if (!Function_307())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_198();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_235(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_235(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_235(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_235(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_306(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_306(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
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
				Var8 = Vector(&fParam2, &fParam3, &fParam4);
				if (!Function_74(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&fParam2, &fParam3, &fParam4), Vector(0.0f, &fParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
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
		Function_285(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_306(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x11833 / 71731
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

bool Function_307() //Position: 0x118D3 / 71891
{
	if (Function_308() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_308() //Position: 0x118E9 / 71913
{
	return Global_21369.f_244;
}

bool Function_309() //Position: 0x118F4 / 71924
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_310(var uParam0, bool bParam1, bool bParam2) //Position: 0x11914 / 71956
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_77(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_77(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_311(struct<2>[] Param0) //Position: 0x11943 / 72003
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_316();
	iVar1 = 0;
	if (!Function_180(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_315(&(Param0[iVar02]), 8);
		}
		else if (Function_314())
		{
			iVar1 = 1;
			Function_315(&(Param0[iVar02]), 8);
		}
		Function_315(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_180(&(Param0[iVar02]), 4))
		{
			if (!Function_180(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_180(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_180(&(Param0[02]), 8) || iVar1));
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
				Function_315(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_180(&(Param0[iVar02]), 4))
		{
			if (!Function_180(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_315(&(Param0[iVar02]), 2);
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
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_315(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_315(&(Param0[iVar02]), 2);
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
	Function_312();
	return 1;
}

void Function_312() //Position: 0x11D05 / 72965
{
	if (!Function_313(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_313(int iParam0) //Position: 0x11D45 / 73029
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_314() //Position: 0x11D61 / 73057
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

void Function_315(struct<13> Param0) //Position: 0x11D8F / 73103
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_316() //Position: 0x11DA2 / 73122
{
	if (!Function_313(128))
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

int Function_317() //Position: 0x11DE4 / 73188
{
	switch (bLocal_544)
	{
		case 0x00000063:
			if (!Function_279(&Local_464))
			{
				Function_318(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_318(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_318(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x11E2F / 73263
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
		uVar0 = Function_50();
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
		Function_89(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_239();
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
	Function_271(&iParam9, &bParam10);
}

int Function_319() //Position: 0x11EFE / 73470
{
	switch (bLocal_544)
	{
		case 0x00000063:
			Function_335(&Global_54076, &iLocal_4 + 768[0], 0, 0, 0);
			Function_335(&bLocal_549, &iLocal_4 + 768[1], 0, 1, 0);
			TASK_CLEAR(&Global_54076);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 4.0f, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_PUT_WEAPON_IN_HAND(&bLocal_549, 8, 0);
			TASK_GO_NEAR_OBJECT(&bLocal_549, &iLocal_4 + 768[3], 2.0f, 1, 1, 1);
			ACTOR_POP_NEXT_GAIT(&bLocal_549, 1, 0);
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 464[0]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 464[0]);
			Function_335(&bLocal_843, &iLocal_4 + 768[4], 1, 1, 1);
			TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_843, true);
			SET_DRAW_ACTOR(&bLocal_843, 1);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_847, &iLocal_4 + 464[0], 2, 1);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_845, &iLocal_4 + 464[0], 2, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_335(&Global_54076, &iLocal_4 + 1016[0], 1, 1, 1);
			Function_335(&bLocal_549, &iLocal_4 + 1016[2], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				Function_335(&bLocal_551, &iLocal_4 + 1016[4], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_553))
			{
				Function_335(&bLocal_553, &iLocal_4 + 1016[6], 1, 1, 1);
			}
			GET_OBJECT_POSITION(&iLocal_4 + 1016[10], &Local_918);
			TASK_GO_NEAR_COORD(&bLocal_549, &Local_918, 3.0f, 2);
			GET_OBJECT_POSITION(&iLocal_4 + 1016[1], &Local_918);
			ENABLE_GAME_CAMERA_FOCUS(Local_918, -1.0f, 0, 0, 1, 0);
			SET_GAME_CAMERA_DRIFTZ(-1.0f);
			SET_DRAW_ACTOR(&bLocal_843, 1);
			Function_214(12, 1, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_320() //Position: 0x120A8 / 73896
{
	switch (bLocal_544)
	{
		case 0x00000063:
			ACTOR_SET_NEXT_EQUIP_SLOT(&bLocal_549, 5, 0);
			if (!Function_321() && !Function_311(&iLocal_476))
			{
				return 0;
			}
			if (!DECOR_CHECK_EXIST(&cLocal_462, "snappedToGringos"))
			{
				if (Function_284())
				{
					if (IS_ACTOR_VALID(&bLocal_551))
					{
						if (IS_GRINGO_VALID(&(uLocal_932[0])))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_932[0])), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&bLocal_551, &(uLocal_932[0]), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&bLocal_551, true);
						}
						else
						{
							Function_335(&bLocal_551, &iLocal_4 + 768[2], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_553))
					{
						if (IS_GRINGO_VALID(&(uLocal_932[1])))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_553, GET_OBJECT_FROM_GRINGO(&(uLocal_932[1])), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&bLocal_553, &(uLocal_932[1]), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&bLocal_553, true);
						}
						else
						{
							Function_335(&bLocal_553, &iLocal_4 + 768[3], 1, 1, 1);
						}
					}
					DECOR_SET_BOOL(&cLocal_462, "snappedToGringos", 1);
					return 0;
				}
				return 1;
			}
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
	}
	return 0;
}

bool Function_321() //Position: 0x12212 / 74258
{
	Function_324(&iLocal_4 + 8, 981, 2, 0);
	Function_324(&iLocal_4 + 8, 1068, 2, 0);
	Function_324(&iLocal_4 + 8, 1069, 2, 0);
	Function_324(&iLocal_4 + 8, 1070, 2, 0);
	Function_324(&iLocal_4 + 8, 1015, 2, 0);
	Function_324(&iLocal_4 + 8, 1016, 2, 0);
	Function_324(&iLocal_4 + 8, 1017, 2, 0);
	Function_322(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/wolf_eating", 1, 0);
	Function_322(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/rand_idle_stand_nospawn", 1, 0);
	if (Function_311(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_322(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1230C / 74508
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_323(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_315(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_323(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1234A / 74570
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_315(&(Param0[iVar02]), 4);
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

var Function_324(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12419 / 74777
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_315(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_315(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_325() //Position: 0x124F5 / 74997
{
	switch (bLocal_544)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 464[0]))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 464[0]);
				}
				if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 464[0]))
				{
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 464[0]);
				}
				FIRE_STOP_FLAMES_IN_VOLUME(&iLocal_4 + 464[0]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 464[0], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 464[0]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 736, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736);
				CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
				return 1;
			}
			if (Function_293())
			{
				Function_290();
				Function_335(&Global_54076, &iLocal_4 + 768[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					Function_335(&bLocal_549, &iLocal_4 + 768[7], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					ACTOR_SET_GRABBED_BY_CUTSCENE(&bLocal_549, true);
					CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_549);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 0);
					GIVE_WEAPON_TO_ACTOR(&bLocal_549, 8, false, 1, 1);
					ACTOR_SET_NEXT_EQUIP_SLOT(&bLocal_549, 5, 1);
					ACTOR_PUT_WEAPON_IN_HAND(&bLocal_549, 8, 0);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					Function_335(&bLocal_843, &iLocal_4 + 768[4], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_843, true);
					SET_DRAW_ACTOR(&bLocal_843, 0);
				}
			}
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse02", &bLocal_551);
			}
			if (IS_ACTOR_VALID(&bLocal_553))
			{
				CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse01", &bLocal_553);
			}
			if (IS_ACTOR_VALID(&bLocal_843))
			{
				SET_DRAW_ACTOR(&bLocal_843, 0);
			}
			return 1;
			break;
	}
	return 0;
}

int Function_326() //Position: 0x126D3 / 75475
{
	switch (bLocal_544)
	{
		case 0x00000063:
			Function_331(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_329(StackVal, &cLocal_462, *(&Global_6667[5328] + 88), &iLocal_532 + 32, 1, 0, 0, 0, 1, 1);
			Function_327(&uLocal_829, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000065:
			Function_331(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_235(&iLocal_4 + 1016[0]);
			Function_329(StackVal, &cLocal_462, Function_235(&iLocal_4 + 1016[0]), &iLocal_532 + 32, 1, 0, 0, 0, 1, 1);
			Function_327(&uLocal_829, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
	}
	return 0;
}

void Function_327(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12771 / 75633
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_328(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_328(bool bParam0) //Position: 0x1279B / 75675
{
	int iVar0;
	
	switch (bParam0)
	{
		case 0xFFFFFFFF:
			return "EVERYTHING";
		
		case 0x00000000:
			return "SILENT";
		
		case 0x00000001:
			return "IDLE";
		
		case 0x00000002:
			return "IDLE_2";
		
		case 0x00000003:
			return "PASTORAL";
		
		case 0x00000004:
			return "PASTORAL_LOW";
		
		case 0x00000005:
			return "PASTORAL_HIGH";
		
		case 0x00000006:
			return "SUSPENSE";
		
		case 0x00000007:
			return "SUSPENSE_LOW";
		
		case 0x00000008:
			return "SUSPENSE_HIGH";
		
		case 0x00000009:
			return "SUSPENSE_DRUM";
		
		case 0x0000003E:
			return "SUSPENSE_FOG";
		
		case 0x0000000A:
			return "DRAMATIC";
		
		case 0x0000000B:
			return "DRAMATIC_LOW";
		
		case 0x0000000C:
			return "DRAMATIC_LOW_2";
		
		case 0x0000000D:
			return "DRAMATIC_LOW_3";
		
		case 0x0000000E:
			return "DRAMATIC_LOW_4";
		
		case 0x0000000F:
			return "DRAMATIC_SUSPENSE";
		
		case 0x00000010:
			return "DRAMATIC_SUSPENSE_2";
		
		case 0x00000011:
			return "DRAMATIC_HIGH";
		
		case 0x00000012:
			return "DRAMATIC_GUNFIGHT";
		
		case 0x00000013:
			return "DRAMATIC_ALT";
		
		case 0x00000014:
			return "DRAMATIC_2";
		
		case 0x00000015:
			return "DRAMATIC_3";
		
		case 0x00000016:
			return "DRAMATIC_4";
		
		case 0x00000017:
			return "CHASE";
		
		case 0x00000018:
			return "CHASE_EXTRA_LOW";
		
		case 0x00000019:
			return "nCHASE_LOW";
		
		case 0x0000001A:
			return "CHASE_HIGH";
		
		case 0x0000001B:
			return "nCHASE_ELK";
		
		case 0x0000001C:
			return "nCHASE_ALT";
		
		case 0x0000001D:
			return "MERCH_CHASE";
		
		case 0x0000001E:
			return "ARMY_GUNFIGHT";
		
		case 0x0000001F:
			return "ARMY_GUNFIGHT_LOW";
		
		case 0x00000020:
			return "ARMY_GUNFIGHT_HIGH";
		
		case 0x00000021:
			return "REBEL_GUNFIGHT";
		
		case 0x00000022:
			return "GUNFIGHT";
		
		case 0x00000023:
			return "GUNFIGHT_2";
		
		case 0x00000024:
			return "GUNFIGHT_4";
		
		case 0x00000025:
			return "GUNFIGHT_EX";
		
		case 0x00000026:
			return "GUNFIGHT_LOW";
		
		case 0x00000027:
			return "GUNFIGHT_LOW_2";
		
		case 0x00000028:
			return "GUNFIGHT_HIGH";
		
		case 0x00000029:
			return "GUNFIGHT_HIGH_2";
		
		case 0x0000002A:
			return "GUNFIGHT_ALT_HIGH";
		
		case 0x0000002B:
			return "GUNFIGHT_ELK";
		
		case 0x0000002C:
			return "GUNFIGHT_CHASE_HIGH";
		
		case 0x0000002D:
			return "INTENSE_GUNFIGHT";
		
		case 0x0000002E:
			return "SUSPENSE_GUNFIGHT_HIGH";
		
		case 0x0000002F:
			return "nMERCH_GUN";
		
		case 0x00000030:
			return "HAPPY";
		
		case 0x00000031:
			return "nHAPPY_LOW";
		
		case 0x00000032:
			return "HAPPY_HIGH";
		
		case 0x00000033:
			return "RIDING_1";
		
		case 0x00000034:
			return "RIDING_2";
		
		case 0x00000035:
			return "RIDING_3";
		
		case 0x00000036:
			return "RIDING_4";
		
		case 0x00000037:
			return "RIDING_ALT";
		
		case 0x00000038:
			return "TRAP";
		
		case 0x00000039:
			return "BARN";
		
		case 0x0000003A:
			return "MP_IDLE";
		
		case 0x0000003B:
			return "MP_SUSP";
		
		case 0x0000003C:
			return "CAR";
		
		case 0x0000003D:
			return "FINISHED";
		
		default:
	}
	iVar0 = "";
	return &iVar0;
}

void Function_329(char* cParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x12CF0 / 77040
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &iParam5;
	Var2.f_4 = &iParam6;
	Var2.f_8 = &iParam7;
	if (&bParam4)
	{
		if (HUD_IS_FADED() && !HUD_IS_FADING())
		{
			TELEPORT_ACTOR(&Global_54076, &Param1, 1, 1, 1);
		}
		else
		{
			LOG_ERROR("SETUP_CUTSCENE_POSITION: You're trying to teleport the player without the game being faded...I will NOT respect this teleport.");
		}
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&cParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &cParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &cParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_330(&uVar1, &cParam0);
			}
		}
		if (!Function_74(StackVal, Var2))
		{
			if (!IS_ACTOR_VALID(&bVar0))
			{
				bVar0 = &Global_21369 + 72;
			}
			if (IS_ACTOR_VALID(&bVar0))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&bVar0, &Var2, 1, 1, 1);
					TASK_CLEAR(&bVar0);
					TASK_STAND_STILL(&bVar0, -1.0f, 0, 0);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (IS_ACTOR_IN_VOLUME(&bVar0, &bParam3))
				{
					TELEPORT_ACTOR(&uVar1, &Var2, 1, 1, 1);
				}
			}
		}
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&bParam3))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&bParam3);
		}
		if (&bParam9)
		{
			FIRE_STOP_FLAMES_IN_VOLUME(&bParam3);
		}
		CLEAR_AMBIENT_OBJECTS_VOLUME(&bParam3, 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&bParam3);
		if (&bParam8)
		{
			Global_99170 = &bParam3;
		}
	}
	else
	{
		LOG_ERROR("SETUP_CUTSCENE_POSITION: Failed to create CutVol!");
	}
}

void Function_330(var uParam0, float fParam1) //Position: 0x12F90 / 77712
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&uParam0);
	iVar1 = GET_NUM_AVAILABLE_SEATS(&uParam0);
	bVar2 = false;
	while (bVar2 <= iVar0)
	{
		uVar4 = GET_DRAFT_ACTOR(bVar2, &uParam0);
		if (IS_ACTOR_VALID(&uVar4))
		{
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &fParam1);
		}
		bVar2++;
	}
	bVar3 = false;
	while (bVar3 <= iVar1)
	{
		uVar5 = GET_ACTOR_IN_VEHICLE_SEAT(&uParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar5))
		{
			if (!IS_ACTOR_PLAYER(&uVar5))
			{
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &fParam1);
			}
		}
		bVar3++;
	}
	return;
}

void Function_331(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x13012 / 77842
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_239();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_50();
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (GET_WEAPON_IN_HAND(&uVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&uVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&uVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&uVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&uVar1, 0);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, 1);
			AI_IGNORE_ACTOR(&uVar1);
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
				Function_333(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_333(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_89(19, 1, 0, 0);
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
	if (iParam10 && !Function_13())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_332()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_332()));
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
	if (Function_313(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_313(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_332() //Position: 0x132C4 / 78532
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

struct<8> Function_333(var uParam0) //Position: 0x13352 / 78674
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

bool Function_334() //Position: 0x13364 / 78692
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 184))
	{
		Function_289();
		if (SQUAD_IS_VALID(&iLocal_4 + 184))
		{
			Function_288(&iLocal_4 + 184, 0);
			Function_287(&iLocal_4 + 184, 3);
			Function_286(&iLocal_4 + 184, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				bLocal_553 = &iLocal_4 + 160[02];
				Function_335(&bLocal_553, &iLocal_4 + 1016[6], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_553);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_553);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_553, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 184, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_843))
	{
		Function_335(&bLocal_843, &iLocal_4 + 1016[8], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_843))
		{
			SET_ACTOR_FACTION(&bLocal_843, 20);
			Function_285(&bLocal_843, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_843, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_843, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_843, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_843, 1);
			DECOR_SET_BOOL(&bLocal_843, "Frank", 1);
			TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_843, true);
		}
	}
	else if (!iLocal_567[3])
	{
		Function_335(&bLocal_843, &iLocal_4 + 1016[8], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_843))
	{
		return 1;
	}
	return 0;
}

void Function_335(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x134B8 / 79032
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_336(int iParam0) //Position: 0x135C8 / 79304
{
	if (!Function_279(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_188(1, 0, 1);
		}
	}
	return;
}

bool Function_337(bool bParam0) //Position: 0x135E4 / 79332
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_338() //Position: 0x13600 / 79360
{
	Function_341(12);
	Function_341(13);
	Function_341(11);
	Function_341(35);
	Function_341(6);
	Function_341(3);
	Function_341(15);
	Function_341(8);
	Function_341(20);
	Function_341(7);
	Function_341(5);
	Function_341(16);
	Function_169(18444);
	Function_339(4);
	return;
}

void Function_339(int iParam0) //Position: 0x13648 / 79432
{
	Function_340(&Global_43580, iParam0);
	return;
}

void Function_340(var uParam0, int iParam1) //Position: 0x13656 / 79446
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_341(int iParam0) //Position: 0x1367E / 79486
{
	if (iParam0 >= 4294967295 || iParam0 <= 36)
	{
		return;
	}
	Global_47006[iParam0] = 0;
	Global_47146 = 1;
	return;
}

void Function_342(bool bParam0) //Position: 0x1369E / 79518
{
	Function_343(0, 0x40400000);
	Function_205();
	Function_204();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_343(float fParam0, float fParam1) //Position: 0x136D4 / 79572
{
	(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
		{
			TASK_CLEAR(&Global_21369 + 72);
		}
		if (&fParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(&Global_21369 + 72, true);
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	Function_345();
	Function_344();
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(&Global_54076, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + &fParam1));
	return;
}

void Function_344() //Position: 0x137E5 / 79845
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_345() //Position: 0x13819 / 79897
{
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	return;
}

void Function_346() //Position: 0x1391F / 80159
{
	switch (iLocal_839)
	{
		case 0x00000000:
			iLocal_839++;
			break;
		
		case 0x00000001:
			if (!IS_GRINGO_VALID(&(uLocal_932[0])))
			{
				uLocal_932[0] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 1712, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(&(uLocal_932[0])))
			{
				iLocal_839++;
			}
			break;
		
		case 0x00000002:
			if (!IS_GRINGO_VALID(&(uLocal_932[1])))
			{
				uLocal_932[1] = LOCATE_GRINGO_OF_TYPE("horsehitch", &iLocal_4 + 1736, 1.0f, 0);
			}
			if (IS_GRINGO_VALID(&(uLocal_932[1])))
			{
				iLocal_839++;
			}
			break;
		
		case 0x00000003:
			Function_235(GET_OBJECT_FROM_GRINGO(&(uLocal_932[0])));
			Function_347(StackVal, Function_235(GET_OBJECT_FROM_GRINGO(&(uLocal_932[0]))), 0, 0);
			Function_235(GET_OBJECT_FROM_GRINGO(&(uLocal_932[1])));
			Function_347(StackVal, Function_235(GET_OBJECT_FROM_GRINGO(&(uLocal_932[1]))), 0, 0);
			iLocal_839++;
			break;
		
		case 0x00000004:
			if (bLocal_544 == 0)
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_GRINGO_VALID(&(uLocal_932[0])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_932[0])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_551, &(uLocal_932[0]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_551, true);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_553))
				{
					if (IS_GRINGO_VALID(&(uLocal_932[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_553, GET_OBJECT_FROM_GRINGO(&(uLocal_932[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_553, &(uLocal_932[1]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_553, true);
					}
				}
			}
			else if (bLocal_544 == 101)
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_GRINGO_VALID(&(uLocal_932[0])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_932[0])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_551, &(uLocal_932[0]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_551, true);
					}
				}
				if (IS_ACTOR_VALID(&bLocal_553))
				{
					if (IS_GRINGO_VALID(&(uLocal_932[1])))
					{
						SNAP_ACTOR_TO_GRINGO(&bLocal_553, GET_OBJECT_FROM_GRINGO(&(uLocal_932[1])), "UseCase1", true, 0, 0);
						TASK_USE_GRINGO(&bLocal_553, &(uLocal_932[1]), "UseCase1", 1, 1);
						TASK_PRIORITY_SET(&bLocal_553, true);
					}
				}
			}
			iLocal_839++;
			break;
		
		case 0x00000005:
			iLocal_839++;
			break;
	}
	return;
}

int Function_347(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0x13BA5 / 80805
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_349(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
	iVar3 = 0;
	if (bParam2)
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 1);
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 1);
		}
	}
	else
	{
		if (IS_GRINGO_VALID(&(uVar0[0])))
		{
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_348(&(uVar0[0]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar4) && !&iVar4 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar4, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar4, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar4);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[0]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[0]), false);
			}
			iVar3 = 1;
		}
		else
		{
			return 0;
		}
		if (IS_GRINGO_VALID(&(uVar0[1])))
		{
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_348(&(uVar0[1]), "UseCase1"));
			if (IS_ACTOR_VALID(&iVar5) && !&iVar5 != &Global_21369 + 72)
			{
				if (DECOR_CHECK_EXIST(&iVar5, "HorseLeash"))
				{
					DESTROY_OBJECT(DECOR_GET_OBJECT(&iVar5, "HorseLeash"));
				}
				DESTROY_OBJECT(&iVar5);
			}
			GRINGO_ENABLE_SPAWN(&(uVar0[1]), 0);
			if (&bParam3)
			{
				GRINGO_ALLOW_ACTIVATION(&(uVar0[1]), false);
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

var Function_348(var uParam0, int iParam1) //Position: 0x13D22 / 81186
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_349(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x13D31 / 81201
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_13())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &bParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &bParam0, 2.0f, 0);
			bParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &bParam0, 2.0f, 0);
		}
	}
}

void Function_350() //Position: 0x13E7B / 81531
{
	Function_346();
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_398();
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_567[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				bLocal_546 = Global_46754[1];
				if (!Function_337(bLocal_546))
				{
					Function_336(&Local_464);
				}
				Function_335(&Global_54076, &iLocal_4 + 960[0], 1, 1, 1);
				iLocal_839 = 0;
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_220(&iLocal_555);
				iLocal_545 = 1;
			}
			else
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_337(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			Function_327(&uLocal_829, 13, 0, 4294967295, 4294967295);
			if (Function_397())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_840 = 0;
				iLocal_858 = 0;
				iLocal_859 = 0;
				iLocal_860 = 0;
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					SET_ACTOR_HEALTH(&bLocal_843, GET_ACTOR_MAX_HEALTH(&bLocal_843));
				}
				if (iLocal_567[2] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_335(&bLocal_551, &iLocal_4 + 960[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_551))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_551);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (IS_ACTOR_VALID(&bLocal_553))
						{
							Function_335(&bLocal_553, &iLocal_4 + 960[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_553))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_553);
							}
						}
					}
				}
				iLocal_583 = 0;
				Function_392(&(Local_638[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_388(&(Local_638[015]), 1024);
				Function_392(&(Local_638[115]), &bLocal_843, "Dog", 0, 0x5f5e100, 1);
				Function_388(&(Local_638[115]), 1024);
				Function_392(&(Local_638[215]), &bLocal_847, "Uncle", 0, 0x5f5e100, 1);
				Function_392(&(Local_638[315]), &bLocal_845, "Wife", 0, 0x5f5e100, 1);
				Function_387(&(Local_638[415]));
				Function_387(&(Local_638[515]));
				Function_220(&iLocal_555);
				iLocal_545 = 6;
				Function_234(bLocal_544);
				Function_379(StackVal, Function_234(bLocal_544), bLocal_544, Global_46754[1], Function_237(bLocal_544), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (Function_376(1))
				{
					uLocal_851 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1672, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_851))
					{
					}
					GET_OBJECT_POSITION(&iLocal_4 + 1672, &Local_912);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1672, &Local_915);
					bLocal_862 = Function_375(StackVal, StackVal, &cLocal_462, "HOME02_SON02GATEWAY01", Local_912, Local_915, &Global_54076, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_373(StackVal, Local_912, 0, 48, 1);
					if (IS_OBJECT_VALID(&bLocal_862))
					{
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						Function_303(12, 0, 1);
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &Global_54076, 60.0f, 10.0f, 50.0f);
						MEMORY_PREFER_RIDING(&bLocal_549, true);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 4294967295);
						CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
						CLEAR_ACTOR_MAX_SPEED(&bLocal_553);
						iLocal_909 = Vector(3.0f, 0.0f, 1.0f);
						bLocal_834 = TASK_SEQUENCE_OPEN();
						TASK_DRAW_HOLSTER_WEAPON(0, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_FOLLOW_OBJECT(0, &Global_54076, &iLocal_909, 0, 0, 0, 0, 0, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_834);
						TASK_SEQUENCE_RELEASE(bLocal_834, 1);
						TASK_PRIORITY_SET(&bLocal_549, true);
					}
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_843);
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_843, &Global_54076, 60.0f, 10.0f, 50.0f);
						Local_892[02] = Vector(-3.0f, 0.0f, 6.0f);
						bLocal_834 = TASK_SEQUENCE_OPEN();
						TASK_STAND_STILL(false, 3.0f, 0, 0);
						TASK_FOLLOW_OBJECT(0, &Global_54076, &(Local_892[02]), 0, 0, 0, 0, 0, 0, 1);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_843, bLocal_834);
						TASK_SEQUENCE_RELEASE(bLocal_834, 1);
						TASK_PRIORITY_SET(&bLocal_843, true);
					}
					fLocal_938 = Function_371(&Global_54076, &iLocal_4 + 1672);
					Function_368();
					Function_220(&iLocal_555);
					iLocal_545 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				TASK_CLEAR(&bLocal_549);
				Function_367("home02_son02_obj08", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			Function_235(&iLocal_4 + 1672);
			Function_361(StackVal, "$/cutscene/son_02_end/son_02_end", &uLocal_828, Function_235(&iLocal_4 + 1672), 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (Function_352(&iLocal_563, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_580, 0, &cLocal_462, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
				if (IS_OBJECT_VALID(&bLocal_862))
				{
					Function_212();
					Function_351(&bLocal_862);
				}
				if (Function_371(&Global_54076, &iLocal_4 + 1672) < (fLocal_938 + 75.0f))
				{
					Function_228("beechers_abandoned");
					bLocal_580 = true;
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&uLocal_851))
				{
					uLocal_851 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1672, 330, 0f, 2, 0);
					if (IS_BLIP_VALID(&uLocal_851))
					{
					}
				}
				if (!IS_OBJECT_VALID(&bLocal_862))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1672, &Local_912);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1672, &Local_915);
					bLocal_862 = Function_375(StackVal, StackVal, &cLocal_462, "HOME02_SON02GATEWAY01", Local_912, Local_915, &Global_54076, 2,5f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
					Function_373(StackVal, Local_912, 0, 48, 1);
					if (IS_OBJECT_VALID(&bLocal_862))
					{
					}
				}
				else
				{
					if (Function_371(&Global_54076, &bLocal_862) > 200.0f)
					{
						Function_327(&uLocal_829, 11, 0, 4294967295, 4294967295);
					}
					if (!DECOR_CHECK_EXIST(&cLocal_462, "FinalDistanceRemainder"))
					{
						if (Function_371(&Global_54076, &iLocal_4 + 1672) < (fLocal_938 + 50.0f))
						{
							DECOR_SET_BOOL(&cLocal_462, "FinalDistanceRemainder", 1);
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
							PRINT_OBJECTIVE_B("Beechers_return", 7,5f, 0, 2, 1, 0, 0, 0);
						}
					}
					else if (Function_371(&Global_54076, &iLocal_4 + 1672) > (fLocal_938 + 25.0f))
					{
						DECOR_REMOVE(&cLocal_462, "FinalDistanceRemainder");
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("home02_son01_obj12", 7,5f, 0, 2, 1, 0, 0, 0);
					}
					else if (Function_371(&Global_54076, &iLocal_4 + 1672) < (fLocal_938 + 100.0f))
					{
						Function_228("beechers_abandoned");
						bLocal_580 = true;
					}
				}
			}
			if (Function_376(1))
			{
				if (!IS_ACTOR_IN_VOLUME(&bLocal_549, &iLocal_4 + 744) && !IS_ACTOR_IN_VOLUME(&bLocal_549, &iLocal_4 + 752))
				{
					if (GET_TASK_STATUS(&bLocal_549, 26) != 1)
					{
						ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549, &Global_54076, 25.0f, 10.0f, 20.0f);
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
						TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_549, &Global_54076, 4.0f, 4);
						TASK_PRIORITY_SET(&bLocal_549, true);
					}
				}
				else if (GET_TASK_STATUS(&bLocal_549, 0) != 1)
				{
					DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 1);
					bLocal_834 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1016[6], 5.0f, 4, 0, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_834);
					TASK_SEQUENCE_RELEASE(bLocal_834, 1);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
			}
			else
			{
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
			}
			if (IS_OBJECT_VALID(&bLocal_862))
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 584))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 584))
						{
							ABORT_SCRIPTED_CONVERSATION(1);
							if (IS_BLIP_VALID(&uLocal_851))
							{
								REMOVE_BLIP(&uLocal_851);
							}
							if (IS_OBJECT_VALID(&bLocal_862))
							{
								Function_351(&bLocal_862);
							}
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							bLocal_834 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(0, &iLocal_4 + 1016[4], 2, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&Global_54076, bLocal_834);
							TASK_SEQUENCE_RELEASE(bLocal_834, 1);
							bLocal_834 = TASK_SEQUENCE_OPEN();
							TASK_GO_TO_OBJECT(0, &iLocal_4 + 1016[6], 2, 0, 1);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_834);
							TASK_SEQUENCE_RELEASE(bLocal_834, 1);
							Function_220(&iLocal_555);
							iLocal_545 = 105;
						}
					}
				}
			}
			break;
		
		case 0x00000069:
			Function_235(&iLocal_4 + 1672);
			Function_361(StackVal, "$/cutscene/son_02_end/son_02_end", &uLocal_828, Function_235(&iLocal_4 + 1672), 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (Function_267(&iLocal_555) <= 3.0f)
			{
				Function_220(&iLocal_555);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_235(&iLocal_4 + 1672);
			Function_361(StackVal, "$/cutscene/son_02_end/son_02_end", &uLocal_828, Function_235(&iLocal_4 + 1672), 0, 150.0f, 200.0f, 2, 1, 1, 2, 0, 1);
			if (!HUD_IS_FADING())
			{
				iLocal_567[3] = 1;
				Function_220(&iLocal_555);
				bLocal_544 = 101;
				iLocal_545 = 0;
			}
			break;
	}
	return;
}

void Function_351(bool bParam0) //Position: 0x148F2 / 84210
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

bool Function_352(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, int iParam10) //Position: 0x14988 / 84360
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_ALIVE(&iParam2))
	{
		if (!IS_ACTOR_ALIVE(GET_MOUNT(&Global_54076)))
		{
			if (!Function_360(16))
			{
				if (&bParam7)
				{
					Function_239();
				}
				if (!Function_359())
				{
					Function_367(&fParam4, 7,5f, 0, 2, 0, 0, 0, 0);
					Function_358(16);
				}
			}
			return 1;
		}
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_228(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_360(8))
		{
			if (&bParam7)
			{
				Function_239();
			}
			if (!Function_359())
			{
				Function_367(&iParam3, 7,5f, 0, 2, 0, 0, 0, 0);
				Function_358(8);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_357(&uParam8, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_357(&iParam9, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam2, &iParam10, 0, 2, 0);
			}
		}
		return 1;
	}
	if (Function_360(8))
	{
		Function_356(8);
		if (!Function_355())
		{
			Function_354();
			Function_353();
		}
	}
	if (GET_MOUNT(&Global_54076) == &iParam2)
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam2));
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_357(&uParam8, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_357(&iParam9, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_353() //Position: 0x14AFE / 84734
{
	var uVar0;
	var uVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	uVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&uVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&uVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

void Function_354() //Position: 0x14B2C / 84780
{
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_355() //Position: 0x14B38 / 84792
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return DECOR_GET_INT(&Global_54076, "missionFailRmd") == 0;
		}
	}
	return 0;
}

void Function_356(bool bParam0) //Position: 0x14B7F / 84863
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_38(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_357(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14BE6 / 84966
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_IN_LAYOUT(&uVar0, &uParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && iParam3)) && &iVar1 == &iParam4)
		{
			iVar2 = GET_BLIP_ON_OBJECT(&iVar1);
			if (IS_BLIP_VALID(&iVar2))
			{
				if ((GET_BLIP_ICON(&iVar2) == 322 && GET_BLIP_ICON(&iVar2) == 323) && GET_BLIP_ICON(&iVar2) == 324)
				{
					SET_BLIP_VISIBLE(&iVar2, bParam1);
				}
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
}

void Function_358(bool bParam0) //Position: 0x14CA1 / 85153
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_77(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_359() //Position: 0x14D08 / 85256
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

bool Function_360(bool bParam0) //Position: 0x14D15 / 85269
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			return Function_14(DECOR_GET_INT(&Global_54076, "missionFailRmd"), bParam0);
		}
	}
	return 0;
}

int Function_361(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x14D5F / 85343
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_364(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_366()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
	{
		if (!&bParam4 && (HUD_IS_FADED() || HUD_IS_FADING()))
		{
			return 0;
		}
		if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && uParam1 == 0)
		{
			if (uParam1 != 5)
			{
				uParam1 = 0;
				return 0;
			}
		}
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
		{
			strcpy(&cVar0, "Name: ", 64);
			stradd(&cVar0, CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), 64);
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
			uParam1 = 0;
			return 0;
		}
		if ((iParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
		{
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var16, &Var18))
			{
				if (!Function_74(StackVal, Var16))
				{
					if (HUD_IS_FADED())
					{
						VSCALE(&Var18, (360.0f / 6,28f));
						STREAMING_OVERRIDE_MAIN_POI(Var16, Var18);
					}
					else
					{
						STREAMING_LOAD_SCENE_EXT(Var16, Var18, 1);
					}
				}
			}
		}
		switch (uParam1)
		{
			case 0x00000000:
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_362();
					CUTSCENE_MANAGER_RESUME_LOADING();
					uParam1 = 3;
				}
				break;
			
			case 0x00000003:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					uParam1 = 4;
				}
				break;
			
			case 0x00000004:
				return 1;
				break;
			
			case 0x00000005:
				break;
			
			default:
				uParam1 = 0;
				break;
		}
	}
	else if ((!Function_364(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_366()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_364(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_362() //Position: 0x14FC7 / 85959
{
	bool bVar0;
	struct<2> Var1;
	struct<5> Var3;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &Var1, &Var3))
		{
			CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_END_ORIENT(bVar0, &Var5, &Var7);
			Function_363(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_363(char* cParam0) //Position: 0x1501B / 86043
{
	char* cVar0[64];
	
	strcpy(&cVar0, "CUT_ACTOR: ", 64);
	stradd(&cVar0, &cParam0, 64);
	strcpy(&cVar0, "start pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam1.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "start heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam3, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
	strcpy(&cVar0, "end pos: <<", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.x, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.y, 4, 2), 64);
	stradd(&cVar0, ",", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(vParam4.z, 4, 2), 64);
	stradd(&cVar0, ">>", 64);
	strcpy(&cVar0, "end heading: <<0.0,", 64);
	stradd(&cVar0, FLOAT_TO_STRING_FORMATED(bParam6, 3, 2), 64);
	stradd(&cVar0, ",0.0>>", 64);
}

bool Function_364(var uParam0, struct<2> Param1, float fParam3) //Position: 0x15144 / 86340
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_365(&uParam0);
		if (VDIST(Function_365(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_365(var uParam0) //Position: 0x151D0 / 86480
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

int Function_366() //Position: 0x1523C / 86588
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_367(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1524B / 86603
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
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_368() //Position: 0x152E0 / 86752
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_LesGoHome", "Home02_s2_LesGoHome", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_369(int iParam0) //Position: 0x1532F / 86831
{
	Function_370(0, &Global_54076, iParam0, 0);
	Function_370(1, &bLocal_549, iParam0, 0);
	return;
}

void Function_370(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0x1534B / 86859
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

float Function_371(var uParam0, int iParam1) //Position: 0x15373 / 86899
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_365(&uParam0);
			Var0 = Function_365(&uParam0);
			Function_372(&iParam1);
			Var2 = Function_372(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_372(int iParam0) //Position: 0x15415 / 87061
{
	struct<2> Var0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		GET_OBJECT_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_373(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x15483 / 87171
{
	(&Global_42834 + 32) = Param0;
	*(&Global_42834 + 44) = Param0;
	Global_42834 = 2;
	Global_42834.f_4 = 0;
	Global_42834.f_68 = iParam2;
	Global_42834.f_24 = iParam3;
	if (iParam3 & 16 >= 0)
	{
		Global_42834.f_24 |= 131072;
	}
	if (iParam3 & 32 >= 0)
	{
		Global_42834.f_24 |= 262144;
	}
	if (!IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	}
	if (GET_OBJECTSET_SIZE(&Global_42834 + 16) >= 0)
	{
		Function_374(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_374(float fParam0) //Position: 0x15544 / 87364
{
	float fVar0;
	
	if (!IS_OBJECTSET_VALID(&fParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&fParam0) >= 0)
	{
		fVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &fParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&fVar0, &fParam0);
		CLEAN_OBJECTSET(&fParam0);
		if (IS_OBJECT_VALID(&fVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&fVar0));
		}
	}
	return;
}

var Function_375(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x1558D / 87437
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &iParam8, &bParam11, 0, &iParam12, &bParam15);
	if (IS_OBJECT_VALID(&cVar2))
	{
		strcpy(&cVar3, &cParam1, 32);
		if (IS_STRING_VALID(&cParam1))
		{
			stradd(&cVar3, "restrict", 32);
		}
		fVar11 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uParam0, &cVar3, 2, Param2, Param4, Vector(5.0f, 5.0f, 5.0f));
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

bool Function_376(bool bParam0) //Position: 0x15678 / 87672
{
	if (IS_ACTOR_ALIVE(&bLocal_551))
	{
		if (DECOR_GET_BOOL(&bLocal_553, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_553, 1);
			DECOR_REMOVE(&bLocal_553, "DisallowPlayerRide");
		}
		if (DECOR_GET_BOOL(&bLocal_551, "DisallowPlayerRide"))
		{
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_551, 1);
			DECOR_REMOVE(&bLocal_551, "DisallowPlayerRide");
		}
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (GET_MOUNT(&Global_54076) == &bLocal_553)
			{
				bLocal_553 = &bLocal_551;
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_553);
				TASK_MOUNT(&bLocal_549, &bLocal_553, 0, 1, 2, 2147483647);
				bLocal_551 = GET_MOUNT(&Global_54076);
				Function_377(&bLocal_551, 0);
			}
			if (IS_ACTOR_RIDING(&bLocal_549))
			{
				return 1;
			}
			if (GET_TASK_STATUS(&bLocal_549, 11) != 1)
			{
				TASK_MOUNT(&bLocal_549, &bLocal_553, 0, 1, 2, 2147483647);
			}
		}
		else if (bParam0)
		{
			if (IS_ACTOR_RIDING(&bLocal_549))
			{
				return 1;
			}
			if (GET_TASK_STATUS(&bLocal_549, 11) != 1)
			{
				TASK_MOUNT(&bLocal_549, &bLocal_553, 0, 1, 2, 2147483647);
			}
		}
		else if (IS_ACTOR_RIDING(&bLocal_549))
		{
			TASK_DISMOUNT(&bLocal_549, 1);
			CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_549);
			MEMORY_PREFER_RIDING(&bLocal_549, false);
		}
		else
		{
			return 1;
		}
	}
	if (!DECOR_GET_BOOL(&bLocal_553, "DisallowPlayerRide"))
	{
		SET_ALLOW_RIDE_BY_PLAYER(&bLocal_553, 0);
		DECOR_SET_BOOL(&bLocal_553, "DisallowPlayerRide", 1);
	}
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&bLocal_549))
		{
			return 1;
		}
		if (GET_TASK_STATUS(&bLocal_549, 11) != 1)
		{
			TASK_MOUNT(&bLocal_549, &bLocal_553, 0, 1, 2, 2147483647);
		}
	}
	return 0;
}

void Function_377(int iParam0, int iParam1) //Position: 0x15875 / 88181
{
	Function_378(&iParam1);
	*(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_378(bool bParam0) //Position: 0x1588A / 88202
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
	{
		TASK_CLEAR(&Global_21369 + 72);
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (&bParam0 == 0.0f)
		{
			TASK_STAND_STILL(&Global_21369 + 72, &bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(&Global_21369 + 400))
	{
		REMOVE_BLIP(&Global_21369 + 400);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(&Global_54076, "WhistleNavQuery"));
		DECOR_REMOVE(&Global_54076, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistlePosProbed"))
	{
		DECOR_REMOVE(&Global_54076, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(&Global_54076, "WhistleTimeWaited");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "Player_SimWhistle"))
	{
		DECOR_REMOVE(&Global_54076, "Player_SimWhistle");
	}
	return;
}

void Function_379(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x15A59 / 88665
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (bParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (bParam2 != Global_53524.f_48 && !Function_386())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_385(0);
	Function_384();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_382(bParam2);
	}
	Function_381(uParam3, iVar0, iVar1);
	Function_380();
}

void Function_380() //Position: 0x15B02 / 88834
{
	if (Global_119941)
	{
		UNK_0x6287203C(Global_53524.f_184);
		PRINTSTRING("Set difficulty level to ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	return;
}

void Function_381(int iParam0, bool bParam1, bool bParam2) //Position: 0x15B43 / 88899
{
	Global_53524.f_28 = 1;
	Global_53524.f_32 = 0;
	if (&bParam1)
	{
		Global_53524.f_64++;
	}
	if (&bParam2)
	{
		Global_53524.f_68 = 0;
		if (Global_53524.f_184 >= 0)
		{
			Global_53524.f_184 = (Global_53524.f_184 - 1);
			PRINTSTRING("Increasing difficulty by one level. New difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
			PRINTSTRING("Current difficulty is ");
			PRINTINT(Global_53524.f_184);
			PRINTNL();
		}
	}
	else
	{
		Global_53524.f_184++;
		Global_53524.f_68++;
		PRINTSTRING("Current difficulty is ");
		PRINTINT(Global_53524.f_184);
		PRINTNL();
	}
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	if (iParam0 == 4294967295)
	{
		Global_53524.f_24 = Global_43788;
	}
	else
	{
		Global_53524.f_24 = iParam0;
	}
	if (Function_85(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_382(bool bParam0) //Position: 0x15CAC / 89260
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_383() };
	PLAYSTAT_STRING("HC_MISSION_NAME", &Var0);
	PLAYSTAT_INT("HC_MISSION_STAGE", bParam0);
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
	PLAYSTAT_INT("HC_MONEY", Function_67(0));
	PLAYSTAT_INT("HC_FAME", Function_67(3));
	PLAYSTAT_INT("HC_HONOR", Function_67(1));
	return;
}

struct<16> Function_383() //Position: 0x15E44 / 89668
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 <= Global_6667)
	{
		if (IS_SCRIPT_VALID(&Global_6667[iVar028] + 160))
		{
			Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[iVar028] + 16) };
			return StackVal, StackVal, StackVal, Var1;
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, Var1;
}

void Function_384() //Position: 0x15E8A / 89738
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_385(bool bParam0) //Position: 0x15EAE / 89774
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_68 = bParam0;
	if (bParam0)
	{
		Var0.f_72 = 1;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

bool Function_386() //Position: 0x15EDD / 89821
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_387(struct<69> Param0) //Position: 0x15EF8 / 89848
{
	if (IS_OBJECT_VALID(&Param0))
	{
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHuman"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHuman");
		}
		if (DECOR_CHECK_EXIST(&Param0, "MFT_LimitHorse"))
		{
			DECOR_REMOVE(&Param0, "MFT_LimitHorse");
		}
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Param0 = "";
	strcpy(&Param0 + 8, "", 24);
	Param0.f_64 = 0;
	Param0.f_68 = 0;
	return;
}

void Function_388(int iParam0, int iParam1) //Position: 0x15FB8 / 90040
{
	if (iParam1 != 100000000)
	{
		Function_391(&iParam0, iParam1);
	}
	else
	{
		Function_389(&iParam0, 1);
	}
	return;
}

void Function_389(struct<69> Param0) //Position: 0x15FDA / 90074
{
	Param0.f_68 = 0;
	Function_390(&Param0, 2, &bParam1);
	Function_390(&Param0, 4, &bParam1);
	Function_390(&Param0, 8, &bParam1);
	Function_390(&Param0, 16, &bParam1);
	Function_390(&Param0, 32, &bParam1);
	Function_390(&Param0, 64, &bParam1);
	Function_390(&Param0, 128, &bParam1);
	Function_390(&Param0, 256, &bParam1);
	Function_390(&Param0, 512, &bParam1);
	Function_390(&Param0, 1024, &bParam1);
	return;
}

void Function_390(int iParam0, int iParam1, bool bParam2) //Position: 0x16055 / 90197
{
	bool bVar0;
	
	Function_77(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_77(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_77(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_391(int iParam0, bool bParam1) //Position: 0x16094 / 90260
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_392(struct<69> Param0) //Position: 0x160C1 / 90305
{
	if (!Function_396(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_395(&Param0, &bParam2))
	{
		return 0;
	}
	Function_394(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_393(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_393(var uParam0, int iParam1, int iParam2) //Position: 0x16107 / 90375
{
	if (iParam1 != 100000000)
	{
		Function_390(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_389(&uParam0, &iParam2);
	}
	return;
}

void Function_394(struct<65> Param0) //Position: 0x1612E / 90414
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_395(int iParam0, char* cParam1) //Position: 0x1613B / 90427
{
	if (!IS_STRING_VALID(&cParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name invalid!");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) > 24)
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_NAME: Name too long!");
		return 0;
	}
	strcpy(&iParam0 + 8, &cParam1, 24);
	return 1;
}

bool Function_396(struct<61> Param0) //Position: 0x161C8 / 90568
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&iParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &iParam1;
	Param0.f_56 = GET_OBJECT_TYPE(&Param0);
	Param0.f_60 = 2;
	switch (Param0.f_56)
	{
		case 0x0000000F:
			uVar0 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_HORSE(&uVar0))
				{
					Param0.f_60 = 1;
				}
				else if (IS_ACTOR_VEHICLE(&uVar0))
				{
					Param0.f_60 = 3;
				}
			}
			break;
		
		case 0x00000019:
			uVar1 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (SQUAD_IS_VALID(&uVar1))
			{
				if (SQUAD_GET_SIZE(&uVar1) >= 0)
				{
					uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uVar1, false);
					if (IS_ACTOR_VALID(&uVar2))
					{
						if (IS_ACTOR_HORSE(&uVar2))
						{
							Param0.f_60 = 1;
						}
						else if (IS_ACTOR_VEHICLE(&uVar2))
						{
							Param0.f_60 = 3;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			uVar3 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (IS_OBJECTSET_VALID(&uVar3))
			{
				if (GET_OBJECTSET_SIZE(&uVar3) >= 0)
				{
					uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar3);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							if (IS_ACTOR_HORSE(&uVar5))
							{
								Param0.f_60 = 1;
							}
							else if (IS_ACTOR_VEHICLE(&uVar5))
							{
								Param0.f_60 = 3;
							}
						}
					}
				}
			}
			break;
		
		default:
			LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object type not supported!");
			return 0;
			break;
	}
	return 1;
}

bool Function_397() //Position: 0x1637B / 91003
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 184))
	{
		Function_289();
		if (SQUAD_IS_VALID(&iLocal_4 + 184))
		{
			Function_288(&iLocal_4 + 184, 0);
			Function_287(&iLocal_4 + 184, 3);
			Function_286(&iLocal_4 + 184, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				bLocal_553 = &iLocal_4 + 160[02];
				Function_335(&bLocal_553, &iLocal_4 + 960[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_553);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_553);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_553, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 184, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_843))
	{
		Function_335(&bLocal_843, &iLocal_4 + 960[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_843))
		{
			SET_ACTOR_FACTION(&bLocal_843, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_843, false);
			Function_285(&bLocal_843, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_843, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_843, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_843, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_843, 1);
			DECOR_SET_BOOL(&bLocal_843, "Frank", 1);
			TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_843, true);
		}
	}
	else if (!iLocal_567[2])
	{
		Function_335(&bLocal_843, &iLocal_4 + 960[4], 1, 1, 1);
	}
	if (IS_ACTOR_VALID(&bLocal_843))
	{
		return 1;
	}
	return 0;
}

void Function_398() //Position: 0x164D5 / 91349
{
	if (Function_267(&iLocal_876) <= 1.0f)
	{
		switch (iLocal_840)
		{
			case 0x00000000:
				iLocal_842 = Function_417();
				iLocal_840++;
				break;
			
			case 0x00000001:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_545 > 8)
				{
					Function_399();
				}
				break;
			}
	}
	return;
}

int Function_399() //Position: 0x16529 / 91433
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_269(&iLocal_888))
		{
			Function_403(&iLocal_888);
		}
	}
	else if (!Function_269(&iLocal_888))
	{
		Function_220(&iLocal_888);
	}
	else
	{
		switch (iLocal_842)
		{
			case 0x00000000:
				if (Function_267(&iLocal_888) < 4.0f)
				{
					Function_402();
					iLocal_842++;
				}
				break;
			
			case 0x00000001:
				if (Function_267(&iLocal_888) < 4.0f)
				{
					Function_401();
					iLocal_842++;
				}
				break;
			
			case 0x00000002:
				if (Function_267(&iLocal_888) < 4.0f)
				{
					Function_400();
					iLocal_842++;
				}
				break;
			
			default:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_400() //Position: 0x165C5 / 91589
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v3_AA", "Home02_s2_Bak2RanchBant_v3_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v3_AB", "Home02_s2_Bak2RanchBant_v3_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v3_AC1", "Home02_s2_Bak2RanchBant_v3_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v3_AC2", "Home02_s2_Bak2RanchBant_v3_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v3_AD", "Home02_s2_Bak2RanchBant_v3_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v3_AE", "Home02_s2_Bak2RanchBant_v3_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v3_AF", "Home02_s2_Bak2RanchBant_v3_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v3_AG", "Home02_s2_Bak2RanchBant_v3_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v3_AH1", "Home02_s2_Bak2RanchBant_v3_AH1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v3_AH2", "Home02_s2_Bak2RanchBant_v3_AH2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v3_AI", "Home02_s2_Bak2RanchBant_v3_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v3_AJ1", "Home02_s2_Bak2RanchBant_v3_AJ1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v3_AJ2", "Home02_s2_Bak2RanchBant_v3_AJ2", 1, 1, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_401() //Position: 0x169A0 / 92576
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v2_AA", "Home02_s2_Bak2RanchBant_v2_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v2_AB", "Home02_s2_Bak2RanchBant_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v2_AC", "Home02_s2_Bak2RanchBant_v2_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v2_AD", "Home02_s2_Bak2RanchBant_v2_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v2_AE1", "Home02_s2_Bak2RanchBant_v2_AE1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v2_AE2", "Home02_s2_Bak2RanchBant_v2_AE2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v2_AF", "Home02_s2_Bak2RanchBant_v2_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v2_AG", "Home02_s2_Bak2RanchBant_v2_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v2_AH1", "Home02_s2_Bak2RanchBant_v2_AH1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v2_AH2", "Home02_s2_Bak2RanchBant_v2_AH2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v2_AH3", "Home02_s2_Bak2RanchBant_v2_AH3", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v2_AI", "Home02_s2_Bak2RanchBant_v2_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v2_AJ", "Home02_s2_Bak2RanchBant_v2_AJ", 1, 1, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_402() //Position: 0x16D79 / 93561
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v1_AA", "Home02_s2_Bak2RanchBant_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v1_AB", "Home02_s2_Bak2RanchBant_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v1_AC", "Home02_s2_Bak2RanchBant_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v1_AD", "Home02_s2_Bak2RanchBant_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v1_AE", "Home02_s2_Bak2RanchBant_v1_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v1_AF", "Home02_s2_Bak2RanchBant_v1_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v1_AG", "Home02_s2_Bak2RanchBant_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_1560", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v1_AH1", "Home02_s2_Bak2RanchBant_v1_AH1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_Bak2RanchBant_v1_AH2", "Home02_s2_Bak2RanchBant_v1_AH2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_Bak2RanchBant_v1_AI", "Home02_s2_Bak2RanchBant_v1_AI", 0, 1, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_403(vector3 vParam0) //Position: 0x17090 / 94352
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_404(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x170A7 / 94375
{
	if (Function_267(&iLocal_880) <= 3.0f)
	{
		if (!iLocal_583)
		{
			if (IS_WEAPON_DRAWN(&Global_54076))
			{
				if (Function_416(GET_WEAPON_IN_HAND(&Global_54076)))
				{
					if (IS_ACTOR_SHOOTING(&Global_54076))
					{
						if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
						{
							if (Function_415(RAND_INT_RANGE(4294967291, true)))
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_ShootsGunRand", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_LowOnAmmo", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							}
							Function_220(&iLocal_880);
						}
					}
				}
			}
		}
		Function_409();
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			if (&bParam0)
			{
				if (!iLocal_858)
				{
					iLocal_858 = 1;
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GetsOffHors", "", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_220(&iLocal_880);
				}
				else if (Function_267(&iLocal_559) <= 10.0f)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_NoGetOnHors", "", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_220(&iLocal_880);
					Function_220(&iLocal_559);
				}
			}
		}
		else
		{
			if (&bParam0)
			{
				if (iLocal_858)
				{
					iLocal_858 = 0;
				}
			}
			if (&bParam0)
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (IS_ACTION_NODE_PLAYING(&bLocal_551, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject"))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_JonThrow4mHorse", "", 1, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_220(&iLocal_880);
					}
				}
			}
			if (&bParam0)
			{
				if (!iLocal_859)
				{
					if (!iLocal_860)
					{
						if (GET_ACTOR_VELOCITY(&Global_54076, &Local_927))
						{
							if (VMAG(Local_927) >= 1.0f)
							{
								if (!Function_269(&iLocal_830))
								{
									Function_220(&iLocal_830);
								}
								else if (Function_267(&iLocal_830) <= 2.0f)
								{
									iLocal_860 = 1;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_StopsHors", "", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_220(&iLocal_880);
									Function_403(&iLocal_830);
								}
							}
							else if (Function_269(&iLocal_830))
							{
								Function_403(&iLocal_830);
							}
						}
					}
				}
			}
			if (&bParam0)
			{
				if (iLocal_860)
				{
					if (GET_ACTOR_VELOCITY(&Global_54076, &Local_927))
					{
						if (VMAG(Local_927) <= 1.0f)
						{
							iLocal_860 = 0;
						}
					}
				}
			}
			if (&bParam0)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 1,35f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_RidesIntoJakHors", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_220(&iLocal_880);
				}
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_843, (1,35f - 0,35f)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_HorseInDog", "", 0, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
					Function_220(&iLocal_880);
				}
			}
			if (&bParam1)
			{
				if (((!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 744) && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 752)) && !IS_ACTOR_IN_VOLUME(&bLocal_549, &iLocal_4 + 744)) && !IS_ACTOR_IN_VOLUME(&bLocal_549, &iLocal_4 + 752))
				{
					if (!Function_406(&Global_54076, &bLocal_549, &iParam2))
					{
						if (!iLocal_860)
						{
							if (!iLocal_859)
							{
								if (Function_405(&Global_54076, &bLocal_549, &iLocal_4 + 1824))
								{
									iLocal_859 = 1;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_2FarBehind", "", 1, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_220(&iLocal_880);
								}
								else
								{
									iLocal_859 = 1;
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_2FarAhead", "", 1, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_220(&iLocal_880);
								}
							}
						}
					}
				}
			}
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, &iParam3))
			{
				if (&bParam1)
				{
					if (iLocal_859)
					{
						iLocal_859 = 0;
						if (((!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 744) && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 752)) && !IS_ACTOR_IN_VOLUME(&bLocal_549, &iLocal_4 + 744)) && !IS_ACTOR_IN_VOLUME(&bLocal_549, &iLocal_4 + 752))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_KeepUp", "", 1, 1, 1, 3, 1, 0, 0, 1000, 0, 0);
						}
						Function_220(&iLocal_880);
					}
				}
			}
		}
	}
}

bool Function_405(var uParam0, var uParam1, int iParam2) //Position: 0x17590 / 95632
{
	var uVar0;
	var uVar2;
	float fVar4;
	var uVar5;
	float fVar6;
	var uVar7;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (IS_OBJECT_VALID(&iParam2))
			{
				GET_OBJECT_POSITION(&uParam0, &uVar0);
				ESTIMATE_DISTANCE_ALONG_PATH(&iParam2, &uVar0, &fVar4, &uVar5);
				GET_OBJECT_POSITION(&uParam1, &uVar2);
				ESTIMATE_DISTANCE_ALONG_PATH(&iParam2, &uVar2, &fVar6, &uVar7);
				if (fVar4 > fVar6)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_406(bool bParam0, var uParam1, float fParam2) //Position: 0x175EF / 95727
{
	float fVar0;
	
	fVar0 = Function_407(&bParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_407(var uParam0, int iParam1) //Position: 0x1760E / 95758
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_408(&uVar0, &uVar2);
	return iVar4;
}

var Function_408(struct<2> Param0) //Position: 0x1762F / 95791
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_409() //Position: 0x1764E / 95822
{
	int iVar0;
	
	iVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (&iVar0 == &bLocal_549)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_416(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_414();
						Function_220(&iLocal_880);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_414();
						Function_220(&iLocal_880);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_414();
					Function_220(&iLocal_880);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnJak", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_220(&iLocal_880);
			}
		}
		else if (&iVar0 == &bLocal_551)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_416(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_413();
						Function_220(&iLocal_880);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnChar", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_220(&iLocal_880);
					}
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnChar", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_220(&iLocal_880);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnChar", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_220(&iLocal_880);
			}
		}
		else if (&iVar0 == &bLocal_553)
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_416(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_412();
						Function_220(&iLocal_880);
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnChar", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_220(&iLocal_880);
					}
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnChar", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_220(&iLocal_880);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnChar", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_220(&iLocal_880);
			}
		}
		else if (!IS_ACTOR_ANIMAL(&iVar0) && !AI_IS_HOSTILE_OR_ENEMY(&iVar0, &Global_54076))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_WEAPON_DRAWN(&Global_54076))
				{
					if (Function_416(GET_WEAPON_IN_HAND(&Global_54076)))
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_411();
						Function_220(&iLocal_880);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
						Function_411();
						Function_220(&iLocal_880);
					}
				}
				else
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_411();
					Function_220(&iLocal_880);
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_GunOnChar", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				Function_220(&iLocal_880);
			}
		}
		else if (bLocal_544 == 1)
		{
			if (!Function_410(&iVar0, &iLocal_4 + 280, 0))
			{
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (IS_WEAPON_DRAWN(&Global_54076))
					{
						if (Function_416(GET_WEAPON_IN_HAND(&Global_54076)))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_ShootsWrongAnim", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							Function_220(&iLocal_880);
						}
					}
				}
			}
		}
		else if (bLocal_544 == 2)
		{
			if (!Function_410(&iVar0, &iLocal_4 + 392, 0))
			{
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (IS_WEAPON_DRAWN(&Global_54076))
					{
						if (Function_416(GET_WEAPON_IN_HAND(&Global_54076)))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_549, "Home02_s2_ShootsWrongAnim", "", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
							Function_220(&iLocal_880);
						}
					}
				}
			}
		}
	}
	return;
}

bool Function_410(int iParam0, int iParam1, bool bParam2) //Position: 0x17A3E / 96830
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

void Function_411() //Position: 0x17A86 / 96902
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_ShootsOtherChar", "Home02_s2_ShootsOtherChar", 0, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_412() //Position: 0x17AE1 / 96993
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_ShootsJakHors", "Home02_s2_ShootsJakHors", 0, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_413() //Position: 0x17B38 / 97080
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_KilledHisHors", "Home02_s2_KilledHisHors", 0, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_414() //Position: 0x17B8F / 97167
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_AssaultsJack", "Home02_s2_AssaultsJack", 0, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_415(bool bParam0) //Position: 0x17BE4 / 97252
{
	if (bParam0 > 1)
	{
		return 1;
	}
	return 0;
}

bool Function_416(bool bParam0) //Position: 0x17BF6 / 97270
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	bParam0 = UNK_0xDB679ED9(bParam0);
	switch (bParam0)
	{
		case 0x00000027:
		case 0x00000029:
		case 0x00000028:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
			return 1;
			break;
	}
	return 0;
}

int Function_417() //Position: 0x17C3C / 97340
{
	return Global_53524.f_68;
}

void Function_418() //Position: 0x17C47 / 97351
{
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_461();
		Function_452();
		Function_448();
		if (iLocal_545 < 19)
		{
			if (SQUAD_IS_VALID(&iLocal_4 + 392))
			{
				if (Function_447(&iLocal_4 + 392) == 0)
				{
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_239();
					Function_220(&iLocal_555);
					iLocal_545 = 20;
				}
			}
		}
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_567[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				bLocal_546 = Global_46754[1];
				if (!Function_337(bLocal_546))
				{
					Function_336(&Local_464);
				}
				Function_335(&Global_54076, &iLocal_4 + 904[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_220(&iLocal_555);
				iLocal_545 = 1;
			}
			else
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_337(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_438())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_840 = 0;
				iLocal_836 = 0;
				iLocal_854 = 1;
				iLocal_856 = 0;
				iLocal_855 = 0;
				iLocal_858 = 0;
				iLocal_859 = 0;
				iLocal_860 = 0;
				bLocal_837 = Function_437(Local_464);
				PRINTINT(bLocal_837);
				PRINTNL();
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					SET_ACTOR_HEALTH(&bLocal_843, GET_ACTOR_MAX_HEALTH(&bLocal_843));
				}
				if (iLocal_567[1] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_335(&bLocal_551, &iLocal_4 + 904[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_551))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_551);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (IS_ACTOR_VALID(&bLocal_553))
						{
							Function_335(&bLocal_553, &iLocal_4 + 904[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_553))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_553);
							}
						}
					}
				}
				if (SQUAD_IS_VALID(&iLocal_4 + 280) && SQUAD_IS_VALID(&iLocal_4 + 392))
				{
					Function_434(&iLocal_4 + 280, &iLocal_4 + 1648, 2, 1,5f, 1,5f, 1);
					Function_433(&iLocal_4 + 280, &iLocal_4 + 392);
					Function_432(&iLocal_4 + 392, &iLocal_4 + 600, 1, 1);
				}
				SET_CRIPPLE_ENABLE(&bLocal_843, 0);
				TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "GROWL");
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&bLocal_549));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_549, 13, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_549, 75.0f);
				Function_303(12, 0, 1);
				MEMORY_PREFER_RIDING(&bLocal_549, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_549, true);
				AI_RIDING_SET_ATTRIBUTE(&bLocal_549, 2, 0,15f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 4294967295);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_553);
				iLocal_583 = 0;
				Function_392(&(Local_638[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_388(&(Local_638[015]), 1024);
				Function_392(&(Local_638[115]), &bLocal_843, "Dog", 0, 0x5f5e100, 1);
				Function_388(&(Local_638[115]), 1024);
				Function_392(&(Local_638[215]), &bLocal_847, "Uncle", 0, 0x5f5e100, 1);
				Function_392(&(Local_638[315]), &bLocal_845, "Wife", 0, 0x5f5e100, 1);
				Function_387(&(Local_638[415]));
				Function_387(&(Local_638[515]));
				Function_220(&iLocal_555);
				iLocal_545 = 6;
				Function_234(bLocal_544);
				Function_379(StackVal, Function_234(bLocal_544), bLocal_544, Global_46754[1], Function_237(bLocal_544), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_583 = 1;
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				if (!IS_OBJECT_VALID(&uLocal_930))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_930 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_462, "HOME02SON02_CAMERA_FOCUS", &bLocal_843, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_930))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_930, 0);
						}
					}
				}
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_843);
				Local_892[02] = Vector(-3.0f, 0.0f, 6.0f);
				TASK_FOLLOW_OBJECT(&bLocal_843, &Global_54076, &(Local_892[02]), 0, 0, 0, 0, 0, 0, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_549, &Global_54076, 7.0f, 4);
				if (bLocal_857)
				{
					Function_431();
				}
				else
				{
					Function_430();
				}
				Function_220(&iLocal_555);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			Function_327(&uLocal_829, 44, 0, 4294967295, 4294967295);
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				Function_367("home02_son02_obj05", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_BLIP_VALID(&uLocal_851))
			{
				REMOVE_BLIP(&uLocal_851);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 392))
			{
				Function_429();
				if (iLocal_855)
				{
					if (!Function_427(&iLocal_4 + 392, 1.0f, 200.0f, 1, 1) && !Function_426(&Global_54076, &iLocal_4 + 392, 100.0f))
					{
						iLocal_856 = 1;
						iLocal_855 = 0;
						iLocal_854 = 0;
						Function_425(&iLocal_4 + 392);
						Function_239();
						Function_220(&iLocal_555);
						iLocal_545 = 9;
						Function_327(&uLocal_829, 13, 0, 4294967295, 4294967295);
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_BLIP_VALID(&uLocal_851))
			{
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
					SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
					if (IS_BLIP_VALID(&uLocal_851))
					{
					}
				}
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			iLocal_909 = Vector(3.0f, 0.0f, 1.0f);
			TASK_FOLLOW_OBJECT(&bLocal_549, &bLocal_843, &iLocal_909, 0, 0, 0, 0, 0, 0, 1);
			Function_220(&iLocal_555);
			iLocal_545 = 10;
			break;
		
		case 0x0000000A:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				iLocal_583 = 0;
				Function_327(&uLocal_829, 13, 0, 4294967295, 4294967295);
				if (iLocal_856)
				{
					if (Function_415(RAND_INT_RANGE(0, true)))
					{
						Function_424();
					}
					else
					{
						Function_423();
					}
				}
				else
				{
					Function_422();
				}
				Function_220(&iLocal_555);
				iLocal_545 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				Function_367("home02_son02_obj06", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_352(&iLocal_563, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_580, 0, &cLocal_462, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&uLocal_851))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
						SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&uLocal_851))
						{
						}
					}
				}
				Function_420(&iLocal_563, 60.0f, 200.0f, &bLocal_843, "Dog_return", "Dog_abandoned", &bLocal_580, 0, 0, 0, 325, 1);
			}
			Function_327(&uLocal_829, 13, 0, 4294967295, 4294967295);
			if (IS_VOLUME_VALID(&iLocal_4 + 704))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 704))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 704);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 712))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 712))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 712);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 720))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 720))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 720);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (Function_269(&iLocal_868))
			{
				if (Function_267(&iLocal_868) < 5.0f)
				{
					Function_403(&iLocal_868);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				}
			}
			if (!Function_406(&bLocal_843, &Global_54076, 60.0f))
			{
				if (!GET_TASK_STATUS(&bLocal_843, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_843, &Global_54076, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_843, 0) != 1)
			{
				bLocal_834 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(&iLocal_4 + 704))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1504[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 712))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1552[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 720))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1600[0], 3.0f, 3, 1, 1);
				}
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1456[3], 3.0f, 3, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_843, bLocal_834);
				TASK_SEQUENCE_RELEASE(bLocal_834, 1);
			}
			if ((GET_TASK_STATUS(&bLocal_843, 6) != 1 && ACTORS_IN_RANGE(&Global_54076, &bLocal_843, 20.0f)) || Function_427(&iLocal_4 + 392, 1.0f, 200.0f, 1, 1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_843);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				GET_OBJECT_POSITION(&iLocal_4 + 1656, &uLocal_906);
				TASK_FACE_COORD(&bLocal_843, &uLocal_906, 0);
				if (iLocal_854)
				{
				}
				else
				{
					iLocal_854 = 1;
					bLocal_857 = true;
				}
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
				Function_239();
				Function_220(&iLocal_555);
				iLocal_545 = 17;
			}
			break;
		
		case 0x00000011:
			iLocal_854 = 1;
			iLocal_856 = 0;
			iLocal_855 = 0;
			iLocal_583 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			Function_327(&uLocal_829, 44, 0, 4294967295, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_549, &Global_54076, 7.0f, 4);
			if (ACTOR_HAS_WEAPON(&bLocal_549, 41))
			{
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_549, 41, 1);
			}
			if (bLocal_857)
			{
				Function_431();
			}
			else
			{
				Function_430();
			}
			Function_220(&iLocal_555);
			iLocal_545 = 18;
			break;
		
		case 0x00000012:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				Function_367("home02_son02_obj07", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 19;
			}
			break;
		
		case 0x00000013:
			if (IS_BLIP_VALID(&uLocal_851))
			{
				REMOVE_BLIP(&uLocal_851);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 392))
			{
				Function_429();
				if (iLocal_855)
				{
					if (!Function_427(&iLocal_4 + 392, 1.0f, 200.0f, 1, 1) && !Function_426(&Global_54076, &iLocal_4 + 392, 100.0f))
					{
						iLocal_856 = 1;
						iLocal_855 = 0;
						iLocal_854 = 0;
						Function_425(&iLocal_4 + 392);
						ABORT_SCRIPTED_CONVERSATION(1);
						Function_239();
						Function_220(&iLocal_555);
						iLocal_545 = 20;
					}
				}
			}
			break;
		
		case 0x00000014:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				iLocal_583 = 0;
				Function_327(&uLocal_829, 13, 0, 4294967295, 4294967295);
				if (SQUAD_IS_VALID(&iLocal_4 + 392))
				{
					if (Function_447(&iLocal_4 + 392) > 1)
					{
						iLocal_853 = 1;
					}
					else
					{
						Function_419();
					}
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 0);
				Function_220(&iLocal_555);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_567[2] = 1;
			Function_220(&iLocal_555);
			bLocal_544 = 3;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_419() //Position: 0x187E6 / 100326
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_AllWolfsDed", "Home02_s2_AllWolfsDed", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_420(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x18839 / 100409
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_421(&Global_54076, &iParam3, iParam2))
	{
		Function_228(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_421(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_360(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_367(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_358(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_357(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_357(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_360(2))
	{
		Function_356(2);
		if (!Function_355())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_353();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_215(&iParam3);
				Function_304(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_357(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_357(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_421(var uParam0, var uParam1, bool bParam2) //Position: 0x189F7 / 100855
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an actor, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_422() //Position: 0x18B0C / 101132
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_KillWolfs1", "Home02_s2_KillWolfs1", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_423() //Position: 0x18B5D / 101213
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_LoseWolfs3", "Home02_s2_LoseWolfs3", 0, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_424() //Position: 0x18BAE / 101294
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_LoseWolfs2", "Home02_s2_LoseWolfs2", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_425(int iParam0) //Position: 0x18BFF / 101375
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

bool Function_426(var uParam0, bool bParam1, bool bParam2) //Position: 0x18C53 / 101459
{
	bool bVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (SQUAD_IS_VALID(&bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					if (Function_421(&uParam0, &iVar1, bParam2))
					{
						return 1;
					}
				}
				bVar0++;
			}
		}
	}
	return 0;
}

bool Function_427(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4) //Position: 0x18CAF / 101551
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (Function_428(&uVar1, &fParam1, &fParam2, &iParam3, &iParam4, 0))
				{
					return 1;
				}
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_428(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x18D0B / 101643
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_429() //Position: 0x18D2B / 101675
{
	if (Function_269(&iLocal_880))
	{
		if (Function_267(&iLocal_880) < 3.0f)
		{
			if (Function_267(&iLocal_559) <= RAND_FLOAT_RANGE(8.0f, 13.0f))
			{
				if (Function_415(RAND_INT_RANGE(0, true)))
				{
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&Global_54076, "Home02_s2_JonShoutsEncoJak", &bLocal_549, 0, 1, 0, 1, 2);
						}
					}
				}
				else if (IS_ACTOR_VALID(&bLocal_549))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 36.0f))
					{
						SAY_SINGLE_LINE_SCRIPTED(&bLocal_549, "Home02_s2_JakEncoJon", &Global_54076, 0, 1, 0, 1, 2);
					}
				}
				Function_220(&iLocal_559);
			}
		}
	}
	return;
}

void Function_430() //Position: 0x18DFE / 101886
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_DogFindsWolfs", "Home02_s2_DogFindsWolfs", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x18E55 / 101973
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_JonC1st", "Home02_s2_JonC1st", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_432(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x18EA0 / 102048
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_433(bool bParam0, bool bParam1) //Position: 0x18EF8 / 102136
{
	bool bVar0;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		if (SQUAD_IS_VALID(&bParam1))
		{
			while (SQUAD_GET_SIZE(&bParam0) >= 0)
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, false);
				if (IS_ACTOR_VALID(&bVar0))
				{
					SQUAD_LEAVE(&bVar0);
					SQUAD_JOIN(&bVar0, &bParam1);
				}
			}
		}
	}
	return;
}

void Function_434(var uParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5) //Position: 0x18F45 / 102213
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	struct<2> Var5;
	struct<5> Var7;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&bParam1))
		{
			Function_235(&bParam1);
			Var3 = Function_235(&bParam1);
			Function_436(&bParam1);
			Var7 = Function_436(&bParam1);
			Var5 = Var3;
			Var5.f_4 = (StackVal + fParam4);
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (iVar1 > iParam2)
					{
						iVar1 = 0;
						Var5 = Var3;
						Var5.f_8 = (StackVal + fParam3);
					}
					if (bParam5)
					{
						Var7.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
					}
					Function_435(StackVal, StackVal, &uVar2, Var5, 1, 1, 1);
					iVar1++;
					Var5 = (Var5 + fParam3);
				}
				bVar0++;
			}
		}
	}
}

void Function_435(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x18FFF / 102399
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			if (!IS_ACTOR_RIDING(&uParam0))
			{
				ACTOR_MOUNT_ACTOR(&uParam0, &uVar0);
			}
		}
		else
		{
			uVar0 = GET_VEHICLE(&uParam0);
			if (IS_ACTOR_VALID(&uVar0))
			{
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, bParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

struct<8> Function_436(int iParam0) //Position: 0x190CE / 102606
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

bool Function_437(int iParam0) //Position: 0x190F7 / 102647
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_438() //Position: 0x19111 / 102673
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 184))
	{
		Function_289();
		if (SQUAD_IS_VALID(&iLocal_4 + 184))
		{
			Function_288(&iLocal_4 + 184, 0);
			Function_287(&iLocal_4 + 184, 3);
			Function_286(&iLocal_4 + 184, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				bLocal_553 = &iLocal_4 + 160[02];
				Function_335(&bLocal_553, &iLocal_4 + 904[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_553);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_553);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_553, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 184, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_843))
	{
		Function_335(&bLocal_843, &iLocal_4 + 904[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_843))
		{
			SET_ACTOR_FACTION(&bLocal_843, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_843, false);
			Function_285(&bLocal_843, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_843, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_843, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_843, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_843, 1);
			DECOR_SET_BOOL(&bLocal_843, "Frank", 1);
			TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_843, true);
		}
	}
	else if (!iLocal_567[1])
	{
		Function_335(&bLocal_843, &iLocal_4 + 904[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 280))
	{
		Function_446();
		if (SQUAD_IS_VALID(&iLocal_4 + 280))
		{
			Function_288(&iLocal_4 + 280, 0);
			Function_445(&iLocal_4 + 280, 1);
			Function_286(&iLocal_4 + 280, 1, 1, 1);
			Function_444(&iLocal_4 + 280, &bLocal_549);
			Function_443(&iLocal_4 + 280, (5 - bLocal_837));
			Function_434(&iLocal_4 + 280, &iLocal_4 + 1648, 3, 2.0f, 4.0f, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 600, -1.0f);
			Function_432(&iLocal_4 + 280, &iLocal_4 + 600, 1, 1);
		}
	}
	Function_439();
	if (IS_ACTOR_VALID(&bLocal_843))
	{
		return 1;
	}
	return 0;
}

void Function_439() //Position: 0x19307 / 103175
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 392))
	{
		Function_442();
		if (SQUAD_IS_VALID(&iLocal_4 + 392))
		{
			Function_288(&iLocal_4 + 392, 0);
			Function_445(&iLocal_4 + 392, 1);
			Function_441(&iLocal_4 + 392, 1);
			Function_440(&iLocal_4 + 392, 1);
			Function_444(&iLocal_4 + 392, &bLocal_549);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 600, -1.0f);
			Function_432(&iLocal_4 + 280, &iLocal_4 + 600, 1, 1);
		}
	}
	return;
}

void Function_440(var uParam0, int iParam1) //Position: 0x1938D / 103309
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_CAN_BE_HARDLOCKED(&uVar1, iParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_441(var uParam0, bool bParam1) //Position: 0x193D4 / 103380
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_CAN_BE_BUMPTARGETED(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_442() //Position: 0x1941B / 103451
{
	(&iLocal_4 + 392) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Wolf02"));
	*(&iLocal_4 + 288[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_02_01", 1068, Vector(-916.0f, 185,6859f, 1484f), Vector(0.0f, -62,78378f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 288[02], &iLocal_4 + 392);
	*(&iLocal_4 + 288[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_02_02", 1069, Vector(-916.0f, 186,2264f, 1492f), Vector(0.0f, -62,78378f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 288[12], &iLocal_4 + 392);
	*(&iLocal_4 + 288[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_02_03", 1070, Vector(-908,0001f, 185,9454f, 1491,999f), Vector(0.0f, -62,78378f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 288[22], &iLocal_4 + 392);
	*(&iLocal_4 + 288[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_02_04", 1068, Vector(-908,0001f, 185,5514f, 1488f), Vector(0.0f, -62,78378f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 288[32], &iLocal_4 + 392);
	*(&iLocal_4 + 288[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_02_05", 1069, Vector(-928,0001f, 185,294f, 1476f), Vector(0.0f, -62,78378f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 288[42], &iLocal_4 + 392);
	*(&iLocal_4 + 288[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_02_06", 1070, Vector(-924.0f, 185,5075f, 1479,999f), Vector(0.0f, -62,78378f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 288[52], &iLocal_4 + 392);
	return;
}

void Function_443(var uParam0, int iParam1) //Position: 0x195EF / 103919
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (iParam1 < 0 && iParam1 > SQUAD_GET_SIZE(&uParam0))
		{
			bVar0 = false;
			while (bVar0 < (iParam1 - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					SQUAD_LEAVE(&uVar1);
					DESTROY_ACTOR(&uVar1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_444(var uParam0, bool bParam1) //Position: 0x1964D / 104013
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					MEMORY_CONSIDER_AS_ENEMY(&bParam1, &uVar1);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_445(var uParam0, bool bParam1) //Position: 0x196A1 / 104097
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				ANIMAL_ACTOR_SET_DOMESTICATION(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_446() //Position: 0x196E8 / 104168
{
	*(&iLocal_4 + 280) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Wolf01"));
	*(&iLocal_4 + 192[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_01_01", 1068, Vector(-656,4052f, 174,6981f, 1664,507f), Vector(0.0f, 124,7566f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 192[02], &iLocal_4 + 280);
	*(&iLocal_4 + 192[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_01_02", 1068, Vector(-662,8601f, 175,8097f, 1677,138f), Vector(0.0f, 63,31305f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 192[12], &iLocal_4 + 280);
	*(&iLocal_4 + 192[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_01_03", 1069, Vector(-651,9439f, 174,6981f, 1676,005f), Vector(0.0f, 16,75689f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 192[22], &iLocal_4 + 280);
	*(&iLocal_4 + 192[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_01_04", 1069, Vector(-655,1514f, 174,6784f, 1668,796f), Vector(0.0f, 85,1131f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 192[32], &iLocal_4 + 280);
	*(&iLocal_4 + 192[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WOLF_01_05", 1070, Vector(-652,0001f, 174,6981f, 1664f), Vector(0.0f, 159,987f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 192[42], &iLocal_4 + 280);
	return;
}

int Function_447(int iParam0) //Position: 0x19869 / 104553
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_448() //Position: 0x198BF / 104639
{
	if (Function_267(&iLocal_876) <= 1.0f)
	{
		switch (iLocal_840)
		{
			case 0x00000000:
				iLocal_840++;
				break;
			
			case 0x00000001:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_545 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_451();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_840++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_859)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_840++;
					}
				}
				break;
			
			case 0x00000003:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_854)
				{
					iLocal_840++;
				}
				break;
			
			case 0x00000004:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_545 > 12)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_450();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_840++;
						}
					}
				}
				break;
			
			case 0x00000005:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_859)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_840++;
						Function_220(&iLocal_559);
					}
				}
				break;
			
			case 0x00000006:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				Function_449();
				if (iLocal_854)
				{
					iLocal_840++;
				}
				break;
			
			case 0x00000007:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_854)
				{
					iLocal_840++;
				}
				break;
			
			case 0x00000008:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				iLocal_840++;
				break;
		}
		Function_220(&iLocal_876);
	}
	return;
}

void Function_449() //Position: 0x19A62 / 105058
{
	if (Function_269(&iLocal_880))
	{
		if (Function_267(&iLocal_880) < 3.0f)
		{
			if (Function_267(&iLocal_559) <= RAND_FLOAT_RANGE(6.0f, 10.0f))
			{
				if (Function_415(RAND_INT_RANGE(0, true)))
				{
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (ACTORS_IN_RANGE(&Global_54076, &bLocal_549, 36.0f))
						{
							SAY_SINGLE_LINE_SCRIPTED(&bLocal_549, "Home02_s2_JakSHoutsEncoDog", &bLocal_843, 0, 1, 0, 1, 2);
						}
					}
				}
				else if (IS_ACTOR_VALID(&bLocal_843))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_843, 36.0f))
					{
						SAY_SINGLE_LINE_SCRIPTED(&Global_54076, "Home02_s2_ShoutsEnco2Dog", &bLocal_843, 0, 1, 0, 1, 2);
					}
				}
				Function_220(&iLocal_559);
			}
		}
	}
	return;
}

void Function_450() //Position: 0x19B35 / 105269
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_NoShootWolfs", "Home02_s2_NoShootWolfs", 0, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_451() //Position: 0x19B8A / 105354
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_WolfsAttak", "Home02_s2_WolfsAttak", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_452() //Position: 0x19BDB / 105435
{
	if (SQUAD_IS_VALID(&iLocal_4 + 392))
	{
		Function_460(&iLocal_4 + 392);
		switch (iLocal_836)
		{
			case 0x00000000:
				iLocal_836++;
				break;
			
			case 0x00000001:
				Function_459(&iLocal_4 + 392);
				Function_457(&iLocal_4 + 392, &iLocal_4 + 512);
				Function_456(&iLocal_4 + 392, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
				bLocal_841 = false;
				while (bLocal_841 <= SQUAD_GET_SIZE(&iLocal_4 + 392))
				{
					iLocal_849 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 392, bLocal_841);
					if (IS_ACTOR_ALIVE(&iLocal_849))
					{
						ANIMAL_TUNING_SET_ATTRIB_FLOAT(&iLocal_849, 25, 99.0f);
					}
					bLocal_841++;
				}
				Function_220(&iLocal_872);
				iLocal_836++;
				break;
			
			case 0x00000002:
				if ((IS_ACTOR_SHOOTING(&Global_54076) || IS_ACTOR_SHOOTING(&bLocal_549)) || Function_426(&Global_54076, &iLocal_4 + 392, 50.0f))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
					Function_455(&iLocal_4 + 392);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, false, 1, 2);
					TASK_KILL_CHAR(false, &Global_54076);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, true, 1, 1);
					TASK_KILL_CHAR(false, &bLocal_843);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, 2, 1, 1);
					TASK_KILL_CHAR(false, &bLocal_549);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, 3, 1, 4294967295);
					TASK_KILL_CHAR(false, &Global_54076);
					Function_220(&iLocal_872);
					iLocal_836++;
				}
				break;
			
			case 0x00000003:
				if (!iLocal_854)
				{
					iLocal_836++;
				}
				else if (SQUAD_GET_SIZE(&iLocal_4 + 392) >= ROUND((0,5f * IntToFloat((6 + bLocal_837)))) || !Function_426(&Global_54076, &iLocal_4 + 392, 150.0f))
				{
					iLocal_855 = 1;
					SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
					Function_455(&iLocal_4 + 392);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1792, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1800, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1808, 2);
					Function_77(&bLocal_838, Function_453(4));
					Function_77(&bLocal_838, Function_453(0));
					ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(35, bLocal_838, &iLocal_4 + 1800, 100.0f, 1065353216, 1065353216, 1082130432, 2);
					Function_220(&iLocal_872);
					iLocal_836++;
				}
				break;
			
			case 0x00000004:
				if (iLocal_856)
				{
					Function_235(&iLocal_4 + 1656);
					STREAMING_LOAD_BOUNDS(Function_235(&iLocal_4 + 1656), 50.0f, 1);
				}
				Function_220(&iLocal_872);
				iLocal_836++;
				break;
			
			case 0x00000005:
				if (iLocal_856)
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 392))
					{
						Function_434(&iLocal_4 + 392, &iLocal_4 + 1656, 2, 1,5f, 1,5f, 1);
						Function_432(&iLocal_4 + 392, &iLocal_4 + 608, 1, 1);
						iLocal_836++;
					}
				}
				break;
			
			case 0x00000006:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
				Function_455(&iLocal_4 + 392);
				Function_459(&iLocal_4 + 392);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 608, -1.0f);
				Function_432(&iLocal_4 + 392, &iLocal_4 + 608, 1, 1);
				iLocal_836++;
				break;
			
			case 0x00000007:
				if (Function_426(&Global_54076, &iLocal_4 + 392, (200.0f + 40.0f)))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
					Function_455(&iLocal_4 + 392);
					Function_459(&iLocal_4 + 392);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 608, -1.0f);
					Function_432(&iLocal_4 + 392, &iLocal_4 + 608, 1, 1);
					iLocal_836++;
				}
				break;
			
			case 0x00000008:
				if (iLocal_854)
				{
					iLocal_836++;
				}
				break;
			
			case 0x00000009:
				Function_459(&iLocal_4 + 392);
				Function_457(&iLocal_4 + 392, &iLocal_4 + 512);
				Function_456(&iLocal_4 + 392, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
				Function_220(&iLocal_872);
				iLocal_836++;
				break;
			
			case 0x0000000A:
				if ((IS_ACTOR_SHOOTING(&Global_54076) || IS_ACTOR_SHOOTING(&bLocal_549)) || Function_426(&Global_54076, &iLocal_4 + 392, 50.0f))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
					Function_455(&iLocal_4 + 392);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, false, 1, 2);
					TASK_KILL_CHAR(false, &Global_54076);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, true, 1, 1);
					TASK_KILL_CHAR(false, &bLocal_843);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, 2, 1, 1);
					TASK_KILL_CHAR(false, &bLocal_549);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, 3, 1, 4294967295);
					TASK_KILL_CHAR(false, &Global_54076);
					Function_220(&iLocal_872);
					iLocal_836++;
				}
				break;
			
			case 0x0000000B:
				if (!iLocal_854)
				{
					iLocal_836++;
				}
				else if (SQUAD_GET_SIZE(&iLocal_4 + 392) >= ROUND((0,5f * IntToFloat((6 + bLocal_837)))) || !Function_426(&Global_54076, &iLocal_4 + 392, 150.0f))
				{
					iLocal_855 = 1;
					SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
					Function_455(&iLocal_4 + 392);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1792, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1800, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1808, 2);
					Function_77(&bLocal_838, Function_453(4));
					Function_77(&bLocal_838, Function_453(0));
					ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(35, bLocal_838, &iLocal_4 + 1808, 100.0f, 1065353216, 1065353216, 1082130432, 2);
					Function_220(&iLocal_872);
					iLocal_836++;
				}
				break;
			
			case 0x0000000C:
				if (iLocal_856)
				{
					Function_235(&iLocal_4 + 1664);
					STREAMING_LOAD_BOUNDS(Function_235(&iLocal_4 + 1664), 50.0f, 1);
				}
				Function_220(&iLocal_872);
				iLocal_836++;
				break;
			
			case 0x0000000D:
				if (iLocal_856)
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 392))
					{
						Function_434(&iLocal_4 + 392, &iLocal_4 + 1664, 2, 1,5f, 1,5f, 1);
						Function_432(&iLocal_4 + 392, &iLocal_4 + 616, 1, 1);
						iLocal_836++;
					}
				}
				break;
			
			case 0x0000000E:
				iLocal_836++;
				break;
			}
	}
	return;
}

bool Function_453(int iParam0) //Position: 0x1A1BC / 106940
{
	return Function_454(2, iParam0);
}

int Function_454(int iParam0, int iParam1) //Position: 0x1A1C8 / 106952
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 1;
	while (iVar1 < iParam1)
	{
		iVar0 = (iVar0 * iParam0);
		iVar1++;
	}
	return iVar0;
}

void Function_455(bool bParam0) //Position: 0x1A1F5 / 106997
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_456(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1A22A / 107050
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != bParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, bParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

void Function_457(var uParam0, int[] iParam1) //Position: 0x1A33A / 107322
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				Function_458(&uParam0, &(iParam1[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

int Function_458(int iParam0, int iParam1) //Position: 0x1A383 / 107395
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return 1;
}

void Function_459(int iParam0) //Position: 0x1A3E1 / 107489
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

void Function_460(var uParam0) //Position: 0x1A430 / 107568
{
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (!Function_269(&iLocal_884))
		{
			Function_220(&iLocal_884);
		}
		else if (Function_267(&iLocal_884) < 0,5f)
		{
			bLocal_841 = false;
			while (bLocal_841 <= SQUAD_GET_SIZE(&uParam0))
			{
				iLocal_849 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_841);
				if (IS_ACTOR_ALIVE(&iLocal_849))
				{
					if (!IS_ACTOR_ON_GROUND(&iLocal_849))
					{
						Function_83(&iLocal_849, &Local_918);
						if (FIND_GROUND_INTERSECTION(&Local_918, 100.0f, &uLocal_921, &uLocal_924))
						{
							if (!WOULD_ACTOR_BE_VISIBLE(1068, &uLocal_921, 3212836864))
							{
								TELEPORT_ACTOR(&iLocal_849, &uLocal_921, 0, 1, 1);
								SCRIPT_BREAKPOINT("Teleported wolf to ground.");
							}
						}
					}
				}
				bLocal_841++;
			}
			Function_220(&iLocal_884);
		}
	}
	return;
}

void Function_461() //Position: 0x1A501 / 107777
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (!Function_269(&iLocal_940))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACKER(GET_MOUNT(&Global_54076))))
			{
				CLEAR_LAST_HIT(GET_MOUNT(&Global_54076));
				Function_220(&iLocal_940);
				iLocal_939 = 1;
			}
		}
		else if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(GET_MOUNT(&Global_54076))))
		{
			if (Function_267(&iLocal_940) < 20.0f)
			{
				iLocal_939 = (iLocal_939 - 1);
				if (iLocal_939 >= 0)
				{
					Function_220(&iLocal_940);
				}
				else
				{
					Function_403(&iLocal_940);
				}
			}
		}
		else
		{
			iLocal_939++;
			CLEAR_LAST_HIT(GET_MOUNT(&Global_54076));
			if (iLocal_939 <= 2)
			{
				Function_220(&iLocal_940);
			}
			else
			{
				Function_403(&iLocal_940);
				TASK_FLEE_ACTOR(GET_MOUNT(&Global_54076), &Global_54076, 20.0f, 3.0f, 0, 0, 0);
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
			}
		}
	}
	return;
}

void Function_462() //Position: 0x1A611 / 108049
{
	Function_481(&cLocal_462);
	if (iLocal_545 < 3 && iLocal_545 > 105)
	{
		Function_461();
		Function_479();
		Function_477();
		Function_468();
		if (iLocal_545 < 13)
		{
			if (SQUAD_IS_VALID(&iLocal_4 + 280))
			{
				if (Function_447(&iLocal_4 + 280) == 0)
				{
					iLocal_854 = 0;
					bLocal_857 = false;
					iLocal_855 = 0;
					iLocal_856 = 0;
					Function_239();
					Function_220(&iLocal_555);
					iLocal_545 = 14;
				}
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 392))
			{
				if (Function_427(&iLocal_4 + 392, 1.0f, 200.0f, 1, 1))
				{
					iLocal_854 = 1;
					bLocal_857 = true;
					if (IS_BLIP_VALID(&uLocal_851))
					{
						REMOVE_BLIP(&uLocal_851);
					}
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_239();
					Function_220(&iLocal_555);
					iLocal_545 = 106;
				}
			}
		}
		else if (iLocal_854)
		{
			if (IS_BLIP_VALID(&uLocal_851))
			{
				REMOVE_BLIP(&uLocal_851);
			}
			ABORT_SCRIPTED_CONVERSATION(1);
			Function_239();
			Function_220(&iLocal_555);
			iLocal_545 = 106;
		}
		else if (SQUAD_IS_VALID(&iLocal_4 + 392))
		{
			if (Function_427(&iLocal_4 + 280, 1.0f, 200.0f, 1, 1) || Function_427(&iLocal_4 + 392, 1.0f, 200.0f, 1, 1))
			{
				iLocal_854 = 1;
				bLocal_857 = true;
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
				ABORT_SCRIPTED_CONVERSATION(1);
				Function_239();
				Function_220(&iLocal_555);
				iLocal_545 = 106;
			}
		}
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_567[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_338();
				bLocal_546 = Global_46754[1];
				if (!Function_337(bLocal_546))
				{
					Function_336(&Local_464);
				}
				Function_335(&Global_54076, &iLocal_4 + 848[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_551, true);
				}
				if (IS_ACTOR_VALID(&bLocal_549))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
					MEMORY_PREFER_RIDING(&bLocal_549, false);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
					TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_549, true);
				}
				Function_220(&iLocal_555);
				iLocal_545 = 1;
			}
			else
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_337(bLocal_546) || bLocal_546 != 4294967295))
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_466())
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				iLocal_840 = 0;
				iLocal_835 = 0;
				iLocal_836 = 0;
				iLocal_854 = 0;
				iLocal_856 = 0;
				iLocal_855 = 0;
				bLocal_857 = false;
				iLocal_858 = 0;
				iLocal_859 = 0;
				iLocal_860 = 0;
				bLocal_837 = 5;
				Function_219(Local_464, 5);
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					SET_ACTOR_HEALTH(&bLocal_843, GET_ACTOR_MAX_HEALTH(&bLocal_843));
				}
				if (iLocal_567[0] == 0)
				{
					if (IS_ACTOR_VALID(&Global_54076))
					{
						if (IS_ACTOR_VALID(&bLocal_551))
						{
							Function_335(&bLocal_551, &iLocal_4 + 848[2], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_551))
							{
								ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_551);
							}
						}
					}
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						if (IS_ACTOR_VALID(&bLocal_553))
						{
							Function_335(&bLocal_553, &iLocal_4 + 848[3], 1, 1, 1);
							if (!IS_ACTOR_RIDING(&bLocal_549) && !IS_ACTOR_MOUNTED(&bLocal_553))
							{
								ACTOR_MOUNT_ACTOR(&bLocal_549, &bLocal_553);
							}
						}
					}
				}
				PRINTFLOAT(COMBAT_CLASS_AI_GET_RANGE_ACCURACY(&bLocal_549));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 53));
				PRINTNL();
				PRINTFLOAT(COMBAT_CLASS_AI_GET_ATTRIB_FLOAT(&bLocal_549, 54));
				PRINTNL();
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&bLocal_549, 13, false);
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_549, 35.0f);
				Function_303(12, 0, 1);
				MEMORY_PREFER_RIDING(&bLocal_549, true);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_549, true);
				AI_RIDING_SET_ATTRIBUTE(&bLocal_549, 2, 0,15f);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 4294967295);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_553);
				iLocal_583 = 0;
				Function_392(&(Local_638[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
				Function_388(&(Local_638[015]), 1024);
				Function_392(&(Local_638[115]), &bLocal_843, "Dog", 0, 0x5f5e100, 1);
				Function_388(&(Local_638[115]), 1024);
				Function_392(&(Local_638[215]), &bLocal_847, "Uncle", 0, 0x5f5e100, 1);
				Function_392(&(Local_638[315]), &bLocal_845, "Wife", 0, 0x5f5e100, 1);
				Function_387(&(Local_638[415]));
				Function_387(&(Local_638[515]));
				Function_220(&iLocal_555);
				iLocal_545 = 6;
				Function_234(bLocal_544);
				Function_379(StackVal, Function_234(bLocal_544), bLocal_544, Global_46754[1], Function_237(bLocal_544), 0);
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (!IS_OBJECT_VALID(&uLocal_930))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_930 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_462, "HOME02SON02_CAMERA_FOCUS", &bLocal_843, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
						if (IS_OBJECT_VALID(&uLocal_930))
						{
							SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_930, 0);
						}
					}
				}
				if (!IS_BLIP_VALID(&uLocal_851))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
						SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&uLocal_851))
						{
						}
					}
				}
				iLocal_909 = Vector(3.0f, 0.0f, 1.0f);
				TASK_FOLLOW_OBJECT(&bLocal_549, &bLocal_843, &iLocal_909, 0, 0, 0, 0, 0, 0, 1);
				Function_327(&uLocal_829, 12, 0, 4294967295, 4294967295);
				Function_465();
				Function_220(&iLocal_555);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				if (iLocal_567[0] == 0)
				{
					Function_367("home02_son02_obj02", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				Function_327(&uLocal_829, 12, 0, 4294967295, 4294967295);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_352(&iLocal_563, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_580, 0, &cLocal_462, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&uLocal_851))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
						SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&uLocal_851))
						{
						}
					}
				}
				Function_420(&iLocal_563, 60.0f, 200.0f, &bLocal_843, "Dog_return", "Dog_abandoned", &bLocal_580, 0, 0, 0, 325, 1);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 664))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 664))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 664);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 672))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 672))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 672);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (Function_269(&iLocal_868))
			{
				if (Function_267(&iLocal_868) < 5.0f)
				{
					Function_403(&iLocal_868);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				}
			}
			if (!Function_406(&bLocal_843, &Global_54076, 60.0f))
			{
				if (!GET_TASK_STATUS(&bLocal_843, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_843, &Global_54076, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_843, 0) != 1)
			{
				bLocal_834 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(&iLocal_4 + 664))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1264[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 672))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1312[0], 3.0f, 3, 1, 1);
				}
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1312[3], 3.0f, 3, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_843, bLocal_834);
				TASK_SEQUENCE_RELEASE(bLocal_834, 1);
			}
			if ((GET_TASK_STATUS(&bLocal_843, 6) != 1 && ACTORS_IN_RANGE(&Global_54076, &bLocal_843, 20.0f)) || Function_427(&iLocal_4 + 280, 1.0f, 200.0f, 1, 1))
			{
				TASK_CLEAR(&bLocal_843);
				GET_OBJECT_POSITION(&iLocal_4 + 1640, &uLocal_906);
				TASK_FACE_COORD(&bLocal_843, &uLocal_906, 0);
				iLocal_854 = 1;
				Function_239();
				Function_220(&iLocal_555);
				iLocal_545 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_327(&uLocal_829, 8, 0, 4294967295, 4294967295);
			iLocal_583 = 1;
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			if (bLocal_857)
			{
				Function_431();
			}
			else
			{
				Function_430();
			}
			Function_456(&iLocal_4 + 280, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			Function_220(&iLocal_555);
			iLocal_545 = 12;
			break;
		
		case 0x0000000C:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_843);
				Local_892[02] = Vector(-3.0f, 0.0f, 6.0f);
				TASK_FOLLOW_OBJECT(&bLocal_843, &Global_54076, &(Local_892[02]), 0, 0, 0, 0, 0, 0, 1);
				TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_549, &Global_54076, 7.0f, 4);
				if (ACTOR_HAS_WEAPON(&bLocal_549, 41))
				{
					ACTOR_PUT_WEAPON_IN_HAND(&bLocal_549, 41, 1);
				}
				Function_367("home02_son02_obj03", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 13;
			}
			break;
		
		case 0x0000000D:
			if (IS_BLIP_VALID(&uLocal_851))
			{
				REMOVE_BLIP(&uLocal_851);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 280))
			{
				Function_429();
				if (iLocal_855)
				{
					if (!Function_427(&iLocal_4 + 280, 1.0f, 200.0f, 1, 1) && !Function_426(&Global_54076, &iLocal_4 + 280, 100.0f))
					{
						iLocal_856 = 1;
						iLocal_855 = 0;
						iLocal_854 = 0;
						Function_425(&iLocal_4 + 280);
						Function_239();
						Function_220(&iLocal_555);
						Function_434(&iLocal_4 + 280, &iLocal_4 + 1648, 2, 1,5f, 1,5f, 1);
						SQUAD_GOALS_CLEAR(&iLocal_4 + 280);
						Function_455(&iLocal_4 + 280);
						Function_459(&iLocal_4 + 280);
						SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, false, 1, 4294967295);
						TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 600, -1.0f);
						Function_432(&iLocal_4 + 280, &iLocal_4 + 600, 1, 1);
						iLocal_545 = 14;
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (!IS_BLIP_VALID(&uLocal_851))
			{
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
					SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
					if (IS_BLIP_VALID(&uLocal_851))
					{
					}
				}
			}
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			Function_327(&uLocal_829, 14, 0, 4294967295, 4294967295);
			Function_220(&iLocal_555);
			iLocal_545 = 15;
			break;
		
		case 0x0000000F:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				Function_439();
				iLocal_583 = 0;
				iLocal_854 = 0;
				Function_327(&uLocal_829, 14, 0, 4294967295, 4294967295);
				if (iLocal_856)
				{
					if (Function_415(RAND_INT_RANGE(0, true)))
					{
						Function_464();
					}
					else
					{
						Function_463();
					}
				}
				else
				{
					Function_422();
				}
				Function_220(&iLocal_555);
				iLocal_545 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				Function_367("home02_son02_obj04", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 17;
			}
			break;
		
		case 0x00000011:
			if (Function_352(&iLocal_563, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_580, 0, &cLocal_462, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&uLocal_851))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
						SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&uLocal_851))
						{
						}
					}
				}
				Function_420(&iLocal_563, 60.0f, 200.0f, &bLocal_843, "Dog_return", "Dog_abandoned", &bLocal_580, 0, 0, 0, 325, 1);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 680))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 680))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 680);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 688))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 688))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 688);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 696))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 696))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 696);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (Function_269(&iLocal_868))
			{
				if (Function_267(&iLocal_868) < 5.0f)
				{
					Function_403(&iLocal_868);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				}
			}
			if (!Function_406(&bLocal_843, &Global_54076, 60.0f))
			{
				if (!GET_TASK_STATUS(&bLocal_843, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_843, &Global_54076, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_843, 0) != 1)
			{
				bLocal_834 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(&iLocal_4 + 680))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1360[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 688))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1408[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 696))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1456[0], 3.0f, 3, 1, 1);
				}
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1456[3], 3.0f, 3, 1, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_843, bLocal_834);
				TASK_SEQUENCE_RELEASE(bLocal_834, 1);
			}
			if (((GET_TASK_STATUS(&bLocal_843, 6) != 1 && ACTORS_IN_RANGE(&Global_54076, &bLocal_843, 20.0f)) || Function_427(&iLocal_4 + 280, 1.0f, 200.0f, 1, 1)) || Function_427(&iLocal_4 + 392, 1.0f, 200.0f, 1, 1))
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_843);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				GET_OBJECT_POSITION(&iLocal_4 + 1648, &uLocal_906);
				TASK_FACE_COORD(&bLocal_843, &uLocal_906, 0);
				Function_239();
				Function_220(&iLocal_555);
				iLocal_545 = 106;
			}
			break;
		
		case 0x0000006A:
			if (SQUAD_IS_VALID(&iLocal_4 + 280))
			{
				bLocal_837 = SQUAD_GET_SIZE(&iLocal_4 + 280);
				Function_219(Local_464, bLocal_837);
			}
			PRINTINT(bLocal_837);
			PRINTNL();
			iLocal_567[1] = 1;
			Function_220(&iLocal_555);
			bLocal_544 = 2;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_463() //Position: 0x1B4BB / 111803
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_LoseWolfsJak", "Home02_s2_LoseWolfsJak", 0, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464() //Position: 0x1B510 / 111888
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_LoseWolfs", "Home02_s2_LoseWolfs", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x1B55F / 111967
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_DogPiksUpScent", "Home02_s2_DogPiksUpScent", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_466() //Position: 0x1B5B8 / 112056
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 184))
	{
		Function_289();
		if (SQUAD_IS_VALID(&iLocal_4 + 184))
		{
			Function_288(&iLocal_4 + 184, 0);
			Function_287(&iLocal_4 + 184, 3);
			Function_286(&iLocal_4 + 184, 0, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				bLocal_553 = &iLocal_4 + 160[02];
				Function_335(&bLocal_553, &iLocal_4 + 848[3], 1, 1, 1);
				SET_ACTORS_HORSE(&bLocal_549, &bLocal_553);
				SET_MOST_RECENT_MOUNT(&bLocal_549, &bLocal_553);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_553, 1.0f);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 184, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (!IS_ACTOR_VALID(&bLocal_843))
	{
		Function_335(&bLocal_843, &iLocal_4 + 848[4], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_843))
		{
			SET_ACTOR_FACTION(&bLocal_843, 20);
			SET_ACTOR_UPDATE_PRIORITY(&bLocal_843, false);
			Function_285(&bLocal_843, 0, 0, 0, 1, 0, 1);
			SET_CRIPPLE_ENABLE(&bLocal_843, 0);
			AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_843, 1);
			SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&bLocal_843, 0.0f);
			SET_ACTOR_INVULNERABILITY(&bLocal_843, 1);
			DECOR_SET_BOOL(&bLocal_843, "Frank", 1);
			TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_843, true);
		}
	}
	else if (!iLocal_567[0])
	{
		Function_335(&bLocal_843, &iLocal_4 + 848[4], 1, 1, 1);
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 280))
	{
		Function_446();
		if (SQUAD_IS_VALID(&iLocal_4 + 280))
		{
			Function_288(&iLocal_4 + 280, 0);
			Function_445(&iLocal_4 + 280, 1);
			Function_286(&iLocal_4 + 280, 1, 1, 1);
			Function_444(&iLocal_4 + 280, &bLocal_549);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, false, 1, 4294967295);
			TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 592, -1.0f);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 456))
	{
		Function_467();
		if (SQUAD_IS_VALID(&iLocal_4 + 456))
		{
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 456, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
		}
	}
	if (IS_ACTOR_VALID(&bLocal_843))
	{
		return 1;
	}
	return 0;
}

void Function_467() //Position: 0x1B7AF / 112559
{
	*(&iLocal_4 + 456) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "nChicken01"));
	*(&iLocal_4 + 400[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CHICKEN_01_01", 1015, Vector(-658,7735f, 174,7578f, 1667,268f), Vector(0.0f, 124,7566f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 400[02], &iLocal_4 + 456);
	*(&iLocal_4 + 400[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CHICKEN_01_02", 1016, Vector(-654,9674f, 174,6981f, 1672,044f), Vector(0.0f, 63,31305f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 400[12], &iLocal_4 + 456);
	*(&iLocal_4 + 400[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CHICKEN_01_03", 1017, Vector(-651,998f, 174,6981f, 1671,053f), Vector(0.0f, 162,8606f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 400[22], &iLocal_4 + 456);
	return;
}

void Function_468() //Position: 0x1B8B4 / 112820
{
	if (Function_267(&iLocal_876) <= 1.0f)
	{
		switch (iLocal_840)
		{
			case 0x00000000:
				if (iLocal_567[0] == 0)
				{
					iLocal_842 = Function_417();
				}
				iLocal_840++;
				break;
			
			case 0x00000001:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_545 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_476();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_840++;
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_859)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_840++;
						Function_220(&iLocal_559);
					}
				}
				break;
			
			case 0x00000003:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (Function_471())
				{
					Function_449();
				}
				if (iLocal_854)
				{
					iLocal_840 = 12;
				}
				break;
			
			case 0x0000000C:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_545 > 13)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_470();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_840++;
						}
					}
				}
				break;
			
			case 0x0000000D:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_859)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_840++;
					}
				}
				break;
			
			case 0x0000000E:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_854)
				{
					iLocal_840++;
				}
				break;
			
			case 0x0000000F:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_545 > 17)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_469();
						if (IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_840++;
						}
					}
				}
				break;
			
			case 0x00000010:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (!iLocal_859)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_840++;
						Function_220(&iLocal_559);
					}
				}
				break;
			
			case 0x00000011:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				Function_449();
				break;
			
			case 0x00000012:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				iLocal_840++;
				break;
		}
		Function_220(&iLocal_876);
	}
	return;
}

void Function_469() //Position: 0x1BACF / 113359
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_BetweenWolfBant_v1_AA", "Home02_s2_BetweenWolfBant_v1_AA", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_BetweenWolfBant_v1_AB", "Home02_s2_BetweenWolfBant_v1_AB", 1, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_BetweenWolfBant_v1_AC", "Home02_s2_BetweenWolfBant_v1_AC", 0, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_BetweenWolfBant_v1_AD", "Home02_s2_BetweenWolfBant_v1_AD", 1, 2, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470() //Position: 0x1BC1D / 113693
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_MightAttak", "Home02_s2_MightAttak", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_471() //Position: 0x1BC6E / 113774
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_269(&iLocal_888))
		{
			Function_403(&iLocal_888);
		}
	}
	else if (!Function_269(&iLocal_888))
	{
		Function_220(&iLocal_888);
	}
	else
	{
		switch (iLocal_842)
		{
			case 0x00000000:
				if (Function_267(&iLocal_888) < 4.0f)
				{
					Function_475();
					iLocal_842++;
				}
				break;
			
			case 0x00000001:
				if (Function_267(&iLocal_888) < 4.0f)
				{
					Function_474();
					iLocal_842++;
				}
				break;
			
			case 0x00000002:
				if (Function_267(&iLocal_888) < 4.0f)
				{
					Function_473();
					iLocal_842++;
				}
				break;
			
			case 0x00000003:
				if (Function_267(&iLocal_888) < 4.0f)
				{
					Function_472();
					iLocal_842++;
				}
				break;
			
			default:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_472() //Position: 0x1BD29 / 113961
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v4_AA", "Home02_s2_SerchWolfBant_v4_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v4_AB", "Home02_s2_SerchWolfBant_v4_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v4_AC", "Home02_s2_SerchWolfBant_v4_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v4_AD", "Home02_s2_SerchWolfBant_v4_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v4_AE", "Home02_s2_SerchWolfBant_v4_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v4_AF1", "Home02_s2_SerchWolfBant_v4_AF1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v4_AF2", "Home02_s2_SerchWolfBant_v4_AF2", 1, 1, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x1BF46 / 114502
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v3_AA", "Home02_s2_SerchWolfBant_v3_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v3_AB", "Home02_s2_SerchWolfBant_v3_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v3_AC", "Home02_s2_SerchWolfBant_v3_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v3_AD", "Home02_s2_SerchWolfBant_v3_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v3_AE", "Home02_s2_SerchWolfBant_v3_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v3_AF", "Home02_s2_SerchWolfBant_v3_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v3_AG", "Home02_s2_SerchWolfBant_v3_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v3_AH1", "Home02_s2_SerchWolfBant_v3_AH1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v3_AH2", "Home02_s2_SerchWolfBant_v3_AH2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v3_AI", "Home02_s2_SerchWolfBant_v3_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v3_AJ", "Home02_s2_SerchWolfBant_v3_AJ", 1, 1, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474() //Position: 0x1C29E / 115358
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v2_AA", "Home02_s2_SerchWolfBant_v2_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v2_AB", "Home02_s2_SerchWolfBant_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v2_AC1", "Home02_s2_SerchWolfBant_v2_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v2_AC2", "Home02_s2_SerchWolfBant_v2_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v2_AD", "Home02_s2_SerchWolfBant_v2_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v2_AE", "Home02_s2_SerchWolfBant_v2_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v2_AF", "Home02_s2_SerchWolfBant_v2_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v2_AG", "Home02_s2_SerchWolfBant_v2_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v2_AH", "Home02_s2_SerchWolfBant_v2_AH", 1, 1, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_475() //Position: 0x1C54D / 116045
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v1_AA", "Home02_s2_SerchWolfBant_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v1_AB", "Home02_s2_SerchWolfBant_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v1_AC1", "Home02_s2_SerchWolfBant_v1_AC1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v1_AC2", "Home02_s2_SerchWolfBant_v1_AC2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v1_AD", "Home02_s2_SerchWolfBant_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v1_AE1", "Home02_s2_SerchWolfBant_v1_AE1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v1_AE2", "Home02_s2_SerchWolfBant_v1_AE2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v1_AF", "Home02_s2_SerchWolfBant_v1_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_s2_SerchWolfBant_v1_AG", "Home02_s2_SerchWolfBant_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SerchWolfBant_v1_AH", "Home02_s2_SerchWolfBant_v1_AH", 1, 1, 0, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476() //Position: 0x1C849 / 116809
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_FollowMe", "Home02_s2_FollowMe", 1, 2, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_477() //Position: 0x1C896 / 116886
{
	if (SQUAD_IS_VALID(&iLocal_4 + 392))
	{
		Function_460(&iLocal_4 + 392);
		switch (iLocal_836)
		{
			case 0x00000000:
				iLocal_836++;
				break;
			
			case 0x00000001:
				if (Function_478(&Global_54076, &iLocal_4 + 1648, (200.0f + 70.0f)))
				{
					iLocal_836++;
				}
				break;
			
			case 0x00000002:
				Function_439();
				iLocal_836++;
				break;
			
			case 0x00000003:
				if (Function_426(&Global_54076, &iLocal_4 + 392, (200.0f + 40.0f)))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 392);
					Function_455(&iLocal_4 + 392);
					Function_459(&iLocal_4 + 392);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 392, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 600, -1.0f);
					Function_432(&iLocal_4 + 392, &iLocal_4 + 600, 1, 1);
					iLocal_836++;
				}
				break;
			
			case 0x00000004:
				iLocal_836++;
				break;
			}
	}
	return;
}

bool Function_478(var uParam0, var uParam1, float fParam2) //Position: 0x1C98B / 117131
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_365(&uParam0);
			Function_372(&uParam1);
			if (VDIST(Function_365(&uParam0), Function_372(&uParam1)) >= fParam2)
			{
				return 1;
			}
		}
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	else
	{
		LOG_ERROR("Attempting to check whether an actor is in range of an object, where at least one is INVALID! Returning FALSE.");
	}
	return 0;
}

void Function_479() //Position: 0x1CAA9 / 117417
{
	if (SQUAD_IS_VALID(&iLocal_4 + 280))
	{
		Function_460(&iLocal_4 + 280);
		switch (iLocal_835)
		{
			case 0x00000000:
				iLocal_835++;
				break;
			
			case 0x00000001:
				SQUAD_GOALS_CLEAR(&iLocal_4 + 280);
				Function_455(&iLocal_4 + 280);
				Function_459(&iLocal_4 + 280);
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, false, 1, 4294967295);
				TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 592, -1.0f);
				Function_432(&iLocal_4 + 280, &iLocal_4 + 592, 1, 1);
				iLocal_835++;
				break;
			
			case 0x00000002:
				if (Function_426(&Global_54076, &iLocal_4 + 280, (200.0f + 40.0f)))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 280);
					Function_455(&iLocal_4 + 280);
					Function_459(&iLocal_4 + 280);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, false, 1, 4294967295);
					TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 592, -1.0f);
					Function_432(&iLocal_4 + 280, &iLocal_4 + 592, 1, 1);
					if (IS_ACTOR_VALID(&iLocal_4 + 192[02]))
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 192[02]))
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1760)))
							{
								TASK_USE_GRINGO(&iLocal_4 + 192[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1760), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&iLocal_4 + 192[02], 2);
							}
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 192[12]))
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 192[12]))
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1768)))
							{
								TASK_USE_GRINGO(&iLocal_4 + 192[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1768), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&iLocal_4 + 192[12], 2);
							}
						}
					}
					if (IS_ACTOR_VALID(&iLocal_4 + 192[22]))
					{
						if (IS_ACTOR_VALID(&iLocal_4 + 192[22]))
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1776)))
							{
								TASK_USE_GRINGO(&iLocal_4 + 192[22], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1776), "UseCase1", 4294967295, 1);
								TASK_PRIORITY_SET(&iLocal_4 + 192[22], 2);
							}
						}
					}
					if (SQUAD_IS_VALID(&iLocal_4 + 456))
					{
						Function_480(&iLocal_4 + 456);
					}
					iLocal_835++;
				}
				break;
			
			case 0x00000003:
				if (iLocal_854)
				{
					iLocal_835++;
				}
				break;
			
			case 0x00000004:
				Function_459(&iLocal_4 + 280);
				Function_457(&iLocal_4 + 280, &iLocal_4 + 512);
				Function_456(&iLocal_4 + 280, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				Function_220(&iLocal_872);
				iLocal_835++;
				break;
			
			case 0x00000005:
				if ((IS_ACTOR_SHOOTING(&Global_54076) || IS_ACTOR_SHOOTING(&bLocal_549)) || Function_426(&Global_54076, &iLocal_4 + 280, 50.0f))
				{
					SQUAD_GOALS_CLEAR(&iLocal_4 + 280);
					Function_455(&iLocal_4 + 280);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, false, 1, 2);
					TASK_KILL_CHAR(false, &Global_54076);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, true, 1, 1);
					TASK_KILL_CHAR(false, &bLocal_843);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, 2, 1, 1);
					TASK_KILL_CHAR(false, &bLocal_549);
					SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, 3, 1, 4294967295);
					TASK_KILL_CHAR(false, &Global_54076);
					Function_327(&uLocal_829, 40, 0, 4294967295, 4294967295);
					Function_220(&iLocal_872);
					iLocal_835++;
				}
				break;
			
			case 0x00000006:
				if (!iLocal_854)
				{
					iLocal_835++;
				}
				else if (SQUAD_GET_SIZE(&iLocal_4 + 280) >= ROUND((0,5f * IntToFloat(bLocal_837))) || !Function_426(&Global_54076, &iLocal_4 + 280, 150.0f))
				{
					iLocal_855 = 1;
					SQUAD_GOALS_CLEAR(&iLocal_4 + 280);
					Function_455(&iLocal_4 + 280);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1792, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1800, 2);
					ANIMAL_SPECIES_REMOVE_EXTERNAL_PATH_ATTRACTION(35, &iLocal_4 + 1808, 2);
					Function_77(&bLocal_838, Function_453(4));
					Function_77(&bLocal_838, Function_453(0));
					ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(35, bLocal_838, &iLocal_4 + 1792, 100.0f, 1065353216, 1065353216, 1082130432, 2);
					Function_220(&iLocal_872);
					iLocal_835++;
				}
				break;
			
			case 0x00000007:
				if (iLocal_856)
				{
					Function_235(&iLocal_4 + 1648);
					STREAMING_LOAD_BOUNDS(Function_235(&iLocal_4 + 1648), 50.0f, 1);
				}
				Function_220(&iLocal_872);
				iLocal_835++;
				break;
			
			case 0x00000008:
				if (iLocal_856)
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 280))
					{
						Function_434(&iLocal_4 + 280, &iLocal_4 + 1648, 2, 1,5f, 1,5f, 1);
						Function_439();
						SQUAD_GOALS_CLEAR(&iLocal_4 + 280);
						Function_455(&iLocal_4 + 280);
						Function_459(&iLocal_4 + 280);
						SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 280, false, 1, 4294967295);
						TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 600, -1.0f);
						Function_432(&iLocal_4 + 280, &iLocal_4 + 600, 1, 1);
						iLocal_835++;
					}
				}
				break;
			
			case 0x00000009:
				iLocal_835++;
				break;
			}
	}
	return;
}

void Function_480(int iParam0) //Position: 0x1CF59 / 118617
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				KILL_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_481(var uParam0) //Position: 0x1CFB0 / 118704
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
		if (IS_ITERATOR_VALID(&uVar0))
		{
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				while (IS_OBJECT_VALID(&uVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						if ((((((((((((((((((((((((((((((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1041 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1109) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1110) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1111) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1118) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1119) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1120) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1116) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1117) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1124) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1125) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1126) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1121) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1122) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1123) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1088) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1089) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1090) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1087) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1091) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1092) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1093) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1049) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1050) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1051) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1052) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1068) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1069) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1070) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1071) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1060) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1061) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1062) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1063) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1073) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1074) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1075) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1076) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1095) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1096) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1097) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1098) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1099) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1100) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1101) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1053) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1054) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1055) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1056) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1114) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1114) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1115) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1115)
						{
							DESTROY_OBJECT(&uVar1);
						}
					}
					uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
				}
			}
			DESTROY_ITERATOR(&uVar0);
		}
	}
	return;
}

void Function_482() //Position: 0x1D30F / 119567
{
	Function_481(&cLocal_462);
	Function_346();
	if (iLocal_545 < 4 && iLocal_545 > 105)
	{
		Function_485();
	}
	switch (iLocal_545)
	{
		case 0x00000000:
			Function_342(0);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			iLocal_839 = 0;
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_551, true);
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_549);
				MEMORY_PREFER_RIDING(&bLocal_549, false);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				TASK_PRIORITY_SET(&bLocal_549, true);
			}
			if (IS_ACTOR_VALID(&bLocal_845))
			{
				TASK_STAND_STILL(&bLocal_845, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_845, true);
			}
			if (IS_ACTOR_VALID(&bLocal_847))
			{
				TASK_STAND_STILL(&bLocal_847, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_847, true);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_338();
			bLocal_546 = Global_46914[1];
			if (!Function_337(bLocal_546))
			{
				Function_336(&Local_464);
			}
			if (Function_279(&Local_464))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_335(&Global_54076, &iLocal_4 + 768[0], 1, 1, 1);
			}
			Function_220(&iLocal_555);
			iLocal_545 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				if (STREAMING_IS_WORLD_LOADED() && (Function_337(bLocal_546) || bLocal_546 != 4294967295))
				{
					Function_220(&iLocal_555);
					iLocal_545 = 2;
				}
			}
			else
			{
				Function_220(&iLocal_555);
				iLocal_545 = 2;
			}
			break;
		
		case 0x00000002:
			Function_327(&uLocal_829, 2, 0, 4294967295, 4294967295);
			if (Function_284())
			{
				iLocal_840 = 0;
				iLocal_835 = 0;
				iLocal_836 = 0;
				iLocal_854 = 0;
				iLocal_856 = 0;
				iLocal_855 = 0;
				bLocal_857 = false;
				iLocal_858 = 0;
				iLocal_859 = 0;
				iLocal_860 = 0;
				bLocal_837 = 5;
				Function_219(Local_464, 5);
				if (Function_279(&Local_464))
				{
					if (IS_ACTOR_VALID(&bLocal_549))
					{
						Function_335(&bLocal_549, &iLocal_4 + 768[1], 0, 0, 0);
					}
					if (IS_ACTOR_VALID(&bLocal_551))
					{
						if (IS_GRINGO_VALID(&(uLocal_932[0])))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_551, GET_OBJECT_FROM_GRINGO(&(uLocal_932[0])), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&bLocal_551, &(uLocal_932[0]), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&bLocal_551, true);
						}
						else
						{
							Function_335(&bLocal_551, &iLocal_4 + 768[2], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_553))
					{
						if (IS_GRINGO_VALID(&(uLocal_932[1])))
						{
							SNAP_ACTOR_TO_GRINGO(&bLocal_553, GET_OBJECT_FROM_GRINGO(&(uLocal_932[1])), "UseCase1", true, 0, 0);
							TASK_USE_GRINGO(&bLocal_553, &(uLocal_932[1]), "UseCase1", 1, 1);
							TASK_PRIORITY_SET(&bLocal_553, true);
						}
						else
						{
							Function_335(&bLocal_553, &iLocal_4 + 768[3], 1, 1, 1);
						}
					}
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						Function_335(&bLocal_843, &iLocal_4 + 768[4], 1, 1, 1);
						TASK_STAND_STILL(&bLocal_843, -1.0f, 0, 0);
						TASK_PRIORITY_SET(&bLocal_843, true);
					}
				}
				Function_220(&iLocal_555);
				iLocal_545 = 4;
				Function_234(bLocal_544);
				Function_379(StackVal, Function_234(bLocal_544), bLocal_544, Global_46754[0], Function_237(bLocal_544), 0);
			}
			break;
		
		case 0x00000004:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				SET_ACTOR_HEALTH(&bLocal_551, GET_ACTOR_MAX_HEALTH(&bLocal_551));
			}
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				SET_ACTOR_HEALTH(&bLocal_549, 50.0f);
				if (Function_279(&Local_464))
				{
					Function_335(&bLocal_549, &iLocal_4 + 768[1], 0, 0, 0);
				}
				MEMORY_PREFER_RIDING(&bLocal_549, false);
				Function_303(12, 0, 1);
				DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_549);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 0);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_549, true);
				AI_RIDING_SET_ATTRIBUTE(&bLocal_549, 2, 0,15f);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_549);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_553);
			}
			if (IS_ACTOR_VALID(&bLocal_845))
			{
				SET_ACTOR_HEALTH(&bLocal_845, 50.0f);
				Function_335(&bLocal_845, &iLocal_4 + 768[6], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_847))
			{
				SET_ACTOR_HEALTH(&bLocal_847, 50.0f);
				Function_335(&bLocal_847, &iLocal_4 + 768[5], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_843))
			{
				SET_ACTOR_HEALTH(&bLocal_843, GET_ACTOR_MAX_HEALTH(&bLocal_843));
				DECOR_REMOVE(&bLocal_843, "Frank");
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_843);
				TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				SET_CRIPPLE_ENABLE(&bLocal_843, 0);
			}
			iLocal_583 = 0;
			Function_392(&(Local_638[015]), &bLocal_549, "Son", 1, 0x5f5e100, 1);
			Function_388(&(Local_638[015]), 1024);
			Function_392(&(Local_638[115]), &bLocal_843, "Dog", 0, 0x5f5e100, 1);
			Function_388(&(Local_638[115]), 1024);
			Function_392(&(Local_638[215]), &bLocal_847, "Uncle", 0, 0x5f5e100, 1);
			Function_392(&(Local_638[315]), &bLocal_845, "Wife", 0, 0x5f5e100, 1);
			Function_387(&(Local_638[415]));
			Function_387(&(Local_638[515]));
			Function_217(0);
			Function_220(&iLocal_555);
			iLocal_545 = 5;
			break;
		
		case 0x00000005:
			if ((IS_ACTOR_VALID(&bLocal_549) && IS_ACTOR_VALID(&bLocal_843)) && IS_ACTOR_VALID(&bLocal_551))
			{
				if ((Function_484(&bLocal_843, 1, 0x41700000) && Function_484(&bLocal_551, 1, 0x41700000)) || Function_267(&iLocal_555) <= 5.0f)
				{
					if (IS_ACTOR_VALID(&bLocal_845))
					{
						TASK_CLEAR(&bLocal_845);
					}
					if (IS_ACTOR_VALID(&bLocal_847))
					{
						TASK_CLEAR(&bLocal_847);
					}
					Function_220(&iLocal_555);
					iLocal_545 = 104;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_267(&iLocal_555) <= 1,5f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_220(&iLocal_555);
				iLocal_545 = 103;
			}
			break;
		
		case 0x00000067:
			if (!HUD_IS_FADED())
			{
				Function_220(&iLocal_555);
				iLocal_545 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (!IS_BLIP_VALID(&uLocal_851))
					{
						uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_551, 334, 0, 2, 0);
						if (IS_BLIP_VALID(&uLocal_851))
						{
						}
					}
				}
				Function_220(&iLocal_555);
				iLocal_545 = 7;
			}
			break;
		
		case 0x00000007:
			Function_367("home02_son02_obj00", 7,5f, 1, 2, 0, 0, 0, 0);
			Function_220(&iLocal_555);
			Function_220(&iLocal_559);
			Function_220(&iLocal_563);
			iLocal_545 = 8;
			break;
		
		case 0x00000008:
			Function_420(&iLocal_563, 60.0f, 200.0f, &bLocal_551, "Horse_return", "Horse_abandoned", &bLocal_580, 0, 0, 0, 325, 1);
			Function_404(0, 1, 0x420c0000, 0x41c80000);
			if (Function_376(1))
			{
				if (GET_TASK_STATUS(&bLocal_549, 67) != 1)
				{
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 4294967295);
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_549, &Global_54076, 5.0f, 2);
					TASK_PRIORITY_SET(&bLocal_549, true);
					Function_220(&iLocal_864);
				}
			}
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				if (GET_MOUNT(&Global_54076) == &bLocal_551)
				{
					if (IS_BLIP_VALID(&uLocal_851))
					{
						REMOVE_BLIP(&uLocal_851);
					}
					if (IS_ACTOR_RIDING(&bLocal_549))
					{
						MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_549, 4294967295);
						Function_217(1);
						Function_239();
						Function_220(&iLocal_555);
						iLocal_545 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_OBJECT_VALID(&uLocal_930))
			{
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					uLocal_930 = CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &cLocal_462, "HOME02SON02_CAMERA_FOCUS", &bLocal_843, Vector(0.0f, 0.0f, 0.0f), 70.0f, 75.0f);
					if (IS_OBJECT_VALID(&uLocal_930))
					{
						SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_930, 0);
					}
				}
			}
			if (!IS_BLIP_VALID(&uLocal_851))
			{
				if (IS_ACTOR_VALID(&bLocal_843))
				{
					uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
					SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
					if (IS_BLIP_VALID(&uLocal_851))
					{
					}
				}
			}
			Function_327(&uLocal_829, 11, 0, 4294967295, 4294967295);
			Function_483();
			Function_220(&iLocal_555);
			iLocal_545 = 10;
			break;
		
		case 0x0000000A:
			if (Function_267(&iLocal_555) <= 5.0f)
			{
				DECOR_SET_BOOL(&bLocal_843, "Frank", 1);
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_843);
				GET_OBJECT_POSITION(&iLocal_4 + 1704, &(Local_892[02]));
				bLocal_834 = TASK_SEQUENCE_OPEN();
				TASK_FACE_COORD(0, &(Local_892[02]), 0);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1816, 3, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_843, bLocal_834);
				TASK_SEQUENCE_RELEASE(bLocal_834, 1);
				TASK_PRIORITY_SET(&bLocal_843, true);
				HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&bLocal_553, 1);
				bLocal_834 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &bLocal_843, 0, 3212836864);
				TASK_FOLLOW_OBJECT_ALONG_PATH(0, &bLocal_843, &iLocal_4 + 1816, 8.0f, 1, 3.0f);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_549, bLocal_834);
				TASK_SEQUENCE_RELEASE(bLocal_834, 1);
				TASK_PRIORITY_SET(&bLocal_549, true);
				Function_367("home02_son02_obj01", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_220(&iLocal_555);
				Function_220(&iLocal_559);
				Function_220(&iLocal_563);
				iLocal_545 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_404(1, 1, 0x420c0000, 0x41c80000);
			if (Function_352(&iLocal_563, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_580, 0, &cLocal_462, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&uLocal_851))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
						SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&uLocal_851))
						{
						}
					}
				}
				Function_420(&iLocal_563, 60.0f, 200.0f, &bLocal_843, "Dog_return", "Dog_abandoned", &bLocal_580, 0, 0, 0, 325, 1);
			}
			if (!Function_406(&bLocal_843, &Global_54076, 60.0f))
			{
				if (!GET_TASK_STATUS(&bLocal_843, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_843, &Global_54076, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_843, 0) != 1)
			{
				bLocal_834 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1816, 3, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_843, bLocal_834);
				TASK_SEQUENCE_RELEASE(bLocal_834, 1);
			}
			if (GET_TASK_STATUS(&bLocal_843, 6) == 1)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_843, 20.0f))
				{
					TASK_CLEAR(&bLocal_843);
					Function_239();
					Function_220(&iLocal_555);
					iLocal_545 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			iLocal_909 = Vector(3.0f, 0.0f, 1.0f);
			TASK_FOLLOW_OBJECT(&bLocal_549, &bLocal_843, &iLocal_909, 0, 0, 0, 0, 0, 0, 1);
			Function_220(&iLocal_555);
			iLocal_545 = 13;
			break;
		
		case 0x0000000D:
			if (Function_352(&iLocal_563, 100.0f, &bLocal_551, "Horse_return", "Horse_find", "Horse_abandoned", &bLocal_580, 0, &cLocal_462, 0, 334))
			{
				if (IS_BLIP_VALID(&uLocal_851))
				{
					REMOVE_BLIP(&uLocal_851);
				}
			}
			else
			{
				if (!IS_BLIP_VALID(&uLocal_851))
				{
					if (IS_ACTOR_VALID(&bLocal_843))
					{
						uLocal_851 = ADD_BLIP_FOR_ACTOR(&bLocal_843, 325, 0, 2, 0);
						SET_BLIP_NAME(&uLocal_851, "BLIP_RUFUS");
						if (IS_BLIP_VALID(&uLocal_851))
						{
						}
					}
				}
				Function_420(&iLocal_563, 60.0f, 200.0f, &bLocal_843, "Dog_return", "Dog_abandoned", &bLocal_580, 0, 0, 0, 325, 1);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 640))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 640))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 640);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 648))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 648))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 648);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 656))
			{
				if (IS_ACTOR_IN_VOLUME(&bLocal_843, &iLocal_4 + 656))
				{
					Function_220(&iLocal_868);
					DESTROY_VOLUME(&iLocal_4 + 656);
					TOGGLE_ACTOR_ACTION_SIGNAL_ON(&bLocal_843, 8, "SNIFF");
				}
			}
			if (Function_269(&iLocal_868))
			{
				if (Function_267(&iLocal_868) < 5.0f)
				{
					Function_403(&iLocal_868);
					TOGGLE_ACTOR_ACTION_SIGNAL_OFF(&bLocal_843);
				}
			}
			if (!Function_406(&bLocal_843, &Global_54076, 60.0f))
			{
				if (!GET_TASK_STATUS(&bLocal_843, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_843, &Global_54076, 1, 3212836864);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_843, 0) != 1)
			{
				bLocal_834 = TASK_SEQUENCE_OPEN();
				if (IS_VOLUME_VALID(&iLocal_4 + 640))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1120[1], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 648))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1168[0], 3.0f, 3, 1, 1);
				}
				if (IS_VOLUME_VALID(&iLocal_4 + 656))
				{
					TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 1216[0], 3.0f, 3, 1, 1);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_843, bLocal_834);
				TASK_SEQUENCE_RELEASE(bLocal_834, 1);
			}
			if (GET_TASK_STATUS(&bLocal_843, 6) == 1)
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_843, 20.0f))
				{
					TASK_CLEAR(&bLocal_843);
					ABORT_SCRIPTED_CONVERSATION(1);
					Function_239();
					Function_220(&iLocal_555);
					iLocal_545 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_567[0] = 1;
			Function_220(&iLocal_555);
			bLocal_544 = true;
			iLocal_545 = 0;
			break;
	}
	return;
}

void Function_483() //Position: 0x1E0A7 / 123047
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_s2_SearchWolves", "Home02_s2_SearchWolves", 1, 1, 1, 0, 1);
		Function_369(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_484(int iParam0, bool bParam1, float fParam2) //Position: 0x1E0FC / 123132
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&iParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&iParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&iParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &fParam2)
		{
			DECOR_REMOVE(&iParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&iParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_485() //Position: 0x1E19E / 123294
{
	if (Function_267(&iLocal_876) <= 1.0f)
	{
		switch (iLocal_840)
		{
			case 0x00000000:
				iLocal_842 = Function_417();
				iLocal_840++;
				break;
			
			case 0x00000001:
				if (iLocal_545 > 8)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_840++;
					}
				}
				break;
			
			case 0x00000002:
				Function_404(0, 1, 0x420c0000, 0x41c80000);
				if (IS_ACTOR_VALID(&bLocal_551))
				{
					if (GET_MOUNT(&Global_54076) == &bLocal_551)
					{
						iLocal_840++;
					}
				}
				break;
			
			case 0x00000003:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (iLocal_545 > 11)
				{
					if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						iLocal_840++;
						Function_220(&iLocal_559);
					}
				}
				break;
			
			case 0x00000004:
				Function_404(1, 1, 0x420c0000, 0x41c80000);
				if (Function_471())
				{
					Function_449();
				}
				break;
		}
		Function_220(&iLocal_876);
	}
	return;
}

void Function_486() //Position: 0x1E28C / 123532
{
	switch (iLocal_545)
	{
		case 0x00000006:
			Function_497(&Local_464, 1);
			cLocal_462 = CREATE_LAYOUT("home02_son02_DynamicLayout");
			Function_496();
			AUDIO_MUSIC_FORCE_TRACK("NRT_SONG_03", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_545 = 7;
			break;
		
		case 0x00000007:
			if (Function_494())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_290();
				}
				iLocal_545 = 8;
			}
			break;
		
		case 0x00000008:
			Function_335(&Global_54076, &iLocal_4 + 768[0], 1, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_549))
			{
				TASK_CLEAR(&bLocal_549);
				TASK_STAND_STILL(&bLocal_549, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_549, true);
				Function_335(&bLocal_549, &iLocal_4 + 768[1], 0, 0, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_551))
			{
				TASK_CLEAR(&bLocal_551);
				TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_551, true);
				Function_335(&bLocal_551, &iLocal_4 + 768[2], 0, 0, 0);
			}
			iLocal_545 = 9;
			break;
		
		case 0x00000009:
			if (Function_270("$/cutscene/son_02/son_02", &iLocal_532, &Local_464, &bLocal_544, 75475, 74997, 73896, 73470, 73188, 55244, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_545 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_547 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			if (Function_279(&Local_464))
			{
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 736, 15);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 736);
			}
			Function_303(12, 1, 1);
			SET_CRIPPLE_ENABLE(&bLocal_549, 0);
			SET_ACTOR_FACTION(&bLocal_549, 20);
			TASK_PRIORITY_SET(&bLocal_549, true);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_549, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_549, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_549, GET_ACTOR_MAX_HEALTH(&bLocal_549));
			ACTOR_END_FORCE_HOLSTER(&bLocal_549);
			MEMORY_ALLOW_SHOOTING(&bLocal_549, true);
			RESET_ACTOR_GAITS(&bLocal_551, 0);
			TASK_PRIORITY_SET(&bLocal_551, true);
			TASK_STAND_STILL(&bLocal_551, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_551, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_551, GET_ACTOR_MAX_HEALTH(&bLocal_551));
			SET_ALLOW_RIDE_BY_AI(&bLocal_551, 0);
			Function_493(&iLocal_864);
			Function_493(&iLocal_868);
			Function_493(&iLocal_872);
			Function_493(&iLocal_876);
			Function_493(&iLocal_880);
			Function_491(&uLocal_584, &cLocal_462);
			Function_493(&iLocal_555);
			Function_493(&iLocal_559);
			Function_493(&iLocal_563);
			bLocal_544 = false;
			iLocal_545 = 0;
			Function_488(&Local_464, &bLocal_544, &iLocal_545);
			Function_487(StackVal, StackVal, StackVal, StackVal, Function_290(), Local_464);
			switch (bLocal_544)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000004:
					break;
				
				case 0x00000005:
					break;
				
				case 0x00000006:
					break;
				
				case 0x00000007:
					break;
				
				case 0x00000008:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_487(struct<41> Param0) //Position: 0x1E58E / 124302
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_544 = false;
			break;
		
		case 0x00000002:
			bLocal_544 = true;
			break;
		
		case 0x00000003:
			bLocal_544 = 2;
			break;
		
		case 0x00000004:
			bLocal_544 = 3;
			break;
		
		case 0x00000005:
			bLocal_544 = 4;
			break;
		
		case 0x00000006:
			bLocal_544 = 5;
			break;
		
		case 0x00000007:
			bLocal_544 = 6;
			break;
		
		case 0x00000008:
			bLocal_544 = 7;
			break;
		
		case 0x00000009:
			bLocal_544 = 8;
			break;
		
		case 0x0000000A:
			bLocal_544 = 101;
			break;
	}
}

void Function_488(int iParam0, var uParam1, int iParam2) //Position: 0x1E623 / 124451
{
	if (Function_279(&iParam0))
	{
		uParam1 = Function_490(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_489();
	}
	return;
}

void Function_489() //Position: 0x1E65F / 124511
{
	if (Global_53524.f_164 != 4294967295)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT_FROM_WEAPON_ENUM(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		ACTOR_PUT_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0), Global_53524.f_164, 0);
		PRINTSTRING("Restoring weapon: ");
		PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
		PRINTNL();
	}
	return;
}

var Function_490(int iParam0) //Position: 0x1E6B0 / 124592
{
	if (Function_279(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_491(struct<2>[] Param0) //Position: 0x1E6C9 / 124617
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_492(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_492(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_492(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_492(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_492(struct<13> Param0) //Position: 0x1EDA2 / 126370
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Layout invalid!");
		return 0;
	}
	if (!IS_STRING_VALID(&uParam2))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENT: Name invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		DESTROY_OBJECT(&Param0);
	}
	Param0 = CREATE_EVENT_TRAP(&uParam2, iParam3, &uParam1);
	if (!IS_OBJECT_VALID(&Param0))
	{
		return 0;
	}
	EVENT_TRAP_STORE_EVENTS(&Param0, 1);
	Param0.f_8 = iParam3;
	Param0.f_12 = 0;
	Function_77(&Param0 + 12, iParam4);
	return 1;
}

void Function_493(float fParam0) //Position: 0x1EE71 / 126577
{
	if (!Function_269(&fParam0))
	{
		Function_221(&fParam0, 0.0f);
	}
	return;
}

bool Function_494() //Position: 0x1EE88 / 126600
{
	if (!IS_EXITFLAG_SET())
	{
		if (!iLocal_861)
		{
			if (!Function_495(0))
			{
				return 0;
			}
			iLocal_861 = 1;
		}
		if (!Function_321())
		{
			return 0;
		}
		if (!Function_311(&iLocal_476))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_549))
		{
			bLocal_549 = Function_294(12, 0, 1, -94,785f, 117,663f, 1405,207f, 0, 0, 0);
			return 0;
		}
		if (!iLocal_582)
		{
			if (IS_ACTOR_INITED(&bLocal_549))
			{
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_549);
				GIVE_WEAPON_TO_ACTOR(&bLocal_549, 22, false, 1, 1);
				GIVE_WEAPON_TO_ACTOR(&bLocal_549, 8, false, 1, 1);
				ACTOR_SET_NEXT_EQUIP_SLOT(&bLocal_549, 5, 1);
				ACTOR_PUT_WEAPON_IN_HAND(&bLocal_549, 8, 0);
				iLocal_582 = 1;
				return 0;
			}
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_549, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_845))
		{
			bLocal_845 = Function_294(11, 0, 1, -100.0f, 118,869f, 1348.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_845, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_847))
		{
			bLocal_847 = Function_294(13, 0, 1, -60.0f, 117,472f, 1364.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_847, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_843))
		{
			bLocal_843 = Function_294(14, 0, 1, -64.0f, 117,74f, 1360.0f, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_843, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_551))
		{
			bLocal_551 = Function_305(1, 1, -78,446f, 116,861f, 1419,268f, -469,06f, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_551, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_495(bool bParam0) //Position: 0x1F03F / 127039
{
	if (!Global_6607)
	{
		return 0;
	}
	if (HUD_IS_FADED())
	{
		if (!&bParam0)
		{
			if (!MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
			{
				return 0;
			}
		}
	}
	return 1;
	return 1;
}

void Function_496() //Position: 0x1F06F / 127087
{
	Function_322(&iLocal_476, "home02son02", 10, 0);
	Function_322(&iLocal_476, "BeechersHope", 12, 0);
	Function_322(&iLocal_476, "custom/dog_sniffing", 8, 0);
	return;
}

void Function_497(int iParam0, bool bParam1) //Position: 0x1F0C6 / 127174
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_503(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_279(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, *(&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_279(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_211();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_239();
	Function_273();
	Function_228("");
	Function_502(0);
	Function_501();
	Function_205();
	Function_204();
	ENABLE_JOURNAL_REPLAY(0);
	Function_500();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_305(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_343(0, 0x40400000);
	}
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	RESET_PROPS_IN_WORLD();
	if (bParam1)
	{
		DESTROY_GC_OBJECTS(0, 1);
	}
	CLEAN_CACHE_ENTRIES();
	SET_NPC_TO_NPC_CRIPPLE_DISABLE(1);
	SET_ACTOR_FACTION(&Global_54076, 2);
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	Function_499(13);
	Function_499(14);
	Function_499(25);
	Function_499(24);
	Function_499(12);
	Function_499(27);
	Function_499(26);
	Function_499(15);
	Function_498();
	switch (cVar0)
	{
		case 0x0000000C:
		case 0x00000036:
			strcpy(&cVar5, "Alwyn Roberts", 24);
			break;
		
		case 0x00000027:
			strcpy(&cVar5, "Andrew Minghella", 24);
			break;
		
		case 0x00000005:
		case 0x00000007:
		case 0x0000001D:
		case 0x00000031:
		case 0x00000037:
			strcpy(&cVar5, "Chris Berg", 24);
			break;
		
		case 0x0000002A:
		case 0x0000002B:
			strcpy(&cVar5, "Conor McGuire", 24);
			break;
		
		case 0x00000003:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000012:
		case 0x0000001C:
		case 0x00000022:
		case 0x00000023:
		case 0x00000030:
			strcpy(&cVar5, "Danny Bulla", 24);
			break;
		
		case 0x00000017:
		case 0x00000015:
		case 0x0000000D:
		case 0x00000014:
		case 0x00000019:
		case 0x00000029:
		case 0x0000002F:
		case 0x00000039:
			strcpy(&cVar5, "Dave Mendelsohn", 24);
			break;
		
		case 0x0000001E:
		case 0x0000002D:
		case 0x0000002E:
			strcpy(&cVar5, "Donald Jones", 24);
			break;
		
		case 0x0000000A:
		case 0x00000009:
		case 0x0000000E:
		case 0x00000021:
			strcpy(&cVar5, "nJohn Diaz", 24);
			break;
		
		case 0x00000002:
		case 0x00000013:
		case 0x0000001F:
		case 0x00000028:
			strcpy(&cVar5, "Nick Zippmann", 24);
			break;
		
		case 0x00000016:
		case 0x00000006:
		case 0x00000038:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x0000001B:
		case 0x00000024:
		case 0x0000002C:
			strcpy(&cVar5, "Patrick Dempsey", 24);
			break;
		
		case 0x00000010:
		case 0x0000001A:
		case 0x00000020:
			strcpy(&cVar5, "Rowan Cockroft", 24);
			break;
		
		case 0x00000025:
			strcpy(&cVar5, "Sean Fitzpatrick", 24);
			break;
		
		case 0x00000001:
		case 0x00000008:
		case 0x00000018:
		case 0x00000026:
			strcpy(&cVar5, "Silas Morse", 24);
			break;
		
		case 0x00000004:
		case 0x0000000B:
			strcpy(&cVar5, "Simon Iwaniszak", 24);
			break;
		
		default:
			strcpy(&cVar5, "Unassigned Owner", 24);
			break;
	}
	Var1 = { StackVal, StackVal, StackVal, Function_12(cVar0) };
	SET_MISSION_INFO(UI_GET_STRING(&Var1), &cVar5);
	return;
}

void Function_498() //Position: 0x1F506 / 128262
{
	char* cVar0[24];
	int iVar1;
	
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		return;
	}
	cVar0 = CREATE_OBJECT_ITERATOR(&Global_10998);
	ITERATE_IN_LAYOUT(&cVar0, &Global_10998);
	iVar1 = START_OBJECT_ITERATOR(&cVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_CHECK_EXIST(&iVar1, "missioncampfireobj"))
		{
			if (IS_OBJECT_IN_OBJECTSET(&iVar1, &Global_26172))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&iVar1, &Global_26172);
			}
			RELEASE_OBJECT_REF(&iVar1);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&cVar0);
	}
	DESTROY_ITERATOR(&cVar0);
	return;
}

void Function_499(int iParam0) //Position: 0x1F58B / 128395
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_500() //Position: 0x1F5AB / 128427
{
	var uVar0;
	
	uVar0 = GET_ATTACHED_HOGTIE_VICTIM(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar0);
	}
	uVar0 = GET_LASSO_TARGET(&Global_54076);
	if (IS_ACTOR_VALID(&uVar0))
	{
		DETACH_LASSO(&uVar0);
	}
	SET_PLAYER_POSTURE(0, 0, 0);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
	return;
}

void Function_501() //Position: 0x1F5F1 / 128497
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_502(int iParam0) //Position: 0x1F607 / 128519
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_208())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_503(int iParam0, int iParam1) //Position: 0x1F640 / 128576
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_504(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_504(struct<113> Param0) //Position: 0x1F6C7 / 128711
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_505() //Position: 0x1F725 / 128805
{
	return;
}

void Function_506(int iParam0, int iParam1) //Position: 0x1F72B / 128811
{
	int iVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (IS_ACTOR_VALID(&iParam1))
			{
				if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
				{
					iParam0 = &iVar0;
					Function_377(&iParam0, 0);
				}
			}
			else
			{
				iParam0 = &iVar0;
				Function_377(&iParam0, 0);
			}
		}
	}
	else
	{
		iVar0 = GET_MOUNT(&Global_54076);
		if (IS_ACTOR_VALID(&iVar0))
		{
			if (!&iParam0 != &iVar0)
			{
				if (IS_ACTOR_VALID(&iParam1))
				{
					if (!GET_ACTORS_HORSE(&iParam1) != &iVar0)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
						}
						iParam0 = &iVar0;
						Function_377(&iParam0, 0);
					}
				}
				else
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iParam0));
					}
					iParam0 = &iVar0;
					Function_377(&iParam0, 0);
				}
			}
		}
	}
	return;
}

bool Function_507(int iParam0) //Position: 0x1F80F / 129039
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_508(struct<25> Param0) //Position: 0x1F82D / 129069
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			break;
		
		default:
			if (Param0)
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			break;
	}
	if (Param0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_509(&Param0, 1);
			return 1;
		}
	}
	Function_509(&Param0, 0);
	return 0;
}

void Function_509(struct<25> Param0) //Position: 0x1F8B9 / 129209
{
	if (&bParam1)
	{
		Param0 = 0;
	}
	(&Param0 + 8) = "";
	Param0.f_16 = 4294967295;
	Param0.f_20 = 0;
	Param0.f_24 = 0;
	return;
}

bool Function_510(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1F8E4 / 129252
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	char* cVar18[64];
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_509(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_529(&uParam3);
				ITERATE_IN_EVENT_TRAP(&uParam3, &(Param1[iVar02]));
				iVar1 = START_OBJECT_ITERATOR(&uParam3);
				while (IS_OBJECT_VALID(&iVar1))
				{
					iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
					if (IS_EVENT_VALID(&iVar2))
					{
						if (StackVal && (StackVal && StackVal == 5 == 91) == 110)
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(&iVar2);
							if (IS_OBJECT_VALID(&uVar4))
							{
								uVar3 = GET_ACTOR_FROM_OBJECT(&uVar4);
							}
						}
						else
						{
							uVar5 = GET_EVENT_TARGET_AS_PHYSINST(&iVar2);
							if (IS_PHYSINST_VALID(&uVar5))
							{
								uVar6 = GET_OBJECT_FROM_PHYSINST(&uVar5);
								if (IS_OBJECT_VALID(&uVar6))
								{
									if (GET_OBJECT_TYPE(&uVar6) == 15)
									{
										uVar3 = GET_ACTOR_FROM_OBJECT(&uVar6);
									}
								}
							}
						}
						if (IS_ACTOR_VALID(&uVar3))
						{
							iVar7 = 0;
							if (StackVal == 2)
							{
								iVar7 = 1;
								uVar8 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar8))
								{
									iVar9 = GET_ACTOR_FROM_OBJECT(&uVar8);
									if (IS_ACTOR_VALID(&iVar9))
									{
										if (&iVar9 == &Global_54076)
										{
											iVar7 = 2;
										}
										else if (&iVar9 == GET_MOUNT(&Global_54076))
										{
											iVar7 = 2;
										}
										else if (&iVar9 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											iVar7 = 2;
										}
									}
								}
							}
							else if (StackVal == 87)
							{
								bVar10 = false;
								uVar11 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar11))
								{
									iVar12 = GET_ACTOR_FROM_OBJECT(&uVar11);
									if (IS_ACTOR_VALID(&iVar12))
									{
										if (&iVar12 == GET_MOUNT(&Global_54076))
										{
											bVar10 = true;
										}
									}
								}
								if (!bVar10)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							else if (StackVal == 88)
							{
								bVar13 = false;
								uVar14 = GET_EVENT_PERPETRATOR(&iVar2);
								if (IS_OBJECT_VALID(&uVar14))
								{
									iVar15 = GET_ACTOR_FROM_OBJECT(&uVar14);
									if (IS_ACTOR_VALID(&iVar15))
									{
										if (&iVar15 != GET_VEHICLE(&Global_54076) && IS_ACTOR_DRIVING_VEHICLE(&Global_54076))
										{
											bVar13 = true;
										}
									}
								}
								if (!bVar13)
								{
									EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
									EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
									iVar1 = "";
								}
							}
							if (IS_OBJECT_VALID(&iVar1))
							{
								iVar16 = 0;
								while (iVar16 <= Param0)
								{
									if (IS_OBJECT_VALID(&(Param0[iVar1615])))
									{
										if ((Param1[iVar02].f_12 && Param0[iVar1615].f_68) >= 0)
										{
											if ((iVar7 != 0 || (iVar7 != 1 && Function_528(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_528(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_514(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_509(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_513(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_512(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_513(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_511(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_228(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_512(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
												}
											}
										}
									}
									iVar16++;
								}
							}
						}
					}
					if (IS_OBJECT_VALID(&iVar1))
					{
						iVar1 = OBJECT_ITERATOR_NEXT(&uParam3);
					}
				}
				EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
				EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
			}
		}
		iVar0++;
	}
	Function_509(&Param2, 0);
	return 0;
}

void Function_511(char* cParam0) //Position: 0x1FCFA / 130298
{
	memcpy(&cParam0, StackVal, StackVal, StackVal, StackVal, StackVal, Param2, 16);
	switch (cParam1)
	{
		case 0x00000008:
			stradd(&cParam0, "_dead", 64);
			break;
		
		case 0x00000010:
			stradd(&cParam0, "_killed", 64);
			break;
		
		case 0x00000020:
			stradd(&cParam0, "_toomany", 64);
			break;
		
		case 0x00000040:
			stradd(&cParam0, "n_attacked", 64);
			break;
		
		case 0x00000080:
			stradd(&cParam0, "_horse_dead", 64);
			break;
		
		case 0x00000100:
			stradd(&cParam0, "_horse_killed", 64);
			break;
		
		case 0x00000200:
			stradd(&cParam0, "_horse_toomany", 64);
			break;
		
		case 0x00000400:
			stradd(&cParam0, "_horse_attacked", 64);
			break;
	}
}

void Function_512(struct<25> Param0) //Position: 0x1FDEE / 130542
{
	switch (bParam1)
	{
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			Param0.f_20 = 1;
			break;
	}
	switch (bParam1)
	{
		case 0x00000008:
		case 0x00000080:
			Function_38(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_38(&iParam2, 2);
			break;
	}
	Function_38(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_513(bool bParam0) //Position: 0x1FE66 / 130662
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_514(struct<57> Param0) //Position: 0x1FE8A / 130698
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (!IS_OBJECT_VALID(&iParam2))
	{
		return 0;
	}
	switch (Param0.f_56)
	{
		case 0x0000000F:
			iVar1 = GET_ACTOR_FROM_OBJECT(&Param0);
			if (!IS_ACTOR_VALID(&iVar1))
			{
				return 0;
			}
			return Function_525(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_518(&Param0, &uParam1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000019:
			uVar3 = GET_SQUAD_FROM_OBJECT(&Param0);
			if (!SQUAD_IS_VALID(&uVar3))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uVar3))
			{
				iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar3, bVar0);
				if (IS_ACTOR_VALID(&iVar1))
				{
					bVar2 = Function_525(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_515(&Param0, bVar2);
					}
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			uVar4 = GET_OBJECTSET_FROM_OBJECT(&Param0);
			if (!IS_OBJECTSET_VALID(&uVar4))
			{
				return 0;
			}
			bVar0 = false;
			while (bVar0 <= GET_OBJECTSET_SIZE(&uVar4))
			{
				bVar5 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uVar4);
				if (IS_OBJECT_VALID(&bVar5))
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&bVar5);
					if (IS_ACTOR_VALID(&iVar1))
					{
						bVar2 = Function_525(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_515(&Param0, bVar2);
						}
					}
				}
				bVar0++;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

var Function_515(int iParam0, bool bParam1) //Position: 0x20000 / 131072
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return bParam1;
	}
	if (Function_14(bParam1, 16))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHuman"))
		{
			bVar0 = DECOR_GET_INT(&iParam0, "MFT_LimitHuman");
			bVar0 = (bVar0 - 1);
			if (bVar0 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHuman");
				bParam1 = Function_517(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_516(16);
			}
		}
	}
	else if (Function_14(bParam1, 256))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "MFT_LimitHorse"))
		{
			bVar1 = DECOR_GET_INT(&iParam0, "MFT_LimitHorse");
			bVar1 = (bVar1 - 1);
			if (bVar1 < 0)
			{
				DECOR_REMOVE(&iParam0, "MFT_LimitHorse");
				bParam1 = Function_517(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_516(256);
			}
		}
	}
	return bParam1;
}

bool Function_516(int iParam0) //Position: 0x2013C / 131388
{
	return 2 | iParam0;
}

int Function_517(int iParam0) //Position: 0x20146 / 131398
{
	return 4 | iParam0;
}

int Function_518(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x20150 / 131408
{
	if (!IS_ACTOR_VALID(&uParam2))
	{
		return 0;
	}
	if (IS_ACTOR_HUMAN(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_524(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_516(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_519(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_77(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_516(16);
		}
	}
	return 0;
}

int Function_519(int iParam0, vector3 vParam1) //Position: 0x2020B / 131595
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_523(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_522(iVar0, 3, 1, bParam3))
			{
				if (!Function_528(&iParam0, 8, 1))
				{
					return Function_521(64, 1024, bParam2);
				}
			}
			return Function_520(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_522(iVar0, 2, 1, bParam3))
			{
				if (!Function_528(&iParam0, 32, 1))
				{
					return Function_521(64, 1024, bParam2);
				}
			}
			return Function_520(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_522(iVar0, 1, 1, bParam3))
			{
				if (!Function_528(&iParam0, 64, 1))
				{
					return Function_521(64, 1024, bParam2);
				}
			}
			return Function_520(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_522(iVar0, 3, 1, bParam3))
			{
				if (!Function_528(&iParam0, 128, 1))
				{
					return Function_521(64, 1024, bParam2);
				}
			}
			return Function_520(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_522(iVar0, 1, 1, bParam3))
			{
				if (!Function_528(&iParam0, 1024, 1))
				{
					return Function_521(64, 1024, bParam2);
				}
			}
			return Function_520(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_522(iVar0, 1, 1, bParam3))
			{
				if (!Function_528(&iParam0, 1024, 1))
				{
					return Function_521(64, 1024, bParam2);
				}
			}
			return Function_520(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_520(int iParam0, int iParam1, bool bParam2) //Position: 0x203D3 / 132051
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_521(int iParam0, int iParam1, bool bParam2) //Position: 0x203E8 / 132072
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_522(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x203FD / 132093
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_523(int iParam0) //Position: 0x2041A / 132122
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = GET_CURRENT_GAME_TIME();
	fVar4 = fVar3;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((fVar3 - 10.0f) > (*&iParam0 + 72)[iVar0])
		{
			iVar2++;
		}
		if ((*&iParam0 + 72)[iVar0] > fVar4)
		{
			fVar4 = (*&iParam0 + 72)[iVar0];
			iVar1 = iVar0;
		}
		iVar0++;
	}
	(*&iParam0 + 72)[iVar1] = fVar3;
	if (iVar2 <= 5)
	{
		iVar2++;
	}
	return iVar2;
}

int Function_524(var uParam0, vector3 vParam1) //Position: 0x2048D / 132237
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_523(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_522(iVar0, 3, 1, bParam2))
			{
				if (!Function_528(&uParam0, 8, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000009:
			if (Function_522(iVar0, 3, 1, bParam2))
			{
				if (!Function_528(&uParam0, 8, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x0000006E:
			if (Function_522(iVar0, 2, 1, bParam2))
			{
				if (!Function_528(&uParam0, 16, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x0000005B:
			if (Function_522(iVar0, 2, 1, bParam2))
			{
				if (!Function_528(&uParam0, 32, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000031:
			if (Function_522(iVar0, 1, 1, bParam2))
			{
				if (!Function_528(&uParam0, 64, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000007:
			if (Function_522(iVar0, 3, 1, bParam2))
			{
				if (!Function_528(&uParam0, 128, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000008:
			if (Function_522(iVar0, 2, 1, bParam2))
			{
				if (!Function_528(&uParam0, 256, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000014:
			if (Function_522(iVar0, 1, 1, bParam2))
			{
				if (!Function_528(&uParam0, 512, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000018:
			if (Function_522(iVar0, 1, 1, bParam2))
			{
				if (!Function_528(&uParam0, 512, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000057:
			if (Function_522(iVar0, 1, 1, bParam2))
			{
				if (!Function_528(&uParam0, 1024, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000058:
			if (Function_522(iVar0, 1, 1, bParam2))
			{
				if (!Function_528(&uParam0, 1024, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_525(struct<65> Param0) //Position: 0x206B6 / 132790
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (&iParam2 == &iParam3)
	{
		bVar0 = true;
	}
	switch (Param0.f_60)
	{
		case 0x00000002:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_524(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_528(&Param0, 2, 1))
					{
						return Function_517(8);
					}
					return Function_516(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_528(&Param0, 4, 1))
					{
						return Function_517(16);
					}
					return Function_516(16);
				}
			}
			if (Param0.f_64)
			{
				if (GET_MOST_RECENT_MOUNT(&iParam2) == &iParam3)
				{
					if (iParam4 == 0)
					{
						if (IS_ACTOR_ALIVE(&iParam3))
						{
							return Function_519(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_528(&Param0, 2, 1))
						{
							return Function_517(128);
						}
						return Function_516(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_528(&Param0, 4, 1))
						{
							return Function_517(256);
						}
						return Function_516(256);
					}
				}
			}
			break;
		
		case 0x00000001:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					if (IS_ACTOR_ALIVE(&iParam3))
					{
						return Function_519(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_528(&Param0, 2, 1))
					{
						return Function_517(8);
					}
					return Function_516(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_528(&Param0, 4, 1))
					{
						return Function_517(16);
					}
					return Function_516(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_527(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_528(&Param0, 2, 1))
					{
						return Function_517(8);
					}
					return Function_516(8);
				}
				if (!Function_528(&Param0, 4, 1))
				{
					return Function_517(16);
				}
				return Function_516(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_519(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_526(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_516(128);
							}
							if (!Function_528(&Param0, 2, 1))
							{
								return Function_517(8);
							}
							return Function_516(8);
						}
						if (iParam4 == 2)
						{
							if (Function_526(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_516(256);
							}
							if (!Function_528(&Param0, 4, 1))
							{
								return Function_517(16);
							}
							return Function_516(16);
						}
					}
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool Function_526(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2099C / 133532
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&iParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&iParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&iParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

int Function_527(int iParam0, vector3 vParam1) //Position: 0x20A6A / 133738
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_523(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_522(iVar0, 2, 1, bParam2))
			{
				if (!Function_528(&iParam0, 16, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x0000005B:
			if (Function_522(iVar0, 2, 1, bParam2))
			{
				if (!Function_528(&iParam0, 32, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000057:
			if (Function_522(iVar0, 1, 1, bParam2))
			{
				if (!Function_528(&iParam0, 1024, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		case 0x00000058:
			if (Function_522(iVar0, 1, 1, bParam2))
			{
				if (!Function_528(&iParam0, 1024, 1))
				{
					return Function_517(64);
				}
			}
			return Function_516(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_528(struct<69> Param0) //Position: 0x20B8C / 134028
{
	if (bParam2)
	{
		if (!Function_14(Param0.f_68, SHIFT_LEFT(bParam1, 11)))
		{
			return 0;
		}
	}
	return Function_14(Param0.f_68, bParam1);
}

int Function_529(bool bParam0) //Position: 0x20BB6 / 134070
{
	if (IS_ITERATOR_VALID(&bParam0))
	{
		ITERATE_EVERYWHERE(&bParam0);
		ITERATE_ON_PARTIAL_NAME(&bParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&bParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_530(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x20BEC / 134124
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

