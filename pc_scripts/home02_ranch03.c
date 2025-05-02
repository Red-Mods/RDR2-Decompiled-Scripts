//Decompiled with MagicRDR v1.0
//Function Count : 533
//Statics Count : 869
//Natives Count : 707
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 6;
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
	var uLocal_32 = 1;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 10;
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
	var uLocal_84 = 3;
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
	var uLocal_100 = 6;
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
	var uLocal_116 = 9;
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
	var uLocal_160 = 9;
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
	var uLocal_182 = 8;
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
	var uLocal_202 = 8;
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
	var uLocal_222 = 8;
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
	int iLocal_274 = 0;
	var uLocal_275 = 0;
	struct<6> Local_276 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	int iLocal_288 = 2;
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
	int iLocal_306 = 0;
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
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	bool bLocal_320 = false;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	bool bLocal_323 = false;
	var uLocal_324 = 0;
	bool bLocal_325 = false;
	var uLocal_326 = 0;
	bool bLocal_327 = false;
	var uLocal_328 = 0;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	float fLocal_333 = 0.0f;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	int iLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	int iLocal_341[4] = { 0, 0, 0, 0 };
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	bool bLocal_351 = false;
	bool bLocal_352 = false;
	bool bLocal_353 = false;
	int iLocal_354 = 0;
	bool bLocal_355 = false;
	int iLocal_356 = 0;
	bool bLocal_357 = false;
	int iLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	int iLocal_362 = 0;
	var uLocal_363 = 0;
	float fLocal_364 = 0.0f;
	var uLocal_365 = 0;
	int iLocal_366 = 0;
	var uLocal_367 = 0;
	float fLocal_368 = 0.0f;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	var uLocal_371 = 0;
	bool bLocal_372 = false;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	bool bLocal_375 = false;
	int iLocal_376 = 0;
	bool bLocal_377 = false;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	bool bLocal_382 = false;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	int iLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	int iLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	int iLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	int iLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	struct<2> Local_415 = { 0, 0 } ;
	var uLocal_417 = 0;
	struct<2> Local_418 = { 0, 0 } ;
	var uLocal_420 = 0;
	struct<2> Local_421 = { 0, 0 } ;
	var uLocal_423 = 0;
	struct<2> Local_424 = { 0, 0 } ;
	var uLocal_426 = 0;
	struct<2> Local_427 = { 0, 0 } ;
	var uLocal_429 = 0;
	struct<2> Local_430 = { 0, 0 } ;
	var uLocal_432 = 0;
	int iLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	int iLocal_439 = 0;
	var uLocal_440 = 0;
	bool bLocal_441 = false;
	var uLocal_442 = 0;
	bool bLocal_443 = false;
	var uLocal_444 = 0;
	int iLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 4;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	int iLocal_459[3] = { 0, 0, 0 };
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	bool bLocal_467 = false;
	var uLocal_468 = 0;
	bool bLocal_469 = false;
	var uLocal_470 = 0;
	bool bLocal_471 = false;
	var uLocal_472 = 0;
	int iLocal_473 = 0;
	var uLocal_474 = 0;
	bool bLocal_475 = false;
	var uLocal_476 = 0;
	var uLocal_477 = 5;
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
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	float fLocal_533 = 0.0f;
	float fLocal_534 = 0.0f;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	float fLocal_539 = 0.0f;
	float fLocal_540 = 0.0f;
	float fLocal_541 = 0.0f;
	var uLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 13;
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
	struct<15> Local_600[8];
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
	var uLocal_740 = 5;
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
	var uLocal_770 = 5;
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
	var uLocal_800 = 5;
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
	var uLocal_830 = 5;
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
	int iLocal_850 = 0;
	var uLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
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
	iLocal_531 = 4294967295;
	iLocal_532 = 1;
	fLocal_533 = 200.0f;
	fLocal_534 = 300.0f;
	iLocal_852 = 0;
	iLocal_853 = 0;
	iLocal_854 = 0;
	Local_276 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_318 = 99;
	iLocal_319 = 0;
	iLocal_306 = 1000;
	while (Function_269())
	{
		Function_225();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x64 / 100
{
	if (Function_224(Global_46914[1]))
	{
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 94)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 94)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 94)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 94));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 94), 1);
			}
		}
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 95)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 95)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 95)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 95));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 95), 1);
			}
		}
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 96)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 96)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 96)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 96));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 96), 1);
			}
		}
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 97)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 97)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 97)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 97));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 97), 1);
			}
		}
	}
	if (!DECOR_GET_BOOL(&Global_54076, "CanBeLasso"))
	{
		DECOR_SET_BOOL(&Global_54076, "CanBeLasso", 1);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_323);
	TASK_DISMOUNT(&bLocal_323, 1);
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_323);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_327);
	Function_221(13, 0, 1);
	Function_220(&iLocal_274);
	Function_220(&iLocal_4);
	Function_217(12, 0, 1, 1, 1);
	Function_217(13, 0, 0, 1, 1);
	Function_217(11, 0, 0, 1, 1);
	STREAMING_UNLOAD_BOUNDS();
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_216();
	Function_186(bLocal_352, 1, 0, 1, 0, 1, 1, 1);
	Function_181();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	Function_177(&iLocal_288);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_321))
	{
		DESTROY_ITERATOR(&uLocal_321);
	}
	RELEASE_LAYOUT_REF(&iLocal_274);
	if (bLocal_351)
	{
		Function_26(Local_276, 1, 1, 1, 0);
	}
	else if (bLocal_352)
	{
		Function_22(Local_276);
	}
	else
	{
		Function_2(Local_276);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x4A7 / 1191
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x4C8 / 1224
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x4E5 / 1253
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x508 / 1288
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x51F / 1311
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

void Function_7(int iParam0) //Position: 0x5C1 / 1473
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x5E4 / 1508
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

void Function_9() //Position: 0x62E / 1582
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x647 / 1607
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

void Function_11(var uParam0, int iParam1) //Position: 0x69A / 1690
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

struct<16> Function_12(int iParam0) //Position: 0x7C4 / 1988
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

bool Function_13() //Position: 0x7FE / 2046
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x819 / 2073
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x826 / 2086
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x846 / 2118
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x85D / 2141
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x878 / 2168
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xABF / 2751
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0xAEB / 2795
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

bool Function_21(int iParam0) //Position: 0xB0F / 2831
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0xB24 / 2852
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0xB42 / 2882
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

struct<16> Function_24(int iParam0) //Position: 0xBE8 / 3048
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

struct<24> Function_25(char* cParam0) //Position: 0xC27 / 3111
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

void Function_26(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xE7D / 3709
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

void Function_27() //Position: 0xF71 / 3953
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

int Function_28(int iParam0, bool bParam1) //Position: 0xFA3 / 4003
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

int Function_29(int iParam0) //Position: 0xFE1 / 4065
{
	if (!Function_30(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_30(int iParam0) //Position: 0xFFB / 4091
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_31(int iParam0, bool bParam1) //Position: 0x1011 / 4113
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

void Function_32(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x130E / 4878
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

void Function_33(char* cParam0) //Position: 0x1383 / 4995
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

bool Function_34(int iParam0, var uParam1, int iParam2) //Position: 0x13BD / 5053
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

bool Function_35(var uParam0, int iParam1) //Position: 0x1439 / 5177
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_36(char* cParam0) //Position: 0x144C / 5196
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

int Function_37(int iParam0) //Position: 0x14ED / 5357
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

void Function_38(bool bParam0, bool bParam1) //Position: 0x152A / 5418
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1540 / 5440
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

void Function_40(int iParam0, struct<41> Param1) //Position: 0x179E / 6046
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_41(bool bParam0, int iParam1) //Position: 0x17DC / 6108
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

void Function_42(bool bParam0) //Position: 0x181B / 6171
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

void Function_43() //Position: 0x1870 / 6256
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

void Function_44() //Position: 0x18BB / 6331
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

void Function_45() //Position: 0x19C1 / 6593
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

void Function_46() //Position: 0x19F4 / 6644
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

void Function_47() //Position: 0x1B87 / 7047
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

void Function_48() //Position: 0x1D40 / 7488
{
	Function_49(&Global_42918, 1, 0);
	return;
}

void Function_49(struct<2317> Param0) //Position: 0x1D4E / 7502
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

bool Function_50() //Position: 0x1F6B / 8043
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_51(int iParam0) //Position: 0x1F80 / 8064
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x2027 / 8231
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

void Function_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x22C3 / 8899
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

int Function_54() //Position: 0x2901 / 10497
{
	int iVar0;
	
	return &iVar0;
}

var Function_55(int iParam0) //Position: 0x290A / 10506
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_56(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x291B / 10523
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

struct<32> Function_57(char* cParam0) //Position: 0x2A12 / 10770
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_58(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A2D / 10797
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_60(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_59(Function_60(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_59(int iParam0, int iParam1) //Position: 0x2A94 / 10900
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_60(int iParam0, bool bParam1) //Position: 0x2AA6 / 10918
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AB8 / 10936
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

int Function_62(int iParam0) //Position: 0x2BEC / 11244
{
	return Global_55480[iParam016].f_96;
}

float Function_63(int iParam0) //Position: 0x2BFB / 11259
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_64(int iParam0) //Position: 0x2C34 / 11316
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_65(int iParam0) //Position: 0x2C71 / 11377
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E0B / 11787
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

int Function_67(bool bParam0) //Position: 0x304F / 12367
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_68() //Position: 0x3090 / 12432
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

struct<8> Function_69() //Position: 0x3119 / 12569
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

struct<8> Function_70() //Position: 0x31B0 / 12720
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

void Function_71() //Position: 0x322F / 12847
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

int Function_72(int iParam0, bool bParam1, int iParam2) //Position: 0x326C / 12908
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

void Function_73() //Position: 0x3478 / 13432
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

bool Function_74(char* cParam0) //Position: 0x352F / 13615
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_75(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3547 / 13639
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

struct<8> Function_76() //Position: 0x363F / 13887
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_77(bool bParam0, bool bParam1) //Position: 0x3649 / 13897
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_78(int iParam0) //Position: 0x365A / 13914
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_79(bool bParam0, bool bParam1) //Position: 0x3670 / 13936
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

float Function_80(struct<2> Param0, struct<2> Param2) //Position: 0x373C / 14140
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_81(float fParam0, int iParam1) //Position: 0x3759 / 14169
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

bool Function_82(int iParam0) //Position: 0x3F85 / 16261
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_83(var uParam0, int iParam1) //Position: 0x3FC0 / 16320
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_84(int iParam0) //Position: 0x3FCF / 16335
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

bool Function_85(int iParam0) //Position: 0x44C8 / 17608
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_86(int iParam0) //Position: 0x44DE / 17630
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_87(int iParam0) //Position: 0x44FD / 17661
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_88(int iParam0, int iParam1) //Position: 0x4517 / 17687
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4581 / 17793
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

void Function_90(int iParam0) //Position: 0x47A9 / 18345
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

void Function_91() //Position: 0x4847 / 18503
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

void Function_92() //Position: 0x49A9 / 18857
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

int Function_93(int iParam0, char* cParam1) //Position: 0x4A29 / 18985
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

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4D80 / 19840
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

int Function_95(int iParam0) //Position: 0x4E08 / 19976
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_96() //Position: 0x4E22 / 20002
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_97() //Position: 0x4E4D / 20045
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

void Function_98(int iParam0, int iParam1, bool bParam2) //Position: 0x4E7B / 20091
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

void Function_99(int iParam0, bool bParam1, bool bParam2) //Position: 0x5117 / 20759
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

void Function_100(int iParam0, int iParam1) //Position: 0x52EB / 21227
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

int Function_101(int iParam0, char* cParam1) //Position: 0x5555 / 21845
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

int Function_102() //Position: 0x56E5 / 22245
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

void Function_103() //Position: 0x5786 / 22406
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

void Function_104(int iParam0) //Position: 0x5844 / 22596
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

var Function_105(int iParam0) //Position: 0x58AA / 22698
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

int Function_106(int iParam0, bool bParam1) //Position: 0x5939 / 22841
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

var Function_107(int iParam0, int iParam1) //Position: 0x5AE5 / 23269
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

void Function_108() //Position: 0x5B2A / 23338
{
	Function_110(3, 0.0f);
	Function_109(3, 10000.0f);
	return;
}

int Function_109(int iParam0, int iParam1) //Position: 0x5B40 / 23360
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5B80 / 23424
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_111(int iParam0) //Position: 0x5BC0 / 23488
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_112(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5BCF / 23503
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

int Function_113(int iParam0) //Position: 0x5D97 / 23959
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

var Function_114() //Position: 0x5E2C / 24108
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_115(int iParam0) //Position: 0x5E51 / 24145
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

void Function_116(int iParam0, bool bParam1, bool bParam2) //Position: 0x6320 / 25376
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

var Function_117(int iParam0) //Position: 0x6647 / 26183
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

int Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x66EA / 26346
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

int Function_119(int iParam0, bool bParam1) //Position: 0x68E7 / 26855
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

int Function_120(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6A92 / 27282
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

void Function_121(int iParam0, var uParam1, bool bParam2) //Position: 0x6B64 / 27492
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

void Function_122(int iParam0) //Position: 0x747F / 29823
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

void Function_123(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x75FC / 30204
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

bool Function_124(struct<2> Param0, struct<2> Param2) //Position: 0x7707 / 30471
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_125(int iParam0) //Position: 0x7733 / 30515
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

var Function_126(vector3 vParam0) //Position: 0x778A / 30602
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

void Function_127(var uParam0, int iParam1) //Position: 0x77D8 / 30680
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

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7833 / 30771
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

void Function_129() //Position: 0x79D4 / 31188
{
	return;
}

bool Function_130(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x79DA / 31194
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

void Function_131(bool bParam0, int iParam1) //Position: 0x7A89 / 31369
{
	if (!Function_132(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_132(int iParam0) //Position: 0x7ADE / 31454
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_133(int iParam0) //Position: 0x7AF4 / 31476
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

bool Function_134(int iParam0, int iParam1) //Position: 0x7B45 / 31557
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

void Function_135(var uParam0, int iParam1) //Position: 0x7B72 / 31602
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_136(var uParam0, int iParam1) //Position: 0x7B83 / 31619
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7B9D / 31645
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7BAE / 31662
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

void Function_139(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7D0A / 32010
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
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_140() //Position: 0x7D95 / 32149
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7DC2 / 32194
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

int Function_142(int iParam0) //Position: 0x7F72 / 32626
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

void Function_143(char* cParam0, int iParam1) //Position: 0x7FC9 / 32713
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

var Function_144(int iParam0) //Position: 0x7FEE / 32750
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x8045 / 32837
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

bool Function_146(bool bParam0) //Position: 0x80A4 / 32932
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x80B0 / 32944
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x80CC / 32972
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

bool Function_149() //Position: 0x811E / 33054
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x814E / 33102
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

int Function_151(int iParam0, int iParam1) //Position: 0x81C3 / 33219
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x8220 / 33312
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

int Function_153(int iParam0, int iParam1) //Position: 0x8293 / 33427
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x82EE / 33518
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

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x85AE / 34222
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

void Function_156(int iParam0, bool bParam1) //Position: 0x884D / 34893
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

void Function_157() //Position: 0x88BC / 35004
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

int Function_158(int iParam0, int iParam1) //Position: 0x893C / 35132
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

int Function_159(int iParam0) //Position: 0x959F / 38303
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x95B4 / 38324
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

void Function_161(int iParam0, int iParam1) //Position: 0x9603 / 38403
{
	if (!IS_DOOR_VALID(&iParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&iParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&iParam0, "lockMe"))
	{
		DECOR_REMOVE(&iParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&iParam0))
	{
		SET_DOOR_LOCK(&iParam0, 0);
	}
	return;
}

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x965B / 38491
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

bool Function_163(int iParam0, int iParam1) //Position: 0x96CE / 38606
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x96E2 / 38626
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

var Function_165(int iParam0) //Position: 0x97D3 / 38867
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

bool Function_166(var uParam0, int iParam1) //Position: 0x982B / 38955
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x9848 / 38984
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

bool Function_168(int iParam0) //Position: 0x98A2 / 39074
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x98B4 / 39092
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

void Function_170(struct<185> Param0) //Position: 0x98E8 / 39144
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

void Function_171(int iParam0, var uParam1, int iParam2) //Position: 0x9953 / 39251
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

void Function_172(bool bParam0, int iParam1, bool bParam2) //Position: 0x9A3D / 39485
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

void Function_173() //Position: 0x9BBC / 39868
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9BC8 / 39880
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

void Function_175() //Position: 0x9C0E / 39950
{
	Function_176();
	return;
}

void Function_176() //Position: 0x9C17 / 39959
{
	Function_177(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_177(int iParam0) //Position: 0x9C2A / 39978
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

void Function_178(struct<2>[] Param0, int iParam1) //Position: 0x9C52 / 40018
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

void Function_179(struct<13> Param0) //Position: 0x9D9D / 40349
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_180(struct<13> Param0) //Position: 0x9DBA / 40378
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_181() //Position: 0x9DD8 / 40408
{
	if (IS_BLIP_VALID(&iLocal_358))
	{
		REMOVE_BLIP(&iLocal_358);
	}
	if (IS_BLIP_VALID(&uLocal_360))
	{
		REMOVE_BLIP(&uLocal_360);
	}
	if (IS_OBJECT_VALID(&fLocal_364))
	{
		DESTROY_OBJECT(&fLocal_364);
	}
	if (IS_OBJECT_VALID(&iLocal_366))
	{
		DESTROY_OBJECT(&iLocal_366);
	}
	if (IS_ACTOR_RIDING(&bLocal_323))
	{
		TASK_DISMOUNT(&bLocal_323, 1);
	}
	else
	{
		TASK_CLEAR(&bLocal_323);
	}
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_323);
	Function_217(13, 0, 1, 1, 1);
	Function_217(12, 0, 0, 1, 1);
	Function_217(11, 0, 0, 1, 1);
	if (IS_ACTOR_VALID(&iLocal_433))
	{
		RELEASE_ACTOR(&iLocal_433);
	}
	if (IS_ACTOR_VALID(&uLocal_435))
	{
		RELEASE_ACTOR(&uLocal_435);
	}
	if (IS_ACTOR_VALID(&bLocal_325))
	{
		RELEASE_ACTOR_AS_AMBIENT(&bLocal_325);
	}
	Function_185(&iLocal_459);
	if (SQUAD_IS_VALID(&bLocal_467))
	{
		bLocal_372 = false;
		while (bLocal_372 <= SQUAD_GET_SIZE(&bLocal_467))
		{
			iLocal_445 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_467, bLocal_372);
			SET_ACTOR_RIDEABLE(&iLocal_445, 1);
			bLocal_372++;
		}
		Function_183(&bLocal_467, 1, 0);
		RELEASE_OBJECT_REF(&bLocal_467);
	}
	if (SQUAD_IS_VALID(&bLocal_469))
	{
		Function_182(&bLocal_469);
		DESTROY_OBJECT(&bLocal_469);
	}
	if (SQUAD_IS_VALID(&bLocal_471))
	{
		Function_182(&bLocal_471);
		DESTROY_OBJECT(&bLocal_471);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 136))
	{
		Function_182(&iLocal_4 + 136);
		DESTROY_OBJECT(&iLocal_4 + 136);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_182(&iLocal_4 + 312);
		DESTROY_OBJECT(&iLocal_4 + 312);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_323);
	return;
}

void Function_182(bool bParam0) //Position: 0x9F54 / 40788
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

void Function_183(var uParam0, bool bParam1, bool bParam2) //Position: 0x9FA2 / 40866
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
				if (!Function_184(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA02B / 41003
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_185(bool[] bParam0) //Position: 0xA04B / 41035
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (bParam0 - 1))
	{
		if (IS_OBJECT_VALID(&(bParam0[iVar0])))
		{
			RELEASE_OBJECT_REF(&(bParam0[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_186(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xA081 / 41089
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_215());
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
	Function_214();
	CLEAR_PRINTED_OBJECTIVE();
	Function_213();
	Function_211(0);
	Function_210();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_209();
	Function_208();
	Function_214();
	ENABLE_JOURNAL_REPLAY(1);
	Function_207(1);
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
		Function_206(&Global_54076);
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
	Function_203(Global_42825);
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
	Function_202();
	Function_201(1178687);
	Function_199(33039);
	Function_198(0x218003f);
	Function_197(4194560);
	Function_196();
	Function_195();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_192(0, 1, 1);
	}
	else
	{
		Function_192(0, 1, 1);
	}
	Function_191();
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
	Function_187();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_38(&Global_21369 + 72 + 32, 16);
}

void Function_187() //Position: 0xA28D / 41613
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
		if (Function_190() > 3)
		{
			bVar0 *= 2;
		}
		Function_188(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA2E4 / 41700
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_189(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_189(bool bParam0) //Position: 0xA334 / 41780
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_190() //Position: 0xA35D / 41821
{
	return Global_21369.f_248;
}

void Function_191() //Position: 0xA368 / 41832
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

void Function_192(int iParam0, bool bParam1, int iParam2) //Position: 0xA392 / 41874
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
			Function_193(Global_43789);
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

void Function_193(int iParam0) //Position: 0xA49E / 42142
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_194())
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

bool Function_194() //Position: 0xA51D / 42269
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

void Function_195() //Position: 0xA586 / 42374
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

void Function_196() //Position: 0xA5AC / 42412
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

void Function_197(int iParam0) //Position: 0xA5D2 / 42450
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_198(int iParam0) //Position: 0xA5EF / 42479
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_199(int iParam0) //Position: 0xA602 / 42498
{
	Function_200(&Global_43580, iParam0);
	return;
}

void Function_200(var uParam0, int iParam1) //Position: 0xA610 / 42512
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_201(bool bParam0) //Position: 0xA62F / 42543
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_202() //Position: 0xA65C / 42588
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

void Function_203(int iParam0) //Position: 0xA6D4 / 42708
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
		Function_204(78, 1, 1);
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

int Function_204(bool bParam0, bool bParam1, int iParam2) //Position: 0xA80A / 43018
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_205(bParam0), Function_50()) == 0)
		{
			ADD_ITEM(Function_205(bParam0), Function_50(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_205(bParam0), Function_50(), &iParam2);
	return 1;
}

var Function_205(bool bParam0) //Position: 0xA858 / 43096
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

void Function_206(int iParam0) //Position: 0xA94C / 43340
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

void Function_207(bool bParam0) //Position: 0xA9CF / 43471
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

void Function_208() //Position: 0xAA46 / 43590
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

void Function_209() //Position: 0xAA8A / 43658
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

void Function_210() //Position: 0xAACE / 43726
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_211(int iParam0) //Position: 0xAAE4 / 43748
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_212())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_212() //Position: 0xAB24 / 43812
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

void Function_213() //Position: 0xAB49 / 43849
{
	Global_15862 = 0.0f;
	return;
}

void Function_214() //Position: 0xAB53 / 43859
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

int Function_215() //Position: 0xAB7E / 43902
{
	var uVar0;
	
	uVar0 = Function_50();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_216() //Position: 0xAB9B / 43931
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

int Function_217(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xABA4 / 43940
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
		Function_219(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_218(&Global_15402[iParam014] + 8);
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

void Function_218(int iParam0) //Position: 0xAEE6 / 44774
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

void Function_219(int iParam0) //Position: 0xAF19 / 44825
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_220(int iParam0) //Position: 0xAF30 / 44848
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

void Function_221(int iParam0, bool bParam1, bool bParam2) //Position: 0xAF98 / 44952
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
						Function_218(&uVar1);
					}
				}
				Function_222(&uVar0);
			}
		}
	}
	return;
}

void Function_222(bool bParam0) //Position: 0xB0A7 / 45223
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

int Function_223(int iParam0, struct<2> Param1, bool bParam3) //Position: 0xB0DA / 45274
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
	Param1 = &Param1;
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

bool Function_224(bool bParam0) //Position: 0xB17F / 45439
{
	if (!Function_85(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

void Function_225() //Position: 0xB19B / 45467
{
	var uVar0[12];
	int iVar13;
	
	if (Function_268())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Horse Breaking";
		uVar0[4] = "Stage 03 - Ride Home";
		uVar0[5] = "Last Stage";
		iVar13 = Function_254(&uLocal_298, &uVar0, &Local_276 + 4, 1, 0);
		if (Function_253(&iVar13, &iLocal_318, &iLocal_319, &iLocal_306))
		{
			Function_246();
			Function_245();
		}
		if (iVar13 == 0)
		{
			Function_246();
			Function_245();
			Function_244(&bLocal_351, 8);
		}
		else if (iVar13 == 1)
		{
			Function_246();
			Function_245();
			Function_239(iLocal_318);
			Function_235(StackVal, 5, &bLocal_352, &iLocal_318, Function_242(iLocal_318), Function_239(iLocal_318), 0);
		}
		else if (iVar13 == 2)
		{
			Function_246();
			Function_245();
			Function_230(&bLocal_353, 4);
		}
		else if (iVar13 == 3)
		{
			Function_228();
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_226(&iLocal_329);
			iLocal_318 = 1;
			iLocal_319 = 0;
			iLocal_306 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_228();
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_226(&iLocal_329);
			iLocal_318 = 2;
			iLocal_319 = 0;
			iLocal_306 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_228();
			Function_246();
			Function_245();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_226(&iLocal_329);
			iLocal_318 = 101;
			iLocal_319 = 0;
			iLocal_306 = 1000;
		}
	}
	return;
}

void Function_226(int iParam0) //Position: 0xB346 / 45894
{
	Function_227(&iParam0, 0.0f);
	return;
}

void Function_227(vector3 vParam0) //Position: 0xB353 / 45907
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_77(&vParam0, 1);
	Function_38(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_228() //Position: 0xB378 / 45944
{
	if (IS_BLIP_VALID(&iLocal_358))
	{
		REMOVE_BLIP(&iLocal_358);
	}
	if (IS_BLIP_VALID(&uLocal_360))
	{
		REMOVE_BLIP(&uLocal_360);
	}
	if (IS_OBJECT_VALID(&fLocal_364))
	{
		DESTROY_OBJECT(&fLocal_364);
	}
	if (IS_OBJECT_VALID(&iLocal_366))
	{
		DESTROY_OBJECT(&iLocal_366);
	}
	if (IS_ACTOR_VALID(&iLocal_433))
	{
		DESTROY_ACTOR(&iLocal_433);
	}
	if (IS_ACTOR_VALID(&uLocal_435))
	{
		DESTROY_ACTOR(&uLocal_435);
	}
	Function_229(&iLocal_459);
	if (IS_ATTACHMENT_VALID(&uLocal_447))
	{
		REMOVE_OBJECT_ATTACHMENT(&uLocal_447);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 136))
	{
		Function_182(&iLocal_4 + 136);
		DESTROY_OBJECT(&iLocal_4 + 136);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_182(&iLocal_4 + 312);
		DESTROY_OBJECT(&iLocal_4 + 312);
	}
	if (SQUAD_IS_VALID(&bLocal_467))
	{
		Function_182(&bLocal_467);
		DESTROY_OBJECT(&bLocal_467);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_323);
	return;
}

void Function_229(int[] iParam0) //Position: 0xB451 / 46161
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		if (IS_OBJECT_VALID(&(iParam0[iVar0])))
		{
			DESTROY_OBJECT(&(iParam0[iVar0]));
		}
		iVar0++;
	}
	return;
}

void Function_230(bool bParam0, int iParam1) //Position: 0xB487 / 46215
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_231(&iParam1);
	bParam0 = 1;
	return;
}

void Function_231(int iParam0) //Position: 0xB4AC / 46252
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_234("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_233(2) || Function_233(8)) || Function_233(9)) || Function_233(10))
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
		Function_234("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_234("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_234("");
	}
	else if (iParam0 == 8)
	{
		Function_232();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_232();
	}
	return;
}

void Function_232() //Position: 0xB5A3 / 46499
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_233(int iParam0) //Position: 0xB5AF / 46511
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

void Function_234(char* cParam0) //Position: 0xB5E5 / 46565
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_235(int iParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xB651 / 46673
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_236(StackVal, Param4, uParam3, &iParam6);
		Function_231(iParam0);
		iParam1 = 1;
		iParam2 = 100;
	}
}

void Function_236(struct<2> Param0, var uParam2, var uParam3) //Position: 0xB692 / 46738
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_238(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_237(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_237(int iParam0) //Position: 0xB714 / 46868
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

var Function_238(struct<2> Param0, bool bParam2) //Position: 0xBBC2 / 48066
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

struct<8> Function_239(int iParam0) //Position: 0xBC2E / 48174
{
	Function_240(iParam0 + 1);
	return StackVal, Function_240(iParam0 + 1);
}

struct<8> Function_240(bool bParam0) //Position: 0xBC3B / 48187
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_241(&iLocal_4 + 624[0]);
			return StackVal, Function_241(&iLocal_4 + 624[0]);
			break;
		
		case 0x00000001:
			Function_241(&iLocal_4 + 712[0]);
			return StackVal, Function_241(&iLocal_4 + 712[0]);
			break;
		
		case 0x00000002:
			Function_241(&iLocal_4 + 792[0]);
			return StackVal, Function_241(&iLocal_4 + 792[0]);
			break;
		
		default:
			Function_241(&iLocal_4 + 872[0]);
			return StackVal, Function_241(&iLocal_4 + 872[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_241(&iLocal_4 + 624[0]);
	return StackVal, Function_241(&iLocal_4 + 624[0]);
}

struct<8> Function_241(bool bParam0) //Position: 0xBD0A / 48394
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

int Function_242(int iParam0) //Position: 0xBD33 / 48435
{
	return Function_243(iParam0 + 1);
}

int Function_243(bool bParam0) //Position: 0xBD40 / 48448
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 624[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 712[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 792[0]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 872[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 624[0]);
}

void Function_244(bool bParam0, int iParam1) //Position: 0xBE0F / 48655
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_231(&iParam1);
	bParam0 = 1;
	return;
}

void Function_245() //Position: 0xBE34 / 48692
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_246() //Position: 0xBE49 / 48713
{
	Function_248();
	Function_247(10, 3);
	return;
}

void Function_247(int iParam0, int iParam1) //Position: 0xBE58 / 48728
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

void Function_248() //Position: 0xBFA5 / 49061
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_252())
	{
		Function_251(10, 3);
	}
	else
	{
		Function_249();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_50(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_50());
	UI_POP("nDebugMenu");
	return;
}

void Function_249() //Position: 0xBFF0 / 49136
{
	Function_250(25, 2);
	return;
}

void Function_250(int iParam0, int iParam1) //Position: 0xC000 / 49152
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

void Function_251(int iParam0, int iParam1) //Position: 0xC22C / 49708
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

bool Function_252() //Position: 0xC379 / 50041
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

bool Function_253(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC3E1 / 50145
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_246();
			Function_245();
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
		Function_234("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_254(struct<17> Param0) //Position: 0xC490 / 50320
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_267(&Var12, &Var0);
	uVar15 = Function_266(uParam1, &Var12);
	Function_265(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_264(&Param0, uVar15);
	Function_262(StackVal, &Param0, Var12.f_12);
	Function_260(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_259(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_256(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_255(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_255(int iParam0, int iParam1, int iParam2) //Position: 0xC584 / 50564
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

bool Function_256(struct<17> Param0) //Position: 0xC5E4 / 50660
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
				Function_258(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_258(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_255(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_257(Param1.f_64);
	}
	else
	{
		Function_257(Param1.f_64);
	}
	return 0;
}

void Function_257(bool bParam0) //Position: 0xC777 / 51063
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

void Function_258(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xC7B5 / 51125
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

var Function_259(int iParam0, struct<21> Param1) //Position: 0xC86B / 51307
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_260(vector3 vParam0) //Position: 0xC892 / 51346
{
	switch (Function_261())
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

int Function_261() //Position: 0xC93E / 51518
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

void Function_262(vector3 vParam0) //Position: 0xC97A / 51578
{
	switch (Function_263(&vParam0))
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

int Function_263(bool bParam0) //Position: 0xCA23 / 51747
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

var Function_264(struct<21> Param0) //Position: 0xCB43 / 52035
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

void Function_265(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xCCFD / 52477
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

var Function_266(int iParam0, struct<13> Param1) //Position: 0xCD99 / 52633
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_267(struct<17> Param0) //Position: 0xCDB5 / 52661
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

bool Function_268() //Position: 0xCE0F / 52751
{
	return Global_47307;
}

bool Function_269() //Position: 0xCE18 / 52760
{
	if (IS_EXITFLAG_SET())
	{
		Function_239(iLocal_318);
		Function_235(StackVal, 4, &bLocal_352, &iLocal_318, Function_242(iLocal_318), Function_239(iLocal_318), 0);
		return 0;
	}
	Function_532(StackVal, StackVal, StackVal, StackVal, StackVal, Local_276, iLocal_318, iLocal_319, &bLocal_353, &bLocal_351, &bLocal_352);
	Function_531();
	if (iLocal_318 == 99 && iLocal_318 == 100)
	{
		Function_528(&uLocal_388, &uLocal_477, &uLocal_371, iLocal_531, 1.0f, iLocal_532);
		if (Function_508(&Local_600, &uLocal_546, &uLocal_842, &uLocal_321, uLocal_545))
		{
			if (Function_506(&uLocal_842))
			{
				Function_239(iLocal_318);
				Function_235(StackVal, 5, &bLocal_352, &iLocal_318, Function_242(iLocal_318), Function_239(iLocal_318), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_239(iLocal_318);
			Function_235(StackVal, 1, &bLocal_352, &iLocal_318, Function_242(iLocal_318), Function_239(iLocal_318), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_239(iLocal_318);
			Function_235(StackVal, 2, &bLocal_352, &iLocal_318, Function_242(iLocal_318), Function_239(iLocal_318), 0);
			return 1;
		}
		if (Function_505(2048))
		{
			Function_239(iLocal_318);
			Function_235(StackVal, 3, &bLocal_352, &iLocal_318, Function_242(iLocal_318), Function_239(iLocal_318), 0);
			return 1;
		}
		Function_504();
	}
	switch (iLocal_318)
	{
		case 0x00000063:
			Function_475();
			break;
		
		case 0x00000000:
			Function_461();
			break;
		
		case 0x00000001:
			Function_429();
			break;
		
		case 0x00000002:
			Function_355();
			break;
		
		case 0x00000065:
			Function_272();
			break;
		
		case 0x00000064:
			if (Function_271(&bLocal_352))
			{
				return 0;
			}
			break;
		
		default:
			if (!Function_270(&iLocal_318, &iLocal_319, &iLocal_306))
			{
				return 0;
			}
			break;
	}
	if (bLocal_351)
	{
		Function_244(&bLocal_351, 8);
		return 0;
	}
	if (bLocal_352 && iLocal_318 == 100)
	{
		Function_239(iLocal_318);
		Function_235(StackVal, 5, &bLocal_352, &iLocal_318, Function_242(iLocal_318), Function_239(iLocal_318), 0);
	}
	if (bLocal_353)
	{
		Function_230(&bLocal_353, 4);
		return 0;
	}
	return 1;
}

bool Function_270(var uParam0, var uParam1, int iParam2) //Position: 0xCFCF / 53199
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

bool Function_271(int iParam0) //Position: 0xD018 / 53272
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_272() //Position: 0xD02C / 53292
{
	if (Function_224(Global_46914[1]))
	{
		Function_354(&uLocal_449);
	}
	switch (iLocal_319)
	{
		case 0x00000000:
			Function_350(0);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_323, GET_ACTOR_MAX_HEALTH(&bLocal_323));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (HUD_IS_FADED())
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_349();
				bLocal_320 = Global_46754[0];
				if (!Function_224(bLocal_320))
				{
					Function_348(&Local_276);
				}
				iLocal_370 = 0;
				Function_347(&Global_54076, &iLocal_4 + 872[0], 1, 1, 1);
				Function_226(&iLocal_329);
				iLocal_319 = 1;
			}
			else
			{
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_224(bLocal_320) || bLocal_320 != 4294967295))
			{
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			break;
		
		case 0x00000002:
			Function_343();
			Function_341(&iLocal_354, 1, 0, 4294967295, 4294967295);
			Function_226(&iLocal_329);
			iLocal_319 = 3;
			break;
		
		case 0x00000003:
			if (Function_273("$/cutscene/Home02_END/Home02_END", &iLocal_306, &Local_276, &iLocal_318, 72586, 70598, 70559, 70388, 70160, 56785, 0, 1, 1, 2, 2, 0, 1))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				TASK_CLEAR(&bLocal_323);
				TASK_CLEAR(&bLocal_327);
				Function_226(&iLocal_329);
				iLocal_319 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_351 = true;
			}
			break;
	}
	return;
}

bool Function_273(int iParam0, int iParam1, struct<41> Param2) //Position: 0xD1C3 / 53699
{
	if (!&bParam15)
	{
		Function_286(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_285(&Param2) || Param2.f_40 < 1))
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
				Function_226(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_284())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_283(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(&iParam1 + 4);
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
					Function_283(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_280(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_280(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_278(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_283(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_226(&iParam1 + 4);
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
						Function_277(1.0f);
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
						Function_275();
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
					Function_274(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_285(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_274(var uParam0, bool bParam1) //Position: 0xD825 / 55333
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
		Function_202();
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

void Function_275() //Position: 0xD8F4 / 55540
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_276();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_276() //Position: 0xD939 / 55609
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_277(bool bParam0) //Position: 0xD94B / 55627
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

void Function_278(var uParam0, int iParam1) //Position: 0xD968 / 55656
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
			if ((&iVar3 == &Global_54076 && !Function_279(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_279(int iParam0) //Position: 0xD9FA / 55802
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

float Function_280(vector3 vParam0) //Position: 0xDA2B / 55851
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

bool Function_281(int iParam0) //Position: 0xDAF8 / 56056
{
	return Function_14(iParam0, 2);
}

bool Function_282(int iParam0) //Position: 0xDB06 / 56070
{
	return Function_14(iParam0, 1);
}

int Function_283(bool bParam0) //Position: 0xDB14 / 56084
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

bool Function_284() //Position: 0xDBD7 / 56279
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

bool Function_285(struct<37> Param0) //Position: 0xDC14 / 56340
{
	return Param0.f_36;
}

void Function_286(var uParam0, int iParam1) //Position: 0xDC1F / 56351
{
	Function_287(&uParam0, &iParam1, 0);
	return;
}

void Function_287(var uParam0, bool bParam1, bool bParam2) //Position: 0xDC2F / 56367
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
			Function_288(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
							Function_288(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_288(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xDDA7 / 56743
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

int Function_289() //Position: 0xDDD1 / 56785
{
	if (Function_317())
	{
		if (Function_290())
		{
			return 1;
		}
	}
	return 0;
}

bool Function_290() //Position: 0xDDE6 / 56806
{
	if (!Function_315())
	{
	}
	if (!Function_309(&iLocal_288))
	{
	}
	if (!Function_291())
	{
	}
	if ((Function_315() && Function_309(&iLocal_288)) && Function_291())
	{
		return 1;
	}
	return 0;
}

bool Function_291() //Position: 0xDE18 / 56856
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_308(0))
		{
			return 0;
		}
		if (!Function_315())
		{
			return 0;
		}
		if (!Function_309(&iLocal_288))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_323))
		{
			bLocal_323 = Function_299(13, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_323, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_441))
		{
			bLocal_441 = Function_299(12, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_441, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_443))
		{
			bLocal_443 = Function_299(11, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_443, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_327))
		{
			bLocal_327 = Function_292(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_327, 1))
		{
			return 0;
		}
	}
	return 1;
}

var Function_292(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xDEFF / 57087
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
		Function_298(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_297())
		{
			return "";
		}
	}
	if (!Function_295())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_202();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_241(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_241(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_241(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_241(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_294(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_294(StackVal, Var4, 0, 1, 1);
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
		Function_293(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_293(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xE25C / 57948
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

var Function_294(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xE2A6 / 58022
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

bool Function_295() //Position: 0xE346 / 58182
{
	if (Function_296() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_296() //Position: 0xE35C / 58204
{
	return Global_21369.f_244;
}

bool Function_297() //Position: 0xE367 / 58215
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_298(var uParam0, bool bParam1, bool bParam2) //Position: 0xE387 / 58247
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

var Function_299(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8) //Position: 0xE3B6 / 58294
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
		Function_221(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_307(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_302(&Global_15402[iParam014] + 16, &iParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &iParam3;
			Var3.f_4 = &iParam4;
			Var3.f_8 = &iParam5;
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
		Function_301(&bVar1, 0, 0, 0, 0);
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
		Function_300(&bVar1, 0);
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

void Function_300(var uParam0, bool bParam1) //Position: 0xE8F6 / 59638
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_301(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0xE918 / 59672
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

var Function_302(int iParam0, int iParam1) //Position: 0xE979 / 59769
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_306(iParam0))
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
						Function_303(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_303(var uParam0, int iParam1) //Position: 0xEA07 / 59911
{
	Function_305(&uParam0);
	Function_304(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_304(int iParam0) //Position: 0xEA33 / 59955
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_305(int iParam0) //Position: 0xEA59 / 59993
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

bool Function_306(int iParam0) //Position: 0xEB2F / 60207
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_307(int iParam0, var uParam1) //Position: 0xEB46 / 60230
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

bool Function_308(bool bParam0) //Position: 0xEBEC / 60396
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

bool Function_309(struct<2>[] Param0) //Position: 0xEC1C / 60444
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_314();
	iVar1 = 0;
	if (!Function_180(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_313(&(Param0[iVar02]), 8);
		}
		else if (Function_312())
		{
			iVar1 = 1;
			Function_313(&(Param0[iVar02]), 8);
		}
		Function_313(&(Param0[iVar02]), 16);
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
				Function_313(&(Param0[iVar02]), 1);
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
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_313(&(Param0[iVar02]), 2);
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
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_313(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_313(&(Param0[iVar02]), 2);
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
	Function_310();
	return 1;
}

void Function_310() //Position: 0xEFDE / 61406
{
	if (!Function_311(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_311(int iParam0) //Position: 0xF01E / 61470
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_312() //Position: 0xF03A / 61498
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

void Function_313(struct<13> Param0) //Position: 0xF068 / 61544
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_314() //Position: 0xF07B / 61563
{
	if (!Function_311(128))
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

bool Function_315() //Position: 0xF0BD / 61629
{
	Function_316(&iLocal_4 + 8, 977, 2, 0);
	Function_316(&iLocal_4 + 8, 981, 2, 0);
	Function_316(&iLocal_4 + 8, 976, 2, 0);
	Function_316(&iLocal_4 + 8, 980, 2, 0);
	Function_316(&iLocal_4 + 8, 987, 2, 0);
	Function_316(&iLocal_4 + 8, 991, 2, 0);
	if (Function_309(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_316(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xF11E / 61726
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
			Function_313(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_313(&(Param0[iVar02]), 8);
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

bool Function_317() //Position: 0xF1FA / 61946
{
	if (!Function_315())
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&iLocal_4))
	{
		Function_318();
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_327))
	{
		if (Function_297())
		{
			bLocal_327 = Function_292(1, 1, 0, 0, 0, 0, 1, 0);
		}
		return 0;
	}
	if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_327, 1))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_323))
	{
		bLocal_323 = Function_299(13, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	else if (!IS_ACTOR_VALID(&bLocal_441))
	{
		bLocal_441 = Function_299(12, 0, 1, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!IS_ACTOR_VALID(&bLocal_443))
	{
		bLocal_443 = Function_299(11, 0, 1, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!iLocal_381)
	{
		Function_347(&Global_54076, &iLocal_4 + 624[1], 1, 1, 1);
		Function_347(&bLocal_323, &iLocal_4 + 624[3], 1, 1, 1);
		Function_347(&bLocal_327, &iLocal_4 + 624[5], 1, 1, 1);
		Function_347(&bLocal_441, &iLocal_4 + 624[8], 1, 1, 1);
		Function_347(&bLocal_443, &iLocal_4 + 624[8], 1, 1, 1);
		iLocal_381 = 1;
		return 0;
	}
	return 1;
	return 0;
}

struct<8> Function_318() //Position: 0xF329 / 62249
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("home02_ranch03_layout");
	(&iLocal_4 + 440) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 384[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, 1,401298E-45f, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 440, &iLocal_4 + 384[0]);
	*(&iLocal_4 + 384[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 440, &iLocal_4 + 384[1]);
	*(&iLocal_4 + 384[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene03Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 440, &iLocal_4 + 384[2]);
	*(&iLocal_4 + 384[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene04Vol", 2,802597E-45f, Vector(-2178,147f, 18,35769f, 2612.0f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 5,17459f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 440, &iLocal_4 + 384[3]);
	*(&iLocal_4 + 384[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-49,02504f, 116,1868f, 1416f), Vector(0.0f, 0.0f, 0.0f), Vector(6,946649f, 4,107396f, 7,079496f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 440, &iLocal_4 + 384[4]);
	*(&iLocal_4 + 384[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneLastVolHorse", 2,802597E-45f, Vector(-39,44329f, 116,6032f, 1425,314f), Vector(0.0f, -43,84933f, 0.0f), Vector(10,58847f, 19,69661f, 22,44232f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 440, &iLocal_4 + 384[5]);
	*(&iLocal_4 + 528) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Boundary01_set");
	*(&iLocal_4 + 448[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_01", 2,802597E-45f, Vector(151,523f, 128,9171f, 1387,222f), Vector(0.0f, 76,27037f, 0.0f), Vector(54,07419f, 65,53797f, 21,59639f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[0]);
	*(&iLocal_4 + 448[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_02", 2,802597E-45f, Vector(460,2025f, 93,85825f, 1334,691f), Vector(0.0f, 117,273f, 0.0f), Vector(150.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[1]);
	*(&iLocal_4 + 448[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_03", 2,802597E-45f, Vector(358,8476f, 101,3961f, 1260,301f), Vector(0.0f, 71,62419f, 0.0f), Vector(150.0f, 100.0f, 150.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[2]);
	*(&iLocal_4 + 448[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_04", 2,802597E-45f, Vector(62,281f, 110,4314f, 1312,246f), Vector(0.0f, 130,836f, 0.0f), Vector(150.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[3]);
	*(&iLocal_4 + 448[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_05", 2,802597E-45f, Vector(-48,5784f, 110,4313f, 1513,941f), Vector(0.0f, 161,6617f, 0.0f), Vector(150.0f, 100.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[4]);
	*(&iLocal_4 + 448[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_06", 2,802597E-45f, Vector(16,01669f, 110,4313f, 1731,114f), Vector(-6,217152f, 248,1178f, 9,608168f), Vector(150.0f, 100.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[5]);
	*(&iLocal_4 + 448[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_07", 2,802597E-45f, Vector(267,4984f, 117,5899f, 1724,876f), Vector(-171,4855f, 254,1804f, 175,6394f), Vector(150.0f, 100.0f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[6]);
	*(&iLocal_4 + 448[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_08", 2,802597E-45f, Vector(464,2484f, 87,31177f, 1570,036f), Vector(-184,8926f, 188,2372f, 184,8152f), Vector(150.0f, 154,947f, 300.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[7]);
	*(&iLocal_4 + 448[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_boundary01_09", 2,802597E-45f, Vector(231,8983f, 101,3961f, 1233,009f), Vector(0.0f, 86,63589f, 0.0f), Vector(150.0f, 100.0f, 200.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 528, &iLocal_4 + 448[8]);
	*(&iLocal_4 + 536) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander01", 4,203895E-45f, Vector(172.0f, 129,5059f, 1380.0f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 544) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander01a", 4,203895E-45f, Vector(64,00003f, 124,8668f, 1560.0f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 552) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_wander01b", 4,203895E-45f, Vector(272.0f, 115,451f, 1488.0f), Vector(0.0f, 20.0f, 0.0f), Vector(15.0f, 10.0f, 15.0f));
	*(&iLocal_4 + 560) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective00", 2,802597E-45f, Vector(55,99994f, 115,9075f, 1256.0f), Vector(0.0f, -26,60107f, 0.0f), Vector(15.0f, 30.0f, 15.0f));
	*(&iLocal_4 + 568) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective01", 4,203895E-45f, Vector(172.0f, 129,5059f, 1380.0f), Vector(0.0f, 20.0f, 0.0f), Vector(80.0f, 30.0f, 80.0f));
	*(&iLocal_4 + 576) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_UncleStop", 4,203895E-45f, Vector(115,9999f, 129,9301f, 1420f), Vector(0.0f, 20.0f, 0.0f), Vector(25,90414f, 9,714052f, 25,90414f));
	*(&iLocal_4 + 584) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "volume_objective02", 2,802597E-45f, Vector(-71,85542f, 116,8612f, 1408f), Vector(0.0f, -26,60107f, 0.0f), Vector(15.0f, 30.0f, 15.0f));
	*(&iLocal_4 + 592) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HerdFailCheck", 4,203895E-45f, Vector(193,4656f, 121,3107f, 1510,196f), Vector(0.0f, 15,73308f, 0.0f), Vector(258,9291f, 100.0f, 256,7533f));
	*(&iLocal_4 + 600) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nwanderVol", 2,802597E-45f, Vector(200,9715f, 115,6733f, 1489,289f), Vector(0.0f, -26,60107f, 0.0f), Vector(339,6824f, 137,696f, 335,1709f));
	*(&iLocal_4 + 608) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "UncleAvoidWallsVol", 2,802597E-45f, Vector(151,3905f, 129,0457f, 1385,097f), Vector(0.0f, -13,2767f, 0.0f), Vector(15.0f, 54,47433f, 45,32737f));
	*(&iLocal_4 + 616) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 624[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-18,17371f, 125,9829f, 1444,402f), Vector(0.0f, -215,4216f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[0], &iLocal_4 + 616);
	*(&iLocal_4 + 624[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd01", Vector(-18,17371f, 125,9829f, 1444,402f), Vector(0.0f, -231,9698f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[1], &iLocal_4 + 616);
	*(&iLocal_4 + 624[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart01", Vector(-17,91529f, 126,8327f, 1447,248f), Vector(0.0f, 12,7515f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[2], &iLocal_4 + 616);
	*(&iLocal_4 + 624[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd01", Vector(-17,91529f, 126,8327f, 1447,248f), Vector(0,7706428f, 97,48432f, 3,861846f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[3], &iLocal_4 + 616);
	*(&iLocal_4 + 624[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart01", Vector(-60f, 116,1573f, 1440f), Vector(0.0f, -278,9565f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[4], &iLocal_4 + 616);
	*(&iLocal_4 + 624[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd01", Vector(-60f, 116,1573f, 1440f), Vector(0.0f, -287,6256f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[5], &iLocal_4 + 616);
	*(&iLocal_4 + 624[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart01", Vector(-57,26038f, 116,321f, 1441,26f), Vector(0.0f, 110,6265f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[6], &iLocal_4 + 616);
	*(&iLocal_4 + 624[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEnd01", Vector(-57,26038f, 116,321f, 1441,26f), Vector(0.0f, 110,6265f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[7], &iLocal_4 + 616);
	*(&iLocal_4 + 624[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FamStart", Vector(-68.0f, 116,8612f, 1402,723f), Vector(0.0f, -215,4216f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 624[8], &iLocal_4 + 616);
	*(&iLocal_4 + 704) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 712[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart02", Vector(168,0003f, 128,5019f, 1404f), Vector(0.0f, -29,72478f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[0], &iLocal_4 + 704);
	*(&iLocal_4 + 712[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd02", Vector(168,0003f, 128,5019f, 1404f), Vector(0.0f, -29,72478f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[1], &iLocal_4 + 704);
	*(&iLocal_4 + 712[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart02", Vector(164,0003f, 128,5019f, 1404f), Vector(0.0f, -74,75838f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[2], &iLocal_4 + 704);
	*(&iLocal_4 + 712[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd02", Vector(164,0003f, 128,5019f, 1404f), Vector(0.0f, -74,75838f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[3], &iLocal_4 + 704);
	*(&iLocal_4 + 712[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEnd02", Vector(164,0003f, 128,5019f, 1408f), Vector(0.0f, 360,8972f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[4], &iLocal_4 + 704);
	*(&iLocal_4 + 712[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart02", Vector(164,0003f, 128,5019f, 1408f), Vector(0.0f, 360,8972f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[5], &iLocal_4 + 704);
	*(&iLocal_4 + 712[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd02", Vector(160,0002f, 128,8044f, 1400f), Vector(0.0f, -9,419387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[6], &iLocal_4 + 704);
	*(&iLocal_4 + 712[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart02", Vector(160,0002f, 128,8044f, 1400f), Vector(0.0f, -9,419387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 712[7], &iLocal_4 + 704);
	*(&iLocal_4 + 784) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 792[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart03", Vector(164,3139f, 128,2344f, 1414,482f), Vector(0.0f, 90,11026f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[0], &iLocal_4 + 784);
	*(&iLocal_4 + 792[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd03", Vector(164,3139f, 128,2344f, 1414,482f), Vector(0.0f, 90,11026f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[1], &iLocal_4 + 784);
	*(&iLocal_4 + 792[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStart03", Vector(159,9999f, 128,5103f, 1408.0f), Vector(0.0f, -209,9831f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[2], &iLocal_4 + 784);
	*(&iLocal_4 + 792[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEnd03", Vector(159,9999f, 128,5103f, 1408.0f), Vector(0.0f, -209,9831f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[3], &iLocal_4 + 784);
	*(&iLocal_4 + 792[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEnd03", Vector(159,9999f, 128,5103f, 1408.0f), Vector(0.0f, 163,2988f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[4], &iLocal_4 + 784);
	*(&iLocal_4 + 792[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStart03", Vector(159,9999f, 128,5103f, 1408.0f), Vector(0.0f, 163,2988f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[5], &iLocal_4 + 784);
	*(&iLocal_4 + 792[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEnd03", Vector(164,3139f, 128,2344f, 1414,482f), Vector(0.0f, -274,4908f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[6], &iLocal_4 + 784);
	*(&iLocal_4 + 792[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStart03", Vector(164,3139f, 128,2344f, 1414,482f), Vector(0.0f, -262,4081f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 792[7], &iLocal_4 + 784);
	*(&iLocal_4 + 864) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 872[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStartLast", Vector(-72.0f, 116,8612f, 1404f), Vector(0.0f, 159,7218f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[0], &iLocal_4 + 864);
	*(&iLocal_4 + 872[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEndLast", Vector(-48f, 116,0577f, 1413,798f), Vector(0.0f, -208,9285f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[1], &iLocal_4 + 864);
	*(&iLocal_4 + 872[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionStartLast", Vector(-72.0f, 116,8612f, 1408f), Vector(0.0f, 41,21596f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[2], &iLocal_4 + 864);
	*(&iLocal_4 + 872[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionEndLast", Vector(-41,88215f, 116,5301f, 1413,882f), Vector(0.0f, -61,04815f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[3], &iLocal_4 + 864);
	*(&iLocal_4 + 872[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseEndLast", Vector(-49,08193f, 116,1761f, 1417,082f), Vector(0.0f, 337,884f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[4], &iLocal_4 + 864);
	*(&iLocal_4 + 872[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompanionHorseStartLast", Vector(-48,2616f, 116,1975f, 1413,931f), Vector(0.0f, 145,851f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[5], &iLocal_4 + 864);
	*(&iLocal_4 + 872[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseEndLast", Vector(-48f, 116,0619f, 1413,864f), Vector(0.0f, -560,649f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[6], &iLocal_4 + 864);
	*(&iLocal_4 + 872[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorseStartLast", Vector(-49,09972f, 116,1758f, 1417,1f), Vector(0.0f, -383,2449f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 872[7], &iLocal_4 + 864);
	*(&iLocal_4 + 944) = Vector(64,00003f, 124,8668f, 1560.0f);
	*(&iLocal_4 + 944 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_herd01a", Vector(64,00003f, 124,8668f, 1560.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 976) = Vector(272.0f, 115,451f, 1488.0f);
	*(&iLocal_4 + 976 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_herd01b", Vector(272.0f, 115,451f, 1488.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1008) = Vector(172.0f, 129,5059f, 1380.0f);
	*(&iLocal_4 + 1008 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_4 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_move_herd01", Vector(172.0f, 129,5059f, 1380.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1040) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_objective02", Vector(-44f, 116,4222f, 1420f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1048) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "point_sGoal_teleport", Vector(-39,12149f, 116,5989f, 1428f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 1056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HerdStartPos", Vector(190,1392f, 128,0396f, 1354,139f), Vector(0.0f, 0.0f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 1064) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "path_companion01");
}

void 0D¾zÃD²BìnrD½Æ½ÃiIBìnD½?Ã?BìnD¼MÎÃCBìlD»òÃ 
(Bìi¡DºèLÂø+aBìiòDºYÛÂð8BìjwD¹Í%Âè
¯BìjÀD¹?ÿÂßþâBìkÂD(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74) //Position: 0x11092 / 69778
{
	strcpy((StackVal - Vector(StackVal, StackVal, StackVal)) - 5017, StackVal, 68);
	(194 - 5023)->f_47002 = 141;
	return;
	PatchTrapB();
	PatchTrapA();
	(StackVal - 5029)->f_46862 = StackVal;
}

int Function_320() //Position: 0x11210 / 70160
{
	Function_321(1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_321(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x11225 / 70181
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
		Function_245();
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
	Function_274(&iParam9, &bParam10);
}

int Function_322() //Position: 0x112F4 / 70388
{
	Function_347(&Global_54076, &iLocal_4 + 872[1], 0, 0, 0);
	Function_347(&bLocal_327, &iLocal_4 + 872[6], 1, 1, 1);
	Function_347(&bLocal_325, &iLocal_4 + 872[4], 1, 1, 1);
	Function_347(&bLocal_323, &iLocal_4 + 872[3], 1, 1, 1);
	DELETE_WEAPON_FROM_ACTOR(&bLocal_323, 21);
	TASK_CLEAR(&bLocal_323);
	TASK_STAND_STILL(&bLocal_325, 4.0f, 0, 0);
	TASK_CLEAR(&Global_54076);
	ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_327);
	AI_ACTOR_FORCE_SPEED(&bLocal_323, 1);
	ACTOR_POP_NEXT_GAIT(&bLocal_323, 1, 0);
	GET_OBJECT_POSITION(&iLocal_4 + 1048, &Local_424);
	ENABLE_GAME_CAMERA_FOCUS(Local_424, -1.0f, 0, 0, 1, 0);
	return 1;
}

int Function_323() //Position: 0x1139F / 70559
{
	if (!Function_315())
	{
	}
	if (!Function_309(&iLocal_288))
	{
	}
	if (Function_315() && Function_309(&iLocal_288))
	{
		return 1;
	}
	return 0;
}

int Function_324() //Position: 0x113C6 / 70598
{
	Function_229(&iLocal_459);
	DELETE_WEAPON_FROM_ACTOR(&bLocal_323, 21);
	if (SQUAD_IS_VALID(&bLocal_467))
	{
		Function_334(&bLocal_467);
		GET_OBJECT_POSITION(&iLocal_4 + 1048, &Local_424);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 1048, &Local_427);
		Function_328(StackVal, StackVal, &bLocal_467, Local_424, Local_427, 2, 2.0f, 3.0f, 0, 0);
		Function_327(&bLocal_467);
		SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_467, false, 1, 4294967295);
		TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 384[5], -1.0f);
		Function_326(&bLocal_467, &iLocal_4 + 384[5], 1, 1);
	}
	else
	{
		Function_325();
		bLocal_467 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sGoal"));
		Function_334(&bLocal_467);
		Function_327(&bLocal_467);
		GET_OBJECT_POSITION(&iLocal_4 + 1048, &Local_424);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 1048, &Local_427);
		Function_328(StackVal, StackVal, &bLocal_467, Local_424, Local_427, 2, 2.0f, 3.0f, 0, 0);
		SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_467, false, 1, 4294967295);
		TASK_WANDER_IN_VOLUME(false, &iLocal_4 + 384[5], -1.0f);
		Function_326(&bLocal_467, &iLocal_4 + 384[5], 1, 1);
	}
	Function_347(&bLocal_441, &iLocal_4 + 624[8], 1, 1, 1);
	Function_347(&bLocal_443, &iLocal_4 + 624[8], 1, 1, 1);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse01", &bLocal_327);
	CUTSCENE_MANAGER_SET_ASSET_OVERRIDE_ACTOR("RIDEABLE_ANIMAL_Horse02", &bLocal_325);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 384[4]);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 384[4]);
	CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 384[4], 15);
	iLocal_381 = 1;
	return 1;
}

void Function_325() //Position: 0x11567 / 71015
{
	*(&iLocal_4 + 376) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sGoal"));
	*(&iLocal_4 + 320[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_GOAL_01", 976, Vector(171,9999f, 128,3002f, 1400.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 320[02], &iLocal_4 + 376);
	SET_ACTOR_FACTION(&iLocal_4 + 320[02], 2);
	*(&iLocal_4 + 320[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_GOAL_02", 977, Vector(172.0f, 127,498f, 1404.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 320[12], &iLocal_4 + 376);
	*(&iLocal_4 + 320[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_GOAL_03", 980, Vector(167,9999f, 128,502f, 1400.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 320[22], &iLocal_4 + 376);
	return;
}

void Function_326(bool bParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x11678 / 71288
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&bParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_327(bool bParam0) //Position: 0x116D0 / 71376
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

void Function_328(bool bParam0, struct<2> Param1, struct<2> Param3, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9) //Position: 0x11705 / 71429
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	bool bVar10;
	bool bVar11;
	var uVar12;
	
	uVar12 = StackVal;
	uVar6 = Vector(0.0f, 1.0f, 0.0f);
	UNK_0x44986367(StackVal, &Param3);
	VCROSS(&uVar6, &Param3, &Var4);
	VSCALE(&Var4, bParam6);
	VSCALE(&Param3, bParam6);
	Var2 = Param1;
	Var2.f_4 = (StackVal + &fParam7);
	bVar0 = false;
	bVar11 = false;
	bVar10 = false;
	while (bVar10 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar10);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if ((bParam8 && !Function_184(&iVar1, 0x3f800000, 0x42960000, 1, 1, 0)) || !&bParam8)
			{
				if (!Function_331(&iVar1, &Global_54076, &fParam9))
				{
					if (bVar0 == iParam5)
					{
						bVar0 = false;
						bVar11++;
						Var2 = Param1;
						Var8 = Param3;
						VSCALE(&Var8, TO_FLOAT(bVar11));
						Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var8, Var2, StackVal);
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Hit max cols, starting a new row");
						PRINTNL();
					}
					else
					{
						PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - current col is ");
						PRINTINT(bVar0);
						PRINTNL();
					}
					Function_330(StackVal, &iVar1, Var2, uVar12, 1, 1, 1);
					PRINTSTRING("TELEPORT_SQUAD_IN_COLUMN - Teleporting  ");
					PRINTSTRING(GET_ACTOR_NAME(&iVar1));
					PRINTSTRING(" with index ");
					PRINTINT(bVar10);
					PRINTSTRING(" to ");
					PRINTVECTOR(Var2);
					PRINTNL();
					if (&fParam9 < 0.0f)
					{
						PRINTSTRING("He was ");
						PRINTFLOAT(Function_329(&Global_54076, &iVar1));
						PRINTSTRING("m away");
						PRINTNL();
					}
					bVar0++;
					Var2 = Vector(StackVal, StackVal, StackVal) - Vector(Var4, Var2, StackVal);
				}
			}
		}
		bVar10++;
	}
}

var Function_329(float fParam0, int iParam1) //Position: 0x11918 / 71960
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_330(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, bool bParam6) //Position: 0x11A0D / 72205
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

bool Function_331(var uParam0, var uParam1, float fParam2) //Position: 0x11ADC / 72412
{
	float fVar0;
	
	fVar0 = Function_332(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_332(var uParam0, int iParam1) //Position: 0x11AFB / 72443
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_333(&uVar0, &uVar2);
	return iVar4;
}

var Function_333(struct<2> Param0) //Position: 0x11B1C / 72476
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_334(bool bParam0) //Position: 0x11B3B / 72507
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&bParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

int Function_335() //Position: 0x11B8A / 72586
{
	Function_350(0);
	iLocal_381 = 0;
	Function_338(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bLocal_327 = GET_MOUNT(&Global_54076);
	Function_336(StackVal, &iLocal_274, *(&Global_6667[5628] + 88), &iLocal_306 + 32, 0, 0, 0, 0, 1, 1);
	Function_341(&iLocal_354, 0, 0, 4294967295, 4294967295);
	return 1;
}

void Function_336(int iParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x11BE0 / 72672
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
				Function_337(&uVar1, &iParam0);
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

void Function_337(var uParam0, float fParam1) //Position: 0x11E80 / 73344
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

void Function_338(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x11F02 / 73474
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
	Function_245();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_50();
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
				Function_340(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_54(), 2,802597E-45f, Function_340(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_339()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_339()));
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
	if (Function_311(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_311(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_339() //Position: 0x121B4 / 74164
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

struct<8> Function_340(int iParam0) //Position: 0x12242 / 74306
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12254 / 74324
{
	if (iParam0 != iParam1)
	{
		iParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_342(iParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_342(int iParam0) //Position: 0x1227E / 74366
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

void Function_343() //Position: 0x127D3 / 75731
{
	MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_323);
	if (!SQUAD_IS_VALID(&iLocal_4 + 136))
	{
		Function_346();
		if (SQUAD_IS_VALID(&iLocal_4 + 136))
		{
			Function_345(&iLocal_4 + 136, 0);
			Function_344(&iLocal_4 + 136, 3);
			if (IS_ACTOR_VALID(&iLocal_4 + 112[02]))
			{
				Function_347(&iLocal_4 + 112[02], &iLocal_4 + 872[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 136, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_325 = &iLocal_4 + 112[02];
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_325, 0);
		}
	}
	if (Function_224(Global_46914[1]))
	{
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 94)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 94)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 94)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 94));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 94), 1);
			}
		}
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 95)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 95)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 95)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 95));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 95), 1);
			}
		}
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 96)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 96)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 96)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 96));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 96), 1);
			}
		}
		if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 97)))
		{
			if (IS_DOOR_OPENED(Function_223(Global_46914[1], "beechersHope", "stable01", 97)) || IS_DOOR_OPENING(Function_223(Global_46914[1], "beechersHope", "stable01", 97)))
			{
				CLOSE_DOOR_FAST(Function_223(Global_46914[1], "beechersHope", "stable01", 97));
				SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 97), 1);
			}
		}
	}
	return;
}

void Function_344(var uParam0, bool bParam1) //Position: 0x12BAA / 76714
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

void Function_345(var uParam0, bool bParam1) //Position: 0x12BF2 / 76786
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

void Function_346() //Position: 0x12C39 / 76857
{
	(&iLocal_4 + 136) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Horse01"));
	*(&iLocal_4 + 112[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "HORSE_01_01", 977, Vector(-74,45387f, 116,861f, 1410,802f), Vector(0.0f, 80,54409f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 112[02], &iLocal_4 + 136);
	return;
}

void Function_347(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x12C9E / 76958
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

void Function_348(int iParam0) //Position: 0x12DAE / 77230
{
	if (!Function_285(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_192(1, 0, 1);
		}
	}
	return;
}

void Function_349() //Position: 0x12DCA / 77258
{
	return;
}

void Function_350(bool bParam0) //Position: 0x12DD0 / 77264
{
	Function_351(0, 0x40400000);
	Function_209();
	Function_208();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_351(float fParam0, float fParam1) //Position: 0x12E06 / 77318
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
	Function_353();
	Function_352();
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

void Function_352() //Position: 0x12F17 / 77591
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_353() //Position: 0x12F4B / 77643
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

void Function_354(var[] uParam0) //Position: 0x13051 / 77905
{
	switch (iLocal_370)
	{
		case 0x00000000:
			if (((IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 94)) && IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 95))) && IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 96))) && IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 97)))
			{
				iLocal_370++;
			}
			break;
		
		case 0x00000001:
			if (!IS_DOOR_VALID(&(uParam0[0])))
			{
				uParam0[0] = Function_223(Global_46914[1], "beechersHope", "stable01", 94);
				if (IS_DOOR_VALID(&(uParam0[0])))
				{
					Function_161(&(uParam0[0]), 0);
					OPEN_DOOR_DIRECTION(&(uParam0[0]), 1);
					SET_DOOR_AUTO_CLOSE(&(uParam0[0]), 0);
				}
			}
			else
			{
				Function_161(&(uParam0[0]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[0]), 1);
				SET_DOOR_AUTO_CLOSE(&(uParam0[0]), 0);
			}
			if (!IS_DOOR_VALID(&(uParam0[1])))
			{
				uParam0[1] = Function_223(Global_46914[1], "beechersHope", "stable01", 95);
				if (IS_DOOR_VALID(&(uParam0[1])))
				{
					Function_161(&(uParam0[1]), 0);
					OPEN_DOOR_DIRECTION(&(uParam0[1]), 0);
					SET_DOOR_AUTO_CLOSE(&(uParam0[1]), 0);
				}
			}
			else
			{
				Function_161(&(uParam0[1]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[1]), 0);
				SET_DOOR_AUTO_CLOSE(&(uParam0[1]), 0);
			}
			if (!IS_DOOR_VALID(&(uParam0[2])))
			{
				uParam0[2] = Function_223(Global_46914[1], "beechersHope", "stable01", 96);
				if (IS_DOOR_VALID(&(uParam0[2])))
				{
					Function_161(&(uParam0[2]), 0);
					OPEN_DOOR_DIRECTION(&(uParam0[2]), 0);
					SET_DOOR_AUTO_CLOSE(&(uParam0[2]), 0);
				}
			}
			else
			{
				Function_161(&(uParam0[2]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[2]), 0);
				SET_DOOR_AUTO_CLOSE(&(uParam0[2]), 0);
			}
			if (!IS_DOOR_VALID(&(uParam0[3])))
			{
				uParam0[3] = Function_223(Global_46914[1], "beechersHope", "stable01", 97);
				if (IS_DOOR_VALID(&(uParam0[3])))
				{
					Function_161(&(uParam0[3]), 0);
					OPEN_DOOR_DIRECTION(&(uParam0[3]), 1);
					SET_DOOR_AUTO_CLOSE(&(uParam0[3]), 0);
				}
			}
			else
			{
				Function_161(&(uParam0[3]), 0);
				OPEN_DOOR_DIRECTION(&(uParam0[3]), 1);
				SET_DOOR_AUTO_CLOSE(&(uParam0[3]), 0);
			}
			iLocal_370++;
			break;
		
		case 0x00000002:
			iLocal_370++;
			break;
	}
	return;
}

void Function_355() //Position: 0x13374 / 78708
{
	if (Function_224(Global_46914[1]))
	{
		Function_354(&uLocal_449);
	}
	if (iLocal_319 > 6)
	{
		GET_OBJECT_POSITION(&bLocal_323, &Local_430);
		STREAMING_LOAD_BOUNDS(Local_430, 50.0f, 1);
	}
	if (iLocal_319 >= 7)
	{
		Function_425();
		if (SQUAD_IS_VALID(&iLocal_4 + 312))
		{
			Function_423();
		}
		Function_422();
		GET_OBJECT_POSITION(&iLocal_4 + 1040, &Local_430);
		Function_418(StackVal, "$/cutscene/HOME02_END/HOME02_END", &uLocal_542, Local_430, 95581, 0, 100.0f, 200.0f, 2, 1, 2, 2, 0, 1);
	}
	switch (iLocal_319)
	{
		case 0x00000000:
			Function_350(0);
			SET_ACTOR_HEALTH(&bLocal_323, GET_ACTOR_MAX_HEALTH(&bLocal_323));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_341[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_349();
				bLocal_320 = Global_46754[0];
				if (!Function_224(bLocal_320))
				{
					Function_348(&Local_276);
				}
				Function_347(&Global_54076, &iLocal_4 + 792[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_323))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_323);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_323);
					TASK_STAND_STILL(&bLocal_323, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_323, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_323, true);
					MEMORY_PREFER_RIDING(&bLocal_323, false);
				}
				if (IS_ACTOR_VALID(&bLocal_327))
				{
					TASK_STAND_STILL(&bLocal_327, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_327, true);
				}
				Function_226(&iLocal_329);
				iLocal_319 = 1;
			}
			else
			{
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_224(bLocal_320) || bLocal_320 != 4294967295))
			{
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			break;
		
		case 0x00000002:
			Function_240(iLocal_318);
			Function_410(StackVal, Function_240(iLocal_318), iLocal_318, Global_46754[0], Function_243(iLocal_318), 2);
			Function_341(&iLocal_354, 3, 0, 4294967295, 4294967295);
			if (HUD_IS_FADED())
			{
				Function_402();
				if (IS_ACTOR_VALID(&bLocal_323))
				{
					Function_221(13, 0, 1);
					MEMORY_CLEAR_RIDING_PREFERENCE(&bLocal_323);
					TASK_STAND_STILL(&bLocal_323, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_323, true);
				}
			}
			Function_400();
			Function_226(&iLocal_329);
			iLocal_319 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				if (SQUAD_GET_SIZE(&bLocal_467) > 3)
				{
					if (!iLocal_543)
					{
						if (IS_ACTOR_VALID(&bLocal_323))
						{
							if (IS_OBJECT_VALID(&fLocal_368))
							{
								DESTROY_OBJECT(&fLocal_368);
							}
							GET_PATH_POINT(&iLocal_4 + 1072, Function_399(&bLocal_323, &iLocal_4 + 1072), &Local_424);
							Function_76();
							fLocal_368 = CREATE_POINT_IN_LAYOUT(&iLocal_274, "PathPointObject", Local_424, Function_76());
							bLocal_355 = TASK_SEQUENCE_OPEN();
							TASK_GO_NEAR_OBJECT(0, &fLocal_368, 5.0f, 4, 1, 0);
							TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1072, 4, 0, 0, 0, false);
							TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
							TASK_STAND_STILL(false, -1.0f, 0, 0);
							TASK_SEQUENCE_CLOSE();
							TASK_SEQUENCE_PERFORM(&bLocal_323, bLocal_355);
							TASK_SEQUENCE_RELEASE(bLocal_355, 1);
							TASK_PRIORITY_SET(&bLocal_323, true);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_323, true);
							iLocal_543 = 1;
						}
					}
				}
				Local_421 = Vector(0.0f, 0.0f, 7.0f);
				if (IS_ACTOR_VALID(&bLocal_327))
				{
					TASK_CLEAR(&bLocal_327);
					bLocal_355 = TASK_SEQUENCE_OPEN();
					TASK_FOLLOW_OBJECT(0, &Global_54076, &Local_421, 0, 0, 0, 0, 0, 0, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_327, bLocal_355);
					TASK_SEQUENCE_RELEASE(bLocal_355, 1);
					TASK_PRIORITY_SET(&bLocal_327, true);
				}
				Function_397();
				iLocal_538 = Function_396(&Global_54076, &iLocal_4 + 1040);
				iLocal_538 = (iLocal_538 + 50.0f);
				fLocal_539 = (iLocal_538 + 100.0f);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 30.0f))
				{
					Function_395();
				}
				Function_394("home02_ranch03_obj05");
				Function_226(&iLocal_329);
				iLocal_370 = 0;
				iLocal_319 = 8;
			}
			break;
		
		case 0x00000008:
			Function_377();
			Function_371();
			if (Function_224(Global_46914[1]))
			{
				if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 94)))
				{
					if (IS_DOOR_CLOSED(Function_223(Global_46914[1], "beechersHope", "stable01", 94)))
					{
						Function_161(Function_223(Global_46914[1], "beechersHope", "stable01", 94), 0);
						OPEN_DOOR_DIRECTION(Function_223(Global_46914[1], "beechersHope", "stable01", 94), 1);
						SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 94), 0);
					}
				}
				if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 95)))
				{
					if (IS_DOOR_CLOSED(Function_223(Global_46914[1], "beechersHope", "stable01", 95)))
					{
						Function_161(Function_223(Global_46914[1], "beechersHope", "stable01", 95), 0);
						OPEN_DOOR_DIRECTION(Function_223(Global_46914[1], "beechersHope", "stable01", 95), 1);
						SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 95), 0);
					}
				}
				if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 96)))
				{
					if (IS_DOOR_CLOSED(Function_223(Global_46914[1], "beechersHope", "stable01", 96)))
					{
						Function_161(Function_223(Global_46914[1], "beechersHope", "stable01", 96), 0);
						OPEN_DOOR_DIRECTION(Function_223(Global_46914[1], "beechersHope", "stable01", 96), 1);
						SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 96), 0);
					}
				}
				if (IS_DOOR_VALID(Function_223(Global_46914[1], "beechersHope", "stable01", 97)))
				{
					if (IS_DOOR_CLOSED(Function_223(Global_46914[1], "beechersHope", "stable01", 97)))
					{
						Function_161(Function_223(Global_46914[1], "beechersHope", "stable01", 97), 0);
						OPEN_DOOR_DIRECTION(Function_223(Global_46914[1], "beechersHope", "stable01", 97), 1);
						SET_DOOR_AUTO_CLOSE(Function_223(Global_46914[1], "beechersHope", "stable01", 97), 0);
					}
				}
			}
			if (!IS_ACTOR_RIDING(&bLocal_323))
			{
				if (GET_TASK_STATUS(&bLocal_323, 11) != 1)
				{
					TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_323);
					TASK_MOUNT(&bLocal_323, &bLocal_325, 0, 1, 2, 2147483647);
					iLocal_544 = 0;
					iLocal_543 = 0;
				}
			}
			else if (!SQUAD_GET_SIZE(&bLocal_467) > 3)
			{
				if (Function_396(&bLocal_323, &iLocal_4 + 1040) > 40.0f)
				{
					if (!iLocal_544)
					{
						TASK_OVERRIDE_SET_MOVETYPE(&bLocal_323, 2);
						bLocal_355 = TASK_SEQUENCE_OPEN();
						TASK_GO_TO_OBJECT(0, &iLocal_4 + 1040, 1, 0, 1);
						TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_323, bLocal_355);
						TASK_SEQUENCE_RELEASE(bLocal_355, 1);
						bLocal_372 = false;
						while (bLocal_372 <= SQUAD_GET_SIZE(&bLocal_467))
						{
							iLocal_445 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_467, bLocal_372);
							TASK_FOLLOW_OBJECT_AT_DISTANCE(&iLocal_445, &bLocal_323, TO_FLOAT(bLocal_372 * 2 + 1), 2);
							AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_445, false);
							bLocal_372++;
						}
						iLocal_544 = 1;
					}
				}
				else if (!iLocal_543)
				{
					if (IS_ACTOR_VALID(&bLocal_323))
					{
						if (IS_OBJECT_VALID(&fLocal_368))
						{
							DESTROY_OBJECT(&fLocal_368);
						}
						GET_PATH_POINT(&iLocal_4 + 1072, Function_399(&bLocal_323, &iLocal_4 + 1072), &Local_424);
						Function_76();
						fLocal_368 = CREATE_POINT_IN_LAYOUT(&iLocal_274, "PathPointObject", Local_424, Function_76());
						bLocal_355 = TASK_SEQUENCE_OPEN();
						TASK_GO_NEAR_OBJECT(0, &fLocal_368, 5.0f, 4, 1, 0);
						TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 1072, 4, 0, 0, 0, false);
						TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
						TASK_STAND_STILL(false, -1.0f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&bLocal_323, bLocal_355);
						TASK_SEQUENCE_RELEASE(bLocal_355, 1);
						TASK_PRIORITY_SET(&bLocal_323, true);
						AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_323, true);
						iLocal_543 = 1;
					}
				}
			}
			Function_360(&fLocal_333, iLocal_538, fLocal_539, &iLocal_4 + 1040, "h2_r3_BeechersReturn", "Uncle_abandoned", &bLocal_352, 0, 0, 0, 4294967295, 1, 0);
			if (IS_OBJECT_VALID(&fLocal_364))
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					Function_359();
					Function_245();
					Function_394("Horse_return");
					Function_226(&iLocal_329);
					break;
				}
				if (GATEWAY_UPDATE(&fLocal_364))
				{
					DESTROY_OBJECT(&fLocal_364);
					Function_356();
					Function_245();
					Function_226(&iLocal_329);
					TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
					iLocal_319 = 105;
					break;
				}
			}
			else if (IS_ACTOR_RIDING(&Global_54076))
			{
				Function_394("home02_ranch03_obj05");
				Function_226(&iLocal_329);
				Function_397();
			}
			break;
		
		case 0x00000069:
			if (Function_280(&iLocal_329) <= 0,5f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_323);
				Function_226(&iLocal_329);
				iLocal_319 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				iLocal_341[2] = 1;
				Function_226(&iLocal_329);
				iLocal_318 = 101;
				iLocal_319 = 0;
			}
			break;
	}
	return;
}

void Function_356() //Position: 0x13D93 / 81299
{
	Function_221(13, 0, 1);
	if (IS_BLIP_VALID(&iLocal_358))
	{
		REMOVE_BLIP(&iLocal_358);
	}
	if (IS_OBJECT_VALID(&fLocal_364))
	{
		Function_358(&fLocal_364);
		Function_214();
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_357(&iLocal_4 + 312);
	}
	if (SQUAD_IS_VALID(&bLocal_469))
	{
		Function_357(&bLocal_469);
	}
	if (IS_BLIP_VALID(&iLocal_362))
	{
		REMOVE_BLIP(&iLocal_362);
	}
	return;
}

void Function_357(int iParam0) //Position: 0x13DFC / 81404
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

void Function_358(var uParam0) //Position: 0x13E50 / 81488
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

void Function_359() //Position: 0x13EE6 / 81638
{
	Function_221(13, 0, 1);
	if (IS_BLIP_VALID(&iLocal_358))
	{
		REMOVE_BLIP(&iLocal_358);
	}
	if (IS_OBJECT_VALID(&fLocal_364))
	{
		Function_358(&fLocal_364);
		Function_214();
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_357(&iLocal_4 + 312);
	}
	if (SQUAD_IS_VALID(&bLocal_469))
	{
		Function_357(&bLocal_469);
	}
	if (IS_ACTOR_VALID(&bLocal_327))
	{
		if (!IS_BLIP_VALID(&iLocal_362))
		{
			iLocal_362 = ADD_BLIP_FOR_ACTOR(&bLocal_327, 334, 0, 2, 0);
			if (IS_BLIP_VALID(&iLocal_362))
			{
			}
		}
	}
	return;
}

bool Function_360(struct<2> Param0, float fParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x13F71 / 81777
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_368(&Global_54076, &iParam3, fParam2))
	{
		Function_234(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_368(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_367(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_366(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_365(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_364(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_364(&iParam9, 0, 15, 1, &iParam3);
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
	if (Function_367(1))
	{
		Function_363(1);
		if (!Function_362())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_364(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_364(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_361() //Position: 0x1411B / 82203
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

bool Function_362() //Position: 0x14149 / 82249
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

void Function_363(bool bParam0) //Position: 0x14190 / 82320
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

void Function_364(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x141F7 / 82423
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

void Function_365(bool bParam0) //Position: 0x142B2 / 82610
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

void Function_366(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x14319 / 82713
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

bool Function_367(bool bParam0) //Position: 0x143AE / 82862
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

bool Function_368(var uParam0, var uParam1, float fParam2) //Position: 0x143F8 / 82936
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_370(&uParam0);
			Function_369(&uParam1);
			if (VDIST(Function_370(&uParam0), Function_369(&uParam1)) >= fParam2)
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

struct<8> Function_369(int iParam0) //Position: 0x14516 / 83222
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

struct<8> Function_370(var uParam0) //Position: 0x14584 / 83332
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

void Function_371() //Position: 0x145F0 / 83440
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (Function_282(&iLocal_400))
			{
				Function_376(&iLocal_400);
			}
		}
		else
		{
			if (iLocal_379)
			{
				iLocal_379 = 0;
			}
			if (!Function_282(&iLocal_400))
			{
				Function_226(&iLocal_400);
			}
			if (Function_280(&iLocal_400) < 4.0f)
			{
				if (!Function_282(&iLocal_337))
				{
					if (ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 30.0f))
					{
						if (!HUD_IS_SHOWING_OBJECTIVE())
						{
							switch (iLocal_373)
							{
								case 0x00000000:
								case 0x00000001:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_379 = 1;
										Function_375();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_373 = 2;
										}
									}
									break;
								
								case 0x00000002:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_379 = 1;
										Function_372();
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_373 = 3;
										}
									}
									break;
								
								case 0x00000063:
									break;
								
								default:
									if (!IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										if (IS_SCRIPTED_CONVERSATION_ONGOING())
										{
											iLocal_373 = 99;
										}
									}
									break;
								}
							}
						}
					}
				}
			}
	}
	return;
}

void Function_372() //Position: 0x146CF / 83663
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v2_AA1", "Home02_r3_BakRanchBant_v2_AA1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v2_AA2", "Home02_r3_BakRanchBant_v2_AA2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v2_AB", "Home02_r3_BakRanchBant_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v2_AC", "Home02_r3_BakRanchBant_v2_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v2_AD", "Home02_r3_BakRanchBant_v2_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v2_AE", "Home02_r3_BakRanchBant_v2_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v2_AF", "Home02_r3_BakRanchBant_v2_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v2_AG", "Home02_r3_BakRanchBant_v2_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v2_AH", "Home02_r3_BakRanchBant_v2_AH", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v2_AI", "Home02_r3_BakRanchBant_v2_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v2_AJ", "Home02_r3_BakRanchBant_v2_AJ", 1, 1, 0, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_373(int iParam0) //Position: 0x149FA / 84474
{
	Function_374(0, &Global_54076, iParam0, 0);
	Function_374(1, &bLocal_323, iParam0, 0);
	return;
}

void Function_374(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0x14A16 / 84502
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &iParam1, 0);
	}
}

void Function_375() //Position: 0x14A3E / 84542
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v1_AA", "Home02_r3_BakRanchBant_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v1_AB", "Home02_r3_BakRanchBant_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v1_AC", "Home02_r3_BakRanchBant_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v1_AD", "Home02_r3_BakRanchBant_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v1_AE", "Home02_r3_BakRanchBant_v1_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v1_AF1", "Home02_r3_BakRanchBant_v1_AF1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v1_AF2", "Home02_r3_BakRanchBant_v1_AF2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v1_AG", "Home02_r3_BakRanchBant_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v1_AH1", "Home02_r3_BakRanchBant_v1_AH1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v1_AH2", "Home02_r3_BakRanchBant_v1_AH2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v1_AI", "Home02_r3_BakRanchBant_v1_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_BakRanchBant_v1_AJ", "Home02_r3_BakRanchBant_v1_AJ", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_BakRanchBant_v1_AK", "Home02_r3_BakRanchBant_v1_AK", 0, 1, 0, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_376(vector3 vParam0) //Position: 0x14DFB / 85499
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_377() //Position: 0x14E12 / 85522
{
	switch (iLocal_854)
	{
		case 0x00000000:
			if (bLocal_377)
			{
				if (!ACTOR_HAS_WEAPON(&bLocal_323, 21))
				{
					GIVE_WEAPON_TO_ACTOR(&bLocal_323, 21, 0.0f, 0, 1);
				}
				ACTOR_SET_NEXT_WEAPON(&bLocal_323, 21);
				ACTOR_END_FORCE_HOLSTER(&bLocal_323);
				iLocal_439 = Function_393(&bLocal_471, &bLocal_323, 0, 0);
				if (!ACTORS_IN_RANGE(&bLocal_323, &iLocal_439, 10.0f))
				{
					MEMORY_REPORT_POSITION_AUTO(&bLocal_323, &iLocal_439, 1);
					TASK_GO_NEAR_ACTOR(&bLocal_323, &iLocal_439, 10.0f, 4);
					TASK_PRIORITY_SET(&bLocal_323, true);
					iLocal_854 = 1;
				}
				else
				{
					MEMORY_REPORT_POSITION_AUTO(&bLocal_323, &iLocal_439, 1);
					DETACH_LASSO(&bLocal_323);
					bLocal_355 = TASK_SEQUENCE_OPEN();
					TASK_FACE_ACTOR(0, &iLocal_439, 0, 3212836864);
					TASK_USE_LASSO(0, &iLocal_439, 1.0f, 1.0f, 1, 2);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_323, bLocal_355);
					TASK_PRIORITY_SET(&bLocal_323, true);
					TASK_SEQUENCE_RELEASE(bLocal_355, 1);
					Function_226(&iLocal_329);
					iLocal_854 = 2;
				}
			}
			else if (SQUAD_IS_VALID(&bLocal_471))
			{
				if (SQUAD_GET_SIZE(&bLocal_471) > 1)
				{
					bLocal_377 = true;
				}
			}
			break;
		
		case 0x00000001:
			Function_392();
			if (GET_TASK_STATUS(&bLocal_323, 83) == 0)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_323);
				TASK_CLEAR(&bLocal_323);
				DETACH_LASSO(&bLocal_323);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_323, &iLocal_439, 1);
				TASK_USE_LASSO(&bLocal_323, &iLocal_439, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(&bLocal_323, true);
				SET_ACTOR_RIDEABLE(&iLocal_439, 0);
				TASK_CLEAR(&iLocal_439);
				TASK_STAND_STILL(&iLocal_439, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&iLocal_439, true);
				Function_226(&iLocal_329);
				iLocal_854 = 2;
				return 0;
			}
			if (ACTORS_IN_RANGE(&bLocal_323, &iLocal_439, 25.0f))
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_323, 2);
			}
			else
			{
				TASK_OVERRIDE_SET_MOVETYPE(&bLocal_323, 4);
			}
			break;
		
		case 0x00000003:
			Function_391();
			if (!GET_MOUNT(&Global_54076) != &iLocal_439)
			{
				TASK_CLEAR(&bLocal_323);
				DETACH_LASSO(&bLocal_323);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_323, &iLocal_439, 1);
				TASK_USE_LASSO(&bLocal_323, &iLocal_439, 1.0f, 1.0f, 1, 2);
				TASK_PRIORITY_SET(&bLocal_323, true);
				SET_ACTOR_RIDEABLE(&iLocal_439, 0);
				TASK_CLEAR(&iLocal_439);
				TASK_STAND_STILL(&iLocal_439, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&iLocal_439, true);
				Function_226(&iLocal_329);
				iLocal_854 = 2;
			}
			break;
		
		case 0x00000002:
			Function_389();
			if (DECOR_GET_BOOL(&Global_54076, "CanBeLasso"))
			{
				DECOR_SET_BOOL(&Global_54076, "CanBeLasso", 0);
			}
			if (!DECOR_GET_BOOL(&iLocal_439, "CanBeLasso"))
			{
				DECOR_SET_BOOL(&iLocal_439, "CanBeLasso", 1);
			}
			if (!DECOR_GET_BOOL(&iLocal_439, "CanLassoIfPlayerRiding"))
			{
				DECOR_SET_BOOL(&iLocal_439, "CanLassoIfPlayerRiding", 1);
			}
			if (GET_TASK_STATUS(&bLocal_323, 68) != 0 || GET_TASK_STATUS(&bLocal_323, 0) != 0)
			{
				SQUAD_LEAVE(&iLocal_439);
				SET_ALLOW_RIDE_BY_PLAYER(&iLocal_439, 0);
				if (SQUAD_IS_VALID(&bLocal_467))
				{
					SQUAD_JOIN(&iLocal_439, &bLocal_467);
				}
				else
				{
					bLocal_467 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sGoal"));
					Function_384(&(Local_600[415]), &bLocal_467, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
					Function_380(&(Local_600[415]), 64);
					SQUAD_JOIN(&iLocal_439, &bLocal_467);
				}
				TASK_CLEAR(&iLocal_439);
				Function_218(&iLocal_439);
				switch (bLocal_357)
				{
					case 0x00000000:
						Local_421 = Vector(-3.0f, 0.0f, 3.0f);
						break;
					
					case 0x00000001:
						Local_421 = Vector(0.0f, 0.0f, 7.0f);
						break;
					
					case 0x00000002:
						Local_421 = Vector(3.0f, 0.0f, 3.0f);
						break;
					
					default:
						Local_421 = Vector(0.0f, 0.0f, 3.0f);
						break;
				}
				SET_ACTOR_MAX_SPEED(&iLocal_439, 3);
				TASK_CLEAR(&bLocal_323);
				Function_379();
				TASK_CLEAR(&bLocal_323);
				TASK_FOLLOW_OBJECT(&iLocal_439, &bLocal_323, &Local_421, 0, 0, 0, 0, 0, 0, 1);
				if (!DECOR_GET_BOOL(&Global_54076, "CanBeLasso"))
				{
					DECOR_SET_BOOL(&Global_54076, "CanBeLasso", 1);
				}
				iLocal_854 = 0;
				bLocal_357++;
				if (SQUAD_GET_SIZE(&bLocal_471) <= 1)
				{
					bLocal_377 = false;
				}
				return 1;
			}
			if (Function_280(&iLocal_329) <= 10.0f)
			{
				TASK_CLEAR(&bLocal_323);
				iLocal_854 = 0;
			}
			break;
	}
	if (SQUAD_IS_VALID(&bLocal_467))
	{
		if (IS_ACTOR_VALID(&iLocal_850))
		{
			Function_391();
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				Function_378("Home02_r3_UncTakesCareHors");
				CLEAR_ACTOR_MAX_SPEED(&iLocal_850);
				CLEAR_ACTOR_MIN_SPEED(&iLocal_850);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_323);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_323);
				iLocal_850 = "";
			}
		}
		else if (IS_ACTOR_RIDING(&Global_54076))
		{
			if (SQUAD_GET(GET_MOUNT(&Global_54076)) == &bLocal_467)
			{
				Function_378("Home02_r3_NoDismountBrokHors");
				iLocal_850 = GET_MOUNT(&Global_54076);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&iLocal_850, 0.0f);
				SET_ACTOR_MIN_SPEED_ABSOLUTE(&iLocal_850, 0.0f);
				SET_ACTOR_MAX_SPEED_ABSOLUTE(&bLocal_323, 0.0f);
				SET_ACTOR_MIN_SPEED_ABSOLUTE(&bLocal_323, 0.0f);
			}
		}
	}
	return 0;
}

void Function_378(int iParam0) //Position: 0x1533C / 86844
{
	if (iLocal_374 <= 10)
	{
		SAY_SINGLE_LINE_SCRIPTED(&bLocal_323, &iParam0, &Global_54076, 0, 1, 0, 1, 3);
		iLocal_374++;
		fLocal_541 = RAND_FLOAT_RANGE(3.0f, 7.0f);
	}
	return;
}

void Function_379() //Position: 0x1536D / 86893
{
	if (IS_ACTOR_VALID(&iLocal_439))
	{
		if (IS_ACTOR_HORSE(&iLocal_439))
		{
			SQUAD_LEAVE(&iLocal_439);
			if (SQUAD_IS_VALID(&bLocal_467))
			{
				SQUAD_JOIN(&iLocal_439, &bLocal_467);
			}
			TASK_CLEAR(&iLocal_439);
			if (!IS_OBJECT_VALID(&(iLocal_459[bLocal_357])))
			{
				iLocal_459[bLocal_357] = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&iLocal_439), Function_54(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
				if (IS_OBJECT_VALID(&(iLocal_459[bLocal_357])))
				{
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &(iLocal_459[bLocal_357]), &iLocal_439, "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 0);
					LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &(iLocal_459[bLocal_357]), &bLocal_323, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
					LEASH_CONSTRAIN(&(iLocal_459[bLocal_357]));
					LEASH_RESTART(&(iLocal_459[bLocal_357]));
					LEASH_SET_CONSTRAINT_LENGTH(&(iLocal_459[bLocal_357]), (8.0f + (IntToFloat(bLocal_357) * 2.0f)));
					LEASH_SET_LEASH_LENGTH(&(iLocal_459[bLocal_357]), (8.0f + (IntToFloat(bLocal_357) * 2.0f)));
					DECOR_SET_BOOL(&iLocal_439, "CanBeLasso", 0);
					DETACH_LASSO(&bLocal_323);
				}
			}
		}
	}
	return;
}

void Function_380(int iParam0, int iParam1) //Position: 0x154C8 / 87240
{
	if (iParam1 != 100000000)
	{
		Function_383(&iParam0, iParam1);
	}
	else
	{
		Function_381(&iParam0, 1);
	}
	return;
}

void Function_381(struct<69> Param0) //Position: 0x154EA / 87274
{
	Param0.f_68 = 0;
	Function_382(&Param0, 2, &bParam1);
	Function_382(&Param0, 4, &bParam1);
	Function_382(&Param0, 8, &bParam1);
	Function_382(&Param0, 16, &bParam1);
	Function_382(&Param0, 32, &bParam1);
	Function_382(&Param0, 64, &bParam1);
	Function_382(&Param0, 128, &bParam1);
	Function_382(&Param0, 256, &bParam1);
	Function_382(&Param0, 512, &bParam1);
	Function_382(&Param0, 1024, &bParam1);
	return;
}

void Function_382(int iParam0, int iParam1, bool bParam2) //Position: 0x15565 / 87397
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

void Function_383(int iParam0, bool bParam1) //Position: 0x155A4 / 87460
{
	bool bVar0;
	
	Function_38(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_77(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_38(&iParam0 + 68, bVar0);
	return;
}

int Function_384(struct<69> Param0) //Position: 0x155D1 / 87505
{
	if (!Function_388(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_387(&Param0, &bParam2))
	{
		return 0;
	}
	Function_386(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_385(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_385(var uParam0, int iParam1, int iParam2) //Position: 0x15617 / 87575
{
	if (iParam1 != 100000000)
	{
		Function_382(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_381(&uParam0, &iParam2);
	}
	return;
}

void Function_386(struct<65> Param0) //Position: 0x1563E / 87614
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_387(int iParam0, char* cParam1) //Position: 0x1564B / 87627
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

bool Function_388(struct<61> Param0) //Position: 0x156D8 / 87768
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

void Function_389() //Position: 0x1588B / 88203
{
	if (!Function_282(&iLocal_392))
	{
		Function_226(&iLocal_392);
	}
	else if (Function_280(&iLocal_392) < fLocal_541)
	{
		if (Function_390())
		{
			Function_378("Home02_r3_UncTakesCareHors");
		}
		else
		{
			Function_378("Home02_r3_UncleGetsClose");
		}
		Function_226(&iLocal_392);
	}
	return;
}

bool Function_390() //Position: 0x158FE / 88318
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_391() //Position: 0x15911 / 88337
{
	if (!Function_282(&iLocal_392))
	{
		Function_226(&iLocal_392);
	}
	else if (Function_280(&iLocal_392) < fLocal_541)
	{
		if (Function_390())
		{
			Function_378("Home02_r3_DismountBrokHors");
		}
		else
		{
			Function_378("Home02_r3_NoDismountBrokHors");
		}
		Function_226(&iLocal_392);
	}
	return;
}

void Function_392() //Position: 0x15988 / 88456
{
	if (!Function_282(&iLocal_392))
	{
		Function_226(&iLocal_392);
	}
	else if (Function_280(&iLocal_392) < fLocal_541)
	{
		if (Function_390())
		{
			Function_378("Home02_r3_RidesOver");
		}
		else
		{
			Function_378("Home02_r3_RidesAwayBrkHors");
		}
		Function_226(&iLocal_392);
	}
	return;
}

int Function_393(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0x159F6 / 88566
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&uVar4))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_329(&uVar4, &uParam1);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

void Function_394(bool bParam0) //Position: 0x15AC1 / 88769
{
	if (!IS_STRING_VALID(&uLocal_536))
	{
		uLocal_536 = &bParam0;
		if (!Function_282(&iLocal_337))
		{
			Function_226(&iLocal_337);
		}
	}
	else if (!STRINGS_ARE_EQUAL(&uLocal_536, &bParam0))
	{
		uLocal_536 = &bParam0;
		if (!Function_282(&iLocal_337))
		{
			Function_226(&iLocal_337);
		}
	}
	return;
}

void Function_395() //Position: 0x15B11 / 88849
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_3HorseBroke", "Home02_r3_3HorseBroke", 1, 2, 1, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_396(int iParam0, int iParam1) //Position: 0x15B64 / 88932
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_370(&iParam0);
			Var0 = Function_370(&iParam0);
			Function_369(&iParam1);
			Var2 = Function_369(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_397() //Position: 0x15C06 / 89094
{
	Function_221(13, 0, 1);
	if (IS_BLIP_VALID(&iLocal_362))
	{
		REMOVE_BLIP(&iLocal_362);
	}
	if (IS_BLIP_VALID(&uLocal_360))
	{
		REMOVE_BLIP(&uLocal_360);
	}
	if (!IS_BLIP_VALID(&iLocal_358))
	{
		iLocal_358 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1040, 330, 0f, 2, 0);
		if (IS_BLIP_VALID(&iLocal_358))
		{
		}
	}
	if (!IS_OBJECT_VALID(&fLocal_364))
	{
		GET_OBJECT_POSITION(&iLocal_4 + 1040, &Local_415);
		GET_OBJECT_ORIENTATION(&iLocal_4 + 1040, &Local_418);
		fLocal_364 = Function_398(StackVal, StackVal, &iLocal_274, "HOME02_RANCH03GATEWAY01", Local_415, Local_418, &Global_54076, 7.0f, 2, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
		if (IS_OBJECT_VALID(&fLocal_364))
		{
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_357(&iLocal_4 + 312);
	}
	if (SQUAD_IS_VALID(&bLocal_469))
	{
		Function_357(&bLocal_469);
	}
	return;
}

float Function_398(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x15CFE / 89342
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

var Function_399(int iParam0, bool bParam1) //Position: 0x15DE9 / 89577
{
	bool bVar0;
	struct<2> Var1;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	bVar0 = false;
	bVar3 = 4294967295;
	bVar4 = 99999,9f;
	bVar0 = false;
	while (bVar0 < (GET_NUM_PATH_POINTS(&bParam1) - 1))
	{
		GET_PATH_POINT(&bParam1, bVar0, &Var1);
		Function_340(&iParam0);
		bVar5 = VDIST(Function_340(&iParam0), Var1);
		if (bVar5 > bVar4)
		{
			bVar3 = bVar0;
			bVar4 = bVar5;
		}
		bVar0++;
	}
	return bVar3;
}

void Function_400() //Position: 0x15E40 / 89664
{
	iLocal_379 = 0;
	Function_376(&iLocal_400);
	iLocal_373 = Function_401();
	return;
}

var Function_401() //Position: 0x15E56 / 89686
{
	return Global_53524.f_68;
}

void Function_402() //Position: 0x15E61 / 89697
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 136))
	{
		Function_346();
		if (SQUAD_IS_VALID(&iLocal_4 + 136))
		{
			Function_345(&iLocal_4 + 136, 0);
			Function_344(&iLocal_4 + 136, 3);
			if (IS_ACTOR_VALID(&iLocal_4 + 112[02]))
			{
				Function_347(&iLocal_4 + 112[02], &iLocal_4 + 792[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 136, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_325 = &iLocal_4 + 112[02];
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_325, 0);
			HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&bLocal_325, 1);
		}
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_345(&iLocal_4 + 312, 0);
		Function_409(&iLocal_4 + 312, 1);
		uLocal_437 = &iLocal_4 + 144[02];
		SQUAD_GOALS_CLEAR(&iLocal_4 + 312);
		Function_327(&iLocal_4 + 312);
		Function_405(&iLocal_4 + 312);
		iLocal_529 = 6;
		iLocal_530 = 6;
	}
	else
	{
		Function_404();
		Function_345(&iLocal_4 + 312, 0);
		Function_409(&iLocal_4 + 312, 1);
		uLocal_437 = &iLocal_4 + 144[02];
		SQUAD_GOALS_CLEAR(&iLocal_4 + 312);
		Function_327(&iLocal_4 + 312);
		Function_405(&iLocal_4 + 312);
		iLocal_529 = 6;
		iLocal_530 = 6;
	}
	if (iLocal_341[1] == 0)
	{
		Function_347(&bLocal_323, &iLocal_4 + 792[2], 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(&bLocal_323, 100.0f, false, 1092616192);
		Function_347(&iLocal_4 + 112[02], &iLocal_4 + 792[2], 1, 1, 1);
		Function_347(&bLocal_327, &iLocal_4 + 792[7], 1, 1, 1);
		if (IS_ACTOR_VALID(&bLocal_327))
		{
			if (IS_ACTOR_VALID(&Global_54076))
			{
				if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_327))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_327);
				}
			}
		}
		if (IS_ACTOR_VALID(&bLocal_323))
		{
			if (IS_ACTOR_VALID(&iLocal_4 + 112[02]))
			{
				if (!IS_ACTOR_RIDING(&bLocal_323) && !IS_ACTOR_MOUNTED(&iLocal_4 + 112[02]))
				{
					ACTOR_MOUNT_ACTOR(&bLocal_323, &iLocal_4 + 112[02]);
					bLocal_325 = &iLocal_4 + 112[02];
					SET_ALLOW_RIDE_BY_PLAYER(&bLocal_325, 0);
				}
			}
		}
		Function_325();
		bLocal_467 = &iLocal_4 + 376;
		Function_403(&bLocal_467);
	}
	Function_384(&(Local_600[015]), &bLocal_323, "Uncle", 1, 0x5f5e100, 1);
	Function_380(&(Local_600[015]), 1024);
	SET_ACTORS_HORSE(&bLocal_323, &bLocal_325);
	SET_MOST_RECENT_MOUNT(&bLocal_323, &bLocal_325);
	MEMORY_PREFER_RIDING(&bLocal_323, true);
	Function_384(&(Local_600[115]), &bLocal_325, "Uncle_Horse", 0, 0x5f5e100, 1);
	Function_380(&(Local_600[115]), 1024);
	Function_384(&(Local_600[415]), &bLocal_467, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
	Function_380(&(Local_600[415]), 64);
	ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
	return;
}

void Function_403(var uParam0) //Position: 0x1612E / 90414
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		TASK_CLEAR(&uVar1);
		switch (bVar0)
		{
			case 0x00000000:
				Local_421 = Vector(-1,5f, 0.0f, 3.0f);
				break;
			
			case 0x00000001:
				Local_421 = Vector(0.0f, 0.0f, 7.0f);
				break;
			
			case 0x00000002:
				Local_421 = Vector(1,5f, 0.0f, 3.0f);
				break;
			
			default:
				Local_421 = Vector(0.0f, 0.0f, 3.0f);
				break;
		}
		TASK_FOLLOW_OBJECT(&uVar1, &bLocal_323, &Local_421, 0, 0, 0, 0, 0, 0, 1);
		GET_OBJECT_RELATIVE_POSITION(&bLocal_323, Local_421, &uVar2);
		TELEPORT_ACTOR(&uVar1, &uVar2, 1, 1, 1);
		SNAP_OBJECT_TO_GROUND(&uVar1, 100.0f, false, 1092616192);
		SET_ACTOR_MAX_SPEED(&uVar1, 3);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_HORSE(&uVar1))
			{
				if (!IS_OBJECT_VALID(&(iLocal_459[bVar0])))
				{
					iLocal_459[bVar0] = CREATE_LEASH_OBJECT(GET_OBJECT_FROM_ACTOR(&uVar1), Function_54(), 1092616192, 10, 0, 0,006f, 10f, 10000f, 200f, 8f, 100f, 1f, 0, 0, 0);
					if (IS_OBJECT_VALID(&(iLocal_459[bVar0])))
					{
						LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &(iLocal_459[bVar0]), &uVar1, "LowLip1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0, 1, 0);
						LEASH_ATTACH_TO_OBJECT_BONE(StackVal, StackVal, &(iLocal_459[bVar0]), &bLocal_323, "wrist_r", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1, 1, 1);
						LEASH_CONSTRAIN(&(iLocal_459[bVar0]));
						LEASH_RESTART(&(iLocal_459[bVar0]));
						LEASH_SET_CONSTRAINT_LENGTH(&(iLocal_459[bVar0]), (8.0f + (IntToFloat(bVar0) * 2.0f)));
						LEASH_SET_LEASH_LENGTH(&(iLocal_459[bVar0]), (8.0f + (IntToFloat(bVar0) * 2.0f)));
						DECOR_SET_BOOL(&uVar1, "CanBeLasso", 0);
					}
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_404() //Position: 0x1630D / 90893
{
	(&iLocal_4 + 312) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "WildHorse01"));
	*(&iLocal_4 + 144[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_01", 981, Vector(193,6283f, 127,9104f, 1353,628f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[02], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[02], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[02], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[02], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_02", 976, Vector(195,9999f, 127,8092f, 1352,956f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[12], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[12], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[12], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[12], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_03", 977, Vector(196.0f, 127,8672f, 1356.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[22], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[22], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[22], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[22], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_04", 980, Vector(192f, 127,9772f, 1353,513f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[32], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[32], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[32], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[32], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_05", 987, Vector(188,1694f, 128,0072f, 1352,169f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[42], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[42], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[42], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[42], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_06", 980, Vector(192f, 128,0854f, 1356,886f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[52], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[52], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[52], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[52], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_07", 981, Vector(185,2196f, 128,2078f, 1357,22f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[62], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[62], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[62], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[62], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_08", 976, Vector(186,8312f, 128,1164f, 1354,831f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[72], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[72], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[72], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[72], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_09", 977, Vector(189,2386f, 128,1615f, 1357,239f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[82], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[82], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[82], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[82], "HorseCaptureBoltTime", 1000.0f);
	*(&iLocal_4 + 144[92]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WILD_HORSE_01_10", 991, Vector(183,9999f, 128,082f, 1354,094f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 144[92], &iLocal_4 + 312);
	ANIMAL_ACTOR_SET_DOMESTICATION(&iLocal_4 + 144[92], 1);
	DECOR_SET_FLOAT(&iLocal_4 + 144[92], "fHowLong", 15.0f);
	DECOR_SET_FLOAT(&iLocal_4 + 144[92], "HorseCaptureBoltTime", 1000.0f);
	return;
}

void Function_405(int iParam0) //Position: 0x16934 / 92468
{
	int iVar0;
	bool bVar1;
	
	iVar0 = SQUAD_GOAL_ADD_FLOCK(&iParam0, 1, 4294967295, 0);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (&iVar0 == "")
	{
		return;
	}
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 8, 0,75f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 19, 45.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 25, 3.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 0, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 1, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 2, 1.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 15, 0,75f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 16, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 17, 0,2f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 18, 50.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 21, 1,92f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 20, 9,352f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 28, 0,25f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 1, 29, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 8, 1,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 19, 55.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 24, 360.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 25, 3.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 0, 5.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 1, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 2, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 15, 0,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 16, 10.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 17, 0,7f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 18, 50.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 21, 4,89f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 20, 13.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 26, 0.0f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 28, 0,5f);
	SQUAD_FLOCK_SET_FLOCKING_PARAMETER(&iParam0, &iVar0, 0, 29, 10.0f);
	SQUAD_FLOCK_ADD_EXTERNAL_ALERT(&iParam0, &iVar0, &Global_54076, 32.0f, 25.0f, 0);
	_SQUAD_FLOCK_ADD_EXTERNAL_REPULSION_2(&iParam0, &iVar0, &Global_54076, 33.0f, 1,5f, 925353388, 925353388, 0);
	_SQUAD_FLOCK_ADD_EXTERNAL_REPULSION_2(&iParam0, &iVar0, &bLocal_323, 33.0f, 0,75f, 925353388, 925353388, 0);
	SQUAD_FLOCK_PLAYER_PROXIMITY_BOOST_SET_ENABLED(&iParam0, &iVar0, 1);
	SQUAD_FLOCK_SET_ALLOW_STRAGGLERS(&iParam0, &iVar0, 0);
	Function_334(&iLocal_4 + 312);
	Function_407(&iLocal_4 + 312, &iLocal_4 + 448);
	Function_406(&iLocal_4 + 312, 4, 0);
	bVar1 = false;
	while (bVar1 <= SQUAD_GET_SIZE(&iParam0))
	{
		SET_ACTOR_UPDATE_PRIORITY(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1), false);
		SET_ACTOR_HARDLOCK_BIAS(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1), -10000.0f, 1);
		bVar1++;
	}
	return;
}

int Function_406(var uParam0, int iParam1, int iParam2) //Position: 0x16C0E / 93198
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_VOLUME_PARAMETERS(&uVar1, iParam1, iParam2);
		}
		bVar0++;
	}
	return 1;
}

void Function_407(var uParam0, int[] iParam1) //Position: 0x16C56 / 93270
{
	int iVar0;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar0 = 0;
		while (iVar0 < (iParam1 - 1))
		{
			if (IS_VOLUME_VALID(&(iParam1[iVar0])))
			{
				Function_408(&uParam0, &(iParam1[iVar0]));
			}
			iVar0++;
		}
	}
	return;
}

int Function_408(int iParam0, int iParam1) //Position: 0x16C9F / 93343
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

void Function_409(var uParam0, bool bParam1) //Position: 0x16CFD / 93437
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

void Function_410(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x16D44 / 93508
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
	if (bParam2 != Global_53524.f_48 && !Function_417())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_416(0);
	Function_415();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_96())
	{
		Function_413(bParam2);
	}
	Function_412(uParam3, iVar0, iVar1);
	Function_411();
}

void Function_411() //Position: 0x16DED / 93677
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

void Function_412(int iParam0, bool bParam1, bool bParam2) //Position: 0x16E2E / 93742
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

void Function_413(bool bParam0) //Position: 0x16F97 / 94103
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_414() };
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

struct<16> Function_414() //Position: 0x1712F / 94511
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

void Function_415() //Position: 0x17175 / 94581
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_416(bool bParam0) //Position: 0x17199 / 94617
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

bool Function_417() //Position: 0x171C8 / 94664
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_418(var uParam0, var uParam1, struct<2> Param2, var uParam4, bool bParam5, float fParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, bool bParam12, var uParam13) //Position: 0x171E3 / 94691
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_419(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_420()) * (&fParam7 - &fParam6)) * 0,5f))) || bParam12)
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
	else if ((!Function_419(StackVal, &Global_54076, Param2, (&fParam7 + ((IntToFloat(Function_420()) * (&fParam7 - &fParam6)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam12)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_419(StackVal, &Global_54076, Param2, &fParam6))
	{
	}
	return 0;
}

bool Function_419(var uParam0, struct<2> Param1, float fParam3) //Position: 0x174C2 / 95426
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_370(&uParam0);
		if (VDIST(Function_370(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_420() //Position: 0x1754E / 95566
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

int Function_421() //Position: 0x1755D / 95581
{
	return 1;
}

void Function_422() //Position: 0x17564 / 95588
{
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (SQUAD_IS_VALID(&bLocal_471))
		{
			if (SQUAD_GET(GET_MOUNT(&Global_54076)) == &bLocal_471)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 528))
				{
					if (GET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(&Global_54076)))
					{
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(&Global_54076), 0);
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					}
				}
			}
		}
		if (SQUAD_IS_VALID(&bLocal_467))
		{
			if (SQUAD_GET(GET_MOUNT(&Global_54076)) == &bLocal_467)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 528))
				{
					if (GET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(&Global_54076)))
					{
						SET_ALLOW_RIDE_BY_PLAYER(GET_MOUNT(&Global_54076), 0);
						SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "/default_character_Main/Ride/Riding/Spurring/PoorlyTimed3/Buck_eject");
					}
				}
			}
		}
	}
	return;
}

void Function_423() //Position: 0x17698 / 95896
{
	int iVar0;
	
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			iVar0 = 0;
			if (SQUAD_IS_VALID(&iLocal_4 + 312))
			{
				iVar0 = (iVar0 + Function_424(&iLocal_4 + 312));
			}
			if (SQUAD_IS_VALID(&bLocal_469))
			{
				iVar0 = (iVar0 + Function_424(&bLocal_469));
			}
			if (SQUAD_IS_VALID(&bLocal_471))
			{
				iVar0 = (iVar0 + Function_424(&bLocal_471));
			}
			if (SQUAD_IS_VALID(&bLocal_467))
			{
				iVar0 = (iVar0 + Function_424(&bLocal_467));
			}
			if (SQUAD_IS_VALID(&iLocal_473))
			{
				iVar0 = (iVar0 + Function_424(&iLocal_473));
			}
			if (iVar0 <= 3)
			{
				Function_234("h2_r3_tooFewHorses");
				bLocal_352 = true;
			}
		}
	}
	return;
}

int Function_424(int iParam0) //Position: 0x17743 / 96067
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

void Function_425() //Position: 0x17796 / 96150
{
	if (!Function_282(&iLocal_392))
	{
		Function_226(&iLocal_392);
	}
	else if (Function_280(&iLocal_392) <= 5.0f)
	{
		if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
		{
			if (IS_ACTOR_VALID(&bLocal_323))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 1.0f))
				{
					if (Function_428(&Global_54076, &bLocal_323) < 8.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_RidesIntoHorse", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_226(&iLocal_392);
					}
				}
			}
		}
		if (DECOR_GET_BOOL(&Global_54076, "beingBucked"))
		{
			if (IS_ACTOR_VALID(&bLocal_323))
			{
				if (ACTORS_IN_RANGE(&bLocal_323, &Global_54076, 20.0f))
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_thrownFromHors", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
					Function_226(&iLocal_392);
				}
			}
		}
		Function_427();
		if (IS_WEAPON_DRAWN(&Global_54076))
		{
			if (Function_426(GET_WEAPON_IN_HAND(&Global_54076)))
			{
				iLocal_445 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
				if (IS_ACTOR_VALID(&iLocal_445))
				{
					if (IS_ACTOR_HUMAN(&iLocal_445))
					{
						if (&iLocal_445 == &bLocal_323)
						{
							if (Function_282(&iLocal_396))
							{
								if (Function_280(&iLocal_396) < 0,25f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_GunOnUncle", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
									Function_226(&iLocal_392);
								}
							}
							else
							{
								Function_226(&iLocal_396);
							}
						}
						else if (!AI_IS_HOSTILE_OR_ENEMY(&Global_54076, &iLocal_445))
						{
							if (Function_282(&iLocal_396))
							{
								if (Function_280(&iLocal_396) < 0,25f)
								{
									SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_GunOnAmb", Function_54(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
									Function_226(&iLocal_392);
								}
							}
							else
							{
								Function_226(&iLocal_396);
							}
						}
						else if (Function_282(&iLocal_396))
						{
							Function_376(&iLocal_396);
						}
					}
					else if (Function_282(&iLocal_396))
					{
						Function_376(&iLocal_396);
					}
				}
				else if (Function_282(&iLocal_396))
				{
					Function_376(&iLocal_396);
				}
			}
			else if (Function_282(&iLocal_396))
			{
				Function_376(&iLocal_396);
			}
		}
		else if (Function_282(&iLocal_396))
		{
			Function_376(&iLocal_396);
		}
	}
	return;
}

bool Function_426(bool bParam0) //Position: 0x179EF / 96751
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

void Function_427() //Position: 0x17A35 / 96821
{
	if (IS_WEAPON_DRAWN(&Global_54076))
	{
		if (Function_426(GET_WEAPON_IN_HAND(&Global_54076)))
		{
			if (IS_ACTOR_SHOOTING(&Global_54076))
			{
				if (!IS_ACTOR_VALID(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					if (Function_280(&iLocal_392) <= 5.0f)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_ShootsGunRand", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_226(&iLocal_392);
					}
				}
				else if (IS_ACTOR_HORSE(GET_LAST_ATTACK_TARGET(&Global_54076)))
				{
					if (Function_280(&iLocal_392) <= 5.0f)
					{
						CLEAR_LAST_ATTACK(&Global_54076);
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_ShootsUncleHors", Function_54(), 0, 0, 1, 3, 0, 0, 0, 1000, 0, 0);
						Function_226(&iLocal_392);
					}
				}
			}
		}
	}
	return;
}

float Function_428(var uParam0, bool bParam1) //Position: 0x17B07 / 97031
{
	struct<2> Var0;
	struct<2> Var2;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	GET_ACTOR_VELOCITY(&bParam1, &Var2);
	return VMAG(Vector(StackVal, StackVal, StackVal) - Vector(Var2, Var0, StackVal));
}

void Function_429() //Position: 0x17B2B / 97067
{
	if (iLocal_319 < 3 && iLocal_319 > 105)
	{
		Function_425();
		Function_460();
		if (iLocal_319 >= 7)
		{
			if (SQUAD_IS_VALID(&iLocal_4 + 312))
			{
				Function_423();
			}
		}
		Function_457(&iLocal_4 + 312, &iLocal_366, &uLocal_412);
		Function_456();
		if (SQUAD_IS_VALID(&bLocal_469))
		{
			Function_455(&iLocal_4 + 312, &bLocal_469, &iLocal_366);
		}
		else
		{
			bLocal_469 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sWildStraggle"));
		}
		Function_454();
		if (IS_ACTOR_VALID(&uLocal_437))
		{
			Function_452(&iLocal_4 + 312, &iLocal_366);
		}
		else
		{
			uLocal_437 = &iLocal_4 + 144[02];
		}
	}
	switch (iLocal_319)
	{
		case 0x00000000:
			Function_350(0);
			SET_ACTOR_HEALTH(&bLocal_323, GET_ACTOR_MAX_HEALTH(&bLocal_323));
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			if (iLocal_341[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_349();
				bLocal_320 = Global_46754[0];
				if (!Function_224(bLocal_320))
				{
					Function_348(&Local_276);
				}
				Function_347(&Global_54076, &iLocal_4 + 712[0], 1, 1, 1);
				if (IS_ACTOR_VALID(&bLocal_323))
				{
					AI_CLEAR_NAV_MATERIAL_USAGE(&bLocal_323);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_323);
					TASK_STAND_STILL(&bLocal_323, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_323, true);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_323, 2);
				}
				if (IS_ACTOR_VALID(&bLocal_327))
				{
					TASK_STAND_STILL(&bLocal_327, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_327, true);
				}
				Function_226(&iLocal_329);
				iLocal_319 = 1;
			}
			else
			{
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_224(bLocal_320) || bLocal_320 != 4294967295))
			{
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			break;
		
		case 0x00000002:
			Function_240(iLocal_318);
			Function_410(StackVal, Function_240(iLocal_318), iLocal_318, Global_46754[0], Function_243(iLocal_318), 2);
			Function_341(&iLocal_354, 26, 0, 4294967295, 4294967295);
			if (HUD_IS_FADED())
			{
				iLocal_356 = 0;
				bLocal_357 = false;
				Function_451();
				if (IS_ACTOR_VALID(&bLocal_323))
				{
					Function_221(13, 0, 1);
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_323);
					TASK_STAND_STILL(&bLocal_323, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bLocal_323, true);
				}
				if (iLocal_341[0] == 0)
				{
					Function_347(&bLocal_327, &iLocal_4 + 712[7], 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(&bLocal_327, 100.0f, false, 1092616192);
					Function_347(&bLocal_323, &iLocal_4 + 712[2], 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(&bLocal_323, 100.0f, false, 1092616192);
					Function_347(&iLocal_4 + 112[02], &iLocal_4 + 712[5], 1, 1, 1);
					SNAP_OBJECT_TO_GROUND(&iLocal_4 + 112[02], 100.0f, false, 1092616192);
					Function_450();
				}
			}
			Function_226(&iLocal_329);
			iLocal_319 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				Function_449();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_448();
				Function_446();
				Function_394("home02_ranch03_obj02_start");
				iLocal_374 = 5;
				fLocal_541 = 2.0f;
				Function_226(&iLocal_329);
				iLocal_319 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_280(&iLocal_329) <= 5.0f)
			{
				Function_226(&iLocal_329);
				Function_226(&fLocal_333);
				Function_226(&iLocal_337);
				iLocal_319 = 8;
			}
			break;
		
		case 0x00000008:
			Function_449();
			Function_445();
			Function_422();
			if ((SQUAD_GET_SIZE(&bLocal_471) + SQUAD_GET_SIZE(&bLocal_467)) > 3)
			{
				Function_356();
				Function_245();
				Function_226(&iLocal_329);
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (!Function_444(GET_MOUNT(&Global_54076), &bLocal_471, 0))
					{
						Function_394("home02_ranch03_obj05");
						Function_443();
					}
				}
				else
				{
					Function_394("Horse_return");
					Function_359();
				}
				iLocal_319 = 105;
			}
			else if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				if ((Function_444(GET_MOUNT(&Global_54076), &iLocal_4 + 312, 0) || Function_444(GET_MOUNT(&Global_54076), &bLocal_469, 0)) || Function_444(GET_MOUNT(&Global_54076), &iLocal_473, 0))
				{
					if (iLocal_853 != 2)
					{
						iLocal_433 = GET_MOUNT(&Global_54076);
						iLocal_853 = 2;
						Function_245();
						Function_226(&iLocal_329);
						Function_378("Home02_r3_ShoutsEncoBreakHors");
						Function_394("home02_ranch03_obj04");
						Function_356();
					}
				}
			}
			switch (iLocal_853)
			{
				case 0x00000000:
					if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 592))
					{
						if (Function_360(&iLocal_337, fLocal_533, fLocal_534, &iLocal_366, "h2_r3_Herd_return", "h2_r3_Herd_abandoned", &bLocal_352, 0, 0, 0, 4294967295, 1, 0))
						{
							if (bLocal_357 <= 1)
							{
								Function_394("home02_ranch03_obj02_start");
							}
							else
							{
								Function_394("home02_ranch03_obj02");
							}
						}
						else
						{
							Function_446();
						}
					}
					else if (bLocal_357 <= 1)
					{
						Function_394("home02_ranch03_obj02_start");
					}
					else
					{
						Function_394("home02_ranch03_obj02");
					}
					if (Function_442())
					{
						Function_245();
						Function_226(&iLocal_329);
						Function_378("Home02_r3_JonLassosAhorse");
						Function_394("home02_ranch03_obj03");
						Function_356();
						iLocal_853 = 1;
					}
					else if (!DECOR_CHECK_EXIST(&iLocal_274, "RopeAHorse"))
					{
						if (!HUD_IS_SHOWING_OBJECTIVE() && !IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_441();
							DECOR_SET_BOOL(&iLocal_274, "RopeAHorse", 1);
							Function_226(&iLocal_392);
						}
					}
					else
					{
						Function_440();
					}
					break;
				
				case 0x00000001:
					if (Function_439())
					{
						Function_245();
						Function_226(&iLocal_329);
						Function_378("Home02_r3_ShoutsEncoBreakHors");
						Function_394("home02_ranch03_obj04");
						iLocal_853 = 2;
						Function_356();
					}
					else
					{
						Function_438();
					}
					break;
				
				case 0x00000002:
					if (Function_436())
					{
						Function_245();
						Function_226(&iLocal_329);
						Function_378("Home02_r3_BreaksAHorse");
						Function_341(&iLocal_354, 3, 0, 4294967295, 4294967295);
						if (IS_ACTOR_VALID(&bLocal_327))
						{
							Function_394("Horse_return");
							Function_359();
						}
						else
						{
							Function_394("H2R3_Horse_any");
						}
						iLocal_853 = 3;
					}
					else
					{
						Function_435();
					}
					break;
				
				case 0x00000003:
					Function_226(&iLocal_329);
					iLocal_853 = 5;
					Function_434();
					Function_359();
					break;
				
				case 0x00000004:
					Function_226(&iLocal_329);
					Function_394("Horse_return");
					iLocal_853 = 5;
					Function_434();
					Function_359();
					break;
				
				case 0x00000005:
					if (Function_431())
					{
						if ((SQUAD_GET_SIZE(&bLocal_471) + SQUAD_GET_SIZE(&bLocal_467)) > 3)
						{
							Function_356();
							Function_245();
							Function_226(&iLocal_329);
							Function_341(&iLocal_354, 3, 0, 4294967295, 4294967295);
							if (IS_ACTOR_RIDING(&Global_54076))
							{
								Function_394("home02_ranch03_obj05");
								Function_443();
							}
							else
							{
								Function_394("Horse_return");
								Function_359();
							}
							iLocal_319 = 105;
						}
						else
						{
							Function_245();
							Function_226(&iLocal_329);
							Function_341(&iLocal_354, 26, 0, 4294967295, 4294967295);
							Function_378("Home02_r3_GoAfterOtherHors");
							Function_394("home02_ranch03_obj02");
							if (Function_396(&Global_54076, &iLocal_366) > 150.0f)
							{
								fLocal_533 = 150.0f;
								fLocal_534 = 225.0f;
							}
							else
							{
								fLocal_533 = (Function_396(&Global_54076, &iLocal_366) + 25.0f);
								fLocal_534 = (fLocal_533 + 50.0f);
							}
							iLocal_853 = 0;
							Function_446();
						}
					}
					else
					{
						Function_430();
					}
					break;
			}
			break;
		
		case 0x00000069:
			if (IS_BLIP_VALID(&iLocal_362))
			{
				if (IS_ACTOR_RIDING(&Global_54076))
				{
					if (!Function_444(GET_MOUNT(&Global_54076), &bLocal_471, 0))
					{
						Function_394("home02_ranch03_obj05");
						Function_397();
						Function_226(&iLocal_329);
						iLocal_319 = 106;
					}
				}
			}
			else if (!IS_ACTOR_RIDING(&Global_54076))
			{
				Function_394("Horse_return");
				Function_359();
			}
			Function_377();
			Function_445();
			break;
		
		case 0x0000006A:
			iLocal_341[1] = 1;
			Function_226(&iLocal_329);
			iLocal_318 = 2;
			iLocal_319 = 0;
			break;
	}
	return;
}

void Function_430() //Position: 0x18415 / 99349
{
	if (!bLocal_377)
	{
		if (!Function_282(&iLocal_392))
		{
			Function_226(&iLocal_392);
		}
		else if (Function_280(&iLocal_392) < fLocal_541)
		{
			if (!IS_ACTOR_RIDING(&Global_54076))
			{
				Function_378("Home02_r3_HasntBakHors");
			}
			else
			{
				Function_378("Home02_r3_NoDismountBrokHors");
			}
			Function_226(&iLocal_392);
		}
	}
	return;
}

bool Function_431() //Position: 0x18494 / 99476
{
	if (Function_432(&fLocal_333, 60.0f, 200.0f, &bLocal_323, "Uncle_return", "Uncle_abandoned", &bLocal_352, 0, &iLocal_274, &iLocal_4, 325, 1))
	{
		if (IS_BLIP_VALID(&iLocal_362))
		{
			REMOVE_BLIP(&iLocal_362);
		}
	}
	else
	{
		Function_221(13, 0, 1);
		if (IS_ACTOR_VALID(&bLocal_327))
		{
			Function_394("Horse_return");
			Function_359();
		}
		else
		{
			Function_394("H2R3_Horse_any");
		}
	}
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (GET_MOUNT(&Global_54076) == &bLocal_327)
		{
			return 1;
		}
	}
	if ((SQUAD_GET_SIZE(&bLocal_471) + SQUAD_GET_SIZE(&bLocal_467)) > 3)
	{
		return 0;
	}
	if (Function_442())
	{
		Function_245();
		Function_226(&iLocal_329);
		Function_394("home02_ranch03_obj03");
		Function_356();
		iLocal_853 = 1;
	}
	return 0;
}

bool Function_432(struct<2> Param0, int iParam2, int iParam3, float fParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x18595 / 99733
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_433(&Global_54076, &iParam3, iParam2))
	{
		Function_234(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_433(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_367(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_366(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_365(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_364(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_364(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_367(2))
	{
		Function_363(2);
		if (!Function_362())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_361();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_218(&iParam3);
				Function_222(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_364(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_364(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

bool Function_433(var uParam0, var uParam1, bool bParam2) //Position: 0x18753 / 100179
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

void Function_434() //Position: 0x18868 / 100456
{
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		switch (iLocal_376)
		{
			case 0x00000000:
				if (SQUAD_GOAL_IS_VALID(&bLocal_475))
				{
					SQUAD_GOAL_REMOVE(&iLocal_4 + 312, &bLocal_475);
					bLocal_475 = "";
				}
				bLocal_475 = SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 312, false, 0, 4294967295);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 944, 7.0f, 3);
				iLocal_376++;
				Function_226(&iLocal_408);
				break;
			
			case 0x00000001:
				if (SQUAD_GOAL_IS_VALID(&bLocal_475))
				{
					SQUAD_GOAL_REMOVE(&iLocal_4 + 312, &bLocal_475);
					bLocal_475 = "";
				}
				bLocal_475 = SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 312, false, 0, 4294967295);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 976, 7.0f, 3);
				iLocal_376++;
				Function_226(&iLocal_408);
				break;
			
			default:
				if (SQUAD_GOAL_IS_VALID(&bLocal_475))
				{
					SQUAD_GOAL_REMOVE(&iLocal_4 + 312, &bLocal_475);
					bLocal_475 = "";
				}
				bLocal_475 = SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 312, false, 0, 4294967295);
				TASK_GO_NEAR_COORD(0, &iLocal_4 + 1008, 7.0f, 3);
				iLocal_376 = 0;
				Function_226(&iLocal_408);
				break;
			}
	}
	return;
}

void Function_435() //Position: 0x18968 / 100712
{
	if (!bLocal_377)
	{
		if (!Function_282(&iLocal_392))
		{
			Function_226(&iLocal_392);
		}
		else if (Function_280(&iLocal_392) < fLocal_541)
		{
			Function_378("Home02_r3_ShoutsEncoBreakHors");
			Function_226(&iLocal_392);
		}
	}
	return;
}

bool Function_436() //Position: 0x189BE / 100798
{
	Function_341(&iLocal_354, 6, 0, 4294967295, 4294967295);
	if (IS_ACTOR_RIDING(&Global_54076))
	{
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_327, 10.0f))
		{
			if (GET_TASK_STATUS(&bLocal_327, 25) != 1)
			{
				TASK_FLEE_ACTOR(&bLocal_327, &Global_54076, 15.0f, 5.0f, 0, 1, 0);
			}
		}
		if (IS_ACTOR_VALID(&iLocal_433))
		{
			if (ANIMAL_ACTOR_GET_DOCILE(&iLocal_433))
			{
				SQUAD_LEAVE(&iLocal_433);
				Function_218(&iLocal_433);
				if (!bLocal_377)
				{
					if (!SQUAD_IS_VALID(&bLocal_471))
					{
						bLocal_471 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sBroken"));
						Function_384(&(Local_600[515]), &bLocal_471, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
						Function_380(&(Local_600[515]), 64);
					}
					SQUAD_JOIN(&iLocal_433, &bLocal_471);
					iLocal_854 = 0;
					bLocal_377 = true;
					return 1;
				}
				SQUAD_JOIN(&iLocal_433, &bLocal_471);
				return 1;
			}
		}
	}
	Function_245();
	Function_226(&iLocal_329);
	Function_437();
	Function_394("Horse_return");
	iLocal_853 = 5;
	Function_434();
	Function_359();
	return 0;
}

void Function_437() //Position: 0x18ADB / 101083
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_FailsBreakinHors", "Home02_r3_FailsBreakinHors", 0, 2, 1, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_438() //Position: 0x18B38 / 101176
{
	if (!bLocal_377)
	{
		if (!Function_282(&iLocal_392))
		{
			Function_226(&iLocal_392);
		}
		else if (Function_280(&iLocal_392) < fLocal_541)
		{
			Function_378("Home02_r3_JonLassosAhorse");
			Function_226(&iLocal_392);
		}
	}
	return;
}

bool Function_439() //Position: 0x18B8A / 101258
{
	if (GET_MOUNT(&Global_54076) == &iLocal_433)
	{
		Function_226(&iLocal_329);
		iLocal_378 = 0;
		return 1;
	}
	if (!iLocal_378)
	{
		iLocal_378 = 1;
	}
	if (GET_LASSO_TARGET(&Global_54076) == &iLocal_433)
	{
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_433)))
		{
			Function_356();
			iLocal_358 = ADD_BLIP_FOR_ACTOR(&iLocal_433, 418, 0, 2, 0);
		}
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		if (Function_442())
		{
			return 0;
		}
		Function_245();
		Function_226(&iLocal_329);
		Function_378("Home02_r3_GoAfterOtherHors");
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			Function_394("Horse_return");
			iLocal_853 = 5;
			Function_359();
		}
		else
		{
			Function_378("Home02_r3_GoAfterOtherHors");
			Function_394("home02_ranch03_obj02");
			if (Function_396(&Global_54076, &iLocal_366) > 150.0f)
			{
				fLocal_533 = 150.0f;
				fLocal_534 = 225.0f;
			}
			else
			{
				fLocal_533 = (Function_396(&Global_54076, &iLocal_366) + 25.0f);
				fLocal_534 = (fLocal_533 + 50.0f);
			}
			iLocal_853 = 0;
			Function_446();
			Function_434();
			iLocal_378 = 0;
		}
	}
	else if (!ACTORS_IN_RANGE(&Global_54076, &iLocal_433, 10.0f))
	{
		Function_245();
		Function_226(&iLocal_329);
		Function_378("Home02_r3_GoAfterOtherHors");
		if (!IS_ACTOR_RIDING(&Global_54076))
		{
			Function_394("Horse_return");
			iLocal_853 = 5;
			Function_359();
		}
		else
		{
			Function_378("Home02_r3_GoAfterOtherHors");
			Function_394("home02_ranch03_obj02");
			if (Function_396(&Global_54076, &iLocal_366) > 150.0f)
			{
				fLocal_533 = 150.0f;
				fLocal_534 = 225.0f;
			}
			else
			{
				fLocal_533 = (Function_396(&Global_54076, &iLocal_366) + 25.0f);
				fLocal_534 = (fLocal_533 + 50.0f);
			}
			iLocal_853 = 0;
			Function_446();
		}
		Function_434();
		iLocal_378 = 0;
	}
	return 0;
}

void Function_440() //Position: 0x18DD8 / 101848
{
	if (!bLocal_377)
	{
		if (!Function_282(&iLocal_392))
		{
			Function_226(&iLocal_392);
		}
		else if (Function_280(&iLocal_392) < fLocal_541)
		{
			iLocal_445 = Function_393(&iLocal_4 + 312, &Global_54076, 0, 0);
			if (ACTORS_IN_RANGE(&Global_54076, &iLocal_445, 15.0f))
			{
				if (Function_390())
				{
					Function_378("Home02_r3_ShoutsEnco");
				}
				else
				{
					Function_378("Home02_r3_RopeAHorse");
				}
			}
			else if (iLocal_374 <= 6)
			{
				Function_378("Home02_r3_2Long2Lasso");
			}
			else
			{
				Function_378("Home02_r3_Close2Horse");
			}
			Function_226(&iLocal_392);
		}
	}
	return;
}

void Function_441() //Position: 0x18EB1 / 102065
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_RopeAHorse", "Home02_r3_RopeAHorse", 0, 2, 1, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_442() //Position: 0x18F02 / 102146
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		iLocal_433 = GET_LASSO_TARGET(&Global_54076);
		if (IS_ACTOR_VALID(&iLocal_433))
		{
			if (IS_ACTOR_HORSE(&iLocal_433))
			{
				if (SQUAD_GET(&iLocal_433) != &iLocal_4 + 312 || SQUAD_GET(&iLocal_433) != &bLocal_469)
				{
					SQUAD_JOIN(&iLocal_433, &iLocal_473);
					TASK_CLEAR(&iLocal_433);
					switch (bLocal_357)
					{
						case 0x00000000:
							DECOR_SET_FLOAT(&iLocal_433, "fHowLong", 25.0f);
							break;
						
						case 0x00000001:
							DECOR_SET_FLOAT(&iLocal_433, "fHowLong", 35.0f);
							break;
						
						case 0x00000002:
							DECOR_SET_FLOAT(&iLocal_433, "fHowLong", 45.0f);
							break;
						
						default:
							DECOR_SET_FLOAT(&iLocal_433, "fHowLong", 25.0f);
							break;
					}
					iLocal_378 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_443() //Position: 0x18FEE / 102382
{
	Function_221(13, 1, 1);
	if (IS_BLIP_VALID(&iLocal_358))
	{
		REMOVE_BLIP(&iLocal_358);
	}
	if (IS_OBJECT_VALID(&fLocal_364))
	{
		Function_358(&fLocal_364);
		Function_214();
	}
	if (IS_BLIP_VALID(&iLocal_362))
	{
		REMOVE_BLIP(&iLocal_362);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_357(&iLocal_4 + 312);
	}
	if (SQUAD_IS_VALID(&bLocal_469))
	{
		Function_357(&bLocal_469);
	}
	return;
}

bool Function_444(bool bParam0, bool bParam1, bool bParam2) //Position: 0x19057 / 102487
{
	if (!IS_ACTOR_VALID(&bParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&bParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&bParam0) == &bParam1)
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

int Function_445() //Position: 0x1909F / 102559
{
	if (bLocal_357 <= 3 || (SQUAD_GET_SIZE(&bLocal_471) + SQUAD_GET_SIZE(&bLocal_467)) <= 3)
	{
		if (IS_ACTOR_RIDING(&Global_54076))
		{
			if ((ANIMAL_ACTOR_GET_DOMESTICATION(GET_MOUNT(&Global_54076)) != 0 && !SQUAD_GET(GET_MOUNT(&Global_54076)) != &bLocal_467) && !SQUAD_GET(GET_MOUNT(&Global_54076)) != &bLocal_471)
			{
				Function_356();
				Function_245();
				Function_226(&iLocal_329);
				iLocal_319 = 106;
				return 1;
			}
		}
	}
	return 0;
}

void Function_446() //Position: 0x1910E / 102670
{
	Function_221(13, 0, 1);
	if (IS_BLIP_VALID(&iLocal_358))
	{
		REMOVE_BLIP(&iLocal_358);
	}
	if (IS_OBJECT_VALID(&fLocal_364))
	{
		Function_358(&fLocal_364);
		Function_214();
	}
	if (IS_BLIP_VALID(&iLocal_362))
	{
		REMOVE_BLIP(&iLocal_362);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		if (SQUAD_GET_SIZE(&iLocal_4 + 312) >= 0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 312, false))))
			{
				Function_357(&iLocal_4 + 312);
				Function_447(&iLocal_4 + 312, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	if (SQUAD_IS_VALID(&bLocal_469))
	{
		if (SQUAD_GET_SIZE(&bLocal_469) >= 0)
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&bLocal_469, false))))
			{
				Function_357(&bLocal_469);
				Function_447(&bLocal_469, 418, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			}
		}
	}
	return;
}

void Function_447(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x191EB / 102891
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
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

void Function_448() //Position: 0x192FB / 103163
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_SpotsPackHors", "Home02_r3_SpotsPackHors", 0, 2, 1, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_449() //Position: 0x19352 / 103250
{
	Function_377();
	if (!bLocal_377)
	{
		if (SQUAD_GET(GET_MOUNT(&Global_54076)) != &iLocal_4 + 312 || SQUAD_GET(GET_MOUNT(&Global_54076)) != &bLocal_469)
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 20.0f))
			{
				if (GET_TASK_STATUS(&bLocal_323, 25) != 1)
				{
					TASK_FLEE_ACTOR(&bLocal_323, &Global_54076, 30.0f, 5.0f, 0, 1, 0);
				}
			}
			else if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 35.0f))
			{
				if (GET_TASK_STATUS(&bLocal_323, 83) != 1)
				{
					TASK_GO_NEAR_ACTOR(&bLocal_323, &Global_54076, 25.0f, 4);
				}
			}
			else if (GET_TASK_STATUS(&bLocal_323, 22) != 1)
			{
				TASK_FACE_ACTOR(&bLocal_323, &Global_54076, 1, 3212836864);
			}
		}
		else if (!GET_TASK_STATUS(&bLocal_323, 67) != 1)
		{
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&bLocal_323, &Global_54076, 15.0f, 4);
			TASK_PRIORITY_SET(&bLocal_323, true);
		}
	}
	return;
}

void Function_450() //Position: 0x1943C / 103484
{
	if (IS_ACTOR_VALID(&bLocal_327))
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (!IS_ACTOR_RIDING(&Global_54076) && !IS_ACTOR_MOUNTED(&bLocal_327))
			{
				ACTOR_MOUNT_ACTOR(&Global_54076, &bLocal_327);
			}
		}
	}
	if (IS_ACTOR_VALID(&bLocal_323))
	{
		if (IS_ACTOR_VALID(&iLocal_4 + 112[02]))
		{
			if (!IS_ACTOR_RIDING(&bLocal_323) && !IS_ACTOR_MOUNTED(&iLocal_4 + 112[02]))
			{
				ACTOR_MOUNT_ACTOR(&bLocal_323, &iLocal_4 + 112[02]);
				MEMORY_PREFER_RIDING(&bLocal_323, true);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&bLocal_323);
				GIVE_WEAPON_TO_ACTOR(&bLocal_323, 21, 1.0f, 0, 1);
				ACTOR_SET_NEXT_WEAPON(&bLocal_323, 21);
				ACTOR_START_FORCE_HOLSTER(&bLocal_323, 0, 0);
			}
		}
	}
	return;
}

void Function_451() //Position: 0x194E4 / 103652
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 136))
	{
		Function_346();
		if (SQUAD_IS_VALID(&iLocal_4 + 136))
		{
			Function_345(&iLocal_4 + 136, 0);
			Function_344(&iLocal_4 + 136, 3);
			if (IS_ACTOR_VALID(&iLocal_4 + 112[02]))
			{
				Function_347(&iLocal_4 + 112[02], &iLocal_4 + 712[5], 1, 1, 1);
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 136, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_325 = &iLocal_4 + 112[02];
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_325, 0);
			HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&bLocal_325, 1);
		}
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 312))
	{
		Function_404();
		if (SQUAD_IS_VALID(&iLocal_4 + 312))
		{
			bLocal_372 = false;
			while (bLocal_372 <= SQUAD_GET_SIZE(&iLocal_4 + 312))
			{
				iLocal_445 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 312, bLocal_372);
				if (IS_ACTOR_VALID(&iLocal_445))
				{
					if (IS_ACTOR_ALIVE(&iLocal_445))
					{
						SNAP_OBJECT_TO_GROUND(&iLocal_445, 100.0f, false, 1092616192);
					}
				}
				bLocal_372++;
			}
			if (SQUAD_IS_VALID(&bLocal_469))
			{
				bLocal_372 = false;
				while (bLocal_372 <= SQUAD_GET_SIZE(&bLocal_469))
				{
					iLocal_445 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_469, bLocal_372);
					if (IS_ACTOR_VALID(&iLocal_445))
					{
						if (IS_ACTOR_ALIVE(&iLocal_445))
						{
							SNAP_OBJECT_TO_GROUND(&iLocal_445, 100.0f, false, 1092616192);
						}
					}
					bLocal_372++;
				}
			}
			Function_345(&iLocal_4 + 312, 0);
			Function_409(&iLocal_4 + 312, 1);
			uLocal_437 = &iLocal_4 + 144[02];
			SQUAD_GOALS_CLEAR(&iLocal_4 + 312);
			Function_327(&iLocal_4 + 312);
			Function_405(&iLocal_4 + 312);
			iLocal_529 = 6;
			iLocal_530 = 6;
		}
	}
	if (!IS_OBJECT_VALID(&iLocal_366))
	{
		iLocal_366 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_274, Function_54(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
		if (IS_OBJECT_VALID(&iLocal_366))
		{
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_467))
	{
		bLocal_467 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_274, "SGOAL"));
		if (SQUAD_IS_VALID(&bLocal_467))
		{
			SQUAD_GOALS_CLEAR(&bLocal_467);
		}
	}
	Function_384(&(Local_600[015]), &bLocal_323, "Uncle", 1, 0x5f5e100, 1);
	Function_380(&(Local_600[015]), 1024);
	SET_ACTORS_HORSE(&bLocal_323, &bLocal_325);
	SET_MOST_RECENT_MOUNT(&bLocal_323, &bLocal_325);
	MEMORY_PREFER_RIDING(&bLocal_323, true);
	Function_384(&(Local_600[115]), &bLocal_325, "Uncle_Horse", 0, 0x5f5e100, 1);
	Function_380(&(Local_600[115]), 1024);
	Function_384(&(Local_600[415]), &bLocal_467, "h2_r3_wild_horse", 0, 0x5f5e100, 1);
	Function_380(&(Local_600[415]), 64);
	ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
	return;
}

void Function_452(var uParam0, int iParam1) //Position: 0x197A1 / 104353
{
	bool bVar0;
	var uVar1;
	
	switch (iLocal_529)
	{
		case 0x00000006:
			if (Function_282(&iLocal_408))
			{
				if (Function_280(&iLocal_408) < 15.0f)
				{
					if (SQUAD_GOAL_IS_VALID(&bLocal_475))
					{
						SQUAD_GOAL_REMOVE(&iLocal_4 + 312, &bLocal_475);
						bLocal_475 = "";
						Function_376(&iLocal_408);
					}
				}
			}
			if (SQUAD_GET_SIZE(&uParam0) >= 1)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						if (Function_453(&iParam1, &uVar1) < 50.0f || IS_ACTOR_IN_VOLUME(&uVar1, &iLocal_4 + 528))
						{
							TASK_CLEAR(&uVar1);
							SQUAD_LEAVE(&uVar1);
							SQUAD_JOIN(&uVar1, &bLocal_469);
						}
					}
					bVar0++;
				}
			}
			break;
	}
	return;
}

float Function_453(int iParam0, int iParam1) //Position: 0x1985E / 104542
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_369(&iParam0);
			Var0 = Function_369(&iParam0);
			Function_369(&iParam1);
			Var2 = Function_369(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

void Function_454() //Position: 0x198FB / 104699
{
	if (!SQUAD_IS_VALID(&iLocal_473))
	{
		iLocal_473 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "sLassoedSquad"));
	}
	else if (SQUAD_GET_SIZE(&iLocal_473) >= 0)
	{
		bLocal_372 = false;
		while (bLocal_372 <= SQUAD_GET_SIZE(&iLocal_473))
		{
			iLocal_445 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_473, bLocal_372);
			if (IS_ACTOR_ALIVE(&iLocal_445))
			{
				if (GET_LASSO_USER(&iLocal_445) == &Global_54076)
				{
					if (GET_TASK_STATUS(&iLocal_445, 0) != 1)
					{
						bLocal_375 = TASK_SEQUENCE_OPEN();
						TASK_HORSE_ACTION(0, 0);
						TASK_STAND_STILL(false, 1.0f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_HORSE_ACTION(0, 0);
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_02");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_03");
						TASK_ACTION_PERFORM(false, "horse_Main/ReactionProcessing/Startled/Startled_stn/Startled_01");
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_HORSE_ACTION(0, 0);
						TASK_STAND_STILL(false, 0,5f, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&iLocal_445, bLocal_375);
						TASK_SEQUENCE_RELEASE(bLocal_375, 1);
						TASK_PRIORITY_SET(&iLocal_445, true);
					}
				}
				else
				{
					TASK_CLEAR(&iLocal_445);
					SQUAD_JOIN(&iLocal_445, &bLocal_469);
				}
			}
			bLocal_372++;
		}
	}
	return;
}

void Function_455(float fParam0, float fParam1, bool bParam2) //Position: 0x19C2E / 105518
{
	bool bVar0;
	var uVar1;
	
	switch (iLocal_530)
	{
		case 0x00000006:
			SQUAD_GOAL_ADD_GENERAL_TASK(&fParam1, false, 1, 4294967295);
			Local_424 = Vector(0.0f, 0.0f, 0.0f);
			TASK_FOLLOW_OBJECT(0, &bParam2, &Local_424, 0, 0, 0, 0, 0, 0, 1);
			iLocal_530 = 7;
			break;
		
		case 0x00000007:
			if (SQUAD_GET_SIZE(&fParam1) >= 0)
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&fParam1))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&fParam1, bVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						if (Function_368(&uVar1, &bParam2, 50.0f))
						{
							if (!IS_ACTOR_IN_VOLUME(&uVar1, &iLocal_4 + 528))
							{
								TASK_CLEAR(&uVar1);
								SQUAD_LEAVE(&uVar1);
								SQUAD_JOIN(&uVar1, &fParam0);
							}
						}
					}
					bVar0++;
				}
			}
			break;
		
		case 0x00000068:
			break;
	}
	return;
}

void Function_456() //Position: 0x19CE9 / 105705
{
	if (IS_ACTOR_VALID(&Global_54076))
	{
		switch (iLocal_356)
		{
			case 0x00000000:
				iLocal_356++;
				break;
			
			case 0x00000001:
				if (!ACTOR_HAS_WEAPON(&Global_54076, 21))
				{
					GIVE_WEAPON_TO_ACTOR(&Global_54076, 21, false, 1, 1);
				}
				iLocal_356++;
				break;
			
			case 0x00000002:
				if (ACTOR_HAS_WEAPON(&Global_54076, 21))
				{
					if (!ACTOR_HAS_WEAPON_SET_AS_NEXT(&Global_54076, 21))
					{
						ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
					}
					iLocal_356++;
				}
				break;
			
			case 0x00000003:
				if (ACTOR_HAS_WEAPON_SET_AS_NEXT(&Global_54076, 21))
				{
					iLocal_356++;
				}
				break;
			
			case 0x00000004:
				iLocal_356++;
				break;
			}
	}
	return;
}

void Function_457(float fParam0, float fParam1, var uParam2) //Position: 0x19DA0 / 105888
{
	struct<2> Var0;
	var uVar2;
	struct<2> Var4;
	
	if (IS_OBJECT_VALID(&fParam1))
	{
		if (SQUAD_IS_VALID(&fParam0))
		{
			if (!SQUAD_GET_SIZE(&fParam0) != 0)
			{
				SQUAD_COMPUTE_CENTROID(&fParam0, &Var0);
				Function_458(&fParam0);
				uVar2 = Function_458(&fParam0);
				Var4 = Vector(0.0f, 0.0f, 0.0f);
				Var4.f_4 = UNK_0x9C40E671(&uVar2);
				SET_OBJECT_POSITION(&fParam1, Var0);
				SET_OBJECT_ORIENTATION(&fParam1, Var4);
				STREAMING_LOAD_BOUNDS(Var0, 100.0f, 0);
			}
			GET_OBJECT_POSITION(&fParam1, &uParam2);
		}
	}
	return;
}

struct<8> Function_458(int iParam0) //Position: 0x19E24 / 106020
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		UNK_0x44986367(&Var2, Function_459(&uVar1));
		Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Var2, Var4, StackVal);
		bVar0++;
	}
	Var4 = (Var4 / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	Var4.f_4 = 0.0f;
	Var4.f_8 = (StackVal / IntToFloat(SQUAD_GET_SIZE(&iParam0)));
	return StackVal, Var4;
}

var Function_459(bool bParam0) //Position: 0x19E8D / 106125
{
	return GET_HEADING(&bParam0);
}

void Function_460() //Position: 0x19E99 / 106137
{
	if (iLocal_374 > 10)
	{
		if (!Function_282(&iLocal_404))
		{
			Function_226(&iLocal_404);
		}
		else if (Function_280(&iLocal_404) < 1.0f)
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 20.0f))
			{
				SAY_SINGLE_LINE_SCRIPTED(&Global_54076, "Home02_r3_ShutIt", &bLocal_323, 0, 1, 0, 1, 4);
				Function_376(&iLocal_404);
				Function_226(&iLocal_392);
				iLocal_374 = RAND_INT_RANGE(3, 9);
				fLocal_541 = RAND_FLOAT_RANGE(5.0f, 7.0f);
			}
			else
			{
				iLocal_374 = 9;
				Function_226(&iLocal_392);
			}
		}
	}
	return;
}

void Function_461() //Position: 0x19F26 / 106278
{
	if (Function_224(Global_46914[1]))
	{
		Function_354(&uLocal_449);
	}
	if (iLocal_319 < 3 && iLocal_319 > 105)
	{
		Function_425();
		if (iLocal_319 >= 7)
		{
			if (!bLocal_382)
			{
				Function_474();
			}
			else
			{
				if (SQUAD_IS_VALID(&iLocal_4 + 312))
				{
					Function_423();
				}
				Function_457(&iLocal_4 + 312, &iLocal_366, &uLocal_412);
			}
		}
		Function_456();
	}
	switch (iLocal_319)
	{
		case 0x00000000:
			Function_350(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_ACTOR_HEALTH(&bLocal_323, GET_ACTOR_MAX_HEALTH(&bLocal_323));
			if (IS_ACTOR_VALID(&bLocal_327))
			{
				TASK_STAND_STILL(&bLocal_327, -1.0f, 0, 0);
				TASK_PRIORITY_SET(&bLocal_327, true);
			}
			if (Function_285(&Local_276))
			{
				Function_347(&Global_54076, &iLocal_4 + 624[1], 0, 1, 0);
				Function_347(&bLocal_323, &iLocal_4 + 624[3], 0, 1, 0);
			}
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_349();
			if (Function_285(&Local_276) || Global_99145)
			{
				bLocal_320 = Global_46754[0];
				if (!Function_224(bLocal_320))
				{
					Function_348(&Local_276);
				}
				Function_226(&iLocal_329);
				iLocal_319 = 1;
			}
			else
			{
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			Function_226(&iLocal_329);
			iLocal_319 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_224(bLocal_320) || bLocal_320 != 4294967295))
			{
				Function_473();
				if (IS_ACTOR_VALID(&bLocal_323))
				{
					Function_359();
					bLocal_355 = TASK_SEQUENCE_OPEN();
					TASK_MOUNT(false, &bLocal_325, 0, 1, 2, 2147483647);
					TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&bLocal_323, bLocal_355);
					TASK_SEQUENCE_RELEASE(bLocal_355, 1);
					SET_ACTOR_MAX_SPEED(&bLocal_323, 4);
				}
				TASK_CLEAR(&Global_54076);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 5.0f, 0);
				Function_347(&bLocal_325, &iLocal_4 + 624[7], 1, 1, 1);
				Function_347(&bLocal_327, &iLocal_4 + 624[5], 1, 1, 1);
				Function_226(&iLocal_329);
				iLocal_319 = 2;
			}
			break;
		
		case 0x00000002:
			Function_240(iLocal_318);
			Function_410(StackVal, Function_240(iLocal_318), iLocal_318, Global_46754[0], Function_243(iLocal_318), 0);
			Function_400();
			iLocal_356 = 0;
			iLocal_370 = 0;
			bLocal_357 = false;
			Function_341(&iLocal_354, 1, 0, 4294967295, 4294967295);
			Function_226(&iLocal_329);
			iLocal_319 = 6;
			break;
		
		case 0x00000006:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			if (!HUD_IS_FADING())
			{
				Function_472();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(&iLocal_329);
				iLocal_319 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_280(&iLocal_329) <= 5.0f)
			{
				Function_394("home02_ranch03_obj11");
				Function_226(&iLocal_329);
				Function_226(&fLocal_333);
				Function_226(&iLocal_337);
				iLocal_319 = 18;
			}
			break;
		
		case 0x00000012:
			if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 100.0f))
			{
				Function_234("Uncle_abandoned");
				bLocal_352 = true;
			}
			if (IS_ACTOR_RIDING(&bLocal_323))
			{
				if (!iLocal_383)
				{
					AI_GOAL_LOOK_AT_ACTOR_NEW(&bLocal_323, &Global_54076, -1.0f, 1);
					iLocal_383 = 1;
				}
				MEMORY_PREFER_RIDING(&bLocal_323, true);
			}
			if (IS_ACTOR_RIDING(&Global_54076) && IS_ACTOR_RIDING(&bLocal_323))
			{
				Function_341(&iLocal_354, 3, 0, 4294967295, 4294967295);
				bLocal_327 = GET_MOUNT(&Global_54076);
				Function_470(&bLocal_327, 0);
				if (IS_ACTOR_VALID(&bLocal_323))
				{
					Function_443();
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_323, &iLocal_4 + 1064, 4, 0, 0, 0, false);
					SET_ACTOR_MAX_SPEED(&bLocal_323, 4);
					iLocal_852 = 0;
				}
				AI_GOAL_LOOK_CLEAR(&bLocal_323);
				iLocal_383 = 0;
				ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_323, -1.0f, -1.0f, 4, 1, 0);
				Function_469();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_226(&iLocal_329);
				iLocal_319 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_280(&iLocal_329) <= 5.0f)
			{
				Function_394("home02_ranch03_obj01");
				Function_226(&iLocal_329);
				Function_226(&fLocal_333);
				Function_226(&iLocal_337);
				iLocal_319 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_ACTOR_RIDING(&Global_54076))
			{
				if (!Function_432(&fLocal_333, 60.0f, 200.0f, &bLocal_323, "Uncle_return", "Uncle_abandoned", &bLocal_352, 0, &iLocal_274, &iLocal_4, 325, 1))
				{
					Function_221(13, 1, 1);
				}
			}
			else
			{
				if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 200.0f))
				{
					Function_234("Uncle_abandoned");
					bLocal_352 = true;
				}
				if (IS_ACTOR_VALID(&bLocal_327))
				{
					if (IS_ACTOR_ALIVE(&bLocal_327))
					{
						Function_359();
						Function_394("Horse_return");
					}
					else
					{
						Function_356();
						Function_394("Horse_find");
					}
				}
				else
				{
					Function_356();
					Function_394("Horse_find");
				}
			}
			Function_463();
			Function_462();
			if (bLocal_382)
			{
				if (IS_OBJECT_VALID(&iLocal_366))
				{
					if (Function_368(&Global_54076, &iLocal_366, 40.0f))
					{
						if (IS_BLIP_VALID(&iLocal_358))
						{
							REMOVE_BLIP(&iLocal_358);
						}
						if (IS_OBJECT_VALID(&fLocal_364))
						{
							DESTROY_OBJECT(&fLocal_364);
						}
						Function_245();
						Function_226(&iLocal_329);
						iLocal_319 = 106;
					}
				}
			}
			break;
		
		case 0x0000006A:
			REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_323);
			iLocal_341[0] = 1;
			Function_226(&iLocal_329);
			iLocal_318 = 1;
			iLocal_319 = 0;
			break;
	}
	return;
}

void Function_462() //Position: 0x1A468 / 107624
{
	switch (iLocal_852)
	{
		case 0x00000000:
			if (IS_ACTOR_IN_VOLUME(&bLocal_323, &iLocal_4 + 576))
			{
				DESTROY_VOLUME(&iLocal_4 + 576);
				MEMORY_REPORT_POSITION_AUTO(&bLocal_323, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 312, true), 1);
				TASK_GO_NEAR_ACTOR(&bLocal_323, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 312, true), 50.0f, 3);
				CLEAR_ACTOR_MAX_SPEED(&bLocal_323);
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_323);
				SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&bLocal_323, &iLocal_4 + 608, 4, 1);
				iLocal_852 = 1;
			}
			else if (GET_TASK_STATUS(&bLocal_323, 43) != 1)
			{
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_323, &iLocal_4 + 1064, 4, 0, 0, 0, false);
				SET_ACTOR_MAX_SPEED(&bLocal_323, 4);
			}
			break;
		
		case 0x00000001:
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 20.0f))
			{
				if (GET_TASK_STATUS(&bLocal_323, 83) == 0)
				{
					TASK_FOLLOW_ACTOR(&bLocal_323, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 312, true));
					iLocal_852 = 2;
				}
				else if (GET_TASK_STATUS(&bLocal_323, 6) == 1)
				{
					TASK_GO_NEAR_ACTOR(&bLocal_323, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 312, true), 50.0f, 3);
					CLEAR_ACTOR_MAX_SPEED(&bLocal_323);
				}
			}
			else if (!GET_TASK_STATUS(&bLocal_323, 6) != 1)
			{
				TASK_STAND_STILL(&bLocal_323, -1.0f, 0, 0);
			}
			break;
		
		case 0x00000002:
			break;
	}
	return;
}

void Function_463() //Position: 0x1A59B / 107931
{
	if (!iLocal_380)
	{
		if (!ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 30.0f))
		{
			bLocal_372 = Function_399(&Global_54076, &iLocal_4 + 1064);
			GET_PATH_POINT(&iLocal_4 + 1064, bLocal_372, &Local_430);
			fLocal_540 = Function_468(StackVal, &Global_54076, Local_430);
			if (fLocal_540 < 25.0f)
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_WrongDirection", Function_54(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
				iLocal_380 = 1;
			}
			else if (Function_467(&Global_54076, &bLocal_323, &iLocal_4 + 1064))
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_2FarAhead", Function_54(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
				iLocal_380 = 1;
			}
			else
			{
				ABORT_SCRIPTED_CONVERSATION(1);
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_2FarBehind", Function_54(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
				iLocal_380 = 1;
			}
		}
	}
	if (!IS_ACTOR_RIDING(&Global_54076))
	{
	}
	else if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (Function_282(&iLocal_400))
		{
			Function_376(&iLocal_400);
		}
	}
	else
	{
		if (iLocal_379)
		{
			iLocal_379 = 0;
		}
		if (!Function_282(&iLocal_400))
		{
			Function_226(&iLocal_400);
		}
		if (Function_280(&iLocal_400) < 4.0f)
		{
			if (!Function_282(&iLocal_337))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &bLocal_323, 30.0f))
				{
					if (iLocal_380)
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&bLocal_323, "Home02_r3_ComesBakUncle", Function_54(), 0, 0, 1, 3, 1, 0, 0, 1000, 0, 0);
						RESTART_SCRIPTED_CONVERSATION();
						Function_226(&iLocal_400);
						iLocal_380 = 0;
					}
					else if (!HUD_IS_SHOWING_OBJECTIVE())
					{
						switch (iLocal_373)
						{
							case 0x00000000:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_379 = 1;
									Function_466();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_373 = 99;
									}
								}
								break;
							
							case 0x00000001:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_379 = 1;
									Function_465();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_373 = 99;
									}
								}
								break;
							
							case 0x00000002:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_379 = 1;
									Function_464();
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_373 = 99;
									}
								}
								break;
							
							case 0x00000063:
								break;
							
							default:
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										iLocal_373 = 99;
									}
								}
								break;
							}
						}
					}
				}
			}
	}
	return;
}

void Function_464() //Position: 0x1A7FA / 108538
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v3_AA", "Home02_r3_HorseBanter_v3_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v3_AB1", "Home02_r3_HorseBanter_v3_AB1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v3_AB2", "Home02_r3_HorseBanter_v3_AB2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v3_AB3", "Home02_r3_HorseBanter_v3_AB3", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v3_AC", "Home02_r3_HorseBanter_v3_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v3_AD", "Home02_r3_HorseBanter_v3_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_2790", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v3_AE", "Home02_r3_HorseBanter_v3_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v3_AF", "Home02_r3_HorseBanter_v3_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v3_AG", "Home02_r3_HorseBanter_v3_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v3_AH1", "Home02_r3_HorseBanter_v3_AH1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v3_AH2", "Home02_r3_HorseBanter_v3_AH2", 1, 1, 0, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x1AB34 / 109364
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v2_AA", "Home02_r3_HorseBanter_v2_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v2_AB", "Home02_r3_HorseBanter_v2_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v2_AC", "Home02_r3_HorseBanter_v2_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v2_AD", "Home02_r3_HorseBanter_v2_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v2_AE", "Home02_r3_HorseBanter_v2_AE", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v2_AF", "Home02_r3_HorseBanter_v2_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_910", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v2_AG", "Home02_r3_HorseBanter_v2_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v2_AH1", "Home02_r3_HorseBanter_v2_AH1", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v2_AH2", "Home02_r3_HorseBanter_v2_AH2", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v2_AI", "Home02_r3_HorseBanter_v2_AI", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v2_AJ", "Home02_r3_HorseBanter_v2_AJ", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v2_AK", "Home02_r3_HorseBanter_v2_AK", 0, 1, 0, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_466() //Position: 0x1AEAC / 110252
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v1_AA", "Home02_r3_HorseBanter_v1_AA", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_4250", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v1_AB", "Home02_r3_HorseBanter_v1_AB", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v1_AC", "Home02_r3_HorseBanter_v1_AC", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v1_AD", "Home02_r3_HorseBanter_v1_AD", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v1_AE1", "Home02_r3_HorseBanter_v1_AE1", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v1_AE2", "Home02_r3_HorseBanter_v1_AE2", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v1_AF", "Home02_r3_HorseBanter_v1_AF", 1, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "SFX_OVERLAP_2230", "", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_HorseBanter_v1_AG", "Home02_r3_HorseBanter_v1_AG", 0, 1, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(0, "Home02_r3_HorseBanter_v1_AH", "Home02_r3_HorseBanter_v1_AH", 1, 1, 0, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_467(int iParam0, int iParam1, bool bParam2) //Position: 0x1B175 / 110965
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<2> Var4;
	
	iVar0 = Function_399(&iParam0, &bParam2);
	iVar1 = Function_399(&iParam1, &bParam2);
	if (iVar0 >= iVar1)
	{
		return 1;
	}
	if (iVar0 == iVar1)
	{
		GET_PATH_POINT(&bParam2, iVar0 + 1, &Var4);
		fVar2 = Function_468(StackVal, &iParam0, Var4);
		fVar3 = Function_468(StackVal, &iParam1, Var4);
		if (fVar2 > fVar3)
		{
			return 1;
		}
		return 0;
	}
	return 0;
	return 0;
}

var Function_468(int iParam0, struct<2> Param1) //Position: 0x1B1DD / 111069
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_370(&iParam0);
		Var0 = Function_370(&iParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

void Function_469() //Position: 0x1B254 / 111188
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_SetOffHorses", "Home02_r3_SetOffHorses", 0, 2, 1, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_470(int iParam0, var uParam1) //Position: 0x1B2A9 / 111273
{
	Function_471(&uParam1);
	(&Global_21369 + 128) = &iParam0;
	return;
}

void Function_471(float fParam0) //Position: 0x1B2BE / 111294
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

void Function_472() //Position: 0x1B48D / 111757
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "Home02_r3_WaitJonMount", "Home02_r3_WaitJonMount", 0, 1, 1, 0, 1);
		Function_373(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_473() //Position: 0x1B4E2 / 111842
{
	if (!SQUAD_IS_VALID(&iLocal_4 + 136))
	{
		Function_346();
		if (SQUAD_IS_VALID(&iLocal_4 + 136))
		{
			Function_345(&iLocal_4 + 136, 0);
			Function_344(&iLocal_4 + 136, 3);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 136, false, 1, 4294967295);
			TASK_STAND_STILL(false, -1.0f, 0, 0);
			bLocal_325 = &iLocal_4 + 112[02];
			SET_ALLOW_RIDE_BY_PLAYER(&bLocal_325, 0);
			HORSE_ENABLE_AUTO_JUMP_FOR_AI_RIDERS(&bLocal_325, 1);
		}
	}
	Function_384(&(Local_600[015]), &bLocal_323, "Uncle", 1, 0x5f5e100, 1);
	Function_380(&(Local_600[015]), 1024);
	SET_ACTORS_HORSE(&bLocal_323, &bLocal_325);
	SET_MOST_RECENT_MOUNT(&bLocal_323, &bLocal_325);
	Function_384(&(Local_600[115]), &bLocal_325, "Uncle_Horse", 0, 0x5f5e100, 1);
	Function_380(&(Local_600[115]), 1024);
	ACTOR_SET_NEXT_WEAPON(&Global_54076, 21);
	return;
}

void Function_474() //Position: 0x1B5C1 / 112065
{
	GET_OBJECT_POSITION(&iLocal_4 + 1056, &Local_430);
	STREAMING_LOAD_BOUNDS(Local_430, 100.0f, 0);
	if (STREAMING_ARE_BOUNDS_LOADED(Local_430, 90.0f))
	{
		if (!SQUAD_IS_VALID(&iLocal_4 + 312))
		{
			Function_404();
			if (SQUAD_IS_VALID(&iLocal_4 + 312))
			{
				Function_345(&iLocal_4 + 312, 0);
				Function_409(&iLocal_4 + 312, 1);
				uLocal_437 = &iLocal_4 + 144[02];
				SQUAD_GOALS_CLEAR(&iLocal_4 + 312);
				Function_327(&iLocal_4 + 312);
				Function_405(&iLocal_4 + 312);
				iLocal_529 = 6;
				iLocal_530 = 6;
			}
		}
		if (!IS_OBJECT_VALID(&iLocal_366))
		{
			GET_OBJECT_POSITION(&iLocal_4 + 1056, &Local_430);
			Function_76();
			iLocal_366 = CREATE_POINT_IN_LAYOUT(&iLocal_274, Function_54(), Local_430, Function_76());
			if (IS_OBJECT_VALID(&iLocal_366))
			{
			}
		}
		bLocal_382 = true;
	}
	return;
}

void Function_475() //Position: 0x1B699 / 112281
{
	switch (iLocal_319)
	{
		case 0x00000000:
			Function_496(&Local_276, 1);
			if (!IS_LAYOUTREF_VALID(&iLocal_274))
			{
				iLocal_274 = CREATE_LAYOUT("Home02_Ranch03_DynamicLayout");
			}
			Function_495("NRT_SONG_02", 0, 0, 4294967295, 4294967295, 3212836864, 0);
			iLocal_354 = 0;
			Function_492();
			Function_490(32768);
			if (!IS_ACTOR_VALID(&bLocal_323))
			{
				bLocal_323 = Function_299(13, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			else if ((!Function_285(&Local_276) && Local_276.f_40 >= 1) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/UNCLE_03/UNCLE_03"))
			{
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-18,17371f, 125,9829f, 1444,402f), -215,4216f, 1, 1, 1);
				TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_323, -1.0f, 0, 0);
				Global_99147 = 1;
				iLocal_319 = 6;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/UNCLE_03/UNCLE_03"))
				{
					LOG_ERROR("/cutscene/UNCLE_03/UNCLE_03 cutscene does not exist");
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				iLocal_319 = 8;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_226(&iLocal_329);
				iLocal_319 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_273("$/cutscene/UNCLE_03/UNCLE_03", &iLocal_306, &Local_276, &iLocal_318, 115942, 61946, 56806, 115755, 115703, 115682, 0, 1, 1, 2, 2, 0, 1))
			{
			}
			break;
		
		case 0x00000008:
			if (Function_485())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_318();
				}
				iLocal_319 = 9;
			}
			break;
		
		case 0x00000009:
			Function_480();
			iLocal_318 = 0;
			iLocal_319 = 0;
			Function_477(&Local_276, &iLocal_318, &iLocal_319);
			Function_476(StackVal, StackVal, StackVal, StackVal, Function_318(), Local_276);
			switch (iLocal_318)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_476(struct<41> Param0) //Position: 0x1B8F6 / 112886
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_318 = 0;
			break;
		
		case 0x00000002:
			iLocal_318 = 101;
			break;
	}
}

void Function_477(int iParam0, int iParam1, int iParam2) //Position: 0x1B922 / 112930
{
	if (Function_285(&iParam0))
	{
		iParam1 = Function_479(&iParam0);
		if (iParam1 == 4294967295)
		{
			iParam1 = 0;
		}
		if (iParam1 == 99)
		{
			iParam1 = 0;
			iParam2 = 0;
		}
		Function_478();
	}
	return;
}

void Function_478() //Position: 0x1B95E / 112990
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

var Function_479(int iParam0) //Position: 0x1B9AF / 113071
{
	if (Function_285(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_480() //Position: 0x1B9C8 / 113096
{
	if (IS_LAYOUTREF_VALID(&iLocal_4))
	{
		uLocal_321 = CREATE_OBJECT_ITERATOR(&iLocal_4);
	}
	CAMERA_RESET(0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	DECOR_SET_BOOL(&Global_54076, "CanBeLasso", 0);
	SET_CRIPPLE_ENABLE(&bLocal_323, 0);
	SET_ACTOR_FACTION(&bLocal_323, 20);
	TASK_PRIORITY_SET(&bLocal_323, true);
	AI_BEHAVIOR_SET_ALLOW(&bLocal_323, 0, 0);
	SET_ACTOR_MAX_HEALTH(&bLocal_323, 50.0f);
	SET_ACTOR_HEALTH(&bLocal_323, GET_ACTOR_MAX_HEALTH(&bLocal_323));
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_323, false);
	RESET_ACTOR_GAITS(&bLocal_327, 0);
	TASK_PRIORITY_SET(&bLocal_327, true);
	TASK_STAND_STILL(&bLocal_327, -1.0f, 0, 0);
	SET_ACTOR_MAX_HEALTH(&bLocal_327, 50.0f);
	SET_ACTOR_HEALTH(&bLocal_327, GET_ACTOR_MAX_HEALTH(&bLocal_327));
	SET_ACTOR_UPDATE_PRIORITY(&bLocal_327, false);
	Function_484(&iLocal_384);
	Function_483();
	Function_484(&iLocal_329);
	Function_484(&fLocal_333);
	Function_484(&iLocal_337);
	Function_481(&uLocal_546, &iLocal_274);
	Function_384(&(Local_600[615]), &bLocal_441, "Son", 1, 0x5f5e100, 1);
	Function_384(&(Local_600[715]), &bLocal_443, "Wife", 1, 0x5f5e100, 1);
	Function_347(&bLocal_441, &iLocal_4 + 624[8], 1, 1, 1);
	Function_347(&bLocal_443, &iLocal_4 + 624[8], 1, 1, 1);
	return;
}

int Function_481(struct<2>[] Param0) //Position: 0x1BB07 / 113415
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_482(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_482(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_482(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_482(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_482(struct<13> Param0) //Position: 0x1C1E2 / 115170
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

void Function_483() //Position: 0x1C2B1 / 115377
{
	bool bVar0;
	
	bVar0 = 976;
	while (bVar0 < 1007)
	{
		if (GET_ACTORENUM_SPECIES(bVar0) == 23)
		{
			ADD_AMBIENT_SPAWN_TYPE_RESTRICTION(bVar0);
		}
		bVar0++;
	}
	return;
}

void Function_484(int iParam0) //Position: 0x1C2DC / 115420
{
	if (!Function_282(&iParam0))
	{
		Function_227(&iParam0, 0.0f);
	}
	return;
}

bool Function_485() //Position: 0x1C2F3 / 115443
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_308(1))
		{
			return 0;
		}
		if (!Function_315())
		{
			return 0;
		}
		if (!Function_309(&iLocal_288))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_323))
		{
			bLocal_323 = Function_299(13, 0, 1, 0, 0, 0, 0, 0, 0);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_323, true);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_323, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_441))
		{
			bLocal_441 = Function_299(12, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_441, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_443))
		{
			bLocal_443 = Function_299(11, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_443, 1))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_327))
		{
			bLocal_327 = Function_292(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&bLocal_327, 1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_486() //Position: 0x1C3E2 / 115682
{
	if (Function_317())
	{
		if (Function_290())
		{
			return 1;
		}
	}
	return 0;
}

int Function_487() //Position: 0x1C3F7 / 115703
{
	Function_321(1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1);
	Function_480();
	iLocal_318 = 0;
	iLocal_319 = 2;
	Function_477(&Local_276, &iLocal_318, &iLocal_319);
	Function_476(StackVal, StackVal, StackVal, StackVal, StackVal, Local_276);
	return 1;
}

int Function_488() //Position: 0x1C42B / 115755
{
	Function_473();
	Function_347(&bLocal_327, &iLocal_4 + 624[4], 1, 1, 1);
	Function_347(&bLocal_325, &iLocal_4 + 624[7], 1, 1, 1);
	TASK_STAND_STILL(&bLocal_327, -1.0f, 0, 0);
	if (IS_ACTOR_VALID(&bLocal_325))
	{
		TASK_STAND_STILL(&bLocal_325, -1.0f, 0, 0);
	}
	if (IS_ACTOR_VALID(&bLocal_323))
	{
		Function_359();
		bLocal_355 = TASK_SEQUENCE_OPEN();
		TASK_MOUNT(false, &bLocal_325, 0, 1, 2, 2147483647);
		TASK_FACE_ACTOR(0, &Global_54076, 0, 3212836864);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&bLocal_323, bLocal_355);
		TASK_SEQUENCE_RELEASE(bLocal_355, 1);
		ACTOR_POP_NEXT_GAIT(&bLocal_323, 1, 0);
		SET_ACTOR_MAX_SPEED(&bLocal_323, 4);
	}
	TASK_CLEAR(&Global_54076);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
	SIMULATE_PLAYER_INPUT_GAIT(0, 1, 5.0f, 0);
	return 1;
}

int Function_489() //Position: 0x1C4E6 / 115942
{
	Function_350(0);
	Function_338(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	Function_336(StackVal, &iLocal_274, *(&Global_6667[5628] + 88), &iLocal_306 + 32, 1, 0, 0, 0, 1, 1);
	Function_349();
	Function_192(1, 0, 1);
	Function_341(&iLocal_354, 0, 0, 4294967295, 4294967295);
	return 1;
}

void Function_490(int iParam0) //Position: 0x1C536 / 116022
{
	Function_491(&Global_43580, iParam0);
	return;
}

void Function_491(var uParam0, var uParam1) //Position: 0x1C544 / 116036
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_492() //Position: 0x1C56C / 116076
{
	Function_493(&iLocal_288, "home02ranch03", 10, 0);
	Function_493(&iLocal_288, "nminigames", 10, 0);
	return;
}

var Function_493(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x1C5A2 / 116130
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_494(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_313(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_494(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x1C5E0 / 116192
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_180(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_313(&(Param0[iVar02]), 4);
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

void Function_495(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x1C6AF / 116399
{
	AUDIO_MUSIC_FORCE_TRACK(&uParam0, Function_342(uParam1), &uParam2, &uParam3, &uParam4, &uParam5, &uParam6);
}

void Function_496(int iParam0, bool bParam1) //Position: 0x1C6D1 / 116433
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_502(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_285(&iParam0))
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
	if (!Function_285(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_216();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_245();
	Function_276();
	Function_234("");
	Function_501(0);
	Function_500();
	Function_209();
	Function_208();
	ENABLE_JOURNAL_REPLAY(0);
	Function_499();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_292(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_351(0, 0x40400000);
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
	Function_498(13);
	Function_498(14);
	Function_498(25);
	Function_498(24);
	Function_498(12);
	Function_498(27);
	Function_498(26);
	Function_498(15);
	Function_497();
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

void Function_497() //Position: 0x1CB11 / 117521
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

void Function_498(int iParam0) //Position: 0x1CB96 / 117654
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_499() //Position: 0x1CBB6 / 117686
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

void Function_500() //Position: 0x1CBFC / 117756
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_501(int iParam0) //Position: 0x1CC12 / 117778
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_212())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_502(int iParam0, int iParam1) //Position: 0x1CC4B / 117835
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
			Function_503(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_503(struct<113> Param0) //Position: 0x1CCD2 / 117970
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

void Function_504() //Position: 0x1CD30 / 118064
{
	return;
}

bool Function_505(int iParam0) //Position: 0x1CD36 / 118070
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_506(struct<25> Param0) //Position: 0x1CD54 / 118100
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!Param0.f_20)
					{
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!Param0.f_20)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
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
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
			}
			break;
		
		case 0x00000020:
		case 0x00000040:
		case 0x00000080:
		case 0x00000100:
		case 0x00000200:
		case 0x00000400:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000001:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					break;
				
				case 0x00000002:
					if (!Param0.f_20)
					{
						ABORT_SCRIPTED_CONVERSATION(0);
					}
					else
					{
						ABORT_SCRIPTED_CONVERSATION(0);
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
			Function_507(&Param0, 1);
			return 1;
		}
	}
	Function_507(&Param0, 0);
	return 0;
}

void Function_507(struct<25> Param0) //Position: 0x1CF34 / 118580
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

bool Function_508(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1CF5F / 118623
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
		Function_507(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_527(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_526(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_526(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_512(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_507(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_511(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_510(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_511(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_509(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_234(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_510(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_507(&Param2, 0);
	return 0;
}

void Function_509(char* cParam0) //Position: 0x1D375 / 119669
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

void Function_510(struct<25> Param0) //Position: 0x1D469 / 119913
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

void Function_511(bool bParam0) //Position: 0x1D4E1 / 120033
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_38(&iVar0, 1);
	Function_38(&iVar0, 2);
	Function_38(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_512(struct<57> Param0) //Position: 0x1D505 / 120069
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
			return Function_523(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_516(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_523(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_513(&Param0, bVar2);
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
						bVar2 = Function_523(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_513(&Param0, bVar2);
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

var Function_513(int iParam0, bool bParam1) //Position: 0x1D676 / 120438
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
				bParam1 = Function_515(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_514(16);
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
				bParam1 = Function_515(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_514(256);
			}
		}
	}
	return bParam1;
}

bool Function_514(int iParam0) //Position: 0x1D7B2 / 120754
{
	return 2 | iParam0;
}

int Function_515(int iParam0) //Position: 0x1D7BC / 120764
{
	return 4 | iParam0;
}

int Function_516(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1D7C6 / 120774
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
				iParam3 = Function_522(&iParam0, &iParam1, bParam4);
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
			return Function_514(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_517(&iParam0, &iParam1, 0, bParam4);
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
			return Function_514(16);
		}
	}
	return 0;
}

int Function_517(int iParam0, vector3 vParam1) //Position: 0x1D881 / 120961
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_521(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_520(iVar0, 3, 1, bParam3))
			{
				if (!Function_526(&iParam0, 8, 1))
				{
					return Function_519(64, 1024, bParam2);
				}
			}
			return Function_518(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_520(iVar0, 2, 1, bParam3))
			{
				if (!Function_526(&iParam0, 32, 1))
				{
					return Function_519(64, 1024, bParam2);
				}
			}
			return Function_518(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_520(iVar0, 1, 1, bParam3))
			{
				if (!Function_526(&iParam0, 64, 1))
				{
					return Function_519(64, 1024, bParam2);
				}
			}
			return Function_518(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_520(iVar0, 3, 1, bParam3))
			{
				if (!Function_526(&iParam0, 128, 1))
				{
					return Function_519(64, 1024, bParam2);
				}
			}
			return Function_518(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_520(iVar0, 1, 1, bParam3))
			{
				if (!Function_526(&iParam0, 1024, 1))
				{
					return Function_519(64, 1024, bParam2);
				}
			}
			return Function_518(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_520(iVar0, 1, 1, bParam3))
			{
				if (!Function_526(&iParam0, 1024, 1))
				{
					return Function_519(64, 1024, bParam2);
				}
			}
			return Function_518(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_518(int iParam0, int iParam1, bool bParam2) //Position: 0x1DA49 / 121417
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_519(int iParam0, int iParam1, bool bParam2) //Position: 0x1DA5E / 121438
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_520(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1DA73 / 121459
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_521(int iParam0) //Position: 0x1DA90 / 121488
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

int Function_522(var uParam0, vector3 vParam1) //Position: 0x1DB03 / 121603
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_521(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_520(iVar0, 3, 1, bParam2))
			{
				if (!Function_526(&uParam0, 8, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000009:
			if (Function_520(iVar0, 3, 1, bParam2))
			{
				if (!Function_526(&uParam0, 8, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x0000006E:
			if (Function_520(iVar0, 2, 1, bParam2))
			{
				if (!Function_526(&uParam0, 16, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x0000005B:
			if (Function_520(iVar0, 2, 1, bParam2))
			{
				if (!Function_526(&uParam0, 32, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000031:
			if (Function_520(iVar0, 1, 1, bParam2))
			{
				if (!Function_526(&uParam0, 64, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000007:
			if (Function_520(iVar0, 3, 1, bParam2))
			{
				if (!Function_526(&uParam0, 128, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000008:
			if (Function_520(iVar0, 2, 1, bParam2))
			{
				if (!Function_526(&uParam0, 256, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000014:
			if (Function_520(iVar0, 1, 1, bParam2))
			{
				if (!Function_526(&uParam0, 512, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000018:
			if (Function_520(iVar0, 1, 1, bParam2))
			{
				if (!Function_526(&uParam0, 512, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000057:
			if (Function_520(iVar0, 1, 1, bParam2))
			{
				if (!Function_526(&uParam0, 1024, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000058:
			if (Function_520(iVar0, 1, 1, bParam2))
			{
				if (!Function_526(&uParam0, 1024, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_523(struct<65> Param0) //Position: 0x1DD2C / 122156
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
						return Function_522(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_526(&Param0, 2, 1))
					{
						return Function_515(8);
					}
					return Function_514(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_526(&Param0, 4, 1))
					{
						return Function_515(16);
					}
					return Function_514(16);
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
							return Function_517(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_526(&Param0, 2, 1))
						{
							return Function_515(128);
						}
						return Function_514(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_526(&Param0, 4, 1))
						{
							return Function_515(256);
						}
						return Function_514(256);
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
						return Function_517(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_526(&Param0, 2, 1))
					{
						return Function_515(8);
					}
					return Function_514(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_526(&Param0, 4, 1))
					{
						return Function_515(16);
					}
					return Function_514(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_525(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_526(&Param0, 2, 1))
					{
						return Function_515(8);
					}
					return Function_514(8);
				}
				if (!Function_526(&Param0, 4, 1))
				{
					return Function_515(16);
				}
				return Function_514(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_517(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_77(&iParam4, 2);
								Function_38(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_524(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_514(128);
							}
							if (!Function_526(&Param0, 2, 1))
							{
								return Function_515(8);
							}
							return Function_514(8);
						}
						if (iParam4 == 2)
						{
							if (Function_524(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_514(256);
							}
							if (!Function_526(&Param0, 4, 1))
							{
								return Function_515(16);
							}
							return Function_514(16);
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

bool Function_524(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1E012 / 122898
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

int Function_525(int iParam0, vector3 vParam1) //Position: 0x1E0E0 / 123104
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_521(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_520(iVar0, 2, 1, bParam2))
			{
				if (!Function_526(&iParam0, 16, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x0000005B:
			if (Function_520(iVar0, 2, 1, bParam2))
			{
				if (!Function_526(&iParam0, 32, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000057:
			if (Function_520(iVar0, 1, 1, bParam2))
			{
				if (!Function_526(&iParam0, 1024, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		case 0x00000058:
			if (Function_520(iVar0, 1, 1, bParam2))
			{
				if (!Function_526(&iParam0, 1024, 1))
				{
					return Function_515(64);
				}
			}
			return Function_514(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_526(struct<69> Param0) //Position: 0x1E202 / 123394
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

int Function_527(bool bParam0) //Position: 0x1E22C / 123436
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

void Function_528(int iParam0, struct<5>[] Param1, var uParam2, int iParam3, float fParam4, bool bParam5) //Position: 0x1E262 / 123490
{
	float fVar0;
	
	if (!Function_282(&iParam0))
	{
		Function_484(&iParam0);
	}
	if (&iParam3 <= 0)
	{
		iParam3 = Param1;
	}
	if (uParam2 <= &iParam3)
	{
		if (uParam2 == 0)
		{
			fVar0 = 0.0f;
		}
		else
		{
			fVar0 = (StackVal + &fParam4);
		}
		if (Function_280(&iParam0) <= fVar0)
		{
			if (!Function_140() || Param1[uParam25].f_32)
			{
				while (Param1[uParam25].f_28)
				{
					uParam2++;
					if (uParam2 > Param1)
					{
						return;
					}
					PRINTSTRING(&(Param1[uParam25]));
					PRINTSTRING(" has been turned off, so we're not going to show it");
					PRINTNL();
				}
				if (IS_ACTOR_VALID(&Param1[uParam25] + 16))
				{
					if (Function_331(&Global_54076, &Param1[uParam25] + 16, Param1[uParam25].f_24))
					{
						Function_529(StackVal, &(Param1[uParam25]), Param1[uParam25].f_12);
					}
					else
					{
						PRINTSTRING("Player is ");
						Function_340(&Global_54076);
						Function_340(&Param1[uParam25] + 16);
						PRINTFLOAT(VDIST(Function_340(&Global_54076), Function_340(&Param1[uParam25] + 16)));
						PRINTSTRING("m away from sepaker. It's too far. Don't print the line: ");
						PRINTSTRING(&(Param1[uParam25]));
						PRINTNL();
					}
				}
				else
				{
					Function_529(StackVal, &(Param1[uParam25]), Param1[uParam25].f_12);
				}
				Function_226(&iParam0);
				if (&bParam5)
				{
					Param1[uParam25].f_28 = 1;
				}
				uParam2++;
			}
		}
	}
}

void Function_529(var uParam0, float fParam1, bool bParam2) //Position: 0x1E460 / 124000
{
	switch (&bParam2)
	{
		case 0x00000000:
			Function_530(&uParam0, fParam1, 0, 2, 1, 0);
			break;
		
		case 0x00000001:
			Function_139(&uParam0, fParam1, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000002:
			Function_366(&uParam0, fParam1, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG(&uParam0, fParam1, 0, 2, 0);
			break;
	}
	return;
}

void Function_530(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1E4C4 / 124100
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
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &Var0, &uParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uVar4, &uParam5);
	}
}

int Function_531() //Position: 0x1E549 / 124233
{
	if (IS_STRING_VALID(&uLocal_536))
	{
		if (Function_282(&iLocal_337))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!HUD_IS_SHOWING_SMALL_TEXT())
				{
					HUD_CLEAR_OBJECTIVE();
					HUD_CLEAR_OBJECTIVE_QUEUE();
					Function_376(&iLocal_337);
					Function_366(&uLocal_536, 0x40f00000, 1, 2, 0, 0, 0, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_532(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1E591 / 124305
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

