//Decompiled with MagicRDR v1.0
//Function Count : 701
//Statics Count : 1130
//Natives Count : 747
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 3;
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
	var uLocal_20 = 2;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 14;
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
	var uLocal_88 = 1;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 6;
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
	var uLocal_128 = 3;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 3;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 19;
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
	var uLocal_190 = 18;
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
	var uLocal_232 = 3;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 5;
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
	var uLocal_256 = 4;
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
	var uLocal_268 = 4;
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
	var uLocal_280 = 19;
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
	var uLocal_322 = 23;
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
	var uLocal_372 = 7;
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
	var uLocal_390 = 20;
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
	int iLocal_474 = 0;
	var uLocal_475 = 0;
	struct<6> Local_476 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	int iLocal_488 = 9;
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
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	bool bLocal_541 = false;
	int iLocal_542 = 0;
	var uLocal_543 = 0;
	bool bLocal_544 = false;
	var uLocal_545 = 0;
	bool bLocal_546 = false;
	var uLocal_547 = 0;
	bool bLocal_548 = false;
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	int iLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	int iLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	int iLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	int iLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	int iLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	int iLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	int iLocal_590[3] = { 0, 0, 0 };
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	bool bLocal_598 = false;
	bool bLocal_599 = false;
	bool bLocal_600 = false;
	int iLocal_601 = 0;
	var uLocal_602 = 13;
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
	struct<15> Local_656[3];
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 5;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 5;
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
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	int iLocal_756 = 0;
	var uLocal_757 = 0;
	int iLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	int iLocal_764 = 0;
	var uLocal_765 = 0;
	int iLocal_766 = 0;
	var uLocal_767 = 0;
	int iLocal_768 = 0;
	var uLocal_769 = 0;
	struct<2> Local_770 = { 0, 0 } ;
	var uLocal_772 = 0;
	struct<2> Local_773 = { 0, 0 } ;
	var uLocal_775 = 0;
	struct<5> Local_776 = { 0, 0, 0, 0, 0 } ;
	var uLocal_781 = 0;
	float fLocal_782 = 0.0f;
	bool bLocal_783 = false;
	bool bLocal_784 = false;
	int iLocal_785 = 0;
	var uLocal_786 = 0;
	bool bLocal_787 = false;
	int iLocal_788 = 0;
	bool bLocal_789 = false;
	int iLocal_790 = 0;
	var uLocal_791 = 0;
	int iLocal_792 = 0;
	bool bLocal_793 = false;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	struct<2> Local_799 = { 0, 0 } ;
	var uLocal_801 = 0;
	struct<2> Local_802 = { 0, 0 } ;
	var uLocal_804 = 0;
	float fLocal_805 = 0.0f;
	float fLocal_806 = 0.0f;
	float fLocal_807 = 0.0f;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	var uLocal_810 = 0;
	int iLocal_811 = 0;
	var uLocal_812 = 0;
	int iLocal_813 = 0;
	var uLocal_814 = 0;
	bool bLocal_815 = false;
	bool bLocal_816 = false;
	bool bLocal_817 = false;
	bool bLocal_818 = false;
	bool bLocal_819 = false;
	bool bLocal_820 = false;
	bool bLocal_821 = false;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	bool bLocal_824 = false;
	bool bLocal_825 = false;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	int iLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	bool bLocal_838 = false;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	struct<9> Local_843[7];
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	int iLocal_971 = 0;
	struct<5> Local_972[6];
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	struct<4> Local_1034[10];
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	int iLocal_1116 = 0;
	int iLocal_1117 = 0;
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
	iLocal_842 = 0;
	iLocal_971 = 0;
	iLocal_1116 = 0;
	Local_476 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_538 = 99;
	iLocal_539 = 6;
	iLocal_526 = 1000;
	while (Function_247())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x49 / 73
{
	Function_215();
	Function_212(3, 1, 0, 1, 1);
	Function_211(&iLocal_474);
	Function_211(&iLocal_4);
	Function_181(bLocal_599, 1, bLocal_599, 0, 1, 1, 1, 1);
	Function_177(&iLocal_488);
	Function_175();
	if (IS_ITERATOR_VALID(&iLocal_542))
	{
		DESTROY_ITERATOR(&iLocal_542);
	}
	RELEASE_LAYOUT_REF(&iLocal_474);
	if (bLocal_598)
	{
		Function_26(Local_476, 1, 1, 1, 0);
	}
	else if (bLocal_599)
	{
		Function_22(Local_476);
	}
	else
	{
		Function_2(Local_476);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0xC3 / 195
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0xE4 / 228
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x101 / 257
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x124 / 292
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x13B / 315
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

void Function_7(int iParam0) //Position: 0x1DD / 477
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x200 / 512
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

void Function_9() //Position: 0x24A / 586
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x263 / 611
{
	int iVar0;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	iVar0 = Function_17(bParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_11("DEED_CANCEL", bParam0);
	}
	Global_21684[bParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_11(var uParam0, bool bParam1) //Position: 0x2B6 / 694
{
	struct<4> Var0;
	
	if (!Function_20(bParam1))
	{
		return;
	}
	switch (Function_17(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_12(Function_15(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_17(bParam1), Function_15(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_17(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_12(int iParam0) //Position: 0x3E0 / 992
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

bool Function_13() //Position: 0x41A / 1050
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x435 / 1077
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x442 / 1090
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x462 / 1122
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x479 / 1145
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x494 / 1172
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x6DB / 1755
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x707 / 1799
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

bool Function_21(int iParam0) //Position: 0x72B / 1835
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x740 / 1856
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x75E / 1886
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	
	if (!Function_20(bParam0))
	{
		return;
	}
	iVar0 = Function_17(bParam0);
	if (StackVal == 2)
	{
		Function_11("nDEED_FAIL", bParam0);
	}
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[bParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(iVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0x804 / 2052
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

struct<24> Function_25(char* cParam0) //Position: 0x843 / 2115
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xA99 / 2713
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
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
			Function_98(iVar2, bParam0, bVar1);
			Function_97();
		}
	}
	Function_39(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(bParam0) == 1)
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
		if (Function_17(bParam0) == 1)
		{
			iVar2 = Function_15(bParam0);
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

void Function_27() //Position: 0xB8D / 2957
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

int Function_28(int iParam0, bool bParam1) //Position: 0xBBF / 3007
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

int Function_29(int iParam0) //Position: 0xBFD / 3069
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xC17 / 3095
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xC2D / 3117
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xF2A / 3882
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

void Function_33(char* cParam0) //Position: 0xF9F / 3999
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0xFD9 / 4057
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1055 / 4181
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x1068 / 4200
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

int Function_37(int iParam0) //Position: 0x1109 / 4361
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1146 / 4422
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x115C / 4444
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_20(bParam0))
	{
		Function_18();
		return;
	}
	bVar0 = Function_17(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_96())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(bParam0);
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
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_92();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_96())
	{
		Function_91();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_11("DEED_COMPLETE", bParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[bParam07].f_4 = 4;
		}
		else
		{
			Global_21684[bParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[bParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_84(bParam0);
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
						switch (Function_15(bParam0))
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
			Function_40(bParam0, &Var14);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x13BA / 5050
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x13F8 / 5112
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_42(bool bParam0) //Position: 0x1437 / 5175
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

void Function_43() //Position: 0x148C / 5260
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

void Function_44() //Position: 0x14D7 / 5335
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

void Function_45() //Position: 0x15DD / 5597
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

void Function_46() //Position: 0x1610 / 5648
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

void Function_47() //Position: 0x17A3 / 6051
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

void Function_48() //Position: 0x195C / 6492
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x196A / 6506
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
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
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
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

var Function_50() //Position: 0x1B87 / 7047
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1B9C / 7068
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C43 / 7235
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1EDF / 7903
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

int Function_54() //Position: 0x251D / 9501
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2526 / 9510
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2537 / 9527
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

struct<32> Function_57(char* cParam0) //Position: 0x262E / 9774
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2649 / 9801
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x26B0 / 9904
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x26C2 / 9922
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x26D4 / 9940
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

int Function_62(int iParam0) //Position: 0x2808 / 10248
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2817 / 10263
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2850 / 10320
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x288D / 10381
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2A27 / 10791
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

int Function_67(bool bParam0) //Position: 0x2C6B / 11371
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2CAC / 11436
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

struct<8> Function_69() //Position: 0x2D35 / 11573
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

struct<8> Function_70() //Position: 0x2DCC / 11724
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

void Function_71() //Position: 0x2E4B / 11851
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x2E88 / 11912
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

void Function_73() //Position: 0x3094 / 12436
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

bool Function_74(char* cParam0) //Position: 0x314B / 12619
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3163 / 12643
{
	int iVar0;
	
	iVar0 = Function_79(&uParam2, &uParam3);
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

struct<8> Function_76() //Position: 0x325B / 12891
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3265 / 12901
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x3276 / 12918
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x328C / 12940
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x3358 / 13144
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3375 / 13173
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

bool Function_82(int iParam0) //Position: 0x3BA1 / 15265
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3BDC / 15324
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3BEB / 15339
{
	int iVar0;
	int iVar1;
	
	if (!Function_16(bParam0))
	{
		return;
	}
	switch (Function_17(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_15(bParam0);
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
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_87(bParam0) == 1)
					{
						iVar0 = Function_86(bParam0);
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
			if (Function_86(bParam0) == 0)
			{
				if (Function_87(bParam0) == 1)
				{
					Function_89(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
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
			if (Function_87(bParam0) == 1)
			{
				Function_89(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
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

bool Function_85(int iParam0) //Position: 0x40CA / 16586
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x40E0 / 16608
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x40FF / 16639
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4119 / 16665
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4183 / 16771
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

void Function_90(int iParam0) //Position: 0x43AB / 17323
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

void Function_91() //Position: 0x4449 / 17481
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

void Function_92() //Position: 0x45AB / 17835
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

int Function_93(int iParam0, char* cParam1) //Position: 0x462B / 17963
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4982 / 18818
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

int Function_95(int iParam0) //Position: 0x4A0A / 18954
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4A24 / 18980
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4A4F / 19023
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4A7D / 19069
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4D19 / 19737
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

void Function_100(int iParam0, int iParam1) //Position: 0x4EED / 20205
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5157 / 20823
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

int Function_102() //Position: 0x52E7 / 21223
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

void Function_103() //Position: 0x5388 / 21384
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

void Function_104(int iParam0) //Position: 0x5446 / 21574
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

var Function_105(int iParam0) //Position: 0x54AC / 21676
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

int Function_106(int iParam0, bool bParam1) //Position: 0x553B / 21819
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

var Function_107(int iParam0, int iParam1) //Position: 0x56E7 / 22247
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

void Function_108() //Position: 0x572C / 22316
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5742 / 22338
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5782 / 22402
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_111(int iParam0) //Position: 0x57C2 / 22466
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x57D1 / 22481
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

int Function_113(int iParam0) //Position: 0x5999 / 22937
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

var Function_114() //Position: 0x5A2E / 23086
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5A53 / 23123
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x5F22 / 24354
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

var Function_117(int iParam0) //Position: 0x6249 / 25161
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x62EC / 25324
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

int Function_119(int iParam0, bool bParam1) //Position: 0x64E9 / 25833
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6694 / 26260
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6766 / 26470
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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

void Function_122(int iParam0) //Position: 0x7081 / 28801
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
			DECOR_SET_BOOL(&Global_26200[iParam014] + 96, "PlayerHouse_NoHorse", true);
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
				DECOR_SET_BOOL(&uVar0, "PlayerHouse_NoHorse", true);
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x71FE / 29182
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7309 / 29449
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x7335 / 29493
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

var Function_126(vector3 vParam0) //Position: 0x738C / 29580
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

void Function_127(var uParam0, int iParam1) //Position: 0x73DA / 29658
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7435 / 29749
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
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
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

void Function_129() //Position: 0x75D6 / 30166
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x75DC / 30172
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

void Function_131(bool bParam0, int iParam1) //Position: 0x768B / 30347
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x76E0 / 30432
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x76F6 / 30454
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

bool Function_134(int iParam0, int iParam1) //Position: 0x7747 / 30535
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

void Function_135(var uParam0, int iParam1) //Position: 0x7774 / 30580
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7785 / 30597
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x779F / 30623
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x77B0 / 30640
{
	struct<8> Var0;
	
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
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_140() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
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
			stradd(&Var0, "_tip", 32);
			Function_139(&Var0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_139(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x790C / 30988
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
		PRINT_HELP_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7997 / 31127
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x79C4 / 31172
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_144(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_143(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_142(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_142(int iParam0) //Position: 0x7B74 / 31604
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7BCB / 31691
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_144(int iParam0) //Position: 0x7BF0 / 31728
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7C46 / 31814
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

bool Function_146(bool bParam0) //Position: 0x7CA5 / 31909
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7CB1 / 31921
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7CCD / 31949
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

bool Function_149() //Position: 0x7D1F / 32031
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7D4F / 32079
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

int Function_151(int iParam0, int iParam1) //Position: 0x7DC4 / 32196
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x7E21 / 32289
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

int Function_153(int iParam0, int iParam1) //Position: 0x7E94 / 32404
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x7EEF / 32495
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
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
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
				DECOR_SET_BOOL(&Global_26200[iParam014] + 104, "SavingAtBedAllowed", true);
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x81BD / 33213
{
	char* cVar0[32];
	struct<8> Var8;
	
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
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_139(&Var8, 10.0f, 1, 0, 0, 1, 0);
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

void Function_156(int iParam0, bool bParam1) //Position: 0x845C / 33884
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

void Function_157() //Position: 0x84CB / 33995
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

int Function_158(int iParam0, int iParam1) //Position: 0x854B / 34123
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

int Function_159(int iParam0) //Position: 0x91AE / 37294
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x91C3 / 37315
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

void Function_161(var uParam0, int iParam1) //Position: 0x9212 / 37394
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x926A / 37482
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

bool Function_163(int iParam0, int iParam1) //Position: 0x92DD / 37597
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x92F1 / 37617
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

var Function_165(int iParam0) //Position: 0x93E2 / 37858
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

bool Function_166(var uParam0, int iParam1) //Position: 0x943A / 37946
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x9457 / 37975
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

bool Function_168(bool bParam0) //Position: 0x94B1 / 38065
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x94C3 / 38083
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

void Function_170(struct<185> Param0) //Position: 0x94F7 / 38135
{
	if (Param0.f_184 & 114688 == 0)
	{
		return;
	}
	if (Param0.f_184 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (Param0.f_184 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
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

void Function_171(bool bParam0, int iParam1, int iParam2) //Position: 0x9562 / 38242
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
		Function_172(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x964C / 38476
{
	int iVar0;
	
	Function_174(bParam0);
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
	Function_173();
	Global_26182.f_48 = StackVal;
	(&Global_26182 + 56) = GET_TIME_OF_DAY();
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

void Function_173() //Position: 0x97CB / 38859
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x97D7 / 38871
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

void Function_175() //Position: 0x981D / 38941
{
	Function_176();
	return;
}

void Function_176() //Position: 0x9826 / 38950
{
	Function_177(&iLocal_4 + 8);
	Function_177(&iLocal_4 + 64);
	Function_177(&iLocal_4 + 104);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_177(int iParam0) //Position: 0x9847 / 38983
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

void Function_178(struct<2>[] Param0, int iParam1) //Position: 0x986F / 39023
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

void Function_179(struct<13> Param0) //Position: 0x99BA / 39354
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_180(struct<13> Param0) //Position: 0x99D7 / 39383
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x99F5 / 39413
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
	Function_209();
	CLEAR_PRINTED_OBJECTIVE();
	Function_208();
	Function_206(0);
	Function_205();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_204();
	Function_203();
	Function_209();
	ENABLE_JOURNAL_REPLAY(1);
	Function_202(1);
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
		SET_ACTOR_INVULNERABILITY(&Global_54076, false);
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
		Function_201(&Global_54076);
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
	Function_198(Global_42825);
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
	Function_197();
	Function_196(1178687);
	Function_194(33039);
	Function_193(0x218003f);
	Function_192(4194560);
	Function_191();
	Function_190();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_187(0, 1, 1);
	}
	else
	{
		Function_187(0, 1, 1);
	}
	Function_186();
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
	Function_182();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_182() //Position: 0x9C01 / 39937
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
		if (Function_185() > 3)
		{
			bVar0 *= 2;
		}
		Function_183(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9C58 / 40024
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_184(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_184(bool bParam0) //Position: 0x9CA8 / 40104
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_185() //Position: 0x9CD1 / 40145
{
	return Global_21369.f_248;
}

void Function_186() //Position: 0x9CDC / 40156
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

void Function_187(int iParam0, bool bParam1, int iParam2) //Position: 0x9D06 / 40198
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
			Function_188(Global_43789);
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

void Function_188(int iParam0) //Position: 0x9E12 / 40466
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_189())
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

bool Function_189() //Position: 0x9E91 / 40593
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

void Function_190() //Position: 0x9EFA / 40698
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

void Function_191() //Position: 0x9F20 / 40736
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

void Function_192(int iParam0) //Position: 0x9F46 / 40774
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_193(int iParam0) //Position: 0x9F63 / 40803
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_194(int iParam0) //Position: 0x9F76 / 40822
{
	Function_195(&Global_43580, iParam0);
	return;
}

void Function_195(var uParam0, int iParam1) //Position: 0x9F84 / 40836
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_196(bool bParam0) //Position: 0x9FA3 / 40867
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_197() //Position: 0x9FD0 / 40912
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

void Function_198(int iParam0) //Position: 0xA048 / 41032
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
		Function_199(78, 1, 1);
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
		DECOR_SET_BOOL(&Global_54076, "zMarston", true);
		DECOR_SET_BOOL(&Global_54076, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_199(bool bParam0, bool bParam1, int iParam2) //Position: 0xA17E / 41342
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_200(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_200(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_200(bool bParam0) //Position: 0xA1CC / 41420
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

void Function_201(int iParam0) //Position: 0xA2C0 / 41664
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

void Function_202(bool bParam0) //Position: 0xA343 / 41795
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
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_203() //Position: 0xA3BA / 41914
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

void Function_204() //Position: 0xA3FE / 41982
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

void Function_205() //Position: 0xA442 / 42050
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_206(int iParam0) //Position: 0xA458 / 42072
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_207())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_207() //Position: 0xA498 / 42136
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

void Function_208() //Position: 0xA4BD / 42173
{
	Global_15862 = 0.0f;
	return;
}

void Function_209() //Position: 0xA4C7 / 42183
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

int Function_210() //Position: 0xA4F2 / 42226
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_211(int iParam0) //Position: 0xA50F / 42255
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

int Function_212(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA577 / 42359
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
		if (uParam4 && IS_ACTOR_HUMAN(&Global_15402[iParam014] + 8))
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
		Function_214(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_213(&Global_15402[iParam014] + 8);
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
				DECOR_SET_BOOL(&(Global_15402[iParam014]), "KeepLastTask", true);
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

void Function_213(int iParam0) //Position: 0xA8B9 / 43193
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

void Function_214(var uParam0) //Position: 0xA8EC / 43244
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_215() //Position: 0xA903 / 43267
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	AUDIO_CLEAR_ALL_ALTERNATE_CONTEXTS();
	Function_171(4, 60, 0);
	Function_243(Global_53579);
	Function_242(1);
	Function_240();
	Function_235();
	Function_234();
	Function_233();
	Function_232();
	Function_231();
	Function_229();
	Function_228();
	if (IS_ACTOR_ALIVE(&bLocal_546))
	{
		Function_227(0);
	}
	Function_226();
	if (IS_ACTOR_ALIVE(&Global_54076))
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
		Function_224();
		Function_223();
		DISABLE_PLAYER_GRINGO_USE(0, 0);
		DECOR_REMOVE(&Global_54076, "BlockHitchHelp");
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
		REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_548);
	}
	Function_222(1);
	Function_202(1);
	if (IS_ACTOR_ALIVE(&bLocal_546))
	{
		Function_77(&Global_21369 + 72 + 32, 2);
		Function_221(&bLocal_546, 1);
		Function_217(&iLocal_4 + 1104[13]);
	}
	if (iLocal_788)
	{
		iLocal_788 = 0;
		STREAMING_EVICT_ACTOR(false, Function_216(14));
	}
	return;
}

int Function_216(bool bParam0) //Position: 0xA9DD / 43485
{
	if (bParam0 <= 0 && bParam0 > 32)
	{
		return SHIFT_LEFT(true, bParam0);
	}
	return 0;
}

void Function_217(int iParam0) //Position: 0xA9F8 / 43512
{
	if (Function_219(&iParam0))
	{
		Function_218(&bLocal_546, &iLocal_809, 2);
	}
	return;
}

void Function_218(bool bParam0, int iParam1, int iParam2) //Position: 0xAA16 / 43542
{
	if (IS_GRINGO_VALID(&iParam1))
	{
		TASK_CLEAR(&bParam0);
		TASK_PRIORITY_SET(&bParam0, true);
		TASK_USE_GRINGO(&bParam0, &iParam1, "UseCase1", 4294967295, iParam2);
	}
	else
	{
		TASK_CLEAR(&bParam0);
		TASK_PRIORITY_SET(&bParam0, true);
		TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
	}
	return;
}

bool Function_219(int iParam0) //Position: 0xAA62 / 43618
{
	if (!IS_GRINGO_VALID(&iLocal_809) || !IS_GRINGO_VALID(&iLocal_811))
	{
		GET_OBJECT_POSITION(&iParam0, &Local_770);
		Function_220(StackVal, Local_770, &iLocal_809, &iLocal_811);
		if (!IS_GRINGO_VALID(&iLocal_809))
		{
			return 0;
		}
		if (!IS_GRINGO_VALID(&iLocal_811))
		{
			return 0;
		}
	}
	return 1;
}

void Function_220(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xAAAF / 43695
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

void Function_221(bool bParam0, int iParam1) //Position: 0xABF9 / 44025
{
	DECOR_SET_OBJECT(&Global_54076, "SettingPlayerHorse", &bParam0);
	DECOR_SET_BOOL(&Global_54076, "NewPlayerHorse_Wipe", &iParam1);
	return;
}

void Function_222(bool bParam0) //Position: 0xAC40 / 44096
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

void Function_223() //Position: 0xAC64 / 44132
{
	if (_GET_AMMO_AMOUNT(&Global_54076, 8, 0) > 60.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 8, 60.0f, 0);
	}
	if (!ACTOR_HAS_WEAPON(&Global_54076, 8))
	{
		SET_WEAPONENUM_LOCKED(8, 0);
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 8, 1.0f, 0, 1);
		if (IS_GOLDEN_GUNS_ON())
		{
			SET_WEAPON_GOLD(&Global_54076, 8, 1);
		}
	}
	if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) != 5)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 5, 0);
	}
	if (GET_WEAPON_EQUIPPED(&Global_54076, 5) != 8)
	{
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 8);
	}
	return;
}

void Function_224() //Position: 0xACE6 / 44262
{
	if (GET_CURRENT_ACTOR_ENUM_VARIATION(&Global_54076) != 0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			ACTOR_DISMOUNT_NOW(&Global_54076);
		}
		SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 0);
	}
	if (!Function_111(4))
	{
		Function_225(4, 1);
	}
	if (!Function_111(3))
	{
		Function_225(3, 1);
	}
	if (Function_111(1))
	{
		Function_225(1, 0);
	}
	if (HAS_ITEM(Function_200(20), &Global_54076))
	{
		DELETE_ITEM(Function_200(20), &Global_54076, 0);
	}
	if (iLocal_788)
	{
		iLocal_788 = 0;
		STREAMING_EVICT_ACTOR(false, Function_216(14));
	}
	return;
}

void Function_225(bool bParam0, bool bParam1) //Position: 0xAD65 / 44389
{
	switch (bParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				(*&Global_21369 + 168)[0] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, true);
			}
			else
			{
				(*&Global_21369 + 168)[0] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 26, false);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 8, 200.0f);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 9, 200.0f);
				(*&Global_21369 + 168)[1] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, false);
				(*&Global_21369 + 168)[1] = 0;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, true);
				_SET_ACTOR_MAX_AMMO_AMOUNT(&Global_54076, 10, 200.0f);
				(*&Global_21369 + 168)[2] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 24, false);
				(*&Global_21369 + 168)[2] = 0;
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, false);
				(*&Global_21369 + 168)[4] = 1;
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 28, false);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 30, true);
				(*&Global_21369 + 168)[4] = 0;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				(*&Global_21369 + 168)[3] = 1;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
			}
			else
			{
				(*&Global_21369 + 168)[3] = 0;
				ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, false);
			}
			break;
	}
	return;
}

void Function_226() //Position: 0xAEEB / 44779
{
	if (IS_OBJECT_VALID(&uLocal_760))
	{
		DESTROY_OBJECT(&uLocal_760);
	}
	return;
}

void Function_227(bool bParam0) //Position: 0xAF02 / 44802
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_546)))
		{
			ADD_BLIP_FOR_ACTOR(&bLocal_546, 334, 0, 2, 0);
		}
	}
	else if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_546)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_546));
	}
	return;
}

void Function_228() //Position: 0xAF43 / 44867
{
	if (IS_BLIP_VALID(&iLocal_785))
	{
		REMOVE_BLIP(&iLocal_785);
	}
	return;
}

void Function_229() //Position: 0xAF5A / 44890
{
	if (IS_OBJECT_VALID(&iLocal_758))
	{
		Function_230(&iLocal_758);
	}
	return;
}

void Function_230(var uParam0) //Position: 0xAF71 / 44913
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (DECOR_CHECK_EXIST(&uParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&uParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&uParam0, "voldestroy"))
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
		DESTROY_OBJECT(&uParam0);
	}
	return;
}

void Function_231() //Position: 0xB007 / 45063
{
	if (IS_OBJECT_VALID(&uLocal_829))
	{
		DESTROY_OBJECT(&uLocal_829);
	}
	return;
}

void Function_232() //Position: 0xB01E / 45086
{
	if (IS_OBJECT_VALID(&uLocal_826))
	{
		DESTROY_OBJECT(&uLocal_826);
	}
	return;
}

void Function_233() //Position: 0xB035 / 45109
{
	if (IS_ACTOR_VALID(&bLocal_548))
	{
		DESTROY_ACTOR(&bLocal_548);
	}
	return;
}

void Function_234() //Position: 0xB04C / 45132
{
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1030);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1031);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1032);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1037);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1038);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1039);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1040);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1012);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1013);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1014);
	return;
}

void Function_235() //Position: 0xB0A6 / 45222
{
	Function_236();
	return;
}

void Function_236() //Position: 0xB0AF / 45231
{
	Function_237();
	return;
}

void Function_237() //Position: 0xB0B8 / 45240
{
	ABORT_SCRIPTED_CONVERSATION(0);
	Function_239();
	Function_238();
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	if (IS_OBJECT_VALID(&iLocal_526 + 24))
	{
		DESTROY_OBJECT(&iLocal_526 + 24);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	return;
}

void Function_238() //Position: 0xB0E8 / 45288
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_239() //Position: 0xB0FA / 45306
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

bool Function_240() //Position: 0xB10F / 45327
{
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "ncottage02", 1);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 1);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 0))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Cottage02 (Front) door #1!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 1);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (!IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_127(&uLocal_762, 0);
		}
		if (IS_DOOR_OPENED(&uLocal_762) || IS_DOOR_OPENING(&uLocal_762))
		{
			CLOSE_DOOR_FAST(&uLocal_762);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Front Left) door #1!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 2);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (!IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_127(&uLocal_762, 0);
		}
		if (IS_DOOR_OPENED(&uLocal_762) || IS_DOOR_OPENING(&uLocal_762))
		{
			CLOSE_DOOR_FAST(&uLocal_762);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Front Right) door #2!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 3);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (!IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_127(&uLocal_762, 0);
		}
		if (IS_DOOR_OPENED(&uLocal_762) || IS_DOOR_OPENING(&uLocal_762))
		{
			CLOSE_DOOR_FAST(&uLocal_762);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Back Left) door #3!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 4);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (!IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_127(&uLocal_762, 0);
		}
		if (IS_DOOR_OPENED(&uLocal_762) || IS_DOOR_OPENING(&uLocal_762))
		{
			CLOSE_DOOR_FAST(&uLocal_762);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable01 (Back Right) door #4!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable02", 2);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (!IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_127(&uLocal_762, 0);
		}
		if (IS_DOOR_OPENED(&uLocal_762) || IS_DOOR_OPENING(&uLocal_762))
		{
			CLOSE_DOOR_FAST(&uLocal_762);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable02 (Cooop) door #2!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable02", 4);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (!IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_127(&uLocal_762, 0);
		}
		if (IS_DOOR_OPENED(&uLocal_762) || IS_DOOR_OPENING(&uLocal_762))
		{
			CLOSE_DOOR_FAST(&uLocal_762);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable02 (Corral) door #4!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable02", 5);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (!IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_127(&uLocal_762, 0);
		}
		if (IS_DOOR_OPENED(&uLocal_762) || IS_DOOR_OPENING(&uLocal_762))
		{
			CLOSE_DOOR_FAST(&uLocal_762);
		}
	}
	else
	{
		LOG_ERROR("Failed to lock/close Stable02 (Corral) door #5!");
		return 0;
	}
	return 1;
}

int Function_241(int iParam0, char* cParam1, bool bParam3) //Position: 0xB602 / 46594
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_85(iParam0))
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

void Function_242(bool bParam0) //Position: 0xB6A7 / 46759
{
	if (bParam0)
	{
		Function_196(1048576);
	}
	else
	{
		Function_169(1048576);
	}
	return;
}

int Function_243(int iParam0) //Position: 0xB6C3 / 46787
{
	if (!Function_244(iParam0, "TRAIN_RELEASE"))
	{
		return 0;
	}
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_424 = 0;
	}
	else if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_424 = 0;
	}
	TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 1);
	return 1;
}

bool Function_244(int iParam0, int iParam1) //Position: 0xB712 / 46866
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB721 / 46881
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_246(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_246(int iParam0) //Position: 0xB74B / 46923
{
	int iVar0;
	
	switch (iParam0)
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

bool Function_247() //Position: 0xBCA0 / 48288
{
	if (IS_EXITFLAG_SET())
	{
		Function_699(iLocal_538);
		Function_695(StackVal, 4, &bLocal_599, &iLocal_538, Function_700(iLocal_538), Function_699(iLocal_538), 0);
		return 0;
	}
	Function_694(StackVal, StackVal, StackVal, StackVal, StackVal, Local_476, iLocal_538, iLocal_539, &bLocal_600, &bLocal_598, &bLocal_599);
	if (iLocal_538 == 99 && iLocal_538 == 100)
	{
		if (!IS_ACTOR_ALIVE(&Global_54076))
		{
			Function_699(iLocal_538);
			Function_695(StackVal, 1, &bLocal_599, &iLocal_538, Function_700(iLocal_538), Function_699(iLocal_538), 0);
			return 1;
		}
		if ((Global_6646 || Global_6647) || Function_692(&Global_54076, 1))
		{
			Function_699(iLocal_538);
			Function_695(StackVal, 2, &bLocal_599, &iLocal_538, Function_700(iLocal_538), Function_699(iLocal_538), 0);
			return 1;
		}
		if (Function_691(2048))
		{
			Function_699(iLocal_538);
			Function_695(StackVal, 3, &bLocal_599, &iLocal_538, Function_700(iLocal_538), Function_699(iLocal_538), 0);
			return 1;
		}
		if (Function_672(&Local_656, &uLocal_602, &uLocal_748, &iLocal_542, iLocal_601))
		{
			if (Function_665(&uLocal_748))
			{
				Function_699(iLocal_538);
				Function_695(StackVal, 5, &bLocal_599, &iLocal_538, Function_700(iLocal_538), Function_699(iLocal_538), 0);
				return 1;
			}
		}
	}
	switch (iLocal_538)
	{
		case 0x00000063:
			Function_599();
			break;
		
		case 0x00000000:
			Function_529();
			break;
		
		case 0x00000001:
			Function_479();
			break;
		
		case 0x00000002:
			Function_315();
			break;
		
		case 0x00000065:
			Function_257();
			break;
		
		case 0x00000064:
			if (Function_256(&bLocal_599))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_255(&iLocal_538, &iLocal_539, &iLocal_526))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_598)
	{
		Function_254(&bLocal_598, 8);
		Function_253(23, 15, 0, 23, 59, 59);
		Function_1();
		return 0;
	}
	if (bLocal_599 && iLocal_538 == 100)
	{
		Function_699(iLocal_538);
		Function_695(StackVal, 5, &bLocal_599, &iLocal_538, Function_700(iLocal_538), Function_699(iLocal_538), 0);
	}
	if (bLocal_600)
	{
		Function_248(&bLocal_600, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_248(var uParam0, int iParam1) //Position: 0xBE5E / 48734
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_249(&iParam1);
	uParam0 = 1;
	return;
}

void Function_249(int iParam0) //Position: 0xBE83 / 48771
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_252("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_251(2) || Function_251(8)) || Function_251(9)) || Function_251(10))
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
		Function_252("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_252("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_252("");
	}
	else if (iParam0 == 8)
	{
		Function_250();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_250();
	}
	return;
}

void Function_250() //Position: 0xBF7A / 49018
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_251(int iParam0) //Position: 0xBF86 / 49030
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

void Function_252(struct<8> Param0) //Position: 0xBFBC / 49084
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&Param0);
	PRINTNL();
	strcpy(&Global_10969, &Param0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_253(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5) //Position: 0xC02B / 49195
{
	int iVar0;
	int iVar1;
	
	if (((((bParam0 > 0 || bParam1 > 0) || &bParam2 > 0) || &iParam3 > 0) || &bParam4 > 0) || &iParam5 > 0)
	{
		return;
	}
	iVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, &bParam2);
	iVar1 = MAKE_TIME_OF_DAY(&iParam3, &bParam4, &iParam5);
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar0) || IS_LATER_THAN(GET_TIME_OF_DAY(), &iVar1))
	{
		SET_TIME_OF_DAY(&iVar0);
	}
}

void Function_254(var uParam0, int iParam1) //Position: 0xC092 / 49298
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_249(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_255(var uParam0, var uParam1, int iParam2) //Position: 0xC0B7 / 49335
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

bool Function_256(int iParam0) //Position: 0xC100 / 49408
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_257() //Position: 0xC114 / 49428
{
	switch (iLocal_539)
	{
		case 0x00000000:
			Function_311(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 536[2]))
			{
				Function_309();
				DESTROY_VOLUME(&iLocal_4 + 536[2]);
			}
			Function_307();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(35);
			Function_304();
			bLocal_541 = Global_46816[0];
			if (HUD_IS_FADED())
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_303(&Global_54076, &iLocal_4 + 1056[0], 1, 1, 1);
				Function_302(1, "LAST STAGE - STREAMING GOAL");
			}
			else
			{
				Function_302(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_301() && STREAMING_IS_WORLD_LOADED()) && (Function_300(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_299();
				STREAMING_RELEASE_MAIN_POI();
				Function_302(2, "LAST STAGE - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_294();
			Function_302(3, "LAST STAGE - CUTSCENE GOAL");
			break;
		
		case 0x00000003:
			if (Function_266())
			{
				Function_265(1.0f);
				Function_264();
				Function_302(106, "LAST STAGE - COMPLETE");
			}
			break;
		
		case 0x0000006A:
			Function_258();
			bLocal_598 = true;
			break;
	}
	return;
}

void Function_258() //Position: 0xC28A / 49802
{
	Function_263();
	Function_259();
	return;
}

void Function_259() //Position: 0xC296 / 49814
{
	Function_260();
	return;
}

void Function_260() //Position: 0xC29F / 49823
{
	Function_261();
	if (IS_OBJECT_VALID(&iLocal_4 + 1824))
	{
		DESTROY_OBJECT(&iLocal_4 + 1824);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1776))
	{
		DESTROY_OBJECT(&iLocal_4 + 1776);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1784))
	{
		DESTROY_OBJECT(&iLocal_4 + 1784);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1792))
	{
		DESTROY_OBJECT(&iLocal_4 + 1792);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1800))
	{
		DESTROY_OBJECT(&iLocal_4 + 1800);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1808))
	{
		DESTROY_OBJECT(&iLocal_4 + 1808);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1848))
	{
		DESTROY_OBJECT(&iLocal_4 + 1848);
	}
	return;
}

void Function_261() //Position: 0xC33B / 49979
{
	Function_262();
	if (IS_OBJECT_VALID(&iLocal_4 + 1840))
	{
		DESTROY_OBJECT(&iLocal_4 + 1840);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1816))
	{
		DESTROY_OBJECT(&iLocal_4 + 1816);
	}
	return;
}

void Function_262() //Position: 0xC36E / 50030
{
	if (IS_OBJECT_VALID(&iLocal_4 + 1832))
	{
		DESTROY_OBJECT(&iLocal_4 + 1832);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1856))
	{
		DESTROY_OBJECT(&iLocal_4 + 1856);
	}
	if (IS_OBJECT_VALID(&iLocal_4 + 1864))
	{
		DESTROY_OBJECT(&iLocal_4 + 1864);
	}
	return;
}

void Function_263() //Position: 0xC3B3 / 50099
{
	if (IS_ACTOR_VALID(&bLocal_548))
	{
		RELEASE_ACTOR(&bLocal_548);
	}
	return;
}

void Function_264() //Position: 0xC3CA / 50122
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	Function_240();
	return;
}

void Function_265(bool bParam0) //Position: 0xC3DE / 50142
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

bool Function_266() //Position: 0xC3FB / 50171
{
	Function_293(&iLocal_526, 1, 0);
	switch (iLocal_526)
	{
		case 0x000003E8:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH_01_END/RANCH_01_END"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				iLocal_526 = 1106;
				return 0;
			}
			Function_289(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_286(&iLocal_4, &iLocal_4 + 1056[0], &iLocal_4 + 496[2], 0, 0, 0, 0, 1);
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Function_285(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Global_99147 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH_01_END/RANCH_01_END", 0, 2, 1, 2, 2);
			}
			Function_283(&iLocal_526 + 4);
			iLocal_526 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_280(&iLocal_526 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iLocal_526 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				(&iLocal_526 + 24) = Function_276(&iLocal_4, 0, 1, 1, 0);
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					STREAMING_SET_POI_LIMIT(2);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_526 + 24, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene03 - Failed to create Ranch01_Cutscene03_cutscene (paused)");
				}
				iLocal_526 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_283(&iLocal_526 + 4);
				iLocal_1117 = 15;
				iLocal_526 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					Function_275(&iLocal_526 + 24, 0);
				}
				else
				{
					*(&iLocal_526 + 24) = Function_276(&iLocal_4, 0, 1, 0, 0);
				}
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					STREAMING_SET_POI_LIMIT(1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_526 + 24, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene03 - Failed to create Ranch01_Cutscene03_cutscene");
				}
				Function_272(1);
				Function_303(&Global_54076, &iLocal_4 + 1056[0], 0, 0, 0);
				Function_270(&bLocal_544, &iLocal_4 + 1056[2], 1, 1, 1);
				Function_303(&bLocal_546, &iLocal_4 + 1056[3], 1, 1, 1);
			}
			break;
		
		case 0x000003ED:
			if (Function_269())
			{
				iLocal_526 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				Function_272(1);
				Function_303(&Global_54076, &iLocal_4 + 1056[1], 1, 1, 1);
				Function_270(&bLocal_544, &iLocal_4 + 1056[2], 1, 1, 1);
				Function_303(&bLocal_546, &iLocal_4 + 1056[3], 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 496[2]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 496[2]);
				DESTROY_VOLUME(&iLocal_4 + 496[2]);
				Function_267(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					DESTROY_OBJECT(&iLocal_526 + 24);
				}
				iLocal_526 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Global_99147 = 0;
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_239();
				Function_238();
				iLocal_526 = 1104;
			}
			break;
		
		case 0x00000452:
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_239();
			Function_238();
			iLocal_526 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_267(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xC82F / 51247
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
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
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
	Function_268(&iParam9, &iParam10);
}

void Function_268(var uParam0, bool bParam1) //Position: 0xC8FE / 51454
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
		Function_197();
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

bool Function_269() //Position: 0xC9CD / 51661
{
	switch (iLocal_1117)
	{
		case 0x0000000F:
			if (Function_280(&iLocal_526 + 4) < 0.0f)
			{
				Function_139("Ranch01_savetutorial_01", 5,8f, 1, 0, 2, 1, 0);
				SET_ANIM_SET_FOR_ACTOR(&Global_54076, "sleep_choice", 1);
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "sleep_choice/sleep_choice");
				iLocal_1117 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_280(&iLocal_526 + 4) < 6.0f)
			{
				Function_139("Ranch01_savetutorial_02", 5,8f, 1, 0, 2, 1, 0);
				iLocal_1117 = 35;
			}
			break;
		
		case 0x00000023:
			if (Function_280(&iLocal_526 + 4) < 12.0f)
			{
				Function_139("Ranch01_savetutorial_03", 5,8f, 1, 0, 2, 1, 0);
				iLocal_1117 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_280(&iLocal_526 + 4) < 18.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_270(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCAFE / 51966
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
				Function_271(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
			}
			else
			{
				LOG_ERROR("TELEPORT_ACTOR_TO_OBJECT - The object is NOT a point object!!!");
			}
		}
		else
		{
			LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The object is NOT valid!!!");
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_TO_OBJECT - The actor is NOT valid!!!");
	}
}

void Function_271(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xCC1E / 52254
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

void Function_272(bool bParam0) //Position: 0xCCED / 52461
{
	if (IS_ACTOR_ALIVE(&bLocal_548))
	{
		if (&bParam0)
		{
			if (GET_MOUNT(&bLocal_544) != &bLocal_548)
			{
				SET_ACTORS_HORSE(&bLocal_544, &bLocal_548);
				ACTOR_MOUNT_ACTOR(&bLocal_544, &bLocal_548);
			}
		}
		else if (GET_MOUNT(&bLocal_544) != &bLocal_548)
		{
			MEMORY_PREFER_RIDING(&bLocal_544, true);
			SET_ACTORS_HORSE(&bLocal_544, &bLocal_548);
			Function_273(&bLocal_544, &bLocal_548, 1);
		}
	}
	return;
}

void Function_273(bool bParam0, int iParam1, bool bParam2) //Position: 0xCD57 / 52567
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			MEMORY_IDENTIFY(&bParam0, &iParam1);
			Function_274(&iParam1);
			uVar0 = Function_274(&iParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&bParam0, &iParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&bParam0, &iParam1, &uVar0);
			}
		}
		else
		{
			LOG_ERROR("\Trying to add ESP_KNOWLEDGE(!) of an INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
		}
	}
	else
	{
		LOG_ERROR("Trying to add ESP_KNOWLEDGE(!) to INVALID actor. Ignoring GIVE_ESP_KNOWLEDGE_OF_ACTOR()!");
	}
	return;
}

struct<8> Function_274(int iParam0) //Position: 0xCE68 / 52840
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

void Function_275(var uParam0, bool bParam1) //Position: 0xCED4 / 52948
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_276(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xCEEA / 52970
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, "Ranch01_Cutscene03", 2, 1);
	}
	Function_277(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_277(int iParam0) //Position: 0xCF76 / 53110
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_279(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_278(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 12.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 1000.0f, 1);
	return;
}

void Function_278(int iParam0) //Position: 0xCFC2 / 53186
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-840,13f, 93,01598f, 2366,781f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,08559f, -2,695235f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_279(int iParam0) //Position: 0xD02F / 53295
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 42,97919f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,3f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-841,3113f, 95,01786f, 2371,023f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,470152f, -1,627761f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

float Function_280(vector3 vParam0) //Position: 0xD09C / 53404
{
	if (Function_282(&vParam0))
	{
		if (Function_281(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_281(int iParam0) //Position: 0xD169 / 53609
{
	return Function_14(iParam0, 2);
}

bool Function_282(int iParam0) //Position: 0xD177 / 53623
{
	return Function_14(iParam0, 1);
}

void Function_283(int iParam0) //Position: 0xD185 / 53637
{
	Function_284(&iParam0, 0.0f);
	return;
}

void Function_284(vector3 vParam0) //Position: 0xD192 / 53650
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_285(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xD1B7 / 53687
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

void Function_286(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xD1E1 / 53729
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&uParam1, &Var0);
	Function_287(StackVal, &iParam0, Var0, &bParam2, &bParam3, &iParam4, &iParam5, &iParam6, &bParam7, 1);
}

void Function_287(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, bool bParam9) //Position: 0xD20F / 53775
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &uParam5;
	Var2.f_4 = &uParam6;
	Var2.f_8 = &uParam7;
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&uParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &uParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_288(&uVar1, &uParam0);
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

void Function_288(var uParam0, float fParam1) //Position: 0xD4AF / 54447
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

void Function_289(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xD531 / 54577
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
				TASK_OVERRIDE_SET_POSTURE(&uVar1, false);
			}
			SET_ACTOR_HEALTH(&uVar1, GET_ACTOR_MAX_HEALTH(&uVar1));
			SET_ACTOR_INVULNERABILITY(&uVar1, true);
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
				Function_292(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_292(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_291()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_291()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
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
	if (Function_290(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_290(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_290(int iParam0) //Position: 0xD7E3 / 55267
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_291() //Position: 0xD7FF / 55295
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

struct<8> Function_292(int iParam0) //Position: 0xD88D / 55437
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_293(int iParam0, bool bParam1, int iParam2) //Position: 0xD89F / 55455
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
			Function_285(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_89(20, 1, 0, 0);
		iParam0 = 1105;
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
				if (((((((iParam0 == 1000 && iParam0 == 1001) && iParam0 == 1002) && iParam0 == 1003) && iParam0 == 1103) && iParam0 == 1104) && iParam0 == 1105) && iParam0 == 1106)
				{
					HUD_CLEAR_BIG_TEXT();
					HUD_CLEAR_SMALL_TEXT();
					if (&bParam1)
					{
						CANCEL_TIME_WARP(1);
						if (!IS_STRING_VALID(&iParam2))
						{
							Function_285(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
					iParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_294() //Position: 0xDA17 / 55831
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	Function_298(0, 0);
	MEMORY_PREFER_RIDING(&bLocal_544, false);
	Function_297();
	Function_296();
	Function_295();
	return;
}

void Function_295() //Position: 0xDA3D / 55869
{
	TASK_CLEAR(&bLocal_548);
	TASK_PRIORITY_SET(&bLocal_548, true);
	TASK_STAND_STILL(&bLocal_548, -1.0f, 0, 0);
	return;
}

void Function_296() //Position: 0xDA5C / 55900
{
	TASK_CLEAR(&bLocal_546);
	TASK_PRIORITY_SET(&bLocal_546, true);
	TASK_STAND_STILL(&bLocal_546, -1.0f, 0, 0);
	return;
}

void Function_297() //Position: 0xDA7B / 55931
{
	TASK_CLEAR(&bLocal_544);
	TASK_PRIORITY_SET(&bLocal_544, true);
	TASK_STAND_STILL(&bLocal_544, -1.0f, 0, 0);
	return;
}

void Function_298(bool bParam0, int iParam1) //Position: 0xDA9A / 55962
{
	if (bParam0)
	{
		if (!Function_168(GET_WEAPON_IN_HAND(&bLocal_544)))
		{
			ACTOR_DRAW_ANY_WEAPON(&bLocal_544, &iParam1);
			MEMORY_ALLOW_SHOOTING(&bLocal_544, true);
			MEMORY_ALLOW_THROWING_EXPLOSIVES(&bLocal_544, 0);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_544, 0);
		}
	}
	else if (Function_168(GET_WEAPON_IN_HAND(&bLocal_544)))
	{
		ACTOR_HOLSTER_WEAPON(&bLocal_544, &iParam1);
		MEMORY_ALLOW_SHOOTING(&bLocal_544, false);
		MEMORY_ALLOW_THROWING_EXPLOSIVES(&bLocal_544, 0);
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_544, 1);
	}
	return;
}

void Function_299() //Position: 0xDB09 / 56073
{
	return;
}

bool Function_300(bool bParam0) //Position: 0xDB0F / 56079
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

bool Function_301() //Position: 0xDB2B / 56107
{
	return 1;
}

void Function_302(int iParam0, int iParam1) //Position: 0xDB32 / 56114
{
	Function_283(&iLocal_550);
	iLocal_539 = iParam0;
	return;
}

void Function_303(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xDB43 / 56131
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			if (GET_OBJECT_TYPE(&iParam1) == 8)
			{
				GET_OBJECT_POSITION(&iParam1, &Var0);
				GET_OBJECT_ORIENTATION(&iParam1, &Var2);
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

void Function_304() //Position: 0xDC53 / 56403
{
	Function_169(12);
	Function_305(265);
	return;
}

void Function_305(int iParam0) //Position: 0xDC64 / 56420
{
	Function_306(&Global_43580, iParam0);
	return;
}

void Function_306(var uParam0, var uParam1) //Position: 0xDC72 / 56434
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_307() //Position: 0xDC9A / 56474
{
	Function_308(&bLocal_544);
	Function_308(&bLocal_546);
	Function_308(&bLocal_548);
	return;
}

void Function_308(bool bParam0) //Position: 0xDCB5 / 56501
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_ALIVE(&bParam0))
		{
			SET_ACTOR_HEALTH(&bParam0, GET_ACTOR_MAX_HEALTH(&bParam0));
		}
	}
	return;
}

void Function_309() //Position: 0xDCD9 / 56537
{
	Function_310();
	return;
}

void Function_310() //Position: 0xDCE2 / 56546
{
	Function_177(&iLocal_4 + 104);
	return;
}

void Function_311(bool bParam0) //Position: 0xDCEF / 56559
{
	Function_312(0, 0x40400000);
	Function_204();
	Function_203();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_312(float fParam0, float fParam1) //Position: 0xDD25 / 56613
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
	Function_314();
	Function_313();
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

void Function_313() //Position: 0xDE36 / 56886
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_314() //Position: 0xDE6A / 56938
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

void Function_315() //Position: 0xDF70 / 57200
{
	if (iLocal_539 < 5 && iLocal_539 > 105)
	{
		Function_478(32);
		if (IS_VOLUME_VALID(&iLocal_4 + 536[2]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 536[2]))
			{
				Function_309();
				iLocal_792 = 0;
				DESTROY_VOLUME(&iLocal_4 + 536[2]);
			}
		}
		else if (!iLocal_792)
		{
			if (Function_301())
			{
				Function_299();
				iLocal_792 = 1;
			}
		}
		else
		{
			Function_472();
		}
		Function_471(1);
		if (!Function_427())
		{
			Function_302(106, "STAGE 03 - COMPLETE");
		}
	}
	switch (iLocal_539)
	{
		case 0x00000000:
			Function_311(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 536[1]))
			{
				Function_425();
				DESTROY_VOLUME(&iLocal_4 + 536[1]);
			}
			Function_424();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(35);
			Function_304();
			bLocal_541 = Global_46816[0];
			if (iLocal_590[1] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_285(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_303(&Global_54076, &iLocal_4 + 1008[0], 1, 1, 1);
				Function_303(&bLocal_544, &iLocal_4 + 1008[1], 1, 1, 1);
				Function_303(&bLocal_546, &iLocal_4 + 1008[2], 1, 1, 1);
				Function_303(&bLocal_548, &iLocal_4 + 1008[3], 1, 1, 1);
				Function_423();
				Function_272(1);
				Function_302(1, "STAGE 03 - STREAMING GOAL");
			}
			else
			{
				Function_302(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_415() && STREAMING_IS_WORLD_LOADED()) && (Function_300(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_414();
				Function_302(2, "STAGE 03 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_412(iLocal_538);
			Function_403(StackVal, Function_412(iLocal_538), iLocal_538, Global_46736[2], Function_411(iLocal_538), 2);
			iLocal_540 = Function_402();
			Function_265(1.0f);
			Function_385();
			Function_384(1);
			Function_302(6, "STAGE 03 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_239();
				Function_383();
				Function_382();
				Function_204();
				Function_302(7, "STAGE 03 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj03_1", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_378(1);
				Function_302(12, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000C:
			Function_370(&iLocal_796, &iLocal_797, 1);
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(13, "STAGE 03 - OBJ_01-LOOP_FAIL_01");
			}
			else if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(14, "STAGE 03 - OBJ_01-LOOP_FAIL_02");
			}
			break;
		
		case 0x0000000D:
			if (!Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_361(2);
				if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(14, "STAGE 03 - OBJ_01-LOOP_FAIL_02");
				}
				else
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(12, "STAGE 03 - OBJ_01-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x0000000E:
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(13, "STAGE 03 - OBJ_01-LOOP_FAIL_01");
			}
			else if (!Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(12, "STAGE 03 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_239();
			Function_360();
			Function_226();
			iLocal_794 = 0;
			iLocal_795 = 0;
			Function_204();
			Function_302(16, "STAGE 03 - OBJ_02A-OBJ_01");
			break;
		
		case 0x00000010:
			if (iLocal_794 <= 1)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_381("Ranch01_obj03_2", 7,5f, 1, 2, 0, 0, 0, 0);
					Function_378(0);
					Function_359(1);
					iLocal_794++;
					Function_302(17, "STAGE 03 - OBJ_02A-HELP_01");
				}
			}
			else
			{
				Function_302(17, "STAGE 03 - OBJ_02A-HELP_01");
			}
			break;
		
		case 0x00000011:
			if (iLocal_795 <= 1)
			{
				if (Function_280(&iLocal_550) <= 2.0f)
				{
					Function_139("Ranch01_obj03_help_1", 10.0f, 1, 0, 2, 1, 0);
					Function_358(1);
					iLocal_795++;
					Function_302(18, "STAGE 03 - OBJ_02A-HELP_02");
				}
			}
			else
			{
				Function_302(18, "STAGE 03 - OBJ_02A-HELP_02");
			}
			break;
		
		case 0x00000012:
			if (iLocal_795 <= 2)
			{
				if (Function_280(&iLocal_550) <= 10,5f)
				{
					if (IS_HARDCORE_ACTIVE())
					{
						Function_139("Ranch01_obj03_help_2hc", 10.0f, 1, 0, 2, 1, 0);
					}
					else
					{
						Function_139("Ranch01_obj03_help_2", 10.0f, 1, 0, 2, 1, 0);
					}
					SET_DEADEYE_BLINK(10.0f);
					iLocal_795++;
					Function_302(23, "STAGE 03 - OBJ_02A-LOOP_PASS_01");
				}
			}
			else
			{
				Function_302(23, "STAGE 03 - OBJ_02A-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_359(0);
				Function_351(14);
				Function_350(14);
				Function_302(24, "STAGE 03 - OBJ_02A-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_359(1);
				Function_226();
				Function_302(23, "STAGE 03 - OBJ_02A-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			Function_347();
			Function_378(0);
			Function_343(1);
			Function_350(8);
			Function_204();
			Function_302(26, "STAGE 03 - OBJ_02B-OBJ_01");
			break;
		
		case 0x0000001A:
			if (iLocal_794 <= 1)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_381("Ranch01_obj03_2", 7,5f, 1, 2, 0, 0, 0, 0);
					iLocal_794++;
					Function_302(27, "STAGE 03 - OBJ_02B-HELP_01");
				}
			}
			else
			{
				Function_302(27, "STAGE 03 - OBJ_02B-HELP_01");
			}
			break;
		
		case 0x0000001B:
			if (iLocal_795 <= 1)
			{
				if (Function_280(&iLocal_550) <= 2.0f)
				{
					Function_139("Ranch01_obj03_help_1", 10.0f, 1, 0, 2, 1, 0);
					Function_358(1);
					iLocal_795++;
					Function_302(28, "STAGE 03 - OBJ_02B-HELP_02");
				}
			}
			else
			{
				Function_302(28, "STAGE 03 - OBJ_02B-HELP_02");
			}
			break;
		
		case 0x0000001C:
			if (iLocal_795 <= 2)
			{
				if (Function_280(&iLocal_550) <= 10,5f)
				{
					if (IS_HARDCORE_ACTIVE())
					{
						Function_139("Ranch01_obj03_help_2hc", 10.0f, 1, 0, 2, 1, 0);
					}
					else
					{
						Function_139("Ranch01_obj03_help_2", 10.0f, 1, 0, 2, 1, 0);
					}
					SET_DEADEYE_BLINK(10.0f);
					iLocal_795++;
					Function_302(33, "STAGE 03 - OBJ_02B-LOOP_PASS_01");
				}
			}
			else
			{
				Function_302(33, "STAGE 03 - OBJ_02B-LOOP_PASS_01");
			}
			break;
		
		case 0x00000021:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_343(0);
				Function_351(14);
				Function_350(14);
				Function_302(34, "STAGE 03 - OBJ_02B-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000022:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_343(1);
				Function_350(8);
				Function_302(33, "STAGE 03 - OBJ_02B-LOOP_PASS_01");
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_338();
				Function_382();
				Function_204();
				Function_302(36, "STAGE 03 - OBJ_03-DLG_02");
			}
			break;
		
		case 0x00000024:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!bLocal_815)
				{
					Function_337();
					Function_365();
					Function_302(37, "STAGE 03 - OBJ_03-OBJ_01");
				}
				else if (bLocal_816)
				{
					Function_336();
					Function_382();
					Function_302(43, "STAGE 03 - OBJ_03-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000025:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj03_3", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(1);
				Function_302(43, "STAGE 03 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002B:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_227(0);
				Function_351(14);
				Function_350(14);
				Function_302(44, "STAGE 03 - OBJ_03-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000002C:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_302(43, "STAGE 03 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_335();
				Function_382();
				Function_204();
				Function_302(46, "STAGE 03 - OBJ_04-OBJ_01");
			}
			break;
		
		case 0x0000002E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj03_4", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(0);
				Function_378(1);
				Function_302(52, "STAGE 03 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x00000034:
			Function_370(&iLocal_796, &iLocal_797, 1);
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(53, "STAGE 03 - OBJ_04-LOOP_FAIL_01");
			}
			else if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(54, "STAGE 03 - OBJ_04-LOOP_FAIL_02");
			}
			break;
		
		case 0x00000035:
			if (!Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_361(2);
				if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(54, "STAGE 03 - OBJ_04-LOOP_FAIL_02");
				}
				else
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(52, "STAGE 03 - OBJ_04-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000036:
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(53, "STAGE 03 - OBJ_04-LOOP_FAIL_01");
			}
			else if (!Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(52, "STAGE 03 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x00000037:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_332();
				Function_382();
				iLocal_795 = 0;
				Function_204();
				Function_302(56, "STAGE 03 - OBJ_05-OBJ_01");
			}
			break;
		
		case 0x00000038:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381("Ranch01_obj03_5", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_378(0);
				Function_330(11, &bLocal_546, 2.0f, 4294967295);
				Function_328();
				Function_204();
				Function_302(57, "STAGE 03 - OBJ_05-HELP_01");
			}
			break;
		
		case 0x00000039:
			if (iLocal_795 <= 1)
			{
				if (Function_280(&iLocal_550) <= 2.0f)
				{
					Function_139("Ranch01_obj03_help_3", 10.0f, 1, 0, 2, 1, 0);
					iLocal_795++;
					Function_302(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
				}
			}
			else
			{
				Function_302(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x0000003E:
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_229();
				Function_227(1);
				Function_365();
				Function_302(63, "STAGE 03 - OBJ_05-LOOP_FAIL_01");
			}
			else if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_229();
				Function_351(14);
				Function_350(14);
				Function_302(64, "STAGE 03 - OBJ_05-LOOP_FAIL_02");
			}
			break;
		
		case 0x0000003F:
			if (!Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_361(384);
				if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
				{
					Function_227(0);
					Function_351(14);
					Function_350(14);
					Function_302(64, "STAGE 03 - OBJ_05-LOOP_FAIL_02");
				}
				else
				{
					Function_227(0);
					Function_330(11, &bLocal_546, 2.0f, 4294967295);
					Function_328();
					Function_302(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000040:
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_302(63, "STAGE 03 - OBJ_05-LOOP_FAIL_01");
			}
			else if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_330(11, &bLocal_546, 2.0f, 4294967295);
				Function_328();
				Function_302(62, "STAGE 03 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000041:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_229();
				Function_226();
				Function_222(1);
				Function_204();
				Function_302(67, "STAGE 03 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000042:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381("Ranch01_obj03_6", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229();
				Function_226();
				Function_227(1);
				Function_365();
				Function_222(1);
				Function_204();
				Function_302(67, "STAGE 03 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000043:
			if (iLocal_795 <= 1)
			{
				if (Function_280(&iLocal_550) <= 2.0f)
				{
					Function_139("Ranch01_obj03_help_3", 10.0f, 1, 0, 2, 1, 0);
					iLocal_795++;
					Function_302(73, "STAGE 03 - OBJ_06-LOOP_PASS_01");
				}
			}
			else
			{
				Function_302(73, "STAGE 03 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x00000049:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_227(0);
				Function_351(14);
				Function_350(14);
				Function_222(0);
				Function_302(74, "STAGE 03 - OBJ_06-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000004A:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_222(1);
				Function_302(73, "STAGE 03 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_316();
				Function_384(0);
				iLocal_538 = 101;
				iLocal_590[2] = 1;
				Function_302(0, "LAST STAGE - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_316() //Position: 0xF8A3 / 63651
{
	Function_327();
	Function_326();
	Function_325();
	Function_324();
	Function_321();
	Function_260();
	Function_232();
	Function_231();
	Function_227(0);
	Function_226();
	Function_320();
	Function_318();
	Function_222(1);
	Function_317();
	return;
}

void Function_317() //Position: 0xF8D5 / 63701
{
	AI_GOAL_LOOK_CLEAR(&bLocal_544);
	return;
}

void Function_318() //Position: 0xF8E2 / 63714
{
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	Function_319(&iLocal_566);
	return;
}

void Function_319(vector3 vParam0) //Position: 0xF8F6 / 63734
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_320() //Position: 0xF90D / 63757
{
	iLocal_809 = "";
	iLocal_811 = "";
	return;
}

void Function_321() //Position: 0xF91F / 63775
{
	if (SQUAD_IS_VALID(&iLocal_4 + 480))
	{
		Function_322(&iLocal_4 + 480, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 480);
	}
	return;
}

void Function_322(var uParam0, bool bParam1, bool bParam2) //Position: 0xF944 / 63812
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
				if (!Function_323(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_323(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xF9CD / 63949
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_324() //Position: 0xF9ED / 63981
{
	iLocal_783 = 0;
	while (iLocal_783 <= 10)
	{
		if (IS_ACTOR_VALID(&(Local_1034[iLocal_7834])))
		{
			RELEASE_ACTOR(&(Local_1034[iLocal_7834]));
		}
		iLocal_783++;
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 360))
	{
		Function_322(&iLocal_4 + 360, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 360);
	}
	return;
}

void Function_325() //Position: 0xFA44 / 64068
{
	iLocal_783 = 0;
	while (iLocal_783 <= 6)
	{
		if (IS_ACTOR_VALID(&(Local_972[iLocal_7835])))
		{
			RELEASE_ACTOR(&(Local_972[iLocal_7835]));
		}
		iLocal_783++;
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 472))
	{
		Function_322(&iLocal_4 + 472, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 472);
	}
	return;
}

void Function_326() //Position: 0xFA9A / 64154
{
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[2]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[2]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[3]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[3]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[15]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[15]);
	return;
}

void Function_327() //Position: 0xFAEA / 64234
{
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[0]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[0]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[9]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[9]);
	return;
}

void Function_328() //Position: 0xFB3C / 64316
{
	iLocal_823 = 0;
	Function_329(StackVal, &iLocal_758, Vector(0.0f, 2.0f, 0.0f), 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_760, 0);
	return;
}

void Function_329(float fParam0, struct<2> Param1, float fParam3, bool bParam4) //Position: 0xFB63 / 64355
{
	if (IS_OBJECT_VALID(&uLocal_760))
	{
		SET_CAMERA_FOCUS_OBJECT(&uLocal_760, &fParam0, Param1, 1.0f);
	}
	else
	{
		uLocal_760 = CREATE_CAMERA_FOCUS_POINT_OBJECT(&iLocal_474, "GenFocus", &fParam0, Param1, fParam3, bParam4);
		if (!IS_OBJECT_VALID(&uLocal_760))
		{
			LOG_ERROR("Failed to create Focus Object!");
		}
	}
}

void Function_330(int iParam0, bool bParam1, float fParam2, int iParam3) //Position: 0xFBD7 / 64471
{
	Function_229();
	GET_OBJECT_POSITION(&iLocal_4 + 1272[iParam0], &Local_770);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 1272[iParam0], &Local_776);
	iLocal_758 = Function_331(StackVal, StackVal, &iLocal_474, "GatewayDest", Local_770, Local_776, &bParam1, &fParam2, 1, 3, 330, &iParam3, 1, 3212836864, 3212836864, 1);
	if (!IS_OBJECT_VALID(&iLocal_758))
	{
		LOG_ERROR("Failed to create destination gateway!");
	}
}

var Function_331(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0xFC77 / 64631
{
	struct<2> Var0;
	char* cVar2[32];
	float fVar11;
	var uVar12;
	
	Var0 = Vector(&iParam7, 2.0f, &iParam7);
	Param2.f_4 = (StackVal + 0,75f);
	cVar2 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(&uParam0, &cParam1, Param2, Param4, Var0, &fParam9, &uParam6, &uParam8, &bParam11, 0, &uParam12, &bParam15);
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

void Function_332() //Position: 0xFD62 / 64866
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_arriveHome", "Ranch01_arriveHome", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_333(int iParam0) //Position: 0xFDAF / 64943
{
	Function_334(0, &Global_54076, iParam0, 0);
	Function_334(1, &bLocal_544, iParam0, 0);
	return;
}

void Function_334(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xFDCB / 64971
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_335() //Position: 0xFDF3 / 65011
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_bonnieEscort", "Ranch01_bonnieEscort", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_336() //Position: 0xFE44 / 65092
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_pullBonnieOff", "Ranch01_pullBonnieOff", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_337() //Position: 0xFE97 / 65175
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backonHorse_v2", "Ranch01_backonHorse_v2", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_338() //Position: 0xFEEC / 65260
{
	if ((iLocal_833 + iLocal_834) < 0 || Function_342(&iLocal_4 + 472) > 6)
	{
		if ((iLocal_837 || (iLocal_835 + iLocal_836) < 0) || SQUAD_GET_SIZE(&iLocal_4 + 360) > 10)
		{
			Function_341();
		}
		else
		{
			Function_340();
		}
	}
	else
	{
		Function_339();
	}
	return;
}

void Function_339() //Position: 0xFF36 / 65334
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_coyotesAway", "Ranch01_coyotesAway", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_340() //Position: 0xFF85 / 65413
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_noChickensdied", "Ranch01_noChickensdied", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_341() //Position: 0xFFDA / 65498
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_someChickensdied", "Ranch01_someChickensdied", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_342(int iParam0) //Position: 0x10048 / 65608
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

void Function_343(bool bParam0) //Position: 0x1009B / 65691
{
	if (SQUAD_IS_VALID(&iLocal_4 + 472))
	{
		if (bParam0)
		{
			Function_346(&iLocal_4 + 472, 322, 4294967295, 0.0f, 2.0f, 0x3f800000, 2048, 0);
			Function_345(&iLocal_4 + 472, "Ranch01_coyote_blip");
		}
		else
		{
			Function_344(&iLocal_4 + 472);
		}
	}
	return;
}

void Function_344(int iParam0) //Position: 0x100F5 / 65781
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

void Function_345(bool bParam0, bool bParam1) //Position: 0x10149 / 65865
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&iVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				SET_BLIP_NAME(&uVar1, &bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_346(var uParam0, bool bParam1, int iParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x101A0 / 65952
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
				SET_BLIP_MAX_DISTANCE(&uVar1, &fParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &fParam4);
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

void Function_347() //Position: 0x102B0 / 66224
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_349();
	}
	else
	{
		Function_348();
	}
	return;
}

void Function_348() //Position: 0x102C8 / 66248
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_chickenCoop_v2", "Ranch01_chickenCoop_v2", false, 2, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_349() //Position: 0x1031D / 66333
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_chickenCoop_v1", "Ranch01_chickenCoop_v1", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_350(int iParam0) //Position: 0x10372 / 66418
{
	iLocal_823 = 0;
	Function_76();
	Function_329(StackVal, &iLocal_4 + 1104[iParam0], Function_76(), 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_760, 0);
	return;
}

void Function_351(bool bParam0) //Position: 0x1039E / 66462
{
	Function_228();
	iLocal_785 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1104[bParam0], 330, 0f, 2, 0);
	return;
}

bool Function_352(int iParam0, bool bParam1, int iParam2, var uParam3, bool bParam4, var uParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10) //Position: 0x103BE / 66494
{
	if (!Function_85(bParam1))
	{
		return 0;
	}
	if (StackVal == 1)
	{
		return 0;
	}
	if (StackVal && (StackVal || (StackVal || (iParam2 && Function_300(bParam1)) != 3 != 4) != 5))
	{
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[bParam19] + 8))
		{
			Function_252(&bParam4);
			uParam5 = 1;
			return 1;
		}
		if (!Global_6629)
		{
			if (!Function_357(128))
			{
				if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_381(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
					Function_356(128);
				}
				if (IS_LAYOUTREF_VALID(&iParam7))
				{
					Function_355(&iParam7, 0, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(&iParam8))
				{
					Function_355(&iParam8, 0, 4294967295, 0, 0);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
				{
					ADD_BLIP_FOR_OBJECT(&Global_44085[bParam19] + 8, &iParam9, 0f, 2, 0);
				}
			}
			return 1;
		}
		if (Function_357(128))
		{
			Function_361(128);
			Function_361(256);
			if (!Function_354())
			{
				if (&bParam10)
				{
					HUD_CLEAR_OBJECTIVE();
					Function_353();
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8));
				}
				if (IS_LAYOUTREF_VALID(&iParam7))
				{
					Function_355(&iParam7, 1, 4294967295, 0, 0);
				}
				if (IS_LAYOUTREF_VALID(&iParam8))
				{
					Function_355(&iParam8, 1, 4294967295, 0, 0);
				}
			}
		}
	}
	else if (!IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[bParam19] + 8))
	{
		if (Function_357(256))
		{
			if (Function_280(&iParam0) <= 8.0f)
			{
				Function_252(&bParam4);
				uParam5 = 1;
			}
		}
		else if (!Function_357(256))
		{
			if (&bParam6)
			{
				Function_239();
			}
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381(&uParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_356(256);
				Function_283(&iParam0);
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_355(&iParam7, 0, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 0, 4294967295, 0, 0);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&Global_44085[bParam19] + 8, &iParam9, 0f, 2, 0);
			}
		}
		return 1;
	}
	if (Function_357(256))
	{
		Function_361(128);
		Function_361(256);
		if (!Function_354())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_353();
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&Global_44085[bParam19] + 8));
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_355(&iParam7, 1, 4294967295, 0, 0);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 1, 4294967295, 0, 0);
			}
		}
	}
	return 0;
}

void Function_353() //Position: 0x106B6 / 67254
{
	var uVar0;
	bool bVar1;
	
	uVar0 = GET_LAST_NOTE_OBJECTIVE();
	bVar1 = UI_GET_STRING_BY_HASH(uVar0);
	if (STRING_LENGTH(&bVar1) >= 0)
	{
		PRINT_OBJECTIVE_B(&bVar1, 7,5f, 1, 2, 0, 0, 0, 0);
	}
	return;
}

bool Function_354() //Position: 0x106E4 / 67300
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

void Function_355(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1072B / 67371
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
		if (((GET_OBJECT_TYPE(&iVar1) != &iParam2 || &iParam2 != 4294967295) || ((&iParam2 != 15 && GET_OBJECT_TYPE(&iVar1) != 24) && bParam3)) && &iVar1 == &iParam4)
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

void Function_356(bool bParam0) //Position: 0x107E6 / 67558
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

bool Function_357(bool bParam0) //Position: 0x1084D / 67661
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

void Function_358(bool bParam0) //Position: 0x10897 / 67735
{
	if (bParam0)
	{
		SET_DISABLE_DEADEYE(0, 0);
		SET_DEADEYE_MULTILOCK_ENABLE(0, false);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 1);
	}
	else
	{
		SET_DISABLE_DEADEYE(0, 0);
		SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 1);
		SET_DISABLE_DEADEYE(0, 1);
		SET_DEADEYE_MULTILOCK_ENABLE(0, false);
		SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	}
	return;
}

void Function_359(bool bParam0) //Position: 0x108D8 / 67800
{
	if (bParam0)
	{
		if (IS_ACTOR_ALIVE(&iLocal_4 + 368[02]))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[02])))
			{
				ADD_BLIP_FOR_ACTOR(&iLocal_4 + 368[02], 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[02]), "Ranch01_coyote_blip");
			}
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 368[12]))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[12])))
			{
				ADD_BLIP_FOR_ACTOR(&iLocal_4 + 368[12], 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[12]), "Ranch01_coyote_blip");
			}
		}
	}
	else
	{
		if (IS_ACTOR_ALIVE(&iLocal_4 + 368[02]))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[02])))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[02]));
			}
		}
		if (IS_ACTOR_ALIVE(&iLocal_4 + 368[12]))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[12])))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_4 + 368[12]));
			}
		}
	}
	return;
}

void Function_360() //Position: 0x109FA / 68090
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_spotCoyotes", "Ranch01_spotCoyotes", false, 2, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_361(bool bParam0) //Position: 0x10A49 / 68169
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

bool Function_362(struct<2> Param0, int iParam2, int iParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x10AB0 / 68272
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_364(&Global_54076, &iParam3, iParam2))
	{
		Function_252(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_364(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_357(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_381(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_356(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_355(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_357(2))
	{
		Function_361(2);
		if (!Function_354())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_353();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_213(&iParam3);
				Function_363(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_355(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_363(bool bParam0) //Position: 0x10C6E / 68718
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

bool Function_364(var uParam0, var uParam1, bool bParam2) //Position: 0x10CA1 / 68769
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

void Function_365() //Position: 0x10DB6 / 69046
{
	iLocal_823 = 0;
	Function_366(&bLocal_546, 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_760, 0);
	return;
}

void Function_366(int iParam0, float fParam1, int iParam2) //Position: 0x10DD9 / 69081
{
	if (IS_OBJECT_VALID(&uLocal_760))
	{
		Function_368(&uLocal_760, &iParam0, 1.0f);
	}
	else
	{
		uLocal_760 = Function_367(&iLocal_474, "GenFocus", &iParam0, fParam1, iParam2);
		if (!IS_OBJECT_VALID(&uLocal_760))
		{
			LOG_ERROR("Failed to create Focus Object!");
		}
	}
	return;
}

int Function_367(float fParam0, var uParam1, var uParam2, float fParam3, bool bParam4) //Position: 0x10E43 / 69187
{
	if (IS_ACTOR_RIDING(&uParam2) || IS_ACTOR_RIDING_VEHICLE(&uParam2))
	{
		return CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &fParam0, &uParam1, &uParam2, Vector(0.0f, 0,6f, 0.0f), fParam3, fParam4);
	}
	return CREATE_CAMERA_FOCUS_POINT_OBJECT(StackVal, &fParam0, &uParam1, &uParam2, Vector(0.0f, 1,6f, 0.0f), fParam3, bParam4);
}

void Function_368(int iParam0, var uParam1, bool bParam2) //Position: 0x10E91 / 69265
{
	if (IS_ACTOR_RIDING(&uParam1) || IS_ACTOR_RIDING_VEHICLE(&uParam1))
	{
		SET_CAMERA_FOCUS_OBJECT(StackVal, &iParam0, &uParam1, Vector(0.0f, 0,6f, 0.0f), bParam2);
	}
	else
	{
		SET_CAMERA_FOCUS_OBJECT(StackVal, &iParam0, &uParam1, Vector(0.0f, 1,6f, 0.0f), bParam2);
	}
	return;
}

bool Function_369(struct<2> Param0, int iParam2, float fParam3, bool bParam4, var uParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10) //Position: 0x10ED0 / 69328
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam2))
	{
		return 0;
	}
	if (!ACTORS_IN_RANGE(&Global_54076, &iParam2, bParam1))
	{
		Function_252(&bParam4);
		uParam5 = 1;
		return 1;
	}
	if (GET_MOUNT(&Global_54076) != &iParam2)
	{
		if (!Function_357(8))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381(&fParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_356(8);
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_355(&iParam7, 0, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 0, 4294967295, 0, &iParam2);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam2, &iParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam2, "MHDR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_357(8))
	{
		Function_361(8);
		if (!Function_354())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_353();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam2)) && (IS_LAYOUTREF_VALID(&iParam7) || IS_LAYOUTREF_VALID(&iParam8))) && DECOR_CHECK_EXIST(&iParam2, "MHDR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam2));
				DECOR_REMOVE(&iParam2, "MHDR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam7))
			{
				Function_355(&iParam7, 1, 4294967295, 0, &iParam2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_355(&iParam8, 1, 4294967295, 0, &iParam2);
			}
		}
	}
	return 0;
}

int Function_370(int iParam0, int iParam1, bool bParam2) //Position: 0x11061 / 69729
{
	if (iParam0)
	{
		if (!&bParam2 || ((!Function_377() && !IS_SCRIPTED_CONVERSATION_ONGOING()) && !IS_ANY_SPEECH_PLAYING(&bLocal_544)))
		{
			switch (iParam1)
			{
				case 0x00000000:
					iParam0 = 0;
					if ((iLocal_540 % 2) == 0)
					{
						Function_376();
					}
					else
					{
						Function_375();
					}
					break;
				
				case 0x00000001:
					iParam0 = 0;
					if ((iLocal_540 % 2) == 0)
					{
						Function_374();
					}
					else
					{
						Function_373();
					}
					break;
				
				case 0x00000002:
					iParam0 = 0;
					if ((iLocal_540 % 2) == 0)
					{
						Function_372();
					}
					else
					{
						Function_371();
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

void Function_371() //Position: 0x110F4 / 69876
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v2_AA", "Ranch01_rideHome_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v2_AB", "Ranch01_rideHome_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v2_AC1", "Ranch01_rideHome_v2_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v2_AC2", "Ranch01_rideHome_v2_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v2_AD", "Ranch01_rideHome_v2_AD", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_372() //Position: 0x11239 / 70201
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AA", "Ranch01_rideHome_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v1_AB", "Ranch01_rideHome_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AC", "Ranch01_rideHome_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v1_AD", "Ranch01_rideHome_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AE1", "Ranch01_rideHome_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rideHome_v1_AE2", "Ranch01_rideHome_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_rideHome_v1_AF", "Ranch01_rideHome_v1_AF", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_373() //Position: 0x113F4 / 70644
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backCoral_v2_AA", "Ranch01_backCoral_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backCoral_v2_AB", "Ranch01_backCoral_v2_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_374() //Position: 0x11488 / 70792
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backCoral_v1_AA", "Ranch01_backCoral_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backCoral_v1_AB", "Ranch01_backCoral_v1_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_375() //Position: 0x1151C / 70940
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v2_AA", "Ranch01_backyard_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backyard_v2_AB", "Ranch01_backyard_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v2_AC", "Ranch01_backyard_v2_AC", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_376() //Position: 0x115E7 / 71143
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v1_AA", "Ranch01_backyard_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_backyard_v1_AB", "Ranch01_backyard_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backyard_v1_AC", "Ranch01_backyard_v1_AC", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_377() //Position: 0x116B2 / 71346
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_378(bool bParam0) //Position: 0x116BF / 71359
{
	if (bParam0)
	{
		if (!IS_BLIP_VALID(Function_380(3)))
		{
			Function_379(3, 1, 1);
		}
	}
	else if (IS_BLIP_VALID(Function_380(3)))
	{
		Function_379(3, 0, 1);
	}
	return;
}

void Function_379(int iParam0, bool bParam1, bool bParam2) //Position: 0x116EE / 71406
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
						Function_213(&uVar1);
					}
				}
				Function_363(&uVar0);
			}
		}
	}
	return;
}

var Function_380(bool bParam0) //Position: 0x117FD / 71677
{
	return &Global_15402[bParam014] + 104;
}

void Function_381(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1180D / 71693
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
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_382() //Position: 0x118A2 / 71842
{
	iLocal_823 = 1;
	Function_366(&bLocal_544, 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_760, 0);
	return;
}

void Function_383() //Position: 0x118C5 / 71877
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_patrolRest", "Ranch01_patrolRest", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_384(bool bParam0) //Position: 0x11912 / 71954
{
	if (bParam0)
	{
		SET_PLAYER_CONTROL(0, 1, 0, 0);
		SET_ACTOR_INVULNERABILITY(&Global_54076, false);
	}
	else
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	}
	return;
}

void Function_385() //Position: 0x1193E / 71998
{
	Function_245(&iLocal_790, 7, 0, 4294967295, 4294967295);
	Function_401();
	Function_400();
	Function_399();
	Function_395();
	Function_391();
	Function_388();
	ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544, -1.0f, -1.0f, 4, 1, 1);
	Function_387(&Global_54076, 0x41200000);
	MEMORY_PREFER_RIDING(&bLocal_544, false);
	Function_386(2);
	AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,72f);
	SET_ACTOR_INVULNERABILITY(&bLocal_544, false);
	TASK_CLEAR(&bLocal_544);
	TASK_PRIORITY_SET(&bLocal_544, true);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_544, &iLocal_4 + 1824, 3, 1, 0, 1, false);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[14], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[2]);
	SET_ACTOR_INVULNERABILITY(&bLocal_546, false);
	Function_296();
	SET_ACTOR_INVULNERABILITY(&bLocal_548, false);
	Function_295();
	return;
}

void Function_386(bool bParam0) //Position: 0x119F4 / 72180
{
	if (!bLocal_789)
	{
		SET_ACTOR_MAX_SPEED(&bLocal_544, bParam0);
	}
	else
	{
		SET_ACTOR_MAX_SPEED(&bLocal_544, 4);
	}
	return;
}

void Function_387(var uParam0, int iParam1) //Position: 0x11A15 / 72213
{
	MEMORY_REPORT_POSITION_AUTO(&bLocal_544, &uParam0, 1);
	AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_544, &uParam0, &iParam1, 0);
	return;
}

void Function_388() //Position: 0x11A34 / 72244
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 480))
	{
		Function_389();
	}
	return;
}

void Function_389() //Position: 0x11A4A / 72266
{
	int iVar0;
	
	(&iLocal_4 + 480) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 977, Vector(-879,4494f, 91,35687f, 2337,093f), Vector(0.0f, 192,4497f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 980, Vector(-876,5347f, 91,35687f, 2342,271f), Vector(0.0f, 222,6585f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 981, Vector(-869,4607f, 91,35687f, 2354,988f), Vector(0.0f, -19,80797f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 983, Vector(-866,335f, 91,35687f, 2359,636f), Vector(0.0f, 59,40244f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 984, Vector(-863,4503f, 91,35687f, 2365,291f), Vector(0.0f, 3,990577f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 985, Vector(-874,3217f, 91,35687f, 2391,668f), Vector(0.0f, 126,6724f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 986, Vector(-882,2227f, 91,35687f, 2396,177f), Vector(0.0f, -68,21034f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 987, Vector(-890,4582f, 91,35687f, 2400,916f), Vector(0.0f, 135,333f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 988, Vector(-897,8577f, 91,35687f, 2404,774f), Vector(0.0f, 268,4728f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 989, Vector(-901,6268f, 91,35687f, 2407,653f), Vector(0.0f, 89,60596f, 0.0f));
	Function_390(&iVar0, &iLocal_4 + 480);
	return;
}

void Function_390(var uParam0, var uParam1) //Position: 0x11C60 / 72800
{
	SQUAD_JOIN(&uParam0, &uParam1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&uParam0, true);
	SET_ACTOR_CAN_BE_TARGETED(&uParam0, false);
	return;
}

void Function_391() //Position: 0x11C86 / 72838
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 360))
	{
		Function_392();
	}
	SQUAD_SET_FACTION(&iLocal_4 + 360, 23);
	iLocal_783 = 0;
	while (iLocal_783 <= SQUAD_GET_SIZE(&iLocal_4 + 360))
	{
		iLocal_766 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 360, iLocal_783);
		if (IS_ACTOR_ALIVE(&iLocal_766))
		{
			Local_1034[bLocal_7834] = &iLocal_766;
			Local_1034[bLocal_7834].f_8 = 0;
			Local_1034[bLocal_7834].f_12 = RAND_INT_RANGE(false, 6);
			GET_OBJECT_POSITION(&iLocal_4 + 1472[Local_1034[bLocal_7834].f_12], &Local_770);
			GET_OBJECT_ORIENTATION(&iLocal_4 + 1472[Local_1034[bLocal_7834].f_12], &Local_776);
			TASK_CLEAR(&(Local_1034[bLocal_7834]));
			TASK_PRIORITY_SET(&(Local_1034[bLocal_7834]), true);
			TASK_GO_TO_COORD_AND_STAY(StackVal, &(Local_1034[bLocal_7834]), &Local_770, 3);
			Function_319(&Local_1034[bLocal_7834] + 16);
		}
		bLocal_783++;
	}
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iLocal_4 + 360, 0, &iLocal_4 + 576[2], 4, 1);
	return;
}

void Function_392() //Position: 0x11D89 / 73097
{
	int iVar0;
	
	*(&iLocal_4 + 360) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1016, Vector(-877,9076f, 90,3529f, 2433,614f), Vector(0.0f, 200,9423f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1017, Vector(-887,6166f, 90,3529f, 2437,223f), Vector(0.0f, -159,4454f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1016, Vector(-875,7287f, 90,35431f, 2436,873f), Vector(0.0f, 61,23708f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1017, Vector(-887,6258f, 90,35329f, 2442,593f), Vector(0.0f, -20,53456f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1016, Vector(-884,484f, 90,35291f, 2430,686f), Vector(0.0f, -159,7843f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1017, Vector(-882,8116f, 90,35291f, 2435,227f), Vector(0.0f, -159,7843f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1016, Vector(-881,1894f, 90,41758f, 2439,633f), Vector(0.0f, 20,21574f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1017, Vector(-881,8776f, 90,35291f, 2437,764f), Vector(0.0f, 200,2157f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1016, Vector(-886,9502f, 90,3542f, 2430,525f), Vector(0.0f, -109,1929f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1017, Vector(-883,0741f, 90,48632f, 2429,158f), Vector(0.0f, 141,056f, 0.0f));
	Function_393(&iVar0, &iLocal_4 + 360, 0);
	return;
}

void Function_393(var uParam0, var uParam1, bool bParam2) //Position: 0x11FA9 / 73641
{
	SQUAD_JOIN(&uParam0, &uParam1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&uParam0, 21);
	TASK_PRIORITY_SET(&uParam0, true);
	Function_394(&uParam0);
	SET_ACTOR_HARDLOCK_BIAS(&uParam0, 10000.0f, 0);
	if (bParam2)
	{
		SET_ACTOR_PERMANENT(&uParam0, 1);
	}
	return;
}

void Function_394(var uParam0) //Position: 0x11FEE / 73710
{
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&uParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&uParam0, "nocrime", true);
	}
	return;
}

void Function_395() //Position: 0x12025 / 73765
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 472))
	{
		Function_396();
	}
	*(&Local_972[05] + 8) = &iLocal_4 + 1720;
	*(&Local_972[05] + 16) = &iLocal_4 + 1800;
	(&Local_972[05] + 24) = "";
	*(&Local_972[15] + 8) = &iLocal_4 + 1728;
	*(&Local_972[15] + 16) = &iLocal_4 + 1800;
	(&Local_972[15] + 24) = "";
	*(&Local_972[25] + 8) = &iLocal_4 + 1736;
	*(&Local_972[25] + 16) = &iLocal_4 + 1776;
	*(&Local_972[25] + 24) = &iLocal_4 + 576[4];
	*(&Local_972[35] + 8) = &iLocal_4 + 1744;
	*(&Local_972[35] + 16) = &iLocal_4 + 1784;
	*(&Local_972[35] + 24) = &iLocal_4 + 576[4];
	*(&Local_972[45] + 8) = &iLocal_4 + 1752;
	*(&Local_972[45] + 16) = &iLocal_4 + 1776;
	*(&Local_972[45] + 24) = &iLocal_4 + 576[5];
	*(&Local_972[55] + 8) = &iLocal_4 + 1760;
	*(&Local_972[55] + 16) = &iLocal_4 + 1784;
	*(&Local_972[55] + 24) = &iLocal_4 + 576[6];
	bLocal_783 = false;
	while (bLocal_783 <= SQUAD_GET_SIZE(&iLocal_4 + 472))
	{
		iLocal_766 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 472, bLocal_783);
		if (IS_ACTOR_ALIVE(&iLocal_766))
		{
			Local_972[bLocal_7835] = &iLocal_766;
			Local_972[bLocal_7835].f_32 = 0;
			TASK_CLEAR(&(Local_972[bLocal_7835]));
			TASK_PRIORITY_SET(&(Local_972[bLocal_7835]), true);
			TASK_USE_GRINGO(&(Local_972[bLocal_7835]), GET_GRINGO_FROM_OBJECT(&Local_972[bLocal_7835] + 8), "UseCase1", 4294967295, 1);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(&(Local_972[bLocal_7835]), 11, false);
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[bLocal_7835]), &iLocal_4 + 576[7], 2, 1);
			ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[bLocal_7835]), &iLocal_4 + 576[8]);
		}
		bLocal_783++;
	}
	return;
}

void Function_396() //Position: 0x12219 / 74265
{
	*(&iLocal_4 + 472) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	*(&iLocal_4 + 368[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1050, Vector(-857,6796f, 91,85497f, 2339,136f), Vector(0.0f, 120,4158f, 0.0f));
	Function_397(&iLocal_4 + 368[02], &iLocal_4 + 472, 1);
	*(&iLocal_4 + 368[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1051, Vector(-881,812f, 91,35687f, 2344,93f), Vector(0.0f, 117,2921f, 0.0f));
	Function_397(&iLocal_4 + 368[12], &iLocal_4 + 472, 0);
	*(&iLocal_4 + 368[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1052, Vector(-888,2471f, 90,106f, 2426,359f), Vector(0.0f, 248,4335f, 0.0f));
	Function_397(&iLocal_4 + 368[22], &iLocal_4 + 472, 1);
	*(&iLocal_4 + 368[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1050, Vector(-883,9103f, 90,18514f, 2424,354f), Vector(0.0f, 146,8066f, 0.0f));
	Function_397(&iLocal_4 + 368[32], &iLocal_4 + 472, 0);
	*(&iLocal_4 + 368[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1051, Vector(-899,2618f, 90,10969f, 2428,48f), Vector(0.0f, -70,30838f, 0.0f));
	Function_397(&iLocal_4 + 368[42], &iLocal_4 + 472, 1);
	*(&iLocal_4 + 368[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1052, Vector(-870,0472f, 90,35206f, 2434,694f), Vector(0.0f, 20,4212f, 0.0f));
	Function_397(&iLocal_4 + 368[52], &iLocal_4 + 472, 0);
	return;
}

void Function_397(var uParam0, var uParam1, bool bParam2) //Position: 0x123B1 / 74673
{
	SQUAD_JOIN(&uParam0, &uParam1);
	SET_ACTOR_UPDATE_PRIORITY(&uParam0, false);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&uParam0, 19);
	TASK_PRIORITY_SET(&uParam0, true);
	Function_394(&uParam0);
	Function_398(&uParam0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(&uParam0, -10000.0f, 0);
	if (bParam2)
	{
		SET_ACTOR_PERMANENT(&uParam0, 1);
	}
	return;
}

void Function_398(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x12409 / 74761
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &iParam4);
	}
}

void Function_399() //Position: 0x12453 / 74835
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[2]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[2], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[2]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[2]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[3]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[3], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[3]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[3]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[15]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[15], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[15]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[15]);
	return;
}

void Function_400() //Position: 0x124F3 / 74995
{
	iLocal_601 = 0;
	return;
}

bool Function_401() //Position: 0x124FD / 75005
{
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "ncottage02", 1);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 1);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 0))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Cottage02 (Front) door #1!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 1);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 0))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Front Left) door #1!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 2);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 1))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Front Right) door #2!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 3);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 0))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Back Left) door #3!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable01", 4);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 1))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable01 (Back Right) door #4!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable02", 2);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 1))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable02 (Coop) door #2!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable02", 4);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 1))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 1);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable02 (Corral) door #4!");
		return 0;
	}
	uLocal_762 = Function_241(Global_46816[0], "hennigansRanch", "stable02", 5);
	if (IS_DOOR_VALID(&uLocal_762))
	{
		if (IS_DOOR_LOCKED(&uLocal_762))
		{
			Function_161(&uLocal_762, 0);
		}
		if (!IS_DOOR_OPEN_IN_DIRECTION(&uLocal_762, 0))
		{
			if (IS_DOOR_OPENED(&uLocal_762))
			{
				CLOSE_DOOR_FAST(&uLocal_762);
			}
			OPEN_DOOR_DIRECTION_FAST(&uLocal_762, 0);
		}
	}
	else
	{
		LOG_ERROR("Failed to unlock/open Stable02 (Corral) door #5!");
		return 0;
	}
	return 1;
}

int Function_402() //Position: 0x12A43 / 76355
{
	return Global_53524.f_68;
}

void Function_403(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x12A4E / 76366
{
	int iVar0;
	int iVar1;
	
	STREAMING_RELEASE_MAIN_POI();
	if (iParam2 == Global_53524.f_48)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (iParam2 < 0)
	{
		Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	}
	if (iParam2 != Global_53524.f_48 && !Function_410())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_409(0);
	Function_408();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_406(iParam2);
	}
	Function_405(uParam3, iVar0, iVar1);
	Function_404();
}

void Function_404() //Position: 0x12AF7 / 76535
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

void Function_405(int iParam0, bool bParam1, bool bParam2) //Position: 0x12B38 / 76600
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

void Function_406(bool bParam0) //Position: 0x12CA1 / 76961
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_407() };
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

struct<16> Function_407() //Position: 0x12E39 / 77369
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

void Function_408() //Position: 0x12E7F / 77439
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_409(bool bParam0) //Position: 0x12EA3 / 77475
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

bool Function_410() //Position: 0x12ED2 / 77522
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_411(int iParam0) //Position: 0x12EED / 77549
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 912[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 952[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 1008[2]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 1056[0]);
			break;
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 912[0]);
}

struct<8> Function_412(int iParam0) //Position: 0x12F58 / 77656
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_413(&iLocal_4 + 912[0]);
			return StackVal, Function_413(&iLocal_4 + 912[0]);
			break;
		
		case 0x00000001:
			Function_413(&iLocal_4 + 952[0]);
			return StackVal, Function_413(&iLocal_4 + 952[0]);
			break;
		
		case 0x00000002:
			Function_413(&iLocal_4 + 1008[2]);
			return StackVal, Function_413(&iLocal_4 + 1008[2]);
			break;
		
		default:
			Function_413(&iLocal_4 + 1056[0]);
			return StackVal, Function_413(&iLocal_4 + 1056[0]);
			break;
	}
	Function_413(&iLocal_4 + 912[0]);
	return StackVal, Function_413(&iLocal_4 + 912[0]);
}

struct<8> Function_413(bool bParam0) //Position: 0x12FC3 / 77763
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

void Function_414() //Position: 0x12FEC / 77804
{
	return;
}

bool Function_415() //Position: 0x12FF2 / 77810
{
	if (Function_416())
	{
		return 1;
	}
	return 0;
}

bool Function_416() //Position: 0x13001 / 77825
{
	Function_422(&iLocal_4 + 104, 1016, 2, 0);
	Function_422(&iLocal_4 + 104, 1017, 2, 0);
	Function_422(&iLocal_4 + 104, 1050, 2, 0);
	Function_422(&iLocal_4 + 104, 1051, 2, 0);
	Function_422(&iLocal_4 + 104, 1052, 2, 0);
	Function_422(&iLocal_4 + 104, 980, 2, 0);
	Function_422(&iLocal_4 + 104, 981, 2, 0);
	Function_422(&iLocal_4 + 104, 983, 2, 0);
	Function_422(&iLocal_4 + 104, 984, 2, 0);
	Function_422(&iLocal_4 + 104, 985, 2, 0);
	Function_422(&iLocal_4 + 104, 986, 2, 0);
	Function_422(&iLocal_4 + 104, 987, 2, 0);
	Function_422(&iLocal_4 + 104, 988, 2, 0);
	Function_422(&iLocal_4 + 104, 989, 2, 0);
	if (Function_417(&iLocal_4 + 104))
	{
		return 1;
	}
	return 0;
}

bool Function_417(struct<2>[] Param0) //Position: 0x130CA / 78026
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_421();
	iVar1 = 0;
	if (!Function_180(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_420(&(Param0[iVar02]), 8);
		}
		else if (Function_419())
		{
			iVar1 = 1;
			Function_420(&(Param0[iVar02]), 8);
		}
		Function_420(&(Param0[iVar02]), 16);
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
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_180(&(Param0[02]), 8) || iVar1));
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
				Function_420(&(Param0[iVar02]), 1);
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
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_420(&(Param0[iVar02]), 2);
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
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_420(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_420(&(Param0[iVar02]), 2);
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
	Function_418();
	return 1;
}

void Function_418() //Position: 0x1348C / 78988
{
	if (!Function_290(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_419() //Position: 0x134CC / 79052
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

void Function_420(struct<13> Param0) //Position: 0x134FA / 79098
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_421() //Position: 0x1350D / 79117
{
	if (!Function_290(128))
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

var Function_422(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1354F / 79183
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
			Function_420(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_420(&(Param0[iVar02]), 8);
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

void Function_423() //Position: 0x1362B / 79403
{
	if (IS_ACTOR_ALIVE(&bLocal_546))
	{
		if (GET_MOUNT(&Global_54076) != &bLocal_546)
		{
			SET_ACTORS_HORSE(&Global_54076, &bLocal_546);
			ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_546);
		}
	}
	return;
}

void Function_424() //Position: 0x13660 / 79456
{
	Function_308(&bLocal_544);
	Function_308(&bLocal_546);
	Function_308(&bLocal_548);
	return;
}

void Function_425() //Position: 0x1367B / 79483
{
	Function_416();
	Function_426();
	return;
}

void Function_426() //Position: 0x13688 / 79496
{
	Function_177(&iLocal_4 + 64);
	return;
}

bool Function_427() //Position: 0x13695 / 79509
{
	Function_470();
	switch (iLocal_1116)
	{
		case 0x00000000:
			iLocal_798 = 0;
			iLocal_796 = 1;
			iLocal_797 = 1;
			iLocal_1116 = 1;
			return 1;
			break;
		
		case 0x00000001:
			Function_469(&iLocal_4 + 1824);
			if (Function_468(&iLocal_4 + 1824, &iLocal_4 + 1272[9]) || Function_467(&iLocal_4 + 1824, &iLocal_4 + 1272[9]))
			{
				Function_245(&iLocal_790, 10, 0, 4294967295, 4294967295);
				iLocal_601 = 1;
				Function_223();
				Function_318();
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
				Function_298(1, 1);
				AI_IGNORE_ACTOR(&bLocal_544);
				Function_386(4);
				SET_ACTOR_VISION_FIELD_OF_VIEW(&bLocal_544, 359.0f);
				Function_273(&bLocal_544, &(Local_972[05]), 1);
				Function_273(&bLocal_544, &(Local_972[15]), 1);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_548, 68, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_548, 67, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_548, 64, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_548, 66, 10000.0f);
				ANIMAL_TUNING_SET_ATTRIB_FLOAT(&bLocal_548, 65, 10000.0f);
				bLocal_783 = false;
				Function_77(&bLocal_783, Function_465(4));
				ANIMAL_SPECIES_ADD_EXTERNAL_PATH_ATTRACTION(13, bLocal_783, &iLocal_4 + 1792, 5.0f, 4.0f, 1.0f, 1082130432, 2);
				if (IS_ACTOR_ALIVE(&(Local_972[05])))
				{
					TASK_CLEAR(&(Local_972[05]));
					TASK_PRIORITY_SET(&(Local_972[05]), true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(Local_972[05]), &Local_972[05] + 16, 3, 1, 1, 1, false);
				}
				if (IS_ACTOR_ALIVE(&(Local_972[15])))
				{
					TASK_CLEAR(&(Local_972[15]));
					TASK_PRIORITY_SET(&(Local_972[15]), true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(Local_972[15]), &Local_972[15] + 16, 4, 1, 1, 1, false);
				}
				if (IS_ACTOR_ALIVE(&(Local_972[35])))
				{
					TASK_CLEAR(&(Local_972[35]));
					TASK_PRIORITY_SET(&(Local_972[35]), true);
					TASK_ANIMAL_PATROL(&(Local_972[35]), &Local_972[35] + 24);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(Local_972[35]), &Local_972[35] + 24, 2, true);
				}
				if (IS_ACTOR_ALIVE(&(Local_972[45])))
				{
					TASK_CLEAR(&(Local_972[45]));
					TASK_PRIORITY_SET(&(Local_972[45]), true);
					TASK_ANIMAL_PATROL(&(Local_972[45]), &Local_972[45] + 24);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(Local_972[45]), &Local_972[45] + 24, 2, true);
				}
				Function_302(15, "STAGE 03 - OBJ_02A-DLG_01");
				iLocal_1116 = 2;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_456();
			Function_446(1, 1);
			Function_442(2, 4, 10.0f, 20.0f, 200.0f, 1);
			break;
		
		case 0x00000002:
			Function_469(&iLocal_4 + 1824);
			if ((Function_468(&iLocal_4 + 1824, &iLocal_4 + 1272[15]) || Function_467(&iLocal_4 + 1824, &iLocal_4 + 1272[15])) || (!IS_ACTOR_ALIVE(&iLocal_4 + 368[02]) && !IS_ACTOR_ALIVE(&iLocal_4 + 368[12])))
			{
				Function_245(&iLocal_790, 17, 0, 4294967295, 4294967295);
				Function_386(4);
				Function_441(&bLocal_544, &iLocal_4 + 472, 1);
				if (IS_ACTOR_ALIVE(&(Local_972[25])))
				{
					TASK_CLEAR(&(Local_972[25]));
					TASK_PRIORITY_SET(&(Local_972[25]), true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(Local_972[25]), &Local_972[25] + 16, 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[25]), &iLocal_4 + 576[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[25]), &iLocal_4 + 576[8]);
				}
				if (IS_ACTOR_ALIVE(&(Local_972[35])))
				{
					TASK_CLEAR(&(Local_972[35]));
					TASK_PRIORITY_SET(&(Local_972[35]), true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(Local_972[35]), &Local_972[35] + 16, 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[35]), &iLocal_4 + 576[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[35]), &iLocal_4 + 576[8]);
				}
				if (IS_ACTOR_ALIVE(&(Local_972[45])))
				{
					TASK_CLEAR(&(Local_972[45]));
					TASK_PRIORITY_SET(&(Local_972[45]), true);
					TASK_ANIMAL_PATROL(&(Local_972[45]), &Local_972[45] + 24);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(Local_972[45]), &Local_972[45] + 24, 2, true);
				}
				if (IS_ACTOR_ALIVE(&(Local_972[55])))
				{
					TASK_CLEAR(&(Local_972[55]));
					TASK_PRIORITY_SET(&(Local_972[55]), true);
					TASK_ANIMAL_PATROL(&(Local_972[55]), &Local_972[55] + 24);
					SET_ACTOR_STAY_WITHIN_VOLUME(&(Local_972[55]), &Local_972[55] + 24, 2, true);
				}
				Function_302(25, "STAGE 03 - OBJ_02B-DLG_01");
				iLocal_1116 = 3;
				return 1;
			}
			Function_456();
			Function_446(1, 1);
			Function_440();
			Function_438(1);
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 744[0]))
			{
				Function_245(&iLocal_790, 17, 0, 4294967295, 4294967295);
			}
			Function_442(4, 3, 10.0f, 20.0f, 200.0f, 1);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_IN_VOLUME(&bLocal_544, &iLocal_4 + 744[5]))
			{
				Function_437(&iLocal_4 + 1104[8], 0x40a00000);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
				GET_OBJECT_POSITION(&iLocal_4 + 1104[3], &Local_770);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1104[3], &Local_776);
				bLocal_783 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &Local_770, 2);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Local_770, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_SEQUENCE_PERFORM(&bLocal_544, bLocal_783);
				TASK_SEQUENCE_RELEASE(bLocal_783, 1);
				ADD_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544, &iLocal_4 + 744[5]);
				if (IS_ACTOR_ALIVE(&(Local_972[45])))
				{
					TASK_CLEAR(&(Local_972[45]));
					TASK_PRIORITY_SET(&(Local_972[45]), true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(Local_972[45]), &Local_972[45] + 16, 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[45]), &iLocal_4 + 576[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[45]), &iLocal_4 + 576[8]);
				}
				if (IS_ACTOR_ALIVE(&(Local_972[55])))
				{
					TASK_CLEAR(&(Local_972[55]));
					TASK_PRIORITY_SET(&(Local_972[55]), true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&(Local_972[55]), &Local_972[55] + 16, 4, 1, 1, 1, false);
					SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[55]), &iLocal_4 + 576[7], 2, 1);
					ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(Local_972[55]), &iLocal_4 + 576[8]);
				}
				iLocal_1116 = 4;
				return 1;
			}
			Function_456();
			Function_436();
			Function_440();
			Function_438(1);
			break;
		
		case 0x00000004:
			if (Function_435(&iLocal_4 + 472, &iLocal_4 + 576[1]) == 0)
			{
				Function_245(&iLocal_790, 6, 0, 4294967295, 4294967295);
				Function_283(&iLocal_558);
				iLocal_1116 = 5;
				return 1;
			}
			Function_456();
			Function_436();
			Function_440();
			Function_438(1);
			break;
		
		case 0x00000005:
			if (Function_280(&iLocal_558) <= 2,5f)
			{
				Function_245(&iLocal_790, 6, 0, 4294967295, 4294967295);
				if (GET_MOUNT(&Global_54076) == &bLocal_546)
				{
					bLocal_815 = true;
					bLocal_816 = false;
				}
				else if (GET_MOUNT(&Global_54076) == &bLocal_548)
				{
					bLocal_815 = true;
					bLocal_816 = true;
				}
				else
				{
					bLocal_815 = false;
					bLocal_816 = false;
				}
				iLocal_601 = 0;
				Function_298(0, 1);
				Function_387(&Global_54076, 0x41200000);
				Function_297();
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
				Function_344(&iLocal_4 + 472);
				bLocal_783 = false;
				while (bLocal_783 <= SQUAD_GET_SIZE(&iLocal_4 + 472))
				{
					iLocal_766 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 472, bLocal_783);
					if (IS_ACTOR_VALID(&iLocal_766))
					{
						if (IS_ACTOR_ALIVE(&iLocal_766))
						{
							AI_IGNORE_ACTOR(&iLocal_766);
							SET_ACTOR_MAX_SPEED(&iLocal_766, 3);
							TASK_CLEAR(&iLocal_766);
							ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_766, &iLocal_4 + 576[16]);
						}
					}
					bLocal_783++;
				}
				Function_302(35, "STAGE 03 - OBJ_03-DLG_01");
				iLocal_1116 = 6;
				return 1;
			}
			Function_438(0);
			break;
		
		case 0x00000006:
			if (GET_MOUNT(&Global_54076) != &bLocal_546 && Function_434(&bLocal_544, &bLocal_548))
			{
				Function_245(&iLocal_790, 3, 0, 4294967295, 4294967295);
				iLocal_796 = 1;
				iLocal_797 = 2;
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544, -1.0f, -1.0f, 4, 1, 1);
				MEMORY_PREFER_RIDING(&bLocal_544, false);
				Function_386(1);
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_544, &iLocal_4 + 1848, 3, 1, 0, 1, false);
				Function_302(45, "STAGE 03 - OBJ_04-DLG_01");
				iLocal_1116 = 7;
				return 1;
			}
			if (GET_MOUNT(&Global_54076) == &bLocal_548)
			{
				Function_433(&bLocal_546, 1);
			}
			Function_446(1, 0);
			if (GET_TASK_STATUS(&bLocal_544, 0) != 1)
			{
				Function_433(&bLocal_548, 1);
			}
			Function_438(0);
			break;
		
		case 0x00000007:
			Function_469(&iLocal_4 + 1848);
			if (Function_432(&iLocal_4 + 1848))
			{
				Function_318();
				CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
				Function_297();
				Function_302(55, "STAGE 03 - OBJ_05-DLG_01");
				iLocal_1116 = 8;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			Function_442(1, 1, 10.0f, 20.0f, 30.0f, 1);
			break;
		
		case 0x00000008:
			if (IS_OBJECT_VALID(&iLocal_758))
			{
				if (GATEWAY_UPDATE(&iLocal_758))
				{
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
					Function_302(65, "STAGE 03 - OBJ_06-OBJ_01A");
					iLocal_1116 = 9;
					return 1;
				}
			}
			Function_446(1, 1);
			break;
		
		case 0x00000009:
			if (Function_430(&Global_54076, &iLocal_4 + 1272[11], 2.0f))
			{
				iLocal_1116 = 10;
				return 1;
			}
			break;
		
		case 0x0000000A:
			if (!Function_434(&Global_54076, &bLocal_546))
			{
				Function_219(&iLocal_4 + 1104[13]);
				if (Function_428(&bLocal_546, &iLocal_809) || Function_428(&bLocal_546, &iLocal_811))
				{
					iLocal_1116 = 11;
					return 1;
				}
				if (!Function_430(&Global_54076, &iLocal_4 + 1272[11], 5.0f))
				{
					Function_302(66, "STAGE 03 - OBJ_06-OBJ_01B");
					iLocal_1116 = 9;
					return 1;
				}
			}
			if (!Function_430(&bLocal_546, &iLocal_4 + 1272[11], 5.0f))
			{
				Function_302(56, "STAGE 03 - OBJ_05-OBJ_01");
				iLocal_1116 = 8;
				return 1;
			}
			break;
		
		case 0x0000000B:
			iLocal_1116 = 12;
			return 1;
			break;
		
		case 0x0000000C:
			return 0;
			break;
	}
	return 1;
}

int Function_428(bool bParam0, int iParam1) //Position: 0x140BD / 82109
{
	if (IS_GRINGO_VALID(&iParam1))
	{
		iLocal_756 = Function_429(&iParam1, "UseCase1");
		if (IS_OBJECT_VALID(&iLocal_756))
		{
			if (GET_ACTOR_FROM_OBJECT(&iLocal_756) == &bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_429(var uParam0, int iParam1) //Position: 0x140FB / 82171
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

bool Function_430(bool bParam0, var uParam1, float fParam2) //Position: 0x1410A / 82186
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_274(&bParam0);
			Function_431(&uParam1);
			if (VDIST(Function_274(&bParam0), Function_431(&uParam1)) >= fParam2)
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

struct<8> Function_431(int iParam0) //Position: 0x14228 / 82472
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

bool Function_432(int iParam0) //Position: 0x14296 / 82582
{
	GET_PATH_POINT(&iParam0, (GET_NUM_PATH_POINTS(&iParam0) - 1), &Local_770);
	if ((GET_TASK_STATUS(&bLocal_544, 43) != 0 || VDIST(Local_802, Local_770) >= 1,5f) || (fLocal_807 - fLocal_806) >= 1,5f)
	{
		return 1;
	}
	return 0;
}

void Function_433(bool bParam0, int iParam1) //Position: 0x142E0 / 82656
{
	bLocal_783 = TASK_SEQUENCE_OPEN();
	TASK_MOUNT(false, &bParam0, 0, 1, iParam1, 2147483647);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&bLocal_544);
	TASK_PRIORITY_SET(&bLocal_544, true);
	TASK_SEQUENCE_PERFORM(&bLocal_544, bLocal_783);
	TASK_SEQUENCE_RELEASE(bLocal_783, 1);
	return;
}

bool Function_434(bool bParam0, bool bParam1) //Position: 0x14326 / 82726
{
	if (GET_MOUNT(&bParam0) != &bParam1)
	{
		return 0;
	}
	if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bParam0))
	{
		return 1;
	}
	return 0;
}

int Function_435(int iParam0, int iParam1) //Position: 0x14346 / 82758
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
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
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2) && IS_ACTOR_ALIVE(&uVar2))
		{
			if (IS_ACTOR_IN_VOLUME(&uVar2, &iParam1))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

void Function_436() //Position: 0x143AC / 82860
{
	bLocal_783 = false;
	while (bLocal_783 <= 6)
	{
		if (IS_ACTOR_ALIVE(&(Local_972[bLocal_7835])))
		{
			if (!Local_972[bLocal_7835].f_32)
			{
				if (IS_ACTOR_IN_VOLUME(&(Local_972[bLocal_7835]), &iLocal_4 + 576[2]))
				{
					Local_972[bLocal_7835].f_32 = 1;
					iLocal_764 = GET_CURRENT_GRINGO(&(Local_972[bLocal_7835]));
					if (IS_GRINGO_VALID(&iLocal_764))
					{
						GRINGO_DEACTIVATE_AND_RESET_ACTORS(&iLocal_764);
						GRINGO_ALLOW_ACTIVATION(&iLocal_764, false);
					}
					SET_ACTOR_MAX_SPEED(&(Local_972[bLocal_7835]), 4);
					TASK_CLEAR(&(Local_972[bLocal_7835]));
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(&(Local_972[bLocal_7835]), &iLocal_4 + 576[2]))
			{
				SET_ACTOR_MAX_SPEED(&(Local_972[bLocal_7835]), 3);
				Local_972[bLocal_7835] = "";
			}
		}
		bLocal_783++;
	}
	return;
}

void Function_437(var uParam0, int iParam1) //Position: 0x1447F / 83071
{
	GET_OBJECT_POSITION(&uParam0, &Local_770);
	AI_GOAL_LOOK_AT_COORD_NEW(&bLocal_544, &Local_770, &iParam1);
	return;
}

void Function_438(bool bParam0) //Position: 0x1449C / 83100
{
	if (!Function_282(&iLocal_586))
	{
		Function_283(&iLocal_586);
	}
	else if (Function_280(&iLocal_586) <= 1.0f)
	{
		iLocal_766 = Function_439(&iLocal_4 + 480);
		if (IS_ACTOR_ALIVE(&iLocal_766))
		{
			if (bParam0)
			{
				if (GET_TASK_STATUS(&iLocal_766, 0) != 1)
				{
					bLocal_784 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2,5f, 2.0f), 0, 0);
					TASK_HORSE_ACTION(0, 0);
					TASK_FLEE_ACTOR(false, &Global_54076, 20.0f, RAND_FLOAT_GAUSSIAN(10.0f, 7,5f), 1, 0, 0);
					TASK_STAND_STILL(false, RAND_FLOAT_GAUSSIAN(2,5f, 2.0f), 0, 0);
					TASK_HORSE_ACTION(0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_CLEAR(&iLocal_766);
					TASK_PRIORITY_SET(&iLocal_766, true);
					TASK_SEQUENCE_PERFORM(&iLocal_766, bLocal_784);
					TASK_SEQUENCE_RELEASE(bLocal_784, 1);
				}
			}
			else if (GET_TASK_STATUS(&iLocal_766, 0) == 1)
			{
				TASK_CLEAR(&iLocal_766);
			}
		}
		Function_283(&iLocal_586);
	}
	return;
}

int Function_439(bool bParam0) //Position: 0x14572 / 83314
{
	if (SQUAD_GET_SIZE(&bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&bParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(&bParam0) - 1)));
	}
	return "";
}

void Function_440() //Position: 0x14597 / 83351
{
	bLocal_783 = false;
	while (bLocal_783 <= 10)
	{
		if (IS_ACTOR_ALIVE(&(Local_1034[bLocal_7834])))
		{
			if (!iLocal_837)
			{
				if (IS_ACTOR_VALID(ANIMAL_ACTOR_GET_GRABBED_BY(&(Local_1034[bLocal_7834]))))
				{
					iLocal_837 = 1;
				}
			}
			if (!Function_282(&Local_1034[bLocal_7834] + 16))
			{
				if ((GET_TASK_STATUS(&(Local_1034[bLocal_7834]), 66) != 0 || GET_TASK_STATUS(&(Local_1034[bLocal_7834]), 66) != 4) || Function_430(&(Local_1034[bLocal_7834]), &iLocal_4 + 1472[Local_1034[bLocal_7834].f_12], 1.0f))
				{
					Function_283(&Local_1034[bLocal_7834] + 16);
				}
			}
			else if (Function_280(&Local_1034[bLocal_7834] + 16) <= RAND_FLOAT_GAUSSIAN(5.0f, 2,5f))
			{
				Local_1034[bLocal_7834].f_12 = RAND_INT_RANGE_DIFFERENT(Local_1034[bLocal_7834].f_12, 0, 6);
				GET_OBJECT_POSITION(&iLocal_4 + 1472[Local_1034[bLocal_7834].f_12], &Local_770);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1472[Local_1034[bLocal_7834].f_12], &Local_776);
				TASK_CLEAR(&(Local_1034[bLocal_7834]));
				TASK_PRIORITY_SET(&(Local_1034[bLocal_7834]), true);
				TASK_GO_TO_COORD_AND_STAY(StackVal, &(Local_1034[bLocal_7834]), &Local_770, 3);
				Function_319(&Local_1034[bLocal_7834] + 16);
			}
		}
		bLocal_783++;
	}
	return;
}

void Function_441(bool bParam0, var uParam1, bool bParam2) //Position: 0x146E5 / 83685
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&bParam0, &uVar1);
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&bParam0, &uVar1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_442(bool bParam0, bool bParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5) //Position: 0x14745 / 83781
{
	if (!bLocal_817)
	{
		if (&bParam5)
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				bLocal_818 = false;
			}
		}
		if (!bLocal_818 && ACTORS_IN_RANGE(&Global_54076, &bLocal_544, bParam2))
		{
			if (bParam0 != 0)
			{
				if (GET_ACTOR_MAX_SPEED(&bLocal_544) != bParam0)
				{
					Function_386(bParam0);
				}
			}
			Function_445(0);
			Function_444();
		}
		else
		{
			Function_443(5.0f);
		}
	}
	else
	{
		if (bParam5 && !bLocal_818)
		{
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				if (bParam0 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(&bLocal_544) != 5)
					{
						Function_386(5);
					}
				}
				bLocal_818 = true;
				bLocal_817 = false;
				return;
			}
		}
		if ((!bLocal_819 && !bLocal_820) && !bLocal_821)
		{
			if ((fLocal_805 - fLocal_806) <= fParam3)
			{
				if (bParam1 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(&bLocal_544) != bParam1)
					{
						Function_386(bParam1);
					}
				}
				bLocal_819 = true;
				bLocal_817 = false;
			}
			else if ((fLocal_806 - fLocal_805) <= fParam3)
			{
				if (bParam0 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(&bLocal_544) != 5)
					{
						Function_386(5);
					}
				}
				bLocal_820 = true;
				bLocal_817 = false;
			}
			else if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_544, bParam4))
			{
				if (bParam0 != 0)
				{
					if (GET_ACTOR_MAX_SPEED(&bLocal_544) != 5)
					{
						Function_386(5);
					}
				}
				bLocal_821 = true;
				bLocal_817 = false;
			}
		}
	}
}

void Function_443(float fParam0) //Position: 0x14876 / 84086
{
	if (!Function_282(&iLocal_570))
	{
		if (!ACTOR_HAS_ANIM_SET(&bLocal_544, "wave"))
		{
			iLocal_822 = 0;
			Function_283(&iLocal_570);
		}
		else if (!IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_544, "wave"))
		{
			iLocal_822 = 0;
			Function_283(&iLocal_570);
		}
	}
	else if (Function_280(&iLocal_570) <= fParam0)
	{
		if (!ACTOR_HAS_ANIM_SET(&bLocal_544, "wave"))
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_544, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_544, "wave", 0);
		}
		Local_776 = Vector(StackVal, StackVal, StackVal) - Vector(Local_802, Local_799, StackVal);
		VNORMALIZE(&Local_776);
		GET_ACTOR_AXIS(&bLocal_544, &uLocal_779, 2);
		fLocal_782 = VDOT(&uLocal_779, &Local_776);
		if (fLocal_782 >= -0,5f)
		{
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_544, "wave/forward");
		}
		else if (fLocal_782 <= 0,5f)
		{
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_544, "nwave/back");
		}
		else
		{
			GET_ACTOR_AXIS(&bLocal_544, &uLocal_779, 0);
			fLocal_782 = VDOT(&uLocal_779, &Local_776);
			if (fLocal_782 >= 0.0f)
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_544, "nwave/left");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_544, "wave/right");
			}
		}
		iLocal_822 = 1;
		Function_319(&iLocal_570);
	}
	return;
}

void Function_444() //Position: 0x149C6 / 84422
{
	bLocal_817 = true;
	bLocal_818 = false;
	bLocal_819 = false;
	bLocal_820 = false;
	bLocal_821 = false;
	return;
}

void Function_445(bool bParam0) //Position: 0x149E0 / 84448
{
	iLocal_822 = 0;
	if (ACTOR_HAS_ANIM_SET(&bLocal_544, "wave"))
	{
		if (&bParam0)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_544, 1);
		}
	}
	return;
}

void Function_446(bool bParam0, bool bParam1) //Position: 0x14A09 / 84489
{
	if (bParam0)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			Function_227(0);
			if (GET_MOUNT(&Global_54076) != &bLocal_546)
			{
				Function_312(0, 0x40400000);
				if (GET_MOUNT(&Global_54076) == &bLocal_548)
				{
					iLocal_766 = &bLocal_546;
					bLocal_546 = &bLocal_548;
					bLocal_548 = &iLocal_766;
					SET_ACTORS_HORSE(&Global_54076, &bLocal_546);
					Function_454(&bLocal_546, 0);
					Function_447(&(Local_656[115]), &bLocal_546, "Horse", 0, 0x5f5e100, 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_546, FIND_NAMED_LAYOUT("PlayerLayout"));
					SET_ACTORS_HORSE(&bLocal_544, &bLocal_548);
					SET_MOST_RECENT_MOUNT(&bLocal_544, &bLocal_548);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_548, &iLocal_4);
				}
				else
				{
					if (IS_ACTOR_ALIVE(&bLocal_546))
					{
						SET_ACTOR_FACTION(&bLocal_546, 17);
						GIVE_OBJECT_TO_LAYOUT(&bLocal_546, GET_AMBIENT_LAYOUT());
					}
					bLocal_546 = GET_MOUNT(&Global_54076);
					SET_ACTORS_HORSE(&Global_54076, &bLocal_546);
					Function_454(&bLocal_546, 0);
					SET_ACTOR_FACTION(&bLocal_546, 20);
					Function_447(&(Local_656[115]), &bLocal_546, "Horse", 0, 0x5f5e100, 1);
					SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&bLocal_546, 1);
					GIVE_OBJECT_TO_LAYOUT(&bLocal_546, FIND_NAMED_LAYOUT("PlayerLayout"));
				}
			}
		}
		else
		{
			Function_227(1);
		}
	}
	if (bParam1)
	{
		Function_272(0);
	}
	return;
}

int Function_447(struct<69> Param0) //Position: 0x14B61 / 84833
{
	if (!Function_453(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_452(&Param0, &iParam2))
	{
		return 0;
	}
	Function_451(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_448(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_448(var uParam0, int iParam1, int iParam2) //Position: 0x14BA7 / 84903
{
	if (iParam1 != 100000000)
	{
		Function_450(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_449(&uParam0, &iParam2);
	}
	return;
}

void Function_449(struct<69> Param0) //Position: 0x14BCE / 84942
{
	Param0.f_68 = 0;
	Function_450(&Param0, 2, &bParam1);
	Function_450(&Param0, 4, &bParam1);
	Function_450(&Param0, 8, &bParam1);
	Function_450(&Param0, 16, &bParam1);
	Function_450(&Param0, 32, &bParam1);
	Function_450(&Param0, 64, &bParam1);
	Function_450(&Param0, 128, &bParam1);
	Function_450(&Param0, 256, &bParam1);
	Function_450(&Param0, 512, &bParam1);
	Function_450(&Param0, 1024, &bParam1);
	return;
}

void Function_450(int iParam0, int iParam1, bool bParam2) //Position: 0x14C49 / 85065
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

void Function_451(char* cParam0) //Position: 0x14C88 / 85128
{
	cParam0.f_64 = iParam1;
	return;
}

bool Function_452(int iParam0, char* cParam1) //Position: 0x14C95 / 85141
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

bool Function_453(struct<61> Param0) //Position: 0x14D22 / 85282
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

void Function_454(int iParam0, int iParam1) //Position: 0x14ED5 / 85717
{
	Function_455(&iParam1);
	(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_455(float fParam0) //Position: 0x14EEA / 85738
{
	*(&Global_21369 + 72 + 44) = 0;
	Global_21369.f_396 = 0;
	if (GET_TASK_STATUS(&Global_21369 + 72, 86) != 2)
	{
		TASK_CLEAR(&Global_21369 + 72);
	}
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (&fParam0 == 0.0f)
		{
			TASK_STAND_STILL(&Global_21369 + 72, &fParam0, 0, 0);
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

void Function_456() //Position: 0x150B9 / 86201
{
	var uVar0;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_829))
	{
		if (IS_ITERATOR_VALID(&iLocal_542))
		{
			Function_463(&iLocal_542);
			ITERATE_IN_EVENT_TRAP(&iLocal_542, &uLocal_829);
			iLocal_756 = START_OBJECT_ITERATOR(&iLocal_542);
			while (IS_OBJECT_VALID(&iLocal_756))
			{
				uVar0 = GET_EVENT_FROM_OBJECT(&iLocal_756);
				if (IS_EVENT_VALID(&uVar0))
				{
					iLocal_756 = GET_EVENT_TARGET_AS_OBJECT(&uVar0);
					if (IS_OBJECT_VALID(&iLocal_756))
					{
						iLocal_766 = GET_ACTOR_FROM_OBJECT(&iLocal_756);
						if (IS_ACTOR_VALID(&iLocal_766))
						{
							if (SQUAD_IS_VALID(&iLocal_4 + 488))
							{
								bLocal_783 = false;
								while (bLocal_783 <= SQUAD_GET_SIZE(&iLocal_4 + 488))
								{
									iLocal_768 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 488, bLocal_783);
									if (IS_ACTOR_VALID(&iLocal_768))
									{
										if (&iLocal_766 == &iLocal_768)
										{
											iLocal_756 = GET_EVENT_PERPETRATOR(&uVar0);
											if (IS_OBJECT_VALID(&iLocal_756))
											{
												iLocal_766 = GET_ACTOR_FROM_OBJECT(&iLocal_756);
												if (&iLocal_766 == &Global_54076)
												{
													iLocal_831++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_462();
													}
												}
												else if (&iLocal_766 == &bLocal_544)
												{
													iLocal_832++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_461();
													}
												}
											}
										}
									}
									bLocal_783++;
								}
							}
							if (SQUAD_IS_VALID(&iLocal_4 + 472))
							{
								bLocal_783 = false;
								while (bLocal_783 <= SQUAD_GET_SIZE(&iLocal_4 + 472))
								{
									iLocal_768 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 472, bLocal_783);
									if (IS_ACTOR_VALID(&iLocal_768))
									{
										if (&iLocal_766 == &iLocal_768)
										{
											iLocal_756 = GET_EVENT_PERPETRATOR(&uVar0);
											if (IS_OBJECT_VALID(&iLocal_756))
											{
												iLocal_766 = GET_ACTOR_FROM_OBJECT(&iLocal_756);
												if (&iLocal_766 == &Global_54076)
												{
													iLocal_833++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_460();
													}
												}
												else if (&iLocal_766 == &bLocal_544)
												{
													iLocal_834++;
													if (!IS_SCRIPTED_CONVERSATION_ONGOING())
													{
														Function_459();
													}
												}
											}
										}
									}
									bLocal_783++;
								}
							}
							if (SQUAD_IS_VALID(&iLocal_4 + 360))
							{
								bLocal_783 = false;
								while (bLocal_783 <= SQUAD_GET_SIZE(&iLocal_4 + 360))
								{
									iLocal_768 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 360, bLocal_783);
									if (IS_ACTOR_VALID(&iLocal_768))
									{
										if (&iLocal_766 == &iLocal_768)
										{
											iLocal_756 = GET_EVENT_PERPETRATOR(&uVar0);
											if (IS_OBJECT_VALID(&iLocal_756))
											{
												iLocal_766 = GET_ACTOR_FROM_OBJECT(&iLocal_756);
												if (&iLocal_766 == &Global_54076)
												{
													if (&iLocal_766 == &Global_54076)
													{
														iLocal_835++;
														if (!IS_SCRIPTED_CONVERSATION_ONGOING())
														{
															Function_458();
														}
													}
													else if (&iLocal_766 == &bLocal_544)
													{
														iLocal_836++;
														if (!IS_SCRIPTED_CONVERSATION_ONGOING())
														{
															Function_457();
														}
													}
												}
											}
										}
									}
									bLocal_783++;
								}
							}
						}
					}
				}
				iLocal_756 = OBJECT_ITERATOR_NEXT(&iLocal_542);
			}
		}
		EVENT_TRAP_CLEAR_EVENTS(&uLocal_829);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_829);
	}
	return;
}

void Function_457() //Position: 0x1535E / 86878
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_accidentChicken_v2", "Ranch01_accidentChicken_v2", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458() //Position: 0x153BB / 86971
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_accidentChicken_v1", "Ranch01_accidentChicken_v1", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_459() //Position: 0x15418 / 87064
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_bonnieKillCoyote", "Ranch01_bonnieKillCoyote", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_460() //Position: 0x15471 / 87153
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnKillCoyote", "Ranch01_johnKillCoyote", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_461() //Position: 0x154C6 / 87238
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_bonnieRabbit", "Ranch01_bonnieRabbit", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_462() //Position: 0x15517 / 87319
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnRabbit", "Ranch01_johnRabbit", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_463(int iParam0) //Position: 0x15564 / 87396
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_54());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_54());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_464(float fParam0, int iParam1) //Position: 0x1559A / 87450
{
	iParam1 = iParam1;
	if (!Function_282(&iLocal_566))
	{
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "clench_rib"))
		{
			Function_283(&iLocal_566);
		}
	}
	else if (Function_280(&iLocal_566) <= fParam0)
	{
		if (((((((((((((!IS_ACTOR_JUMPING(&Global_54076) && !IS_ACTOR_CROUCHING(&Global_54076)) && !IS_ACTOR_RAGDOLL(&Global_54076)) && !IS_ACTOR_REACTING(&Global_54076)) && !IS_ACTOR_FLYING(&Global_54076)) && !IS_ACTOR_ON_LADDER(&Global_54076)) && !IS_WEAPON_DRAWN(&Global_54076)) && !IS_ACTOR_SHOOTING(&Global_54076)) && !IS_ACTOR_RELOADING(&Global_54076)) && !IS_ACTOR_BLINDFIRING(&Global_54076)) && !IS_ACTOR_USING_COVER(&Global_54076)) && !IS_ACTOR_USING_LEDGE(&Global_54076)) && !IS_ACTOR_INSIDE_VEHICLE(&Global_54076)) && !IS_ACTOR_JACKING_VEHICLE(&Global_54076))
		{
			if (HAS_ACTION_TREE_LOADED("clench_rib"))
			{
				if (!ACTOR_HAS_ANIM_SET(&Global_54076, "clench_rib"))
				{
					SET_ANIM_SET_FOR_ACTOR(&Global_54076, "clench_rib", 0);
				}
				SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "clench_rib");
				Function_319(&iLocal_566);
			}
			else
			{
				LOG_ERROR("ACT TREE NOT LOADED: This is a problem");
			}
		}
		else
		{
			Function_284(&iLocal_566, (Function_280(&iLocal_566) - 2,5f));
		}
	}
	return;
}

bool Function_465(int iParam0) //Position: 0x156FB / 87803
{
	return Function_466(2, iParam0);
}

int Function_466(int iParam0, int iParam1) //Position: 0x15707 / 87815
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

bool Function_467(var uParam0, int iParam1) //Position: 0x15734 / 87860
{
	GET_OBJECT_POSITION(&iParam1, &Local_770);
	ESTIMATE_DISTANCE_ALONG_PATH(&uParam0, &Local_770, &fLocal_782, &fLocal_807);
	if (fLocal_806 <= fLocal_782 || VDIST(Local_802, Local_770) >= 1,5f)
	{
		return 1;
	}
	return 0;
}

bool Function_468(var uParam0, int iParam1) //Position: 0x15774 / 87924
{
	GET_OBJECT_POSITION(&iParam1, &Local_770);
	ESTIMATE_DISTANCE_ALONG_PATH(&uParam0, &Local_770, &fLocal_782, &fLocal_807);
	if (fLocal_805 <= fLocal_782 || VDIST(Local_799, Local_770) >= 1,5f)
	{
		return 1;
	}
	return 0;
}

void Function_469(var uParam0) //Position: 0x157B4 / 87988
{
	fLocal_805 = 0.0f;
	fLocal_806 = 0.0f;
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(&uParam0, &Local_799, &Local_802, &fLocal_805, &fLocal_806, &fLocal_807);
	return;
}

void Function_470() //Position: 0x157D7 / 88023
{
	GET_POSITION(&Global_54076, &Local_799);
	GET_POSITION(&bLocal_544, &Local_802);
	return;
}

void Function_471(int iParam0) //Position: 0x157F1 / 88049
{
	if (Function_300(Global_46816[0]))
	{
		if (!iLocal_808)
		{
			switch (iParam0)
			{
				case 0x00000001:
					iLocal_808 = Function_401();
					break;
				
				case 0x00000002:
					iLocal_808 = Function_240();
					break;
				}
		}
	}
	else
	{
		iLocal_808 = 0;
	}
	return;
}

int Function_472() //Position: 0x15836 / 88118
{
	GET_OBJECT_POSITION(&iLocal_4 + 1056[0], &Local_770);
	if (Function_473(StackVal, "$/cutscene/RANCH_01_END/RANCH_01_END", &uLocal_791, Local_770, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool Function_473(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x15895 / 88213
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_476(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_477()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					Function_474();
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
	else if ((!Function_476(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_477()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_476(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_474() //Position: 0x15AFD / 88829
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
			Function_475(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_475(char* cParam0) //Position: 0x15B51 / 88913
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

bool Function_476(var uParam0, struct<2> Param1, float fParam3) //Position: 0x15C7A / 89210
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_274(&uParam0);
		if (VDIST(Function_274(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_477() //Position: 0x15D06 / 89350
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_478(int iParam0) //Position: 0x15D15 / 89365
{
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if ((Global_99472 && iParam0) >= 0)
		{
			SET_TIME_ACCELERATION(0.0f);
		}
	}
	else if ((Global_99472 && iParam0) == 0)
	{
		SET_TIME_ACCELERATION(Global_99471);
	}
	return;
}

void Function_479() //Position: 0x15D48 / 89416
{
	if (iLocal_539 < 5 && iLocal_539 > 105)
	{
		Function_478(32);
		if (IS_VOLUME_VALID(&iLocal_4 + 536[1]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 536[1]))
			{
				Function_425();
				iLocal_792 = 0;
				DESTROY_VOLUME(&iLocal_4 + 536[1]);
			}
		}
		else if (!iLocal_792)
		{
			if (Function_415())
			{
				Function_414();
				iLocal_792 = 1;
			}
		}
		Function_471(1);
		if (!Function_513())
		{
			Function_302(106, "STAGE 02 - COMPLETE");
		}
	}
	switch (iLocal_539)
	{
		case 0x00000000:
			Function_311(0);
			if (IS_VOLUME_VALID(&iLocal_4 + 536[0]))
			{
				Function_512();
				DESTROY_VOLUME(&iLocal_4 + 536[0]);
			}
			Function_511();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_304();
			bLocal_541 = Global_46816[0];
			if (iLocal_590[0] == 0)
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					Function_285(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_303(&Global_54076, &iLocal_4 + 952[0], 1, 1, 1);
				Function_302(1, "STAGE 02 - STREAMING GOAL");
			}
			else
			{
				Function_302(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000001:
			if ((Function_509() && STREAMING_IS_WORLD_LOADED()) && (Function_300(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_508();
				Function_302(2, "STAGE 02 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			if (Function_505(StackVal, StackVal, StackVal, StackVal, StackVal, Local_476, iLocal_538))
			{
				Function_504();
				Function_302(3, "STAGE 02 - CUTSCENE GOAL");
			}
			else
			{
				bLocal_793 = true;
				Function_303(&Global_54076, &iLocal_4 + 952[0], 1, 1, 1);
				Function_303(&bLocal_544, &iLocal_4 + 952[1], 1, 1, 1);
				Function_303(&bLocal_546, &iLocal_4 + 952[2], 1, 1, 1);
				Function_303(&bLocal_548, &iLocal_4 + 952[3], 1, 1, 1);
				Function_498();
				Function_302(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			Function_412(iLocal_538);
			Function_403(StackVal, Function_412(iLocal_538), iLocal_538, Global_46736[2], Function_411(iLocal_538), 0);
			iLocal_540 = Function_402();
			break;
		
		case 0x00000003:
			if (Function_495())
			{
				Function_498();
				Function_302(4, "STAGE 02 - POST-CUTSCENE GOAL");
			}
			break;
		
		case 0x00000004:
			Function_265(1.0f);
			Function_491();
			Function_384(1);
			Function_302(6, "STAGE 02 - OBJ_01-DLG_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_239();
				Function_490();
				Function_365();
				SET_STAT_MESSAGE(STRING_TO_HASH(GET_WEAPON_DISPLAY_NAME(8)), "", 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
				Function_204();
				Function_302(7, "STAGE 02 - OBJ_01-OBJ_01");
			}
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj02_1", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(1);
				Function_302(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 4294967295, 0))
			{
				Function_227(0);
				Function_351(14);
				Function_350(14);
				Function_302(14, "STAGE 02 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 4294967295, 0))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_302(13, "STAGE 02 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_489();
				Function_382();
				Function_204();
				Function_302(16, "STAGE 02 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj02_2", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(0);
				Function_378(1);
				Function_302(22, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000016:
			Function_370(&iLocal_796, &iLocal_797, 1);
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(23, "STAGE 02 - OBJ_02-LOOP_FAIL_01");
			}
			else if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(24, "STAGE 02 - OBJ_02-LOOP_FAIL_02");
			}
			break;
		
		case 0x00000017:
			if (!Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_361(2);
				if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(24, "STAGE 02 - OBJ_02-LOOP_FAIL_02");
				}
				else
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(22, "STAGE 02 - OBJ_02-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000018:
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(23, "STAGE 02 - OBJ_02-LOOP_FAIL_01");
			}
			else if (!Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(22, "STAGE 02 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_239();
			Function_488();
			Function_350(10);
			Function_204();
			Function_302(26, "STAGE 02 - OBJ_03-OBJ_01");
			break;
		
		case 0x0000001A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_434(&Global_54076, &bLocal_546))
				{
					Function_381("Ranch01_obj02_3", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				Function_227(0);
				Function_378(1);
				Function_302(33, "STAGE 02 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000021:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_378(0);
				Function_351(14);
				Function_350(14);
				Function_302(34, "STAGE 02 - OBJ_03-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000022:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_378(1);
				Function_350(10);
				Function_302(33, "STAGE 02 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				if (GET_WEAPON_IN_HAND(&Global_54076) != 4)
				{
					Function_487();
				}
				Function_350(10);
				Function_204();
				Function_302(36, "STAGE 02 - OBJ_04-OBJ_01");
			}
			break;
		
		case 0x00000024:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj02_4", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(0);
				Function_378(0);
				Function_486(1);
				Function_302(37, "STAGE 02 - OBJ_04-HELP_01");
			}
			break;
		
		case 0x00000025:
			if (Function_280(&iLocal_550) <= 2.0f)
			{
				Function_139("Ranch01_obj02_help_1", 10.0f, 1, 0, 2, 1, 0);
				if (GET_PLAYER_COMBATMODE() != 1)
				{
					Function_302(38, "STAGE 02 - OBJ_04-HELP_02A1");
				}
				else
				{
					Function_302(40, "STAGE 02 - OBJ_04-HELP_02B");
				}
			}
			break;
		
		case 0x00000026:
			if (Function_280(&iLocal_550) <= 10,5f)
			{
				Function_139("Ranch01_obj02_help_2a1", 10.0f, 1, 0, 2, 1, 0);
				if (GET_PLAYER_COMBATMODE() == 2)
				{
					Function_302(39, "STAGE 02 - OBJ_04-HELP_02A2");
				}
				else
				{
					Function_302(40, "STAGE 02 - OBJ_04-HELP_02B");
				}
			}
			break;
		
		case 0x00000027:
			if (Function_280(&iLocal_550) <= 10,5f)
			{
				Function_139("Ranch01_obj02_help_2a2", 10.0f, 1, 0, 2, 1, 0);
				Function_302(41, "STAGE 02 - OBJ_04-HELP_03");
			}
			break;
		
		case 0x00000028:
			if (Function_280(&iLocal_550) <= 10,5f)
			{
				if (IS_USING_KEYBOARD_AND_MOUSE())
				{
					Function_139("Ranch01_obj02_help_2b_KBM", 10.0f, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_139("Ranch01_obj02_help_2b", 10.0f, 1, 0, 2, 1, 0);
				}
				Function_302(41, "STAGE 02 - OBJ_04-HELP_03");
			}
			break;
		
		case 0x00000029:
			if (Function_280(&iLocal_550) <= 10,5f)
			{
				Function_139("Ranch01_obj02_help_3", 10.0f, 1, 0, 2, 1, 0);
				Function_302(43, "STAGE 02 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002B:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_486(0);
				Function_351(14);
				Function_350(14);
				Function_302(44, "STAGE 02 - OBJ_04-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000002C:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_486(1);
				Function_350(10);
				Function_302(43, "STAGE 02 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_483();
				Function_382();
				Function_204();
				Function_302(46, "STAGE 02 - OBJ_05-DLG_02");
			}
			break;
		
		case 0x0000002E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!bLocal_815)
				{
					Function_482();
					Function_365();
					Function_302(47, "STAGE 02 - OBJ_05-OBJ_01");
				}
				else if (bLocal_816)
				{
					Function_336();
					Function_382();
					Function_302(53, "STAGE 02 - OBJ_05-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x0000002F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_546)
				{
					Function_381("Ranch01_obj02_5", 7,5f, 1, 2, 0, 0, 0, 0);
					Function_227(1);
				}
				Function_302(53, "STAGE 02 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000035:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_227(0);
				Function_351(14);
				Function_350(14);
				Function_302(54, "STAGE 02 - OBJ_05-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000036:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_302(53, "STAGE 02 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			Function_480();
			iLocal_538 = 2;
			iLocal_590[1] = 1;
			Function_302(0, "STAGE 03 - INITIALIZE");
			break;
	}
	return;
}

void Function_480() //Position: 0x16DE0 / 93664
{
	Function_481();
	Function_261();
	Function_320();
	Function_222(0);
	return;
}

void Function_481() //Position: 0x16DF3 / 93683
{
	bLocal_783 = false;
	while (bLocal_783 <= 7)
	{
		if (IS_OBJECT_VALID(&vLocal_843[bLocal_7839] + 32))
		{
			DESTROY_OBJECT(&vLocal_843[bLocal_7839] + 32);
		}
		if (IS_VOLUME_VALID(&vLocal_843[bLocal_7839] + 24))
		{
			DESTROY_VOLUME(&vLocal_843[bLocal_7839] + 24);
		}
		if (IS_ACTOR_VALID(&vLocal_843[bLocal_7839] + 8))
		{
			RELEASE_ACTOR(&vLocal_843[bLocal_7839] + 8);
		}
		bLocal_783++;
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 488))
	{
		Function_322(&iLocal_4 + 488, 0, 1);
		DESTROY_OBJECT(&iLocal_4 + 488);
	}
	return;
}

void Function_482() //Position: 0x16E8B / 93835
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_backOnHorse", "Ranch01_backOnHorse", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_483() //Position: 0x16EDA / 93914
{
	iLocal_832 = iLocal_832;
	if (iLocal_831 >= 0)
	{
		Function_485();
	}
	else
	{
		Function_484();
		Function_116(100, 1, 0);
	}
	return;
}

void Function_484() //Position: 0x16EFD / 93949
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_scaresAllrabbit", "Ranch01_scaresAllrabbit", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485() //Position: 0x16F54 / 94036
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_killsAllrabbits", "Ranch01_killsAllrabbits", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486(bool bParam0) //Position: 0x16FAB / 94123
{
	if (SQUAD_IS_VALID(&iLocal_4 + 488))
	{
		if (bParam0)
		{
			Function_346(&iLocal_4 + 488, 322, 4294967295, 0.0f, 1.0f, 0x3f800000, 2048, 0);
			Function_345(&iLocal_4 + 488, "Ranch01_rabbit_blip");
		}
		else
		{
			Function_344(&iLocal_4 + 488);
		}
	}
	return;
}

void Function_487() //Position: 0x17005 / 94213
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rifleOut", "Ranch01_rifleOut", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_488() //Position: 0x1704E / 94286
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_rabbits", "Ranch01_rabbits", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_489() //Position: 0x17095 / 94357
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_patrolRanch", "Ranch01_patrolRanch", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_490() //Position: 0x170E4 / 94436
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_leaveHouse", "Ranch01_leaveHouse", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x17131 / 94513
{
	STREAMING_UNLOAD_SCENE();
	STREAMING_SET_POI_LIMIT(1);
	Function_245(&iLocal_790, 6, 0, 4294967295, 4294967295);
	if (bLocal_793)
	{
		Function_494(3.0f);
	}
	if (bLocal_793)
	{
		Function_284(&iLocal_566, (30.0f - 3.0f));
	}
	SET_ACTOR_INVULNERABILITY(&bLocal_544, false);
	if (bLocal_793)
	{
		Function_493();
	}
	SET_ACTOR_INVULNERABILITY(&bLocal_546, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_548, false);
	Function_492(&iLocal_4 + 1104[11]);
	return;
}

void Function_492(int iParam0) //Position: 0x17193 / 94611
{
	if (Function_219(&iParam0))
	{
		Function_218(&bLocal_546, &iLocal_809, 2);
		Function_218(&bLocal_548, &iLocal_811, 2);
	}
	return;
}

void Function_493() //Position: 0x171BD / 94653
{
	ACTOR_POP_NEXT_GAIT(&bLocal_544, 1, 0);
	TASK_CLEAR(&bLocal_544);
	TASK_PRIORITY_SET(&bLocal_544, true);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_544, &iLocal_4 + 1840, 1, 1, 0, 1, false);
	return;
}

void Function_494(int iParam0) //Position: 0x171ED / 94701
{
	ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, iParam0, 0);
	return;
}

bool Function_495() //Position: 0x17204 / 94724
{
	Function_293(&iLocal_526, 1, 0);
	switch (iLocal_526)
	{
		case 0x000003E8:
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH01_CS02_P1/RANCH01_CS02_P1"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				iLocal_526 = 1106;
				return 0;
			}
			Function_289(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			bLocal_793 = false;
			Function_286(&iLocal_4, &iLocal_4 + 952[0], &iLocal_4 + 496[1], 0, 0, 0, 0, 1);
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Function_285(0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1);
				Global_99147 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH01_CS02_P1/RANCH01_CS02_P1", 0, 2, 1, 1, 2);
			}
			Function_283(&iLocal_526 + 4);
			iLocal_526 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_280(&iLocal_526 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iLocal_526 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				iLocal_526 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH01_CS02_P2/RANCH01_CS02_P2"))
				{
					LOG_ERROR("Cutscene file does not exist! No play...");
					iLocal_526 = 1106;
					return 0;
				}
				Function_497(32);
				Function_224();
				Function_223();
				Global_99147 = 1;
				CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH01_CS02_P2/RANCH01_CS02_P2", 0, 2, 1, 2, 2);
				Function_283(&iLocal_526 + 4);
				iLocal_526 = 1005;
			}
			break;
		
		case 0x000003ED:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_280(&iLocal_526 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iLocal_526 = 1105;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				GET_OBJECT_POSITION(&iLocal_4 + 952[4], &Local_770);
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Local_770, 0, 0);
				CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-788,414f, 95,024f, 2409,931f), Vector(-2,979f, 144,991f, 0.0f));
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				iLocal_526 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_526 = 1104;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_303(&Global_54076, &iLocal_4 + 952[0], 1, 1, 0);
				Function_303(&bLocal_544, &iLocal_4 + 952[1], 1, 1, 1);
				Function_303(&bLocal_546, &iLocal_4 + 952[2], 1, 1, 1);
				Function_303(&bLocal_548, &iLocal_4 + 952[3], 1, 1, 1);
				Function_494(3.0f);
				Function_284(&iLocal_566, (30.0f - 3.0f));
				Function_493();
				HUD_ENABLE(1);
			}
			break;
		
		case 0x00000450:
			if (STREAMING_IS_ACTOR_LOADED(false, 4294967295) && (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 496[1]);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 496[1]);
				DESTROY_VOLUME(&iLocal_4 + 496[1]);
				if (bLocal_793)
				{
					Function_267(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
				}
				else
				{
					Function_267(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				}
				iLocal_526 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Global_99147 = 0;
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				bLocal_793 = true;
				Function_496(32);
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_239();
				Function_238();
				Function_224();
				Function_223();
				Function_303(&Global_54076, &iLocal_4 + 952[0], 1, 1, 1);
				Function_303(&bLocal_544, &iLocal_4 + 952[1], 1, 1, 1);
				Function_303(&bLocal_546, &iLocal_4 + 952[2], 1, 1, 1);
				Function_303(&bLocal_548, &iLocal_4 + 952[3], 1, 1, 1);
				iLocal_526 = 1104;
			}
			break;
		
		case 0x00000452:
			bLocal_793 = true;
			Function_496(32);
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_239();
			Function_238();
			Function_224();
			Function_223();
			Function_303(&Global_54076, &iLocal_4 + 952[0], 1, 1, 1);
			Function_303(&bLocal_544, &iLocal_4 + 952[1], 1, 1, 1);
			Function_303(&bLocal_546, &iLocal_4 + 952[2], 1, 1, 1);
			Function_303(&bLocal_548, &iLocal_4 + 952[3], 1, 1, 1);
			iLocal_526 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_496(int iParam0) //Position: 0x17758 / 96088
{
	if ((Global_99472 && iParam0) == 0)
	{
		Function_497(iParam0);
	}
	return;
}

void Function_497(int iParam0) //Position: 0x1776E / 96110
{
	var uVar0;
	
	if (Global_99472 == iParam0)
	{
		return;
	}
	if (!iParam0 & 1 != 0)
	{
		uVar0 = &Global_99473;
	}
	else if (!iParam0 & 2 != 0)
	{
		uVar0 = &Global_99475;
	}
	else if (!iParam0 & 4 != 0)
	{
		uVar0 = &Global_99477;
	}
	else if (!iParam0 & 8 != 0)
	{
		uVar0 = &Global_99479;
	}
	else if (!iParam0 & 16 != 0)
	{
		uVar0 = &Global_99481;
	}
	else if (!iParam0 & 32 != 0)
	{
		uVar0 = &Global_99483;
	}
	else
	{
		LOG_ERROR("SET_TIME_OF_DAY_REGION got an invalid TOD_REGION");
	}
	ADD_TIME(&uVar0, 0, 0, false, 1);
	SET_TIME_OF_DAY(&uVar0);
	return;
}

void Function_498() //Position: 0x17844 / 96324
{
	Function_496(32);
	Function_401();
	Function_503();
	Function_502();
	Function_501();
	Function_500();
	Function_224();
	Function_223();
	Function_499();
	Function_298(0, 0);
	Function_387(&Global_54076, 0x41200000);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_544);
	AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,1f);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[0], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[17]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[18]);
	return;
}

void Function_499() //Position: 0x178C0 / 96448
{
	if (!ACTOR_HAS_WEAPON(&bLocal_544, 8))
	{
		SET_WEAPONENUM_LOCKED(8, 0);
		GIVE_WEAPON_TO_ACTOR(&bLocal_544, 8, 1.0f, 1, 1);
	}
	if (ACTOR_GET_NEXT_EQUIP_SLOT(&bLocal_544) != 5)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(&bLocal_544, 5, 0);
	}
	if (GET_WEAPON_EQUIPPED(&bLocal_544, 5) != 8)
	{
		ACTOR_SET_NEXT_WEAPON(&bLocal_544, 8);
	}
	return;
}

void Function_500() //Position: 0x17910 / 96528
{
	if (!IS_OBJECT_VALID(&uLocal_829))
	{
		uLocal_829 = CREATE_EVENT_TRAP("PlayerKilled", 2, &iLocal_474);
		if (IS_OBJECT_VALID(&uLocal_829))
		{
			EVENT_TRAP_STORE_EVENTS(&uLocal_829, 1);
		}
		else
		{
			LOG_ERROR("Failed to create 'PlayerKilled' event trap!");
		}
	}
	return;
}

void Function_501() //Position: 0x17982 / 96642
{
	if (!IS_OBJECT_VALID(&uLocal_826))
	{
		uLocal_826 = CREATE_EVENT_TRAP("PlayerShoot", 6, &iLocal_474);
		if (IS_OBJECT_VALID(&uLocal_826))
		{
			EVENT_TRAP_ON_PERPETRATOR(&uLocal_826, &Global_54076);
		}
		else
		{
			LOG_ERROR("Failed to create 'PlayerShoot' event trap!");
		}
	}
	return;
}

void Function_502() //Position: 0x179F5 / 96757
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[13]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[13], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[0]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[0], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[0]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[0]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[9]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[9], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[9]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[9]);
	return;
}

void Function_503() //Position: 0x17A99 / 96921
{
	iLocal_601 = 0;
	return;
}

void Function_504() //Position: 0x17AA3 / 96931
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	Function_298(0, 0);
	MEMORY_PREFER_WALKING(&bLocal_544, 0);
	Function_297();
	Function_296();
	Function_295();
	return;
}

bool Function_505(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x17AC9 / 96969
{
	if (Function_506(&iParam0) == iParam6 || Function_410())
	{
		return 1;
	}
	return 0;
}

int Function_506(int iParam0) //Position: 0x17AE8 / 97000
{
	if (Function_507(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

bool Function_507(struct<37> Param0) //Position: 0x17B01 / 97025
{
	return Param0.f_36;
}

void Function_508() //Position: 0x17B0C / 97036
{
	return;
}

bool Function_509() //Position: 0x17B12 / 97042
{
	if (Function_510())
	{
		return 1;
	}
	return 0;
}

bool Function_510() //Position: 0x17B21 / 97057
{
	Function_422(&iLocal_4 + 64, 1078, 2, 0);
	Function_422(&iLocal_4 + 64, 1079, 2, 0);
	if (Function_417(&iLocal_4 + 64))
	{
		return 1;
	}
	return 0;
}

void Function_511() //Position: 0x17B4E / 97102
{
	Function_308(&bLocal_544);
	Function_308(&bLocal_546);
	Function_308(&bLocal_548);
	return;
}

void Function_512() //Position: 0x17B69 / 97129
{
	Function_510();
	return;
}

bool Function_513() //Position: 0x17B73 / 97139
{
	Function_470();
	switch (iLocal_971)
	{
		case 0x00000000:
			iLocal_798 = 0;
			iLocal_796 = 1;
			iLocal_797 = 0;
			iLocal_971 = 1;
			return 1;
			break;
		
		case 0x00000001:
			Function_469(&iLocal_4 + 1840);
			if (Function_432(&iLocal_4 + 1840))
			{
				if (Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0))
				{
					Function_527(&bLocal_548, &iLocal_4 + 1816, 1);
				}
				else
				{
					Function_297();
				}
				iLocal_971 = 2;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			Function_526(&bLocal_546, &iLocal_4 + 1272[12], &iLocal_4 + 744[14]);
			Function_526(&bLocal_548, &iLocal_4 + 1272[3], &iLocal_4 + 744[14]);
			break;
		
		case 0x00000002:
			if ((!Function_354() && GET_MOUNT(&Global_54076) != &bLocal_546) && Function_434(&bLocal_544, &bLocal_548))
			{
				Function_523();
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544, -1.0f, -1.0f, 4, 1, 1);
				MEMORY_PREFER_RIDING(&bLocal_544, false);
				Function_386(1);
				AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,72f);
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_544, &iLocal_4 + 1816, 3, 1, 0, 1, false);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
				Function_296();
				Function_295();
				Function_302(15, "STAGE 02 - OBJ_02-DLG_01");
				iLocal_971 = 3;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			if (GET_MOUNT(&Global_54076) == &bLocal_548)
			{
				Function_527(&bLocal_546, &iLocal_4 + 1816, 1);
			}
			Function_446(1, 0);
			if (Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0))
			{
				if (GET_TASK_STATUS(&bLocal_544, 0) != 1)
				{
					Function_527(&bLocal_548, &iLocal_4 + 1816, 1);
				}
			}
			break;
		
		case 0x00000003:
			Function_469(&iLocal_4 + 1816);
			if (Function_467(&iLocal_4 + 1816, &iLocal_4 + 1272[14]))
			{
				Function_437(&iLocal_4 + 1104[10], 0x40a00000);
				Function_522();
				Function_283(&iLocal_558);
				iLocal_971 = 4;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			Function_442(1, 1, 10.0f, 20.0f, 30.0f, 0);
			break;
		
		case 0x00000004:
			if (Function_280(&iLocal_558) <= 2.0f)
			{
				Function_245(&iLocal_790, 7, 0, 4294967295, 4294967295);
				iLocal_601 = 1;
				Function_318();
				Function_302(25, "STAGE 02 - OBJ_03-DLG_01");
				Function_319(&iLocal_578);
				Function_283(&iLocal_558);
				iLocal_971 = 5;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_456();
			Function_446(1, 1);
			break;
		
		case 0x00000005:
			Function_469(&iLocal_4 + 1816);
			if (Function_432(&iLocal_4 + 1816) || Function_280(&iLocal_558) <= 10.0f)
			{
				if (Function_280(&iLocal_558) <= 10.0f)
				{
					LOG_ERROR("R01_RIDRABBITS_STATE - FOLLOWTO_GARDEN: Hit Failsafe!");
				}
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
				AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,1f);
				GET_OBJECT_POSITION(&iLocal_4 + 1104[4], &Local_770);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1104[4], &Local_776);
				bLocal_783 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 1);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 1872, 1, 1, 0, 1, false);
				TASK_GO_TO_COORD_AND_STAY(StackVal, 0, &Local_770, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_SEQUENCE_PERFORM(&bLocal_544, bLocal_783);
				TASK_SEQUENCE_RELEASE(bLocal_783, 1);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[11], 1, 1);
				iLocal_971 = 7;
				return 1;
			}
			Function_456();
			Function_521();
			Function_519();
			Function_446(0, 1);
			break;
		
		case 0x00000007:
			if (!IS_ACTOR_RIDING(&bLocal_544))
			{
				Function_298(1, 1);
				Function_317();
				MEMORY_PREFER_WALKING(&bLocal_544, 0);
				Function_441(&bLocal_544, &iLocal_4 + 488, 1);
				Function_283(&iLocal_558);
				iLocal_971 = 8;
				return 1;
			}
			Function_456();
			Function_521();
			Function_519();
			break;
		
		case 0x00000008:
			if (Function_521() && !Function_518(&iLocal_4 + 488))
			{
				Function_245(&iLocal_790, 6, 0, 4294967295, 4294967295);
				Function_283(&iLocal_558);
				iLocal_971 = 10;
				return 1;
			}
			if (((iLocal_828 < 0 || GET_MOUNT(&Global_54076) == &bLocal_546) || Function_516(&Global_54076, &iLocal_4 + 488, 1, 1, 0, 3212836864)) || Function_280(&iLocal_558) <= 20.0f)
			{
				Function_245(&iLocal_790, 8, 0, 4294967295, 4294967295);
				if (!IS_WEAPON_DRAWN(&Global_54076))
				{
					ACTOR_SET_NEXT_WEAPON(&Global_54076, 8);
				}
				Function_302(35, "STAGE 02 - OBJ_04-DLG_01");
				iLocal_971 = 9;
				return 1;
			}
			Function_515();
			Function_456();
			Function_514();
			Function_521();
			Function_519();
			Function_528(&bLocal_546, &iLocal_4 + 1272[13], 2, 10.0f, &iLocal_4 + 744[10]);
			Function_528(&bLocal_548, &iLocal_4 + 1272[4], 2, 10.0f, &iLocal_4 + 744[10]);
			break;
		
		case 0x00000009:
			if (Function_521() && !Function_518(&iLocal_4 + 488))
			{
				Function_245(&iLocal_790, 6, 0, 4294967295, 4294967295);
				Function_283(&iLocal_558);
				iLocal_971 = 10;
				return 1;
			}
			Function_515();
			Function_456();
			Function_514();
			Function_521();
			Function_519();
			Function_528(&bLocal_546, &iLocal_4 + 1272[13], 2, 10.0f, &iLocal_4 + 744[10]);
			Function_528(&bLocal_548, &iLocal_4 + 1272[4], 2, 10.0f, &iLocal_4 + 744[10]);
			break;
		
		case 0x0000000A:
			if (Function_280(&iLocal_558) <= 2,5f)
			{
				Function_245(&iLocal_790, 6, 0, 4294967295, 4294967295);
				if (GET_MOUNT(&Global_54076) == &bLocal_546)
				{
					bLocal_815 = true;
					bLocal_816 = false;
				}
				else if (GET_MOUNT(&Global_54076) == &bLocal_548)
				{
					bLocal_815 = true;
					bLocal_816 = true;
				}
				else
				{
					bLocal_815 = false;
					bLocal_816 = false;
				}
				Function_298(0, 1);
				Function_387(&Global_54076, 0x41200000);
				Function_297();
				Function_302(45, "STAGE 02 - OBJ_05-DLG_01");
				iLocal_971 = 11;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_528(&bLocal_546, &iLocal_4 + 1272[13], 2, 10.0f, &iLocal_4 + 744[10]);
			Function_528(&bLocal_548, &iLocal_4 + 1272[4], 2, 10.0f, &iLocal_4 + 744[10]);
			break;
		
		case 0x0000000B:
			if (GET_MOUNT(&Global_54076) != &bLocal_546 && Function_434(&bLocal_544, &bLocal_548))
			{
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544, -1.0f, -1.0f, 4, 1, 1);
				MEMORY_PREFER_RIDING(&bLocal_544, false);
				Function_386(2);
				AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,72f);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
				Function_296();
				Function_295();
				iLocal_971 = 12;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			if (GET_MOUNT(&Global_54076) == &bLocal_548)
			{
				Function_433(&bLocal_546, 1);
			}
			Function_446(1, 0);
			if (Function_528(&bLocal_548, &iLocal_4 + 1272[4], 2, 10.0f, &iLocal_4 + 744[10]))
			{
				if (GET_TASK_STATUS(&bLocal_544, 0) != 1)
				{
					Function_433(&bLocal_548, 1);
				}
			}
			break;
		
		case 0x0000000C:
			iLocal_971 = 13;
			return 1;
			break;
		
		case 0x0000000D:
			return 0;
			break;
	}
	return 1;
}

void Function_514() //Position: 0x182C4 / 99012
{
	if (Function_430(&bLocal_544, &iLocal_4 + 1104[4], 2.0f) || Function_430(&bLocal_544, &iLocal_4 + 1104[5], 2.0f))
	{
		if (!Function_282(&iLocal_582))
		{
			Function_283(&iLocal_582);
		}
		else if (!IS_ACTOR_ALIVE(&uLocal_839) || Function_280(&iLocal_582) <= 30.0f)
		{
			bLocal_783 = false;
			while (bLocal_783 <= 7)
			{
				if (vLocal_843[bLocal_7839] && IS_ACTOR_ALIVE(&vLocal_843[bLocal_7839] + 8))
				{
					uLocal_839 = &vLocal_843[bLocal_7839] + 8;
				}
				bLocal_783++;
			}
			if (IS_ACTOR_ALIVE(&uLocal_839))
			{
				bLocal_783 = TASK_SEQUENCE_OPEN();
				if (!iLocal_841)
				{
					iLocal_841 = 1;
					GET_OBJECT_POSITION(&iLocal_4 + 1104[4], &Local_770);
					TASK_GO_TO_COORD(0, &Local_770, 1);
					TASK_SHOOT_FROM_POSITION(0, &uLocal_839, &Local_770);
				}
				else
				{
					iLocal_841 = 0;
					GET_OBJECT_POSITION(&iLocal_4 + 1104[5], &Local_770);
					TASK_GO_TO_COORD(0, &Local_770, 1);
					TASK_SHOOT_FROM_POSITION(0, &uLocal_839, &Local_770);
				}
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_SEQUENCE_PERFORM(&bLocal_544, bLocal_783);
				TASK_SEQUENCE_RELEASE(bLocal_783, 1);
				Function_319(&iLocal_582);
			}
		}
	}
	return;
}

void Function_515() //Position: 0x183EB / 99307
{
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_826))
	{
		iLocal_828++;
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_826);
	}
	return;
}

int Function_516(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1840A / 99338
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_517(&uParam0, &uVar1, uParam2, &uParam3, &uParam4, &uParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_517(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x18475 / 99445
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (&iParam0 == &iParam1)
	{
		LOG_ERROR("IS_ACTOR_AGGROING_ACTOR got the same actor twice!");
		return 0;
	}
	if (bParam2)
	{
		if (GET_LAST_ATTACKER(&iParam1) == &iParam0)
		{
			CLEAR_LAST_HIT(&iParam1);
			return 1;
		}
	}
	if (&bParam3)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
				{
					return 1;
				}
			}
		}
		if (GET_ACTOR_UNDER_RETICLE(&iParam0, 0) == &iParam1)
		{
			return 1;
		}
	}
	if (&bParam4)
	{
		if (&fParam5 == -1.0f)
		{
			if (ACTORS_IN_RANGE(&iParam0, &iParam1, &fParam5))
			{
				if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
				{
					return 1;
				}
			}
		}
		if (MEMORY_GET_IS_IDENTIFIED(&iParam1, &iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_518(int iParam0) //Position: 0x1857B / 99707
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&iParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_DEAD(&uVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_519() //Position: 0x185D9 / 99801
{
	bLocal_783 = false;
	while (bLocal_783 <= 7)
	{
		if (vLocal_843[bLocal_7839] && IS_ACTOR_ALIVE(&vLocal_843[bLocal_7839] + 8))
		{
			if (IS_VOLUME_VALID(&vLocal_843[bLocal_7839] + 24))
			{
				if (iLocal_971 <= 9 && (((iLocal_828 <= 10 || iLocal_831 <= 3) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 744[9])) || EVENT_TRAP_SUCCESSFUL_TRAP(&vLocal_843[bLocal_7839] + 32)))
				{
					DESTROY_OBJECT(&vLocal_843[bLocal_7839] + 32);
					DESTROY_VOLUME(&vLocal_843[bLocal_7839] + 24);
					GET_OBJECT_POSITION(&iLocal_4 + 1104[15], &Local_770);
					GET_OBJECT_ORIENTATION(&iLocal_4 + 1104[15], &Local_776);
					TASK_CLEAR(&vLocal_843[bLocal_7839] + 8);
					TASK_PRIORITY_SET(&vLocal_843[bLocal_7839] + 8, true);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &vLocal_843[bLocal_7839] + 8, &Local_770, 4);
					return;
				}
				if (!Function_282(&vLocal_843[bLocal_7839] + 40))
				{
					if ((GET_TASK_STATUS(&vLocal_843[bLocal_7839] + 8, 66) != 0 || GET_TASK_STATUS(&vLocal_843[bLocal_7839] + 8, 66) != 4) || Function_430(&vLocal_843[bLocal_7839] + 8, &iLocal_4 + 1544[vLocal_843[bLocal_7839].f_16], 1.0f))
					{
						TASK_CLEAR(&vLocal_843[bLocal_7839] + 8);
						TASK_PRIORITY_SET(&vLocal_843[bLocal_7839] + 8, true);
						TASK_STAND_STILL(&vLocal_843[bLocal_7839] + 8, -1.0f, 0, 0);
						Function_283(&vLocal_843[bLocal_7839] + 40);
					}
				}
				else if (Function_280(&vLocal_843[bLocal_7839] + 40) <= RAND_FLOAT_GAUSSIAN(7.0f, 2,5f))
				{
					Function_520(bLocal_783);
					Function_319(&vLocal_843[bLocal_7839] + 40);
					Function_319(&vLocal_843[bLocal_7839] + 56);
				}
				else if (!Function_282(&vLocal_843[bLocal_7839] + 56))
				{
					if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &vLocal_843[bLocal_7839] + 8)
					{
						Function_283(&vLocal_843[bLocal_7839] + 56);
					}
				}
				else if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &vLocal_843[bLocal_7839] + 8)
				{
					if (Function_280(&vLocal_843[bLocal_7839] + 56) <= 0,25f)
					{
						Function_520(bLocal_783);
						Function_319(&vLocal_843[bLocal_7839] + 40);
						Function_319(&vLocal_843[bLocal_7839] + 56);
					}
				}
				else
				{
					Function_319(&vLocal_843[bLocal_7839] + 56);
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(&vLocal_843[bLocal_7839] + 8, &iLocal_4 + 744[2]))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&vLocal_843[bLocal_7839] + 8)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&vLocal_843[bLocal_7839] + 8));
				}
				if (SQUAD_IS_VALID(SQUAD_GET(&vLocal_843[bLocal_7839] + 8)))
				{
					SQUAD_LEAVE(&vLocal_843[bLocal_7839] + 8);
				}
			}
		}
		bLocal_783++;
	}
	return;
}

void Function_520(int iParam0) //Position: 0x1889B / 100507
{
	vLocal_843[iParam09].f_16 = RAND_INT_RANGE_DIFFERENT(vLocal_843[iParam09].f_16, 0, 19);
	GET_OBJECT_POSITION(&iLocal_4 + 1544[vLocal_843[iParam09].f_16], &Local_770);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 1544[vLocal_843[iParam09].f_16], &Local_776);
	TASK_CLEAR(&vLocal_843[iParam09] + 8);
	TASK_PRIORITY_SET(&vLocal_843[iParam09] + 8, true);
	TASK_GO_TO_COORD_AND_STAY(StackVal, &vLocal_843[iParam09] + 8, &Local_770, 4);
	return;
}

int Function_521() //Position: 0x1891A / 100634
{
	int iVar0;
	
	if (!Function_282(&iLocal_578))
	{
		Function_283(&iLocal_578);
	}
	else if (Function_280(&iLocal_578) <= 0,5f)
	{
		iVar0 = 1;
		bLocal_783 = false;
		while (bLocal_783 <= 7)
		{
			if (!vLocal_843[bLocal_7839])
			{
				if (IS_ACTOR_ALIVE(&vLocal_843[bLocal_7839] + 8))
				{
					iVar0 = 0;
					if (bLocal_838 <= (11 - 1))
					{
						bLocal_838++;
					}
					else
					{
						bLocal_838 = false;
					}
					iLocal_756 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_838, &iLocal_4 + 1712);
					if (IS_OBJECT_VALID(&iLocal_756))
					{
						GET_OBJECT_POSITION(&iLocal_756, &Local_770);
						if (!WOULD_ACTOR_BE_VISIBLE(1078, &Local_770, 3212836864))
						{
							vLocal_843[bLocal_7839] = 1;
							SET_DRAW_ACTOR(&vLocal_843[bLocal_7839] + 8, 1);
							SET_ACTOR_INVULNERABILITY(&vLocal_843[bLocal_7839] + 8, false);
							Function_303(&vLocal_843[bLocal_7839] + 8, &iLocal_756, 1, 1, 1);
							Function_284(&vLocal_843[bLocal_7839] + 40, ((7.0f - 2,5f) - 0,5f));
							Function_319(&iLocal_578);
							return 0;
						}
					}
				}
				vLocal_843[bLocal_7839] = 1;
			}
			bLocal_783++;
		}
		return iVar0;
	}
	return 0;
}

void Function_522() //Position: 0x18A39 / 100921
{
	bLocal_783 = false;
	while (bLocal_783 <= 11)
	{
		iLocal_756 = GET_INDEXED_OBJECT_IN_OBJECTSET(bLocal_783, &iLocal_4 + 1712);
		if (IS_OBJECT_VALID(&iLocal_756))
		{
			GET_OBJECT_POSITION(&iLocal_756, &Local_770);
			if (!WOULD_ACTOR_BE_VISIBLE(1078, &Local_770, 3212836864))
			{
				vLocal_843[09] = 1;
				SET_DRAW_ACTOR(&vLocal_843[09] + 8, 1);
				SET_ACTOR_INVULNERABILITY(&vLocal_843[09] + 8, false);
				Function_303(&vLocal_843[09] + 8, &iLocal_756, 1, 1, 1);
				Function_284(&vLocal_843[09] + 40, ((7.0f - 2,5f) - 0,5f));
			}
		}
		bLocal_783++;
	}
	return;
}

void Function_523() //Position: 0x18AD9 / 101081
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 488))
	{
		Function_524();
	}
	bLocal_783 = false;
	while (bLocal_783 <= SQUAD_GET_SIZE(&iLocal_4 + 488))
	{
		iLocal_766 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 488, bLocal_783);
		if (IS_ACTOR_ALIVE(&iLocal_766))
		{
			vLocal_843[bLocal_7839] = 0;
			*(&vLocal_843[bLocal_7839] + 8) = &iLocal_766;
			vLocal_843[bLocal_7839].f_16 = 0;
			if (IS_VOLUME_VALID(&vLocal_843[bLocal_7839] + 24))
			{
				if (IS_OBJECT_VALID(&vLocal_843[bLocal_7839] + 32))
				{
					DESTROY_OBJECT(&vLocal_843[bLocal_7839] + 32);
				}
				DESTROY_VOLUME(&vLocal_843[bLocal_7839] + 24);
			}
			Function_76();
			Function_76();
			*(&vLocal_843[bLocal_7839] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, &iLocal_474, Function_54(), 3, Function_76(), Function_76(), Vector(1,5f, 2,5f, 1,5f));
			if (IS_VOLUME_VALID(&vLocal_843[bLocal_7839] + 24))
			{
				Function_76();
				Function_76();
				if (IS_ATTACHMENT_VALID(ATTACH_OBJECTS(&vLocal_843[bLocal_7839] + 24, &vLocal_843[bLocal_7839] + 8, "", Function_76(), Function_76(), 4294967295)))
				{
					if (IS_OBJECT_VALID(&vLocal_843[bLocal_7839] + 32))
					{
						DESTROY_OBJECT(&vLocal_843[bLocal_7839] + 32);
					}
					*(&vLocal_843[bLocal_7839] + 32) = CREATE_EVENT_TRAP(Function_54(), 5, &iLocal_474);
					if (IS_OBJECT_VALID(&vLocal_843[bLocal_7839] + 32))
					{
						EVENT_TRAP_ON_PERPETRATOR(&vLocal_843[bLocal_7839] + 32, &Global_54076);
						EVENT_TRAP_ON_VOLUME(&vLocal_843[bLocal_7839] + 32, &vLocal_843[bLocal_7839] + 24);
					}
					else
					{
						LOG_ERROR("Failed to create Rabbit Scare Event Trap!");
					}
				}
				else
				{
					LOG_ERROR("Failed to attach Rabbit Scare Volume!");
				}
			}
			else
			{
				LOG_ERROR("Failed to create Rabbit Scare Volume!");
			}
			Function_319(&vLocal_843[bLocal_7839] + 40);
			Function_319(&vLocal_843[bLocal_7839] + 56);
			ANIMAL_TUNING_SET_ATTRIB_BOOL(&vLocal_843[bLocal_7839] + 8, 11, false);
		}
		bLocal_783++;
	}
	return;
}

void Function_524() //Position: 0x18D18 / 101656
{
	int iVar0;
	
	*(&iLocal_4 + 488) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_54()));
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1078, Vector(-780,4475f, 93,6635f, 2390,685f), Vector(0.0f, -35,82311f, 0.0f));
	Function_525(&iVar0, &iLocal_4 + 488, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1079, Vector(-779,6367f, 93,6635f, 2391,27f), Vector(0.0f, -35,82311f, 0.0f));
	Function_525(&iVar0, &iLocal_4 + 488, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1078, Vector(-778,8259f, 93,6635f, 2391,855f), Vector(0.0f, -35,82311f, 0.0f));
	Function_525(&iVar0, &iLocal_4 + 488, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1079, Vector(-778,015f, 93,6635f, 2392,441f), Vector(0.0f, -35,82311f, 0.0f));
	Function_525(&iVar0, &iLocal_4 + 488, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1078, Vector(-777,2042f, 93,6635f, 2393,026f), Vector(0.0f, -35,82311f, 0.0f));
	Function_525(&iVar0, &iLocal_4 + 488, 1);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1079, Vector(-776,3934f, 93,6635f, 2393,611f), Vector(0.0f, -35,82311f, 0.0f));
	Function_525(&iVar0, &iLocal_4 + 488, 0);
	iVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 1078, Vector(-775,5825f, 93,6635f, 2394,197f), Vector(0.0f, -35,82311f, 0.0f));
	Function_525(&iVar0, &iLocal_4 + 488, 1);
	return;
}

void Function_525(var uParam0, var uParam1, bool bParam2) //Position: 0x18E9C / 102044
{
	SQUAD_JOIN(&uParam0, &uParam1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	SET_ACTOR_FACTION(&uParam0, 21);
	TASK_PRIORITY_SET(&uParam0, true);
	Function_394(&uParam0);
	Function_398(&uParam0, 1, 1, 1, 1, 0, 1);
	SET_ACTOR_HARDLOCK_BIAS(&uParam0, -10000.0f, 0);
	SET_DRAW_ACTOR(&uParam0, 0);
	SET_ACTOR_INVULNERABILITY(&uParam0, true);
	if (bParam2)
	{
		SET_ACTOR_PERMANENT(&uParam0, 1);
	}
	return;
}

int Function_526(bool bParam0, var uParam1, int iParam2) //Position: 0x18EFB / 102139
{
	if (!IS_ACTOR_MOUNTED(&bParam0))
	{
		if (IS_ACTOR_IN_VOLUME(&bParam0, &iParam2))
		{
			GET_OBJECT_POSITION(&uParam1, &Local_770);
			if (!Function_323(&bParam0, 0x3f800000, 0x42960000, 1, 1, 0) && !WOULD_ACTOR_BE_VISIBLE(976, &Local_770, 3212836864))
			{
				Function_303(&bParam0, &uParam1, 1, 1, 1);
			}
			return 0;
		}
	}
	return 1;
}

void Function_527(bool bParam0, var uParam1, int iParam2) //Position: 0x18F57 / 102231
{
	GET_PATH_POINT(&uParam1, false, &Local_770);
	bLocal_783 = TASK_SEQUENCE_OPEN();
	TASK_MOUNT(false, &bParam0, 0, 1, iParam2, 2147483647);
	TASK_GO_TO_COORD(0, &Local_770, iParam2);
	TASK_STAND_STILL(false, -1.0f, 0, 0);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&bLocal_544);
	TASK_PRIORITY_SET(&bLocal_544, true);
	TASK_SEQUENCE_PERFORM(&bLocal_544, bLocal_783);
	TASK_SEQUENCE_RELEASE(bLocal_783, 1);
	return;
}

bool Function_528(bool bParam0, var uParam1, int iParam2, float fParam3, int iParam4) //Position: 0x18FB0 / 102320
{
	bool bVar0;
	
	if (!IS_ACTOR_MOUNTED(&bParam0))
	{
		bVar0 = true;
		if (!Function_430(&bParam0, &uParam1, fParam3))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			if (IS_VOLUME_VALID(&iParam4))
			{
				if (IS_ACTOR_IN_VOLUME(&bParam0, &iParam4))
				{
					bVar0 = false;
				}
			}
		}
		if (bVar0)
		{
			return 1;
		}
		if (GET_TASK_STATUS(&bParam0, 19) == 1 && GET_TASK_STATUS(&bParam0, 66) == 1)
		{
			GET_OBJECT_POSITION(&uParam1, &Local_770);
			GET_OBJECT_ORIENTATION(&uParam1, &Local_776);
			TASK_CLEAR(&bParam0);
			TASK_PRIORITY_SET(&bParam0, true);
			TASK_GO_TO_COORD_AND_STAY(StackVal, &bParam0, &Local_770, iParam2);
		}
	}
	else if (GET_TASK_STATUS(&bParam0, 6) != 1)
	{
		TASK_CLEAR(&bParam0);
		TASK_PRIORITY_SET(&bParam0, true);
		TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
	}
	return 0;
}

void Function_529() //Position: 0x1906B / 102507
{
	if (iLocal_539 < 5 && iLocal_539 > 105)
	{
		Function_478(16);
		if (IS_VOLUME_VALID(&iLocal_4 + 536[0]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 536[0]))
			{
				Function_512();
				iLocal_792 = 0;
				DESTROY_VOLUME(&iLocal_4 + 536[0]);
			}
		}
		else if (!iLocal_792)
		{
			if (Function_509())
			{
				Function_508();
				iLocal_792 = 1;
			}
		}
		else
		{
			Function_598();
		}
		Function_471(1);
		if (!Function_573())
		{
			Function_302(106, "STAGE 01 - COMPLETE");
		}
	}
	switch (iLocal_539)
	{
		case 0x00000000:
			Function_311(0);
			Function_572();
			Function_571();
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(3);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_304();
			bLocal_541 = Global_46816[0];
			if (bLocal_793)
			{
				Function_303(&Global_54076, &iLocal_4 + 912[0], 1, 1, 1);
				Function_303(&bLocal_544, &iLocal_4 + 912[1], 1, 1, 1);
				Function_303(&bLocal_546, &iLocal_4 + 912[2], 1, 1, 1);
			}
			Function_302(1, "STAGE 01 - STREAMING GOAL");
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_300(bLocal_541) || bLocal_541 != 4294967295))
			{
				Function_302(2, "STAGE 01 - POST-STREAMING GOAL");
			}
			break;
		
		case 0x00000002:
			Function_412(iLocal_538);
			Function_403(StackVal, Function_412(iLocal_538), iLocal_538, Global_46736[2], Function_411(iLocal_538), 1);
			iLocal_540 = Function_402();
			Function_565();
			Function_302(5, "STAGE 01 - FADE IN");
			break;
		
		case 0x00000005:
			Function_265(1.0f);
			Function_563();
			Function_384(1);
			Function_302(6, "STAGE 01 - OBJ_01_OBJ_01");
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING() && (Function_280(&iLocal_550) <= 5.0f || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 744[12])))
			{
				Function_239();
				Function_381("Ranch01_obj01_1", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_378(1);
				Function_382();
				Function_204();
				Function_302(7, "STAGE 01 - OBJ_01-HELP_01");
			}
			break;
		
		case 0x00000007:
			if (Function_280(&iLocal_550) <= 2.0f)
			{
				Function_139("Ranch01_obj01_help_1", 10.0f, 1, 0, 2, 1, 0);
				Function_302(8, "STAGE 01 - OBJ_01-HELP_02");
			}
			break;
		
		case 0x00000008:
			if (Function_280(&iLocal_550) <= 10,5f)
			{
				Function_139("help_move_look", 10.0f, 1, 0, 2, 1, 0);
				Function_302(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000D:
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_378(0);
				Function_351(14);
				Function_350(14);
				Function_302(14, "STAGE 01 - OBJ_01-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000000E:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_378(1);
				Function_382();
				Function_302(13, "STAGE 01 - OBJ_01-LOOP_PASS_01");
			}
			break;
		
		case 0x0000000F:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_562(&bLocal_544, &Global_54076, 0x3f000000))
			{
				Function_239();
				Function_559();
				Function_204();
				Function_302(16, "STAGE 01 - OBJ_02-DLG_02");
			}
			break;
		
		case 0x00000010:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_558();
				Function_302(17, "STAGE 01 - OBJ_02-OBJ_01");
			}
			break;
		
		case 0x00000011:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj01_2", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_378(1);
				Function_302(18, "STAGE 01 - OBJ_02-HELP_01");
			}
			break;
		
		case 0x00000012:
			if (Function_280(&iLocal_550) <= 8.0f)
			{
				Function_139("help_poi_focus", 10.0f, 1, 0, 2, 1, 0);
				Function_302(23, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000017:
			if (!Function_557())
			{
				if (!Function_555())
				{
					if (!Function_550())
					{
						Function_545();
					}
				}
			}
			if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_378(1);
				Function_302(24, "STAGE 01 - OBJ_02-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000018:
			if (!Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_378(1);
				Function_302(23, "STAGE 01 - OBJ_02-LOOP_PASS_01");
			}
			break;
		
		case 0x00000019:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_544();
				Function_365();
				Function_204();
				Function_302(26, "STAGE 01 - OBJ_03-OBJ_01");
			}
			break;
		
		case 0x0000001A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_546)
				{
					Function_381("Ranch01_obj01_3", 7,5f, 1, 2, 0, 0, 0, 0);
					Function_378(0);
					Function_227(1);
				}
				Function_302(33, "STAGE 01 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000021:
			if (!Function_557())
			{
				if (!Function_555())
				{
					if (!Function_550())
					{
						Function_545();
					}
				}
			}
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_227(0);
				Function_351(14);
				Function_350(14);
				Function_302(34, "STAGE 01 - OBJ_03-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000022:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_302(33, "STAGE 01 - OBJ_03-LOOP_PASS_01");
			}
			break;
		
		case 0x00000023:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_543();
				Function_382();
				Function_204();
				Function_302(36, "STAGE 01 - OBJ_04-OBJ_01");
			}
			break;
		
		case 0x00000024:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj01_4", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(0);
				Function_378(1);
				Function_302(37, "STAGE 01 - OBJ_04-HELP_01");
			}
			break;
		
		case 0x00000025:
			if (Function_280(&iLocal_550) <= 8.0f)
			{
				Function_139("horse_help_matchspeed", 10.0f, 1, 0, 2, 1, 0);
				Function_302(42, "STAGE 01 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002A:
			if (!Function_557())
			{
				if (!Function_555())
				{
					if (!Function_550())
					{
						if (!Function_540())
						{
							Function_545();
						}
					}
				}
			}
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(43, "STAGE 01 - OBJ_04-LOOP_FAIL_01");
			}
			else if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(44, "STAGE 01 - OBJ_04-LOOP_FAIL_02");
			}
			break;
		
		case 0x0000002B:
			if (!Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_361(2);
				if (Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(44, "STAGE 01 - OBJ_04-LOOP_FAIL_02");
				}
				else
				{
					Function_227(0);
					Function_378(1);
					Function_382();
					Function_302(42, "STAGE 01 - OBJ_04-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x0000002C:
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_378(0);
				Function_227(1);
				Function_365();
				Function_302(43, "STAGE 01 - OBJ_04-LOOP_FAIL_01");
			}
			else if (!Function_362(&iLocal_554, 60.0f, 200.0f, &bLocal_544, "RanchersDaughter_return", "RanchersDaughter_abandoned", &bLocal_599, 1, 0, 0, 325, 1))
			{
				Function_227(0);
				Function_378(1);
				Function_382();
				Function_302(42, "STAGE 01 - OBJ_04-LOOP_PASS_01");
			}
			break;
		
		case 0x0000002D:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_537();
				Function_382();
				iLocal_795 = 0;
				Function_204();
				Function_302(46, "STAGE 01 - OBJ_05-OBJ_01");
			}
			break;
		
		case 0x0000002E:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381("Ranch01_obj01_5", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_378(0);
				Function_330(10, &bLocal_546, 2.0f, 4294967295);
				Function_328();
				Function_204();
				Function_302(47, "STAGE 01 - OBJ_05-HELP_01");
			}
			break;
		
		case 0x0000002F:
			if (iLocal_795 <= 1)
			{
				if (Function_280(&iLocal_550) <= 2.0f)
				{
					Function_139("Ranch01_obj01_help_2", 10.0f, 1, 0, 2, 1, 0);
					iLocal_795++;
					Function_302(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
				}
			}
			else
			{
				Function_302(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000034:
			if (!Function_557())
			{
				if (!Function_555())
				{
					Function_550();
				}
			}
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_229();
				Function_227(1);
				Function_365();
				Function_302(53, "STAGE 01 - OBJ_05-LOOP_FAIL_01");
			}
			else if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_229();
				Function_351(14);
				Function_350(14);
				Function_302(54, "STAGE 01 - OBJ_05-LOOP_FAIL_02");
			}
			break;
		
		case 0x00000035:
			if (!Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_361(384);
				if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
				{
					Function_227(0);
					Function_351(14);
					Function_350(14);
					Function_302(54, "STAGE 01 - OBJ_05-LOOP_FAIL_02");
				}
				else
				{
					Function_227(0);
					Function_330(10, &bLocal_546, 2.0f, 4294967295);
					Function_328();
					Function_302(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
				}
			}
			break;
		
		case 0x00000036:
			if (Function_369(&iLocal_554, 60.0f, &bLocal_546, "Horse_return", "Horse_abandoned", &bLocal_599, 1, 0, 0, 334, 1))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_302(53, "STAGE 01 - OBJ_05-LOOP_FAIL_01");
			}
			else if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_330(10, &bLocal_546, 2.0f, 4294967295);
				Function_328();
				Function_302(52, "STAGE 01 - OBJ_05-LOOP_PASS_01");
			}
			break;
		
		case 0x00000037:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381("Ranch01_obj01_6a", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229();
				Function_226();
				Function_222(1);
				Function_204();
				Function_302(57, "STAGE 01 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000038:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				HUD_CLEAR_OBJECTIVE();
				Function_381("Ranch01_obj01_6b", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_229();
				Function_226();
				Function_227(1);
				Function_365();
				Function_222(1);
				Function_204();
				Function_302(57, "STAGE 01 - OBJ_06-HELP_01");
			}
			break;
		
		case 0x00000039:
			if (iLocal_795 <= 1)
			{
				if (Function_280(&iLocal_550) <= 2.0f)
				{
					Function_139("Ranch01_obj01_help_2", 10.0f, 1, 0, 2, 1, 0);
					iLocal_795++;
					Function_302(63, "STAGE 01 - OBJ_06-LOOP_PASS_01");
				}
			}
			else
			{
				Function_302(63, "STAGE 01 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x0000003F:
			if (!Function_557())
			{
				if (!Function_555())
				{
					Function_550();
				}
			}
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_227(0);
				Function_351(14);
				Function_350(14);
				Function_222(0);
				Function_302(64, "STAGE 01 - OBJ_06-LOOP_FAIL_01");
			}
			break;
		
		case 0x00000040:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_227(1);
				Function_365();
				Function_222(1);
				Function_302(63, "STAGE 01 - OBJ_06-LOOP_PASS_01");
			}
			break;
		
		case 0x00000041:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_239();
				Function_536();
				Function_204();
				Function_302(66, "STAGE 01 - OBJ_07-OBJ_01");
			}
			break;
		
		case 0x00000042:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_381("Ranch01_obj01_7", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_227(0);
				Function_330(2, &Global_54076, 2,5f, 1);
				Function_328();
				Function_302(73, "STAGE 01 - OBJ_07-LOOP_PASS_01");
			}
			break;
		
		case 0x00000049:
			if (!Function_557())
			{
				if (!Function_555())
				{
					if (!Function_550())
					{
						Function_545();
					}
				}
			}
			if (Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_229();
				Function_351(14);
				Function_350(14);
				Function_302(74, "STAGE 01 - OBJ_07-LOOP_FAIL_01");
			}
			break;
		
		case 0x0000004A:
			if (!Function_352(&iLocal_554, Global_46816[0], 0, "MacFarlanesRanch_return", "MacFarlanesRanch_abandoned", &bLocal_599, 1, 0, 0, 330, 1))
			{
				Function_228();
				Function_330(10, &Global_54076, 2,5f, 1);
				Function_328();
				Function_302(73, "STAGE 01 - OBJ_07-LOOP_PASS_01");
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_530();
				Function_384(0);
				iLocal_538 = 1;
				iLocal_590[0] = 1;
				Function_302(0, "STAGE 02 - INITIALIZE");
			}
			break;
	}
	return;
}

void Function_530() //Position: 0x1A5FB / 108027
{
	Function_533();
	Function_532();
	Function_262();
	Function_229();
	Function_378(0);
	Function_227(0);
	Function_226();
	Function_320();
	Function_318();
	Function_222(0);
	Function_445(1);
	Function_444();
	Function_317();
	Function_531(1);
	return;
}

void Function_531(bool bParam0) //Position: 0x1A630 / 108080
{
	if (ACTOR_HAS_ANIM_SET(&bLocal_544, "aiming_point"))
	{
		if (&bParam0)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_544, 1);
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_544, "aiming_point/aimingpointcleanup");
		}
	}
	AI_GOAL_AIM_CLEAR(&bLocal_544);
	return;
}

void Function_532() //Position: 0x1A691 / 108177
{
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[10]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[10]);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	return;
}

void Function_533() //Position: 0x1A6CB / 108235
{
	if (Function_535(Global_53579))
	{
		Function_534();
	}
	Function_169(114688);
	bLocal_787 = true;
	return;
}

void Function_534() //Position: 0x1A6E8 / 108264
{
	GET_OBJECT_POSITION(&iLocal_4 + 1104[1], &Local_770);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 1104[1], &Local_776);
	UNK_0x44986367(StackVal, &Local_776);
	TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
	TRAIN_SET_POSITION_DIRECTION(Global_53579, &Local_770, &Local_776);
	return;
}

bool Function_535(int iParam0) //Position: 0x1A72C / 108332
{
	if (!Function_244(iParam0, "TRAIN_HAS_BEEN_STOLEN"))
	{
		return 0;
	}
	if (!TRAIN_GET_NUM_CARS(iParam0) < 0)
	{
		return 0;
	}
	if (iParam0 == Global_53579)
	{
		return (&Global_53580 + 20)->f_424;
	}
	if (iParam0 == Global_53578)
	{
		return (&Global_53580 + 980)->f_424;
	}
	return 0;
}

void Function_536() //Position: 0x1A789 / 108425
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_ranchGateway", "Ranch01_ranchGateway", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x1A7DA / 108506
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_539();
	}
	else
	{
		Function_538();
	}
	return;
}

void Function_538() //Position: 0x1A7F2 / 108530
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_arrive_v2_AA", "Ranch01_arrive_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_arrive_v2_AB", "Ranch01_arrive_v2_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_539() //Position: 0x1A87A / 108666
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_arrive_v1_AA", "Ranch01_arrive_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_arrive_v1_AB", "Ranch01_arrive_v1_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_540() //Position: 0x1A902 / 108802
{
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "beingBucked"))
		{
			Function_542();
		}
		else
		{
			Function_541();
		}
		iLocal_798 = 1;
		return 1;
	}
	return 0;
}

void Function_541() //Position: 0x1A93B / 108859
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnOffHorse", "Ranch01_johnOffHorse", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_542() //Position: 0x1A98C / 108940
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_thrownOffHorse", "Ranch01_thrownOffHorse", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_543() //Position: 0x1A9E1 / 109025
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_mounted", "Ranch01_mounted", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_544() //Position: 0x1AA28 / 109096
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_horses", "Ranch01_horses", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_545() //Position: 0x1AA6D / 109165
{
	if (bLocal_817)
	{
	}
	else if (bLocal_818)
	{
		if (iLocal_822)
		{
			Function_549();
			iLocal_798 = 1;
			iLocal_822 = 0;
			return 1;
		}
	}
	if (bLocal_819)
	{
		if (iLocal_822)
		{
			Function_548();
			iLocal_798 = 1;
			iLocal_822 = 0;
			return 1;
		}
	}
	if (bLocal_820)
	{
		if (iLocal_822)
		{
			Function_547();
			iLocal_798 = 1;
			iLocal_822 = 0;
			return 1;
		}
	}
	if (bLocal_821)
	{
		if (iLocal_822)
		{
			Function_546();
			iLocal_798 = 1;
			iLocal_822 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_546() //Position: 0x1AAEA / 109290
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_wronDirection", "Ranch01_wronDirection", false, 2, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_547() //Position: 0x1AB3D / 109373
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_tooBehind", "Ranch01_tooBehind", false, 2, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_548() //Position: 0x1AB88 / 109448
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_tooAhead", "Ranch01_tooAhead", false, 2, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_549() //Position: 0x1ABD1 / 109521
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_johnNoHorse", "Ranch01_johnNoHorse", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_550() //Position: 0x1AC20 / 109600
{
	if (Function_554(GET_WEAPON_IN_HAND(&Global_54076)))
	{
		iLocal_766 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 1);
		if (IS_ACTOR_ALIVE(&iLocal_766))
		{
			if (!IS_ACTOR_ANIMAL(&iLocal_766))
			{
				if (!Function_282(&iLocal_562))
				{
					Function_283(&iLocal_562);
				}
				else if (&iLocal_813 != &iLocal_766)
				{
					Function_283(&iLocal_562);
				}
				else if (Function_280(&iLocal_562) <= 1.0f)
				{
					if (&iLocal_813 == &bLocal_544)
					{
						if (MEMORY_GET_IS_VISIBLE(&bLocal_544, &Global_54076))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_553();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_gunOnBonnie", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
							}
							iLocal_798 = 1;
						}
					}
					else if (Function_552(&iLocal_813) == &iLocal_474 && Function_552(&iLocal_813) == &iLocal_4)
					{
						if (MEMORY_GET_IS_VISIBLE(&bLocal_544, &iLocal_813))
						{
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								Function_551();
							}
							else
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_gunOnOther", "", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
							}
							iLocal_798 = 1;
						}
					}
					if (iLocal_798)
					{
						Function_319(&iLocal_562);
						return 1;
					}
				}
				iLocal_813 = &iLocal_766;
				return 0;
			}
		}
	}
	iLocal_813 = "";
	Function_319(&iLocal_562);
	return 0;
}

void Function_551() //Position: 0x1AD6B / 109931
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_gunOnOther", "Ranch01_gunOnOther", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

int Function_552(int iParam0) //Position: 0x1ADB8 / 110008
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 1)
		{
			uVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
		}
		while (!IS_LAYOUTREF_VALID(&uVar0) && IS_OBJECT_VALID(&iParam0))
		{
			iParam0 = GET_OBJECT_OWNER(&iParam0);
			if (GET_OBJECT_TYPE(&iParam0) == 1)
			{
				uVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	return "";
}

void Function_553() //Position: 0x1AE1F / 110111
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_gunOnBonnie", "Ranch01_gunOnBonnie", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_554(bool bParam0) //Position: 0x1AE6E / 110190
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

bool Function_555() //Position: 0x1AEB4 / 110260
{
	if (IS_ACTOR_SHOOTING(&Global_54076))
	{
		if (GET_WEAPON_IN_HAND(&Global_54076) != 21)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_556();
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_shootRandom", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
			iLocal_798 = 1;
			return 1;
		}
	}
	return 0;
}

void Function_556() //Position: 0x1AF11 / 110353
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootRandom", "Ranch01_shootRandom", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_557() //Position: 0x1AF60 / 110432
{
	if (iLocal_798)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(&bLocal_544))
		{
			iLocal_798 = 0;
		}
		return 1;
	}
	return 0;
}

void Function_558() //Position: 0x1AF83 / 110467
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_follow_v1", "Ranch01_follow_v1", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x1AFCE / 110542
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_561();
	}
	else
	{
		Function_560();
	}
	return;
}

void Function_560() //Position: 0x1AFE6 / 110566
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_greet_v2_AA", "Ranch01_greet_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_greet_v2_AB", "Ranch01_greet_v2_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_561() //Position: 0x1B06A / 110698
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_greet_v1_AA", "Ranch01_greet_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_greet_v1_AB", "Ranch01_greet_v1_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_562(var uParam0, int iParam1, float fParam2) //Position: 0x1B0EE / 110830
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	
	if (IS_ACTOR_VALID(&uParam0) && IS_ACTOR_VALID(&iParam1))
	{
		GET_POSITION(&uParam0, &Var0);
		GET_POSITION(&iParam1, &Var2);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		VNORMALIZE(&uVar4);
		GET_ACTOR_AXIS(&uParam0, &uVar6, 2);
		if (VDOT(&uVar6, &uVar4) >= &fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

void Function_563() //Position: 0x1B18D / 110989
{
	Function_245(&iLocal_790, 1, 0, 4294967295, 4294967295);
	Function_564();
	if (bLocal_793)
	{
		Function_494(1.0f);
	}
	if (bLocal_793)
	{
		Function_284(&iLocal_566, (30.0f - 1.0f));
	}
	SET_ACTOR_INVULNERABILITY(&bLocal_544, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_546, false);
	SET_ACTOR_INVULNERABILITY(&bLocal_548, false);
	Function_492(&iLocal_4 + 1104[11]);
	return;
}

void Function_564() //Position: 0x1B1E2 / 111074
{
	GET_OBJECT_POSITION(&iLocal_4 + 1104[1], &Local_770);
	TRAIN_SET_TARGET_SPEED(Global_53579, 10.0f);
	TRAIN_SET_TARGET_POS(Global_53579, &Local_770);
	return;
}

void Function_565() //Position: 0x1B20C / 111116
{
	Function_570();
	Function_401();
	Function_569();
	Function_568();
	Function_567();
	Function_566();
	Function_387(&Global_54076, 0x41200000);
	MEMORY_PREFER_WALKING(&bLocal_544, 0);
	AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,1f);
	Function_297();
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[0], 1, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[17]);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_544, &iLocal_4 + 576[18]);
	return;
}

void Function_566() //Position: 0x1B27C / 111228
{
	if (ACTOR_HAS_WEAPON(&Global_54076, 8))
	{
		SET_WEAPONENUM_LOCKED(8, 1);
		DELETE_WEAPON_FROM_ACTOR(&Global_54076, 8);
	}
	return;
}

void Function_567() //Position: 0x1B29D / 111261
{
	if (GET_CURRENT_ACTOR_ENUM_VARIATION(&Global_54076) != 14)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			ACTOR_DISMOUNT_NOW(&Global_54076);
		}
		SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 14);
	}
	if (Function_111(4))
	{
		Function_225(4, 0);
	}
	if (Function_111(3))
	{
		Function_225(3, 0);
	}
	return;
}

void Function_568() //Position: 0x1B2E1 / 111329
{
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[10]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[10], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[10]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[10]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 576[13]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 576[13], 15);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 576[13]);
	return;
}

void Function_569() //Position: 0x1B353 / 111443
{
	iLocal_601 = 0;
	return;
}

void Function_570() //Position: 0x1B35D / 111453
{
	GET_OBJECT_POSITION(&iLocal_4 + 1104[0], &Local_770);
	GET_OBJECT_ORIENTATION(&iLocal_4 + 1104[0], &Local_776);
	UNK_0x44986367(StackVal, &Local_776);
	TRAIN_SET_TARGET_SPEED(Global_53579, 0.0f);
	TRAIN_SET_POSITION_DIRECTION(Global_53579, &Local_770, &Local_776);
	return;
}

void Function_571() //Position: 0x1B3A1 / 111521
{
	Function_308(&bLocal_544);
	Function_308(&bLocal_546);
	return;
}

void Function_572() //Position: 0x1B3B5 / 111541
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	return;
}

bool Function_573() //Position: 0x1B3C5 / 111557
{
	Function_597();
	Function_470();
	switch (iLocal_842)
	{
		case 0x00000000:
			iLocal_798 = 0;
			iLocal_796 = 0;
			iLocal_797 = 4294967295;
			Function_445(0);
			Function_444();
			iLocal_842 = 1;
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 744[11]))
			{
				Function_387(&Global_54076, 0x41200000);
				Function_596(1);
				Function_302(15, "STAGE 01 - OBJ_02-DLG_01");
				iLocal_842 = 2;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_595();
			Function_528(&bLocal_546, &iLocal_4 + 1272[12], 2, 5.0f, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			Function_526(&bLocal_546, &iLocal_4 + 1272[12], &iLocal_4 + 744[14]);
			Function_526(&bLocal_548, &iLocal_4 + 1272[3], &iLocal_4 + 744[14]);
			break;
		
		case 0x00000002:
			if (iLocal_539 > 18)
			{
				Function_386(1);
				SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_544, false);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 43, 0);
				AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 48, 0);
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_544, &iLocal_4 + 1832, 3, 1, 0, 1, false);
				iLocal_842 = 3;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			if (IS_VOLUME_VALID(&iLocal_4 + 744[6]))
			{
				if (!IS_ACTOR_IN_VOLUME(&bLocal_544, &iLocal_4 + 744[6]))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
					DESTROY_VOLUME(&iLocal_4 + 744[6]);
				}
			}
			Function_528(&bLocal_546, &iLocal_4 + 1272[12], 2, 5.0f, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			break;
		
		case 0x00000003:
			Function_469(&iLocal_4 + 1832);
			if (Function_467(&iLocal_4 + 1832, &iLocal_4 + 1272[16]))
			{
				Function_592();
				Function_591(16, "Ranch01_stockade_con");
				Function_445(1);
				Function_444();
				Function_590(1);
				Function_386(1);
				if (IS_VOLUME_VALID(&iLocal_4 + 744[6]))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
					DESTROY_VOLUME(&iLocal_4 + 744[6]);
				}
				iLocal_842 = 4;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			if (IS_VOLUME_VALID(&iLocal_4 + 744[6]))
			{
				if (!IS_ACTOR_IN_VOLUME(&bLocal_544, &iLocal_4 + 744[6]))
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
					DESTROY_VOLUME(&iLocal_4 + 744[6]);
				}
			}
			Function_442(1, 1, 5.0f, 10.0f, 15.0f, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			break;
		
		case 0x00000004:
			Function_469(&iLocal_4 + 1832);
			if (Function_432(&iLocal_4 + 1832))
			{
				if (GET_MOUNT(&Global_54076) != &bLocal_546 || GET_MOUNT(&Global_54076) != &bLocal_548)
				{
					bLocal_815 = true;
				}
				else
				{
					bLocal_815 = false;
				}
				Function_387(&Global_54076, 0x41200000);
				Function_531(1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
				if (Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0))
				{
					Function_527(&bLocal_548, &iLocal_4 + 1856, 1);
				}
				else
				{
					Function_297();
				}
				if (!bLocal_815)
				{
					Function_302(25, "STAGE 01 - OBJ_03-DLG_01");
				}
				else
				{
					Function_302(35, "STAGE 01 - OBJ_04-DLG_01");
				}
				Function_283(&iLocal_558);
				iLocal_842 = 5;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_588(&iLocal_4 + 1104[16], 2,5f, 1, 1, 1);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			break;
		
		case 0x00000005:
			if (GET_MOUNT(&Global_54076) != &bLocal_546 && Function_434(&bLocal_544, &bLocal_548))
			{
				Function_245(&iLocal_790, 3, 0, 4294967295, 4294967295);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544, -1.0f, -1.0f, 4, 1, 1);
				Function_445(1);
				Function_444();
				Function_387(&Global_54076, 0x41200000);
				Function_531(1);
				MEMORY_PREFER_RIDING(&bLocal_544, false);
				AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,72f);
				Function_296();
				Function_295();
				if (!bLocal_815)
				{
					Function_302(35, "STAGE 01 - OBJ_04-DLG_01");
				}
				iLocal_842 = 6;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			if (GET_MOUNT(&Global_54076) == &bLocal_548)
			{
				Function_527(&bLocal_546, &iLocal_4 + 1856, 1);
			}
			Function_446(1, 0);
			if (Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0))
			{
				if (GET_TASK_STATUS(&bLocal_544, 0) != 1)
				{
					Function_527(&bLocal_548, &iLocal_4 + 1856, 1);
				}
			}
			if (Function_434(&bLocal_544, &bLocal_548))
			{
				if (Function_280(&iLocal_558) <= 10.0f)
				{
					Function_442(0, 0, 5.0f, 10.0f, 15.0f, 1);
				}
			}
			break;
		
		case 0x00000006:
			Function_469(&iLocal_4 + 1856);
			if (Function_467(&iLocal_4 + 1856, &iLocal_4 + 1272[17]))
			{
				Function_585();
				Function_591(17, "Ranch01_store_con");
				Function_445(1);
				Function_444();
				Function_590(1);
				Function_386(1);
				bLocal_825 = false;
				iLocal_842 = 7;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			if (Function_434(&bLocal_544, &bLocal_548))
			{
				if (GET_TASK_STATUS(&bLocal_544, 6) == 1)
				{
					Function_386(1);
					TASK_CLEAR(&bLocal_544);
					TASK_PRIORITY_SET(&bLocal_544, true);
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_544, &iLocal_4 + 1856, 3, 1, 0, 1, false);
				}
				else if (GET_TASK_STATUS(&bLocal_544, 43) == 1)
				{
					Function_442(1, 1, 10.0f, 20.0f, 30.0f, 1);
				}
			}
			break;
		
		case 0x00000007:
			Function_469(&iLocal_4 + 1856);
			if (Function_467(&iLocal_4 + 1856, &iLocal_4 + 1272[5]))
			{
				Function_582();
				Function_591(9, "Ranch01_corral_con");
				Function_445(1);
				Function_444();
				Function_590(1);
				Function_386(2);
				bLocal_825 = false;
				iLocal_842 = 8;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			Function_581(&iLocal_4 + 1856, &iLocal_4 + 1272[18]);
			Function_580(&iLocal_4 + 1856, &iLocal_4 + 1272[7], 2);
			if (!bLocal_825)
			{
				Function_442(1, 1, 10.0f, 20.0f, 30.0f, 1);
			}
			else
			{
				Function_442(2, 2, 10.0f, 20.0f, 30.0f, 1);
			}
			Function_588(&iLocal_4 + 1104[17], 2,5f, 1, 1, 1);
			break;
		
		case 0x00000008:
			Function_469(&iLocal_4 + 1856);
			if (Function_467(&iLocal_4 + 1856, &iLocal_4 + 1272[20]))
			{
				Function_577();
				Function_591(18, "Ranch01_trainstation_con");
				Function_445(1);
				Function_444();
				Function_590(1);
				Function_386(4);
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_544, &iLocal_4 + 1864, 3, 1, 0, 1, false);
				iLocal_842 = 9;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			Function_581(&iLocal_4 + 1856, &iLocal_4 + 1272[6]);
			Function_580(&iLocal_4 + 1856, &iLocal_4 + 1272[22], 2);
			if (!bLocal_825)
			{
				Function_442(2, 2, 10.0f, 20.0f, 30.0f, 1);
			}
			else
			{
				Function_442(4, 4, 10.0f, 20.0f, 30.0f, 1);
			}
			Function_588(&iLocal_4 + 1104[9], 2,5f, 1, 1, 1);
			break;
		
		case 0x00000009:
			Function_469(&iLocal_4 + 1864);
			if (Function_467(&iLocal_4 + 1864, &iLocal_4 + 1272[0]))
			{
				Function_574();
				Function_591(2, "Ranch01_barn_con");
				Function_445(1);
				Function_444();
				Function_590(1);
				Function_386(4);
				iLocal_842 = 10;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			Function_581(&iLocal_4 + 1864, &iLocal_4 + 1272[21]);
			Function_442(4, 4, 10.0f, 20.0f, 30.0f, 1);
			Function_588(&iLocal_4 + 1104[18], 2,5f, 1, 1, 1);
			break;
		
		case 0x0000000A:
			Function_469(&iLocal_4 + 1864);
			if (Function_467(&iLocal_4 + 1864, &iLocal_4 + 1272[19]))
			{
				Function_245(&iLocal_790, 1, 0, 4294967295, 4294967295);
				Function_445(1);
				Function_444();
				Function_387(&Global_54076, 0x41200000);
				Function_531(1);
				Function_386(1);
				Function_302(45, "STAGE 01 - OBJ_05-DLG_01");
				iLocal_842 = 11;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			Function_581(&iLocal_4 + 1864, &iLocal_4 + 1272[1]);
			Function_442(4, 4, 10.0f, 20.0f, 30.0f, 1);
			Function_588(&iLocal_4 + 1104[2], 2,5f, 1, 1, 1);
			break;
		
		case 0x0000000B:
			Function_469(&iLocal_4 + 1864);
			if (Function_432(&iLocal_4 + 1864))
			{
				Function_318();
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_548, -1.0f, -1.0f, 4, 1, 1);
				Function_387(&Global_54076, 0x41200000);
				Function_531(1);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
				GET_OBJECT_POSITION(&iLocal_4 + 1104[7], &Local_770);
				bLocal_783 = TASK_SEQUENCE_OPEN();
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(0, &Local_770, 1);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&bLocal_544);
				TASK_PRIORITY_SET(&bLocal_544, true);
				TASK_SEQUENCE_PERFORM(&bLocal_544, bLocal_783);
				TASK_SEQUENCE_RELEASE(bLocal_783, 1);
				iLocal_842 = 12;
				return 1;
			}
			Function_464(30.0f, 5.0f);
			Function_446(1, 1);
			break;
		
		case 0x0000000C:
			if (IS_OBJECT_VALID(&iLocal_758))
			{
				if (GATEWAY_UPDATE(&iLocal_758))
				{
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_548);
					Function_302(55, "STAGE 01 - OBJ_06-OBJ_01A");
					iLocal_842 = 13;
					return 1;
				}
			}
			Function_446(1, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			break;
		
		case 0x0000000D:
			if (Function_430(&Global_54076, &iLocal_4 + 1272[10], 2.0f))
			{
				iLocal_842 = 14;
				return 1;
			}
			Function_528(&bLocal_546, &iLocal_4 + 1272[12], 2, 5.0f, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			break;
		
		case 0x0000000E:
			if (!Function_434(&Global_54076, &bLocal_546))
			{
				Function_219(&iLocal_4 + 1104[11]);
				if (Function_428(&bLocal_546, &iLocal_809) || Function_428(&bLocal_546, &iLocal_811))
				{
					Function_445(1);
					Function_444();
					Function_387(&Global_54076, 0x41200000);
					Function_531(1);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
					SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_544, true);
					AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 43, 1);
					AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 48, 1);
					Function_302(65, "STAGE 01 - OBJ_07-DLG_01");
					Function_283(&iLocal_558);
					iLocal_842 = 15;
					return 1;
				}
				if (!Function_430(&Global_54076, &iLocal_4 + 1272[10], 5.0f))
				{
					Function_302(56, "STAGE 01 - OBJ_06-OBJ_01B");
					iLocal_842 = 13;
					return 1;
				}
			}
			if (!Function_430(&bLocal_546, &iLocal_4 + 1272[10], 5.0f))
			{
				Function_302(46, "STAGE 01 - OBJ_05-OBJ_01");
				iLocal_842 = 12;
				return 1;
			}
			Function_528(&bLocal_546, &iLocal_4 + 1272[12], 2, 5.0f, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			break;
		
		case 0x0000000F:
			if (IS_OBJECT_VALID(&iLocal_758))
			{
				if (GATEWAY_UPDATE(&iLocal_758))
				{
					Function_229();
					iLocal_842 = 16;
					return 1;
				}
			}
			if (Function_280(&iLocal_558) <= 10.0f)
			{
				Function_442(0, 0, 5.0f, 10.0f, 15.0f, 0);
			}
			Function_528(&bLocal_546, &iLocal_4 + 1272[12], 2, 5.0f, 0);
			Function_528(&bLocal_548, &iLocal_4 + 1272[3], 2, 5.0f, 0);
			break;
		
		case 0x00000010:
			return 0;
			break;
	}
	return 1;
}

void Function_574() //Position: 0x1BFCA / 114634
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_576();
	}
	else
	{
		Function_575();
	}
	return;
}

void Function_575() //Position: 0x1BFE2 / 114658
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_barn_v2_AA", "Ranch01_barn_v2_AA", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_576() //Position: 0x1C03C / 114748
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_barn_v1_AA", "Ranch01_barn_v1_AA", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_577() //Position: 0x1C089 / 114825
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_579();
	}
	else
	{
		Function_578();
	}
	return;
}

void Function_578() //Position: 0x1C0A1 / 114849
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v2_AA", "Ranch01_trainStation_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_trainStation_v2_AB", "Ranch01_trainStation_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v2_AC", "Ranch01_trainStation_v2_AC", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_579() //Position: 0x1C184 / 115076
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v1_AA1", "Ranch01_trainStation_v1_AA1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v1_AA2", "Ranch01_trainStation_v1_AA2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_trainStation_v1_AB", "Ranch01_trainStation_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_trainStation_v1_AC", "Ranch01_trainStation_v1_AC", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_580(var uParam0, int iParam1, bool bParam2) //Position: 0x1C2AE / 115374
{
	if (!bLocal_825)
	{
		if (Function_467(&uParam0, &iParam1))
		{
			bLocal_825 = true;
			Function_386(bParam2);
		}
	}
	return;
}

void Function_581(var uParam0, var uParam1) //Position: 0x1C2D0 / 115408
{
	if (!iLocal_823)
	{
		if (Function_468(&uParam0, &uParam1))
		{
			Function_382();
		}
	}
	return;
}

void Function_582() //Position: 0x1C2EC / 115436
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_584();
	}
	else
	{
		Function_583();
	}
	return;
}

void Function_583() //Position: 0x1C304 / 115460
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v2_AA", "Ranch01_corral_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v2_AB", "Ranch01_corral_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v2_AC", "Ranch01_corral_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v2_AD", "Ranch01_corral_v2_AD", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_584() //Position: 0x1C3FA / 115706
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v1_AA", "Ranch01_corral_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v1_AB", "Ranch01_corral_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v1_AC", "Ranch01_corral_v1_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_corral_v1_AD", "Ranch01_corral_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_corral_v1_AE", "Ranch01_corral_v1_AE", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_585() //Position: 0x1C527 / 116007
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_587();
	}
	else
	{
		Function_586();
	}
	return;
}

void Function_586() //Position: 0x1C53F / 116031
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_generalStore_v2_AA", "Ranch01_generalStore_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_generalStore_v2_AB", "Ranch01_generalStore_v2_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_587() //Position: 0x1C5DF / 116191
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_generalStore_v1_AA", "Ranch01_generalStore_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_generalStore_v1_AB", "Ranch01_generalStore_v1_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_588(var uParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1C67F / 116351
{
	if (bLocal_824)
	{
		if (!Function_282(&iLocal_574))
		{
			if (bParam2)
			{
				if (GET_OBJECT_TYPE(&uParam0) == 8)
				{
					Function_437(&uParam0, fParam1);
				}
				else if (GET_OBJECT_TYPE(&uParam0) == 15)
				{
					iLocal_766 = GET_ACTOR_FROM_OBJECT(&uParam0);
					if (IS_ACTOR_ALIVE(&iLocal_766))
					{
						Function_387(&iLocal_766, 0x41200000);
					}
				}
			}
			if (bParam3)
			{
				Function_589(&uParam0);
			}
			Function_283(&iLocal_574);
		}
		else if (Function_280(&iLocal_574) <= fParam1)
		{
			if (bParam4)
			{
				Function_387(&Global_54076, 0x41200000);
			}
			else
			{
				Function_317();
			}
			Function_531(0);
			Function_590(0);
		}
	}
}

void Function_589(int iParam0) //Position: 0x1C71C / 116508
{
	if (!ACTOR_HAS_ANIM_SET(&bLocal_544, "aiming_point"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&bLocal_544, 1);
		SET_ANIM_SET_FOR_ACTOR(&bLocal_544, "aiming_point", 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(&bLocal_544, "aiming_point");
	AI_GOAL_AIM_AT_OBJECT(&bLocal_544, &iParam0, 0);
	return;
}

void Function_590(int iParam0) //Position: 0x1C77E / 116606
{
	bLocal_824 = iParam0;
	Function_319(&iLocal_574);
	return;
}

void Function_591(int iParam0, int iParam1) //Position: 0x1C78F / 116623
{
	iLocal_823 = 0;
	Function_76();
	Function_329(StackVal, &iLocal_4 + 1104[iParam0], Function_76(), 50.0f, 75.0f);
	SET_CAMERA_FOCUS_PROMPT_TEXT(&uLocal_760, &iParam1);
	SET_CAMERA_FOCUS_PROMPT_ENABLED(&uLocal_760, 1);
	return;
}

void Function_592() //Position: 0x1C7C5 / 116677
{
	if ((iLocal_540 % 2) == 0)
	{
		Function_594();
	}
	else
	{
		Function_593();
	}
	return;
}

void Function_593() //Position: 0x1C7DD / 116701
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_walk_v2_AA", "Ranch01_walk_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_walk_v2_AB", "Ranch01_walk_v2_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_594() //Position: 0x1C85D / 116829
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_walk_v1_AA", "Ranch01_walk_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch01_walk_v1_AB", "Ranch01_walk_v1_AB", true, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_595() //Position: 0x1C8DD / 116957
{
	if (GET_TASK_STATUS(&bLocal_544, 19) == 1 || GET_CURRENT_GRINGO(&bLocal_544) == GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1768))
	{
		if (!Function_323(&bLocal_544, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			SNAP_ACTOR_TO_GRINGO(&bLocal_544, &iLocal_4 + 1768, "UseCase1", true, 0, 0);
		}
		TASK_CLEAR(&bLocal_544);
		TASK_PRIORITY_SET(&bLocal_544, true);
		TASK_USE_GRINGO(&bLocal_544, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1768), "UseCase1", 4294967295, 1);
	}
	return;
}

void Function_596(int iParam0) //Position: 0x1C963 / 117091
{
	TASK_CLEAR(&bLocal_544);
	TASK_PRIORITY_SET(&bLocal_544, true);
	TASK_FACE_ACTOR(&bLocal_544, &Global_54076, iParam0, -1.0f);
	return;
}

void Function_597() //Position: 0x1C986 / 117126
{
	if (!bLocal_787)
	{
		TRAIN_GET_POSITION(Global_53579, &Local_770);
		GET_OBJECT_POSITION(&iLocal_4 + 1104[1], &Local_773);
		if (VDIST(Local_770, Local_773) >= 10.0f)
		{
			Function_533();
		}
	}
	return;
}

int Function_598() //Position: 0x1C9C5 / 117189
{
	GET_OBJECT_POSITION(&iLocal_4 + 952[0], &Local_770);
	if (Function_473(StackVal, "$/cutscene/RANCH01_CS02_P1/RANCH01_CS02_P1", &uLocal_791, Local_770, 0, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1))
	{
		return 1;
	}
	return 0;
}

void Function_599() //Position: 0x1CA2A / 117290
{
	switch (iLocal_539)
	{
		case 0x00000006:
			Function_656(&Local_476, 1);
			iLocal_474 = CREATE_LAYOUT("Ranch01_DynamicLayout");
			Function_655();
			Function_304();
			Function_187(1, 0, 1);
			iLocal_539 = 7;
			break;
		
		case 0x00000007:
			if (Function_636())
			{
				Function_631();
				iLocal_539 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_625())
			{
				iLocal_539 = 9;
			}
			break;
		
		case 0x00000009:
			Unknown_Function();
			if (StackVal)
			{
				iLocal_539 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				iLocal_542 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			Function_612();
			Function_611(&iLocal_550);
			Function_611(&iLocal_554);
			iLocal_538 = 0;
			iLocal_539 = 0;
			Function_609(&Local_476, &iLocal_538, &iLocal_539);
			Function_608(StackVal, StackVal, StackVal, StackVal, Function_624(), Local_476);
			switch (iLocal_538)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					Function_607();
					break;
				
				case 0x00000002:
					Function_606();
					break;
				
				case 0x00000065:
					Function_600();
					break;
			}
			break;
	}
	return;
}

void Function_600() //Position: 0x1CB35 / 117557
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	Function_496(32);
	Function_533();
	Function_235();
	Function_605();
	Function_604();
	Function_603();
	Function_601();
	Function_260();
	Function_232();
	Function_231();
	Function_229();
	Function_228();
	Function_227(0);
	Function_226();
	Function_320();
	Function_318();
	Function_224();
	Function_223();
	Function_222(1);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_548);
	Function_298(0, 0);
	Function_445(1);
	Function_444();
	Function_317();
	Function_531(1);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_544, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 43, 1);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 48, 1);
	AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,72f);
	SET_ACTOR_INVULNERABILITY(&bLocal_544, true);
	Function_297();
	SET_ACTOR_INVULNERABILITY(&bLocal_546, true);
	Function_296();
	SET_ACTOR_INVULNERABILITY(&bLocal_548, true);
	Function_295();
	return;
}

void Function_601() //Position: 0x1CBFC / 117756
{
	if (SQUAD_IS_VALID(&iLocal_4 + 480))
	{
		Function_602(&iLocal_4 + 480);
		DESTROY_OBJECT(&iLocal_4 + 480);
	}
	return;
}

void Function_602(bool bParam0) //Position: 0x1CC1F / 117791
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_603() //Position: 0x1CC6D / 117869
{
	bLocal_783 = false;
	while (bLocal_783 <= 10)
	{
		if (IS_ACTOR_VALID(&(Local_1034[bLocal_7834])))
		{
			DESTROY_ACTOR(&(Local_1034[bLocal_7834]));
		}
		bLocal_783++;
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 360))
	{
		Function_602(&iLocal_4 + 360);
		DESTROY_OBJECT(&iLocal_4 + 360);
	}
	return;
}

void Function_604() //Position: 0x1CCC2 / 117954
{
	bLocal_783 = false;
	while (bLocal_783 <= 6)
	{
		if (IS_ACTOR_VALID(&(Local_972[bLocal_7835])))
		{
			DESTROY_ACTOR(&(Local_972[bLocal_7835]));
		}
		bLocal_783++;
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 472))
	{
		Function_602(&iLocal_4 + 472);
		DESTROY_OBJECT(&iLocal_4 + 472);
	}
	return;
}

void Function_605() //Position: 0x1CD16 / 118038
{
	bLocal_783 = false;
	while (bLocal_783 <= 7)
	{
		if (IS_OBJECT_VALID(&vLocal_843[bLocal_7839] + 32))
		{
			DESTROY_OBJECT(&vLocal_843[bLocal_7839] + 32);
		}
		if (IS_VOLUME_VALID(&vLocal_843[bLocal_7839] + 24))
		{
			DESTROY_VOLUME(&vLocal_843[bLocal_7839] + 24);
		}
		if (IS_ACTOR_VALID(&vLocal_843[bLocal_7839] + 8))
		{
			DESTROY_ACTOR(&vLocal_843[bLocal_7839] + 8);
		}
		bLocal_783++;
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 488))
	{
		Function_602(&iLocal_4 + 488);
		DESTROY_OBJECT(&iLocal_4 + 488);
	}
	return;
}

void Function_606() //Position: 0x1CDAC / 118188
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	Function_496(32);
	Function_533();
	Function_236();
	Function_502();
	Function_605();
	Function_261();
	Function_501();
	Function_500();
	Function_229();
	Function_228();
	Function_378(0);
	Function_227(0);
	Function_226();
	Function_320();
	Function_318();
	Function_224();
	Function_223();
	Function_222(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_548);
	Function_499();
	Function_298(0, 0);
	Function_445(1);
	Function_444();
	Function_317();
	Function_531(1);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_544);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_544, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 43, 1);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 48, 1);
	AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,72f);
	SET_ACTOR_INVULNERABILITY(&bLocal_544, true);
	Function_297();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
	SET_ACTOR_INVULNERABILITY(&bLocal_546, true);
	Function_296();
	SET_ACTOR_INVULNERABILITY(&bLocal_548, true);
	Function_295();
	return;
}

void Function_607() //Position: 0x1CE7B / 118395
{
	Function_245(&iLocal_790, 0, 0, 4294967295, 4294967295);
	Function_533();
	Function_237();
	Function_262();
	Function_229();
	Function_228();
	Function_378(0);
	Function_227(0);
	Function_226();
	Function_320();
	Function_318();
	if (Function_505(StackVal, StackVal, StackVal, StackVal, StackVal, Local_476, iLocal_538))
	{
		Function_567();
	}
	else
	{
		Function_224();
		Function_223();
	}
	Function_222(0);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_544);
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_548);
	Function_445(1);
	Function_444();
	Function_317();
	Function_531(1);
	CLEAR_ACTOR_MAX_SPEED(&bLocal_544);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_544);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_544, true);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 43, 1);
	AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 48, 1);
	AI_SET_NAV_ACTOR_WIDTH(&bLocal_544, 0,72f);
	SET_ACTOR_INVULNERABILITY(&bLocal_544, true);
	Function_297();
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_544);
	SET_ACTOR_INVULNERABILITY(&bLocal_546, true);
	Function_296();
	SET_ACTOR_INVULNERABILITY(&bLocal_548, true);
	Function_295();
	return;
}

void Function_608(struct<41> Param0) //Position: 0x1CF45 / 118597
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_538 = 0;
			break;
		
		case 0x00000002:
			iLocal_538 = 1;
			break;
		
		case 0x00000003:
			iLocal_538 = 101;
			break;
	}
}

void Function_609(var uParam0, var uParam1, int iParam2) //Position: 0x1CF7E / 118654
{
	if (Function_507(&uParam0))
	{
		uParam1 = Function_506(&uParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_610();
	}
	return;
}

void Function_610() //Position: 0x1CFBA / 118714
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

void Function_611(int iParam0) //Position: 0x1D00B / 118795
{
	if (!Function_282(&iParam0))
	{
		Function_284(&iParam0, 0.0f);
	}
	return;
}

void Function_612() //Position: 0x1D022 / 118818
{
	iLocal_790 = 0;
	Function_623("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_621(0, 0);
	Function_164(Global_46816[0]);
	Function_620();
	Function_618();
	Function_358(0);
	DISABLE_PLAYER_GRINGO_USE(0, 1);
	Function_222(0);
	DECOR_SET_BOOL(&Global_54076, "BlockHitchHelp", true);
	Function_202(0);
	Function_616(&uLocal_602, &iLocal_474);
	Function_447(&(Local_656[015]), &bLocal_544, "RanchersDaughter", 1, 0x5f5e100, 1);
	Function_447(&(Local_656[115]), &bLocal_546, "Horse", 0, 0x5f5e100, 1);
	Function_613(&(Local_656[215]), &iLocal_474, 0x5f5e100);
	return;
}

int Function_613(struct<69> Param0) //Position: 0x1D0E9 / 119017
{
	if (!IS_LAYOUTREF_VALID(&uParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Layout invalid!");
		return 0;
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		if (GET_OBJECT_TYPE(&Param0) == 8)
		{
			if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&Param0), "nMFT_Dummy"))
			{
				DESTROY_OBJECT(&Param0);
			}
		}
	}
	Function_76();
	Function_76();
	Param0 = CREATE_POINT_IN_LAYOUT(&uParam1, "nMFT_Dummy", Function_76(), Function_76());
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	Param0.f_56 = 8;
	Param0.f_60 = 2;
	if (!Function_452(&Param0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_451(&Param0, 0);
	Param0.f_68 = 0;
	Function_448(&Param0, &iParam2, 0);
	Function_614(&Param0, 3);
	return 1;
}

void Function_614(int iParam0, int iParam1) //Position: 0x1D20A / 119306
{
	if (iParam1 != 100000000)
	{
		Function_615(&iParam0, iParam1);
	}
	else
	{
		Function_449(&iParam0, 1);
	}
	return;
}

void Function_615(int iParam0, bool bParam1) //Position: 0x1D22C / 119340
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_616(struct<2>[] Param0) //Position: 0x1D259 / 119385
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_617(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_617(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_617(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_617(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_617(struct<13> Param0) //Position: 0x1D932 / 121138
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

void Function_618() //Position: 0x1DA01 / 121345
{
	if (!IS_ACTOR_ALIVE(&bLocal_548))
	{
		Function_619();
		bLocal_548 = &iLocal_4 + 336[02];
		if (IS_ACTOR_ALIVE(&bLocal_548))
		{
			ACCESSORIZE_HORSE(&bLocal_548, 3);
			Function_394(&bLocal_548);
			SET_ACTOR_FACTION(&bLocal_548, 20);
			SET_MOST_RECENT_MOUNT(&bLocal_544, &bLocal_548);
			SET_ACTOR_INVULNERABILITY(&bLocal_548, true);
			SET_ACTOR_MAX_HEALTH(&bLocal_548, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_548, 50.0f);
			AI_SET_NAV_ACTOR_WIDTH(&bLocal_548, 0,5f);
			TASK_CLEAR(&bLocal_548);
			TASK_PRIORITY_SET(&bLocal_548, true);
			TASK_STAND_STILL(&bLocal_548, -1.0f, 0, 0);
		}
		else
		{
			LOG_ERROR("Failed to create/setup CompHorse properly!");
		}
	}
	return;
}

void Function_619() //Position: 0x1DAC8 / 121544
{
	(&iLocal_4 + 336[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), 977, Vector(-813,4084f, 93,36762f, 2429,729f), Vector(0.0f, 89,60596f, 0.0f));
	return;
}

void Function_620() //Position: 0x1DAFB / 121595
{
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1049);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1050);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1051);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1052);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1030);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1031);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1032);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1037);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1038);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1039);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1040);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1012);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1013);
	ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1014);
	return;
}

void Function_621(int iParam0, int iParam1) //Position: 0x1DB55 / 121685
{
	Function_174(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_622(StackVal, &iParam1);
	}
	return;
}

void Function_622(int iParam0, int iParam1) //Position: 0x1DB87 / 121735
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_174(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_172(iParam0, &uVar0, &iParam1);
	return;
}

void Function_623(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x1DBB0 / 121776
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_246(iParam1), &iParam2, &iParam3, &iParam4, &iParam5, &iParam6);
}

var Function_624() //Position: 0x1DBD2 / 121810
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	Unknown_Function();
	iVar0 = &iVar0;
	iLocal_4 = CREATE_LAYOUT("Ranch01_layout");
	*(&iLocal_4 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 496[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-838,5982f, 94,69299f, 2372,861f), Vector(0.0f, -71,09768f, 0.0f), Vector(24.0f, 7.0f, 16.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 496[0]);
	*(&iLocal_4 + 496[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-788,8539f, 98,2772f, 2407,156f), Vector(0.0f, 145,1147f, 0.0f), Vector(25.0f, 13.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 496[1]);
	*(&iLocal_4 + 496[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-838,5982f, 94,69299f, 2372,861f), Vector(0.0f, -71,09768f, 0.0f), Vector(24.0f, 7.0f, 16.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 496[2]);
	*(&iLocal_4 + 568) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 536[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-934.0f, 103,7021f, 2432.0f), Vector(0.0f, 270.0f, 0.0f), Vector(256.0f, 30.0f, 92.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 568, &iLocal_4 + 536[0]);
	*(&iLocal_4 + 536[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-776,7565f, 95,29974f, 2372,023f), Vector(0.0f, -34,66144f, 0.0f), Vector(80.0f, 7.0f, 46.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 568, &iLocal_4 + 536[1]);
	*(&iLocal_4 + 536[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-883,1847f, 94,32787f, 2435,132f), Vector(0.0f, 20,34403f, 0.0f), Vector(80.0f, 9.0f, 60.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 568, &iLocal_4 + 536[2]);
	*(&iLocal_4 + 736) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 576[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-776,7565f, 95,29974f, 2372,023f), Vector(0.0f, -34,66144f, 0.0f), Vector(80.0f, 7.0f, 46.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[0]);
	*(&iLocal_4 + 576[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-883,1847f, 94,32787f, 2435,132f), Vector(0.0f, 20,34403f, 0.0f), Vector(80.0f, 9.0f, 60.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[1]);
	*(&iLocal_4 + 576[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-883,1847f, 92,75782f, 2435,132f), Vector(0.0f, 20,34403f, 0.0f), Vector(15.0f, 5.0f, 13.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[2]);
	*(&iLocal_4 + 576[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-892,0629f, 94,32787f, 2394,994f), Vector(0.0f, -60,16562f, 0.0f), Vector(110.0f, 9.0f, 85.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[3]);
	*(&iLocal_4 + 576[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-887,5616f, 92,49422f, 2422,885f), Vector(0.0f, 20,34403f, 0.0f), Vector(13.0f, 5.0f, 13.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[4]);
	*(&iLocal_4 + 576[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-899,0981f, 92,49422f, 2427,192f), Vector(0.0f, 20,34403f, 0.0f), Vector(6,5f, 5.0f, 13.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[5]);
	*(&iLocal_4 + 576[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-871,4006f, 92,75782f, 2430,763f), Vector(0.0f, 20,34403f, 0.0f), Vector(6,5f, 5.0f, 13.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[6]);
	*(&iLocal_4 + 576[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-889,7175f, 92,75782f, 2433,827f), Vector(0.0f, 20,34403f, 0.0f), Vector(6,5f, 5.0f, 6.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[7]);
	*(&iLocal_4 + 576[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-878,6982f, 92,75782f, 2429,743f), Vector(0.0f, 20,34403f, 0.0f), Vector(6,5f, 5.0f, 6.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[8]);
	*(&iLocal_4 + 576[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-772,6022f, 93,60046f, 2442,586f), Vector(0.0f, 55,339f, 0.0f), Vector(100.0f, 10.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[9]);
	*(&iLocal_4 + 576[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-789,3221f, 94,54737f, 2410,002f), Vector(0.0f, 325,1147f, 0.0f), Vector(16,5f, 4,5f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[10]);
	*(&iLocal_4 + 576[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-772,1881f, 95,7672f, 2381,589f), Vector(0.0f, -34,66144f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[11]);
	*(&iLocal_4 + 576[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-892,0629f, 94,32787f, 2394,994f), Vector(0.0f, -60,16562f, 0.0f), Vector(110.0f, 9.0f, 85.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[12]);
	*(&iLocal_4 + 576[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-813,5093f, 95,05132f, 2432,753f), Vector(0.0f, 75.0f, 0.0f), Vector(16.0f, 5.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[13]);
	*(&iLocal_4 + 576[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-824,8262f, 94,32787f, 2376,751f), Vector(0.0f, -60,16562f, 0.0f), Vector(75.0f, 9.0f, 65.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[14]);
	*(&iLocal_4 + 576[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-839,8889f, 94,69299f, 2369,092f), Vector(0.0f, -71,09768f, 0.0f), Vector(20.0f, 7.0f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[15]);
	*(&iLocal_4 + 576[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-852.0f, 103,7021f, 2432.0f), Vector(0.0f, 0.0f, 0.0f), Vector(256.0f, 30.0f, 256.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[16]);
	*(&iLocal_4 + 576[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-779,96f, 94,54737f, 2407,366f), Vector(0.0f, 325,1147f, 0.0f), Vector(7.0f, 4,5f, 16.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[17]);
	*(&iLocal_4 + 576[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-791,3229f, 94,54737f, 2397,007f), Vector(0.0f, 325,1147f, 0.0f), Vector(8,5f, 4,5f, 20.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 736, &iLocal_4 + 576[18]);
	*(&iLocal_4 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_54());
	*(&iLocal_4 + 744[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-873,5752f, 94,32787f, 2351,868f), Vector(0.0f, -60,16562f, 0.0f), Vector(40.0f, 9.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[0]);
	*(&iLocal_4 + 744[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-1002.0f, 117,524f, 2304.0f), Vector(0.0f, 0.0f, 0.0f), Vector(44.0f, 60.0f, 512.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[1]);
	*(&iLocal_4 + 744[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-772,0051f, 95,54496f, 2381,445f), Vector(0.0f, -34,66144f, 0.0f), Vector(27,5f, 5.0f, 27,5f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[2]);
	*(&iLocal_4 + 744[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-840,3329f, 101,2162f, 2462,793f), Vector(0.0f, -70.0f, 0.0f), Vector(32.0f, 24.0f, 26.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[3]);
	*(&iLocal_4 + 744[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-784,2783f, 98,2772f, 2400,594f), Vector(0.0f, 145,1147f, 0.0f), Vector(25.0f, 13.0f, 24.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[4]);
	*(&iLocal_4 + 744[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-873,4361f, 94,32787f, 2437,265f), Vector(0.0f, -70.0f, 0.0f), Vector(50.0f, 9.0f, 70.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[5]);
	*(&iLocal_4 + 744[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-792,2244f, 94,29689f, 2410,994f), Vector(0.0f, 325,1147f, 0.0f), Vector(23.0f, 5.0f, 14.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[6]);
	*(&iLocal_4 + 744[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-897,154f, 94,32787f, 2371,087f), Vector(0.0f, -60,16562f, 0.0f), Vector(63,5f, 9.0f, 70.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[7]);
	*(&iLocal_4 + 744[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-893,4744f, 94,32787f, 2457,137f), Vector(0.0f, -70.0f, 0.0f), Vector(47,91489f, 9.0f, 70.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[8]);
	*(&iLocal_4 + 744[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-772,1881f, 95,7672f, 2381,589f), Vector(0.0f, -34,66144f, 0.0f), Vector(9,45638f, 5.0f, 9,653666f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[9]);
	*(&iLocal_4 + 744[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-765,7134f, 95,7672f, 2390,966f), Vector(0.0f, -37,12057f, 0.0f), Vector(2.0f, 5.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[10]);
	*(&iLocal_4 + 744[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-792,5153f, 94,37291f, 2407,776f), Vector(0.0f, 325,1147f, 0.0f), Vector(12.0f, 4.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[11]);
	*(&iLocal_4 + 744[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-792,5153f, 94,37291f, 2407,776f), Vector(0.0f, 325,1147f, 0.0f), Vector(48.0f, 6.0f, 48.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[12]);
	*(&iLocal_4 + 744[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-839,8889f, 94,69299f, 2369,092f), Vector(0.0f, -71,09768f, 0.0f), Vector(16.0f, 7.0f, 16.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[13]);
	*(&iLocal_4 + 744[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-823,6526f, 95,55747f, 2430,035f), Vector(0.0f, 75.0f, 0.0f), Vector(16.0f, 6.0f, 13.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[14]);
	*(&iLocal_4 + 744[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-826,0886f, 94,66759f, 2392,028f), Vector(0.0f, 80,44606f, 0.0f), Vector(19.0f, 6.0f, 16.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[15]);
	*(&iLocal_4 + 744[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-608,8265f, 99,52299f, 2475,394f), Vector(0.0f, -45.0f, 0.0f), Vector(272.0f, 70.0f, 512.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[16]);
	*(&iLocal_4 + 744[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_54(), 2,802597E-45f, Vector(-954,163f, 94,51307f, 2424,404f), Vector(0.0f, 110.0f, 0.0f), Vector(28.0f, 10.0f, 19,5f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 896, &iLocal_4 + 744[17]);
	*(&iLocal_4 + 904) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 912[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-839,091f, 92,52304f, 2370,844f), Vector(0.0f, 170,9499f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 912[0], &iLocal_4 + 904);
	*(&iLocal_4 + 912[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-791,5001f, 93,61219f, 2406,356f), Vector(0.0f, -216,568f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 912[1], &iLocal_4 + 904);
	*(&iLocal_4 + 912[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-814,3506f, 93,41338f, 2432,269f), Vector(0.0f, 60.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 912[2], &iLocal_4 + 904);
	*(&iLocal_4 + 944) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 952[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-790,3117f, 93,23627f, 2412,991f), Vector(0.0f, 145.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 952[0], &iLocal_4 + 944);
	*(&iLocal_4 + 952[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-791,0594f, 92,95382f, 2415,496f), Vector(0.0f, 141,0129f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 952[1], &iLocal_4 + 944);
	*(&iLocal_4 + 952[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-813,3506f, 93,41338f, 2432,269f), Vector(0.0f, 60.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 952[2], &iLocal_4 + 944);
	*(&iLocal_4 + 952[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-813,4084f, 93,36762f, 2429,729f), Vector(0.0f, 89,60596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 952[3], &iLocal_4 + 944);
	*(&iLocal_4 + 952[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-796,0474f, 94,23627f, 2421,183f), Vector(0.0f, 145.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 952[4], &iLocal_4 + 944);
	*(&iLocal_4 + 1000) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1008[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-761,1476f, 93,36453f, 2393,066f), Vector(0.0f, -380,0871f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[0], &iLocal_4 + 1000);
	*(&iLocal_4 + 1008[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-760,1313f, 93,36482f, 2390,194f), Vector(0.0f, -385,5917f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[1], &iLocal_4 + 1000);
	*(&iLocal_4 + 1008[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-762,0868f, 93,36453f, 2392,723f), Vector(0.0f, -380,0871f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[2], &iLocal_4 + 1000);
	*(&iLocal_4 + 1008[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-761,0331f, 93,36482f, 2389,762f), Vector(0.0f, -385,5917f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1008[3], &iLocal_4 + 1000);
	*(&iLocal_4 + 1048) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-839,6923f, 92,51586f, 2372,941f), Vector(0.0f, 20.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[0], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-838,568f, 92,52142f, 2371,06f), Vector(0.0f, 290,315f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[1], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-832,5114f, 92,43291f, 2379,449f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[2], &iLocal_4 + 1048);
	*(&iLocal_4 + 1056[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-841,291f, 92,3384f, 2377,412f), Vector(0.0f, 18,374f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1056[3], &iLocal_4 + 1048);
	*(&iLocal_4 + 1096) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1104[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-959,8447f, 90,30418f, 2441,439f), Vector(0.0f, 199,7445f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[0], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-155,865f, 92,004f, 2569,758f), Vector(0.0f, 346,359f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[1], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-844,4792f, 96,55543f, 2461,344f), Vector(0.0f, 379,9868f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[2], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-886,1976f, 90,17119f, 2421,598f), Vector(-0,60346f, 186,5569f, 0,1208539f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[3], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-764,0001f, 93,36469f, 2384.0f), Vector(1,759897f, 70,08051f, 1,706609f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[4], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-766,5941f, 93,3689f, 2375,719f), Vector(-0,9559765f, 128,8393f, -0,6927029f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[5], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-791,5001f, 93,61219f, 2406,356f), Vector(0.0f, -216,568f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[6], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-792,7586f, 92,54903f, 2416,486f), Vector(0.0f, -35.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[7], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-883,0015f, 92,34016f, 2435,23f), Vector(0.0f, 200.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[8], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-899,9732f, 93,83185f, 2372,93f), Vector(0.0f, 29,09742f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[9], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-772,1881f, 95,04295f, 2381,589f), Vector(0.0f, 55,33856f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[10], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-815,7851f, 93,36488f, 2431,286f), Vector(0.0f, 73,54227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[11], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-762,9207f, 93,3649f, 2389,96f), Vector(0.0f, 52,2076f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[12], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-841,7166f, 92,35841f, 2376,399f), Vector(0.0f, 19,71966f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[13], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-870,6128f, 90,55632f, 2416,329f), Vector(0.0f, 295,4154f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[14], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-877,9203f, 95,64274f, 2238,921f), Vector(0.0f, 35,92141f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[15], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-821,3817f, 95,67019f, 2423,069f), Vector(0.0f, 165,7481f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[16], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-828,7342f, 94,91409f, 2400,654f), Vector(0.0f, -8,583705f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[17], &iLocal_4 + 1096);
	*(&iLocal_4 + 1104[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-952,1812f, 94,60225f, 2424,888f), Vector(0.0f, 199,7445f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1104[18], &iLocal_4 + 1096);
	*(&iLocal_4 + 1264) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1272[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-876,0079f, 90,35291f, 2494,018f), Vector(0.0f, 277,4239f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[0], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-806,3502f, 92,12242f, 2451,441f), Vector(0.0f, 348,7345f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[1], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-791,9395f, 92,55786f, 2417,059f), Vector(0.0f, -35.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[2], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-813,4084f, 93,36762f, 2429,729f), Vector(0.0f, 89,60596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[3], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-760,5623f, 93,36474f, 2389,763f), Vector(0.0f, 67,33441f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[4], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-852,8867f, 91,37363f, 2401,369f), Vector(0.0f, 81,23734f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[5], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-921,1119f, 91,13181f, 2420,674f), Vector(0.0f, 82,21758f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[6], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-845,9664f, 91,69764f, 2401,672f), Vector(0.0f, 89,1599f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[7], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-781,783f, 92,93834f, 2424,15f), Vector(0.0f, -58,52507f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[8], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-818,1821f, 93,75012f, 2324,115f), Vector(0.0f, 109,9785f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[9], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-815,0658f, 93,36724f, 2431,499f), Vector(0.0f, 73,54227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[10], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-841,4635f, 92,35355f, 2377,105f), Vector(0.0f, 19,71966f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[11], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-814,3506f, 93,41338f, 2432,269f), Vector(0.0f, 60.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[12], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-761,8641f, 93,36663f, 2391,283f), Vector(0.0f, 44,60596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[13], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-764,0458f, 93,36469f, 2400,004f), Vector(0.0f, -17,63534f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[14], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-883,058f, 91,28948f, 2402,767f), Vector(0.0f, 200,7085f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[15], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-799,0971f, 92,16018f, 2420,776f), Vector(0.0f, 108,3697f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[16], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-813,9294f, 92,12842f, 2406,898f), Vector(0.0f, 69,5963f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[17], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-842,7236f, 91,92263f, 2401,744f), Vector(0.0f, 88,65708f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[18], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-804,6105f, 92,83058f, 2440,771f), Vector(0.0f, 364,9276f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[19], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-939,2421f, 90,47591f, 2412,252f), Vector(0.0f, 42,48104f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[20], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-972,4237f, 90,35291f, 2433,516f), Vector(0.0f, 210,2679f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[21], &iLocal_4 + 1264);
	*(&iLocal_4 + 1272[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-930,0909f, 90,47569f, 2418,228f), Vector(0.0f, 56,23223f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1272[22], &iLocal_4 + 1264);
	*(&iLocal_4 + 1464) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1472[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-877,9076f, 90,3529f, 2433,614f), Vector(0.0f, 200,9423f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1472[0], &iLocal_4 + 1464);
	*(&iLocal_4 + 1472[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-887,6166f, 90,3529f, 2437,223f), Vector(0.0f, -159,4454f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1472[1], &iLocal_4 + 1464);
	*(&iLocal_4 + 1472[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-875,7287f, 90,35431f, 2436,873f), Vector(0.0f, 61,23708f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1472[2], &iLocal_4 + 1464);
	*(&iLocal_4 + 1472[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-887,6258f, 90,35329f, 2442,593f), Vector(0.0f, -20,53456f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1472[3], &iLocal_4 + 1464);
	*(&iLocal_4 + 1472[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-884,484f, 90,35291f, 2430,686f), Vector(0.0f, -159,7843f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1472[4], &iLocal_4 + 1464);
	*(&iLocal_4 + 1472[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-882,8116f, 90,35291f, 2435,227f), Vector(0.0f, -159,7843f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1472[5], &iLocal_4 + 1464);
	*(&iLocal_4 + 1472[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-881,1894f, 90,4147f, 2439,633f), Vector(0.0f, 20,21574f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1472[6], &iLocal_4 + 1464);
	*(&iLocal_4 + 1536) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	*(&iLocal_4 + 1544[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-770,6606f, 93,52184f, 2387,19f), Vector(0.0f, -172,1959f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[0], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-769,3015f, 93,55064f, 2385,157f), Vector(0.0f, 251,3711f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[1], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-768,1227f, 93,5012f, 2383,173f), Vector(0.0f, 430,154f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[2], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-766,8477f, 93,52644f, 2381,369f), Vector(0.0f, -206,8974f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[3], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-766,0057f, 93,4465f, 2380,058f), Vector(0.0f, -91,54323f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[4], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-771,7672f, 93,63434f, 2384,953f), Vector(0.0f, 148,7796f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[5], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-770,5496f, 93,63316f, 2383,251f), Vector(0.0f, 279,1444f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[6], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-769,3366f, 93,64001f, 2381,48f), Vector(0.0f, 2,700342f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[7], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-774,0542f, 93,59579f, 2384,546f), Vector(0.0f, -102,2601f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[8], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-772,2205f, 93,54425f, 2381,573f), Vector(0.0f, 177,5076f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[9], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-771,1028f, 93,55116f, 2379,923f), Vector(0.0f, 324,9624f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[10], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-770,0579f, 93,5343f, 2378,235f), Vector(0.0f, -232,9591f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[11], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-775,2579f, 93,57475f, 2382,283f), Vector(0.0f, -6,06723f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[12], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-774,2785f, 93,55978f, 2380,743f), Vector(0.0f, -146,3856f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[13], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-773,2109f, 93,54694f, 2379,089f), Vector(0.0f, -94,39943f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[14], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-772,0493f, 93,55665f, 2377,353f), Vector(0.0f, -166,896f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[15], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-777,7875f, 93,57786f, 2382,355f), Vector(0.0f, -74,01788f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[16], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-776,6227f, 93,57772f, 2380,419f), Vector(0.0f, -270,0883f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[17], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-775,3572f, 93,57701f, 2378,457f), Vector(0.0f, -53,74745f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[18], &iLocal_4 + 1536);
	*(&iLocal_4 + 1544[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-774,0229f, 93,57891f, 2376,563f), Vector(0.0f, -130,2411f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1544[19], &iLocal_4 + 1536);
	*(&iLocal_4 + 1712) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &iLocal_4, 8, 0);
	bVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-783,886f, 93,365f, 2385,947f), Vector(0.0f, 323,8573f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&bVar1, &iLocal_4 + 1712);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-786,8344f, 93,365f, 2382,986f), Vector(0.0f, 297,7067f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 1712);
	iVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-784,5284f, 93,36269f, 2378,839f), Vector(0.0f, 259,3501f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar3, &iLocal_4 + 1712);
	iVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-783,5835f, 93,36469f, 2373,161f), Vector(0.0f, -116,3143f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar4, &iLocal_4 + 1712);
	iVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-774,8254f, 93,36092f, 2370,898f), Vector(0.0f, 180,9424f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iVar5, &iLocal_4 + 1712);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-770,902f, 93,36349f, 2369,042f), Vector(0.0f, 77,31421f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_4 + 1712);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-765,8563f, 93,36499f, 2372,163f), Vector(0.0f, 43,712f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_4 + 1712);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-772,7747f, 93,365f, 2396,743f), Vector(0.0f, 323,8423f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_4 + 1712);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-765,2589f, 93,365f, 2393,724f), Vector(0.0f, 5,251922f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_4 + 1712);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-760,0324f, 93,365f, 2384,634f), Vector(0.0f, 169,376f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_4 + 1712);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(-760,0295f, 93,36469f, 2378,106f), Vector(0.0f, 209,5381f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_4 + 1712);
	*(&iLocal_4 + 1720) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "coyote_howling", Vector(-857,6796f, 91,85497f, 2339,136f), Vector(0.0f, 120,416f, 0.0f));
	*(&iLocal_4 + 1728) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "coyote_howling", Vector(-881,812f, 91,35687f, 2344,93f), Vector(0.0f, 117,2918f, 0.0f));
	*(&iLocal_4 + 1736) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "coyote_howling", Vector(-888,2471f, 90,106f, 2426,359f), Vector(0.0f, -111,5665f, 0.0f));
	*(&iLocal_4 + 1744) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "coyote_howling", Vector(-883,9103f, 90,18514f, 2424,354f), Vector(0.0f, 146,8066f, 0.0f));
	*(&iLocal_4 + 1752) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "coyote_howling", Vector(-899,2618f, 90,10969f, 2428,48f), Vector(0.0f, -70,30838f, 0.0f));
	*(&iLocal_4 + 1760) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "coyote_howling", Vector(-870,0472f, 90,35206f, 2434,694f), Vector(0.0f, 20,4212f, 0.0f));
	*(&iLocal_4 + 1768) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), "lean_rail_clean", Vector(-791,5001f, 93,62729f, 2406,356f), Vector(0.0f, -216,568f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1768), 0);
	PushArrayP();
	*(&iLocal_4 + 1776) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1784) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1792) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1800) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1808) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1816) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1824) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1832) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1840) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1848) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1856) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1864) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	PushArrayP();
	*(&iLocal_4 + 1872) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_54());
	return;
}

bool Function_625() //Position: 0x21B36 / 138038
{
	Function_293(&iLocal_526, 1, 0);
	switch (iLocal_526)
	{
		case 0x000003E8:
			if (iLocal_538 != 99 && (Function_507(&Local_476) || Local_476.f_40 < 1))
			{
				iLocal_526 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/RANCH_01/RANCH_01"))
			{
				LOG_ERROR("Cutscene file does not exist! No play...");
				iLocal_526 = 1106;
				return 0;
			}
			Function_289(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			bLocal_793 = false;
			SET_DAY(GET_DAY(0) + 1);
			Function_497(8);
			*(&iLocal_526 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_474, "Ranch01_CutsceneVol", 2,802597E-45f, Vector(-838,5982f, 94,69299f, 2372,861f), Vector(0.0f, -71,09768f, 0.0f), Vector(24.0f, 7.0f, 16.0f));
			Function_287(StackVal, &iLocal_474, Vector(-839,091f, 92,547f, 2370,844f), &iLocal_526 + 32, 1, 0, 0, 0, 1, 1);
			Global_99147 = 1;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/RANCH_01/RANCH_01", 0, 2, 1, 1, 2);
			Function_283(&iLocal_526 + 4);
			iLocal_526 = 1002;
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_280(&iLocal_526 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iLocal_526 = 1105;
			}
			if (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_RELEASE_MAIN_POI();
				Global_99147 = 0;
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				if (!iLocal_788)
				{
					iLocal_788 = 1;
					STREAMING_REQUEST_ACTOR(false, Function_216(14), false);
				}
				*(&iLocal_526 + 24) = Function_627(&iLocal_474, 0, 1, 1, 0);
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					STREAMING_SET_POI_LIMIT(2);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_526 + 24, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene01 - Failed to create Ranch01_Cutscene01_cutscene (paused)");
				}
				iLocal_526 = 1004;
			}
			break;
		
		case 0x000003EC:
			Unknown_Function();
			Function_417(&iLocal_488);
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				iLocal_526 = 1005;
			}
			else if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					Function_626(&iLocal_526 + 24, 0);
				}
				else
				{
					*(&iLocal_526 + 24) = Function_627(&iLocal_474, 0, 1, 0, 0);
				}
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					STREAMING_SET_POI_LIMIT(1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_526 + 24, 1);
				}
				else
				{
					LOG_ERROR("Ranch01_Cutscene01 - Failed to create Ranch01_Cutscene01_cutscene");
				}
				Function_401();
				Function_567();
				Function_566();
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-839,091f, 92,52304f, 2370,844f), 170,949f, 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_544, Vector(-791,5001f, 93,61219f, 2406,356f), -216,568f, 1, 1, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_546, Vector(-814,3506f, 93,41338f, 2432,269f), 60.0f, 1, 1, 1);
			}
			break;
		
		case 0x000003ED:
			Unknown_Function();
			Function_417(&iLocal_488);
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(&iLocal_526 + 24))
			{
				Function_494(1.0f);
				Function_284(&iLocal_566, (30.0f - 1.0f));
				iLocal_526 = 1104;
			}
			else if (GET_CUTSCENEOBJECT_SEQUENCE(&iLocal_526 + 24) != 0 && STREAMING_IS_ACTOR_LOADED(false, Function_216(14)))
			{
				Function_265(1.0f);
				END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&iLocal_526 + 24);
			}
			break;
		
		case 0x00000450:
			if (!CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || (!HUD_IS_FADING() && CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()))
			{
				AI_STOP_IGNORING_ACTORS();
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_526 + 32);
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_526 + 32);
				DESTROY_VOLUME(&iLocal_526 + 32);
				Function_267(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				if (IS_OBJECT_VALID(&iLocal_526 + 24))
				{
					DESTROY_OBJECT(&iLocal_526 + 24);
				}
				iLocal_526 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					Global_99147 = 0;
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					return 0;
				}
				bLocal_793 = true;
				ABORT_SCRIPTED_CONVERSATION(0);
				Function_239();
				Function_238();
				if (!iLocal_788)
				{
					iLocal_788 = 1;
					STREAMING_REQUEST_ACTOR(false, Function_216(14), false);
				}
				iLocal_526 = 1104;
			}
			break;
		
		case 0x00000452:
			bLocal_793 = true;
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_239();
			Function_238();
			if (!iLocal_788)
			{
				iLocal_788 = 1;
				STREAMING_REQUEST_ACTOR(false, Function_216(14), false);
			}
			iLocal_526 = 1000;
			return 1;
			break;
	}
	return 0;
}

void Function_626(var uParam0, bool bParam1) //Position: 0x22043 / 139331
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

var Function_627(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x22059 / 139353
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&iParam0, "Ranch01_Cutscene01", 2, 1);
	}
	Function_628(&uVar0);
	if (iParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_628(int iParam0) //Position: 0x220E5 / 139493
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_630(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_629(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1000.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 5.0f, 1, 0);
	return;
}

void Function_629(int iParam0) //Position: 0x2212F / 139567
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,05303f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-844,8337f, 93,83643f, 2383,845f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,020164f, -0,529063f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_630(var uParam0) //Position: 0x2219C / 139676
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 41,05303f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-845,644f, 93,80403f, 2385,233f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,020164f, -0,529063f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_631() //Position: 0x22209 / 139785
{
	iLocal_790 = 0;
	Function_623("FTR_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
	Function_621(0, 0);
	Function_242(0);
	Function_635();
	Function_633();
	Function_632();
	return;
}

void Function_632() //Position: 0x22240 / 139840
{
	if (IS_ACTOR_ALIVE(&bLocal_546))
	{
		ACCESSORIZE_HORSE(&bLocal_546, 4);
		RESET_ACTOR_GAITS(&bLocal_546, 0);
		Function_394(&bLocal_546);
		SET_ACTOR_FACTION(&bLocal_546, 20);
		SET_ACTOR_INVULNERABILITY(&bLocal_546, true);
		SET_ACTOR_MAX_HEALTH(&bLocal_546, 50.0f);
		SET_ACTOR_HEALTH(&bLocal_546, 50.0f);
		AI_SET_NAV_ACTOR_WIDTH(&bLocal_546, 0,5f);
		TASK_CLEAR(&bLocal_546);
		TASK_PRIORITY_SET(&bLocal_546, true);
		TASK_STAND_STILL(&bLocal_546, -1.0f, 0, 0);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &bLocal_546, Vector(-814,5916f, 93,40491f, 2432,506f), 44,60596f, 1, 1, 1);
	}
	else
	{
		LOG_ERROR("Failed to setup PlayerHorse properly!");
	}
	return;
}

void Function_633() //Position: 0x22303 / 140035
{
	if (IS_ACTOR_ALIVE(&bLocal_544))
	{
		Function_379(3, 0, 1);
		RESET_ACTOR_GAITS(&bLocal_544, 0);
		Function_394(&bLocal_544);
		SET_ACTOR_FACTION(&bLocal_544, 20);
		AI_BEHAVIOR_SET_ALLOW(&bLocal_544, 0, 0);
		SET_CRIPPLE_ENABLE(&bLocal_544, 0);
		SET_ACTOR_INVULNERABILITY(&bLocal_544, true);
		SET_ACTOR_MAX_HEALTH(&bLocal_544, 50.0f);
		SET_ACTOR_HEALTH(&bLocal_544, 50.0f);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_544, true);
		Function_634(&bLocal_544, 10.0f, 0x40400000, 0x40000000);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_544);
		UNK_0x2E84E682(&bLocal_544, 0);
		MEMORY_ALLOW_TAKE_COVER(&bLocal_544, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 63, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 61, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&bLocal_544, 60, 0);
		TASK_CLEAR(&bLocal_544);
		TASK_PRIORITY_SET(&bLocal_544, true);
		TASK_STAND_STILL(&bLocal_544, -1.0f, 0, 0);
	}
	else
	{
		LOG_ERROR("Failed to setup Bonnie properly!");
	}
	return;
}

void Function_634(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x223F7 / 140279
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, bParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

void Function_635() //Position: 0x22448 / 140360
{
	SET_ACTOR_INVULNERABILITY(&Global_54076, true);
	return;
}

bool Function_636() //Position: 0x22456 / 140374
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_654(0))
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_544))
		{
			bLocal_544 = Function_645(3, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!Function_644())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_546))
		{
			bLocal_546 = Function_639(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!Function_638())
		{
			return 0;
		}
		if (!Function_535(Global_53579))
		{
			Function_637(Global_53579, 1);
			return 0;
		}
	}
	return 1;
}

var Function_637(int iParam0, bool bParam1) //Position: 0x224DC / 140508
{
	bool bVar0;
	
	Function_196(16384);
	if (iParam0 == 4294967295)
	{
		return "";
	}
	if (iParam0 == Global_53579)
	{
		(&Global_53580 + 20)->f_424 = 1;
	}
	if (iParam0 == Global_53578)
	{
		(&Global_53580 + 980)->f_424 = 1;
	}
	if (TRAIN_GET_NUM_CARS(iParam0) >= 0)
	{
		bVar0 = TRAIN_GET_CAR(iParam0, false);
	}
	else
	{
		bVar0 = "";
	}
	if (IS_OBJECT_VALID(&bVar0))
	{
		if (bParam1)
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 1);
		}
		else
		{
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iParam0, 4294967295, 0);
		}
		return &bVar0;
	}
	return "";
}

bool Function_638() //Position: 0x22553 / 140627
{
	if (!Global_6606)
	{
		if (StackVal && StackVal == 976 == 992)
		{
			bLocal_546 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_474, Function_54(), 976, Vector(-814,5916f, 93,40491f, 2432,506f), Vector(0.0f, 44,60596f, 0.0f));
			if (IS_ACTOR_ALIVE(&bLocal_546))
			{
				Function_77(&Global_21369 + 72 + 32, 2);
				Function_221(&bLocal_546, 1);
			}
			else
			{
				LOG_ERROR("Failed to swap Player Horse with a new AE_RIDEABLE_ANIMAL_Horse01!");
				return 0;
			}
		}
	}
	return 1;
}

var Function_639(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x2260E / 140814
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
		Function_643(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_644())
		{
			return "";
		}
	}
	if (!Function_641())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_197();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_413(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_413(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_413(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_413(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_640(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_640(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				Var8 = Vector(&iParam2, &iParam3, &iParam4);
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_398(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_640(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2296B / 141675
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

bool Function_641() //Position: 0x22A0B / 141835
{
	if (Function_642() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_642() //Position: 0x22A21 / 141857
{
	return Global_21369.f_244;
}

void Function_643(var uParam0, bool bParam1, bool bParam2) //Position: 0x22A2C / 141868
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

bool Function_644() //Position: 0x22A5B / 141915
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

var Function_645(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x22A7B / 141947
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
	uParam2 = &uParam2;
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
		STREAMING_REQUEST_ACTOR(&Global_15402[iParam014] + 16, true, false);
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
		Function_379(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_653(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_648(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &uParam3;
			Var3.f_4 = &uParam4;
			Var3.f_8 = &uParam5;
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
		Function_647(&bVar1, 0, 0, 0, 0);
		if (IS_PERS_CHAR_VALID(&(Global_15402[iParam014])))
		{
			DECOR_SET_INT(&(Global_15402[iParam014]), "ambientFaction", GET_ACTOR_FACTION(&bVar1));
		}
		SET_ACTOR_FACTION(&bVar1, 20);
		MEMORY_CONSIDER_AS(&bVar1, &Global_54076, false);
		SET_ACTOR_ALLOW_DISARM(&bVar1, false);
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
		Function_646(&bVar1, 0);
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

void Function_646(var uParam0, bool bParam1) //Position: 0x22FBB / 143291
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_647(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x22FDD / 143325
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

var Function_648(int iParam0, int iParam1) //Position: 0x2303E / 143422
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_652(iParam0))
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
						Function_649(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_649(var uParam0, int iParam1) //Position: 0x230CC / 143564
{
	Function_651(&uParam0);
	Function_650(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_650(int iParam0) //Position: 0x230F8 / 143608
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_651(int iParam0) //Position: 0x2311E / 143646
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

bool Function_652(int iParam0) //Position: 0x231F4 / 143860
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_653(int iParam0, var uParam1) //Position: 0x2320B / 143883
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
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&iVar1, &uParam1);
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

bool Function_654(bool bParam0) //Position: 0x232B1 / 144049
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

void Function_655() //Position: 0x232E1 / 144097
{
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	Unknown_Function();
	return;
}

void Function_656(var uParam0, bool bParam1) //Position: 0x233C7 / 144327
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_663(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_507(&uParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(uParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_507(&uParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_662();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_239();
	Function_238();
	Function_252("");
	Function_661(0);
	Function_660();
	Function_204();
	Function_203();
	ENABLE_JOURNAL_REPLAY(0);
	Function_659();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_639(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_312(0, 0x40400000);
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
	Function_658(13);
	Function_658(14);
	Function_658(25);
	Function_658(24);
	Function_658(12);
	Function_658(27);
	Function_658(26);
	Function_658(15);
	Function_657();
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

void Function_657() //Position: 0x23807 / 145415
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

void Function_658(int iParam0) //Position: 0x2388C / 145548
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_659() //Position: 0x238AC / 145580
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

void Function_660() //Position: 0x238F2 / 145650
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_661(int iParam0) //Position: 0x23908 / 145672
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_207())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_662() //Position: 0x23941 / 145729
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_663(int iParam0, int iParam1) //Position: 0x2394A / 145738
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
			Function_664(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_664(struct<113> Param0) //Position: 0x239D1 / 145873
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

bool Function_665(struct<25> Param0) //Position: 0x23A2F / 145967
{
	switch (Param0.f_24)
	{
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (Param0.f_20)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_671();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_shootBonnieHorse", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_552(&Param0 + 8) == &iLocal_474 && Function_552(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_670();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_assaultOther", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!Param0.f_20)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_669();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_shootBonnie", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_671();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_shootBonnieHorse", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_552(&Param0 + 8) == &iLocal_474 && Function_552(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_668();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_shootOther", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_667();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_assaultBonnie", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
				
				case 0x00000002:
					if (Function_552(&Param0 + 8) == &iLocal_474 && Function_552(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_670();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_544, "Ranch01_assaultOther", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !IS_ANY_SPEECH_PLAYING(&bLocal_544))
		{
			Function_666(&Param0, 1);
			return 1;
		}
	}
	Function_666(&Param0, 0);
	return 0;
}

void Function_666(struct<25> Param0) //Position: 0x23D23 / 146723
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

void Function_667() //Position: 0x23D4E / 146766
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_assaultBonnie", "Ranch01_assaultBonnie", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_668() //Position: 0x23DA1 / 146849
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootOther", "Ranch01_shootOther", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_669() //Position: 0x23DEE / 146926
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootBonnie", "Ranch01_shootBonnie", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_670() //Position: 0x23E3D / 147005
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_assaultOther", "Ranch01_assaultOther", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_671() //Position: 0x23E8E / 147086
{
	ABORT_SCRIPTED_CONVERSATION(0);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch01_shootBonnieHorse", "Ranch01_shootBonnieHorse", false, 1, 1, 0, 1);
		Function_333(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

bool Function_672(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x23EE7 / 147175
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
	struct<16> Var18;
	
	if (Param2)
	{
		return 1;
	}
	if (!IS_ITERATOR_VALID(&uParam3))
	{
		Function_666(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_463(&uParam3);
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
							if (StackVal != 2)
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_690(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_690(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_676(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_666(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_675(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_674(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_675(&bVar17);
														strcpy(&Var18, "", 64);
														Function_673(StackVal, StackVal, StackVal, StackVal, StackVal, &Var18, bVar17, *(&Param0[iVar1615] + 8));
														Function_252(&Var18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_674(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_666(&Param2, 0);
	return 0;
}

void Function_673(char* cParam0) //Position: 0x242FF / 148223
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

void Function_674(struct<25> Param0) //Position: 0x243F3 / 148467
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

void Function_675(bool bParam0) //Position: 0x2446B / 148587
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_676(struct<57> Param0) //Position: 0x2448F / 148623
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
			return Function_687(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_680(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_687(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_677(&Param0, bVar2);
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
						bVar2 = Function_687(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_677(&Param0, bVar2);
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

var Function_677(int iParam0, bool bParam1) //Position: 0x24600 / 148992
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
				bParam1 = Function_679(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_678(16);
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
				bParam1 = Function_679(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_678(256);
			}
		}
	}
	return bParam1;
}

bool Function_678(int iParam0) //Position: 0x2473C / 149308
{
	return 2 | iParam0;
}

int Function_679(int iParam0) //Position: 0x24746 / 149318
{
	return 4 | iParam0;
}

int Function_680(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x24750 / 149328
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
				iParam3 = Function_686(&iParam0, &iParam1, bParam4);
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
			return Function_678(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_681(&iParam0, &iParam1, 0, bParam4);
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
			return Function_678(16);
		}
	}
	return 0;
}

int Function_681(int iParam0, vector3 vParam1) //Position: 0x2480B / 149515
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_685(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_684(iVar0, 3, 1, bParam3))
			{
				if (!Function_690(&iParam0, 8, 1))
				{
					return Function_683(64, 1024, bParam2);
				}
			}
			return Function_682(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_684(iVar0, 2, 1, bParam3))
			{
				if (!Function_690(&iParam0, 32, 1))
				{
					return Function_683(64, 1024, bParam2);
				}
			}
			return Function_682(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_684(iVar0, 1, 1, bParam3))
			{
				if (!Function_690(&iParam0, 64, 1))
				{
					return Function_683(64, 1024, bParam2);
				}
			}
			return Function_682(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_684(iVar0, 3, 1, bParam3))
			{
				if (!Function_690(&iParam0, 128, 1))
				{
					return Function_683(64, 1024, bParam2);
				}
			}
			return Function_682(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_684(iVar0, 1, 1, bParam3))
			{
				if (!Function_690(&iParam0, 1024, 1))
				{
					return Function_683(64, 1024, bParam2);
				}
			}
			return Function_682(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_684(iVar0, 1, 1, bParam3))
			{
				if (!Function_690(&iParam0, 1024, 1))
				{
					return Function_683(64, 1024, bParam2);
				}
			}
			return Function_682(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_682(int iParam0, int iParam1, bool bParam2) //Position: 0x249D3 / 149971
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_683(int iParam0, int iParam1, bool bParam2) //Position: 0x249E8 / 149992
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_684(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x249FD / 150013
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_685(int iParam0) //Position: 0x24A1A / 150042
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

int Function_686(var uParam0, vector3 vParam1) //Position: 0x24A8D / 150157
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_685(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_684(iVar0, 3, 1, bParam2))
			{
				if (!Function_690(&uParam0, 8, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000009:
			if (Function_684(iVar0, 3, 1, bParam2))
			{
				if (!Function_690(&uParam0, 8, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x0000006E:
			if (Function_684(iVar0, 2, 1, bParam2))
			{
				if (!Function_690(&uParam0, 16, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x0000005B:
			if (Function_684(iVar0, 2, 1, bParam2))
			{
				if (!Function_690(&uParam0, 32, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000031:
			if (Function_684(iVar0, 1, 1, bParam2))
			{
				if (!Function_690(&uParam0, 64, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000007:
			if (Function_684(iVar0, 3, 1, bParam2))
			{
				if (!Function_690(&uParam0, 128, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000008:
			if (Function_684(iVar0, 2, 1, bParam2))
			{
				if (!Function_690(&uParam0, 256, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000014:
			if (Function_684(iVar0, 1, 1, bParam2))
			{
				if (!Function_690(&uParam0, 512, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000018:
			if (Function_684(iVar0, 1, 1, bParam2))
			{
				if (!Function_690(&uParam0, 512, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000057:
			if (Function_684(iVar0, 1, 1, bParam2))
			{
				if (!Function_690(&uParam0, 1024, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000058:
			if (Function_684(iVar0, 1, 1, bParam2))
			{
				if (!Function_690(&uParam0, 1024, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_687(struct<65> Param0) //Position: 0x24CB6 / 150710
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
						return Function_686(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_690(&Param0, 2, 1))
					{
						return Function_679(8);
					}
					return Function_678(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_690(&Param0, 4, 1))
					{
						return Function_679(16);
					}
					return Function_678(16);
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
							return Function_681(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_690(&Param0, 2, 1))
						{
							return Function_679(128);
						}
						return Function_678(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_690(&Param0, 4, 1))
						{
							return Function_679(256);
						}
						return Function_678(256);
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
						return Function_681(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_690(&Param0, 2, 1))
					{
						return Function_679(8);
					}
					return Function_678(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_690(&Param0, 4, 1))
					{
						return Function_679(16);
					}
					return Function_678(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_689(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_690(&Param0, 2, 1))
					{
						return Function_679(8);
					}
					return Function_678(8);
				}
				if (!Function_690(&Param0, 4, 1))
				{
					return Function_679(16);
				}
				return Function_678(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_681(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_688(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_678(128);
							}
							if (!Function_690(&Param0, 2, 1))
							{
								return Function_679(8);
							}
							return Function_678(8);
						}
						if (iParam4 == 2)
						{
							if (Function_688(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_678(256);
							}
							if (!Function_690(&Param0, 4, 1))
							{
								return Function_679(16);
							}
							return Function_678(16);
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

bool Function_688(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x24F9C / 151452
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

int Function_689(int iParam0, vector3 vParam1) //Position: 0x2506A / 151658
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_685(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_684(iVar0, 2, 1, bParam2))
			{
				if (!Function_690(&iParam0, 16, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x0000005B:
			if (Function_684(iVar0, 2, 1, bParam2))
			{
				if (!Function_690(&iParam0, 32, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000057:
			if (Function_684(iVar0, 1, 1, bParam2))
			{
				if (!Function_690(&iParam0, 1024, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		case 0x00000058:
			if (Function_684(iVar0, 1, 1, bParam2))
			{
				if (!Function_690(&iParam0, 1024, 1))
				{
					return Function_679(64);
				}
			}
			return Function_678(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_690(struct<69> Param0) //Position: 0x2518C / 151948
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

bool Function_691(int iParam0) //Position: 0x251B6 / 151990
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_692(bool bParam0, int iParam1) //Position: 0x251D4 / 152020
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_693(&uVar0, &uVar1);
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		uVar3 = GET_CRIME_FROM_OBJECT(&iVar2);
		if (GET_CRIME_CRIMINAL(&uVar3) != &bParam0 && Global_41252[GET_CRIME_TYPE(&uVar3)11].f_40 <= iParam1)
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

void Function_693(var uParam0, bool bParam1) //Position: 0x2526A / 152170
{
	ITERATE_EVERYWHERE(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uParam0, 31);
	if (!&bParam1 != "")
	{
		ITERATE_IN_SET(&uParam0, &bParam1);
	}
	else
	{
		ITERATE_IN_LAYOUT(&uParam0, GET_ITERATOR_PARENT(&uParam0));
	}
	return;
}

void Function_694(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x252A0 / 152224
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_695(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x252CD / 152269
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_696(StackVal, Param4, uParam3, &iParam6);
		Function_249(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_696(struct<2> Param0, var uParam2, var uParam3) //Position: 0x2530E / 152334
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_698(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_697(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_697(int iParam0) //Position: 0x25390 / 152464
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

var Function_698(struct<2> Param0, bool bParam2) //Position: 0x2583E / 153662
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

struct<8> Function_699(int iParam0) //Position: 0x258AA / 153770
{
	Function_412(iParam0 + 1);
	return StackVal, Function_412(iParam0 + 1);
}

int Function_700(int iParam0) //Position: 0x258B7 / 153783
{
	return Function_411(iParam0 + 1);
}

