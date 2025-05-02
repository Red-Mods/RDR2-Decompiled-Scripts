//Decompiled with MagicRDR v1.0
//Function Count : 552
//Statics Count : 858
//Natives Count : 733
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
	var uLocal_20 = 1;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 1;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 4;
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
	var uLocal_44 = 11;
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
	var uLocal_70 = 1;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 1;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 5;
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
	var uLocal_114 = 4;
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
	var uLocal_140 = 1;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 9;
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
	var uLocal_206 = 9;
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
	var uLocal_228 = 3;
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
	int iLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 2;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 3;
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
	int iLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 12;
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
	int iLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	struct<6> Local_387 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	bool bLocal_399 = false;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
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
	var uLocal_413 = 13;
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
	struct<15> Local_467[4];
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
	var uLocal_547 = 5;
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
	var uLocal_577 = 5;
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
	int iLocal_597 = 6;
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
	int iLocal_623 = 0;
	bool bLocal_624 = false;
	bool bLocal_625 = false;
	bool bLocal_626 = false;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	int iLocal_636[3] = { 0, 0, 0 };
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	int iLocal_644 = 12;
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
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	bool bLocal_694 = false;
	int iLocal_695 = 0;
	var uLocal_696 = 0;
	int iLocal_697 = 0;
	var uLocal_698 = 0;
	int iLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701[2] = { 0, 0 };
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	int iLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	int iLocal_711 = 0;
	var uLocal_712 = 0;
	bool bLocal_713 = false;
	var uLocal_714 = 0;
	bool bLocal_715 = false;
	var uLocal_716 = 0;
	int iLocal_717 = 0;
	var uLocal_718 = 0;
	struct<2> Local_719[4];
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	float fLocal_743 = 0.0f;
	var uLocal_744 = 0;
	struct<2> Local_745 = { 0, 0 } ;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	int iLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	int iLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	int iLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	float fLocal_763 = 0.0f;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	float fLocal_767 = 0.0f;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	int iLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	int iLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	int iLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	float fLocal_787 = 0.0f;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	float fLocal_791 = 0.0f;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	int iLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	int iLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	var uLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	bool bLocal_815 = false;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	char[] cLocal_826[4] = 0;
	var uLocal_827 = 0;
	char[] cLocal_828[4] = 0;
	var uLocal_829 = 0;
	char[] cLocal_830[4] = 0;
	var uLocal_831 = 0;
	char[] cLocal_832[4] = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	bool bLocal_842 = false;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
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
	iLocal_382 = 0;
	iLocal_824 = 1;
	iLocal_825 = 1;
	iLocal_844 = 2;
	iLocal_845 = 1;
	Local_387 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_399 = 99;
	iLocal_400 = 0;
	iLocal_401 = 1000;
	while (Function_285())
	{
		Function_237();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x54 / 84
{
	struct<2> Var0;
	
	Global_47151[3] = 0;
	if (DECOR_CHECK_EXIST(&iLocal_695, "nsuspended"))
	{
		ENABLE_MOVER(&iLocal_695);
		DECOR_REMOVE(&iLocal_695, "nsuspended");
	}
	if (IS_ACTOR_VALID(&iLocal_695))
	{
		MEMORY_CLEAR_ALL(&iLocal_695);
		Function_234(3, 1, 0, 1, 1);
	}
	if (IS_ACTOR_VALID(&iLocal_697))
	{
		DESTROY_ACTOR(&iLocal_697);
	}
	if (IS_ACTOR_VALID(&iLocal_707))
	{
		Function_233(&iLocal_707, 0);
		Function_225(&Global_11014, &Global_12796, 0, 0);
		SET_ACTOR_FACTION(&iLocal_707, 21);
		SET_ACTOR_UPDATE_PRIORITY(&iLocal_707, true);
		TASK_CLEAR(&iLocal_707);
		STOP_FORCE_LOOK_AT_COORD(&iLocal_707);
	}
	if (IS_ACTOR_VALID(&iLocal_711))
	{
		Function_225(&Global_11014, &Global_12796, 13, 0);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_268))
	{
		DESTROY_LAYOUT_OBJECTS(&iLocal_268);
		Function_224();
	}
	if (IS_LAYOUTREF_VALID(&iLocal_292))
	{
		DESTROY_LAYOUT_OBJECTS(&iLocal_292);
		Function_223();
	}
	Function_222(114688);
	Function_220(1);
	Function_218(32);
	Function_217();
	Function_216();
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	Function_215(&uLocal_385);
	Function_215(&iLocal_4);
	Function_214(3);
	Function_212(3, 0);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "Ranch02_ShowItemTutorial"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "Ranch02_ShowItemTutorial");
	}
	Function_185(bLocal_625, 1, 0, 1, 1, 1, 1, 1);
	Function_181(&iLocal_597);
	Function_181(&iLocal_644);
	Function_178();
	if (IS_ITERATOR_VALID(&uLocal_383))
	{
		DESTROY_ITERATOR(&uLocal_383);
	}
	RELEASE_LAYOUT_REF(&uLocal_385);
	if (bLocal_624)
	{
		GET_POSITION(Function_177(&Global_43660 + 8), &Var0);
		ADD_BLIP_FOR_ACTOR(&Global_43660 + 24, 354, 0, 2, 0);
		UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(&Global_43660 + 24), 1);
		SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(&Global_43660 + 24), 1,25f);
		Function_173(StackVal, Function_176(StackVal, Var0, 1, 1, 0), 20, Var0, 63);
		Function_26(Local_387, 1, 1, 1, 0);
	}
	else if (bLocal_625)
	{
		Function_22(Local_387);
	}
	else
	{
		Function_2(Local_387);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x267 / 615
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x288 / 648
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2A5 / 677
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x2C8 / 712
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x2DF / 735
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

void Function_7(int iParam0) //Position: 0x381 / 897
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x3A4 / 932
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

void Function_9() //Position: 0x3EE / 1006
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x407 / 1031
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

void Function_11(var uParam0, bool bParam1) //Position: 0x45A / 1114
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

struct<16> Function_12(int iParam0) //Position: 0x584 / 1412
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

bool Function_13() //Position: 0x5BE / 1470
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x5D9 / 1497
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x5E6 / 1510
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x606 / 1542
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x61D / 1565
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x638 / 1592
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x87F / 2175
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x8AB / 2219
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

bool Function_21(int iParam0) //Position: 0x8CF / 2255
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x8E4 / 2276
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x902 / 2306
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

struct<16> Function_24(int iParam0) //Position: 0x9A8 / 2472
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

struct<24> Function_25(char* cParam0) //Position: 0x9E7 / 2535
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xC3D / 3133
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
		Function_168(&(Global_6667[iVar228]));
		Function_167(4194304);
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

void Function_27() //Position: 0xD31 / 3377
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

bool Function_28(int iParam0, bool bParam1) //Position: 0xD63 / 3427
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

int Function_29(int iParam0) //Position: 0xDA1 / 3489
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xDBB / 3515
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xDD1 / 3537
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10CE / 4302
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

void Function_33(char* cParam0) //Position: 0x1143 / 4419
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

bool Function_34(var uParam0, var uParam1, int iParam2) //Position: 0x117D / 4477
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		if (Function_37(DECOR_GET_INT(&uParam0, &cVar1)) > 3)
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

bool Function_35(var uParam0, int iParam1) //Position: 0x11F9 / 4601
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(int iParam0) //Position: 0x120C / 4620
{
	switch (iParam0)
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

int Function_37(int iParam0) //Position: 0x12AD / 4781
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x12EA / 4842
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1300 / 4864
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x155E / 5470
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x159C / 5532
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

void Function_42(bool bParam0) //Position: 0x15DB / 5595
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

void Function_43() //Position: 0x1630 / 5680
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

void Function_44() //Position: 0x167B / 5755
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

void Function_45() //Position: 0x1781 / 6017
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

void Function_46() //Position: 0x17B4 / 6068
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

void Function_47() //Position: 0x1947 / 6471
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

void Function_48() //Position: 0x1B00 / 6912
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B0E / 6926
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

bool Function_50() //Position: 0x1D2B / 7467
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1D40 / 7488
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1DE7 / 7655
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2083 / 8323
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

var Function_54() //Position: 0x26C1 / 9921
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x26CA / 9930
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x26DB / 9947
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

struct<32> Function_57(char* cParam0) //Position: 0x27D2 / 10194
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x27ED / 10221
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2854 / 10324
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2866 / 10342
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2878 / 10360
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

int Function_62(int iParam0) //Position: 0x29AC / 10668
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x29BB / 10683
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x29F4 / 10740
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A31 / 10801
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2BCB / 11211
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

int Function_67(bool bParam0) //Position: 0x2E0F / 11791
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2E50 / 11856
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

struct<8> Function_69() //Position: 0x2ED9 / 11993
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

struct<8> Function_70() //Position: 0x2F70 / 12144
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

void Function_71() //Position: 0x2FEF / 12271
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x302C / 12332
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

void Function_73() //Position: 0x3238 / 12856
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

bool Function_74(char* cParam0) //Position: 0x32EF / 13039
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3307 / 13063
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

struct<8> Function_76() //Position: 0x33FF / 13311
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3409 / 13321
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x341A / 13338
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3430 / 13360
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x34FC / 13564
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3519 / 13593
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

bool Function_82(int iParam0) //Position: 0x3D45 / 15685
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3D80 / 15744
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(bool bParam0) //Position: 0x3D8F / 15759
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

bool Function_85(int iParam0) //Position: 0x426C / 17004
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0) //Position: 0x4282 / 17026
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_87(bool bParam0) //Position: 0x42A1 / 17057
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x42BB / 17083
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4325 / 17189
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

void Function_90(int iParam0) //Position: 0x454D / 17741
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

void Function_91() //Position: 0x45EB / 17899
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

void Function_92() //Position: 0x474D / 18253
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

int Function_93(int iParam0, char* cParam1) //Position: 0x47CD / 18381
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B24 / 19236
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

int Function_95(int iParam0) //Position: 0x4BAC / 19372
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4BC6 / 19398
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4BF1 / 19441
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4C1F / 19487
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x4EBB / 20155
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

void Function_100(int iParam0, int iParam1) //Position: 0x508F / 20623
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

int Function_101(int iParam0, char* cParam1) //Position: 0x52F9 / 21241
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

int Function_102() //Position: 0x5489 / 21641
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

void Function_103() //Position: 0x552A / 21802
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

void Function_104(int iParam0) //Position: 0x55E8 / 21992
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

var Function_105(int iParam0) //Position: 0x564E / 22094
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

int Function_106(int iParam0, bool bParam1) //Position: 0x56DD / 22237
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

var Function_107(int iParam0, int iParam1) //Position: 0x5889 / 22665
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

void Function_108() //Position: 0x58CE / 22734
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x58E4 / 22756
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5924 / 22820
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5964 / 22884
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5973 / 22899
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

int Function_113(int iParam0) //Position: 0x5B3B / 23355
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

var Function_114() //Position: 0x5BD0 / 23504
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5BF5 / 23541
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x60C4 / 24772
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

var Function_117(int iParam0) //Position: 0x63EB / 25579
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x648E / 25742
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

int Function_119(int iParam0, bool bParam1) //Position: 0x668B / 26251
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6836 / 26678
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6908 / 26888
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
			Function_165(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(Global_46760[0]);
			Function_162(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_160(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_162(Global_46816[0]);
			Function_152(0);
			Function_212(2, 1);
			Function_212(0, 1);
			Function_212(1, 1);
			break;
		
		case 0x00000003:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_162(Global_46816[0]);
			Function_162(Global_46760[0]);
			Function_150(0, 1);
			Function_150(15, 1);
			Function_150(9, 1);
			Function_150(12, 1);
			Function_150(16, 1);
			Function_212(3, 1);
			break;
		
		case 0x00000005:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_160(21, &bParam2, 4);
			Function_162(Global_46816[0]);
			Function_212(39, 1);
			break;
		
		case 0x00000007:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_162(Global_46816[0]);
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
			Function_162(Global_46760[0]);
			Function_162(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_162(Global_46760[0]);
			Function_162(Global_46816[2]);
			Function_137(&(Global_43791[Global_46816[2]]), 32768);
			Function_136(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_160(9, &bParam2, 4);
			Function_162(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_162(Global_46760[0]);
			Function_162(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_162(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_162(Global_46760[0]);
			Function_162(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_162(Global_46760[1]);
			Function_162(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_162(Global_46838[0]);
			Function_162(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_162(Global_46796[5]);
			Function_162(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_160(21, &bParam2, 4);
			Function_162(Global_46760[4]);
			Function_162(Global_46796[4]);
			Function_135(&Global_119935, 0x2000000);
			Function_135(&Global_119935, 0x4000000);
			Function_135(&Global_119935, 4096);
			Function_135(&Global_119935, 8);
			Function_135(&Global_119935, 8388608);
			Function_135(&Global_119935, 524288);
			Function_135(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_162(Global_46760[4]);
			Function_162(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_136(&(Global_43791[Global_46760[4]]), 256);
			Function_162(Global_46760[4]);
			Function_162(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_136(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_162(Global_46760[0]);
			Function_162(Global_46760[5]);
			Function_160(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_162(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_136(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_160(9, &bParam2, 4);
			Function_162(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_137(&(Global_43791[Global_46838[1]]), 32768);
			Function_162(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_160(12, &bParam2, 4);
			Function_136(&(Global_43791[Global_46838[1]]), 256);
			Function_162(Global_46816[3]);
			Function_162(Global_46866[0]);
			Function_162(Global_46850[0]);
			Function_152(4);
			Function_150(13, 1);
			Function_150(1, 1);
			Function_150(18, 1);
			Function_212(34, 1);
			Function_212(44, 1);
			Function_212(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_160(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_162(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_162(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_162(Global_46866[0]);
			Function_162(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_162(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_162(Global_46850[0]);
			Function_162(Global_46866[0]);
			Function_162(Global_46866[1]);
			Function_162(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_160(23, &bParam2, 3);
			Function_150(23, 1);
			Function_162(Global_46850[0]);
			Function_162(Global_46850[2]);
			Function_137(&(Global_43791[Global_46850[2]]), 32768);
			Function_136(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_160(19, &bParam2, 4);
			Function_162(Global_46850[0]);
			Function_162(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_160(24, &bParam2, 3);
			Function_150(24, 1);
			Function_162(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_162(Global_46850[0]);
			Function_162(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_162(Global_46866[12]);
			Function_162(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_162(Global_46866[12]);
			Function_162(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_160(25, &bParam2, 10);
			Function_162(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_162(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_162(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_160(13, &bParam2, 4);
			Function_162(Global_46866[2]);
			Function_162(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_148(8))
				{
					Function_138(8, 0, 0, 1, 0);
				}
			}
			Function_162(Global_46850[0]);
			Function_152(9);
			Function_150(7, 1);
			Function_150(11, 1);
			Function_150(3, 1);
			Function_150(20, 1);
			Function_212(57, 1);
			break;
		
		case 0x0000002A:
			Function_160(2, &bParam2, 4);
			Function_162(Global_46914[0]);
			Function_162(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_162(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_162(Global_46914[0]);
			Function_162(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_162(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_162(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_162(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_160(17, &bParam2, 4);
			Function_162(Global_46926[0]);
			Function_162(Global_46914[0]);
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
			Function_152(11);
			Function_162(Global_46914[1]);
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_162(Global_46914[1]);
			Function_162(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_162(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_162(Global_46914[1]);
			Function_122(11);
			Function_152(12);
			Global_26200[1114].f_40 = 0;
			Function_212(56, 1);
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

void Function_122(int iParam0) //Position: 0x7223 / 29219
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x73A0 / 29600
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x74AB / 29867
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x74D7 / 29911
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

int Function_126(vector3 vParam0) //Position: 0x752E / 29998
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

void Function_127(var uParam0, int iParam1) //Position: 0x757C / 30076
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x75D7 / 30167
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

void Function_129() //Position: 0x7778 / 30584
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x777E / 30590
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

void Function_131(bool bParam0, int iParam1) //Position: 0x782D / 30765
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7882 / 30850
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7898 / 30872
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

bool Function_134(int iParam0, int iParam1) //Position: 0x78E9 / 30953
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

void Function_135(var uParam0, int iParam1) //Position: 0x7916 / 30998
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7927 / 31015
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7941 / 31041
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7952 / 31058
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

void Function_139(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7AAE / 31406
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

bool Function_140() //Position: 0x7B39 / 31545
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7B66 / 31590
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

int Function_142(int iParam0) //Position: 0x7D16 / 32022
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7D6D / 32109
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

var Function_144(int iParam0) //Position: 0x7D92 / 32146
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7DE8 / 32232
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

bool Function_146(bool bParam0) //Position: 0x7E47 / 32327
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7E53 / 32339
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7E6F / 32367
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

bool Function_149() //Position: 0x7EC1 / 32449
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x7EF1 / 32497
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

int Function_151(int iParam0, int iParam1) //Position: 0x7F66 / 32614
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

void Function_152(int iParam0) //Position: 0x7FC3 / 32707
{
	var uVar0;
	var uVar1;
	
	if (!Function_78(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_159(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_159(&Global_26200[iParam014] + 88, 0);
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
				Function_153(14, 1, 0, 0, 0);
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

void Function_153(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8283 / 33411
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
			Function_155();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_154(3, bParam1);
				break;
			
			case 0x00000005:
				Function_154(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_154(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_154(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_154(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_154(2, SHIFT_LEFT(bParam1, 18));
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

void Function_154(int iParam0, bool bParam1) //Position: 0x8522 / 34082
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

void Function_155() //Position: 0x8591 / 34193
{
	if (Function_132(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_158(Global_42827);
			(&Global_42827 + 8) = Function_156(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_158(Global_42827);
			*(&Global_42827 + 8) = Function_156(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_156(int iParam0, int iParam1) //Position: 0x8611 / 34321
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
					if (Function_157(13) && iVar14)
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
					if (Function_157(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_157(23) && iVar15)
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
					if (Function_157(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_157(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_157(27) && iVar16)
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
					if (Function_157(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_157(49) && iVar13)
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
					if (Function_157(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(6, 0) && Function_157(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_157(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_28(9, 0) && Function_157(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_157(15) && iVar17)
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

int Function_157(int iParam0) //Position: 0x9274 / 37492
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0) //Position: 0x9289 / 37513
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

void Function_159(char* cParam0, int iParam1) //Position: 0x92D8 / 37592
{
	if (!IS_DOOR_VALID(&cParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&cParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&cParam0, "lockMe"))
	{
		DECOR_REMOVE(&cParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&cParam0))
	{
		SET_DOOR_LOCK(&cParam0, 0);
	}
	return;
}

void Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x9330 / 37680
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_161(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_165(bParam0, 0, 0);
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

bool Function_161(int iParam0, int iParam1) //Position: 0x93A3 / 37795
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_162(int iParam0) //Position: 0x93B7 / 37815
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_164(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_137(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_89(473, 1, 0, 0);
		iVar0 = Function_163(iParam0);
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

var Function_163(int iParam0) //Position: 0x94A8 / 38056
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

bool Function_164(var uParam0, int iParam1) //Position: 0x9500 / 38144
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_165(bool bParam0, bool bParam1, int iParam2) //Position: 0x951D / 38173
{
	if (!Function_166(bParam0))
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

bool Function_166(int iParam0) //Position: 0x9577 / 38263
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_167(bool bParam0) //Position: 0x9589 / 38281
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

void Function_168(struct<185> Param0) //Position: 0x95BD / 38333
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
			Function_169(4, 0, 0);
		}
	}
	return;
}

void Function_169(bool bParam0, var uParam1, int iParam2) //Position: 0x9628 / 38440
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
		uVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_170(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_170(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9712 / 38674
{
	int iVar0;
	
	Function_172(bParam0);
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
	Function_171();
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

void Function_171() //Position: 0x9891 / 39057
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_172(int iParam0) //Position: 0x989D / 39069
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

int Function_173(int iParam0, int iParam1, struct<2> Param2, int iParam4) //Position: 0x98E3 / 39139
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	
	if (!Function_85(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_74(StackVal, Param2))
	{
		return 0;
	}
	iVar2 = Function_175(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_126(StackVal, Param2);
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
		Function_125(uVar3);
		Var6 = Function_125(uVar3);
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_125(StackVal);
				Var4 = Function_125(StackVal);
				if (Function_124(StackVal, StackVal, Var4, Var6))
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
		Global_16865[iVar1] = ADD_BLIP_FOR_COORD(&Param2, Function_174(iParam1), 0.0f, 2, iVar2);
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

int Function_174(int iParam0) //Position: 0x9ACC / 39628
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

int Function_175(int iParam0) //Position: 0x9C03 / 39939
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

var Function_176(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9CBB / 40123
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

var Function_177(var uParam0) //Position: 0x9D5B / 40283
{
	var uVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar0) && IS_ACTOR_ALIVE(&uVar0))
		{
			return &uVar0;
		}
		bVar1++;
	}
	return "";
}

void Function_178() //Position: 0x9DA8 / 40360
{
	Function_180();
	Function_179();
	return;
}

void Function_179() //Position: 0x9DB4 / 40372
{
	Function_181(&iLocal_250 + 8);
	RELEASE_LAYOUT_REF(&iLocal_250);
	return;
}

void Function_180() //Position: 0x9DC7 / 40391
{
	Function_181(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_181(int iParam0) //Position: 0x9DDA / 40410
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_182(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_182(struct<2>[] Param0, int iParam1) //Position: 0x9E02 / 40450
{
	if (Function_184(&(Param0[iParam12]), 4))
	{
		if (Function_184(&(Param0[iParam12]), 1))
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
			Function_183(&(Param0[iParam12]), 1);
			Function_183(&(Param0[iParam12]), 2);
			Function_183(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_183(struct<13> Param0) //Position: 0x9F4D / 40781
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_184(struct<13> Param0) //Position: 0x9F6A / 40810
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_185(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9F88 / 40840
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_211());
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
	Function_210();
	CLEAR_PRINTED_OBJECTIVE();
	Function_209();
	Function_207(0);
	Function_206();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_205();
	Function_204();
	Function_210();
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
	Function_222(1178687);
	Function_220(33039);
	Function_197(0x218003f);
	Function_196(4194560);
	Function_195();
	Function_194();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_191(0, 1, 1);
	}
	else
	{
		Function_191(0, 1, 1);
	}
	Function_190();
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
	Function_186();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_186() //Position: 0xA194 / 41364
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
		if (Function_189() > 3)
		{
			bVar0 *= 2;
		}
		Function_187(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_187(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA1EB / 41451
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_188(&Global_39922 + 148[iParam0]))
	{
		(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_188(bool bParam0) //Position: 0xA23B / 41531
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_189() //Position: 0xA264 / 41572
{
	return Global_21369.f_248;
}

void Function_190() //Position: 0xA26F / 41583
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

void Function_191(int iParam0, bool bParam1, int iParam2) //Position: 0xA299 / 41625
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
			Function_192(Global_43789);
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
				if (Function_164(&(Global_43791[iVar0]), 4) || Function_164(&(Global_43791[iVar0]), 1))
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

void Function_192(int iParam0) //Position: 0xA3A5 / 41893
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_193())
			{
				return;
			}
		}
		if (!Function_164(&(Global_43791[iParam0]), 2048))
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

bool Function_193() //Position: 0xA424 / 42020
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_164(&(Global_43791[iVar0]), 4) || Function_164(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_194() //Position: 0xA48D / 42125
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

void Function_195() //Position: 0xA4B3 / 42163
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

void Function_196(int iParam0) //Position: 0xA4D9 / 42201
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_197(var uParam0) //Position: 0xA4F6 / 42230
{
	Global_39922.f_88 = (Global_39922.f_88 || uParam0);
	return;
}

void Function_198() //Position: 0xA509 / 42249
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

void Function_199(int iParam0) //Position: 0xA581 / 42369
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

int Function_200(bool bParam0, bool bParam1, int iParam2) //Position: 0xA6B7 / 42679
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

var Function_201(bool bParam0) //Position: 0xA705 / 42757
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

void Function_202(int iParam0) //Position: 0xA7F9 / 43001
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

void Function_203(bool bParam0) //Position: 0xA87C / 43132
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

void Function_204() //Position: 0xA8F3 / 43251
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

void Function_205() //Position: 0xA937 / 43319
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

void Function_206() //Position: 0xA97B / 43387
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_207(int iParam0) //Position: 0xA991 / 43409
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

bool Function_208() //Position: 0xA9D1 / 43473
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

void Function_209() //Position: 0xA9F6 / 43510
{
	Global_15862 = 0.0f;
	return;
}

void Function_210() //Position: 0xAA00 / 43520
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

int Function_211() //Position: 0xAA2B / 43563
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

int Function_212(int iParam0, int iParam1) //Position: 0xAA48 / 43592
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_213(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_213(int iParam0, int iParam1) //Position: 0xAABB / 43707
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_214(bool bParam0) //Position: 0xAB16 / 43798
{
	char* cVar0[32];
	
	strcpy(&cVar0, Function_201(bParam0), 32);
	stradd(&cVar0, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar0);
	}
	return;
}

void Function_215(int iParam0) //Position: 0xAB57 / 43863
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_IN_LAYOUT(&uVar0, &iParam0);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&uVar1))
	{
		while (IS_OBJECT_VALID(&uVar1))
		{
			uVar2 = GET_BLIP_ON_OBJECT(&uVar1);
			if (IS_BLIP_VALID(&uVar2))
			{
				REMOVE_BLIP(&uVar2);
			}
			uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_216() //Position: 0xABBF / 43967
{
	Function_218(64);
	Global_43580.f_52 = 0.0f;
	return;
}

void Function_217() //Position: 0xABD0 / 43984
{
	Global_43580.f_56 = 0;
	return;
}

void Function_218(int iParam0) //Position: 0xABDC / 43996
{
	Function_219(&Global_43580, iParam0);
	return;
}

void Function_219(var uParam0, int iParam1) //Position: 0xABEA / 44010
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_220(int iParam0) //Position: 0xAC12 / 44050
{
	Function_221(&Global_43580, iParam0);
	return;
}

void Function_221(var uParam0, int iParam1) //Position: 0xAC20 / 44064
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_222(bool bParam0) //Position: 0xAC3F / 44095
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_223() //Position: 0xAC6C / 44140
{
	Function_181(&iLocal_292 + 8);
	RELEASE_LAYOUT_REF(&iLocal_292);
	return;
}

void Function_224() //Position: 0xAC81 / 44161
{
	Function_181(&iLocal_268 + 8);
	RELEASE_LAYOUT_REF(&iLocal_268);
	return;
}

void Function_225(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xAC96 / 44182
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_232(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_232(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_232(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_231(&(Param0[iVar02]), 8);
	}
	Function_231(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_230(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_226(&Param0, &vParam1, iParam2, 0);
	}
}

void Function_226(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xAD3E / 44350
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_229(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_228(Global_43790), Function_227(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_232(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_232(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_229(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_228(Global_43790), Function_227(Global_43790), false, 0);
	}
}

int Function_227(int iParam0) //Position: 0xAEA4 / 44708
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

int Function_228(int iParam0) //Position: 0xAECF / 44751
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

void Function_229(var uParam0, int iParam1) //Position: 0xAF03 / 44803
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_230(int iParam0) //Position: 0xAF14 / 44820
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 0);
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			DEREFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, 3);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, 2);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 0);
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, true);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_231(var uParam0, int iParam1) //Position: 0xAFBD / 44989
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_232(var uParam0, int iParam1) //Position: 0xAFD7 / 45015
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_233(int iParam0, bool bParam1) //Position: 0xAFF4 / 45044
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("SK_SHOP_SET_ACTIVE_OVERRIDE: Actor not valid for SK_SHOP_SET_ACTIVE_WHEN_STOLEN, quitting.");
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "ACTIVE_WHEN_STOLEN"))
	{
		if (!bParam1)
		{
			return DECOR_REMOVE(&iParam0, "ACTIVE_WHEN_STOLEN");
		}
	}
	if (bParam1)
	{
		return DECOR_SET_BOOL(&iParam0, "ACTIVE_WHEN_STOLEN", true);
	}
	return 0;
}

int Function_234(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xB0CC / 45260
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
		Function_236(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_235(&Global_15402[iParam014] + 8);
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

void Function_235(int iParam0) //Position: 0xB40E / 46094
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

void Function_236(var uParam0) //Position: 0xB441 / 46145
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_237() //Position: 0xB458 / 46168
{
	var uVar0[9];
	int iVar10;
	
	if (Function_284())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Buy Meds";
		uVar0[4] = "Stage 03 - Stagecoach";
		uVar0[5] = "Move Wagon To Start";
		uVar0[6] = "Move Wagon To Finish";
		uVar0[7] = "Kick Bonnie Out";
		uVar0[8] = "Mission Area Edge";
		iVar10 = Function_270(&uLocal_627, &uVar0, &Local_387 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_269(&iVar10, &bLocal_399, &iLocal_400, &iLocal_401))
		{
			Function_262();
			Function_261();
		}
		switch (iVar10)
		{
			case 0x00000000:
				Function_262();
				Function_261();
				Function_260(&bLocal_624, 8);
				break;
			
			case 0x00000001:
				Function_262();
				Function_261();
				Function_256(bLocal_399);
				Function_252(StackVal, 5, &bLocal_625, &bLocal_399, Function_258(bLocal_399), Function_256(bLocal_399), 0);
				break;
			
			case 0x00000002:
				Function_262();
				Function_261();
				Function_248(4);
				Function_247(&bLocal_626, 4);
				break;
			
			case 0x00000003:
				Function_262();
				Function_261();
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_245();
				Function_243(&iLocal_751);
				bLocal_399 = 2;
				iLocal_400 = 0;
				iLocal_401 = 1000;
				break;
			
			case 0x00000004:
				Function_262();
				Function_261();
				Function_246(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				Function_238();
				Function_243(&iLocal_751);
				bLocal_399 = 2;
				iLocal_400 = 0;
				iLocal_401 = 1000;
				break;
			
			case 0x00000005:
				Function_262();
				if (!IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
				{
					SET_ACTOR_IN_VEHICLE(&Global_54076, &iLocal_697, false);
				}
				if (IS_ACTOR_VALID(&iLocal_697))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_697, *(&iLocal_4 + 312[23]), 1, 1, true);
				}
				break;
			
			case 0x00000006:
				Function_262();
				if (!IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
				{
					SET_ACTOR_IN_VEHICLE(&Global_54076, &iLocal_697, false);
				}
				if (IS_ACTOR_VALID(&iLocal_697))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_697, *(&iLocal_4 + 312[43]), 1, 1, true);
				}
				break;
			
			case 0x00000007:
				Function_262();
				if (IS_ACTOR_VALID(&iLocal_695))
				{
					TASK_VEHICLE_LEAVE(&iLocal_695);
				}
				break;
			
			case 0x00000008:
				Function_262();
				if (!IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
				{
					SET_ACTOR_IN_VEHICLE(&Global_54076, &iLocal_697, false);
				}
				if (IS_ACTOR_VALID(&iLocal_697))
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_697, *(&iLocal_4 + 312[33]), 1, 1, true);
				}
				break;
			}
	}
	return;
}

void Function_238() //Position: 0xB726 / 46886
{
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 544[03]), 1, 1, true);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_695, *(&iLocal_4 + 584[53]), 1, 1, true);
	TASK_STAND_STILL(&iLocal_695, -1.0f, 0, 0);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_697, *(&iLocal_4 + 584[43]), 1, 1, true);
	Function_210();
	if (IS_OBJECT_VALID(&bLocal_715))
	{
		DESTROY_OBJECT(&bLocal_715);
	}
	if (IS_BLIP_VALID(&uLocal_834))
	{
		REMOVE_BLIP(&uLocal_834);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_268))
	{
		Function_224();
	}
	Function_239();
	return;
}

void Function_239() //Position: 0xB7CB / 47051
{
	Function_240(&iLocal_644, "p_gen_trunk01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_milkCan01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_watermelon01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_barrelSmall01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_sackCorn01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_flourSack01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_toolBox01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_bottle01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_bucketFish01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_woodPile02x", 0, 0);
	Function_240(&iLocal_644, "p_gen_bottleSnakeOil01x", 0, 0);
	Function_240(&iLocal_644, "p_gen_package01x", 0, 0);
	return;
}

var Function_240(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB933 / 47411
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_242(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_241(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

void Function_241(struct<13> Param0) //Position: 0xB971 / 47473
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

var Function_242(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB984 / 47492
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_184(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_241(&(Param0[iVar02]), 4);
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

void Function_243(int iParam0) //Position: 0xBA53 / 47699
{
	Function_244(&iParam0, 0.0f);
	return;
}

void Function_244(vector3 vParam0) //Position: 0xBA60 / 47712
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_245() //Position: 0xBA85 / 47749
{
	Function_210();
	if (IS_OBJECT_VALID(&bLocal_715))
	{
		DESTROY_OBJECT(&bLocal_715);
	}
	if (IS_BLIP_VALID(&uLocal_834))
	{
		REMOVE_BLIP(&uLocal_834);
	}
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_4 + 440[03]), 1, 1, true);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_695, *(&iLocal_4 + 440[23]), 1, 1, true);
	TASK_STAND_STILL(&iLocal_695, -1.0f, 0, 0);
	return;
}

void Function_246(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xBAFA / 47866
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

void Function_247(bool bParam0, int iParam1) //Position: 0xBB24 / 47908
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_248(&iParam1);
	bParam0 = 1;
	return;
}

void Function_248(int iParam0) //Position: 0xBB49 / 47945
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_251("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_250(2) || Function_250(8)) || Function_250(9)) || Function_250(10))
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
		Function_251("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_251("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_251("");
	}
	else if (iParam0 == 8)
	{
		Function_249();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_249();
	}
	return;
}

void Function_249() //Position: 0xBC40 / 48192
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_250(int iParam0) //Position: 0xBC4C / 48204
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

void Function_251(char* cParam0) //Position: 0xBC82 / 48258
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_252(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xBCEE / 48366
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_253(StackVal, Param4, uParam3, &iParam6);
		Function_248(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_253(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBD2F / 48431
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_255(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_254(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_254(int iParam0) //Position: 0xBDB1 / 48561
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

var Function_255(struct<2> Param0, bool bParam2) //Position: 0xC26C / 49772
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

struct<8> Function_256(int iParam0) //Position: 0xC2D8 / 49880
{
	Function_257(iParam0 + 1);
	return StackVal, Function_257(iParam0 + 1);
}

struct<8> Function_257(int iParam0) //Position: 0xC2E5 / 49893
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal, *(&iLocal_4 + 312[03]);
			break;
		
		case 0x00000001:
			return StackVal, *(&iLocal_4 + 896[23]);
			break;
		
		case 0x00000002:
			return StackVal, *(&iLocal_4 + 440[13]);
			break;
		
		case 0x00000065:
			return StackVal, *(&iLocal_4 + 544[03]);
			break;
	}
	return StackVal, *(&iLocal_4 + 312[03]);
}

int Function_258(int iParam0) //Position: 0xC34C / 49996
{
	return Function_259(iParam0 + 1);
}

int Function_259(int iParam0) //Position: 0xC359 / 50009
{
	switch (iParam0)
	{
		case 0x00000000:
			return StackVal;
			break;
		
		case 0x00000001:
			return StackVal;
			break;
		
		case 0x00000002:
			return StackVal;
			break;
		
		case 0x00000065:
			return StackVal;
			break;
	}
	return StackVal;
}

void Function_260(bool bParam0, int iParam1) //Position: 0xC3CA / 50122
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_248(&iParam1);
	bParam0 = 1;
	return;
}

void Function_261() //Position: 0xC3EF / 50159
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_262() //Position: 0xC404 / 50180
{
	Function_264();
	Function_263(10, 3);
	return;
}

void Function_263(int iParam0, int iParam1) //Position: 0xC413 / 50195
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

void Function_264() //Position: 0xC560 / 50528
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_268())
	{
		Function_267(10, 3);
	}
	else
	{
		Function_265();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_265() //Position: 0xC5AB / 50603
{
	Function_266(25, 2);
	return;
}

void Function_266(int iParam0, int iParam1) //Position: 0xC5B7 / 50615
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

void Function_267(int iParam0, int iParam1) //Position: 0xC7E3 / 51171
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

bool Function_268() //Position: 0xC930 / 51504
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

bool Function_269(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC998 / 51608
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_262();
			Function_261();
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
		Function_251("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_270(struct<17> Param0) //Position: 0xCA47 / 51783
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_283(&Var12, &Var0);
	uVar15 = Function_282(uParam1, &Var12);
	Function_281(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_280(&Param0, uVar15);
	Function_278(StackVal, &Param0, Var12.f_12);
	Function_276(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_275(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_272(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_271(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_271(int iParam0, int iParam1, int iParam2) //Position: 0xCB3B / 52027
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

bool Function_272(struct<17> Param0) //Position: 0xCB9B / 52123
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
				Function_274(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_274(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_271(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_273(Param1.f_64);
	}
	else
	{
		Function_273(Param1.f_64);
	}
	return 0;
}

void Function_273(bool bParam0) //Position: 0xCD2E / 52526
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

void Function_274(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCD6C / 52588
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

var Function_275(int iParam0, struct<21> Param1) //Position: 0xCE22 / 52770
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_276(vector3 vParam0) //Position: 0xCE49 / 52809
{
	switch (Function_277())
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

int Function_277() //Position: 0xCEF5 / 52981
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

void Function_278(vector3 vParam0) //Position: 0xCF31 / 53041
{
	switch (Function_279(&vParam0))
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

int Function_279(bool bParam0) //Position: 0xCFDA / 53210
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

var Function_280(struct<21> Param0) //Position: 0xD0FA / 53498
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

void Function_281(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD2B4 / 53940
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

var Function_282(int iParam0, struct<13> Param1) //Position: 0xD350 / 54096
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_283(struct<17> Param0) //Position: 0xD36C / 54124
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

bool Function_284() //Position: 0xD3C6 / 54214
{
	return Global_47307;
}

bool Function_285() //Position: 0xD3CF / 54223
{
	if (IS_EXITFLAG_SET())
	{
		Function_256(bLocal_399);
		Function_252(StackVal, 4, &bLocal_625, &bLocal_399, Function_258(bLocal_399), Function_256(bLocal_399), 0);
		return 0;
	}
	Function_551(StackVal, StackVal, StackVal, StackVal, StackVal, Local_387, bLocal_399, iLocal_400, &bLocal_626, &bLocal_624, &bLocal_625);
	Function_550(17, 0, 0, 23, 59, 59);
	if (bLocal_399 == 99 && bLocal_399 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_256(bLocal_399);
			Function_252(StackVal, 1, &bLocal_625, &bLocal_399, Function_258(bLocal_399), Function_256(bLocal_399), 0);
			return 1;
		}
		if (iLocal_400 < 4 && iLocal_400 > 105)
		{
			if (Function_530(&Local_467, &uLocal_413, &uLocal_589, &uLocal_383, uLocal_811))
			{
				if (Function_528(&uLocal_589))
				{
					Function_256(bLocal_399);
					Function_252(StackVal, 5, &bLocal_625, &bLocal_399, Function_258(bLocal_399), Function_256(bLocal_399), 0);
				}
				return 1;
			}
		}
		if (Global_6646 || Global_6647)
		{
			Function_256(bLocal_399);
			Function_252(StackVal, 2, &bLocal_625, &bLocal_399, Function_258(bLocal_399), Function_256(bLocal_399), 0);
			return 1;
		}
		Function_527();
	}
	switch (bLocal_399)
	{
		case 0x00000063:
			Function_497();
			break;
		
		case 0x00000000:
			Function_489();
			break;
		
		case 0x00000001:
			Function_448();
			break;
		
		case 0x00000002:
			Function_397();
			break;
		
		case 0x00000065:
			Function_288();
			break;
		
		case 0x00000064:
			if (Function_287(&bLocal_625))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_286(&bLocal_399, &iLocal_400, &iLocal_401))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_624)
	{
		Function_260(&bLocal_624, 8);
		Function_1();
		return 0;
	}
	if (bLocal_625 && bLocal_399 == 100)
	{
		Function_256(bLocal_399);
		Function_252(StackVal, 5, &bLocal_625, &bLocal_399, Function_258(bLocal_399), Function_256(bLocal_399), 0);
	}
	if (bLocal_626)
	{
		Function_247(&bLocal_626, 4);
		Function_1();
		return 0;
	}
	return 1;
}

bool Function_286(var uParam0, var uParam1, int iParam2) //Position: 0xD574 / 54644
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

bool Function_287(int iParam0) //Position: 0xD5BD / 54717
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_288() //Position: 0xD5D1 / 54737
{
	if (iLocal_400 < 4 && iLocal_400 > 105)
	{
	}
	switch (iLocal_400)
	{
		case 0x00000000:
			Function_393(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			iLocal_623 = Global_46760[0];
			if (!Function_392(iLocal_623))
			{
				Function_391(&Local_387);
			}
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (iLocal_636[2] == 0)
			{
				Function_238();
				Function_390(1);
			}
			else
			{
				Function_348();
				Function_390(3);
			}
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				if ((STREAMING_IS_WORLD_LOADED() && Function_392(iLocal_623)) && Function_347())
				{
					Function_348();
					Function_390(3);
				}
			}
			else
			{
				Function_348();
				Function_390(3);
			}
			break;
		
		case 0x00000003:
			if (Function_292("$/cutscene/ranch02_end/ranch02_end", &iLocal_401, &Local_387, &bLocal_399, 67953, 67727, 66612, 64939, 64034, 58100, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_390(106);
				UNK_0x9CED1C7E(0);
			}
			if (Function_289(&iLocal_401 + 4) < 30.0f)
			{
				UNK_0x9CED1C7E(1);
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_636[2] = 1;
				bLocal_624 = true;
			}
			break;
	}
	return;
}

float Function_289(vector3 vParam0) //Position: 0xD710 / 55056
{
	if (Function_291(&vParam0))
	{
		if (Function_290(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_290(int iParam0) //Position: 0xD7DD / 55261
{
	return Function_14(iParam0, 2);
}

bool Function_291(float fParam0) //Position: 0xD7EB / 55275
{
	return Function_14(fParam0, 1);
}

bool Function_292(var uParam0, int iParam1, struct<41> Param2) //Position: 0xD7F9 / 55289
{
	if (!&bParam15)
	{
		Function_302(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_301(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&uParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&uParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_243(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_300())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_299(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_243(&iParam1 + 4);
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
					Function_299(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_289(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_289(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_297(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_299(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_243(&iParam1 + 4);
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
						Function_296(1.0f);
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
						Function_294();
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
					Function_293(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_301(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_293(var uParam0, bool bParam1) //Position: 0xDE5B / 56923
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

void Function_294() //Position: 0xDF2A / 57130
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_295();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_295() //Position: 0xDF6F / 57199
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_296(bool bParam0) //Position: 0xDF81 / 57217
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

void Function_297(var uParam0, int iParam1) //Position: 0xDF9E / 57246
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
			if ((&iVar3 == &Global_54076 && !Function_298(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_298(int iParam0) //Position: 0xE030 / 57392
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

int Function_299(bool bParam0) //Position: 0xE061 / 57441
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
						DECOR_SET_BOOL(&uVar1, "refdbycutscene", true);
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

bool Function_300() //Position: 0xE124 / 57636
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

bool Function_301(struct<37> Param0) //Position: 0xE161 / 57697
{
	return Param0.f_36;
}

void Function_302(var uParam0, int iParam1) //Position: 0xE16C / 57708
{
	Function_303(&uParam0, &iParam1, 0);
	return;
}

void Function_303(var uParam0, bool bParam1, var uParam2) //Position: 0xE17C / 57724
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
			Function_246(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						if (!IS_STRING_VALID(&uParam2))
						{
							Function_246(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

int Function_304() //Position: 0xE2F4 / 58100
{
	switch (bLocal_399)
	{
		case 0x00000063:
			if (Function_315() && Function_310(&iLocal_597))
			{
				if (Global_99146)
				{
					Global_99146 = 0;
				}
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_309();
				}
				else if (!IS_LAYOUTREF_VALID(&iLocal_268))
				{
					Function_306(&iLocal_697);
				}
				else
				{
					Function_305(&iLocal_268, &iLocal_697);
					return 1;
				}
			}
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000065:
			DESTROY_ACTOR(&iLocal_697);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

void Function_305(int iParam0, int iParam1) //Position: 0xE385 / 58245
{
	var uVar0;
	int iVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 17);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	if (IS_OBJECT_VALID(&iVar1))
	{
		while (IS_OBJECT_VALID(&iVar1))
		{
			SET_OBJECT_COLLIDE_WITH_OBJECT(&iVar1, &iParam1, 0);
			iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

bool Function_306(int iParam0) //Position: 0xE3D3 / 58323
{
	var uVar0;
	
	Function_308(3, 2);
	uVar0 = &uVar0;
	Function_240(&iLocal_268 + 8, "p_gen_trunk01x", 0, 0);
	Function_240(&iLocal_268 + 8, "p_gen_milkCan01x", 0, 0);
	Function_240(&iLocal_268 + 8, "p_gen_toolBox01x", 0, 0);
	if (!Function_310(&iLocal_268 + 8))
	{
		return 0;
	}
	iLocal_268 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	*(&iLocal_268 + 64) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_268, "ntrunk01x0", "p_gen_trunk01x", Vector(-0,03438865f, 1,209469f, -0,8728744f), Vector(0.0f, 358.0f, 0.0f), 1);
	*(&iLocal_268 + 72) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_268, "milkCan01x0", "p_gen_milkCan01x", Vector(0,316323f, 1,209f, -0,2400429f), Vector(0.0f, 10.0f, 0.0f), 1);
	*(&iLocal_268 + 80) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_268, "milkCan01x1", "p_gen_milkCan01x", Vector(0,1973238f, 1,209f, 0,2280484f), Vector(0.0f, 50.0f, 0.0f), 1);
	*(&iLocal_268 + 88) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_268, "toolBox01x0", "p_gen_toolBox01x", Vector(-0,04628135f, 1,209f, -0,1119608f), Vector(0.0f, 45.0f, 0.0f), 1);
	Function_307(&iLocal_268, &iParam0);
	return 1;
}

void Function_307(int iParam0, var uParam1) //Position: 0xE57A / 58746
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &uParam1, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

void Function_308(int iParam0, int iParam1) //Position: 0xE5C5 / 58821
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

struct<8> Function_309() //Position: 0xE60F / 58895
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	Function_308(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Ranch02_layout");
	*(&iLocal_4 + 152) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVolumes_set");
	*(&iLocal_4 + 112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol01_01", 2,802597E-45f, Vector(-792,9703f, 94,21712f, 2415,638f), Vector(0.0f, 55.0f, 0.0f), Vector(31,49142f, 6,158348f, 18,13282f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 152, &iLocal_4 + 112[0]);
	*(&iLocal_4 + 112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol02_01", 2,802597E-45f, Vector(-2148,552f, 18,94116f, 2622,08f), Vector(0.0f, 0.0f, 0.0f), Vector(27,80091f, 6,508968f, 22,72434f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 152, &iLocal_4 + 112[1]);
	*(&iLocal_4 + 112[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol03_01", 2,802597E-45f, Vector(-2174,066f, 18,29125f, 2633,275f), Vector(0.0f, 0,2509014f, 0.0f), Vector(31,73238f, 13,57859f, 19,02061f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 152, &iLocal_4 + 112[2]);
	*(&iLocal_4 + 112[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol03_03", 2,802597E-45f, Vector(-2148f, 16,44941f, 2624.0f), Vector(0.0f, 0,2509014f, 0.0f), Vector(14,25779f, 13,57859f, 19,02061f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 152, &iLocal_4 + 112[3]);
	*(&iLocal_4 + 256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "ArmadilloVolumes_set");
	*(&iLocal_4 + 160[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StopHelpVol", 2,802597E-45f, Vector(-2134,48f, 18,84859f, 2609,437f), Vector(0.0f, 0.0f, 0.0f), Vector(149,873f, 20.0f, 71,78873f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[0]);
	*(&iLocal_4 + 160[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nDoctorVol", 2,802597E-45f, Vector(-2125,51f, 18,24706f, 2598,166f), Vector(0.0f, 0.0f, 0.0f), Vector(7,51512f, 3,197462f, 12,06059f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[1]);
	*(&iLocal_4 + 160[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "MissionAreaVol", 2,802597E-45f, Vector(-1534,591f, 0.0f, 2552,408f), Vector(0.0f, 0.0f, 0.0f), Vector(2060.0f, 1000.0f, 1050.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[2]);
	*(&iLocal_4 + 160[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WagonVol", 2,802597E-45f, Vector(-2152,205f, 19,57004f, 2618,174f), Vector(0.0f, 0.0f, 0.0f), Vector(33,66684f, 11,14176f, 11,47624f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[3]);
	*(&iLocal_4 + 160[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "DoctorsOfficeVol", 2,802597E-45f, Vector(-2125,322f, 18,24706f, 2596,512f), Vector(0.0f, 0.0f, 0.0f), Vector(5,44402f, 3,435373f, 6,517908f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[4]);
	*(&iLocal_4 + 160[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HalfwayVol", 2,802597E-45f, Vector(-1404,625f, 93,132f, 2901,677f), Vector(0.0f, 46,08891f, 0.0f), Vector(83,53941f, 14,07066f, 11,47624f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[5]);
	*(&iLocal_4 + 160[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ArmaVol", 2,802597E-45f, Vector(-2141,81f, 16,09741f, 2610,515f), Vector(0.0f, 0.0f, 0.0f), Vector(262,2645f, 29,53179f, 273,607f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[6]);
	*(&iLocal_4 + 160[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ArmaTrafficRestrict01", 2,802597E-45f, Vector(-2097,077f, 16,43155f, 2597,497f), Vector(0.0f, -33,10498f, 0.0f), Vector(7,050785f, 15,29846f, 38,26844f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[7]);
	*(&iLocal_4 + 160[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ArmaTrafficRestrict02", 2,802597E-45f, Vector(-2139,377f, 16,09741f, 2610,235f), Vector(0.0f, -89,52934f, 0.0f), Vector(6,92068f, 15,51713f, 80,63844f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[8]);
	*(&iLocal_4 + 160[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Finish01", 2,802597E-45f, Vector(-2147,993f, 16,09741f, 2614,382f), Vector(0.0f, -90,56954f, 0.0f), Vector(7,050785f, 15,29846f, 10,89218f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[9]);
	*(&iLocal_4 + 160[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "GeneralStoreVol", 2,802597E-45f, Vector(-2150,013f, 17,85415f, 2624,398f), Vector(0.0f, -90,71819f, 0.0f), Vector(4,338842f, 3,148834f, 5,428536f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 256, &iLocal_4 + 160[10]);
	*(&iLocal_4 + 280) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "DogVolume_set");
	*(&iLocal_4 + 264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "DogVol", 2,802597E-45f, Vector(-816,1568f, 95,03628f, 2409,718f), Vector(0.0f, -15,04931f, 0.0f), Vector(6,873518f, 7,662602f, 33,61822f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 280, &iLocal_4 + 264[0]);
	*(&iLocal_4 + 304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "MacFarlaneVolumes_set");
	*(&iLocal_4 + 288[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RailroadVolume", 2,802597E-45f, Vector(-957,2974f, 91,28687f, 2448,087f), Vector(0.0f, 21,53725f, 0.0f), Vector(14,98951f, 11,36527f, 18,4358f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 304, &iLocal_4 + 288[0]);
	*(&iLocal_4 + 312[03]) = Vector(-794,4251f, 92,23178f, 2418,443f);
	*(&iLocal_4 + 312[03] + 12) = Vector(0.0f, 140.0f, 0.0f);
	*(&iLocal_4 + 312[13]) = Vector(-795,8973f, 92,23282f, 2421,647f);
	*(&iLocal_4 + 312[13] + 12) = Vector(0.0f, 140.0f, 0.0f);
	*(&iLocal_4 + 312[23]) = Vector(-798,1161f, 92,34277f, 2425,877f);
	*(&iLocal_4 + 312[23] + 12) = Vector(0.0f, 51.0f, 0.0f);
	*(&iLocal_4 + 312[33]) = Vector(-524,9659f, 96,12491f, 2523,144f);
	*(&iLocal_4 + 312[33] + 12) = Vector(0.0f, 240.0f, 0.0f);
	*(&iLocal_4 + 312[43]) = Vector(-1977,655f, 19,138f, 2610,189f);
	*(&iLocal_4 + 312[43] + 12) = Vector(0.0f, 72,597f, 0.0f);
	*(&iLocal_4 + 440[03]) = Vector(-2142,415f, 16,097f, 2613,761f);
	*(&iLocal_4 + 440[03] + 12) = Vector(0.0f, 250.0f, 0.0f);
	*(&iLocal_4 + 440[13]) = Vector(-2142,415f, 16,097f, 2613,761f);
	*(&iLocal_4 + 440[13] + 12) = Vector(0.0f, 250.0f, 0.0f);
	*(&iLocal_4 + 440[23]) = Vector(-2141,921f, 16,45016f, 2619,841f);
	*(&iLocal_4 + 440[23] + 12) = Vector(0.0f, -246,9527f, 0.0f);
	*(&iLocal_4 + 440[33]) = Vector(-2141,921f, 16,45016f, 2619,841f);
	*(&iLocal_4 + 440[33] + 12) = Vector(0.0f, -246,9527f, 0.0f);
	*(&iLocal_4 + 544[03]) = Vector(-2151,27f, 16,38708f, 2616,907f);
	*(&iLocal_4 + 544[03] + 12) = Vector(0.0f, 5,513038f, 0.0f);
	*(&iLocal_4 + 576) = CREATE_OBJECTSET_IN_LAYOUT("ArmadilloPositionsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 584[03]) = Vector(-2125,268f, 16,88319f, 2600,382f);
	*(&iLocal_4 + 584[03] + 12) = Vector(0.0f, -179,2227f, 0.0f);
	*(&iLocal_4 + 808[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DoctorOfficeDoorPos", Vector(-2125,268f, 16,88319f, 2600,382f), Vector(0.0f, -179,2227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[0], &iLocal_4 + 576);
	*(&iLocal_4 + 584[13]) = Vector(-2126,791f, 16,88319f, 2597,452f);
	*(&iLocal_4 + 584[13] + 12) = Vector(0.0f, -179,2227f, 0.0f);
	*(&iLocal_4 + 808[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DoctorCounterPos", Vector(-2126,791f, 16,88319f, 2597,452f), Vector(0.0f, -179,2227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[1], &iLocal_4 + 576);
	*(&iLocal_4 + 584[23]) = Vector(-2126,791f, 16,88319f, 2595,279f);
	*(&iLocal_4 + 584[23] + 12) = Vector(0.0f, -179,2227f, 0.0f);
	*(&iLocal_4 + 808[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DoctorOfficePos", Vector(-2126,791f, 16,88319f, 2595,279f), Vector(0.0f, -179,2227f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[2], &iLocal_4 + 576);
	*(&iLocal_4 + 584[33]) = Vector(-2153,137f, 16,774f, 2629,216f);
	*(&iLocal_4 + 584[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 808[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHidePos", Vector(-2153,137f, 16,774f, 2629,216f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[3], &iLocal_4 + 576);
	*(&iLocal_4 + 584[43]) = Vector(-2150,023f, 16,1989f, 2615,088f);
	*(&iLocal_4 + 584[43] + 12) = Vector(0.0f, 82,81908f, 0.0f);
	*(&iLocal_4 + 808[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "ParkedWagonPos", Vector(-2150,023f, 16,1989f, 2615,088f), Vector(0.0f, 82,81908f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[4], &iLocal_4 + 576);
	*(&iLocal_4 + 584[53]) = Vector(-2145,716f, 16,44f, 2618,441f);
	*(&iLocal_4 + 584[53] + 12) = Vector(0.0f, 320.0f, 0.0f);
	*(&iLocal_4 + 808[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionWaitPos", Vector(-2145,716f, 16,44f, 2618,441f), Vector(0.0f, 320.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[5], &iLocal_4 + 576);
	*(&iLocal_4 + 584[63]) = Vector(-2144,5f, 16,09742f, 2614,353f);
	*(&iLocal_4 + 584[63] + 12) = Vector(0.0f, 91,44248f, 0.0f);
	*(&iLocal_4 + 808[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GeneralStorePos", Vector(-2144,5f, 16,09742f, 2614,353f), Vector(0.0f, 91,44248f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[6], &iLocal_4 + 576);
	*(&iLocal_4 + 584[73]) = Vector(-2171,25f, 16,20445f, 2768,044f);
	*(&iLocal_4 + 584[73] + 12) = Vector(0.0f, 91,44248f, 0.0f);
	*(&iLocal_4 + 808[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HorseClonePos01", Vector(-2171,25f, 16,20445f, 2768,044f), Vector(0.0f, 91,44248f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[7], &iLocal_4 + 576);
	*(&iLocal_4 + 584[83]) = Vector(-2167,229f, 16,299f, 2767,783f);
	*(&iLocal_4 + 584[83] + 12) = Vector(0.0f, 91,44248f, 0.0f);
	*(&iLocal_4 + 808[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HorseClonePos02", Vector(-2167,229f, 16,299f, 2767,783f), Vector(0.0f, 91,44248f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[8], &iLocal_4 + 576);
	*(&iLocal_4 + 888) = CREATE_OBJECTSET_IN_LAYOUT("HalfwayFlagsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 896[03]) = Vector(-1410,502f, 89,62505f, 2910,564f);
	*(&iLocal_4 + 896[03] + 12) = Vector(0.0f, 45,95553f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HalfwayStartPlayer", Vector(-1410,502f, 89,62505f, 2910,564f), Vector(0.0f, 45,95553f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 888);
	*(&iLocal_4 + 896[13]) = Vector(-1404,667f, 89,7528f, 2908,406f);
	*(&iLocal_4 + 896[13] + 12) = Vector(0.0f, 42,0898f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HalfwayStartComp", Vector(-1404,667f, 89,7528f, 2908,406f), Vector(0.0f, 42,0898f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 888);
	*(&iLocal_4 + 896[23]) = Vector(-1408,274f, 89,64418f, 2908,315f);
	*(&iLocal_4 + 896[23] + 12) = Vector(0.0f, 40,73077f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HalfwayStartWagon", Vector(-1408,274f, 89,64418f, 2908,315f), Vector(0.0f, 40,73077f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 888);
	PushArrayP();
	*(&iLocal_4 + 976) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "nWagonPath");
	return;
}

bool Function_310(struct<2>[] Param0) //Position: 0xF47E / 62590
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_314();
	iVar1 = 0;
	if (!Function_184(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_241(&(Param0[iVar02]), 8);
		}
		else if (Function_313())
		{
			iVar1 = 1;
			Function_241(&(Param0[iVar02]), 8);
		}
		Function_241(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_184(&(Param0[iVar02]), 4))
		{
			if (!Function_184(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_184(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_184(&(Param0[02]), 8) || iVar1));
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
				Function_241(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_184(&(Param0[iVar02]), 4))
		{
			if (!Function_184(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_241(&(Param0[iVar02]), 2);
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
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_241(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_241(&(Param0[iVar02]), 2);
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
	Function_311();
	return 1;
}

void Function_311() //Position: 0xF840 / 63552
{
	if (!Function_312(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_312(int iParam0) //Position: 0xF880 / 63616
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_313() //Position: 0xF89C / 63644
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

void Function_314() //Position: 0xF8CA / 63690
{
	if (!Function_312(128))
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

int Function_315() //Position: 0xF90C / 63756
{
	Function_316(&iLocal_4 + 8, 1035, 2, 0);
	Function_316(&iLocal_4 + 8, 1196, 2, 0);
	Function_316(&iLocal_4 + 8, 976, 2, 0);
	if (Function_310(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_316(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0xF946 / 63814
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_184(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_241(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_241(&(Param0[iVar02]), 8);
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

int Function_317() //Position: 0xFA22 / 64034
{
	switch (bLocal_399)
	{
		case 0x00000063:
			ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_697, false);
			Function_319(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&iLocal_697))
			{
				if (!DECOR_CHECK_EXIST(&iLocal_697, "lastcs"))
				{
					if (Function_318(&iLocal_697, 1, 0x41700000))
					{
						if (!GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_697, false) != &iLocal_695)
						{
							SET_ACTOR_IN_VEHICLE(&iLocal_695, &iLocal_697, false);
						}
						RESET_ANIM_SET_FOR_ACTOR(&iLocal_695, 1);
						TASK_CLEAR(&iLocal_695);
						START_VEHICLE(&iLocal_697);
						MEMORY_PREFER_RIDING(&iLocal_695, true);
						MEMORY_PREFER_WALKING(&iLocal_695, 0);
						DECOR_SET_BOOL(&iLocal_697, "lastcs", true);
					}
				}
				else if (!GET_TASK_STATUS(&iLocal_695, 43) != 1)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_695, &iLocal_4 + 976, 2, 0, 0, 1, false);
				}
			}
			if ((Function_289(&iLocal_401 + 4) < 7.0f && !HUD_IS_SHOWING_HELP_TEXT()) && Function_289(&iLocal_401 + 4) > 8.0f)
			{
				Function_139("Ranch02_stagecoach_help", 10.0f, 1, 0, 2, 1, 0);
			}
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_401 + 24), 0))
			{
				if (IS_OBJECT_VALID(&iLocal_401 + 24))
				{
					DECOR_REMOVE(&Global_54076, "__CameraReady");
					DECOR_REMOVE(&Global_54076, "__CameraGo");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_401 + 24))
					{
						DESTROY_OBJECT(&iLocal_401 + 24);
					}
				}
				AI_STOP_IGNORING_ACTORS();
				Function_319(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				UI_POP("CutsceneWithMessages");
				return 1;
			}
			if (Function_289(&iLocal_401 + 4) < 8.0f)
			{
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_401 + 24, 0);
				STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-2152,542f, 18,194f, 2620,028f), Vector(-2,979f, -44,497f, 0.0f), 1);
			}
			break;
		
		default:
			Function_319(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

bool Function_318(var uParam0, bool bParam1, bool bParam2) //Position: 0xFC3A / 64570
{
	float fVar0;
	bool bVar1;
	
	if (0 || !bParam1)
	{
		return IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1);
	}
	bVar1 = DECOR_GET_FLOAT_VERBOSE(&uParam0, "nIsFadedIn", &fVar0);
	if (!IS_ACTOR_FULLY_FADED_EXT(&uParam0, bParam1))
	{
		if (!bVar1)
		{
			DECOR_SET_FLOAT(&uParam0, "nIsFadedIn", GET_CURRENT_GAME_TIME());
			return 0;
		}
		if ((GET_CURRENT_GAME_TIME() - fVar0) <= &bParam2)
		{
			DECOR_REMOVE(&uParam0, "nIsFadedIn");
			return 1;
		}
		return 0;
	}
	if (bVar1)
	{
		DECOR_REMOVE(&uParam0, "nIsFadedIn");
	}
	return 1;
	return 0;
}

void Function_319(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xFCDC / 64732
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
		Function_261();
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
	Function_293(&iParam9, &bParam10);
}

int Function_320() //Position: 0xFDAB / 64939
{
	switch (bLocal_399)
	{
		case 0x00000063:
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_695, *(&iLocal_4 + 312[13]), 1, 0, HUD_IS_FADED());
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_695, &iLocal_697, 1, 1, 0);
			TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&iLocal_4 + 312[03]), 140.0f, 0, 0, false);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			return 1;
			break;
		
		case 0x00000002:
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 64));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 72));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 80));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 88));
			SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&iLocal_697));
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_697), false);
			if (IS_ACTOR_VALID(&(uLocal_701[0])))
			{
				SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&(uLocal_701[0])));
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&(uLocal_701[0])), false);
			}
			if (IS_ACTOR_VALID(&(uLocal_701[1])))
			{
				SHOW_PHYSINST(GET_PHYSINST_FROM_ACTOR(&(uLocal_701[1])));
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&(uLocal_701[1])), false);
			}
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2142,388f, 16,097f, 2613,745f), 312,312f, 0, 0, false);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_695, *(&iLocal_4 + 584[33]), 1, 1, true);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_697, *(&iLocal_4 + 584[43]), 1, 1, true);
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&bLocal_713))
			{
				DESTROY_ACTOR(&bLocal_713);
			}
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 208));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 216));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 224));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 232));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 240));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 248));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 256));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 264));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 272));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 280));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 288));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 296));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 304));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 312));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 320));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 328));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 336));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 344));
			SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 352));
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "default_character_Main/Default/DefaultGait/Idles/StandIdle/Sometimes/CanPlayHatIdle/StreamedHatIdle");
			ACTOR_START_FORCE_HOLSTER(&Global_54076, 0, 0);
			if (IS_ACTOR_VALID(&iLocal_697))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_697, false);
				CUTSCENE_MANAGER_SHOW_ACTOR(&iLocal_697);
				if (!IS_ACTOR_RIDING_VEHICLE(&iLocal_695))
				{
					SET_ACTOR_IN_VEHICLE(&iLocal_695, &iLocal_697, false);
				}
			}
			CUTSCENE_MANAGER_SHOW_ACTOR(&iLocal_695);
			SET_DRAW_ACTOR(&iLocal_695, 1);
			if (!HUD_IS_FADED())
			{
				*(&iLocal_401 + 24) = Function_321(&iLocal_4, 0, &Global_54076, 1, 0, 0);
				DECOR_SET_BOOL(&Global_54076, "__CameraReady", true);
				Function_243(&iLocal_401 + 4);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_321(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x10137 / 65847
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Ranch02_Cutscene03", 4, 1);
	}
	Function_322(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 0, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_322(var uParam0, int iParam1) //Position: 0x101C6 / 65990
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_326(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_325(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_324(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_323(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 0, 1, 7.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 2, 3, 7.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 3, 1.0f, 3);
	return;
}

void Function_323(int iParam0) //Position: 0x1025C / 66140
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,16624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2168,428f, 18,36749f, 2648,51f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,074224f, -0,253625f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_324(int iParam0) //Position: 0x102D1 / 66257
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,16624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2173,377f, 17,87174f, 2648,942f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,006931f, 0,035571f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_325(int iParam0) //Position: 0x10346 / 66374
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 54,09043f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2150,95f, 17,85077f, 2616,447f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,018168f, 1,774876f, 0,000355f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_326(var uParam0) //Position: 0x103BF / 66495
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 52,22467f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-2150,728f, 17,85025f, 2617,888f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(0,184634f, 0,858941f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

int Function_327() //Position: 0x10434 / 66612
{
	switch (bLocal_399)
	{
		case 0x00000063:
			if (Function_315() && Function_310(&iLocal_597))
			{
				if (Global_99146)
				{
					Global_99146 = 0;
				}
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_309();
				}
			}
			if (!IS_LAYOUTREF_VALID(&iLocal_268))
			{
				if (Function_306(&iLocal_697))
				{
					Function_305(&iLocal_268, &iLocal_697);
				}
			}
			return 1;
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&iLocal_697) && !DECOR_CHECK_EXIST(&iLocal_697, "cs02hidden"))
			{
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 64));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 72));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 80));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_268 + 88));
				Function_330(&(Local_467[115]));
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_697);
				DECOR_SET_BOOL(&iLocal_697, "cs02hidden", true);
			}
			Function_347();
			return 1;
			break;
		
		case 0x00000065:
			if (IS_ACTOR_VALID(&iLocal_697) && !DECOR_CHECK_EXIST(&iLocal_697, "cs03hidden"))
			{
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 208));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 216));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 224));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 232));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 240));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 248));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 256));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 264));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 272));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 280));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 288));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 296));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 304));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 312));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 320));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 328));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 336));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 344));
				HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_292 + 352));
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_695);
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_697);
				DECOR_SET_BOOL(&iLocal_697, "cs03hidden", true);
				SET_ACTOR_IN_VEHICLE(&iLocal_695, &iLocal_697, false);
				Function_328(&iLocal_4 + 160[3], &uLocal_385, &iLocal_697);
				SET_DRAW_ACTOR(&bLocal_713, 1);
				CUTSCENE_MANAGER_SHOW_ACTOR(&bLocal_713);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

void Function_328(var uParam0, var uParam1, int iParam2) //Position: 0x1069C / 67228
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &uParam1, 15, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if (((!ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3) && IS_ACTOR_VEHICLE(&iVar3)) && &iVar3 == &iParam2) && !Function_329(&iVar3))
			{
				bVar4 = false;
				while (bVar4 <= GET_NUM_DRAFTED_ACTORS(&iVar3))
				{
					uVar5 = GET_DRAFT_ACTOR(bVar4, &iVar3);
					if (IS_ACTOR_VALID(&uVar5))
					{
						DESTROY_ACTOR(&uVar5);
					}
					bVar4++;
				}
				bVar4 = false;
				while (bVar4 <= (GET_NUM_AVAILABLE_SEATS(&iVar3) + GET_NUM_OCCUPIED_SEATS(&iVar3)))
				{
					if (IS_SEAT_OCCUPIED(&iVar3, bVar4))
					{
						uVar6 = GET_ACTOR_IN_VEHICLE_SEAT(&iVar3, bVar4);
						if (IS_ACTOR_VALID(&uVar6))
						{
							DESTROY_ACTOR(&uVar6);
						}
					}
					bVar4++;
				}
				DESTROY_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_329(int iParam0) //Position: 0x107A8 / 67496
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	return (bVar0 <= 1155 && bVar0 >= 1176);
}

void Function_330(struct<69> Param0) //Position: 0x107CF / 67535
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

int Function_331() //Position: 0x1088F / 67727
{
	switch (bLocal_399)
	{
		case 0x00000063:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-792,802f, 93,995f, 2416,196f), Vector(-2,963f, 140,002f, 0.0f));
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			return 1;
			break;
		
		case 0x00000002:
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-2145,401f, 17,885f, 2615,716f), Vector(-2,979f, -60.0f, 0.0f));
			Function_332(&iLocal_4 + 808[0]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_332(&iLocal_4 + 808[0]), -3.0f, 0);
			return 1;
			break;
		
		case 0x00000065:
			SET_DRAW_ACTOR(&bLocal_713, 1);
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-2152,826f, 18,174f, 2619,149f), Vector(-2,979f, -58,663f, 0.0f));
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

struct<8> Function_332(bool bParam0) //Position: 0x10948 / 67912
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

int Function_333() //Position: 0x10971 / 67953
{
	switch (bLocal_399)
	{
		case 0x00000063:
			Function_344(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_257(0);
			Function_342(StackVal, &uLocal_385, Function_257(0), &iLocal_4 + 112[0], 0, 0, 0, 0, 1, 1);
			Function_337();
			iLocal_697 = &iLocal_250 + 48[02];
			ENABLE_VEHICLE_SEAT(&iLocal_697, true, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_697, 2, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_697, 3, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_697, 4, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_697, 5, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_697, 6, 0);
			ENABLE_VEHICLE_SEAT(&iLocal_697, 7, 0);
			iLocal_737 = 2;
			bLocal_694 = false;
			while (bLocal_694 < 1)
			{
				uLocal_701[bLocal_694] = GET_DRAFT_ACTOR(bLocal_694, &iLocal_697);
				bLocal_694++;
			}
			ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_697, true);
			return 1;
			break;
		
		case 0x00000002:
			Function_344(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_257(2);
			Function_342(StackVal, &uLocal_385, Function_257(2), &iLocal_4 + 160[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (!IS_ACTOR_VALID(&bLocal_713))
			{
				Function_334();
			}
			Function_344(0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
			UI_PUSH("CutsceneWithMessages");
			Function_257(2);
			Function_342(StackVal, &uLocal_385, Function_257(2), &iLocal_4 + 112[3], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 1;
}

int Function_334() //Position: 0x10ADB / 68315
{
	struct<5> Var0;
	
	switch (bLocal_399)
	{
		case 0x00000002:
		case 0x00000065:
			if (IS_ACTOR_VALID(&(uLocal_701[0])))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&(uLocal_701[0]), false);
			}
			if (IS_ACTOR_VALID(&(uLocal_701[1])))
			{
				ACTOR_SET_GRABBED_BY_CUTSCENE(&(uLocal_701[1]), false);
			}
			bLocal_694 = false;
			while (bLocal_694 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
			{
				if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bLocal_694, &Var0, &Var2))
				{
					iVar4 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bLocal_694);
					if (Function_336(iVar4))
					{
						if (iVar4 == 551)
						{
							bLocal_713 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &uLocal_385, "tempBonnie", 551, Vector(-2149,352f, 17,025f, 2628,681f), Vector(0.0f, 0.0f, 0.0f));
							if (bLocal_399 == 2)
							{
								SET_DRAW_ACTOR(&bLocal_713, 0);
							}
							TASK_STAND_STILL(&bLocal_713, -1.0f, 0, 0);
							CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_694), &bLocal_713);
						}
					}
					Function_335(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bLocal_694), (Var0 + 180.0f), (Var2 + 180.0f));
				}
				bLocal_694++;
			}
			return 1;
			break;
	}
	return 1;
}

void Function_335(char* cParam0) //Position: 0x10BE2 / 68578
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

bool Function_336(int iParam0) //Position: 0x10D0B / 68875
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_337() //Position: 0x10D22 / 68898
{
	(&iLocal_250 + 48[02]) = Function_338(StackVal, StackVal, &iLocal_250, "TheWagon", 1196, 976, Vector(-798,1161f, 92,34277f, 2425,877f), Vector(0.0f, 51.0f, 0.0f), 1, 976, 976, 976, 4);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_250 + 48[02], false);
	return;
}

int Function_338(int iParam0, int iParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x10D76 / 68982
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &iParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_341(&(Global_46972[6]), 4, 23, 0) && iParam8)
			{
				bVar16 = Function_340(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_339(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		bVar18 = 2;
		while (bVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, bVar18, 0);
			bVar18++;
		}
	}
	return &uVar0;
}

bool Function_339(int iParam0, bool[] bParam1) //Position: 0x10FC9 / 69577
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_340(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x10FFD / 69629
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_341(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x11019 / 69657
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &uParam1, &uParam2);
}

void Function_342(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x11045 / 69701
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
				Function_343(&uVar1, &uParam0);
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

void Function_343(var uParam0, float fParam1) //Position: 0x112E5 / 70373
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

void Function_344(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x11367 / 70503
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
	Function_261();
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
				Function_346(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2, Function_346(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_345()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_345()));
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
	if (Function_312(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x4000000);
	}
	if (Function_312(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_345() //Position: 0x11619 / 71193
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

struct<8> Function_346(var uParam0) //Position: 0x116A7 / 71335
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

int Function_347() //Position: 0x116B9 / 71353
{
	if (!Function_310(&iLocal_644))
	{
		return 0;
	}
	return 1;
}

void Function_348() //Position: 0x116CC / 71372
{
	Function_257(bLocal_399);
	Function_382(StackVal, Function_257(bLocal_399), bLocal_399, Global_46736[2], Function_259(bLocal_399), 0);
	Global_39290[4] = 1;
	Function_381(4, 1);
	Function_357();
	iLocal_699 = Function_351(1, 1, 0, 0, 0, 0, 1, 0);
	if (IS_ACTOR_VALID(&iLocal_699))
	{
		DESTROY_ACTOR(&iLocal_699);
	}
	if (!IS_ACTOR_VALID(&iLocal_697))
	{
		Function_350();
		iLocal_697 = &iLocal_4 + 88[02];
		ENABLE_VEHICLE_SEAT(&iLocal_697, true, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 2, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 3, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 4, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 5, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 6, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 7, 0);
		iLocal_737 = 2;
		bLocal_694 = false;
		while (bLocal_694 < 1)
		{
			if (IS_ACTOR_VALID(&(uLocal_701[bLocal_694])))
			{
				DESTROY_ACTOR(&(uLocal_701[bLocal_694]));
			}
			uLocal_701[bLocal_694] = GET_DRAFT_ACTOR(bLocal_694, &iLocal_697);
			bLocal_694++;
		}
		Function_349(&iLocal_697);
		Function_305(&iLocal_292, &iLocal_697);
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[2]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[2]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 112[2]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 112[2], 15);
	Function_330(&(Local_467[115]));
	Function_243(&iLocal_751);
	Function_243(&iLocal_755);
	return;
}

bool Function_349(int iParam0) //Position: 0x11819 / 71705
{
	var uVar0;
	
	Function_308(3, 2);
	uVar0 = &uVar0;
	Function_240(&iLocal_292 + 8, "p_gen_trunk01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_milkCan01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_watermelon01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_barrelSmall01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_sackCorn01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_flourSack01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_toolBox01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_bottle01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_bucketFish01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_woodPile02x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_bottleSnakeOil01x", 0, 0);
	Function_240(&iLocal_292 + 8, "p_gen_package01x", 0, 0);
	if (!Function_310(&iLocal_292 + 8))
	{
		return 0;
	}
	iLocal_292 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_54()));
	(&iLocal_292 + 208) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "ntrunk01x0", "p_gen_trunk01x", Vector(-0,03438865f, 1,209469f, -0,8728744f), Vector(0.0f, 358.0f, 0.0f), 1);
	*(&iLocal_292 + 216) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "milkCan01x0", "p_gen_milkCan01x", Vector(0,316323f, 1,209f, -0,2400429f), Vector(0.0f, 10.0f, 0.0f), 1);
	*(&iLocal_292 + 224) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "milkCan01x1", "p_gen_milkCan01x", Vector(0,1973238f, 1,209f, 0,2280484f), Vector(0.0f, 50.0f, 0.0f), 1);
	*(&iLocal_292 + 232) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "watermelon01x0", "p_gen_watermelon01x", Vector(0,2119491f, 1,209f, 0,598839f), Vector(0.0f, 26,91956f, 0.0f), 1);
	*(&iLocal_292 + 240) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "watermelon01x1", "p_gen_watermelon01x", Vector(0,5516232f, 1,382427f, 0,7922328f), Vector(0.0f, 20,57724f, 90.0f), 1);
	*(&iLocal_292 + 248) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "barrelSmall01x0", "p_gen_barrelSmall01x", Vector(-0,5357847f, 1,992003f, 0,4102114f), Vector(180.0f, 0.0f, 0.0f), 1);
	*(&iLocal_292 + 256) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "sackCorn01x0", "p_gen_sackCorn01x", Vector(-0,495006f, 1,209f, 1,919288f), Vector(-7,009163f, 309,0328f, 17,1f), 1);
	*(&iLocal_292 + 264) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "sackCorn01x1", "p_gen_sackCorn01x", Vector(-0,4283861f, 1,209f, 1,607044f), Vector(0.0f, 320.0f, 17,1f), 1);
	*(&iLocal_292 + 272) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "flourSack01x0", "p_gen_flourSack01x", Vector(-0,1868276f, 1,799781f, 1,575985f), Vector(0.0f, 273.0f, 0.0f), 1);
	*(&iLocal_292 + 280) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "flourSack01x1", "p_gen_flourSack01x", Vector(-0,1868276f, 1,617625f, 1,518963f), Vector(0.0f, 268.0f, 0.0f), 1);
	*(&iLocal_292 + 288) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "flourSack01x2", "p_gen_flourSack01x", Vector(-0,1868276f, 1,430953f, 1,475463f), Vector(0.0f, 272.0f, 0.0f), 1);
	*(&iLocal_292 + 296) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "flourSack01x3", "p_gen_flourSack01x", Vector(-0,1868276f, 1,209f, 1,488142f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_292 + 304) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "sackCorn01x2", "p_gen_sackCorn01x", Vector(-0,4058274f, 1,209f, 1,342863f), Vector(0.0f, 0.0f, 17,1f), 1);
	*(&iLocal_292 + 312) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "toolBox01x0", "p_gen_toolBox01x", Vector(-0,04628135f, 1,209f, -0,1119608f), Vector(0.0f, 45.0f, 0.0f), 1);
	*(&iLocal_292 + 320) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "bottle01x0", "p_gen_bottle01x", Vector(-0,6257194f, 1,212025f, 1,879255f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_292 + 328) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "bucketFish01x0", "p_gen_bucketFish01x", Vector(-0,09000447f, 1,209f, -0,215772f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_292 + 336) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "woodPile02x0", "p_gen_woodPile02x", Vector(-0,5990022f, 1,498661f, 0,01883825f), Vector(90.0f, 86,30271f, 0.0f), 1);
	*(&iLocal_292 + 344) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "bottleSnakeOil01x0", "p_gen_bottleSnakeOil01x", Vector(-0,5754111f, 1,212025f, 1,973202f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_292 + 352) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_292, "package01x0", "p_gen_package01x", Vector(-0,3387491f, 1,209f, 2,008795f), Vector(0.0f, 21,38326f, 0.0f), 1);
	Function_307(&iLocal_292, &iParam0);
	return 1;
}

void Function_350() //Position: 0x11F5E / 73566
{
	*(&iLocal_4 + 88[02]) = Function_338(StackVal, StackVal, &iLocal_4, "TheWagonArma", 1196, 976, Vector(-2149,32f, 16,2804f, 2615,376f), Vector(0.0f, 91,64803f, 0.0f), 1, 976, 976, 976, 4);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 88[02], false);
	return;
}

int Function_351(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x11FB6 / 73654
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
		Function_356(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_355())
		{
			return "";
		}
	}
	if (!Function_353())
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
		Function_332(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_332(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_332(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_332(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_176(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_176(StackVal, Var4, 0, 1, 1);
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
		Function_352(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_352(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x12313 / 74515
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uParam0, &uParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&uParam0, &uParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&uParam0, &uParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&uParam0, &uParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&uParam0, &uParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&uParam0, &uParam4);
	}
}

bool Function_353() //Position: 0x1235D / 74589
{
	if (Function_354() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_354() //Position: 0x12373 / 74611
{
	return Global_21369.f_244;
}

bool Function_355() //Position: 0x1237E / 74622
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_356(var uParam0, bool bParam1, bool bParam2) //Position: 0x1239E / 74654
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

int Function_357() //Position: 0x123CD / 74701
{
	var uVar0;
	struct<2> Var1;
	
	if (Function_380(&Global_43660))
	{
		return 0;
	}
	if (SQUAD_IS_VALID(&Global_43660 + 8))
	{
		return 0;
	}
	uVar0 = Function_379(StackVal, Global_54078);
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	GET_OBJECT_POSITION(&uVar0, &Var1);
	Function_358(StackVal, Var1);
	DECOR_SET_BOOL(&Global_43660 + 8, "coachService", true);
	return 1;
}

void Function_358(struct<2> Param0) //Position: 0x1242E / 74798
{
	var uVar0;
	
	*(&Global_43660 + 192) = Function_372(StackVal, Param0, 16, 0.0f, 35.0f, &uVar0, 1);
	Global_43660.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Global_43660 + 192, 0.0f, 1.0f, 10);
	Function_371(StackVal, Param0);
	*(&Global_43660 + 36) = { StackVal, StackVal, Function_371(StackVal, Param0) };
	Global_43660.f_4 = 2;
	Function_361(&Global_43660, 4294967294);
	Function_359(&Global_43660);
	Global_43660 = 4;
	return;
}

void Function_359(struct<33> Param0) //Position: 0x12485 / 74885
{
	if (!Function_380(&Param0))
	{
		return;
	}
	if (!Function_360(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return;
	}
	if (!Param0.f_32 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(&Param0 + 192) != 4 && !GET_CURVE_TYPE(&Param0 + 192) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_360(int iParam0) //Position: 0x12534 / 75060
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_361(struct<245> Param0) //Position: 0x12549 / 75081
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	switch (StackVal)
	{
		case 0x00000002:
			Param0.f_32 = 1;
			break;
		
		case 0x00000001:
			iVar1 = (GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15));
			bVar0 = RAND_INT_RANGE(false, 10000);
			if (Global_53524.f_44)
			{
				Param0.f_32 = 1;
			}
			else if (Global_43580.f_60 < 4294967295 && !Function_369(128))
			{
				Param0.f_32 = CEIL((IntToFloat(bVar0) / (10000.0f / TO_FLOAT(Global_43580.f_60))));
			}
			else if (iVar1 <= 6)
			{
				Param0.f_32 = 1;
			}
			else if ((iVar1 > 8 || Function_369(128)) || &iParam1 != 5)
			{
				if (bVar0 <= 6000)
				{
					Param0.f_32 = 1;
				}
				else
				{
					Param0.f_32 = 2;
				}
			}
			else if (bVar0 <= 5000)
			{
				Param0.f_32 = 1;
			}
			else if (bVar0 <= 9000)
			{
				Param0.f_32 = 2;
			}
			else if (((bVar0 > 9400 || 0) || iVar1 > 10) || Global_6629)
			{
				Param0.f_32 = 3;
			}
			else if (bVar0 > 9700 || iVar1 > 12)
			{
				Param0.f_32 = 4;
			}
			else
			{
				Param0.f_32 = 5;
			}
			if (Param0.f_32 > 3)
			{
				Function_220(128);
			}
			else
			{
				Function_218(128);
			}
			if (Global_43789 == Global_46816[1])
			{
				Function_368(1.0f);
				*(&Param0 + 72) = { StackVal, Function_368(1.0f) };
			}
			else
			{
				Function_366(1.0f);
				*(&Param0 + 72) = { StackVal, Function_366(1.0f) };
			}
			break;
		
		case 0x00000003:
			Param0.f_32 = 1;
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_CONFIGURE_NODE");
			break;
	}
	if (Param0.f_244 == 0)
	{
		Param0.f_244 = Function_365();
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		Function_364();
		Var2 = { StackVal, Function_364() };
		*(&Param0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_43578, &Var2));
	}
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &Global_43578, 36, 1);
	}
	if (StackVal || (StackVal || StackVal != 1 != 2) != 4)
	{
		Param0.f_136 = 1;
	}
	else
	{
		Param0.f_136 = 0;
	}
	if (StackVal == 0)
	{
		Param0.f_112 = Function_363(StackVal, 0, Param0.f_120);
	}
	else
	{
		Param0.f_112 = Function_362(StackVal, Param0.f_120);
	}
	Param0 = 1;
	return;
}

int Function_362(int iParam0, int iParam1) //Position: 0x1279B / 75675
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_13())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 9000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				return 1;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in TownSpeed");
				break;
		}
		return 1;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

int Function_363(int iParam0, int iParam1, int iParam2) //Position: 0x12887 / 75911
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_13())
	{
		if (&iParam2 != 0)
		{
			return &iParam2;
		}
		bVar0 = RAND_INT_RANGE(true, 10000);
		iParam1 = &iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 5000)
				{
					return 2;
				}
				if (bVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (bVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (bVar0 <= 7500)
				{
					return 2;
				}
				return 4;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in WildSpeed");
				break;
		}
		return 2;
	}
	if (&iParam2 != 0)
	{
		return &iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	iParam1 = &iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

struct<8> Function_364() //Position: 0x129CD / 76237
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	return StackVal, cVar0;
}

var Function_365() //Position: 0x12A24 / 76324
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar1 = 0;
	bVar2 = 0.0f;
	iVar3 = STRING_TO_HASH(F2STR(bVar2, 7, 7));
	return iVar0 ^ iVar1 ^ iVar3;
}

struct<8> Function_366(int iParam0) //Position: 0x12A44 / 76356
{
	Function_367(iParam0, 10);
	return StackVal, Function_367(iParam0, 10);
}

struct<8> Function_367(var uParam0, int iParam1) //Position: 0x12A51 / 76369
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

struct<8> Function_368(int iParam0) //Position: 0x12A6C / 76396
{
	Function_367(iParam0, 8);
	return StackVal, Function_367(iParam0, 8);
}

bool Function_369(int iParam0) //Position: 0x12A79 / 76409
{
	return Function_370(&Global_43580, iParam0);
}

int Function_370(var uParam0, int iParam1) //Position: 0x12A87 / 76423
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

vector3 Function_371(vector3 vParam0) //Position: 0x12AA4 / 76452
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_372(struct<2> Param0, int iParam2, float fParam3, float fParam4, var uParam5, bool bParam6) //Position: 0x12AC2 / 76482
{
	struct<2> Var0;
	var uVar2;
	struct<9> Var3;
	
	bVar6 = -1.0f;
	Function_76();
	uParam5 = Function_76();
	uVar2 = START_CURVE_QUERY(&Global_43578, Param0, uParam2, fParam3, fParam4, Function_378(((fParam4 - fParam3) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) < 0)
	{
		Function_374(StackVal, &uVar2, Param0, iParam2, fParam3, fParam4, Function_378(((fParam4 - fParam3) / 5.0f), 20.0f));
	}
	else
	{
		bVar7 = false;
		while (bVar7 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar2) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar2, bVar7, &vVar3);
			if (!&bParam6 || !Function_373(&vVar3))
			{
				Var0 = vVar3.x;
				Var0.f_4 = vVar3.y;
				Var0.f_8 = vVar3.z;
				if (bVar6 > 0.0f || bVar6 < VDIST(Param0, Var0))
				{
					bVar6 = VDIST(Param0, Var0);
					uParam5 = Var0;
					uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar2, bVar7);
				}
			}
			bVar7++;
		}
	}
	UNK_0xDF93BD7C(&uVar2);
	return &uVar8;
}

bool Function_373(struct<13> Param0) //Position: 0x12BAB / 76715
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_374(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, bool bParam5, bool bParam6) //Position: 0x12BCE / 76750
{
	PRINTSTRING("Curve Query Report: NumCurves-");
	PRINTINT(GET_NUM_CURVES_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" NumPoints-");
	PRINTINT(GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0));
	PRINTSTRING(" SearchCenter-");
	PRINTVECTOR(Param1);
	PRINTSTRING(" curveMask-");
	PRINTINT(bParam3);
	PRINTSTRING(" min/max/freq-");
	PRINTFLOAT(bParam4);
	PRINTSTRING("/");
	PRINTFLOAT(bParam5);
	PRINTSTRING("/");
	PRINTFLOAT(bParam6);
	PRINTNL();
	Function_375(&uParam0);
}

void Function_375(int iParam0) //Position: 0x12C88 / 76936
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_CURVES_IN_CURVE_QUERY(&iParam0))
	{
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&iParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(&iParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(&iParam0, bVar0, &vVar1);
		Function_376(StackVal, StackVal, vVar1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&iParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

void Function_376(struct<17> Param0) //Position: 0x12CFC / 77052
{
	Function_377(&Param0);
	PRINTVECTOR(Function_377(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

struct<8> Function_377(vector3 vParam0) //Position: 0x12D2F / 77103
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

var Function_378(int iParam0, int iParam1) //Position: 0x12D51 / 77137
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_379(struct<2> Param0) //Position: 0x12D64 / 77156
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_SPHERE(&cVar1, Param0, 180.0f);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	strcpy(&cVar2, "v_coach_stop", 24);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	iVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&iVar0))
	{
		DESTROY_ITERATOR(&cVar1);
		return &iVar0;
	}
	iVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &iVar0;
}

bool Function_380(int iParam0) //Position: 0x12DE1 / 77281
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void Function_381(int iParam0, bool bParam1) //Position: 0x12DF2 / 77298
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &bParam1;
	return;
}

void Function_382(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x12E10 / 77328
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
	if (iParam2 != Global_53524.f_48 && !Function_389())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_388(0);
	Function_387();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_385(iParam2);
	}
	Function_384(uParam3, iVar0, iVar1);
	Function_383();
}

void Function_383() //Position: 0x12EB9 / 77497
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

void Function_384(int iParam0, bool bParam1, bool bParam2) //Position: 0x12EFA / 77562
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

void Function_385(bool bParam0) //Position: 0x13063 / 77923
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_386() };
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

struct<16> Function_386() //Position: 0x131FB / 78331
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

void Function_387() //Position: 0x13241 / 78401
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_388(bool bParam0) //Position: 0x13265 / 78437
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

bool Function_389() //Position: 0x13294 / 78484
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_390(int iParam0) //Position: 0x132AF / 78511
{
	char* cVar0[32];
	
	Function_243(&iLocal_751);
	Function_243(&iLocal_755);
	iLocal_400 = iParam0;
	strcpy(&cVar0, "STAGE", 32);
	switch (bLocal_399)
	{
		case 0x00000000:
			stradd(&cVar0, "01", 32);
			break;
		
		case 0x00000001:
			stradd(&cVar0, "02", 32);
			break;
		
		case 0x00000002:
			stradd(&cVar0, "03", 32);
			break;
		
		case 0x00000065:
			stradd(&cVar0, "FINAL", 32);
			break;
	}
	stradd(&cVar0, " - ", 32);
	if (iParam0 <= 6 && iParam0 >= 104)
	{
		stradd(&cVar0, "GOAL ", 32);
		straddi(&cVar0, (iParam0 + 1 - 6), 32);
	}
	else if (iParam0 == 0)
	{
		stradd(&cVar0, "INITIALIZE", 32);
	}
	else if (iParam0 == 1)
	{
		stradd(&cVar0, "nSTREAMING", 32);
	}
	else if (iParam0 == 3)
	{
		stradd(&cVar0, "CUTSCENE", 32);
	}
	else if (iParam0 == 105)
	{
		stradd(&cVar0, "FADE OUT", 32);
	}
	else if (iParam0 == 106)
	{
		stradd(&cVar0, "COMPLETE", 32);
	}
	return;
}

void Function_391(int iParam0) //Position: 0x133CF / 78799
{
	if (!Function_301(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_191(1, 0, 1);
		}
	}
	return;
}

bool Function_392(int iParam0) //Position: 0x133EB / 78827
{
	if (!Function_85(iParam0))
	{
		return 1;
	}
	return Function_164(&(Global_43791[iParam0]), 4);
}

void Function_393(bool bParam0) //Position: 0x13407 / 78855
{
	Function_394(0, 0x40400000);
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

void Function_394(float fParam0, float fParam1) //Position: 0x1343D / 78909
{
	*(&Global_21369 + 72 + 44) = 0;
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
	Function_396();
	Function_395();
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

void Function_395() //Position: 0x1354E / 79182
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_396() //Position: 0x13582 / 79234
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

void Function_397() //Position: 0x13688 / 79496
{
	if (iLocal_400 < 4 && iLocal_400 > 105)
	{
		Function_442();
		Function_441();
		Function_438();
	}
	switch (iLocal_400)
	{
		case 0x00000000:
			Function_393(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_261();
			Function_239();
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			if (iLocal_636[1] == 0)
			{
				iLocal_623 = Global_46760[0];
				if (!Function_392(Global_46760[0]))
				{
					Function_391(&Local_387);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2142,388f, 16,097f, 2613,745f), 300.0f, 1, 1, true);
				Function_390(1);
			}
			else
			{
				Function_435();
				Function_390(2);
			}
			break;
		
		case 0x00000001:
			if (((STREAMING_IS_WORLD_LOADED() && Function_392(Global_46760[0])) && Function_164(&(Global_43791[Global_46760[0]]), 8)) && Function_347())
			{
				Function_435();
				Function_390(2);
			}
			break;
		
		case 0x00000002:
			if (Function_433(StackVal, StackVal, StackVal, StackVal, StackVal, Local_387, bLocal_399))
			{
				Function_390(3);
			}
			else
			{
				Function_429();
				Function_390(6);
			}
			break;
		
		case 0x00000003:
			if (Function_292("$/cutscene/ranch02_cs02/ranch02_cs02", &iLocal_401, &Local_387, &bLocal_399, 67953, 67727, 66612, 64939, 86640, 58100, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_429();
				Function_390(6);
			}
			break;
		
		case 0x00000006:
			Function_423();
			if (IS_ACTOR_VALID(&iLocal_707))
			{
				Function_261();
				if (GET_ITEM_COUNT(Function_201(3), &Global_54076) <= GET_MAX_ITEM_COUNT(Function_201(3)))
				{
					Function_422("Ranch02_go_to_docs", 7,5f, 1, 2, 0, 0, 0, 0);
				}
				Function_233(&iLocal_707, 1);
				SHOP_SET_CURRENT_TAB(0);
				SET_ACTOR_FACTION(&iLocal_707, 20);
				SET_ACTOR_UPDATE_PRIORITY(&iLocal_707, false);
				TASK_CLEAR(&iLocal_707);
				FORCE_LOOK_AT_ACTOR(&iLocal_707, &Global_54076, 3212836864);
				TASK_STAND_STILL(&iLocal_707, -1.0f, 0, 0);
				uLocal_836 = CREATE_EVENT_TRAP(Function_54(), 6, &uLocal_385);
				EVENT_TRAP_ON_PERPETRATOR(&uLocal_836, GET_OBJECT_FROM_ACTOR(&Global_54076));
				uLocal_838 = CREATE_EVENT_TRAP(Function_54(), 5, &uLocal_385);
				EVENT_TRAP_ON_VOLUME(&uLocal_838, &iLocal_4 + 160[4]);
				Function_418(&(Local_467[215]), &iLocal_707, "Doctor", 0, 0x5f5e100, 1);
				Function_415(&(Local_467[215]), 256, 1);
				iLocal_845 = 0;
				Function_390(7);
			}
			if (Function_289(&iLocal_795) < 1.0f)
			{
				if (HAS_ITEM(Function_201(3), &Global_54076))
				{
					iLocal_843 = GET_ITEM_COUNT(Function_201(3), &Global_54076);
					if (iLocal_843 < iLocal_741 || iLocal_843 <= GET_MAX_ITEM_COUNT(Function_201(3)))
					{
						if (IS_OBJECT_VALID(&iLocal_717))
						{
							DESTROY_OBJECT(&iLocal_717);
						}
						iLocal_813 = 1;
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_390(8);
					}
				}
				Function_243(&iLocal_795);
			}
			break;
		
		case 0x00000007:
			if (iLocal_812 == 0)
			{
				Function_406(&uLocal_783, 60.0f, 200.0f, &iLocal_4 + 808[0], "Ranch02_return_docs_01", "Ranch02_fail_doctor", &bLocal_625, 1, 0, 0, 4294967295, 1, 0);
				if (GATEWAY_UPDATE(&iLocal_717))
				{
					DESTROY_OBJECT(&iLocal_717);
					AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
					Function_261();
					Function_422("Ranch02_talk_to_doc", 7,5f, 1, 2, 0, 0, 0, 0);
					ADD_BLIP_FOR_ACTOR(&iLocal_707, 398, 0, 2, 0);
					iLocal_812 = 1;
					Function_390(8);
				}
				else if (Function_289(&iLocal_795) < 1.0f)
				{
					if (HAS_ITEM(Function_201(3), &Global_54076))
					{
						iLocal_843 = GET_ITEM_COUNT(Function_201(3), &Global_54076);
						if (iLocal_843 < iLocal_741 || iLocal_843 <= GET_MAX_ITEM_COUNT(Function_201(3)))
						{
							if (IS_OBJECT_VALID(&iLocal_717))
							{
								DESTROY_OBJECT(&iLocal_717);
							}
							iLocal_813 = 1;
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
							}
							Function_390(8);
						}
					}
					Function_243(&iLocal_795);
				}
			}
			break;
		
		case 0x00000008:
			Function_347();
			if (Function_289(&iLocal_795) < 1.0f)
			{
				if (HAS_ITEM(Function_201(3), &Global_54076))
				{
					iLocal_843 = GET_ITEM_COUNT(Function_201(3), &Global_54076);
				}
				Function_243(&iLocal_795);
			}
			if (Global_93258 == 0)
			{
				if (iLocal_813 != 0 && (iLocal_843 >= iLocal_741 && iLocal_843 > GET_MAX_ITEM_COUNT(Function_201(3))))
				{
					fLocal_743 = Function_404(StackVal, &Global_54076, *(&iLocal_4 + 584[23]));
					Function_406(&uLocal_783, 60.0f, 200.0f, &iLocal_4 + 808[1], "Ranch02_return_docs_02", "Ranch02_fail_doctor", &bLocal_625, 1, 0, 0, 4294967295, 1, 0);
					if (fLocal_743 < 8.0f)
					{
						if (iLocal_812 == 1)
						{
							GET_OBJECT_POSITION(&iLocal_4 + 808[0], &Local_745);
							iLocal_717 = Function_403(StackVal, StackVal, &uLocal_385, Function_54(), Local_745, Local_745, &Global_54076, 2.0f, 1, 3, 330, 1, 1, 3212836864, 3212836864, 1);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_707)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_707));
							}
							HUD_CLEAR_OBJECTIVE();
							Function_422("Ranch02_go_to_docs", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_812 = 0;
						}
					}
					else if (iLocal_812 == 0)
					{
						Function_261();
						Function_422("Ranch02_talk_to_doc", 7,5f, 1, 2, 0, 0, 0, 0);
						if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_707)))
						{
							ADD_BLIP_FOR_ACTOR(&iLocal_707, 398, 0, 2, 0);
						}
						if (IS_OBJECT_VALID(&iLocal_717))
						{
							DESTROY_OBJECT(&iLocal_717);
						}
						iLocal_812 = 1;
					}
				}
				else
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_695, *(&iLocal_4 + 584[53]), 1, 1, true);
					TASK_STAND_STILL(&iLocal_695, -1.0f, 0, 0);
					RESET_ANIM_SET_FOR_ACTOR(&iLocal_695, 0);
					SET_ANIM_SET_FOR_ACTOR(&iLocal_695, "bonnie_lean", 0);
					SET_ACTION_NODE_FOR_ACTOR(&iLocal_695, "bonnie_lean");
					AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_695, &Global_54076, -1f, 0);
					SUSPEND_MOVER(&iLocal_695);
					DECOR_SET_BOOL(&iLocal_695, "nsuspended", true);
					DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&Global_54076), "Ranch02_ShowItemTutorial", false);
					AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
					Function_401(3, 1, 1);
					Function_422("Ranch02_talk_to_bonnie", 7,5f, 1, 2, 0, 0, 0, 0);
					Function_390(9);
				}
			}
			else if (iLocal_813 == 0)
			{
				Function_261();
				if (HAS_ITEM(Function_201(3), &Global_54076))
				{
					if (iLocal_843 < iLocal_741 || iLocal_843 <= GET_MAX_ITEM_COUNT(Function_201(3)))
					{
						Function_159(&cLocal_828, 1);
						Function_159(&cLocal_830, 1);
						Function_159(&cLocal_832, 1);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_707)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_707));
						}
						if (IS_LAYOUTREF_VALID(&iLocal_268))
						{
							DESTROY_LAYOUT(&iLocal_268);
						}
						Function_401(3, 1, 1);
						Function_422("Ranch02_talk_to_bonnie", 7,5f, 1, 2, 0, 0, 0, 0);
						Function_330(&(Local_467[215]));
						iLocal_813 = 1;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_400() == 0)
			{
				if (Function_289(&iLocal_755) < 0,5f)
				{
					Function_139("Ranch02_equip_help", 10.0f, 1, 0, 2, 1, 0);
					Function_243(&iLocal_755);
					Function_390(10);
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_400() == 0)
			{
				if (Function_289(&iLocal_755) < 10,5f)
				{
					Function_139("Ranch02_health_help_01", 10.0f, 1, 0, 2, 1, 0);
					Function_243(&iLocal_755);
					Function_390(11);
				}
			}
			break;
		
		case 0x0000000B:
			if (Function_400() == 0)
			{
				if (Function_291(&iLocal_755))
				{
					if (Function_289(&iLocal_755) < 10,5f)
					{
						Function_139("Ranch02_health_help_02", 10.0f, 1, 0, 2, 1, 0);
						Function_399(&iLocal_755);
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (GET_TASK_STATUS(&Global_54076, 6) == 1)
			{
				Function_390(106);
			}
			break;
		
		case 0x0000006A:
			iLocal_636[2] = 1;
			Function_398();
			bLocal_399 = 101;
			Function_390(0);
			break;
	}
	return;
}

void Function_398() //Position: 0x13F00 / 81664
{
	Function_261();
	if (IS_ACTOR_VALID(&iLocal_707))
	{
		Function_233(&iLocal_707, 0);
		Function_225(&Global_11014, &Global_12796, 0, 0);
	}
	if (IS_ACTOR_VALID(&iLocal_711))
	{
		Function_225(&Global_11014, &Global_12796, 13, 0);
	}
	Function_214(3);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "Ranch02_ShowItemTutorial"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "Ranch02_ShowItemTutorial");
	}
	TASK_STAND_STILL(&iLocal_695, -1.0f, 0, 0);
	Function_181(&iLocal_644);
	return;
}

void Function_399(vector3 vParam0) //Position: 0x13F9F / 81823
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_400() //Position: 0x13FB6 / 81846
{
	if (UI_ISACTIVE("SatchelMenu"))
	{
		if (iLocal_806 == 0)
		{
			Function_261();
			UI_ENTER("DesignerHelpBox");
			UI_SET_TEXT("DesignerHelpBox", "Ranch02_satchel_help");
			APPEND_JOURNAL_ENTRY_DETAIL(STRING_TO_HASH("miss4"), "Ranch02_satchel_help", 2, 0, false);
			APPEND_JOURNAL_NOTE("Ranch02_satchel_help", 2, 0);
			iLocal_806 = 1;
		}
		return 1;
	}
	if (UI_ISACTIVE("DesignerHelpBox"))
	{
		UI_EXIT("DesignerHelpBox");
	}
	return 0;
}

void Function_401(int iParam0, bool bParam1, bool bParam2) //Position: 0x140A8 / 82088
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
			*(&Global_15402[iParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
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
						Function_235(&uVar1);
					}
				}
				Function_402(&uVar0);
			}
		}
	}
	return;
}

void Function_402(bool bParam0) //Position: 0x141B7 / 82359
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

int Function_403(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, int iParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x141EA / 82410
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

var Function_404(bool bParam0, struct<2> Param1) //Position: 0x142D5 / 82645
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_405(&bParam0);
		Var0 = Function_405(&bParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_405(bool bParam0) //Position: 0x1434C / 82764
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		GET_POSITION(&bParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

int Function_406(struct<2> Param0, var uParam2, int iParam3, int iParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x143B8 / 82872
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_413(&Global_54076, &iParam3, uParam2))
	{
		Function_251(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_413(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_412(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_422(&iParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_411(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_410(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_410(&iParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &iParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&iParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &iParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_412(1))
	{
		Function_409(1);
		if (!Function_408())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_407();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_410(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_410(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_407() //Position: 0x14561 / 83297
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

bool Function_408() //Position: 0x1458F / 83343
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

void Function_409(bool bParam0) //Position: 0x145D6 / 83414
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

void Function_410(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1463D / 83517
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

void Function_411(bool bParam0) //Position: 0x146F8 / 83704
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

bool Function_412(bool bParam0) //Position: 0x1475F / 83807
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

bool Function_413(bool bParam0, var uParam1, float fParam2) //Position: 0x147A9 / 83881
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_405(&bParam0);
			Function_414(&uParam1);
			if (VDIST(Function_405(&bParam0), Function_414(&uParam1)) >= fParam2)
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

struct<8> Function_414(int iParam0) //Position: 0x148C7 / 84167
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

void Function_415(var uParam0, int iParam1, int iParam2) //Position: 0x14935 / 84277
{
	if (iParam1 != 100000000)
	{
		Function_417(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_416(&uParam0, &iParam2);
	}
	return;
}

void Function_416(struct<69> Param0) //Position: 0x1495C / 84316
{
	Param0.f_68 = 0;
	Function_417(&Param0, 2, &bParam1);
	Function_417(&Param0, 4, &bParam1);
	Function_417(&Param0, 8, &bParam1);
	Function_417(&Param0, 16, &bParam1);
	Function_417(&Param0, 32, &bParam1);
	Function_417(&Param0, 64, &bParam1);
	Function_417(&Param0, 128, &bParam1);
	Function_417(&Param0, 256, &bParam1);
	Function_417(&Param0, 512, &bParam1);
	Function_417(&Param0, 1024, &bParam1);
	return;
}

void Function_417(int iParam0, int iParam1, bool bParam2) //Position: 0x149D7 / 84439
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

int Function_418(struct<69> Param0) //Position: 0x14A16 / 84502
{
	if (!Function_421(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_420(&Param0, &iParam2))
	{
		return 0;
	}
	Function_419(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_415(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_419(char* cParam0) //Position: 0x14A5C / 84572
{
	cParam0.f_64 = iParam1;
	return;
}

bool Function_420(int iParam0, char* cParam1) //Position: 0x14A69 / 84585
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

bool Function_421(struct<61> Param0) //Position: 0x14AF6 / 84726
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&bParam1))
	{
		LOG_ERROR("SET_MISSION_FAIL_TARGET_OBJECT: Object invalid!");
		return 0;
	}
	Param0 = &bParam1;
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

void Function_422(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x14CA9 / 85161
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

void Function_423() //Position: 0x14D3E / 85310
{
	var uVar0;
	
	if (Function_164(&(Global_43791[Global_46760[0]]), 8))
	{
		if (!IS_ACTOR_VALID(&iLocal_707))
		{
			iLocal_707 = Function_425(&Global_11014, &Global_12796, 0, 1, 0, 1);
			iLocal_845 = 1;
			if (IS_ACTOR_VALID(&iLocal_707))
			{
				CLEAR_LAST_HIT(&iLocal_707);
			}
		}
		else if (GET_TASK_STATUS(&iLocal_707, 19) != 1)
		{
			uVar0 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &iLocal_4 + 584[23], 5.0f, 1);
			if (IS_GRINGO_VALID(&uVar0))
			{
				SNAP_ACTOR_TO_GRINGO(&iLocal_707, GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase1", true, 1, 1);
				TASK_USE_GRINGO(&iLocal_707, &uVar0, "UseCase1", 4294967295, 1);
			}
			else if (!Function_424(StackVal, &iLocal_707, (&iLocal_4 + 584[23]), 5.0f))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_707, *(&iLocal_4 + 584[23]), 1, 1, true);
				TASK_STAND_STILL(&iLocal_707, -1.0f, 0, 0);
			}
		}
	}
	return;
}

bool Function_424(int iParam0, struct<2> Param1, float fParam3) //Position: 0x14E44 / 85572
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_405(&iParam0);
		if (VDIST(Function_405(&iParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

var Function_425(struct<2>[] Param0, vector3[] vParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x14ED0 / 85712
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_232(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_232(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || iParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_232(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_229(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_427(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_232(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_229(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_229(&(Param0[iVar02]), 1);
	Function_426(&vParam1[iVar03] + 16, 1);
	if (&bParam5)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&uVar1, 1);
	}
	if (!&bParam4)
	{
		if (IS_ACTOR_HOGTIED(&uVar1))
		{
			FREE_FROM_HOGTIE(&uVar1);
		}
	}
	return &uVar1;
}

int Function_426(int iParam0, bool bParam1) //Position: 0x15097 / 86167
{
	var uVar0;
	var uVar1;
	
	if (IS_PERS_CHAR_VALID(&iParam0))
	{
		uVar0 = GET_ACTOR_FROM_PERS_CHAR(&iParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TASK_CLEAR(&uVar0);
			REFERENCE_ACTOR(&uVar0);
			TASK_PRIORITY_SET(&uVar0, true);
			SET_ACTOR_UPDATE_PRIORITY(&uVar0, false);
			AI_ACTOR_SET_MATCH_WALK_SPEED_ENABLED(&uVar0, 1);
			if (&bParam1)
			{
				if (IS_ACTOR_HOGTIED(&uVar0))
				{
					FREE_FROM_HOGTIE(&uVar0);
				}
			}
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 1))
		{
			SET_PERS_CHAR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iParam0, 1);
			return 1;
		}
	}
	return 0;
}

var Function_427(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x15149 / 86345
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_54(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

int Function_428() //Position: 0x15270 / 86640
{
	Function_319(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_429() //Position: 0x15285 / 86661
{
	Function_257(bLocal_399);
	Function_382(StackVal, Function_257(bLocal_399), bLocal_399, Global_46736[0], Function_259(bLocal_399), 0);
	cLocal_826 = Function_432(Global_46760[0], "narmadillo", "DOCTORSOFFICE", 1);
	Function_159(&cLocal_826, 1);
	uLocal_748 = Vector(-2125,294f, 16,886f, 2598,882f);
	OPEN_DOOR(&cLocal_826, &uLocal_748, 100.0f);
	TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_695, *(&iLocal_4 + 584[33]), 1, 1, true);
	GET_OBJECT_POSITION(&iLocal_4 + 808[0], &Local_745);
	iLocal_717 = Function_403(StackVal, StackVal, &uLocal_385, Function_54(), Local_745, Local_745, &Global_54076, 2.0f, 1, 3, 330, 1, 1, 3212836864, 3212836864, 1);
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 112[1]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[1]);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 112[1]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[1]);
	}
	AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
	if (!IS_ACTOR_VALID(&iLocal_697))
	{
		Function_350();
		iLocal_697 = &iLocal_4 + 88[02];
		ENABLE_VEHICLE_SEAT(&iLocal_697, true, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 2, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 3, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 4, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 5, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 6, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 7, 0);
		iLocal_737 = 2;
		bLocal_694 = false;
		while (bLocal_694 < 1)
		{
			if (IS_ACTOR_VALID(&(uLocal_701[bLocal_694])))
			{
				DESTROY_ACTOR(&(uLocal_701[bLocal_694]));
			}
			uLocal_701[bLocal_694] = GET_DRAFT_ACTOR(bLocal_694, &iLocal_697);
			bLocal_694++;
		}
		Function_431(&iLocal_697);
		Function_418(&(Local_467[115]), &iLocal_697, "Wagon", 1, 0x5f5e100, 1);
		Function_306(&iLocal_697);
		Function_305(&iLocal_268, &iLocal_697);
	}
	ACTOR_SET_GRABBED_BY_CUTSCENE(&iLocal_697, false);
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 160[7]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[7]);
	}
	if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 160[8]))
	{
		REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[8]);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 160[7]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[7]);
	}
	if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 160[8]))
	{
		REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[8]);
	}
	SET_SPAWN_PEDS_ON_SIDEWALK(0);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[3]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[3]);
	Function_243(&iLocal_751);
	Function_243(&iLocal_755);
	iLocal_741 = GET_ITEM_COUNT(Function_201(3), &Global_54076);
	Function_430(&iLocal_795);
	Function_296(1.0f);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_430(float fParam0) //Position: 0x1552B / 87339
{
	if (!Function_291(&fParam0))
	{
		Function_244(&fParam0, 0.0f);
	}
	return;
}

void Function_431(int iParam0) //Position: 0x15542 / 87362
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_FRIENDLY -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(&iParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &iParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_FACTION(&uVar1, 20);
		}
		bVar0++;
	}
	return;
}

bool Function_432(int iParam0, char* cParam1, bool bParam3) //Position: 0x155BA / 87482
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

bool Function_433(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x1565F / 87647
{
	if (Function_434(&iParam0) == iParam6 || Function_389())
	{
		return 1;
	}
	return 0;
}

int Function_434(int iParam0) //Position: 0x1567E / 87678
{
	if (Function_301(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_435() //Position: 0x15697 / 87703
{
	Function_220(9);
	Function_437(0);
	Function_436(3, 0.0f, 1);
	Function_212(3, 1);
	iLocal_699 = Function_351(1, 1, 0, 0, 0, 0, 1, 0);
	if (IS_ACTOR_VALID(&iLocal_699))
	{
		DESTROY_ACTOR(&iLocal_699);
	}
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[1]);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[1]);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 112[1]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 160[1], 15);
	TASK_STAND_STILL(&iLocal_695, -1.0f, 0, 0);
	return;
}

var Function_436(bool bParam0, var uParam1, bool bParam2) //Position: 0x1570B / 87819
{
	struct<2> Var0;
	char* cVar2[32];
	
	Var0 = TO_FLOAT(bParam0);
	Var0.f_4 = uParam1;
	Var0.f_8 = TO_FLOAT(bParam2);
	strcpy(&cVar2, Function_201(bParam0), 32);
	stradd(&cVar2, "_MOD_ITEM_PRICE", 32);
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar2))
	{
		LOG_ERROR("SK_SHOP_FIX_ITEM_PRICE: A price was already fixed on this item! The data is being overwritten.");
	}
	return DECOR_SET_VECTOR(GET_OBJECT_FROM_ACTOR(&Global_54076), &cVar2, Var0);
}

void Function_437(bool bParam0) //Position: 0x157C9 / 88009
{
	if (Function_392(Global_46760[0]) && !DECOR_CHECK_EXIST(&uLocal_385, "unlockedgendoors"))
	{
		if (!bParam0)
		{
			if (!iLocal_813)
			{
				cLocal_828 = Function_432(Global_46760[0], "narmadillo", "GENERALSTORE", 1);
				if (IS_DOOR_OPENED(&cLocal_828))
				{
					CLOSE_DOOR_FAST(&cLocal_828);
				}
				if (!IS_DOOR_LOCKED(&cLocal_828))
				{
					Function_127(&cLocal_828, 1);
				}
				cLocal_830 = Function_432(Global_46760[0], "narmadillo", "GENERALSTORE", 2);
				if (IS_DOOR_OPENED(&cLocal_830))
				{
					CLOSE_DOOR_FAST(&cLocal_830);
				}
				if (!IS_DOOR_LOCKED(&cLocal_830))
				{
					Function_127(&cLocal_830, 1);
				}
				cLocal_832 = Function_432(Global_46760[0], "narmadillo", "GENERALSTORE", 3);
				if (IS_DOOR_OPENED(&cLocal_832))
				{
					CLOSE_DOOR_FAST(&cLocal_832);
				}
				if (!IS_DOOR_LOCKED(&cLocal_832))
				{
					Function_127(&cLocal_832, 1);
				}
			}
		}
		else if (!DECOR_CHECK_EXIST(&uLocal_385, "unlockedgendoors"))
		{
			cLocal_828 = Function_432(Global_46760[0], "narmadillo", "GENERALSTORE", 1);
			if (IS_DOOR_LOCKED(&cLocal_828))
			{
				Function_159(&cLocal_828, 1);
			}
			cLocal_830 = Function_432(Global_46760[0], "narmadillo", "GENERALSTORE", 2);
			if (IS_DOOR_LOCKED(&cLocal_830))
			{
				Function_159(&cLocal_830, 1);
			}
			cLocal_832 = Function_432(Global_46760[0], "narmadillo", "GENERALSTORE", 3);
			if (IS_DOOR_LOCKED(&cLocal_832))
			{
				Function_159(&cLocal_832, 1);
			}
			DECOR_SET_BOOL(&uLocal_385, "unlockedgendoors", true);
		}
	}
	return;
}

void Function_438() //Position: 0x159D9 / 88537
{
	if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &iLocal_695)
	{
		if (!DECOR_CHECK_EXIST(&uLocal_385, "gunOnBonnie"))
		{
			DECOR_SET_FLOAT(&uLocal_385, "gunOnBonnie", GET_CURRENT_GAME_TIME());
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "gunOnBonnie")) < 1.0f)
		{
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_gunOnBonnie", "Ranch02_gunOnBonnie", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			DECOR_SET_FLOAT(&uLocal_385, "gunOnBonnie", -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(&uLocal_385, "gunOnBonnie"))
	{
		DECOR_REMOVE(&uLocal_385, "gunOnBonnie");
	}
	if (IS_OBJECT_VALID(&uLocal_840) && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[6]))
	{
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_crashSomeone"))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_840))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_crashSomeone", "Ranch02_crashSomeone", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_crashSomeone", GET_CURRENT_GAME_TIME());
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_crashSomeone")) < 10.0f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_crashSomeone");
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_840);
		}
	}
	if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_charShotJon"))
	{
		if ((GET_LAST_HIT_TIME(&Global_54076) > 1.0f && IS_ACTOR_VALID(GET_LAST_ATTACKER(&Global_54076))) && GET_LAST_HIT_FLAGS(&Global_54076) == 2)
		{
			if (Function_440())
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_charShotJon", "Ranch02_charShotJon", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_jonShot", "Ranch02_jonShot", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
			}
			DECOR_SET_FLOAT(&uLocal_385, "Ranch02_charShotJon", GET_CURRENT_GAME_TIME());
		}
	}
	else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_charShotJon")) < 15.0f)
	{
		DECOR_REMOVE(&uLocal_385, "Ranch02_charShotJon");
		CLEAR_LAST_HIT(&Global_54076);
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[6]) && bLocal_399 == 2)
	{
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_jonShootRandom"))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076) && !IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_jonShotRandom", "Ranch02_jonShotRandom", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_jonShootRandom", GET_CURRENT_GAME_TIME());
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_jonShootRandom")) < 10.0f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_jonShootRandom");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_gunCharacter"))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_UNDER_RETICLE(&Global_54076, 0)))
			{
				if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iLocal_695)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_gunCharacter", "Ranch02_gunCharacter", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_385, "Ranch02_gunCharacter", GET_CURRENT_GAME_TIME());
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_gunCharacter")) < 10.0f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_gunCharacter");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_assaultCharacter"))
		{
			if (IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
			{
				if (!IS_WEAPON_DRAWN(&Global_54076))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_assaultCharacter", "Ranch02_assaultCharacter", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				}
				else if (Function_439(GET_WEAPON_IN_HAND(&Global_54076)))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_shootCharacter", "Ranch02_shootCharacter", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
				}
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_assaultCharacter", GET_CURRENT_GAME_TIME());
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_assaultCharacter")) < 10.0f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_assaultCharacter");
			CLEAR_LAST_ATTACK(&Global_54076);
		}
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_killWagonHorse"))
		{
			if (IS_ACTOR_VALID(&(uLocal_701[0])))
			{
				if (!IS_ACTOR_ALIVE(&(uLocal_701[0])) && GET_LAST_ATTACKER(&(uLocal_701[0])) != &Global_54076)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_killWagonHorse", "Ranch02_killWagonHorse", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_385, "Ranch02_killWagonHorse", GET_CURRENT_GAME_TIME());
				}
			}
			if (IS_ACTOR_VALID(&(uLocal_701[1])))
			{
				if (!IS_ACTOR_ALIVE(&(uLocal_701[1])) && GET_LAST_ATTACKER(&(uLocal_701[1])) != &Global_54076)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_killWagonHorse", "Ranch02_killWagonHorse", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_385, "Ranch02_killWagonHorse", GET_CURRENT_GAME_TIME());
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_killWagonHorse")) < 10.0f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_killWagonHorse");
		}
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_stealHorseWagon"))
		{
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_stealHorseWagon", "Ranch02_stealHorseWagon", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_stealHorseWagon", GET_CURRENT_GAME_TIME());
			}
			if (IS_ACTOR_RIDING_VEHICLE(&Global_54076))
			{
				if (GET_VEHICLE(&Global_54076) != &iLocal_697)
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_stealHorseWagon", "Ranch02_stealHorseWagon", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
					DECOR_SET_FLOAT(&uLocal_385, "Ranch02_stealHorseWagon", GET_CURRENT_GAME_TIME());
				}
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_stealHorseWagon")) < 10.0f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_stealHorseWagon");
		}
	}
	return;
}

bool Function_439(bool bParam0) //Position: 0x1636E / 90990
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

bool Function_440() //Position: 0x163B4 / 91060
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_441() //Position: 0x163C7 / 91079
{
	var uVar0;
	var uVar1;
	
	if (Global_93258 == 0)
	{
		switch (iLocal_845)
		{
			case 0x00000000:
				if (GET_TASK_STATUS(&iLocal_707, 19) != 1)
				{
					uVar0 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &iLocal_4 + 584[23], 5.0f, 1);
					if (IS_GRINGO_VALID(&uVar0))
					{
						SNAP_ACTOR_TO_GRINGO(&iLocal_707, GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase1", true, 1, 1);
						TASK_USE_GRINGO(&iLocal_707, &uVar0, "UseCase1", 4294967295, 1);
					}
					else if (!Function_424(StackVal, &iLocal_707, (&iLocal_4 + 584[23]), 5.0f))
					{
						TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_707, *(&iLocal_4 + 584[23]), 1, 1, true);
						TASK_STAND_STILL(&iLocal_707, -1.0f, 0, 0);
					}
				}
				if (iLocal_813 == 1)
				{
					if (IS_ACTOR_VALID(GET_LAST_ATTACKER(&iLocal_707)) && GET_LAST_ATTACKER(&iLocal_707) != &Global_54076)
					{
						AI_QUICK_EXIT_GRINGO(&iLocal_707, 1);
						TASK_CLEAR(&iLocal_707);
						TASK_FLEE_ACTOR(&iLocal_707, &Global_54076, -1.0f, -1.0f, 1, 0, 0);
						Function_233(&iLocal_707, 0);
						iLocal_845 = 1;
					}
				}
				if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_836) && EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_838))
				{
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_836);
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_838);
					AI_QUICK_EXIT_GRINGO(&iLocal_707, 1);
					TASK_CLEAR(&iLocal_707);
					TASK_FLEE_ACTOR(&iLocal_707, &Global_54076, -1.0f, -1.0f, 1, 0, 0);
					Function_233(&iLocal_707, 0);
					if (iLocal_813 == 0)
					{
						iLocal_845 = 1;
						Function_251("Ranch02_fail_scared_doctor");
						bLocal_625 = true;
					}
					else
					{
						iLocal_845 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&iLocal_707))
				{
					if (!IS_ACTOR_ALIVE(&iLocal_707))
					{
						if (GET_LAST_ATTACKER(&iLocal_707) != &Global_54076 || GET_LAST_ATTACK_TARGET(&Global_54076) != &iLocal_707)
						{
							Global_6646 = 1;
						}
					}
					if (!DECOR_CHECK_EXIST(&iLocal_707, "polling"))
					{
						DECOR_SET_FLOAT(&iLocal_707, "polling", GET_CURRENT_GAME_TIME());
					}
					else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_707, "polling")) < 0,5f)
					{
						DECOR_SET_FLOAT(&iLocal_707, "polling", GET_CURRENT_GAME_TIME());
						if (GET_TASK_STATUS(&iLocal_707, 19) != 1)
						{
							uVar1 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &iLocal_4 + 584[23], 5.0f, 1);
							if (IS_GRINGO_VALID(&uVar1))
							{
								SNAP_ACTOR_TO_GRINGO(&iLocal_707, GET_OBJECT_FROM_GRINGO(&uVar1), "UseCase1", true, 1, 1);
								TASK_USE_GRINGO(&iLocal_707, &uVar1, "UseCase1", 4294967295, 1);
							}
							else if (!Function_424(StackVal, &iLocal_707, *(&iLocal_4 + 584[23]), 5.0f))
							{
								TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_707, *(&iLocal_4 + 584[23]), 1, 1, true);
								TASK_STAND_STILL(&iLocal_707, -1.0f, 0, 0);
							}
						}
					}
				}
				break;
			}
	}
	return;
}

void Function_442() //Position: 0x166BB / 91835
{
	bool bVar0;
	
	if (iLocal_400 > 7)
	{
		Function_446(StackVal, "$/cutscene/ranch02_end/ranch02_end", &uLocal_635, *(&iLocal_4 + 584[43]), 68315, 0, 200.0f, 300.0f, 2, 2, 2, 2, 0, !Global_93258);
	}
	if (iLocal_400 > 9)
	{
		if (!IS_LAYOUTREF_VALID(&iLocal_292))
		{
			if (Function_349(&iLocal_697))
			{
				Function_305(&iLocal_292, &iLocal_697);
			}
		}
	}
	Function_437(IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[10]));
	Function_445();
	Function_550(17, 0, 0, 23, 59, 59);
	if (iLocal_813 == 1)
	{
		Function_444(&uLocal_783, 60.0f, 200.0f, &iLocal_695, "Ranch02_return_bonnie", "RanchersDaughter_Abandoned", &bLocal_625, 1, 0, 0, 325, 1);
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (Function_443(&Global_54076, &iLocal_695, 8.0f))
			{
				RESET_ACTOR_GAITS(GET_MOUNT(&Global_54076), 1);
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_CLEAR(false);
				TASK_DISMOUNT(false, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				Function_390(12);
			}
		}
		else if (Function_443(&Global_54076, &iLocal_695, 5.0f))
		{
			Function_390(106);
		}
	}
	return;
}

bool Function_443(var uParam0, int iParam1, bool bParam2) //Position: 0x1682E / 92206
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&iParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &iParam1, bParam2))
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

int Function_444(struct<2> Param0, var uParam2, int iParam3, float fParam4, char* cParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x16943 / 92483
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_443(&Global_54076, &iParam3, uParam2))
	{
		Function_251(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_443(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_412(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_422(&fParam4, 7,5f, 0, 2, &iParam7, 0, 0, 0);
				}
				Function_411(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_410(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_410(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_412(2))
	{
		Function_409(2);
		if (!Function_408())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_407();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_235(&iParam3);
				Function_402(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_410(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_410(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_445() //Position: 0x16B01 / 92929
{
	var uVar0;
	var uVar1;
	struct<2> Var3;
	
	if (Function_164(&(Global_43791[Global_46760[0]]), 8))
	{
		if (!IS_ACTOR_VALID(&iLocal_711))
		{
			iLocal_711 = Function_425(&Global_11014, &Global_12796, 13, 1, 0, 1);
			if (IS_ACTOR_VALID(&iLocal_711))
			{
				CLEAR_LAST_HIT(&iLocal_711);
			}
		}
		else if (GET_TASK_STATUS(&iLocal_711, 19) != 1)
		{
			uVar1 = Vector(-2150,826f, 17,576f, 2623,295f);
			uVar0 = LOCATE_GRINGO_OF_NAME("tend_counter_and_patron", &uVar1, 5.0f, 1);
			if (IS_GRINGO_VALID(&uVar0))
			{
				SNAP_ACTOR_TO_GRINGO(&iLocal_711, GET_OBJECT_FROM_GRINGO(&uVar0), "UseCase1", true, 1, 1);
				TASK_USE_GRINGO(&iLocal_711, &uVar0, "UseCase1", 4294967295, 1);
			}
			else
			{
				Var3 = Vector(-2151,732f, 16,96f, 2623,481f);
				if (!Function_424(StackVal, &iLocal_711, Var3, 5.0f))
				{
					TELEPORT_ACTOR_WITH_HEADING(&iLocal_711, Var3, -85,1f, 1, 1, true);
					TASK_STAND_STILL(&iLocal_711, -1.0f, 0, 0);
				}
			}
		}
	}
	return;
}

int Function_446(var uParam0, var uParam1, struct<2> Param2, var uParam4, bool bParam5, float fParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, bool bParam12, var uParam13) //Position: 0x16C11 / 93201
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_424(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_447()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
	{
		if (!&bParam5 && (HUD_IS_FADED() || HUD_IS_FADING()))
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
		if ((uParam13 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE_WITH_CUSTOM_OVERRIDE: Preload cutscene DOES NOT exist, going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0))
				{
					uParam1 = 1;
				}
				else
				{
					if (HUD_IS_FADED())
					{
						LOG_ERROR("you're trying to preload a cutscene while faded out...was that intentional?");
					}
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam8, &uParam9, &uParam10, &uParam11);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
				{
					uParam1 = 5;
				}
				else if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					uParam1 = 2;
				}
				break;
			
			case 0x00000002:
				Call_Loc(&uParam4);
				if (StackVal)
				{
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
	else if ((!Function_424(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_447()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_424(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

int Function_447() //Position: 0x16EF0 / 93936
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_448() //Position: 0x16EFF / 93951
{
	if (iLocal_400 < 4 && iLocal_400 > 105)
	{
		Function_483();
		Function_480();
		Function_479();
		Function_478();
		Function_441();
		Function_438();
	}
	switch (iLocal_400)
	{
		case 0x00000000:
			Function_393(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_477();
			Function_261();
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			if (Function_301(&Local_387))
			{
				Function_391(&Local_387);
				Function_390(1);
			}
			else
			{
				Function_296(1.0f);
				Function_390(14);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_268))
				{
					Function_306(&iLocal_697);
				}
				else
				{
					Function_305(&iLocal_268, &iLocal_697);
					Function_296(1.0f);
					Function_390(14);
				}
			}
			break;
		
		case 0x0000000F:
			Function_257(bLocal_399);
			Function_382(StackVal, Function_257(bLocal_399), bLocal_399, Global_46736[2], Function_259(bLocal_399), 3);
			Function_243(&iLocal_751);
			Function_243(&iLocal_755);
			Function_243(&iLocal_771);
			Function_390(14);
			break;
		
		case 0x0000000E:
			Function_474();
			Function_471();
			Function_470();
			if (Function_469())
			{
				if (Function_468())
				{
					if (!Function_462())
					{
						if (iLocal_821 == 0)
						{
							if (iLocal_820 == 0)
							{
								if (Function_392(Global_46760[0]))
								{
									iLocal_820 = 1;
								}
							}
							if (iLocal_820 == 0)
							{
								if (iLocal_824 == 1)
								{
									if (iLocal_825 == 1)
									{
										if (Function_460())
										{
											Function_430(&iLocal_775);
											iLocal_825 = 0;
											iLocal_824 = 0;
										}
									}
									else if (Function_289(&iLocal_775) <= 10.0f)
									{
										if (Function_450())
										{
											iLocal_824 = 0;
										}
									}
								}
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (iLocal_824 == 0)
									{
										Function_243(&iLocal_775);
										iLocal_824 = 1;
									}
								}
							}
							Function_449();
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_636[1] = 1;
				bLocal_399 = 2;
				Function_390(0);
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
			break;
	}
	return;
}

void Function_449() //Position: 0x170B6 / 94390
{
	bLocal_842 = GET_MATERIAL_AT_VECTOR(&Global_54078);
	if (Function_14(bLocal_842, 64))
	{
		iLocal_817 = 0;
		iLocal_818 = 0;
		iLocal_816 = 1;
	}
	if (Function_14(bLocal_842, 32) && !Function_14(bLocal_842, 64))
	{
		iLocal_816 = 0;
		iLocal_818 = 0;
		iLocal_817 = 1;
	}
	if (!Function_14(bLocal_842, 64) && !Function_14(bLocal_842, 32))
	{
		iLocal_816 = 0;
		iLocal_817 = 0;
		iLocal_818 = 1;
	}
	if (GET_VEHICLE_BUMP_COUNT(&iLocal_697) > 15)
	{
		iLocal_816 = 0;
		RESET_VEHICLE_BUMP_COUNT(&iLocal_697);
	}
	if (iLocal_816 == 0)
	{
		if (!Function_291(&fLocal_763))
		{
			Function_430(&fLocal_763);
		}
		else if ((iLocal_819 != 0 && Function_289(&fLocal_763) < 7,5f) && !DECOR_CHECK_EXIST(&uLocal_385, "bOffPath"))
		{
			if (iLocal_818 != 1 && !DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_offRoad"))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_offRoad", "Ranch02_offRoad", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_offRoad", GET_CURRENT_GAME_TIME());
				DECOR_SET_BOOL(&uLocal_385, "bOffPath", true);
				LOG_ERROR("offroad");
			}
			if (iLocal_817 == 1)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_horsePath", "Ranch02_horsePath", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_horsePath", GET_CURRENT_GAME_TIME());
				DECOR_SET_BOOL(&uLocal_385, "bOffPath", true);
				LOG_ERROR("offroad");
			}
			Function_399(&fLocal_763);
			iLocal_819 = 1;
		}
	}
	else
	{
		if (DECOR_CHECK_EXIST(&uLocal_385, "bOffPath"))
		{
			RESTART_SCRIPTED_CONVERSATION();
			DECOR_REMOVE(&uLocal_385, "bOffPath");
		}
		if (DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_offRoad"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_offRoad")) < 20.0f)
			{
				DECOR_REMOVE(&uLocal_385, "Ranch02_offRoad");
			}
		}
		if (DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_horsePath"))
		{
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_horsePath")) < 20.0f)
			{
				DECOR_REMOVE(&uLocal_385, "Ranch02_horsePath");
			}
		}
		if (Function_291(&fLocal_763))
		{
			Function_399(&fLocal_763);
			RESET_VEHICLE_BUMP_COUNT(&iLocal_697);
			iLocal_819 = 0;
		}
	}
	return;
}

bool Function_450() //Position: 0x173A5 / 95141
{
	if (Function_459() > 7 && iLocal_742 > 7)
	{
		switch (iLocal_742)
		{
			case 0x00000000:
				Function_458();
				break;
			
			case 0x00000001:
				Function_457();
				break;
			
			case 0x00000002:
				Function_456();
				break;
			
			case 0x00000003:
				Function_455();
				break;
			
			case 0x00000004:
				Function_454();
				break;
			
			case 0x00000005:
				Function_451();
				break;
		}
		iLocal_742++;
	}
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void Function_451() //Position: 0x1741D / 95261
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v6_AA", "Ranch02_wayToArm_v6_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v6_AB", "Ranch02_wayToArm_v6_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v6_AC", "Ranch02_wayToArm_v6_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v6_AD", "Ranch02_wayToArm_v6_AD", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v6_AE", "Ranch02_wayToArm_v6_AE", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v6_AF", "Ranch02_wayToArm_v6_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v6_AG", "Ranch02_wayToArm_v6_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v6_AH", "Ranch02_wayToArm_v6_AH", false, 1, 0, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_452(int iParam0) //Position: 0x1760F / 95759
{
	Function_453(0, &Global_54076, iParam0, 0);
	Function_453(1, &iLocal_695, iParam0, 0);
	return;
}

void Function_453(int iParam0, char* cParam1, var uParam2, int iParam3) //Position: 0x1762B / 95787
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &cParam1, 0);
	}
}

void Function_454() //Position: 0x17653 / 95827
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AA", "Ranch02_wayToArm_v5_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v5_AB", "Ranch02_wayToArm_v5_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AC", "Ranch02_wayToArm_v5_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AD1", "Ranch02_wayToArm_v5_AD1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AD2", "Ranch02_wayToArm_v5_AD2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AE", "Ranch02_wayToArm_v5_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AF", "Ranch02_wayToArm_v5_AF", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v5_AG", "Ranch02_wayToArm_v5_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AH", "Ranch02_wayToArm_v5_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v5_AI", "Ranch02_wayToArm_v5_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v5_AJ", "Ranch02_wayToArm_v5_AJ", true, 1, 0, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_455() //Position: 0x178FA / 96506
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AA", "Ranch02_wayToArm_v4_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v4_AB", "Ranch02_wayToArm_v4_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AC", "Ranch02_wayToArm_v4_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v4_AD", "Ranch02_wayToArm_v4_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v4_AE1", "Ranch02_wayToArm_v4_AE1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v4_AE2", "Ranch02_wayToArm_v4_AE2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v4_AF", "Ranch02_wayToArm_v4_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AG1", "Ranch02_wayToArm_v4_AG1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AG2", "Ranch02_wayToArm_v4_AG2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AH1", "Ranch02_wayToArm_v4_AH1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AH2", "Ranch02_wayToArm_v4_AH2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AI", "Ranch02_wayToArm_v4_AI", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v4_AJ", "Ranch02_wayToArm_v4_AJ", false, 1, 0, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_456() //Position: 0x17C1F / 97311
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v3_AA", "Ranch02_wayToArm_v3_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v3_AB", "Ranch02_wayToArm_v3_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v3_AC1", "Ranch02_wayToArm_v3_AC1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_380", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v3_AC2", "Ranch02_wayToArm_v3_AC2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v3_AD", "Ranch02_wayToArm_v3_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v3_AE", "Ranch02_wayToArm_v3_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v3_AF1", "Ranch02_wayToArm_v3_AF1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v3_AF2", "Ranch02_wayToArm_v3_AF2", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v3_AG", "Ranch02_wayToArm_v3_AG", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_3230", "", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v3_AH", "Ranch02_wayToArm_v3_AH", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v3_AI", "Ranch02_wayToArm_v3_AI", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v3_AJ", "Ranch02_wayToArm_v3_AJ", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v3_AK", "Ranch02_wayToArm_v3_AK", true, 1, 0, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_457() //Position: 0x17F7B / 98171
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AA", "Ranch02_wayToArm_v2_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v2_AB", "Ranch02_wayToArm_v2_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AC", "Ranch02_wayToArm_v2_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v2_AD", "Ranch02_wayToArm_v2_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AE", "Ranch02_wayToArm_v2_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AF1", "Ranch02_wayToArm_v2_AF1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AF2", "Ranch02_wayToArm_v2_AF2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AF3", "Ranch02_wayToArm_v2_AF3", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AF4", "Ranch02_wayToArm_v2_AF4", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v2_AF5", "Ranch02_wayToArm_v2_AF5", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v2_AG1", "Ranch02_wayToArm_v2_AG1", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v2_AG2", "Ranch02_wayToArm_v2_AG2", true, 1, 0, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_458() //Position: 0x18269 / 98921
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AA", "Ranch02_wayToArm_v1_AA", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AB", "Ranch02_wayToArm_v1_AB", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AC", "Ranch02_wayToArm_v1_AC", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AD", "Ranch02_wayToArm_v1_AD", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AE", "Ranch02_wayToArm_v1_AE", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AF", "Ranch02_wayToArm_v1_AF", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AG", "Ranch02_wayToArm_v1_AG", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AH", "Ranch02_wayToArm_v1_AH", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AI1", "Ranch02_wayToArm_v1_AI1", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AI2", "Ranch02_wayToArm_v1_AI2", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AJ", "Ranch02_wayToArm_v1_AJ", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AK", "Ranch02_wayToArm_v1_AK", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AL", "Ranch02_wayToArm_v1_AL", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AM", "Ranch02_wayToArm_v1_AM", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AN", "Ranch02_wayToArm_v1_AN", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AO", "Ranch02_wayToArm_v1_AO", false, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Ranch02_wayToArm_v1_AP", "Ranch02_wayToArm_v1_AP", true, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wayToArm_v1_AQ", "Ranch02_wayToArm_v1_AQ", false, 1, 0, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_459() //Position: 0x186AD / 100013
{
	return Global_53524.f_68;
}

bool Function_460() //Position: 0x186B8 / 100024
{
	switch (Function_459())
	{
		case 0x00000000:
			Function_458();
			break;
		
		case 0x00000001:
			Function_457();
			break;
		
		case 0x00000002:
			Function_456();
			break;
		
		case 0x00000003:
			Function_455();
			break;
		
		case 0x00000004:
			Function_454();
			break;
		
		case 0x00000005:
			Function_451();
			break;
		
		default:
			Function_461();
			break;
	}
	iLocal_742++;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void Function_461() //Position: 0x18728 / 100136
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_noTalk", "Ranch02_noTalk", false, 1, 1, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_462() //Position: 0x1876D / 100205
{
	int iVar0;
	int iVar1;
	
	if (!IS_OBJECT_VALID(&bLocal_715))
	{
		return 0;
	}
	iVar0 = 0;
	GET_ACTOR_VEHICLE_STATE(&Global_54076, &iVar0, &iVar1);
	if (iVar1 != 1)
	{
		return 0;
	}
	if (!Function_464(&bLocal_715, 0, 1, 0, 0, 0))
	{
		return 0;
	}
	Function_210();
	Function_463(&bLocal_715);
	HUD_ENABLE(0);
	HUD_CLEAR_HELP_QUEUE();
	ABORT_SCRIPTED_CONVERSATION(1);
	STOP_VEHICLE(&iLocal_697);
	Function_243(&iLocal_751);
	Function_243(&iLocal_775);
	Function_390(106);
	return 1;
}

void Function_463(bool bParam0) //Position: 0x187D8 / 100312
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

bool Function_464(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1886E / 100462
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	var uVar5;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		LOG_ERROR("Invalid gateway given to UPDATE_GATEWAY_AND_STOP_ACTOR");
		return 0;
	}
	if (&bParam4)
	{
		if (DECOR_CHECK_EXIST(&uParam0, "gaveDismount"))
		{
			uVar0 = GATEWAY_GET_ACTOR(&uParam0);
			if (IS_OBJECT_VALID(&uVar0))
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
				if (!IS_ACTOR_RIDING(&uVar1))
				{
					DECOR_REMOVE(&uParam0, "gaveDismount");
					return 1;
				}
				return 0;
			}
			return 1;
		}
	}
	if (GATEWAY_UPDATE(&uParam0))
	{
		uVar0 = GATEWAY_GET_ACTOR(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
			if (IS_ACTOR_PLAYER(&uVar1))
			{
				SET_PLAYER_CONTROL(0, 0, &uParam1, &uParam1);
			}
			if (IS_PLAYER_DEADEYE(0) && uParam2)
			{
				CANCEL_DEADEYE();
				CANCEL_TIME_WARP(1);
			}
			if (&bParam3)
			{
				Function_467(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_466(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
				{
					SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&uVar1), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
				}
				RESET_ACTOR_GAITS(GET_MOUNT(&uVar1), 1);
			}
			else
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			}
			if (bParam4 && IS_ACTOR_RIDING(&uVar1))
			{
				bVar2 = TASK_SEQUENCE_OPEN();
				if (Function_466(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_465(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_465(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(false, 1);
				TASK_GO_TO_COORD(0, &iVar3, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar2);
				TASK_SEQUENCE_RELEASE(bVar2, 1);
				DECOR_SET_FLOAT(&uParam0, "gaveDismount", GET_CURRENT_GAME_TIME());
				Global_6657 = 1;
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int Function_465(vector3 vParam0) //Position: 0x18AA3 / 101027
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_74(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_466(var uParam0, bool bParam1) //Position: 0x18B19 / 101145
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_467(var uParam0, bool bParam1) //Position: 0x18B3A / 101178
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
	else if (!&bParam1 || Function_466(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

bool Function_468() //Position: 0x18BA4 / 101284
{
	struct<2> Var0;
	bool bVar2;
	
	if (!Function_291(&iLocal_799))
	{
		Function_430(&iLocal_799);
	}
	if (Function_289(&iLocal_799) > 1.0f)
	{
		return 1;
	}
	GET_ACTOR_VELOCITY(&iLocal_697, &Var0);
	bVar2 = VMAG(Var0);
	if (bVar2 > 1.0f)
	{
		if (!Function_291(&fLocal_791))
		{
			Function_430(&fLocal_791);
		}
		else if ((iLocal_823 != 0 && Function_289(&fLocal_791) < 5.0f) && DECOR_CHECK_EXIST(&uLocal_385, "beganmoving"))
		{
			if (DECOR_CHECK_EXIST(&uLocal_385, "beganmoving") && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[6]))
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_stopWagon", "Ranch02_stopWagon", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
			}
			Function_399(&fLocal_791);
			iLocal_823 = 1;
		}
		return 0;
	}
	if (Function_291(&fLocal_791))
	{
		Function_399(&fLocal_791);
		iLocal_823 = 0;
	}
	if (DECOR_CHECK_EXIST(&uLocal_385, "jumpOffWagon"))
	{
		DECOR_REMOVE(&uLocal_385, "jumpOffWagon");
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[6]) && !IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 288[0]))
	{
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_drivenFast_triggered"))
		{
			if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_drivenFast"))
			{
				if (bVar2 < 15,1f)
				{
					DECOR_SET_FLOAT(&uLocal_385, "Ranch02_drivenFast", GET_CURRENT_GAME_TIME());
				}
			}
			else if (bVar2 >= 15,25f)
			{
				DECOR_REMOVE(&uLocal_385, "Ranch02_drivenFast");
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_drivenFast")) < 5.0f)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_drivenFast", "Ranch02_drivenFast", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_drivenFast_triggered", GET_CURRENT_GAME_TIME());
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_drivenFast_triggered")) < 20.0f || bVar2 >= 15,1f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_drivenFast");
			DECOR_REMOVE(&uLocal_385, "Ranch02_drivenFast_triggered");
			RESTART_SCRIPTED_CONVERSATION();
		}
		if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_drivenSlow_triggered"))
		{
			if (!DECOR_CHECK_EXIST(&uLocal_385, "Ranch02_drivenSlow"))
			{
				if (bVar2 > 4.0f)
				{
					DECOR_SET_FLOAT(&uLocal_385, "Ranch02_drivenSlow", GET_CURRENT_GAME_TIME());
				}
			}
			else if (bVar2 <= 4.0f)
			{
				DECOR_REMOVE(&uLocal_385, "Ranch02_drivenSlow");
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_drivenSlow")) < 5.0f)
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_drivenSlow", "Ranch02_drivenSlow", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
				DECOR_SET_FLOAT(&uLocal_385, "Ranch02_drivenSlow_triggered", GET_CURRENT_GAME_TIME());
			}
		}
		else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uLocal_385, "Ranch02_drivenSlow_triggered")) < 20.0f || bVar2 > 4.0f)
		{
			DECOR_REMOVE(&uLocal_385, "Ranch02_drivenSlow");
			DECOR_REMOVE(&uLocal_385, "Ranch02_drivenSlow_triggered");
			RESTART_SCRIPTED_CONVERSATION();
		}
	}
	DECOR_SET_BOOL(&uLocal_385, "beganmoving", true);
	return 1;
	Function_243(&iLocal_799);
	return 1;
}

bool Function_469() //Position: 0x1907A / 102522
{
	if (GET_VEHICLE(&Global_54076) == &iLocal_697)
	{
		iLocal_740 = 0;
		Function_243(&iLocal_779);
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
		return 1;
	}
	if (Function_291(&fLocal_763))
	{
		Function_399(&fLocal_763);
		iLocal_819 = 0;
	}
	if (Function_291(&fLocal_791))
	{
		Function_399(&fLocal_791);
		iLocal_823 = 0;
	}
	if (iLocal_740 == 0)
	{
		if (GET_VEHICLE(&iLocal_695) == &iLocal_697)
		{
			HUD_CLEAR_OBJECTIVE();
			Function_422("Ranch02_Wagon_Back_On", 7,5f, 1, 2, 0, 0, 0, 0);
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_jumpOffWagon", "Ranch02_jumpOffWagon", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
			iLocal_740 = 1;
		}
		else
		{
			iLocal_740 = 1;
		}
	}
	else if (iLocal_740 == 1)
	{
		if (GET_VEHICLE(&iLocal_695) == &iLocal_697)
		{
			if (!Function_443(&Global_54076, &iLocal_695, RAND_FLOAT_RANGE(10.0f, 15.0f)))
			{
				if (Function_440())
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_wonderWagon", "Ranch02_wonderWagon", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_runsOffWagon", "Ranch02_runsOffWagon", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
				}
				iLocal_740 = 2;
			}
		}
	}
	return 0;
}

int Function_470() //Position: 0x1921B / 102939
{
	if (iLocal_805 == 1)
	{
		return 0;
	}
	if (IS_ACTOR_IN_VOLUME(&iLocal_697, &iLocal_4 + 160[0]))
	{
		Function_139("Ranch02_stop_help", 10.0f, 1, 0, 2, 1, 0);
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
		iLocal_805 = 1;
		return 1;
	}
	return 0;
}

void Function_471() //Position: 0x19275 / 103029
{
	int iVar0;
	
	if (iLocal_804 == 1)
	{
		return;
	}
	if (GET_VEHICLE(&Global_54076) != &iLocal_697)
	{
		Function_243(&iLocal_759);
		iLocal_738 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Local_719[iVar02] = Vector(0.0f, 0.0f, 0.0f);
			iVar0++;
		}
		return;
	}
	if (!Function_291(&iLocal_759))
	{
		Function_430(&iLocal_759);
	}
	if (Function_289(&iLocal_759) < 5.0f)
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iLocal_697), &(Local_719[iLocal_7382]));
		iLocal_738++;
		if (iLocal_738 > 4)
		{
			iLocal_738 = 0;
		}
		if (Function_472(&Local_719, 4, 3.0f))
		{
			Function_261();
			Function_139("Ranch02_stuck_help", 10.0f, 1, 0, 2, 1, 0);
			iLocal_804 = 1;
		}
		Function_243(&iLocal_759);
	}
	return;
}

bool Function_472(struct<2>[] Param0, int iParam1, float fParam2) //Position: 0x19338 / 103224
{
	int iVar0;
	
	if (Function_74(StackVal, Param0[02]))
	{
		return 0;
	}
	iVar0 = 1;
	while (iVar0 < (iParam1 - 1))
	{
		if (Function_74(StackVal, Param0[iVar02]))
		{
			return 0;
		}
		if (Function_473(&(Param0[02]), &(Param0[iVar02])) < fParam2)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

float Function_473(struct<2> Param0) //Position: 0x1938D / 103309
{
	return VDIST(Param0, Param1);
}

void Function_474() //Position: 0x193A0 / 103328
{
	if (iLocal_803 == 0)
	{
		if (!Function_392(Global_46816[0]))
		{
			Function_220(1);
			Function_220(32);
			Function_476(3);
			Function_475(0,3f);
			if (iLocal_822 == 0)
			{
				AUDIO_MUSIC_SET_MOOD("RIDING", 0, 4294967295, 4294967295);
				iLocal_822 = 1;
			}
			iLocal_803 = 1;
		}
	}
	else if (Function_392(Global_46760[0]))
	{
		Function_476(0);
		iLocal_803 = 0;
	}
	return;
}

void Function_475(float fParam0) //Position: 0x19404 / 103428
{
	if (fParam0 > 0.0f || fParam0 < 1.0f)
	{
		return;
	}
	Function_220(64);
	Global_43580.f_52 = (fParam0 - Global_43580.f_48);
	return;
}

void Function_476(int iParam0) //Position: 0x19429 / 103465
{
	if (iParam0 < 0)
	{
		return;
	}
	if (iParam0 >= 10)
	{
		iParam0 = 10;
	}
	Global_43580.f_56 = (iParam0 - Global_43580.f_12);
	return;
}

void Function_477() //Position: 0x1944E / 103502
{
	if (!IS_ACTOR_VALID(&iLocal_697))
	{
		Function_337();
		iLocal_697 = &iLocal_250 + 48[02];
		ENABLE_VEHICLE_SEAT(&iLocal_697, true, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 2, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 3, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 4, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 5, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 6, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 7, 0);
		iLocal_737 = 2;
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_697, *(&iLocal_4 + 896[23]), 1, 1, true);
		SET_ACTOR_IN_VEHICLE(&Global_54076, &iLocal_697, false);
		SET_ACTOR_IN_VEHICLE(&iLocal_695, &iLocal_697, true);
		bLocal_694 = false;
		while (bLocal_694 < 1)
		{
			uLocal_701[bLocal_694] = GET_DRAFT_ACTOR(bLocal_694, &iLocal_697);
			bLocal_694++;
		}
	}
	Function_431(&iLocal_697);
	Function_418(&(Local_467[115]), &iLocal_697, "Wagon", 1, 0x5f5e100, 1);
	Function_257(bLocal_399);
	Function_382(StackVal, Function_257(bLocal_399), bLocal_399, Global_46736[2], Function_259(bLocal_399), 3);
	if (!IS_OBJECT_VALID(&uLocal_840))
	{
		uLocal_840 = CREATE_EVENT_TRAP(Function_54(), 88, &uLocal_385);
		EVENT_TRAP_ON_PERPETRATOR(&uLocal_840, GET_OBJECT_FROM_ACTOR(&Global_54076));
	}
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[7]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[8]);
	SET_SPAWN_PEDS_ON_SIDEWALK(1);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	iLocal_844 = 0;
	Function_243(&iLocal_751);
	Function_243(&iLocal_755);
	Function_243(&iLocal_771);
	return;
}

void Function_478() //Position: 0x195B9 / 103865
{
	var uVar0;
	
	if (iLocal_810 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 264[0]))
		{
			uVar0 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
			ATTACH_OBJECTS(StackVal, StackVal, &uVar0, &iLocal_697, Function_54(), Vector(0.0f, 1.0f, -35.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			TASK_CLEAR(&uLocal_709);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&uLocal_709, &uVar0, 2.0f, 3);
			PLAY_SOUND_FROM_ACTOR(&uLocal_709, "dog_bark_now_master", 0);
			Function_430(&fLocal_767);
			iLocal_810 = 1;
		}
	}
	else if (Function_291(&fLocal_767))
	{
		if (Function_289(&fLocal_767) < 10.0f)
		{
			TASK_CLEAR(&uLocal_709);
			RELEASE_ACTOR(&uLocal_709);
			Function_399(&fLocal_767);
		}
	}
	return;
}

void Function_479() //Position: 0x19673 / 104051
{
	int iVar0;
	
	iVar0 = GET_NUM_DRAFTED_ACTORS(&iLocal_697);
	if (iVar0 <= iLocal_737)
	{
		if (iVar0 == 1)
		{
			iLocal_737 = iVar0;
			SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_lostHorse_v1", "Ranch02_lostHorse_v1", 0, 1, 0, 3, 1, 0, 0, 1000, 0, 0);
		}
	}
	return;
}

void Function_480() //Position: 0x196D7 / 104151
{
	switch (iLocal_844)
	{
		case 0x00000000:
			if (Function_482(&Global_54076, &iLocal_697, 0) && GET_VEHICLE(&iLocal_695) != &iLocal_697)
			{
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[2]))
				{
					Function_481();
					iLocal_821 = 1;
					iLocal_844 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (GET_VEHICLE(&Global_54076) != &iLocal_697 && GET_VEHICLE(&iLocal_695) != &iLocal_697)
			{
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[2]))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!Function_291(&fLocal_787))
						{
							HUD_CLEAR_OBJECTIVE();
							Function_422("Ranch02_Return_Off_Course", 7,5f, 1, 2, 0, 0, 0, 0);
							Function_430(&fLocal_787);
						}
					}
					if (Function_291(&fLocal_787))
					{
						if (Function_289(&fLocal_787) < 30.0f)
						{
							Function_399(&fLocal_787);
							Function_251("Ranch02_fail_off_course");
							bLocal_625 = true;
						}
					}
				}
				else
				{
					if (Function_291(&fLocal_787))
					{
						Function_399(&fLocal_787);
					}
					if (Function_291(&fLocal_763))
					{
						Function_399(&fLocal_763);
					}
					iLocal_821 = 0;
					iLocal_844 = 0;
				}
			}
			else if (Function_291(&fLocal_787))
			{
				Function_399(&fLocal_787);
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_481() //Position: 0x19827 / 104487
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_wronway", "Ranch02_wronway", false, 1, 1, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_482(int iParam0, int iParam1, bool bParam2) //Position: 0x1986E / 104558
{
	int iVar0;
	
	if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam1, bParam2) != &iParam0)
	{
		return 0;
	}
	GET_ACTOR_VEHICLE_STATE(&iParam0, &bParam2, &iVar0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void Function_483() //Position: 0x19898 / 104600
{
	Function_487(StackVal, "$/cutscene/ranch02_cs02/ranch02_cs02", &uLocal_635, *(&iLocal_4 + 584[43]), 0, 100.0f, 150.0f, 2, 1, 2, 2, 0, 1);
	Function_550(17, 0, 0, 23, 59, 59);
	if (iLocal_807 == 0)
	{
		Function_444(&uLocal_783, 60.0f, 200.0f, &iLocal_695, "Ranch02_Wagon_Return_A", "RanchersDaughter_Abandoned", &bLocal_625, 1, 0, 0, 325, 1);
	}
	else
	{
		Function_444(&uLocal_783, 60.0f, 200.0f, &iLocal_695, "Ranch02_Wagon_Return_B", "RanchersDaughter_Abandoned", &bLocal_625, 1, 0, 0, 325, 1);
	}
	if (GET_VEHICLE(&iLocal_695) != &iLocal_697)
	{
		if (bLocal_815 == 0)
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_695, &iLocal_697, 1, 1, 0);
			bLocal_815 = true;
		}
	}
	else
	{
		bLocal_815 = false;
	}
	if (Function_392(Global_46760[0]))
	{
		if (!IS_DOOR_VALID(&cLocal_826))
		{
			cLocal_826 = Function_432(Global_46760[0], "narmadillo", "DOCTORSOFFICE", 1);
		}
		else
		{
			if (IS_DOOR_OPENED(&cLocal_826))
			{
				CLOSE_DOOR_FAST(&cLocal_826);
			}
			if (!IS_DOOR_LOCKED(&cLocal_826))
			{
				Function_127(&cLocal_826, 1);
			}
		}
	}
	Function_423();
	if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
	{
		if (!bLocal_815 && !DECOR_CHECK_EXIST(&iLocal_695, "lookingatplayer"))
		{
			FORCE_LOOK_AT_ACTOR(&iLocal_695, &Global_54076, 3212836864);
			DECOR_SET_BOOL(&iLocal_695, "lookingatplayer", true);
		}
		if (iLocal_809 == 1)
		{
			Function_463(&bLocal_715);
			Function_210();
			iLocal_809 = 0;
		}
		if (iLocal_808 == 0)
		{
			uLocal_834 = ADD_BLIP_FOR_OBJECT(&iLocal_697, 325, 0f, 2, 0);
			iLocal_808 = 1;
		}
	}
	else if (GET_VEHICLE(&Global_54076) != &iLocal_697 && Function_482(&iLocal_695, &iLocal_697, 1))
	{
		if (!bLocal_815 && DECOR_CHECK_EXIST(&iLocal_695, "lookingatplayer"))
		{
			STOP_FORCE_LOOK_AT_COORD(&iLocal_695);
			DECOR_REMOVE(&iLocal_695, "lookingatplayer");
		}
		if (iLocal_808 == 1)
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_697)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_697));
			}
			iLocal_808 = 0;
		}
		if (iLocal_809 == 0)
		{
			if (!IS_OBJECT_VALID(&bLocal_715))
			{
				bLocal_715 = Function_486(&uLocal_385, Function_54(), &iLocal_4 + 160[9], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
				Function_332(&bLocal_715);
				Function_484(StackVal, Function_332(&bLocal_715), 0, 16, 1);
				Function_243(&iLocal_775);
				if (Function_291(&fLocal_791))
				{
					Function_399(&fLocal_791);
				}
				if (Function_291(&fLocal_763))
				{
					Function_399(&fLocal_763);
				}
			}
			else if (iLocal_821 == 0)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_261();
					Function_422("Ranch02_to_armadillo", 7,5f, 1, 2, 0, 0, 0, 0);
					iLocal_809 = 1;
				}
			}
			else
			{
				iLocal_809 = 1;
			}
		}
	}
	return;
}

void Function_484(struct<2> Param0, int iParam2, int iParam3, int iParam4) //Position: 0x19BF7 / 105463
{
	*(&Global_42834 + 32) = Param0;
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
		Function_485(&Global_42834 + 16);
		CLEAN_OBJECTSET(&Global_42834 + 16);
	}
	Global_42834.f_100 = 0;
	Global_42862.f_104 = &iParam4;
}

void Function_485(bool bParam0) //Position: 0x19CB8 / 105656
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&bParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &bParam0);
		CLEAN_OBJECTSET(&bParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

int Function_486(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9) //Position: 0x19D01 / 105729
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &uParam1, &uParam2, &uParam3, iParam4, &iParam6, &iParam7, &iParam8, &iParam9, 1);
	if (IS_OBJECT_VALID(&uVar0))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uParam2);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam2)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uParam2));
		}
		ADD_BLIP_FOR_OBJECT(&uVar0, bParam5, 0.0f, 2, 0);
		DECOR_SET_OBJECT(&uVar0, "volrestrict", &uParam2);
		DECOR_SET_BOOL(&uVar0, "voldestroy", &iParam8);
	}
	return &uVar0;
}

int Function_487(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x19D92 / 105874
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_424(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_447()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					Function_488();
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
	else if ((!Function_424(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_447()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_424(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_488() //Position: 0x19FFA / 106490
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
			Function_335(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_489() //Position: 0x1A04E / 106574
{
	if (iLocal_400 < 4 && iLocal_400 > 105)
	{
		Function_496();
		Function_480();
		Function_479();
		Function_478();
		Function_441();
		Function_438();
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 160[5]) && IS_ACTOR_IN_VOLUME(&iLocal_697, &iLocal_4 + 160[5]))
		{
			iLocal_636[0] = 1;
			bLocal_399 = true;
			Function_390(15);
		}
	}
	switch (iLocal_400)
	{
		case 0x00000000:
			Function_393(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(15);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_494();
			Function_261();
			AUDIO_MUSIC_SET_MOOD("IDLE", 0, 4294967295, 4294967295);
			if (Function_301(&Local_387))
			{
				Function_391(&Local_387);
				iLocal_623 = Global_46816[0];
				SET_ACTOR_HEADING(&Global_54076, 140.0f, 1);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_695, *(&iLocal_4 + 312[13]), 1, 1, true);
				Function_390(1);
			}
			else
			{
				Function_296(1.0f);
				Function_390(6);
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_392(iLocal_623))
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_268))
				{
					Function_306(&iLocal_697);
				}
				else
				{
					Function_305(&iLocal_268, &iLocal_697);
					Function_296(1.0f);
					Function_390(6);
				}
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADED())
			{
				Function_493();
				Function_390(7);
			}
			break;
		
		case 0x00000007:
			if (!Function_492())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_422("Ranch02_on_wagon", 7,5f, 1, 2, 0, 0, 0, 0);
					Function_243(&iLocal_771);
					Function_390(8);
				}
			}
			else
			{
				Function_243(&iLocal_771);
				Function_390(8);
			}
			break;
		
		case 0x00000008:
			if (!Function_492())
			{
				if ((Function_443(&Global_54076, &iLocal_697, 10.0f) && GET_VEHICLE(&Global_54076) == &iLocal_697) && Function_289(&iLocal_771) < 2,5f)
				{
					Function_139("Ranch02_wagon_help_01", 10.0f, 1, 0, 2, 1, 0);
					Function_243(&iLocal_771);
					Function_390(9);
				}
			}
			else
			{
				Function_390(9);
			}
			break;
		
		case 0x00000009:
			if (!Function_492())
			{
				if (GET_VEHICLE(&iLocal_695) == &iLocal_697)
				{
					if (Function_443(&Global_54076, &iLocal_695, 25.0f))
					{
						if (Function_289(&iLocal_771) < 10.0f)
						{
							Function_491();
							Function_243(&iLocal_771);
						}
					}
					else
					{
						Function_490();
						Function_390(10);
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (Function_443(&Global_54076, &iLocal_695, 10.0f))
			{
				Function_243(&iLocal_771);
				Function_390(9);
			}
			break;
		
		case 0x0000000B:
			if (Function_469())
			{
				if (!Function_468())
				{
					if (Function_289(&iLocal_751) < 3.0f)
					{
						if (!Function_28(10, 0))
						{
							Function_139("Ranch02_wagon_help_02", 10.0f, 1, 0, 2, 1, 0);
							iLocal_814 = 1;
						}
						Function_390(12);
					}
				}
				else
				{
					Function_390(13);
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_469())
			{
				if (Function_468())
				{
					Function_390(13);
				}
			}
			break;
		
		case 0x0000000D:
			if (Function_469())
			{
				if (Function_289(&iLocal_755) < 2,5f)
				{
					if (!Function_28(10, 0) && iLocal_814 != 0)
					{
						Function_139("Ranch02_wagon_help_02", 10.0f, 1, 0, 2, 1, 0);
						Function_243(&iLocal_755);
					}
					Function_390(14);
				}
			}
			break;
		
		case 0x0000000E:
			Function_474();
			Function_471();
			Function_470();
			if (Function_469())
			{
				if (Function_468())
				{
					if (!Function_462())
					{
						if (iLocal_821 == 0)
						{
							if (iLocal_820 == 0)
							{
								if (Function_392(Global_46760[0]))
								{
									iLocal_820 = 1;
								}
							}
							if (iLocal_820 == 0)
							{
								if (iLocal_824 == 1)
								{
									if (iLocal_825 == 1)
									{
										if (Function_460())
										{
											Function_430(&iLocal_775);
											iLocal_825 = 0;
											iLocal_824 = 0;
										}
									}
									else if (Function_289(&iLocal_775) <= 10.0f)
									{
										if (Function_450())
										{
											iLocal_824 = 0;
										}
									}
								}
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (iLocal_824 == 0)
									{
										Function_243(&iLocal_775);
										iLocal_824 = 1;
									}
								}
							}
							Function_449();
						}
						if (iLocal_739 == 0)
						{
							if (!Function_28(10, 0))
							{
								if (Function_289(&iLocal_755) < 10,5f)
								{
									Function_139("Ranch02_wagon_help_04", 10.0f, 1, 0, 2, 1, 0);
									Function_243(&iLocal_755);
									iLocal_739 = 1;
								}
							}
							else
							{
								Function_243(&iLocal_755);
								iLocal_739 = 1;
							}
						}
						else if (iLocal_739 == 1)
						{
							if (Function_289(&iLocal_755) < 10,5f)
							{
								if (!Function_28(10, 0))
								{
									iLocal_739 = 2;
								}
								else
								{
									iLocal_739 = 4;
								}
							}
						}
						else if (iLocal_739 == 2)
						{
							if (Function_289(&iLocal_755) < 10,5f)
							{
								Function_139("Ranch02_wagon_help_06", 10.0f, 1, 0, 2, 1, 0);
								Function_243(&iLocal_755);
								iLocal_739 = 3;
							}
						}
						else if (iLocal_739 == 3)
						{
							if (Function_289(&iLocal_755) < 10,5f)
							{
								Function_139("Ranch02_wagon_help_03", 10.0f, 1, 0, 2, 1, 0);
								Function_243(&iLocal_755);
								iLocal_739 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 0x0000006A:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_636[0] = 1;
				iLocal_636[1] = 1;
				bLocal_399 = 2;
				Function_390(0);
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(1);
			}
			break;
	}
	return;
}

void Function_490() //Position: 0x1A58B / 107915
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_runsOffWagon", "Ranch02_runsOffWagon", false, 2, 1, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x1A5DC / 107996
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_waitingJohn", "Ranch02_waitingJohn", false, 1, 1, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_492() //Position: 0x1A62B / 108075
{
	if (!Function_482(&Global_54076, &iLocal_697, 0))
	{
		return 0;
	}
	AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
	iLocal_807 = 1;
	Function_390(11);
	return 1;
}

void Function_493() //Position: 0x1A65E / 108126
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Ranch02_intoWagon", "Ranch02_intoWagon", false, 1, 1, 0, 1);
		Function_452(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_494() //Position: 0x1A6A9 / 108201
{
	if (!IS_ACTOR_VALID(&iLocal_697))
	{
		Function_337();
		iLocal_697 = &iLocal_250 + 48[02];
		ENABLE_VEHICLE_SEAT(&iLocal_697, true, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 2, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 3, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 4, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 5, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 6, 0);
		ENABLE_VEHICLE_SEAT(&iLocal_697, 7, 0);
		iLocal_737 = 2;
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iLocal_697, *(&iLocal_4 + 312[23]), 1, 1, true);
		bLocal_694 = false;
		while (bLocal_694 < 1)
		{
			uLocal_701[bLocal_694] = GET_DRAFT_ACTOR(bLocal_694, &iLocal_697);
			bLocal_694++;
		}
	}
	Function_431(&iLocal_697);
	Function_418(&(Local_467[115]), &iLocal_697, "Wagon", 1, 0x5f5e100, 1);
	Function_257(bLocal_399);
	Function_382(StackVal, Function_257(bLocal_399), bLocal_399, Global_46736[2], Function_259(bLocal_399), 0);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[7]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[8]);
	SET_SPAWN_PEDS_ON_SIDEWALK(1);
	Function_495();
	uLocal_709 = &iLocal_4 + 64[02];
	TASK_STAND_STILL(&uLocal_709, -1.0f, 0, 0);
	uLocal_840 = CREATE_EVENT_TRAP(Function_54(), 88, &uLocal_385);
	EVENT_TRAP_ON_PERPETRATOR(&uLocal_840, GET_OBJECT_FROM_ACTOR(&Global_54076));
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	iLocal_844 = 0;
	Function_243(&iLocal_751);
	Function_243(&iLocal_755);
	Function_243(&iLocal_771);
	return;
}

void Function_495() //Position: 0x1A808 / 108552
{
	*(&iLocal_4 + 64[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TheDog", 1035, Vector(-859,22f, 91,59f, 2402,16f), Vector(0.0f, 250.0f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 64[02], false);
	return;
}

void Function_496() //Position: 0x1A84C / 108620
{
	Function_487(StackVal, "$/cutscene/ranch02_cs02/ranch02_cs02", &uLocal_635, *(&iLocal_4 + 584[43]), 0, 100.0f, 150.0f, 2, 1, 2, 2, 0, 1);
	Function_550(17, 0, 0, 23, 59, 59);
	if (iLocal_807 == 0)
	{
		Function_444(&uLocal_783, 60.0f, 200.0f, &iLocal_695, "Ranch02_Wagon_Return_A", "RanchersDaughter_Abandoned", &bLocal_625, 1, 0, 0, 325, 1);
	}
	else
	{
		Function_444(&uLocal_783, 60.0f, 200.0f, &iLocal_695, "Ranch02_Wagon_Return_B", "RanchersDaughter_Abandoned", &bLocal_625, 1, 0, 0, 325, 1);
	}
	if (GET_VEHICLE(&iLocal_695) != &iLocal_697)
	{
		if (bLocal_815 == 0)
		{
			TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&iLocal_695, &iLocal_697, 1, 1, 0);
			bLocal_815 = true;
		}
	}
	else
	{
		bLocal_815 = false;
	}
	if (Function_392(Global_46760[0]))
	{
		if (!IS_DOOR_VALID(&cLocal_826))
		{
			cLocal_826 = Function_432(Global_46760[0], "narmadillo", "DOCTORSOFFICE", 1);
		}
		else
		{
			if (IS_DOOR_OPENED(&cLocal_826))
			{
				CLOSE_DOOR_FAST(&cLocal_826);
			}
			if (!IS_DOOR_LOCKED(&cLocal_826))
			{
				Function_127(&cLocal_826, 1);
			}
		}
	}
	Function_423();
	if (!IS_ACTOR_RIDING_VEHICLE(&Global_54076))
	{
		if (!bLocal_815 && !DECOR_CHECK_EXIST(&iLocal_695, "lookingatplayer"))
		{
			FORCE_LOOK_AT_ACTOR(&iLocal_695, &Global_54076, 3212836864);
			DECOR_SET_BOOL(&iLocal_695, "lookingatplayer", true);
		}
		if (iLocal_809 == 1)
		{
			Function_463(&bLocal_715);
			Function_210();
			iLocal_809 = 0;
		}
		if (iLocal_808 == 0)
		{
			uLocal_834 = ADD_BLIP_FOR_OBJECT(&iLocal_697, 325, 0f, 2, 0);
			iLocal_808 = 1;
		}
	}
	else if (GET_VEHICLE(&Global_54076) != &iLocal_697 && Function_482(&iLocal_695, &iLocal_697, 1))
	{
		if (!bLocal_815 && DECOR_CHECK_EXIST(&iLocal_695, "lookingatplayer"))
		{
			STOP_FORCE_LOOK_AT_COORD(&iLocal_695);
			DECOR_REMOVE(&iLocal_695, "lookingatplayer");
		}
		if (iLocal_808 == 1)
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_697)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_697));
			}
			iLocal_808 = 0;
		}
		if (iLocal_809 == 0)
		{
			if (!IS_OBJECT_VALID(&bLocal_715))
			{
				bLocal_715 = Function_486(&uLocal_385, Function_54(), &iLocal_4 + 160[9], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
				Function_332(&bLocal_715);
				Function_484(StackVal, Function_332(&bLocal_715), 0, 16, 1);
				Function_243(&iLocal_775);
				if (Function_291(&fLocal_791))
				{
					Function_399(&fLocal_791);
				}
				if (Function_291(&fLocal_763))
				{
					Function_399(&fLocal_763);
				}
			}
			else if (iLocal_821 == 0)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_261();
					Function_422("Ranch02_to_armadillo", 7,5f, 1, 2, 0, 0, 0, 0);
					iLocal_809 = 1;
				}
			}
			else
			{
				iLocal_809 = 1;
			}
		}
	}
	if (IS_ACTOR_VALID(&uLocal_709))
	{
		if (!IS_ACTOR_ALIVE(&uLocal_709) && GET_LAST_ATTACKER(&uLocal_709) != &Global_54076)
		{
			Function_256(bLocal_399);
			Function_252(StackVal, 2, &bLocal_625, &bLocal_399, Function_258(bLocal_399), Function_256(bLocal_399), 0);
		}
	}
	return;
}

void Function_497() //Position: 0x1ABE4 / 109540
{
	switch (iLocal_400)
	{
		case 0x00000000:
			Function_518(&Local_387, 1);
			uLocal_385 = CREATE_LAYOUT(Function_54());
			Global_47151[3] = 1;
			if (!Function_301(&Local_387))
			{
				Function_218(9);
			}
			Function_167(114688);
			if (Function_301(&Local_387))
			{
				Function_191(1, 0, 1);
			}
			Function_517();
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_04", "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
			AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
			Function_390(6);
			break;
		
		case 0x00000006:
			if (Function_506())
			{
				iLocal_699 = Function_351(1, 1, 0, 0, 0, 0, 1, 0);
				if (IS_ACTOR_VALID(&iLocal_699))
				{
					DESTROY_ACTOR(&iLocal_699);
				}
				Function_505();
				TASK_STAND_STILL(&iLocal_695, -1.0f, 0, 0);
				if ((!Function_301(&Local_387) && iLocal_382 != 0) && !Global_99145)
				{
					if (CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/Cutscene/R2/R2"))
					{
						Function_487(StackVal, "$/Cutscene/R2/R2", &uLocal_635, *(&Global_6667[428] + 88), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
						Global_99147 = 1;
						Function_390(7);
					}
					else
					{
						Function_390(7);
					}
				}
				else
				{
					Function_390(8);
				}
			}
			break;
		
		case 0x00000007:
			if (Function_292("$/Cutscene/R2/R2", &iLocal_401, &Local_387, &bLocal_399, 67953, 67727, 66612, 64939, 64034, 58100, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_390(8);
			}
			break;
		
		case 0x00000008:
			if (Function_315() && Function_310(&iLocal_597))
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_309();
				}
				Function_390(9);
			}
			break;
		
		case 0x00000009:
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[0]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 112[0]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 112[0]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 112[0], 15);
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_383 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			SET_CRIPPLE_ENABLE(&iLocal_695, 0);
			TASK_PRIORITY_SET(&iLocal_695, true);
			SET_ACTOR_FACTION(&iLocal_695, 20);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_695, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_695, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_695, GET_ACTOR_MAX_HEALTH(&iLocal_695));
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_695, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_695, 0);
			MEMORY_ALLOW_SHOOTING(&iLocal_695, false);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[3]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 160[3]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 112[3]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 112[3], 15);
			Function_430(&iLocal_751);
			Function_430(&iLocal_755);
			Function_430(&iLocal_771);
			iLocal_742 = Function_459();
			Function_503(&uLocal_413, &uLocal_385);
			Function_418(&(Local_467[015]), &iLocal_695, "RanchersDaughter", 1, 0x5f5e100, 1);
			Function_500(&(Local_467[315]), &uLocal_385, 0x5f5e100);
			Function_390(10);
			break;
		
		case 0x0000000A:
			bLocal_399 = iLocal_382;
			iLocal_400 = 0;
			Function_498(&Local_387, &bLocal_399, &iLocal_400);
			switch (bLocal_399)
			{
				case 0x00000000:
					Function_218(9);
					break;
				
				case 0x00000002:
					Function_245();
					break;
				
				case 0x00000065:
					Function_238();
					break;
			}
			break;
	}
	return;
}

void Function_498(int iParam0, var uParam1, int iParam2) //Position: 0x1AF1D / 110365
{
	if (Function_301(&iParam0))
	{
		uParam1 = Function_434(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_499();
	}
	return;
}

void Function_499() //Position: 0x1AF59 / 110425
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

int Function_500(struct<69> Param0) //Position: 0x1AFAA / 110506
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
	if (!Function_420(&Param0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_419(&Param0, 0);
	Param0.f_68 = 0;
	Function_415(&Param0, &iParam2, 0);
	Function_501(&Param0, 3);
	return 1;
}

void Function_501(int iParam0, int iParam1) //Position: 0x1B0CB / 110795
{
	if (iParam1 != 100000000)
	{
		Function_502(&iParam0, iParam1);
	}
	else
	{
		Function_416(&iParam0, 1);
	}
	return;
}

void Function_502(int iParam0, bool bParam1) //Position: 0x1B0ED / 110829
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_503(struct<2>[] Param0) //Position: 0x1B11A / 110874
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_504(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_504(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_504(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_504(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_504(struct<13> Param0) //Position: 0x1B7F3 / 112627
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

void Function_505() //Position: 0x1B8C2 / 112834
{
	var uVar0;
	
	Function_308(4, 1);
	uVar0 = &uVar0;
	iLocal_250 = CREATE_LAYOUT("Ranch02Pre_layout");
	return;
}

bool Function_506() //Position: 0x1B8ED / 112877
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_516(0))
		{
			return 0;
		}
		if (!Function_515())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_695))
		{
			iLocal_695 = Function_507(3, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
	}
	return 1;
}

var Function_507(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x1B92B / 112939
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
		if (!Function_164(&(Global_43791[Global_46722[3]]), 4))
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
		Function_401(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_514(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_510(&Global_15402[iParam014] + 16, &uParam7);
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
		Function_509(&bVar1, 0, 0, 0, 0);
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
		Function_508(&bVar1, 0);
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

void Function_508(var uParam0, bool bParam1) //Position: 0x1BE6B / 114283
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_509(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x1BE8D / 114317
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

var Function_510(int iParam0, int iParam1) //Position: 0x1BEEE / 114414
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_336(iParam0))
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
						Function_511(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_511(var uParam0, int iParam1) //Position: 0x1BF7C / 114556
{
	Function_513(&uParam0);
	Function_512(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_512(int iParam0) //Position: 0x1BFA8 / 114600
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_513(int iParam0) //Position: 0x1BFCE / 114638
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

var Function_514(bool bParam0, var uParam1) //Position: 0x1C0AF / 114863
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		if (GET_OBJECT_TYPE(&uVar1) != 15 || GET_OBJECT_TYPE(&uVar1) != 24)
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (GET_ACTOR_ENUM(&uVar2) == bParam0)
				{
					if (IS_LAYOUTREF_VALID(&uParam1))
					{
						GIVE_OBJECT_TO_LAYOUT(&uVar1, &uParam1);
					}
					DESTROY_ITERATOR(&uVar0);
					LOG_ERROR("found actor in GC!");
					return &uVar2;
				}
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return "";
}

bool Function_515() //Position: 0x1C155 / 115029
{
	Function_316(&iLocal_250 + 8, 1196, 2, 0);
	Function_316(&iLocal_250 + 8, 976, 2, 0);
	if (Function_310(&iLocal_250 + 8))
	{
		return 1;
	}
	return 0;
}

bool Function_516(bool bParam0) //Position: 0x1C182 / 115074
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

void Function_517() //Position: 0x1C1B2 / 115122
{
	Function_316(&iLocal_597, 1035, 3, 0);
	Function_316(&iLocal_597, Global_12796[03], 2, 0);
	Function_240(&iLocal_597, "Ranch02", 10, 0);
	Function_240(&iLocal_597, GET_ASSET_NAME(GET_ASSET_ID(Function_254(Global_46760[0]), 12), 12), 12, 0);
	Function_240(&iLocal_597, "bonnie_lean", 5, 0);
	Function_240(&iLocal_597, "custom/bonnie_lean", 8, 0);
	return;
}

void Function_518(int iParam0, bool bParam1) //Position: 0x1C23A / 115258
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_525(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_301(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_97();
		SET_EXP_MODE_PROMPT_STATE(0);
	}
	Global_47151[2] = 1;
	cVar0 = Function_15(iParam0);
	Var1 = { StackVal, StackVal, StackVal, (&Global_6667[cVar028] + 16) };
	if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
	{
		Var1 = { StackVal, StackVal, StackVal, Function_24(cVar0) };
	}
	AUDIO_MISSION_INIT();
	AUDIO_SET_MISSION_NAME_FOR_JOURNAL(&Var1);
	if (!Function_301(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_524();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_261();
	Function_295();
	Function_251("");
	Function_523(0);
	Function_522();
	Function_205();
	Function_204();
	ENABLE_JOURNAL_REPLAY(0);
	Function_521();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_351(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_394(0, 0x40400000);
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
	Function_520(13);
	Function_520(14);
	Function_520(25);
	Function_520(24);
	Function_520(12);
	Function_520(27);
	Function_520(26);
	Function_520(15);
	Function_519();
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

void Function_519() //Position: 0x1C67A / 116346
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

void Function_520(int iParam0) //Position: 0x1C6FF / 116479
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_521() //Position: 0x1C71F / 116511
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

void Function_522() //Position: 0x1C765 / 116581
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_523(int iParam0) //Position: 0x1C77B / 116603
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

void Function_524() //Position: 0x1C7B4 / 116660
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_525(int iParam0, int iParam1) //Position: 0x1C7BD / 116669
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
			Function_526(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_526(struct<113> Param0) //Position: 0x1C844 / 116804
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

void Function_527() //Position: 0x1C8A2 / 116898
{
	return;
}

bool Function_528(struct<25> Param0) //Position: 0x1C8A8 / 116904
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000003:
					if (bLocal_399 != 0 && IS_ACTOR_INSIDE_VEHICLE(&Global_54076))
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_crashSomeone", "Ranch02_crashSomeone", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_shootBonnie", "Ranch02_shootBonnie", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000003:
					if (bLocal_399 == 0)
					{
					}
					break;
			}
			break;
		
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_695, "Ranch02_assaultBonnie", "Ranch02_assaultBonnie", 0, 1, 1, 3, 0, 0, 0, 1000, 0, 0);
					break;
				
				case 0x00000003:
					if (bLocal_399 == 0)
					{
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
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_529(&Param0, 1);
			return 1;
		}
	}
	Function_529(&Param0, 0);
	return 0;
}

void Function_529(struct<25> Param0) //Position: 0x1CA57 / 117335
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

bool Function_530(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1CA82 / 117378
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
		Function_529(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_549(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_548(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_548(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_534(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_529(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_533(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_532(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_533(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_531(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_251(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_532(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_529(&Param2, 0);
	return 0;
}

void Function_531(char* cParam0) //Position: 0x1CE98 / 118424
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

void Function_532(struct<25> Param0) //Position: 0x1CF8C / 118668
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

void Function_533(bool bParam0) //Position: 0x1D004 / 118788
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_534(struct<57> Param0) //Position: 0x1D028 / 118824
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
			return Function_545(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_538(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_545(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_535(&Param0, bVar2);
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
						bVar2 = Function_545(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_535(&Param0, bVar2);
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

var Function_535(int iParam0, bool bParam1) //Position: 0x1D199 / 119193
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
				bParam1 = Function_537(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_536(16);
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
				bParam1 = Function_537(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_536(256);
			}
		}
	}
	return bParam1;
}

bool Function_536(int iParam0) //Position: 0x1D2D5 / 119509
{
	return 2 | iParam0;
}

int Function_537(int iParam0) //Position: 0x1D2DF / 119519
{
	return 4 | iParam0;
}

int Function_538(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1D2E9 / 119529
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
				iParam3 = Function_544(&iParam0, &iParam1, bParam4);
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
			return Function_536(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_539(&iParam0, &iParam1, 0, bParam4);
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
			return Function_536(16);
		}
	}
	return 0;
}

int Function_539(int iParam0, vector3 vParam1) //Position: 0x1D3A4 / 119716
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_543(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_542(iVar0, 3, 1, bParam3))
			{
				if (!Function_548(&iParam0, 8, 1))
				{
					return Function_541(64, 1024, bParam2);
				}
			}
			return Function_540(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_542(iVar0, 2, 1, bParam3))
			{
				if (!Function_548(&iParam0, 32, 1))
				{
					return Function_541(64, 1024, bParam2);
				}
			}
			return Function_540(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_542(iVar0, 1, 1, bParam3))
			{
				if (!Function_548(&iParam0, 64, 1))
				{
					return Function_541(64, 1024, bParam2);
				}
			}
			return Function_540(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_542(iVar0, 3, 1, bParam3))
			{
				if (!Function_548(&iParam0, 128, 1))
				{
					return Function_541(64, 1024, bParam2);
				}
			}
			return Function_540(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_542(iVar0, 1, 1, bParam3))
			{
				if (!Function_548(&iParam0, 1024, 1))
				{
					return Function_541(64, 1024, bParam2);
				}
			}
			return Function_540(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_542(iVar0, 1, 1, bParam3))
			{
				if (!Function_548(&iParam0, 1024, 1))
				{
					return Function_541(64, 1024, bParam2);
				}
			}
			return Function_540(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_540(int iParam0, int iParam1, bool bParam2) //Position: 0x1D56C / 120172
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_541(int iParam0, int iParam1, bool bParam2) //Position: 0x1D581 / 120193
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_542(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1D596 / 120214
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_543(int iParam0) //Position: 0x1D5B3 / 120243
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

int Function_544(var uParam0, vector3 vParam1) //Position: 0x1D626 / 120358
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_543(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_542(iVar0, 3, 1, bParam2))
			{
				if (!Function_548(&uParam0, 8, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000009:
			if (Function_542(iVar0, 3, 1, bParam2))
			{
				if (!Function_548(&uParam0, 8, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x0000006E:
			if (Function_542(iVar0, 2, 1, bParam2))
			{
				if (!Function_548(&uParam0, 16, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x0000005B:
			if (Function_542(iVar0, 2, 1, bParam2))
			{
				if (!Function_548(&uParam0, 32, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000031:
			if (Function_542(iVar0, 1, 1, bParam2))
			{
				if (!Function_548(&uParam0, 64, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000007:
			if (Function_542(iVar0, 3, 1, bParam2))
			{
				if (!Function_548(&uParam0, 128, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000008:
			if (Function_542(iVar0, 2, 1, bParam2))
			{
				if (!Function_548(&uParam0, 256, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000014:
			if (Function_542(iVar0, 1, 1, bParam2))
			{
				if (!Function_548(&uParam0, 512, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000018:
			if (Function_542(iVar0, 1, 1, bParam2))
			{
				if (!Function_548(&uParam0, 512, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000057:
			if (Function_542(iVar0, 1, 1, bParam2))
			{
				if (!Function_548(&uParam0, 1024, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000058:
			if (Function_542(iVar0, 1, 1, bParam2))
			{
				if (!Function_548(&uParam0, 1024, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_545(struct<65> Param0) //Position: 0x1D84F / 120911
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
						return Function_544(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_548(&Param0, 2, 1))
					{
						return Function_537(8);
					}
					return Function_536(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_548(&Param0, 4, 1))
					{
						return Function_537(16);
					}
					return Function_536(16);
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
							return Function_539(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_548(&Param0, 2, 1))
						{
							return Function_537(128);
						}
						return Function_536(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_548(&Param0, 4, 1))
						{
							return Function_537(256);
						}
						return Function_536(256);
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
						return Function_539(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_548(&Param0, 2, 1))
					{
						return Function_537(8);
					}
					return Function_536(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_548(&Param0, 4, 1))
					{
						return Function_537(16);
					}
					return Function_536(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_547(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_548(&Param0, 2, 1))
					{
						return Function_537(8);
					}
					return Function_536(8);
				}
				if (!Function_548(&Param0, 4, 1))
				{
					return Function_537(16);
				}
				return Function_536(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_539(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_546(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_536(128);
							}
							if (!Function_548(&Param0, 2, 1))
							{
								return Function_537(8);
							}
							return Function_536(8);
						}
						if (iParam4 == 2)
						{
							if (Function_546(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_536(256);
							}
							if (!Function_548(&Param0, 4, 1))
							{
								return Function_537(16);
							}
							return Function_536(16);
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

bool Function_546(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1DB35 / 121653
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

int Function_547(int iParam0, vector3 vParam1) //Position: 0x1DC03 / 121859
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_543(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_542(iVar0, 2, 1, bParam2))
			{
				if (!Function_548(&iParam0, 16, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x0000005B:
			if (Function_542(iVar0, 2, 1, bParam2))
			{
				if (!Function_548(&iParam0, 32, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000057:
			if (Function_542(iVar0, 1, 1, bParam2))
			{
				if (!Function_548(&iParam0, 1024, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		case 0x00000058:
			if (Function_542(iVar0, 1, 1, bParam2))
			{
				if (!Function_548(&iParam0, 1024, 1))
				{
					return Function_537(64);
				}
			}
			return Function_536(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_548(struct<69> Param0) //Position: 0x1DD25 / 122149
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

int Function_549(bool bParam0) //Position: 0x1DD4F / 122191
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

int Function_550(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5) //Position: 0x1DD85 / 122245
{
	int iVar0;
	int iVar1;
	
	if (((((bParam0 > 0 || &iParam1 > 0) || &bParam2 > 0) || &iParam3 > 0) || &bParam4 > 0) || &iParam5 > 0)
	{
		return 0;
	}
	iVar0 = MAKE_TIME_OF_DAY(bParam0, &iParam1, &bParam2);
	iVar1 = MAKE_TIME_OF_DAY(&iParam3, &bParam4, &iParam5);
	if (!GET_TIME_ACCELERATION() != 0.0f)
	{
		if (IS_LATER_THAN(GET_TIME_OF_DAY(), &iVar0) && IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar1))
		{
			SET_TIME_ACCELERATION(0.0f);
			return 1;
		}
	}
	if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), &iVar0) || IS_LATER_THAN(GET_TIME_OF_DAY(), &iVar1))
	{
		SET_TIME_ACCELERATION(Global_99471);
	}
	return 0;
}

void Function_551(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1DE1B / 122395
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

