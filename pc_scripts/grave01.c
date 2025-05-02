//Decompiled with MagicRDR v1.0
//Function Count : 596
//Statics Count : 836
//Natives Count : 791
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
	var uLocal_44 = 2;
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
	var uLocal_56 = 2;
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
	var uLocal_68 = 1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 3;
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
	var uLocal_88 = 10;
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
	var uLocal_112 = 3;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 2;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 5;
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
	var uLocal_144 = 5;
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
	var uLocal_160 = 5;
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
	var uLocal_174 = 16;
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
	var uLocal_210 = 7;
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
	var uLocal_228 = 9;
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
	var uLocal_250 = 7;
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
	var uLocal_268 = 1;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 1;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 1;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 2;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 2;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 1;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 1;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 2;
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
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	struct<6> Local_356 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	bool bLocal_368 = false;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
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
	bool bLocal_382 = false;
	bool bLocal_383 = false;
	bool bLocal_384 = false;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	bool bLocal_393 = false;
	bool bLocal_394 = false;
	var uLocal_395 = 0;
	bool bLocal_396 = false;
	var uLocal_397 = 0;
	bool bLocal_398 = false;
	var uLocal_399 = 0;
	bool bLocal_400 = false;
	var uLocal_401 = 0;
	bool bLocal_402 = false;
	var uLocal_403 = 0;
	bool bLocal_404 = false;
	int iLocal_405[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	int iLocal_419 = 10;
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
	bool bLocal_463 = false;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	bool bLocal_467 = false;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	bool bLocal_471 = false;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	bool bLocal_475 = false;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	bool bLocal_479 = false;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	bool bLocal_483 = false;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	bool bLocal_487 = false;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	bool bLocal_491 = false;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	bool bLocal_495 = false;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	struct<2> Local_499 = { 0, 0 } ;
	var uLocal_501 = 0;
	bool bLocal_502 = false;
	var uLocal_503 = 13;
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
	struct<15> Local_557[5];
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 5;
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
	var uLocal_666 = 0;
	var uLocal_667 = 5;
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
	var uLocal_697 = 5;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
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
	int iLocal_720 = 0;
	bool bLocal_721 = false;
	int iLocal_722 = 0;
	bool bLocal_723 = false;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	bool bLocal_727 = false;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	bool bLocal_731 = false;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	bool bLocal_735 = false;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	bool bLocal_739 = false;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	bool bLocal_743 = false;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	bool bLocal_747 = false;
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
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	bool bLocal_768 = false;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	bool bLocal_771 = false;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	bool bLocal_775 = false;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	int iLocal_780 = 0;
	var uLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	bool bLocal_786 = false;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
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
	int iLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
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
	bLocal_393 = 996;
	iLocal_761 = 0;
	iLocal_782 = 0;
	iLocal_785 = 0;
	iLocal_789 = 13;
	iLocal_790 = 4;
	iLocal_791 = 2;
	iLocal_792 = 4;
	iLocal_794 = 10;
	iLocal_795 = 24;
	iLocal_796 = 8;
	iLocal_797 = 3;
	iLocal_803 = 8;
	iLocal_804 = 6;
	iLocal_805 = 0;
	iLocal_806 = 10;
	iLocal_807 = 0;
	iLocal_821 = 0;
	Local_356 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_368 = 99;
	iLocal_369 = 6;
	iLocal_370 = 1000;
	while (Function_281())
	{
		Function_233();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x90 / 144
{
	var uVar0;
	
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_394);
	Function_232();
	Global_47151[11] = 0;
	Global_42250 = 0;
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1089);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1090);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1061);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1062);
	CLEAR_AMBIENT_SPAWN_TYPE_RESTRICTION(1063);
	Function_231(32768);
	Function_230(0x2000000);
	Function_228(0);
	Function_227(&iLocal_4 + 1152[0]);
	Function_224(StackVal, Function_227(&iLocal_4 + 1152[0]), 1, 0);
	Function_216(&Global_11492, &Global_13504, 1, 0);
	STREAMING_UNLOAD_SCENE();
	Function_215(&bLocal_398);
	Function_228(StackVal);
	Function_230(1048576);
	if (IS_ACTOR_VALID(&bLocal_400))
	{
		if (IS_ACTOR_HOGTIED(&bLocal_400))
		{
			FREE_FROM_HOGTIE(&bLocal_400);
		}
		if (IS_MOVER_FROZEN(&bLocal_400))
		{
			SET_MOVER_FROZEN(&bLocal_400, 1);
			DECOR_SET_BOOL(&bLocal_400, "ActionArea_DisableHogtie", 1);
		}
		if (DECOR_CHECK_EXIST(&bLocal_400, "bDisableCutFree"))
		{
			DECOR_REMOVE(&bLocal_400, "bDisableCutFree");
		}
		Function_213(&bLocal_400);
		Function_212();
		uVar0 = Function_212();
		TELEPORT_ACTOR(&bLocal_400, &uVar0, 1, 1, 1);
	}
	if (bLocal_768)
	{
		if (IS_DOOR_VALID(&bLocal_747))
		{
			SET_DOOR_LOCK(&bLocal_747, 0);
		}
	}
	Function_209(1, 1, 0, 1, 1);
	if (IS_ACTOR_VALID(&bLocal_394))
	{
		MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bLocal_394, &bLocal_394);
		AI_GOAL_LOOK_CLEAR(&bLocal_394);
		AI_STOP_IGNORING_ACTOR(&bLocal_394);
	}
	if (IS_ACTOR_VALID(&bLocal_396))
	{
		DESTROY_ACTOR(&bLocal_396);
	}
	Function_208(&iLocal_354);
	Function_208(&iLocal_4);
	Function_207();
	Function_180(bLocal_383, 1, 0, 0, 0, 1, 1, 1);
	Function_176(&iLocal_419);
	Function_174();
	if (IS_ITERATOR_VALID(&uLocal_461))
	{
		DESTROY_ITERATOR(&uLocal_461);
	}
	ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 3, 0);
	RELEASE_LAYOUT_REF(&iLocal_354);
	if (bLocal_382)
	{
		Function_173(&Global_119935, 0x2000000);
		Function_173(&Global_119935, 0x4000000);
		Function_173(&Global_119935, 4096);
		Function_173(&Global_119935, 8);
		Function_173(&Global_119935, 8388608);
		Function_173(&Global_119935, 524288);
		Function_173(&Global_119935, 1048576);
		Function_26(Local_356, 1, 1, 1, 0);
	}
	else if (bLocal_383)
	{
		Function_22(Local_356);
	}
	else
	{
		Function_2(Local_356);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2D5 / 725
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2F6 / 758
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x313 / 787
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x336 / 822
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x34D / 845
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

void Function_7(int iParam0) //Position: 0x3EF / 1007
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x412 / 1042
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

void Function_9() //Position: 0x45C / 1116
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x475 / 1141
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

void Function_11(var uParam0, int iParam1) //Position: 0x4C8 / 1224
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

struct<16> Function_12(int iParam0) //Position: 0x5F2 / 1522
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

bool Function_13() //Position: 0x62C / 1580
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x647 / 1607
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x654 / 1620
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x674 / 1652
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x68B / 1675
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x6A6 / 1702
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8ED / 2285
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x919 / 2329
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

bool Function_21(int iParam0) //Position: 0x93D / 2365
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x952 / 2386
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x970 / 2416
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

struct<16> Function_24(int iParam0) //Position: 0xA16 / 2582
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

struct<24> Function_25(char* cParam0) //Position: 0xA55 / 2645
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCAB / 3243
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
		Function_168(&(Global_6667[iVar228]));
		Function_167(4194304);
		if (&bParam3)
		{
			Function_120(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_114(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_120(iVar2, &uVar0, 0);
		}
		bVar1 = Function_113();
		if (&bParam1)
		{
			Function_97(iVar2, iParam0, bVar1);
			Function_96();
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

void Function_27() //Position: 0xD9F / 3487
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

int Function_28(int iParam0, bool bParam1) //Position: 0xDD1 / 3537
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

int Function_29(int iParam0) //Position: 0xE0F / 3599
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xE29 / 3625
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0xE3F / 3647
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x113C / 4412
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

void Function_33(char* cParam0) //Position: 0x11B1 / 4529
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x11EB / 4587
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1267 / 4711
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x127A / 4730
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

int Function_37(int iParam0) //Position: 0x131B / 4891
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x1358 / 4952
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x136E / 4974
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
		if (Function_95())
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
		if (Function_95())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_91();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_95())
	{
		Function_90();
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
			Function_83(iParam0);
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x15CC / 5580
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x160A / 5642
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

void Function_42(bool bParam0) //Position: 0x1649 / 5705
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

void Function_43() //Position: 0x169E / 5790
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

void Function_44() //Position: 0x16E9 / 5865
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

void Function_45() //Position: 0x17EF / 6127
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

void Function_46() //Position: 0x1822 / 6178
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

void Function_47() //Position: 0x19B5 / 6581
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

void Function_48() //Position: 0x1B6E / 7022
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1B7C / 7036
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
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
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

bool Function_50() //Position: 0x1D99 / 7577
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1DAE / 7598
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E55 / 7765
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x20F1 / 8433
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

var Function_54() //Position: 0x272F / 10031
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x2738 / 10040
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2749 / 10057
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

struct<32> Function_57(char* cParam0) //Position: 0x2840 / 10304
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x285B / 10331
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x28C2 / 10434
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x28D4 / 10452
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x28E6 / 10470
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

int Function_62(int iParam0) //Position: 0x2A1A / 10778
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2A29 / 10793
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2A62 / 10850
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2A9F / 10911
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2C39 / 11321
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

int Function_67(bool bParam0) //Position: 0x2E7D / 11901
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x2EBE / 11966
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

struct<8> Function_69() //Position: 0x2F47 / 12103
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

struct<8> Function_70() //Position: 0x2FDE / 12254
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

void Function_71() //Position: 0x305D / 12381
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x309A / 12442
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

void Function_73() //Position: 0x32A6 / 12966
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_80(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_80(&Global_53524 + 12, &Global_53524 + 16);
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

bool Function_74(char* cParam0) //Position: 0x335D / 13149
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3375 / 13173
{
	int iVar0;
	
	iVar0 = Function_78(&uParam2, &uParam3);
	if (Function_77(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_76(&Global_99144, 1);
			Function_38(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_76(&Global_99144, 2);
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
		Function_76(&Global_99144, 2);
		Function_38(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_212();
	return StackVal, Function_212();
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x346D / 13421
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_77(int iParam0) //Position: 0x347E / 13438
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_78(bool bParam0, bool bParam1) //Position: 0x3494 / 13460
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
				fVar2 = Function_79(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_79(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_77(iVar0) && !&bParam1)
	{
		iVar0 = Function_78(&bParam0, 1);
	}
	return iVar0;
}

float Function_79(struct<2> Param0, struct<2> Param2) //Position: 0x3560 / 13664
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_80(float fParam0, int iParam1) //Position: 0x357D / 13693
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_82(&Global_54076, &Var3);
	if (!Function_81(Global_46760[0]))
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
	if (!Function_81(Global_46760[2]))
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
	if (!Function_81(Global_46760[1]))
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
	if (!Function_81(Global_46796[1]))
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
	if (!Function_81(Global_46796[3]))
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
	if (!Function_81(Global_46796[2]))
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
	if (!Function_81(Global_46796[4]))
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
	if (!Function_81(Global_46816[0]))
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
	if (!Function_81(Global_46816[1]))
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
	if (!Function_81(Global_46816[2]))
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
	if (!Function_81(Global_46838[0]))
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
	if (!Function_81(Global_46850[0]))
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
	if (!Function_81(Global_46850[1]))
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
	if (!Function_81(Global_46850[2]))
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
	if (!Function_81(Global_46866[0]))
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
	if (!Function_81(Global_46866[1]))
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
	if (!Function_81(Global_46866[2]))
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
	if (!Function_81(Global_46894[2]))
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
	if (!Function_81(Global_46894[3]))
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
	if (!Function_81(Global_46894[0]))
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
	if (!Function_81(Global_46914[0]))
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
	if (!Function_81(Global_46926[2]))
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
	if (!Function_81(Global_46926[1]))
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
	if (!Function_81(Global_46926[0]))
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
	if (!Function_81(Global_46838[1]))
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
	if (!Function_81(Global_46894[1]))
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
	Function_76(&Global_99144, 2);
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

bool Function_81(int iParam0) //Position: 0x3DA9 / 15785
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_82(var uParam0, int iParam1) //Position: 0x3DE4 / 15844
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_83(int iParam0) //Position: 0x3DF3 / 15859
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
				Function_88(12, 1, 0, 0);
				Function_87(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_88(13, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_88(14, 1, 0, 0);
				Function_87(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_88(15, 1, 0, 0);
				Function_87(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_88(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_86(iParam0) == 1)
					{
						iVar0 = Function_85(iParam0);
						if (Function_84(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_87(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_87(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_87(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_87(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_87(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_87(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_87(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_87(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_87(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_87(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_87(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_87(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_87(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_87(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_87(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_87(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_87(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_87(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_87(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_87(4, 19);
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
								Function_88(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_88(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_88(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_85(iParam0) == 0)
			{
				if (Function_86(iParam0) == 1)
				{
					Function_88(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_84(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_87(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_87(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_87(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_87(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_87(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_87(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_87(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_87(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_86(iParam0) == 1)
			{
				Function_88(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_88(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_87(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_87(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_88(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_87(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_87(6, 9);
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

bool Function_84(int iParam0) //Position: 0x42D1 / 17105
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_85(int iParam0) //Position: 0x42E7 / 17127
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_86(int iParam0) //Position: 0x4306 / 17158
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_87(int iParam0, int iParam1) //Position: 0x4320 / 17184
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

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x438A / 17290
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
	Function_89(iParam0);
	return 1;
}

void Function_89(int iParam0) //Position: 0x45B2 / 17842
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

void Function_90() //Position: 0x4650 / 18000
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

void Function_91() //Position: 0x47B2 / 18354
{
	int iVar0;
	int iVar1;
	
	if (!Function_30(Global_10966))
	{
		return;
	}
	iVar0 = Function_67(24);
	iVar1 = Function_29(Global_10966);
	if (!Function_30(iVar0) && Function_94(iVar1) < 0)
	{
		Function_52(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_94(Function_29(iVar0)))
	{
		Function_52(24, Global_10966, 0);
		Function_92(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_92(int iParam0, char* cParam1) //Position: 0x4832 / 18482
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
		Function_93(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_93(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4B89 / 19337
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

int Function_94(int iParam0) //Position: 0x4C11 / 19473
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_95() //Position: 0x4C2B / 19499
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_96() //Position: 0x4C56 / 19542
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

void Function_97(int iParam0, int iParam1, bool bParam2) //Position: 0x4C84 / 19588
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
		iVar14 = Function_112(iParam0);
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
		iVar15 = Function_111(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_98(50, 1, 0);
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

void Function_98(int iParam0, bool bParam1, bool bParam2) //Position: 0x4F20 / 20256
{
	int iVar0;
	bool bVar1;
	
	if (Function_110(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
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
	Function_107();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_105(3, bVar1);
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
		Function_88(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_63(3));
	iVar0 = Function_67(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_100(4, Function_104(Global_21369.f_248), 1);
				Function_99(Global_21369.f_244, Global_21369.f_248);
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

void Function_99(int iParam0, int iParam1) //Position: 0x50F4 / 20724
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_100(int iParam0, char* cParam1) //Position: 0x535E / 21342
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
	Function_92(iParam0, &cParam1, 0, 1);
	iVar1 = Function_101();
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

int Function_101() //Position: 0x54EE / 21742
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
	Function_102();
	return 0;
}

void Function_102() //Position: 0x558F / 21903
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
		Function_103(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_103(int iParam0) //Position: 0x564D / 22093
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

var Function_104(int iParam0) //Position: 0x56B3 / 22195
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

int Function_105(int iParam0, bool bParam1) //Position: 0x5742 / 22338
{
	bool bVar0;
	int iVar1;
	
	Function_88(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_106(iParam0, 4294967295);
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
	iVar1 = Function_101();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_106(int iParam0, int iParam1) //Position: 0x58EE / 22766
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

void Function_107() //Position: 0x5933 / 22835
{
	Function_109(3, 0.0f);
	Function_108(3, 10000.0f);
	return;
}

int Function_108(int iParam0, int iParam1) //Position: 0x5949 / 22857
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5989 / 22921
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_110(int iParam0) //Position: 0x59C9 / 22985
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_111(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x59D8 / 23000
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

int Function_112(int iParam0) //Position: 0x5BA0 / 23456
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

var Function_113() //Position: 0x5C35 / 23605
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_114(int iParam0) //Position: 0x5C5A / 23642
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
			Function_98(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_98(25, 1, 0);
			Function_119(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			Function_115(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_119(50, 1, 1);
			Function_98(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_119(5, 1, 1);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_98(75, 1, 0);
			Function_115(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_119(5, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_119(25, 1, 1);
			Function_98(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_119(10, 1, 1);
			Function_98(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_98(50, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_98(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_115(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_119(20, 1, 1);
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_119(25, 1, 1);
			Function_98(150, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_119(10, 1, 1);
			Function_98(150, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_98(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_115(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_115(100, 1, 0);
			Function_119(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_119(3, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_115(125, 1, 0);
			Function_98(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_119(50, 1, 1);
			Function_98(100, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_119(75, 1, 1);
			Function_98(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_98(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_98(250, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_98(75, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_98(200, 1, 0);
			Function_115(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_98(75, 1, 0);
			Function_115(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_98(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_119(50, 1, 1);
			Function_98(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_119(100, 1, 1);
			Function_98(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_98(200, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_98(300, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_98(500, 1, 0);
			Function_115(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_98(150, 1, 0);
			Function_115(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_115(25, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_98(150, 1, 0);
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_115(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_115(150, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_115(150, 1, 0);
			Function_119(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_115(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_115(int iParam0, bool bParam1, bool bParam2) //Position: 0x6129 / 24873
{
	int iVar0;
	bool bVar1;
	
	if (Function_110(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_95())
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
			Function_105(1, bVar1);
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
			Function_118(1, (4294967295 * bVar1));
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
		Function_88(1, bVar1, 0, 0);
	}
	else
	{
		Function_117(1, (4294967295 * bVar1), 0);
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
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_100(2, Function_116(Global_21369.f_244), 0);
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
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_100(2, Function_116(Global_21369.f_244), 1);
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
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_100(2, Function_116(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_100(2, Function_116(Global_21369.f_244), 1);
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
				Function_100(2, Function_116(Global_21369.f_244), 0);
			}
			break;
	}
	Function_99(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_116(int iParam0) //Position: 0x6450 / 25680
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

int Function_117(int iParam0, bool bParam1, int iParam2) //Position: 0x64F3 / 25843
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

int Function_118(int iParam0, bool bParam1) //Position: 0x66F0 / 26352
{
	bool bVar0;
	int iVar1;
	
	Function_117(iParam0, bParam1, 0);
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
	iVar1 = Function_106(iParam0, 4294967295);
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
	iVar1 = Function_101();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x689B / 26779
{
	bool bVar0;
	
	bVar0 = Function_67(0);
	if ((Function_67(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_88(0, bParam0, 0, 0);
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
		Function_88(597, bParam0, 0, 0);
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

void Function_120(int iParam0, var uParam1, bool bParam2) //Position: 0x696D / 26989
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_160(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_162(Global_46816[0]);
			Function_152(0);
			Function_150(2, 1);
			Function_150(0, 1);
			Function_150(1, 1);
			break;
		
		case 0x00000003:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_162(Global_46816[0]);
			Function_162(Global_46760[0]);
			Function_148(0, 1);
			Function_148(15, 1);
			Function_148(9, 1);
			Function_148(12, 1);
			Function_148(16, 1);
			Function_150(3, 1);
			break;
		
		case 0x00000005:
			Function_162(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_160(21, &bParam2, 4);
			Function_162(Global_46816[0]);
			Function_150(39, 1);
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
				if (IS_PS3() || Function_147())
				{
					if (!Function_146(4))
					{
						Function_136(4, 0, 0, 1, 0);
					}
				}
			}
			Function_162(Global_46760[0]);
			Function_162(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_162(Global_46760[0]);
			Function_162(Global_46816[2]);
			Function_135(&(Global_43791[Global_46816[2]]), 32768);
			Function_134(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_160(9, &bParam2, 4);
			Function_162(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_162(Global_46760[0]);
			Function_162(Global_46796[0]);
			Function_135(&(Global_43791[Global_46796[0]]), 32768);
			Function_134(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_162(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
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
			Function_173(&Global_119935, 0x2000000);
			Function_173(&Global_119935, 0x4000000);
			Function_173(&Global_119935, 4096);
			Function_173(&Global_119935, 8);
			Function_173(&Global_119935, 8388608);
			Function_173(&Global_119935, 524288);
			Function_173(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_162(Global_46760[4]);
			Function_162(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_134(&(Global_43791[Global_46760[4]]), 256);
			Function_162(Global_46760[4]);
			Function_162(Global_46796[0]);
			Function_135(&(Global_43791[Global_46796[0]]), 32768);
			Function_134(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_162(Global_46760[0]);
			Function_162(Global_46760[5]);
			Function_160(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_162(Global_46796[3]);
			Function_135(&(Global_43791[Global_46796[3]]), 32768);
			Function_134(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_160(9, &bParam2, 4);
			Function_162(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_135(&(Global_43791[Global_46838[1]]), 32768);
			Function_162(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_160(12, &bParam2, 4);
			Function_134(&(Global_43791[Global_46838[1]]), 256);
			Function_162(Global_46816[3]);
			Function_162(Global_46866[0]);
			Function_162(Global_46850[0]);
			Function_152(4);
			Function_148(13, 1);
			Function_148(1, 1);
			Function_148(18, 1);
			Function_150(34, 1);
			Function_150(44, 1);
			Function_150(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_160(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
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
			Function_148(23, 1);
			Function_162(Global_46850[0]);
			Function_162(Global_46850[2]);
			Function_135(&(Global_43791[Global_46850[2]]), 32768);
			Function_134(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_160(19, &bParam2, 4);
			Function_162(Global_46850[0]);
			Function_162(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_160(24, &bParam2, 3);
			Function_148(24, 1);
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
				if (!Function_146(8))
				{
					Function_136(8, 0, 0, 1, 0);
				}
			}
			Function_162(Global_46850[0]);
			Function_152(9);
			Function_148(7, 1);
			Function_148(11, 1);
			Function_148(3, 1);
			Function_148(20, 1);
			Function_150(57, 1);
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
				if (!Function_132(15))
				{
					Function_127(15, 0, 1);
				}
			}
			Function_87(2, 26);
			Function_134(&(Global_43791[Global_46914[1]]), 256);
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
			Function_121(11);
			Function_152(12);
			Global_26200[1114].f_40 = 0;
			Function_150(56, 1);
			if (!&bParam2)
			{
				if (!Function_146(9))
				{
					Function_136(9, 0, 0, 0, 0);
				}
				if (!Function_146(10))
				{
					Function_136(10, 0, 0, 1, 0);
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

void Function_121(int iParam0) //Position: 0x7288 / 29320
{
	var uVar0;
	
	if (!Function_77(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_126(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_126(&Global_26200[iParam014] + 88, 0);
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
			Function_122(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_122(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7405 / 29701
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
		Function_124(Function_125(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_124(Function_125(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_124(StackVal);
				Var1 = Function_124(StackVal);
				if (Function_123(StackVal, StackVal, Var1, Var3))
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

bool Function_123(struct<2> Param0, struct<2> Param2) //Position: 0x7510 / 29968
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_124(int iParam0) //Position: 0x753C / 30012
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

var Function_125(vector3 vParam0) //Position: 0x7593 / 30099
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

void Function_126(var uParam0, int iParam1) //Position: 0x75E1 / 30177
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

void Function_127(bool bParam0, bool bParam1, bool bParam2) //Position: 0x763C / 30268
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_132(bParam0))
	{
		if (!Function_146(bParam0))
		{
			Function_136(bParam0, 1, 0, 0, 1);
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
		Function_88(457, 1, 0, 0);
		Function_130(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
	}
	return;
}

void Function_128() //Position: 0x77DD / 30685
{
	return;
}

bool Function_129(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x77E3 / 30691
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

void Function_130(bool bParam0, int iParam1) //Position: 0x7892 / 30866
{
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_131(int iParam0) //Position: 0x78E7 / 30951
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_132(int iParam0) //Position: 0x78FD / 30973
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_133(int iParam0, int iParam1) //Position: 0x794E / 31054
{
	int iVar0;
	
	if (!Function_131(iParam0))
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

void Function_134(var uParam0, int iParam1) //Position: 0x797B / 31099
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_135(var uParam0, int iParam1) //Position: 0x7995 / 31125
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x79A6 / 31142
{
	struct<8> Var0;
	
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_145(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_146(bParam0))
	{
		Function_88(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 5);
			}
			else
			{
				Function_128();
			}
		}
		Function_139(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_138() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_138() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_137(&Var0, 10.0f, 1, 0, 0, 1, 0);
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

void Function_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7B02 / 31490
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
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_138() //Position: 0x7B8D / 31629
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_139(bool bParam0) //Position: 0x7BBA / 31674
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
			if (Function_143(bParam0, Function_144(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_142(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_141(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_140(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_140(int iParam0) //Position: 0x7D6A / 32106
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

void Function_141(char* cParam0, int iParam1) //Position: 0x7DC1 / 32193
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

var Function_142(int iParam0) //Position: 0x7DE6 / 32230
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_131(iParam0))
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

bool Function_143(bool bParam0, bool bParam1) //Position: 0x7E3C / 32316
{
	int iVar0;
	
	if (!Function_131(bParam0))
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

bool Function_144(bool bParam0) //Position: 0x7E9B / 32411
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_145(int iParam0) //Position: 0x7EA7 / 32423
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_146(int iParam0) //Position: 0x7EC3 / 32451
{
	if (!Function_131(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_133(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_147() //Position: 0x7F15 / 32533
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_148(int iParam0, int iParam1) //Position: 0x7F45 / 32581
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_149(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_149(int iParam0, int iParam1) //Position: 0x7FBA / 32698
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_150(int iParam0, int iParam1) //Position: 0x8052 / 32850
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_32(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x80C5 / 32965
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_152(int iParam0) //Position: 0x8120 / 33056
{
	var uVar0;
	var uVar1;
	
	if (!Function_77(iParam0))
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
			Function_88(468, 1, 0, 0);
			Function_87(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_137("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_122(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_136(14, 1, 0, 0, 0);
				Function_153(14, 1, 0, 0, 0);
			}
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 6);
			}
			else
			{
				Function_128();
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
			Function_137("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_88(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_87(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_153(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x83E0 / 33760
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_131(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_145(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_133(bParam0, 2))
	{
		Function_88(456, 1, 0, 0);
		Function_130(bParam0, 2);
		if (!&bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_137(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_143(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_130(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_129(0, 0, 1, 1))
			{
				Function_42(1);
				Function_41(1, 0);
			}
			else
			{
				Function_128();
			}
		}
		Function_139(bParam0);
		if (StackVal && !Function_14(((((!Function_138() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_138() || Global_6623) || Global_6635) || Global_6627), 1))
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
				Function_87(2, 24);
				break;
			
			case 0x00000003:
				Function_87(2, 25);
				break;
			
			case 0x0000000F:
				Function_87(2, 26);
				break;
			
			case 0x0000000D:
				Function_87(2, 27);
				break;
			
			case 0x0000000E:
				Function_87(2, 28);
				break;
			}
	}
}

void Function_154(int iParam0, bool bParam1) //Position: 0x867F / 34431
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

void Function_155() //Position: 0x86EE / 34542
{
	if (Function_131(Global_42827))
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

int Function_156(int iParam0, int iParam1) //Position: 0x876E / 34670
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

int Function_157(int iParam0) //Position: 0x93D1 / 37841
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_158(int iParam0) //Position: 0x93E6 / 37862
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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

void Function_159(var uParam0, int iParam1) //Position: 0x9435 / 37941
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

void Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x948D / 38029
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

bool Function_161(int iParam0, int iParam1) //Position: 0x9500 / 38144
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_162(int iParam0) //Position: 0x9514 / 38164
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_164(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_135(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_88(473, 1, 0, 0);
		iVar0 = Function_163(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_88(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_88(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_88(476, 1, 0, 0);
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
		Function_87(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_87(7, 30);
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

var Function_163(int iParam0) //Position: 0x9605 / 38405
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_84(iParam0))
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

bool Function_164(var uParam0, int iParam1) //Position: 0x965D / 38493
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_165(bool bParam0, bool bParam1, int iParam2) //Position: 0x967A / 38522
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

bool Function_166(int iParam0) //Position: 0x96D4 / 38612
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_167(bool bParam0) //Position: 0x96E6 / 38630
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

void Function_168(struct<185> Param0) //Position: 0x971A / 38682
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
			Function_169(4, 0, 0);
		}
	}
	return;
}

void Function_169(int iParam0, var uParam1, int iParam2) //Position: 0x9785 / 38789
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
		Function_170(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_170(int iParam0, int iParam1, bool bParam2) //Position: 0x986F / 39023
{
	int iVar0;
	
	Function_172(iParam0);
	Function_8(&iParam1);
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
	Function_171();
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

void Function_171() //Position: 0x99EE / 39406
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_172(int iParam0) //Position: 0x99FA / 39418
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

void Function_173(var uParam0, int iParam1) //Position: 0x9A40 / 39488
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_174() //Position: 0x9A51 / 39505
{
	Function_175();
	return;
}

void Function_175() //Position: 0x9A5A / 39514
{
	Function_176(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_176(int iParam0) //Position: 0x9A6D / 39533
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_177(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_177(struct<2>[] Param0, int iParam1) //Position: 0x9A95 / 39573
{
	if (Function_179(&(Param0[iParam12]), 4))
	{
		if (Function_179(&(Param0[iParam12]), 1))
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
			Function_178(&(Param0[iParam12]), 1);
			Function_178(&(Param0[iParam12]), 2);
			Function_178(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_178(struct<13> Param0) //Position: 0x9BE0 / 39904
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_179(struct<13> Param0) //Position: 0x9BFD / 39933
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_180(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9C1B / 39963
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_206());
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
	Function_232();
	CLEAR_PRINTED_OBJECTIVE();
	Function_205();
	Function_203(0);
	Function_202();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_201();
	Function_200();
	Function_232();
	ENABLE_JOURNAL_REPLAY(1);
	Function_199(1);
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
		Function_198(&Global_54076);
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
	Function_195(Global_42825);
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
	Function_194();
	Function_231(1178687);
	Function_192(33039);
	Function_230(0x218003f);
	Function_191(4194560);
	Function_190();
	Function_189();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_186(0, 1, 1);
	}
	else
	{
		Function_186(0, 1, 1);
	}
	Function_185();
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
	Function_181();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_181() //Position: 0x9E27 / 40487
{
	int iVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN(&Global_39922 + 148[StackVal], 0))
		{
			iVar0 = RAND_INT_RANGE(210, 270);
		}
		else
		{
			return;
		}
		if (Function_184() > 3)
		{
			iVar0 *= 2;
		}
		Function_182(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_182(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x9E7E / 40574
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_183(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_183(bool bParam0) //Position: 0x9ECE / 40654
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_184() //Position: 0x9EF7 / 40695
{
	return Global_21369.f_248;
}

void Function_185() //Position: 0x9F02 / 40706
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_134(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_186(int iParam0, bool bParam1, int iParam2) //Position: 0x9F2C / 40748
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
		if (Function_84(Global_43789))
		{
			Function_135(&(Global_43791[Global_43789]), 131072);
			Function_134(&(Global_43791[Global_43789]), 2097152);
			Function_187(Global_43789);
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
					Function_134(&(Global_43791[iVar0]), 2097155);
					Function_135(&(Global_43791[iVar0]), 262144);
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

void Function_187(int iParam0) //Position: 0xA038 / 41016
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_188())
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

bool Function_188() //Position: 0xA0B7 / 41143
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

void Function_189() //Position: 0xA120 / 41248
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

void Function_190() //Position: 0xA146 / 41286
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

void Function_191(int iParam0) //Position: 0xA16C / 41324
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_192(int iParam0) //Position: 0xA189 / 41353
{
	Function_193(&Global_43580, iParam0);
	return;
}

void Function_193(var uParam0, var uParam1) //Position: 0xA197 / 41367
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_194() //Position: 0xA1B6 / 41398
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

void Function_195(int iParam0) //Position: 0xA22E / 41518
{
	int iVar0;
	int iVar1;
	
	if (!Function_131(iParam0))
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
		Function_196(78, 1, 1);
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

int Function_196(bool bParam0, bool bParam1, int iParam2) //Position: 0xA364 / 41828
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_197(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_197(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_197(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_197(bool bParam0) //Position: 0xA3B2 / 41906
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

void Function_198(int iParam0) //Position: 0xA4A6 / 42150
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

void Function_199(bool bParam0) //Position: 0xA529 / 42281
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

void Function_200() //Position: 0xA5A0 / 42400
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

void Function_201() //Position: 0xA5E4 / 42468
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

void Function_202() //Position: 0xA628 / 42536
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_203(int iParam0) //Position: 0xA63E / 42558
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_204())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_204() //Position: 0xA67E / 42622
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

void Function_205() //Position: 0xA6A3 / 42659
{
	Global_15862 = 0.0f;
	return;
}

int Function_206() //Position: 0xA6AD / 42669
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_207() //Position: 0xA6CA / 42698
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_208(int iParam0) //Position: 0xA6D3 / 42707
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

int Function_209(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA73B / 42811
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
		Function_211(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_210(&Global_15402[iParam014] + 8);
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

void Function_210(bool bParam0) //Position: 0xAA7D / 43645
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&bParam0);
		}
	}
	return;
}

void Function_211(var uParam0) //Position: 0xAAB0 / 43696
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

struct<8> Function_212() //Position: 0xAAC7 / 43719
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_213(int iParam0) //Position: 0xAAD1 / 43729
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!Function_214(&iParam0))
		{
			RELEASE_ACTOR(&iParam0);
			return 1;
		}
	}
	return 0;
}

bool Function_214(int iParam0) //Position: 0xAAF3 / 43763
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(GET_OBJECT_FROM_ACTOR(&iParam0))) == GET_GC_LAYOUT())
		{
			return 1;
		}
	}
	return 0;
}

void Function_215(bool bParam0) //Position: 0xAB17 / 43799
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(&bParam0))
	{
		bVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		while (IS_BLIP_VALID(&bVar0))
		{
			REMOVE_BLIP(&bVar0);
			bVar0 = GET_BLIP_ON_OBJECT(&bParam0);
		}
	}
	return;
}

void Function_216(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0xAB4A / 43850
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_223(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_223(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_223(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_222(&(Param0[iVar02]), 8);
	}
	Function_222(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_221(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_217(&Param0, &vParam1, uParam2, 0);
	}
}

void Function_217(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0xABF2 / 44018
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_220(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_219(Global_43790), Function_218(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_223(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_223(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_220(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_219(Global_43790), Function_218(Global_43790), false, 0);
	}
}

int Function_218(int iParam0) //Position: 0xAD58 / 44376
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

int Function_219(int iParam0) //Position: 0xAD83 / 44419
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

void Function_220(var uParam0, int iParam1) //Position: 0xADB7 / 44471
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_221(int iParam0) //Position: 0xADC8 / 44488
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar0, 1);
		}
		uVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(&uVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(&uVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_222(var uParam0, int iParam1) //Position: 0xAE71 / 44657
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_223(var uParam0, int iParam1) //Position: 0xAE8B / 44683
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_224(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0xAEA8 / 44712
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_226(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_225(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_225(&(uVar0[1]), "UseCase1"));
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

var Function_225(var uParam0, int iParam1) //Position: 0xB025 / 45093
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_226(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0xB034 / 45108
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &iParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &iParam0);
		if (!Function_13())
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &iParam0, 2.0f, 0);
		}
		else
		{
			uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &iParam0, 2.0f, 0);
			iParam2 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &iParam0, 2.0f, 0);
		}
	}
}

struct<8> Function_227(bool bParam0) //Position: 0xB17E / 45438
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

void Function_228(int iParam0) //Position: 0xB1A7 / 45479
{
	if (!Function_229(iParam0))
	{
		return;
	}
	(*&Global_39922 + 244)[iParam0] = 0;
	return;
}

bool Function_229(int iParam0) //Position: 0xB1C1 / 45505
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_230(int iParam0) //Position: 0xB1D6 / 45526
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_231(bool bParam0) //Position: 0xB1E9 / 45545
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_232() //Position: 0xB216 / 45590
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_233() //Position: 0xB241 / 45633
{
	var uVar0[13];
	int iVar14;
	
	if (Function_280())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "02 - Distract Law";
		uVar0[4] = "03 - Hogtie Informant";
		uVar0[5] = "04 - Pay Bounty";
		uVar0[6] = "Add some US Bounty";
		uVar0[7] = "Clear Player Wanted";
		uVar0[8] = "Last Stage";
		uVar0[9] = "DOOR_GET_BY_REGION";
		uVar0[10] = "Toggle Law Debug Spam";
		uVar0[11] = "Port to BP";
		if (ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
		{
			uVar0[12] = "remove lasso";
		}
		else
		{
			uVar0[12] = "give lasso";
		}
		iVar14 = Function_266(&uLocal_385, &uVar0, &Local_356 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_265(&iVar14, &bLocal_368, &iLocal_369, &iLocal_370))
		{
			Function_258();
			Function_257();
		}
		if (iVar14 == 0)
		{
			Function_258();
			Function_257();
			Function_256(&bLocal_382, 8);
		}
		else if (iVar14 == 1)
		{
			Function_258();
			Function_257();
			Function_252(bLocal_368);
			Function_248(StackVal, 5, &bLocal_383, &bLocal_368, Function_254(bLocal_368), Function_252(bLocal_368), 0);
		}
		else if (iVar14 == 2)
		{
			Function_258();
			Function_257();
			Function_243(&bLocal_384, 4);
		}
		else if (iVar14 == 3)
		{
			Function_258();
			Function_257();
			Function_242(0.0f, "Mission_Cheats_Menu(iOption = 3)", 0x3f800000, 1);
			Function_240(&bLocal_463);
			bLocal_368 = true;
			iLocal_369 = 0;
			iLocal_370 = 1000;
		}
		else if (iVar14 == 4)
		{
			Function_258();
			Function_257();
			Function_242(0.0f, "Mission_Cheats_Menu(iOption = 4)", 0x3f800000, 1);
			if (Function_239(StackVal) < 0)
			{
				Function_137("Fake bounty added for debug menu skiping", 7.0f, 0, 0, 2, 1, 0);
				Function_238(StackVal, Global_41252[1711].f_40);
			}
			Function_240(&bLocal_463);
			bLocal_368 = 2;
			iLocal_369 = 0;
			iLocal_370 = 1000;
		}
		else if (iVar14 == 5)
		{
			Function_258();
			Function_257();
			Function_242(0.0f, "Mission_Cheats_Menu(iOption = 5)", 0x3f800000, 1);
			if (Function_239(StackVal) < 0)
			{
				Function_137("Fake bounty added for debug menu skiping", 7.0f, 0, 0, 2, 1, 0);
				Function_238(StackVal, Global_41252[1711].f_40);
			}
			Function_240(&bLocal_463);
			bLocal_368 = 3;
			iLocal_369 = 0;
			iLocal_370 = 1000;
		}
		else if (iVar14 == 6)
		{
			Function_258();
			Function_257();
			if (Function_239(StackVal) < 0)
			{
				Function_137("Fake bounty added for debug menu skiping", 7.0f, 0, 0, 2, 1, 0);
				Function_238(StackVal, Global_41252[1711].f_40);
			}
		}
		else if (iVar14 == 7)
		{
			Function_258();
			Function_257();
			Function_237();
		}
		else if (iVar14 == 8)
		{
			Function_258();
			Function_257();
			Function_242(0.0f, "Mission_Cheats_Menu(iOption = 8)", 0x3f800000, 1);
			Function_240(&bLocal_463);
			bLocal_368 = 101;
			iLocal_369 = 0;
			iLocal_370 = 1000;
		}
		else if (iVar14 == 9)
		{
			uLocal_749 = Function_236(Global_46796[4], "benedictPoint", "trainStation01", 1);
			if (IS_DOOR_VALID(&uLocal_749))
			{
				OPEN_DOOR_DIRECTION(&uLocal_749, 1);
			}
			else
			{
				LOG_ERROR("Failed to unlock/open benedictpoint (station01) door #2!");
			}
		}
		else if (iVar14 == 10)
		{
			Function_258();
			Function_257();
			if (!Global_47151[11])
			{
				Global_47151[11] = 1;
			}
			else
			{
				Global_47151[11] = 0;
			}
		}
		else if (iVar14 == 11)
		{
			Function_258();
			Function_257();
			TASK_CLEAR(&bLocal_394);
			TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
			if (GET_MOUNT(&Global_54076) != &bLocal_398)
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_398);
			}
			if (GET_MOUNT(&bLocal_394) != &bLocal_396)
			{
				ACTOR_MOUNT_ACTOR(&bLocal_394, &bLocal_396);
			}
			Function_234(&Global_54076, &iLocal_4 + 1280[0], 1, 1, 1);
			Function_234(&bLocal_394, &iLocal_4 + 1280[1], 1, 1, 1);
			ABORT_SCRIPTED_CONVERSATION(0);
			iLocal_789 = 14;
		}
		else if (iVar14 == 12)
		{
			Function_258();
			Function_257();
			if (ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
			{
				DELETE_WEAPON_FROM_ACTOR(&Global_54076, 21);
			}
			else
			{
				GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
			}
		}
	}
	return;
}

void Function_234(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xB7E2 / 47074
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
				Function_235(StackVal, StackVal, &bParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_235(var uParam0, struct<2> Param1, float fParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0xB902 / 47362
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		uVar0 = GET_MOUNT(&uParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &uParam5, &bParam6);
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
				TELEPORT_ACTOR_WITH_HEADING(&uVar0, Param1, fParam3, &bParam4, &uParam5, &bParam6);
			}
			else
			{
				TELEPORT_ACTOR_WITH_HEADING(&uParam0, Param1, fParam3, &bParam4, &uParam5, &bParam6);
			}
		}
	}
	else
	{
		LOG_ERROR("TELEPORT_ACTOR_MOUNTED_WITH_HEADING got an invalid ACTOR");
	}
}

bool Function_236(bool bParam0, struct<2> Param1, bool bParam3) //Position: 0xB9D1 / 47569
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_84(bParam0))
	{
		return "";
	}
	if (!IS_WORLD_SECTOR_LOADED(&Global_44085[bParam09] + 56))
	{
		return "";
	}
	Param1 = &Param1;
	strcpy(&cVar0, "door", 8);
	if (bParam3 <= 10)
	{
		stradd(&cVar0, "0", 8);
	}
	straddi(&cVar0, bParam3, 8);
	memcpy(&cVar2, &Global_44085[bParam09] + 32, 8);
	stradd(&cVar2, "_", 32);
	stradd(&cVar2, &cParam2, 32);
	stradd(&cVar2, "*", 32);
	uVar10 = GET_WORLD_SECTOR_CHILD_OBJECT(&Global_44085[bParam09] + 56, &cVar2, &cVar0);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar10)))
	{
		return "";
	}
	return GET_DOOR_FROM_OBJECT(&uVar10);
}

void Function_237() //Position: 0xBA76 / 47734
{
	Function_230(512);
	Global_42252 = 0.0f;
	UNK_0x598815BD(Global_42252);
	if (IS_SCRIPT_VALID(&Global_39922 + 104))
	{
		TERMINATE_SCRIPT(&Global_39922 + 104);
	}
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		TERMINATE_SCRIPT(&Global_39922 + 96);
	}
	return;
}

void Function_238(int iParam0, bool bParam1) //Position: 0xBAB6 / 47798
{
	if (!Function_229(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_40060[iParam0] = (Global_40060[iParam0] + bParam1);
	Function_88((*&Global_40060 + 4428)[iParam0], bParam1, 0, 0);
	Function_88(222, bParam1, 0, 0);
	return;
}

int Function_239(bool bParam0) //Position: 0xBAFB / 47867
{
	if (!Function_229(bParam0))
	{
		return 0;
	}
	return Global_40060[bParam0];
}

void Function_240(bool bParam0) //Position: 0xBB13 / 47891
{
	Function_241(&bParam0, 0.0f);
	return;
}

void Function_241(vector3 vParam0) //Position: 0xBB20 / 47904
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_76(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_242(float fParam0, float fParam1, int iParam2, int iParam3) //Position: 0xBB45 / 47941
{
	HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
	HUD_FADE_OUT(fParam0, &iParam2, &iParam3);
}

void Function_243(bool bParam0, int iParam1) //Position: 0xBB5F / 47967
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(&iParam1);
	bParam0 = 1;
	return;
}

void Function_244(int iParam0) //Position: 0xBB84 / 48004
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_247("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_246(2) || Function_246(8)) || Function_246(9)) || Function_246(10))
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
		Function_247("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_247("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_247("");
	}
	else if (iParam0 == 8)
	{
		Function_245();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_245();
	}
	return;
}

void Function_245() //Position: 0xBC7B / 48251
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_246(int iParam0) //Position: 0xBC87 / 48263
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

void Function_247(char* cParam0) //Position: 0xBCBD / 48317
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_248(int iParam0, bool bParam1, bool bParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xBD29 / 48425
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (bParam2 != 100)
	{
		Function_249(StackVal, Param4, uParam3, &iParam6);
		Function_244(iParam0);
		bParam1 = 1;
		bParam2 = 100;
	}
}

void Function_249(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBD6A / 48490
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_251(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_250(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_250(int iParam0) //Position: 0xBDEC / 48620
{
	if (!Function_84(iParam0))
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

var Function_251(struct<2> Param0, bool bParam2) //Position: 0xC2A3 / 49827
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

struct<8> Function_252(bool bParam0) //Position: 0xC30F / 49935
{
	Function_253(bParam0 + 1);
	return StackVal, Function_253(bParam0 + 1);
}

struct<8> Function_253(bool bParam0) //Position: 0xC31C / 49948
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_227(&iLocal_4 + 624[0]);
			return StackVal, Function_227(&iLocal_4 + 624[0]);
			break;
		
		case 0x00000001:
			Function_227(&iLocal_4 + 680[0]);
			return StackVal, Function_227(&iLocal_4 + 680[0]);
			break;
		
		case 0x00000002:
			Function_227(&iLocal_4 + 824[0]);
			return StackVal, Function_227(&iLocal_4 + 824[0]);
			break;
		
		case 0x00000003:
			Function_227(&iLocal_4 + 896[0]);
			return StackVal, Function_227(&iLocal_4 + 896[0]);
			break;
		
		default:
			Function_227(&iLocal_4 + 984[0]);
			return StackVal, Function_227(&iLocal_4 + 984[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_227(&iLocal_4 + 984[0]);
	return StackVal, Function_227(&iLocal_4 + 984[0]);
}

int Function_254(bool bParam0) //Position: 0xC401 / 50177
{
	return Function_255(bParam0 + 1);
}

int Function_255(bool bParam0) //Position: 0xC40E / 50190
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 624[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 680[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 824[0]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 896[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 984[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 624[0]);
}

void Function_256(bool bParam0, int iParam1) //Position: 0xC4F3 / 50419
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_244(&iParam1);
	bParam0 = 1;
	return;
}

void Function_257() //Position: 0xC518 / 50456
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_258() //Position: 0xC52D / 50477
{
	Function_260();
	Function_259(10, 3);
	return;
}

void Function_259(int iParam0, int iParam1) //Position: 0xC53C / 50492
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

void Function_260() //Position: 0xC689 / 50825
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_264())
	{
		Function_263(10, 3);
	}
	else
	{
		Function_261();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_261() //Position: 0xC6D4 / 50900
{
	Function_262(25, 2);
	return;
}

void Function_262(int iParam0, int iParam1) //Position: 0xC6E0 / 50912
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

void Function_263(int iParam0, int iParam1) //Position: 0xC90C / 51468
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

bool Function_264() //Position: 0xCA59 / 51801
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

bool Function_265(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xCAC1 / 51905
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_258();
			Function_257();
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
		Function_247("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_266(struct<17> Param0) //Position: 0xCB70 / 52080
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_279(&Var12, &Var0);
	uVar15 = Function_278(uParam1, &Var12);
	Function_277(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_276(&Param0, uVar15);
	Function_274(StackVal, &Param0, Var12.f_12);
	Function_272(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_271(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_268(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_267(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_267(int iParam0, int iParam1, int iParam2) //Position: 0xCC64 / 52324
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

bool Function_268(struct<17> Param0) //Position: 0xCCC4 / 52420
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
				Function_270(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_270(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_267(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_269(Param1.f_64);
	}
	else
	{
		Function_269(Param1.f_64);
	}
	return 0;
}

void Function_269(bool bParam0) //Position: 0xCE57 / 52823
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

void Function_270(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCE95 / 52885
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

var Function_271(int iParam0, struct<21> Param1) //Position: 0xCF4B / 53067
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_272(vector3 vParam0) //Position: 0xCF72 / 53106
{
	switch (Function_273())
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

int Function_273() //Position: 0xD01E / 53278
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

void Function_274(vector3 vParam0) //Position: 0xD05A / 53338
{
	switch (Function_275(&vParam0))
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

int Function_275(bool bParam0) //Position: 0xD103 / 53507
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_76(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_76(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_38(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_76(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_76(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_38(&bParam0, 0x20000000);
	return 0;
}

var Function_276(struct<21> Param0) //Position: 0xD223 / 53795
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

void Function_277(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD3DD / 54237
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

var Function_278(int iParam0, struct<13> Param1) //Position: 0xD479 / 54393
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_279(struct<17> Param0) //Position: 0xD495 / 54421
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

bool Function_280() //Position: 0xD4EF / 54511
{
	return Global_47307;
}

bool Function_281() //Position: 0xD4F8 / 54520
{
	if (IS_EXITFLAG_SET())
	{
		Function_252(bLocal_368);
		Function_248(StackVal, 4, &bLocal_383, &bLocal_368, Function_254(bLocal_368), Function_252(bLocal_368), 0);
		return 0;
	}
	Function_595(StackVal, StackVal, StackVal, StackVal, StackVal, Local_356, bLocal_368, iLocal_369, &bLocal_384, &bLocal_382, &bLocal_383);
	if (bLocal_368 == 99 && bLocal_368 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_252(bLocal_368);
			Function_248(StackVal, 1, &bLocal_383, &bLocal_368, Function_254(bLocal_368), Function_252(bLocal_368), 0);
			return 1;
		}
		if (Function_594(2048))
		{
			Function_252(bLocal_368);
			Function_248(StackVal, 3, &bLocal_383, &bLocal_368, Function_254(bLocal_368), Function_252(bLocal_368), 0);
			return 1;
		}
		if (Function_574(&Local_557, &uLocal_503, &uLocal_709, &uLocal_461, uLocal_719))
		{
			if (Function_558(&uLocal_709))
			{
				Function_252(bLocal_368);
				Function_248(StackVal, 5, &bLocal_383, &bLocal_368, Function_254(bLocal_368), Function_252(bLocal_368), 0);
				return 1;
			}
		}
	}
	switch (bLocal_368)
	{
		case 0x00000063:
			Function_538();
			break;
		
		case 0x00000000:
			Function_511();
			break;
		
		case 0x00000001:
			Function_448();
			break;
		
		case 0x00000002:
			Function_419();
			break;
		
		case 0x00000003:
			Function_366();
			break;
		
		case 0x00000065:
			Function_284();
			break;
		
		case 0x00000064:
			if (Function_283(&bLocal_383))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_282(&bLocal_368, &iLocal_369, &iLocal_370))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_384)
	{
		Function_243(&bLocal_384, 4);
		Function_1();
		return 0;
	}
	if (bLocal_382)
	{
		Function_256(&bLocal_382, 8);
		Function_1();
		return 0;
	}
	if (bLocal_383 && bLocal_368 == 100)
	{
		Function_252(bLocal_368);
		Function_248(StackVal, 5, &bLocal_383, &bLocal_368, Function_254(bLocal_368), Function_252(bLocal_368), 0);
	}
	return 1;
}

bool Function_282(var uParam0, var uParam1, int iParam2) //Position: 0xD68A / 54922
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

bool Function_283(int iParam0) //Position: 0xD6D3 / 54995
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_284() //Position: 0xD6E7 / 55015
{
	switch (iLocal_369)
	{
		case 0x00000000:
			if (!HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					Function_242(0.0f, "Last_Stage().GID_INITIALIZE", 0x3f800000, 1);
				}
				if (!HUD_IS_FADED())
				{
					if (!HUD_IS_FADING())
					{
						Function_242(0.0f, "Last_Stage().GID_INITIALIZE", 0x3f800000, 1);
					}
				}
			}
			else
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				SET_ACTOR_HEALTH(&bLocal_394, GET_ACTOR_MAX_HEALTH(&bLocal_394));
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_394, 1);
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_363();
				bLocal_404 = Global_46796[4];
				if (!Function_362(bLocal_404))
				{
					Function_361(&Local_356);
				}
				TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				Function_360(&Global_54076, &iLocal_4 + 984[1], 1, 1, 1);
				Function_360(&bLocal_398, &iLocal_4 + 984[2], 1, 1, 1);
				Function_360(&bLocal_396, &iLocal_4 + 984[3], 1, 1, 1);
				if (GET_MOUNT(&bLocal_394) != &bLocal_396)
				{
					ACTOR_MOUNT_ACTOR(&bLocal_394, &bLocal_396);
				}
				MEMORY_CLEAR_ALL(&bLocal_394);
				Function_215(&bLocal_394);
				if (IS_ACTOR_VALID(&bLocal_400))
				{
					Function_360(&bLocal_400, &iLocal_4 + 896[5], 1, 1, 1);
					HOGTIE_ACTOR(&bLocal_400);
				}
				Function_358(&uLocal_718, 0, 0, 4294967295, 4294967295);
				Function_240(&bLocal_463);
				iLocal_369 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_362(Global_46796[4]))
			{
				Function_240(&bLocal_463);
				iLocal_369 = 2;
			}
			break;
		
		case 0x00000002:
			Function_253(bLocal_368);
			Function_350(StackVal, Function_253(bLocal_368), bLocal_368, Global_46736[1], Function_255(bLocal_368), 0);
			Function_240(&bLocal_463);
			iLocal_369 = 3;
			break;
		
		case 0x00000003:
			if (Function_285("$/cutscene/GRAVE01_CS04_F/GRAVE01_CS04_F", &iLocal_370, &Local_356, &bLocal_368, 68974, 68145, 62017, 59914, 58985, 58702, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_240(&bLocal_463);
				iLocal_369 = 106;
			}
			break;
		
		case 0x0000006A:
			bLocal_382 = true;
			break;
	}
	return;
}

bool Function_285(var uParam0, int iParam1, struct<41> Param2) //Position: 0xD940 / 55616
{
	if (!&bParam15)
	{
		Function_298(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (bParam3 != 99 && (Function_297(&Param2) || Param2.f_40 < 1))
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
				Function_240(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &uParam0) || !Function_296())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_295(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_240(&iParam1 + 4);
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
					Function_295(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_292(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_292(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_290(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_295(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_240(&iParam1 + 4);
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
						Function_289(1.0f);
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
						Function_287();
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
					Function_286(1, 1);
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
			if ((HUD_IS_FADED() && bParam3 == 99) && !Function_297(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_286(var uParam0, bool bParam1) //Position: 0xDFA2 / 57250
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
		Function_194();
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

void Function_287() //Position: 0xE071 / 57457
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_288();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_288() //Position: 0xE0B6 / 57526
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_289(bool bParam0) //Position: 0xE0C8 / 57544
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

void Function_290(var uParam0, int iParam1) //Position: 0xE0E5 / 57573
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
			if ((&iVar3 == &Global_54076 && !Function_291(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_291(int iParam0) //Position: 0xE177 / 57719
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

float Function_292(vector3 vParam0) //Position: 0xE1A8 / 57768
{
	if (Function_294(&vParam0))
	{
		if (Function_293(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_293(int iParam0) //Position: 0xE275 / 57973
{
	return Function_14(iParam0, 2);
}

bool Function_294(bool bParam0) //Position: 0xE283 / 57987
{
	return Function_14(bParam0, 1);
}

int Function_295(bool bParam0) //Position: 0xE291 / 58001
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

bool Function_296() //Position: 0xE354 / 58196
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

bool Function_297(struct<37> Param0) //Position: 0xE391 / 58257
{
	return Param0.f_36;
}

void Function_298(var uParam0, int iParam1) //Position: 0xE39C / 58268
{
	Function_299(&uParam0, &iParam1, 0);
	return;
}

void Function_299(var uParam0, bool bParam1, bool bParam2) //Position: 0xE3AC / 58284
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
			Function_300(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_88(20, 1, 0, 0);
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
							Function_300(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_88(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_300(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xE524 / 58660
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

int Function_301() //Position: 0xE54E / 58702
{
	switch (bLocal_368)
	{
		case 0x00000063:
			if (HUD_IS_FADED())
			{
				Function_302(1.0f, "CUTSCENE_CUSTOM_SKIPPED.SID_INITIALIZE", 0x3f800000);
			}
			return 1;
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000001:
			if (!GET_DRAW_ACTOR(&iLocal_4 + 160[02]) || !GET_DRAW_ACTOR(&iLocal_4 + 160[12]))
			{
				SET_DRAW_ACTOR(&iLocal_4 + 160[02], 1);
				SET_DRAW_ACTOR(&iLocal_4 + 160[12], 1);
				LOG_ERROR("DRAW ACTORS IN SKIPPED!!!");
			}
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000003:
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SKIPPED() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

void Function_302(bool bParam0, float fParam1, int iParam2) //Position: 0xE65B / 58971
{
	HUD_FADE_IN(bParam0, &iParam2);
	return;
}

int Function_303() //Position: 0xE669 / 58985
{
	switch (bLocal_368)
	{
		case 0x00000063:
			AI_STOP_IGNORING_ACTORS();
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[0]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[0]);
			DESTROY_VOLUME(&iLocal_4 + 560[0]);
			Function_304(2, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE() - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			AI_STOP_IGNORING_ACTORS();
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[1]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[1]);
			DESTROY_VOLUME(&iLocal_4 + 560[1]);
			CLEAR_AMBIENT_ALL_RESTRICTIONS();
			Function_304(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			if (!GET_DRAW_ACTOR(&iLocal_4 + 160[02]) || !GET_DRAW_ACTOR(&iLocal_4 + 160[12]))
			{
				SET_DRAW_ACTOR(&iLocal_4 + 160[02], 1);
				SET_DRAW_ACTOR(&iLocal_4 + 160[12], 1);
				LOG_ERROR("DRAW ACTORS IN COMPLETE!!!");
			}
			DESTROY_ACTOR(&iLocal_4 + 208[02]);
			DESTROY_ACTOR(&iLocal_4 + 208[12]);
			return 1;
			break;
		
		case 0x00000002:
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[2]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[2]);
			DESTROY_VOLUME(&iLocal_4 + 560[2]);
			Function_304(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000003:
			AI_STOP_IGNORING_ACTORS();
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(0);
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[3]);
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[3]);
			DESTROY_VOLUME(&iLocal_4 + 560[3]);
			ADD_ACCESSORY("WRIST_BIND", &bLocal_400, 0);
			ADD_ACCESSORY("ANKLE_BIND", &bLocal_400, 0);
			ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 3, 0);
			Function_304(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			if (!UI_ISACTIVE("nCutscenes"))
			{
				UI_PUSH("nCutscenes");
			}
			if (!IS_CURRENT_CAMERA_CHANNEL_TRANSITIONING(0) && !IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&iLocal_370 + 24), 0))
			{
				if (IS_OBJECT_VALID(&iLocal_370 + 24))
				{
					DECOR_REMOVE(&Global_54076, "__CameraReady");
					DECOR_REMOVE(&Global_54076, "__CameraGo");
					if (UNK_0xCDA6BB6C())
					{
						CANCEL_CUTSCENE_TUNER_PLAYBACK();
					}
					else if (IS_OBJECT_VALID(&iLocal_370 + 24))
					{
						DESTROY_OBJECT(&iLocal_370 + 24);
					}
				}
				AI_STOP_IGNORING_ACTORS();
				Function_304(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
				return 1;
			}
			return 0;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

void Function_304(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0xE93B / 59707
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
		Function_88(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_257();
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
	Function_286(&iParam9, &bParam10);
}

int Function_305() //Position: 0xEA0A / 59914
{
	struct<2> Var0;
	
	switch (bLocal_368)
	{
		case 0x00000063:
			Function_360(&Global_54076, &iLocal_4 + 624[1], 0, 0, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 0,75f, 1);
			Function_360(&bLocal_394, &iLocal_4 + 624[2], 1, 1, 1);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_394, &iLocal_4 + 1320, 2, 1, 0, 1, false);
			AI_ACTOR_FORCE_SPEED(&bLocal_394, 2);
			ACTOR_POP_NEXT_GAIT(&bLocal_394, 2, 0);
			return 1;
			break;
		
		case 0x00000001:
			SET_DRAW_ACTOR(&iLocal_4 + 160[02], 1);
			SET_DRAW_ACTOR(&iLocal_4 + 160[12], 1);
			SET_DRAW_ACTOR(&iLocal_4 + 208[02], 0);
			SET_DRAW_ACTOR(&iLocal_4 + 208[12], 0);
			if (IS_ACTOR_VALID(&bLocal_394))
			{
				ACTOR_DISMOUNT_NOW(&bLocal_394);
				Function_360(&bLocal_394, &iLocal_4 + 680[3], 1, 1, 1);
				MEMORY_PREFER_RIDING(&bLocal_394, false);
				TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
			}
			else
			{
				LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE.SID_SECOND_STAGE - invalid m_aCompanion");
			}
			if (IS_ACTOR_VALID(&bLocal_398))
			{
				Function_360(&bLocal_398, &iLocal_4 + 680[6], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
			}
			else
			{
				LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE.SID_SECOND_STAGE - invalid m_aPlayerHorse");
			}
			if (IS_ACTOR_VALID(&bLocal_396))
			{
				Function_360(&bLocal_396, &iLocal_4 + 680[7], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
			}
			else
			{
				LOG_ERROR("CUTSCENE_CUSTOM_COMPLETE.SID_SECOND_STAGE - invalid m_aSethHorse");
			}
			return 1;
			break;
		
		case 0x00000002:
			Function_360(&Global_54076, &iLocal_4 + 824[1], 1, 1, 1);
			Function_360(&bLocal_394, &iLocal_4 + 824[3], 1, 1, 1);
			Function_360(&bLocal_400, &iLocal_4 + 824[5], 1, 1, 1);
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_400)))
			{
				if (!IS_DOOR_VALID(&bLocal_747))
				{
					bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
				}
				if (IS_DOOR_LOCKED(&bLocal_747))
				{
					OPEN_DOOR_DIRECTION(&bLocal_747, 1);
					SET_DOOR_LOCK(&bLocal_747, 0);
				}
				ADD_BLIP_FOR_OBJECT(&bLocal_400, 322, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_400), "Grave01_blip_moses");
			}
			Function_311(1, 0, 1);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 21, 0);
			CAMERA_RESET(0);
			return 1;
			break;
		
		case 0x00000003:
			Function_360(&Global_54076, &iLocal_4 + 896[1], 0, 1, 1);
			Function_360(&bLocal_394, &iLocal_4 + 896[2], 1, 1, 1);
			Function_360(&bLocal_400, &iLocal_4 + 896[5], 1, 1, 1);
			Function_360(&bLocal_398, &iLocal_4 + 896[3], 1, 1, 1);
			Function_360(&bLocal_396, &iLocal_4 + 896[4], 1, 1, 1);
			SET_MOVER_FROZEN(&bLocal_400, 1);
			DECOR_SET_BOOL(&bLocal_400, "ActionArea_DisableHogtie", 1);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 0,75f, 1);
			ACTOR_POP_NEXT_GAIT(&bLocal_394, 1, 0);
			iLocal_782 = 1;
			return 1;
			break;
		
		case 0x00000065:
			if (!IS_ACTOR_VALID(&bLocal_396))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 984[3], &Local_499);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 984[3], &Var0);
				bLocal_396 = CREATE_ACTOR_IN_LAYOUT(&iLocal_354, "graveRobberHorse", bLocal_393, Local_499, Var0);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_396, 14.0f);
				ACCESSORIZE_HORSE(&bLocal_396, 3);
			}
			if (GET_MOUNT(&bLocal_394) != &bLocal_396)
			{
				ACTOR_MOUNT_ACTOR(&bLocal_394, &bLocal_396);
			}
			Function_234(&bLocal_396, &iLocal_4 + 984[3], 1, 1, 1);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_394, &iLocal_4 + 1368, 3, 1, 0, 1, false);
			ACTOR_POP_NEXT_GAIT(&bLocal_396, 4, 0);
			SET_ALLOW_RIDE_BY_AI(&bLocal_396, 1);
			MEMORY_PREFER_RIDING(&bLocal_394, true);
			AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_394, 0);
			ACTOR_START_FORCE_HOLSTER(&bLocal_394, 1, 0);
			*(&iLocal_370 + 24) = Function_307(&iLocal_4, 0, &Global_54076, 1, 0, 0);
			if (IS_OBJECT_VALID(&iLocal_370 + 24))
			{
			}
			else
			{
				LOG_ERROR("Grave01_Outro - Failed to create Grave01_Outro_cutscene");
			}
			CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_370 + 24, 1);
			DECOR_SET_BOOL(&Global_54076, "__CameraReady", 1);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SET_POSES() - DEFAULT???");
			Function_306();
			return 1;
			break;
	}
	return 0;
}

int Function_306() //Position: 0xEF49 / 61257
{
	return 1;
}

var Function_307(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0xEF50 / 61264
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "grave01_Outro", 2, 1);
	}
	Function_308(&uVar0, &uParam2);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 7.0f, 4294967295, 4, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_308(var uParam0, var uParam1) //Position: 0xEFDA / 61402
{
	var uVar0;
	int iVar1;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_310(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_309(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "__CameraReady", 0, 0, 180f);
	iVar1 = CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 0, 0,1f, 1);
	ADD_CAMERATRANSITION_EVENT_GAMECAMERARESET(&iVar1, 5.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 1, 7.0f, 2);
	return;
}

void Function_309(int iParam0) //Position: 0xF050 / 61520
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3697,355f, 9,863933f, 3443,661f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,16524f, 0,856497f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_310(int iParam0) //Position: 0xF0C5 / 61637
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3697,355f, 9,863933f, 3443,661f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,16524f, 0,856497f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_311(int iParam0, bool bParam1, bool bParam2) //Position: 0xF132 / 61746
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
						Function_210(&uVar1);
					}
				}
				Function_215(&uVar0);
			}
		}
	}
	return;
}

int Function_312() //Position: 0xF241 / 62017
{
	struct<5> Var0;
	
	switch (bLocal_368)
	{
		case 0x00000063:
			if (!Function_338() && !Function_332(&iLocal_419))
			{
				return 0;
			}
			if (!IS_ACTOR_VALID(&bLocal_394))
			{
				bLocal_394 = Function_323(1, 0, 1, -1783,02f, 24,0942f, 2840,04f, 0, 0, 0);
			}
			if (!IS_ACTOR_VALID(&bLocal_398))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 624[3], &Local_499);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 624[3], &Var0);
				bLocal_398 = Function_316(StackVal, StackVal, StackVal, 1, 1, Local_499, 1, 0);
				MAKE_ACTOR_READY_FOR_ACTION(&bLocal_398, 1);
			}
			if (!IS_OBJECT_VALID(&uLocal_778))
			{
				uLocal_778 = Function_315(Global_46760[4], "coots", "grave", 20);
			}
			else if (IS_PROP_STREAMED_IN(&uLocal_778))
			{
				if (!GRAVE_IS_DUG_UP(&uLocal_778))
				{
					GRAVE_SET_DUG_UP(&uLocal_778, 1);
				}
			}
			return 1;
			break;
		
		case 0x00000000:
			return 1;
			break;
		
		case 0x00000001:
			if (!Function_338() && !Function_332(&iLocal_419))
			{
				return 0;
			}
			if (!GET_DRAW_ACTOR(&iLocal_4 + 160[02]) || !GET_DRAW_ACTOR(&iLocal_4 + 160[12]))
			{
				if (CUTSCENE_MANAGER_GET_CURRENT_FRAME() > (CUTSCENE_MANAGER_GET_TOTAL_FRAMES() - 30))
				{
					SET_DRAW_ACTOR(&iLocal_4 + 160[02], 1);
					SET_DRAW_ACTOR(&iLocal_4 + 160[12], 1);
					SET_DRAW_ACTOR(&iLocal_4 + 208[02], 0);
					SET_DRAW_ACTOR(&iLocal_4 + 208[12], 0);
				}
				return 0;
			}
			return 1;
			break;
		
		case 0x00000002:
			if (!Function_338() && !Function_332(&iLocal_419))
			{
				return 0;
			}
			if (!iLocal_784)
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[02]);
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[12]);
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[22]);
				iLocal_784 = 1;
			}
			return 1;
			break;
		
		case 0x00000003:
			if (!Function_338() && !Function_332(&iLocal_419))
			{
				return 0;
			}
			if (Function_314(&bLocal_463, 35.0f))
			{
				if (ACTOR_IS_VARIABLE_MESH_ENABLED(&bLocal_400, 17) || !ACTOR_IS_VARIABLE_MESH_ENABLED(&bLocal_400, 18))
				{
					ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 17, false);
					ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 18, true);
				}
				return 1;
			}
			return 0;
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_FIRSTSHOT() - DEFAULT???");
			Function_313();
			return 1;
			break;
	}
	return 0;
}

int Function_313() //Position: 0xF497 / 62615
{
	return 1;
}

bool Function_314(bool bParam0, float fParam1) //Position: 0xF49E / 62622
{
	if (Function_294(&bParam0))
	{
		if (Function_292(&bParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

var Function_315(int iParam0, bool bParam1, char* cParam2) //Position: 0xF4BC / 62652
{
	var uVar0;
	char* cVar1[8];
	char* cVar3[32];
	var uVar11;
	
	if (!Function_84(iParam0))
	{
		return "";
	}
	uVar0 = CREATE_WORLD_SECTOR(FIND_NAMED_LAYOUT("formations"), &bParam1);
	if (!IS_WORLD_SECTOR_LOADED(&uVar0))
	{
		DESTROY_OBJECT(&uVar0);
		return "";
	}
	strcpy(&cVar1, "grave", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar1, "0", 8);
	}
	straddi(&cVar1, iParam3, 8);
	memcpy(&cVar3, &Global_44085[iParam09] + 32, 8);
	stradd(&cVar3, "_", 32);
	stradd(&cVar3, &cParam2, 32);
	stradd(&cVar3, "*", 32);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&uVar0, &cVar3, &cVar1);
	DESTROY_OBJECT(&uVar0);
	if (!IS_OBJECT_VALID(&uVar11))
	{
		PRINTSTRING("Grave not found:");
		PRINTSTRING(&cVar3);
		PRINTSTRING(&cVar1);
		PRINTNL();
		return "";
	}
	return GET_GRAVE_FROM_OBJECT(&uVar11);
}

int Function_316(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xF593 / 62867
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
		Function_322(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_321())
		{
			return "";
		}
	}
	if (!Function_319())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_194();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_227(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_227(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_227(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_227(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_318(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_318(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&bParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&bParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				Var8 = Vector(&bParam2, &iParam3, &iParam4);
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), bVar0, Vector(&bParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_54(), 993, Vector(&bParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_317(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_317(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xF8F0 / 63728
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

var Function_318(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xF93A / 63802
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

bool Function_319() //Position: 0xF9DA / 63962
{
	if (Function_320() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_320() //Position: 0xF9F0 / 63984
{
	return Global_21369.f_244;
}

bool Function_321() //Position: 0xF9FB / 63995
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_322(var uParam0, bool bParam1, bool bParam2) //Position: 0xFA1B / 64027
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_76(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_76(&Global_21369 + 72 + 32, 64);
	}
	return;
}

bool Function_323(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xFA4A / 64074
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
		Function_311(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_331(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_326(&Global_15402[iParam014] + 16, &iParam7);
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
		Function_325(&bVar1, 0, 0, 0, 0);
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
		Function_324(&bVar1, 0);
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

void Function_324(var uParam0, bool bParam1) //Position: 0xFF8A / 65418
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_325(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xFFAC / 65452
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

var Function_326(int iParam0, int iParam1) //Position: 0x1000F / 65551
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_330(iParam0))
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
						Function_327(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_327(var uParam0, int iParam1) //Position: 0x1009D / 65693
{
	Function_329(&uParam0);
	Function_328(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_328(int iParam0) //Position: 0x100C9 / 65737
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_329(int iParam0) //Position: 0x100EF / 65775
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

bool Function_330(int iParam0) //Position: 0x101C5 / 65989
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_331(int iParam0, var uParam1) //Position: 0x101DC / 66012
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

bool Function_332(struct<2>[] Param0) //Position: 0x10282 / 66178
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_337();
	iVar1 = 0;
	if (!Function_179(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_336(&(Param0[iVar02]), 8);
		}
		else if (Function_335())
		{
			iVar1 = 1;
			Function_336(&(Param0[iVar02]), 8);
		}
		Function_336(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_179(&(Param0[iVar02]), 4))
		{
			if (!Function_179(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_179(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_179(&(Param0[02]), 8) || iVar1));
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
				Function_336(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_179(&(Param0[iVar02]), 4))
		{
			if (!Function_179(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_336(&(Param0[iVar02]), 2);
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
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_336(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_336(&(Param0[iVar02]), 2);
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
	Function_333();
	return 1;
}

void Function_333() //Position: 0x10644 / 67140
{
	if (!Function_334(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_334(int iParam0) //Position: 0x10684 / 67204
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_335() //Position: 0x106A0 / 67232
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

void Function_336(struct<13> Param0) //Position: 0x106CE / 67278
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_337() //Position: 0x106E1 / 67297
{
	if (!Function_334(128))
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

bool Function_338() //Position: 0x10723 / 67363
{
	Function_341(&iLocal_4 + 8, 442, 2, 0);
	Function_341(&iLocal_4 + 8, 429, 2, 0);
	Function_341(&iLocal_4 + 8, 653, 2, 0);
	Function_341(&iLocal_4 + 8, 985, 2, 0);
	Function_341(&iLocal_4 + 8, 977, 2, 0);
	Function_339(&iLocal_4 + 8, "p_gen_treeFallen01x", 0, 0);
	Function_339(&iLocal_4 + 8, "p_gen_treeCedarDead01x", 0, 0);
	Function_339(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/cs_grave01_deputy", 1, 0);
	Function_339(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/cs_grave01_deputy02", 1, 0);
	if (Function_332(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_339(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x10848 / 67656
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_340(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_336(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_340(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x10886 / 67718
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_179(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_336(&(Param0[iVar02]), 4);
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

var Function_341(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x10955 / 67925
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_179(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_336(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_336(&(Param0[iVar02]), 8);
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

int Function_342() //Position: 0x10A31 / 68145
{
	struct<2> Var0;
	struct<2> Var2;
	struct<5> Var4;
	
	switch (bLocal_368)
	{
		case 0x00000063:
			CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
			Function_227(&iLocal_4 + 624[1]);
			Function_343(StackVal, &Var0, &Var2, Function_227(&iLocal_4 + 624[1]), GET_OBJECT_HEADING(&iLocal_4 + 624[1]), 0);
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(Var0, Var2);
			return 1;
			break;
		
		case 0x00000001:
			Function_227(&iLocal_4 + 680[8]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_227(&iLocal_4 + 680[8]), 0, 0);
			if (!IS_ACTOR_VALID(&bLocal_398))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 680[6], &Local_499);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 680[6], &Var4);
				bLocal_398 = Function_316(StackVal, StackVal, StackVal, 1, 1, Local_499, 1, 0);
				MAKE_ACTOR_READY_FOR_ACTION(&bLocal_398, 1);
				return 0;
			}
			if (!IS_ACTOR_VALID(&bLocal_396))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 680[7], &Local_499);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 680[7], &Var6);
				bLocal_396 = CREATE_ACTOR_IN_LAYOUT(&iLocal_354, "graveRobberHorse", bLocal_393, Local_499, Var6);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_396, 14.0f);
				ACCESSORIZE_HORSE(&bLocal_396, 3);
				SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_396, 1);
				SET_ALLOW_RIDE_BY_PLAYER(&bLocal_396, 0);
				return 0;
			}
			return 1;
			break;
		
		case 0x00000002:
			return 1;
			break;
		
		case 0x00000003:
			CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[02]);
			CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[12]);
			CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[22]);
			Function_227(&iLocal_4 + 896[2]);
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 1.0f, 0.0f), Function_227(&iLocal_4 + 896[2]), StackVal), 0, 0);
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[02]);
			CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[12]);
			CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 280[22]);
			CUTSCENE_MANAGER_SET_FINAL_STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(-3707,723f, 10,67929f, 3446,063f), Vector(-0,023037f, -0,134152f, 0.0f));
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_STREAMING() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

var Function_343(var uParam0, var uParam1, struct<2> Param2, bool bParam4, int iParam5) //Position: 0x10C3C / 68668
{
	bool bVar0;
	
	bVar0 = "";
	switch (iParam5)
	{
		case 0x00000000:
			bVar0 = "roam";
			break;
		
		case 0x00000001:
			bVar0 = "interior";
			break;
		
		case 0x00000002:
			bVar0 = "horse";
			break;
		
		case 0x00000003:
			bVar0 = "wagonDefault";
			break;
		
		case 0x00000004:
			bVar0 = "wagonShotgun";
			break;
		
		case 0x00000005:
			bVar0 = "wagonShotgun";
			break;
	}
	PRINTSTRING("GET_GAME_CAMERA_RESET_POSITION_HELPER called with position ");
	PRINTVECTOR(Param2);
	PRINTSTRING(" and heading ");
	PRINTFLOAT(bParam4);
	PRINTSTRING(" and with arc ");
	PRINTSTRING(&bVar0);
	PRINTNL();
	return GET_GAME_CAMERA_RESET_POSITION(&uParam0, &uParam1, Param2, bParam4, &bVar0);
}

int Function_344() //Position: 0x10D6E / 68974
{
	switch (bLocal_368)
	{
		case 0x00000063:
			Function_347(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_227(&iLocal_4 + 624[0]);
			Function_345(StackVal, &iLocal_354, Function_227(&iLocal_4 + 624[0]), &iLocal_4 + 560[0], 1, 0, 0, 0, 1, 1);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 560[0], 4294967295);
			if (IS_ACTOR_VALID(&Global_54076))
			{
				Function_360(&Global_54076, &iLocal_4 + 624[0], 1, 1, 1);
			}
			if (IS_ACTOR_VALID(&bLocal_394))
			{
				Function_360(&bLocal_394, &iLocal_4 + 624[2], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_398))
			{
				Function_360(&bLocal_398, &iLocal_4 + 624[3], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
			}
			if (IS_ACTOR_VALID(&bLocal_396))
			{
				Function_360(&bLocal_396, &iLocal_4 + 624[4], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
			}
			Function_358(&uLocal_718, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000000:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP() - SID_FIRST_STAGE");
			return 1;
			break;
		
		case 0x00000001:
			Function_347(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_227(&iLocal_4 + 680[0]);
			Function_345(StackVal, &iLocal_354, Function_227(&iLocal_4 + 680[0]), &iLocal_4 + 560[1], 0, 0, 0, 0, 1, 1);
			if (GET_MOUNT(&Global_54076) != &bLocal_398)
			{
				bLocal_398 = GET_MOUNT(&Global_54076);
			}
			Function_358(&uLocal_718, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000002:
			Function_347(0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_227(&iLocal_4 + 824[0]);
			Function_345(StackVal, &iLocal_354, Function_227(&iLocal_4 + 824[0]), &iLocal_4 + 560[2], 0, 0, 0, 0, 1, 1);
			if (IS_ACTOR_VALID(&bLocal_394))
			{
				bLocal_502 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
				TASK_PRIORITY_SET(&bLocal_394, true);
				TASK_SEQUENCE_RELEASE(bLocal_502, 1);
			}
			Function_358(&uLocal_718, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000003:
			GET_OBJECT_POSITION(&bLocal_400, &Local_499);
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[3]);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[3]);
			if (IS_ACTOR_HOGTIED(&bLocal_400))
			{
				FREE_FROM_HOGTIE(&bLocal_400);
			}
			DELETE_ACCESSORY("WRIST_BIND", &bLocal_400);
			DELETE_ACCESSORY("ANKLE_BIND", &bLocal_400);
			ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 3, 1);
			ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 18, false);
			ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 17, true);
			Function_347(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_227(&iLocal_4 + 896[0]);
			Function_345(StackVal, &iLocal_354, Function_227(&iLocal_4 + 896[0]), &iLocal_4 + 560[3], 0, 0, 0, 0, 1, 1);
			Function_358(&uLocal_718, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000065:
			Function_347(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_227(&iLocal_4 + 984[0]);
			Function_345(StackVal, &iLocal_354, Function_227(&iLocal_4 + 984[0]), &iLocal_4 + 560[4], 0, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			LOG_ERROR("CUTSCENE_CUSTOM_SETUP() - DEFAULT???");
			return 1;
			break;
	}
	return 0;
}

void Function_345(int iParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x110BB / 69819
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&iParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &iParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_346(&uVar1, &iParam0);
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

void Function_346(var uParam0, float fParam1) //Position: 0x1135B / 70491
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

void Function_347(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x113DD / 70621
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	iParam1 = &iParam1;
	if (&bParam6)
	{
		UI_PUSH("nCutscenes");
	}
	HUD_CLEAR_HELP();
	UI_DUMP_MESSAGE_QUEUE_TO_NOTES(1);
	HUD_ENABLE(0);
	Function_257();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_50();
		if (IS_ACTOR_VALID(&bVar1))
		{
			if (GET_WEAPON_IN_HAND(&bVar1) != 4294967295)
			{
				Global_119938 = 1;
			}
			else
			{
				Global_119938 = 0;
			}
			if (&bParam3)
			{
				TASK_CLEAR(&bVar1);
			}
			if (&bParam11)
			{
				uVar2 = GET_ATTACHED_HOGTIE_VICTIM(&bVar1);
				if (IS_ACTOR_VALID(&uVar2))
				{
					FREE_FROM_HOGTIE(&uVar2);
					HOGTIE_ACTOR(&uVar2);
				}
			}
			if (bParam0)
			{
				ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
			}
			if (&bParam2)
			{
				SET_PLAYER_POSTURE(0, 0, 0);
				TASK_OVERRIDE_SET_POSTURE(&bVar1, 0);
			}
			SET_ACTOR_HEALTH(&bVar1, GET_ACTOR_MAX_HEALTH(&bVar1));
			SET_ACTOR_INVULNERABILITY(&bVar1, 1);
			AI_IGNORE_ACTOR(&bVar1);
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
				Function_349(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_349(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_88(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_348()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_348()));
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
	if (Function_334(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x4000000);
	}
	if (Function_334(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_167(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_348() //Position: 0x1168F / 71311
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

struct<8> Function_349(bool bParam0) //Position: 0x1171D / 71453
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_350(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1172F / 71471
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
	if (bParam2 != Global_53524.f_48 && !Function_357())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_356(0);
	Function_355();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_95())
	{
		Function_353(bParam2);
	}
	Function_352(uParam3, iVar0, iVar1);
	Function_351();
}

void Function_351() //Position: 0x117D8 / 71640
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

void Function_352(int iParam0, bool bParam1, bool bParam2) //Position: 0x11819 / 71705
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
	if (Function_84(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_43();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_353(bool bParam0) //Position: 0x11982 / 72066
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_354() };
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

struct<16> Function_354() //Position: 0x11B1A / 72474
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

void Function_355() //Position: 0x11B60 / 72544
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_356(bool bParam0) //Position: 0x11B84 / 72580
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

bool Function_357() //Position: 0x11BB3 / 72627
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_358(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11BCE / 72654
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_359(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_359(int iParam0) //Position: 0x11BF8 / 72696
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

void Function_360(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x1214D / 74061
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

void Function_361(int iParam0) //Position: 0x1225D / 74333
{
	if (!Function_297(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_186(1, 0, 1);
		}
	}
	return;
}

bool Function_362(bool bParam0) //Position: 0x12279 / 74361
{
	if (!Function_84(bParam0))
	{
		return 1;
	}
	return Function_164(&(Global_43791[bParam0]), 4);
}

void Function_363() //Position: 0x12295 / 74389
{
	Function_167(114693);
	Function_364(265);
	return;
}

void Function_364(int iParam0) //Position: 0x122A8 / 74408
{
	Function_365(&Global_43580, iParam0);
	return;
}

void Function_365(var uParam0, var uParam1) //Position: 0x122B6 / 74422
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_366() //Position: 0x122DE / 74462
{
	if ((iLocal_369 < 3 && iLocal_369 > 105) && iLocal_369 == 16)
	{
		Function_407();
		Function_403();
	}
	switch (iLocal_369)
	{
		case 0x00000000:
			if (Function_398())
			{
				if (iLocal_405[2] == 0)
				{
					Function_240(&bLocal_463);
					iLocal_369 = 1;
				}
				else
				{
					Function_240(&bLocal_463);
					iLocal_369 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_362(Global_46796[4]))
			{
				Function_240(&bLocal_463);
				iLocal_369 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, Local_356, bLocal_368))
			{
				Function_240(&bLocal_463);
				iLocal_369 = 3;
			}
			else
			{
				Function_240(&bLocal_463);
				iLocal_369 = 4;
			}
			Function_253(bLocal_368);
			Function_350(StackVal, Function_253(bLocal_368), bLocal_368, Global_46736[1], Function_255(bLocal_368), 0);
			break;
		
		case 0x00000003:
			if (IS_ACTOR_HOGTIE_ATTACHED(&bLocal_400) == 1)
			{
				if (!HUD_IS_FADED())
				{
					Function_242(1.0f, "Stage_Four().GID_CUTSCENE", 0x3f800000, 1);
				}
				else
				{
					DESTROY_ACTOR(&bLocal_400);
					Function_394();
					bLocal_400 = &iLocal_4 + 256[02];
					ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 17, true);
					Function_360(&bLocal_400, &iLocal_4 + 896[5], 1, 1, 1);
					HOGTIE_ACTOR(&bLocal_400);
					TASK_FLEE_ACTOR(&bLocal_400, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
					Function_302(1.0f, "Stage_Four().GID_CUTSCENE", 0x3f800000);
				}
			}
			else
			{
				Function_240(&bLocal_463);
				iLocal_369 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_285("$/cutscene/GRAVE01_CS02_Seq/GRAVE01_CS02_Seq", &iLocal_370, &Local_356, &bLocal_368, 68974, 68145, 62017, 59914, 58985, 58702, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_240(&bLocal_463);
				iLocal_369 = 4;
			}
			break;
		
		case 0x00000004:
			if (!Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, Local_356, bLocal_368))
			{
				Function_360(&Global_54076, &iLocal_4 + 896[1], 1, 1, 1);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				MEMORY_PREFER_WALKING(&bLocal_394, 0);
				TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
				Function_360(&bLocal_394, &iLocal_4 + 896[2], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
				Function_360(&bLocal_398, &iLocal_4 + 680[6], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
				Function_360(&bLocal_396, &iLocal_4 + 680[7], 1, 1, 1);
			}
			if (!iLocal_782)
			{
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 0,75f, 1);
				ACTOR_POP_NEXT_GAIT(&bLocal_394, 1, 0);
				iLocal_782 = 1;
			}
			if (!iLocal_776)
			{
				ADD_ITEM("PARDON_LETTER", &Global_54076, 1);
				iLocal_776 = 1;
			}
			Function_360(&bLocal_400, &iLocal_4 + 896[5], 1, 1, 1);
			HOGTIE_ACTOR(&bLocal_400);
			TASK_FLEE_ACTOR(&bLocal_400, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			if (DECOR_CHECK_EXIST(&bLocal_400, "bDisableCutFree"))
			{
				DECOR_REMOVE(&bLocal_400, "bDisableCutFree");
			}
			ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 17, false);
			ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 18, true);
			Function_210(&bLocal_400);
			SET_MOVER_FROZEN(&bLocal_400, 1);
			DECOR_SET_BOOL(&bLocal_400, "ActionArea_DisableHogtie", 1);
			Function_393(&(Local_557[215]));
			if (!IS_DOOR_VALID(&bLocal_747))
			{
				bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
			}
			CLOSE_DOOR(&bLocal_747, 1.0f);
			if (!IS_DOOR_VALID(&uLocal_749))
			{
				uLocal_749 = Function_236(Global_46796[4], "benedictPoint", "trainStation01", 1);
			}
			Function_159(&uLocal_749, 0);
			OPEN_DOOR_DIRECTION_FAST(&uLocal_749, 0);
			bLocal_402 = Function_390(&Global_11492, &Global_13504, 1, 1, 0, 1);
			if (IS_ACTOR_VALID(&bLocal_402))
			{
				Function_360(&bLocal_402, &iLocal_4 + 896[6], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_402, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_402, 2);
			}
			Function_358(&uLocal_718, 1, 0, 4294967295, 4294967295);
			Function_240(&bLocal_463);
			iLocal_369 = 5;
			break;
		
		case 0x00000005:
			if (Function_314(&bLocal_463, 0.0f))
			{
				if (HUD_IS_FADED())
				{
					Function_302(1.0f, "Stage_Four().GID_FADE_IN", 0x3f800000);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_CLEAR(&Global_54076);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 1);
				Function_240(&bLocal_463);
				iLocal_369 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_796 = 0;
				Function_240(&bLocal_463);
				iLocal_369 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_367())
			{
				Function_240(&bLocal_463);
				Function_240(&bLocal_467);
				Function_240(&bLocal_471);
				iLocal_369 = 105;
			}
			break;
		
		case 0x00000069:
			Function_242(1.0f, "Stage_Four().GID_FADE_OUT", 0x3f800000, 1);
			Function_240(&bLocal_463);
			iLocal_369 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 0);
				iLocal_405[3] = 1;
				Function_240(&bLocal_463);
				bLocal_368 = 101;
				iLocal_369 = 0;
			}
			break;
	}
	return;
}

bool Function_367() //Position: 0x12849 / 75849
{
	bLocal_502 = (GET_NUM_PATH_POINTS(&iLocal_4 + 1376) - 1);
	GET_PATH_POINT(&iLocal_4 + 1328, bLocal_502, &Local_499);
	Function_385(StackVal, "$/cutscene/GRAVE01_CS04_F/GRAVE01_CS04_F", &uLocal_717, Local_499, 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
	Global_42258 = (GET_CURRENT_GAME_TIME() + 1.0f);
	switch (iLocal_796)
	{
		case 0x00000000:
			Function_311(1, 1, 1);
			Function_382();
			Function_240(&bLocal_475);
			iLocal_792 = 0;
			iLocal_796 = 2;
			break;
		
		case 0x00000001:
			Function_372(&bLocal_471, 60.0f, 200.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 1, &iLocal_4, &iLocal_354, 330, 1, 0);
			if (iLocal_801 == 5)
			{
				iLocal_796 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_314(&bLocal_475, 3.0f))
			{
				Function_257();
				Function_371("Grave01_FOLLOW_SETH_telegraph", 7,5f, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 432[1], 346, 0f, 2, 0);
				Function_241(&bLocal_771, 7.0f);
				iLocal_802 = 0;
				iLocal_796 = 3;
			}
			break;
		
		case 0x00000003:
			Function_370();
			if (!Function_372(&bLocal_471, 60.0f, 200.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 1, &iLocal_4, &iLocal_354, 330, 1, 0))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 504[2]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 504[2]))
					{
						Function_240(&bLocal_475);
						iLocal_796 = 4;
					}
				}
			}
			break;
		
		case 0x00000004:
			Function_371("Grave01_obj03b", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_230(1048576);
			iLocal_796 = 5;
			break;
		
		case 0x00000005:
			Function_370();
			if (!Function_372(&bLocal_471, 60.0f, 200.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 0, 0, 0, 4294967295, 1, 0))
			{
				if (Function_239(StackVal) < 0)
				{
					SAY_SINGLE_LINE_CONTEXT(&bLocal_402, 88, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
					TASK_STAND_STILL(&bLocal_402, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_402, true);
					Global_42257 = (GET_CURRENT_GAME_TIME() + 300.0f);
					Function_240(&bLocal_739);
					Function_240(&bLocal_475);
					iLocal_796 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID(&iLocal_4 + 504[4]))
			{
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 504[4]))
				{
					iLocal_796 = 7;
					return 1;
				}
				if (Function_368(&bLocal_475, 10.0f))
				{
					DESTROY_VOLUME(&iLocal_4 + 504[4]);
					AI_GOAL_LOOK_CLEAR(&bLocal_394);
				}
			}
			else
			{
				iLocal_796 = 7;
				return 1;
			}
			break;
		
		case 0x00000007:
			return 1;
			break;
		
		case 0x00000008:
			break;
	}
	return 0;
}

bool Function_368(bool bParam0, float fParam1) //Position: 0x12B8B / 76683
{
	if (Function_314(&bParam0, fParam1))
	{
		Function_369(&bParam0);
		return 1;
	}
	return 0;
}

void Function_369(vector3 vParam0) //Position: 0x12BA5 / 76709
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_370() //Position: 0x12BBC / 76732
{
	if (!HUD_IS_SHOWING_HELP_TEXT() && Function_314(&bLocal_771, 10,5f))
	{
		switch (iLocal_802)
		{
			case 0x00000000:
				Function_137("Grave01_pay_bounty_help_1", 0x41200000, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				iLocal_802 = 1;
				break;
			
			case 0x00000001:
				Function_137("Grave01_pay_bounty_help_2", 0x41200000, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				iLocal_802 = 2;
				break;
			
			case 0x00000002:
				Function_137("Grave01_pay_bounty_help_3", 0x41200000, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				iLocal_802 = 5;
				break;
			
			case 0x00000005:
				return 1;
				break;
			}
	}
	return 0;
}

void Function_371(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x12C9D / 76957
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
			Var0 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

bool Function_372(struct<2> Param0, bool bParam2, int iParam3, float fParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x12D32 / 77106
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_379(&Global_54076, &iParam3, bParam2))
	{
		Function_247(&bParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_379(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_378(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_371(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_377(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_376(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_376(&iParam9, 0, 15, 1, &iParam3);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam3, &iParam10, 0f, 2, 0);
				if (IS_STRING_VALID(&iParam12))
				{
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iParam3), &iParam12);
				}
				DECOR_SET_BOOL(&iParam3, "MODR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_378(1))
	{
		Function_375(1);
		if (!Function_374())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_373();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_376(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_376(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_373() //Position: 0x12EDB / 77531
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

bool Function_374() //Position: 0x12F09 / 77577
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

void Function_375(bool bParam0) //Position: 0x12F50 / 77648
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

void Function_376(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12FB7 / 77751
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

void Function_377(bool bParam0) //Position: 0x13072 / 77938
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_76(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_378(bool bParam0) //Position: 0x130D9 / 78041
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

bool Function_379(int iParam0, var uParam1, float fParam2) //Position: 0x13123 / 78115
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_381(&iParam0);
			Function_380(&uParam1);
			if (VDIST(Function_381(&iParam0), Function_380(&uParam1)) >= fParam2)
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

struct<8> Function_380(int iParam0) //Position: 0x13241 / 78401
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

struct<8> Function_381(var uParam0) //Position: 0x132AF / 78511
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

void Function_382() //Position: 0x1331B / 78619
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_NoFollowTeleOffice", "Grave01_NoFollowTeleOffice", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_383(int iParam0) //Position: 0x13378 / 78712
{
	Function_384(0, &Global_54076, iParam0, 0);
	Function_384(1, &bLocal_394, iParam0, 0);
	Function_384(2, &iLocal_4 + 160[12], iParam0, 0);
	Function_384(3, &iLocal_4 + 160[02], iParam0, 0);
	Function_384(4, &bLocal_400, iParam0, 0);
	return;
}

void Function_384(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x133BD / 78781
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_144(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

int Function_385(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x133E5 / 78821
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_388(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_389()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					Function_386();
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
	else if ((!Function_388(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_389()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_388(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_386() //Position: 0x1364D / 79437
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
			Function_387(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_387(char* cParam0) //Position: 0x136A1 / 79521
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

bool Function_388(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x137CA / 79818
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_381(&bParam0);
		if (VDIST(Function_381(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_389() //Position: 0x13856 / 79958
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

var Function_390(struct<2>[] Param0, vector3[] vParam1, int iParam2, int iParam3, bool bParam4, bool bParam5) //Position: 0x13865 / 79973
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_223(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_223(&(Param0[iVar02]), 2))
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
			if (!Function_223(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_220(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || iParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_392(StackVal, &Global_10996, Function_54(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_223(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 1, false);
				Function_220(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_220(&(Param0[iVar02]), 1);
	Function_391(&vParam1[iVar03] + 16, 1);
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

int Function_391(int iParam0, bool bParam1) //Position: 0x13A2C / 80428
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

var Function_392(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0x13ADE / 80606
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

void Function_393(struct<69> Param0) //Position: 0x13C05 / 80901
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

void Function_394() //Position: 0x13CC5 / 81093
{
	(&iLocal_4 + 256[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Moses", 653, Vector(-3668,238f, 7,916771f, 3490,479f), Vector(0.0f, 106,5384f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 256[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 256[02]);
	TASK_STAND_STILL(&iLocal_4 + 256[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 256[02], 21);
	SET_ACTOR_HEALTH(&iLocal_4 + 256[02], 22.0f);
	Function_395(&iLocal_4 + 256[02]);
	AI_IGNORE_ACTOR(&iLocal_4 + 256[02]);
	return;
}

void Function_395(int iParam0) //Position: 0x13D5D / 81245
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

bool Function_396(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6) //Position: 0x13D94 / 81300
{
	if (Function_397(&iParam0) == bParam6 || Function_357())
	{
		return 1;
	}
	return 0;
}

int Function_397(int iParam0) //Position: 0x13DB3 / 81331
{
	if (Function_297(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

bool Function_398() //Position: 0x13DCC / 81356
{
	Function_399(0);
	SET_ACTOR_INVULNERABILITY(&Global_54076, 0);
	SET_ACTOR_HEALTH(&bLocal_394, GET_ACTOR_MAX_HEALTH(&bLocal_394));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_394, 1);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_215(&bLocal_398);
	if (iLocal_405[2] == 0)
	{
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			Function_242(0.0f, "GRAVE01_INIT_STAGE_FOUR()", 0x3f800000, 1);
		}
		if (!Function_362(Global_46796[4]))
		{
			Function_361(&Local_356);
		}
		Function_363();
		TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
		MEMORY_PREFER_RIDING(&bLocal_394, false);
		TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_394);
		ACTOR_DISMOUNT_NOW(&Global_54076);
		Function_360(&Global_54076, &iLocal_4 + 896[1], 1, 1, 1);
		ACTOR_DISMOUNT_NOW(&bLocal_394);
		Function_360(&bLocal_394, &iLocal_4 + 896[2], 1, 1, 1);
		Function_360(&bLocal_398, &iLocal_4 + 896[3], 1, 1, 1);
		Function_360(&bLocal_396, &iLocal_4 + 896[4], 1, 1, 1);
		Function_208(&iLocal_354);
		Function_208(&iLocal_4);
		if (!IS_ACTOR_VALID(&iLocal_4 + 256[02]))
		{
			Function_394();
			bLocal_400 = &iLocal_4 + 256[02];
			ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 18, true);
			HOGTIE_ACTOR(&bLocal_400);
			TASK_FLEE_ACTOR(&bLocal_400, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
		}
		if (!ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
		{
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
		}
		if (Function_239(StackVal) < 0)
		{
			Function_238(StackVal, Global_41252[1711].f_40);
			LOG_ERROR("Fake bounty added for Stage_Four");
		}
	}
	return 1;
}

void Function_399(bool bParam0) //Position: 0x13F91 / 81809
{
	Function_400(0, 0x40400000);
	Function_201();
	Function_200();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_400(float fParam0, float fParam1) //Position: 0x13FC7 / 81863
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
	Function_402();
	Function_401();
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

void Function_401() //Position: 0x140DB / 82139
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_402() //Position: 0x1410F / 82191
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

void Function_403() //Position: 0x14215 / 82453
{
	if (IS_ACTOR_VALID(&bLocal_400))
	{
		if (!IS_ACTOR_HOGTIED(&bLocal_400))
		{
			if (IS_MOVER_FROZEN(&bLocal_400))
			{
				SET_MOVER_FROZEN(&bLocal_400, 0);
			}
		}
		if (iLocal_792 > 0)
		{
			if (IS_ACTOR_HOGTIED(&bLocal_400))
			{
				if (Function_406(&bLocal_400, 1.0f, 18.0f, 1, 1, 0))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_368(&bLocal_727, 9.0f))
						{
							Function_405();
							Function_240(&bLocal_727);
						}
					}
				}
			}
		}
		if (!iLocal_777)
		{
			if (Function_404(&bLocal_400, &Global_54076))
			{
				Function_115(4294967246, 1, 0);
				iLocal_777 = 1;
			}
		}
	}
	return;
}

bool Function_404(int iParam0, int iParam1) //Position: 0x142A5 / 82597
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
	{
		if (IS_ACTOR_DEAD(&iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void Function_405() //Position: 0x142DB / 82651
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Grave01_PleadsJon", "Grave01_PleadsJon", 0, 1, 1, 0, 1);
		Function_383(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_406(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x14327 / 82727
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &bParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_407() //Position: 0x14347 / 82759
{
	var uVar0;
	
	if (!IS_ACTOR_VALID(&bLocal_402))
	{
		bLocal_402 = Function_390(&Global_11492, &Global_13504, 1, 1, 0, 1);
		if (IS_ACTOR_VALID(&bLocal_402))
		{
			Function_412(&(Local_557[315]), &bLocal_402, "grave01_railman", 0, 0x5f5e100, 1);
			Function_360(&bLocal_402, &iLocal_4 + 896[6], 1, 1, 1);
			TASK_STAND_STILL(&bLocal_402, -1.0f, 0, 0);
			TASK_PRIORITY_SET(&bLocal_402, 2);
		}
	}
	else if (IS_VOLUME_VALID(&iLocal_4 + 504[1]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 504[1]))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				SAY_SINGLE_LINE_CONTEXT(&bLocal_402, 43, &Global_54076, 1, 0, 1, 4294967295, 4294967295, 0, 1);
				DESTROY_VOLUME(&iLocal_4 + 504[1]);
			}
		}
	}
	if (iLocal_792 != 2 || iLocal_792 != 3)
	{
		if (iLocal_796 == 5)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_411(&Global_54076, &bLocal_394, 6.0f))
				{
					if (IS_VOLUME_VALID(&iLocal_4 + 504[3]))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 504[3]))
						{
							Function_410();
							DESTROY_VOLUME(&iLocal_4 + 504[3]);
							Function_240(&bLocal_739);
						}
					}
					else if (Function_314(&bLocal_739, 9.0f))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 504[2]))
						{
							Function_409();
							Function_240(&bLocal_739);
						}
						else
						{
							Function_408();
							Function_240(&bLocal_739);
						}
					}
				}
			}
		}
	}
	switch (iLocal_792)
	{
		case 0x00000000:
			bLocal_502 = TASK_SEQUENCE_OPEN();
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1376, 1, 0, 0, 1, false);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
			TASK_PRIORITY_SET(&bLocal_394, true);
			TASK_SEQUENCE_RELEASE(bLocal_502, 1);
			iLocal_792 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&bLocal_394, 0) == 0)
			{
				if (!Function_388(StackVal, &bLocal_394, *(&iLocal_4 + 1240[03]), 2.0f))
				{
					iLocal_792 = 0;
				}
				else
				{
					GET_OBJECT_POSITION(&iLocal_4 + 896[6], &uVar0);
					TASK_FACE_COORD(&bLocal_394, &uVar0, 1);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_394, &Global_54076, -1f, 0);
					iLocal_792 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (GET_TASK_STATUS(&bLocal_394, 23) == 0)
			{
				TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
				Function_369(&bLocal_739);
				iLocal_792 = 3;
			}
			break;
		
		case 0x00000003:
			if (iLocal_796 == 6)
			{
				PRINTSTRING("wait for wave ");
				if (Function_294(&bLocal_739))
				{
					PRINTFLOAT(Function_292(&bLocal_739));
				}
				else
				{
					PRINTSTRING("START!!!");
				}
				PRINTNL();
				if (Function_314(&bLocal_739, 3.0f))
				{
					SET_ANIM_SET_FOR_ACTOR(&bLocal_394, "wave", 0);
					bLocal_502 = TASK_SEQUENCE_OPEN();
					TASK_ACTION_PERFORM(0, "wave/forward");
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
					TASK_PRIORITY_SET(&bLocal_394, true);
					TASK_SEQUENCE_RELEASE(bLocal_502, 1);
					Function_240(&bLocal_739);
				}
			}
			if (iLocal_796 == 7)
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 1);
				bLocal_502 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(0, &iLocal_4 + 984[3], 2.0f, 1, 0, 1);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
				TASK_SEQUENCE_RELEASE(bLocal_502, 1);
				iLocal_792 = 4;
			}
			break;
		
		case 0x00000004:
			break;
	}
	return;
}

void Function_408() //Position: 0x14671 / 83569
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_LeavesTeleOfficeBounty", "Grave01_LeavesTeleOfficeBounty", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_409() //Position: 0x146D6 / 83670
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_WaitingClearBountySeth", "Grave01_WaitingClearBountySeth", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_410() //Position: 0x1473B / 83771
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ClearBountySeth", "Grave01_ClearBountySeth", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_411(var uParam0, bool bParam1, bool bParam2) //Position: 0x14792 / 83858
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &bParam1, bParam2))
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

int Function_412(struct<69> Param0) //Position: 0x148A7 / 84135
{
	if (!Function_418(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_417(&Param0, &bParam2))
	{
		return 0;
	}
	Function_416(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_413(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_413(var uParam0, int iParam1, int iParam2) //Position: 0x148ED / 84205
{
	if (iParam1 != 100000000)
	{
		Function_415(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_414(&uParam0, &iParam2);
	}
	return;
}

void Function_414(struct<69> Param0) //Position: 0x14914 / 84244
{
	Param0.f_68 = 0;
	Function_415(&Param0, 2, &bParam1);
	Function_415(&Param0, 4, &bParam1);
	Function_415(&Param0, 8, &bParam1);
	Function_415(&Param0, 16, &bParam1);
	Function_415(&Param0, 32, &bParam1);
	Function_415(&Param0, 64, &bParam1);
	Function_415(&Param0, 128, &bParam1);
	Function_415(&Param0, 256, &bParam1);
	Function_415(&Param0, 512, &bParam1);
	Function_415(&Param0, 1024, &bParam1);
	return;
}

void Function_415(int iParam0, int iParam1, bool bParam2) //Position: 0x1498F / 84367
{
	bool bVar0;
	
	Function_76(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_76(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_38(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_76(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_416(char* cParam0) //Position: 0x149CE / 84430
{
	cParam0.f_64 = iParam1;
	return;
}

bool Function_417(int iParam0, char* cParam1) //Position: 0x149DB / 84443
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

bool Function_418(struct<61> Param0) //Position: 0x14A68 / 84584
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

void Function_419() //Position: 0x14C1B / 85019
{
	if (iLocal_369 < 3 && iLocal_369 > 105)
	{
		Function_447();
		Function_435();
		Function_426();
	}
	switch (iLocal_369)
	{
		case 0x00000000:
			if (Function_425())
			{
				Function_240(&bLocal_463);
				iLocal_369 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_362(Global_46796[4]))
				{
					iLocal_788 = 0;
					Function_240(&bLocal_463);
					iLocal_369 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_421())
			{
				if (Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, Local_356, bLocal_368))
				{
					GET_OBJECT_POSITION(&bLocal_400, &Local_499);
					Function_212();
					STREAMING_LOAD_SCENE_EXT(Local_499, Function_212(), 0);
					Function_240(&bLocal_463);
					iLocal_369 = 3;
				}
				else
				{
					Function_360(&Global_54076, &iLocal_4 + 824[1], 1, 1, 1);
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					Function_360(&bLocal_394, &iLocal_4 + 824[3], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
					Function_360(&bLocal_400, &iLocal_4 + 824[5], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_400, -1.0f, 0, 0);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(&Global_54076);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 21, 0);
					if (HUD_IS_FADED())
					{
						Function_302(1.0f, "Stage_Three().GID_POST_STREAMING", 0x3f800000);
					}
					Function_240(&bLocal_463);
					iLocal_369 = 4;
				}
				Function_253(bLocal_368);
				Function_350(StackVal, Function_253(bLocal_368), bLocal_368, Global_46736[1], Function_255(bLocal_368), 0);
			}
			break;
		
		case 0x00000003:
			if (Function_285("$/cutscene/GRAVE01_CS04_C_Seq/GRAVE01_CS04_C_Seq", &iLocal_370, &Local_356, &bLocal_368, 68974, 68145, 62017, 59914, 58985, 58702, 0, 1, 1, 2, 2, 0, 1))
			{
				STREAMING_UNLOAD_SCENE();
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 0);
				Function_240(&bLocal_463);
				iLocal_369 = 4;
			}
			break;
		
		case 0x00000004:
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_CLEAR(&Global_54076);
			if (HUD_IS_FADED())
			{
				Function_302(1.0f, "Stage_Three().GID_POST_CUTSCENE", 0x3f800000);
			}
			Function_240(&bLocal_463);
			iLocal_369 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_795 = 9;
				iLocal_791 = 0;
				iLocal_803 = 3;
				Function_240(&bLocal_463);
				iLocal_369 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_426())
			{
				if (IS_ACTOR_VALID(&bLocal_394))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_394, "stand_ambient", 0);
					bLocal_502 = TASK_SEQUENCE_OPEN();
					TASK_STAND_STILL(false, -1.0f, 0, 0);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
					TASK_PRIORITY_SET(&bLocal_394, true);
					TASK_SEQUENCE_RELEASE(bLocal_502, 1);
				}
				Function_420(&iLocal_780);
				Function_240(&bLocal_463);
				iLocal_369 = 106;
			}
			break;
		
		case 0x0000006A:
			iLocal_405[2] = 1;
			Function_240(&bLocal_463);
			bLocal_368 = 3;
			iLocal_369 = 0;
			break;
	}
	return;
}

void Function_420(int iParam0) //Position: 0x14F20 / 85792
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (DECOR_CHECK_EXIST(&iParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&iParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&iParam0, "voldestroy"))
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
		DESTROY_OBJECT(&iParam0);
	}
	return;
}

bool Function_421() //Position: 0x14FB6 / 85942
{
	switch (iLocal_788)
	{
		case 0x00000000:
			if (!IS_ACTOR_VALID(&iLocal_4 + 256[02]))
			{
				Function_394();
				bLocal_400 = &iLocal_4 + 256[02];
				ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 17, true);
				Function_412(&(Local_557[215]), &bLocal_400, "grave01_informant", 1, 0x5f5e100, 1);
				Function_423(&(Local_557[215]), 1480);
			}
			if (SQUAD_IS_VALID(&iLocal_4 + 200))
			{
				Function_422(&iLocal_4 + 200, 0, 0);
			}
			iLocal_788 = 1;
			break;
		
		case 0x00000001:
			if (iLocal_405[1] == 0)
			{
				ACTOR_DISMOUNT_NOW(&bLocal_394);
				MEMORY_CLEAR_ALL(&bLocal_394);
				TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
				Function_360(&bLocal_394, &iLocal_4 + 824[2], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_400, -1.0f, 0, 0);
				Function_360(&bLocal_400, &iLocal_4 + 824[4], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
				Function_360(&bLocal_398, &iLocal_4 + 896[3], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
				Function_360(&bLocal_396, &iLocal_4 + 896[4], 1, 1, 1);
			}
			iLocal_788 = 2;
			break;
		
		case 0x00000002:
			if (!IS_DOOR_VALID(&bLocal_747))
			{
				bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
			}
			iLocal_788 = 3;
			break;
		
		case 0x00000003:
			iLocal_788 = 4;
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

void Function_422(var uParam0, bool bParam1, bool bParam2) //Position: 0x15136 / 86326
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
				if (!Function_406(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_423(int iParam0, int iParam1) //Position: 0x151BF / 86463
{
	if (iParam1 != 100000000)
	{
		Function_424(&iParam0, iParam1);
	}
	else
	{
		Function_414(&iParam0, 1);
	}
	return;
}

void Function_424(int iParam0, bool bParam1) //Position: 0x151E1 / 86497
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_76(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

bool Function_425() //Position: 0x1520E / 86542
{
	if (!iLocal_405[1])
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			Function_242(0.0f, "GRAVE01_INIT_STAGE_THREE()", 0x3f800000, 1);
		}
		bLocal_404 = Global_46796[4];
		if (!Function_362(bLocal_404))
		{
			Function_361(&Local_356);
		}
		TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_394);
		Function_360(&Global_54076, &iLocal_4 + 824[0], 1, 1, 1);
		if (!ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
		{
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
		}
		if (Function_239(StackVal) < 0)
		{
			Function_238(StackVal, Global_41252[1711].f_40);
			LOG_ERROR("Fake bounty added for Stage_Three");
		}
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
	{
		DESTROY_ACTOR(&iLocal_4 + 160[02]);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
	{
		DESTROY_ACTOR(&iLocal_4 + 160[12]);
	}
	TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
	Function_399(0);
	Function_208(&iLocal_354);
	Function_208(&iLocal_4);
	Function_215(&bLocal_398);
	SET_ACTOR_HEALTH(&bLocal_394, GET_ACTOR_MAX_HEALTH(&bLocal_394));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_394, 1);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_363();
	if (GET_MOST_RECENT_MOUNT(&Global_54076) == &iLocal_4 + 280[22])
	{
		*(&iLocal_4 + 280[22]) = &iLocal_4 + 280[12];
		*(&iLocal_4 + 280[12]) = GET_MOST_RECENT_MOUNT(&Global_54076);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 280[22]))
	{
		DESTROY_ACTOR(&iLocal_4 + 280[22]);
	}
	if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 560[2]))
	{
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[2]);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[2]);
		CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 560[2], 15);
		DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 560[2]);
	}
	return 1;
}

bool Function_426() //Position: 0x153FA / 87034
{
	var uVar0;
	
	Function_227(&iLocal_4 + 896[8]);
	Function_385(StackVal, "$/cutscene/GRAVE01_CS02_Seq/GRAVE01_CS02_Seq", &uLocal_717, Function_227(&iLocal_4 + 896[8]), 0, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
	if (!DECOR_CHECK_EXIST(&iLocal_354, "m_tObjectiveTimer"))
	{
		DECOR_SET_FLOAT(&iLocal_354, "m_tObjectiveTimer", GET_CURRENT_GAME_TIME());
	}
	if (!IS_ACTOR_ALIVE(&bLocal_400))
	{
		bLocal_383 = true;
		Function_247("Grave01_informant_killed");
	}
	else
	{
		switch (iLocal_795)
		{
			case 0x00000000:
			case 0x00000009:
				Function_257();
				Function_371("Grave01_obj07b", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_400)))
				{
					if (!IS_DOOR_VALID(&bLocal_747))
					{
						bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
					}
					if (IS_DOOR_LOCKED(&bLocal_747))
					{
						OPEN_DOOR_DIRECTION(&bLocal_747, 1);
						SET_DOOR_LOCK(&bLocal_747, 0);
					}
					ADD_BLIP_FOR_OBJECT(&bLocal_400, 322, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_400), "Grave01_blip_moses");
				}
				Function_311(1, 0, 1);
				DECOR_SET_FLOAT(&iLocal_354, "m_tObjectiveTimer", GET_CURRENT_GAME_TIME());
				Function_395(&bLocal_400);
				DECOR_SET_BOOL(&bLocal_400, "bDisableCutFree", 1);
				DECOR_SET_BOOL(&bLocal_400, "Mission_RemoveWhenHogtied", 1);
				Function_358(&uLocal_718, 25, 0, 4294967295, 4294967295);
				iLocal_795 = 10;
				break;
			
			case 0x0000000A:
				if (!IS_ACTOR_HOGTIED(&bLocal_400))
				{
					uVar0 = "grave01_informant_escaped";
				}
				else
				{
					uVar0 = "grave01_informant_abandoned";
				}
				if (!Function_434(&bLocal_471, 60.0f, 200.0f, &bLocal_400, "Moses_escaping", &uVar0, &bLocal_383, 0, 0, 0, 325, 1))
				{
					if (!iLocal_766)
					{
						if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_354, "m_tObjectiveTimer")) < 3.0f)
						{
							if (GET_PLAYER_COMBATMODE() == 1)
							{
								Function_137("Grave01_lasso_tut_1_expert", 0x41200000, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_137("Grave01_lasso_tut_1", 0x41200000, 1, 0, 2, 1, 0);
							}
							iLocal_766 = 1;
						}
					}
					if (!iLocal_759)
					{
						if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
						{
							if (GET_LASSO_TARGET(&Global_54076) != &bLocal_400)
							{
								Function_137("Grave01_wrong_lasso_target", 0x41200000, 1, 0, 2, 1, 0);
								iLocal_759 = 1;
							}
						}
					}
					if (IS_ACTOR_HOGTIED(&bLocal_400))
					{
						iLocal_795 = 15;
					}
					else if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
					{
						if (GET_LASSO_TARGET(&Global_54076) == &bLocal_400)
						{
							Function_433();
							Function_240(&bLocal_727);
							iLocal_795 = 13;
						}
					}
				}
				break;
			
			case 0x0000000D:
				Function_257();
				Function_371("Grave01_obj07c", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_400)))
				{
					if (!IS_DOOR_VALID(&bLocal_747))
					{
						bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
					}
					if (IS_DOOR_LOCKED(&bLocal_747))
					{
						OPEN_DOOR_DIRECTION(&bLocal_747, 1);
						SET_DOOR_LOCK(&bLocal_747, 0);
					}
					ADD_BLIP_FOR_OBJECT(&bLocal_400, 322, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_400), "Grave01_blip_moses");
				}
				if (!iLocal_764)
				{
					iLocal_764 = 1;
					iLocal_799 = 0;
				}
				iLocal_795 = 14;
				break;
			
			case 0x0000000E:
				Function_432();
				if (Function_431(&bLocal_400) || IS_ACTOR_HOGTIED(&bLocal_400))
				{
					SET_ACTOR_HEALTH(&bLocal_400, GET_ACTOR_MAX_HEALTH(&bLocal_400));
					Function_257();
					Function_430();
					Function_240(&bLocal_727);
					iLocal_795 = 15;
				}
				else if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
				{
					if (!iLocal_767)
					{
						Function_137("grave01_lasso_tut_2", 0x41200000, 1, 0, 2, 1, 0);
						iLocal_767 = 1;
					}
					iLocal_795 = 9;
				}
				break;
			
			case 0x0000000F:
				if (IS_ACTOR_HOGTIED(&bLocal_400) && !DECOR_CHECK_EXIST(&bLocal_400, "Mission_RemoveWhenHogtied"))
				{
					Function_257();
					Function_371("Grave01_obj07d", 0x40f00000, 1, 2, 0, 0, 0, 0);
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_400)))
					{
						if (!IS_DOOR_VALID(&bLocal_747))
						{
							bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
						}
						if (IS_DOOR_LOCKED(&bLocal_747))
						{
							OPEN_DOOR_DIRECTION(&bLocal_747, 1);
							SET_DOOR_LOCK(&bLocal_747, 0);
						}
						ADD_BLIP_FOR_OBJECT(&bLocal_400, 322, 0f, 2, 0);
						SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_400), "Grave01_blip_moses");
					}
					Function_311(1, 0, 1);
					Function_358(&uLocal_718, 7, 0, 4294967295, 4294967295);
					iLocal_795 = 17;
				}
				else if (!IS_ACTOR_HOGTIED(&bLocal_400) && !(Function_431(&bLocal_400) || IS_ACTOR_HOGTIED(&bLocal_400)))
				{
					iLocal_795 = 9;
				}
				break;
			
			case 0x00000011:
				if ((GET_HOGTIED_MASTER(&bLocal_400) != &Global_54076 && !IS_ACTION_NODE_PLAYING(&Global_54076, "lasso_hogtie/pickup")) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					iLocal_795 = 18;
				}
				if (IS_ACTOR_HOGTIED(&bLocal_400))
				{
					if ((ACTORS_IN_RANGE(&bLocal_400, &bLocal_394, 6.0f) || IS_ACTOR_IN_VOLUME(&bLocal_400, &iLocal_4 + 472[0])) && ((iLocal_791 != 1 && Function_379(&bLocal_394, &iLocal_4 + 1216[0], 6.0f)) || iLocal_791 != 2))
					{
						return 1;
					}
				}
				break;
			
			case 0x00000012:
				Function_257();
				Function_371("Grave01_obj07e", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (!iLocal_765)
				{
					iLocal_765 = 1;
					iLocal_800 = 0;
				}
				if (IS_ACTOR_VALID(&bLocal_400))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_400)))
					{
						REMOVE_BLIP(GET_BLIP_ON_OBJECT(&bLocal_400));
					}
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_780)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_780));
				}
				Function_311(1, 1, 1);
				iLocal_795 = 19;
				break;
			
			case 0x00000013:
				Function_429();
				if (!GET_HOGTIED_MASTER(&bLocal_400) != &bLocal_398)
				{
					if (IS_ACTOR_HORSE(GET_HOGTIED_MASTER(&bLocal_400)))
					{
						bLocal_398 = GET_HOGTIED_MASTER(&bLocal_400);
					}
				}
				if ((ACTORS_IN_RANGE(&bLocal_400, &bLocal_394, 6.0f) || IS_ACTOR_IN_VOLUME(&bLocal_400, &iLocal_4 + 472[0])) && ((iLocal_791 != 1 && Function_379(&bLocal_394, &iLocal_4 + 1216[0], 6.0f)) || iLocal_791 != 2))
				{
					if (GET_HOGTIED_MASTER(&bLocal_400) == &Global_54076)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_394, "Grave01_JonArrivesMoses", Function_54(), 1, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
						Function_240(&bLocal_727);
						iLocal_795 = 22;
					}
					else if (GET_HOGTIED_MASTER(&bLocal_400) == &bLocal_398)
					{
						return 1;
					}
				}
				if (!GET_HOGTIED_MASTER(&bLocal_400) != &Global_54076 && !GET_HOGTIED_MASTER(&bLocal_400) != &bLocal_398)
				{
					iLocal_795 = 15;
				}
				else if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_400, 10.0f))
				{
					iLocal_795 = 20;
				}
				break;
			
			case 0x00000014:
				Function_257();
				Function_371("Grave01_return_to_informant", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_311(1, 0, 1);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&bLocal_400)))
				{
					if (!IS_DOOR_VALID(&bLocal_747))
					{
						bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
					}
					if (IS_DOOR_LOCKED(&bLocal_747))
					{
						OPEN_DOOR_DIRECTION(&bLocal_747, 1);
						SET_DOOR_LOCK(&bLocal_747, 0);
					}
					ADD_BLIP_FOR_OBJECT(&bLocal_400, 322, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&bLocal_400), "Grave01_blip_moses");
				}
				iLocal_795 = 21;
				break;
			
			case 0x00000015:
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_400, 6.0f))
				{
					iLocal_795 = 18;
				}
				break;
			
			case 0x00000016:
				Function_257();
				Function_371("Grave01_obj07f", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_780 = Function_428(&iLocal_354, "m_oGateway", &iLocal_4 + 472[0], &bLocal_400, 1, 330, 4294967295, 0, 0, 1);
				Function_311(1, 0, 1);
				iLocal_795 = 23;
				break;
			
			case 0x00000017:
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (Function_314(&bLocal_727, 9.0f))
					{
						if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_394, "Grave01_DropMosesFeet", Function_54(), 1, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
							Function_240(&bLocal_727);
						}
					}
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "DropVictim"))
				{
					if (DECOR_GET_BOOL(&Global_54076, "DropVictim"))
					{
						if (!Function_294(&bLocal_495))
						{
							Function_427(&bLocal_495);
						}
						PRINTSTRING("  * drop victim = TRUE: ");
						PRINTFLOAT(Function_292(&bLocal_495));
						PRINTNL();
					}
				}
				else if (GET_HOGTIED_MASTER(&bLocal_400) != "")
				{
					if (Function_294(&bLocal_495))
					{
						Function_369(&bLocal_495);
					}
				}
				if (GET_HOGTIED_MASTER(&bLocal_400) == "")
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					Function_369(&bLocal_495);
					return 1;
				}
				if (Function_314(&bLocal_495, 1.0f))
				{
					ABORT_SCRIPTED_CONVERSATION(0);
					return 1;
				}
				if (!(ACTORS_IN_RANGE(&bLocal_400, &bLocal_394, 6.0f) || IS_ACTOR_IN_VOLUME(&bLocal_400, &iLocal_4 + 472[0])))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_394, "Grave01_WalksOffMosesInstead", Function_54(), 1, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					Function_240(&bLocal_727);
					iLocal_795 = 18;
					Function_369(&bLocal_495);
				}
				break;
			
			case 0x0000000B:
				Function_257();
				Function_371("Grave01_obj07g", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_795 = 12;
				break;
			
			case 0x0000000C:
				if (!IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
				{
					iLocal_795 = 9;
				}
				break;
			
			case 0x00000018:
				break;
			}
	}
	return 0;
}

void Function_427(bool bParam0) //Position: 0x15F3D / 89917
{
	if (!Function_294(&bParam0))
	{
		Function_241(&bParam0, 0.0f);
	}
	return;
}

var Function_428(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9) //Position: 0x15F54 / 89940
{
	var uVar0;
	
	uVar0 = CREATE_GATEWAY_IN_LAYOUT(&uParam0, &iParam1, &uParam2, &bParam3, iParam4, &iParam6, &iParam7, &iParam8, &iParam9, 1);
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

void Function_429() //Position: 0x15FE5 / 90085
{
	if (!Function_294(&bLocal_771))
	{
		Function_427(&bLocal_771);
	}
	if (!Function_138() && Function_314(&bLocal_771, 10,5f))
	{
		switch (iLocal_800)
		{
			case 0x00000000:
				Function_137("Grave01_carry_tut_1", 0x41200000, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				iLocal_800 = 1;
				break;
			}
	}
	return;
}

void Function_430() //Position: 0x1604C / 90188
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Grave01_JonHogtiesMoses", "Grave01_JonHogtiesMoses", 0, 1, 1, 0, 1);
		Function_383(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_431(bool bParam0) //Position: 0x160A4 / 90276
{
	return IS_ACTOR_IN_HOGTIE(&bParam0);
}

void Function_432() //Position: 0x160B0 / 90288
{
	if (!Function_294(&bLocal_771))
	{
		Function_427(&bLocal_771);
	}
	if (!Function_138() && Function_314(&bLocal_771, 10,5f))
	{
		switch (iLocal_799)
		{
			case 0x00000000:
				Function_137("grave01_hogtie_tut_1", 0x41200000, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				iLocal_799 = 1;
				break;
			
			case 0x00000001:
				Function_137("grave01_hogtie_tut_2", 0x41200000, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				iLocal_799 = 2;
				break;
			}
	}
	return;
}

void Function_433() //Position: 0x1614F / 90447
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Grave01_JonLassoMoses", "Grave01_JonLassoMoses", 0, 1, 1, 0, 1);
		Function_383(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_434(struct<2> Param0, var uParam2, int iParam3, int iParam4, char* cParam5, var uParam6, bool bParam7, var uParam8, var uParam9, var uParam10, bool bParam11) //Position: 0x161A3 / 90531
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_411(&Global_54076, &iParam3, uParam2))
	{
		Function_247(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_411(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_378(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&iParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_371(&iParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_377(2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_376(&uParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_376(&uParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &uParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_378(2))
	{
		Function_375(2);
		if (!Function_374())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_373();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&uParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_210(&iParam3);
				Function_215(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_376(&uParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&uParam9))
			{
				Function_376(&uParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_435() //Position: 0x16361 / 90977
{
	var uVar0;
	struct<2> Var2;
	
	if (!Function_294(&bLocal_727))
	{
		Function_427(&bLocal_727);
	}
	switch (iLocal_803)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(&iLocal_4 + 824[4], &Local_499);
			bLocal_502 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &Local_499, 1);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_400, bLocal_502);
			TASK_SEQUENCE_RELEASE(bLocal_502, 1);
			iLocal_803 = 1;
			break;
		
		case 0x00000001:
			if (ACTORS_IN_RANGE(&bLocal_400, &bLocal_394, 2,5f) && GET_TASK_STATUS(&bLocal_394, 6) != 1)
			{
				Function_240(&bLocal_731);
				iLocal_804 = 0;
				iLocal_803 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_440())
			{
				Function_257();
				Function_240(&bLocal_475);
				iLocal_795 = 6;
				iLocal_803 = 3;
			}
			break;
		
		case 0x00000003:
			if (!IS_ACTION_NODE_PLAYING(&bLocal_400, "stand_shove"))
			{
				if (!IS_DOOR_VALID(&bLocal_747))
				{
					bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
				}
				if (IS_DOOR_LOCKED(&bLocal_747))
				{
					OPEN_DOOR_DIRECTION(&bLocal_747, 1);
					SET_DOOR_LOCK(&bLocal_747, 0);
				}
				if (IS_OBJECT_VALID(&iLocal_4 + 1360))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_400, &iLocal_4 + 1360, 3, 0, 0, 1, false);
				}
				else
				{
					uVar0 = Vector(2915.0f, 19.0f, 2690.0f);
					TASK_GO_NEAR_COORD(&bLocal_400, &uVar0, 5.0f, 3);
					LOG_ERROR("TASK_GO_NEAR_COORD");
				}
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_400, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_400, 0);
				iLocal_803 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_314(&bLocal_727, 9.0f))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_400, 24.0f))
				{
					if (!Function_439(&bLocal_727))
					{
						Function_438();
						Function_240(&bLocal_727);
					}
				}
			}
			if (Function_314(&bLocal_731, 1.0f))
			{
				GET_OBJECT_POSITION(&Global_54076, &Local_499);
				GET_OBJECT_POSITION(&bLocal_400, &Var2);
				if (VDIST(Local_499, Var2) < 15.0f)
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_400, 4);
				}
				else if (VDIST(Local_499, Var2) > 15.0f)
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_400, 3);
				}
				Function_240(&bLocal_731);
			}
			if (IS_OBJECT_VALID(&iLocal_4 + 1360))
			{
				if (Function_436(&bLocal_400, &iLocal_4 + 1360, 10.0f))
				{
					TASK_CLEAR(&bLocal_400);
					DESTROY_OBJECT(&iLocal_4 + 1360);
					iLocal_803 = 3;
				}
			}
			if (IS_ACTOR_HOGTIED(&bLocal_400))
			{
				iLocal_803 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_314(&bLocal_727, 9.0f))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_400, 24.0f))
				{
					if (!Function_439(&bLocal_727))
					{
						Function_405();
						Function_240(&bLocal_727);
					}
				}
			}
			if (!IS_ACTOR_HOGTIED(&bLocal_400))
			{
				TASK_CLEAR(&bLocal_400);
				iLocal_803 = 3;
			}
			break;
		
		case 0x00000006:
			iLocal_803 = 7;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&bLocal_400))
			{
				if (!ACTORS_IN_RANGE(&bLocal_400, &Global_54076, 10.0f))
				{
					iLocal_803 = 8;
				}
			}
			break;
		
		case 0x00000008:
			break;
	}
	return;
}

bool Function_436(var uParam0, var uParam1, float fParam2) //Position: 0x1666B / 91755
{
	struct<2> Var0;
	int iVar2;
	
	iVar2 = (GET_PATH_NUM_POINTS(&uParam1) - 1);
	GET_PATH_POINT(&uParam1, iVar2, &Var0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (Function_437(StackVal, &uParam0, Var0) >= fParam2)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of path end. Returning FALSE.");
	return 0;
	return 0;
}

float Function_437(var uParam0, struct<2> Param1) //Position: 0x16702 / 91906
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_381(&uParam0);
		Var0 = Function_381(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_438() //Position: 0x16779 / 92025
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Grave01_MosesShoutsJon", "Grave01_MosesShoutsJon", 0, 2, 1, 0, 1);
		Function_383(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_439(bool bParam0) //Position: 0x167CF / 92111
{
	if ((ACTORS_IN_RANGE(&bLocal_400, &bLocal_394, (6.0f + 4.0f)) && IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076)) || (ACTORS_IN_RANGE(&bLocal_400, &bLocal_394, (6.0f + 2.0f)) && !IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076)))
	{
		if (IS_ANY_SPEECH_PLAYING(&bLocal_400))
		{
			ABORT_SCRIPTED_CONVERSATION(1);
		}
		Function_240(&bParam0);
		LOG_ERROR("ShutTheFuckUpMoses");
		return 1;
	}
	return 0;
}

bool Function_440() //Position: 0x16836 / 92214
{
	switch (iLocal_804)
	{
		case 0x00000000:
			if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 560[2]))
			{
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[2]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 560[2]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 560[2], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 560[2]);
			}
			Function_347(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_445(&iLocal_354, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
			HUD_ENABLE(0);
			Function_443(StackVal, StackVal, Vector(-3675,179f, 10,295f, 3495,177f), Vector(0,635f, -0,08f, -0,768f), -1.0f, 0, 1);
			TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
			iLocal_804 = 1;
			break;
		
		case 0x00000001:
			Function_442();
			Function_240(&bLocal_463);
			iLocal_804 = 2;
			break;
		
		case 0x00000002:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_314(&bLocal_463, 10.0f))
			{
				iLocal_804 = 3;
			}
			break;
		
		case 0x00000003:
			Function_257();
			GET_OBJECT_POSITION(&Global_54076, &Local_499);
			OPEN_DOOR_DIRECTION(&bLocal_747, 1);
			SET_DOOR_LOCK(&bLocal_747, 0);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_400, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_400, "stand_shove", 0);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_400, "stand_shove");
			Function_240(&bLocal_463);
			iLocal_804 = 4;
			break;
		
		case 0x00000004:
			if (!IS_ACTION_NODE_PLAYING(&bLocal_400, "stand_shove") && !GET_TASK_STATUS(&bLocal_400, 43) != 1)
			{
				if (!IS_DOOR_VALID(&bLocal_747))
				{
					bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
				}
				if (IS_DOOR_LOCKED(&bLocal_747))
				{
					OPEN_DOOR_DIRECTION(&bLocal_747, 1);
					SET_DOOR_LOCK(&bLocal_747, 0);
				}
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_400, &iLocal_4 + 1360, 3, 0, 0, 1, false);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_400, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_400, 0);
			}
			if (Function_314(&bLocal_463, 4.0f))
			{
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 0);
				iLocal_804 = 5;
			}
			break;
		
		case 0x00000005:
			Function_304(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			Function_441();
			SET_PLAYER_CONTROL(0, 1, 1, 1);
			HUD_ENABLE(1);
			TASK_CLEAR(&Global_54076);
			iLocal_804 = 6;
			return 1;
			break;
		
		case 0x00000006:
			break;
	}
	return 0;
}

void Function_441() //Position: 0x16A84 / 92804
{
	if (VMAG((&Global_99148 + 48)) < 0.0f)
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

void Function_442() //Position: 0x16BB6 / 93110
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_SethMosesBanter_v1_AA", "Grave01_SethMosesBanter_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Grave01_SethMosesBanter_v1_AB", "Grave01_SethMosesBanter_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_SethMosesBanter_v1_AC", "Grave01_SethMosesBanter_v1_AC", 0, 1, 1, 0, 1);
		Function_383(19);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_443(struct<2> Param0, struct<2> Param2, int iParam4, var uParam5, var uParam6) //Position: 0x16CAC / 93356
{
	Function_444(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	while ((IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET()) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	if (&iParam4 >= 0.0f)
	{
		iParam4 = 9999.0f;
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param0);
	SET_CAMERASHOT_DIRECTION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param2, &uParam6);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, 0f, &iParam4);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam5))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &uParam5, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
	ROTATE_VECTOR_XZ(&Param2, 180.0f, 0);
}

void Function_444(float fParam0) //Position: 0x16DC5 / 93637
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_445(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, var uParam13) //Position: 0x16DD8 / 93656
{
	Function_446(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_54(), 2, 1);
	Global_99148.f_16 = &uParam3;
	Global_99148.f_20 = &uParam4;
	Global_99148.f_24 = &uParam5;
	Global_99148.f_28 = &uParam6;
	Global_99148.f_32 = &uParam7;
	Global_99148.f_36 = &uParam8;
	Global_99148.f_40 = &uParam9;
	Global_99148.f_44 = &fParam10;
	Global_99148.f_48 = &fParam11;
	(&Global_99148 + 48)->f_4 = &fParam12;
	(&Global_99148 + 48)->f_8 = &uParam13;
	INIT_CAMERA_FROM_GAME_CAMERA(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	if (&bParam2)
	{
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
		INIT_CAMERASHOT_FROM_GAME_CAMERA(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1));
	}
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &uParam1);
	SET_CAMERASHOT_FOV(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 1), &uParam1);
	SET_CAMERA_FOV(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam1);
	Global_99148.f_8 = 4294967295;
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	*(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

void Function_446(bool bParam0, bool bParam1) //Position: 0x16EE1 / 93921
{
	if (&bParam0)
	{
		if (VMAG(*(&Global_99148 + 48)) < 0.0f)
		{
			ENABLE_GAME_CAMERA_FOCUS(*(&Global_99148 + 48), -1.0f, 6, 1, 1, 0);
		}
		else
		{
			CAMERA_RESET(0);
		}
	}
	if (IS_OBJECT_VALID(&Global_99148))
	{
		if (!&bParam1)
		{
			SET_CUTSCENE_STREAMING_LOAD_SCENE(&Global_99148, 0);
		}
		DESTROY_OBJECT(&Global_99148);
	}
	return;
}

void Function_447() //Position: 0x16F37 / 94007
{
	var uVar0;
	
	switch (iLocal_791)
	{
		case 0x00000000:
			GET_OBJECT_POSITION(&iLocal_4 + 1216[0], &Local_499);
			GET_OBJECT_POSITION(&iLocal_4 + 896[5], &uVar0);
			bLocal_502 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &Local_499, 2);
			TASK_FACE_COORD(0, &uVar0, 0);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
			TASK_PRIORITY_SET(&bLocal_394, true);
			TASK_SEQUENCE_RELEASE(bLocal_502, 1);
			iLocal_791 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&bLocal_394, 1) == 0)
			{
				TASK_FACE_ACTOR(&bLocal_394, &Global_54076, 1, -1.0f);
				iLocal_791 = 2;
			}
			break;
		
		case 0x00000002:
			if (!Function_379(&bLocal_394, &iLocal_4 + 1216[0], 1.0f))
			{
				iLocal_791 = 0;
			}
			break;
	}
	return;
}

void Function_448() //Position: 0x16FFF / 94207
{
	Function_510(&iLocal_354, &iLocal_4 + 432[0]);
	if (((iLocal_369 < 3 && iLocal_369 > 105) && iLocal_369 == 16) && iLocal_369 == 17)
	{
		Function_501();
		Function_500();
		Function_492();
		Function_469();
		if (Function_468())
		{
			Function_247("grave01_fail_murderer");
			bLocal_383 = true;
		}
	}
	switch (iLocal_369)
	{
		case 0x00000000:
			if (Function_466())
			{
				iLocal_787 = 0;
				if (!iLocal_405[0])
				{
					Function_240(&bLocal_463);
					iLocal_369 = 1;
				}
				else if (iLocal_405[0])
				{
					Function_240(&bLocal_463);
					iLocal_369 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_362(Global_46796[4]))
			{
				Function_240(&bLocal_463);
				iLocal_369 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_462())
			{
				if (Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, Local_356, bLocal_368) && !Global_99145)
				{
					Function_227(&iLocal_4 + 824[6]);
					if (Function_459(StackVal, "$/cutscene/GRAVE01_CS04_Seq/GRAVE01_CS04_Seq", &uLocal_717, Function_227(&iLocal_4 + 824[6]), 99280, 1, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1))
					{
						if (IS_VOLUME_VALID(&iLocal_4 + 336[8]))
						{
							GET_OBJECT_POSITION(&iLocal_4 + 432[2], &Local_499);
							Function_212();
							STREAMING_LOAD_SCENE_EXT(Local_499, Function_212(), 0);
							DESTROY_VOLUME(&iLocal_4 + 336[8]);
						}
						SET_DRAW_ACTOR(&iLocal_4 + 160[02], 0);
						SET_DRAW_ACTOR(&iLocal_4 + 160[12], 0);
						Function_458();
						Function_240(&bLocal_463);
						iLocal_369 = 3;
						Function_253(bLocal_368);
						Function_350(StackVal, Function_253(bLocal_368), bLocal_368, Global_46736[1], Function_255(bLocal_368), 0);
					}
				}
				else
				{
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					Function_360(&Global_54076, &iLocal_4 + 680[1], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
					Function_360(&bLocal_394, &iLocal_4 + 680[3], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
					Function_360(&bLocal_398, &iLocal_4 + 680[6], 1, 1, 1);
					TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
					Function_360(&bLocal_396, &iLocal_4 + 680[7], 1, 1, 1);
					Function_458();
					Function_240(&bLocal_463);
					iLocal_369 = 4;
					Function_253(bLocal_368);
					Function_350(StackVal, Function_253(bLocal_368), bLocal_368, Global_46736[1], Function_255(bLocal_368), 0);
				}
			}
			break;
		
		case 0x00000003:
			if (Function_285("$/cutscene/GRAVE01_CS04_Seq/GRAVE01_CS04_Seq", &iLocal_370, &Local_356, &bLocal_368, 68974, 68145, 62017, 59914, 58985, 58702, 0, 2, 1, 2, 2, 0, 1))
			{
				STREAMING_UNLOAD_SCENE();
				Function_240(&bLocal_463);
				iLocal_369 = 4;
			}
			break;
		
		case 0x00000004:
			if (!Function_396(StackVal, StackVal, StackVal, StackVal, StackVal, Local_356, bLocal_368))
			{
			}
			Function_191(0x2000000);
			Function_457(0, 2);
			if (!iLocal_783)
			{
				Function_358(&uLocal_718, 1, 0, 4294967295, 4294967295);
				iLocal_783 = 1;
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			TASK_CLEAR(&Global_54076);
			Function_240(&bLocal_463);
			iLocal_369 = 5;
			break;
		
		case 0x00000005:
			if ((IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_4 + 160[02])) && IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_4 + 160[12]))) || Function_314(&bLocal_463, 5.0f))
			{
				if (!(IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_4 + 160[02])) && IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iLocal_4 + 160[12]))))
				{
					LOG_ERROR("The mission is advancing despite the deputy gringoes being invalid.");
				}
				Function_311(1, 0, 1);
				Function_231(32768);
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 160[02])))
				{
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 160[02], 345, 0f, 2, 0);
					SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&iLocal_4 + 160[02]), 2);
				}
				if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 160[12])))
				{
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 160[12], 345, 0f, 2, 0);
					SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&iLocal_4 + 160[12]), 2);
				}
				if (HUD_IS_FADED())
				{
					Function_302(1.0f, "Stage_Two().GID_FADE_IN", 0x3f800000);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_240(&bLocal_463);
				iLocal_369 = 6;
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_790 = 0;
				iLocal_794 = 0;
				Function_369(&bLocal_479);
				iLocal_797 = 0;
				if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&iLocal_4 + 336[4]))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 336[4]);
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 336[4]);
					CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 336[4], 15);
				}
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 336[4]);
				Function_240(&bLocal_463);
				iLocal_369 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_450())
			{
				Function_240(&bLocal_463);
				Function_240(&bLocal_467);
				Function_240(&bLocal_471);
				iLocal_369 = 106;
			}
			break;
		
		case 0x0000006A:
			if (Function_292(&bLocal_463) < 0,25f)
			{
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				if (IS_ACTOR_VALID(&bLocal_394))
				{
					MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bLocal_394, &bLocal_394);
					AI_STOP_IGNORING_ACTOR(&bLocal_394);
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_394, "stand_ambient", 0);
					if (DECOR_CHECK_EXIST(&bLocal_394, "nseth_wave"))
					{
						DECOR_REMOVE(&bLocal_394, "nseth_wave");
					}
				}
				Function_449(&iLocal_4 + 200);
				Function_208(&iLocal_354);
				Function_208(&iLocal_4);
				iLocal_405[1] = 1;
				Function_240(&bLocal_463);
				bLocal_368 = 2;
				iLocal_369 = 0;
			}
			break;
	}
	return;
}

void Function_449(bool bParam0) //Position: 0x175B2 / 95666
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
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_450() //Position: 0x175FD / 95741
{
	Function_227(&iLocal_4 + 824[6]);
	Function_385(StackVal, "$/cutscene/GRAVE01_CS04_C_Seq/GRAVE01_CS04_C_Seq", &uLocal_717, Function_227(&iLocal_4 + 824[6]), 0, 75.0f, 150.0f, 2, 2, 2, 2, 0, 1);
	switch (iLocal_794)
	{
		case 0x00000000:
			Function_257();
			Function_371("Grave01_BECOME_WANTED", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_311(1, 0, 1);
			ADD_BLIP_FOR_OBJECT(&iLocal_4 + 280[02], 325, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 280[02]), "Grave01_blip_horse");
			ADD_BLIP_FOR_OBJECT(&iLocal_4 + 280[12], 325, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 280[12]), "Grave01_blip_horse");
			DECOR_SET_INT(&iLocal_4 + 280[02], "faction", 8);
			DECOR_SET_INT(&iLocal_4 + 280[12], "faction", 8);
			DECOR_SET_INT(&iLocal_4 + 280[22], "faction", 8);
			Global_42250 = 1;
			iLocal_794 = 2;
			break;
		
		case 0x00000001:
			Function_257();
			Function_371("Grave01_BECOME_WANTED_again", 0x40f00000, 1, 2, 0, 0, 0, 0);
			iLocal_794 = 2;
			break;
		
		case 0x00000002:
			if (!Function_372(&bLocal_471, 60.0f, 200.0f, &bLocal_400, "Grave01_deputy_return", "Grave01_deputy_abandoned", &bLocal_383, 1, 0, 0, 4294967295, 1, 0))
			{
				if (Function_456(0))
				{
					if (GET_TASK_STATUS(&iLocal_4 + 160[02], 19) != 1)
					{
						TASK_USE_GRINGO(&iLocal_4 + 160[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1312), "deputy02", 4294967295, 1);
					}
					if (GET_TASK_STATUS(&iLocal_4 + 160[12], 19) != 1)
					{
						TASK_USE_GRINGO(&iLocal_4 + 160[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1304), "deputy01", 4294967295, 1);
					}
					DECOR_SET_BOOL(&iLocal_4 + 160[02], "Deputy_Reaction", 1);
					DECOR_SET_BOOL(&iLocal_4 + 160[12], "Deputy_Reaction", 1);
					UNK_0x2E84E682(&iLocal_4 + 160[02], 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[02], 4294967295);
					UNK_0x2E84E682(&iLocal_4 + 160[12], 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[12], 4294967295);
					AUDIO_MUSIC_SET_MOOD("WANTED", 0, 4294967295, 4294967295);
					iLocal_794 = 3;
				}
			}
			break;
		
		case 0x00000003:
			Function_257();
			Function_371("Grave01_escape_from_deputies", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_215(&iLocal_4 + 280[02]);
			Function_215(&iLocal_4 + 280[12]);
			Function_215(&iLocal_4 + 280[22]);
			if (!iLocal_763)
			{
				iLocal_763 = 1;
				iLocal_798 = 0;
			}
			Function_240(&bLocal_771);
			iLocal_794 = 4;
			break;
		
		case 0x00000008:
			Function_257();
			Function_371("Grave01_shack_return", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Global_42250 = 0;
			iLocal_794 = 9;
			break;
		
		case 0x00000009:
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_400, 36.0f))
			{
				iLocal_794 = 1;
			}
			break;
		
		case 0x00000004:
			Function_210(&bLocal_394);
			Function_257();
			Function_371("Grave01_LOSE_WANTED", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_230(0x2000000);
			iLocal_794 = 5;
			break;
		
		case 0x00000005:
			Function_455((10.0f - 1.0f), (10,5f - 1.0f));
			Function_453();
			if (!Function_456(0))
			{
				iLocal_798 = 4;
				iLocal_797 = 1;
				iLocal_794 = 6;
			}
			break;
		
		case 0x00000006:
			iLocal_770 = 1;
			Function_257();
			Function_455((10.0f - 1.0f), (10,5f - 1.0f));
			Function_371("GraveRobber_return", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_311(1, 1, 1);
			AUDIO_MUSIC_SET_MOOD("GRAVE_DRAMATIC", 0, 4294967295, 4294967295);
			bLocal_786 = false;
			iLocal_794 = 7;
			break;
		
		case 0x00000007:
			if (Function_456(0))
			{
				iLocal_794 = 4;
			}
			else
			{
				Function_455((10.0f - 1.0f), (10,5f - 1.0f));
				if ((ACTORS_IN_RANGE(&Global_54076, &bLocal_394, 8.0f) && Function_452(&bLocal_394)) || iLocal_785)
				{
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!DECOR_CHECK_EXIST(&iLocal_354, "stage02endstamp"))
						{
							DECOR_SET_FLOAT(&iLocal_354, "stage02endstamp", GET_CURRENT_GAME_TIME());
						}
						else if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_354, "stage02endstamp")) < 5.0f)
						{
							bLocal_786 = true;
						}
						ABORT_SCRIPTED_CONVERSATION(1);
					}
					else
					{
						bLocal_786 = true;
					}
					if (bLocal_786)
					{
						iLocal_785 = 1;
						if (IS_ACTOR_RIDING(&Global_54076))
						{
							if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
							{
								TASK_CLEAR(GET_MOUNT(&Global_54076));
								TASK_STAND_STILL(GET_MOUNT(&Global_54076), -1.0f, 0, 0);
								if (Function_451(&Global_54076, 0) < 10.0f)
								{
									SET_ACTION_NODE_FOR_ACTOR(GET_MOUNT(&Global_54076), "horse_Main/Melee/RearUp/scripted/canned_rear_up");
									SET_PLAYER_CONTROL(0, 0, 0, 0);
								}
								else if (!IS_ACTION_NODE_PLAYING_PARTIAL(GET_MOUNT(&Global_54076), "canned_rear_up"))
								{
									SET_PLAYER_CONTROL(0, 0, 0, 0);
									HUD_ENABLE(0);
									TASK_DISMOUNT(&Global_54076, 1);
									AI_GOAL_LOOK_CLEAR(&bLocal_394);
									iLocal_794 = 10;
									return 1;
								}
							}
						}
						HUD_ENABLE(0);
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						AI_GOAL_LOOK_CLEAR(&bLocal_394);
						iLocal_794 = 10;
						return 1;
						return 0;
					}
				}
			}
			break;
		
		case 0x0000000A:
			return 1;
			break;
	}
	return 0;
}

float Function_451(var uParam0, bool bParam1) //Position: 0x17C43 / 97347
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

int Function_452(bool bParam0) //Position: 0x17C64 / 97380
{
	var uVar0;
	bool bVar2;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		return 0;
	}
	bVar2 = GET_ACTOR_ENUM(&bParam0);
	GET_POSITION(&bParam0, &uVar0);
	return WOULD_ACTOR_BE_VISIBLE(bVar2, &uVar0, 3212836864);
}

void Function_453() //Position: 0x17C92 / 97426
{
	if (Function_454(&iLocal_4 + 200) || IS_ACTOR_SHOOTING(&Global_54076))
	{
		if (!Function_294(&bLocal_743))
		{
			Function_427(&bLocal_743);
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				AUDIO_MUSIC_SET_MOOD("GRAVE_GUN_HORSE", 0, 4294967295, 4294967295);
			}
			else
			{
				AUDIO_MUSIC_SET_MOOD("GRAVE_GUN_FOOT", 0, 4294967295, 4294967295);
			}
		}
		else if (Function_314(&bLocal_743, (5.0f - 1.0f)))
		{
			Function_240(&bLocal_743);
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				AUDIO_MUSIC_SET_MOOD("GRAVE_GUN_HORSE", 0, 4294967295, 4294967295);
			}
			else
			{
				AUDIO_MUSIC_SET_MOOD("GRAVE_GUN_FOOT", 0, 4294967295, 4294967295);
			}
		}
	}
	else if (Function_368(&bLocal_743, 5.0f))
	{
		AUDIO_MUSIC_SET_MOOD("WANTED", 0, 4294967295, 4294967295);
	}
	return;
}

int Function_454(var uParam0) //Position: 0x17D64 / 97636
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_SHOOTING(&iVar1))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_455(float fParam0, float fParam1) //Position: 0x17DA9 / 97705
{
	if (!Function_294(&bLocal_771))
	{
		Function_427(&bLocal_771);
	}
	if (!Function_138() && Function_314(&bLocal_771, fParam1))
	{
		switch (iLocal_798)
		{
			case 0x00000000:
				if (!Function_35(Global_119935, 0x4000000))
				{
					Function_137("Grave01_commit_crime_help", fParam0, 1, 0, 2, 1, 0);
					Function_240(&bLocal_771);
					iLocal_798 = 1;
				}
				else
				{
					iLocal_798 = 2;
				}
				break;
			
			case 0x00000001:
				Function_137("Grave01_law_pursuit_help", fParam0, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				Function_173(&Global_119935, 0x4000000);
				iLocal_798 = 2;
				break;
			
			case 0x00000002:
				if (!Function_35(Global_119935, 0x2000000))
				{
					Function_137("Grave01_wanted_level_help", fParam0, 1, 0, 2, 1, 0);
					Function_240(&bLocal_771);
					iLocal_798 = 3;
				}
				else
				{
					iLocal_798 = 5;
				}
				break;
			
			case 0x00000003:
				Function_137("Grave01_LOSE_WANTED_help", fParam0, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				Function_173(&Global_119935, 0x2000000);
				iLocal_798 = 5;
				break;
			
			case 0x00000004:
				Function_137("Grave01_bounty_help", fParam0, 1, 0, 2, 1, 0);
				Function_240(&bLocal_771);
				iLocal_798 = 5;
				break;
			
			case 0x00000005:
				return 1;
				break;
			}
	}
	return 0;
}

bool Function_456(int iParam0) //Position: 0x17F3E / 98110
{
	if (!iParam0 != 0)
	{
		LOG_ERROR("Asking about a player with an index not = 0. Multiplayer Law Enforcement not yet implemented.");
		return 0;
	}
	return Global_6646;
}

void Function_457(int iParam0, var uParam1) //Position: 0x17FB4 / 98228
{
	if (!Function_229(iParam0))
	{
		return;
	}
	(*&Global_39922 + 244)[iParam0] = uParam1;
	return;
}

void Function_458() //Position: 0x17FCF / 98255
{
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1304), true);
	GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1312), true);
	if (GET_CURRENT_GRINGO(&iLocal_4 + 160[02]) != GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1312))
	{
		SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 160[02], &iLocal_4 + 1312, "deputy02", true, 0, 0);
		TASK_USE_GRINGO(&iLocal_4 + 160[02], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1312), "deputy02", 4294967295, 1);
		TASK_PRIORITY_SET(&iLocal_4 + 160[02], true);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iLocal_4 + 160[02], 1);
	}
	if (GET_CURRENT_GRINGO(&iLocal_4 + 160[12]) != GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1304))
	{
		SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 160[12], &iLocal_4 + 1304, "deputy01", true, 0, 0);
		TASK_USE_GRINGO(&iLocal_4 + 160[12], GET_GRINGO_FROM_OBJECT(&iLocal_4 + 1304), "deputy01", 4294967295, 1);
		TASK_PRIORITY_SET(&iLocal_4 + 160[12], true);
		SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iLocal_4 + 160[12], 1);
	}
	CLOSE_DOOR(&bLocal_747, 1.0f);
	if (!IS_DOOR_LOCKED(&bLocal_747))
	{
		SET_DOOR_LOCK(&bLocal_747, 1);
	}
	return;
}

bool Function_459(var uParam0, var uParam1, struct<2> Param2, int iParam4, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13) //Position: 0x180F1 / 98545
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_388(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_389()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
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
		if ((iParam13 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam8, &iParam9, &iParam10, &iParam11);
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
				Call_Loc(&iParam4);
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
	else if ((!Function_388(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_389()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_388(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

int Function_460() //Position: 0x183D0 / 99280
{
	bool bVar0;
	var uVar1;
	var uVar3;
	int iVar5;
	
	if (!IS_ACTOR_ALIVE(&iLocal_4 + 208[02]) && !IS_ACTOR_ALIVE(&iLocal_4 + 208[12]))
	{
		Function_461();
		bVar0 = false;
		while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
		{
			if (CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_BY_INDEX_START_ORIENT(bVar0, &uVar1, &uVar3))
			{
				iVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTORENUM(bVar0);
				if (Function_330(iVar5))
				{
					if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 208[02]))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 208[02]);
					}
					if (iVar5 == GET_ACTOR_ENUM(&iLocal_4 + 208[12]))
					{
						CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR(CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), &iLocal_4 + 208[12]);
					}
				}
			}
			bVar0++;
		}
	}
	return 1;
}

void Function_461() //Position: 0x18465 / 99429
{
	*(&iLocal_4 + 248) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "deputyClones"));
	*(&iLocal_4 + 208[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "aDeputyClone00", 442, Vector(-3669,515f, 8,321379f, 3490,002f), Vector(0.0f, 108,4268f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 208[02], &iLocal_4 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 208[02], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 208[02], 4, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 208[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 208[02], 8);
	SET_CRIPPLE_ENABLE(&iLocal_4 + 208[02], 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 208[02], 32, 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 208[02], 64, 0);
	*(&iLocal_4 + 208[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "aDeputyClone01", 429, Vector(-3669,316f, 8,247163f, 3489,235f), Vector(0.0f, 258,8311f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 208[12], &iLocal_4 + 248);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 208[12], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 208[12], 4, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 208[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 208[12], 8);
	SET_CRIPPLE_ENABLE(&iLocal_4 + 208[12], 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 208[12], 32, 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 208[12], 64, 0);
	return;
}

bool Function_462() //Position: 0x185E0 / 99808
{
	switch (iLocal_787)
	{
		case 0x00000000:
			if (!IS_ACTOR_VALID(&iLocal_4 + 256[02]))
			{
				Function_394();
				bLocal_400 = &iLocal_4 + 256[02];
				ACTOR_ENABLE_VARIABLE_MESH(&bLocal_400, 17, true);
				Function_412(&(Local_557[215]), &bLocal_400, "grave01_informant", 1, 0x5f5e100, 1);
				Function_423(&(Local_557[215]), 1480);
			}
			if (!SQUAD_IS_VALID(&iLocal_4 + 200))
			{
				Function_465();
				Function_464(&iLocal_4 + 160[02], 0);
				TASK_PRIORITY_SET(&iLocal_4 + 160[02], 2);
				Function_464(&iLocal_4 + 160[12], 0);
				TASK_PRIORITY_SET(&iLocal_4 + 160[12], 2);
			}
			Function_463();
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 280[02], 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 280[12], 1);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iLocal_4 + 280[22], 1);
			GET_OBJECT_POSITION(&iLocal_4 + 680[8], &Local_499);
			uLocal_751 = LOCATE_GRINGO_OF_TYPE("horsehitch2", &Local_499, 3.0f, 0);
			SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 280[02], GET_OBJECT_FROM_GRINGO(&uLocal_751), "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&iLocal_4 + 280[02], &uLocal_751, "UseCase1", 4294967295, 1);
			GET_OBJECT_POSITION(&iLocal_4 + 680[9], &Local_499);
			uLocal_751 = LOCATE_GRINGO_OF_TYPE("horsehitch", &Local_499, 3.0f, 0);
			SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 280[12], GET_OBJECT_FROM_GRINGO(&uLocal_751), "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&iLocal_4 + 280[12], &uLocal_751, "UseCase1", 4294967295, 1);
			GET_OBJECT_POSITION(&iLocal_4 + 680[10], &Local_499);
			uLocal_751 = LOCATE_GRINGO_OF_TYPE("horsehitch2", &Local_499, 3.0f, 0);
			SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 280[22], GET_OBJECT_FROM_GRINGO(&uLocal_751), "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&iLocal_4 + 280[22], &uLocal_751, "UseCase1", 4294967295, 1);
			if (!IS_DOOR_VALID(&bLocal_747))
			{
				bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
			}
			GET_OBJECT_POSITION(&iLocal_4 + 680[12], &Local_499);
			Function_212();
			RESET_PROPS_IN_VOLUME(CREATE_VOLUME_IN_LAYOUT(StackVal, &iLocal_354, "resetPropVolume", 2, Local_499, Function_212(), Vector(70.0f, 20.0f, 120.0f)), 1);
			GET_OBJECT_POSITION(&iLocal_4 + 680[12], &Local_499);
			uLocal_753 = GET_OBJECT_FROM_PHYSINST(LOCATE_PHYSINST_OF_PARTIAL_TYPE(Local_499, 3.0f, "p_gen_chair01x", 1));
			if (IS_OBJECT_VALID(&uLocal_753))
			{
				SET_PROP_FIXED(GET_PHYSINST_FROM_OBJECT(&uLocal_753), 1);
			}
			else
			{
				LOG_ERROR("No Chair found.");
			}
			if (!iLocal_405[0] || Function_297(&Local_356))
			{
				Function_234(&bLocal_394, &iLocal_4 + 680[2], 1, 1, 1);
				Function_360(&bLocal_398, &iLocal_4 + 680[0], 1, 1, 1);
				Function_360(&bLocal_396, &iLocal_4 + 680[2], 1, 1, 1);
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_398);
				}
				if (!IS_ACTOR_RIDING(&bLocal_394))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_394, &bLocal_396);
				}
				iLocal_787 = 4;
			}
			else
			{
				iLocal_787 = 4;
			}
			break;
		
		case 0x00000004:
			return 1;
			break;
	}
	return 0;
}

void Function_463() //Position: 0x18967 / 100711
{
	*(&iLocal_4 + 280[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RIDEABLE_ANIMAL_Horse01", 985, Vector(-3682,189f, 8,831698f, 3487,187f), Vector(0.0f, 88,60774f, 0.0f));
	TASK_STAND_STILL(&iLocal_4 + 280[02], -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&iLocal_4 + 280[02], 3);
	*(&iLocal_4 + 280[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RIDEABLE_ANIMAL_Horse02", 977, Vector(-3691,865f, 8,980962f, 3488,966f), Vector(0.0f, 8,005098f, 0.0f));
	TASK_STAND_STILL(&iLocal_4 + 280[12], -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&iLocal_4 + 280[12], 3);
	*(&iLocal_4 + 280[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RIDEABLE_ANIMAL_Horse03", 985, Vector(-3694,644f, 8,980962f, 3488,966f), Vector(0.0f, -10,68331f, 0.0f));
	TASK_STAND_STILL(&iLocal_4 + 280[22], -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&iLocal_4 + 280[22], 3);
	return;
}

int Function_464(int iParam0, int iParam1) //Position: 0x18A90 / 101008
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

void Function_465() //Position: 0x18B1B / 101147
{
	*(&iLocal_4 + 200) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "deputies"));
	*(&iLocal_4 + 160[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "naDeputy00", 442, Vector(-3670,759f, 8,321379f, 3491,622f), Vector(0.0f, 108,4268f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 160[02], &iLocal_4 + 200);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 160[02], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 160[02], 4, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 160[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 160[02], 8);
	SET_CRIPPLE_ENABLE(&iLocal_4 + 160[02], 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 160[02], 32, 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 160[02], 64, 0);
	*(&iLocal_4 + 160[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "naDeputy01", 429, Vector(-3673,561f, 8,247163f, 3489,235f), Vector(0.0f, 258,8311f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 160[12], &iLocal_4 + 200);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 160[12], false);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 160[12], 4, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 160[12], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 160[12], 8);
	SET_CRIPPLE_ENABLE(&iLocal_4 + 160[12], 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 160[12], 32, 0);
	AI_SET_NAV_MATERIAL_USAGE(&iLocal_4 + 160[12], 64, 0);
	return;
}

bool Function_466() //Position: 0x18C88 / 101512
{
	if (!iLocal_405[0])
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			Function_242(0.0f, "GRAVE01_INIT_STAGE_TWO()", 0x3f800000, 1);
		}
		bLocal_404 = Global_46736[1];
		if (!Function_362(bLocal_404))
		{
			Function_361(&Local_356);
		}
		TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
		TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
		TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_394);
		Function_360(&Global_54076, &iLocal_4 + 680[0], 1, 1, 1);
		if (!ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
		{
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
		}
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_394);
	TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_399(0);
	Function_208(&iLocal_354);
	Function_208(&iLocal_4);
	SET_ACTOR_HEALTH(&bLocal_394, GET_ACTOR_MAX_HEALTH(&bLocal_394));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_394, 1);
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_191(0x2000000);
	iLocal_760 = Function_467();
	return 1;
}

int Function_467() //Position: 0x18D9C / 101788
{
	int iVar0;
	
	iVar0 = (StackVal + (*&Global_40060 + 68[11181][25])[iVar0]);
	iVar0 = (StackVal + (*&Global_40060 + 68[11181][35])[iVar0]);
	return iVar0;
}

bool Function_468() //Position: 0x18DD4 / 101844
{
	int iVar0;
	
	iVar0 = (StackVal + (*&Global_40060 + 68[11181][25])[iVar0]);
	iVar0 = (StackVal + (*&Global_40060 + 68[11181][35])[iVar0]);
	if (iVar0 >= iLocal_760)
	{
		return 1;
	}
	return 0;
}

void Function_469() //Position: 0x18E15 / 101909
{
	if (!Function_294(&bLocal_735))
	{
		Function_427(&bLocal_735);
	}
	if (!Function_456(0))
	{
		if (iLocal_806 != 10 || iLocal_806 >= 4)
		{
			if (Function_491(3.0f, 0))
			{
				if (Function_490(&iLocal_4 + 1312, &iLocal_4 + 1304))
				{
					iLocal_806 = 5;
				}
			}
			else if (Function_491(15.0f, 0))
			{
				Function_349(&Global_54076);
				Function_349(&Global_54076);
				if (StackVal || Function_488(Function_488(StackVal, &iLocal_4 + 160[02], Function_349(&Global_54076)), &iLocal_4 + 160[12], Function_349(&Global_54076)))
				{
					if (Function_490(&iLocal_4 + 1312, &iLocal_4 + 1304))
					{
						if (Function_487())
						{
							iLocal_806 = 5;
						}
						if (IS_ACTOR_SHOOTING(&Global_54076))
						{
							iLocal_806 = 5;
						}
					}
				}
			}
		}
		if (!iLocal_769)
		{
			if ((IS_ACTOR_VALID(&iLocal_4 + 280[02]) && IS_ACTOR_VALID(&iLocal_4 + 280[12])) && IS_ACTOR_VALID(&iLocal_4 + 280[22]))
			{
				if (Function_486(3.0f))
				{
					if (Function_490(&iLocal_4 + 1312, &iLocal_4 + 1304))
					{
						iLocal_806 = 7;
					}
				}
			}
		}
		if (!iLocal_770)
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_394, 3.0f))
			{
				iLocal_806 = 9;
			}
		}
		if (Function_294(&bLocal_483))
		{
			if (Function_368(&bLocal_483, 45.0f))
			{
				Function_478(4, 28, Function_50(), 0, 1);
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 432[2]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 432[2]))
				{
					PRINTSTRING("ShackDoorVol ");
					PRINTFLOAT(Function_292(&bLocal_483));
					PRINTNL();
					if (Function_368(&bLocal_483, 3.0f))
					{
						Function_478(4, 28, Function_50(), 0, 1);
						LOG_ERROR("CRIME_TRESPASSING");
						DESTROY_VOLUME(&iLocal_4 + 432[2]);
					}
				}
				else
				{
					PRINTSTRING("player not in ShackDoorVol");
					PRINTNL();
				}
			}
		}
	}
	else
	{
		Function_369(&bLocal_483);
		if (!iLocal_762)
		{
			if ((GET_MOUNT(&Global_54076) != &iLocal_4 + 280[02] || GET_MOUNT(&Global_54076) != &iLocal_4 + 280[12]) || GET_MOUNT(&Global_54076) != &iLocal_4 + 280[22])
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_477();
					iLocal_762 = 1;
				}
			}
		}
	}
	switch (iLocal_806)
	{
		case 0x00000009:
			iLocal_770 = 1;
			break;
		
		case 0x00000005:
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[02], "Deputy_Shoo", 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_4 + 160[02], &Global_54076, -1f, 0);
				UNK_0x2E84E682(&iLocal_4 + 160[02], 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[02], 0);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[12], "Deputy_Shoo", 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_4 + 160[12], &Global_54076, -1f, 0);
				UNK_0x2E84E682(&iLocal_4 + 160[12], 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[12], 0);
			}
			Function_476();
			iLocal_769 = 0;
			Function_240(&bLocal_735);
			Function_240(&bLocal_483);
			iLocal_806 = 6;
			break;
		
		case 0x00000006:
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[02], "Deputy_Shoo", 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[12], "Deputy_Shoo", 1);
			}
			if ((!Function_491(3.0f, 2.0f) && !Function_487()) && !IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
				{
					DECOR_SET_BOOL(&iLocal_4 + 160[02], "Deputy_Shoo", 0);
					DECOR_REMOVE(&iLocal_4 + 160[02], "Deputy_Shoo");
					UNK_0x2E84E682(&iLocal_4 + 160[02], 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[02], 4294967295);
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
				{
					DECOR_SET_BOOL(&iLocal_4 + 160[12], "Deputy_Shoo", 0);
					DECOR_REMOVE(&iLocal_4 + 160[12], "Deputy_Shoo");
					UNK_0x2E84E682(&iLocal_4 + 160[12], 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[12], 4294967295);
				}
				AI_GOAL_LOOK_CLEAR(&iLocal_4 + 160[02]);
				AI_GOAL_LOOK_CLEAR(&iLocal_4 + 160[12]);
				Function_240(&bLocal_735);
				Function_369(&bLocal_483);
				iLocal_806 = 10;
			}
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[02], "Deputy_Shoo", 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_4 + 160[02], &Global_54076, -1f, 0);
				UNK_0x2E84E682(&iLocal_4 + 160[12], 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[12], 0);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[12], "Deputy_Shoo", 1);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iLocal_4 + 160[12], &Global_54076, -1f, 0);
				UNK_0x2E84E682(&iLocal_4 + 160[12], 1);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[12], 0);
			}
			Function_475();
			iLocal_769 = 1;
			Function_240(&bLocal_735);
			Function_240(&bLocal_483);
			iLocal_806 = 8;
			break;
		
		case 0x00000008:
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[02], "Deputy_Shoo", 1);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
			{
				DECOR_SET_BOOL(&iLocal_4 + 160[12], "Deputy_Shoo", 1);
			}
			if (!Function_486((3.0f + 2.0f)))
			{
				if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
				{
					DECOR_SET_BOOL(&iLocal_4 + 160[02], "Deputy_Shoo", 0);
					DECOR_REMOVE(&iLocal_4 + 160[02], "Deputy_Shoo");
					UNK_0x2E84E682(&iLocal_4 + 160[12], 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[12], 4294967295);
				}
				if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
				{
					DECOR_SET_BOOL(&iLocal_4 + 160[12], "Deputy_Shoo", 0);
					DECOR_REMOVE(&iLocal_4 + 160[12], "Deputy_Shoo");
					UNK_0x2E84E682(&iLocal_4 + 160[12], 0);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_4 + 160[12], 4294967295);
				}
				AI_GOAL_LOOK_CLEAR(&iLocal_4 + 160[02]);
				AI_GOAL_LOOK_CLEAR(&iLocal_4 + 160[12]);
				Function_369(&bLocal_483);
				iLocal_806 = 10;
			}
			break;
		
		case 0x00000000:
			if (!Function_456(0))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 336[5]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[5]))
					{
						Function_474();
						Function_240(&bLocal_735);
						iLocal_807 = 1;
						iLocal_806 = 10;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_456(0))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 336[5]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[5]))
					{
						if (Function_314(&bLocal_735, 30.0f))
						{
							Function_473();
							LOG_ERROR("Grave01_PLAY_DeputyBanter_v2");
							Function_240(&bLocal_735);
							iLocal_807 = 2;
							iLocal_806 = 10;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!Function_456(0))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 336[5]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[5]))
					{
						if (Function_314(&bLocal_735, 30.0f))
						{
							Function_472();
							LOG_ERROR("Grave01_PLAY_DeputyBanter_v3");
							Function_240(&bLocal_735);
							iLocal_807 = 3;
							iLocal_806 = 10;
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!Function_456(0))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 336[5]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[5]))
					{
						if (Function_314(&bLocal_735, 30.0f))
						{
							Function_471();
							LOG_ERROR("Grave01_PLAY_DeputyBanter_v4");
							Function_240(&bLocal_735);
							iLocal_807 = 4;
							iLocal_806 = 10;
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!Function_456(0))
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 336[5]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[5]))
					{
						if (Function_314(&bLocal_735, 30.0f))
						{
							Function_470();
							LOG_ERROR("Grave01_PLAY_DeputyBanter_v5");
							Function_240(&bLocal_735);
							iLocal_807 = 1;
							iLocal_806 = 10;
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			if (!Function_456(0))
			{
				iLocal_806 = iLocal_807;
			}
			break;
	}
	return;
}

void Function_470() //Position: 0x196AB / 104107
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Grave01_DeputyBanter_v5_AA", "Grave01_DeputyBanter_v5_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(4, "Grave01_DeputyBanter_v5_AB", "Grave01_DeputyBanter_v5_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v5_AC", "Grave01_DeputyBanter_v5_AC", 0, 1, 1, 0, 1);
		Function_383(21);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_471() //Position: 0x1978F / 104335
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v4_AA", "Grave01_DeputyBanter_v4_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Grave01_DeputyBanter_v4_AB", "Grave01_DeputyBanter_v4_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v4_AC", "Grave01_DeputyBanter_v4_AC", 0, 1, 1, 0, 1);
		Function_383(13);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_472() //Position: 0x19873 / 104563
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v3_AA", "Grave01_DeputyBanter_v3_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Grave01_DeputyBanter_v3_AB", "Grave01_DeputyBanter_v3_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v3_AC", "Grave01_DeputyBanter_v3_AC", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Grave01_DeputyBanter_v3_AD", "Grave01_DeputyBanter_v3_AD", 0, 1, 1, 0, 1);
		Function_383(13);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x1999A / 104858
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Grave01_DeputyBanter_v2_AA", "Grave01_DeputyBanter_v2_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v2_AB", "Grave01_DeputyBanter_v2_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Grave01_DeputyBanter_v2_AC", "Grave01_DeputyBanter_v2_AC", 0, 1, 1, 0, 1);
		Function_383(13);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474() //Position: 0x19A7E / 105086
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v1_AA", "Grave01_DeputyBanter_v1_AA", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(3, "Grave01_DeputyBanter_v1_AB", "Grave01_DeputyBanter_v1_AB", 0, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DeputyBanter_v1_AC", "Grave01_DeputyBanter_v1_AC", 0, 1, 1, 0, 1);
		Function_383(13);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_475() //Position: 0x19B62 / 105314
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(3, "Grave01_GetAwayFromHors2", "Grave01_GetAwayFromHors2", 0, 2, 1, 0, 1);
		Function_383(9);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_476() //Position: 0x19BBC / 105404
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave01_DepWarns2Close", "Grave01_DepWarns2Close", 0, 1, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_477() //Position: 0x19C11 / 105489
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "Grave01_GetAwayFromHors1", "Grave01_GetAwayFromHors1", 0, 2, 1, 0, 1);
		Function_383(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_478(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x19C6A / 105578
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_485(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_484(iParam1))
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
	if (!Function_481(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_54(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_479();
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

void Function_479() //Position: 0x19F1D / 106269
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_480(&uVar0, &uVar1);
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

void Function_480(var uParam0, int iParam1) //Position: 0x19F90 / 106384
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

bool Function_481(bool bParam0) //Position: 0x19FC6 / 106438
{
	if (Function_594(256))
	{
		return 0;
	}
	if (Function_594(262144))
	{
		return 0;
	}
	if (Function_483())
	{
		return 0;
	}
	if (!Function_594(1))
	{
		return 0;
	}
	if (!Function_594(4096))
	{
		return 0;
	}
	if (bParam0 && Function_482(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_594(2048))
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

int Function_482(int iParam0) //Position: 0x1A03C / 106556
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_483() //Position: 0x1A04D / 106573
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

bool Function_484(int iParam0) //Position: 0x1A066 / 106598
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_485(int iParam0) //Position: 0x1A07C / 106620
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_486(int iParam0) //Position: 0x1A091 / 106641
{
	iParam0 = iParam0;
	if (IS_ACTOR_VALID(&iLocal_4 + 280[02]))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 280[02], 3.0f))
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 280[12]))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 280[12], 3.0f))
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 280[22]))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 280[22], 3.0f))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_487() //Position: 0x1A10B / 106763
{
	if (IS_PLAYER_TARGETTING_ACTOR(0, &iLocal_4 + 160[02], 1) || IS_PLAYER_TARGETTING_ACTOR(0, &iLocal_4 + 160[12], 1))
	{
		return 1;
	}
	return 0;
}

int Function_488(Vector3 vParam0, struct<2> Param1) //Position: 0x1A132 / 106802
{
	var uVar0;
	struct<2> Var2;
	var uVar4;
	
	uVar0 = Vector(0.0f, 0.0f, -1.0f);
	ROTATE_VECTOR_XZ(&uVar0, Function_489(&vParam0), 0);
	GET_POSITION(&vParam0, &Var2);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var2, Param1, StackVal);
	if (VDOT(&uVar0, &uVar4) < 0.0f)
	{
		return 1;
	}
	return 0;
}

var Function_489(int iParam0) //Position: 0x1A16E / 106862
{
	return GET_HEADING(&iParam0);
}

bool Function_490(var uParam0, int iParam1) //Position: 0x1A17A / 106874
{
	if (GET_CURRENT_GRINGO(&iLocal_4 + 160[02]) != GET_GRINGO_FROM_OBJECT(&uParam0) || GET_CURRENT_GRINGO(&iLocal_4 + 160[12]) != GET_GRINGO_FROM_OBJECT(&iParam1))
	{
		return 1;
	}
	return 0;
}

bool Function_491(int iParam0, int iParam1) //Position: 0x1A1AB / 106923
{
	iParam0 = iParam0;
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 160[02], 3.0f))
		{
			return 1;
		}
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &iLocal_4 + 160[12], 3.0f))
		{
			return 1;
		}
	}
	return 0;
}

void Function_492() //Position: 0x1A202 / 107010
{
	var uVar0;
	float fVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (!iLocal_722)
	{
		if ((*&Global_40060 + 68[0181][175])[3] < 0 || (*&Global_40060 + 68[0181][165])[3] < 0)
		{
			iLocal_722 = 1;
		}
	}
	switch (iLocal_797)
	{
		case 0x00000000:
			if (Function_499(&iLocal_4 + 160[02]) || Function_499(&iLocal_4 + 160[12]))
			{
				if (Function_456(0))
				{
					TASK_PRIORITY_SET(&iLocal_4 + 160[02], 2);
					TASK_PRIORITY_SET(&iLocal_4 + 160[12], 2);
					iLocal_797 = 1;
				}
			}
			if (!bLocal_721)
			{
				if (IS_ACTOR_RIDING(Function_50()))
				{
					if (GET_MOUNT(Function_50()) == &iLocal_4 + 280[02])
					{
						Function_478(4, 16, Function_50(), 0, 1);
						bLocal_721 = true;
					}
					if (GET_MOUNT(Function_50()) == &iLocal_4 + 280[12])
					{
						Function_478(4, 16, Function_50(), 0, 1);
						bLocal_721 = true;
					}
					if (GET_MOUNT(Function_50()) == &iLocal_4 + 280[22])
					{
						Function_478(4, 16, Function_50(), 0, 1);
						bLocal_721 = true;
					}
				}
			}
			if (!bLocal_721)
			{
				if (!iLocal_720)
				{
					fVar1 = -1.0f;
					Function_76(&bVar2, 1);
					Function_76(&bVar2, 16);
					if (Function_495(&iLocal_4 + 160[02], &uVar0, &fVar1, bVar2, 0, 0x40400000))
					{
						Function_478(1, 35, Function_50(), &iLocal_4 + 160[02], 1);
						iLocal_720 = 1;
					}
					else if (Function_495(&iLocal_4 + 160[12], &uVar0, &fVar1, bVar2, 0, 0x40400000))
					{
						Function_478(1, 35, Function_50(), &iLocal_4 + 160[12], 1);
						iLocal_720 = 1;
					}
					if (!Function_294(&bLocal_479))
					{
						if (GET_LAST_ATTACKER(&bLocal_400) == &Global_54076)
						{
							Function_427(&bLocal_479);
						}
					}
					else if (Function_368(&bLocal_479, 0,5f))
					{
						Function_478(1, 6, Function_50(), &bLocal_400, 1);
						iLocal_720 = 1;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_456(0))
			{
				SQUAD_GOALS_CLEAR(&iLocal_4 + 200);
				Function_494(&iLocal_4 + 200);
				Function_215(&iLocal_4 + 160[02]);
				Function_215(&iLocal_4 + 160[12]);
				TASK_FLEE_ACTOR(&iLocal_4 + 160[02], &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_FLEE_ACTOR(&iLocal_4 + 160[12], &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iLocal_4 + 160[02], true);
				TASK_PRIORITY_SET(&iLocal_4 + 160[12], true);
				Function_212();
				Function_493(StackVal, &iLocal_4 + 160[02], Function_212(), 0, 1, 2, 1);
				Function_212();
				Function_493(StackVal, &iLocal_4 + 160[12], Function_212(), 0, 1, 2, 1);
				iLocal_797 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]) || IS_ACTOR_VALID(&iLocal_4 + 160[12]))
			{
				if (!Function_406(&iLocal_4 + 160[02], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					FREE_FROM_HOGTIE(&iLocal_4 + 160[02]);
					uVar3 = GET_MOUNT(&iLocal_4 + 160[02]);
					ACTOR_DISMOUNT_NOW(&iLocal_4 + 160[02]);
					DESTROY_ACTOR(&iLocal_4 + 160[02]);
					if (!Function_406(&uVar3, 1.0f, 25.0f, 1, 1, 0))
					{
						DESTROY_ACTOR(&uVar3);
					}
				}
				if (!Function_406(&iLocal_4 + 160[12], 0x3f800000, 0x42960000, 1, 1, 0))
				{
					FREE_FROM_HOGTIE(&iLocal_4 + 160[12]);
					iVar4 = GET_MOUNT(&iLocal_4 + 160[12]);
					ACTOR_DISMOUNT_NOW(&iLocal_4 + 160[12]);
					DESTROY_ACTOR(&iLocal_4 + 160[12]);
					if (!Function_406(&iVar4, 1.0f, 25.0f, 1, 1, 0))
					{
						DESTROY_ACTOR(&iVar4);
					}
				}
			}
			else
			{
				iLocal_797 = 3;
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_493(var uParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x1A55B / 107867
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideCurve", &iParam3);
	}
	if (!Function_74(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&uParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&uParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&uParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&uParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&uParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&uParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&uParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, 1);
}

void Function_494(bool bParam0) //Position: 0x1A67A / 108154
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

bool Function_495(int iParam0, var uParam1, float fParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1A6AF / 108207
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_498(&iParam0, &Global_54076);
		if (!Function_14(&bParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_496(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_496(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_496(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (fParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_496(&iParam0);
					return 1;
				}
				if (fParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - fParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_496(&iParam0);
						return 1;
					}
				}
				fParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_14(&bParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_496(&iParam0);
				return 1;
			}
		}
		if (!Function_14(&bParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_496(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_496(int iParam0) //Position: 0x1A878 / 108664
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_497(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_497(int iParam0) //Position: 0x1A8B5 / 108725
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_498(var uParam0, int iParam1) //Position: 0x1A8CE / 108750
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

var Function_499(bool bParam0) //Position: 0x1A9C3 / 108995
{
	return DECOR_CHECK_EXIST(&bParam0, "nsharedlaw");
}

void Function_500() //Position: 0x1A9DB / 109019
{
	if (!bLocal_768)
	{
		if (Function_362(Global_46796[4]))
		{
			if (IS_WORLD_SECTOR_LOADED(&uLocal_755))
			{
				if (!IS_DOOR_VALID(&bLocal_747))
				{
					bLocal_747 = Function_236(Global_46796[4], "benedictPoint", "house01", 1);
				}
				else if (IS_DOOR_VALID(&bLocal_747))
				{
					SET_DOOR_LOCK(&bLocal_747, 1);
					bLocal_768 = true;
				}
			}
		}
	}
	if (!IS_DOOR_VALID(&bLocal_747))
	{
		if (bLocal_768)
		{
			bLocal_768 = false;
		}
	}
	else if (bLocal_368 <= 2)
	{
		if (!IS_DOOR_LOCKED(&bLocal_747))
		{
			SET_DOOR_LOCK(&bLocal_747, 1);
		}
	}
	else if (IS_DOOR_LOCKED(&bLocal_747))
	{
		SET_DOOR_LOCK(&bLocal_747, 0);
	}
	return;
}

void Function_501() //Position: 0x1AA91 / 109201
{
	struct<5> Var0;
	
	if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) == &bLocal_394)
	{
		if (!Function_294(&bLocal_491))
		{
			Function_427(&bLocal_491);
		}
		else if (Function_314(&bLocal_739, 1.0f))
		{
			Function_509();
			Function_240(&bLocal_491);
			Function_240(&bLocal_739);
		}
	}
	else
	{
		Function_369(&bLocal_491);
	}
	switch (iLocal_790)
	{
		case 0x00000000:
			if (GET_TASK_STATUS(&bLocal_394, 6) != 0 || GET_TASK_STATUS(&bLocal_394, 6) != 1)
			{
				TASK_CLEAR(&bLocal_394);
				MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_394);
				MEMORY_PREFER_WALKING(&bLocal_394, 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1184[1], &Local_499);
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1184[1], &Var0);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_394, "cs_grave01_deputy", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_394, "cs_grave01_deputy/seth");
				bLocal_502 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_COORD(0, &Local_499, 2.0f, 1);
				TASK_ACTION_PERFORM_AT_POSITION(StackVal, 0, "cs_grave01_deputy/seth", &Local_499, -1.0f, 1, 3212836864);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
				TASK_PRIORITY_SET(&bLocal_394, true);
				TASK_SEQUENCE_RELEASE(bLocal_502, 1);
				MEMORY_CONSIDER_AS(&bLocal_394, &Global_54076, 5);
				AI_IGNORE_ACTOR(&bLocal_394);
				Function_369(&bLocal_739);
				Function_369(&bLocal_491);
				iLocal_790 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_406(&bLocal_394, 1.0f, 10.0f, 1, 1, 0))
			{
				if (!Function_294(&bLocal_739))
				{
					Function_427(&bLocal_739);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_394, &Global_54076, -1f, 0);
				}
				else if (Function_314(&bLocal_739, 10.0f))
				{
					Function_508();
					Function_240(&bLocal_739);
				}
			}
			else if (Function_294(&bLocal_739))
			{
				Function_369(&bLocal_739);
				AI_GOAL_LOOK_CLEAR(&bLocal_394);
			}
			if (iLocal_794 != 6 || iLocal_794 != 7)
			{
				GET_OBJECT_POSITION(&iLocal_4 + 824[2], &Local_499);
				bLocal_502 = TASK_SEQUENCE_OPEN();
				TASK_GO_TO_COORD(0, &Local_499, 1);
				TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&bLocal_394, bLocal_502);
				TASK_PRIORITY_SET(&bLocal_394, true);
				TASK_SEQUENCE_RELEASE(bLocal_502, 1);
				MEMORY_CONSIDER_ACCORDING_TO_FACTION(&bLocal_394, &Global_54076);
				AI_STOP_IGNORING_ACTOR(&bLocal_394);
				iLocal_790 = 2;
			}
			else if (GET_TASK_STATUS(&bLocal_394, 0) == 0)
			{
				iLocal_790 = 0;
			}
			break;
		
		case 0x00000002:
			if (!Function_379(&bLocal_394, &iLocal_4 + 824[2], 2,5f))
			{
				if (GET_TASK_STATUS(&bLocal_394, 0) != 1)
				{
					iLocal_790 = 1;
				}
			}
			else if (!Function_507(&bLocal_394, &Global_54076, 0x3f000000))
			{
				if (GET_TASK_STATUS(&bLocal_394, 22) != 1)
				{
					TASK_FACE_ACTOR(&bLocal_394, &Global_54076, 1, 3212836864);
				}
			}
			else
			{
				GET_OBJECT_POSITION(&iLocal_4 + 824[2], &Local_499);
				Function_349(&Global_54076);
				TASK_ACTION_PERFORM_AT_POSITION(StackVal, StackVal, 0, Function_505("cs_grave01_deputy/seth", &Local_499, Local_499, Function_349(&Global_54076)), -1.0f, 1, 3212836864);
				AI_GOAL_LOOK_AT_ACTOR(&bLocal_394, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
				if (!ACTOR_HAS_ANIM_SET(&bLocal_394, "cs_grave01_deputy"))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 1);
					SET_ANIM_SET_FOR_ACTOR(&bLocal_394, "cs_grave01_deputy", 0);
					SET_ACTION_NODE_FOR_ACTOR(&bLocal_394, "cs_grave01_deputy/seth");
				}
				Function_240(&bLocal_727);
				iLocal_790 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_507(&bLocal_394, &Global_54076, 0x3f000000))
			{
				if (Function_502(&Global_54076, &bLocal_394, 24.0f))
				{
					if (Function_314(&bLocal_727, 9.0f))
					{
						Function_382();
						if (!DECOR_CHECK_EXIST(&bLocal_394, "nseth_wave"))
						{
							if (!ACTOR_HAS_ANIM_SET(&bLocal_394, "cs_grave01_deputy"))
							{
								RESET_ANIM_SET_FOR_ACTOR(&bLocal_394, 1);
								SET_ANIM_SET_FOR_ACTOR(&bLocal_394, "cs_grave01_deputy", 0);
								SET_ACTION_NODE_FOR_ACTOR(&bLocal_394, "cs_grave01_deputy/seth");
								GET_OBJECT_POSITION(&iLocal_4 + 824[2], &Local_499);
								Function_349(&Global_54076);
								TASK_ACTION_PERFORM_AT_POSITION(StackVal, StackVal, 0, Function_505("cs_grave01_deputy/seth", &Local_499, Local_499, Function_349(&Global_54076)), -1.0f, 1, 3212836864);
								LOG_ERROR("SET_ANIM_SET_FOR_ACTOR(m_aCompanion, "cs_grave01_deputy") - WTF???");
							}
							DECOR_SET_BOOL(&bLocal_394, "nseth_wave", 1);
							LOG_ERROR("DECOR_SET_BOOL(m_aCompanion, "seth_wave", TRUE)");
						}
						Function_240(&bLocal_727);
					}
				}
			}
			else
			{
				TASK_CLEAR(&bLocal_394);
				AI_GOAL_LOOK_CLEAR(&bLocal_394);
				if (DECOR_CHECK_EXIST(&bLocal_394, "nseth_wave"))
				{
					DECOR_REMOVE(&bLocal_394, "nseth_wave");
					LOG_ERROR("DECOR_REMOVE(m_aCompanion, "seth_wave")");
				}
				iLocal_790 = 2;
			}
			break;
	}
	return;
}

bool Function_502(var uParam0, var uParam1, float fParam2) //Position: 0x1B03F / 110655
{
	float fVar0;
	
	fVar0 = Function_503(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_503(var uParam0, int iParam1) //Position: 0x1B05E / 110686
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_504(&uVar0, &uVar2);
	return iVar4;
}

var Function_504(struct<2> Param0) //Position: 0x1B07F / 110719
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

var Function_505(struct<2> Param0, struct<2> Param2) //Position: 0x1B09E / 110750
{
	var uVar0;
	
	Function_506(StackVal, StackVal, Param0, Param2, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_506(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1B0B8 / 110776
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

bool Function_507(int iParam0, int iParam1, float fParam2) //Position: 0x1B0DC / 110812
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar6;
	
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		GET_POSITION(&iParam0, &Var0);
		GET_POSITION(&iParam1, &Var2);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Var2, StackVal);
		VNORMALIZE(&uVar4);
		GET_ACTOR_AXIS(&iParam0, &uVar6, 2);
		if (VDOT(&uVar6, &uVar4) >= &fParam2)
		{
			return 1;
		}
		return 0;
	}
	LOG_ERROR("IS_ACTOR_FACING_ACTOR got an invalid Actor(s)! Returning FALSE!");
	return 0;
}

void Function_508() //Position: 0x1B17B / 110971
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_WaitingJonDistrkDeps", "Grave01_WaitingJonDistrkDeps", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_509() //Position: 0x1B1DC / 111068
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_GunOnSethDistrkDeps", "Grave01_GunOnSethDistrkDeps", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_510(int iParam0, var uParam1) //Position: 0x1B23B / 111163
{
	var uVar0;
	var uVar1;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
		if (IS_ITERATOR_VALID(&uVar0))
		{
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_IN_VOLUME(&uVar0, &uParam1);
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				while (IS_OBJECT_VALID(&uVar1))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar1)))
					{
						if (HUD_IS_FADED() || !CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), GET_ACTOR_FROM_OBJECT(&uVar1), 1065353216, 1117126656, 1, 1, 0))
						{
							if (((((((((((((((((((((((((GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 976 || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 977) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 978) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 979) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 980) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 981) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 982) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 983) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 984) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 985) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 986) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 987) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 988) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 989) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 990) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 991) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 992) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 994) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 995) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 996) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 997) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 998) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1000) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1001) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1002) || GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&uVar1)) != 1003)
							{
								DESTROY_OBJECT(&uVar1);
							}
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

void Function_511() //Position: 0x1B44A / 111690
{
	if (iLocal_369 < 4 && iLocal_369 > 105)
	{
		Function_533();
		Function_518(8.0f, 36.0f);
		Function_500();
		if (IS_VOLUME_VALID(&iLocal_4 + 336[8]))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[8]))
			{
				GET_OBJECT_POSITION(&iLocal_4 + 432[2], &Local_499);
				Function_212();
				STREAMING_LOAD_SCENE_EXT(Local_499, Function_212(), 0);
				DESTROY_VOLUME(&iLocal_4 + 336[8]);
			}
		}
		DECOR_SET_FLOAT(&bLocal_396, "LastHitchedTime", GET_CURRENT_GAME_TIME());
	}
	switch (iLocal_369)
	{
		case 0x00000000:
			Function_399(0);
			if (Function_297(&Local_356))
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				SET_ACTOR_HEALTH(&bLocal_394, GET_ACTOR_MAX_HEALTH(&bLocal_394));
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_394, 0);
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(5);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				bLocal_404 = Global_46760[4];
				if (!Function_362(bLocal_404))
				{
					Function_361(&Local_356);
				}
				Function_360(&Global_54076, &iLocal_4 + 624[1], 1, 1, 1);
				Function_360(&bLocal_394, &iLocal_4 + 624[2], 1, 1, 1);
				TASK_STAND_STILL(&bLocal_394, -1.0f, 0, 0);
				Function_240(&bLocal_463);
				iLocal_369 = 1;
			}
			else
			{
				Function_240(&bLocal_463);
				iLocal_369 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_362(Global_46760[4]))
				{
					Function_240(&bLocal_463);
					iLocal_369 = 2;
				}
			}
			break;
		
		case 0x00000002:
			Function_517();
			if (Function_297(&Local_356))
			{
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 0,75f, 1);
				Function_360(&bLocal_394, &iLocal_4 + 624[2], 1, 1, 1);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_394, &iLocal_4 + 1320, 2, 1, 0, 1, false);
				AI_ACTOR_FORCE_SPEED(&bLocal_394, 2);
				ACTOR_POP_NEXT_GAIT(&bLocal_394, 2, 0);
			}
			Function_240(&bLocal_463);
			iLocal_369 = 6;
			break;
		
		case 0x00000006:
			if (Function_512())
			{
				Function_240(&bLocal_463);
				iLocal_369 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_314(&bLocal_463, 10.0f))
				{
					Function_240(&bLocal_463);
					SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_394, 1);
					MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_394);
					iLocal_405[0] = 1;
					Function_240(&bLocal_463);
					bLocal_368 = true;
					iLocal_369 = 0;
				}
			}
			break;
	}
	return;
}

bool Function_512() //Position: 0x1B69A / 112282
{
	if (iLocal_793 > 0)
	{
		if (!HUD_IS_FADED())
		{
			Function_227(&iLocal_4 + 680[15]);
			Function_459(StackVal, "$/cutscene/GRAVE01_CS04_Seq/GRAVE01_CS04_Seq", &uLocal_717, Function_227(&iLocal_4 + 680[15]), 99280, 1, 75.0f, 150.0f, 2, 1, 2, 2, 0, 1);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 336[6]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[6]) || IS_ACTOR_IN_VOLUME(&bLocal_394, &iLocal_4 + 336[6]))
		{
			Function_371("Grave01_sethbp_meet", 0x40f00000, 1, 2, 0, 0, 0, 0);
			iLocal_780 = Function_428(&iLocal_354, "nbpGateway", &iLocal_4 + 336[9], &Global_54076, 1, 330, 4294967295, 0, 0, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_394, 2);
			Function_311(1, 0, 1);
			DESTROY_VOLUME(&iLocal_4 + 336[6]);
		}
	}
	switch (iLocal_793)
	{
		case 0x00000000:
			Function_311(1, 0, 1);
			ADD_BLIP_FOR_OBJECT(&bLocal_398, 334, 0f, 2, 0);
			ABORT_SCRIPTED_CONVERSATION(0);
			Function_516();
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
			Function_371("Grave01_mount_horse_obj", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_240(&bLocal_471);
			iLocal_793 = 1;
			break;
		
		case 0x00000001:
			if (!Function_372(&bLocal_471, 110.0f, 225.0f, &bLocal_394, "Grave01_mount_horse_obj", "GraveRobber_abandoned", &bLocal_383, 0, 0, 0, 4294967295, 1, 0))
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					if (IS_ACTOR_RIDING(&bLocal_394))
					{
						if (!Function_379(&bLocal_394, &iLocal_4 + 624[4], 6.0f))
						{
							iLocal_793 = 2;
						}
						if (Function_314(&bLocal_471, 10.0f))
						{
							iLocal_793 = 2;
						}
					}
				}
				else
				{
					iLocal_793 = 2;
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 3);
				}
			}
			else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 4);
			}
			break;
		
		case 0x00000002:
			Function_257();
			Function_371("Grave01_FOLLOW_SETH_to_bp", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_240(&bLocal_471);
			Function_162(Global_46796[4]);
			Function_215(&bLocal_398);
			Function_311(1, 1, 1);
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_394, -1.0f, -1.0f, 4, 1, 0);
			AUDIO_MUSIC_SET_MOOD("GRAVE_DRAMATIC", 0, 4294967295, 4294967295);
			iLocal_793 = 3;
			break;
		
		case 0x00000003:
			if (!Function_372(&bLocal_471, 110.0f, 225.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 0, 0, 0, 4294967295, 1, 0))
			{
				Function_240(&bLocal_471);
				iLocal_793 = 6;
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 3);
				}
			}
			else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 4);
			}
			break;
		
		case 0x00000006:
			if (!Function_372(&bLocal_471, 110.0f, 225.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 0, 0, 0, 4294967295, 1, 0))
			{
				if (Function_314(&bLocal_471, 4.0f))
				{
					Function_257();
					Function_240(&bLocal_471);
					iLocal_789 = 9;
					iLocal_793 = 7;
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
				{
					TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 3);
				}
			}
			else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 4);
			}
			break;
		
		case 0x00000007:
			if (!Function_372(&bLocal_471, 110.0f, 225.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 0, 0, 0, 4294967295, 1, 0))
			{
				if (Function_456(0))
				{
					Function_257();
					Function_240(&bLocal_471);
					Function_371("Grave01_lose_wanted", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_215(&iLocal_780);
					iLocal_793 = 8;
				}
				else if (IS_OBJECT_VALID(&iLocal_780))
				{
					if (Function_513(&iLocal_780, 0, 1, 0, 0, 0))
					{
						Function_420(&iLocal_780);
						TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_394);
						TASK_OVERRIDE_CLEAR_MOVETYPE(GET_MOUNT(&bLocal_394));
						ABORT_SCRIPTED_CONVERSATION(1);
						iLocal_793 = 9;
						return 1;
					}
				}
			}
			break;
		
		case 0x00000008:
			if (!Function_372(&bLocal_471, 110.0f, 225.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 0, 0, 0, 4294967295, 1, 0))
			{
				if (!Function_456(0))
				{
					Function_257();
					Function_371("Grave01_sethbp_meet", 0x40f00000, 1, 2, 0, 0, 0, 0);
					ADD_BLIP_FOR_OBJECT(&iLocal_780, 330, 0f, 2, 0);
					iLocal_793 = 7;
				}
			}
			break;
		
		case 0x00000009:
			if (!Function_372(&bLocal_471, 110.0f, 225.0f, &bLocal_394, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_383, 0, 0, 0, 4294967295, 1, 0))
			{
				if (IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
				return 1;
			}
			break;
		
		case 0x0000000A:
			break;
	}
	return 0;
}

bool Function_513(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x1BC4C / 113740
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
				Function_515(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_451(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_451(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_514(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_514(&uVar5, &iVar3);
				}
				TASK_DISMOUNT(0, 1);
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

int Function_514(vector3 vParam0) //Position: 0x1BE81 / 114305
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

void Function_515(var uParam0, bool bParam1) //Position: 0x1BEF7 / 114423
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
	else if (!&bParam1 || Function_451(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

void Function_516() //Position: 0x1BF61 / 114529
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_FollowSethHorses", "Grave01_FollowSethHorses", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517() //Position: 0x1BFBA / 114618
{
	int iVar0;
	var uVar1;
	
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 336[0], 4294967295);
	Function_227(&iLocal_4 + 1152[0]);
	Function_224(StackVal, Function_227(&iLocal_4 + 1152[0]), 0, 0);
	Function_227(&iLocal_4 + 1152[0]);
	Function_226(StackVal, Function_227(&iLocal_4 + 1152[0]), &iVar0, &uVar1);
	if (IS_GRINGO_VALID(&iVar0))
	{
		GRINGO_ALLOW_ACTIVATION(&iVar0, false);
	}
	if (IS_GRINGO_VALID(&uVar1))
	{
		GRINGO_ALLOW_ACTIVATION(&uVar1, false);
	}
	if (!ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
	{
		GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
	}
	iLocal_793 = 0;
	if (Function_297(&Local_356) || Global_99145)
	{
		Function_360(&bLocal_398, &iLocal_4 + 624[3], 1, 1, 1);
		TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
		Function_360(&bLocal_396, &iLocal_4 + 624[4], 1, 1, 1);
		TASK_STAND_STILL(&bLocal_396, -1.0f, 0, 0);
	}
	Function_358(&uLocal_718, 3, 0, 4294967295, 4294967295);
	if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Grave01_BanterToBP_v1_AA"))
	{
		iLocal_761 = 0;
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Grave01_BanterToBP_v2_AA"))
	{
		iLocal_761 = 1;
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Grave01_BanterToBP_v3_AA"))
	{
		iLocal_761 = 2;
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Grave01_BanterToBP_v4_AA"))
	{
		iLocal_761 = 3;
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Grave01_BanterToBP_v5_AA"))
	{
		iLocal_761 = 4;
	}
	else if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("Grave01_BanterToBP_v6_AA"))
	{
		iLocal_761 = 5;
	}
	else
	{
		iLocal_761 = 99;
	}
	if (HUD_IS_FADED())
	{
		Function_302(1.0f, "Stage_One().GID_FADE_IN", 0x3f800000);
	}
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 336[4]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 336[4]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 336[4], 15);
	DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 336[4]);
	Function_253(bLocal_368);
	Function_350(StackVal, Function_253(bLocal_368), bLocal_368, Global_46736[0], Function_255(bLocal_368), 0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	iLocal_789 = 0;
	return;
}

void Function_518(bool bParam0, bool bParam1) //Position: 0x1C1FD / 115197
{
	if (IS_VOLUME_VALID(&iLocal_4 + 336[7]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 336[7]))
		{
			ABORT_SCRIPTED_CONVERSATION(1);
			iLocal_805 = 10;
		}
	}
	switch (iLocal_805)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (Function_314(&bLocal_727, 5.0f))
			{
				iLocal_805 = 2;
			}
			break;
		
		case 0x00000002:
			if (!Function_138())
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_394, bParam0))
				{
					Function_525(&iLocal_761);
					iLocal_805 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_394, bParam1))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else
			{
				Function_240(&bLocal_727);
				iLocal_805 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_314(&bLocal_727, 10.0f))
			{
				iLocal_805 = 5;
			}
			break;
		
		case 0x00000005:
			if (!Function_138())
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_394, bParam0))
				{
					Function_525(&iLocal_761);
					iLocal_805 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_394, bParam1))
				{
					ABORT_SCRIPTED_CONVERSATION(1);
				}
			}
			else
			{
				Function_240(&bLocal_727);
				iLocal_805 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_314(&bLocal_727, 15.0f))
			{
				iLocal_805 = 8;
			}
			break;
		
		case 0x00000008:
			if (!Function_138())
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_394, bParam0))
				{
					Function_525(&iLocal_761);
					iLocal_805 = 9;
				}
			}
			break;
		
		case 0x00000009:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_805 = 10;
			}
			break;
		
		case 0x0000000A:
			break;
	}
	Function_519(&bLocal_394, "Grave01_ThrownOffHorseBP", "Grave01_GunOnSethBP", "Grave01_GunOnAmbBP", "Grave01_ShootsGunRandBP");
	return;
}

void Function_519(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x1C3F6 / 115702
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	iVar3 = 0;
	iVar4 = 0;
	uVar5 = "";
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	if (!Function_294(&bLocal_487))
	{
		Function_240(&bLocal_487);
	}
	else if (Function_314(&bLocal_487, 5.0f))
	{
		if (DECOR_GET_BOOL(&Global_54076, "beingBucked"))
		{
			if (IS_ACTOR_VALID(&iParam0))
			{
				if (ACTORS_IN_RANGE(&iParam0, &Global_54076, 20.0f))
				{
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam1, &uParam1, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
					}
					else
					{
						Function_524();
					}
					Function_240(&bLocal_487);
				}
			}
		}
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_523(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				iVar9 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
					{
						if (Function_314(&bLocal_487, 5.0f))
						{
							if (IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam4, &uParam4, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
							}
							else
							{
								Function_522();
							}
							Function_240(&bLocal_487);
						}
					}
				}
				if (IS_ACTOR_VALID(&iVar9))
				{
					if (IS_ACTOR_HUMAN(&iVar9))
					{
						if (&iVar9 == &iParam0)
						{
							if (Function_294(&bLocal_491))
							{
								if (Function_314(&bLocal_491, 0,25f))
								{
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam2, &uParam2, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
									}
									else
									{
										Function_521();
									}
									Function_240(&bLocal_487);
								}
							}
							else
							{
								Function_240(&bLocal_491);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(&Global_54076, &iVar9))
						{
							if (Function_294(&bLocal_491))
							{
								if (Function_314(&bLocal_491, 0,25f))
								{
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iParam0, &uParam3, &uParam3, iVar0, iVar1, iVar2, 3, iVar3, iVar4, &uVar5, iVar6, iVar7, iVar8);
									}
									else
									{
										Function_520();
									}
									Function_240(&bLocal_487);
								}
							}
							else
							{
								Function_240(&bLocal_491);
							}
						}
						else if (Function_294(&bLocal_491))
						{
							Function_369(&bLocal_491);
						}
					}
					else if (Function_294(&bLocal_491))
					{
						Function_369(&bLocal_491);
					}
				}
				else if (Function_294(&bLocal_491))
				{
					Function_369(&bLocal_491);
				}
			}
			else if (Function_294(&bLocal_491))
			{
				Function_369(&bLocal_491);
			}
		}
		else if (Function_294(&bLocal_491))
		{
			Function_369(&bLocal_491);
		}
	}
}

void Function_520() //Position: 0x1C641 / 116289
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_GunOnAmbBP", "Grave01_GunOnAmbBP", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_521() //Position: 0x1C68E / 116366
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_GunOnSethBP", "Grave01_GunOnSethBP", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1C6DD / 116445
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsGunRandBP", "Grave01_ShootsGunRandBP", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_523(bool bParam0) //Position: 0x1C734 / 116532
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

void Function_524() //Position: 0x1C77A / 116602
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ThrownOffHorseBP", "Grave01_ThrownOffHorseBP", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_525(int iParam0) //Position: 0x1C7D3 / 116691
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_532();
			break;
		
		case 0x00000001:
			Function_531();
			break;
		
		case 0x00000002:
			Function_530();
			break;
		
		case 0x00000003:
			Function_529();
			break;
		
		case 0x00000004:
			Function_528();
			break;
		
		case 0x00000005:
			Function_527();
			break;
		
		default:
			Function_526();
			iLocal_805 = 10;
			break;
	}
	iParam0++;
	return;
}

void Function_526() //Position: 0x1C83F / 116799
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_NoTalk", "Grave01_NoTalk", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_527() //Position: 0x1C884 / 116868
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AA", "Grave01_BanterToBP_v6_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v6_AB", "Grave01_BanterToBP_v6_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AC", "Grave01_BanterToBP_v6_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v6_AD", "Grave01_BanterToBP_v6_AD", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AE1", "Grave01_BanterToBP_v6_AE1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AE2", "Grave01_BanterToBP_v6_AE2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AE3", "Grave01_BanterToBP_v6_AE3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v6_AF", "Grave01_BanterToBP_v6_AF", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AG1", "Grave01_BanterToBP_v6_AG1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AG2", "Grave01_BanterToBP_v6_AG2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v6_AH", "Grave01_BanterToBP_v6_AH", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AI1", "Grave01_BanterToBP_v6_AI1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AI2", "Grave01_BanterToBP_v6_AI2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AI3", "Grave01_BanterToBP_v6_AI3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v6_AJ", "Grave01_BanterToBP_v6_AJ", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AK1", "Grave01_BanterToBP_v6_AK1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v6_AK2", "Grave01_BanterToBP_v6_AK2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v6_AL", "Grave01_BanterToBP_v6_AL", 1, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_528() //Position: 0x1CD20 / 118048
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v5_AA", "Grave01_BanterToBP_v5_AA", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AB", "Grave01_BanterToBP_v5_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v5_AC", "Grave01_BanterToBP_v5_AC", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AD", "Grave01_BanterToBP_v5_AD", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v5_AE", "Grave01_BanterToBP_v5_AE", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AF1", "Grave01_BanterToBP_v5_AF1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AF2", "Grave01_BanterToBP_v5_AF2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v5_AG", "Grave01_BanterToBP_v5_AG", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AH1", "Grave01_BanterToBP_v5_AH1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AH2", "Grave01_BanterToBP_v5_AH2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v5_AI", "Grave01_BanterToBP_v5_AI", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AJ1", "Grave01_BanterToBP_v5_AJ1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AJ2", "Grave01_BanterToBP_v5_AJ2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v5_AJ3", "Grave01_BanterToBP_v5_AJ3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v5_AK", "Grave01_BanterToBP_v5_AK", 1, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_529() //Position: 0x1D0F9 / 119033
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v4_AA", "Grave01_BanterToBP_v4_AA", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AB", "Grave01_BanterToBP_v4_AB", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v4_AC", "Grave01_BanterToBP_v4_AC", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AD1", "Grave01_BanterToBP_v4_AD1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AD2", "Grave01_BanterToBP_v4_AD2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AD3", "Grave01_BanterToBP_v4_AD3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v4_AE", "Grave01_BanterToBP_v4_AE", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AF1", "Grave01_BanterToBP_v4_AF1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AF2", "Grave01_BanterToBP_v4_AF2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AF3", "Grave01_BanterToBP_v4_AF3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v4_AF4", "Grave01_BanterToBP_v4_AF4", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_530() //Position: 0x1D3D6 / 119766
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v3_AA", "Grave01_BanterToBP_v3_AA", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AB1", "Grave01_BanterToBP_v3_AB1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AB2", "Grave01_BanterToBP_v3_AB2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v3_AC", "Grave01_BanterToBP_v3_AC", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AD1", "Grave01_BanterToBP_v3_AD1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AD2", "Grave01_BanterToBP_v3_AD2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v3_AE", "Grave01_BanterToBP_v3_AE", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AF1", "Grave01_BanterToBP_v3_AF1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AF2", "Grave01_BanterToBP_v3_AF2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v3_AG", "Grave01_BanterToBP_v3_AG", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AH1", "Grave01_BanterToBP_v3_AH1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v3_AH2", "Grave01_BanterToBP_v3_AH2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v3_AI", "Grave01_BanterToBP_v3_AI", 1, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_531() //Position: 0x1D733 / 120627
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AA", "Grave01_BanterToBP_v2_AA", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v2_AB", "Grave01_BanterToBP_v2_AB", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AC", "Grave01_BanterToBP_v2_AC", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v2_AD", "Grave01_BanterToBP_v2_AD", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AE", "Grave01_BanterToBP_v2_AE", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v2_AF1", "Grave01_BanterToBP_v2_AF1", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v2_AF2", "Grave01_BanterToBP_v2_AF2", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AG", "Grave01_BanterToBP_v2_AG", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v2_AH", "Grave01_BanterToBP_v2_AH", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AI", "Grave01_BanterToBP_v2_AI", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v2_AJ", "Grave01_BanterToBP_v2_AJ", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AK1", "Grave01_BanterToBP_v2_AK1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AK2", "Grave01_BanterToBP_v2_AK2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AK3", "Grave01_BanterToBP_v2_AK3", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v2_AL", "Grave01_BanterToBP_v2_AL", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AM1", "Grave01_BanterToBP_v2_AM1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v2_AM2", "Grave01_BanterToBP_v2_AM2", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_532() //Position: 0x1DB8A / 121738
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v1_AA", "Grave01_BanterToBP_v1_AA", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AB1", "Grave01_BanterToBP_v1_AB1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AB2", "Grave01_BanterToBP_v1_AB2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v1_AC", "Grave01_BanterToBP_v1_AC", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AD1", "Grave01_BanterToBP_v1_AD1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AD2", "Grave01_BanterToBP_v1_AD2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v1_AE", "Grave01_BanterToBP_v1_AE", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AF1", "Grave01_BanterToBP_v1_AF1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AF2", "Grave01_BanterToBP_v1_AF2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v1_AG", "Grave01_BanterToBP_v1_AG", 1, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AH1", "Grave01_BanterToBP_v1_AH1", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Grave01_BanterToBP_v1_AH2", "Grave01_BanterToBP_v1_AH2", 0, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Grave01_BanterToBP_v1_AI", "Grave01_BanterToBP_v1_AI", 1, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_533() //Position: 0x1DEE7 / 122599
{
	if (!DECOR_CHECK_EXIST(&iLocal_354, "m_tSethTimer"))
	{
		DECOR_SET_FLOAT(&iLocal_354, "m_tSethTimer", GET_CURRENT_GAME_TIME());
	}
	switch (iLocal_789)
	{
		case 0x00000000:
			MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_394);
			if (GET_TASK_STATUS(&bLocal_394, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_394, &iLocal_4 + 1320, 2, 1, 0, 1, false);
			}
			iLocal_789 = 1;
			break;
		
		case 0x00000001:
			if (ACTORS_IN_RANGE(&bLocal_394, &bLocal_396, 2,5f) || GET_TASK_STATUS(&bLocal_394, 43) != 0)
			{
				TASK_MOUNT(&bLocal_394, &bLocal_396, 0, 1, 2, 161);
				iLocal_789 = 3;
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				if (GET_RIDER(&bLocal_396) == "")
				{
					TASK_MOUNT(&bLocal_394, &bLocal_396, 0, 1, 2, 2147483647);
				}
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
			{
				MEMORY_PREFER_RIDING(&bLocal_394, true);
				iLocal_789 = 6;
			}
			break;
		
		case 0x00000006:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&bLocal_394))
			{
				MEMORY_PREFER_RIDING(&bLocal_394, true);
				bLocal_502 = 2;
				GET_PATH_POINT(&iLocal_4 + 1328, bLocal_502, &Local_499);
				TASK_GO_TO_COORD(&bLocal_394, &Local_499, 2);
				iLocal_789 = 7;
			}
			break;
		
		case 0x00000007:
			if (GET_TASK_STATUS(&bLocal_394, 1) == 0)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) || !ACTORS_IN_RANGE(&Global_54076, &bLocal_394, 20.0f))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_394, &iLocal_4 + 1328, 2, 0, 0, 1, false);
					TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_394, 1.0f);
					TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_394, 13.0f);
					AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_394, 1);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_394, 2);
					AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(&bLocal_394, 0);
					DECOR_SET_FLOAT(&iLocal_354, "m_tSethTimer", GET_CURRENT_GAME_TIME());
					iLocal_789 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_354, "m_tSethTimer")) < 2.0f)
			{
				SET_ANIM_SET_FOR_ACTOR(&bLocal_394, "stand_ambient", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_394, "stand_ambient/one_hnd_hrs");
				TASK_ACTION_PERFORM(&bLocal_394, "stand_ambient/one_hnd_hrs");
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					Function_537();
				}
				else
				{
					Function_536();
				}
				if (iLocal_805 < 0)
				{
					Function_427(&bLocal_727);
					iLocal_805 = 1;
				}
				iLocal_789 = 5;
			}
			break;
		
		case 0x00000005:
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_394, &iLocal_4 + 1328, 4, 0, 0, 1, false);
			TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_394, 1.0f);
			TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(GET_MOUNT(&bLocal_394), 15.0f);
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_394, 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_394, 2);
			AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(&bLocal_394, 0);
			iLocal_789 = 8;
			break;
		
		case 0x00000008:
			if (Function_535(&bLocal_394, &iLocal_4 + 1328) > 8.0f)
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 5);
				iLocal_789 = 13;
			}
			break;
		
		case 0x00000009:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) || !ACTORS_IN_RANGE(&Global_54076, &bLocal_394, 20.0f))
			{
				MEMORY_PREFER_RIDING(&bLocal_394, true);
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_394, &iLocal_4 + 1328, 3, 0, 0, 1, false);
				TASK_OVERRIDE_SET_MOVESPEED_NORMALIZED(&bLocal_394, 1.0f);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(GET_MOUNT(&bLocal_394), 17.0f);
				TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&bLocal_394, 17.0f);
				AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&bLocal_394, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_394, 2);
				AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(&bLocal_394, 0);
				if (iLocal_805 < 0)
				{
					Function_427(&bLocal_727);
					iLocal_805 = 1;
				}
				iLocal_789 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_535(&bLocal_394, &iLocal_4 + 1328) > 3,3f)
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_394, 5);
				iLocal_789 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_535(&bLocal_394, &iLocal_4 + 1328) > 3,3f)
			{
				REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_394);
				iLocal_789 = 12;
			}
			break;
		
		case 0x0000000C:
			if (ACTORS_IN_RANGE(&bLocal_394, &Global_54076, 8.0f))
			{
				if (!ACTORS_IN_RANGE(&bLocal_394, &Global_54076, 2,5f))
				{
					Function_534();
					iLocal_789 = 13;
				}
			}
			break;
		
		case 0x0000000D:
			break;
		
		case 0x0000000E:
			if (STREAMING_IS_WORLD_LOADED())
			{
				TASK_CLEAR(&bLocal_394);
				iLocal_789 = 5;
			}
			break;
	}
	return;
}

void Function_534() //Position: 0x1E319 / 123673
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_SethArrivesBPB4Jon", "Grave01_SethArrivesBPB4Jon", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_535(var uParam0, float fParam1) //Position: 0x1E376 / 123766
{
	struct<2> Var0;
	int iVar2;
	struct<2> Var3;
	
	iVar2 = (GET_PATH_NUM_POINTS(&fParam1) - 1);
	GET_PATH_POINT(&fParam1, iVar2, &Var0);
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_381(&uParam0);
		Var3 = Function_381(&uParam0);
		return VDIST(Var3, Var0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

void Function_536() //Position: 0x1E406 / 123910
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_SettOffBPoint", "Grave01_SettOffBPoint", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_537() //Position: 0x1E459 / 123993
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_NoFollowHorses", "Grave01_NoFollowHorses", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_538() //Position: 0x1E4AE / 124078
{
	switch (iLocal_369)
	{
		case 0x00000006:
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_08", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_552(&Local_356, 1);
			iLocal_354 = CREATE_LAYOUT("m_DynamicLayout");
			Function_551();
			uLocal_755 = CREATE_WORLD_SECTOR(&iLocal_354, "benedictPoint");
			uLocal_757 = CREATE_WORLD_SECTOR(&iLocal_354, "coots");
			iLocal_369 = 9;
			break;
		
		case 0x00000009:
			if (Function_550())
			{
				if (!Function_297(&Local_356))
				{
					Local_499 = Vector(-1782,882f, 24,092f, 2845,805f);
					TELEPORT_ACTOR(&Global_54076, &Local_499, 1, 1, 1);
					Function_547(Local_356, 0);
					iLocal_369 = 7;
				}
				else
				{
					iLocal_369 = 10;
				}
			}
			break;
		
		case 0x00000007:
			if ((STREAMING_IS_WORLD_LOADED() && IS_WORLD_SECTOR_LOADED(&uLocal_757)) && Function_362(Global_46760[4]))
			{
				uLocal_778 = Function_315(Global_46760[4], "coots", "grave", 20);
				if (IS_PROP_STREAMED_IN(&uLocal_778))
				{
					GRAVE_SET_DUG_UP(&uLocal_778, 0);
					GRAVE_SET_DUG_UP(&uLocal_778, 1);
					TELEPORT_ACTOR_WITH_HEADING(Function_548(), &Global_54076, Vector(-1781,88f, 24,0942f, 2838,79f), 27,737f, 1, 1, 1);
					Function_240(&bLocal_463);
					if (!ACTOR_HAS_WEAPON(GET_PLAYER_ACTOR(0), 21))
					{
						iLocal_369 = 12;
					}
					else
					{
						iLocal_369 = 8;
					}
				}
			}
			break;
		
		case 0x00000008:
			if (Function_285("$/cutscene/GRAVE_01/GRAVE_01", &iLocal_370, &Local_356, &bLocal_368, 68974, 68145, 62017, 59914, 58985, 58702, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_369 = 10;
			}
			break;
		
		case 0x0000000C:
			if (Function_285("$/cutscene/GRAVE01_seq/GRAVE01_seq", &iLocal_370, &Local_356, &bLocal_368, 68974, 68145, 62017, 59914, 58985, 58702, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_369 = 10;
			}
			break;
		
		case 0x0000000A:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_461 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			Function_311(1, 1, 1);
			SET_CRIPPLE_ENABLE(&bLocal_394, 0);
			SET_ACTOR_FACTION(&bLocal_394, 20);
			AI_BEHAVIOR_SET_ALLOW(&bLocal_394, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_394, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_394, GET_ACTOR_MAX_HEALTH(&bLocal_394));
			DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_394);
			RESET_ACTOR_GAITS(&bLocal_398, 0);
			TASK_PRIORITY_SET(&bLocal_398, true);
			TASK_STAND_STILL(&bLocal_398, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&bLocal_398, 50.0f);
			SET_ACTOR_HEALTH(&bLocal_398, GET_ACTOR_MAX_HEALTH(&bLocal_398));
			Function_427(&bLocal_463);
			Function_427(&bLocal_467);
			Function_427(&bLocal_471);
			Function_427(&bLocal_731);
			Function_427(&bLocal_739);
			Function_427(&bLocal_475);
			Function_427(&bLocal_723);
			Function_427(&bLocal_771);
			Function_545(0, 0);
			Function_191(1048576);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1088);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1089);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1090);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1060);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1061);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1062);
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(1063);
			Function_167(114688);
			Function_364(256);
			Function_543(&uLocal_503, &iLocal_354);
			Function_412(&(Local_557[015]), &bLocal_394, "GraveRobber", 1, 0x5f5e100, 1);
			Function_412(&(Local_557[115]), &bLocal_396, "GraveRobber_horse", 0, 0x5f5e100, 1);
			Function_542(&(Local_557[415]), &iLocal_354, 0x5f5e100);
			bLocal_368 = false;
			iLocal_369 = 0;
			Function_540(&Local_356, &bLocal_368, &iLocal_369);
			Function_539(StackVal, StackVal, StackVal, StackVal, StackVal, Local_356);
			switch (bLocal_368)
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
		
		case 0x0000000B:
			break;
	}
	return;
}

void Function_539(struct<41> Param0) //Position: 0x1E8DE / 125150
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_368 = false;
			break;
		
		case 0x00000002:
			bLocal_368 = true;
			break;
		
		case 0x00000003:
			bLocal_368 = 2;
			break;
		
		case 0x00000004:
			bLocal_368 = 3;
			break;
		
		case 0x00000005:
			bLocal_368 = 4;
			break;
		
		case 0x00000006:
			bLocal_368 = 5;
			break;
		
		case 0x00000007:
			bLocal_368 = 6;
			break;
		
		case 0x00000008:
			bLocal_368 = 7;
			break;
		
		case 0x00000009:
			bLocal_368 = 8;
			break;
		
		case 0x0000000A:
			bLocal_368 = 101;
			break;
	}
}

void Function_540(int iParam0, var uParam1, int iParam2) //Position: 0x1E973 / 125299
{
	if (Function_297(&iParam0))
	{
		uParam1 = Function_397(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_541();
	}
	return;
}

void Function_541() //Position: 0x1E9AF / 125359
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

int Function_542(struct<69> Param0) //Position: 0x1EA00 / 125440
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
	Function_212();
	Function_212();
	Param0 = CREATE_POINT_IN_LAYOUT(&uParam1, "nMFT_Dummy", Function_212(), Function_212());
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	Param0.f_56 = 8;
	Param0.f_60 = 2;
	if (!Function_417(&Param0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_416(&Param0, 0);
	Param0.f_68 = 0;
	Function_413(&Param0, &iParam2, 0);
	Function_423(&Param0, 3);
	return 1;
}

int Function_543(struct<2>[] Param0) //Position: 0x1EB21 / 125729
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_544(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_544(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_544(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_544(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_544(struct<13> Param0) //Position: 0x1F1FA / 127482
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
	Function_76(&Param0 + 12, iParam4);
	return 1;
}

void Function_545(int iParam0, int iParam1) //Position: 0x1F2C9 / 127689
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
			Function_546(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_546(struct<113> Param0) //Position: 0x1F350 / 127824
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

void Function_547(int iParam0, var uParam1) //Position: 0x1F3AE / 127918
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = uParam1;
	return;
}

var Function_548() //Position: 0x1F3C9 / 127945
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	Function_549(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Grave01_layout");
	*(&iLocal_4 + 424) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "VolStage01_set");
	*(&iLocal_4 + 336[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AmbientHorsesClearVol", 2,802597E-45f, Vector(-1789,582f, 24,094f, 2839,307f), Vector(1,347587f, 19,59411f, -0,6268717f), Vector(4,547875f, 1.0f, 3,026186f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[0]);
	*(&iLocal_4 + 336[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "vDepIdleVol", 2,802597E-45f, Vector(-3689,115f, 8,434199f, 3496,962f), Vector(0.0f, -90,48055f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[1]);
	*(&iLocal_4 + 336[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "actNaturalVol", 2,802597E-45f, Vector(-3689,457f, 8,981612f, 3483,14f), Vector(0.0f, -89,21487f, 0.0f), Vector(8.0f, 10,18901f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[2]);
	*(&iLocal_4 + 336[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "sheriffOfficeVol", 2,802597E-45f, Vector(-3668,586f, 8,193914f, 3490,878f), Vector(0.0f, -73,94118f, 0.0f), Vector(9,892257f, 9,632714f, 5.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[3]);
	*(&iLocal_4 + 336[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "escapedPrisonerVol", 2,802597E-45f, Vector(-3669,711f, 8,967898f, 3490,818f), Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 10.0f, 12.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[4]);
	*(&iLocal_4 + 336[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "vDepBanter01", 2,802597E-45f, Vector(-3672,12f, 8,3f, 3490,5f), Vector(0.0f, -90,48055f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[5]);
	*(&iLocal_4 + 336[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "MeetAtBp", 2,802597E-45f, Vector(-3723,07f, 15,06267f, 3471,054f), Vector(-7,093612f, -58,818f, 6,807242f), Vector(241,1653f, 71,82022f, 448,526f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[6]);
	*(&iLocal_4 + 336[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StopBanterVol", 2,802597E-45f, Vector(-3723,07f, 15,06267f, 3471,054f), Vector(-7,093612f, -58,818f, 6,807242f), Vector(155,957f, 71,82022f, 224,526f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[7]);
	*(&iLocal_4 + 336[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StreamingLoadScene02Ext", 2,802597E-45f, Vector(-3699,25f, 8,780715f, 3434,93f), Vector(0.0f, -164,382f, 0.0f), Vector(30.0f, 8.0f, 30.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[8]);
	*(&iLocal_4 + 336[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BP_GatewayVol", 2,802597E-45f, Vector(-3699,25f, 8,780715f, 3434,93f), Vector(0.0f, -164,382f, 0.0f), Vector(8.0f, 2.0f, 8.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 424, &iLocal_4 + 336[9]);
	*(&iLocal_4 + 464) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "VolStage02_set");
	*(&iLocal_4 + 432[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AmbientHorseCatcherVol", 2,802597E-45f, Vector(-3687,316f, 9,934548f, 3487,177f), Vector(0.0f, 0.0f, 0.0f), Vector(18,61913f, 7,492025f, 8,603473f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 432[0]);
	*(&iLocal_4 + 432[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "tempBountyStation", 2,802597E-45f, Vector(-3689,958f, 9,503268f, 3469,421f), Vector(0.0f, -89,21487f, 0.0f), Vector(6,543672f, 10.0f, 7,217387f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 432[1]);
	*(&iLocal_4 + 432[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ShackDoorVol", 2,802597E-45f, Vector(-3671,282f, 9,675174f, 3491,431f), Vector(0.0f, 106,5159f, 0.0f), Vector(1,5f, 3,5f, 1,5f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 432[2]);
	*(&iLocal_4 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "VolStage03_set");
	*(&iLocal_4 + 472[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SethDropoffVol", 2,802597E-45f, Vector(-3689,449f, 9,99006f, 3511,448f), Vector(0.0f, 7,914557f, 0,8332543f), Vector(7,68383f, 6,100899f, 5,889816f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 496, &iLocal_4 + 472[0]);
	*(&iLocal_4 + 472[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nvWatchLaw", 2,802597E-45f, Vector(-3685,755f, 9,5f, 3485,583f), Vector(0.0f, 0.0f, 0.0f), Vector(4.0f, 10.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 496, &iLocal_4 + 472[1]);
	*(&iLocal_4 + 552) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "VolStage04_set");
	*(&iLocal_4 + 504[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "vSethCorralIdle04", 2,802597E-45f, Vector(-3688f, 8,031372f, 3514,646f), Vector(0.0f, 0.0f, 0.0f), Vector(7.0f, 7.0f, 7.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 504[0]);
	*(&iLocal_4 + 504[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "vRailmanReact04", 2,802597E-45f, Vector(-3690,287f, 10,14608f, 3472,271f), Vector(0.0f, 0.0f, 0.0f), Vector(7.0f, 7.0f, 11,3974f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 504[1]);
	*(&iLocal_4 + 504[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "vTelegraphInterior04", 2,802597E-45f, Vector(-3690,287f, 10,14608f, 3472,271f), Vector(0.0f, 0.0f, 0.0f), Vector(7.0f, 7.0f, 11,3974f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 504[2]);
	*(&iLocal_4 + 504[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "vTelegraphInteriorSmall04", 2,802597E-45f, Vector(-3690,287f, 10,14608f, 3472,271f), Vector(0.0f, 0.0f, 0.0f), Vector(5,5f, 7.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 504[3]);
	*(&iLocal_4 + 504[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "vBounryPayRadius", 4,203895E-45f, Vector(-3691,28f, 10,03f, 3470,77f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 552, &iLocal_4 + 504[4]);
	*(&iLocal_4 + 608) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutSceneVol_set");
	*(&iLocal_4 + 560[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol01", 2,802597E-45f, Vector(-1783,612f, 27,19054f, 2857,331f), Vector(0.0f, 18,61931f, 0.0f), Vector(58,41224f, 7,537014f, 42,98372f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 608, &iLocal_4 + 560[0]);
	*(&iLocal_4 + 560[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol02", 2,802597E-45f, Vector(-3682,947f, 13,13171f, 3467,233f), Vector(0.0f, 0.0f, 0.0f), Vector(36,44472f, 15.0f, 65,11225f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 608, &iLocal_4 + 560[1]);
	*(&iLocal_4 + 560[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol03", 2,802597E-45f, Vector(-3683,063f, 10,61069f, 3492,276f), Vector(0.0f, 0.0f, 0.0f), Vector(59,71825f, 12.0f, 33,5435f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 608, &iLocal_4 + 560[2]);
	*(&iLocal_4 + 560[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVol04", 2,802597E-45f, Vector(-3682,947f, 13,13171f, 3467,233f), Vector(0.0f, 0.0f, 0.0f), Vector(36,44472f, 15.0f, 65,11225f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 608, &iLocal_4 + 560[3]);
	*(&iLocal_4 + 560[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneVolLast", 2,802597E-45f, Vector(-3731,823f, 10,9098f, 3410,146f), Vector(0.0f, 48,48432f, 0.0f), Vector(40.0f, 15.0f, 120.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 608, &iLocal_4 + 560[4]);
	*(&iLocal_4 + 616) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 624[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-1782,368f, 24,09085f, 2841,44f), Vector(0.0f, 27,737f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[0], &iLocal_4 + 616);
	*(&iLocal_4 + 624[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd01", Vector(-1782,368f, 24,09085f, 2841,44f), Vector(0.0f, 27,737f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[1], &iLocal_4 + 616);
	*(&iLocal_4 + 624[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd01", Vector(-1780,668f, 24,0941f, 2840.0f), Vector(0.0f, 18,1253f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[2], &iLocal_4 + 616);
	*(&iLocal_4 + 624[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart01", Vector(-1788,917f, 24,094f, 2839,089f), Vector(0.0f, 188,563f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[3], &iLocal_4 + 616);
	*(&iLocal_4 + 624[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart01", Vector(-1790,248f, 24,094f, 2839,525f), Vector(0.0f, 188,679f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[4], &iLocal_4 + 616);
	*(&iLocal_4 + 672) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 680[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(-3700f, 8,437137f, 3440.0f), Vector(0.0f, 210,9198f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[0], &iLocal_4 + 672);
	*(&iLocal_4 + 680[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd02", Vector(-3686,7f, 9,53f, 3479,93f), Vector(0.0f, 274,1f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[1], &iLocal_4 + 672);
	*(&iLocal_4 + 680[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart02", Vector(-3696,107f, 8,031364f, 3434,25f), Vector(0.0f, 172,9235f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[2], &iLocal_4 + 672);
	*(&iLocal_4 + 680[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd02", Vector(-3695,442f, 9,53181f, 3477,67f), Vector(0.0f, 484,5761f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[3], &iLocal_4 + 672);
	*(&iLocal_4 + 680[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BountyStation", Vector(-3693,029f, 9,503268f, 3468,932f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[4], &iLocal_4 + 672);
	*(&iLocal_4 + 680[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart02", Vector(-3699,25f, 8,280715f, 3434,93f), Vector(0.0f, 210,9198f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[5], &iLocal_4 + 672);
	*(&iLocal_4 + 680[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd02", Vector(-3700f, 8,437137f, 3440.0f), Vector(0.0f, 210,4015f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[6], &iLocal_4 + 672);
	*(&iLocal_4 + 680[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEnd02", Vector(-3696.0f, 8,031364f, 3440f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[7], &iLocal_4 + 672);
	*(&iLocal_4 + 680[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dep01HorsePos01", Vector(-3682,189f, 8,831698f, 3487,187f), Vector(0.0f, 88,60774f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[8], &iLocal_4 + 672);
	*(&iLocal_4 + 680[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dep02HorsePos01", Vector(-3691,865f, 8,980962f, 3488,966f), Vector(0.0f, -2,553968f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[9], &iLocal_4 + 672);
	*(&iLocal_4 + 680[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Dep02HorsePos02", Vector(-3694,644f, 8,980962f, 3488,966f), Vector(0.0f, -10,68331f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[10], &iLocal_4 + 672);
	*(&iLocal_4 + 680[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy00IdlePos02", Vector(-3672,12f, 8,3f, 3490,5f), Vector(0.0f, 109,4623f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[11], &iLocal_4 + 672);
	*(&iLocal_4 + 680[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Deputy01ChairPos02", Vector(-3672,527f, 8,273301f, 3489,327f), Vector(0.0f, 87,00823f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[12], &iLocal_4 + 672);
	*(&iLocal_4 + 680[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CS02_PlayerPos02", Vector(-3680,953f, 8,67632f, 3481,185f), Vector(0.0f, 106,7931f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[13], &iLocal_4 + 672);
	*(&iLocal_4 + 680[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CS02_CompanionPos02", Vector(-3681,944f, 8,796165f, 3482,196f), Vector(0.0f, 107,3452f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[14], &iLocal_4 + 672);
	*(&iLocal_4 + 680[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Preload_GRAVE01_CS04_Seq", Vector(-3700f, 8,437137f, 3440.0f), Vector(0.0f, 210,9198f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 680[15], &iLocal_4 + 672);
	*(&iLocal_4 + 816) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 824[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(-3695,43f, 8,98f, 3480,61f), Vector(0.0f, 347,08f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 824[0], &iLocal_4 + 816);
	*(&iLocal_4 + 824[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd03", Vector(-3688,221f, 9,531811f, 3486,933f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 824[1], &iLocal_4 + 816);
	*(&iLocal_4 + 824[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart03", Vector(-3695,442f, 9,53181f, 3477,67f), Vector(0.0f, 484,5761f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 824[2], &iLocal_4 + 816);
	*(&iLocal_4 + 824[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd03", Vector(-3677,817f, 8,689f, 3494,339f), Vector(0.0f, 82,1198f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 824[3], &iLocal_4 + 816);
	*(&iLocal_4 + 824[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "InformantStart03", Vector(-3670,521f, 8,478954f, 3491,372f), Vector(-0,02478373f, 465,7885f, 0,2023945f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 824[4], &iLocal_4 + 816);
	*(&iLocal_4 + 824[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "InformantEnd03", Vector(-3708.0f, 8,031364f, 3488f), Vector(0,01155035f, 774,2802f, 0,2356208f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 824[5], &iLocal_4 + 816);
	*(&iLocal_4 + 824[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Preload_GRAVE01_CS04_C_Seq", Vector(-3689,825f, 9,531811f, 3484,877f), Vector(0.0f, 187,246f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 824[6], &iLocal_4 + 816);
	*(&iLocal_4 + 888) = CREATE_OBJECTSET_IN_LAYOUT("CutScene04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 896[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart04", Vector(-3694,929f, 9,194441f, 3515,268f), Vector(-0,785f, -74,765f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[0], &iLocal_4 + 888);
	*(&iLocal_4 + 896[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd04", Vector(-3694,157f, 8,031368f, 3508f), Vector(0.0f, -5,91811f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[1], &iLocal_4 + 888);
	*(&iLocal_4 + 896[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd04", Vector(-3692,001f, 8,109361f, 3501,406f), Vector(0.0f, -22,03362f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[2], &iLocal_4 + 888);
	*(&iLocal_4 + 896[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart04", Vector(-3700f, 8,437137f, 3440.0f), Vector(0.0f, 210,1573f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[3], &iLocal_4 + 888);
	*(&iLocal_4 + 896[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart04", Vector(-3696.0f, 8,031364f, 3440f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[4], &iLocal_4 + 888);
	*(&iLocal_4 + 896[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MosesStart04", Vector(-3688,63f, 8,031f, 3514,049f), Vector(0.0f, -61,1f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[5], &iLocal_4 + 888);
	*(&iLocal_4 + 896[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RailmanStart04", Vector(-3691,413f, 9,282642f, 3469,186f), Vector(0.0f, -184,6211f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[6], &iLocal_4 + 888);
	*(&iLocal_4 + 896[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "StationDoorPos04", Vector(-3686,215f, 8,981612f, 3475,999f), Vector(0.0f, -88,23368f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[7], &iLocal_4 + 888);
	*(&iLocal_4 + 896[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Preload04_GRAVE01_CS02", Vector(-3689,583f, 8,030231f, 3510,078f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 896[8], &iLocal_4 + 888);
	*(&iLocal_4 + 976) = CREATE_OBJECTSET_IN_LAYOUT("CutSceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 984[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PLAYERSTARTLAST", Vector(-3687,333f, 8,981612f, 3467,998f), Vector(0.0f, 354,5421f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 984[0], &iLocal_4 + 976);
	*(&iLocal_4 + 984[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEndLast", Vector(-3697,75f, 8,20877f, 3440,79f), Vector(0.0f, 53,28614f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 984[1], &iLocal_4 + 976);
	*(&iLocal_4 + 984[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStartLast", Vector(-3688,637f, 9,548162f, 3461,781f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 984[2], &iLocal_4 + 976);
	*(&iLocal_4 + 984[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStartLast", Vector(-3712,665f, 8,94056f, 3423,058f), Vector(0.0f, 53,8177f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 984[3], &iLocal_4 + 976);
	*(&iLocal_4 + 984[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "StationBackDoor", Vector(-3687,856f, 9,548437f, 3467,046f), Vector(0.0f, 180.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 984[4], &iLocal_4 + 976);
	*(&iLocal_4 + 984[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart11", Vector(-3687,729f, 9,556161f, 3468,533f), Vector(0.0f, 357,571f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 984[5], &iLocal_4 + 976);
	*(&iLocal_4 + 984[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStartLastSkip", Vector(-3699,086f, 8,031365f, 3428f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 984[6], &iLocal_4 + 976);
	*(&iLocal_4 + 1048) = CREATE_OBJECTSET_IN_LAYOUT("Grave01_doorsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1056[03]) = Vector(-3671,419f, 8,372795f, 3490,974f);
	*(&iLocal_4 + 1056[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 1088[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nshackDoor", Vector(-3671,419f, 8,372795f, 3490,974f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1088[0], &iLocal_4 + 1048);
	*(&iLocal_4 + 1104) = CREATE_OBJECTSET_IN_LAYOUT("MiscSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1112[03]) = Vector(-2011.0f, 38.0f, 2965.0f);
	*(&iLocal_4 + 1112[03] + 12) = Vector(0.0f, 358,291f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "debugTeleport", Vector(-2011.0f, 38.0f, 2965.0f), Vector(0.0f, 358,291f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 1104);
	*(&iLocal_4 + 1144) = CREATE_OBJECTSET_IN_LAYOUT("FlagGroupStage01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1152[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HitchPost01", Vector(-1788,917f, 24,094f, 2839,089f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1152[0], &iLocal_4 + 1144);
	*(&iLocal_4 + 1152[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "BP_Gateway", Vector(-3699,079f, 8,336f, 3439,899f), Vector(0.0f, -143,6268f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1152[1], &iLocal_4 + 1144);
	*(&iLocal_4 + 1176) = CREATE_OBJECTSET_IN_LAYOUT("FlagGroupStage02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1184[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "fDeputyDistractPos", Vector(-3940.0f, 9,03529f, 3415,999f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1184[0], &iLocal_4 + 1176);
	*(&iLocal_4 + 1184[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "MosesHide02", Vector(-3695,442f, 9,53181f, 3477,67f), Vector(0.0f, 484,5761f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1184[1], &iLocal_4 + 1176);
	*(&iLocal_4 + 1208) = CREATE_OBJECTSET_IN_LAYOUT("FlagGroupStage03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1216[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SethWaitForMosesPos03", Vector(-3689,583f, 8,030231f, 3510,078f), Vector(0.0f, 193,2323f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1216[0], &iLocal_4 + 1208);
	*(&iLocal_4 + 1232) = CREATE_OBJECTSET_IN_LAYOUT("FlagGroupStage04Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1240[03]) = Vector(-3687,65f, 9,52786f, 3470,192f);
	*(&iLocal_4 + 1240[03] + 12) = Vector(0.0f, 191,252f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SethTelegraphStandPos04", Vector(-3687,65f, 9,52786f, 3470,192f), Vector(0.0f, 191,252f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 1232);
	*(&iLocal_4 + 1272) = CREATE_OBJECTSET_IN_LAYOUT("DebugFlagsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1280[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nPlayerTel", Vector(-3804,781f, 7,885218f, 3346,623f), Vector(0.0f, -178,5109f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[0], &iLocal_4 + 1272);
	*(&iLocal_4 + 1280[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SethTel", Vector(-3799,928f, 7,781368f, 3355,449f), Vector(0.0f, -145,8201f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1280[1], &iLocal_4 + 1272);
	*(&iLocal_4 + 1304) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "cs_grave01_deputy", "cs_grave01_deputy", Vector(-3673,33f, 8,273301f, 3489,266f), Vector(0.0f, 84,89185f, 0.0f));
	*(&iLocal_4 + 1312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "cs_grave01_deputy02", "cs_grave01_deputy02", Vector(-3671,96f, 8,273301f, 3490,52f), Vector(0.0f, 84,89185f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 1320) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pSethToHorse");
	PushArrayP();
	*(&iLocal_4 + 1328) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pCootsToBenedictsRoad");
	PushArrayP();
	*(&iLocal_4 + 1336) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pInToShack");
	PushArrayP();
	*(&iLocal_4 + 1344) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pOutOfShack");
	PushArrayP();
	*(&iLocal_4 + 1352) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pSethEnding");
	PushArrayP();
	*(&iLocal_4 + 1360) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pMosesPath");
	PushArrayP();
	*(&iLocal_4 + 1368) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pCSLast_03");
	PushArrayP();
	*(&iLocal_4 + 1376) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "pSethToTelegraph");
	*(&iLocal_4 + 1384) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "treeFallen01x0", "p_gen_treeFallen01x", Vector(-2920,502f, 43,16861f, 3225,568f), Vector(0.0f, 72,24042f, 0.0f), 1);
	*(&iLocal_4 + 1392) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "treeCedarDead01x0", "p_gen_treeCedarDead01x", Vector(-2803,637f, 36,50885f, 3142,136f), Vector(-1,621486f, -40,41303f, 2,500242f), 1);
	return;
}

void Function_549(int iParam0, int iParam1) //Position: 0x21A48 / 137800
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

bool Function_550() //Position: 0x21A92 / 137874
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_338())
		{
			return 0;
		}
		if (!Function_332(&iLocal_419))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_394))
		{
			bLocal_394 = Function_323(1, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_398))
		{
			bLocal_398 = Function_316(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_398, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_396))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 624[4], &Var0);
			GET_OBJECT_ORIENTATION(&iLocal_4 + 624[4], &Var2);
			bLocal_396 = CREATE_ACTOR_IN_LAYOUT(&iLocal_354, "graveRobberHorse", bLocal_393, Var0, Var2);
			SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_396, 14.0f);
			ACCESSORIZE_HORSE(&bLocal_396, 3);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(&bLocal_396, 1);
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_396, 0);
			return 0;
		}
		if (!IS_WORLD_SECTOR_LOADED(&uLocal_755))
		{
			return 0;
		}
	}
	return 1;
}

void Function_551() //Position: 0x21B88 / 138120
{
	Function_339(&iLocal_419, "grave01", 10, 0);
	Function_341(&iLocal_419, bLocal_393, 2, 0);
	Function_339(&iLocal_419, "stand_shove", 5, 0);
	Function_339(&iLocal_419, "custom/stand_shove", 8, 0);
	Function_339(&iLocal_419, "stand_ambient", 5, 0);
	Function_339(&iLocal_419, "custom/stand_ambient", 8, 0);
	Function_339(&iLocal_419, "$/content/scripting/gringo/simplegringo/cs_grave01_deputy", 1, 0);
	Function_339(&iLocal_419, "$/content/scripting/gringo/simplegringo/cs_grave01_deputy", 1, 0);
	Function_339(&iLocal_419, "cs_grave01_deputy", 5, 0);
	Function_339(&iLocal_419, "custom/cs_grave01_deputy", 8, 0);
	Function_339(&iLocal_419, "custom/wave", 8, 0);
	return;
}

void Function_552(int iParam0, bool bParam1) //Position: 0x21D02 / 138498
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_545(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_297(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_96();
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
	if (!Function_297(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_207();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_257();
	Function_288();
	Function_247("");
	Function_557(0);
	Function_556();
	Function_201();
	Function_200();
	ENABLE_JOURNAL_REPLAY(0);
	Function_555();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_316(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_400(0, 0x40400000);
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
	Function_554(13);
	Function_554(14);
	Function_554(25);
	Function_554(24);
	Function_554(12);
	Function_554(27);
	Function_554(26);
	Function_554(15);
	Function_553();
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

void Function_553() //Position: 0x22142 / 139586
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

void Function_554(int iParam0) //Position: 0x221C7 / 139719
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_555() //Position: 0x221E7 / 139751
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

void Function_556() //Position: 0x2222D / 139821
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_557(int iParam0) //Position: 0x22243 / 139843
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_204())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

bool Function_558(struct<25> Param0) //Position: 0x2227C / 139900
{
	switch (Param0.f_24)
	{
		case 0x00000040:
			switch (Param0.f_16)
			{
				case 0x00000004:
					if (Global_6629 != 1 && Global_43789 != Global_46796[4])
					{
						if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&Param0 + 8)) == 8)
						{
							bLocal_383 = true;
							Function_247("Grave01_too_much_attention");
						}
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000002:
					Function_573();
					break;
				
				case 0x00000001:
					Function_572();
					break;
				
				case 0x00000004:
					if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&Param0 + 8)) == 8)
					{
						bLocal_383 = true;
						Function_247("Grave01_too_much_attention");
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (bLocal_368 == 0)
					{
						Function_571();
					}
					else if (bLocal_368 == 1)
					{
						Function_570();
					}
					else if (bLocal_368 == 2)
					{
						Function_569();
					}
					else if (bLocal_368 == 3)
					{
						Function_568();
					}
					break;
				
				case 0x00000001:
					Function_572();
					break;
				
				case 0x00000002:
					bLocal_775 = Function_567();
					if (bLocal_775)
					{
						Function_566();
					}
					else
					{
						Function_565();
					}
					break;
				
				case 0x00000004:
					if (Function_564(&Param0 + 8) == &iLocal_354 && Function_564(&Param0 + 8) == &iLocal_4)
					{
						if (Global_6629 != 1 && Global_43789 != Global_46796[4])
						{
							if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&Param0 + 8)) == 8)
							{
								bLocal_383 = true;
								Function_247("Grave01_too_much_attention");
							}
							if (bLocal_368 == 0)
							{
								Function_563();
							}
							else if (bLocal_368 == 1)
							{
								Function_522();
							}
							else if (bLocal_368 == 2)
							{
								Function_562();
							}
							else if (bLocal_368 == 3)
							{
								Function_561();
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (bLocal_368 == 0)
					{
						Function_560();
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
			Function_559(&Param0, 1);
			return 1;
		}
	}
	Function_559(&Param0, 0);
	return 0;
}

void Function_559(struct<25> Param0) //Position: 0x224CB / 140491
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

void Function_560() //Position: 0x224F6 / 140534
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_RidesIntoSethsHorseBP", "Grave01_RidesIntoSethsHorseBP", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_561() //Position: 0x22559 / 140633
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsAmbBounty", "Grave01_ShootsAmbBounty", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_562() //Position: 0x225B0 / 140720
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsAmbWatch", "Grave01_ShootsAmbWatch", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x22605 / 140805
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsAmbBP", "Grave01_ShootsAmbBP", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_564(var uParam0) //Position: 0x22654 / 140884
{
	char[] cVar0[4];
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (GET_OBJECT_TYPE(&uParam0) == 1)
		{
			cVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
		}
		while (!IS_LAYOUTREF_VALID(&cVar0) && IS_OBJECT_VALID(&uParam0))
		{
			uParam0 = GET_OBJECT_OWNER(&uParam0);
			if (GET_OBJECT_TYPE(&uParam0) == 1)
			{
				cVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&cVar0))
		{
			return &cVar0;
		}
	}
	return "";
}

void Function_565() //Position: 0x226BB / 140987
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsMoses", "Grave01_ShootsMoses", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_566() //Position: 0x2270A / 141066
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(4, "Grave01_ShootsMosesComment", "Grave01_ShootsMosesComment", 0, 2, 1, 0, 1);
		Function_383(17);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_567() //Position: 0x22768 / 141160
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_568() //Position: 0x2277B / 141179
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsSethBounty", "Grave01_ShootsSethBounty", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_569() //Position: 0x227D4 / 141268
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsSethKeepWatch", "Grave01_ShootsSethKeepWatch", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_570() //Position: 0x22833 / 141363
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsSethDistrkDeps", "Grave01_ShootsSethDistrkDeps", 0, 1, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_571() //Position: 0x22894 / 141460
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsSethBP", "Grave01_ShootsSethBP", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_572() //Position: 0x228E5 / 141541
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_ShootsSethHorseBP", "Grave01_ShootsSethHorseBP", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_573() //Position: 0x22940 / 141632
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Grave01_KillsMoses", "Grave01_KillsMoses", 0, 2, 1, 0, 1);
		Function_383(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_574(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x2298D / 141709
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
		Function_559(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_593(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_592(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_592(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_578(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_559(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_577(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_576(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_577(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_575(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_247(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_576(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_559(&Param2, 0);
	return 0;
}

void Function_575(char* cParam0) //Position: 0x22DA3 / 142755
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

void Function_576(struct<25> Param0) //Position: 0x22E97 / 142999
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

void Function_577(bool bParam0) //Position: 0x22F0F / 143119
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_578(struct<57> Param0) //Position: 0x22F33 / 143155
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
			return Function_589(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_582(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_589(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_579(&Param0, bVar2);
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
						bVar2 = Function_589(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_579(&Param0, bVar2);
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

var Function_579(int iParam0, bool bParam1) //Position: 0x230A4 / 143524
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
				bParam1 = Function_581(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_580(16);
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
				bParam1 = Function_581(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_580(256);
			}
		}
	}
	return bParam1;
}

bool Function_580(int iParam0) //Position: 0x231E0 / 143840
{
	return 2 | iParam0;
}

int Function_581(int iParam0) //Position: 0x231EA / 143850
{
	return 4 | iParam0;
}

int Function_582(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x231F4 / 143860
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
				iParam3 = Function_588(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_580(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_583(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_76(&iParam3, 2);
					Function_38(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_580(16);
		}
	}
	return 0;
}

int Function_583(int iParam0, vector3 vParam1) //Position: 0x232AF / 144047
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_587(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_586(iVar0, 3, 1, bParam3))
			{
				if (!Function_592(&iParam0, 8, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_586(iVar0, 2, 1, bParam3))
			{
				if (!Function_592(&iParam0, 32, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_586(iVar0, 1, 1, bParam3))
			{
				if (!Function_592(&iParam0, 64, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_586(iVar0, 3, 1, bParam3))
			{
				if (!Function_592(&iParam0, 128, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_586(iVar0, 1, 1, bParam3))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_586(iVar0, 1, 1, bParam3))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_585(64, 1024, bParam2);
				}
			}
			return Function_584(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_584(int iParam0, int iParam1, bool bParam2) //Position: 0x23477 / 144503
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_585(int iParam0, int iParam1, bool bParam2) //Position: 0x2348C / 144524
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_586(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x234A1 / 144545
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_587(int iParam0) //Position: 0x234BE / 144574
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

int Function_588(var uParam0, vector3 vParam1) //Position: 0x23531 / 144689
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_587(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_586(iVar0, 3, 1, bParam2))
			{
				if (!Function_592(&uParam0, 8, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000009:
			if (Function_586(iVar0, 3, 1, bParam2))
			{
				if (!Function_592(&uParam0, 8, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x0000006E:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&uParam0, 16, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x0000005B:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&uParam0, 32, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000031:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 64, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000007:
			if (Function_586(iVar0, 3, 1, bParam2))
			{
				if (!Function_592(&uParam0, 128, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000008:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&uParam0, 256, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000014:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 512, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000018:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 512, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000057:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000058:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&uParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_589(struct<65> Param0) //Position: 0x2375A / 145242
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
						return Function_588(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_592(&Param0, 2, 1))
					{
						return Function_581(8);
					}
					return Function_580(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_592(&Param0, 4, 1))
					{
						return Function_581(16);
					}
					return Function_580(16);
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
							return Function_583(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_592(&Param0, 2, 1))
						{
							return Function_581(128);
						}
						return Function_580(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_592(&Param0, 4, 1))
						{
							return Function_581(256);
						}
						return Function_580(256);
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
						return Function_583(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_592(&Param0, 2, 1))
					{
						return Function_581(8);
					}
					return Function_580(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_592(&Param0, 4, 1))
					{
						return Function_581(16);
					}
					return Function_580(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_591(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_592(&Param0, 2, 1))
					{
						return Function_581(8);
					}
					return Function_580(8);
				}
				if (!Function_592(&Param0, 4, 1))
				{
					return Function_581(16);
				}
				return Function_580(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_583(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_76(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_590(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_580(128);
							}
							if (!Function_592(&Param0, 2, 1))
							{
								return Function_581(8);
							}
							return Function_580(8);
						}
						if (iParam4 == 2)
						{
							if (Function_590(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_580(256);
							}
							if (!Function_592(&Param0, 4, 1))
							{
								return Function_581(16);
							}
							return Function_580(16);
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

bool Function_590(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x23A40 / 145984
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

int Function_591(int iParam0, vector3 vParam1) //Position: 0x23B0E / 146190
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_587(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&iParam0, 16, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x0000005B:
			if (Function_586(iVar0, 2, 1, bParam2))
			{
				if (!Function_592(&iParam0, 32, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000057:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		case 0x00000058:
			if (Function_586(iVar0, 1, 1, bParam2))
			{
				if (!Function_592(&iParam0, 1024, 1))
				{
					return Function_581(64);
				}
			}
			return Function_580(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_592(struct<69> Param0) //Position: 0x23C30 / 146480
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

int Function_593(int iParam0) //Position: 0x23C5A / 146522
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

bool Function_594(bool bParam0) //Position: 0x23C90 / 146576
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_595(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x23CAE / 146606
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

