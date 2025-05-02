//Decompiled with MagicRDR v1.0
//Function Count : 825
//Statics Count : 1087
//Natives Count : 748
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
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
	var uLocal_38 = 11;
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
	var uLocal_74 = 11;
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
	int iLocal_105 = 0;
	bool bLocal_106 = false;
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
	var uLocal_122 = 5;
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
	var uLocal_156 = 10;
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
	int iLocal_226[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_252 = 0;
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
	int iLocal_280 = 0;
	bool bLocal_281 = false;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	int iLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
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
	int iLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	int iLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
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
	int iLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	bool bLocal_351 = false;
	var uLocal_352 = 0;
	float fLocal_353 = 0.0f;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
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
	int iLocal_386 = 0;
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
	int iLocal_412 = 0;
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
	int iLocal_438 = 0;
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
	int iLocal_464 = 0;
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
	bool bLocal_490 = false;
	struct<13> Local_491 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	struct<13> Local_507 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	struct<13> Local_523 = { 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0 } ;
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
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	struct<4> Local_568 = { 0, 0, 0, 0 } ;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	struct<41> Local_576 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	bool bLocal_624 = false;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 4;
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
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = -1;
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
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 27;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
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
	var uLocal_748 = 0;
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
	var uLocal_770 = 49;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
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
	var uLocal_808 = 0;
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
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
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
	struct<10> Local_968 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	struct<53> Local_988 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1041 = 0;
	bool bLocal_1042 = false;
	int iLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	char* cLocal_1048[16] = "";
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	int iLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	int iLocal_1072 = 0;
	int iLocal_1073 = 0;
	int iLocal_1074 = 0;
	bool bLocal_1075 = false;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	int iLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	int iLocal_1086 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	iLocal_18 = 0;
	iLocal_105 = 5;
	iLocal_280 = 0;
	bLocal_281 = false;
	iLocal_282 = 0;
	iLocal_283 = 0;
	iLocal_296 = 0;
	iLocal_297 = 0;
	iLocal_298 = 0;
	iLocal_299 = 2;
	iLocal_300 = 0;
	iLocal_301 = 0;
	iLocal_314 = 0;
	iLocal_323 = 0;
	iLocal_325 = 0;
	iLocal_326 = 0;
	fLocal_353 = 0,2f;
	iLocal_354 = 0;
	iLocal_355 = 0;
	iLocal_356 = 0;
	iLocal_359 = 0;
	bLocal_490 = false;
	iLocal_565 = 1;
	iLocal_1042 = 1;
	iLocal_1043 = 0;
	iLocal_1056 = 4294967295;
	iLocal_1061 = 0;
	iLocal_1072 = 0;
	iLocal_1073 = 0;
	iLocal_1074 = 2;
	bLocal_1075 = 5;
	uLocal_1076 = "TC_MEX_SONG_01";
	iLocal_566 = 99;
	iLocal_567 = 6;
	Local_568 = { StackVal, StackVal, StackVal, Local_568 };
	HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
	HUD_FADE_OUT(0.0f, 1f, 1);
	while (!IS_EXITFLAG_SET() && Function_195())
	{
		WAIT(false);
	}
	Function_79();
	Function_1(&bLocal_624);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<81> Param0) //Position: 0xE6 / 230
{
	if (Function_78())
	{
		Function_71();
	}
	if (UI_ISACTIVE("MissionFailedMenu"))
	{
		UI_POP("MissionFailedMenu");
	}
	SET_WEAPONENUM_LOCKED(33, 1);
	SET_WEAPONENUM_LOCKED(34, 1);
	SET_WEAPONENUM_LOCKED(35, 1);
	SET_WEAPONENUM_LOCKED(36, 1);
	SET_WEAPONENUM_LOCKED(37, 1);
	Function_70();
	if (iLocal_567 == 3)
	{
		Function_50(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	}
	Function_49(4096, 0);
	CLEAR_ACTOR_PROOF(Function_48(), 135);
	SET_ACTOR_INVULNERABILITY(Function_48(), false);
	if (!Function_47(Param0.f_80, 4))
	{
		UI_EXIT("MPSplash");
	}
	Function_32(&Param0);
	Function_31(&Param0, 0);
	Function_30(&Param0, 0);
	Function_29();
	Function_19();
	Function_18();
	UNK_0x2148AC15(4294967295, 0);
	SET_TIME_ACCELERATION(1.0f);
	REMOVE_ALL_PICKUPS();
	CLEAR_ALL_CORPSES();
	CLEAR_DECALS();
	CLEAR_CHARACTER_BLOOD();
	STOP_ALL_FIRES();
	RESET_PROPS_IN_WORLD();
	Function_17();
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(1.0f);
	Function_8(1);
	STREAMING_UNLOAD_SCENE();
	STREAMING_UNLOAD_BOUNDS();
	NET_GAMER_ICONS_SHOW_LOCAL(1);
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 0.0f);
	}
	UI_EXIT("NetTimer");
	UI_EXIT("ScoreGraph");
	UI_EXIT("XpHud");
	Function_6(0, 0, 4294967295, 4294967295);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_POP_DENSITY_MULTIPLIER(1.0f);
	Function_2();
	return;
}

void Function_2() //Position: 0x226 / 550
{
	Function_3(1024, 0, 1);
	Function_3(1, 0, 0);
	return;
}

void Function_3(bool bParam0, bool bParam1, int iParam2) //Position: 0x23A / 570
{
	iParam2 = &iParam2;
	if (bParam1)
	{
		Function_5(&Global_120031 + 260, bParam0);
	}
	else
	{
		Function_4(&Global_120031 + 260, bParam0);
	}
	return;
}

void Function_4(var uParam0, bool bParam1) //Position: 0x266 / 614
{
	uParam0 = (uParam0 - (uParam0 && bParam1));
	return;
}

void Function_5(var uParam0, bool bParam1) //Position: 0x27C / 636
{
	uParam0 = (uParam0 || bParam1);
	return;
}

void Function_6(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x28D / 653
{
	AUDIO_MUSIC_SET_MOOD(Function_7(uParam0), &uParam1, &uParam2, &uParam3);
}

var Function_7(int iParam0) //Position: 0x2A6 / 678
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

void Function_8(bool bParam0) //Position: 0x7FB / 2043
{
	bool bVar0;
	
	if (bParam0)
	{
		if (!Function_15(4))
		{
			Function_13(1);
		}
		else
		{
			return;
		}
	}
	Function_11(1);
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			Function_9(bVar0, bParam0);
		}
		bVar0++;
	}
	return;
}

void Function_9(bool bParam0, bool bParam1) //Position: 0x83F / 2111
{
	var uVar0;
	
	if (!IS_SLOT_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_10(GET_LOCAL_SLOT(), bParam0) && !Function_15(2))
		{
			return;
		}
		if (!Function_15(1))
		{
			return;
		}
	}
	uVar0 = GET_SLOT_ACTOR(bParam0);
	if (IS_ACTOR_VALID(&uVar0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&uVar0, bParam1);
		SET_ALLOW_DEADEYE_LOCKS(&uVar0, bParam1);
		if (Function_15(4))
		{
			if (!bParam1)
			{
				DECOR_SET_BOOL(&uVar0, "ArmUp", true);
			}
		}
		else
		{
			DECOR_REMOVE(&uVar0, "ArmUp");
		}
	}
	return;
}

int Function_10(int iParam0, int iParam1) //Position: 0x8C2 / 2242
{
	int iVar0;
	int iVar1;
	
	iVar0 = NET_GET_GAMER_POSSE_LEADER(iParam0);
	iVar1 = NET_GET_GAMER_POSSE_LEADER(iParam1);
	if (iVar0 != iVar1 && iVar0 < 4294967295)
	{
		return 1;
	}
	return 0;
}

void Function_11(int iParam0) //Position: 0x8E6 / 2278
{
	Function_12(&Global_124155, iParam0);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x8F5 / 2293
{
	Function_4(&uParam0, iParam1);
	return;
}

void Function_13(int iParam0) //Position: 0x903 / 2307
{
	Function_14(&Global_124155, iParam0);
	return;
}

void Function_14(var uParam0, int iParam1) //Position: 0x912 / 2322
{
	Function_5(&uParam0, iParam1);
	return;
}

bool Function_15(bool bParam0) //Position: 0x920 / 2336
{
	return Function_16(Global_124155, bParam0);
}

bool Function_16(var uParam0, bool bParam1) //Position: 0x92F / 2351
{
	return (uParam0 && bParam1) == 0;
}

void Function_17() //Position: 0x93C / 2364
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_18() //Position: 0x945 / 2373
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_19() //Position: 0x95A / 2394
{
	struct<17> Var0;
	
	Function_21();
	Var0.f_4 = 0;
	Var0 = 0;
	Var0.f_8 = 4294967286;
	Var0.f_16 = 0.0f;
	Function_20(&Var0);
	return;
}

void Function_20(vector3 vParam0) //Position: 0x97C / 2428
{
	Global_123163 = { StackVal, StackVal, vParam0 };
	return;
}

void Function_21() //Position: 0x98D / 2445
{
	Function_22();
	return;
}

void Function_22() //Position: 0x996 / 2454
{
	Function_23(4294967286);
	return;
}

void Function_23(bool bParam0) //Position: 0x9A2 / 2466
{
	var uVar0;
	struct<9> Var1;
	
	if (bParam0 != 4294967286)
	{
		Function_28(&uVar0);
		Function_27(&vVar1);
		vVar1.z = uVar0;
		Function_20(&vVar1);
	}
	Function_26(&uVar0, bParam0);
	Function_25(&uVar0);
	if (NET_IS_IN_SESSION())
	{
		Function_24(&uVar0, GET_LOCAL_SLOT());
	}
	return;
}

void Function_24(int iParam0, int iParam1) //Position: 0x9DF / 2527
{
	(&Global_120101[iParam188] + 184) = &iParam0;
	return;
}

void Function_25(int iParam0) //Position: 0x9F4 / 2548
{
	*(&Global_122919 + 184) = &iParam0;
	return;
}

void Function_26(var uParam0, int iParam1) //Position: 0xA05 / 2565
{
	uParam0 = iParam1;
	return;
}

void Function_27(vector3 vParam0) //Position: 0xA11 / 2577
{
	vParam0 = { StackVal, StackVal, Global_123163 };
	return;
}

void Function_28(var uParam0) //Position: 0xA22 / 2594
{
	uParam0 = &Global_122919 + 184;
	return;
}

void Function_29() //Position: 0xA33 / 2611
{
	if (VMAG(*(&Global_99148 + 48)) < 0.0f)
	{
		ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
	}
	else
	{
		CAMERA_RESET(0);
	}
	if (Global_99148.f_20 < 0.0f)
	{
		Global_99148.f_8 = StackVal + 1;
		CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, Global_99148.f_12, Global_99148.f_20);
		Global_99148.f_20 = 0.0f;
	}
	PRINTSTRING("GET_CUTSCENEOBJECT_SEQUENCE(gsCutCamera.cutsceneCameraObject) = ");
	PRINTINT(GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148));
	PRINTNL();
	PRINTSTRING("gsCutCamera.transitionCounter = ");
	PRINTINT(StackVal);
	PRINTNL();
	if (StackVal && GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148) < 4294967295 < 0)
	{
		while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
		{
			END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
		}
	}
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 4;
	return;
}

void Function_30(int iParam0, bool bParam1) //Position: 0xB65 / 2917
{
	if (bParam1)
	{
		Function_5(&iParam0 + 80, 64);
	}
	else
	{
		Function_4(&iParam0 + 80, 64);
	}
	return;
}

void Function_31(bool bParam0, bool bParam1) //Position: 0xB87 / 2951
{
	if (bParam1)
	{
		Function_5(&bParam0 + 80, 2);
	}
	else
	{
		Function_4(&bParam0 + 80, 2);
	}
	return;
}

void Function_32(int iParam0) //Position: 0xBA7 / 2983
{
	var uVar0;
	
	iParam0 = 0;
	Global_98975 = 0;
	STREAMING_UNLOAD_SCENE();
	Function_44();
	uVar0 = Function_48();
	if (IS_ACTOR_VALID(&uVar0))
	{
		DECOR_REMOVE(&uVar0, "NoRegen");
		DECOR_REMOVE(&uVar0, "NoBleedout");
	}
	if (IS_OBJECT_VALID(&iParam0 + 312))
	{
		DESTROY_OBJECT(&iParam0 + 312);
	}
	UI_ENABLE("SatchelTab_Weapons");
	UI_ENABLE("PM_Weapons");
	Function_42(!Function_43(1));
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	Function_49(81920, 0);
	Function_49(8388608, 0);
	Function_33(&iParam0);
	if (&iParam0 + 168 >= 4294967295)
	{
		STREAMING_EVICT_ACTOR(&iParam0 + 168, 4294967295);
	}
	return;
}

void Function_33(int iParam0) //Position: 0xC6A / 3178
{
	Function_39(&iParam0);
	Function_34(&iParam0, 0);
	Function_3(32, 0, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 152))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 152);
	}
	if (IS_SCRIPT_VALID(&iParam0 + 120))
	{
		TERMINATE_SCRIPT(&iParam0 + 120);
	}
	return;
}

void Function_34(struct<85> Param0) //Position: 0xCAE / 3246
{
	int iVar0;
	
	if (&bParam1)
	{
		iVar0 = Function_35(StackVal, Function_38(), *(&Param0 + 108), !HUD_IS_FADED());
	}
	if (IS_OBJECT_VALID(&Param0 + 192))
	{
		DESTROY_OBJECT(&Param0 + 192);
	}
	if (&bParam1)
	{
		*(&Param0 + 192) = &iVar0;
	}
	if (IS_OBJECT_VALID(&Param0 + 248))
	{
		RELEASE_OBJECT_REF(&Param0 + 248);
	}
	if (IS_VOLUME_VALID(&Param0 + 560))
	{
		REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(&Param0 + 560);
		DESTROY_VOLUME(&Param0 + 560);
	}
	if (IS_OBJECT_VALID(&Param0 + 176))
	{
		STREAMING_DISABLE_FORCE_FRAGMENT_HIGH_LOD(&Param0 + 176);
	}
	if (Function_47(Param0.f_84, 2))
	{
		Function_4(&Param0 + 84, 2);
	}
	Function_5(&Param0 + 84, 1);
	return;
}

var Function_35(var uParam0, struct<2> Param1, bool bParam3) //Position: 0xD5B / 3419
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	struct<2> Var5;
	struct<2> Var7;
	struct<2> Var9;
	var uVar11;
	
	iVar0 = 3;
	if (bParam3)
	{
		iVar1 = 1;
	}
	uVar2 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "", (iVar0 + iVar1), 1);
	Var5 = Vector(0.0f, 16.0f, 12.0f);
	Var9 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Param1, StackVal);
	if (bParam3)
	{
		GET_CAMERA_CHANNEL_DIRECTION(&uVar11, 0);
		Function_37(&Var5, (UNK_0x9C40E671(&uVar11) + 15.0f));
		Var5 = Function_37(&Var5, (UNK_0x9C40E671(&uVar11) + 15.0f));
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar2, 0);
		Function_36(StackVal, StackVal, StackVal, &uVar4, Param1, Var5, Var9);
		SET_CAMERASHOT_FOV(&uVar4, 45.0f);
		SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uVar2, 0, 1, 0,5f, 4294967295, 0), 1, 1);
		Function_37(&Var5, 5.0f);
		Var5 = Function_37(&Var5, 5.0f);
	}
	iVar3 = 0;
	while (iVar3 <= iVar0)
	{
		uVar4 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uVar2, (iVar3 + iVar1));
		Function_37(&Var5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		Var7 = Function_37(&Var5, (IntToFloat(iVar3) * (360.0f / IntToFloat(iVar0))));
		Function_36(StackVal, StackVal, StackVal, &uVar4, Param1, Var7, Var9);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= iVar0 * 3)
	{
		CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uVar2, ((iVar3 % iVar0) + iVar1), ((iVar3 + 1 % iVar0) + iVar1), 30.0f, iVar3, 1);
		iVar3++;
	}
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uVar2, ((iVar3 % iVar0) + iVar1), 100);
	PLAY_CUTSCENEOBJECT(&uVar2, false, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return &uVar2;
}

void Function_36(var uParam0, struct<2> Param1, struct<2> Param3, struct<2> Param5) //Position: 0xE9D / 3741
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 60.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 3.0f);
	SET_CAMERASHOT_POSITION(Vector(StackVal, StackVal, StackVal) + Vector(Param3, Param1, &uParam0));
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_TARGET_POSITION(&uParam0, Param5, 0);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
}

struct<8> Function_37(struct<2> Param0) //Position: 0xEFA / 3834
{
	struct<2> Var0;
	
	Var0 = Param0;
	ROTATE_VECTOR_XZ(&Var0, bParam1, 0);
	return StackVal, Var0;
}

var Function_38() //Position: 0xF14 / 3860
{
	if (!IS_LAYOUTREF_VALID(&Global_124161))
	{
		Global_124161 = CREATE_LAYOUT("gMPScratchLayout");
	}
	return &Global_124161;
}

void Function_39(int iParam0) //Position: 0xF46 / 3910
{
	Function_41(&iParam0);
	Function_40(1048576);
	return;
}

void Function_40(int iParam0) //Position: 0xF59 / 3929
{
	Function_12(&Global_124154, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_41(int iParam0) //Position: 0xF93 / 3987
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 144))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 144);
	}
	return;
}

void Function_42(bool bParam0) //Position: 0xFAE / 4014
{
	if (&bParam0)
	{
		UI_EXIT("MPSplash");
	}
	UI_INCLUDE("FameText");
	UI_RESTORE("FameText");
	UI_INCLUDE("NotorietyMeter");
	UI_RESTORE("NotorietyMeter");
	UI_INCLUDE("SplashObjective");
	UI_RESTORE("SplashObjective");
	return;
}

bool Function_43(bool bParam0) //Position: 0x1036 / 4150
{
	return Function_16(Global_124154, bParam0);
}

void Function_44() //Position: 0x1045 / 4165
{
	if (Function_46(8))
	{
		Function_45();
	}
	Function_3(8, 0, 1);
	return;
}

void Function_45() //Position: 0x105D / 4189
{
	Function_3(32768, 1, 0);
	return;
}

bool Function_46(bool bParam0) //Position: 0x106C / 4204
{
	return Function_47(Global_120031.f_260, bParam0);
}

bool Function_47(var uParam0, bool bParam1) //Position: 0x107E / 4222
{
	return (uParam0 && bParam1) == 0;
}

int Function_48() //Position: 0x108B / 4235
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_49(int iParam0, bool bParam1) //Position: 0x10A0 / 4256
{
	if (bParam1)
	{
		Function_5(&Global_122919 + 192, iParam0);
	}
	else
	{
		Function_4(&Global_122919 + 192, iParam0);
	}
	if (NET_IS_IN_SESSION())
	{
		Global_120101[GET_LOCAL_SLOT()88].f_192 = Global_122919.f_192;
	}
	return;
}

void Function_50(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x10DB / 4315
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
		uVar0 = Function_48();
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
			if (Function_69())
			{
				if (!(IS_ACTOR_ON_LADDER(&uVar0) || IS_ACTOR_USING_LEDGE(&uVar0)))
				{
					ACTOR_END_FORCE_HOLSTER(&uVar0);
					if (&iParam0 != 0 || (&iParam0 != 2 && Global_119938))
					{
						ACTOR_DRAW_LAST_WEAPON(&uVar0, 0);
					}
				}
			}
			else
			{
				ACTOR_END_FORCE_HOLSTER(&uVar0);
			}
			SET_ACTOR_INVULNERABILITY(&uVar0, false);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_53(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_18();
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
	Function_51(&iParam9, &iParam10);
}

void Function_51(var uParam0, bool bParam1) //Position: 0x11E6 / 4582
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
		Function_52();
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

void Function_52() //Position: 0x12B5 / 4789
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

int Function_53(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x132D / 4909
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
	Function_68(iParam0, TO_FLOAT(bParam1), 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_55(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_54(iParam0);
	return 1;
}

void Function_54(bool bParam0) //Position: 0x1555 / 5461
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

void Function_55(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x15F3 / 5619
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_66(390))), 32);
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
					bVar19 = (Function_65(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_65(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_63(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_60(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_57(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_56(), &Var9);
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

var Function_56() //Position: 0x1C31 / 7217
{
	int iVar0;
	
	return &iVar0;
}

var Function_57(int iParam0) //Position: 0x1C3A / 7226
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_58(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1C4B / 7243
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_59(char* cParam0) //Position: 0x1D42 / 7490
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_60(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1D5D / 7517
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_62(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_61(Function_62(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_61(int iParam0, int iParam1) //Position: 0x1DC4 / 7620
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_62(int iParam0, bool bParam1) //Position: 0x1DD6 / 7638
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_63(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1DE8 / 7656
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
	if (((Function_64(iParam0) != 19 || Function_64(iParam0) != 17) || Function_64(iParam0) != 10) || Function_64(iParam0) != 9)
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

int Function_64(int iParam0) //Position: 0x1F1C / 7964
{
	return Global_55480[iParam016].f_96;
}

float Function_65(int iParam0) //Position: 0x1F2B / 7979
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_66(int iParam0) //Position: 0x1F64 / 8036
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_67(int iParam0) //Position: 0x1FA1 / 8097
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

int Function_68(int iParam0, bool bParam1, bool bParam2) //Position: 0x213B / 8507
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

bool Function_69() //Position: 0x237F / 9087
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_70() //Position: 0x2388 / 9096
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_71() //Position: 0x239E / 9118
{
	Function_73();
	Function_72(10, 3);
	return;
}

void Function_72(int iParam0, int iParam1) //Position: 0x23AD / 9133
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

void Function_73() //Position: 0x24FA / 9466
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_77())
	{
		Function_76(10, 3);
	}
	else
	{
		Function_74();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_48(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_48());
	UI_POP("nDebugMenu");
	return;
}

void Function_74() //Position: 0x2545 / 9541
{
	Function_75(25, 2);
	return;
}

void Function_75(int iParam0, int iParam1) //Position: 0x2551 / 9553
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

void Function_76(int iParam0, int iParam1) //Position: 0x277D / 10109
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

bool Function_77() //Position: 0x28CA / 10442
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
				if (!Function_47(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_78() //Position: 0x2932 / 10546
{
	return Global_47307;
}

void Function_79() //Position: 0x293B / 10555
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	Function_191(&uLocal_302, &uLocal_304, &uLocal_308, &iLocal_349, &bLocal_351, &uLocal_352);
	DESTROY_ITERATOR(&uLocal_768);
	Function_189(&iLocal_252);
	Function_183(&bLocal_106);
	if (IS_ACTOR_VALID(Function_48()))
	{
		SET_ACTOR_INVULNERABILITY(Function_48(), false);
	}
	UNK_0x2148AC15(4294967295, 0);
	UNK_0x444C3C32(1, 4, 0);
	Function_174();
	Function_173(&iLocal_326);
	Function_162();
	SET_PHOSPHORUS_AMMO_ACTIVE(0);
	UNK_0x8062BD74(Function_48(), 0, 0,1f);
	UNK_0x2148AC15(4294967295, 0);
	UNK_0x444C3C32(1, 4, 0);
	UNREGISTER_HOST_BROADCAST_VARIABLES();
	UNREGISTER_CLIENT_BROADCAST_VARIABLES();
	Function_158(&uLocal_770);
	DESTROY_LAYOUT(&uLocal_622);
	GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_coffin04x", "$/content/scripting/gringo/SimpleGringo/player_dig_grave", "MP_OpenCoffin", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
	if (IS_LAYOUTREF_VALID(&uLocal_1044))
	{
		DESTROY_LAYOUT(&uLocal_1044);
	}
	Function_125(148, iLocal_359);
	Function_183(&bLocal_106);
	Function_124(&bLocal_106);
	DECOR_REMOVE_ALL(&bLocal_106);
	UI_EXIT("MP_OverrunQuit");
	if (iLocal_1078 != 19)
	{
		Function_97(iLocal_1043, 0);
	}
	Function_81(&iLocal_1078);
	Function_80();
	STREAMING_UNLOAD_BOUNDS();
	return;
}

void Function_80() //Position: 0x2A86 / 10886
{
	RELEASE_LAYOUT_REF(&bLocal_106);
	return;
}

void Function_81(int iParam0) //Position: 0x2A92 / 10898
{
	if (iParam0 != 19)
	{
		Function_90(&iParam0);
	}
	Function_82(&iParam0);
	return;
}

void Function_82(vector3 vParam0) //Position: 0x2AAD / 10925
{
	if (vParam0.z >= 0)
	{
		Function_83(TO_FLOAT(vParam0.z), "XP_Coop_complete", 1);
		vParam0.f_8 = 0;
	}
	return;
}

int Function_83(float fParam0, bool bParam1, bool bParam2) //Position: 0x2AE2 / 10978
{
	if (!Function_88())
	{
		Global_131724 = 1;
	}
	else if (&bParam2)
	{
		Function_85(8, fParam0);
	}
	Function_84(487, (fParam0 * Global_6603), &bParam1);
	return 1;
}

void Function_84(int iParam0, bool bParam1, int iParam2) //Position: 0x2B14 / 11028
{
	Function_53(iParam0, CEIL(bParam1), 1, &iParam2);
	Global_131807.f_1336 = 1;
	return;
}

void Function_85(var uParam0, float fParam1) //Position: 0x2B31 / 11057
{
	Function_86(uParam0, (Function_87(uParam0) + &fParam1));
	return;
}

void Function_86(int iParam0, int iParam1) //Position: 0x2B45 / 11077
{
	(*&Global_122919 + 288)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_120101[GET_LOCAL_SLOT()88] + 288)[iParam0] = iParam1;
	}
	return;
}

float Function_87(int iParam0) //Position: 0x2B70 / 11120
{
	return (*&Global_122919 + 288)[iParam0];
}

bool Function_88() //Position: 0x2B81 / 11137
{
	if (Function_69())
	{
		return (Function_89() != 1 || Function_89() != 0);
	}
	return 0;
}

int Function_89() //Position: 0x2B9A / 11162
{
	return Global_124175.f_32;
}

void Function_90(int iParam0) //Position: 0x2BA6 / 11174
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	Function_95(&uVar2, &iVar0, &bVar1);
	if (iVar0 >= 4294967295)
	{
		Function_91(iVar0, &uVar2, &iParam0 + 8, bVar1);
	}
	return;
}

void Function_91(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x2BCA / 11210
{
	bool bVar0;
	
	uParam1 = Function_94(iParam0);
	uParam2 = Function_92(uParam1, 32, 20);
	uParam1 = Function_92(uParam1, 20, 0);
	if (&bParam3)
	{
		bVar0 = (TO_FLOAT(uParam2) * 0,3f);
		bVar0 = (bVar0 / 5.0f);
		uParam2 = ROUND(bVar0);
		uParam2 *= 5;
	}
}

int Function_92(var uParam0, int iParam1, int iParam2) //Position: 0x2C25 / 11301
{
	int iVar0;
	
	iVar0 = (SHIFT_LEFT(Function_93((iParam1 - 1)), true) - 1);
	return SHIFT_RIGHT((iVar0 && uParam0), iParam2);
}

bool Function_93(bool bParam0) //Position: 0x2C44 / 11332
{
	return SHIFT_LEFT(true, bParam0);
}

var Function_94(int iParam0) //Position: 0x2C50 / 11344
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return 4294967295;
	}
	return (*&Global_131396 + 256 + 12)[iParam0];
}

int Function_95(var uParam0, var uParam1, int iParam2) //Position: 0x2C71 / 11377
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_96(0);
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	if (!(DECOR_GET_INT_VERBOSE(&uVar0, "total", &uParam0) && DECOR_GET_INT_VERBOSE(&uVar0, "medal", &iVar1)))
	{
		return 0;
	}
	iParam2 = DECOR_GET_BOOL(&uVar0, "casual");
	uParam1 = iVar1;
	return 1;
}

int Function_96(int iParam0) //Position: 0x2CCC / 11468
{
	int iVar0;
	
	iVar0 = FIND_OBJECT_IN_LAYOUT(Function_38(), "EndgameScore");
	if (!IS_OBJECT_VALID(&iVar0) && iParam0)
	{
		iVar0 = CREATE_POINT_IN_LAYOUT(StackVal, Function_38(), "EndgameScore", (&Global_124175 + 56), Vector(0.0f, 0.0f, 0.0f));
	}
	return &iVar0;
}

void Function_97(bool bParam0, int iParam1) //Position: 0x2D1F / 11551
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	uVar2 = Function_106(bParam0, &bVar1, &uVar0);
	iParam1 = iParam1;
	PLAYSTAT_INT("Kills", Function_105(29));
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		PLAYSTAT_INT("Deaths", Function_102(GET_LOCAL_SLOT()));
	}
	PLAYSTAT_MP_COOP_COMPLETE(GET_SHORT_SCRIPT_NAME(), CEIL(bVar1), GET_NUM_PLAYERS(), uVar2, Function_105(29), Function_100((Function_101(8) - 1), 0));
	uVar2 = uVar2;
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_99(uVar0);
		}
		Function_98(5);
	}
	else
	{
		Function_99(4294967295);
	}
	return;
}

void Function_98(int iParam0) //Position: 0x2D9E / 11678
{
	Function_14(&Global_131807 + 1304, iParam0);
	return;
}

void Function_99(int iParam0) //Position: 0x2DB0 / 11696
{
	if (NET_IS_SESSION_HOST())
	{
		Global_123099.f_188 = iParam0;
	}
	return;
}

var Function_100(int iParam0, bool bParam1) //Position: 0x2DC4 / 11716
{
	if (&bParam1)
	{
		switch (iParam0)
		{
			case 0x00000000:
				return "Class_0_desc";
			
			case 0x00000001:
				return "Class_1_desc";
			
			case 0x00000002:
				return "Class_2_desc";
			
			case 0x00000003:
				return "Class_3_desc";
			
			case 0x00000004:
				return "Class_4_desc";
			
			case 0x00000005:
				return "Class_5_desc";
			
			case 0x00000006:
				return "Class_6_desc";
			
			case 0x00000007:
				return "Class_7_desc";
			
			case 0x00000008:
				return "Class_8_desc";
			
			case 0x00000009:
				return "Class_9_desc";
			
			case 0x0000000A:
				return "Class_10_desc";
			
			case 0x0000000B:
				return "Class_11_desc";
			
			case 0x0000000C:
				return "Class_12_desc";
			
			case 0x0000000D:
				return "Class_13_desc";
			
			case 0x0000000E:
				return "Class_14_desc";
			
			case 0x0000000F:
				return "Class_15_desc";
			
			case 0x00000010:
				return "Class_16_desc";
			
			case 0x00000011:
				return "Class_17_desc";
			
			case 0x00000012:
				return "Class_18_desc";
			
			case 0x00000013:
				return "Class_19_desc";
			
			case 0x00000014:
				return "Class_20_desc";
			
			default:
		}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "Class_0";
		
		case 0x00000001:
			return "Class_1";
		
		case 0x00000002:
			return "Class_2";
		
		case 0x00000003:
			return "Class_3";
		
		case 0x00000004:
			return "Class_4";
		
		case 0x00000005:
			return "Class_5";
		
		case 0x00000006:
			return "Class_6";
		
		case 0x00000007:
			return "Class_7";
		
		case 0x00000008:
			return "Class_8";
		
		case 0x00000009:
			return "Class_9";
		
		case 0x0000000A:
			return "Class_10";
		
		case 0x0000000B:
			return "Class_11";
		
		case 0x0000000C:
			return "Class_12";
		
		case 0x0000000D:
			return "Class_13";
		
		case 0x0000000E:
			return "Class_14";
		
		case 0x0000000F:
			return "Class_15";
		
		case 0x00000010:
			return "Class_16";
		
		case 0x00000011:
			return "Class_17";
		
		case 0x00000012:
			return "Class_18";
		
		case 0x00000013:
			return "Class_19";
		
		case 0x00000014:
			return "Class_20";
		
		default:
	}
	return "Common_Null";
}

int Function_101(int iParam0) //Position: 0x3138 / 12600
{
	return (*&Global_122919 + 200)[iParam0];
}

int Function_102(int iParam0) //Position: 0x3148 / 12616
{
	return Function_103(12, iParam0);
}

int Function_103(int iParam0, bool bParam1) //Position: 0x3155 / 12629
{
	char* cVar0[64];
	
	if (iParam0 > 40)
	{
		return 0;
	}
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_105(iParam0);
	}
	if (!Function_104(bParam1))
	{
		strcpy(&cVar0, "Tried to get Stat from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_120101[bParam188] + 376)[iParam0];
}

bool Function_104(bool bParam0) //Position: 0x31C4 / 12740
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_123163 + 96)[bParam0] > Global_123163.f_92)
	{
		(*&Global_123163 + 96)[bParam0] = Global_123163.f_92;
		(&Global_123163 + 96[bParam0])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_120101, bParam0);
	}
	return StackVal;
}

int Function_105(int iParam0) //Position: 0x3265 / 12901
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_122919 + 376)[iParam0];
}

var Function_106(bool bParam0, var uParam1, int iParam2) //Position: 0x327F / 12927
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar5;
	var uVar6;
	
	uParam1 = 100000.0f;
	if (Function_123(&Global_123099 + 172))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_122(&Global_123099 + 172);
		}
		uParam1 = Function_118(&Global_123099 + 172);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_104(bVar1))
		{
			iVar0 = (iVar0 + Function_116(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_113(uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_112(iVar3, &iVar2);
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_111();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_109(bVar1, &uVar6, &iVar2);
			iVar0 = (iVar0 + iVar2);
			bVar1++;
		}
	}
	iParam2 = Function_108(iVar0);
	if (!bParam0)
	{
		if (iParam2 >= 4294967295)
		{
			iParam2 = (iParam2 - 1);
		}
	}
	Function_107(iVar0, iParam2, iLocal_1061);
	return iVar0;
}

void Function_107(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3358 / 13144
{
	var uVar0;
	
	uVar0 = Function_96(1);
	if (!DECOR_SET_INT(&uVar0, "total", bParam0))
	{
	}
	if (!DECOR_SET_INT(&uVar0, "medal", bParam1))
	{
	}
	if (!DECOR_SET_BOOL(&uVar0, "casual", &bParam2))
	{
	}
	else if (&bParam2)
	{
	}
	return;
}

var Function_108(int iParam0) //Position: 0x33AC / 13228
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar2 = 2;
	while (iVar2 > 0)
	{
		Function_91(iVar2, &iVar0, &uVar1, 0);
		if (iParam0 > iVar0)
		{
			return iVar2;
		}
		iVar2 = (iVar2 + 4294967295);
	}
	return 4294967295;
}

int Function_109(bool bParam0, var uParam1, int iParam2) //Position: 0x33D9 / 13273
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = Function_96(0);
	if (!IS_OBJECT_VALID(&uVar0))
	{
		return 0;
	}
	uVar1 = Function_110(bParam0, 1);
	uVar2 = Function_110(bParam0, 0);
	if (!(DECOR_GET_INT_VERBOSE(&uVar0, &uVar1, &iParam2) && DECOR_GET_INT_VERBOSE(&uVar0, &uVar2, &uParam1)))
	{
		return 0;
	}
	return 1;
}

bool Function_110(int iParam0, bool bParam1) //Position: 0x3422 / 13346
{
	bool bVar0;
	
	if (bParam1)
	{
		strcpy(&bVar0, "v", 4);
	}
	else
	{
		strcpy(&bVar0, "n", 4);
	}
	straddi(&bVar0, iParam0, 4);
	return &bVar0;
}

int Function_111() //Position: 0x3449 / 13385
{
	int iVar0;
	
	iVar0 = Function_96(0);
	if (!IS_OBJECT_VALID(&iVar0))
	{
		return 0;
	}
	return DECOR_GET_INT(&iVar0, "size");
}

void Function_112(int iParam0, int iParam1) //Position: 0x346F / 13423
{
	if (iParam0 == 2)
	{
		iParam1 = 1000;
	}
	else if (iParam0 == 1)
	{
		iParam1 = 500;
	}
	else if (iParam0 == 0)
	{
		iParam1 = 200;
	}
	return;
}

int Function_113(float fParam0) //Position: 0x34A1 / 13473
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	Function_114(2, &fVar0, &iVar3);
	Function_114(1, &fVar1, &iVar3);
	Function_114(0, &fVar2, &iVar3);
	iVar3 = iVar3;
	fVar0 = 20.0f;
	fVar1 = 10.0f;
	fVar2 = 5.0f;
	if (fParam0 <= fVar2)
	{
		if (fParam0 <= fVar1)
		{
			if (fParam0 <= fVar0)
			{
				return 2;
			}
			return 1;
		}
		return 0;
	}
	return 4294967295;
}

void Function_114(int iParam0, var uParam1, int iParam2) //Position: 0x34F3 / 13555
{
	float fVar0;
	
	fVar0 = Function_115(iParam0);
	iParam2 = FLOOR((fVar0 / 1000.0f));
	uParam1 = (60.0f * (fVar0 - (IntToFloat(iParam2) * 1000.0f)));
	return;
}

var Function_115(int iParam0) //Position: 0x3527 / 13607
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return -1.0f;
	}
	return (*&Global_131396 + 256 + 60)[iParam0];
}

bool Function_116(bool bParam0) //Position: 0x3548 / 13640
{
	return Function_117(0, bParam0);
}

int Function_117(int iParam0, bool bParam1) //Position: 0x3554 / 13652
{
	char* cVar0[64];
	
	if (bParam1 == GET_LOCAL_SLOT())
	{
		return Function_101(iParam0);
	}
	if (!Function_104(bParam1))
	{
		strcpy(&cVar0, "Tried to get genint from not-yet-valid slot ", 64);
		stradd(&cVar0, I2STR(bParam1), 64);
	}
	return (*&Global_120101[bParam188] + 200)[iParam0];
}

float Function_118(vector3 vParam0) //Position: 0x35BB / 13755
{
	if (Function_123(&vParam0))
	{
		if (Function_121(&vParam0))
		{
			return vParam0.z;
		}
		Function_119();
		return (NET_GET_NET_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of NETTIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of NETTIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

void Function_119() //Position: 0x3691 / 13969
{
	if (!Function_120())
	{
	}
	return;
}

bool Function_120() //Position: 0x369E / 13982
{
	return NET_IS_IN_SESSION();
}

bool Function_121(int iParam0) //Position: 0x36A7 / 13991
{
	return Function_47(iParam0, 2);
}

void Function_122(vector3 vParam0) //Position: 0x36B5 / 14005
{
	if (Function_123(&vParam0))
	{
		if (!Function_121(&vParam0))
		{
			Function_119();
			vParam0.f_8 = (NET_GET_NET_TIME() - vParam0.y);
			Function_5(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_123(int iParam0) //Position: 0x3782 / 14210
{
	return Function_47(iParam0, 1);
}

void Function_124(bool bParam0) //Position: 0x3790 / 14224
{
	bool bVar0;
	var uVar1;
	
	if (DECOR_CHECK_EXIST(&bParam0, "quitContext"))
	{
		bVar0 = DECOR_GET_INT(&bParam0, "quitContext");
		uVar1 = bVar0;
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar1))
		{
			DECOR_REMOVE(&bParam0, "quitContext");
			RELEASE_SCRIPT_USE_CONTEXT(&uVar1);
		}
	}
	return;
}

void Function_125(var uParam0, int iParam1) //Position: 0x37EC / 14316
{
	Function_157(14, 1);
	Function_126(Function_156(), uParam0, iParam1);
	return;
}

void Function_126(int iParam0, var uParam1, int iParam2) //Position: 0x3802 / 14338
{
	bool bVar0;
	
	Function_155(0, iParam0);
	bVar0 = ROUND((-1000.0f * Function_118(&Global_123099 + 172)));
	Function_155(13, iParam0);
	Function_155(11, Function_105(29));
	Function_127(uParam1, 4294967295, 1, bVar0, iParam2);
	return;
}

void Function_127(int iParam0, var uParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x383D / 14397
{
	int iVar0[67];
	int iVar68;
	
	UI_EXIT("XpHud");
	Function_157(5, 1);
	Function_40(4096);
	Function_148();
	Function_147();
	if (iParam0 < 0 && !&bParam4)
	{
		if (NET_IS_IN_SESSION())
		{
			NET_START_LB_UPDATE(0);
			Function_146(&Global_122919 + 376, &iVar0, 0);
			iVar0[66] = &uParam3;
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), iParam0, &uParam1, &iVar0);
			iVar0[0] = iVar0[13];
			NET_UPDATE_LEADERBOARD(GET_LOCAL_SLOT(), 6, &uParam1, &iVar0);
			NET_END_LB_UPDATE();
			Global_132499.f_1532 = 4294967295;
			UNK_0x7154D15B();
			if (NET_IS_FRIEND_SCORE_INFO_AVAILABLE())
			{
				iVar68 = UNK_0xA684E813();
				if (iVar68 >= 4294967295)
				{
					Function_146(&Global_120101[iVar6888] + 376, &iVar0, 1);
					NET_REPORT_FRIEND_SCORES(iVar68, iParam0, &iVar0);
				}
			}
		}
	}
	else if (&bParam4)
	{
	}
	Function_128(&bParam2);
}

void Function_128(bool bParam0) //Position: 0x3907 / 14599
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", 0, 0, 0, 0);
	Function_145(2);
	if (&bParam0)
	{
		Function_145(1);
	}
	else
	{
		Function_144(1);
	}
	Function_129();
	return;
}

void Function_129() //Position: 0x3991 / 14737
{
	Function_142();
	Function_141();
	Function_141();
	Function_140();
	Function_140();
	Function_139();
	Function_139();
	Function_136(0);
	Function_136(0);
	if (!Function_69())
	{
		Function_134();
		Function_133();
		Function_132();
		Function_131();
		if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
		{
			Global_116927[1996].f_24 = 1;
		}
	}
	Function_130();
	return;
}

void Function_130() //Position: 0x39E3 / 14819
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

void Function_131() //Position: 0x3AE9 / 15081
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

void Function_132() //Position: 0x3B1C / 15132
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119632[iVar23] = bVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_133() //Position: 0x3CAF / 15535
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		bVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (bVar3 == 4294967295 && bVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(bVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_134() //Position: 0x3E68 / 15976
{
	Function_135(&Global_42918, 1, 0);
	return;
}

void Function_135(struct<2317> Param0) //Position: 0x3E76 / 15990
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
	
	uVar0 = Function_48();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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

struct<8> Function_136(int iParam0) //Position: 0x4094 / 16532
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
					iVar2 = ((Function_138((50 + iVar4)) + Function_138((183 + iVar4))) + Function_138((90 + iVar4)));
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
	Function_137(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_137(int iParam0, bool bParam1, bool bParam2) //Position: 0x413B / 16699
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
		Function_68(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_67(iParam0);
	if (&bParam2)
	{
		Function_55(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_138(bool bParam0) //Position: 0x43D7 / 17367
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_139() //Position: 0x4418 / 17432
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
		iVar2 = ((Function_138((50 + iVar3) + 15) + Function_138((183 + iVar3) + 15)) + Function_138((90 + iVar3) + 15));
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
	Function_137(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_140() //Position: 0x44A1 / 17569
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
			iVar2 = ((Function_138((50 + iVar3) + 8) + Function_138((183 + iVar3) + 8)) + Function_138((90 + iVar3) + 8));
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
	Function_137(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_141() //Position: 0x4538 / 17720
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
		iVar2 = ((Function_138((50 + iVar3)) + Function_138((183 + iVar3))) + Function_138((90 + iVar3)));
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
	Function_137(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_142() //Position: 0x45B7 / 17847
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_143(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_137(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_143(int iParam0, bool bParam1, int iParam2) //Position: 0x45F4 / 17908
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
	Function_68(iParam0, bParam1, 1);
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_55(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_144(int iParam0) //Position: 0x4800 / 18432
{
	Function_12(&Global_124156, iParam0);
	return;
}

void Function_145(int iParam0) //Position: 0x480F / 18447
{
	Function_14(&Global_124156, iParam0);
	return;
}

void Function_146(var[] uParam0, int[] iParam1, bool bParam2) //Position: 0x481E / 18462
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 40)
	{
		iParam1[iVar0] = uParam0[iVar0];
		iVar0++;
	}
	if (&bParam2)
	{
		iVar0 = 40;
		while (iVar0 < 66)
		{
			iParam1[iVar0] = 0;
			iVar0++;
		}
	}
	return;
}

void Function_147() //Position: 0x4867 / 18535
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 259)
	{
		Global_89112[iVar0] = 0;
		Global_89632[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

void Function_148() //Position: 0x4893 / 18579
{
	if (Global_131807.f_1316 > 6)
	{
		Function_149(&(Global_79340[518]));
		Function_149(&(Global_79340[618]));
	}
	if (Global_131807.f_1316 > 11)
	{
		Function_149(&(Global_79340[718]));
		Function_149(&(Global_79340[818]));
		Function_149(&(Global_79340[918]));
		Function_149(&(Global_79340[1018]));
		Function_149(&(Global_79340[1118]));
	}
	return;
}

void Function_149(bool bParam0) //Position: 0x48FA / 18682
{
	Global_89112[bParam0] = 0;
	Function_150(bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_150(int iParam0, float fParam1, bool bParam2, int iParam3, int iParam4, int iParam5) //Position: 0x4917 / 18711
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_154(iParam0), fParam1, true, 0);
	if (&bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_153(iParam0), 6);
		stradd(&cVar0, "_info", 24);
		memcpy(&cVar6, StackVal, *(&Global_79340[iParam018] + 16), 6);
		stradd(&cVar6, "_num", 24);
		if (&iParam3 >= 4294967295)
		{
			UI_SET_STRING(&cVar6, INT_TO_STRING(&iParam3));
		}
		if (&iParam4 >= 4294967295)
		{
			strcpy(&cVar12, "PVP_num2", 16);
			UI_SET_STRING(&cVar12, INT_TO_STRING(&iParam4));
		}
		if (&iParam5 >= 4294967295)
		{
			strcpy(&cVar16, "PVP_num3", 16);
			UI_SET_STRING(&cVar16, INT_TO_STRING(&iParam5));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_154(iParam0), &cVar0, 2, 2, true);
	}
	if (Function_152(iParam0, 4))
	{
		Function_151(Function_154(iParam0), 0);
	}
}

void Function_151(bool bParam0, bool bParam1) //Position: 0x49D6 / 18902
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(bParam0);
	REMOVE_JOURNAL_ENTRY(bParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(bParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(bParam0);
	}
	return;
}

bool Function_152(int iParam0, bool bParam1) //Position: 0x49FB / 18939
{
	return Function_47(Global_79340[iParam018].f_40, bParam1);
}

struct<16> Function_153(int iParam0) //Position: 0x4A10 / 18960
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_79340[iParam018] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_154(int iParam0) //Position: 0x4A46 / 19014
{
	return Global_79340[iParam018].f_32;
}

void Function_155(int iParam0, int iParam1) //Position: 0x4A56 / 19030
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_122919 + 376)[iParam0] = iParam1;
	return;
}

int Function_156() //Position: 0x4A71 / 19057
{
	return Function_101(0);
}

void Function_157(int iParam0, int iParam1) //Position: 0x4A7B / 19067
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_122919 + 376)[iParam0] = (&iParam1 + (*&Global_122919 + 376)[iParam0]);
	return;
}

void Function_158(int iParam0) //Position: 0x4AA3 / 19107
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_159(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_159(struct<2>[] Param0, int iParam1) //Position: 0x4ACB / 19147
{
	if (Function_161(&(Param0[iParam12]), 4))
	{
		if (Function_161(&(Param0[iParam12]), 1))
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
			Function_160(&(Param0[iParam12]), 1);
			Function_160(&(Param0[iParam12]), 2);
			Function_160(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_160(struct<13> Param0) //Position: 0x4C16 / 19478
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_161(struct<13> Param0) //Position: 0x4C33 / 19507
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_162() //Position: 0x4C51 / 19537
{
	Function_172();
	Function_171();
	Function_170();
	Function_169();
	Function_163();
	return;
}

void Function_163() //Position: 0x4C66 / 19558
{
	Function_165(&iLocal_464, 0);
	Function_164(&iLocal_464);
	return;
}

void Function_164(struct<53> Param0) //Position: 0x4C79 / 19577
{
	Param0.f_52 = 0;
	return;
}

void Function_165(int iParam0, bool bParam1) //Position: 0x4C85 / 19589
{
	if (IS_OBJECT_VALID(&iParam0 + 8))
	{
		DESTROY_OBJECT(&iParam0 + 8);
	}
	if (IS_OBJECTSET_VALID(&iParam0 + 16))
	{
		DESTROY_OBJECTSET(&iParam0 + 16);
	}
	if (SQUAD_IS_VALID(&iParam0 + 88))
	{
		if (&bParam1)
		{
			Function_168(&iParam0 + 88);
		}
		else
		{
			Function_166(&iParam0 + 88, 0, 0);
		}
		DESTROY_OBJECT(&iParam0 + 88);
	}
	if (SQUAD_IS_VALID(&iParam0 + 96))
	{
		if (&bParam1)
		{
			Function_168(&iParam0 + 96);
		}
		else
		{
			Function_166(&iParam0 + 96, 0, 0);
		}
		DESTROY_OBJECT(&iParam0 + 96);
	}
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (&bParam1)
		{
			DESTROY_LAYOUT_OBJECTS(&iParam0);
			DESTROY_LAYOUT(&iParam0);
		}
		else
		{
			RELEASE_LAYOUT_OBJECTS(&iParam0);
			RELEASE_LAYOUT_REF(&iParam0);
		}
	}
	return;
}

void Function_166(var uParam0, bool bParam1, bool bParam2) //Position: 0x4D44 / 19780
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
				if (!Function_167(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_167(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x4DCD / 19917
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_168(bool bParam0) //Position: 0x4DED / 19949
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

void Function_169() //Position: 0x4E3B / 20027
{
	Function_165(&iLocal_438, 0);
	Function_164(&iLocal_438);
	return;
}

void Function_170() //Position: 0x4E4E / 20046
{
	Function_165(&iLocal_412, 0);
	Function_164(&iLocal_412);
	return;
}

void Function_171() //Position: 0x4E61 / 20065
{
	Function_165(&iLocal_386, 0);
	Function_164(&iLocal_386);
	return;
}

void Function_172() //Position: 0x4E74 / 20084
{
	Function_165(&iLocal_360, 0);
	Function_164(&iLocal_360);
	return;
}

void Function_173(int iParam0) //Position: 0x4E87 / 20103
{
	if (iParam0)
	{
		UI_EXIT("NetTimer");
		iParam0 = 0;
	}
	return;
}

void Function_174() //Position: 0x4EA7 / 20135
{
	Function_181(1, 0);
	Function_180(0.0f, 0.0f);
	Function_175(1, 0, 0);
	return;
}

void Function_175(bool bParam0, var uParam1, int iParam2) //Position: 0x4EBD / 20157
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
		bVar0 = MAKE_TIME_OF_DAY(bParam0, &uParam1, &iParam2);
		Function_176(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_176(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4FA7 / 20391
{
	int iVar0;
	
	Function_179(bParam0);
	Function_178(&bParam1);
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
	Function_177();
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

void Function_177() //Position: 0x5126 / 20774
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_178(int iParam0) //Position: 0x5132 / 20786
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

void Function_179(int iParam0) //Position: 0x517C / 20860
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

void Function_180(float fParam0, int iParam1) //Position: 0x51C2 / 20930
{
	Global_26174.f_8 = fParam0;
	Global_26174.f_12 = iParam1;
	Global_26174.f_16 = 1;
	return;
}

void Function_181(int iParam0, int iParam1) //Position: 0x51DC / 20956
{
	Function_179(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_182(StackVal, &iParam1);
	}
	return;
}

void Function_182(int iParam0, int iParam1) //Position: 0x520E / 21006
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_179(iParam0);
	Function_178(&uVar0);
	PRINTNL();
	Function_176(iParam0, &uVar0, &iParam1);
	return;
}

void Function_183(bool bParam0) //Position: 0x5237 / 21047
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	
	if (IS_LAYOUTREF_VALID(&bParam0))
	{
		uVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&bParam0, Function_188()));
		if (IS_OBJECTSET_VALID(&uVar0))
		{
			iVar1 = GET_OBJECTSET_SIZE(&uVar0);
			bVar2 = false;
			while (bVar2 <= iVar1)
			{
				uVar6 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar2, &uVar0);
				uVar7 = FIND_OBJECT_IN_OBJECT(&uVar6, Function_187());
				if (IS_OBJECT_VALID(&uVar7))
				{
					if (DECOR_GET_INT_VERBOSE(&uVar7, Function_186(), &uVar3))
					{
						iVar4 = Function_185(uVar3);
						iVar5 = Function_184(uVar3);
						RESET_THIS_TREE_TYPE_CLEARING(iVar4);
						RESET_THIS_TREE_TYPE_CLEARING(iVar5);
					}
				}
				bVar2++;
			}
		}
	}
	return;
}

int Function_184(int iParam0) //Position: 0x52C2 / 21186
{
	return Function_92(iParam0, 32, 16);
}

int Function_185(var uParam0) //Position: 0x52D0 / 21200
{
	return Function_92(uParam0, 16, 0);
}

var Function_186() //Position: 0x52DE / 21214
{
	return "PackedGrass";
}

var Function_187() //Position: 0x52F2 / 21234
{
	return "MPItemGiver";
}

var Function_188() //Position: 0x5306 / 21254
{
	return "PickupsSet";
}

void Function_189(int iParam0) //Position: 0x5319 / 21273
{
	Function_190(&iParam0, 0);
	return;
}

void Function_190(struct<93> Param0) //Position: 0x5326 / 21286
{
	if (Param0.f_92)
	{
		Param0.f_92 = 0;
		UI_HIDE("ScoreGraph");
		UI_DEACTIVATE("ScoreGraph");
		Param0.f_88 = &bParam1;
	}
	return;
}

void Function_191(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, var uParam5) //Position: 0x5362 / 21346
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		uVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		if (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
		}
		DESTROY_OBJECT(&uParam0);
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		DESTROY_OBJECT(&uParam1);
	}
	RESET_THIS_TREE_TYPE_CLEARING(bParam4);
	RESET_THIS_TREE_TYPE_CLEARING(uParam5);
	Function_194(&uParam0);
	Function_193(&uParam2);
	Function_192(&iParam3);
}

void Function_192(int iParam0) //Position: 0x53C5 / 21445
{
	if (IS_POINT_LIGHT_VALID(&iParam0))
	{
		DESTROY_POINT_LIGHT(&iParam0);
	}
	return;
}

void Function_193(var uParam0) //Position: 0x53DC / 21468
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
			UNK_0xE18028C1(&iVar0);
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			DESTROY_OBJECT(&iVar0);
		}
	}
	DESTROY_OBJECTSET(&uParam0);
	return;
}

void Function_194(var uParam0) //Position: 0x543E / 21566
{
	var uVar0;
	
	uVar0 = Function_48();
	if (IS_ACTOR_VALID(&uVar0) && !IS_OBJECT_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uVar0) && !GET_ACTOR_INCAPACITATED(&uVar0))
		{
			if (DECOR_CHECK_EXIST(&uVar0, "nIsPicking") || DECOR_CHECK_EXIST(&uVar0, "PickingFrame"))
			{
				if (MAKE_ACTOR_READY_FOR_ACTION(&uVar0, 1))
				{
					DECOR_REMOVE(&uVar0, "nIsPicking");
					DECOR_REMOVE(&uVar0, "PickingFrame");
				}
			}
		}
	}
	return;
}

int Function_195() //Position: 0x54CB / 21707
{
	bool bVar0;
	
	return Function_816();
	bVar0 = true;
	Function_814();
	if (NET_IS_SESSION_HOST())
	{
		Function_795();
	}
	if (Function_794(&bLocal_624))
	{
		Function_375();
	}
	if (iLocal_566 != 99)
	{
		Function_373(3);
		Function_369(&Local_988 + 8, &Local_988 + 12, &Local_988 + 16);
		if (NET_IS_SESSION_HOST())
		{
			Local_968 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (StackVal + StackVal), Local_988 };
		}
		else if (UNK_0xA80C6DE6(&Local_968))
		{
			Local_988 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_968 };
		}
		bVar0 = Function_235(&bLocal_624, iLocal_1043);
		Function_232(&uLocal_327, &bLocal_106);
		Function_228(&uLocal_329, &bLocal_106);
		Function_220(&uLocal_331, &uLocal_333, &bLocal_106, &uLocal_335);
		Function_214(StackVal, *(&bLocal_106 + 24));
		Function_205(&uLocal_337, &bLocal_106, 3, &uLocal_339);
		Function_196(StackVal, (bLocal_281 <= 12 || Local_988.f_52), &iLocal_292, &bLocal_106, *(&bLocal_106 + 24), 3);
	}
	return bVar0;
}

void Function_196(bool bParam0, int iParam1, bool bParam2, struct<2> Param3, int iParam5) //Position: 0x5598 / 21912
{
	if (bParam0)
	{
		if (NET_IS_SESSION_HOST())
		{
			if (IS_LAYOUTREF_VALID(&bParam2))
			{
				if (Function_203(&iParam1))
				{
					Function_200(StackVal, Param3, iParam5);
					Function_197(&iParam1, (15.0f + RAND_FLOAT_RANGE(-10.0f, 10.0f)));
				}
			}
		}
	}
}

void Function_197(int iParam0, float fParam1) //Position: 0x55DF / 21983
{
	Function_198(&iParam0, -fParam1);
	return;
}

void Function_198(int iParam0, float fParam1) //Position: 0x55EE / 21998
{
	Function_119();
	Function_199(&iParam0, (NET_GET_NET_TIME() - fParam1));
	return;
}

void Function_199(vector3 vParam0) //Position: 0x5603 / 22019
{
	vParam0.y = iParam1;
	Function_5(&vParam0, 1);
	Function_4(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_200(struct<2> Param0, int iParam2) //Position: 0x5624 / 22052
{
	struct<9> Var0;
	bool bVar9;
	
	bVar8 = RAND_FLOAT_RANGE(50.0f, 100.0f);
	bVar9 = RAND_FLOAT_RANGE(50.0f, 100.0f);
	bVar6 = Function_202();
	bVar7 = Function_202();
	if (bVar6)
	{
		bVar8 = (bVar8 * -1.0f);
	}
	if (bVar7)
	{
		bVar9 = (bVar9 * -1.0f);
	}
	vVar0 = Param0;
	vVar0.f_4 = (vVar0.y + 20.0f);
	vVar0 = (vVar0.x + bVar8);
	vVar0.f_8 = (vVar0.z + bVar9);
	if (FIND_GROUND_INTERSECTION(&vVar0, 30.0f, &Var2, &uVar4))
	{
		Function_201(StackVal, Var2, iParam2);
	}
	return;
}

void Function_201(struct<2> Param0, var uParam2) //Position: 0x56AC / 22188
{
	int iVar0;
	
	iVar0 = uParam2;
	*(&iVar0 + 4) = Param0;
	NET_SCRIPTMSG_SEND(3, 57, &iVar0, 4, 1);
	return;
}

var Function_202() //Position: 0x56CA / 22218
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

bool Function_203(int iParam0) //Position: 0x56DD / 22237
{
	if (Function_123(&iParam0))
	{
		if (Function_204(&iParam0) >= 0.0f)
		{
			return 1;
		}
	}
	return 0;
}

float Function_204(int iParam0) //Position: 0x56FA / 22266
{
	return -Function_118(&iParam0);
}

void Function_205(bool bParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x5707 / 22279
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	Function_212();
	Function_209(&uParam1, &uParam3, bParam2);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&bParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam1);
		if (!IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&bParam0);
			EVENT_TRAP_CLEAR_EVENTS(&bParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(&uVar0, &bParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
		uVar3 = START_OBJECT_ITERATOR(&uVar0);
		if (!IS_OBJECT_VALID(&uVar3))
		{
		}
		while (IS_OBJECT_VALID(&uVar3))
		{
			uVar1 = GET_EVENT_FROM_OBJECT(&uVar3);
			iVar2 = GET_OBJECT_FROM_EVENT(&uVar1);
			if (IS_OBJECT_VALID(&iVar2))
			{
				if (DECOR_GET_INT(&iVar2, "Weapon") == 35)
				{
					uVar4 = GET_EVENT_PERPETRATOR(&uVar1);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							Function_206(&iVar2, bParam2, GET_ACTOR_SLOT(&uVar5));
							DESTROY_ITERATOR(&uVar0);
							EVENT_TRAP_CLEAR_TRAP_FLAG(&bParam0);
							EVENT_TRAP_CLEAR_EVENTS(&bParam0);
							return;
						}
					}
				}
			}
			uVar3 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&bParam0);
		EVENT_TRAP_CLEAR_EVENTS(&bParam0);
	}
}

void Function_206(int iParam0, int iParam1, bool bParam2) //Position: 0x5819 / 22553
{
	struct<2> Var0;
	
	Function_208(&iParam0);
	Var0 = Function_208(&iParam0);
	Function_207(StackVal, Var0, iParam1, bParam2);
	return;
}

void Function_207(struct<2> Param0, var uParam2, int iParam3) //Position: 0x5833 / 22579
{
	struct<5> Var0;
	
	if (iParam3 == GET_LOCAL_SLOT())
	{
		Var0 = uParam2;
		*(&Var0 + 8) = Param0;
		Var0.f_4 = iParam3;
		NET_SCRIPTMSG_SEND(3, 59, &Var0, 6, 1);
	}
}

struct<8> Function_208(int iParam0) //Position: 0x5861 / 22625
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

void Function_209(var uParam0, var uParam1, int iParam2) //Position: 0x588A / 22666
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	if (IS_LAYOUTREF_VALID(&uParam0) && IS_OBJECTSET_VALID(&uParam1))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uParam1) - 1))
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
			if (IS_OBJECT_VALID(&uVar4))
			{
				bVar1 = DECOR_GET_INT(&uVar4, "NumShotsLeft");
				bVar2 = DECOR_GET_INT(&uVar4, "NumShotsCount");
				bVar3 = DECOR_GET_INT(&uVar4, "nSlotOwner");
				GET_OBJECT_POSITION(&uVar4, &Var5);
				if (bVar1 < 0)
				{
					DESTROY_OBJECT(&uVar4);
				}
				else if (bVar2 < 0)
				{
					Function_210(StackVal, &uParam0, bVar3, Var5, iParam2);
					DECOR_SET_INT(&uVar4, "NumShotsLeft", (bVar1 - 1));
					DECOR_SET_INT(&uVar4, "NumShotsCount", (12 + RAND_INT_RANGE(4294967294, 2)));
				}
				else
				{
					DECOR_SET_INT(&uVar4, "NumShotsCount", (bVar2 - 1));
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_210(var uParam0, int iParam1, struct<2> Param2, var uParam4) //Position: 0x599B / 22939
{
	struct<9> Var0;
	bool bVar9;
	
	if (iParam1 == GET_LOCAL_SLOT())
	{
		vVar0 = vVar0;
		iParam1 = iParam1;
		bVar8 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		bVar9 = RAND_FLOAT_RANGE(-5.0f, 5.0f);
		vVar0 = Param2;
		vVar0.f_4 = (vVar0.y - 5.0f);
		vVar2 = Param2;
		vVar2.f_4 = (vVar2.y + 15.0f);
		vVar0 = (vVar0.x + bVar8);
		vVar0.f_8 = (vVar0.z + bVar9);
		vVar2 = (vVar2.x + bVar8);
		vVar2.f_8 = (vVar2.z + bVar9);
		uParam0 = &uParam0;
		if (FIND_GROUND_INTERSECTION(&vVar2, 20.0f, &Var4, &uVar6))
		{
			Function_211(StackVal, Var4, uParam4, iParam1);
		}
	}
}

void Function_211(struct<2> Param0, var uParam2, int iParam3) //Position: 0x5A3B / 23099
{
	struct<5> Var0;
	
	if (iParam3 == GET_LOCAL_SLOT())
	{
		Var0 = uParam2;
		*(&Var0 + 8) = Param0;
		Var0.f_4 = iParam3;
		NET_SCRIPTMSG_SEND(3, 58, &Var0, 6, 1);
	}
}

void Function_212() //Position: 0x5A69 / 23145
{
	bool bVar0;
	
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln"))
	{
		bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln");
		if (bVar0 >= 0)
		{
			bVar0 = (bVar0 - 1);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln", bVar0);
			SET_ACTOR_INVULNERABILITY(Function_48(), true);
		}
		else
		{
			DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln");
			if (!Function_213(65536, 1))
			{
				SET_ACTOR_INVULNERABILITY(Function_48(), false);
			}
			else
			{
				DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln");
			}
		}
	}
	return;
}

bool Function_213(int iParam0, bool bParam1) //Position: 0x5B0E / 23310
{
	int iVar0;
	
	iVar0 = (Global_122919.f_192 && iParam0);
	if (&bParam1)
	{
		return iVar0 != iParam0;
	}
	return iVar0 == 0;
}

void Function_214(struct<2> Param0) //Position: 0x5B2F / 23343
{
	int iVar0;
	bool bVar1;
	
	iVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), GET_AMBIENT_LAYOUT(), 15, 1);
	bVar1 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(&bVar1))
	{
		if (Function_216(StackVal, Param0, &iVar0, &bVar1, 100.0f))
		{
			Function_215(&iVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(&bVar1))
	{
		if (Function_216(StackVal, Param0, &iVar0, &bVar1, 100.0f))
		{
			Function_215(&iVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(&bVar1))
	{
		if (Function_216(StackVal, Param0, &iVar0, &bVar1, 100.0f))
		{
			Function_215(&iVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(&bVar1))
	{
		if (Function_216(StackVal, Param0, &iVar0, &bVar1, 100.0f))
		{
			Function_215(&iVar0);
		}
	}
	bVar1 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(&bVar1))
	{
		if (Function_216(StackVal, Param0, &iVar0, &bVar1, 100.0f))
		{
			Function_215(&iVar0);
		}
	}
	DESTROY_OBJECTSET(&iVar0);
	return;
}

void Function_215(int iParam0) //Position: 0x5C53 / 23635
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0);
		if (IS_OBJECT_VALID(&uVar1))
		{
			uVar2 = GET_ACTOR_FROM_OBJECT(&uVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (IS_ACTOR_ALIVE(&uVar2))
				{
					if (DECOR_CHECK_EXIST(&uVar2, "Baited"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar2, "Baited")) < 10.0f)
						{
							if (IS_SLOT_VALID(false))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)))
								{
									MEMORY_CONSIDER_AS(&uVar2, GET_SLOT_ACTOR(false), 4);
								}
							}
							if (IS_SLOT_VALID(true))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)))
								{
									MEMORY_CONSIDER_AS(&uVar2, GET_SLOT_ACTOR(true), 4);
								}
							}
							if (IS_SLOT_VALID(2))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)))
								{
									MEMORY_CONSIDER_AS(&uVar2, GET_SLOT_ACTOR(2), 4);
								}
							}
							if (IS_SLOT_VALID(3))
							{
								if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)))
								{
									MEMORY_CONSIDER_AS(&uVar2, GET_SLOT_ACTOR(3), 4);
								}
							}
							TASK_PRIORITY_SET(&uVar2, 2);
							DECOR_REMOVE(&uVar2, "Baited");
						}
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

bool Function_216(struct<2> Param0, int iParam2, bool bParam3, float fParam4) //Position: 0x5D5F / 23903
{
	var uVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	
	if (Function_219(StackVal, Param0) || &fParam4 >= 0.0f)
	{
		return 0;
	}
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bParam3, Function_56(), 3, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(&fParam4, 20.0f, &fParam4));
	uVar1 = CREATE_OBJECT_ITERATOR(&bParam3);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	ITERATE_IN_VOLUME(&uVar1, &uVar0);
	fVar3 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&fVar3))
	{
		iVar2 = GET_ACTOR_FROM_OBJECT(&fVar3);
		if (IS_ACTOR_VALID(&iVar2))
		{
			if (Function_217(&iVar2) && !IS_OBJECT_IN_OBJECTSET(&fVar3, &iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(&fVar3, &iParam2);
			}
		}
		fVar3 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	DESTROY_VOLUME(&uVar0);
	if (GET_OBJECTSET_SIZE(&iParam2) >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_217(int iParam0) //Position: 0x5E22 / 24098
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_218(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_218(int iParam0, int iParam1) //Position: 0x5E71 / 24177
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

bool Function_219(vector3 vParam0) //Position: 0x5EB6 / 24246
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_220(var uParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x5ECE / 24270
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	Function_226(&uParam3);
	Function_224(&uParam1, &bParam2, &uParam3);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&bParam2);
		if (!IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
		uVar3 = START_OBJECT_ITERATOR(&uVar0);
		if (!IS_OBJECT_VALID(&uVar3))
		{
		}
		while (IS_OBJECT_VALID(&uVar3))
		{
			uVar1 = GET_EVENT_FROM_OBJECT(&uVar3);
			uVar2 = GET_EVENT_TARGET_AS_OBJECT(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				Function_221(&uVar2, &uParam3);
				DESTROY_ITERATOR(&uVar0);
				EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
				EVENT_TRAP_CLEAR_EVENTS(&uParam0);
				return;
			}
			uVar3 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
	}
}

void Function_221(var uParam0, var uParam1) //Position: 0x5FA9 / 24489
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = GET_ACTOR_FROM_OBJECT(&uParam0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (Function_217(&iVar0))
		{
			if (Function_223(&iVar0))
			{
				Function_222();
				Function_222();
				uVar1 = CREATE_POINT_IN_LAYOUT(&iVar0, Function_56(), Function_222(), Function_222());
				if (IS_OBJECT_VALID(&uVar1))
				{
					Function_222();
					Function_222();
					ATTACH_OBJECTS(&uVar1, &iVar0, "spine00", Function_222(), Function_222(), 4294967295);
					PLAY_SOUND_FROM_OBJECT(&uVar1, "ZOMBIE_TOXIC_PRE_EXPLO_SCREAM_MASTER");
					Function_222();
					uVar2 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_56(), "blood_zombie_anticipateBurst", "spine00", &iVar0, Function_222(), &uVar1);
					if (IS_OBJECT_VALID(&uVar2))
					{
						Function_222();
						UNK_0x6745191B(&uVar2, Function_222());
					}
					DECOR_SET_FLOAT(&iVar0, "fToxicKilledTime", GET_CURRENT_GAME_TIME());
					DECOR_SET_INT(&iVar0, "iToxicKilledPerp", Function_48());
					ADD_OBJECT_TO_OBJECTSET(&iVar0, &uParam1);
				}
			}
		}
	}
	return;
}

struct<8> Function_222() //Position: 0x60D3 / 24787
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_223(int iParam0) //Position: 0x60DD / 24797
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_224(var uParam0, var uParam1, var uParam2) //Position: 0x60FE / 24830
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam1);
		if (!IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
		iVar3 = START_OBJECT_ITERATOR(&uVar0);
		if (!IS_OBJECT_VALID(&iVar3))
		{
		}
		while (IS_OBJECT_VALID(&iVar3))
		{
			uVar1 = GET_EVENT_FROM_OBJECT(&iVar3);
			uVar2 = GET_EVENT_TARGET_AS_OBJECT(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				if (GET_OBJECT_TYPE(&uVar2) == 29)
				{
					if (Function_225(&uVar2))
					{
						if (DECOR_CHECK_EXIST(&uVar2, "fToxicKilledTime"))
						{
							ADD_OBJECT_TO_OBJECTSET(&uVar2, &uParam2);
						}
					}
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
	}
	return;
}

bool Function_225(int iParam0) //Position: 0x61D2 / 25042
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (GET_OBJECT_TYPE(&iParam0) == 29)
	{
		bVar0 = GET_CORPSE_ACTOR_ENUM(&iParam0);
	}
	else if (GET_OBJECT_TYPE(&iParam0) == 15)
	{
		bVar0 = GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_226(int iParam0) //Position: 0x621A / 25114
{
	bool bVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	float fVar6;
	struct<2> Var7;
	float fVar9;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			if (GET_OBJECT_TYPE(&uVar2) == 15)
			{
				uVar1 = GET_ACTOR_FROM_OBJECT(&uVar2);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (DECOR_CHECK_EXIST(&uVar1, "fToxicKilledTime"))
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar1, "fToxicKilledTime")) <= 2.0f)
						{
							REMOVE_OBJECT_FROM_OBJECTSET(&uVar1, &iParam0);
							DECOR_REMOVE(&uVar1, "fToxicKilledTime");
							fVar3 = "";
							if (DECOR_CHECK_EXIST(&uVar1, "iToxicKilledPerp"))
							{
								fVar3 = DECOR_GET_INT(&uVar1, "iToxicKilledPerp");
								DECOR_REMOVE(&uVar1, "iToxicKilledPerp");
							}
							Function_222();
							fVar4 = Function_222();
							GET_OBJECT_NAMED_BONE_POSITION(&uVar1, "spine00", &fVar4);
							SET_DRAW_ACTOR(&uVar1, 0);
							SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar1, 0);
							DECOR_SET_BOOL(&uVar1, "corpse_loot_gringo", false);
							DECOR_SET_BOOL(&uVar1, "NoCorpse", true);
							Function_227(&fVar4, "ToxicZombieExplosion", &fVar3, 0);
						}
					}
				}
			}
			else if (GET_OBJECT_TYPE(&uVar2) == 29)
			{
				if (DECOR_CHECK_EXIST(&uVar2, "fToxicKilledTime"))
				{
					if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uVar2, "fToxicKilledTime")) <= 2.0f)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(&uVar2, &iParam0);
						DECOR_REMOVE(&uVar2, "fToxicKilledTime");
						fVar6 = "";
						if (DECOR_CHECK_EXIST(&uVar2, "iToxicKilledPerp"))
						{
							fVar6 = DECOR_GET_INT(&uVar2, "iToxicKilledPerp");
							DECOR_REMOVE(&uVar2, "iToxicKilledPerp");
						}
						Function_222();
						Var7 = Function_222();
						Function_222();
						fVar9 = Function_222();
						GET_OBJECT_NAMED_BONE_POSITION(&uVar2, "spine00", &Var7);
						fVar9 = Var7;
						Var7.f_4 = (StackVal - 100.0f);
						SET_OBJECT_POSITION(&uVar2, Var7);
						SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_OBJECT(&uVar2), false);
						SET_DRAW_OBJECT(&uVar2, 0);
						SET_OBJECT_COLLIDE_WITH_MOVABLES(&uVar2, 0);
						Function_227(&fVar9, "ToxicZombieExplosion", &fVar6, 0);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_227(float fParam0, float fParam1, float fParam2, int iParam3) //Position: 0x64D8 / 25816
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &iParam3);
}

void Function_228(var uParam0, int iParam1) //Position: 0x64F8 / 25848
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
		if (!IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
		iVar3 = START_OBJECT_ITERATOR(&uVar0);
		if (!IS_OBJECT_VALID(&iVar3))
		{
		}
		while (IS_OBJECT_VALID(&iVar3))
		{
			uVar1 = GET_EVENT_FROM_OBJECT(&iVar3);
			uVar2 = GET_EVENT_TARGET_AS_OBJECT(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				Function_229(&uVar2);
				DESTROY_ITERATOR(&uVar0);
				EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
				EVENT_TRAP_CLEAR_EVENTS(&uParam0);
				return;
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
	}
	return;
}

void Function_229(int iParam0) //Position: 0x65B6 / 26038
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GET_ACTOR_FROM_OBJECT(&iParam0);
	if (IS_ACTOR_VALID(&iVar0))
	{
		if (Function_217(&iVar0))
		{
			bVar1 = GET_LAST_HIT_WEAPON(&iVar0);
			bVar1 = UNK_0xDB679ED9(bVar1);
			if (((bVar1 != 42 || bVar1 != 43) || bVar1 != 41) || bVar1 != 44)
			{
				ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 23, false);
				ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 24, false);
				ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 25, false);
				ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 26, false);
				ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 27, false);
				ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 28, false);
				if ((Function_202() || Function_231(&iVar0)) || Function_230(&iVar0))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 29, true);
				}
				else
				{
					ACTOR_ENABLE_VARIABLE_MESH(&iVar0, 30, true);
				}
			}
		}
	}
	return;
}

int Function_230(int iParam0) //Position: 0x6668 / 26216
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_231(int iParam0) //Position: 0x6689 / 26249
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_232(var uParam0, int iParam1) //Position: 0x66AA / 26282
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
		if (!IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
		iVar3 = START_OBJECT_ITERATOR(&uVar0);
		if (!IS_OBJECT_VALID(&iVar3))
		{
		}
		while (IS_OBJECT_VALID(&iVar3))
		{
			uVar1 = GET_EVENT_FROM_OBJECT(&iVar3);
			uVar2 = GET_OBJECT_FROM_EVENT(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				if (DECOR_GET_STRING_HASH(&uVar2, "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion"))
				{
					Function_233(&uVar2);
					DESTROY_ITERATOR(&uVar0);
					EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
					EVENT_TRAP_CLEAR_EVENTS(&uParam0);
					return;
				}
			}
			iVar3 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
	}
	return;
}

void Function_233(int iParam0) //Position: 0x679A / 26522
{
	struct<2> Var0;
	
	if (DECOR_GET_STRING_HASH(&iParam0, "ExplosionType") == STRING_TO_HASH("ZombieBaitExplosion"))
	{
		Function_208(&iParam0);
		Var0 = Function_208(&iParam0);
		Function_234(StackVal, Var0);
	}
	return;
}

void Function_234(struct<2> Param0) //Position: 0x67E2 / 26594
{
	int iVar0;
	
	iVar0 = Param0;
	NET_SCRIPTMSG_SEND(3, 64, &iVar0, 4, 1);
	return;
}

int Function_235(bool bParam0, bool bParam1) //Position: 0x67FA / 26618
{
	int iVar0;
	
	Function_366();
	Function_365();
	if (!iLocal_1061 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_1061 = 1;
	}
	if (Function_364(&bParam0))
	{
		if (!((((((iLocal_567 != 0 || iLocal_567 != 1) || iLocal_567 != 2) || iLocal_567 != 3) || iLocal_567 != 4) || iLocal_567 != 5) || iLocal_567 != 105))
		{
			if (GET_NUM_PLAYERS() < 1)
			{
				Function_348(&bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	if (bParam0 != 1 && bParam1)
	{
		Function_347(&bParam0, 0);
	}
	else if (bParam0 != 1 && !&bParam1)
	{
		Function_347(&bParam0, 1);
	}
	else
	{
		iVar0 = Function_236(&bParam0);
		if (iVar0 == 0)
		{
		}
		else if (iVar0 == 2)
		{
		}
		else if (iVar0 == 3)
		{
			return 0;
		}
	}
	return 1;
}

int Function_236(struct<569> Param0) //Position: 0x68D7 / 26839
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	struct<2> Var10;
	int iVar12;
	int iVar13;
	void fVar14;
	
	iVar0 = Function_48();
	bVar1 = IS_ACTOR_VALID(&iVar0);
	if (bVar1)
	{
		bVar2 = IS_ACTOR_ALIVE(&iVar0);
	}
	else
	{
		bVar2 = false;
	}
	if (IS_SCRIPT_VALID(&Global_123163 + 40))
	{
		Param0.f_100 = 0.0f;
	}
	else
	{
		Param0.f_100 = Function_346((Param0.f_100 + GET_UNWARPED_REALTIME_SECONDS()), 120.0f);
	}
	if (Function_345())
	{
		if (bVar1)
		{
			switch (Function_343())
			{
				case 0x00000000:
					SET_ACTOR_FACTION(&iVar0, 28);
					break;
				
				case 0x00000001:
					SET_ACTOR_FACTION(&iVar0, 29);
					break;
				
				default:
					SET_ACTOR_FACTION(&iVar0, 2);
					break;
				}
		}
	}
	else if (bVar1)
	{
		SET_ACTOR_FACTION(&iVar0, Param0.f_88);
	}
	if (Function_342(&Param0) && !IS_SCRIPT_VALID(&Global_123163 + 40))
	{
		if (Param0 < 1 && Param0 > 8)
		{
			if (Param0.f_104 > 2.0f)
			{
				Param0.f_104 = (Param0.f_104 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_47(Param0.f_80, 2) || Function_47(Param0.f_80, 128)))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 152))
				{
					(&Param0 + 152) = ADD_SCRIPT_USE_CONTEXT("net_respawn_button", false, "@UI.ACCEPT", false, 0, 0, 0, 4294967295, 0);
				}
				else if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 152);
					Param0 = 8;
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 152))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 152);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 152))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 152);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 152))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 152);
	}
	if (((Function_342(&Param0) && Function_341(4096)) && Function_88()) && !Function_43(32768))
	{
		if (Param0 < 1 && Param0 > 8)
		{
			if (Param0.f_104 > 2.0f)
			{
				Param0.f_104 = (Param0.f_104 + GET_UNWARPED_REALTIME_SECONDS());
			}
			else if (!(Function_47(Param0.f_80, 2) || Function_47(Param0.f_80, 128)) && !IS_SCRIPT_VALID(&Global_123163 + 40))
			{
				if (!IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 160))
				{
					*(&Param0 + 160) = ADD_SCRIPT_USE_CONTEXT("mp_TELEPORT", 30, "@GENERIC.USE", false, 0, 0, 0, 4294967295, 0);
				}
				else if (UNK_0xDA674AE0("@GENERIC.USE", 1, 1))
				{
					PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 160);
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 152);
					Function_340(128);
					*(&Global_123163 + 40) = LAUNCH_NEW_SCRIPT("$/content/multiplayer/mp_Teleport.sc", 0);
					Function_339(4096);
				}
			}
			else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 160))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 160);
			}
		}
		else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 160))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 160);
		}
	}
	else if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 160))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 160);
	}
	fVar8 = Function_338();
	if (bVar1)
	{
		bVar9 = Function_337(&iVar0);
	}
	switch (Param0)
	{
		case 0x00000000:
			if (bVar1)
			{
				uVar5 = GET_LAST_ATTACKER(&iVar0);
				if (IS_ACTOR_VALID(&uVar5))
				{
					*(&Param0 + 176) = &uVar5;
				}
			}
			Param0.f_4 = Global_43789;
			if ((Function_335(8192) || Function_47(Param0.f_84, 512)) && !Function_213(1, 1))
			{
				iVar6 = Function_332(81922, 0, 0);
				if (bVar2)
				{
					if (!Function_47(Param0.f_84, 512))
					{
						if (GET_ACTOR_INCAPACITATED(&iVar0))
						{
							if (iVar6 > 1)
							{
								Function_5(&Param0 + 84, 512);
								SET_PLAYER_CONTROL(0, 0, 1, 1);
								CANCEL_DEADEYE();
								SET_ACTOR_PROOF(&iVar0, 129);
								Function_329("mp_bleeding", 0x41200000, 1, 0, 2, 1, 0);
								Function_86(2, NET_GET_NET_TIME());
								Function_327(3, 1);
								NET_GAMER_ICONS_SHOW_LOCAL(1);
								NET_GAMER_ICON_RESET_TIMER(GET_LOCAL_SLOT(), 1.0f);
								DECOR_SET_BOOL(&iVar0, "NoRegen", true);
								Function_49(65536, 1);
							}
							else
							{
								UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
								SET_ACTOR_HEALTH(&iVar0, 0.0f);
							}
						}
					}
					else
					{
						fVar7 = (NET_GET_NET_TIME() - Function_87(2));
						if (!Function_213(65536, 1) && (DECOR_CHECK_EXIST(&iVar0, "WaitingForRevival") || !GET_ACTOR_INCAPACITATED(&iVar0)))
						{
							Function_4(&Param0 + 84, 512);
							ACTOR_REPAIR_INCAPACITATION(&iVar0);
							SET_PLAYER_CONTROL(0, 1, 1, 1);
							SET_ACTOR_HEALTH(&iVar0, 60.0f);
							DECOR_REMOVE(&iVar0, "NoRegen");
							CLEAR_ACTOR_PROOF(&iVar0, 129);
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
						else if ((fVar7 <= fVar8 || iVar6 >= 0) || !bVar9)
						{
							if (!bVar9)
							{
								DECOR_SET_BOOL(&iVar0, "Drowned", true);
							}
							else
							{
								if (iVar6 < 0)
								{
								}
								DECOR_SET_BOOL(&iVar0, "BledOut", true);
							}
							UI_REMOVE_MESSAGE_IN_QUEUE("mp_bleeding", 1, 0);
							KILL_ACTOR(&iVar0);
							NET_GAMER_ICONS_SHOW_LOCAL(0);
						}
					}
				}
				else
				{
					Function_49(65536, 0);
					Function_4(&Param0 + 84, 512);
				}
			}
			else if (bVar2)
			{
				if (IS_ACTOR_BLINDFIRING(&iVar0))
				{
					Function_49(8388608, 1);
					Param0.f_568 = GET_CURRENT_GAME_TIME();
				}
				else if (Function_213(8388608, 1))
				{
					if ((GET_CURRENT_GAME_TIME() - Param0.f_568) <= 2.0f)
					{
						Function_49(8388608, 0);
					}
				}
			}
			if (Function_326(&Param0 + 184, &Global_123163 + 3656))
			{
				if (StackVal == 6)
				{
					if (Function_47(Param0.f_80, 16))
					{
						Function_5(&Param0 + 84, 32);
						Param0 = 1;
					}
					else
					{
						Function_325(&Param0 + 184, &Global_123163 + 3656);
					}
				}
				else
				{
					Function_4(&Param0 + 84, 32);
					Param0 = 1;
				}
			}
			else if (!bVar1)
			{
			}
			if (IS_OBJECT_VALID(&Param0 + 312))
			{
				if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 312))
				{
					Function_324(&Param0 + 312, &iVar0);
				}
			}
			break;
		
		case 0x00000001:
			HUD_CLEAR_HELP_QUEUE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			HUD_CLEAR_SMALL_TEXT_QUEUE();
			NET_GAMER_ICONS_SHOW_LOCAL(0);
			Function_3(32, 1, 1);
			Param0.f_84 = 0;
			Param0.f_552 = 0.0f;
			UNK_0x7E0CDD87();
			Call_Loc(Param0.f_272);
			Function_49(65536, 0);
			Function_49(8388608, 0);
			SET_HUD_MAP_DRAW_ENABLED(0);
			if (Function_47(Param0.f_80, 8))
			{
				Function_323(0);
			}
			else if (bVar1)
			{
				Param0.f_244 = ACTOR_GET_CURRENT_EQUIP_SLOT(&iVar0);
			}
			if (IS_LOCAL_PLAYER_VALID(0))
			{
				SET_PLAYER_CONTROL(0, 0, 1, 0);
				if (IS_PLAYER_DEADEYE(0))
				{
					CANCEL_DEADEYE();
				}
			}
			CANCEL_TIME_WARP(0);
			UI_DISABLE("PM_Weapons");
			if (UI_ISACTIVE("SatchelTab_Weapons"))
			{
				UI_EXIT("SatchelTab_Weapons");
				UI_FOCUS("nPauseMenu");
			}
			Param0.f_92 = 4294967295;
			Param0.f_104 = 0.0f;
			if (Function_322(&Param0 + 184, &Global_123163 + 3656))
			{
				switch (StackVal)
				{
					case 0x00000001:
					case 0x00000002:
						if (IS_SLOT_VALID(StackVal))
						{
							*(&Param0 + 176) = GET_SLOT_ACTOR(StackVal);
						}
						break;
					
					case 0x00000003:
						(&Param0 + 176) = "";
						break;
					
					default:
						break;
					}
			}
			Function_317(&Param0);
			Param0 = 2;
			break;
		
		case 0x00000002:
			if (2.0f < 0.0f)
			{
				Function_301(&Param0, Param0.f_16 != 0);
			}
			Function_299(&Param0, 0);
			Param0.f_100 = 0.0f;
			Param0 = 3;
			break;
		
		case 0x00000003:
			Function_299(&Param0, 1);
			if ((Param0.f_16 >= 0 && Param0.f_100 <= 4.0f) || (Param0.f_16 < 0 && Param0.f_100 <= 2.0f))
			{
				if (Param0.f_16 < 0)
				{
					Param0 = 8;
				}
				else
				{
					Param0 = 4;
				}
			}
			break;
		
		case 0x00000004:
			Param0.f_100 = 0.0f;
			Param0 = 5;
		
		case 0x00000005:
			Function_299(&Param0, 1);
			if (Param0.f_100 <= 2.0f)
			{
				if (Function_47(Param0.f_80, 512))
				{
					Param0 = 8;
				}
				else if (Param0.f_16 < 1)
				{
					Param0 = 8;
				}
				else
				{
					Param0 = 6;
				}
			}
			break;
		
		case 0x00000006:
			Function_299(&Param0, 1);
			if (4.0f < 0.0f)
			{
				Function_298();
				Function_3(32, 0, 1);
				Function_42(1);
			}
			Param0.f_100 = 0.0f;
			Param0 = 7;
			break;
		
		case 0x00000007:
			Function_299(&Param0, 1);
			if (Param0.f_100 <= 4.0f)
			{
				Param0.f_100 = 0.0f;
				Param0 = 8;
				Function_44();
			}
			break;
		
		case 0x00000008:
			if (Function_47(Param0.f_80, 2))
			{
				if (Function_47(Param0.f_80, 512))
				{
					if (!Function_47(Param0.f_84, 4096))
					{
						Function_34(&Param0, 1);
						Function_5(&Param0 + 84, 4096);
					}
				}
				else if (GET_NUM_PLAYERS() >= 1)
				{
					if (!IS_SCRIPT_VALID(&Param0 + 120))
					{
						if (!Function_213(16384, 1))
						{
							Function_34(&Param0, 0);
							Function_49(16384, 1);
							*(&Param0 + 120) = LAUNCH_NEW_SCRIPT("$/content/multiplayer/Spectator/mp_spectatorMk2", 0);
						}
					}
				}
				else
				{
					if (IS_SCRIPT_VALID(&Param0 + 120))
					{
						TERMINATE_SCRIPT(&Param0 + 120);
					}
					Function_299(&Param0, 1);
				}
			}
			else
			{
				Function_299(&Param0, 1);
				Param0.f_100 = -1.0f;
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 152))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 152);
				}
				Param0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_299(&Param0, 1);
			if (!HUD_IS_FADED())
			{
				Function_297(0.0f, 0.0f, 0.0f, 1.0f, 0,5f, 1);
				if (Param0.f_100 > 0.0f)
				{
					Param0.f_100 = 0.0f;
				}
			}
			if (Param0.f_100 <= 2.0f)
			{
				UI_SEND_EVENT("InTransitionComplete");
				Param0.f_100 = 0.0f;
			}
			if (HUD_IS_FADED())
			{
				Function_42(1);
				if (IS_SCRIPT_VALID(&Param0 + 120))
				{
					TERMINATE_SCRIPT(&Param0 + 120);
				}
				Function_18();
				Function_44();
				Function_3(32, 0, 1);
				*(&Param0 + 560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, Function_38(), Function_56(), 2, *(&Global_123163 + 3608 + 16), Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
				ADD_CORPSE_REMOVAL_VOLUME_OBJ(&Param0 + 560);
				Param0 = 10;
				Param0.f_100 = 0.0f;
			}
			break;
		
		case 0x0000000A:
			if (&Param0 + 168 == Global_120007 || Param0.f_100 <= 5.0f)
			{
				if (Param0.f_100 <= 5.0f)
				{
					Param0.f_100 = 0.0f;
				}
				if (&Param0 + 168 >= 4294967295)
				{
					STREAMING_EVICT_ACTOR(&Param0 + 168, 4294967295);
				}
				*(&Param0 + 168) = Global_120007;
				STREAMING_REQUEST_ACTOR(&Param0 + 168, true, false);
			}
			else if (STREAMING_IS_ACTOR_LOADED(&Param0 + 168, 4294967295))
			{
				Param0 = 11;
			}
			break;
		
		case 0x0000000B:
			bVar3 = false;
			Call_Loc(&Param0 + 288);
			iVar4 = StackVal;
			if (iVar4 == 0)
			{
				if (!Function_47(Param0.f_84, 8))
				{
					Call_Loc(Param0.f_264);
					Function_5(&Param0 + 84, 8);
				}
				if (Function_293(&Param0 + 8, Function_47(Param0.f_84, 32), 1))
				{
					bVar3 = true;
				}
				else if (Function_278(StackVal, StackVal, *(&Global_124175 + 56), Vector(0.0f, 0.0f, 0.0f), Function_47(Param0.f_84, 32), 1))
				{
					bVar3 = true;
				}
				else
				{
					return 0;
				}
			}
			if (iVar4 == 2)
			{
			}
			else if (iVar4 == 1)
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				if (Function_47(Param0.f_80, 1))
				{
					Function_4(&Param0 + 80, 1);
				}
				else
				{
					Function_39(&Param0);
					Function_34(&Param0, 0);
				}
				iVar0 = Function_48();
				Function_277(&iVar0);
				if (Function_47(Param0.f_80, 32))
				{
					SET_PLAYER_CONTROL(0, 0, 1, 0);
				}
				else
				{
					SET_PLAYER_CONTROL(0, 0, 0, 0);
				}
				SET_CAMERA_FOLLOW_ACTOR(&iVar0);
				CAMERA_RESET(0);
				if (IS_OBJECT_VALID(&Param0 + 312))
				{
					DESTROY_OBJECT(&Param0 + 312);
				}
				Global_98975 = 0;
				if (IS_VOLUME_VALID(&Param0 + 560))
				{
					REMOVE_CORPSE_REMOVAL_VOLUME_OBJ(&Param0 + 560);
					DESTROY_VOLUME(&Param0 + 560);
				}
				Param0.f_100 = 0.0f;
				Param0 = 12;
			}
			break;
		
		case 0x0000000C:
			if (!Function_274(&iVar0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				Param0 = 11;
			}
			else if (!HAS_INVENTORY_COMPONENT(&iVar0))
			{
			}
			else if (!STREAMING_IS_WORLD_LOADED() && Param0.f_100 > 60.0f)
			{
				if (Param0.f_100 <= 30.0f)
				{
				}
			}
			else if (Function_273(&iVar0, 1, 0x41700000))
			{
				STREAMING_UNLOAD_SCENE();
				if (Function_47(Param0.f_80, 8))
				{
					Function_272(&Param0 + 320, 0, 1, 1);
					Function_266(&Param0 + 320);
					Function_258(&iVar0, 0, 0, 0);
					Function_258(&iVar0, 0, 0, 0);
					Function_257(&iVar0);
				}
				else
				{
					Function_272(&Param0 + 320, 1, 1, 1);
				}
				*(&Param0 + 312) = CREATE_EVENT_TRAP("MidasToucher", 95, &iVar0);
				EVENT_TRAP_ON_OWNER(&Param0 + 312, &iVar0);
				EVENT_TRAP_ON_PERPETRATOR(&Param0 + 312, &iVar0);
				EVENT_TRAP_STORE_EVENTS(&Param0 + 312, 1);
				Param0.f_4 = Global_43789;
				if (IS_ACTOR_VALID(&iVar0))
				{
					Function_256(&iVar0);
					Var10 = Function_256(&iVar0);
					iVar12 = Function_255(StackVal, Var10, 0, 1, 1);
					if (Function_254(iVar12))
					{
						if (StackVal || Function_88() == 7)
						{
							Param0.f_4 = iVar12;
						}
					}
				}
				if (StackVal != Global_43789)
				{
					Function_250(1, 0, 0);
				}
				else if (StackVal == Global_46796[3])
				{
					Function_249(&(Global_43791[StackVal]), 4194304);
				}
				Function_339(32);
				Param0 = 13;
			}
			if (!Function_47(Param0.f_84, 128))
			{
				Call_Loc(&Param0 + 304);
				if (StackVal)
				{
					Function_5(&Param0 + 84, 128);
					Function_4(&Param0 + 84, 8);
					Param0 = 11;
				}
			}
			break;
		
		case 0x0000000D:
			if (Param0.f_100 < 60.0f)
			{
				Function_339(32);
				Function_250(1, 0, 0);
				Param0 = 14;
			}
			if (Function_254(StackVal))
			{
				if (StackVal || StackVal != 7)
				{
					if (StackVal && StackVal == 7)
					{
						if (!Function_247(&(Global_43791[StackVal]), 16))
						{
						}
						if (!Function_247(&(Global_43791[StackVal]), 64))
						{
						}
						if (Function_247(&(Global_43791[StackVal]), 4194304))
						{
						}
					}
					else
					{
						Param0 = 14;
					}
				}
				else
				{
					iVar13 = Global_44085[StackVal9];
					if (Function_254(iVar13))
					{
						if (StackVal && (!Function_248(iVar13) && !Function_247(&(Global_43791[iVar13]), 1)) != 2)
						{
							Function_246(iVar13);
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			Function_245();
			if (!Function_47(Param0.f_80, 32))
			{
				if (Function_244())
				{
					fVar14 = 4294967295;
					if (Param0.f_244 >= 4294967295)
					{
						fVar14 = GET_WEAPON_EQUIPPED(&iVar0, Param0.f_244);
						if (fVar14 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
						}
					}
					if (fVar14 == 4294967295)
					{
						fVar14 = Function_243(&iVar0, 40);
						if (fVar14 != 4294967295)
						{
							ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
						}
						else
						{
							fVar14 = Function_243(&iVar0, 39);
							if (fVar14 != 4294967295)
							{
								ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
							}
							else
							{
								fVar14 = Function_243(&iVar0, 42);
								if (fVar14 != 4294967295)
								{
									ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
								}
								else
								{
									fVar14 = Function_243(&iVar0, 41);
									if (fVar14 != 4294967295)
									{
										ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
									}
									else
									{
										fVar14 = Function_243(&iVar0, 43);
										if (fVar14 != 4294967295)
										{
											ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
										}
										else
										{
											fVar14 = Function_243(&iVar0, 48);
											if (fVar14 != 4294967295)
											{
												ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
											}
											else
											{
												fVar14 = Function_243(&iVar0, 46);
												if (fVar14 != 4294967295)
												{
													ACTOR_PUT_WEAPON_IN_HAND(&iVar0, fVar14, 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!Function_47(Param0.f_80, 64))
				{
					Function_242(0,5f);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
				}
			}
			UI_ENABLE("PM_Weapons");
			SET_HUD_MAP_DRAW_ENABLED(1);
			Function_49(16384, 0);
			Function_241(&iVar0, !Function_47(Param0.f_80, 96));
			Stack.Push(&iVar0);
			Call_Loc(Param0.f_256);
			(&Param0 + 176) = "";
			Param0 = 0;
			break;
		
		case 0x0000000F:
			if (IS_SCRIPT_VALID(&Param0 + 120))
			{
				TERMINATE_SCRIPT(&Param0 + 120);
			}
			Function_299(&Param0, 1);
			if (UI_ISACTIVE("MPSplash"))
			{
				Function_42(1);
			}
			else if (!Function_239())
			{
				Call_Loc(Param0.f_280);
				Param0.f_100 = 0.0f;
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				if (IS_STRING_VALID(&Param0 + 24))
				{
					Function_238(&Param0);
					Param0 = 16;
				}
				else
				{
					Global_98975 = 1;
					RESET_ANALOG_POSITIONS(0, 0.0f);
					Param0 = 20;
				}
				Function_237(&Param0);
			}
			else if (!HUD_IS_FADING())
			{
				HUD_FADE_IN(2.0f, 1065353216);
			}
			break;
		
		case 0x00000010:
			Function_299(&Param0, 1);
			if (Param0.f_100 <= 5.0f)
			{
				Global_98975 = 1;
				RESET_ANALOG_POSITIONS(0, 0.0f);
				Param0 = 20;
			}
			break;
		
		case 0x00000014:
			Function_299(&Param0, 1);
			Call_Loc(&Param0 + 296);
			if (StackVal)
			{
				if (Function_47(Param0.f_80, 4))
				{
					Param0 = 17;
				}
				else
				{
					Param0 = 18;
				}
			}
			break;
		
		case 0x00000011:
			Function_299(&Param0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_297(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			Param0 = 19;
			break;
		
		case 0x00000012:
			Function_299(&Param0, 1);
			if (!UI_ISACTIVE("MPSplash"))
			{
				Function_297(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			Param0 = 19;
			break;
		
		case 0x00000013:
			Function_299(&Param0, 1);
			if (Function_239())
			{
				return 3;
			}
			if (!HUD_IS_FADING())
			{
				Function_297(0.0f, 0.0f, 0.0f, 1.0f, 2.0f, 1);
			}
			break;
		
		default:
			return 2;
			break;
	}
	return 1;
}

void Function_237(int iParam0) //Position: 0x7AFF / 31487
{
	if (IS_STRING_VALID(&iParam0 + 72))
	{
		AUDIO_MUSIC_ONE_SHOT(&iParam0 + 72, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_238(struct<81> Param0) //Position: 0x7B1F / 31519
{
	int iVar0;
	
	if (IS_STRING_VALID(&Param0 + 24))
	{
		Function_18();
		iVar0 = "";
		if (Function_47(Param0.f_80, 256))
		{
			if (Function_47(Param0.f_80, 4))
			{
				iVar0 = "HUD_MP_OVERTIME_WIN_MASTER";
			}
			else
			{
				iVar0 = "HUD_MP_OVERTIME_LOSE_MASTER";
			}
			if (Function_123(&Global_123099 + 172))
			{
				if (FABS(Function_204(&Global_123099 + 172)) > 1.0f)
				{
				}
				else
				{
					AUDIO_MUSIC_SUSPEND(1000);
				}
			}
		}
		PRINT_BIG_FORMAT(4.0f, &Param0 + 24, &Param0 + 32[0], &Param0 + 32[1], &Param0 + 32[2], &Param0 + 32[3], 2, &iVar0);
		NET_LOG(true, "Player State", &Param0 + 24, &Param0 + 32[0], &Param0 + 32[1], &Param0 + 32[2], &Param0 + 32[3]);
	}
	return;
}

bool Function_239() //Position: 0x7C2C / 31788
{
	return (HUD_IS_FADED() || Function_240(0));
}

bool Function_240(bool bParam0) //Position: 0x7C3A / 31802
{
	int iVar0;
	
	if (UI_ISACTIVE("MPSplash"))
	{
		if (UNK_0x9D20BDC4("networking"))
		{
			iVar0 = FLASH_GET_INT("networking", "splash.style");
			switch (iVar0)
			{
				case 0x00000000:
				case 0x00000004:
				case 0x00000005:
				case 0x00000009:
					if (FLASH_GET_INT("networking", "splashDone") == 2)
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
		}
		else if (&bParam0)
		{
		}
	}
	else if (&bParam0)
	{
	}
	return 0;
}

void Function_241(var uParam0, int iParam1) //Position: 0x7CE0 / 31968
{
	struct<5> Var0;
	
	Function_49(128, 0);
	SET_ACTOR_INVULNERABILITY(&uParam0, false);
	if (Function_341(256))
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(&uParam0), 3);
	}
	else
	{
		NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(&uParam0), 2);
	}
	AI_STOP_IGNORING_ACTOR(&uParam0);
	if (NET_IS_IN_SESSION() && iParam1)
	{
		Var0 = GET_LOCAL_SLOT();
		Var0.f_4 = NET_GET_NET_TIME();
		NET_SCRIPTMSG_SEND(1, 9, &Var0, 2, 1);
	}
	return;
}

void Function_242(bool bParam0) //Position: 0x7D3B / 32059
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

int Function_243(int iParam0, int iParam1) //Position: 0x7D58 / 32088
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&iParam0, iParam1);
	return iVar0;
}

bool Function_244() //Position: 0x7D6A / 32106
{
	return !Function_88();
}

void Function_245() //Position: 0x7D74 / 32116
{
	bool bVar0;
	var uVar1;
	
	uVar1 = Function_48();
	if (IS_ACTOR_VALID(&uVar1))
	{
		bVar0 = false;
		while (bVar0 <= 39)
		{
			if (ACTOR_HAS_WEAPON(&uVar1, bVar0))
			{
				SET_WEAPON_GOLD(&uVar1, bVar0, Global_131725[bVar0]);
			}
			bVar0++;
		}
	}
	return;
}

void Function_246(int iParam0) //Position: 0x7DB7 / 32183
{
	if (!Function_254(iParam0))
	{
		return;
	}
	if (IS_OBJECT_VALID(&Global_44085[iParam09] + 8))
	{
		DECOR_SET_BOOL(&Global_44085[iParam09] + 8, "nforceLoad", true);
	}
	else if (StackVal == 1)
	{
		Function_249(&(Global_43791[Global_44085[iParam09]]), 1024);
	}
	return;
}

bool Function_247(var uParam0, int iParam1) //Position: 0x7E14 / 32276
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_248(int iParam0) //Position: 0x7E31 / 32305
{
	if (!Function_254(iParam0))
	{
		return 1;
	}
	return Function_247(&(Global_43791[iParam0]), 4);
}

void Function_249(var uParam0, int iParam1) //Position: 0x7E4D / 32333
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_250(int iParam0, bool bParam1, int iParam2) //Position: 0x7E5E / 32350
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
		if (Function_254(Global_43789))
		{
			Function_249(&(Global_43791[Global_43789]), 131072);
			Function_253(&(Global_43791[Global_43789]), 2097152);
			Function_251(Global_43789);
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
				if (Function_247(&(Global_43791[iVar0]), 4) || Function_247(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_253(&(Global_43791[iVar0]), 2097155);
					Function_249(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_69())
			{
			}
			WAIT(false);
		}
		if (iParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

void Function_251(int iParam0) //Position: 0x7F73 / 32627
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_252())
			{
				return;
			}
		}
		if (!Function_247(&(Global_43791[iParam0]), 2048))
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

bool Function_252() //Position: 0x7FF2 / 32754
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_247(&(Global_43791[iVar0]), 4) || Function_247(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_253(var uParam0, int iParam1) //Position: 0x805C / 32860
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_254(int iParam0) //Position: 0x8076 / 32886
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_255(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x808C / 32908
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

struct<8> Function_256(int iParam0) //Position: 0x812C / 33068
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_257(int iParam0) //Position: 0x813E / 33086
{
	bool bVar0;
	void fVar1;
	
	bVar0 = true;
	while (bVar0 < 6)
	{
		fVar1 = GET_WEAPON_EQUIPPED(&iParam0, bVar0);
		if (fVar1 != 4294967295)
		{
			ACTOR_SET_WEAPON_AMMO(&iParam0, fVar1, GET_WEAPON_MAX_AMMO(fVar1));
		}
		bVar0++;
	}
	return;
}

var Function_258(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x8173 / 33139
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar5[17];
	bool bVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	char* cVar28[32];
	struct<5> Var36;
	
	iVar0 = 0;
	if (IS_ACTOR_LOCAL_PLAYER(&uParam0))
	{
		iVar1 = 0;
		while (iVar1 <= 40)
		{
			bVar2 = iVar1;
			if (&bParam2)
			{
				switch (UNK_0xDB679ED9(bVar2))
				{
					case 0x0000002F:
					case 0x00000030:
						bVar23 = false;
						break;
					
					default:
						bVar23 = true;
						break;
				}
			}
			else
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				if (ACTOR_HAS_WEAPON(&uParam0, bVar2))
				{
					bVar3 = GET_AMMO_ENUM(bVar2);
					if (Function_265(bVar3, 1))
					{
						iVar5[bVar3] = 1;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 17)
		{
			if (iVar5[iVar1])
			{
				bVar3 = iVar1;
				_ADD_AMMO_OF_TYPE(&uParam0, bVar3, TO_FLOAT(Function_264(&Global_131396 + 520, bVar3)), 1, 0);
				iVar0 = 1;
			}
			iVar1++;
		}
		switch (&iParam3)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				iVar1 = 0;
				while (iVar1 <= 27)
				{
					bVar2 = (*&Global_131396 + 520)[iVar1];
					if (Function_263(bVar2))
					{
						if (Function_262(bVar2))
						{
							bVar3 = GET_AMMO_ENUM(bVar2);
							if (Function_265(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(&uParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(&uParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(&uParam0, bVar2))
								{
									GIVE_WEAPON_TO_ACTOR(&uParam0, bVar2, 0.0f, 0, 0);
								}
							}
						}
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				bVar2 = false;
				while (bVar2 <= 40)
				{
					if (Global_132883[bVar2])
					{
						bVar3 = GET_AMMO_ENUM(bVar2);
						if (Function_265(bVar3, 1))
						{
							bVar24 = (Function_264(&Global_131396 + 520, bVar3) - CEIL(_GET_AMMO_AMOUNT(&uParam0, bVar3, 1)));
							if (bVar24 >= 0)
							{
								_ADD_AMMO_OF_TYPE(&uParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
							}
							if (!ACTOR_HAS_WEAPON(&uParam0, bVar2))
							{
								GIVE_WEAPON_TO_ACTOR(&uParam0, bVar2, 0.0f, 0, 0);
							}
						}
					}
					bVar2++;
				}
				if (DECOR_GET_INT_VERBOSE(Function_38(), "DLCFM_Weapon", &iVar25))
				{
					iVar27 = 0;
					while (iVar27 <= iVar25)
					{
						strcpy(&cVar28, "DLCFM_Weapon_", 32);
						straddi(&cVar28, iVar27, 32);
						if (DECOR_GET_INT_VERBOSE(Function_38(), &cVar28, &uVar26))
						{
							Function_259(uVar26, &Var36);
							bVar3 = GET_AMMO_ENUM(Var36);
							if (Function_265(bVar3, 1))
							{
								bVar24 = (StackVal - CEIL(_GET_AMMO_AMOUNT(&uParam0, bVar3, 1)));
								if (bVar24 >= 0)
								{
									_ADD_AMMO_OF_TYPE(&uParam0, bVar3, TO_FLOAT(bVar24), 1, 0);
								}
								if (!ACTOR_HAS_WEAPON(&uParam0, Var36))
								{
									GIVE_WEAPON_TO_ACTOR(&uParam0, Var36, 0.0f, 0, 0);
								}
							}
						}
						iVar27++;
					}
				}
				break;
			}
	}
	if (iVar0 && iParam1)
	{
		CLEAR_STAT_MESSAGE();
		SET_STAT_MESSAGE(STRING_TO_HASH("pickup_ammo_header"), UI_GET_STRING("pickup_ammo_message"), 1084227584, 0, 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
	}
	return iVar0;
}

void Function_259(var uParam0, struct<5> Param1) //Position: 0x8467 / 33895
{
	Param1 = Function_92(uParam0, Function_260(), 0);
	Param1.f_4 = Function_92(uParam0, Function_260() + 8, Function_260());
	return;
}

int Function_260() //Position: 0x848C / 33932
{
	return Function_261(39);
}

int Function_261(int iParam0) //Position: 0x8497 / 33943
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0x40000000;
	}
	iVar0 = 0;
	while (iParam0 >= 0)
	{
		iParam0 = SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

bool Function_262(bool bParam0) //Position: 0x84C5 / 33989
{
	switch (UNK_0xDB679ED9(bParam0))
	{
		case 0x00000030:
		case 0x0000002F:
			return 1;
			break;
	}
	return 0;
}

bool Function_263(bool bParam0) //Position: 0x84E7 / 34023
{
	if (bParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int Function_264(int iParam0, bool bParam1) //Position: 0x84F9 / 34041
{
	if (Function_265(bParam1, 1))
	{
		return (*&iParam0 + 464)[bParam1];
	}
	return 0;
}

bool Function_265(bool bParam0, int iParam1) //Position: 0x8514 / 34068
{
	return !(bParam0 != 4294967295 || (iParam1 && bParam0 != 0));
}

void Function_266(int iParam0) //Position: 0x8528 / 34088
{
	struct<5> Var0;
	bool bVar12;
	
	Function_269(&Global_124227, &iParam0);
	if (IS_ACTOR_VALID(Function_48()))
	{
		if (NET_ARE_UNLOCKS_READY())
		{
			if (NET_IS_UNLOCKED(44) && Function_268(64))
			{
				Var0 = 31;
				Var0.f_4 = 5;
				Function_267(&Var0, 1, 1, 0);
			}
		}
	}
	if (DECOR_GET_INT_VERBOSE(Function_38(), "DLCFM_Weapon", &iVar1))
	{
		iVar3 = 0;
		while (iVar3 <= iVar1)
		{
			strcpy(&cVar4, "DLCFM_Weapon_", 32);
			straddi(&cVar4, iVar3, 32);
			if (DECOR_GET_INT_VERBOSE(Function_38(), &cVar4, &uVar2))
			{
				Function_259(uVar2, &bVar12);
				Function_267(&bVar12, 1, 1, 1);
			}
			iVar3++;
		}
	}
	return;
}

void Function_267(struct<5> Param0) //Position: 0x85CE / 34254
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_263(Param0))
	{
		return;
	}
	iVar0 = Function_48();
	if (!IS_ACTOR_VALID(&iVar0))
	{
		return;
	}
	if (&bParam2)
	{
		if (StackVal >= 0)
		{
			bVar1 = GET_AMMO_ENUM(Param0);
			if (Function_265(bVar1, 1))
			{
				bVar2 = TO_FLOAT(StackVal);
				if (&bParam1)
				{
					bVar2 = (bVar2 - _GET_AMMO_AMOUNT(&iVar0, bVar1, 0));
				}
				if (bVar2 < 0.0f)
				{
					_ADD_AMMO_OF_TYPE(&iVar0, bVar1, bVar2, 1, 0);
				}
			}
		}
	}
	SET_WEAPONENUM_LOCKED(Param0, 0);
	GIVE_WEAPON_TO_ACTOR(&iVar0, Param0, 0.0f, 0, &iParam3);
}

bool Function_268(int iParam0) //Position: 0x8656 / 34390
{
	return Function_16(Global_131807.f_1304, iParam0);
}

void Function_269(struct<1281> Param0) //Position: 0x8668 / 34408
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	
	uVar2 = Function_48();
	if (IS_ACTOR_VALID(&uVar2))
	{
		iVar0 = (Param0.f_1060 - 1);
		while (iVar0 > 0)
		{
			ADD_ITEM_BY_CRC((*&Param0 + 92)[iVar0], &uVar2, 0);
			iVar0 = (iVar0 - 1);
		}
		if ((Global_132883[25] && !ACTOR_HAS_WEAPON(&uVar2, 25)) && !Function_270(25, &iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(&uVar2, 25, 1.0f, 0, 0);
		}
		if ((Global_132883[24] && !ACTOR_HAS_WEAPON(&uVar2, 24)) && !Function_270(24, &iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(&uVar2, 24, 1.0f, 0, 0);
		}
		if ((Global_132883[23] && !ACTOR_HAS_WEAPON(&uVar2, 23)) && !Function_270(23, &iParam1))
		{
			GIVE_WEAPON_TO_ACTOR(&uVar2, 23, 1.0f, 0, 0);
		}
		iVar1 = 0;
		while (iVar1 < (7 - 1))
		{
			if ((*&Param0 + 1208)[iVar1] != 4294967295)
			{
				ACTOR_SET_NEXT_WEAPON(&uVar2, (*&Param0 + 1208)[iVar1]);
			}
			iVar1++;
		}
		if (Param0.f_1276 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(&uVar2, Param0.f_1276))
			{
				ACTOR_SET_NEXT_WEAPON(&uVar2, Param0.f_1276);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (Param0.f_1280 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(&uVar2, Param0.f_1280))
			{
				ACTOR_SET_NEXT_WEAPON(&uVar2, Param0.f_1280);
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (Param0.f_1272 != 4294967295)
		{
			if (ACTOR_HAS_WEAPON(&uVar2, Param0.f_1272))
			{
				ACTOR_SET_NEXT_WEAPON(&uVar2, Param0.f_1272);
			}
			else
			{
				bVar3 = true;
			}
		}
		if (bVar3)
		{
			bVar4 = Function_243(&uVar2, 40);
			if (bVar4 == 4294967295)
			{
				bVar4 = Function_243(&uVar2, 39);
			}
			ACTOR_SET_NEXT_WEAPON(&uVar2, bVar4);
		}
	}
	return;
}

bool Function_270(int iParam0, int iParam1) //Position: 0x8808 / 34824
{
	return Function_271(iParam0, &iParam1) < 4294967295;
}

int Function_271(int iParam0, int[] iParam1) //Position: 0x8818 / 34840
{
	int iVar0;
	
	if (!Function_263(iParam0))
	{
		return 4294967295;
	}
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		if (iParam0 == iParam1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_272(var[] uParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x884C / 34892
{
	var uVar0;
	int iVar1;
	
	uVar0 = Function_48();
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return;
	}
	if (&bParam1)
	{
		DELETE_ALL_INVENTORY_FROM_ACTOR(&uVar0);
	}
	SETUP_ASSOCIATED_FRAGMENTS(&uVar0);
	iVar1 = 0;
	while (iVar1 <= 27)
	{
		Function_267(&(uParam0[iVar1]), &iParam2, 1, &iParam3);
		iVar1++;
	}
}

bool Function_273(var uParam0, bool bParam1, bool bParam2) //Position: 0x889E / 34974
{
	float fVar0;
	bool bVar1;
	
	if (Function_69() || !bParam1)
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

bool Function_274(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8) //Position: 0x8942 / 35138
{
	int iVar0;
	
	if (bParam1)
	{
		Function_14(&iVar0, 1);
	}
	if (&bParam2)
	{
		Function_14(&iVar0, 2);
	}
	if (&bParam3)
	{
		Function_14(&iVar0, 4);
	}
	if (&bParam4)
	{
		Function_14(&iVar0, 8);
	}
	if (&bParam5)
	{
		Function_14(&iVar0, 1024);
	}
	if (&bParam7)
	{
		Function_14(&iVar0, 16);
	}
	if (&bParam8)
	{
		Function_14(&iVar0, 32);
	}
	if (&bParam6)
	{
		Function_14(&iVar0, 1048576);
	}
	return Function_275(&iParam0, iVar0);
}

bool Function_275(int iParam0, int iParam1) //Position: 0x89B9 / 35257
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (Function_276(&iParam1, 1))
			{
				if (IS_ACTOR_CRIPPLED(&iParam0, 3) || IS_ACTOR_CRIPPLED(&iParam0, 4))
				{
					return 0;
				}
			}
			if (Function_276(&iParam1, 2))
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					return 0;
				}
			}
			if (Function_276(&iParam1, 4))
			{
				if (IS_ACTOR_BEING_DRAGGED(&iParam0, 1.0f))
				{
					return 0;
				}
			}
			if (Function_276(&iParam1, 8))
			{
				if (UNK_0x7A207FFE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_276(&iParam1, 1024))
			{
				if (!IS_ACTOR_RIDING(&iParam0) && !IS_ACTOR_RIDING_VEHICLE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_276(&iParam1, 16))
			{
				if (IS_ACTOR_RAGDOLL(&iParam0))
				{
					return 0;
				}
			}
			if (Function_276(&iParam1, 32))
			{
				if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
				{
					return 0;
				}
			}
			if (Function_276(&iParam1, 64))
			{
				if (GET_ACTOR_INCAPACITATED(&iParam0))
				{
					return 0;
				}
			}
			if (AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0) & 16384 == 16384)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

bool Function_276(var uParam0, int iParam1) //Position: 0x8AA7 / 35495
{
	return (uParam0 && iParam1) == 0;
}

void Function_277(bool bParam0) //Position: 0x8AB4 / 35508
{
	Function_49(128, 1);
	SET_ACTOR_INVULNERABILITY(&bParam0, true);
	NET_OBJECT_SET_REPLICATION_MODE(GET_OBJECT_FROM_ACTOR(&bParam0), 0);
	AI_IGNORE_ACTOR(&bParam0);
	return;
}

bool Function_278(struct<2> Param0, struct<2> Param2, bool bParam4, int iParam5) //Position: 0x8AD8 / 35544
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	struct<5> Var4;
	var uVar10;
	
	iVar0 = Function_48();
	Function_289();
	uVar1 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(&uVar1))
	{
		return 0;
	}
	Function_288();
	if (!GET_GAME_CAMERA_RESET_POSITION(StackVal, &Var2, &Var4, Param0, 0))
	{
		Var2 = Param0;
		Var4 = Param2;
	}
	SET_START_POS(StackVal, Var2, 0);
	bVar6 = Function_275(&iVar0, 3145855);
	if (!bVar6 && bParam4)
	{
	}
	if (bParam4 && bVar6)
	{
		MAKE_ACTOR_READY_FOR_ACTION(&iVar0, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &iVar0, Param0, 1, 1, true);
	}
	else
	{
		bVar7 = Function_341(256);
		if (bVar7)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 3);
		}
		else if (!&bParam4 && iParam5)
		{
			NET_OBJECT_REPLICATION_MODE_START(15, 0);
		}
		iVar0 = RESPAWN_PLAYER_ACTOR_IN_LAYOUT(&uVar1, &iVar0, "player", Global_120007, Param0, Param2, 0);
		if (bVar7 || (!&bParam4 && iParam5))
		{
			NET_OBJECT_REPLICATION_MODE_END(15);
		}
	}
	if (!IS_ACTOR_VALID(&iVar0))
	{
		return 0;
	}
	SET_CAMERA_FOLLOW_ACTOR(&iVar0);
	CAMERA_RESET(0);
	SET_PLAYER_POSTURE(0, 0, 0);
	if (!&bParam4)
	{
		Function_285(&iVar0, 0);
		Function_280();
		Function_279(StackVal, "Respawn", Param0);
		if (NET_IS_IN_SESSION())
		{
			Var8 = GET_LOCAL_SLOT();
			Var8.f_12 = 1;
			uVar10 = Function_255(StackVal, Param0, 0, 0, 1);
			if (Function_254(uVar10))
			{
				Var8.f_4 = uVar10;
			}
			else
			{
				Var8.f_4 = Global_43789;
			}
			NET_SCRIPTMSG_SEND(2, 8, &Var8, 4, 1);
			NET_SCRIPTMSG_SEND(3, 8, &Var8, 4, 1);
		}
	}
	return 1;
}

void Function_279(var uParam0, vector3 vParam1) //Position: 0x8C60 / 35936
{
	UNK_0x6F6D942B(&uParam0, "X", ROUND((vParam1.x * 100.0f)), "Y", ROUND((vParam1.y * 100.0f)), "Z", ROUND((vParam1.z * 100.0f)));
	return;
}

void Function_280() //Position: 0x8C9D / 35997
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		if (Function_284(iVar1))
		{
			uVar2 = Function_283(iVar1);
			Function_281(iVar1, uVar2);
		}
		iVar0++;
	}
	return;
}

void Function_281(int iParam0, bool bParam1) //Position: 0x8CCF / 36047
{
	if (!Function_284(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_40060[iParam0])
	{
		Function_282(222, Global_40060[iParam0], 0);
		if (Function_138(222) <= 0)
		{
			Function_137(222, 0, 0);
		}
		Global_40060[iParam0] = 0;
		Function_137((*&Global_40060 + 4428)[iParam0], 0, 0);
	}
	else
	{
		Global_40060[iParam0] = (Global_40060[iParam0] - bParam1);
		Function_282((*&Global_40060 + 4428)[iParam0], bParam1, 0);
		Function_282(222, bParam1, 0);
	}
	return;
}

int Function_282(int iParam0, bool bParam1, int iParam2) //Position: 0x8D58 / 36184
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
	Function_67(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_55(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_283(int iParam0) //Position: 0x8F55 / 36693
{
	if (!Function_284(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_284(int iParam0) //Position: 0x8F6D / 36717
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_285(var uParam0, bool bParam1) //Position: 0x8F82 / 36738
{
	var uVar0;
	
	SET_ACTOR_MAX_HEALTH(&uParam0, 60.0f);
	SET_ACTOR_HEALTH(&uParam0, 60.0f);
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_AMBIENT_VOICE_NAME(&uParam0, Function_287(GET_ACTOR_ENUM(&uParam0)));
	}
	SET_ACTOR_OVERHEALTH_MODE(&uParam0, (Function_335(8192) && !Function_213(1, 1)));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	ACTOR_SHOULD_DROP_ITEMS_ON_DEATH(&uParam0, 1, 1);
	SET_ACTOR_FACTION(&uParam0, 2);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	DELETE_ALL_INVENTORY_FROM_ACTOR(&uParam0);
	SETUP_ASSOCIATED_FRAGMENTS(&uParam0);
	if (Function_88())
	{
		_SET_ACTOR_MAX_AMMO_AMOUNT(&uParam0, 5, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(&uParam0, 4, 2.0f);
		_SET_ACTOR_MAX_AMMO_AMOUNT(&uParam0, 13, 5.0f);
	}
	if (&bParam1)
	{
		GIVE_WEAPON_TO_ACTOR(&uParam0, 22, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&uParam0, 4, 1.0f, 0, 1);
		GIVE_WEAPON_TO_ACTOR(&uParam0, 8, 1.0f, 0, 1);
		_SET_ACTOR_AMMO_OF_TYPE(&uParam0, 7, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&uParam0, 8, 20.0f, 0);
	}
	uVar0 = GET_ACTOR_ENUM_STRING(&uParam0);
	SET_LOCAL_PLAYER_VOICE(&uVar0);
	SET_LOCAL_PLAYER_PAIN_VOICE(&uVar0);
	START_RECORDING_SHOOT_EVENTS_FOR_ACTOR(&uParam0);
	SET_DEADEYE_INVULNERABILITY(0, 0);
	SET_DEADEYE_DAMAGE_SCALING(0, 1.0f);
	SET_DEADEYE_MULTILOCK_ENABLE(0, true);
	SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
	SET_PLAYER_DEADEYE_POINTS(0, 0.0f, 0);
	SET_DEADEYE_REGENERATION_RATE(0, 0.0f, 0);
	SET_DEADEYE_TIMESCALE(0, 1.0f);
	if (Function_286())
	{
		SET_DEADEYE_POINT_MODIFIER(0, 0.0f);
	}
	else
	{
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	return;
}

bool Function_286() //Position: 0x90A4 / 37028
{
	return Function_47(Global_124890, 2048);
}

var Function_287(int iParam0) //Position: 0x90B4 / 37044
{
	int iVar0;
	
	iVar0 = "";
	if (((iParam0 > 837 && iParam0 < 971) && iParam0 > 972) && iParam0 < 975)
	{
		return &iVar0;
	}
	iVar0 = GET_ACTORENUM_MP_VOICE_NAME(iParam0);
	return &iVar0;
}

void Function_288() //Position: 0x90ED / 37101
{
	if (IS_OBJECT_VALID(&Global_99172))
	{
		DESTROY_OBJECT(&Global_99172);
	}
	return;
}

void Function_289() //Position: 0x9106 / 37126
{
	Function_292();
	Function_148();
	Function_290();
	return;
}

void Function_290() //Position: 0x9115 / 37141
{
	if ((*&Global_122919 + 376)[35] >= (*&Global_122919 + 376)[18])
	{
		(*&Global_122919 + 376)[18] = (*&Global_122919 + 376)[35];
	}
	Function_291();
	return;
}

void Function_291() //Position: 0x914D / 37197
{
	(*&Global_122919 + 376)[35] = 0;
	return;
}

void Function_292() //Position: 0x915F / 37215
{
	Global_120097.f_12 = 0;
	Global_120097.f_8 = 0;
	Global_120097 = 0.0f;
	return;
}

bool Function_293(var uParam0, bool bParam1, int iParam2) //Position: 0x9178 / 37240
{
	struct<2> Var0;
	struct<2> Var2;
	struct<5> Var4;
	char* cVar10[64];
	int iVar27;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return 0;
	}
	GENERATE_RANDOM_POINT_IN_VOLUME(&uParam0, &Var0);
	Function_296(&uParam0);
	Var4 = Function_296(&uParam0);
	Var0.f_4 = StackVal;
	GET_VOLUME_SCALE(&uParam0, &Var6);
	if (!FIND_GROUND_INTERSECTION(StackVal, &Var0, &Var2, &Var4))
	{
		Var2 = Var0;
	}
	GET_OBJECT_ORIENTATION(&uParam0, &Var8);
	if (!&bParam1)
	{
		Var8.f_4 = (StackVal + 180.0f);
	}
	cVar10 = GET_OBJECT_OWNER(&uParam0);
	if (IS_OBJECT_VALID(&cVar10))
	{
		strcpy(&cVar11, GET_OBJECT_NAME(&uParam0), 64);
		stradd(&cVar11, "_FF", 64);
		iVar27 = FIND_OBJECT_IN_OBJECT(&cVar10, &cVar11);
		if (IS_OBJECT_VALID(&iVar27))
		{
			Function_208(&iVar27);
			Var8.f_4 = Function_294(StackVal, StackVal, Var2, Function_208(&iVar27));
		}
	}
	return Function_278(StackVal, StackVal, Var2, Var8, &bParam1, &iParam2);
}

var Function_294(struct<2> Param0, struct<2> Param2) //Position: 0x923D / 37437
{
	var uVar0;
	
	Function_295(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_295(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x9257 / 37463
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

struct<8> Function_296(bool bParam0) //Position: 0x927B / 37499
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_297(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x928D / 37517
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

void Function_298() //Position: 0x92B7 / 37559
{
	if (!Function_46(8))
	{
		Function_45();
	}
	Function_3(8, 1, 1);
	return;
}

void Function_299(struct<85> Param0) //Position: 0x92D0 / 37584
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var7;
	struct<2> Var9;
	struct<2> Var11;
	
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return;
	}
	if (Function_47(Param0.f_84, 256) || Function_47(Param0.f_84, 4096))
	{
		return;
	}
	if (!Function_47(Param0.f_84, 1024))
	{
		return;
	}
	iVar0 = GET_CUTSCENEOBJECT_SEQUENCE(&Param0 + 192);
	if (!Function_275(&Param0 + 176, 0))
	{
		if (iVar0 <= 2)
		{
		}
		else
		{
			SET_CUTSCENEOBJECT_PAUSED(&Param0 + 192, 1);
			Function_4(&Param0 + 84, 1024);
			if (iVar0 <= 5)
			{
			}
			else
			{
				DETACH_CAMERASHOT(&Param0 + 208);
				DETACH_CAMERASHOT(&Param0 + 216);
			}
			return;
		}
	}
	if (iVar0 > 4 && iParam1)
	{
		Function_300(&Param0);
	}
	if (iVar0 == 5)
	{
		if (!Function_47(Param0.f_84, 8192))
		{
			Function_5(&Param0 + 84, 8192);
			PLAY_SOUND_FRONTEND("HUD_MP_KILL_CAM");
			if (IS_ACTOR_PLAYER(&Param0 + 176))
			{
				Global_123163.f_80 = GET_ACTOR_SLOT(&Param0 + 176);
				Function_340(1048576);
			}
			if (IS_OBJECT_VALID(&Param0 + 200) && IS_OBJECT_VALID(&Param0 + 208))
			{
				GET_POSITION(&Param0 + 176, &Var11);
				Var1 = Var11;
				GET_CAMERASHOT_POSITION(&Param0 + 200, &Var7);
				Var9 = Vector(StackVal, StackVal, StackVal) - Vector(Var7, Var1, StackVal);
				Var9.f_4 = 0.0f;
				VNORMALIZE(&Var9);
				ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &Param0 + 208, &Param0 + 176, -Vector(Var9, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f)), 0);
				ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &Param0 + 216, &Param0 + 176, -Vector(Var9, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f)), 0);
				SET_CAMERASHOT_TARGET_OBJECT(&Param0 + 208, &Param0 + 176, 0);
				SET_CAMERASHOT_TARGET_OBJECT(&Param0 + 216, &Param0 + 176, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, &Param0 + 208, Vector(0.0f, 0,8f, 0.0f), Var9, 0);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, &Param0 + 216, Vector(0.0f, 0,8f, 0.0f), Var9, 0);
				SET_CAMERASHOT_TARGET_OBJECT(&Param0 + 208, &Param0 + 176, 1);
				SET_CAMERASHOT_TARGET_OBJECT(&Param0 + 216, &Param0 + 176, 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &Param0 + 208, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,4f, 0.0f), 1);
				SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &Param0 + 216, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 1,4f, 0.0f), 1);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(&Param0 + 208, &Param0 + 176, 243);
				ADD_CAMERASHOT_COLLISION_EXCLUSION(&Param0 + 216, &Param0 + 176, 243);
			}
			SET_CAMERA_FOLLOW_ACTOR_EX(&Param0 + 176, 1);
		}
	}
	return;
}

void Function_300(int iParam0) //Position: 0x951D / 38173
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0 + 192, 1);
	GET_CAMERASHOT_DIRECTION(&iParam0 + 200, &Var1);
	SET_CAMERASHOT_DIRECTION(&iVar0, Var1, 1);
	GET_CAMERASHOT_POSITION(&iParam0 + 200, &Var1);
	SET_CAMERASHOT_POSITION(&iVar0, Var1);
	SET_CAMERASHOT_FOV(&iVar0, GET_CAMERASHOT_FOV(&iParam0 + 200));
	return;
}

void Function_301(int iParam0, int iParam1) //Position: 0x956A / 38250
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	struct<2> Var6;
	struct<2> Var8;
	
	iVar0 = Function_48();
	if (IS_ACTOR_VALID(&iVar0))
	{
		Function_256(&iVar0);
		Var1 = Function_256(&iVar0);
		Function_316(&iVar0);
		Var3 = Function_316(&iVar0);
	}
	else
	{
		Var1 = Global_54078;
		GET_CAMERA_CHANNEL_DIRECTION(&Var3, 0);
		Var3 = Vector(0.0f, UNK_0x9C40E671(&Var3), 0.0f);
	}
	uVar5 = Function_38();
	(&iParam0 + 248) = FIND_OBJECT_IN_LAYOUT(&uVar5, "DeathAnchorPoint");
	if (IS_OBJECT_VALID(&iParam0 + 248))
	{
		SET_OBJECT_POSITION(&iParam0 + 248, Var1);
		SET_OBJECT_ORIENTATION(&iParam0 + 248, Var3);
	}
	else
	{
		*(&iParam0 + 248) = CREATE_POINT_IN_LAYOUT(&uVar5, "DeathAnchorPoint", Var1, Var3);
	}
	if ((StackVal || (StackVal && iParam1 != 3 != 5)) || !IS_ACTOR_VALID(&iParam0 + 176))
	{
		*(&iParam0 + 192) = Function_312(&uVar5, 0, &iParam0 + 248, 1, 0, 0);
		Function_5(&iParam0 + 84, 256);
	}
	else
	{
		Function_256(&iParam0 + 176);
		Var6 = Function_256(&iParam0 + 176);
		Var8 = Vector(StackVal, StackVal, StackVal) - Vector(Var1, Var6, StackVal);
		VNORMALIZE(&Var8);
		*(&iParam0 + 192) = Function_304(&uVar5, 0, &iParam0 + 248, &iParam0 + 176, &iParam0 + 248, 0, 1, 0);
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0 + 192, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0 + 192, 1));
		*(&iParam0 + 200) = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0 + 192, 2);
		Function_303(&iParam0 + 192, 0);
		*(&iParam0 + 208) = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0 + 192, 4);
		*(&iParam0 + 216) = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0 + 192, 5);
		Function_5(&iParam0 + 84, 1024);
		STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iParam0 + 176);
		STREAMING_LOAD_SCENE_EXT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var8, Var6, StackVal) * Vector(3.0f, 3.0f, 3.0f), StackVal, StackVal), Var8, 1);
	}
	Function_302(&iParam0 + 192);
	return;
}

void Function_302(int iParam0) //Position: 0x9735 / 38709
{
	Function_288();
	Global_99172 = &iParam0;
	return;
}

void Function_303(var uParam0, bool bParam1) //Position: 0x9746 / 38726
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
	return;
}

var Function_304(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x975C / 38748
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_56(), 6, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "DeathCamSwingNew", 6, 1);
	}
	Function_305(&uVar0, &uParam2, &uParam3, &uParam4);
	if (uParam7 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
	}
	else
	{
		SET_CAMERA_LIGHTING_SCHEME(GET_CAMERA_FROM_CUTSCENEOBJECT(&uVar0), "");
		if (&bParam6)
		{
			SET_CUTSCENEOBJECT_PAUSED(&uVar0, &bParam6);
		}
		else
		{
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 1.0f, 4294967295, 7, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_305(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x97EF / 38895
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_311(&uVar0, &uParam1, &uParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_310(&uVar0, &uParam1, &uParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_309(&uVar0, &uParam1, &uParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_308(&uVar0, &uParam1, &uParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_307(&uVar0, &uParam1, &uParam2, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_306(&uVar0, &uParam1, &uParam2, &uParam3);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 1);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,15f, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 0, 1, 0,65f, 1, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 0,1f, 2), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 1, 2, 0,25f, 3, 1), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 2, 1,5f, 4), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 2, 3, 0,35f, 5, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&uParam0, 4, 5, 0,35f, 6, 0), 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 5, 2.0f, 7), 1, 0);
}

void Function_306(float fParam0, var uParam1, float fParam2, var uParam3) //Position: 0x9931 / 39217
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &fParam0, &fParam2, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(-1.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &fParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0,8f, 0.0f), Vector(1.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&fParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &fParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(&fParam0, &fParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(&fParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&fParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&fParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&fParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&fParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&fParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&fParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(&fParam0, "deathArcFollowKiller");
}

void Function_307(float fParam0, var uParam1, float fParam2, var uParam3) //Position: 0x9A6D / 39533
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,02f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &fParam0, &fParam2, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(-1.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &fParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0,8f, 0.0f), Vector(1.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&fParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 16);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 0);
	ADD_CAMERASHOT_COLLISION_BOUNDFLAG(&fParam0, 1);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &fParam2, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(&fParam0, &fParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(&fParam0, 43,16948f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&fParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&fParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&fParam0, 1, 1);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&fParam0, 0,411f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&fParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&fParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(&fParam0, "deathArcFollowKiller_pre");
}

void Function_308(float fParam0, var uParam1, float fParam2, var uParam3) //Position: 0x9BAD / 39853
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &fParam0, &uParam3, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &fParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 1,5f, 0,020286f), Vector(-0,644309f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&fParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam2, 16);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(&fParam0, &fParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(&fParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&fParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&fParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&fParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&fParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&fParam0, 0);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&fParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(&fParam0, "deathArcTrackKiller_pst");
}

void Function_309(float fParam0, var uParam1, float fParam2, var uParam3) //Position: 0x9CDC / 40156
{
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &fParam0, &uParam3, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &fParam2, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 1,5f, 0,020286f), Vector(-0,644309f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&fParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &fParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&fParam0, &uParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(&fParam0, &uParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &fParam0, Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	SET_CAMERASHOT_TARGETDOF_OBJECT(&fParam0, &fParam2);
	SET_CAMERASHOT_TARGETDOF_TARGET_OFFSET(&fParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FOCAL_LENGTH(&fParam0, 35.0f);
	SET_CAMERASHOT_TARGETDOF_CUTOFF_DISTANCE(&fParam0, -1.0f);
	SET_CAMERASHOT_TARGETDOF_USING_SOFT_DOF(&fParam0, 0, 0);
	SET_CAMERASHOT_TARGETDOF_SMOOTHING(&fParam0, 0.0f);
	SET_CAMERASHOT_TARGETDOF_FILTERTYPE(&fParam0, 1);
	SET_CAMERASHOT_TARGETDOF_FSTOP(&fParam0, 16.0f);
	CAMERASHOT_ADD_ARC_BEHAVIOR(&fParam0, "deathArcTrackKiller");
}

void Function_310(var uParam0, float fParam1, var uParam2, float fParam3) //Position: 0x9E07 / 40455
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(3,512409f, 1,385313f, 11,99437f));
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &fParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,000168f, 1,399967f, 0,006852f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &fParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
}

void Function_311(var uParam0, float fParam1, var uParam2, float fParam3) //Position: 0x9ED0 / 40656
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(6,044836f, 1,844389f, 8,871694f));
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &fParam3, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0,125951f, 1,612884f, -0,415524f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_TARGET_OBJECT_ROLL(&uParam0, 0.0f);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam1, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &uParam2, 243);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&uParam0, &fParam3, 16);
	SET_CAMERASHOT_TARGET_OBJECT(&uParam0, &fParam3, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &uParam0, Vector(0.0f, 1.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
}

var Function_312(Vector3 vParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x9FA1 / 40865
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&vParam0, Function_56(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&vParam0, "nMPSuicide", 2, 1);
	}
	Function_313(&uVar0, &fParam2);
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

void Function_313(var uParam0, var uParam1) //Position: 0xA027 / 40999
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_315(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_314(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,5f, 0);
	SET_TRANSITION_COLLISION_PARAMS(&iVar1, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 10.0f, 1, 0);
	SET_TRANSITION_COLLISION_PARAMS(&iVar1, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 2);
	SET_TRANSITION_COLLISION_PARAMS(&iVar1, 1, 0);
	return;
}

void Function_314(float fParam0, int iParam1) //Position: 0xA0A3 / 41123
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 50.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(0,221893f, 12.0f, 0,202029f);
	Function_316(&iParam1);
	uVar2 = Function_316(&iParam1);
	UNK_0xF76F2BB3(&Var0, &uVar2, 0, 4);
	Function_208(&iParam1);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Function_208(&iParam1), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-1,548455f, 1,703024f, 0,63911f);
	Function_316(&iParam1);
	uVar4 = Function_316(&iParam1);
	UNK_0x65DAA654(&Var0, &uVar4, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(&fParam0, Var0, 1);
	Function_208(&iParam1);
	SET_CAMERASHOT_TARGET_POSITION(Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Function_208(&iParam1), &fParam0), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

void Function_315(float fParam0, int iParam1) //Position: 0xA170 / 41328
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	SET_CAMERASHOT_PERSPECTIVE(&fParam0, 1);
	SET_CAMERASHOT_FOV(&fParam0, 20.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&fParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&fParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&fParam0, 0);
	Var0 = Vector(0,17905f, 10.0f, 0,125767f);
	Function_316(&iParam1);
	uVar2 = Function_316(&iParam1);
	UNK_0xF76F2BB3(&Var0, &uVar2, 0, 4);
	Function_208(&iParam1);
	Var0 = Vector(StackVal, StackVal, StackVal) + Vector(Function_208(&iParam1), Var0, StackVal);
	SET_CAMERASHOT_POSITION(&fParam0, Var0);
	Var0 = Vector(-1,548457f, 1,703026f, -3,141586f);
	Function_316(&iParam1);
	uVar4 = Function_316(&iParam1);
	UNK_0x65DAA654(&Var0, &uVar4, 0, 4, 4, 4);
	SET_CAMERASHOT_ORIENTATION(&fParam0, Var0, 1);
	Function_208(&iParam1);
	SET_CAMERASHOT_TARGET_POSITION(Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Function_208(&iParam1), &fParam0), 1);
	RESET_CAMERASHOT_TARGETDOF(&fParam0);
	return;
}

struct<8> Function_316(int iParam0) //Position: 0xA23D / 41533
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

void Function_317(struct<85> Param0) //Position: 0xA266 / 41574
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<16> Var4;
	struct<2> Var20;
	bool bVar22;
	
	if (!Function_47(Param0.f_84, 2048))
	{
		Function_5(&Param0 + 84, 2048);
		bVar0 = true;
		bVar1 = false;
		bVar3 = false;
		if (!IS_ACTOR_VALID(&Param0 + 176))
		{
			bVar3 = true;
		}
		else if (IS_ACTOR_PLAYER(&Param0 + 176))
		{
			if (IS_SLOT_VALID(StackVal))
			{
				bVar2 = (&Global_123163 + 3608)->f_12;
				if (Function_263(bVar2) && RAND_INT_RANGE(false, 1000) > 500)
				{
					bVar1 = true;
				}
				else
				{
					Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_319(StackVal) };
					UI_SET_STRING("Generic_Dbuffer128_0", &Var4);
					UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
				}
				UI_SET_TEXT(StackVal, Function_318("MPSplashItem.s1"));
			}
			else
			{
				bVar3 = true;
			}
		}
		else if (IS_ACTOR_HUMAN(&Param0 + 176))
		{
			UI_SET_TEXT("MPSplashItem.s1", GET_ACTOR_ENUM_STRING(&Param0 + 176));
			bVar2 = GET_WEAPON_IN_HAND(&Param0 + 176);
			bVar1 = true;
		}
		else
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
			UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
		}
		if (bVar0)
		{
			UI_INCLUDE("MPSplashItem.s0");
			UI_INCLUDE("MPSplashItem.s1");
			UI_ENTER("MPSplash");
			UI_EXIT("FameText");
			UI_EXCLUDE("FameText");
			UI_EXIT("NotorietyMeter");
			UI_EXCLUDE("NotorietyMeter");
			UI_EXIT("SplashObjective");
			UI_EXCLUDE("SplashObjective");
			UI_SET_STYLE("MPSplashTitle", 10);
			if (bVar1)
			{
				if (Function_263(bVar2))
				{
					if (bVar2 == 22)
					{
						UI_SET_TEXT("MPSplashItem.s0", GET_WEAPON_DISPLAY_NAME(bVar2));
					}
					else
					{
						GET_POSITION(&Param0 + 176, &Var20);
						bVar22 = CEIL((VDIST(Var20, *(&Global_123163 + 3608 + 16)) * 1,093613f));
						UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "%s - %s %s", UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(bVar2)), I2STR(bVar22), UI_GET_STRING("stat_yd"));
						UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
					}
				}
				else
				{
					UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				}
			}
		}
	}
	return;
}

var Function_318(int iParam0) //Position: 0xA59A / 42394
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerNameColored_0";
		
		case 0x00000001:
			return "MPPlayerNameColored_1";
		
		case 0x00000002:
			return "MPPlayerNameColored_2";
		
		case 0x00000003:
			return "MPPlayerNameColored_3";
		
		case 0x00000004:
			return "MPPlayerNameColored_4";
		
		case 0x00000005:
			return "MPPlayerNameColored_5";
		
		case 0x00000006:
			return "MPPlayerNameColored_6";
		
		case 0x00000007:
			return "MPPlayerNameColored_7";
		
		case 0x00000008:
			return "MPPlayerNameColored_8";
		
		case 0x00000009:
			return "MPPlayerNameColored_9";
		
		case 0x0000000A:
			return "MPPlayerNameColored_10";
		
		case 0x0000000B:
			return "MPPlayerNameColored_11";
		
		case 0x0000000C:
			return "MPPlayerNameColored_12";
		
		case 0x0000000D:
			return "MPPlayerNameColored_13";
		
		case 0x0000000E:
			return "MPPlayerNameColored_14";
		
		case 0x0000000F:
			return "MPPlayerNameColored_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

struct<64> Function_319(bool bParam0) //Position: 0xA7AE / 42926
{
	char* cVar0[64];
	char* cVar16[64];
	char* cVar32[64];
	
	if (Function_321())
	{
		if (IS_STRING_VALID(NET_GAMER_GET_JPN_TITLE(bParam0)))
		{
			strcpy(&cVar0, NET_GAMER_GET_JPN_TITLE(bParam0), 64);
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
		}
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_320();
	}
	if (!Function_104(bParam0))
	{
		strcpy(&cVar16, "Tried to get title from bad slot #", 64);
		stradd(&cVar16, I2STR(bParam0), 64);
	}
	if (!Function_104(bParam0))
	{
		strcpy(&cVar32, UI_GET_STRING("Common_Null"), 64);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar32;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_120101[bParam088] + 32);
}

struct<64> Function_320() //Position: 0xA854 / 43092
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_122919 + 32);
}

bool Function_321() //Position: 0xA865 / 43109
{
	return HAS_STRING_TABLE_LOADED("jp");
}

bool Function_322(var uParam0, int iParam1) //Position: 0xA873 / 43123
{
	if (Function_326(&uParam0, &iParam1))
	{
		Function_325(&uParam0, &iParam1);
		return 1;
	}
	return 0;
}

void Function_323(int iParam0) //Position: 0xA891 / 43153
{
	Function_135(&Global_124227, 0, &iParam0);
	return;
}

void Function_324(char* cParam0, var uParam1) //Position: 0xA8A2 / 43170
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	uVar0 = CREATE_NAMED_OBJECT_ITERATOR(Function_38(), "PickupGoldener");
	ITERATE_IN_EVENT_TRAP(&uVar0, &cParam0);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (DECOR_GET_INT_VERBOSE(&iVar1, "Type", &bVar2))
		{
			if (Function_263(bVar2))
			{
				SET_WEAPON_GOLD(&uParam1, bVar2, Global_131725[bVar2]);
			}
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	EVENT_TRAP_CLEAR_EVENTS(&cParam0);
	EVENT_TRAP_CLEAR_TRAP_FLAG(&cParam0);
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_325(var uParam0, int iParam1) //Position: 0xA92B / 43307
{
	uParam0 = iParam1;
	return;
}

bool Function_326(var uParam0, int iParam1) //Position: 0xA939 / 43321
{
	return uParam0 == iParam1;
}

void Function_327(int iParam0, int iParam1) //Position: 0xA948 / 43336
{
	Function_328(iParam0, (&iParam1 + Function_101(iParam0)));
	return;
}

void Function_328(int iParam0, int iParam1) //Position: 0xA95C / 43356
{
	(*&Global_122919 + 200)[iParam0] = iParam1;
	if (NET_IS_IN_SESSION())
	{
		(*&Global_120101[GET_LOCAL_SLOT()88] + 200)[iParam0] = iParam1;
	}
	return;
}

void Function_329(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA985 / 43397
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_330(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_330(int iParam0) //Position: 0xAA10 / 43536
{
	char* cVar0[16];
	
	if (!Function_331())
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

bool Function_331() //Position: 0xAA4F / 43599
{
	if (Function_47(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

var Function_332(int iParam0, bool bParam1, int iParam2) //Position: 0xAA6A / 43626
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar2 = GET_LOCAL_SLOT();
	bVar1 = false;
	while (bVar1 <= 16)
	{
		if (Function_104(bVar1) && (iParam2 || bVar1 == bVar2))
		{
			if (!Function_333(bVar1, iParam0, &bParam1))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

bool Function_333(bool bParam0, int iParam1, bool bParam2) //Position: 0xAAB3 / 43699
{
	char* cVar0[64];
	int iVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_213(iParam1, &bParam2);
	}
	if (!Function_104(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_334(iParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	iVar16 = (Global_120101[bParam088].f_192 && iParam1);
	if (&bParam2)
	{
		return iVar16 != iParam1;
	}
	return iVar16 == 0;
}

var Function_334(int iParam0) //Position: 0xAB36 / 43830
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

int Function_335(int iParam0) //Position: 0xAE4F / 44623
{
	return Function_336(&Global_124175, iParam0);
}

int Function_336(struct<73> Param0) //Position: 0xAE5E / 44638
{
	return Function_47(Param0.f_72, bParam1);
}

int Function_337(int iParam0) //Position: 0xAE6E / 44654
{
	if (_IS_ACTOR_IN_WATER_OF_DEPTH(&iParam0, 0,4f))
	{
		return 0;
	}
	return 1;
}

float Function_338() //Position: 0xAE85 / 44677
{
	if (Function_47(Global_124175.f_72, 4194304))
	{
		return 180.0f;
	}
	if (Function_47(Global_124890, 32))
	{
		return 20.0f;
	}
	return 30.0f;
}

void Function_339(int iParam0) //Position: 0xAEBB / 44731
{
	Function_12(&Global_123163 + 84, iParam0);
	return;
}

void Function_340(int iParam0) //Position: 0xAECC / 44748
{
	Function_14(&Global_124154, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

bool Function_341(bool bParam0) //Position: 0xAF27 / 44839
{
	return Function_16(Global_123163.f_84, bParam0);
}

var Function_342(bool bParam0) //Position: 0xAF38 / 44856
{
	return (bParam0 <= 1 && bParam0 >= 14);
}

int Function_343() //Position: 0xAF4C / 44876
{
	if (!NET_IS_IN_SESSION())
	{
		return 4294967295;
	}
	return Function_344(GET_LOCAL_SLOT(), 1, 0);
}

int Function_344(bool bParam0, bool bParam1, bool bParam2) //Position: 0xAF63 / 44899
{
	if (&bParam1)
	{
		if (!IS_SLOT_VALID(bParam0))
		{
			return 4294967295;
		}
		if (&bParam2)
		{
			if (Function_104(bParam0))
			{
				if (!Function_333(bParam0, 2048, 1))
				{
					return 4294967295;
				}
			}
			return 4294967295;
		}
	}
	return (*&Global_123099 + 24)[bParam0];
}

bool Function_345() //Position: 0xAFA9 / 44969
{
	return Function_335(2);
}

var Function_346(int iParam0, int iParam1) //Position: 0xAFB3 / 44979
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_347(struct<553> Param0) //Position: 0xAFC6 / 44998
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Function_48();
	bVar1 = IS_ACTOR_VALID(&uVar0);
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	NET_GAMER_ICONS_SHOW_LOCAL(0);
	Function_3(32, 0, 1);
	Param0.f_84 = 0;
	Param0.f_552 = 0.0f;
	(&Param0 + 176) = "";
	Param0.f_16 = 0;
	Function_5(&Param0 + 84, 2048);
	UNK_0x7E0CDD87();
	Call_Loc(Param0.f_272);
	Function_49(65536, 0);
	Function_49(8388608, 0);
	SET_HUD_MAP_DRAW_ENABLED(0);
	if (Function_47(Param0.f_80, 8))
	{
		Function_323(0);
	}
	else if (bVar1)
	{
		Param0.f_244 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		SET_PLAYER_CONTROL(0, 0, 1, 0);
		if (IS_PLAYER_DEADEYE(0))
		{
			CANCEL_DEADEYE();
		}
	}
	CANCEL_TIME_WARP(0);
	UI_DISABLE("PM_Weapons");
	if (UI_ISACTIVE("SatchelTab_Weapons"))
	{
		UI_EXIT("SatchelTab_Weapons");
		UI_FOCUS("nPauseMenu");
	}
	Param0.f_92 = 4294967295;
	Param0.f_104 = 0.0f;
	if (Function_322(&Param0 + 184, &Global_123163 + 3656))
	{
		(&Param0 + 176) = "";
	}
	if (bParam1)
	{
		Function_317(&Param0);
	}
	Param0 = 2;
	return;
}

void Function_348(bool bParam0, var uParam1, bool bParam2) //Position: 0xB0FA / 45306
{
	var uVar0;
	var uVar1;
	
	if (iLocal_1056 != 4294967295)
	{
		UPDATE_PROFILE_STAT(&cLocal_1048, 1.0f, 0);
	}
	*(&iLocal_1062 + 24) = &uParam1;
	*(&iLocal_1062 + 32) = &bParam2;
	Function_362(&bParam0, 0, 0, 0);
	Function_352(&bParam0, 45770);
	ENABLE_USE_CONTEXTS(0);
	if (NET_IS_SESSION_HOST())
	{
		if (Function_123(&Global_123099 + 172))
		{
			Function_122(&Global_123099 + 172);
		}
		Function_99(4294967295);
	}
	CANCEL_DEADEYE();
	Function_350(0, &uVar0, &uVar1);
	UI_EXIT("XpHud");
	if (Function_364(&bParam0))
	{
		Function_349(&bParam0);
	}
	return;
}

void Function_349(bool bParam0) //Position: 0xB17D / 45437
{
	if (!Function_364(&bParam0))
	{
	}
	if (!Function_43(2048))
	{
		Function_340(2048);
		Global_123163.f_88 = FABS(GET_CURRENT_UNWARPED_TIME());
	}
	bParam0 = 15;
	return;
}

var Function_350(bool bParam0, var uParam1, int iParam2) //Position: 0xB1B2 / 45490
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	uParam1 = 100000.0f;
	if (Function_123(&Global_123099 + 172))
	{
		if (NET_IS_SESSION_HOST())
		{
			Function_122(&Global_123099 + 172);
		}
		uParam1 = Function_118(&Global_123099 + 172);
	}
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_104(bVar1))
		{
			bVar0 = (bVar0 + Function_116(bVar1));
		}
		bVar1++;
	}
	iVar3 = Function_351(uParam1);
	if (iVar3 == 4294967295 && bParam0)
	{
		Function_114(iVar3, &uVar4, &iVar2);
		bVar0 = (bVar0 + iVar2);
	}
	if (bParam0)
	{
		iVar5 = Function_111();
		bVar1 = false;
		while (bVar1 <= iVar5)
		{
			Function_109(bVar1, &uVar6, &iVar2);
			bVar0 = (bVar0 + iVar2);
			bVar1++;
		}
	}
	iParam2 = Function_108(bVar0);
	if (!bParam0)
	{
		if (iParam2 >= 4294967295)
		{
			iParam2 = (iParam2 - 1);
		}
	}
	Function_107(bVar0, iParam2, iLocal_1061);
	return bVar0;
}

var Function_351(float fParam0) //Position: 0xB28D / 45709
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 2;
	while (iVar0 > 0)
	{
		Function_114(iVar0, &fVar1, &iVar2);
		if (fParam0 >= fVar1)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 4294967295);
	}
	return 4294967295;
}

void Function_352(bool bParam0, int iParam1) //Position: 0xB2BA / 45754
{
	*(&bParam0 + 296) = &iParam1;
	return;
}

int Function_353() //Position: 0xB2CA / 45770
{
	var uVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	switch (iLocal_1062)
	{
		case 0x00000000:
			Function_361(&iLocal_1062 + 24);
			UI_PUSH("MissionFailedMenu");
			AUDIO_MUSIC_ONE_SHOT(&iLocal_1062 + 32, 0, 0, 0, 0, 0);
			PLAY_SOUND_FRONTEND("HUD_FAILED_DELAY_MASTER");
			if (!Function_360(&iLocal_1062 + 4))
			{
				Function_358(&iLocal_1062 + 4);
			}
			iLocal_1062 = 1;
			break;
		
		case 0x00000001:
			if (Function_356(&iLocal_1062 + 4) <= 7.0f)
			{
				Function_95(&uVar0, &iVar2, &bVar3);
				if (iVar2 < 4294967295 && Function_354() >= 4294967295)
				{
					Function_91(iVar2, &uVar0, &bVar1, bVar3);
					Function_83(TO_FLOAT(bVar1), "XP_COOP_Consolation", 1);
					iLocal_1062 = 3;
				}
				else
				{
					iLocal_1062 = 3;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_356(&iLocal_1062 + 4) <= 5.0f)
			{
				iLocal_1062 = 3;
			}
			break;
		
		case 0x00000003:
			UI_POP("MissionFailedMenu");
			HUD_FADE_OUT(0.0f, 1f, 1);
			return 1;
			break;
	}
	return 0;
}

int Function_354() //Position: 0xB3EE / 46062
{
	if (!Function_355())
	{
		return 4294967295;
	}
	return Global_123099.f_188;
}

bool Function_355() //Position: 0xB403 / 46083
{
	return UNK_0xA80C6DE6(&Global_123099);
}

float Function_356(vector3 vParam0) //Position: 0xB410 / 46096
{
	if (Function_360(&vParam0))
	{
		if (Function_357(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_357(int iParam0) //Position: 0xB4DD / 46301
{
	return Function_47(iParam0, 2);
}

void Function_358(int iParam0) //Position: 0xB4EB / 46315
{
	if (!Function_360(&iParam0))
	{
		Function_359(&iParam0, 0.0f);
	}
	return;
}

void Function_359(vector3 vParam0) //Position: 0xB502 / 46338
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_5(&vParam0, 1);
	Function_4(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_360(int iParam0) //Position: 0xB527 / 46375
{
	return Function_47(iParam0, 1);
}

void Function_361(char* cParam0) //Position: 0xB535 / 46389
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_362(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB5A1 / 46497
{
	if (bParam1)
	{
		Function_157(7, 1);
		Function_157(37, 1);
		if (NET_GET_PLAYMODE() == 0)
		{
			if (Function_345())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(58))
				{
					if (Function_105(37) > 4)
					{
						AWARD_ACHIEVEMENT(58);
					}
				}
			}
			else if (Function_363())
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(56))
				{
					if (Function_105(37) > 3)
					{
						AWARD_ACHIEVEMENT(56);
					}
				}
			}
		}
		Function_5(&iParam0 + 80, 4);
	}
	else if (&bParam3)
	{
		Function_155(37, 0);
		Function_4(&iParam0 + 80, 4);
	}
	else
	{
		Function_157(6, 1);
		Function_155(37, 0);
		Function_4(&iParam0 + 80, 4);
	}
	if (&bParam2)
	{
		Function_5(&iParam0 + 80, 256);
	}
	else
	{
		Function_4(&iParam0 + 80, 256);
	}
}

bool Function_363() //Position: 0xB656 / 46678
{
	return Function_335(16);
}

bool Function_364(bool bParam0) //Position: 0xB661 / 46689
{
	return !(bParam0 <= 15 && bParam0 >= 20);
}

void Function_365() //Position: 0xB677 / 46711
{
	Function_373(4);
	return;
}

void Function_366() //Position: 0xB681 / 46721
{
	if (Local_588.f_88)
	{
		if (!Function_213(4096, 1))
		{
			Function_49(4096, 1);
		}
		else if (Function_368())
		{
			Function_367(&Local_588);
		}
	}
	return;
}

void Function_367(struct<105> Param0) //Position: 0xB6B0 / 46768
{
	if ((Param0.f_84 && Param0.f_104 == 1006) && Param0.f_104 == 1104)
	{
		Param0.f_104 = 1006;
	}
	if ((!Param0.f_84 && Param0.f_104 == 1006) && Param0.f_104 == 1104)
	{
		Param0.f_104 = 1104;
	}
	return;
}

bool Function_368() //Position: 0xB6FF / 46847
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_104(bVar0))
		{
			iVar1++;
			if (Function_333(bVar0, 4096, 1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	if (iVar1 != 4 && iVar2 <= 2)
	{
		return 1;
	}
	if (iVar1 != 3 && iVar2 <= 2)
	{
		return 1;
	}
	if (iVar1 != 2 && iVar2 <= 1)
	{
		return 1;
	}
	if (iVar1 != 1 && iVar2 <= 1)
	{
		return 1;
	}
	return 0;
}

void Function_369(var uParam0, bool bParam1, int iParam2) //Position: 0xB783 / 46979
{
	uParam0 = bLocal_281;
	bParam1 = iLocal_282;
	iParam2 = Function_370();
	return;
}

int Function_370() //Position: 0xB79E / 47006
{
	return Function_371(bLocal_281);
}

int Function_371(int iParam0) //Position: 0xB7AA / 47018
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar1 = (iVar1 + Function_372(iVar0));
		iVar0++;
	}
	return iVar1;
}

int Function_372(int iParam0) //Position: 0xB7DD / 47069
{
	int iVar0;
	float fVar1;
	bool bVar2;
	
	if (iParam0 <= 0)
	{
		return 0;
	}
	iVar0 = iParam0;
	fVar1 = 3.0f;
	if (iVar0 > 16)
	{
		iVar0 = 15;
		fVar1 = (fVar1 + (IntToFloat((iParam0 - 16)) * 0,25f));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	bVar2 = (IntToFloat(bLocal_531[iVar0]) * fVar1);
	if (bVar2 > 1500.0f)
	{
		bVar2 = 1500.0f;
	}
	return ROUND(bVar2);
}

void Function_373(int iParam0) //Position: 0xB83B / 47163
{
	var uVar0;
	var uVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return;
	}
	while (NET_SCRIPTMSG_ISPENDING(iParam0, &uVar1))
	{
		if (NET_SCRIPTMSG_QUERY_HANDLER(uVar1, &uVar0))
		{
			Stack.Push(iParam0);
			Call_Loc(uVar0);
		}
		else
		{
			Function_374(iParam0);
		}
	}
	return;
}

void Function_374(int iParam0) //Position: 0xB86D / 47213
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 0);
	return;
}

void Function_375() //Position: 0xB87C / 47228
{
	switch (iLocal_566)
	{
		case 0x00000063:
			if (HUD_IS_FADED())
			{
				Function_682();
			}
			break;
		
		case 0x00000000:
			Function_439();
			break;
		
		case 0x00000065:
			Function_376();
			break;
	}
	return;
}

void Function_376() //Position: 0xB8B4 / 47284
{
	if (Function_437())
	{
		Function_436();
	}
	switch (iLocal_567)
	{
		case 0x00000000:
			if (NET_IS_SESSION_HOST())
			{
				Function_122(&Global_123099 + 172);
			}
			if (IS_ACTOR_VALID(Function_48()))
			{
				SET_ACTOR_PROOF(Function_48(), 159);
			}
			SET_TIME_OF_DAY(&Global_99477);
			SET_TIME_ACCELERATION(0.0f);
			Function_162();
			Function_435();
			UI_EXIT("MPScoringDisplays");
			UI_EXIT("NetTimer");
			UI_EXIT("ScoreGraph");
			UI_POP("NetTimer");
			UI_POP("ScoreGraph");
			Function_288();
			NET_LOG(iLocal_1042, "Mission StageFinal", "Transitioning to GID_CUTSCENE", 0, 0, 0, 0);
			Function_434();
			Function_433(74);
			break;
		
		case 0x0000004A:
			NET_LOG(bLocal_1042, "Mission StageFinal", "Transitioning to GID_COMPLETE", 0, 0, 0, 0);
			Function_433(106);
			break;
		
		case 0x0000006A:
			Function_432();
			if (Function_364(&bLocal_624))
			{
				Function_352(&bLocal_624, 47953);
				Function_378(&bLocal_624, "COOP_everyone_dead", 0, 0, 0, 0);
				Function_377(&bLocal_624, "MEX_MISSION_COMPLETE_SONG_01");
				Function_362(&bLocal_624, 1, 0, 0);
				Function_349(&bLocal_624);
			}
			NET_LOG(bLocal_1042, "Mission StageFinal", "End of the mission, setting local state to MPGTPS_ENDMATCH", 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_377(int iParam0, bool bParam1) //Position: 0xBABE / 47806
{
	*(&iParam0 + 72) = &bParam1;
	return;
}

void Function_378(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0xBACD / 47821
{
	int iVar0;
	
	*(&iParam0 + 24) = &uParam1;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		*(&iParam0 + 32[iVar0]) = "";
		iVar0++;
	}
	if (IS_STRING_VALID(&uParam2))
	{
		*(&iParam0 + 32[0]) = &uParam2;
	}
	if (IS_STRING_VALID(&iParam3))
	{
		*(&iParam0 + 32[1]) = &iParam3;
	}
	if (IS_STRING_VALID(&uParam4))
	{
		*(&iParam0 + 32[2]) = &uParam4;
	}
	if (IS_STRING_VALID(&uParam5))
	{
		*(&iParam0 + 32[3]) = &uParam5;
	}
}

int Function_379() //Position: 0xBB51 / 47953
{
	var uVar0;
	
	switch (Local_576)
	{
		case 0x000003E8:
			if (Function_431(&iLocal_1078))
			{
				iLocal_1086 = 15;
				Function_430(&Local_576 + 4);
				Function_425();
				Function_3(8, 0, 1);
				Function_424();
				if (UNK_0xCDA6BB6C())
				{
					uVar0 = UNK_0xFF1F1730();
					*(&Local_576 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
				}
				else
				{
					*(&Local_576 + 24) = Function_420(&bLocal_106, 0, &bLocal_106, 1, 0, 0);
					if (IS_OBJECT_VALID(&Local_576 + 24))
					{
					}
					else
					{
						LOG_ERROR("Sepulcro_GY_cutsceneFinal - Failed to create mp_gy_Sepulcro_outro_cutscene");
					}
				}
				Local_576 = 1001;
			}
			break;
		
		case 0x000003E9:
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Local_576 + 24), 0))
			{
				Function_419(&Global_54076, 1, 1);
				Local_576 = 1002;
			}
			break;
		
		case 0x000003EA:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_418();
				Local_576 = 1013;
			}
			break;
		
		case 0x000003F5:
			if (Function_404(1003, 1, 0x3f800000))
			{
				Function_403();
				Local_576 = 1003;
			}
			break;
		
		case 0x000003EB:
			if (Function_356(&Local_576 + 4) < 2.0f)
			{
				DECOR_SET_BOOL(&bLocal_106, "__CameraReady", true);
				Local_576 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (Function_382(&iLocal_1078, 52451) && GET_CUTSCENEOBJECT_SEQUENCE(&Local_576 + 24) != 2)
			{
				Function_430(&Local_576 + 4);
				Function_381();
				Local_576 = 1104;
			}
			break;
		
		case 0x00000450:
			if (Function_240(1))
			{
				Function_419(&Global_54076, 0, 1);
				AUDIO_CLEAR_CONVERSATION_HISTORY();
				ABORT_SCRIPTED_CONVERSATION(0);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				Function_380();
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(&bLocal_106, "__CameraReady");
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&Local_576 + 24))
				{
					DESTROY_OBJECT(&Local_576 + 24);
				}
				Local_576 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				Local_576 = 1104;
			}
			break;
	}
	return 0;
}

void Function_380() //Position: 0xBD71 / 48497
{
	Function_50(2, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1);
	return;
}

void Function_381() //Position: 0xBD85 / 48517
{
	UI_SET_STYLE("MPSplashTitle", 4);
	return;
}

int Function_382(struct<25> Param0) //Position: 0xBD9F / 48543
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	struct<17> Var7;
	
	fVar0 = GET_CURRENT_GAME_TIME();
	bVar1 = fVar0 <= Param0.f_20;
	Function_95(&uVar5, &bVar3, &iVar4);
	iVar6 = 5;
	switch (bVar3)
	{
		case 0x00000002:
			iVar6 = 1;
			break;
		
		case 0x00000001:
			iVar6 = 2;
			break;
		
		case 0x00000000:
			iVar6 = 3;
			break;
		
		case 0xFFFFFFFF:
		default:
			iVar6 = 4;
			break;
	}
	switch (Param0)
	{
		case 0x00000004:
			HUD_CLEAR_BIG_TEXT();
			HUD_CLEAR_BIG_TEXT_QUEUE();
			Function_424();
			DESTROY_ACTOR(Function_48());
			UI_ENTER("HudMPNoFun");
			HUD_FADE_IN(1.0f, 1065353216);
			Param0.f_12 = 0;
			Param0.f_24 = 0;
			Param0 = 5;
			break;
		
		case 0x00000005:
			Stack.Push(iVar6);
			Call_Loc(&iParam1);
			if (StackVal)
			{
				UI_SET_STYLE("MPSplashTitle", 22);
				Var7.f_16 = 150;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_PAINT_WIPE_FIRST_MASTER", &Var7);
				Var7.f_16 = 350;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_MP_UNLOCK_MASTER", &Var7);
				Var7.f_16 = 750;
				PLAY_SOUND_FRONTEND_INITPARAMS("HUD_PAINT_WIPE_SECOND_MASTER", &Var7);
				UI_PUSH("MPSplash");
				UI_UNFOCUS("MPSplashItem");
				UI_SET_TEXT("MPSplashTitle", "COOP_victory");
				UI_SET_TEXT("MPSplashItem.s0", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s1", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s2", "Common_Null");
				UI_SET_TEXT("MPSplashItem.s3", "Common_Null");
				UI_INCLUDE("MPSplashItem.s0");
				UI_INCLUDE("MPSplashItem.s1");
				UI_INCLUDE("MPSplashItem.s2");
				UI_INCLUDE("MPSplashItem.s3");
				UI_REFRESH("MPSplash");
				UI_UNFOCUS("MPSplashItem");
				Param0.f_20 = (fVar0 + 2.0f);
				Function_90(&Param0);
				Param0 = 9;
			}
			break;
		
		case 0x00000009:
			Function_399();
			if (bVar1)
			{
				if (Function_393(&Param0))
				{
					Param0.f_20 = (fVar0 + 3,3f);
				}
				Param0 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_399();
			if (bVar1)
			{
				Function_391(Param0.f_24, 0);
				Param0.f_12 = 4294967295;
				Param0.f_16 = 4294967295;
				Param0.f_20 = (fVar0 + 1.0f);
				Param0 = 7;
			}
			break;
		
		case 0x00000007:
			Function_399();
			if (bVar1)
			{
				if (Function_390(&Param0))
				{
					bVar2 = Function_389(Param0.f_12);
					UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_victory_score"), UI_GET_STRING(Function_388(Param0.f_12)), I2STR(bVar2), 0);
					Function_387("Generic_Dbuffer128_1");
					PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
					Param0.f_20 = (fVar0 + 1,8f);
					Param0 = 8;
					Param0.f_24 = (Param0.f_24 + bVar2);
				}
				else
				{
					Param0.f_20 = (fVar0 + 0.0f);
					if (Function_386() >= 0)
					{
						Param0 = 11;
						Param0.f_12 = 0;
					}
					else
					{
						Param0.f_20 = ((1,5f - 1.0f) + fVar0);
						Param0 = 13;
					}
				}
			}
			break;
		
		case 0x00000008:
			Function_399();
			if (bVar1)
			{
				Function_391(Param0.f_24, 0);
				Param0.f_20 = (fVar0 + 1.0f);
				Param0 = 7;
			}
			break;
		
		case 0x0000000B:
			Function_399();
			if (Param0.f_12 <= Function_386())
			{
				if (bVar1)
				{
					Function_385(&Param0);
					Param0.f_20 = (fVar0 + 1,8f);
					Param0 = 12;
				}
			}
			else
			{
				Param0.f_20 = (fVar0 + 1,5f);
				Param0 = 13;
			}
			break;
		
		case 0x0000000C:
			Function_399();
			if (bVar1)
			{
				Function_391(Param0.f_24, 0);
				Param0.f_20 = (fVar0 + 1.0f);
				Param0.f_12++;
				Param0 = 11;
			}
			break;
		
		case 0x0000000D:
			Function_399();
			if (bVar1)
			{
				Function_391(Param0.f_24, 1);
				Function_107(Param0.f_24, bVar3, 0);
				Param0.f_20 = (fVar0 + 2,5f);
				Param0 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_399();
			if (bVar1)
			{
				Function_384(1);
				Param0.f_20 = (fVar0 + 2,5f);
				if (DECOR_CHECK_EXIST(Function_96(1), "Unlock_Silver"))
				{
					Param0 = 15;
				}
				else if (DECOR_CHECK_EXIST(Function_96(1), "Unlock_Adv"))
				{
					Param0 = 16;
				}
				else
				{
					Param0 = 17;
				}
			}
			break;
		
		case 0x0000000F:
			Function_399();
			if (bVar1)
			{
				Function_383(1);
				Param0.f_20 = (fVar0 + 2,5f);
				if (DECOR_CHECK_EXIST(Function_96(1), "Unlock_Adv"))
				{
					Param0 = 16;
				}
				else
				{
					Param0 = 17;
				}
			}
			break;
		
		case 0x00000010:
			Function_399();
			if (bVar1)
			{
				Function_383(0);
				Param0.f_20 = (fVar0 + 2,5f);
				Param0 = 17;
			}
			break;
		
		case 0x00000011:
			Function_399();
			if (bVar1)
			{
				Function_82(&Param0);
				Param0.f_20 = (fVar0 + 0,5f);
				Param0 = 19;
			}
			break;
		
		case 0x00000013:
			NET_LOG(true, "VICTORY SEQUENCE", "Sequence complete!", 0, 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_383(bool bParam0) //Position: 0xC3C1 / 50113
{
	if (bParam0)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_387("COOP_scoreboard_new_challenges");
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_AWARDS_SILVER_MASTER");
		Function_387("COOP_scoreboard_new_adv");
	}
	return;
}

void Function_384(bool bParam0) //Position: 0xC452 / 50258
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	Function_95(&uVar2, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 0x00000002:
			iVar3 = "COOP_victory_gold";
			iVar4 = "HUD_MP_AWARDS_GOLD_MASTER";
			break;
		
		case 0x00000001:
			iVar3 = "COOP_victory_Silver";
			iVar4 = "HUD_MP_AWARDS_SILVER_MASTER";
			break;
		
		case 0x00000000:
			iVar3 = "COOP_victory_Bronze";
			iVar4 = "HUD_MP_AWARDS_BRONZE_MASTER";
			break;
		
		case 0xFFFFFFFF:
		default:
			iVar3 = "coop_victory_nothing";
			iVar4 = "HUD_MP_AWARDS_FAIL_MASTER";
			break;
	}
	if (&bParam0)
	{
		PLAY_SOUND_FRONTEND(&iVar4);
	}
	Function_387(&iVar3);
	return;
}

void Function_385(struct<25> Param0) //Position: 0xC582 / 50562
{
	bool bVar0;
	var uVar1;
	
	Function_109(Param0.f_12, &uVar1, &bVar0);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_score"), UI_GET_STRING_BY_HASH(uVar1), I2STR(bVar0), 0);
	Function_387("Generic_Dbuffer128_1");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	Param0.f_24 = (Param0.f_24 + bVar0);
	return;
}

int Function_386() //Position: 0xC61B / 50715
{
	return Function_111();
}

void Function_387(int iParam0) //Position: 0xC624 / 50724
{
	UI_SET_TEXT("MPSplashItem.s1", &iParam0);
	UI_INCLUDE("MPSplashItem.s1");
	UI_REFRESH("MPSplashItem.s1");
	UI_REFRESH("MPSplashTitle");
	return;
}

var Function_388(int iParam0) //Position: 0xC67F / 50815
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MPPlayerName_0";
		
		case 0x00000001:
			return "MPPlayerName_1";
		
		case 0x00000002:
			return "MPPlayerName_2";
		
		case 0x00000003:
			return "MPPlayerName_3";
		
		case 0x00000004:
			return "MPPlayerName_4";
		
		case 0x00000005:
			return "MPPlayerName_5";
		
		case 0x00000006:
			return "MPPlayerName_6";
		
		case 0x00000007:
			return "MPPlayerName_7";
		
		case 0x00000008:
			return "MPPlayerName_8";
		
		case 0x00000009:
			return "MPPlayerName_9";
		
		case 0x0000000A:
			return "MPPlayerName_10";
		
		case 0x0000000B:
			return "MPPlayerName_11";
		
		case 0x0000000C:
			return "MPPlayerName_12";
		
		case 0x0000000D:
			return "MPPlayerName_13";
		
		case 0x0000000E:
			return "MPPlayerName_14";
		
		case 0x0000000F:
			return "MPPlayerName_15";
		
		default:
	}
	return "UNHANDLED SLOT";
}

bool Function_389(bool bParam0) //Position: 0xC823 / 51235
{
	return Function_116(bParam0);
}

bool Function_390(struct<17> Param0) //Position: 0xC82E / 51246
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 100000;
	bVar3 = 4294967295;
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			iVar1 = Function_389(bVar0);
			if (iVar1 != Param0.f_16 && bVar0 < Param0.f_12)
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
			}
			else if (iVar1 > iVar2 && iVar1 < Param0.f_16)
			{
				bVar3 = bVar0;
				iVar2 = iVar1;
			}
		}
		bVar0++;
	}
	if (bVar3 == 4294967295)
	{
		return 0;
	}
	Param0.f_12 = bVar3;
	Param0.f_16 = iVar2;
	return 1;
}

void Function_391(bool bParam0, bool bParam1) //Position: 0xC8AD / 51373
{
	if (bParam1)
	{
		PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_FINAL_DLC1_MASTER");
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("COOP_victory_grandtotal"), I2STR(bParam0), 0, 0);
	}
	else
	{
		PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", UI_GET_STRING("COOP_victory_total"), I2STR(bParam0), 0, 0);
	}
	Function_392(1);
	return;
}

void Function_392(bool bParam0) //Position: 0xC980 / 51584
{
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	if (&bParam0)
	{
		Function_387("Common_Null");
	}
	return;
}

bool Function_393(struct<25> Param0) //Position: 0xCA06 / 51718
{
	int iVar0;
	float fVar1;
	struct<13> Var2;
	
	fVar1 = 666.0f;
	if (Function_123(&Global_123099 + 172))
	{
		fVar1 = Function_118(&Global_123099 + 172);
	}
	Function_398(fVar1);
	Var2 = { StackVal, Function_398(fVar1) };
	iVar0 = Function_394(fVar1);
	if (Var2 >= 0)
	{
		straddi(&cVar4, Var2, 32);
		stradd(&cVar4, ":", 32);
		if (StackVal <= 10)
		{
			stradd(&cVar4, "0", 32);
		}
	}
	straddi(&cVar4, StackVal, 32);
	stradd(&cVar4, ":", 32);
	straddi(&cVar4, (StackVal / 10), 32);
	straddi(&cVar4, (StackVal % 10), 32);
	stradd(&cVar4, ".", 32);
	bVar12 = FLOOR((Var2.f_12 * 100.0f));
	straddi(&cVar4, (bVar12 / 10), 32);
	straddi(&cVar4, (bVar12 % 10), 32);
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", UI_GET_STRING("COOP_Victory_time"), &cVar4, 0, 0);
	Param0.f_24 = (Param0.f_24 + iVar0);
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_1");
	UI_INCLUDE("MPSplashItem.s0");
	UI_REFRESH("MPSplashItem.s0");
	UI_REFRESH("MPSplashTitle");
	PLAY_SOUND_FRONTEND("HUD_MP_BREAKDOWN_DLC1_MASTER");
	return 1;
}

int Function_394(int iParam0) //Position: 0xCB7C / 52092
{
	int iVar0;
	int iVar1;
	
	if (Function_354() >= 4294967295)
	{
		iVar1 = Function_397(iParam0);
		if (iVar1 >= 4294967295)
		{
			Function_114(iVar1, &iParam0, &iVar0);
		}
	}
	return Function_395(iParam0);
	return iVar0;
}

int Function_395(float fParam0) //Position: 0xCBA7 / 52135
{
	int iVar0;
	int iVar1;
	
	if (Function_354() >= 4294967295)
	{
		iVar1 = Function_397(fParam0);
		if (iVar1 >= 4294967295)
		{
			Function_396(iVar1, &iVar0);
		}
	}
	return iVar0;
}

void Function_396(int iParam0, int iParam1) //Position: 0xCBCA / 52170
{
	if (iParam0 == 2)
	{
		iParam1 = 1000;
	}
	else if (iParam0 == 1)
	{
		iParam1 = 500;
	}
	else if (iParam0 == 0)
	{
		iParam1 = 200;
	}
	return;
}

int Function_397(float fParam0) //Position: 0xCBFC / 52220
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	Function_114(2, &fVar0, &iVar3);
	Function_114(1, &fVar1, &iVar3);
	Function_114(0, &fVar2, &iVar3);
	iVar3 = iVar3;
	fVar0 = 20.0f;
	fVar1 = 10.0f;
	fVar2 = 5.0f;
	if (fParam0 <= fVar2)
	{
		if (fParam0 <= fVar1)
		{
			if (fParam0 <= fVar0)
			{
				return 2;
			}
			return 1;
		}
		return 0;
	}
	return 4294967295;
}

struct<8> Function_398(var uParam0) //Position: 0xCC4E / 52302
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = uParam0;
	Var0 = FLOOR((bVar2 / 3600.0f));
	while (bVar2 <= 3600.0f)
	{
		bVar2 = (bVar2 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar2 / 60.0f));
	while (bVar2 <= 60.0f)
	{
		bVar2 = (bVar2 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar2);
	Var0.f_12 = (StackVal - IntToFloat(bVar2));
	return StackVal, Var0;
}

void Function_399() //Position: 0xCCBD / 52413
{
	if (!UI_ISACTIVE("MPSplash"))
	{
		UI_SHOW("MPSplash");
	}
	return;
}

int Function_400(int iParam0) //Position: 0xCCE3 / 52451
{
	switch (iLocal_1086)
	{
		case 0x0000000F:
			if (Function_356(&Local_576 + 4) < 2.0f)
			{
				if (iParam0 == 1)
				{
					Function_401("UN_Narr_Outro_didWell", 0);
				}
				else if (iParam0 == 2)
				{
					Function_401("UN_Narr_Outro_didOk", 0);
				}
				else
				{
					Function_401("UN_Narr_Outro_didPoor", 0);
				}
				iLocal_1086 = 25;
			}
			break;
		
		case 0x00000019:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_401(int iParam0, int iParam1) //Position: 0xCD83 / 52611
{
	iParam1 = &iParam1;
	Function_402(&iParam0);
	return;
}

void Function_402(var uParam0) //Position: 0xCD95 / 52629
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		if (STRING_CONTAINS_STRING(&uParam0, "UN_Narr_Outro"))
		{
			bVar0 = true;
		}
		iVar1 = "";
		if (bVar0)
		{
			iVar1 = &uParam0;
		}
		ADD_LINE_TO_CONVERSATION(false, &uParam0, &iVar1, false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(0, "NARRATOR");
	}
	START_SCRIPT_CONVERSATION(bVar0, 0);
	return;
}

void Function_403() //Position: 0xCDFA / 52730
{
	UI_EXIT("LoadingSpinner");
	UI_SET_STYLE("MPSplashTitle", 21);
	return;
}

bool Function_404(bool bParam0, bool bParam1, float fParam2) //Position: 0xCE29 / 52777
{
	struct<17> Var0;
	
	if (&bParam1)
	{
		Function_417(bParam0);
	}
	Function_27(&Var0);
	fVar3 = NET_GET_NET_TIME();
	iVar4 = 0;
	if ((fVar3 - Var0.f_12) <= &fParam2)
	{
		Var0.f_12 = fVar3;
		iVar4 = 1;
		Function_20(&Var0);
	}
	if (Function_416(&Var0))
	{
		Var0.f_16 = 0.0f;
		Function_415(&Var0, 0);
		Function_20(&Var0);
		Function_22();
		NET_LOG(true, "Game LockStep", "--- LOCAL PLAYER %s, #%s, is moving on, assumably to state #%s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(bParam0), 0);
		return 1;
	}
	if (Function_414(bParam0, iVar4, &uVar5))
	{
		if (Function_413())
		{
			if (!Function_412(&Var0))
			{
				Var6 = bParam0;
				Var6.f_4 = StackVal;
				NET_SCRIPTMSG_SEND(4, 14, &Var6, 2, 1);
				NET_LOG(StackVal, 1, "Game LockStep", "--- LOCAL PLAYER %s (#%s), the host, is sending go-ahead to state #%s with ID: %s ---", GET_SLOT_NAME(GET_LOCAL_SLOT()), I2STR(GET_LOCAL_SLOT()), I2STR(I2STR(Var6)));
				Function_411(&Var0, 1);
				Function_20(&Var0);
			}
		}
	}
	else if (HUD_IS_FADED())
	{
		if (Var0.f_16 >= 1.0f)
		{
			Var0.f_16 = fVar3;
			Function_20(&Var0);
		}
		else
		{
			fVar7 = (fVar3 - Var0.f_16);
			if (fVar7 <= 60.0f || (uVar5 && fVar7 <= 25.0f))
			{
				if (Function_405(bParam0))
				{
					NET_LOG(true, "Lockstep Ditch", "I have the authority as lowest-numbered valid slot to order a ditch.", 0, 0, 0, 0);
					Var8 = GET_LOCAL_SLOT();
					Var8.f_4 = fVar3;
					NET_SCRIPTMSG_SEND(1, 104, &Var8, 4, 1);
				}
			}
		}
	}
	else
	{
		Var0.f_16 = 0.0f;
		Function_20(&Var0);
	}
	return 0;
}

bool Function_405(int iParam0) //Position: 0xD07E / 53374
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = GET_LOCAL_SLOT();
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (Function_410(bVar0))
		{
			iVar1 = Function_406(bVar0);
			if (iVar1 == iParam0)
			{
				if (bVar0 == bVar2)
				{
					return 1;
				}
				return 0;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_406(bool bParam0) //Position: 0xD0C1 / 53441
{
	int iVar0;
	
	Function_409(&iVar0);
	if (bParam0 == GET_LOCAL_SLOT())
	{
		Function_28(&iVar0);
	}
	else
	{
		Function_408(&iVar0, bParam0);
	}
	return Function_407(&iVar0);
}

int Function_407(int iParam0) //Position: 0xD0E8 / 53480
{
	return iParam0;
}

void Function_408(int iParam0, int iParam1) //Position: 0xD0F2 / 53490
{
	iParam0 = &Global_120101[iParam188] + 184;
	return;
}

void Function_409(int iParam0) //Position: 0xD107 / 53511
{
	Function_26(&iParam0, 4294967286);
	return;
}

bool Function_410(bool bParam0) //Position: 0xD116 / 53526
{
	return Function_104(bParam0);
}

void Function_411(var uParam0, bool bParam1) //Position: 0xD121 / 53537
{
	if (bParam1)
	{
		Function_5(&uParam0, 2);
	}
	else
	{
		Function_4(&uParam0, 2);
	}
	return;
}

bool Function_412(bool bParam0) //Position: 0xD13D / 53565
{
	return Function_47(bParam0, 2);
}

bool Function_413() //Position: 0xD14B / 53579
{
	if (NET_IS_SCRIPT_REGISTERED_AS_NET_SCRIPT())
	{
		return NET_IS_HOST_OF_THIS_SCRIPT();
	}
	if (NET_IS_IN_SESSION())
	{
		return NET_IS_SESSION_HOST();
	}
	return 0;
}

bool Function_414(int iParam0, var uParam1, int iParam2) //Position: 0xD169 / 53609
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0;
	bVar3 = false;
	uParam1 = uParam1;
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		if (Function_410(iVar0))
		{
			iVar1 = Function_406(iVar0);
			if (iVar1 != iParam0)
			{
				if (iVar1 != 4294967286)
				{
					iParam2 = 1;
				}
				bVar3 = true;
			}
			iVar2 = 1;
		}
		iVar0++;
	}
	return (iVar2 && !bVar3);
}

void Function_415(int iParam0, bool bParam1) //Position: 0xD1BB / 53691
{
	if (bParam1)
	{
		Function_5(&iParam0, 1);
	}
	else
	{
		Function_4(&iParam0, 1);
	}
	return;
}

bool Function_416(int iParam0) //Position: 0xD1D7 / 53719
{
	return Function_47(iParam0, 1);
}

void Function_417(var uParam0) //Position: 0xD1E5 / 53733
{
	bool bVar0;
	var uVar1;
	struct<13> Var2;
	bool bVar21;
	
	bVar0 = uParam0;
	Function_28(&uVar1);
	if (Function_407(&uVar1) != bVar0)
	{
		Function_27(&Var2);
		if (bVar0 == 4294967286)
		{
		}
		else if (StackVal == bVar0)
		{
			strcpy(&cVar5, "Next lockstep state same as last state (", 64);
			stradd(&cVar5, I2STR(bVar0), 64);
			stradd(&cVar5, "). May be fine.", 64);
			if (Function_47(Var2, 4))
			{
			}
		}
		bVar21 = GET_LOCAL_SLOT();
		NET_LOG(true, "Game LockStep", "LOCAL PLAYER %s, #%s, wants to go to state #%s", GET_SLOT_NAME(bVar21), I2STR(bVar21), I2STR(bVar0), 0);
		Var2.f_12 = NET_GET_NET_TIME();
		Function_23(bVar0);
		Function_411(&Var2, 0);
		Function_20(&Var2);
	}
	return;
}

void Function_418() //Position: 0xD2E2 / 53986
{
	*(&Local_588 + 16) = Vector(0.0f, 0.0f, 0.0f);
	*(&Local_588 + 28) = Vector(0.0f, 0.0f, 0.0f);
	Local_588.f_40 = 8.0f;
	*(&Local_588 + 48) = "";
	Local_588.f_72 = 0;
	Local_588.f_92 = 1;
	Local_588.f_112 = 1;
	Local_588.f_96 = 1;
	Local_588.f_80 = 1;
	Local_588.f_84 = 1;
	Local_588.f_104 = Local_576;
	Local_588.f_88 = 0;
	Local_588.f_108 = 0;
	Local_588.f_116 = 1;
	Local_576.f_40 = 0;
	Function_49(4096, 0);
	Function_49(8192, 0);
	return;
}

void Function_419(var uParam0, bool bParam1, bool bParam2) //Position: 0xD361 / 54113
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&uParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&uParam0))
		{
			FIRE_STOP_ON_ACTOR(&uParam0);
		}
		SET_ACTOR_INVULNERABILITY(&uParam0, true);
		CLEAR_ACTOR_MIN_SPEED(&uParam0);
		CLEAR_ACTOR_MAX_SPEED(&uParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&uParam0);
		RESET_ACTOR_GAITS(&uParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&uParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&uParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&uParam0);
		SET_ACTOR_INVULNERABILITY(&uParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
	}
	return;
}

var Function_420(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xD411 / 54289
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_56(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "mp_gy_sepulcro_outro", 2, 1);
	}
	Function_421(&uVar0, &uParam2);
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

void Function_421(var uParam0, int iParam1) //Position: 0xD4A2 / 54434
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_423(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_422(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &iParam1, "__CameraReady", 0, 0, 180.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 10.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(&uParam0, 1, 2);
	return;
}

void Function_422(int iParam0) //Position: 0xD50E / 54542
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1375,384f, 13,66542f, 4297,716f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,124402f, -0,444915f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_423(var uParam0) //Position: 0xD583 / 54659
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-1385,251f, 22,04336f, 4313,704f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,419732f, -1,333437f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_424() //Position: 0xD5F8 / 54776
{
	Function_3(1024, 1, 0);
	Function_3(1, 0, 0);
	return;
}

void Function_425() //Position: 0xD60C / 54796
{
	Function_426(1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0x3f800000, 0);
	return;
}

void Function_426(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xD627 / 54823
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
	Function_18();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_48();
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
			if (Function_69())
			{
				if (!(IS_ACTOR_ON_LADDER(&iVar1) || IS_ACTOR_USING_LEDGE(&iVar1)))
				{
					if (bParam0)
					{
						ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
					}
					if (&bParam2)
					{
						SET_PLAYER_POSTURE(0, 0, 0);
						TASK_OVERRIDE_SET_POSTURE(&iVar1, false);
					}
				}
			}
			else
			{
				if (bParam0)
				{
					ACTOR_START_FORCE_HOLSTER(&iVar1, 0, 0);
				}
				if (&bParam2)
				{
					SET_PLAYER_POSTURE(0, 0, 0);
					TASK_OVERRIDE_SET_POSTURE(&iVar1, false);
				}
			}
			SET_ACTOR_HEALTH(&iVar1, GET_ACTOR_MAX_HEALTH(&iVar1));
			SET_ACTOR_INVULNERABILITY(&iVar1, true);
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
				Function_256(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_56(), 2, Function_256(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_53(19, 1, 0, 0);
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
	if (iParam10 && !Function_331())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_429()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_429()));
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
	if (Function_428(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_427(0x4000000);
	}
	if (Function_428(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_427(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

void Function_427(int iParam0) //Position: 0xD914 / 55572
{
	int iVar0;
	
	if (Function_47(iParam0, 1) && Function_47(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_428(int iParam0) //Position: 0xD948 / 55624
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_429() //Position: 0xD964 / 55652
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

void Function_430(int iParam0) //Position: 0xD9F2 / 55794
{
	Function_359(&iParam0, 0.0f);
	return;
}

bool Function_431(struct<21> Param0) //Position: 0xD9FF / 55807
{
	switch (Param0)
	{
		case 0x00000000:
			if (!HUD_IS_FADED())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			HUD_ENABLE(0);
			UI_EXIT("MPScoringDisplays");
			UI_ENTER("HudMPNoFun");
			Param0 = 1;
			break;
		
		case 0x00000001:
			if (HUD_IS_FADED())
			{
				Param0 = 4;
				return 1;
			}
			if (!HUD_IS_FADING())
			{
				HUD_FADE_OUT(1.0f, 1f, 1);
			}
			break;
		
		case 0x00000002:
			Param0.f_20 = (Param0.f_20 + 1.0f);
			if (Param0.f_20 < 5.0f)
			{
				Param0 = 3;
			}
			break;
		
		case 0x00000003:
			if (FLASH_GET_INT("networking", "splashDone") >= 0)
			{
				UI_ENTER("LoadingSpinner");
				Param0 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void Function_432() //Position: 0xDAEC / 56044
{
	return;
}

void Function_433(int iParam0) //Position: 0xDAF2 / 56050
{
	char* cVar0[32];
	
	iLocal_567 = iParam0;
	strcpy(&cVar0, "STAGE ", 32);
	switch (iLocal_566)
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
		
		case 0x00000003:
			stradd(&cVar0, "04", 32);
			break;
		
		case 0x00000004:
			stradd(&cVar0, "05", 32);
			break;
		
		case 0x00000005:
			stradd(&cVar0, "06", 32);
			break;
		
		case 0x00000006:
			stradd(&cVar0, "07", 32);
			break;
		
		case 0x00000007:
			stradd(&cVar0, "08", 32);
			break;
		
		case 0x00000008:
			stradd(&cVar0, "09", 32);
			break;
		
		case 0x00000009:
			stradd(&cVar0, "10", 32);
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

void Function_434() //Position: 0xDC85 / 56453
{
	return;
}

void Function_435() //Position: 0xDC8B / 56459
{
	iLocal_1043 = 1;
	Function_97(iLocal_1043, 0);
	return;
}

void Function_436() //Position: 0xDC9C / 56476
{
	return;
}

bool Function_437() //Position: 0xDCA2 / 56482
{
	return Function_438(iLocal_567);
}

int Function_438(int iParam0) //Position: 0xDCAE / 56494
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000069:
		case 0x0000006A:
			return 0;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_439() //Position: 0xDCF6 / 56566
{
	if (Function_437() && iLocal_567 == 6)
	{
		Function_676();
	}
	if ((((iLocal_567 == 0 && iLocal_567 == 1) && iLocal_567 == 3) && iLocal_567 == 4) && !Local_988.f_52)
	{
		Function_672(&iLocal_252, (Function_370() - Function_675()));
	}
	if (GET_PLAYER_COMBATMODE() == 2)
	{
		iLocal_359 = 1;
	}
	Function_670();
	if (((((((iLocal_567 != 6 || iLocal_567 != 7) || iLocal_567 != 8) || iLocal_567 != 9) || iLocal_567 != 10) || iLocal_567 != 11) || iLocal_567 != 12) || iLocal_567 != 13)
	{
		if (Local_988.f_52)
		{
			UI_REMOVE_MESSAGE_IN_QUEUE("COOP_now_dead", 1, 0);
		}
		switch (iLocal_356)
		{
			case 0x00000000:
				Function_667(&iLocal_355, &iLocal_301, Local_988.f_52);
				iLocal_356 = 1;
				break;
			
			case 0x00000001:
				Function_664(&iLocal_354, &iLocal_301);
				iLocal_356 = 2;
				break;
			
			case 0x00000002:
				Function_663();
				iLocal_356 = 3;
				break;
			
			case 0x00000003:
				Function_662(StackVal, (&bLocal_106 + 24));
				Function_657();
				iLocal_356 = 4;
				break;
			
			case 0x00000004:
				Function_194(&uLocal_302);
				iLocal_356 = 5;
				break;
			
			case 0x00000005:
				Function_656(&Local_988 + 60, ((((Local_988.f_52 || iLocal_567 != 10) || iLocal_567 != 11) || iLocal_567 != 12) || iLocal_567 != 13));
				Function_654(((((Local_988.f_52 || iLocal_567 != 10) || iLocal_567 != 11) || iLocal_567 != 12) || iLocal_567 != 13));
				Function_653();
				iLocal_356 = 6;
				break;
			
			case 0x00000006:
				Function_652(&iLocal_1074, Local_988.f_52);
				iLocal_356 = 7;
				break;
			
			case 0x00000007:
				Function_650();
				iLocal_356 = 8;
				break;
			
			case 0x00000008:
				Function_648(&iLocal_357);
				iLocal_356 = 9;
				break;
			
			case 0x00000009:
				Function_646(&uLocal_345, &bLocal_106 + 16, &bLocal_106);
				iLocal_356 = 0;
				break;
		}
		Function_645(&Local_988 + 60, &uLocal_324, &iLocal_325, &iLocal_326);
		Function_643(Local_988.f_52);
		if (iLocal_1043)
		{
			Function_22();
			Function_433(106);
		}
	}
	if (Local_988.f_52)
	{
		if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
		{
			if (!Function_333(GET_LOCAL_SLOT(), 81922, 0))
			{
				Function_14(&(iLocal_1008[GET_LOCAL_SLOT()]), 8);
			}
		}
		if (NET_IS_SESSION_HOST() && !Function_121(&Global_123099 + 172))
		{
			Function_122(&Global_123099 + 172);
		}
	}
	switch (iLocal_567)
	{
		case 0x00000000:
			NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_CUTSCENE", 0, 0, 0, 0);
			Function_418();
			Function_642();
			Function_640(&iLocal_325);
			Function_426(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			uLocal_768 = CREATE_OBJECT_ITERATOR(&bLocal_106);
			Local_988.f_52 = 0;
			Function_433(1);
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED_PRIORITY(4) && STREAMING_IS_WORLD_LOADED())
			{
				if (Function_404(3, 1, 0x3f800000))
				{
					SET_TIME_OF_DAY(&Global_99477);
					SET_TIME_ACCELERATION(0.0f);
					uLocal_278 = Function_636(&bLocal_106, 0, 1, 0, 0);
					Function_629();
					Function_433(3);
				}
			}
			break;
		
		case 0x00000003:
			if (!IS_OBJECT_VALID(&uLocal_278))
			{
				Function_50(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Function_30(&bLocal_624, 0);
				Function_433(4);
				NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_POST_CUTSCENE", 0, 0, 0, 0);
			}
			break;
		
		case 0x00000004:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_404(6, 1, 0x3f800000))
				{
					HUD_FADE_IN(1.0f, 1065353216);
					if (NET_IS_SESSION_HOST())
					{
						Function_628(&Global_123099 + 172);
					}
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					if (NET_IS_SESSION_HOST())
					{
						Function_197(&Local_988 + 60, 180.0f);
						Function_122(&Local_988 + 60);
					}
					Function_645(&Local_988 + 60, &uLocal_324, &iLocal_325, &iLocal_326);
					Function_627(&iLocal_326);
					Function_620(&uLocal_315, &uLocal_317);
					NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_FIRST_GOAL", 0, 0, 0, 0);
					DELETE_WEAPON_FROM_ACTOR(Function_48(), 22);
					GIVE_WEAPON_TO_ACTOR(Function_48(), 33, 0.0f, 0, 0);
					GIVE_WEAPON_TO_ACTOR(Function_48(), 36, 0.0f, 0, 0);
					_ADD_AMMO_OF_TYPE(Function_48(), 3, 2.0f, 0, 0);
					Function_619();
					Function_618(&iLocal_252);
					Function_617(bLocal_281);
					Function_433(6);
				}
			}
			break;
		
		case 0x00000006:
			if (NET_IS_SESSION_HOST())
			{
				Function_628(&Global_123099 + 172);
			}
			Function_557(&uLocal_306, &bLocal_106, 496, 504, Local_988.f_52);
			Function_197(&iLocal_618, 2.0f);
			Function_556();
			Function_555(&bLocal_106 + 192, &Local_988 + 20, &Local_988 + 32);
			Function_554(&bLocal_106 + 56, &Local_988 + 44, &Local_988 + 48);
			Function_553(Local_988.f_52, 3.0f, "", 0, 0, 0, 0);
			if (Local_988.f_52)
			{
				Function_401("UN_Narr_SuddnDeath", 0);
				Function_552(3.0f, "mp_gy_sudden_death");
			}
			else
			{
				Function_551(3.0f, "mp_gy_wave_starting", I2STR(bLocal_281 + 1));
			}
			if (!Local_988.f_52 && NET_IS_SESSION_HOST())
			{
				Function_628(&Local_988 + 60);
			}
			NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_SECOND_GOAL", 0, 0, 0, 0);
			Function_433(7);
			break;
		
		case 0x00000007:
			if (Function_549(&iLocal_618))
			{
				Function_548(StackVal, StackVal, &uLocal_302, &uLocal_304, &uLocal_308, &bLocal_106, *(&Local_988 + 20), *(&Local_988 + 32), &uLocal_310, &bLocal_351, &uLocal_352, 330, Local_988.f_52);
				Function_197(&iLocal_618, 0,2f);
				NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_THIRD_GOAL", 0, 0, 0, 0);
				Function_433(8);
			}
			break;
		
		case 0x00000008:
			if (Function_549(&iLocal_618))
			{
				Function_547(&uLocal_302, "CallSafeLightning", Local_988.f_52);
				Function_197(&iLocal_618, 2,8f);
				Function_197(&iLocal_284, 22,8f);
				Function_197(&iLocal_288, 10.0f);
				Function_197(&iLocal_319, 10.0f);
				iLocal_283 = 0;
				iLocal_323 = 0;
				Function_544(bLocal_281, &fLocal_353, &iLocal_292, Local_988.f_52);
				NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_FOURTH_GOAL", 0, 0, 0, 0);
				Function_433(9);
			}
			break;
		
		case 0x00000009:
			if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
			{
				Function_541(&uLocal_302, &uLocal_304, &uLocal_308, &iLocal_349, &iLocal_314, &(iLocal_1008[GET_LOCAL_SLOT()]), 2, Local_988.f_52, bLocal_281);
			}
			Function_539(StackVal, StackVal, &uLocal_302, &uLocal_308, &bLocal_106, *(&Local_988 + 20), *(&Local_988 + 32), &uLocal_310, Local_988.f_52);
			if (!iLocal_297 && Function_203(&iLocal_618))
			{
				PRINT_HELP_FORMAT(6.0f, "COOP_gy_coffin_help", 0, 0, 0, 0, 2, 0, 0);
				iLocal_297 = 1;
			}
			if ((!iLocal_298 && Function_203(&iLocal_618)) && Local_988.f_52)
			{
				PRINT_HELP_FORMAT(6.0f, "MP_GY_Overdrive_help", 0, 0, 0, 0, 2, 0, 0);
				iLocal_298 = 1;
			}
			if (iLocal_283 || Local_988.f_52)
			{
				Function_525(StackVal, StackVal, &iLocal_226, &iLocal_288, &Local_988 + 56, *(&Local_988 + 20), *(&Local_988 + 32), Local_988.f_52, 1, 0, 0x40000000, 0x42480000);
			}
			else
			{
				Function_525(StackVal, StackVal, &iLocal_226, &iLocal_288, &Local_988 + 56, *(&Local_988 + 20), *(&Local_988 + 32), Local_988.f_52, 0, 1, 1.0f, 40.0f);
			}
			if (!iLocal_283 && Function_203(&iLocal_284))
			{
				iLocal_283 = 1;
			}
			if (Function_549(&iLocal_319))
			{
				iLocal_323 = 1;
				Function_505(bLocal_281, &bLocal_106, &uLocal_315, &uLocal_317, &bLocal_106 + 56, Local_988.f_44, Local_988.f_48, Local_988.f_52);
				Function_197(&iLocal_341, 0,2f);
			}
			if (Function_549(&iLocal_341))
			{
				Function_504(&uLocal_315, "CallPrizeLightning", Local_988.f_52);
			}
			Function_503();
			if (Function_502(2))
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_1008[GET_LOCAL_SLOT()]), 2);
				}
			}
			if ((Function_204(&Local_988 + 60) > 60.0f && !iLocal_300) && !Local_988.f_52)
			{
				Function_401("UN_Narr_TimeRuninOut", 0);
				iLocal_300 = 1;
			}
			else if (Function_204(&Local_988 + 60) < 60.0f)
			{
				iLocal_300 = 0;
			}
			if ((Function_500() && Function_203(&iLocal_618)) && !Local_988.f_52)
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_1008[GET_LOCAL_SLOT()]), 1);
				}
			}
			if (Function_502(1) && !iLocal_1043)
			{
				if (Function_404(8, 1, 0x3f800000))
				{
					if (Local_988.f_52)
					{
						Function_197(&iLocal_618, 0,5f);
					}
					else
					{
						Function_197(&iLocal_618, 4,5f);
						if (NET_IS_SESSION_HOST())
						{
							Function_497(&Local_988 + 60, Function_498(Function_499(&Local_988 + 60)));
						}
					}
					if (!Function_496())
					{
						Function_553(Local_988.f_52, 3.0f, "mp_gy_cleanse", 0, 0, 0, 0);
						Function_495(bLocal_281);
					}
					if (NET_IS_SESSION_HOST())
					{
						Function_122(&Local_988 + 60);
					}
					if (NET_IS_SESSION_HOST())
					{
						Function_122(&Global_123099 + 172);
					}
					NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_FIFTH_GOAL", 0, 0, 0, 0);
					Function_433(10);
				}
			}
			else
			{
				Function_21();
			}
			break;
		
		case 0x0000000A:
			if (!Function_496() && Function_203(&iLocal_618))
			{
				Function_494(1);
				Function_493();
				Function_547(&uLocal_302, "KillSafeLightning", 0);
				Function_504(&uLocal_315, "KillPrizeLightning", 0);
				Function_197(&iLocal_618, 0,5f);
				NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_SIXTH_GOAL", 0, 0, 0, 0);
				Function_433(11);
			}
			break;
		
		case 0x0000000B:
			if (Function_549(&iLocal_618))
			{
				if (iLocal_299 >= 0)
				{
					if (!Function_502(2))
					{
						Function_329("MP_GY_Coffin_disappeared", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_299 = (iLocal_299 - 1);
					}
				}
				Function_191(&uLocal_302, &uLocal_304, &uLocal_308, &iLocal_349, &bLocal_351, &uLocal_352);
				Function_492(&uLocal_315, &uLocal_317);
				Function_494(2);
				Function_197(&iLocal_618, 0,5f);
				NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_SEVENTH_GOAL", 0, 0, 0, 0);
				Function_433(12);
			}
			break;
		
		case 0x0000000C:
			if (Function_502(4))
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_1008[GET_LOCAL_SLOT()]), 4);
				}
			}
			if ((StackVal || Function_485(Function_487(Local_988.f_52, 1), *(&bLocal_106 + 24), &iLocal_296)) && !Local_988.f_52)
			{
				if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
				{
					Function_14(&(iLocal_1008[GET_LOCAL_SLOT()]), 4);
				}
			}
			if ((Function_502(4) || Local_988.f_52) && !iLocal_1043)
			{
				if (Function_404(13, 1, 0x3f800000))
				{
					if (Local_988.f_52)
					{
						Function_197(&iLocal_618, 0,5f);
					}
					else
					{
						Function_197(&iLocal_618, 4.0f);
					}
					Function_484();
					if (!Function_496())
					{
						Function_553(Local_988.f_52, 3.0f, "", 0, 0, 0, 0);
						if (!Local_988.f_52)
						{
							Function_551(3.0f, "mp_gy_wave_completed", I2STR(bLocal_281));
						}
					}
					Function_617(bLocal_281);
					Function_483();
					NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_EIGHTH_GOAL", 0, 0, 0, 0);
					Function_433(13);
				}
			}
			else
			{
				Function_21();
			}
			break;
		
		case 0x0000000D:
			if (!Function_496() && Function_203(&iLocal_618))
			{
				Function_494(1);
				Function_494(4);
				Function_494(2);
				iLocal_300 = 0;
				Function_442(254, &Global_79340[25418] + 4, &Global_79340[25418] + 8, &Global_79340[25418] + 12, Function_101(3), 0);
				NET_LOG(bLocal_1042, "SepGY Stage01: %s", "Transitioning to GID_FIRST_GOAL", 0, 0, 0, 0);
				Function_433(6);
			}
			break;
		
		case 0x0000006A:
			Function_656(&Local_988 + 60, 1);
			Function_654(1);
			UI_EXIT("MPScoringDisplays");
			if (Function_404(101, 1, 0x3f800000))
			{
				Function_440(StackVal, *(&bLocal_106 + 24));
				Function_424();
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_HELP();
				Function_18();
				Local_576 = 1000;
				NET_LOG(bLocal_1042, "Mission Stage01", "Transitioning to SID_LAST_STAGE: GID_INITIALIZE", 0, 0, 0, 0);
				iLocal_566 = 101;
				Function_433(0);
			}
			break;
	}
	return;
}

void Function_440(struct<2> Param0) //Position: 0xEABF / 60095
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	return;
}

void Function_441(struct<2> Param0, bool bParam2) //Position: 0xEB7E / 60286
{
	var uVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (Function_219(StackVal, Param0))
	{
		return;
	}
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bParam2, Function_56(), 3, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(200.0f, 30.0f, 200.0f));
	uVar1 = CREATE_OBJECT_ITERATOR(&bParam2);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	ITERATE_IN_VOLUME(&uVar1, &uVar0);
	bVar3 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&bVar3))
	{
		uVar2 = GET_ACTOR_FROM_OBJECT(&bVar3);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (Function_217(&uVar2) && !Function_223(&uVar2))
			{
				if (IS_ACTOR_ALIVE(&uVar2))
				{
					DELETE_ALL_INVENTORY_FROM_ACTOR(&uVar2);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar2);
				}
			}
		}
		bVar3 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	DESTROY_VOLUME(&uVar0);
	return;
}

void Function_442(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) //Position: 0xEC30 / 60464
{
	bool bVar0;
	float fVar1;
	
	switch (uParam2)
	{
		case 0x00000000:
			Function_481(bParam0);
			fVar1 = Function_480(bParam0);
			Function_479(bParam0);
			Function_478(bParam0, &bVar0, &iParam4, 0);
			if (bVar0 > 2)
			{
				uParam3 = 0.0f;
				Function_472(bParam0, &uParam2, 1, 8006, 50.0f, 100.0f, 4, Function_477(0), 1);
				Function_471(bParam0);
			}
			else
			{
				uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(2));
				if (uParam3 == fVar1)
				{
					Function_470(bParam0, uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000001:
			Function_481(bParam0);
			fVar1 = Function_480(bParam0);
			Function_479(bParam0);
			Function_478(bParam0, &bVar0, &iParam4, 0);
			if (bVar0 > 4)
			{
				uParam3 = 0.0f;
				Function_472(bParam0, &uParam2, 2, 8007, 100.0f, 150.0f, 10, Function_477(0), 1);
				Function_471(bParam0);
			}
			else
			{
				uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(4));
				if (uParam3 == fVar1)
				{
					Function_470(bParam0, uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000002:
			Function_481(bParam0);
			fVar1 = Function_480(bParam0);
			Function_479(bParam0);
			Function_478(bParam0, &bVar0, &iParam4, 0);
			if (bVar0 > 10)
			{
				uParam3 = 0.0f;
				Function_472(bParam0, &uParam2, 3, 8008, 150.0f, 200.0f, 15, Function_477(0), 1);
				Function_471(bParam0);
			}
			else
			{
				uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(10));
				if (uParam3 == fVar1)
				{
					Function_470(bParam0, uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000003:
			Function_481(bParam0);
			fVar1 = Function_480(bParam0);
			Function_479(bParam0);
			Function_478(bParam0, &bVar0, &iParam4, &iParam5);
			if (bVar0 > 15)
			{
				bVar0 = 15;
			}
			iParam5 = Global_89112[246];
			if (&iParam5 > 10)
			{
				iParam5 = 10;
			}
			if (bVar0 <= 15 && &iParam5 <= 10)
			{
				uParam3 = 0.0f;
				Function_472(bParam0, &uParam2, 4, 8009, 200.0f, 250.0f, 500, Function_477(0), 1);
				Function_471(bParam0);
			}
			else
			{
				uParam3 = (TO_FLOAT((&iParam5 + bVar0)) / TO_FLOAT(25));
				if (uParam3 == fVar1)
				{
					Function_470(bParam0, uParam3, 1, bVar0, &iParam5, 4294967295, 4294967295);
				}
			}
			break;
		
		case 0x00000004:
			Function_481(bParam0);
			fVar1 = Function_480(bParam0);
			Function_479(bParam0);
			Global_79340[bParam018].f_36++;
			bVar0 = Global_79340[bParam018].f_36;
			if (bVar0 > 500)
			{
				uParam3 = 0.0f;
				Function_443(bParam0, &uParam2, &uParam1, 8010, 250.0f, Function_477(0));
				Function_471(bParam0);
			}
			else
			{
				uParam3 = (TO_FLOAT(bVar0) / TO_FLOAT(500));
				if (uParam3 == fVar1)
				{
					Function_470(bParam0, uParam3, 1, bVar0, 4294967295, 4294967295, 4294967295);
				}
			}
			break;
	}
}

void Function_443(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5) //Position: 0xEEF9 / 61177
{
	struct<4> Var0;
	
	Function_468(iParam0, 1);
	uParam1 = 10;
	uParam2 = 2;
	if (iParam3 != 4294967295)
	{
		Function_466(iParam3);
	}
	Function_83(&uParam4, 0, 1);
	Function_462(iParam0, 0);
	if (!IS_STRING_VALID(&iParam5))
	{
		iParam5 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_153(iParam0) };
	Function_457(&Var0, CEIL(&uParam4), &iParam5);
	Function_456(iParam0, 4);
	Function_444();
}

void Function_444() //Position: 0xEF6C / 61292
{
	if (!Function_69())
	{
		if (!Function_455(1, 3, 1, 1))
		{
			Function_446(1);
			Function_445(1, 8);
		}
	}
	else
	{
		Function_128(0);
	}
	return;
}

void Function_445(var uParam0, int iParam1) //Position: 0xEF95 / 61333
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = uParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && !Function_69())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_446(bool bParam0) //Position: 0xEFD7 / 61399
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_447();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_129();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_4(&Global_99144, 1);
		Function_4(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_447() //Position: 0xF02C / 61484
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_331())
	{
		Function_452(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_452(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_448(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_448(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_219(StackVal, Var0))
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

struct<8> Function_448(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0xF0E3 / 61667
{
	int iVar0;
	
	iVar0 = Function_450(&uParam2, &fParam3);
	if (Function_449(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_5(&Global_99144, 1);
			Function_4(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_5(&Global_99144, 2);
			Function_4(&Global_99144, 1);
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
		Function_5(&Global_99144, 2);
		Function_4(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_222();
	return StackVal, Function_222();
}

bool Function_449(int iParam0) //Position: 0xF1DB / 61915
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_450(bool bParam0, bool bParam1) //Position: 0xF1F1 / 61937
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
				fVar2 = Function_451(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_451(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_449(iVar0) && !&bParam1)
	{
		iVar0 = Function_450(&bParam0, 1);
	}
	return iVar0;
}

float Function_451(struct<2> Param0, struct<2> Param2) //Position: 0xF2BD / 62141
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_452(float fParam0, int iParam1) //Position: 0xF2DA / 62170
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_454(&Global_54076, &Var3);
	if (!Function_453(Global_46760[0]))
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
	if (!Function_453(Global_46760[2]))
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
	if (!Function_453(Global_46760[1]))
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
	if (!Function_453(Global_46796[1]))
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
	if (!Function_453(Global_46796[3]))
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
	if (!Function_453(Global_46796[2]))
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
	if (!Function_453(Global_46796[4]))
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
	if (!Function_453(Global_46816[0]))
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
	if (!Function_453(Global_46816[1]))
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
	if (!Function_453(Global_46816[2]))
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
	if (!Function_453(Global_46838[0]))
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
	if (!Function_453(Global_46850[0]))
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
	if (!Function_453(Global_46850[1]))
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
	if (!Function_453(Global_46850[2]))
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
	if (!Function_453(Global_46866[0]))
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
	if (!Function_453(Global_46866[1]))
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
	if (!Function_453(Global_46866[2]))
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
	if (!Function_453(Global_46894[2]))
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
	if (!Function_453(Global_46894[3]))
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
	if (!Function_453(Global_46894[0]))
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
	if (!Function_453(Global_46914[0]))
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
	if (!Function_453(Global_46926[2]))
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
	if (!Function_453(Global_46926[1]))
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
	if (!Function_453(Global_46926[0]))
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
	if (!Function_453(Global_46838[1]))
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
	if (!Function_453(Global_46894[1]))
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
	Function_5(&Global_99144, 2);
	Function_4(&Global_99144, 1);
	iParam1 = 0;
	if (Function_219(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_453(int iParam0) //Position: 0xFB06 / 64262
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_47(uVar0, 0x1000000) || Function_47(uVar0, 0x2000000)) || Function_47(uVar0, 0x4000000)) || !Function_47(uVar0, 0x10000000));
}

void Function_454(var uParam0, int iParam1) //Position: 0xFB41 / 64321
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_455(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0xFB50 / 64336
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

void Function_456(int iParam0, bool bParam1) //Position: 0xFBFF / 64511
{
	Function_4(&Global_79340[iParam018] + 40, bParam1);
	return;
}

void Function_457(var uParam0, bool bParam1, int iParam2) //Position: 0xFC14 / 64532
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	uVar0 = Function_38();
	iVar1 = 0;
	if (DECOR_GET_INT_VERBOSE(&uVar0, Function_461(), &iVar1))
	{
		iVar2 = iVar1 & 1023;
	}
	Var3 = { StackVal, StackVal, StackVal, Function_460(iVar2) };
	DECOR_SET_INT(&uVar0, &Var3, STRING_TO_HASH(&uParam0));
	Var3 = { StackVal, StackVal, StackVal, Function_459(iVar2) };
	DECOR_SET_INT(&uVar0, &Var3, STRING_TO_HASH(&iParam2));
	Var3 = { StackVal, StackVal, StackVal, Function_458(iVar2) };
	DECOR_SET_INT(&uVar0, &Var3, bParam1);
	DECOR_SET_INT(&uVar0, Function_461(), iVar1 + 1);
	return;
}

struct<16> Function_458(int iParam0) //Position: 0xFC8E / 64654
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_X", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_459(int iParam0) //Position: 0xFCAF / 64687
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_T", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<16> Function_460(int iParam0) //Position: 0xFCD0 / 64720
{
	char* cVar0[16];
	
	strcpy(&cVar0, "CQueue_H", 16);
	straddi(&cVar0, iParam0, 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_461() //Position: 0xFCF1 / 64753
{
	return "CQueue_Count";
}

void Function_462(int iParam0, int iParam1) //Position: 0xFD06 / 64774
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	
	if (((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_465(iParam0)) && iParam1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		CLEAR_JOURNAL_ENTRY(Function_154(iParam0));
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_464(iParam0) };
		Var7 = { StackVal, StackVal, StackVal, Function_153(iParam0) };
		UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
		Var7 = { StackVal, StackVal, StackVal, Function_463(iParam0) };
		APPEND_JOURNAL_ENTRY_DETAIL(Function_154(iParam0), &Var7, 0, 2, false);
		PREPEND_JOURNAL_ENTRY(Function_154(iParam0), true);
		SET_JOURNAL_ENTRY_PROGRESS(Function_154(iParam0), 1.0f, false, 0);
	}
	return;
}

struct<16> Function_463(int iParam0) //Position: 0xFD8A / 64906
{
	char* cVar0[16];
	
	cVar0 = { StackVal, StackVal, StackVal, Function_153(iParam0) };
	stradd(&cVar0, "_des", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_464(int iParam0) //Position: 0xFDAA / 64938
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_79340[iParam018] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_TITLE", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

bool Function_465(int iParam0) //Position: 0xFDDC / 64988
{
	switch (iParam0)
	{
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000044:
		case 0x00000048:
		case 0x0000004C:
		case 0x0000004F:
		case 0x00000052:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
		case 0x0000005A:
		case 0x0000005D:
		case 0x00000060:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000068:
		case 0x0000006B:
		case 0x0000006E:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000076:
		case 0x00000079:
		case 0x0000007C:
		case 0x0000007F:
		case 0x00000080:
		case 0x00000081:
		case 0x00000084:
		case 0x00000087:
		case 0x0000008A:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000092:
		case 0x00000095:
		case 0x00000098:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000A0:
		case 0x000000A1:
		case 0x000000A2:
		case 0x000000A3:
		case 0x000000A4:
		case 0x000000A5:
		case 0x000000A6:
		case 0x000000A7:
		case 0x000000A8:
		case 0x000000AB:
		case 0x000000AE:
		case 0x000000B1:
		case 0x000000B4:
		case 0x000000B7:
		case 0x000000BA:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_466(int iParam0) //Position: 0xFF5A / 65370
{
	Function_467(iParam0, 1);
	return;
}

void Function_467(int iParam0, bool bParam1) //Position: 0xFF66 / 65382
{
	int iVar0;
	
	iVar0 = (iParam0 % 1000);
	if (&bParam1)
	{
		Function_5(&Global_132499 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_93((iVar0 % 32)));
	}
	else
	{
		Function_4(&Global_132499 + 4[(iParam0 / 1000)10][(iVar0 / 32)], Function_93((iVar0 % 32)));
	}
	return;
}

void Function_468(bool bParam0, bool bParam1) //Position: 0xFFBD / 65469
{
	bool bVar0;
	char* cVar1[16];
	
	bVar0 = false;
	cVar1 = Function_469();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_INTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_FLOATSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			(*&Global_79340[bParam018] + 44)[bVar0] = 0.0f;
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_TIMERSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
		while (bVar0 <= 11)
		{
			strcpy(&cVar2, INT_TO_STRING(bParam0), 16);
			stradd(&cVar2, "_OBJECTSLOT", 16);
			stradd(&cVar2, INT_TO_STRING(bVar0), 16);
			if (DECOR_CHECK_EXIST(&cVar1, &cVar2))
			{
				DECOR_REMOVE(&cVar1, &cVar2);
			}
			bVar0++;
		}
	}
	if (&bParam1)
	{
		Global_79340[bParam018].f_36 = 0;
	}
	return;
}

bool Function_469() //Position: 0x10117 / 65815
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&iVar0))
	{
		iVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &iVar0;
}

void Function_470(bool bParam0, float fParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x10168 / 65896
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[24];
	char* cVar18[16];
	char* cVar22[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_154(bParam0), fParam1, true, 0);
	if (&bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_153(bParam0), 6);
		stradd(&cVar0, "_info", 24);
		if (&bParam3 >= 4294967295)
		{
			memcpy(&cVar6, StackVal, *(&Global_79340[bParam018] + 16), 6);
			stradd(&cVar6, "_num", 24);
			UI_SET_STRING(&cVar6, INT_TO_STRING(&bParam3));
		}
		if (&iParam4 >= 4294967295)
		{
			memcpy(&cVar12, StackVal, *(&Global_79340[bParam018] + 16), 6);
			stradd(&cVar12, "_num2", 24);
			UI_SET_STRING(&cVar12, INT_TO_STRING(&iParam4));
		}
		if (&iParam5 >= 4294967295)
		{
			memcpy(&cVar18, StackVal, *(&Global_79340[bParam018] + 16), 4);
			stradd(&cVar18, "_num3", 16);
			UI_SET_STRING(&cVar18, INT_TO_STRING(&iParam5));
		}
		if (&iParam6 >= 4294967295)
		{
			memcpy(&cVar22, StackVal, *(&Global_79340[bParam018] + 16), 4);
			stradd(&cVar22, "_num4", 16);
			UI_SET_STRING(&cVar22, INT_TO_STRING(&iParam6));
		}
		APPEND_JOURNAL_ENTRY_DETAIL(Function_154(bParam0), &cVar0, 2, 2, true);
		Function_151(Function_154(bParam0), 0);
	}
}

void Function_471(bool bParam0) //Position: 0x10269 / 66153
{
	Function_481(bParam0);
	return;
}

void Function_472(bool bParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, var uParam7, bool bParam8) //Position: 0x10274 / 66164
{
	struct<4> Var0;
	
	if (!IS_STRING_VALID(&uParam7))
	{
		uParam7 = "challenge_04_128";
	}
	Var0 = { StackVal, StackVal, StackVal, Function_153(bParam0) };
	Function_457(&Var0, CEIL(&fParam4), &uParam7);
	uParam1 = iParam2;
	if (&bParam8)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_154(bParam0), 0.0f, false, 0);
	}
	else
	{
		SET_JOURNAL_ENTRY_PROGRESS(Function_154(bParam0), (TO_FLOAT(Global_79340[bParam018].f_36) / TO_FLOAT(&iParam6)), false, 0);
	}
	Function_473(bParam0, &iParam6, CEIL(&fParam5), 0);
	if (&iParam3 != 4294967295)
	{
		Function_466(&iParam3);
	}
	Function_456(bParam0, 4);
	Function_444();
}

void Function_473(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x10310 / 66320
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	struct<6> Var11;
	struct<6> Var17;
	
	if ((StackVal && (iParam0 <= 58 && iParam0 >= 186) != 10) && !Function_465(iParam0))
	{
		bVar0 = true;
	}
	CLEAR_JOURNAL_ENTRY(Function_154(iParam0));
	if ((bParam3 && Function_152(iParam0, 4)) || !&bParam3)
	{
		if (!bVar0)
		{
			PREPEND_JOURNAL_ENTRY(Function_154(iParam0), false);
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_464(iParam0) };
			Var7 = { StackVal, StackVal, StackVal, Function_153(iParam0) };
			UI_SET_STRING(&Var1, UI_GET_STRING(&Var7));
			Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_476(iParam0) };
			Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_475(iParam0) };
			UI_SET_STRING(&Var11, I2STR(&uParam1));
			UI_SET_STRING(&Var17, I2STR(&uParam2));
			Var7 = { StackVal, StackVal, StackVal, Function_463(iParam0) };
			PREPEND_JOURNAL_ENTRY_DETAIL(Function_154(iParam0), &Var7, 0, 2, Function_152(iParam0, 4));
			if (!&bParam3)
			{
				Function_474(iParam0, 4);
			}
		}
	}
}

void Function_474(int iParam0, bool bParam1) //Position: 0x103D3 / 66515
{
	Function_5(&Global_79340[iParam018] + 40, bParam1);
	return;
}

struct<24> Function_475(int iParam0) //Position: 0x103E8 / 66536
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_79340[iParam018] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_XP", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_476(int iParam0) //Position: 0x10417 / 66583
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Global_79340[iParam018] + 16), 6);
	stradd(&cVar0, "_DYNAMIC_GOAL", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_477(bool bParam0) //Position: 0x10448 / 66632
{
	if (&bParam0)
	{
		return "UN_UNDEADWAVES_64";
	}
	return "UN_UNDEADWAVES_128";
}

void Function_478(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x10481 / 66689
{
	int iVar0;
	
	iVar0 = (&iParam2 - Global_89632[bParam0]);
	if (iVar0 >= 0)
	{
		Global_89112[bParam0] = 0;
		Global_89632[bParam0] = &iParam2;
	}
	else if (&iParam3 == 0)
	{
		Global_89112[bParam0]++;
	}
	bParam1 = Global_89112[bParam0];
}

void Function_479(bool bParam0) //Position: 0x104D9 / 66777
{
	if (Global_89632[bParam0] <= 0)
	{
		Global_89632[bParam0] = 0;
	}
	if (Global_89112[bParam0] <= 0)
	{
		Global_89112[bParam0] = 0;
	}
	return;
}

float Function_480(bool bParam0) //Position: 0x10509 / 66825
{
	return Global_79340[bParam018].f_12;
}

void Function_481(bool bParam0) //Position: 0x10519 / 66841
{
	Function_482(bParam0, 0, Global_79340[bParam018].f_36);
	return;
}

int Function_482(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10530 / 66864
{
	char* cVar0[16];
	bool bVar4;
	
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_INTSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_469();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		return DECOR_SET_INT(&bVar4, &cVar0, bParam2);
	}
	LOG_ERROR("PVP_STORE_INT: failed to store int value in slot");
	return 0;
}

void Function_483() //Position: 0x105A8 / 66984
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SLOT_VALID(false))
	{
		iVar0 = (iVar0 + Function_116(0));
	}
	if (IS_SLOT_VALID(true))
	{
		iVar0 = (iVar0 + Function_116(1));
	}
	if (IS_SLOT_VALID(2))
	{
		iVar0 = (iVar0 + Function_116(2));
	}
	if (IS_SLOT_VALID(3))
	{
		iVar0 = (iVar0 + Function_116(3));
	}
	iVar0 = iVar0;
	bLocal_490 = ROUND(Function_115(4));
	return;
}

void Function_484() //Position: 0x105FF / 67071
{
	bLocal_281++;
	if (bLocal_281 > 14)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(94))
		{
			AWARD_ACHIEVEMENT(94);
		}
	}
	return;
}

int Function_485(struct<2> Param0, int iParam2) //Position: 0x10624 / 67108
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(&iVar1))
	{
		iVar0 = (StackVal + Function_486(iVar0, Param0, &iVar1, 150.0f));
	}
	iVar1 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(&iVar1))
	{
		iVar0 = (StackVal + Function_486(iVar0, Param0, &iVar1, 150.0f));
	}
	iVar1 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(&iVar1))
	{
		iVar0 = (StackVal + Function_486(iVar0, Param0, &iVar1, 150.0f));
	}
	iVar1 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(&iVar1))
	{
		iVar0 = (StackVal + Function_486(iVar0, Param0, &iVar1, 150.0f));
	}
	iVar1 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(&iVar1))
	{
		iVar0 = (StackVal + Function_486(iVar0, Param0, &iVar1, 150.0f));
	}
	iParam2 = iVar0;
	if (iVar0 >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_486(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x10727 / 67367
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	if (Function_219(StackVal, Param0) || &bParam3 >= 0.0f)
	{
		return 0;
	}
	iVar0 = 0;
	uVar1 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam2, Function_56(), 3, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(&bParam3, 20.0f, &bParam3));
	uVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), GET_AMBIENT_LAYOUT(), 15, 1);
	uVar3 = CREATE_OBJECT_ITERATOR(&iParam2);
	ITERATE_ON_OBJECT_TYPE(&uVar3, 15);
	ITERATE_IN_VOLUME(&uVar3, &uVar1);
	uVar5 = START_OBJECT_ITERATOR(&uVar3);
	while (IS_OBJECT_VALID(&uVar5))
	{
		iVar4 = GET_ACTOR_FROM_OBJECT(&uVar5);
		if (IS_ACTOR_VALID(&iVar4))
		{
			if (Function_217(&iVar4) && !IS_OBJECT_IN_OBJECTSET(&uVar5, &uVar2))
			{
				if (IS_ACTOR_ALIVE(&iVar4))
				{
					ADD_OBJECT_TO_OBJECTSET(&uVar5, &uVar2);
				}
			}
		}
		uVar5 = OBJECT_ITERATOR_NEXT(&uVar3);
	}
	iVar0 = GET_OBJECTSET_SIZE(&uVar2);
	DESTROY_ITERATOR(&uVar3);
	DESTROY_VOLUME(&uVar1);
	DESTROY_OBJECTSET(&uVar2);
	return iVar0;
}

int Function_487(bool bParam0, int iParam1) //Position: 0x10803 / 67587
{
	if (bParam0)
	{
		return 0;
	}
	if (Function_488(iParam1) < 1)
	{
		return 1;
	}
	return 0;
}

int Function_488(int iParam0) //Position: 0x1081C / 67612
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + Function_489(&iLocal_360 + 88, &iParam0));
	iVar0 = (iVar0 + Function_489(&iLocal_386 + 88, &iParam0));
	iVar0 = (iVar0 + Function_489(&iLocal_412 + 88, &iParam0));
	iVar0 = (iVar0 + Function_489(&iLocal_438 + 88, &iParam0));
	iVar0 = (iVar0 + Function_489(&iLocal_464 + 88, &iParam0));
	return iVar0;
}

int Function_489(var uParam0, int iParam1) //Position: 0x1087C / 67708
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			iVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_VALID(&iVar2))
			{
				iVar0 = (iVar0 + ROUND(GET_ACTOR_MAX_HEALTH(&iVar2)));
				if (!Function_223(&iVar2))
				{
					DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar2);
				}
				if (0 == GET_TASK_STATUS(&iVar2, 90))
				{
					if (Function_223(&iVar2))
					{
						TASK_GO_NEAR_ACTORSET(&iVar2, Function_491(), 10.0f, 2);
					}
					else
					{
						TASK_GO_NEAR_ACTORSET(&iVar2, Function_491(), 5.0f, 2);
					}
				}
				if (Function_217(&iVar2) && !Function_490(&iVar2))
				{
					if (!DECOR_CHECK_EXIST(&iVar2, "WakeUp"))
					{
						DECOR_SET_BOOL(&iVar2, "WakeUp", true);
					}
				}
				if ((Function_217(&iVar2) && IS_ACTOR_ALIVE(&iVar2)) && iParam1)
				{
					if (GET_ACTOR_HEALTH(&iVar2) < 10.0f)
					{
						SET_ACTOR_HEALTH(&iVar2, 10.0f);
					}
					if (GET_ACTOR_MAX_HEALTH(&iVar2) < 10.0f)
					{
						SET_ACTOR_MAX_HEALTH(&iVar2, 10.0f);
					}
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

bool Function_490(int iParam0) //Position: 0x1098D / 67981
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1240 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

var Function_491() //Position: 0x109AE / 68014
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!IS_LAYOUTREF_VALID(&iVar0))
	{
		iVar0 = CREATE_LAYOUT("PlayerLayout");
		if (!IS_LAYOUTREF_VALID(&iVar0))
		{
			LOG_WARNING("I created an INVALID PlayerLayout!!!");
		}
	}
	return &iVar0;
}

void Function_492(var uParam0, var uParam1) //Position: 0x10A1F / 68127
{
	if (IS_OBJECT_VALID(&uParam0))
	{
		DESTROY_OBJECT(&uParam0);
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		DESTROY_OBJECT(&uParam1);
	}
	return;
}

void Function_493() //Position: 0x10A47 / 68167
{
	Function_164(&iLocal_360);
	Function_164(&iLocal_386);
	Function_164(&iLocal_412);
	Function_164(&iLocal_438);
	Function_164(&iLocal_464);
	Function_40(8192);
	Function_340(16384);
	return;
}

void Function_494(int iParam0) //Position: 0x10A77 / 68215
{
	Function_4(&(iLocal_1008[0]), iParam0);
	Function_4(&(iLocal_1008[1]), iParam0);
	Function_4(&(iLocal_1008[2]), iParam0);
	Function_4(&(iLocal_1008[3]), iParam0);
	return;
}

void Function_495(int iParam0) //Position: 0x10AA9 / 68265
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			Function_401("UN_Narr_WaveComp1", 0);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			Function_401("UN_Narr_WaveComp2", 0);
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			Function_401("UN_Narr_WaveComp3", 0);
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			Function_401("UN_Narr_WaveComp4", 0);
			break;
		
		default:
			Function_401("UN_Narr_WaveComp5", 0);
			break;
	}
	return;
}

bool Function_496() //Position: 0x10B7F / 68479
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 3)
	{
		if (IS_SLOT_VALID(bVar1))
		{
			uVar2 = GET_SLOT_ACTOR(bVar1);
			if (IS_ACTOR_VALID(&uVar2))
			{
				if (IS_ACTOR_ALIVE(&uVar2))
				{
					iVar0++;
				}
			}
		}
		bVar1++;
	}
	if (iVar0 < 0)
	{
		return 1;
	}
	return 0;
}

void Function_497(struct<5> Param0) //Position: 0x10BCB / 68555
{
	Param0.f_4 = (StackVal + fParam1);
	return;
}

float Function_498(float fParam0) //Position: 0x10BDE / 68574
{
	if (fParam0 < 15.0f)
	{
		return 0.0f;
	}
	return (16.0f - fParam0);
}

float Function_499(int iParam0) //Position: 0x10BF9 / 68601
{
	if (Function_123(&iParam0))
	{
		return Function_204(&iParam0);
	}
	return 0.0f;
}

int Function_500() //Position: 0x10C10 / 68624
{
	return Function_501(&iLocal_252, (Function_370() - Function_675()));
}

int Function_501(struct<5> Param0) //Position: 0x10C22 / 68642
{
	return StackVal <= iParam1;
}

bool Function_502(bool bParam0) //Position: 0x10C30 / 68656
{
	return (((Function_47(iLocal_1008[0], bParam0) || Function_47(iLocal_1008[1], bParam0)) || Function_47(iLocal_1008[2], bParam0)) || Function_47(iLocal_1008[3], bParam0));
}

void Function_503() //Position: 0x10C65 / 68709
{
	if (!iLocal_280 && Function_502(2))
	{
		iLocal_280 = 1;
		if (NET_IS_SESSION_HOST())
		{
			Function_497(&Local_988 + 60, 60.0f);
		}
	}
	return;
}

void Function_504(var uParam0, var uParam1, bool bParam2) //Position: 0x10C8E / 68750
{
	if (bParam2)
	{
		return;
	}
	if (IS_OBJECT_VALID(&uParam0))
	{
		UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, &uParam1, "script_lightning_marker", &uParam0, Vector(0.0f, 0,2f, 0.0f), 1, false), Vector(0.0f, 0.0f, 0.0f));
	}
	return;
}

void Function_505(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x10CDA / 68826
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<5> Var8;
	
	if (bParam7)
	{
		return;
	}
	if ((iParam0 + 1 % 3) == 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(bParam5, &uParam4);
		if (IS_OBJECT_VALID(&uVar0))
		{
			uVar5 = GET_OBJECT_NAME(&uVar0);
			GET_OBJECT_POSITION(&uVar0, &Var1);
			GET_OBJECT_ORIENTATION(&uVar0, &Var3);
			iVar6 = CLEAR_AREA_OF_GRASS(Var1, 2,5f);
			uVar7 = CLEAR_AREA_OF_TREE_TYPE(Var1, 2,5f, "");
			switch (bParam6)
			{
				case 0x00000001:
					Var8 = 34;
					Var8.f_4 = 100;
					break;
				
				case 0x00000002:
					Var8 = 18;
					Var8.f_4 = 100;
					break;
				
				case 0x00000003:
					Var8 = 11;
					Var8.f_4 = 100;
					break;
			}
			Function_510(StackVal, StackVal, &uParam2, &uParam3, &uParam1, Var1, Var3, 1, 1, 1, &uVar5, iVar6, uVar7);
			Function_507(&uParam3, &Var8, bParam6);
			bVar9 = GET_BLIP_ON_OBJECT(&uParam3);
			REMOVE_BLIP(&bVar9);
			bVar9 = ADD_BLIP_FOR_OBJECT(&uParam3, 335, 0f, 2, 0);
			SET_BLIP_NAME(&bVar9, GET_WEAPON_DISPLAY_NAME(Var8));
			Function_401("UN_Narr_NewWeapSpawn", 0);
			Function_506(3.0f, "mp_gy_weapon_spawned", 0, 0, 0, 0, 2, 0);
		}
	}
}

void Function_506(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x10E13 / 69139
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	PRINT_BIG_FORMAT(bParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
}

void Function_507(var uParam0, int iParam1, var uParam2) //Position: 0x10E7F / 69247
{
	bool bVar0;
	
	if (Function_263(iParam1))
	{
		bVar0 = Function_509(&iParam1, uParam2);
		DECOR_SET_INT(&uParam0, Function_508(), bVar0);
	}
	return;
}

var Function_508() //Position: 0x10EA3 / 69283
{
	return "PackedWeapon";
}

var Function_509(struct<5> Param0) //Position: 0x10EB8 / 69304
{
	return ((StackVal || SHIFT_LEFT(Param0, Function_260())) || SHIFT_LEFT(bParam1, Function_260() + 8));
}

void Function_510(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) //Position: 0x10ED6 / 69334
{
	Function_518(StackVal, StackVal, &uParam0, &uParam1, uParam7, &uParam2, Param3, Param5, &uParam10);
	Function_514(&uParam0, &uParam1, uParam7, uParam8, uParam9);
	DECOR_SET_INT(&uParam1, Function_513(), Function_512(uParam8, uParam9, uParam7));
	DECOR_SET_INT(&uParam1, Function_186(), Function_511(&uParam11, &uParam12));
}

var Function_511(var uParam0, bool bParam1) //Position: 0x10F31 / 69425
{
	return (uParam0 || SHIFT_LEFT(bParam1, 16));
}

var Function_512(bool bParam0, bool bParam1, bool bParam2) //Position: 0x10F41 / 69441
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		iVar0 += 2;
	}
	return (iVar0 || SHIFT_LEFT(bParam2, 2));
}

var Function_513() //Position: 0x10F66 / 69478
{
	return "PackedMetadata";
}

void Function_514(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4) //Position: 0x10F7D / 69501
{
	struct<2> Var0;
	var uVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	switch (iParam2)
	{
		case 0x00000001:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 379, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&bParam1, 379, 0f, 2, 0);
				if (DECOR_GET_INT_VERBOSE(&bParam1, Function_508(), &uVar4))
				{
					Function_259(uVar4, &bVar5);
					SET_BLIP_NAME(&iVar3, GET_WEAPON_DISPLAY_NAME(bVar5));
				}
			}
			if (bParam4)
			{
				Function_517();
				Var0 = Function_517();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 0, Var0, 0);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 380, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&bParam1, 380, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_516();
				Var0 = Function_516();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 0, Var0, 0);
			}
			break;
		
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			if (bParam3)
			{
				uVar2 = ADD_BLIP_FOR_OBJECT(&uParam0, 381, 0f, 2, 0);
				iVar3 = ADD_BLIP_FOR_OBJECT(&bParam1, 381, 0f, 2, 0);
			}
			if (bParam4)
			{
				Function_515();
				Var0 = Function_515();
				Var0.f_4 = (StackVal * 2.0f);
				CREATE_OBJECT_GLOW(&uParam0, 3, Var0, 0);
			}
			break;
	}
	if (bParam3)
	{
		SET_BLIP_MAX_DISTANCE(&uVar2, 1.0f);
		UNK_0x1E98AFEC(&uVar2, 1);
		UNK_0xFF3DB575(&iVar3, 1);
	}
}

struct<8> Function_515() //Position: 0x110B9 / 69817
{
	return StackVal, Vector(0.0f, 0,101f, -0,195f);
}

struct<8> Function_516() //Position: 0x110CB / 69835
{
	return StackVal, Vector(0.0f, 0,127f, -0,177f);
}

struct<8> Function_517() //Position: 0x110DD / 69853
{
	return StackVal, Vector(0.0f, 0,158f, -0,163f);
}

int Function_518(var uParam0, char* cParam1, int iParam2, var uParam3, struct<2> Param4, struct<2> Param6, char* cParam8) //Position: 0x110EF / 69871
{
	var uVar0;
	struct<2> Var1;
	char* cVar3[64];
	
	DISABLE_GRINGO_STREAMING_CHECKS();
	switch (iParam2)
	{
		case 0x00000002:
			uVar0 = Function_524();
			Function_516();
			Var1 = Function_516();
			break;
		
		case 0x00000001:
			uVar0 = Function_523();
			Function_517();
			Var1 = Function_517();
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000005:
			uVar0 = Function_522();
			Function_515();
			Var1 = Function_515();
			break;
	}
	if (IS_STRING_VALID(&cParam8))
	{
		strcpy(&cVar3, Function_521(), 64);
		stradd(&cVar3, &cParam8, 64);
	}
	else
	{
		memcpy(&cVar3, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_519(Function_521()), 16);
	}
	NET_OBJECT_REPLICATION_MODE_START(17, 0);
	uParam0 = CREATE_PROP_IN_LAYOUT(&uParam3, &cVar3, &uVar0, Param4, Param6, false);
	SNAP_OBJECT_TO_GROUND(&uParam0, 1.0f, false, 1092616192);
	cParam1 = CREATE_GRINGO_ON_OBJECT(StackVal, &uParam0, Function_187(), "$/content/scripting/gringo/SimpleGringo/Giveaway_Footlocker", Var1, Vector(0.0f, 0.0f, 0.0f));
	NET_OBJECT_REPLICATION_MODE_END(17);
	ENABLE_GRINGO_STREAMING_CHECKS();
	return 1;
}

struct<32> Function_519(char* cParam0) //Position: 0x111FC / 70140
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_520("0", &cVar8, ""), 4);
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

struct<32> Function_520(char* cParam0) //Position: 0x11268 / 70248
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

var Function_521() //Position: 0x1128A / 70282
{
	return "PBox_";
}

var Function_522() //Position: 0x11298 / 70296
{
	return "p_gen_crateMultiplayerItem01x";
}

var Function_523() //Position: 0x112BE / 70334
{
	return "p_gen_crateMultiplayerWeapon01x";
}

var Function_524() //Position: 0x112E6 / 70374
{
	return "p_gen_crateMultiplayerAmmo01x";
}

void Function_525(int iParam0, int iParam1, var uParam2, struct<2> Param3, struct<2> Param5, bool bParam7, int iParam8, int iParam9, float fParam10, float fParam11) //Position: 0x1130C / 70412
{
	int iVar0;
	
	if (!&bParam7)
	{
		Function_538(&iParam1, ROUND(Function_115(4)));
	}
	iVar0 = &iParam8;
	if (&bParam7)
	{
		iVar0 = 0;
	}
	switch (uParam2)
	{
		case 0x00000000:
			Function_537(StackVal, StackVal, Param3, Param5, &iParam0, iVar0, &iParam9, &fParam10, &fParam11);
			uParam2 = 1;
			break;
		
		case 0x00000001:
			Function_536(StackVal, StackVal, Param3, Param5, iVar0, &iParam9, &fParam10, &fParam11);
			uParam2 = 2;
			break;
		
		case 0x00000002:
			Function_535(StackVal, StackVal, Param3, Param5, iVar0, &iParam9, &fParam10, &fParam11);
			uParam2 = 3;
			break;
		
		case 0x00000003:
			Function_534(StackVal, StackVal, Param3, Param5, iVar0, &iParam9, &fParam10, &fParam11);
			uParam2 = 4;
			break;
		
		case 0x00000004:
			Function_526(StackVal, StackVal, Param3, Param5, iVar0, &iParam9, &fParam10, &fParam11);
			uParam2 = 0;
			break;
	}
}

void Function_526(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x113F6 / 70646
{
	var uVar0;
	
	uVar0 = 1;
	Function_527(StackVal, StackVal, "Animal Squad", &iLocal_464, Param0, Param2, &uVar0, 0, 0, &bParam4, &bParam5, &bParam6, &uParam7, Local_523.f_12);
}

void Function_527(var uParam0, struct<85> Param1) //Position: 0x11435 / 70709
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	char* cVar5[16];
	char* cVar9[16];
	bool bVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var17;
	var uVar19;
	
	if (!Function_533(&Param1))
	{
		if (Function_549(&Param1 + 56))
		{
			if (SQUAD_IS_VALID(&Param1 + 88))
			{
				if (Param1.f_48 > Param1.f_40 || Param1.f_84)
				{
					if (SQUAD_GET_SIZE(&Param1 + 88) <= Param1.f_44)
					{
						iVar0 = (Param1.f_44 - SQUAD_GET_SIZE(&Param1 + 88));
						if (iVar0 >= &iParam13)
						{
							iVar0 = &iParam13;
						}
						iVar2 = 0;
						while (iVar2 < (iVar0 - 1))
						{
							if (&bParam9)
							{
								uVar19 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param1 + 16);
								if (!IS_OBJECT_VALID(&uVar19))
								{
								}
							}
							else if (IS_SLOT_VALID(Param1.f_52))
							{
								uVar19 = GET_OBJECT_FROM_ACTOR(GET_SLOT_ACTOR(Param1.f_52));
							}
							if (IS_OBJECT_VALID(&uVar19) || bParam10)
							{
								if (&bParam10)
								{
									Var15 = Param2;
									Var17 = Param4;
								}
								else
								{
									GET_OBJECT_POSITION(&uVar19, &Var15);
									GET_OBJECT_ORIENTATION(&uVar19, &Var17);
								}
								bVar1 = Function_532(StackVal, Var15, 0);
								strcpy(&cVar5, ".", 16);
								if (IS_SLOT_VALID(bVar1))
								{
									if (bVar1 == GET_LOCAL_SLOT())
									{
										stradd(&cVar5, I2STR(Param1.f_52), 16);
										stradd(&cVar5, "_", 16);
										stradd(&cVar5, GET_OBJECT_NAME(GET_OBJECT_FROM_SQUAD(&Param1 + 88)), 16);
										stradd(&cVar5, ".", 16);
										stradd(&cVar5, I2STR(Param1.f_48), 16);
										if (&bParam7)
										{
											bVar13 = uParam6[RAND_INT_RANGE(false, 11)];
										}
										else
										{
											bVar13 = Function_531(Param1.f_24, Param1.f_28);
										}
										NET_OBJECT_REPLICATION_MODE_START(15, 6);
										if (Param1.f_80)
										{
											if (&bParam8)
											{
												uVar3 = Function_530(StackVal, Var15, &Param1, bVar13, &cVar5, &bParam11, &uParam12);
											}
											else
											{
												uVar3 = Function_529(StackVal, Var15, &Param1, bVar13, &cVar5, &bParam11, &uParam12);
											}
										}
										else
										{
											uVar3 = CREATE_ACTOR_IN_LAYOUT(&Param1, &cVar5, bVar13, Var15, Var17);
										}
										if (IS_ACTOR_VALID(&uVar3))
										{
											SQUAD_JOIN(&uVar3, &Param1 + 88);
											Stack.Push(&uVar3);
											Stack.Push(Param1.f_52);
											Call_Loc(Param1.f_32);
											if (Param1.f_76)
											{
												strcpy(&cVar9, GET_OBJECT_NAME(GET_OBJECT_FROM_SQUAD(&Param1 + 96)), 16);
												stradd(&cVar9, I2STR(Param1.f_48), 16);
												bVar14 = Function_531(976, 991);
												uVar4 = CREATE_ACTOR_IN_LAYOUT(&Param1, &cVar9, bVar14, Var15, Var17);
												if (IS_ACTOR_VALID(&uVar4))
												{
													ACCESSORIZE_HORSE(&uVar4, 4);
													ACTOR_MOUNT_ACTOR(&uVar3, &uVar4);
													SQUAD_JOIN(&uVar4, &Param1 + 96);
													TASK_FLEE_ACTORSET(&uVar4, Function_491(), -1.0f, -1.0f, 0, 0, 0);
													RELEASE_ACTOR(&uVar4);
												}
											}
										}
										NET_OBJECT_REPLICATION_MODE_END(15);
									}
								}
							}
							Param1.f_48++;
							if (Param1.f_80)
							{
								if ((Param1.f_48 % Param1.f_44) == 0)
								{
									AMBIENT_RESET_USED_CELLS();
								}
							}
							Param1.f_52++;
							if (Param1.f_52 > 4)
							{
								Param1.f_52 = 0;
							}
							iVar2++;
						}
					}
					Function_197(&Param1 + 56, Param1.f_72);
				}
			}
		}
	}
	Function_528(&Param1);
}

int Function_528(struct<33> Param0) //Position: 0x1170B / 71435
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	if (!IS_OBJECT_VALID(&Param0 + 8))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Param0))
	{
		return 0;
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 8))
	{
		uVar4 = CREATE_OBJECT_ITERATOR(&Param0);
		if (!IS_ITERATOR_VALID(&uVar4))
		{
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(&uVar4, &Param0 + 8);
		uVar5 = START_OBJECT_ITERATOR(&uVar4);
		while (IS_OBJECT_VALID(&uVar5))
		{
			uVar7 = GET_EVENT_FROM_OBJECT(&uVar5);
			uVar6 = GET_EVENT_TARGET_AS_OBJECT(&uVar7);
			uVar8 = GET_ACTOR_FROM_OBJECT(&uVar6);
			if (IS_ACTOR_VALID(&uVar8))
			{
				uVar1 = GET_ACTOR_NAME(&uVar8);
				iVar0++;
				if (STRING_CONTAINS_STRING(&uVar1, "NPC"))
				{
					STRING_CLEAR_TOKENIZER();
					SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
					uVar2 = STRING_GET_TOKEN(0);
					iVar3 = STRING_TO_INT(&uVar2);
					Stack.Push(&uVar8);
					Stack.Push(iVar3);
					Call_Loc(Param0.f_32);
					SQUAD_JOIN(&uVar8, &Param0 + 88);
				}
				else if (STRING_CONTAINS_STRING(&uVar1, "Horse"))
				{
					TASK_FLEE_ACTORSET(&uVar8, Function_491(), -1.0f, -1.0f, 0, 0, 0);
					RELEASE_ACTOR(&uVar8);
					SQUAD_JOIN(&uVar8, &Param0 + 96);
				}
			}
			uVar5 = OBJECT_ITERATOR_NEXT(&uVar4);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 8);
		EVENT_TRAP_CLEAR_EVENTS(&Param0 + 8);
		DESTROY_ITERATOR(&uVar4);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

var Function_529(struct<2> Param0, var uParam2, bool bParam3, var uParam4, bool bParam5, var uParam6) //Position: 0x1184D / 71757
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	struct<2> Var7;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_SEARCH_CENTER(Param0);
	AMBIENT_SET_SCAN_CENTER(Param0);
	AMBIENT_SET_DISTANCE_FILTER(&bParam5, &uParam6);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		Var7 = 0.0f;
		Var7.f_8 = 0.0f;
		Var7.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&Var0, 5.0f, &Var2, &uVar4))
		{
		}
		else
		{
			Var2 = Var0;
		}
		if (!Function_219(StackVal, Var2))
		{
			uVar6 = CREATE_ACTOR_IN_LAYOUT(&uParam2, &uParam4, bParam3, Var2, Var7);
		}
	}
	return &uVar6;
}

var Function_530(struct<2> Param0, var uParam2, bool bParam3, var uParam4, bool bParam5, var uParam6) //Position: 0x118ED / 71917
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	bool bVar7;
	struct<2> Var8;
	
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_SEARCH_CENTER(Param0);
	AMBIENT_SET_SCAN_CENTER(Param0);
	AMBIENT_SET_DISTANCE_FILTER(&bParam5, &uParam6);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_MATERIAL_AT_POINT_FILTER(4);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 0.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1536, 0.0f, 0);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 20.0f, 0.0f);
	bVar7 = AMBIENT_GET_POINT(&uVar0, 0);
	if (bVar7)
	{
	}
	else
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(0);
		bVar7 = AMBIENT_GET_POINT(&uVar0, 0);
	}
	if (bVar7)
	{
		Var8 = 0.0f;
		Var8.f_8 = 0.0f;
		Var8.f_4 = 0.0f;
		if (FIND_GROUND_INTERSECTION(&uVar0, 5.0f, &Var2, &uVar4))
		{
			if (!Function_219(StackVal, Var2))
			{
				uVar6 = CREATE_ACTOR_IN_LAYOUT(&uParam2, &uParam4, bParam3, Var2, Var8);
			}
		}
	}
	return &uVar6;
}

var Function_531(bool bParam0, bool bParam1) //Position: 0x119A1 / 72097
{
	bool bVar0;
	bool bVar1;
	
	if (bParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	bVar1 = RAND_INT_RANGE(bParam0, bParam1);
	bVar0 = bVar1;
	return bVar0;
}

int Function_532(struct<2> Param0, bool bParam2) //Position: 0x119C8 / 72136
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	bVar3 = GET_LOCAL_SLOT();
	iVar4 = Function_48();
	fVar5 = 1E+08.0f;
	if (IS_ACTOR_VALID(&iVar4))
	{
		Function_256(&iVar4);
		fVar5 = VDIST2(Param0, Function_256(&iVar4));
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (GET_SLOT_POSITION(bVar0, &Var1))
			{
				iVar4 = GET_SLOT_ACTOR(bVar0);
				if (IS_ACTOR_VALID(&iVar4))
				{
					Function_256(&iVar4);
					Var1 = Function_256(&iVar4);
				}
				fVar6 = VDIST2(Var1, Param0);
				if (fVar6 > fVar5)
				{
					bVar3 = bVar0;
					fVar5 = fVar6;
					if (&bParam2)
					{
						return bVar3;
					}
				}
			}
		}
		bVar0++;
	}
	return bVar3;
}

bool Function_533(struct<85> Param0) //Position: 0x11A68 / 72296
{
	if (Param0.f_84)
	{
		return 0;
	}
	if (Param0.f_48 > Param0.f_40)
	{
		return 1;
	}
	return 0;
}

void Function_534(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x11A8B / 72331
{
	var uVar0;
	
	uVar0 = 1;
	Function_527(StackVal, StackVal, "Bruiser Squad", &iLocal_438, Param0, Param2, &uVar0, 0, 1, &bParam4, &bParam5, &bParam6, &uParam7, Local_515.f_12);
}

void Function_535(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x11ACB / 72395
{
	var uVar0;
	
	uVar0 = 1;
	Function_527(StackVal, StackVal, "Fast Squad", &iLocal_412, Param0, Param2, &uVar0, 0, 1, &bParam4, &bParam5, &bParam6, &uParam7, Local_507.f_12);
}

void Function_536(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x11B08 / 72456
{
	var uVar0;
	
	uVar0 = 1;
	Function_527(StackVal, StackVal, "Spitter Squad", &iLocal_386, Param0, Param2, &uVar0, 0, 1, &bParam4, &bParam5, &bParam6, &uParam7, Local_499.f_12);
}

void Function_537(struct<2> Param0, struct<2> Param2, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) //Position: 0x11B48 / 72520
{
	Function_527(StackVal, StackVal, "Standard Squad", &iLocal_360, Param0, Param2, &uParam4, 1, 1, &uParam5, &uParam6, &uParam7, &uParam8, Local_491.f_12);
}

void Function_538(int iParam0, bool bParam1) //Position: 0x11B85 / 72581
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (Function_203(&iParam0))
	{
		iVar0 = (Function_370() - bParam1);
		iVar1 = Function_488(0);
		bVar2 = ROUND((IntToFloat(iVar1) * 0,9f));
		Function_197(&iParam0, 0,5f);
	}
	return;
}

void Function_539(var uParam0, var uParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7, bool bParam8) //Position: 0x11BBB / 72635
{
	if (bParam8)
	{
		return;
	}
	if (IS_OBJECT_VALID(&uParam0) && IS_OBJECTSET_VALID(&uParam1))
	{
		if (Function_203(&iParam7))
		{
			Function_540(StackVal, StackVal, &uParam1, &uParam2, Param3, Param5, &iParam7);
		}
	}
}

void Function_540(var uParam0, var uParam1, struct<2> Param2, struct<2> Param4, int iParam6) //Position: 0x11BFA / 72698
{
	struct<2> Var0;
	struct<5> Var2;
	struct<2> Var7;
	struct<2> Var9;
	var uVar11;
	float fVar13;
	int iVar14;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		Function_193(&uParam0);
	}
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		uParam0 = CREATE_OBJECTSET_IN_LAYOUT("RingOfFireSet", &uParam1, 21, 1);
	}
	Var0 = Param2;
	Var2 = Param4;
	fVar4 = 4.0f;
	bVar5 = CEIL(((6,28318f * fVar4) / 2,5f));
	fVar13 = (360.0f / TO_FLOAT(bVar5));
	bVar6 = false;
	while (bVar6 <= bVar5)
	{
		Var9 = Vector(fVar4, 0.0f, 0.0f);
		Function_37(StackVal, (&Var9 + (fVar13 * TO_FLOAT(bVar6))));
		Var7 = Vector(StackVal, StackVal, StackVal) + Vector(Var0, Function_37(StackVal, (&Var9 + (fVar13 * TO_FLOAT(bVar6)))), StackVal);
		if (!FIND_GROUND_INTERSECTION(&Var7, 5.0f, &Var9, &uVar11))
		{
			Var9 = Var7;
		}
		iVar14 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam1, "", "anim_blacksmith_fire", Var9);
		UNK_0x6745191B(StackVal, &iVar14, Vector(0.0f, 0.0f, 0.0f));
		ADD_OBJECT_TO_OBJECTSET(&iVar14, &uParam0);
		bVar6++;
	}
	Function_197(&iParam6, 56.0f);
}

void Function_541(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, var uParam8) //Position: 0x11CFD / 72957
{
	var uVar0;
	var uVar1;
	
	if (bParam7)
	{
		return;
	}
	if (IS_OBJECT_VALID(&uParam1))
	{
		if (Function_47(uParam5, bParam6))
		{
			DECOR_SET_INT(&uParam1, "UseStage", false);
			uVar0 = GET_BLIP_ON_OBJECT(&uParam0);
			if (IS_BLIP_VALID(&uVar0))
			{
				Function_193(&uParam2);
				Function_192(&uParam3);
				REMOVE_BLIP(&uVar0);
			}
		}
		if (Function_543(&uParam1, &uParam4))
		{
			uVar1 = Function_48();
			DECOR_SET_INT(&uVar1, "iLockerOpen", true);
			if (!Function_47(uParam5, bParam6))
			{
				Function_542(GET_LOCAL_SLOT(), uParam8);
			}
			Function_5(&uParam5, bParam6);
		}
	}
	else
	{
		uParam4 = 0;
		if (DECOR_CHECK_EXIST(Function_48(), "PickingFrame"))
		{
			DECOR_REMOVE(Function_48(), "PickingFrame");
		}
	}
}

void Function_542(var uParam0, int iParam1) //Position: 0x11DD8 / 73176
{
	struct<5> Var0;
	
	Var0 = uParam0;
	Var0.f_4 = iParam1;
	NET_SCRIPTMSG_SEND(3, 62, &Var0, 2, 1);
	return;
}

bool Function_543(int iParam0, int iParam1) //Position: 0x11DF3 / 73203
{
	var uVar0;
	
	uVar0 = Function_48();
	if (!Function_275(&uVar0, 8))
	{
		iParam1 = 0;
		if (DECOR_CHECK_EXIST(&uVar0, "PickingFrame"))
		{
			DECOR_REMOVE(&uVar0, "PickingFrame");
		}
		return 0;
	}
	if (GET_CURRENT_GRINGO(&uVar0) != GET_GRINGO_FROM_OBJECT(&iParam0))
	{
		iParam1 = 0;
		if (DECOR_CHECK_EXIST(&uVar0, "PickingFrame"))
		{
			DECOR_REMOVE(&uVar0, "PickingFrame");
		}
		return 0;
	}
	if (DECOR_CHECK_EXIST(&uVar0, "nIsPicking"))
	{
		if (!DECOR_CHECK_EXIST(&uVar0, "PickingFrame"))
		{
			iParam1 = 75;
			DECOR_SET_INT(&uVar0, "PickingFrame", iParam1);
		}
		else
		{
			iParam1 = DECOR_GET_INT(&uVar0, "PickingFrame");
			iParam1 = (iParam1 - 1);
			DECOR_SET_INT(&uVar0, "PickingFrame", iParam1);
			if (iParam1 < 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void Function_544(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x11F1D / 73501
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam0 <= 0 && iParam0 >= 3)
	{
		iVar0 = 13;
	}
	else if (iParam0 <= 4 && iParam0 >= 7)
	{
		iVar0 = 13;
	}
	else if (iParam0 <= 8 && iParam0 >= 11)
	{
		iVar0 = 3;
	}
	else if (iParam0 > 12)
	{
		iVar0 = 3;
		Function_197(&iParam2, 10.0f);
	}
	if (bParam3)
	{
		iVar0 = 3;
		Function_197(&iParam2, 10.0f);
	}
	if (StackVal == iVar0 || !Global_26182.f_24)
	{
		Function_546(iVar0);
		uParam1 = (uParam1 * 1,667f);
		if (uParam1 < 1.0f || bParam3)
		{
			uParam1 = 1.0f;
		}
		Function_545(iVar0, 0, 1, 30, 0);
		Function_180(uParam1, 90.0f);
	}
}

void Function_545(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x11FDC / 73692
{
	int iVar0;
	bool bVar1;
	
	Function_179(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_182(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_176(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_546(int iParam0) //Position: 0x12056 / 73814
{
	switch (iParam0)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

void Function_547(int iParam0, var uParam1, bool bParam2) //Position: 0x12087 / 73863
{
	if (bParam2)
	{
	}
	if (IS_OBJECT_VALID(&iParam0))
	{
		UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, &uParam1, "script_lightning_marker", &iParam0, Vector(0.0f, 0,25f, 0.0f), 1, false), Vector(0.0f, 0.0f, 0.0f));
	}
	return;
}

void Function_548(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, struct<2> Param6, var uParam8, var uParam9, var uParam10, var uParam11, bool bParam12) //Position: 0x120D2 / 73938
{
	struct<2> Var0;
	char* cVar2[16];
	bool bVar6;
	struct<2> Var7;
	
	if (&bParam12)
	{
		return;
	}
	Var0 = Param4;
	strcpy(&cVar2, "Graveyard_Safe", 16);
	if (!IS_OBJECT_VALID(&uParam0) && IS_OBJECT_VALID(&uParam3))
	{
		bVar6 = 0.0f;
		Var7 = Vector(0.0f, 0.0f, 0.0f);
		ROTATE_VECTOR_XZ(&Var7, bVar6, 0);
		NET_OBJECT_REPLICATION_MODE_START(17, 0);
		uParam0 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, Vector(&cVar2, &uParam3, StackVal) + Vector(Var7, Var0, "$/fragments/p_gen_coffin04x"), Param6, true);
		NET_OBJECT_REPLICATION_MODE_END(17);
		ADD_BLIP_FOR_OBJECT(&uParam0, &uParam11, 0f, 2, 0);
		SNAP_OBJECT_TO_GROUND(&uParam0, 5.0f, true, 1092616192);
	}
	uParam1 = FIND_OBJECT_IN_OBJECT(&uParam0, "MP_OpenCoffin");
	DECOR_SET_INT(&uParam1, "UseStage", true);
	uParam9 = CLEAR_AREA_OF_GRASS(Var0, 2.0f);
	uParam10 = CLEAR_AREA_OF_TREE_TYPE(Var0, 2.0f, "");
	Function_540(StackVal, StackVal, &uParam2, &uParam3, Var0, Param6, &uParam8);
}

bool Function_549(int iParam0) //Position: 0x121E1 / 74209
{
	if (Function_203(&iParam0))
	{
		Function_550(&iParam0);
		return 1;
	}
	return 0;
}

void Function_550(vector3 vParam0) //Position: 0x121F9 / 74233
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_551(var uParam0, float fParam1, int iParam2) //Position: 0x12210 / 74256
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	UI_ENTER("MPSplash");
	UNK_0xD792B93B("MPSplash", &uParam0);
	UI_INCLUDE("MPSplashTitle");
	UI_INCLUDE("MPSplashItem.s0");
	UI_ENABLE("MPSplashTitle");
	UI_ENABLE("MPSplashItem.s0");
	UI_SET_STYLE("MPSplashTitle", 99);
	UI_SET_STRING("Generic_Dbuffer10_0", &iParam2);
	UI_SET_STRING("Generic_Dbuffer128_0", UI_GET_STRING(&fParam1));
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_REFRESH("MPSplashTitle");
	UI_REFRESH("MPSplashItem.s0");
	return;
}

void Function_552(var uParam0, int iParam1) //Position: 0x12395 / 74645
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	UI_ENTER("MPSplash");
	UNK_0xD792B93B("MPSplash", &uParam0);
	UI_INCLUDE("MPSplashTitle");
	UI_INCLUDE("MPSplashItem.s0");
	UI_ENABLE("MPSplashTitle");
	UI_ENABLE("MPSplashItem.s0");
	UI_SET_STYLE("MPSplashTitle", 99);
	UI_SET_STRING("Generic_Dbuffer10_0", "common_null");
	UI_SET_STRING("Generic_Dbuffer128_0", UI_GET_STRING(&iParam1));
	UI_SET_TEXT("MPSplashItem.s0", "Generic_Dbuffer128_0");
	UI_SET_TEXT("MPSplashItem.s1", "common_null");
	UI_REFRESH("MPSplashTitle");
	UI_REFRESH("MPSplashItem.s0");
	return;
}

void Function_553(bool bParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x12525 / 75045
{
	int iVar0;
	
	if (bParam0)
	{
		return;
	}
	Function_328(1, 1);
	iVar0 = 1;
	Function_49(65536, 0);
	if (IS_STRING_VALID(&fParam2))
	{
		Function_506(&uParam1, &fParam2, &iParam3, &iParam4, &iParam5, &iParam6, 2, 0);
	}
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_1042, "Local State", "Player was granted an extra life.", 0, 0, 0, 0);
		Function_31(&bLocal_624, 0);
	}
}

void Function_554(var uParam0, var uParam1, int iParam2) //Position: 0x125AE / 75182
{
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		uParam1 = RAND_INT_RANGE(false, (GET_OBJECTSET_SIZE(&uParam0) - 1));
	}
	iParam2 = (RAND_INT_RANGE(true, 10000) % 3) + 1;
	return;
}

void Function_555(var uParam0, bool bParam1, var uParam2) //Position: 0x125DC / 75228
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_OBJECTSET_VALID(&uParam0))
	{
		iVar0 = GET_OBJECTSET_SIZE(&uParam0);
		bVar1 = RAND_INT_RANGE(false, (iVar0 - 1));
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uParam0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			GET_OBJECT_POSITION(&uVar2, &bParam1);
			GET_OBJECT_ORIENTATION(&uVar2, &uParam2);
		}
	}
	return;
}

void Function_556() //Position: 0x12625 / 75301
{
	iLocal_280 = 0;
	return;
}

void Function_557(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1262F / 75311
{
	Function_596(&uParam4);
	if (bLocal_281 == 0)
	{
		Function_593(&uParam0, &uParam1, uParam2, uParam3);
		Function_591(&uParam0, &uParam1);
		Function_589(&uParam0, &uParam1);
		Function_585(&uParam0, &uParam1);
		Function_564(&uParam0, &uParam1);
	}
	else
	{
		Function_563(&uParam0, &uParam1, uParam2, uParam3);
		Function_562(&uParam0, &uParam1);
		Function_561(&uParam0, &uParam1);
		Function_560(&uParam0, &uParam1);
		Function_558(&uParam0, &uParam1);
	}
	Function_340(8192);
	Function_40(16384);
}

void Function_558(var uParam0, bool bParam1) //Position: 0x126B5 / 75445
{
	if (Local_523 == 4294967295)
	{
		return;
	}
	if (!Local_523.f_24)
	{
		Function_564(&uParam0, &bParam1);
	}
	else
	{
		Function_559(StackVal, StackVal, StackVal, &iLocal_464, Local_523, &bParam1, 1204, 1213);
	}
	return;
}

void Function_559(struct<85> Param0) //Position: 0x126EC / 75500
{
	cParam5 = &cParam5;
	Param0.f_24 = iParam6;
	Param0.f_28 = iParam7;
	Param0.f_40 = StackVal;
	Param0.f_44 = StackVal;
	Param0.f_72 = Param1.f_16;
	Param0.f_76 = 0;
	Param0.f_80 = 1;
	Param0.f_84 = Param1.f_20;
	Param0.f_48 = 0;
	Function_197(&Param0 + 56, Param0.f_72);
}

void Function_560(var uParam0, char* cParam1) //Position: 0x1274D / 75597
{
	if (Local_515 == 4294967295)
	{
		return;
	}
	if (!Local_515.f_24)
	{
		Function_585(&uParam0, &cParam1);
	}
	else
	{
		Function_559(StackVal, StackVal, StackVal, &iLocal_438, Local_515, &cParam1, 1214, 1221);
	}
	return;
}

void Function_561(var uParam0, char* cParam1) //Position: 0x12784 / 75652
{
	if (Local_507 == 4294967295)
	{
		return;
	}
	if (!Local_507.f_24)
	{
		Function_589(&uParam0, &cParam1);
	}
	else
	{
		Function_559(StackVal, StackVal, StackVal, &iLocal_412, Local_507, &cParam1, 1204, 1213);
	}
	return;
}

void Function_562(var uParam0, char* cParam1) //Position: 0x127BB / 75707
{
	if (Local_499 == 4294967295)
	{
		return;
	}
	if (!Local_499.f_24)
	{
		Function_591(&uParam0, &cParam1);
	}
	else
	{
		Function_559(StackVal, StackVal, StackVal, &iLocal_386, Local_499, &cParam1, 1222, 1227);
	}
	return;
}

void Function_563(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x127F2 / 75762
{
	if (Local_491 == 4294967295)
	{
		return;
	}
	if (!Local_491.f_24)
	{
		Function_593(&uParam0, &uParam1, uParam2, uParam3);
	}
	else
	{
		Function_559(StackVal, StackVal, StackVal, &iLocal_360, Local_491, &uParam1, uParam2, uParam3);
	}
}

void Function_564(var uParam0, char* cParam1) //Position: 0x1282F / 75823
{
	if (Local_523 == 4294967295)
	{
		return;
	}
	iLocal_464 = &cParam1;
	Local_523.f_24 = 1;
	Function_580(StackVal, StackVal, &iLocal_464, "al", &uParam0, 1204, 1213, Local_523.f_16, 0, 1, Local_523.f_20);
	Function_565(&iLocal_464, 75919);
	return;
}

void Function_565(int iParam0, int iParam1) //Position: 0x12880 / 75904
{
	*(&iParam0 + 32) = &iParam1;
	return;
}

void Function_566(int iParam0, int iParam1) //Position: 0x1288F / 75919
{
	iParam1 = iParam1;
	Function_569(&iParam0, Local_523, 1);
	Function_567(&iParam0, Local_523, 4);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(&iParam0), 104);
	return;
}

void Function_567(int iParam0, int iParam1, int iParam2) //Position: 0x128B6 / 75958
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		bVar0 = Function_568(iParam1, iParam2);
		SET_ACTOR_HEALTH(&iParam0, bVar0);
		SET_ACTOR_MAX_HEALTH(&iParam0, bVar0);
	}
	return;
}

int Function_568(int iParam0, int iParam1) //Position: 0x128E1 / 76001
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0x00000002:
			iVar0 = 20.0f;
			break;
		
		case 0x00000000:
			iVar0 = 30.0f;
			break;
		
		case 0x00000001:
			iVar0 = 40.0f;
			break;
		
		case 0x00000003:
			iVar0 = 60.0f;
			break;
		
		case 0x00000004:
			iVar0 = 80.0f;
			break;
	}
	if (iParam0 == 0)
	{
		iVar0 = (iVar0 + 0.0f);
	}
	else if (iParam0 == 1)
	{
		iVar0 = (iVar0 + 10.0f);
	}
	else if (iParam0 == 2)
	{
		iVar0 = (iVar0 + 20.0f);
	}
	else if (iParam0 == 3)
	{
		iVar0 = (iVar0 + 40.0f);
	}
	else if (iParam0 == 4)
	{
		iVar0 = (iVar0 + 80.0f);
	}
	else if (iParam0 == 5)
	{
		iVar0 = (iVar0 + 120.0f);
	}
	else if (iParam0 == 6)
	{
		iVar0 = (iVar0 * 8.0f);
	}
	return iVar0;
}

void Function_569(int iParam0, int iParam1, int iParam2) //Position: 0x129BE / 76222
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_573(&iParam0);
		if (IS_SLOT_VALID(false))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)))
			{
				MEMORY_CONSIDER_AS(&iParam0, GET_SLOT_ACTOR(false), 4);
			}
		}
		if (IS_SLOT_VALID(true))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)))
			{
				MEMORY_CONSIDER_AS(&iParam0, GET_SLOT_ACTOR(true), 4);
			}
		}
		if (IS_SLOT_VALID(2))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)))
			{
				MEMORY_CONSIDER_AS(&iParam0, GET_SLOT_ACTOR(2), 4);
			}
		}
		if (IS_SLOT_VALID(3))
		{
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)))
			{
				MEMORY_CONSIDER_AS(&iParam0, GET_SLOT_ACTOR(3), 4);
			}
		}
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 24, true);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 25, true);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 26, true);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 27, true);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 28, true);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 29, false);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 30, false);
		SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 359.0f);
		SET_ACTOR_VISION_XRAY(&iParam0, true);
		switch (&iParam1)
		{
			case 0x00000000:
				SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 359.0f);
				SET_TOUGH_ACTOR(&iParam0, 0);
				break;
			
			case 0x00000001:
				SET_TOUGH_ACTOR(&iParam0, 0);
				break;
			
			case 0x00000002:
				SET_TOUGH_ACTOR(&iParam0, 0);
				break;
			
			case 0x00000003:
				SET_TOUGH_ACTOR(&iParam0, 1);
				break;
			
			case 0x00000004:
				SET_TOUGH_ACTOR(&iParam0, 1);
				SET_ACTOR_VISION_XRAY(&iParam0, true);
				break;
			
			case 0x00000005:
				SET_TOUGH_ACTOR(&iParam0, 1);
				SET_ACTOR_VISION_XRAY(&iParam0, true);
				break;
			
			case 0x00000006:
				SET_TOUGH_ACTOR(&iParam0, 1);
				SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 359.0f);
				SET_ACTOR_VISION_XRAY(&iParam0, true);
				TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(&iParam0, 30.0f);
				if (Function_223(&iParam0))
				{
					Function_572(&iParam0, 50.0f, -1.0f, -1.0f);
					COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 16, true);
					SET_ACTOR_PROOF(&iParam0, 522);
				}
				if (Function_571(&iParam0))
				{
					SET_ACTOR_PROOF(&iParam0, 522);
				}
				if (Function_570(&iParam0))
				{
					SET_ACTOR_PROOF(&iParam0, 522);
				}
				break;
		}
		if (!Function_223(&iParam0))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
		}
		if (IS_ACTOR_VALID(&iParam0))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam0)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam0, 322, 0, 2, 0);
			}
		}
		SET_ACTOR_UPDATE_PRIORITY(&iParam0, false);
		if (Function_223(&iParam0))
		{
			TASK_GO_NEAR_ACTORSET(&iParam0, Function_491(), 10.0f, 2);
		}
		else
		{
			TASK_GO_NEAR_ACTORSET(&iParam0, Function_491(), 5.0f, 2);
		}
		TASK_PRIORITY_SET(&iParam0, &iParam2);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 100.0f);
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_STANDARD_MP_ZOMBIE was passedan invalid actor");
	}
	return;
}

bool Function_570(int iParam0) //Position: 0x12C88 / 76936
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

bool Function_571(int iParam0) //Position: 0x12CA9 / 76969
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

void Function_572(var uParam0, bool bParam1, float fParam2, float fParam3) //Position: 0x12CCA / 77002
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

void Function_573(int iParam0) //Position: 0x12D1B / 77083
{
	var uVar0;
	var uVar1;
	
	Function_578(&iParam0);
	DECOR_SET_BOOL(&iParam0, "Zombie", true);
	Function_577(&iParam0);
	SET_ACTOR_ALLOW_DISARM(&iParam0, false);
	SET_CRIPPLE_ENABLE(&iParam0, 0);
	SET_CRIPPLE_FLAG(&iParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&iParam0, 0, 0);
	if (Function_575(&iParam0))
	{
		SET_ACTOR_SEX(&iParam0, 1);
	}
	else
	{
		SET_ACTOR_SEX(&iParam0, 0);
	}
	if (Function_223(&iParam0))
	{
		DECOR_SET_BOOL(&iParam0, "Hogtie_DontGiveWeapons", true);
		AI_SET_TR_PROGRAM_FOR_ACTOR(&iParam0, "Zombie");
		MEMORY_ALLOW_TAKE_COVER(&iParam0, 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&iParam0, false);
		COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iParam0, 0);
		ACTOR_SET_NEXT_EQUIP_SLOT(&iParam0, 2, 1);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 60, 1.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 53, 0,2f);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 3.0f, 3.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 10.0f);
		uVar0 = AI_PREDICATE_FIND_NAMED("ToxicZombie", 0);
		if (AI_PREDICATE_IS_VALID(&uVar0))
		{
			AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &uVar0, 1);
		}
	}
	else
	{
		if (Function_570(&iParam0))
		{
			DECOR_SET_BOOL(&iParam0, "FastZombie", true);
		}
		else if (Function_571(&iParam0))
		{
			DECOR_SET_BOOL(&iParam0, "BruiserZombie", true);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 28, 12,5f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 12.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 0,5f);
		}
		uVar1 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
		if (AI_PREDICATE_IS_VALID(&uVar1))
		{
			AI_PREDICATE_OVERRIDE_SET_BOOL(&iParam0, &uVar1, 1);
		}
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&iParam0, "head");
	if (Function_570(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2030.0f, 1);
		SET_ACTOR_HARD_LOCK_AQUIRE_BONE(&iParam0, "head");
	}
	else if (Function_571(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2030.0f, 1);
	}
	else if (Function_574(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 100.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 1000.0f, 1);
	}
	else if (Function_490(&iParam0))
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 195.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 1995.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&iParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&iParam0, 2020.0f, 1);
	}
	return;
}

bool Function_574(int iParam0) //Position: 0x12FCF / 77775
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1248 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

bool Function_575(int iParam0) //Position: 0x12FF0 / 77808
{
	switch (GET_ACTOR_ENUM(&iParam0))
	{
		case 0x000004B7:
		case 0x000004B9:
		case 0x000004BD:
		case 0x000004BE:
		case 0x000004C5:
		case 0x000004CE:
			return 1;
			break;
	}
	if (Function_223(&iParam0) || Function_576(&iParam0))
	{
		if (!IS_ACTOR_MALE(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int Function_576(int iParam0) //Position: 0x13047 / 77895
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(&iParam0, "Zombie");
		}
	}
	return 0;
}

void Function_577(int iParam0) //Position: 0x13086 / 77958
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&iParam0, "nocrime", true);
	}
	return;
}

void Function_578(int iParam0) //Position: 0x130BD / 78013
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, false);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, true);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, false);
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
	Function_579(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_579(var uParam0, bool bParam1) //Position: 0x1347B / 78971
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

void Function_580(struct<85> Param0) //Position: 0x1349E / 79006
{
	char* cVar0[32];
	char* cVar8[32];
	char* cVar16[32];
	
	strcpy(&cVar0, &cParam1, 32);
	stradd(&cVar0, "_layout", 32);
	Param0 = CREATE_LAYOUT(&cVar0);
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		strcpy(&cVar8, &cParam1, 32);
		stradd(&cVar8, "_crtTrap", 32);
		*(&Param0 + 8) = CREATE_EVENT_TRAP(&cVar8, 70, &Param0);
		EVENT_TRAP_ON_OWNER(&Param0 + 8, &Param0);
		EVENT_TRAP_STORE_EVENTS(&Param0 + 8, 1);
		Function_583(&Param0);
		Function_582(&Param0, &iParam2);
		Param0.f_24 = iParam3;
		Param0.f_28 = uParam4;
		Param0.f_40 = iParam5;
		Param0.f_44 = iParam6;
		Param0.f_48 = 0;
		Param0.f_52 = 0;
		Param0.f_72 = uParam7;
		Param0.f_76 = iParam8;
		Param0.f_80 = iParam9;
		Param0.f_84 = &uParam10;
		strcpy(&cVar16, &cParam1, 32);
		stradd(&cVar16, "_NPC", 32);
		*(&Param0 + 88) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0, &cVar16));
		strcpy(&cVar16, &cParam1, 32);
		stradd(&cVar16, "_Horse", 32);
		*(&Param0 + 96) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0, &cVar16));
		Function_581(&Param0 + 56, Param0.f_72);
	}
}

void Function_581(int iParam0, float fParam1) //Position: 0x135B7 / 79287
{
	if (!Function_123(&iParam0))
	{
		Function_197(&iParam0, fParam1);
	}
	return;
}

void Function_582(int iParam0, int iParam1) //Position: 0x135CF / 79311
{
	bool bVar0;
	var uVar1;
	
	if (IS_OBJECTSET_VALID(&iParam0 + 16))
	{
		DESTROY_OBJECTSET(&iParam0 + 16);
	}
	*(&iParam0 + 16) = CREATE_OBJECTSET_IN_LAYOUT("ew_spawnSet", &iParam0, 8, 1);
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&iParam1) - 1))
	{
		uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam1);
		if (IS_OBJECT_VALID(&uVar1))
		{
			ADD_OBJECT_TO_OBJECTSET(&uVar1, &iParam0 + 16);
		}
		bVar0++;
	}
	return;
}

void Function_583(int iParam0) //Position: 0x13642 / 79426
{
	Function_565(&iParam0, 79442);
	return;
}

void Function_584(int iParam0, var uParam1) //Position: 0x13652 / 79442
{
	iParam0 = &iParam0;
	uParam1 = uParam1;
	return;
}

void Function_585(var uParam0, char* cParam1) //Position: 0x13662 / 79458
{
	if (Local_515 == 4294967295)
	{
		return;
	}
	iLocal_438 = &cParam1;
	Local_515.f_24 = 1;
	Function_580(StackVal, StackVal, &iLocal_438, "br", &uParam0, 1214, 1221, Local_515.f_16, 0, 1, Local_515.f_20);
	Function_565(&iLocal_438, 79539);
	return;
}

void Function_586(int iParam0, int iParam1) //Position: 0x136B3 / 79539
{
	iParam1 = iParam1;
	Function_569(&iParam0, Local_515, 2);
	Function_587(&iParam0, 1, 1);
	Function_567(&iParam0, Local_515, 3);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(&iParam0), 103);
	return;
}

void Function_587(int iParam0, int iParam1, bool bParam2) //Position: 0x136E2 / 79586
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&iParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&iParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_588(&iParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&iParam0);
			SET_ALLOW_EXECUTE(&iParam0, 0);
		}
	}
	return;
}

void Function_588(var uParam0, int iParam1, bool bParam2) //Position: 0x1379F / 79775
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	SET_ALLOW_EXECUTE(&uParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&uParam0);
	switch (&iParam1)
	{
		case 0x00000001:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Var0, 10.0f, &Var2, &Var4);
			Var2.f_4 = (StackVal + 0,05f);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_56(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_222();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_56(), Var2, Function_222());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&uParam0, &Var0);
			GET_ACTOR_AXIS(&uParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uParam0, Function_56(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_222();
				uVar7 = CREATE_POINT_IN_LAYOUT(&uParam0, Function_56(), Var0, Function_222());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
	}
	if (!&bParam2)
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(&uParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(&uParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&uParam0, "WakeUpFast", true);
	}
	return;
}

void Function_589(var uParam0, char* cParam1) //Position: 0x1396B / 80235
{
	if (Local_507 == 4294967295)
	{
		return;
	}
	iLocal_412 = &cParam1;
	Local_507.f_24 = 1;
	Function_580(StackVal, StackVal, &iLocal_412, "fa", &uParam0, 1204, 1213, Local_507.f_16, 0, 1, Local_507.f_20);
	Function_565(&iLocal_412, 80316);
	return;
}

void Function_590(int iParam0, int iParam1) //Position: 0x139BC / 80316
{
	iParam1 = iParam1;
	Function_569(&iParam0, Local_507, 2);
	Function_587(&iParam0, 1, 1);
	Function_567(&iParam0, Local_507, 2);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(&iParam0), 102);
	return;
}

void Function_591(var uParam0, char* cParam1) //Position: 0x139EB / 80363
{
	if (Local_499 == 4294967295)
	{
		return;
	}
	iLocal_386 = &cParam1;
	Local_499.f_24 = 1;
	Function_580(StackVal, StackVal, &iLocal_386, "sp", &uParam0, 1222, 1227, Local_499.f_16, 0, 1, Local_499.f_20);
	Function_565(&iLocal_386, 80444);
	return;
}

void Function_592(int iParam0, int iParam1) //Position: 0x13A3C / 80444
{
	iParam1 = iParam1;
	Function_569(&iParam0, Local_499, 2);
	Function_587(&iParam0, 1, 1);
	Function_567(&iParam0, Local_499, 1);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(&iParam0), 101);
	return;
}

void Function_593(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x13A6B / 80491
{
	if (Local_491 == 4294967295)
	{
		return;
	}
	iLocal_360 = &uParam1;
	Local_491.f_24 = 1;
	Function_580(StackVal, StackVal, &iLocal_360, "sd", &uParam0, uParam2, uParam3, Local_491.f_16, 0, 1, Local_491.f_20);
	Function_565(&iLocal_360, 80574);
}

void Function_594(int iParam0, int iParam1) //Position: 0x13ABE / 80574
{
	iParam1 = iParam1;
	Function_569(&iParam0, Local_491, 2);
	Function_595(&iParam0, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	Function_567(&iParam0, Local_491, 0);
	NET_ACTOR_SET_SCRIPT_INT(GET_OBJECT_FROM_ACTOR(&iParam0), 100);
	return;
}

void Function_595(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x13AF4 / 80628
{
	var uVar0;
	
	if (Function_231(&iParam0) && !Function_218(&iParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&iParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(false, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(false, 4);
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
	Function_578(&iParam0);
	DECOR_SET_BOOL(&iParam0, "Zombie", true);
	Function_577(&iParam0);
	SET_ACTOR_ALLOW_DISARM(&iParam0, false);
	SET_CRIPPLE_ENABLE(&iParam0, 0);
	SET_CRIPPLE_FLAG(&iParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, false);
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
		DECOR_SET_BOOL(&iParam0, "FastZombie", true);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&iParam0, "BruiserZombie", true);
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
	Function_587(&iParam0, &iParam4, &bParam5);
}

void Function_596(bool bParam0) //Position: 0x13D91 / 81297
{
	if (bLocal_281 > 15)
	{
		iLocal_282 = 15;
	}
	else
	{
		iLocal_282 = bLocal_281;
	}
	if (bParam0)
	{
		iLocal_282 = 100;
		Function_616(&bLocal_531);
		return;
	}
	switch (iLocal_282)
	{
		case 0x00000000:
			Function_615(&bLocal_531);
			break;
		
		case 0x00000001:
			Function_614(&bLocal_531);
			break;
		
		case 0x00000002:
			Function_613(&bLocal_531);
			break;
		
		case 0x00000003:
			Function_612(&bLocal_531);
			break;
		
		case 0x00000004:
			Function_611(&bLocal_531);
			break;
		
		case 0x00000005:
			Function_610(&bLocal_531);
			break;
		
		case 0x00000006:
			Function_609(&bLocal_531);
			break;
		
		case 0x00000007:
			Function_608(&bLocal_531);
			break;
		
		case 0x00000008:
			Function_607(&bLocal_531);
			break;
		
		case 0x00000009:
			Function_606(&bLocal_531);
			break;
		
		case 0x0000000A:
			Function_605(&bLocal_531);
			break;
		
		case 0x0000000B:
			Function_604(&bLocal_531);
			break;
		
		case 0x0000000C:
			Function_603(&bLocal_531);
			break;
		
		case 0x0000000D:
			Function_602(&bLocal_531);
			break;
		
		case 0x0000000E:
			Function_601(&bLocal_531);
			break;
		
		case 0x0000000F:
			Function_597(&bLocal_531);
			break;
	}
	return;
}

void Function_597(bool[] bParam0) //Position: 0x13EB6 / 81590
{
	Function_600(&Local_491, 5, 15, 5, 2, 0,3f, iLocal_565);
	Function_600(&Local_499, 5, 24, 8, 3, 0,3f, iLocal_565);
	Function_600(&Local_507, 5, 18, 6, 3, 0,3f, iLocal_565);
	Function_600(&Local_515, 5, 18, 6, 4, 0,3f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	bParam0[15] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	bParam0[15].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

var Function_598(vector3 vParam0, var uParam9, var uParam10, var uParam11, vector3 vParam12) //Position: 0x13F5F / 81759
{
	bool bVar0;
	
	bVar0 = (((((Function_599(vParam0.x, 0) * IntToFloat(vParam0.z)) + (Function_599(vParam4.x, 3) * IntToFloat(vParam4.z))) + (Function_599(vParam8.x, 1) * IntToFloat(vParam8.z))) + (Function_599(vParam12.x, 2) * IntToFloat(vParam12.z))) + (Function_599(vParam16.x, 4) * IntToFloat(vParam16.z)));
	return ROUND(bVar0);
}

int Function_599(int iParam0, int iParam1) //Position: 0x13FAE / 81838
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return 0.0f;
	}
	iVar0 = iParam0;
	return Function_568(iVar0, iParam1);
}

void Function_600(struct<21> Param0) //Position: 0x13FC7 / 81863
{
	Param0 = iParam1;
	Param0.f_4 = iParam2;
	Param0.f_8 = iParam3;
	Param0.f_12 = iParam4;
	Param0.f_16 = fParam5;
	Param0.f_20 = iParam6;
}

void Function_601(int[] iParam0) //Position: 0x13FF8 / 81912
{
	Function_600(&Local_491, 5, 18, 6, 2, 0,3f, iLocal_565);
	Function_600(&Local_499, 5, 21, 7, 3, 0,3f, iLocal_565);
	Function_600(&Local_507, 5, 18, 6, 3, 0,3f, iLocal_565);
	Function_600(&Local_515, 5, 18, 6, 3, 0,3f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[14] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[14].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_602(int[] iParam0) //Position: 0x140A4 / 82084
{
	Function_600(&Local_491, 5, 21, 7, 2, 0,3f, iLocal_565);
	Function_600(&Local_499, 5, 21, 7, 3, 0,3f, iLocal_565);
	Function_600(&Local_507, 5, 15, 5, 3, 0,3f, iLocal_565);
	Function_600(&Local_515, 5, 18, 6, 3, 0,3f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[13] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[13].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_603(int[] iParam0) //Position: 0x1414D / 82253
{
	Function_600(&Local_491, 5, 21, 7, 2, 0,3f, iLocal_565);
	Function_600(&Local_499, 5, 21, 7, 2, 0,3f, iLocal_565);
	Function_600(&Local_507, 5, 15, 5, 3, 0,3f, iLocal_565);
	Function_600(&Local_515, 5, 18, 6, 3, 0,3f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[12] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[12].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_604(int[] iParam0) //Position: 0x141F6 / 82422
{
	Function_600(&Local_491, 5, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 5, 21, 7, 2, 0,3f, iLocal_565);
	Function_600(&Local_507, 5, 15, 5, 2, 0,3f, iLocal_565);
	Function_600(&Local_515, 5, 15, 5, 3, 0,3f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[11] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[11].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_605(int[] iParam0) //Position: 0x1429B / 82587
{
	Function_600(&Local_491, 5, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 5, 18, 6, 1, 0,4f, iLocal_565);
	Function_600(&Local_507, 5, 15, 5, 2, 0,4f, iLocal_565);
	Function_600(&Local_515, 5, 12, 4, 2, 0,4f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[10] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[10].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_606(int[] iParam0) //Position: 0x14340 / 82752
{
	Function_600(&Local_491, 5, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 5, 15, 5, 1, 0,4f, iLocal_565);
	Function_600(&Local_507, 5, 15, 5, 2, 0,4f, iLocal_565);
	Function_600(&Local_515, 5, 12, 4, 2, 0,4f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[9] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[9].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_607(int[] iParam0) //Position: 0x143E5 / 82917
{
	Function_600(&Local_491, 4, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 4, 15, 5, 1, 0,4f, iLocal_565);
	Function_600(&Local_507, 4, 12, 4, 1, 0,4f, iLocal_565);
	Function_600(&Local_515, 4, 12, 4, 1, 0,4f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[8] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[8].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_608(int[] iParam0) //Position: 0x1448A / 83082
{
	Function_600(&Local_491, 4, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 4, 12, 4, 1, 0,5f, iLocal_565);
	Function_600(&Local_507, 4, 12, 4, 1, 0,5f, iLocal_565);
	Function_600(&Local_515, 4, 12, 4, 1, 0,5f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[7] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[7].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_609(int[] iParam0) //Position: 0x1452D / 83245
{
	Function_600(&Local_491, 3, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 3, 12, 4, 1, 0,6f, iLocal_565);
	Function_600(&Local_507, 3, 12, 4, 1, 0,6f, iLocal_565);
	Function_600(&Local_515, 3, 12, 4, 1, 0,6f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[6] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[6].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_610(int[] iParam0) //Position: 0x145D0 / 83408
{
	Function_600(&Local_491, 3, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 3, 12, 4, 1, 0,7f, iLocal_565);
	Function_600(&Local_507, 3, 12, 4, 1, 0,7f, iLocal_565);
	Function_600(&Local_515, 2, 9, 3, 1, 0,7f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[5] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[5].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_611(int[] iParam0) //Position: 0x14673 / 83571
{
	Function_600(&Local_491, 2, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 2, 12, 4, 1, 0,8f, iLocal_565);
	Function_600(&Local_507, 2, 9, 3, 1, 0,8f, iLocal_565);
	Function_600(&Local_515, 1, 9, 3, 1, 0,8f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[4] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[4].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_612(int[] iParam0) //Position: 0x14716 / 83734
{
	Function_600(&Local_491, 2, 24, 8, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 2, 12, 4, 1, 0,8f, iLocal_565);
	Function_600(&Local_507, 1, 9, 3, 1, 0,8f, iLocal_565);
	Function_600(&Local_515, 0, 6, 2, 1, 0,8f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[3] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[3].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_613(int[] iParam0) //Position: 0x147B8 / 83896
{
	Function_600(&Local_491, 1, 27, 9, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 1, 12, 4, 1, 0,8f, iLocal_565);
	Function_600(&Local_507, 0, 9, 3, 1, 0,8f, iLocal_565);
	Function_600(&Local_515, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[2] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[2].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_614(int[] iParam0) //Position: 0x14856 / 84054
{
	Function_600(&Local_491, 1, 36, 12, 2, 1.0f, iLocal_565);
	Function_600(&Local_499, 0, 9, 3, 1, 0,8f, iLocal_565);
	Function_600(&Local_507, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	Function_600(&Local_515, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[1] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[1].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_615(int[] iParam0) //Position: 0x148EF / 84207
{
	Function_600(&Local_491, 0, 42, 14, 3, 1,2f, iLocal_565);
	Function_600(&Local_499, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	Function_600(&Local_507, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	Function_600(&Local_515, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, iLocal_565);
	iParam0[0] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[0].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_616(int[] iParam0) //Position: 0x14987 / 84359
{
	Function_600(&Local_491, 6, 1, 3, 3, 0,1f, 1);
	Function_600(&Local_499, 6, 1, 5, 5, 0,1f, 1);
	Function_600(&Local_507, 6, 1, 9, 9, 0,1f, 1);
	Function_600(&Local_515, 6, 1, 7, 7, 0,1f, 1);
	Function_600(&Local_523, 4294967295, 0, 0, 5, 0.0f, 1);
	iParam0[15] = Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_491, Local_515, Local_499, Local_507, Local_523);
	iParam0[15].f_4 = (StackVal + (StackVal + (StackVal + (StackVal + StackVal))));
	return;
}

void Function_617(bool bParam0) //Position: 0x14A23 / 84515
{
	switch (bParam0)
	{
		case 0x00000000:
		case 0x00000001:
			Function_401("UN_Narr_HordeBegins", 0);
			break;
		
		case 0x00000002:
		case 0x00000003:
			Function_401("UN_Narr_NextWaveDiff1", 0);
			break;
		
		case 0x00000004:
		case 0x00000005:
			Function_401("UN_Narr_NextWaveDiff2", 0);
			break;
		
		case 0x00000006:
		case 0x00000007:
			Function_401("UN_Narr_NextWaveDiff3", 0);
			break;
		
		case 0x00000008:
		case 0x00000009:
			Function_401("UN_Narr_NextWaveDiff4", 0);
			break;
		
		default:
			Function_401("UN_Narr_NextWaveDiff5", 0);
			break;
	}
	return;
}

void Function_618(struct<89> Param0) //Position: 0x14B24 / 84772
{
	Param0.f_88 = 1;
	return;
}

void Function_619() //Position: 0x14B30 / 84784
{
	Function_615(&bLocal_531);
	Function_614(&bLocal_531);
	Function_613(&bLocal_531);
	Function_612(&bLocal_531);
	Function_611(&bLocal_531);
	Function_610(&bLocal_531);
	Function_609(&bLocal_531);
	Function_608(&bLocal_531);
	Function_607(&bLocal_531);
	Function_606(&bLocal_531);
	Function_605(&bLocal_531);
	Function_604(&bLocal_531);
	Function_603(&bLocal_531);
	Function_602(&bLocal_531);
	Function_601(&bLocal_531);
	Function_597(&bLocal_531);
	return;
}

void Function_620(var uParam0, int iParam1) //Position: 0x14B96 / 84886
{
	Function_492(&uParam0, &iParam1);
	Function_622(&Global_131396, 1, 34, 50, 1);
	Function_622(&Global_131396, 2, 18, 100, 1);
	Function_622(&Global_131396, 3, 11, 20, 1);
	Function_621(&Global_131396, 1, (45.0f * 3.0f));
	Function_621(&Global_131396, 2, (45.0f * 3.0f));
	Function_621(&Global_131396, 3, (45.0f * 3.0f));
	return;
}

void Function_621(int iParam0, int iParam1, int iParam2) //Position: 0x14BF6 / 84982
{
	if (iParam1 <= 0)
	{
	}
	else if (iParam1 >= 6)
	{
	}
	(*&iParam0 + 520 + 608)[iParam1] = iParam2;
	return;
}

void Function_622(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14C1A / 85018
{
	Function_623(&iParam0 + 520, iParam1, iParam2, iParam3, &iParam4);
}

void Function_623(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x14C34 / 85044
{
	Function_624(&iParam0 + 232, iParam1, bParam2, iParam3, &bParam4);
}

void Function_624(int[] iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x14C4D / 85069
{
	if (!Function_626(iParam1))
	{
		return;
	}
	Function_625(&(iParam0[iParam1]), bParam2, iParam3, &bParam4);
}

void Function_625(struct<5> Param0) //Position: 0x14C72 / 85106
{
	Param0 = bParam1;
	if (&bParam3)
	{
		Param0.f_4 = (CEIL(GET_WEAPON_MAX_AMMO(bParam1)) * iParam2);
	}
	else
	{
		Param0.f_4 = iParam2;
	}
}

bool Function_626(int iParam0) //Position: 0x14CA0 / 85152
{
	return (iParam0 <= 0 && iParam0 > 27);
}

void Function_627(int iParam0) //Position: 0x14CB0 / 85168
{
	if (!iParam0)
	{
		UI_ENTER("NetTimer");
		iParam0 = 1;
	}
	return;
}

void Function_628(vector3 vParam0) //Position: 0x14CD4 / 85204
{
	if (Function_123(&vParam0))
	{
		if (Function_121(&vParam0))
		{
			Function_119();
			vParam0.f_4 = (NET_GET_NET_TIME() - vParam0.z);
			vParam0.f_8 = 0.0f;
			Function_4(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to UNPAUSE a NETTIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to UNPAUSE a NETTIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

void Function_629() //Position: 0x14DAA / 85418
{
	int iVar0;
	
	iVar0 = (RAND_INT_RANGE(false, 1000) % 6);
	switch (iVar0)
	{
		case 0x00000001:
			Function_635();
			break;
		
		case 0x00000002:
			Function_634();
			break;
		
		case 0x00000003:
			Function_633();
			break;
		
		case 0x00000004:
			Function_632();
			break;
		
		case 0x00000005:
			Function_631();
			break;
		
		case 0x00000000:
			Function_630();
			break;
	}
	return;
}

void Function_630() //Position: 0x14E0A / 85514
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1000", "", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines6_v1_AA", "UN_Narr_IntroLines6_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines6_v1_AB", "UN_Narr_IntroLines6_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines6_v1_AC1", "UN_Narr_IntroLines6_v1_AC1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines6_v1_AC2", "UN_Narr_IntroLines6_v1_AC2", false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_631() //Position: 0x14F54 / 85844
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1000", "", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines5_v1_AA", "UN_Narr_IntroLines4_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines5_v1_AB", "UN_Narr_IntroLines5_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines5_v1_AC", "UN_Narr_IntroLines5_v1_AC", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines5_v1_AD", "UN_Narr_IntroLines5_v1_AD", false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_632() //Position: 0x1509A / 86170
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1000", "", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines4_v1_AA", "UN_Narr_IntroLines4_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines4_v1_AB", "UN_Narr_IntroLines4_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines4_v1_AC", "UN_Narr_IntroLines4_v1_AC", false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_633() //Position: 0x1519F / 86431
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1000", "", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines3_v1_AA1", "UN_Narr_IntroLines3_v1_AA1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines3_v1_AA2", "UN_Narr_IntroLines3_v1_AA2", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines3_v1_AB1", "UN_Narr_IntroLines3_v1_AB1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines3_v1_AB2", "UN_Narr_IntroLines3_v1_AB2", false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_634() //Position: 0x152ED / 86765
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1000", "", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines2_v1_AA", "UN_Narr_IntroLines2_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines2_v1_AB1", "UN_Narr_IntroLines2_v1_AB1", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines2_v1_AB2", "UN_Narr_IntroLines2_v1_AB2", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines2_v1_AC", "UN_Narr_IntroLines2_v1_AC", false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_635() //Position: 0x15437 / 87095
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "SFX_PAUSE_1000", "", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines1_v1_AA", "UN_Narr_IntroLines1_v1_AA", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines1_v1_AB", "UN_Narr_IntroLines1_v1_AB", false, 4, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "UN_Narr_IntroLines1_v1_AC", "UN_Narr_IntroLines1_v1_AC", false, 4, 1, 0, 1);
		ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(1, "NARRATOR");
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_636(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1553C / 87356
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_56(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "mp_gy_sepulcro_intro", 2, 1);
	}
	Function_637(&uVar0);
	if (bParam4 && CHECK_CUTSCENE_COLLISIONS(&uVar0))
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

void Function_637(var uParam0) //Position: 0x155CA / 87498
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_639(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_638(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 2.0f, 0);
	ADD_CAMERATRANSITION_EVENT_HUDFADEIN(&iVar1, 0.0f, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 18.0f, 1, 0);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 2.0f, 2);
	ADD_CAMERATRANSITION_EVENT_HUDFADEOUT(&iVar1, 1.0f, 0,5f, 1);
	return;
}

void Function_638(int iParam0) //Position: 0x1563D / 87613
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1363,385f, 22,95415f, 4334,812f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,216445f, 0,020458f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_639(int iParam0) //Position: 0x156B2 / 87730
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1359,289f, 14,61196f, 4310,336f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,056052f, -1,486091f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_640(int iParam0) //Position: 0x15727 / 87847
{
	UI_EXIT("NetTimer");
	Function_641(0.0f);
	iParam0 = 0;
	return;
}

void Function_641(bool bParam0) //Position: 0x15744 / 87876
{
	UI_ANIM_SETUP("NetTimer", bParam0, 1, 4294967295);
	UI_ANIM_RESTART("NetTimer");
	return;
}

void Function_642() //Position: 0x1576A / 87914
{
	iLocal_226[0] = 21;
	iLocal_226[1] = 24;
	iLocal_226[2] = 25;
	iLocal_226[3] = 31;
	iLocal_226[4] = 44;
	iLocal_226[5] = 46;
	iLocal_226[6] = 245;
	iLocal_226[7] = 254;
	iLocal_226[8] = 257;
	iLocal_226[9] = 278;
	iLocal_226[10] = 284;
	iLocal_226[11] = 300;
	return;
}

void Function_643(bool bParam0) //Position: 0x157CC / 88012
{
	if (Function_549(&Local_988 + 60) && !bParam0)
	{
		Function_644();
	}
	return;
}

void Function_644() //Position: 0x157E4 / 88036
{
	var uVar0;
	
	NET_SCRIPTMSG_SEND(3, 39, &uVar0, 2, 1);
	return;
}

void Function_645(int iParam0, var uParam1, int iParam2, int iParam3) //Position: 0x157F5 / 88053
{
	bool bVar0;
	bool bVar1;
	
	if (Function_121(&iParam0) || Function_499(&iParam0) >= 0.0f)
	{
		if (iParam3)
		{
			Function_173(&iParam3);
		}
		return;
	}
	if (!iParam3)
	{
		Function_627(&iParam3);
	}
	if (Function_120())
	{
		if (Function_123(&iParam0))
		{
			bVar0 = Function_204(&iParam0);
			if (!iParam2)
			{
				iParam2 = 1;
				Function_641(bVar0);
			}
			bVar1 = CEIL(bVar0);
			if (uParam1 != bVar1)
			{
				uParam1 = bVar1;
				if (FABS((UI_ANIM_GET_TIME("NetTimer") - bVar0)) < 1.0f)
				{
					Function_641(bVar0);
				}
				if (bVar1 < 30)
				{
					PLAY_SOUND_FRONTEND("HUD_TIMER_WATCH_TICK_MASTER");
				}
			}
		}
	}
}

void Function_646(int iParam0, var uParam1, int iParam2) //Position: 0x158B5 / 88245
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = Function_48();
	if (!IS_ACTOR_IN_VOLUME(&iVar0, &uParam1))
	{
		if (GET_ACTOR_HEALTH(&iVar0) < 0.0f)
		{
			if (!Function_123(&iParam0))
			{
				Function_647(&iParam0, 0.0f);
				PRINT_BIG("MP_GY_leaving_area", 5f, 0, 2, 0);
			}
			else if (GET_ACTOR_HEALTH(&iVar0) < 0.0f && Function_118(&iParam0) < 10.0f)
			{
				SET_ACTOR_INVULNERABILITY(&iVar0, false);
				CLEAR_ACTOR_PROOF(&iVar0, 159);
				SET_ACTOR_HEALTH(&iVar0, 0.0f);
				Function_256(&iVar0);
				Var1 = Function_256(&iVar0);
				Function_227(&Var1, "CannonballExplosion", 0, 1);
				UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam2, Function_56(), "script_lightning_marker", Var1), Vector(0.0f, 0.0f, 0.0f));
			}
		}
	}
	else if (Function_123(&iParam0))
	{
		Function_550(&iParam0);
	}
	return;
}

void Function_647(int iParam0, float fParam1) //Position: 0x159A2 / 88482
{
	if (!Function_123(&iParam0))
	{
		Function_198(&iParam0, fParam1);
	}
	return;
}

void Function_648(int iParam0) //Position: 0x159BA / 88506
{
	struct<2> Var0;
	
	Function_256(Function_48());
	Var0 = Function_256(Function_48());
	SET_OBJECT_POSITION(GET_OBJECT_FROM_VOLUME(&iParam0), Var0);
	Function_649(&iLocal_360 + 88, &iParam0);
	Function_649(&iLocal_386 + 88, &iParam0);
	Function_649(&iLocal_412 + 88, &iParam0);
	Function_649(&iLocal_438 + 88, &iParam0);
	Function_649(&iLocal_464 + 88, &iParam0);
	return;
}

void Function_649(var uParam0, var uParam1) //Position: 0x15A14 / 88596
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				uVar2 = GET_OBJECT_FROM_ACTOR(&uVar1);
				if (!Function_213(65536, 1))
				{
					if (DECOR_CHECK_EXIST(&uVar2, "CameraExclusion"))
					{
						DECOR_REMOVE(&uVar2, "CameraExclusion");
						REMOVE_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar2);
					}
				}
				else if (IS_ACTOR_IN_VOLUME(&uVar1, &uParam1))
				{
					if (!DECOR_CHECK_EXIST(&uVar2, "CameraExclusion"))
					{
						DECOR_SET_BOOL(&uVar2, "CameraExclusion", true);
						ADD_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar2, 0);
					}
				}
				else if (DECOR_CHECK_EXIST(&uVar2, "CameraExclusion"))
				{
					DECOR_REMOVE(&uVar2, "CameraExclusion");
					REMOVE_CAMERA_COLLISION_EXCLUSION(GET_GAME_CAMERA(), &uVar2);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_650() //Position: 0x15B35 / 88885
{
	if (UI_ISACTIVE("nPauseMenu"))
	{
		Function_18();
		Function_651();
	}
	return;
}

void Function_651() //Position: 0x15B53 / 88915
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_652(var uParam0, bool bParam1) //Position: 0x15B65 / 88933
{
	bool bVar0;
	
	switch (uParam0)
	{
		case 0x00000001:
			uParam0 = 0;
			break;
		
		case 0x00000000:
			if (!Function_213(65536, 1))
			{
				uParam0 = 3;
			}
			break;
		
		case 0x00000003:
			if (!bParam1)
			{
				DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln", 90);
			}
			uParam0 = 2;
			break;
		
		case 0x00000002:
			if (Function_213(65536, 1))
			{
				uParam0 = 1;
			}
			break;
	}
	bVar0 = Function_48();
	if (Function_213(65536, 1))
	{
		SET_ACTOR_INVULNERABILITY(Function_48(), false);
		SET_ACTOR_PROOF(&bVar0, 159);
	}
	else
	{
		CLEAR_ACTOR_PROOF(&bVar0, 159);
	}
	return;
}

void Function_653() //Position: 0x15C0C / 89100
{
	if (UI_ISACTIVE("RadialWeaponQuickPick"))
	{
		HUD_CLEAR_BIG_TEXT();
		UI_EXIT("MPSplash");
	}
	return;
}

void Function_654(bool bParam0) //Position: 0x15C41 / 89153
{
	if (((Function_655() || UI_ISACTIVE("RadialWeaponQuickPick")) || (UI_ISACTIVE("HelpBox") && !IS_DISPLAY_WIDESCREEN())) || bParam0)
	{
		UI_HIDE("ScoreGraph");
		return;
	}
	if (!bParam0)
	{
		UI_SHOW("ScoreGraph");
	}
	return;
}

bool Function_655() //Position: 0x15CA9 / 89257
{
	return Function_46(16384);
}

void Function_656(int iParam0, bool bParam1) //Position: 0x15CB5 / 89269
{
	if ((Function_655() || UI_ISACTIVE("RadialWeaponQuickPick")) || bParam1)
	{
		UI_HIDE("NetTimer");
		return;
	}
	if (!bParam1)
	{
		if (!Function_121(&iParam0))
		{
			UI_SHOW("NetTimer");
		}
	}
	return;
}

void Function_657() //Position: 0x15D10 / 89360
{
	if (Function_659() && NET_IS_SESSION_HOST())
	{
		Function_658(bLocal_281);
	}
	return;
}

void Function_658(int iParam0) //Position: 0x15D26 / 89382
{
	struct<5> Var0;
	
	Var0 = iParam0 < 0;
	Var0.f_4 = iParam0;
	NET_SCRIPTMSG_SEND(3, 40, &Var0, 2, 1);
	return;
}

int Function_659() //Position: 0x15D43 / 89411
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (Function_661(bVar0))
		{
			if (Function_660(bVar0) >= 0)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

int Function_660(bool bParam0) //Position: 0x15D70 / 89456
{
	if (Function_661(bParam0))
	{
		if (Function_333(bParam0, 16386, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool Function_661(bool bParam0) //Position: 0x15D95 / 89493
{
	if (!IS_SLOT_VALID(bParam0))
	{
		return 0;
	}
	return Function_104(bParam0);
}

void Function_662(struct<2> Param0) //Position: 0x15DAB / 89515
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	bVar0 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(&bVar0))
	{
		Function_441(StackVal, Param0, &bVar0);
	}
	return;
}

void Function_663() //Position: 0x15E6A / 89706
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = false;
	if (DECOR_CHECK_EXIST(Function_48(), "mp_holy"))
	{
		bVar1 = DECOR_GET_FLOAT(Function_48(), "mp_holy");
		if ((GET_CURRENT_GAME_TIME() - bVar1) < 30.0f)
		{
			DECOR_REMOVE(Function_48(), "mp_holy");
			SET_PHOSPHORUS_AMMO_ACTIVE(0);
		}
		else
		{
			bVar0 = true;
		}
	}
	if (DECOR_CHECK_EXIST(Function_48(), "mp_slug_60"))
	{
		bVar2 = DECOR_GET_FLOAT(Function_48(), "mp_slug_60");
		if ((GET_CURRENT_GAME_TIME() - bVar2) < 60.0f)
		{
			DECOR_REMOVE(Function_48(), "mp_slug_60");
			UNK_0x8062BD74(Function_48(), 0, 0,1f);
		}
		else
		{
			bVar0 = true;
		}
	}
	if (DECOR_CHECK_EXIST(Function_48(), "mp_slug_30"))
	{
		bVar3 = DECOR_GET_FLOAT(Function_48(), "mp_slug_30");
		if ((GET_CURRENT_GAME_TIME() - bVar3) < 30.0f)
		{
			DECOR_REMOVE(Function_48(), "mp_slug_30");
			UNK_0x8062BD74(Function_48(), 0, 0,1f);
		}
		else
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		SET_DEADEYE_BLINK(0.0f);
	}
	return;
}

void Function_664(var uParam0, int iParam1) //Position: 0x15F8C / 89996
{
	if (StackVal && (StackVal % 10) != 0 == 0)
	{
		if (!uParam0)
		{
			Function_665("COOP_bonus_combo");
			if (!iParam1)
			{
				Function_329("MP_GY_Phosphorous_help", 0x41200000, 1, 0, 2, 1, 0);
				iParam1 = 1;
			}
			uParam0 = 1;
		}
	}
	else
	{
		uParam0 = 0;
	}
	return;
}

void Function_665(bool bParam0) //Position: 0x16007 / 90119
{
	SET_PHOSPHORUS_AMMO_ACTIVE(1);
	DECOR_SET_FLOAT(Function_48(), "mp_holy", GET_CURRENT_GAME_TIME());
	SET_DEADEYE_BLINK(30.0f);
	ADD_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_401("UN_Narr_PhosLoaded", 0);
	Function_666(&bParam0, 3.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_666(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1605D / 90205
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
			Var0 = { StackVal, StackVal, StackVal, Function_330(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_667(var uParam0, var uParam1, bool bParam2) //Position: 0x160F2 / 90354
{
	int iVar0;
	
	iVar0 = Function_668();
	if (iVar0 > 0)
	{
		if (!uParam0 && GET_LOCAL_SLOT() != iVar0)
		{
			if (bParam2)
			{
				Function_401("UN_Narr_LastManStandn", 0);
			}
			Function_665("COOP_bonus_lastman");
			if (!uParam1)
			{
				Function_329("MP_GY_Phosphorous_help", 0x41200000, 1, 0, 2, 1, 0);
				uParam1 = 1;
			}
			uParam0 = 1;
		}
	}
	else
	{
		uParam0 = 0;
	}
	return;
}

var Function_668() //Position: 0x1618B / 90507
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = 0;
	bVar2 = false;
	while (bVar2 < 15)
	{
		if (IS_SLOT_VALID(bVar2))
		{
			if (Function_669(bVar2) >= 0)
			{
				iVar1++;
				bVar0 = bVar2;
			}
		}
		bVar2++;
	}
	if (iVar1 == 1)
	{
		return bVar0;
	}
	return 4294967295;
}

int Function_669(bool bParam0) //Position: 0x161CF / 90575
{
	if (Function_661(bParam0))
	{
		if (Function_333(bParam0, 81922, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void Function_670() //Position: 0x161F5 / 90613
{
	if (iLocal_566 == 101)
	{
		Function_671(6);
	}
	switch (bLocal_1075)
	{
		case 0x00000005:
			if (iLocal_567 != 3 || iLocal_567 != 5)
			{
				Function_671(0);
			}
			break;
		
		case 0x00000000:
			if (iLocal_567 == 8)
			{
				Function_671(1);
			}
			break;
		
		case 0x00000001:
			if (iLocal_567 != 9 && iLocal_323)
			{
				Function_671(2);
			}
			break;
		
		case 0x00000002:
			if (iLocal_567 != 12 && iLocal_296 > 6)
			{
				Function_671(3);
			}
			break;
		
		case 0x00000003:
			if (iLocal_567 == 13)
			{
				Function_671(4);
			}
			break;
		
		case 0x00000004:
			if (iLocal_567 == 8)
			{
				Function_671(1);
			}
			break;
		
		case 0x00000006:
			break;
	}
	return;
}

void Function_671(bool bParam0) //Position: 0x162A8 / 90792
{
	switch (bParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_FORCE_TRACK(&uLocal_1076, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1075 = bParam0;
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_FORCE_TRACK(&uLocal_1076, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1075 = bParam0;
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_FORCE_TRACK(&uLocal_1076, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1075 = bParam0;
			break;
		
		case 0x00000003:
			AUDIO_MUSIC_FORCE_TRACK(&uLocal_1076, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1075 = bParam0;
			break;
		
		case 0x00000004:
			AUDIO_MUSIC_FORCE_TRACK(&uLocal_1076, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1075 = bParam0;
			break;
		
		case 0x00000006:
			AUDIO_MUSIC_FORCE_TRACK(&uLocal_1076, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			bLocal_1075 = bParam0;
			break;
	}
	return;
}

void Function_672(struct<4> Param0) //Position: 0x163CA / 91082
{
	bool bVar0;
	int iVar1;
	
	if (!Param0.f_88)
	{
		return;
	}
	if (Function_655())
	{
		Function_190(&Param0, 1);
		return;
	}
	Param0.f_96 = (Param0.f_96 - 1);
	if (!Param0.f_92 || Param0.f_96 > 0)
	{
		Param0.f_96 = iLocal_105;
		bVar0 = false;
		if (!Param0.f_92)
		{
			Param0.f_92 = 1;
			UI_SHOW("ScoreGraph");
			bVar0 = true;
		}
		if (Param0.f_76 != bParam1)
		{
			Param0.f_76 = bParam1;
			bVar0 = true;
		}
		Stack.Push(bVar0);
		Stack.Push(&Param0);
		Stack.Push(&Param0 + 32);
		Call_Loc(&Param0 + 64);
		bVar0 = (StackVal || StackVal);
		if (bVar0)
		{
			NET_SCOREGRAPH_CLEAR_MARKERS();
			iVar1 = 4;
			NET_SCOREGRAPH_SETUP(iVar1, 65, &Param0 + 80);
			if (StackVal <= 0)
			{
				Param0.f_4 = 0;
			}
			Function_673(StackVal, StackVal, StackVal, Param0, bParam1, 0);
		}
	}
	return;
}

void Function_673(struct<5> Param0, var uParam5) //Position: 0x1648B / 91275
{
	char* cVar0[32];
	bool bVar8;
	
	bVar8 = false;
	if (IS_STRING_VALID(&Param0 + 16))
	{
		stradd(&cVar0, &Param0 + 16, 32);
		bVar8 = true;
	}
	straddi(&cVar0, StackVal, 32);
	if (IS_STRING_VALID(&Param0 + 24))
	{
		stradd(&cVar0, &Param0 + 24, 32);
		bVar8 = true;
	}
	if (bVar8)
	{
		NET_SCOREGRAPH_ADD_TEAM_LABEL(StackVal, &uParam5, Function_674(5, bParam4), &cVar0);
	}
	else
	{
		NET_SCOREGRAPH_ADD_TEAM_SCORE(StackVal, StackVal, &uParam5, Function_674(5, bParam4));
	}
}

int Function_674(bool bParam0, bool bParam1) //Position: 0x164FA / 91386
{
	if (bParam0 >= bParam1)
	{
		return 100;
	}
	if (bParam1 >= 0)
	{
		return FLOOR(((TO_FLOAT(bParam0) / TO_FLOAT(bParam1)) * 100.0f));
	}
	return 4294967295;
}

int Function_675() //Position: 0x16526 / 91430
{
	return Function_371((bLocal_281 - 1));
}

void Function_676() //Position: 0x16534 / 91444
{
	int iVar0;
	
	Function_678(&uLocal_1046, &bLocal_106, 92068, 1);
	iVar0 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(&iVar0))
	{
		Function_678(&uLocal_1046, &iVar0, 92068, 1);
	}
	iVar0 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(&iVar0))
	{
		Function_678(&uLocal_1046, &iVar0, 92068, 1);
	}
	iVar0 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(&iVar0))
	{
		Function_678(&uLocal_1046, &iVar0, 92068, 1);
	}
	iVar0 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(&iVar0))
	{
		Function_678(&uLocal_1046, &iVar0, 92068, 1);
	}
	iVar0 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(&iVar0))
	{
		Function_678(&uLocal_1046, &iVar0, 92068, 1);
	}
	if (iLocal_567 == 7)
	{
	}
	if (NET_IS_SESSION_HOST())
	{
		Function_677();
	}
	return;
}

void Function_677() //Position: 0x16631 / 91697
{
	return;
}

int Function_678(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x16637 / 91703
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		if (!IS_LAYOUTREF_VALID(&iParam1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return 0;
		}
	}
	iVar0 = 0;
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uParam0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&iParam1);
		if (!IS_ITERATOR_VALID(&uVar1))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return 0;
		}
		ITERATE_IN_EVENT_TRAP(&uVar1, &uParam0);
		bVar2 = START_OBJECT_ITERATOR(&uVar1);
		while (IS_OBJECT_VALID(&bVar2))
		{
			uVar5 = GET_EVENT_FROM_OBJECT(&bVar2);
			uVar3 = GET_EVENT_TARGET_AS_OBJECT(&uVar5);
			uVar4 = GET_EVENT_PERPETRATOR(&uVar5);
			uVar6 = GET_ACTOR_FROM_OBJECT(&uVar3);
			if (IS_OBJECT_VALID(&uVar4))
			{
				if (IS_ACTOR_VALID(&uVar6))
				{
					if (&bParam3)
					{
						if (Function_679(&uVar4) == &iParam1)
						{
							Stack.Push(&uVar6);
							Call_Loc(bParam2);
						}
					}
					else
					{
						Stack.Push(&uVar6);
						Call_Loc(bParam2);
					}
				}
			}
			bVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
		DESTROY_ITERATOR(&uVar1);
	}
	if (iVar0 >= 0)
	{
		return 1;
	}
	return 0;
}

int Function_679(int iParam0) //Position: 0x1673D / 91965
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 1)
		{
			iVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
		}
		while (!IS_LAYOUTREF_VALID(&iVar0) && IS_OBJECT_VALID(&iParam0))
		{
			iParam0 = GET_OBJECT_OWNER(&iParam0);
			if (GET_OBJECT_TYPE(&iParam0) == 1)
			{
				iVar0 = GET_LAYOUT_FROM_OBJECT(&iParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&iVar0))
		{
			return &iVar0;
		}
	}
	return "";
}

void Function_680(var uParam0) //Position: 0x167A4 / 92068
{
	Function_681(&uParam0);
	return;
}

void Function_681(int iParam0) //Position: 0x167AF / 92079
{
	int iVar0;
	int iVar1;
	
	iVar0 = NET_ACTOR_GET_SCRIPT_INT(&iParam0);
	iVar1 = 0;
	switch (iVar0)
	{
		case 0x00000064:
			SQUAD_JOIN(&iParam0, &iLocal_360 + 88);
			Function_594(&iParam0, iVar1);
			break;
		
		case 0x00000065:
			SQUAD_JOIN(&iParam0, &iLocal_386 + 88);
			Function_592(&iParam0, iVar1);
			break;
		
		case 0x00000066:
			SQUAD_JOIN(&iParam0, &iLocal_412 + 88);
			Function_590(&iParam0, iVar1);
			break;
		
		case 0x00000067:
			SQUAD_JOIN(&iParam0, &iLocal_438 + 88);
			Function_586(&iParam0, iVar1);
			break;
		
		case 0x00000068:
			SQUAD_JOIN(&iParam0, &iLocal_464 + 88);
			Function_566(&iParam0, iVar1);
			break;
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!Function_223(&iParam0))
		{
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam0);
		}
	}
	return;
}

void Function_682() //Position: 0x1687F / 92287
{
	switch (iLocal_567)
	{
		case 0x00000006:
			SET_TIME_OF_DAY(&Global_99477);
			SET_TIME_ACCELERATION(0.0f);
			Function_40(512);
			Function_792();
			uLocal_1046 = CREATE_EVENT_TRAP("graveyard_replication_trap", 77, &bLocal_106);
			EVENT_TRAP_STORE_EVENTS(&uLocal_1046, 1);
			Function_788();
			Function_787(&bLocal_624, &bLocal_106 + 8);
			Function_786(&bLocal_624, 0);
			Function_784(&bLocal_624, 110376);
			REGISTER_HOST_BROADCAST_VARIABLES(&Local_968, 20);
			REGISTER_CLIENT_BROADCAST_VARIABLES(&iLocal_1008, 34);
			Function_728(&bLocal_624);
			Function_30(&bLocal_624, 1);
			HUD_FADE_OUT(0.0f, 1f, 1);
			iLocal_567 = 7;
			break;
		
		case 0x00000007:
			if (Function_722())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_567 = 8;
			}
			break;
		
		case 0x00000008:
			Function_718(&iLocal_252, 97689, UI_GET_STRING("TDM_team_fmt_cpp"));
			CAMERA_RESET(0);
			GRINGO_SETUP_PROP_ASSOCIATION(StackVal, StackVal, "p_gen_coffin04x", "$/content/DLC/ZombiePack/Gringos/MP_OpenCoffin", "MP_OpenCoffin", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 0);
			UNK_0x2148AC15(322, 6);
			UNK_0x444C3C32(0, 4, 0);
			Function_705();
			HUD_FADE_OUT(0.0f, 1f, 1);
			NET_LOG(bLocal_1042, "GameType State", "Transitioning to GAMETYPE_RUNNING state.", 0, 0, 0, 0);
			Function_702(&uLocal_327, &bLocal_106, &bLocal_106 + 16);
			Function_700(&uLocal_329, &bLocal_106, &bLocal_106 + 16);
			Function_698(&uLocal_331, &uLocal_333, &bLocal_106, &bLocal_106 + 16);
			uLocal_335 = CREATE_OBJECTSET_IN_LAYOUT("m_ZombieToxicExplosionObjectSet", &bLocal_106, 4294967295, 1);
			Function_693(&uLocal_337, &bLocal_106, &bLocal_106 + 16);
			uLocal_339 = CREATE_OBJECTSET_IN_LAYOUT("m_MakeItRainObjectSet", &bLocal_106, 4294967295, 1);
			Function_690();
			Function_688();
			Function_686();
			iLocal_1008[0] = 0;
			iLocal_1008[1] = 0;
			iLocal_1008[2] = 0;
			iLocal_1008[3] = 0;
			Local_988.f_56 = 0;
			REQUEST_MISSION_AUDIO_BANK("MINI_GAMES_AND_JOBS\\Ranch08");
			Function_684(&bLocal_106, &uLocal_306);
			if (!ADD_OBJECT_TO_OBJECTSET(&bLocal_106 + 48, &uLocal_306))
			{
			}
			Function_256(Function_48());
			iLocal_357 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "ExclusionVolume", 3, Function_256(Function_48()), Vector(0.0f, 0.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
			iLocal_359 = GET_PLAYER_COMBATMODE() != 2;
			Function_683(0, 0.0f);
			Function_683(1, 0.0f);
			Function_683(2, 0.0f);
			Function_683(3, 0.0f);
			Function_683(4, 0.0f);
			iLocal_567 = 9;
			break;
		
		case 0x00000009:
			iLocal_567 = 0;
			iLocal_566 = 0;
			Local_576 = 1000;
			break;
	}
	return;
}

void Function_683(int iParam0, bool bParam1) //Position: 0x16B8C / 93068
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_131396 + 256 + 60)[iParam0] = bParam1;
	return;
}

void Function_684(var uParam0, var uParam1) //Position: 0x16BAE / 93102
{
	uParam1 = CREATE_OBJECTSET_IN_LAYOUT("PlayerObjectSet", &uParam0, 4294967295, 1);
	Function_685();
	Local_491.f_24 = 0;
	Local_499.f_24 = 0;
	Local_507.f_24 = 0;
	Local_515.f_24 = 0;
	Local_523.f_24 = 0;
	return;
}

void Function_685() //Position: 0x16BF3 / 93171
{
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(32, 2, 1,5f);
	COMBAT_CLASS_SERVER_SET_SCRIPT("$/content/DLC/ZombiePack/zombie_combatclasses");
	return;
}

void Function_686() //Position: 0x16C37 / 93239
{
	NET_SCRIPTMSG_REGISTER_HANDLER(57, 93255);
	return;
}

void Function_687(int iParam0) //Position: 0x16C47 / 93255
{
	int iVar0;
	var uVar2;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 4);
	if (iVar0 == 0)
	{
		uVar2 = FIND_NAMED_LAYOUT("BlackwaterMP_GY_layout");
	}
	else if (iVar0 == 1)
	{
		uVar2 = FIND_NAMED_LAYOUT("CootsChapelMP_GY_layout");
	}
	else if (iVar0 == 2)
	{
		uVar2 = FIND_NAMED_LAYOUT("OddFellowsRestMP_GY_layout");
	}
	else if (iVar0 == 3)
	{
		uVar2 = FIND_NAMED_LAYOUT("SepulcroMP_GY_layout");
	}
	else if (iVar0 == 4)
	{
		uVar2 = FIND_NAMED_LAYOUT("TumbleweedMP_GY_layout");
	}
	if (IS_LAYOUTREF_VALID(&uVar2))
	{
		UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uVar2, Function_56(), "env_lightningForked_stormy", (&iVar0 + 4)), Vector(0.0f, 0.0f, 0.0f));
	}
	return;
}

void Function_688() //Position: 0x16D5E / 93534
{
	NET_SCRIPTMSG_REGISTER_HANDLER(61, 93550);
	return;
}

void Function_689(int iParam0) //Position: 0x16D6E / 93550
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 8);
	return;
}

void Function_690() //Position: 0x16D7E / 93566
{
	NET_SCRIPTMSG_REGISTER_HANDLER(62, 93582);
	return;
}

void Function_691(int iParam0) //Position: 0x16D8E / 93582
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	iVar1 = Function_48();
	GIVE_WEAPON_TO_ACTOR(&iVar1, 24, 0.0f, 0, 0);
	if (Var0 == GET_LOCAL_SLOT())
	{
		Global_89112[246]++;
		if (StackVal == 3)
		{
			Function_442(254, &Global_79340[25418] + 4, &Global_79340[25418] + 8, &Global_79340[25418] + 12, Function_101(3), 1);
		}
		if (!ACTOR_HAS_WEAPON(&iVar1, 36))
		{
			GIVE_WEAPON_TO_ACTOR(&iVar1, 36, 0.0f, 0, 0);
		}
		if (_GET_AMMO_AMOUNT(&iVar1, 3, 0) > 3.0f)
		{
			_ADD_AMMO_OF_TYPE(&iVar1, 3, 1.0f, 0, 1);
		}
		if (StackVal && (StackVal % 2) != 0 == 0)
		{
			if (!ACTOR_HAS_WEAPON(&iVar1, 35))
			{
				GIVE_WEAPON_TO_ACTOR(&iVar1, 35, 0.0f, 0, 0);
				if (!iLocal_1073)
				{
					Function_329("MP_GY_HolyWater_help", 0x41200000, 1, 0, 2, 1, 0);
					iLocal_1073 = 1;
				}
			}
			if (_GET_AMMO_AMOUNT(&iVar1, 16, 0) > 1.0f)
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 16, 1.0f, 0, 1);
			}
		}
		Function_692("COOP_bonus_slugs", 1);
		if (!iLocal_1072)
		{
			Function_329("MP_GY_Slugs_help", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_1072 = 1;
		}
	}
	else
	{
		Function_692("COOP_bonus_slugs", 0);
		if (!iLocal_1072)
		{
			Function_329("MP_GY_Slugs_help", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_1072 = 1;
		}
	}
	if (ACTOR_HAS_WEAPON(&iVar1, 43))
	{
		if (_GET_AMMO_AMOUNT(&iVar1, 10, 0) > _GET_MAX_AMMO_AMOUNT(&iVar1, 10))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 10, 40.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 10, 20.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(&iVar1, 41))
	{
		if (_GET_AMMO_AMOUNT(&iVar1, 8, 0) > _GET_MAX_AMMO_AMOUNT(&iVar1, 8))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 8, 48.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 8, 24.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(&iVar1, 40))
	{
		if (_GET_AMMO_AMOUNT(&iVar1, 7, 0) > _GET_MAX_AMMO_AMOUNT(&iVar1, 7))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 7, 60.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 7, 30.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(&iVar1, 39))
	{
		if (_GET_AMMO_AMOUNT(&iVar1, 6, 0) > _GET_MAX_AMMO_AMOUNT(&iVar1, 6))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 6, 60.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 6, 30.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(&iVar1, 42))
	{
		if (_GET_AMMO_AMOUNT(&iVar1, 9, 0) > _GET_MAX_AMMO_AMOUNT(&iVar1, 9))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 9, 40.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 9, 20.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(&iVar1, 34))
	{
		if (_GET_AMMO_AMOUNT(&iVar1, 15, 0) > _GET_MAX_AMMO_AMOUNT(&iVar1, 15))
		{
			if (Var0 == GET_LOCAL_SLOT())
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 15, 10.0f, 1, 1);
			}
			else
			{
				_ADD_AMMO_OF_TYPE(&iVar1, 15, 5.0f, 1, 1);
			}
		}
	}
	if (ACTOR_HAS_WEAPON(&iVar1, 24) && _GET_AMMO_AMOUNT(&iVar1, 5, 1) > 8.0f)
	{
		if (Var0 == GET_LOCAL_SLOT())
		{
			_ADD_AMMO_OF_TYPE(&iVar1, 5, 3.0f, 1, 1);
		}
		else
		{
			_ADD_AMMO_OF_TYPE(&iVar1, 5, 1.0f, 1, 1);
		}
	}
	return;
}

void Function_692(var uParam0, bool bParam1) //Position: 0x17106 / 94470
{
	UNK_0x8062BD74(Function_48(), 1, 0,1f);
	if (&bParam1)
	{
		DECOR_SET_FLOAT(Function_48(), "mp_slug_60", GET_CURRENT_GAME_TIME());
		SET_DEADEYE_BLINK(60.0f);
	}
	else
	{
		DECOR_SET_FLOAT(Function_48(), "mp_slug_30", GET_CURRENT_GAME_TIME());
		SET_DEADEYE_BLINK(30.0f);
	}
	ADD_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
	Function_401("UN_Narr_DoubleSlugsLoaded", 0);
	Function_666(&uParam0, 3.0f, 0, 0, 0, 0, 0, 0);
	return;
}

void Function_693(int iParam0, var uParam1, var uParam2) //Position: 0x17196 / 94614
{
	iParam0 = CREATE_EVENT_TRAP("MIRTrap", 5, &uParam1);
	EVENT_TRAP_ON_VOLUME(&iParam0, &uParam2);
	EVENT_TRAP_STORE_EVENTS(&iParam0, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(58, 95065);
	NET_SCRIPTMSG_REGISTER_HANDLER(59, 94679);
	return;
}

void Function_694(int iParam0) //Position: 0x171D7 / 94679
{
	struct<5> Var0;
	var uVar5;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 6);
	if (StackVal == GET_LOCAL_SLOT())
	{
		if (Var0 == 0)
		{
			uVar3 = FIND_NAMED_LAYOUT("BlackwaterMP_GY_layout");
		}
		else if (Var0 == 1)
		{
			uVar3 = FIND_NAMED_LAYOUT("CootsChapelMP_GY_layout");
		}
		else if (Var0 == 2)
		{
			uVar3 = FIND_NAMED_LAYOUT("OddFellowsRestMP_GY_layout");
		}
		else if (Var0 == 3)
		{
			uVar3 = FIND_NAMED_LAYOUT("SepulcroMP_GY_layout");
		}
		else if (Var0 == 4)
		{
			uVar3 = FIND_NAMED_LAYOUT("TumbleweedMP_GY_layout");
		}
		if (IS_LAYOUTREF_VALID(&uVar3))
		{
			uVar4 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uVar3, "m_MakeItRainObjectSet"));
			if (IS_OBJECTSET_VALID(&uVar4))
			{
				uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, &uVar3, Function_56(), *(&Var0 + 8), Vector(0.0f, 0.0f, 0.0f));
				DECOR_SET_INT(&uVar5, "NumShotsLeft", 8);
				DECOR_SET_INT(&uVar5, "NumShotsCount", 60);
				DECOR_SET_INT(StackVal, &uVar5, "nSlotOwner");
				ADD_OBJECT_TO_OBJECTSET(&uVar5, &uVar4);
			}
		}
	}
	return;
}

void Function_695(int iParam0) //Position: 0x17359 / 95065
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 6);
	if (Var0 == 0)
	{
		uVar3 = FIND_NAMED_LAYOUT("BlackwaterMP_GY_layout");
	}
	else if (Var0 == 1)
	{
		uVar3 = FIND_NAMED_LAYOUT("CootsChapelMP_GY_layout");
	}
	else if (Var0 == 2)
	{
		uVar3 = FIND_NAMED_LAYOUT("OddFellowsRestMP_GY_layout");
	}
	else if (Var0 == 3)
	{
		uVar3 = FIND_NAMED_LAYOUT("SepulcroMP_GY_layout");
	}
	else if (Var0 == 4)
	{
		uVar3 = FIND_NAMED_LAYOUT("TumbleweedMP_GY_layout");
	}
	if (IS_LAYOUTREF_VALID(&uVar3))
	{
		uVar4 = Function_696(StackVal, Function_48(), *(&Var0 + 8), 8.0f);
		if (uVar4 && !Function_213(65536, 1))
		{
			SET_ACTOR_INVULNERABILITY(Function_48(), true);
			DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(Function_48()), "nExpInvuln", 45);
		}
		if (StackVal == GET_LOCAL_SLOT())
		{
			Function_227(StackVal, &Var0 + 8, GET_SLOT_ACTOR("CannonballExplosion"), 1);
		}
		UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uVar3, Function_56(), "script_lightning_marker", *(&Var0 + 8)), Vector(0.0f, 0.0f, 0.0f));
	}
	return;
}

int Function_696(var uParam0, struct<2> Param1, float fParam3) //Position: 0x174DD / 95453
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_697(&uParam0);
		if (VDIST(Function_697(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_697(int iParam0) //Position: 0x17569 / 95593
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

void Function_698(var uParam0, int iParam1, int iParam2, var uParam3) //Position: 0x175D5 / 95701
{
	uParam0 = CREATE_EVENT_TRAP("ToxicExplosionTrap", 2, &iParam2);
	EVENT_TRAP_ON_VOLUME(&uParam0, &uParam3);
	EVENT_TRAP_STORE_EVENTS(&uParam0, 1);
	iParam1 = CREATE_EVENT_TRAP("ToxicExplosionObjectCreateTrap", 16, &iParam2);
	EVENT_TRAP_ON_VOLUME(&iParam1, &uParam3);
	EVENT_TRAP_STORE_EVENTS(&iParam1, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(60, 95832);
}

void Function_699(int iParam0) //Position: 0x17658 / 95832
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 2);
	return;
}

void Function_700(int iParam0, var uParam1, var uParam2) //Position: 0x17667 / 95847
{
	iParam0 = CREATE_EVENT_TRAP("HeadshotTrap", 10, &uParam1);
	EVENT_TRAP_ON_VOLUME(&iParam0, &uParam2);
	EVENT_TRAP_STORE_EVENTS(&iParam0, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(63, 95908);
	return;
}

void Function_701(int iParam0) //Position: 0x176A4 / 95908
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 4);
	return;
}

void Function_702(int iParam0, var uParam1, var uParam2) //Position: 0x176B3 / 95923
{
	iParam0 = CREATE_EVENT_TRAP("ZombieBaitTrap", 17, &uParam1);
	EVENT_TRAP_ON_VOLUME(&iParam0, &uParam2);
	EVENT_TRAP_STORE_EVENTS(&iParam0, 1);
	NET_SCRIPTMSG_REGISTER_HANDLER(64, 95986);
	return;
}

void Function_703(int iParam0) //Position: 0x176F2 / 95986
{
	struct<2> Var0;
	int iVar2;
	struct<2> Var3;
	bool bVar5;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 4);
	iVar2 = CREATE_OBJECTSET_IN_LAYOUT(Function_56(), GET_AMBIENT_LAYOUT(), 15, 1);
	Var3 = Var0;
	bVar5 = FIND_NAMED_LAYOUT("nsd_layout");
	if (IS_LAYOUTREF_VALID(&bVar5))
	{
		if (Function_216(StackVal, Var3, &iVar2, &bVar5, 0x42480000))
		{
			Function_704(StackVal, &iVar2, Var3, 0x40a00000);
		}
	}
	bVar5 = FIND_NAMED_LAYOUT("nsp_layout");
	if (IS_LAYOUTREF_VALID(&bVar5))
	{
		if (Function_216(StackVal, Var3, &iVar2, &bVar5, 0x42480000))
		{
			Function_704(StackVal, &iVar2, Var3, 0x40a00000);
		}
	}
	bVar5 = FIND_NAMED_LAYOUT("nfa_layout");
	if (IS_LAYOUTREF_VALID(&bVar5))
	{
		if (Function_216(StackVal, Var3, &iVar2, &bVar5, 0x42480000))
		{
			Function_704(StackVal, &iVar2, Var3, 0x40a00000);
		}
	}
	bVar5 = FIND_NAMED_LAYOUT("nbr_layout");
	if (IS_LAYOUTREF_VALID(&bVar5))
	{
		if (Function_216(StackVal, Var3, &iVar2, &bVar5, 0x42480000))
		{
			Function_704(StackVal, &iVar2, Var3, 0x40a00000);
		}
	}
	bVar5 = FIND_NAMED_LAYOUT("nal_layout");
	if (IS_LAYOUTREF_VALID(&bVar5))
	{
		if (Function_216(StackVal, Var3, &iVar2, &bVar5, 0x42480000))
		{
			Function_704(StackVal, &iVar2, Var3, 0x40a00000);
		}
	}
	DESTROY_OBJECTSET(&iVar2);
	return;
}

void Function_704(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x17853 / 96339
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	
	if (!IS_OBJECTSET_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&iParam0))
	{
		uVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &iParam0);
		if (IS_OBJECT_VALID(&uVar3))
		{
			iVar4 = GET_ACTOR_FROM_OBJECT(&uVar3);
			if (IS_ACTOR_VALID(&iVar4))
			{
				DECOR_SET_FLOAT(&iVar4, "Baited", GET_CURRENT_GAME_TIME());
				if (Function_223(&iVar4))
				{
					fVar1 = 10.0f;
				}
				else
				{
					fVar1 = 5.0f;
				}
				bVar2 = true;
				MEMORY_CLEAR_ALL(&iVar4);
				if (IS_SLOT_VALID(false))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(false)))
					{
						MEMORY_CONSIDER_AS(&iVar4, GET_SLOT_ACTOR(false), 2);
					}
				}
				if (IS_SLOT_VALID(true))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(true)))
					{
						MEMORY_CONSIDER_AS(&iVar4, GET_SLOT_ACTOR(true), 2);
					}
				}
				if (IS_SLOT_VALID(2))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(2)))
					{
						MEMORY_CONSIDER_AS(&iVar4, GET_SLOT_ACTOR(2), 2);
					}
				}
				if (IS_SLOT_VALID(3))
				{
					if (IS_ACTOR_VALID(GET_SLOT_ACTOR(3)))
					{
						MEMORY_CONSIDER_AS(&iVar4, GET_SLOT_ACTOR(3), 2);
					}
				}
				bVar5 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(false, &uParam1, &iParam3, 2);
				TASK_WANDER(false, 10.0f);
				TASK_GO_NEAR_ACTORSET(0, Function_491(), fVar1, 2);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iVar4, bVar5);
				TASK_SEQUENCE_RELEASE(bVar5, 1);
				TASK_PRIORITY_SET(&iVar4, bVar2);
			}
		}
		bVar0++;
	}
}

void Function_705() //Position: 0x17982 / 96642
{
	NET_SCRIPTMSG_REGISTER_HANDLER(32, 97639);
	NET_SCRIPTMSG_REGISTER_HANDLER(33, 97619);
	NET_SCRIPTMSG_REGISTER_HANDLER(35, 97516);
	NET_SCRIPTMSG_REGISTER_HANDLER(15, 97495);
	NET_SCRIPTMSG_REGISTER_HANDLER(39, 97262);
	NET_SCRIPTMSG_REGISTER_HANDLER(40, 96708);
	return;
}

void Function_706(int iParam0) //Position: 0x179C4 / 96708
{
	struct<5> Var0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	if (!iLocal_1043 && iLocal_566 != 0)
	{
		iLocal_1043 = 1;
		bVar1[0] = Function_16(iLocal_1008[0], 8);
		bVar1[1] = Function_16(iLocal_1008[1], 8);
		bVar1[2] = Function_16(iLocal_1008[2], 8);
		bVar1[3] = Function_16(iLocal_1008[3], 8);
		Function_709(Local_988.f_52, &bVar1, Var0);
		Function_707(StackVal, Local_988.f_52, Var0);
		SET_ACTOR_INVULNERABILITY(Function_48(), false);
		SET_ACTOR_HEALTH(Function_48(), 0.0f);
		(&bLocal_624 + 176) = "";
		Function_5(&bLocal_624 + 84, 2048);
		UI_EXIT("MPScoringDisplays");
		UI_ENTER("HudMPNoFun");
	}
	return;
}

void Function_707(bool bParam0, var uParam1, bool bParam2) //Position: 0x17A8B / 96907
{
	bool bVar0;
	
	if (!bParam2)
	{
		return;
	}
	bVar0 = uParam1;
	if (bParam0)
	{
		bVar0 = (bVar0 - 1);
		if (bVar0 <= 0)
		{
			bVar0 = false;
		}
	}
	DECOR_SET_INT(Function_96(1), "nWaveBonus", bVar0);
	UI_SET_STRING("Generic_Dbuffer10_1", I2STR(bVar0));
	Function_708((1000 * bVar0), "MP_GY_WaveBonus");
	return;
}

void Function_708(bool bParam0, int iParam1) //Position: 0x17AFF / 97023
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = Function_96(1);
	iVar1 = Function_111();
	iVar2 = Function_110(iVar1, 1);
	if (!DECOR_SET_INT(&uVar0, &iVar2, bParam0))
	{
	}
	iVar2 = Function_110(iVar1, 0);
	if (!DECOR_SET_INT(&uVar0, &iVar2, STRING_TO_HASH(&iParam1)))
	{
	}
	DECOR_SET_INT(&uVar0, "size", iVar1 + 1);
	return;
}

void Function_709(bool bParam0, var[] uParam1, bool bParam2) //Position: 0x17B55 / 97109
{
	bool bVar0;
	bool bVar1;
	
	if (!bParam2 || !bParam0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 4)
	{
		if (Function_104(bVar1))
		{
			if (Function_103(12, bVar1) >= 1 && uParam1[bVar1])
			{
				bVar0++;
			}
		}
		bVar1++;
	}
	DECOR_SET_INT(Function_96(1), "nLifeBonus", bVar0);
	UI_SET_STRING("Generic_Dbuffer10_0", I2STR(bVar0));
	Function_708((500 * bVar0), "MP_GY_NDYBonus");
	return;
}

void Function_710(int iParam0) //Position: 0x17BEE / 97262
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 2);
	Function_189(&iLocal_252);
	if (!Local_988.f_52)
	{
		Function_4(&Global_124175 + 72, 8192);
		SET_ACTOR_OVERHEALTH_MODE(Function_48(), false);
		if (Function_213(65536, 1))
		{
			SET_ACTOR_HEALTH(Function_48(), 0.0f);
		}
		Function_711("COOP_failed_out_of_time", 0x40a00000, 0, 2, 0);
		HUD_CLEAR_BIG_TEXT_QUEUE();
	}
	Local_988.f_52 = 1;
	if (IS_SLOT_VALID(GET_LOCAL_SLOT()))
	{
		Function_14(&(iLocal_1008[GET_LOCAL_SLOT()]), 1);
	}
	return;
}

void Function_711(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x17C73 / 97395
{
	bool bVar0;
	
	bVar0 = UI_ISACTIVE("OL_NetworkingMenu");
	if (bVar0)
	{
		UI_POP("OL_NetworkingMenu");
	}
	if (UI_ISACTIVE("nPauseMenu"))
	{
		return;
	}
	PRINT_BIG(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4);
}

void Function_712(int iParam0) //Position: 0x17CD7 / 97495
{
	var uVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &uVar0, 2);
	Function_349(&bLocal_624);
	return;
}

void Function_713(int iParam0) //Position: 0x17CEC / 97516
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 0x00000000:
			Function_715();
			ENABLE_USE_CONTEXTS(1);
			Function_71();
			Function_18();
			Local_576 = 1000;
			iLocal_567 = 0;
			iLocal_566 = 0;
			break;
		
		case 0x00000065:
			Function_714();
			Function_71();
			Function_18();
			Local_576 = 1000;
			iLocal_567 = 0;
			iLocal_566 = 101;
			break;
	}
	return;
}

void Function_714() //Position: 0x17D47 / 97607
{
	return;
}

void Function_715() //Position: 0x17D4D / 97613
{
	return;
}

void Function_716(int iParam0) //Position: 0x17D53 / 97619
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 2);
	iLocal_566 = iVar0;
	return;
}

void Function_717(int iParam0) //Position: 0x17D67 / 97639
{
	int iVar0;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &iVar0, 2);
	Function_433(iVar0);
	return;
}

void Function_718(struct<97> Param0) //Position: 0x17D7B / 97659
{
	Param0.f_96 = 0;
	*(&Param0 + 64) = &iParam1;
	*(&Param0 + 80) = &iParam2;
	return;
}

var Function_719(struct<5> Param0) //Position: 0x17D99 / 97689
{
	int iVar0;
	
	Param1 = { StackVal, StackVal, StackVal, Param1 };
	if (StackVal <= 0)
	{
		Param0.f_4 = 0;
	}
	Function_720(&Param0 + 4, Function_721(ROUND(Function_115(4))), &iVar0);
	return iVar0;
}

int Function_720(var uParam0, int iParam1, int iParam2) //Position: 0x17DCF / 97743
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		iParam2 = 1;
		return 1;
	}
	return 0;
}

var Function_721(int iParam0) //Position: 0x17DEC / 97772
{
	int iVar0;
	
	iVar0 = iParam0;
	iVar0 = (iVar0 - bLocal_490);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool Function_722() //Position: 0x17E09 / 97801
{
	if (!IS_EXITFLAG_SET())
	{
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_723(&uLocal_770))
		{
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(Function_48(), 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_723(struct<2>[] Param0) //Position: 0x17E39 / 97849
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_727();
	iVar1 = 0;
	if (!Function_161(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_726(&(Param0[iVar02]), 8);
		}
		else if (Function_725())
		{
			iVar1 = 1;
			Function_726(&(Param0[iVar02]), 8);
		}
		Function_726(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_161(&(Param0[iVar02]), 4))
		{
			if (!Function_161(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_161(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_161(&(Param0[02]), 8) || iVar1));
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
				Function_726(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_161(&(Param0[iVar02]), 4))
		{
			if (!Function_161(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_726(&(Param0[iVar02]), 2);
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
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_726(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_726(&(Param0[iVar02]), 2);
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
	Function_724();
	return 1;
}

void Function_724() //Position: 0x181FC / 98812
{
	if (!Function_428(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_725() //Position: 0x1823C / 98876
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

void Function_726(struct<13> Param0) //Position: 0x1826A / 98922
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_727() //Position: 0x1827D / 98941
{
	if (!Function_428(128))
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

void Function_728(int iParam0) //Position: 0x182BF / 99007
{
	int iVar0;
	var uVar1;
	struct<29> Var2;
	
	Function_775();
	ADD_IDLEFX_TO_WEAPON(StackVal, 4,624285E-44f, "TORCH_IDLE", Vector(0.0f, 0,35f, -0,15f));
	SET_WEAPONENUM_LOCKED(33, 0);
	SET_WEAPONENUM_LOCKED(34, 0);
	SET_WEAPONENUM_LOCKED(35, 0);
	SET_WEAPONENUM_LOCKED(36, 0);
	SET_WEAPONENUM_LOCKED(37, 0);
	Function_774();
	Function_772();
	iVar0 = (Function_101(8) - 1);
	Function_765(1);
	if (NET_IS_SESSION_HOST())
	{
		Function_764(&Global_123099 + 172);
		Function_122(&Global_123099 + 172);
	}
	Function_746(&iParam0, 1, 1, 0, 0);
	Function_745(&iParam0, 31);
	Function_31(&iParam0, 0);
	Function_743(&iParam0, 101034);
	Function_742(&iParam0, 0);
	Function_328(1, Global_131396);
	NET_HUD_TUNE_VALUE("IconTimerSpeed", F2STR((1.0f / Function_338()), 1, 10));
	Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_736(iVar0, &uVar1) };
	Function_735(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &iParam0, Var2);
	*(&Global_131396 + 520) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var2 };
	Function_733(1);
	if (Function_732("coopNeutralEnemies"))
	{
		SET_FACTIONS_STATUS_ONE_WAY(19, 31, 2);
		SET_FACTIONS_STATUS_ONE_WAY(22, 31, 2);
	}
	SET_PLAYER_TO_PLAYER_DAMAGE_SCALE_FACTOR(0,25f);
	Function_731(3, NET_GET_SESSION_GAMER_COUNT());
	Function_8(0);
	Function_729();
	CLEAR_ALL_CORPSES();
	RESET_PROPS_IN_WORLD();
	DESTROY_GC_OBJECTS(0, 1);
	Function_17();
	SET_POP_DENSITY_MULTIPLIER(0.0f);
	Function_181(13, 0);
	return;
}

void Function_729() //Position: 0x18402 / 99330
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = ROUND(GET_PROFILE_TIME());
	bVar1 = ROUND((GET_TIME_SINCE_LAST_INPUT(Function_730()) * 100000.0f));
	NET_GET_MAC_ADDRESS32(&iVar2);
	RAND_SET_SEED(bVar0 ^ bVar1 ^ iVar2);
	return;
}

int Function_730() //Position: 0x18431 / 99377
{
	var uVar0;
	
	uVar0 = Function_48();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_731(int iParam0, int iParam1) //Position: 0x1844E / 99406
{
	if (iParam0 <= 5 || iParam0 > 0)
	{
		return;
	}
	(*&Global_131396 + 256 + 12)[iParam0] = iParam1;
	return;
}

bool Function_732(int iParam0) //Position: 0x18470 / 99440
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_733(bool bParam0) //Position: 0x18492 / 99474
{
	struct<17> Var0;
	
	Function_27(&Var0);
	if (StackVal != 0)
	{
	}
	strcpy(&cVar3, GET_SHORT_SCRIPT_NAME(), 64);
	Var0.f_4 = STRING_TO_HASH(STRING_LOWER(&cVar3));
	Var0 = 0;
	Var0.f_16 = 0.0f;
	Var0.f_8 = 4294967286;
	if (&bParam0)
	{
		Function_5(&Var0, 4);
	}
	Function_20(&Var0);
	Function_21();
	NET_SCRIPTMSG_REGISTER_HANDLER(14, 99557);
	return;
}

void Function_734(int iParam0) //Position: 0x184E5 / 99557
{
	struct<5> Var0;
	bool bVar5;
	
	NET_SCRIPTMSG_GETNEXT(iParam0, &Var0, 2);
	Function_27(&Var1);
	if (StackVal != StackVal)
	{
		NET_LOG(StackVal, StackVal, 1, "Game LockStep", I2STR(I2STR("--- LOCKSTEP GO AHEAD ignored; differing IDs: %s vs. mine %s.")), 0, 0);
		return;
	}
	Function_28(&iVar4);
	if (Function_416(&Var1))
	{
	}
	bVar5 = Function_407(&iVar4);
	NET_LOG(true, "Game LockStep", "--- LOCKSTEP GO AHEAD RECV'D: %s. State in: %s", I2STR(Var0), I2STR(bVar5), 0, 0);
	if (bVar5 < 4294967286 && bVar5 == Var0)
	{
	}
	Function_415(&Var1, 1);
	Function_20(&Var1);
	return;
}

void Function_735(int iParam0, struct<29> Param1) //Position: 0x185E8 / 99816
{
	*(&iParam0 + 320) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
}

struct<116> Function_736(int iParam0, int iParam1) //Position: 0x185FE / 99838
{
	struct<29> Var0;
	
	Var0 = 27;
	Function_739(&Var0);
	Function_624(&Var0, 0, 22, 1, 1);
	switch (iParam0)
	{
		case 0x00000000:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 9, 10, 1);
				Function_624(&Var0, 2, 0, 6, 1);
				iParam1 = 2;
			}
			break;
		
		case 0x00000004:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 11, 6, 1);
				Function_624(&Var0, 2, 0, 8, 1);
				iParam1 = 2;
			}
			break;
		
		case 0x00000001:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 17, 10, 1);
				Function_624(&Var0, 2, 5, 6, 1);
				Function_624(&Var0, 3, 24, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000005:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 18, 10, 1);
				Function_624(&Var0, 2, 5, 8, 1);
				Function_624(&Var0, 3, 24, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000002:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 19, 20, 0);
				Function_624(&Var0, 2, 4, 8, 1);
				Function_624(&Var0, 3, 25, 6, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000006:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 20, 20, 0);
				Function_624(&Var0, 2, 4, 10, 1);
				Function_624(&Var0, 3, 25, 6, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 6, 10, 1);
				Function_624(&Var0, 2, 8, 8, 1);
				Function_624(&Var0, 3, 23, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000007:
			if (!Function_738(iParam0, &Var0, &iParam1))
			{
				Function_624(&Var0, 1, 2, 10, 1);
				Function_624(&Var0, 2, 8, 9, 1);
				Function_624(&Var0, 3, 23, 5, 1);
				iParam1 = 3;
			}
			break;
		
		case 0x00000008:
			Function_737(&Var0, &iParam1);
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_737(int iParam0, int iParam1) //Position: 0x187F4 / 100340
{
	int iVar0;
	int iVar1[17];
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	char* cVar24[32];
	struct<5> Var32;
	
	iParam1 = 1;
	Function_624(&iParam0, iParam1, 4, 4, 1);
	iVar1[7] = 1;
	iVar0 = 1;
	while (iVar0 < Global_131807.f_1316)
	{
		if (StackVal != 4294967295)
		{
			iVar20 = GET_AMMO_ENUM(StackVal);
			iVar19 = 0;
			if (Function_265(iVar20, 1))
			{
				if (!iVar1[iVar20])
				{
					iVar19 = Function_264(&Global_131396 + 520, iVar20) * 2;
					iVar1[iVar20] = 1;
				}
			}
			iParam1++;
			Function_624(StackVal, &iParam0, iParam1, iVar19, 1);
		}
		iVar0++;
	}
	if (DECOR_GET_INT_VERBOSE(Function_38(), "DLCFM_Weapon", &iVar21))
	{
		iVar23 = 0;
		while (iVar23 <= iVar21)
		{
			strcpy(&cVar24, "DLCFM_Weapon_", 32);
			straddi(&cVar24, iVar23, 32);
			if (DECOR_GET_INT_VERBOSE(Function_38(), &cVar24, &uVar22))
			{
				Function_259(uVar22, &Var32);
				iVar20 = GET_AMMO_ENUM(Var32);
				iVar19 = 0;
				if (Function_265(iVar20, 1))
				{
					if (!iVar1[iVar20])
					{
						iVar19 = StackVal;
						iVar1[iVar20] = 1;
					}
				}
				iParam1++;
				Function_624(&iParam0, iParam1, Var32, iVar19, 0);
			}
			iVar23++;
		}
	}
	return;
}

bool Function_738(int iParam0, var uParam1, int iParam2) //Position: 0x1893C / 100668
{
	if (Function_47(Global_124175.f_72, 4194304))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000004:
				Function_624(&uParam1, 1, 10, 5, 1);
				Function_624(&uParam1, 2, 7, 4, 1);
				Function_624(&uParam1, 3, 18, 2, 1);
				iParam2 = 3;
				break;
			
			case 0x00000001:
			case 0x00000005:
				Function_624(&uParam1, 1, 17, 6, 1);
				Function_624(&uParam1, 2, 6, 4, 1);
				Function_624(&uParam1, 3, 24, 6, 1);
				iParam2 = 3;
				break;
			
			case 0x00000002:
			case 0x00000006:
				Function_624(&uParam1, 1, 13, 8, 1);
				Function_624(&uParam1, 2, 16, 9, 1);
				Function_624(&uParam1, 3, 2, 3, 1);
				iParam2 = 3;
				break;
			
			case 0x00000003:
			case 0x00000007:
				Function_624(&uParam1, 1, 3, 6, 1);
				Function_624(&uParam1, 2, 15, 12, 1);
				Function_624(&uParam1, 3, 24, 3, 1);
				iParam2 = 3;
				break;
		}
		return 1;
	}
	return 0;
}

void Function_739(struct<225> Param0) //Position: 0x18A2C / 100908
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		Function_741(&(Param0[iVar0]));
		iVar0++;
	}
	Param0.f_224 = 0;
	Function_740(&Param0, 0.0f);
	return;
}

void Function_740(struct<229> Param0) //Position: 0x18A5C / 100956
{
	Param0.f_228 = iParam1;
	return;
}

void Function_741(int iParam0) //Position: 0x18A69 / 100969
{
	Function_625(&iParam0, 4294967295, 0, 1);
	return;
}

void Function_742(int iParam0, bool bParam1) //Position: 0x18A78 / 100984
{
	if (bParam1)
	{
		Function_4(&iParam0 + 80, 128);
	}
	else
	{
		Function_5(&iParam0 + 80, 128);
	}
	return;
}

void Function_743(int iParam0, int iParam1) //Position: 0x18A9A / 101018
{
	*(&iParam0 + 272) = &iParam1;
	return;
}

void Function_744() //Position: 0x18AAA / 101034
{
	int iVar0;
	
	Function_327(1, 4294967295);
	iVar0 = Function_101(1);
	Function_49(65536, 0);
	if (iVar0 >= 0)
	{
		NET_LOG(bLocal_1042, "Local State", "Player is dead.  Transitioning to MPGTPS_DEAD state.", 0, 0, 0, 0);
	}
	else
	{
		Function_329("COOP_now_dead", 0x41200000, 1, 0, 2, 1, 0);
		Function_31(&bLocal_624, 1);
		NET_LOG(bLocal_1042, "Local State", "Player has lost all their lives.  Disabling Respawning.", 0, 0, 0, 0);
	}
	return;
}

void Function_745(struct<89> Param0) //Position: 0x18B91 / 101265
{
	Param0.f_88 = iParam1;
	return;
}

void Function_746(struct<245> Param0) //Position: 0x18B9E / 101278
{
	if (bParam1)
	{
		Param0 = 9;
	}
	else if (&bParam4)
	{
		Param0 = 8;
	}
	else
	{
		Param0 = 0;
	}
	Param0.f_100 = 0.0f;
	Param0.f_80 = 0;
	Param0.f_84 = 0;
	Param0.f_244 = 4294967295;
	Param0.f_16 = 2;
	Function_735(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Param0, *(&Global_131396 + 520));
	if (!bParam1)
	{
		Function_272(&Param0 + 320, 1, 1, 1);
	}
	*(&Param0 + 184) = &Global_123163 + 3656;
	*(&Param0 + 168) = 4294967295;
	Function_745(&Param0, 2);
	Function_762(&Param0);
	Function_759(&Param0);
	Function_757(&Param0);
	Function_756(&Param0);
	Function_753(&Param0);
	Function_751(&Param0);
	Function_748(&Param0);
	if (&bParam2)
	{
		Function_5(&Param0 + 80, 1);
	}
	if (&bParam3)
	{
		Function_5(&Param0 + 80, 8);
		Function_266(&Param0 + 320);
	}
	Function_747(&Param0, &bParam4);
	Function_49(8388608, 0);
}

void Function_747(int iParam0, bool bParam1) //Position: 0x18C87 / 101511
{
	if (bParam1)
	{
		Function_5(&iParam0 + 80, 32);
	}
	else
	{
		Function_4(&iParam0 + 80, 32);
	}
	return;
}

void Function_748(int iParam0) //Position: 0x18CA9 / 101545
{
	Function_749(&iParam0, 101577);
	return;
}

void Function_749(int iParam0, int iParam1) //Position: 0x18CB9 / 101561
{
	*(&iParam0 + 304) = &iParam1;
	return;
}

int Function_750() //Position: 0x18CC9 / 101577
{
	return 0;
}

void Function_751(var uParam0) //Position: 0x18CD0 / 101584
{
	Function_352(&uParam0, 101600);
	return;
}

int Function_752() //Position: 0x18CE0 / 101600
{
	return 1;
}

void Function_753(int iParam0) //Position: 0x18CE7 / 101607
{
	Function_754(&iParam0, 101639);
	return;
}

void Function_754(int iParam0, int iParam1) //Position: 0x18CF7 / 101623
{
	*(&iParam0 + 264) = &iParam1;
	return;
}

void Function_755() //Position: 0x18D07 / 101639
{
	return;
}

void Function_756(int iParam0) //Position: 0x18D0D / 101645
{
	Function_743(&iParam0, 101639);
	return;
}

void Function_757(int iParam0) //Position: 0x18D1D / 101661
{
	Function_758(&iParam0, 101639);
	return;
}

void Function_758(int iParam0, int iParam1) //Position: 0x18D2D / 101677
{
	*(&iParam0 + 280) = &iParam1;
	return;
}

void Function_759(int iParam0) //Position: 0x18D3D / 101693
{
	Function_760(&iParam0, 101725);
	return;
}

void Function_760(int iParam0, int iParam1) //Position: 0x18D4D / 101709
{
	*(&iParam0 + 288) = &iParam1;
	return;
}

int Function_761() //Position: 0x18D5D / 101725
{
	return 0;
}

void Function_762(int iParam0) //Position: 0x18D64 / 101732
{
	Function_784(&iParam0, 101748);
	return;
}

void Function_763(int iParam0) //Position: 0x18D74 / 101748
{
	iParam0 = &iParam0;
	return;
}

void Function_764(int iParam0) //Position: 0x18D80 / 101760
{
	Function_198(&iParam0, 0.0f);
	return;
}

void Function_765(int iParam0) //Position: 0x18D8D / 101773
{
	UNK_0xA6403262(0, UI_GET_STRING("Common_Null"));
	if (&iParam0 != 0)
	{
		if (&iParam0 == 1)
		{
			UI_ENTER("XpHud");
			UI_EXIT("XpMultiplier");
		}
		else
		{
			UI_EXIT("XpHud");
		}
		UI_SET_STRING("mp_killchain_header", UI_GET_STRING("sn_kc"));
	}
	Function_147();
	Function_148();
	switch (&iParam0)
	{
		case 0x00000001:
			Function_340(12288);
			Function_40(16384);
			break;
		
		case 0x00000002:
			Function_340(20480);
			Function_40(8192);
			break;
		
		default:
			Function_40(28672);
			break;
	}
	Function_40(2048);
	Function_766(0, 0);
	Function_292();
	return;
}

void Function_766(bool bParam0, bool bParam1) //Position: 0x18E54 / 101972
{
	var uVar0;
	
	if (&bParam1)
	{
		(*&Global_122919 + 200)[5] = (*&Global_122919 + 200)[0];
	}
	Function_771(&Global_122919);
	Function_770(&Global_122919);
	uVar0 = Function_105(37);
	Function_768();
	if (!&bParam0)
	{
		Function_155(37, uVar0);
	}
	Function_49(18264, 0);
	Function_767();
	return;
}

void Function_767() //Position: 0x18EA2 / 102050
{
	Global_122919.f_196 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_120101[GET_LOCAL_SLOT()88].f_196 = 0;
	}
	return;
}

void Function_768() //Position: 0x18EC1 / 102081
{
	Function_769(&Global_122919 + 376);
	return;
}

void Function_769(int[] iParam0) //Position: 0x18ED1 / 102097
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		iParam0[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_770(int iParam0) //Position: 0x18EF4 / 102132
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*&iParam0 + 200)[iVar0] = 0;
		iVar0++;
	}
	return;
}

void Function_771(int iParam0) //Position: 0x18F19 / 102169
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (10 - 5))
	{
		(*&iParam0 + 288)[iVar0] = 0.0f;
		iVar0++;
	}
	return;
}

void Function_772() //Position: 0x18F3F / 102207
{
	iLocal_1062 = 0;
	*(&iLocal_1062 + 24) = "";
	Function_773(&iLocal_1062 + 4);
	return;
}

void Function_773(vector3 vParam0) //Position: 0x18F5A / 102234
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_774() //Position: 0x18F71 / 102257
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_775() //Position: 0x18F87 / 102279
{
	struct<405> Var0;
	
	Function_782();
	Function_780();
	Function_778();
	Function_776();
	(&Var0 + 24) = "TURRET_Gatling";
	Var0.f_8 = 49;
	Var0.f_12 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_20 = 0;
	*(&Var0 + 40) = "";
	*(&Var0 + 48) = "WEAPONS_TURRET_GATLING";
	*(&Var0 + 56) = "WEAPONS_TURRET_GATLING";
	*(&Var0 + 32) = "Gatling_Gun";
	*(&Var0 + 88) = "TUR_Gatling";
	Var0.f_96 = 1.0f;
	*(&Var0 + 104) = "ptl";
	*(&Var0 + 112) = "";
	*(&Var0 + 120) = "<none>";
	*(&Var0 + 128) = "ndonothing";
	*(&Var0 + 136) = "nDoNothing";
	Var0.f_144 = 0,5f;
	Var0.f_148 = 85.0f;
	Var0.f_152 = 65.0f;
	Var0.f_156 = 1,5f;
	Var0.f_160 = 3.0f;
	Var0.f_164 = 0,2f;
	Var0.f_168 = 80.0f;
	Var0.f_172 = 1.0f;
	Var0.f_176 = 0,2f;
	Var0.f_180 = 0,6f;
	*(&Var0 + 184) = "MUZZLE_FLASH1";
	*(&Var0 + 192) = "RUMBLE_MACHINEGUN";
	*(&Var0 + 200) = "wrist_r";
	Var0.f_208 = 0,8f;
	Var0.f_212 = 60.0f;
	Var0.f_216 = 0,8f;
	Var0.f_220 = 60.0f;
	Var0.f_224 = 7.0f;
	Var0.f_228 = 70.0f;
	Var0.f_232 = 0,1f;
	Var0.f_236 = 7.0f;
	Var0.f_240 = 70.0f;
	Var0.f_244 = 0,1f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 1;
	Var0.f_276 = 0;
	Var0.f_280 = 0,09f;
	Var0.f_284 = 0,006f;
	Var0.f_288 = 1.0f;
	Var0.f_292 = 1.0f;
	Var0.f_296 = 1.0f;
	Var0.f_300 = 20.0f;
	Var0.f_304 = 30.0f;
	Var0.f_308 = 30.0f;
	Var0.f_312 = 30.0f;
	Var0.f_316 = 120.0f;
	*(&Var0 + 320) = "";
	Var0.f_328 = 0;
	Var0.f_332 = 10.0f;
	Var0.f_336 = 20.0f;
	Var0.f_340 = 70.0f;
	Var0.f_344 = 9999.0f;
	Var0.f_348 = 1.0f;
	Var0.f_352 = 4.0f;
	Var0.f_356 = 50.0f;
	Var0.f_360 = 1.0f;
	Var0.f_364 = 0;
	Var0.f_368 = 0.0f;
	*(&Var0 + 376) = "Auto";
	Var0.f_384 = 0,5f;
	Var0.f_388 = 9999.0f;
	Var0.f_392 = 0.0f;
	Var0.f_396 = 0.0f;
	Var0.f_400 = 1;
	Var0.f_404 = 1;
	Var0.f_64 = 17;
	Var0.f_68 = 0,5f;
	Var0.f_72 = 0,5f;
	Var0.f_76 = 0,5f;
	Var0.f_80 = 0,5f;
	Var0.f_84 = 0,5f;
	INIT_NATIVE_WEAPONENUM_TURRET(26, "base_turret", &Var0);
	*(&Var51 + 24) = "TURRET_Browning";
	Var51.f_8 = 50;
	Var51.f_12 = 4294967295;
	Var51.f_16 = 4294967295;
	Var51.f_20 = 0;
	*(&Var51 + 40) = "";
	*(&Var51 + 48) = "WEAPONS_TURRET_BROWNING";
	*(&Var51 + 56) = "WEAPONS_TURRET_BROWNING";
	*(&Var51 + 32) = "Browning_Gun";
	*(&Var51 + 88) = "TUR_Browning";
	Var51.f_96 = 1.0f;
	*(&Var51 + 104) = "ptl";
	*(&Var51 + 112) = "";
	*(&Var51 + 120) = "<none>";
	*(&Var51 + 128) = "ndonothing";
	*(&Var51 + 136) = "nDoNothing";
	Var51.f_144 = 1.0f;
	Var51.f_148 = 90.0f;
	Var51.f_152 = 70.0f;
	Var51.f_156 = 1,5f;
	Var51.f_160 = 3.0f;
	Var51.f_164 = 0,2f;
	Var51.f_168 = 100.0f;
	Var51.f_172 = 1.0f;
	Var51.f_176 = 0,2f;
	Var51.f_180 = 0,6f;
	*(&Var51 + 184) = "MUZZLE_FLASH1";
	*(&Var51 + 192) = "RUMBLE_MACHINEGUN";
	*(&Var51 + 200) = "wrist_r";
	Var51.f_208 = 0,8f;
	Var51.f_212 = 80.0f;
	Var51.f_216 = 0,8f;
	Var51.f_220 = 80.0f;
	Var51.f_224 = 5.0f;
	Var51.f_228 = 85.0f;
	Var51.f_232 = 0,1f;
	Var51.f_236 = 5.0f;
	Var51.f_240 = 85.0f;
	Var51.f_244 = 0,1f;
	*(&Var51 + 264) = "AIMER_BALLISTIC";
	Var51.f_272 = 1;
	Var51.f_276 = 0;
	Var51.f_280 = 0,07f;
	Var51.f_284 = 0,004f;
	Var51.f_288 = 1.0f;
	Var51.f_292 = 1.0f;
	Var51.f_296 = 1.0f;
	Var51.f_300 = 40.0f;
	Var51.f_304 = 40.0f;
	Var51.f_308 = 40.0f;
	Var51.f_312 = 40.0f;
	Var51.f_316 = 120.0f;
	*(&Var51 + 320) = "";
	Var51.f_328 = 0;
	Var51.f_332 = 10.0f;
	Var51.f_336 = 30.0f;
	Var51.f_340 = 30.0f;
	Var51.f_344 = 9999.0f;
	Var51.f_348 = 1.0f;
	Var51.f_352 = 4.0f;
	Var51.f_356 = 50.0f;
	Var51.f_360 = 1.0f;
	Var51.f_364 = 0;
	Var51.f_368 = 0.0f;
	*(&Var51 + 376) = "Auto";
	Var51.f_384 = 0,5f;
	Var51.f_388 = 9999.0f;
	Var51.f_392 = 0.0f;
	Var51.f_396 = 0.0f;
	Var51.f_400 = 1;
	Var51.f_404 = 1;
	Var51.f_64 = 17;
	Var51.f_68 = 0,5f;
	Var51.f_72 = 0,5f;
	Var51.f_76 = 0,5f;
	Var51.f_80 = 0,5f;
	Var51.f_84 = 0,5f;
	INIT_NATIVE_WEAPONENUM_TURRET(27, "base_turret", &Var51);
	*(&Var102 + 24) = "DEFAULT_Cannon";
	Var102.f_8 = 51;
	Var102.f_12 = 4294967295;
	Var102.f_16 = 4294967295;
	Var102.f_20 = 0;
	*(&Var102 + 40) = "";
	*(&Var102 + 48) = "WEAPONS_TURRET_CANNON";
	*(&Var102 + 56) = "WEAPONS_TURRET_CANNON";
	*(&Var102 + 32) = "Cannon";
	*(&Var102 + 88) = "TUR_Cannon";
	Var102.f_96 = 1.0f;
	*(&Var102 + 104) = "ptl";
	*(&Var102 + 112) = "";
	*(&Var102 + 120) = "<none>";
	*(&Var102 + 128) = "ndonothing";
	*(&Var102 + 136) = "nDoNothing";
	Var102.f_144 = 1.0f;
	Var102.f_148 = 60.0f;
	Var102.f_152 = 36.0f;
	Var102.f_156 = 1.0f;
	Var102.f_160 = 2.0f;
	Var102.f_164 = 0,2f;
	Var102.f_168 = 120.0f;
	Var102.f_172 = 1.0f;
	Var102.f_176 = 0,2f;
	Var102.f_180 = 0,6f;
	*(&Var102 + 184) = "MUZZLE_CANNON";
	*(&Var102 + 192) = "RUMBLE_CANNON";
	*(&Var102 + 200) = "wrist_r";
	Var102.f_208 = 0,8f;
	Var102.f_212 = 200.0f;
	Var102.f_216 = 0,8f;
	Var102.f_220 = 200.0f;
	Var102.f_224 = 40.0f;
	Var102.f_228 = 60.0f;
	Var102.f_232 = 0,6f;
	Var102.f_236 = 40.0f;
	Var102.f_240 = 60.0f;
	Var102.f_244 = 0,6f;
	*(&Var102 + 264) = "AIMER_SIMPLE";
	Var102.f_272 = 1;
	Var102.f_276 = 0;
	Var102.f_280 = 3.0f;
	Var102.f_284 = 0,02f;
	Var102.f_288 = 1.0f;
	Var102.f_292 = 10.0f;
	Var102.f_296 = 1.0f;
	Var102.f_300 = 50.0f;
	Var102.f_304 = 50.0f;
	Var102.f_308 = 50.0f;
	Var102.f_312 = 50.0f;
	Var102.f_316 = 300.0f;
	*(&Var102 + 320) = "WEAP_CANNON_TRAIL";
	Var102.f_328 = 0;
	Var102.f_332 = 10.0f;
	Var102.f_336 = 40.0f;
	Var102.f_340 = 70.0f;
	Var102.f_344 = 9999.0f;
	Var102.f_348 = 1.0f;
	Var102.f_352 = 4.0f;
	Var102.f_356 = 50.0f;
	Var102.f_360 = 1.0f;
	Var102.f_364 = 0;
	Var102.f_368 = 0.0f;
	*(&Var102 + 376) = "Single";
	Var102.f_384 = 0,5f;
	Var102.f_388 = 9999.0f;
	Var102.f_392 = 0.0f;
	Var102.f_396 = 0.0f;
	Var102.f_400 = 1;
	Var102.f_404 = 1;
	Var102.f_64 = 1;
	Var102.f_68 = 0,5f;
	Var102.f_72 = 0,5f;
	Var102.f_76 = 0,5f;
	Var102.f_80 = 0,5f;
	Var102.f_84 = 0,5f;
	INIT_NATIVE_WEAPONENUM_CANNON(28, "base_cannon", &Var102);
	return;
}

void Function_776() //Position: 0x198EB / 104683
{
	struct<297> Var0;
	
	*(&Var0 + 24) = "MELEE_TORCH";
	Var0.f_8 = 46;
	Var0.f_12 = 20;
	Var0.f_16 = 20;
	Var0.f_20 = 4294967295;
	*(&Var0 + 40) = "melee_torch01x";
	*(&Var0 + 32) = "TORCH";
	*(&Var0 + 48) = "";
	*(&Var0 + 56) = "";
	*(&Var0 + 88) = "nMEL_Torch";
	Var0.f_96 = 500.0f;
	*(&Var0 + 104) = "trc";
	*(&Var0 + 112) = "";
	*(&Var0 + 120) = "<none>";
	*(&Var0 + 128) = "ndonothing";
	*(&Var0 + 136) = "nDoNothing";
	Var0.f_144 = 0.0f;
	Var0.f_148 = 0.0f;
	Var0.f_152 = 0.0f;
	Var0.f_156 = 0.0f;
	Var0.f_160 = 0.0f;
	Var0.f_164 = 0.0f;
	Var0.f_168 = 0.0f;
	Var0.f_172 = 0.0f;
	Var0.f_176 = 0.0f;
	Var0.f_180 = 0.0f;
	*(&Var0 + 184) = "TORCH_IDLE";
	*(&Var0 + 192) = "";
	*(&Var0 + 200) = "wrist_r_Attachment";
	Var0.f_208 = 0,8f;
	Var0.f_212 = 15.0f;
	Var0.f_216 = 0,8f;
	Var0.f_220 = 15.0f;
	Var0.f_224 = 0.0f;
	Var0.f_228 = 1.0f;
	Var0.f_232 = 0,6f;
	*(&Var0 + 264) = "AIMER_SIMPLE";
	Var0.f_272 = 0;
	Var0.f_276 = 0;
	Var0.f_280 = 0,5f;
	Var0.f_284 = 0,03f;
	Var0.f_288 = 1;
	Var0.f_292 = 8.0f;
	Var0.f_296 = 8.0f;
	Var0.f_64 = 35;
	Var0.f_68 = 0,15f;
	Var0.f_72 = 0.0f;
	Var0.f_76 = 0,4f;
	Var0.f_80 = 0.0f;
	Var0.f_84 = 0.0f;
	Function_777(33, "base_melee", &Var0);
	RESOLVE_DLC_WEAPONENUM(33);
	return;
}

void Function_777(var uParam0, var uParam1, var uParam2) //Position: 0x19AD7 / 105175
{
	INIT_NATIVE_WEAPONENUM_MELEE(uParam0, &uParam1, &uParam2);
	return;
}

void Function_778() //Position: 0x19AE8 / 105192
{
	struct<45> Var0;
	
	Var0 = "ZOMBIEBAIT";
	*(&Var0 + 8) = "ammo_zombiebait";
	*(&Var0 + 16) = "ammo_zombiebait";
	Var0.f_24 = 20.0f;
	Var0.f_28 = 1.0f;
	Var0.f_32 = 0;
	Var0.f_36 = 0,5f;
	Var0.f_40 = 1;
	Var0.f_44 = 1;
	Function_779(3, &Var0);
	Var0 = "ZOMBIEBOOMBAIT";
	*(&Var0 + 8) = "ammo_zombieboombait";
	*(&Var0 + 16) = "ammo_zombieboombait";
	Var0.f_24 = 20.0f;
	Var0.f_28 = 1.0f;
	Var0.f_32 = 0;
	Var0.f_36 = 0,5f;
	Var0.f_40 = 1;
	Var0.f_44 = 1;
	Function_779(2, &Var0);
	Var0 = "nHOLYWATER";
	*(&Var0 + 8) = "ammo_holywater";
	*(&Var0 + 16) = "ammo_holywater";
	Var0.f_24 = 20.0f;
	Var0.f_28 = 1.0f;
	Var0.f_32 = 0;
	Var0.f_36 = 0,5f;
	Var0.f_40 = 1;
	Var0.f_44 = 1;
	Function_779(16, &Var0);
	Var0 = "ZOMBIEBAIT";
	*(&Var0 + 8) = "ammo_zombiebait";
	*(&Var0 + 16) = "ammo_zombiebait";
	Var0.f_24 = 20.0f;
	Var0.f_28 = 1.0f;
	Var0.f_32 = 0;
	Var0.f_36 = 0,5f;
	Var0.f_40 = 1;
	Var0.f_44 = 1;
	Function_779(3, &Var0);
	Var0 = "ZOMBIEBOOMBAIT";
	*(&Var0 + 8) = "ammo_zombieboombait";
	*(&Var0 + 16) = "ammo_zombieboombait";
	Var0.f_24 = 20.0f;
	Var0.f_28 = 1.0f;
	Var0.f_32 = 0;
	Var0.f_36 = 0,5f;
	Var0.f_40 = 1;
	Var0.f_44 = 1;
	Function_779(2, &Var0);
	return;
}

void Function_779(int iParam0, var uParam1) //Position: 0x19D16 / 105750
{
	INIT_NATIVE_WEAPONENUM_AMMO(iParam0, &uParam1);
	return;
}

void Function_780() //Position: 0x19D24 / 105764
{
	struct<421> Var0;
	
	*(&Var0 + 24) = "SHOTGUN_Blunderbuss";
	Var0.f_8 = 43;
	Var0.f_12 = 4294967295;
	Var0.f_16 = 20;
	Var0.f_20 = 15;
	*(&Var0 + 40) = "rifle_blunderbuss01x";
	*(&Var0 + 48) = "WEAPONS_RIFLE_BLUNDERBUSS";
	*(&Var0 + 56) = "WEAPONS_RIFLE_BLUNDERBUSS";
	*(&Var0 + 32) = "BLUNDERBUSS";
	*(&Var0 + 88) = "SHTG_Blunderbuss";
	Var0.f_96 = 200.0f;
	*(&Var0 + 104) = "rfl";
	*(&Var0 + 112) = "rfl_bld";
	*(&Var0 + 120) = "nRifle_bld";
	*(&Var0 + 128) = "rifle_1892Win";
	*(&Var0 + 136) = "rifle_1892Win";
	Var0.f_144 = 1.0f;
	Var0.f_148 = 15.0f;
	Var0.f_152 = 7.0f;
	Var0.f_156 = 1.0f;
	Var0.f_160 = 1.0f;
	Var0.f_164 = 0,4f;
	Var0.f_168 = 10.0f;
	Var0.f_172 = 40.0f;
	Var0.f_176 = 1.0f;
	Var0.f_180 = 0,5f;
	*(&Var0 + 184) = "MUZZLE_BLUNDERBUSS";
	*(&Var0 + 192) = "RUMBLE_SHOTGUN";
	*(&Var0 + 200) = "wrist_r_Attachment";
	Var0.f_208 = 0,8f;
	Var0.f_212 = 50.0f;
	Var0.f_216 = 0,8f;
	Var0.f_220 = 50.0f;
	Var0.f_224 = 30.0f;
	Var0.f_228 = 100.0f;
	Var0.f_232 = 0,5f;
	Var0.f_236 = 30.0f;
	Var0.f_240 = 100.0f;
	Var0.f_244 = 0,5f;
	Var0.f_248 = 0.0f;
	Var0.f_252 = 1.0f;
	Var0.f_256 = 0.0f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 1;
	Var0.f_276 = 0;
	Var0.f_280 = 3,5f;
	Var0.f_284 = 3,5f;
	Var0.f_288 = 0,4f;
	Var0.f_292 = 0,5f;
	Var0.f_296 = 0,5f;
	Var0.f_300 = 300.0f;
	Var0.f_304 = 50.0f;
	Var0.f_308 = 30.0f;
	Var0.f_312 = 30.0f;
	Var0.f_316 = 1000.0f;
	*(&Var0 + 320) = "";
	Var0.f_328 = 1;
	Var0.f_332 = 5.0f;
	Var0.f_336 = 10.0f;
	Var0.f_340 = 70.0f;
	Var0.f_344 = 6.0f;
	Var0.f_348 = 1.0f;
	Var0.f_352 = 4.0f;
	Var0.f_356 = 50.0f;
	Var0.f_360 = 1.0f;
	Var0.f_364 = 1;
	Var0.f_368 = 10.0f;
	Var0.f_376 = 1.0f;
	Var0.f_380 = 1.0f;
	Var0.f_384 = 1.0f;
	Var0.f_388 = 20.0f;
	Var0.f_392 = 20;
	Var0.f_396 = 1;
	Var0.f_400 = 300.0f;
	Var0.f_404 = 3,5f;
	Var0.f_408 = 0,9f;
	Var0.f_412 = 1.0f;
	Var0.f_416 = 20.0f;
	Var0.f_420 = 20;
	Var0.f_64 = 4294967295;
	Var0.f_68 = 0,67f;
	Var0.f_72 = 0,22f;
	Var0.f_76 = 0,85f;
	Var0.f_80 = 0,5f;
	Var0.f_84 = 0,19f;
	Function_781(34, "base_shotgun", &Var0);
	RESOLVE_DLC_WEAPONENUM(34);
	return;
}

void Function_781(var uParam0, var uParam1, var uParam2) //Position: 0x1A0CB / 106699
{
	INIT_NATIVE_WEAPONENUM_SHOTGUN(uParam0, &uParam1, &uParam2);
	return;
}

void Function_782() //Position: 0x1A0DC / 106716
{
	struct<473> Var0;
	
	*(&Var0 + 24) = "THROWN_ZombieBait";
	Var0.f_8 = 47;
	Var0.f_12 = 20;
	Var0.f_16 = 20;
	Var0.f_20 = 3;
	*(&Var0 + 40) = "throw_zombiebait01x";
	*(&Var0 + 48) = "";
	*(&Var0 + 56) = "";
	*(&Var0 + 32) = "ZombieBait";
	*(&Var0 + 88) = "THRX_ZombieBait";
	Var0.f_96 = 500.0f;
	*(&Var0 + 104) = "dyn";
	*(&Var0 + 112) = "";
	*(&Var0 + 120) = "<none>";
	*(&Var0 + 128) = "ndonothing";
	*(&Var0 + 136) = "nDoNothing";
	Var0.f_144 = 10.0f;
	Var0.f_148 = 40.0f;
	Var0.f_152 = 20.0f;
	Var0.f_156 = 1.0f;
	Var0.f_160 = 1.0f;
	Var0.f_164 = 0,1f;
	Var0.f_168 = 40.0f;
	Var0.f_172 = 1.0f;
	Var0.f_176 = 1.0f;
	Var0.f_180 = 1.0f;
	*(&Var0 + 184) = "";
	*(&Var0 + 192) = "";
	*(&Var0 + 448) = "";
	*(&Var0 + 456) = Vector(0,045f, 0,17f, 0.0f);
	*(&Var0 + 200) = "wrist_r";
	Var0.f_208 = 0,8f;
	Var0.f_212 = 100.0f;
	Var0.f_216 = 0,8f;
	Var0.f_220 = 100.0f;
	Var0.f_224 = 20.0f;
	Var0.f_228 = 40.0f;
	Var0.f_232 = 0,6f;
	Var0.f_236 = 20.0f;
	Var0.f_240 = 40.0f;
	Var0.f_244 = 0,6f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 0;
	Var0.f_276 = 0;
	Var0.f_280 = 1.0f;
	Var0.f_284 = 0,1f;
	Var0.f_288 = 1.0f;
	Var0.f_292 = 8,5f;
	Var0.f_296 = 1,5f;
	Var0.f_300 = 30.0f;
	Var0.f_304 = 30.0f;
	Var0.f_308 = 30.0f;
	Var0.f_312 = 30.0f;
	Var0.f_316 = 60.0f;
	*(&Var0 + 320) = "muzzle_zombie_bait";
	Var0.f_328 = 0;
	Var0.f_332 = 40.0f;
	Var0.f_336 = 20.0f;
	Var0.f_340 = 1.0f;
	Var0.f_344 = 1.0f;
	Var0.f_348 = 10.0f;
	Var0.f_352 = 1.0f;
	Var0.f_356 = 100.0f;
	Var0.f_360 = 0,5f;
	Var0.f_364 = 0;
	Var0.f_368 = 0.0f;
	Var0.f_368 = 0.0f;
	*(&Var0 + 376) = "throw_zombieBait01x";
	*(&Var0 + 384) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_400 = 1;
	Var0.f_404 = 0;
	Var0.f_416 = 0;
	Var0.f_420 = 1;
	Var0.f_408 = 1;
	Var0.f_412 = 0;
	Var0.f_424 = 26.0f;
	Var0.f_428 = 0.0f;
	Var0.f_432 = 1;
	Var0.f_436 = 1;
	Var0.f_440 = 4;
	Var0.f_396 = 2.0f;
	Var0.f_472 = -1.0f;
	*(&Var0 + 480) = "ZombieBaitExplosion";
	Var0.f_468 = 30.0f;
	Var0.f_64 = 47;
	Var0.f_68 = 0,65f;
	Var0.f_72 = 0,3f;
	Var0.f_76 = 0.0f;
	Var0.f_80 = 0.0f;
	Var0.f_84 = 0.0f;
	Function_783(36, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(36);
	*(&Var0 + 24) = "THROWN_HolyWater";
	Var0.f_8 = 47;
	Var0.f_12 = 20;
	Var0.f_16 = 20;
	Var0.f_20 = 16;
	*(&Var0 + 40) = "throw_holyWater01x";
	*(&Var0 + 48) = "";
	*(&Var0 + 56) = "";
	*(&Var0 + 32) = "nHolyWater";
	*(&Var0 + 88) = "THRX_HolyWater";
	Var0.f_96 = 500.0f;
	*(&Var0 + 104) = "dyn";
	*(&Var0 + 112) = "";
	*(&Var0 + 120) = "<none>";
	*(&Var0 + 128) = "ndonothing";
	*(&Var0 + 136) = "nDoNothing";
	Var0.f_144 = 10.0f;
	Var0.f_148 = 40.0f;
	Var0.f_152 = 20.0f;
	Var0.f_156 = 1.0f;
	Var0.f_160 = 1.0f;
	Var0.f_164 = 0,1f;
	Var0.f_168 = 40.0f;
	Var0.f_172 = 1.0f;
	Var0.f_176 = 1.0f;
	Var0.f_180 = 1.0f;
	*(&Var0 + 184) = "";
	*(&Var0 + 192) = "";
	*(&Var0 + 448) = "";
	*(&Var0 + 456) = Vector(0,045f, 0,17f, 0.0f);
	*(&Var0 + 200) = "wrist_r";
	Var0.f_208 = 0,8f;
	Var0.f_212 = 100.0f;
	Var0.f_216 = 0,8f;
	Var0.f_220 = 100.0f;
	Var0.f_224 = 20.0f;
	Var0.f_228 = 40.0f;
	Var0.f_232 = 0,6f;
	Var0.f_236 = 20.0f;
	Var0.f_240 = 40.0f;
	Var0.f_244 = 0,6f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 0;
	Var0.f_276 = 0;
	Var0.f_280 = 1.0f;
	Var0.f_284 = 0,1f;
	Var0.f_288 = 1.0f;
	Var0.f_292 = 8,5f;
	Var0.f_296 = 1,5f;
	Var0.f_300 = 30.0f;
	Var0.f_304 = 30.0f;
	Var0.f_308 = 30.0f;
	Var0.f_312 = 30.0f;
	Var0.f_316 = 60.0f;
	*(&Var0 + 320) = "muzzle_zombie_holywater";
	Var0.f_328 = 0;
	Var0.f_332 = 40.0f;
	Var0.f_336 = 20.0f;
	Var0.f_340 = 1.0f;
	Var0.f_344 = 1.0f;
	Var0.f_348 = 10.0f;
	Var0.f_352 = 1.0f;
	Var0.f_356 = 100.0f;
	Var0.f_360 = 0,5f;
	Var0.f_364 = 0;
	Var0.f_368 = 0.0f;
	Var0.f_368 = 0.0f;
	*(&Var0 + 376) = "throw_holyWater01x";
	*(&Var0 + 384) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_400 = 1;
	Var0.f_404 = 0;
	Var0.f_416 = 0;
	Var0.f_420 = 1;
	Var0.f_408 = 1;
	Var0.f_412 = 0;
	Var0.f_424 = 26.0f;
	Var0.f_428 = 0.0f;
	Var0.f_432 = 1;
	Var0.f_436 = 1;
	Var0.f_440 = 4;
	Var0.f_396 = 2.0f;
	Var0.f_472 = -1.0f;
	*(&Var0 + 480) = "HolyWaterExplosion";
	Var0.f_468 = 30.0f;
	Var0.f_64 = 47;
	Var0.f_68 = 0,65f;
	Var0.f_72 = 0,3f;
	Var0.f_76 = 0.0f;
	Var0.f_80 = 0.0f;
	Var0.f_84 = 0.0f;
	Function_783(35, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(35);
	*(&Var0 + 24) = "THROWN_ZombieBoomBait";
	Var0.f_8 = 47;
	Var0.f_12 = 20;
	Var0.f_16 = 20;
	Var0.f_20 = 2;
	*(&Var0 + 40) = "throw_zombiebait02x";
	*(&Var0 + 48) = "";
	*(&Var0 + 56) = "";
	*(&Var0 + 32) = "ZombieBoomBait";
	*(&Var0 + 88) = "THRX_ZombieBoomBait";
	Var0.f_96 = 500.0f;
	*(&Var0 + 104) = "dyn";
	*(&Var0 + 112) = "";
	*(&Var0 + 120) = "<none>";
	*(&Var0 + 128) = "ndonothing";
	*(&Var0 + 136) = "nDoNothing";
	Var0.f_144 = 10.0f;
	Var0.f_148 = 40.0f;
	Var0.f_152 = 20.0f;
	Var0.f_156 = 1.0f;
	Var0.f_160 = 1.0f;
	Var0.f_164 = 0,1f;
	Var0.f_168 = 40.0f;
	Var0.f_172 = 1.0f;
	Var0.f_176 = 1.0f;
	Var0.f_180 = 1.0f;
	*(&Var0 + 184) = "";
	*(&Var0 + 192) = "";
	*(&Var0 + 448) = "MUZZLE_DYNAMITE";
	*(&Var0 + 456) = Vector(0.0f, 0.0f, 0.0f);
	*(&Var0 + 200) = "wrist_r";
	Var0.f_208 = 0,8f;
	Var0.f_212 = 100.0f;
	Var0.f_216 = 0,8f;
	Var0.f_220 = 100.0f;
	Var0.f_224 = 20.0f;
	Var0.f_228 = 40.0f;
	Var0.f_232 = 0,6f;
	Var0.f_236 = 20.0f;
	Var0.f_240 = 40.0f;
	Var0.f_244 = 0,6f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 0;
	Var0.f_276 = 0;
	Var0.f_280 = 1.0f;
	Var0.f_284 = 0,1f;
	Var0.f_288 = 1.0f;
	Var0.f_292 = 8,5f;
	Var0.f_296 = 1,5f;
	Var0.f_300 = 30.0f;
	Var0.f_304 = 30.0f;
	Var0.f_308 = 30.0f;
	Var0.f_312 = 30.0f;
	Var0.f_316 = 60.0f;
	*(&Var0 + 320) = "weap_dynamite_trail";
	Var0.f_328 = 0;
	Var0.f_332 = 40.0f;
	Var0.f_336 = 20.0f;
	Var0.f_340 = 1.0f;
	Var0.f_344 = 1.0f;
	Var0.f_348 = 10.0f;
	Var0.f_352 = 1.0f;
	Var0.f_356 = 100.0f;
	Var0.f_360 = 0,5f;
	Var0.f_364 = 0;
	Var0.f_368 = 0.0f;
	Var0.f_368 = 0.0f;
	*(&Var0 + 376) = "throw_zombieBait02x";
	*(&Var0 + 384) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_400 = 1;
	Var0.f_404 = 0;
	Var0.f_416 = 0;
	Var0.f_420 = 1;
	Var0.f_408 = 1;
	Var0.f_412 = 1;
	Var0.f_424 = 26.0f;
	Var0.f_428 = 0.0f;
	Var0.f_432 = 1;
	Var0.f_436 = 1;
	Var0.f_440 = 4;
	Var0.f_396 = 2.0f;
	Var0.f_472 = 8,9f;
	*(&Var0 + 480) = "ZombieBaitExplosion";
	Var0.f_468 = 30.0f;
	Var0.f_64 = 47;
	Var0.f_68 = 0,65f;
	Var0.f_72 = 0,3f;
	Var0.f_76 = 0.0f;
	Var0.f_80 = 0.0f;
	Var0.f_84 = 0.0f;
	Function_783(37, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(37);
	*(&Var0 + 24) = "THROWN_ZombieSpit";
	Var0.f_8 = 47;
	Var0.f_12 = 20;
	Var0.f_16 = 20;
	Var0.f_20 = 0;
	*(&Var0 + 40) = "throw_zombieSpit01x";
	*(&Var0 + 48) = "";
	*(&Var0 + 56) = "";
	*(&Var0 + 32) = "ZombieSpit";
	*(&Var0 + 88) = "THRX_ZombieSpit";
	Var0.f_96 = 500.0f;
	*(&Var0 + 104) = "dyn";
	*(&Var0 + 112) = "";
	*(&Var0 + 120) = "<none>";
	*(&Var0 + 128) = "ndonothing";
	*(&Var0 + 136) = "nDoNothing";
	Var0.f_144 = 5.0f;
	Var0.f_148 = 15.0f;
	Var0.f_152 = 10.0f;
	Var0.f_156 = 1.0f;
	Var0.f_160 = 1.0f;
	Var0.f_164 = 0,1f;
	Var0.f_168 = 40.0f;
	Var0.f_172 = 1.0f;
	Var0.f_176 = 1.0f;
	Var0.f_180 = 1.0f;
	*(&Var0 + 184) = "";
	*(&Var0 + 192) = "";
	*(&Var0 + 448) = "";
	*(&Var0 + 456) = Vector(0,045f, 0,17f, 0.0f);
	*(&Var0 + 200) = "head";
	Var0.f_208 = 0,8f;
	Var0.f_212 = 100.0f;
	Var0.f_216 = 0,8f;
	Var0.f_220 = 100.0f;
	Var0.f_224 = 20.0f;
	Var0.f_228 = 40.0f;
	Var0.f_232 = 0,6f;
	Var0.f_236 = 20.0f;
	Var0.f_240 = 40.0f;
	Var0.f_244 = 0,6f;
	*(&Var0 + 264) = "AIMER_BALLISTIC";
	Var0.f_272 = 0;
	Var0.f_276 = 0;
	Var0.f_280 = 1.0f;
	Var0.f_284 = 0,1f;
	Var0.f_288 = 1.0f;
	Var0.f_292 = 8,5f;
	Var0.f_296 = 1,5f;
	Var0.f_300 = 30.0f;
	Var0.f_304 = 30.0f;
	Var0.f_308 = 30.0f;
	Var0.f_312 = 30.0f;
	Var0.f_316 = 60.0f;
	*(&Var0 + 320) = "ZOMBIE_SPIT_TRAIL";
	Var0.f_328 = 0;
	Var0.f_332 = 40.0f;
	Var0.f_336 = 10.0f;
	Var0.f_340 = 1.0f;
	Var0.f_344 = 1.0f;
	Var0.f_348 = 10.0f;
	Var0.f_352 = 1.0f;
	Var0.f_356 = 100.0f;
	Var0.f_360 = 0,5f;
	Var0.f_364 = 0;
	Var0.f_368 = 0.0f;
	Var0.f_368 = 0.0f;
	*(&Var0 + 376) = "throw_zombieSpit01x";
	*(&Var0 + 384) = Vector(1.0f, 1.0f, 1.0f);
	Var0.f_400 = 1;
	Var0.f_404 = 1;
	Var0.f_416 = 0;
	Var0.f_420 = 0;
	Var0.f_408 = 0;
	Var0.f_412 = 0;
	Var0.f_424 = 26.0f;
	Var0.f_428 = 0.0f;
	Var0.f_432 = 1;
	Var0.f_436 = 1;
	Var0.f_440 = 0;
	Var0.f_396 = 2.0f;
	Var0.f_472 = -1.0f;
	*(&Var0 + 480) = "";
	Var0.f_468 = 30.0f;
	Var0.f_64 = 47;
	Var0.f_68 = 0,65f;
	Var0.f_72 = 0,3f;
	Var0.f_76 = 0.0f;
	Var0.f_80 = 0.0f;
	Var0.f_84 = 0.0f;
	Function_783(32, "base_thrown_exploding", &Var0);
	RESOLVE_DLC_WEAPONENUM(32);
	return;
}

void Function_783(var uParam0, int iParam1, int iParam2) //Position: 0x1AF07 / 110343
{
	INIT_NATIVE_WEAPONENUM_THROWN_EXPLODING(uParam0, &iParam1, &iParam2);
	return;
}

void Function_784(int iParam0, int iParam1) //Position: 0x1AF18 / 110360
{
	*(&iParam0 + 256) = &iParam1;
	return;
}

void Function_785(var uParam0) //Position: 0x1AF28 / 110376
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		SNAP_OBJECT_TO_GROUND(&uParam0, 3.0f, false, 1092616192);
	}
	return;
}

void Function_786(struct<17> Param0) //Position: 0x1AF48 / 110408
{
	Param0.f_16 = 2;
	iParam1 = iParam1;
	return;
}

void Function_787(int iParam0, int iParam1) //Position: 0x1AF58 / 110424
{
	if (IS_VOLUME_VALID(&iParam1))
	{
		*(&iParam0 + 8) = &iParam1;
	}
	return;
}

void Function_788() //Position: 0x1AF73 / 110451
{
	Function_791(&uLocal_770, 21, 3, 1);
	Function_791(&uLocal_770, 24, 3, 1);
	Function_791(&uLocal_770, 25, 3, 1);
	Function_791(&uLocal_770, 31, 3, 1);
	Function_791(&uLocal_770, 44, 3, 1);
	Function_791(&uLocal_770, 46, 3, 1);
	Function_791(&uLocal_770, 245, 3, 1);
	Function_791(&uLocal_770, 254, 3, 1);
	Function_791(&uLocal_770, 257, 3, 1);
	Function_791(&uLocal_770, 278, 3, 1);
	Function_791(&uLocal_770, 284, 3, 1);
	Function_791(&uLocal_770, 300, 3, 1);
	Function_791(&uLocal_770, 1204, 3, 1);
	Function_791(&uLocal_770, 1205, 3, 1);
	Function_791(&uLocal_770, 1206, 3, 1);
	Function_791(&uLocal_770, 1207, 3, 1);
	Function_791(&uLocal_770, 1208, 3, 1);
	Function_791(&uLocal_770, 1209, 3, 1);
	Function_791(&uLocal_770, 1210, 3, 1);
	Function_791(&uLocal_770, 1211, 3, 1);
	Function_791(&uLocal_770, 1212, 3, 1);
	Function_791(&uLocal_770, 1213, 3, 1);
	Function_791(&uLocal_770, 1214, 3, 1);
	Function_791(&uLocal_770, 1215, 3, 1);
	Function_791(&uLocal_770, 1216, 3, 1);
	Function_791(&uLocal_770, 1217, 3, 1);
	Function_791(&uLocal_770, 1218, 3, 1);
	Function_791(&uLocal_770, 1219, 3, 1);
	Function_791(&uLocal_770, 1220, 3, 1);
	Function_791(&uLocal_770, 1221, 3, 1);
	Function_791(&uLocal_770, 1222, 3, 1);
	Function_791(&uLocal_770, 1223, 3, 1);
	Function_791(&uLocal_770, 1224, 3, 1);
	Function_791(&uLocal_770, 1225, 3, 1);
	Function_791(&uLocal_770, 1226, 3, 1);
	Function_791(&uLocal_770, 1227, 3, 1);
	Function_789(&uLocal_770, "$/fragments/p_gen_coffin04x", 0, 0);
	Function_789(&uLocal_770, "ZombiePackMPGringos", 12, 0);
	Function_789(&uLocal_770, "$/content/DLC/ZombiePack/Gringos/MP_OpenCoffin", 1, 0);
	return;
}

var Function_789(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1B1A2 / 111010
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_790(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_726(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_790(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1B1E0 / 111072
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_161(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_726(&(Param0[iVar02]), 4);
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

var Function_791(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B2AF / 111279
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_161(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_726(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_726(&(Param0[iVar02]), 8);
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

void Function_792() //Position: 0x1B38B / 111499
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
	
	Function_793(4, 1);
	uVar0 = &uVar0;
	bLocal_106 = CREATE_LAYOUT("SepulcroMP_GY_layout");
	*(&bLocal_106 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_106, "SpawnVol01", 4,203895E-45f, Vector(-1362,214f, 13,05099f, 4298,659f), Vector(0.0f, 20.0f, 0.0f), Vector(3.0f, 3.0f, 3.0f));
	*(&bLocal_106 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &bLocal_106, "TrapVolume", 4,203895E-45f, Vector(-1362,506f, 13,08f, 4298,777f), Vector(0.0f, 20.0f, 0.0f), Vector(200.0f, 20.0f, 200.0f));
	*(&bLocal_106 + 24) = Vector(-1362,506f, 13,07964f, 4298,777f);
	*(&bLocal_106 + 24 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&bLocal_106 + 48) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "LocationCenter", Vector(-1362,506f, 13,07964f, 4298,777f), Vector(0.0f, 0.0f, 0.0f));
	*(&bLocal_106 + 56) = CREATE_OBJECTSET_IN_LAYOUT("WeaponPrizesSet", &bLocal_106, 8, 0);
	*(&bLocal_106 + 64[03]) = Vector(-1357,843f, 13,071f, 4306,408f);
	*(&bLocal_106 + 64[03] + 12) = Vector(0.0f, -148,35f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "weapon_0", Vector(-1357,843f, 13,071f, 4306,408f), Vector(0.0f, -148,35f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &bLocal_106 + 56);
	*(&bLocal_106 + 64[13]) = Vector(-1344,392f, 13,071f, 4296,108f);
	*(&bLocal_106 + 64[13] + 12) = Vector(0.0f, -104,8164f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "weapon_1", Vector(-1344,392f, 13,071f, 4296,108f), Vector(0.0f, -104,8164f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &bLocal_106 + 56);
	*(&bLocal_106 + 64[23]) = Vector(-1380,642f, 13,051f, 4299,516f);
	*(&bLocal_106 + 64[23] + 12) = Vector(0.0f, -59,98898f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "weapon_2", Vector(-1380,642f, 13,051f, 4299,516f), Vector(0.0f, -59,98898f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &bLocal_106 + 56);
	*(&bLocal_106 + 64[33]) = Vector(-1370,215f, 13,071f, 4317,684f);
	*(&bLocal_106 + 64[33] + 12) = Vector(0.0f, 120,6323f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "weapon_3", Vector(-1370,215f, 13,071f, 4317,684f), Vector(0.0f, 120,6323f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &bLocal_106 + 56);
	*(&bLocal_106 + 64[43]) = Vector(-1351,716f, 13,051f, 4281,87f);
	*(&bLocal_106 + 64[43] + 12) = Vector(0.0f, 180,2136f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "weapon_4", Vector(-1351,716f, 13,051f, 4281,87f), Vector(0.0f, 180,2136f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &bLocal_106 + 56);
	*(&bLocal_106 + 192) = CREATE_OBJECTSET_IN_LAYOUT("CoffinSpawnsSet", &bLocal_106, 8, 0);
	*(&bLocal_106 + 200[03]) = Vector(-1381,845f, 12,563f, 4272,612f);
	*(&bLocal_106 + 200[03] + 12) = Vector(0.0f, 30,6846f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_1", Vector(-1381,845f, 12,563f, 4272,612f), Vector(0.0f, 30,6846f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &bLocal_106 + 192);
	*(&bLocal_106 + 200[13]) = Vector(-1359,258f, 13,051f, 4328,275f);
	*(&bLocal_106 + 200[13] + 12) = Vector(0.0f, 223,015f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_2", Vector(-1359,258f, 13,051f, 4328,275f), Vector(0.0f, 223,015f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &bLocal_106 + 192);
	*(&bLocal_106 + 200[23]) = Vector(-1336,713f, 13,99f, 4322,852f);
	*(&bLocal_106 + 200[23] + 12) = Vector(0.0f, -123,6737f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_3", Vector(-1336,713f, 13,99f, 4322,852f), Vector(0.0f, -123,6737f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &bLocal_106 + 192);
	*(&bLocal_106 + 200[33]) = Vector(-1311,565f, 13,301f, 4312,418f);
	*(&bLocal_106 + 200[33] + 12) = Vector(0.0f, -114,6002f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_4", Vector(-1311,565f, 13,301f, 4312,418f), Vector(0.0f, -114,6002f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &bLocal_106 + 192);
	*(&bLocal_106 + 200[43]) = Vector(-1324,323f, 13,051f, 4272,216f);
	*(&bLocal_106 + 200[43] + 12) = Vector(0.0f, -81,6027f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_5", Vector(-1324,323f, 13,051f, 4272,216f), Vector(0.0f, -81,6027f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &bLocal_106 + 192);
	*(&bLocal_106 + 200[53]) = Vector(-1352,113f, 13,901f, 4250,511f);
	*(&bLocal_106 + 200[53] + 12) = Vector(0.0f, 1,81286f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_6", Vector(-1352,113f, 13,901f, 4250,511f), Vector(0.0f, 1,81286f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &bLocal_106 + 192);
	*(&bLocal_106 + 200[63]) = Vector(-1397,458f, 11,347f, 4266,144f);
	*(&bLocal_106 + 200[63] + 12) = Vector(0.0f, 37,64457f, 0.0f);
	uVar12 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_7", Vector(-1397,458f, 11,347f, 4266,144f), Vector(0.0f, 37,64457f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar12, &bLocal_106 + 192);
	*(&bLocal_106 + 200[73]) = Vector(-1329,791f, 13,05098f, 4309,791f);
	*(&bLocal_106 + 200[73] + 12) = Vector(0.0f, 227,8577f, 0.0f);
	uVar13 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_8", Vector(-1329,791f, 13,05098f, 4309,791f), Vector(0.0f, 227,8577f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar13, &bLocal_106 + 192);
	*(&bLocal_106 + 200[83]) = Vector(-1351,104f, 13,051f, 4301,808f);
	*(&bLocal_106 + 200[83] + 12) = Vector(0.0f, -158,0945f, 0.0f);
	uVar14 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_9", Vector(-1351,104f, 13,051f, 4301,808f), Vector(0.0f, -158,0945f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar14, &bLocal_106 + 192);
	*(&bLocal_106 + 200[93]) = Vector(-1364,441f, 13,051f, 4308,794f);
	*(&bLocal_106 + 200[93] + 12) = Vector(0.0f, -158,0945f, 0.0f);
	uVar15 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "spawn_10", Vector(-1364,441f, 13,051f, 4308,794f), Vector(0.0f, -158,0945f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar15, &bLocal_106 + 192);
	*(&bLocal_106 + 448) = Vector(-1403,48f, 6,838111f, 4336,399f);
	*(&bLocal_106 + 448 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&bLocal_106 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &bLocal_106, "HidingSpot", Vector(-1403,48f, 6,838111f, 4336,399f), Vector(0.0f, 0.0f, 0.0f));
	return;
}

void Function_793(int iParam0, int iParam1) //Position: 0x1BAC7 / 113351
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

bool Function_794(bool bParam0) //Position: 0x1BB11 / 113425
{
	return (iLocal_566 != 99 || Function_364(&bParam0));
}

void Function_795() //Position: 0x1BB24 / 113444
{
	var uVar0[4];
	int iVar5;
	
	if (Function_78())
	{
		uVar0[0] = "Clear kill";
		uVar0[1] = "I don't do anything.  Really.";
		uVar0[2] = "Finish";
		uVar0[3] = "Quit Mission";
		iVar5 = Function_800(&Local_568, &uVar0, "RDR CO-OP MISSION MENU", GET_DEBUG_PADINDEX(), 0);
		if (Function_799(&iVar5, &iLocal_566, &iLocal_567, &Local_576))
		{
			Function_71();
			Function_18();
		}
		switch (iVar5)
		{
			case 0x00000000:
				Function_798();
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				iLocal_1043 = 1;
				Function_797(101);
				break;
			
			case 0x00000003:
				Function_71();
				Function_18();
				Function_796();
				break;
			}
	}
	return;
}

void Function_796() //Position: 0x1BC10 / 113680
{
	int iVar0;
	
	iVar0 = 1;
	NET_SCRIPTMSG_SEND(3, 15, &iVar0, 2, 1);
	return;
}

void Function_797(var uParam0) //Position: 0x1BC24 / 113700
{
	var uVar0;
	
	uVar0 = uParam0;
	NET_SCRIPTMSG_SEND(3, 35, &uVar0, 2, 1);
	return;
}

void Function_798() //Position: 0x1BC39 / 113721
{
	return;
}

bool Function_799(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1BC3F / 113727
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_71();
			Function_18();
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
		Function_361("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_800(struct<17> Param0) //Position: 0x1BCEE / 113902
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_813(&Var12, &Var0);
	uVar15 = Function_812(uParam1, &Var12);
	Function_811(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_810(&Param0, uVar15);
	Function_808(StackVal, &Param0, Var12.f_12);
	Function_806(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_805(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_802(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_801(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_801(int iParam0, int iParam1, int iParam2) //Position: 0x1BDE2 / 114146
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

bool Function_802(struct<17> Param0) //Position: 0x1BE42 / 114242
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
				Function_804(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_804(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_801(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_803(Param1.f_64);
	}
	else
	{
		Function_803(Param1.f_64);
	}
	return 0;
}

void Function_803(bool bParam0) //Position: 0x1BFD5 / 114645
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

void Function_804(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x1C015 / 114709
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

var Function_805(int iParam0, struct<21> Param1) //Position: 0x1C0CB / 114891
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_806(vector3 vParam0) //Position: 0x1C0F2 / 114930
{
	switch (Function_807())
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

int Function_807() //Position: 0x1C19E / 115102
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

void Function_808(vector3 vParam0) //Position: 0x1C1DA / 115162
{
	switch (Function_809(&vParam0))
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

int Function_809(int iParam0) //Position: 0x1C283 / 115331
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_47(iParam0, 0x40000000))
		{
			Function_5(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_47(iParam0, 0x40000000))
		{
			Function_5(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_4(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_47(iParam0, 0x20000000))
		{
			Function_5(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_47(iParam0, 0x20000000))
		{
			Function_5(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_4(&iParam0, 0x20000000);
	return 0;
}

var Function_810(struct<21> Param0) //Position: 0x1C3A3 / 115619
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

void Function_811(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x1C55D / 116061
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

var Function_812(int iParam0, struct<13> Param1) //Position: 0x1C5F9 / 116217
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_813(struct<17> Param0) //Position: 0x1C615 / 116245
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

void Function_814() //Position: 0x1C66F / 116335
{
	if (iLocal_566 != iLocal_1056)
	{
		iLocal_1056 = iLocal_566;
		switch (iLocal_566)
		{
			case 0x00000000:
				if (Function_815())
				{
					strcpy(&cLocal_1048, "TESAdvFail1", 16);
				}
				else
				{
					strcpy(&cLocal_1048, "TESFail1", 16);
				}
				break;
			
			case 0x00000001:
				if (Function_815())
				{
					strcpy(&cLocal_1048, "TESAdvFail2", 16);
				}
				else
				{
					strcpy(&cLocal_1048, "TESFail2", 16);
				}
				break;
			
			case 0x00000065:
				if (Function_815())
				{
					strcpy(&cLocal_1048, "TESAdvFailLast", 16);
				}
				else
				{
					strcpy(&cLocal_1048, "TESFailLast", 16);
				}
				break;
			}
	}
	return;
}

bool Function_815() //Position: 0x1C731 / 116529
{
	return Function_47(Global_124890, 64);
}

int Function_816() //Position: 0x1C740 / 116544
{
	int iVar0;
	
	iVar0 = 1;
	Function_814();
	if (NET_IS_SESSION_HOST())
	{
		Function_795();
	}
	if (iLocal_566 != 99)
	{
		Function_824();
		Function_820(&bLocal_106, &bLocal_624, &iLocal_1043, Local_988.f_52);
	}
	if (Function_794(&bLocal_624))
	{
		Function_375();
	}
	if (iLocal_566 != 99)
	{
		Function_373(3);
		Function_369(&Local_988 + 8, &Local_988 + 12, &Local_988 + 16);
		if (NET_IS_SESSION_HOST())
		{
			Local_968 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_988 };
		}
		else if (UNK_0xA80C6DE6(&Local_968))
		{
			Local_988 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Local_968 };
		}
		iVar0 = Function_819(&bLocal_624, iLocal_1043, Local_988.f_52);
		Function_232(&uLocal_327, &bLocal_106);
		Function_228(&uLocal_329, &bLocal_106);
		Function_220(&uLocal_331, &uLocal_333, &bLocal_106, &uLocal_335);
		Function_214(StackVal, *(&bLocal_106 + 24));
		Function_818(&uLocal_337, &bLocal_106, 3, &uLocal_339, Local_988.f_52);
		Function_196(StackVal, (bLocal_281 <= 12 || Local_988.f_52), &iLocal_292, &bLocal_106, *(&bLocal_106 + 24), 3);
	}
	if (Function_817(524288))
	{
		return 0;
	}
	return iVar0;
}

bool Function_817(bool bParam0) //Position: 0x1C83B / 116795
{
	return Function_47((&Global_131396 + 256)->f_108, bParam0);
}

void Function_818(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x1C84F / 116815
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	Function_212();
	Function_209(&uParam1, &bParam3, uParam2);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&uParam1);
		if (!IS_ITERATOR_VALID(&uVar0))
		{
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
			EVENT_TRAP_CLEAR_EVENTS(&uParam0);
			return;
		}
		ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
		ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
		uVar3 = START_OBJECT_ITERATOR(&uVar0);
		if (!IS_OBJECT_VALID(&uVar3))
		{
		}
		uParam4 = uParam4;
		while (IS_OBJECT_VALID(&uVar3))
		{
			uVar1 = GET_EVENT_FROM_OBJECT(&uVar3);
			uVar2 = GET_OBJECT_FROM_EVENT(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				if (DECOR_GET_INT(&uVar2, "Weapon") == 35)
				{
					uVar4 = GET_EVENT_PERPETRATOR(&uVar1);
					if (IS_OBJECT_VALID(&uVar4))
					{
						uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
						if (IS_ACTOR_VALID(&uVar5))
						{
							Function_206(&uVar2, uParam2, GET_ACTOR_SLOT(&uVar5));
							DESTROY_ITERATOR(&uVar0);
							EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
							EVENT_TRAP_CLEAR_EVENTS(&uParam0);
							return;
						}
					}
				}
			}
			uVar3 = OBJECT_ITERATOR_NEXT(&uVar0);
		}
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
	}
}

int Function_819(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1C965 / 117093
{
	int iVar0;
	
	Function_366();
	Function_365();
	if (!iLocal_1061 && GET_PLAYER_COMBATMODE() != 2)
	{
		iLocal_1061 = 1;
	}
	if (Function_364(&bParam0))
	{
		if (!((((((iLocal_567 != 0 || iLocal_567 != 1) || iLocal_567 != 2) || iLocal_567 != 3) || iLocal_567 != 4) || iLocal_567 != 5) || iLocal_567 != 105))
		{
			if (GET_NUM_PLAYERS() >= 1 && !&bParam2)
			{
				Function_348(&bParam0, "MP_endgame_EverybodyLeft", "GEN_DEATH_01");
			}
		}
	}
	if (bParam0 != 1 && bParam1)
	{
		Function_347(&bParam0, 0);
	}
	else if (bParam0 != 1 && !&bParam1)
	{
		Function_347(&bParam0, 1);
	}
	else
	{
		iVar0 = Function_236(&bParam0);
		if (iVar0 == 0)
		{
		}
		else if (iVar0 == 2)
		{
		}
		else if (iVar0 == 3)
		{
			return 0;
		}
	}
	return 1;
}

void Function_820(var uParam0, struct<72> Param1) //Position: 0x1CA48 / 117320
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	Param1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param1 };
	uParam2 = uParam2;
	if (&bParam3)
	{
		Function_822();
		if (DECOR_CHECK_EXIST(&uParam0, "quitContext"))
		{
			bVar0 = DECOR_GET_INT(&uParam0, "quitContext");
			uVar1 = bVar0;
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar1))
			{
				iVar2 = 0;
				if (((Function_321() && IS_PS3()) && !UI_ISACTIVE("MP_OverrunQuit")) && !UI_ISACTIVE("MPSplash"))
				{
					iVar2 = IS_BUTTON_PRESSED(Function_730(), 5, 1, 1);
				}
				else
				{
					iVar2 = IS_BUTTON_PRESSED(Function_730(), 6, 1, 1);
				}
				if ((IS_SCRIPT_USE_CONTEXT_PRESSED(&uVar1) || WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&uVar1)) || iVar2)
				{
					Function_124(&uParam0);
					UI_TRANSITION_TO("MP_OverrunQuit");
				}
			}
		}
		else if (Function_333(GET_LOCAL_SLOT(), 16384, 0) && !UI_ISACTIVE("MP_OverrunQuit"))
		{
			if (!DECOR_CHECK_EXIST(&uParam0, "nquitTimer"))
			{
				DECOR_SET_FLOAT(&uParam0, "nquitTimer", GET_CURRENT_GAME_TIME());
			}
			else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&uParam0, "nquitTimer")) <= 5.0f)
			{
				Function_821(&uParam0);
			}
		}
	}
}

void Function_821(var uParam0) //Position: 0x1CB9A / 117658
{
	var uVar0;
	bool bVar1;
	
	if (Function_321() && IS_PS3())
	{
		uVar0 = ADD_SCRIPT_USE_CONTEXT("mp_fe_freeroam", 100, "@UI.CANCEL", false, 0, 0, 0, 4294967295, 0);
	}
	else
	{
		uVar0 = ADD_SCRIPT_USE_CONTEXT("mp_fe_freeroam", 100, "@UI.ACCEPT", false, 0, 0, 0, 4294967295, 0);
	}
	bVar1 = &uVar0;
	DECOR_SET_INT(&uParam0, "quitContext", bVar1);
	ENABLE_USE_CONTEXTS(1);
	return;
}

void Function_822() //Position: 0x1CC25 / 117797
{
	bool bVar0;
	
	if (UI_ISACTIVE("MP_OverrunQuit"))
	{
		bVar0 = false;
		if (((Function_321() && IS_PS3()) && !UI_ISACTIVE("MP_OverrunQuit")) && !UI_ISACTIVE("MPSplash"))
		{
			bVar0 = IS_BUTTON_PRESSED(Function_730(), 5, 1, 1);
		}
		else
		{
			bVar0 = IS_BUTTON_PRESSED(Function_730(), 6, 1, 1);
		}
		if (bVar0)
		{
			Function_823(524288, 1);
			iLocal_1043 = 1;
			UI_EXIT("MP_OverrunQuit");
		}
	}
	return;
}

void Function_823(int iParam0, bool bParam1) //Position: 0x1CCB3 / 117939
{
	if (bParam1)
	{
		Function_5(&Global_131396 + 256 + 108, iParam0);
	}
	else
	{
		Function_4(&Global_131396 + 256 + 108, iParam0);
	}
	return;
}

void Function_824() //Position: 0x1CCDD / 117981
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar4 = false;
	bVar0 = ROUND(Function_115(0));
	bVar1 = ROUND(Function_115(1));
	bVar2 = ROUND(Function_115(2));
	bVar3 = ROUND(Function_115(3));
	if (IS_SLOT_VALID(false))
	{
		bVar0 = Function_116(0);
	}
	if (IS_SLOT_VALID(true))
	{
		bVar1 = Function_116(1);
	}
	if (IS_SLOT_VALID(2))
	{
		bVar2 = Function_116(2);
	}
	if (IS_SLOT_VALID(3))
	{
		bVar3 = Function_116(3);
	}
	bVar4 = (((bVar0 + bVar1) + bVar2) + bVar3);
	Function_683(0, TO_FLOAT(bVar0));
	Function_683(1, TO_FLOAT(bVar1));
	Function_683(2, TO_FLOAT(bVar2));
	Function_683(3, TO_FLOAT(bVar3));
	Function_683(4, TO_FLOAT(bVar4));
	return;
}

