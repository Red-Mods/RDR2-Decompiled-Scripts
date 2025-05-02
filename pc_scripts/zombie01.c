//Decompiled with MagicRDR v1.0
//Function Count : 500
//Statics Count : 988
//Natives Count : 699
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
	var uLocal_44 = 3;
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
	var uLocal_60 = 2;
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
	var uLocal_72 = 1;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 1;
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
	var uLocal_96 = 3;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 6;
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
	var uLocal_122 = 2;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 6;
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
	var uLocal_170 = 6;
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
	var uLocal_186 = 3;
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
	var uLocal_206 = 3;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 6;
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
	var uLocal_254 = 6;
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
	int iLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	struct<6> Local_275 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	int iLocal_287 = 20;
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
	int iLocal_369 = 20;
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
	int iLocal_459 = 0;
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
	bool bLocal_471 = false;
	int iLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 13;
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
	struct<15> Local_530[3];
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 5;
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
	var uLocal_610 = 5;
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
	int iLocal_630[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_652 = false;
	bool bLocal_653 = false;
	bool bLocal_654 = false;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	float fLocal_657 = 0.0f;
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
	int iLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	char[] cLocal_679[4] = 0;
	var uLocal_680 = 0;
	char[] cLocal_681[4] = 0;
	var uLocal_682 = 0;
	char[] cLocal_683[4] = 0;
	var uLocal_684 = 0;
	char[] cLocal_685[4] = 0;
	var uLocal_686 = 0;
	int iLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	float fLocal_696 = 0.0f;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	float fLocal_700 = 0.0f;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	int iLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	int iLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	float fLocal_712 = 0.0f;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	int iLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	int iLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 8;
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
	var uLocal_755 = 2;
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
	var uLocal_767 = 2;
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
	var uLocal_778 = 0;
	var uLocal_779 = 2;
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
	var uLocal_791 = 1;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 5;
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
	var uLocal_833 = 5;
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
	var uLocal_847 = 5;
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
	var uLocal_879 = 5;
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
	var uLocal_893 = 6;
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
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	int iLocal_959 = 0;
	var uLocal_960 = 0;
	int iLocal_961 = 0;
	var uLocal_962 = 0;
	int iLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	int iLocal_968 = 0;
	bool bLocal_969 = false;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	float fLocal_972 = 0.0f;
	float fLocal_973 = 0.0f;
	float fLocal_974 = 0.0f;
	int iLocal_975 = 0;
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
	iLocal_272 = 0;
	Local_275 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_471 = 99;
	iLocal_472 = 6;
	iLocal_459 = 1000;
	Function_499(0);
	while (Function_215())
	{
		Function_174();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x48 / 72
{
	var uVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "nNoGrapple"))
	{
		DECOR_REMOVE(&Global_54076, "nNoGrapple");
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 272[02]))
	{
		DESTROY_ACTOR(&iLocal_4 + 272[02]);
	}
	if (IS_OBJECT_VALID(&uLocal_677))
	{
		DESTROY_OBJECT(&uLocal_677);
	}
	DECOR_REMOVE(&Global_44085[Global_46914[1]9] + 8, "bNoTerritoryMusicControl");
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_173(&uLocal_273);
	Function_173(&iLocal_4);
	Function_172();
	Function_144(bLocal_653, 0, 1, 0, 1, 1, 1, 1);
	Function_143(1);
	Function_139(&iLocal_287);
	if (bLocal_652)
	{
		Function_138(&iLocal_4 + 160[22]);
		Function_138(&iLocal_4 + 160[12]);
		Function_138(&iLocal_4 + 224[12]);
		Function_138(&iLocal_4 + 224[02]);
		Function_137(6, 1);
		Global_6663 = 0;
		HUD_ENABLE(1);
		if (IS_OBJECT_VALID(&iLocal_673))
		{
			DESTROY_OBJECT(&iLocal_673);
		}
		if (!iLocal_630[0])
		{
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(6, false, false));
		}
		if (!IS_ACTORSET_VALID(&iLocal_4 + 328))
		{
			Function_136();
		}
		if (IS_VOLUME_VALID(&iLocal_4 + 408[2]))
		{
			uVar0 = FIND_NAMED_LAYOUT("BeechersHope_layout");
			if (IS_LAYOUTREF_VALID(&uVar0))
			{
				GET_VOLUME_CENTER(&iLocal_4 + 408[2], &Var1);
				Var3.f_4 = GET_VOLUME_HEADING(&iLocal_4 + 408[2]);
				GET_VOLUME_SCALE(&iLocal_4 + 408[2], &Var5);
				CREATE_OBSTACLE_IN_LAYOUT(&uVar0, Function_135(), Var1, Var3, Var5);
			}
			else
			{
				LOG_ERROR("beecher's layout not valid!?");
			}
		}
	}
	Function_133();
	if (IS_ITERATOR_VALID(&uLocal_473))
	{
		DESTROY_ITERATOR(&uLocal_473);
	}
	RELEASE_LAYOUT_REF(&uLocal_273);
	if (bLocal_652)
	{
		Function_132(1);
		if (!ACTOR_HAS_WEAPON(&Global_54076, 16))
		{
			_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 12.0f, 0);
			Function_130(16, 0, 0);
		}
		if (!ACTOR_HAS_WEAPON(&Global_54076, 21))
		{
			Function_130(21, 0, 0);
		}
		if (!ACTOR_HAS_WEAPON(&Global_54076, 4))
		{
			_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, 24.0f, 0);
			Function_130(4, 0, 0);
		}
		SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
		if (IS_ACTOR_VALID(&iLocal_4 + 304[02]))
		{
			TASK_STAND_STILL(&iLocal_4 + 304[02], -1.0f, 0, 0);
			TASK_PRIORITY_SET(&iLocal_4 + 304[02], 2);
			AI_STOP_IGNORING_ACTOR(&iLocal_4 + 304[02]);
			SET_ACTOR_RIDEABLE(&iLocal_4 + 304[02], 1);
			Function_129(&Global_21369 + 72 + 32, 2);
			Function_128(&iLocal_4 + 304[02], 1);
			GIVE_OBJECT_TO_LAYOUT(&iLocal_4 + 304[02], FIND_NAMED_LAYOUT("PlayerLayout"));
		}
		DECOR_SET_BOOL(&Global_54076, "bFinishedFalseCutscene", true);
		DECOR_SET_FLOAT(&Global_54076, "fZombie01Completion", GET_CURRENT_GAME_TIME());
		ACTOR_START_FORCE_HOLSTER(&Global_54076, 1, 0);
		UI_HIDE("WeaponAmmo");
		UI_HIDE("WeaponAmmoClipMax");
		Function_27(Local_275, 1, 1, 1, 0);
		Function_26(0x8000000);
	}
	else if (bLocal_653)
	{
		Function_22(Local_275);
	}
	else
	{
		Function_2(Local_275);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x3AF / 943
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x3D0 / 976
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x3ED / 1005
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x410 / 1040
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x427 / 1063
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

void Function_7(int iParam0) //Position: 0x4C9 / 1225
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x4EC / 1260
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

void Function_9() //Position: 0x536 / 1334
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x54F / 1359
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

void Function_11(var uParam0, bool bParam1) //Position: 0x5A2 / 1442
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

struct<16> Function_12(int iParam0) //Position: 0x6CC / 1740
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

bool Function_13() //Position: 0x706 / 1798
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x721 / 1825
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x72E / 1838
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x74E / 1870
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x765 / 1893
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x780 / 1920
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9C7 / 2503
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x9F3 / 2547
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

bool Function_21(int iParam0) //Position: 0xA17 / 2583
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0xA2C / 2604
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0xA4A / 2634
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
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
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_24(int iParam0) //Position: 0xAF0 / 2800
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

struct<24> Function_25(char* cParam0) //Position: 0xB2F / 2863
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

void Function_26(bool bParam0) //Position: 0xD85 / 3461
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xDB2 / 3506
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	Function_3(12);
	Function_6(2);
	Function_4((15 - Function_5(105)));
	if (Function_17(bParam0) == 1)
	{
		iVar2 = Function_15(bParam0);
		Function_123(&(Global_6667[iVar228]));
		Function_143(4194304);
		if (&bParam3)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		else if (&bParam4)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		uVar1 = Function_121();
		if (&bParam1)
		{
			Function_99(iVar2, bParam0, uVar1);
			Function_98();
		}
	}
	Global_53524.f_64 = 0;
	Global_53524.f_68 = 0;
	Global_21684[bParam07].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_43(bParam0, &bParam1, &uParam2, uVar1);
	if (Function_17(bParam0) == 1)
	{
		if (&bParam1)
		{
		}
	}
	Function_29(0);
	iVar2 = Function_15(bParam0);
	if (iVar2 == 1)
	{
		Function_28("ZOMBIE_STORY_1_SHORT", (7,5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_28("ZOMBIE_STORY_4_SHORT", 7,5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_28(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xEC1 / 3777
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
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &fParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_29(int iParam0) //Position: 0xF56 / 3926
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_40(1, 0))
	{
		Function_38("ZOMBIE_STORY_1_OBJ");
		if (!Function_37(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_37(4) && !Function_35(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_37(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_38("ZOMBIE_STORY_2Nigel_OBJ");
		Function_38("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_37(8) && !Function_37(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_37(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_37(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_37(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_37(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_32(&Global_6667[228] + 184, 2) || ((((((Function_37(14) && Function_37(18)) && Function_37(37)) && Function_37(7)) && Function_37(11)) && Function_37(5)) && Function_37(21)))
	{
		Function_38("ZOMBIE_STORY_3_OBJ");
		if (!Function_40(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_40(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_38("ZOMBIE_STORY_4_OBJ");
		if (!Function_37(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_32(&Global_6667[328] + 184, 2) || ((Function_37(27) && Function_37(1)) && Function_37(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_38("ZOMBIE_STORY_5_OBJ");
		if (!Function_40(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_40(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_33(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_37(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[243].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[443].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[343].f_224);
		bVar1 = false;
		if (Function_37(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[243] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[243].f_224, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_37(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_37(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[443] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_31(Global_46948)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[443].f_224, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_31(Global_46948) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater3_OBJ", 4, 0);
			}
			if (Function_31(Global_46948) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_30(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_30(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_37(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_37(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_37(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[643].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[743].f_224);
		if (Function_37(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[643].f_224, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_37(6) && Function_31(Global_46949) < 0) && Function_31(Global_46951) < 0) && Function_31(Global_46952) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[643].f_224, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[743].f_224, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_37(11))
	{
		if (Function_37(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_99725[843].f_224);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_30(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_30(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_30(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_30(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_30(491) <= 5 && Function_30(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_37(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_37(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[1043].f_224, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(&bVar0))
	{
		Function_28(&bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_30(int iParam0) //Position: 0x1877 / 6263
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_31(bool bParam0) //Position: 0x18B8 / 6328
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

bool Function_32(int iParam0, int iParam1) //Position: 0x18D2 / 6354
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_33() //Position: 0x18EF / 6383
{
	return STRING_TO_HASH(Function_34());
}

var Function_34() //Position: 0x18FB / 6395
{
	return "ZOMBIE_STORY";
}

bool Function_35(int iParam0) //Position: 0x1910 / 6416
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_36(iParam0)7].f_12 < 0;
}

int Function_36(int iParam0) //Position: 0x1976 / 6518
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

bool Function_37(int iParam0) //Position: 0x1A38 / 6712
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_38(int iParam0) //Position: 0x1A4D / 6733
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_33(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_34(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_33(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_33(), &iParam0, 0, 3, false);
	Function_39(Function_33(), 0);
	return;
}

void Function_39(bool bParam0, bool bParam1) //Position: 0x1A96 / 6806
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

bool Function_40(int iParam0, bool bParam1) //Position: 0x1ABB / 6843
{
	int iVar0;
	
	iVar0 = Function_41(iParam0);
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

int Function_41(int iParam0) //Position: 0x1AF9 / 6905
{
	if (!Function_42(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_42(int iParam0) //Position: 0x1B13 / 6931
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_43(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1B29 / 6953
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
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
		if (Function_97())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_15(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_24(Global_10966) };
		}
		if (Function_97())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_93();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_97())
	{
		Function_92();
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
			Function_86(bParam0);
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
			Function_46(1);
			Function_45(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_44(bParam0, &Var14);
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

void Function_44(int iParam0, struct<41> Param1) //Position: 0x1D87 / 7559
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_45(var uParam0, int iParam1) //Position: 0x1DC5 / 7621
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_46(bool bParam0) //Position: 0x1E04 / 7684
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_76();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_47(&Global_99144, 1);
		Function_47(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x1E59 / 7769
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_48() //Position: 0x1E6F / 7791
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_56(0);
	Function_56(0);
	Function_53();
	Function_52();
	Function_51();
	Function_50();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_49();
	return;
}

void Function_49() //Position: 0x1EBA / 7866
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

void Function_50() //Position: 0x1FC0 / 8128
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

void Function_51() //Position: 0x1FF3 / 8179
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

void Function_52() //Position: 0x2186 / 8582
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

void Function_53() //Position: 0x233F / 9023
{
	Function_54(&Global_42918, 1, 0);
	return;
}

void Function_54(struct<2317> Param0) //Position: 0x234D / 9037
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
	
	uVar0 = Function_55();
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

var Function_55() //Position: 0x256A / 9578
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_56(int iParam0) //Position: 0x257F / 9599
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
					iVar2 = ((Function_30((50 + iVar4)) + Function_30((183 + iVar4))) + Function_30((90 + iVar4)));
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
	Function_57(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_57(int iParam0, bool bParam1, bool bParam2) //Position: 0x2626 / 9766
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
		Function_70(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_69(iParam0);
	if (&bParam2)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_58(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x28C2 / 10434
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_68(390))), 32);
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
					bVar19 = (Function_67(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_67(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_65(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_62(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_59(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_135(), &Var9);
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

var Function_59(int iParam0) //Position: 0x2F00 / 12032
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_60(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2F11 / 12049
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_61("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_61(char* cParam0) //Position: 0x3008 / 12296
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x3023 / 12323
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_64(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_63(Function_64(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_63(int iParam0, int iParam1) //Position: 0x308A / 12426
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_64(int iParam0, bool bParam1) //Position: 0x309C / 12444
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_65(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x30AE / 12462
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
	if (((Function_66(iParam0) != 19 || Function_66(iParam0) != 17) || Function_66(iParam0) != 10) || Function_66(iParam0) != 9)
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

int Function_66(int iParam0) //Position: 0x31E2 / 12770
{
	return Global_55480[iParam016].f_96;
}

float Function_67(int iParam0) //Position: 0x31F1 / 12785
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_68(int iParam0) //Position: 0x322A / 12842
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_69(int iParam0) //Position: 0x3267 / 12903
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x3401 / 13313
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

struct<8> Function_71() //Position: 0x3645 / 13893
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
		iVar2 = ((Function_30((50 + iVar3) + 15) + Function_30((183 + iVar3) + 15)) + Function_30((90 + iVar3) + 15));
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
	Function_57(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x36CE / 14030
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
			iVar2 = ((Function_30((50 + iVar3) + 8) + Function_30((183 + iVar3) + 8)) + Function_30((90 + iVar3) + 8));
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
	Function_57(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x3765 / 14181
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
		iVar2 = ((Function_30((50 + iVar3)) + Function_30((183 + iVar3))) + Function_30((90 + iVar3)));
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
	Function_57(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_74() //Position: 0x37E4 / 14308
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_75(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_57(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x3821 / 14369
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
	Function_70(iParam0, bParam1, 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_58(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_76() //Position: 0x3A2D / 14893
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_83(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_83(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_78(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_77(StackVal, Var0))
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

bool Function_77(vector3 vParam0) //Position: 0x3AE4 / 15076
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_78(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x3AFC / 15100
{
	int iVar0;
	
	iVar0 = Function_81(&uParam2, &fParam3);
	if (Function_80(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_129(&Global_99144, 1);
			Function_47(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_129(&Global_99144, 2);
			Function_47(&Global_99144, 1);
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
		Function_129(&Global_99144, 2);
		Function_47(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_79();
	return StackVal, Function_79();
}

struct<8> Function_79() //Position: 0x3BF4 / 15348
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_80(int iParam0) //Position: 0x3BFE / 15358
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_81(bool bParam0, bool bParam1) //Position: 0x3C14 / 15380
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
				fVar2 = Function_82(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_82(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_80(iVar0) && !&bParam1)
	{
		iVar0 = Function_81(&bParam0, 1);
	}
	return iVar0;
}

float Function_82(struct<2> Param0, struct<2> Param2) //Position: 0x3CE0 / 15584
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_83(float fParam0, int iParam1) //Position: 0x3CFD / 15613
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_85(&Global_54076, &Var3);
	if (!Function_84(Global_46760[0]))
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
	if (!Function_84(Global_46760[2]))
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
	if (!Function_84(Global_46760[1]))
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
	if (!Function_84(Global_46796[1]))
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
	if (!Function_84(Global_46796[3]))
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
	if (!Function_84(Global_46796[2]))
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
	if (!Function_84(Global_46796[4]))
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
	if (!Function_84(Global_46816[0]))
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
	if (!Function_84(Global_46816[1]))
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
	if (!Function_84(Global_46816[2]))
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
	if (!Function_84(Global_46838[0]))
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
	if (!Function_84(Global_46850[0]))
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
	if (!Function_84(Global_46850[1]))
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
	if (!Function_84(Global_46850[2]))
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
	if (!Function_84(Global_46866[0]))
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
	if (!Function_84(Global_46866[1]))
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
	if (!Function_84(Global_46866[2]))
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
	if (!Function_84(Global_46894[2]))
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
	if (!Function_84(Global_46894[3]))
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
	if (!Function_84(Global_46894[0]))
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
	if (!Function_84(Global_46914[0]))
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
	if (!Function_84(Global_46926[2]))
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
	if (!Function_84(Global_46926[1]))
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
	if (!Function_84(Global_46926[0]))
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
	if (!Function_84(Global_46838[1]))
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
	if (!Function_84(Global_46894[1]))
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
	Function_129(&Global_99144, 2);
	Function_47(&Global_99144, 1);
	iParam1 = 0;
	if (Function_77(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_84(int iParam0) //Position: 0x4529 / 17705
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_85(var uParam0, int iParam1) //Position: 0x4564 / 17764
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_86(bool bParam0) //Position: 0x4573 / 17779
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
				Function_90(12, 1, 0, 0);
				Function_89(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_90(13, 1, 0, 0);
				Function_89(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_90(14, 1, 0, 0);
				Function_89(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_90(15, 1, 0, 0);
				Function_89(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_90(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_31(bParam0) == 1)
					{
						iVar0 = Function_88(bParam0);
						if (Function_87(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_89(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_89(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_89(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_89(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_89(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_89(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_89(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_89(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_89(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_89(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_89(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_89(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_89(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_89(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_89(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_89(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_89(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_89(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_89(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_89(4, 19);
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
								Function_90(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_90(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_90(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_88(bParam0) == 0)
			{
				if (Function_31(bParam0) == 1)
				{
					Function_90(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_87(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_89(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_89(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_89(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_89(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_89(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_89(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_89(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_89(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_31(bParam0) == 1)
			{
				Function_90(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_90(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_89(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_89(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_89(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_90(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_89(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_89(6, 9);
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

bool Function_87(int iParam0) //Position: 0x4A4F / 19023
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_88(bool bParam0) //Position: 0x4A65 / 19045
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_89(int iParam0, int iParam1) //Position: 0x4A84 / 19076
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

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4AEE / 19182
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
	Function_70(iParam0, TO_FLOAT(bParam1), 1);
	Function_69(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_58(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_91(iParam0);
	return 1;
}

void Function_91(int iParam0) //Position: 0x4D16 / 19734
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

void Function_92() //Position: 0x4DB4 / 19892
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
	PLAYSTAT_INT("HC_MONEY", Function_30(0));
	PLAYSTAT_INT("HC_FAME", Function_30(3));
	PLAYSTAT_INT("HC_HONOR", Function_30(1));
	return;
}

void Function_93() //Position: 0x4F16 / 20246
{
	int iVar0;
	int iVar1;
	
	if (!Function_42(Global_10966))
	{
		return;
	}
	iVar0 = Function_30(24);
	iVar1 = Function_41(Global_10966);
	if (!Function_42(iVar0) && Function_96(iVar1) < 0)
	{
		Function_57(24, Global_10966, 0);
		Function_94(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_96(Function_41(iVar0)))
	{
		Function_57(24, Global_10966, 0);
		Function_94(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_94(int iParam0, char* cParam1) //Position: 0x4F96 / 20374
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
		Function_95(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x52ED / 21229
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

int Function_96(int iParam0) //Position: 0x5375 / 21365
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_97() //Position: 0x538F / 21391
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_98() //Position: 0x53BA / 21434
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

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x53E8 / 21480
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
	
	if (!Function_42(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_120(iParam0);
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
				bVar0 = (Function_30(42) - Global_53524.f_168);
				bVar1 = (Function_30(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_68(49)) - Global_53524.f_176);
				bVar3 = (Function_30(49) - Global_53524.f_180);
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
				bVar4 = (Function_30(355) - Global_53524.f_168);
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
		iVar15 = Function_119(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_100(50, 1, 0);
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

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x5684 / 22148
{
	int iVar0;
	bool bVar1;
	
	if (Function_118(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_97())
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
	iVar0 = Function_30(3);
	Function_115();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_113(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_112(Global_119936, 4))
			{
				Function_107(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_90(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_67(3));
	iVar0 = Function_30(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_102(4, Function_106(Global_21369.f_248), 1);
				Function_101(Global_21369.f_244, Global_21369.f_248);
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

void Function_101(int iParam0, int iParam1) //Position: 0x5858 / 22616
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

int Function_102(int iParam0, char* cParam1) //Position: 0x5AC2 / 23234
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
	Function_94(iParam0, &cParam1, 0, 1);
	iVar1 = Function_103();
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

int Function_103() //Position: 0x5C52 / 23634
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
	Function_104();
	return 0;
}

void Function_104() //Position: 0x5CF3 / 23795
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
		Function_105(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_105(int iParam0) //Position: 0x5DB1 / 23985
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

var Function_106(int iParam0) //Position: 0x5E17 / 24087
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

void Function_107(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5EA6 / 24230
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_109(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_108(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_108(char* cParam0) //Position: 0x5F1B / 24347
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

bool Function_109(int iParam0, var uParam1, int iParam2) //Position: 0x5F55 / 24405
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
		if (Function_111(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_110(uVar0))
		{
			case 0x00000002:
				if (!Function_112(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_110(char* cParam0) //Position: 0x5FD1 / 24529
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

int Function_111(int iParam0) //Position: 0x6072 / 24690
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_47(&bVar1, 2147483648);
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

bool Function_112(var uParam0, int iParam1) //Position: 0x60AF / 24751
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_113(int iParam0, bool bParam1) //Position: 0x60C2 / 24770
{
	bool bVar0;
	int iVar1;
	
	Function_90(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_114(iParam0, 4294967295);
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
	iVar1 = Function_103();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_114(int iParam0, int iParam1) //Position: 0x626E / 25198
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

void Function_115() //Position: 0x62B3 / 25267
{
	Function_117(3, 0.0f);
	Function_116(3, 10000.0f);
	return;
}

int Function_116(int iParam0, int iParam1) //Position: 0x62C9 / 25289
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_117(int iParam0, int iParam1) //Position: 0x6309 / 25353
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_118(int iParam0) //Position: 0x6349 / 25417
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_119(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x6358 / 25432
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

int Function_120(int iParam0) //Position: 0x6520 / 25888
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

var Function_121() //Position: 0x65B5 / 26037
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x65DA / 26074
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_42(iParam0))
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
			Function_130(21, &bParam2, 0);
			Function_130(16, &bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, true);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_123(struct<185> Param0) //Position: 0x667C / 26236
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
			Function_124(4, 0, 0);
		}
	}
	return;
}

void Function_124(bool bParam0, int iParam1, int iParam2) //Position: 0x66E7 / 26343
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
		Function_125(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_125(bool bParam0, bool bParam1, bool bParam2) //Position: 0x67D1 / 26577
{
	int iVar0;
	
	Function_127(bParam0);
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
	Function_126();
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

void Function_126() //Position: 0x6950 / 26960
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_127(int iParam0) //Position: 0x695C / 26972
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

void Function_128(var uParam0, int iParam1) //Position: 0x69A2 / 27042
{
	DECOR_SET_OBJECT(&Global_54076, "SettingPlayerHorse", &uParam0);
	DECOR_SET_BOOL(&Global_54076, "NewPlayerHorse_Wipe", &iParam1);
	return;
}

void Function_129(bool bParam0, bool bParam1) //Position: 0x69E9 / 27113
{
	bParam0 = (bParam0 || bParam1);
	return;
}

int Function_130(bool bParam0, bool bParam1, int iParam2) //Position: 0x69FA / 27130
{
	if (!Function_131(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_55(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_55(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_55(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_131(int iParam0) //Position: 0x6A54 / 27220
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_132(bool bParam0) //Position: 0x6A66 / 27238
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

void Function_133() //Position: 0x6ADD / 27357
{
	Function_134();
	return;
}

void Function_134() //Position: 0x6AE6 / 27366
{
	Function_139(&iLocal_4 + 8);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

var Function_135() //Position: 0x6AF9 / 27385
{
	var uVar0;
	
	return &uVar0;
}

void Function_136() //Position: 0x6B02 / 27394
{
	*(&iLocal_4 + 328) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "Horsegroupset", 0);
	*(&iLocal_4 + 304[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerHorse01", 976, Vector(-66,56144f, 116,8679f, 1414,94f), Vector(0.0f, -26,54678f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 328, &iLocal_4 + 304[02]);
	ACCESSORIZE_HORSE(&iLocal_4 + 304[02], 3);
	return;
}

void Function_137(int iParam0, int iParam1) //Position: 0x6B80 / 27520
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_39290[iParam0] = &iParam1;
	return;
}

void Function_138(int iParam0) //Position: 0x6B9E / 27550
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			if (GET_ATTACHED_HOGTIE_VICTIM(&Global_54076) == &iParam0)
			{
				FREE_FROM_HOGTIE(&iParam0);
			}
		}
		DESTROY_ACTOR(&iParam0);
	}
	return;
}

void Function_139(int iParam0) //Position: 0x6BCF / 27599
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_140(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_140(struct<2>[] Param0, int iParam1) //Position: 0x6BF7 / 27639
{
	if (Function_142(&(Param0[iParam12]), 4))
	{
		if (Function_142(&(Param0[iParam12]), 1))
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
			Function_141(&(Param0[iParam12]), 1);
			Function_141(&(Param0[iParam12]), 2);
			Function_141(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_141(struct<13> Param0) //Position: 0x6D42 / 27970
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_142(struct<13> Param0) //Position: 0x6D5F / 27999
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_143(bool bParam0) //Position: 0x6D7D / 28029
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

void Function_144(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x6DB1 / 28081
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_171());
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
	Function_170();
	CLEAR_PRINTED_OBJECTIVE();
	Function_169();
	Function_167(0);
	Function_166();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_165();
	Function_164();
	Function_170();
	ENABLE_JOURNAL_REPLAY(1);
	Function_132(1);
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
		Function_163(&Global_54076);
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
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	}
	RESET_PLAYER_TARGET_WEIGHT();
	AUDIO_CLEAR_PLAYER_DISABLED_CONTEXT_LIST();
	CLEAR_ALL_AMBIENT_SPAWN_TYPE_RESTRICTIONS();
	SET_ACTOR_CHARACTER_CLOTH_SCALED_PINNING(&Global_54076, 1.0f);
	Function_159(Global_42825);
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
	Function_158();
	Function_26(1178687);
	Function_156(33039);
	Function_155(0x218003f);
	Function_154(4194560);
	Function_153();
	Function_152();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_147(0, 1, 1);
	}
	else
	{
		Function_147(0, 1, 1);
	}
	Function_145();
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
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_47(&Global_21369 + 72 + 32, 16);
}

void Function_145() //Position: 0x6FBA / 28602
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_146(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_146(var uParam0, int iParam1) //Position: 0x6FE4 / 28644
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_147(int iParam0, bool bParam1, int iParam2) //Position: 0x6FFE / 28670
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
		if (Function_87(Global_43789))
		{
			Function_151(&(Global_43791[Global_43789]), 131072);
			Function_146(&(Global_43791[Global_43789]), 2097152);
			Function_149(Global_43789);
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
				if (Function_148(&(Global_43791[iVar0]), 4) || Function_148(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_146(&(Global_43791[iVar0]), 2097155);
					Function_151(&(Global_43791[iVar0]), 262144);
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

bool Function_148(var uParam0, int iParam1) //Position: 0x710A / 28938
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_149(int iParam0) //Position: 0x7127 / 28967
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_150())
			{
				return;
			}
		}
		if (!Function_148(&(Global_43791[iParam0]), 2048))
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

bool Function_150() //Position: 0x71A6 / 29094
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_148(&(Global_43791[iVar0]), 4) || Function_148(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_151(var uParam0, int iParam1) //Position: 0x720F / 29199
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_152() //Position: 0x7220 / 29216
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

void Function_153() //Position: 0x7246 / 29254
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

void Function_154(int iParam0) //Position: 0x726C / 29292
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_155(int iParam0) //Position: 0x7289 / 29321
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_156(int iParam0) //Position: 0x729C / 29340
{
	Function_157(&Global_43580, iParam0);
	return;
}

void Function_157(var uParam0, var uParam1) //Position: 0x72AA / 29354
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_158() //Position: 0x72C9 / 29385
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

void Function_159(int iParam0) //Position: 0x7341 / 29505
{
	int iVar0;
	int iVar1;
	
	if (!Function_162(iParam0))
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
		Function_160(78, 1, 1);
		if (!Function_112(Global_119935, 64))
		{
			Function_107(&Global_54076, 64, 2, 0);
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

int Function_160(bool bParam0, bool bParam1, int iParam2) //Position: 0x7477 / 29815
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_161(bParam0), Function_55()) == 0)
		{
			ADD_ITEM(Function_161(bParam0), Function_55(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_161(bParam0), Function_55(), &iParam2);
	return 1;
}

var Function_161(bool bParam0) //Position: 0x74C5 / 29893
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

bool Function_162(int iParam0) //Position: 0x75B9 / 30137
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_163(var uParam0) //Position: 0x75CF / 30159
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Called ACTOR_NO_LONGER_REQUIRES_HORSE_ALWAYS with invalid actor");
		return;
	}
	CLEAR_ACTORS_HORSE(&uParam0);
	if (IS_OBJECTSET_VALID(&Global_26170))
	{
		if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26170);
		}
	}
	return;
}

void Function_164() //Position: 0x7652 / 30290
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

void Function_165() //Position: 0x7696 / 30358
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

void Function_166() //Position: 0x76DA / 30426
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_167(int iParam0) //Position: 0x76F0 / 30448
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_168())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_168() //Position: 0x7730 / 30512
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

void Function_169() //Position: 0x7755 / 30549
{
	Global_15862 = 0.0f;
	return;
}

void Function_170() //Position: 0x775F / 30559
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

int Function_171() //Position: 0x778A / 30602
{
	var uVar0;
	
	uVar0 = Function_55();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_172() //Position: 0x77A7 / 30631
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_173(int iParam0) //Position: 0x77B0 / 30640
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

void Function_174() //Position: 0x7818 / 30744
{
	var uVar0[5];
	int iVar6;
	
	if (Function_214())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Uncle";
		uVar0[3] = "Jack and Abigail";
		uVar0[4] = "Final Cutscene";
		iVar6 = Function_200(&uLocal_451, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_199(&iVar6, &bLocal_471, &iLocal_472, &iLocal_459))
		{
			Function_192();
			Function_191();
		}
		if (iVar6 == 0)
		{
			SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 0);
			Function_160(20, 0, 0);
			Function_190(1, 1);
			Function_190(3, 1);
			Function_192();
			Function_191();
			Function_189(&bLocal_652, 8);
		}
		else if (iVar6 == 1)
		{
			Function_192();
			Function_191();
			Function_184(bLocal_471);
			Function_176(StackVal, 5, &bLocal_653, &bLocal_471, Function_187(bLocal_471), Function_184(bLocal_471), 0);
		}
		else if (iVar6 == 2)
		{
			Function_192();
			Function_191();
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_471 = false;
			iLocal_472 = 0;
			iLocal_459 = 1000;
		}
		else if (iVar6 == 3)
		{
			Function_192();
			Function_191();
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_471 = true;
			iLocal_472 = 0;
			iLocal_459 = 1000;
		}
		else if (iVar6 == 4)
		{
			Function_192();
			Function_191();
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_471 = 101;
			iLocal_472 = 0;
			iLocal_459 = 1000;
		}
	}
	return;
}

void Function_175(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x797E / 31102
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

void Function_176(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x79A8 / 31144
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_181(StackVal, Param4, uParam3, &iParam6);
		Function_177(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_177(int iParam0) //Position: 0x79E9 / 31209
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_180("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_179(2) || Function_179(8)) || Function_179(9)) || Function_179(10))
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
		Function_180("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_180("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_180("");
	}
	else if (iParam0 == 8)
	{
		Function_178();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_178();
	}
	return;
}

void Function_178() //Position: 0x7AE0 / 31456
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_179(int iParam0) //Position: 0x7AEC / 31468
{
	int iVar0;
	
	if (!Function_42(iParam0))
	{
		return 0;
	}
	iVar0 = Function_41(iParam0);
	if (!Function_20(Function_41(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_180(char* cParam0) //Position: 0x7B22 / 31522
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_181(struct<2> Param0, var uParam2, var uParam3) //Position: 0x7B8E / 31630
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_183(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_182(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_182(int iParam0) //Position: 0x7C10 / 31760
{
	if (!Function_87(iParam0))
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
	if (iParam0 != Global_46736[2])
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

var Function_183(struct<2> Param0, bool bParam2) //Position: 0x80BF / 32959
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

struct<8> Function_184(int iParam0) //Position: 0x812B / 33067
{
	Function_185(iParam0 + 1);
	return StackVal, Function_185(iParam0 + 1);
}

struct<8> Function_185(int iParam0) //Position: 0x8138 / 33080
{
	iParam0 = iParam0;
	Function_186(&iLocal_4 + 664[0]);
	return StackVal, Function_186(&iLocal_4 + 664[0]);
}

struct<8> Function_186(bool bParam0) //Position: 0x814E / 33102
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

int Function_187(int iParam0) //Position: 0x8177 / 33143
{
	return Function_188(iParam0 + 1);
}

int Function_188(int iParam0) //Position: 0x8184 / 33156
{
	iParam0 = iParam0;
	return GET_OBJECT_HEADING(&iLocal_4 + 664[0]);
}

void Function_189(bool bParam0, int iParam1) //Position: 0x819A / 33178
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_177(&iParam1);
	bParam0 = 1;
	return;
}

void Function_190(bool bParam0, bool bParam1) //Position: 0x81BF / 33215
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

void Function_191() //Position: 0x8345 / 33605
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_192() //Position: 0x835A / 33626
{
	Function_194();
	Function_193(10, 3);
	return;
}

void Function_193(int iParam0, int iParam1) //Position: 0x8369 / 33641
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

void Function_194() //Position: 0x84B6 / 33974
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_198())
	{
		Function_197(10, 3);
	}
	else
	{
		Function_195();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_55(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_55());
	UI_POP("nDebugMenu");
	return;
}

void Function_195() //Position: 0x8501 / 34049
{
	Function_196(25, 2);
	return;
}

void Function_196(int iParam0, int iParam1) //Position: 0x850D / 34061
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

void Function_197(int iParam0, int iParam1) //Position: 0x8739 / 34617
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

bool Function_198() //Position: 0x8886 / 34950
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

bool Function_199(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x88EE / 35054
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_192();
			Function_191();
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
		Function_180("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_200(struct<17> Param0) //Position: 0x899D / 35229
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_213(&Var12, &Var0);
	uVar15 = Function_212(uParam1, &Var12);
	Function_211(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_210(&Param0, uVar15);
	Function_208(StackVal, &Param0, Var12.f_12);
	Function_206(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_205(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_202(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_201(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_201(int iParam0, int iParam1, int iParam2) //Position: 0x8A91 / 35473
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

bool Function_202(struct<17> Param0) //Position: 0x8AF1 / 35569
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
				Function_204(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_204(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_201(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_203(Param1.f_64);
	}
	else
	{
		Function_203(Param1.f_64);
	}
	return 0;
}

void Function_203(bool bParam0) //Position: 0x8C84 / 35972
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

void Function_204(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x8CC2 / 36034
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

var Function_205(int iParam0, struct<21> Param1) //Position: 0x8D78 / 36216
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_206(vector3 vParam0) //Position: 0x8D9F / 36255
{
	switch (Function_207())
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

int Function_207() //Position: 0x8E4B / 36427
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

void Function_208(vector3 vParam0) //Position: 0x8E87 / 36487
{
	switch (Function_209(&vParam0))
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

int Function_209(bool bParam0) //Position: 0x8F30 / 36656
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_129(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_129(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_47(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_129(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_129(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_47(&bParam0, 0x20000000);
	return 0;
}

var Function_210(struct<21> Param0) //Position: 0x9050 / 36944
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

void Function_211(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x920A / 37386
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

var Function_212(int iParam0, struct<13> Param1) //Position: 0x92A6 / 37542
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_213(struct<17> Param0) //Position: 0x92C2 / 37570
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

bool Function_214() //Position: 0x931C / 37660
{
	return Global_47307;
}

bool Function_215() //Position: 0x9325 / 37669
{
	if (IS_EXITFLAG_SET())
	{
		Function_184(bLocal_471);
		Function_176(StackVal, 4, &bLocal_653, &bLocal_471, Function_187(bLocal_471), Function_184(bLocal_471), 0);
		return 0;
	}
	Function_498(StackVal, StackVal, StackVal, StackVal, StackVal, Local_275, bLocal_471, iLocal_472, &bLocal_654, &bLocal_652, &bLocal_653);
	if (bLocal_471 == 99 && bLocal_471 == 100)
	{
		if (Function_477(&Local_530, &uLocal_476, &uLocal_622, &uLocal_473, uLocal_475))
		{
			Function_184(bLocal_471);
			Function_176(StackVal, 5, &bLocal_653, &bLocal_471, Function_187(bLocal_471), Function_184(bLocal_471), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_184(bLocal_471);
			Function_176(StackVal, 1, &bLocal_653, &bLocal_471, Function_187(bLocal_471), Function_184(bLocal_471), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_184(bLocal_471);
			Function_176(StackVal, 2, &bLocal_653, &bLocal_471, Function_187(bLocal_471), Function_184(bLocal_471), 0);
			return 1;
		}
		if (IS_ACTOR_DEAD(&uLocal_665))
		{
			Function_180("Zombie01_COMPANION_DEAD");
			Function_184(bLocal_471);
			Function_176(StackVal, 5, &bLocal_653, &bLocal_471, Function_187(bLocal_471), Function_184(bLocal_471), 0);
			return 1;
		}
		Function_476();
	}
	switch (bLocal_471)
	{
		case 0x00000063:
			Function_364();
			break;
		
		case 0x00000000:
			Function_348();
			break;
		
		case 0x00000001:
			Function_303();
			break;
		
		case 0x00000065:
			Function_219();
			break;
		
		case 0x00000064:
			if (Function_218(&bLocal_653))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_217(&bLocal_471, &iLocal_472, &iLocal_459))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_652)
	{
		Function_189(&bLocal_652, 8);
		Function_1();
		return 0;
	}
	if (bLocal_653 && bLocal_471 == 100)
	{
		Function_184(bLocal_471);
		Function_176(StackVal, 5, &bLocal_653, &bLocal_471, Function_187(bLocal_471), Function_184(bLocal_471), 0);
	}
	if (bLocal_654)
	{
		Function_216(&bLocal_654, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_216(var uParam0, int iParam1) //Position: 0x94DA / 38106
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_177(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_217(var uParam0, var uParam1, int iParam2) //Position: 0x94FF / 38143
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

bool Function_218(int iParam0) //Position: 0x9548 / 38216
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_219() //Position: 0x955C / 38236
{
	switch (iLocal_472)
	{
		case 0x00000000:
			Function_299(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(6, false, false));
			if (!iLocal_630[1])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				iLocal_472 = 1;
			}
			else
			{
				iLocal_472 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_472 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_472 = 3;
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/OUTBREAK_4_PT_a_cs/OUTBREAK_4_PT_a_cs", &iLocal_459, &Local_275, &bLocal_471, 58622, 58615, 58608, 58601, 58373, 58366, 0, 2, 1, 1, 2, 0, 1))
			{
				if (IS_OBJECT_VALID(&iLocal_673))
				{
					DESTROY_OBJECT(&iLocal_673);
				}
				SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 0);
				Function_160(20, 0, 0);
				Function_190(1, 1);
				Function_190(3, 1);
				_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, 24.0f, 0);
				Function_130(4, 0, 0);
				Function_130(21, 0, 0);
				_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 12.0f, 0);
				Function_130(16, 0, 0);
				ACTOR_SET_NEXT_WEAPON(&Global_54076, 16);
				Function_138(&iLocal_4 + 160[22]);
				Function_138(&iLocal_4 + 160[12]);
				Function_279(&fLocal_657);
				iLocal_472 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_277(&fLocal_657) < 1.0f)
			{
				if (Function_280("$/cutscene/OUTBREAK_4_PT_b_cs/OUTBREAK_4_PT_b_cs", &iLocal_459, &Local_275, &bLocal_471, 53627, 58615, 47831, 40518, 58373, 58366, 0, 2, 1, 2, 2, 0, 1))
				{
					uLocal_669 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("BeechersHope_layout"), Function_135(), 1204, Vector(-116,61f, 118,87f, 1374,64f), Vector(0.0f, 85.0f, 0.0f));
					ACTOR_ENABLE_VARIABLE_MESH(&uLocal_669, 23, false);
					ACTOR_ENABLE_VARIABLE_MESH(&uLocal_669, 29, true);
					ACTOR_ENABLE_VARIABLE_MESH(&uLocal_669, 30, false);
					SET_ANIM_SET_FOR_ACTOR(&uLocal_669, "DLC_outbreak_dead", 0);
					SET_ACTION_NODE_FOR_ACTOR(&uLocal_669, "DLC_outbreak_dead");
					SET_ACTOR_HEALTH(&uLocal_669, 0.0f);
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&uLocal_669), true);
					SUSPEND_MOVER(&uLocal_669);
					Function_225(0, 1);
					Function_221(1);
					Function_137(6, 1);
					Global_6663 = 0;
					HUD_ENABLE(1);
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					Function_220(1.0f);
					Function_279(&fLocal_657);
					iLocal_472 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			bLocal_652 = true;
			break;
	}
	return;
}

void Function_220(bool bParam0) //Position: 0x9810 / 38928
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

void Function_221(bool bParam0) //Position: 0x982D / 38957
{
	char[] cVar0[4];
	
	cVar0 = Function_224(Global_46914[1], "beechersHope", "stable01", 97);
	if (IS_OBJECT_VALID(&cVar0))
	{
		if (!IS_DOOR_LOCKED(&cVar0))
		{
			Function_223(&cVar0, 0);
		}
		if (IS_DOOR_OPENED(&cVar0))
		{
			CLOSE_DOOR_FAST(&cVar0);
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01 door97");
	}
	cVar0 = Function_224(Global_46914[1], "beechersHope", "stable01", 97);
	if (IS_OBJECT_VALID(&cVar0))
	{
		if (!IS_DOOR_LOCKED(&cVar0))
		{
			Function_223(&cVar0, 0);
		}
		if (IS_DOOR_OPENED(&cVar0))
		{
			CLOSE_DOOR_FAST(&cVar0);
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01 door97");
	}
	cVar0 = Function_224(Global_46914[1], "beechersHope", "stable01props", 1);
	if (IS_OBJECT_VALID(&cVar0))
	{
		if (&bParam0)
		{
			if (IS_DOOR_LOCKED(&cVar0))
			{
				Function_222(&cVar0, 0);
			}
			if (!IS_DOOR_OPENED(&cVar0))
			{
				OPEN_DOOR_DIRECTION(&cVar0, 0);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(&cVar0))
			{
				Function_223(&cVar0, 0);
			}
			if (IS_DOOR_OPENED(&cVar0))
			{
				CLOSE_DOOR_FAST(&cVar0);
			}
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01props door01");
	}
	cVar0 = Function_224(Global_46914[1], "beechersHope", "stable01props", 2);
	if (IS_OBJECT_VALID(&cVar0))
	{
		if (&bParam0)
		{
			if (IS_DOOR_LOCKED(&cVar0))
			{
				Function_222(&cVar0, 0);
			}
			if (!IS_DOOR_OPENED(&cVar0))
			{
				OPEN_DOOR_DIRECTION(&cVar0, 1);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(&cVar0))
			{
				Function_223(&cVar0, 0);
			}
			if (IS_DOOR_OPENED(&cVar0))
			{
				CLOSE_DOOR_FAST(&cVar0);
			}
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01props door02");
	}
	cVar0 = Function_224(Global_46914[1], "beechersHope", "stable01props", 3);
	if (IS_OBJECT_VALID(&cVar0))
	{
		if (&bParam0)
		{
			if (IS_DOOR_LOCKED(&cVar0))
			{
				Function_222(&cVar0, 0);
			}
			if (!IS_DOOR_OPENED(&cVar0))
			{
				OPEN_DOOR_DIRECTION(&cVar0, 1);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(&cVar0))
			{
				Function_223(&cVar0, 0);
			}
			if (IS_DOOR_OPENED(&cVar0))
			{
				CLOSE_DOOR_FAST(&cVar0);
			}
		}
	}
	else
	{
		LOG_ERROR("couldn't find stable01props door03");
	}
	return;
}

void Function_222(char* cParam0, int iParam1) //Position: 0x9B1F / 39711
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

void Function_223(char* cParam0, int iParam1) //Position: 0x9B77 / 39799
{
	if (!IS_DOOR_VALID(&cParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&cParam0, "lockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&cParam0, "unlockMe"))
	{
		DECOR_REMOVE(&cParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(&cParam0))
	{
		SET_DOOR_LOCK(&cParam0, 1);
	}
	return;
}

int Function_224(int iParam0, char* cParam1, bool bParam3) //Position: 0x9BD2 / 39890
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_87(iParam0))
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

void Function_225(bool bParam0, bool bParam1) //Position: 0x9C77 / 40055
{
	if (!IS_OBJECT_VALID(&cLocal_679))
	{
		cLocal_679 = Function_224(Global_46914[1], "beechersHope", "house01", 2);
	}
	if (!IS_OBJECT_VALID(&cLocal_681))
	{
		cLocal_681 = Function_224(Global_46914[1], "beechersHope", "house01", 5);
	}
	if (!IS_OBJECT_VALID(&cLocal_683))
	{
		cLocal_683 = Function_224(Global_46914[1], "beechersHope", "house01", 1);
	}
	if (!IS_OBJECT_VALID(&cLocal_685))
	{
		cLocal_685 = Function_224(Global_46914[1], "beechersHope", "house01", 3);
	}
	if (IS_OBJECT_VALID(&cLocal_679))
	{
		if (&bParam0)
		{
			if (IS_DOOR_LOCKED(&cLocal_679))
			{
				Function_222(&cLocal_679, 0);
			}
			if (!IS_DOOR_OPENED(&cLocal_679))
			{
				OPEN_DOOR_DIRECTION(&cLocal_679, 1);
			}
		}
		else
		{
			if (!IS_DOOR_LOCKED(&cLocal_679))
			{
				Function_223(&cLocal_679, 0);
			}
			if (IS_DOOR_OPENED(&cLocal_679))
			{
				CLOSE_DOOR_FAST(&cLocal_679);
			}
			if (!&bParam1)
			{
				SET_DOOR_LOCK_VISIBLE(&cLocal_679, 0);
			}
			else
			{
				SET_DOOR_LOCK_VISIBLE(&cLocal_679, 1);
			}
		}
	}
	if (IS_OBJECT_VALID(&cLocal_681))
	{
		if (IS_DOOR_LOCKED(&cLocal_681))
		{
			Function_222(&cLocal_681, 0);
		}
		if (!IS_DOOR_OPENED(&cLocal_681))
		{
			OPEN_DOOR_DIRECTION(&cLocal_681, 1);
		}
	}
	if (IS_OBJECT_VALID(&cLocal_683))
	{
		if (!IS_DOOR_LOCKED(&cLocal_683))
		{
			Function_223(&cLocal_683, 0);
		}
		if (IS_DOOR_OPENED(&cLocal_683))
		{
			CLOSE_DOOR_FAST(&cLocal_683);
		}
	}
	if (IS_OBJECT_VALID(&cLocal_685))
	{
		if (!IS_DOOR_LOCKED(&cLocal_685))
		{
			Function_223(&cLocal_685, 0);
		}
		if (IS_DOOR_OPENED(&cLocal_685))
		{
			CLOSE_DOOR_FAST(&cLocal_685);
		}
	}
	return;
}

int Function_226() //Position: 0x9E46 / 40518
{
	switch (bLocal_471)
	{
		case 0x00000063:
			Function_241();
			return 1;
			break;
		
		case 0x00000001:
			Function_229();
			Function_228(0, &iLocal_4 + 408[5]);
			return 1;
			break;
		
		case 0x00000065:
			Function_227(&Global_54076, &iLocal_4 + 808[1], 1, 1, 1);
			ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 4, 1);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1073741824, 0);
			Function_228(0, &iLocal_4 + 368[1]);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_227(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x9ECC / 40652
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			if (GET_OBJECT_TYPE(&uParam1) == 8)
			{
				GET_OBJECT_POSITION(&uParam1, &Var0);
				GET_OBJECT_ORIENTATION(&uParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &iParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_228(bool bParam0, var uParam1) //Position: 0x9FDC / 40924
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iLocal_4);
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar1))
	{
		if (GET_OBJECT_TYPE(&uVar1) == 29)
		{
			if (bParam0)
			{
				if (IS_VOLUME_VALID(&uParam1))
				{
					if (IS_OBJECT_IN_VOLUME(&uVar1, &uParam1))
					{
						HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar1));
					}
				}
				else
				{
					HIDE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar1));
				}
			}
			else if (IS_VOLUME_VALID(&uParam1))
			{
				if (IS_OBJECT_IN_VOLUME(&uVar1, &uParam1))
				{
					SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar1));
				}
			}
			else
			{
				SHOW_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar1));
			}
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_229() //Position: 0xA07F / 41087
{
	var uVar0;
	var uVar1;
	
	Function_240(0, 0);
	Function_227(&Global_54076, &iLocal_4 + 1000[3], 1, 1, 1);
	Function_130(21, 0, 0);
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 21, 1);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 2, false);
	SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	if (!IS_ACTOR_VALID(&iLocal_4 + 336[02]))
	{
		Function_239();
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 296))
	{
		Function_238();
	}
	SET_PATH_LOOPING(&iLocal_4 + 1064, 1);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_4 + 272[02], &iLocal_4 + 1064, 4, 1, 0, 0, false);
	TASK_OVERRIDE_SET_MOVESPEED_ABSOLUTE(&iLocal_4 + 272[02], 7.0f);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 272[02], true);
	SET_ACTOR_FACTION(&iLocal_4 + 272[02], 20);
	MEMORY_CONSIDER_AS(&iLocal_4 + 272[02], &Global_54076, false);
	if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
	{
		DESTROY_ACTOR(&iLocal_4 + 160[12]);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 160[22]))
	{
		DESTROY_ACTOR(&iLocal_4 + 160[22]);
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 264))
	{
		Function_237();
		Function_236(&iLocal_4 + 264, 0, 3212836864, 0, 1);
	}
	Function_227(&iLocal_4 + 224[02], &iLocal_4 + 1000[2], 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 224[02], 1);
	TASK_MELEE_ATTACK(&iLocal_4 + 224[02], &Global_54076, -1.0f);
	SET_ACTOR_FACTION(&iLocal_4 + 224[02], 32);
	MEMORY_CONSIDER_AS_ENEMY(&iLocal_4 + 224[02], &Global_54076);
	MEMORY_FORCE_MELEE(&iLocal_4 + 224[02], 1);
	MEMORY_PREFER_MELEE(&iLocal_4 + 224[02], 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 224[02], 0, true);
	CLEAR_LINKED_ANIM_TARGET(&iLocal_4 + 224[02]);
	MEMORY_CONSIDER_AS(&iLocal_4 + 224[02], &Global_54076, 4);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 224[02], true);
	DECOR_SET_BOOL(&iLocal_4 + 224[02], "bDisableCutFree", true);
	DECOR_SET_BOOL(&iLocal_4 + 224[02], "ActionArea_DisableHogtie", true);
	UNK_0x99AFD2D1(&iLocal_4 + 224[02], 1, 0);
	TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 224[02], true);
	Function_235(&iLocal_4 + 224[02], &iLocal_4 + 1000[3]);
	if (!HUD_IS_FADED())
	{
		ACTOR_POP_NEXT_GAIT(&iLocal_4 + 224[02], 2, false);
	}
	if (Function_234(&Local_275))
	{
		CREATE_DECAL(0, (&iLocal_4 + 512[53]), 0,25f, 1, 1);
		uVar0 = CREATE_CORPSE_IN_LAYOUT_RANDOM(StackVal, &uLocal_273, Function_135(), 1228, *(&iLocal_4 + 512[43]), Vector(0.0f, 0.0f, 0.0f), "dead_ground_male");
		PROP_ENABLE_VARIABLE_MESH(GET_PHYSINST_FROM_OBJECT(&uVar0), 23, 0);
		PROP_ENABLE_VARIABLE_MESH(GET_PHYSINST_FROM_OBJECT(&uVar0), 29, 1);
		PROP_ENABLE_VARIABLE_MESH(GET_PHYSINST_FROM_OBJECT(&uVar0), 30, 0);
	}
	if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 224[02])))
	{
		uVar1 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 224[02], 322, 0f, 2, 0);
		SET_BLIP_NAME(&uVar1, "Zombie01_Blip_Wife");
		SET_BLIP_IMPAIRMENT_MASK(&uVar1, 2048);
	}
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 224[02], true);
	AI_BEHAVIOR_SET_ALLOW(&iLocal_4 + 224[02], 0, 0);
	DECOR_SET_BOOL(&iLocal_4 + 224[02], "nNoGrapple", true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 224[02]);
	uLocal_690 = CREATE_EVENT_TRAP(Function_135(), 47, &iLocal_4 + 224[02]);
	EVENT_TRAP_ON_TARGET(&uLocal_690, &iLocal_4 + 224[02]);
	EVENT_TRAP_STORE_EVENTS(&uLocal_690, 1);
	uLocal_694 = CREATE_EVENT_TRAP(Function_135(), 50, &iLocal_4 + 224[02]);
	EVENT_TRAP_ON_TARGET(&uLocal_694, &iLocal_4 + 224[02]);
	EVENT_TRAP_STORE_EVENTS(&uLocal_694, 1);
	*(&iLocal_4 + 224[12]) = &iLocal_4 + 224[12];
	Function_227(&iLocal_4 + 224[12], &iLocal_4 + 1000[1], 1, 1, 1);
	RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 224[12], 1);
	TASK_MELEE_ATTACK(&iLocal_4 + 224[12], &iLocal_4 + 272[02], -1.0f);
	SET_ACTOR_FACTION(&iLocal_4 + 224[12], 32);
	MEMORY_CONSIDER_AS_ENEMY(&iLocal_4 + 224[12], &Global_54076);
	MEMORY_FORCE_MELEE(&iLocal_4 + 224[12], 1);
	MEMORY_PREFER_MELEE(&iLocal_4 + 224[12], 1);
	CLEAR_LINKED_ANIM_TARGET(&iLocal_4 + 224[12]);
	MEMORY_CONSIDER_AS(&iLocal_4 + 224[12], &Global_54076, 4);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 224[12], true);
	DECOR_SET_BOOL(&iLocal_4 + 224[12], "bDisableCutFree", true);
	DECOR_SET_BOOL(&iLocal_4 + 224[12], "ActionArea_DisableHogtie", true);
	UNK_0x99AFD2D1(&iLocal_4 + 224[12], 1, 0);
	TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 224[12], true);
	if (!HUD_IS_FADED())
	{
		ACTOR_POP_NEXT_GAIT(&iLocal_4 + 224[12], 2, false);
	}
	Function_230(&iLocal_4 + 224[12], &iLocal_4 + 272[02]);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 160[22], 1);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iLocal_4 + 160[22], 1);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 224[12], true);
	uLocal_688 = CREATE_EVENT_TRAP(Function_135(), 47, &iLocal_4 + 224[12]);
	EVENT_TRAP_ON_TARGET(&uLocal_688, &iLocal_4 + 224[12]);
	EVENT_TRAP_STORE_EVENTS(&uLocal_688, 1);
	uLocal_692 = CREATE_EVENT_TRAP(Function_135(), 50, &iLocal_4 + 224[12]);
	EVENT_TRAP_ON_TARGET(&uLocal_692, &iLocal_4 + 224[12]);
	EVENT_TRAP_STORE_EVENTS(&uLocal_692, 1);
	AI_BEHAVIOR_SET_ALLOW(&iLocal_4 + 224[12], 0, 0);
	DECOR_SET_BOOL(&iLocal_4 + 224[12], "nNoGrapple", true);
	MEMORY_REPORT_POSITION_AUTO(&iLocal_4 + 224[12], &Global_54076, true);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 224[12]);
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SUSPENSE_HIGH", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_230(int iParam0, int iParam1) //Position: 0xA62C / 42540
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_231(StackVal, &iParam0, Var0);
	return;
}

void Function_231(int iParam0, struct<2> Param1) //Position: 0xA648 / 42568
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&iParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_232(&iParam0, &iParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_232(GET_MOUNT(&iParam0), &iParam0, Param1), 1);
	}
	return;
}

var Function_232(int iParam0, struct<2> Param1) //Position: 0xA683 / 42627
{
	struct<2> Var0;
	
	Function_233(&iParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_233(&iParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_233(int iParam0) //Position: 0xA704 / 42756
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_234(struct<37> Param0) //Position: 0xA716 / 42774
{
	return Param0.f_36;
}

void Function_235(var uParam0, int iParam1) //Position: 0xA721 / 42785
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(&iParam1, &Var0);
	Function_231(StackVal, &uParam0, Var0);
	return;
}

void Function_236(var uParam0, bool bParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xA73A / 42810
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			if (&bParam1)
			{
				TASK_CROUCH(&uVar1, &uParam2);
			}
			else
			{
				TASK_STAND_STILL(&uVar1, &uParam2, &uParam3, 0);
			}
			TASK_PRIORITY_SET(&uVar1, &bParam4);
		}
		bVar0++;
	}
}

void Function_237() //Position: 0xA7B5 / 42933
{
	*(&iLocal_4 + 264) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "FamilyZombie"));
	*(&iLocal_4 + 224[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WifeZombie", 1231, Vector(-90,09449f, 118,018f, 1391,062f), Vector(-0,09691571f, -132,5405f, 0,1070698f));
	SQUAD_JOIN(&iLocal_4 + 224[02], &iLocal_4 + 264);
	TASK_STAND_STILL(&iLocal_4 + 224[02], -1.0f, 0, 0);
	*(&iLocal_4 + 224[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nSonZombie", 1280, Vector(-109,7439f, 117,718f, 1401,836f), Vector(0.0f, -25,95586f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 224[12], &iLocal_4 + 264);
	TASK_STAND_STILL(&iLocal_4 + 224[12], -1.0f, 0, 0);
	return;
}

void Function_238() //Position: 0xA88A / 43146
{
	*(&iLocal_4 + 296) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "RufusGroup"));
	*(&iLocal_4 + 272[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Rufus", 1041, Vector(-105,253f, 117,8735f, 1395,675f), Vector(0.0f, -0,5905757f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 272[02], &iLocal_4 + 296);
	return;
}

void Function_239() //Position: 0xA8F0 / 43248
{
	*(&iLocal_4 + 360) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "IntroWagonset", 0);
	*(&iLocal_4 + 336[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DisabledWagon", 1196, Vector(-80,62669f, 116,8944f, 1428f), Vector(0.0f, -137,8341f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 360, &iLocal_4 + 336[02]);
	ENABLE_VEHICLE_SEAT(&iLocal_4 + 336[02], false, 0);
	ENABLE_VEHICLE_SEAT(&iLocal_4 + 336[02], true, 0);
	return;
}

void Function_240(int iParam0, bool bParam1) //Position: 0xA97E / 43390
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	uVar1 = GET_PLAYER_ACTOR(&iParam0);
	if (IS_ACTOR_VALID(&uVar1))
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar1);
		bVar0 = false;
		while (bVar0 < (7 - 1))
		{
			DELETE_WEAPON_FROM_ACTOR(&uVar1, GET_WEAPON_EQUIPPED(&uVar1, bVar0));
			bVar0++;
		}
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player weapons");
		PRINTNL();
		if (&bParam1)
		{
			DELETE_ALL_INVENTORY_FROM_ACTOR(&uVar1);
			PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Took away player inventory");
			PRINTNL();
		}
	}
	else
	{
		PRINTSTRING("REMOVE_WEAPONS_FROM_PLAYER: Player actor not valid!");
	}
	return;
}

void Function_241() //Position: 0xAA85 / 43653
{
	bool bVar0;
	
	Function_299(0);
	if (!IS_ACTOR_VALID(&iLocal_4 + 336[02]))
	{
		Function_239();
	}
	if (!IS_ACTORSET_VALID(&iLocal_4 + 328))
	{
		Function_136();
		TASK_STAND_STILL(&iLocal_4 + 304[02], -1.0f, 0, 0);
		TASK_PRIORITY_SET(&iLocal_4 + 304[02], true);
		AI_IGNORE_ACTOR(&iLocal_4 + 304[02]);
		SET_ACTOR_RIDEABLE(&iLocal_4 + 304[02], 0);
	}
	if (!SQUAD_IS_VALID(&iLocal_4 + 216))
	{
		Function_254();
	}
	Function_227(&iLocal_4 + 160[02], &iLocal_4 + 664[4], 1, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 160[02], -1.0f, 0, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 160[02]);
	SET_ACTOR_FACTION(&iLocal_4 + 160[02], 32);
	SET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 160[02], "DLC_uncle_roar", 0);
	bVar0 = TASK_SEQUENCE_OPEN();
	TASK_ACTION_PERFORM(false, "z_dlc_z_roar");
	TASK_STAND_STILL(false, 1.0f, 0, 0);
	TASK_ACTION_PERFORM(false, "z_dlc_z_roar");
	TASK_GO_NEAR_ACTOR(0, &Global_54076, 2.0f, 1);
	TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 160[02], bVar0);
	TASK_SEQUENCE_RELEASE(bVar0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iLocal_4 + 160[02], 0, true);
	TASK_OVERRIDE_SET_MOVETYPE(&iLocal_4 + 160[02], true);
	if (Function_234(&Local_275) && HUD_IS_FADED())
	{
		Function_227(&iLocal_4 + 160[12], &iLocal_4 + 664[3], 1, 1, 1);
		if (!IS_OBJECT_VALID(&uLocal_675))
		{
			uLocal_675 = CREATE_GRINGO_IN_LAYOUT(&uLocal_273, Function_135(), "DLC_Outbreak3", *(&iLocal_4 + 512[33]), *(&iLocal_4 + 512[33] + 12));
			SNAP_OBJECT_TO_GROUND(&uLocal_675, 1.0f, true, 1092616192);
			CREATE_DECAL(0, *(&iLocal_4 + 512[53]), 0,25f, 1, 1);
		}
		SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 160[12], &uLocal_675, "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&iLocal_4 + 160[12], GET_GRINGO_FROM_OBJECT(&uLocal_675), "UseCase1", 4294967295, 1);
		SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_4 + 160[12]), true);
	}
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 160[12]);
	SET_ACTOR_FACTION(&iLocal_4 + 160[12], 20);
	Function_247(&(Local_530[015]), &iLocal_4 + 160[12], "Zombie01_wife", 0, 0x5f5e100, 1);
	Function_227(&iLocal_4 + 160[22], &iLocal_4 + 664[2], 1, 1, 1);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 160[22]);
	uLocal_671 = CREATE_GRINGO_IN_LAYOUT(&uLocal_273, Function_135(), "wringhands_no_cry", *(&iLocal_4 + 512[23]), *(&iLocal_4 + 512[23] + 12));
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 160[22]);
	SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 160[22], &uLocal_671, "UseCase1", true, 0, 0);
	TASK_USE_GRINGO(&iLocal_4 + 160[22], GET_GRINGO_FROM_OBJECT(&uLocal_671), "UseCase1", 4294967295, 1);
	SET_DRAW_ACTOR(&iLocal_4 + 160[22], 1);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_4 + 160[22], 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iLocal_4 + 160[22], 0);
	Function_247(&(Local_530[115]), &iLocal_4 + 160[22], "Zombie01_son", 0, 0x5f5e100, 1);
	Function_227(&Global_54076, &iLocal_4 + 664[1], 1, 1, 1);
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "rfl_brk", 0);
	DELETE_WEAPON_FROM_ACTOR(&Global_54076, 4);
	_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 12.0f, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 16, 0);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 1);
	DECOR_SET_BOOL(&Global_54076, "nNoGrapple", true);
	RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
	Function_245(&uLocal_476, &uLocal_273);
	Function_225(1, 1);
	Function_221(0);
	AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
	if (!Function_244(&fLocal_700))
	{
		Function_242(&fLocal_700);
	}
	return;
}

void Function_242(int iParam0) //Position: 0xAE8C / 44684
{
	if (!Function_244(&iParam0))
	{
		Function_243(&iParam0, 0.0f);
	}
	return;
}

void Function_243(vector3 vParam0) //Position: 0xAEA3 / 44707
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_129(&vParam0, 1);
	Function_47(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_244(int iParam0) //Position: 0xAEC8 / 44744
{
	return Function_14(iParam0, 1);
}

int Function_245(struct<2>[] Param0) //Position: 0xAED6 / 44758
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_246(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_246(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_246(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_246(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_246(struct<13> Param0) //Position: 0xB5AF / 46511
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
	Function_129(&Param0 + 12, bParam4);
	return 1;
}

int Function_247(struct<69> Param0) //Position: 0xB67E / 46718
{
	if (!Function_253(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_252(&Param0, &uParam2))
	{
		return 0;
	}
	Function_251(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_248(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_248(var uParam0, int iParam1, int iParam2) //Position: 0xB6C4 / 46788
{
	if (iParam1 != 100000000)
	{
		Function_250(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_249(&uParam0, &iParam2);
	}
	return;
}

void Function_249(struct<69> Param0) //Position: 0xB6EB / 46827
{
	Param0.f_68 = 0;
	Function_250(&Param0, 2, &bParam1);
	Function_250(&Param0, 4, &bParam1);
	Function_250(&Param0, 8, &bParam1);
	Function_250(&Param0, 16, &bParam1);
	Function_250(&Param0, 32, &bParam1);
	Function_250(&Param0, 64, &bParam1);
	Function_250(&Param0, 128, &bParam1);
	Function_250(&Param0, 256, &bParam1);
	Function_250(&Param0, 512, &bParam1);
	Function_250(&Param0, 1024, &bParam1);
	return;
}

void Function_250(int iParam0, int iParam1, bool bParam2) //Position: 0xB766 / 46950
{
	bool bVar0;
	
	Function_129(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_129(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_47(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_129(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_251(struct<65> Param0) //Position: 0xB7A5 / 47013
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_252(int iParam0, char* cParam1) //Position: 0xB7B2 / 47026
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

bool Function_253(struct<61> Param0) //Position: 0xB83F / 47167
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

void Function_254() //Position: 0xB9F2 / 47602
{
	*(&iLocal_4 + 216) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Family"));
	*(&iLocal_4 + 160[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Uncle", 1228, Vector(-98,81227f, 119,4985f, 1354,129f), Vector(-179,8569f, -59,82616f, 179,8575f));
	SQUAD_JOIN(&iLocal_4 + 160[02], &iLocal_4 + 216);
	*(&iLocal_4 + 160[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Wife", 1276, Vector(-101,8319f, 119,5159f, 1357,251f), Vector(0.0f, -32,68151f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 160[12], &iLocal_4 + 216);
	*(&iLocal_4 + 160[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Son", 1279, Vector(-107,2941f, 119,53f, 1368,686f), Vector(0.0f, 133,9471f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 160[22], &iLocal_4 + 216);
	return;
}

int Function_255() //Position: 0xBAD7 / 47831
{
	switch (bLocal_471)
	{
		case 0x00000063:
			if (!Function_268() && !Function_262(&iLocal_287))
			{
				return 0;
			}
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
			}
			return 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				if (!DECOR_CHECK_EXIST(&iLocal_4 + 160[02], "bCutHidden"))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 160[02]);
					DECOR_SET_BOOL(&iLocal_4 + 160[02], "bCutHidden", true);
				}
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 304[02]))
			{
				if (!DECOR_CHECK_EXIST(&iLocal_4 + 304[02], "bCutHidden"))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 304[02]);
					DECOR_SET_BOOL(&iLocal_4 + 304[02], "bCutHidden", true);
				}
			}
			break;
		
		case 0x00000065:
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
			{
				Function_256();
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_256() //Position: 0xBBDA / 48090
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_ACTORS())
	{
		uVar1 = CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR(bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (Function_257(&uVar1))
			{
				Function_79();
				uVar2 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_135(), "blood_zombie_shotgun_exit", "head", &uVar1, Function_79(), &uVar1);
				if (IS_OBJECT_VALID(&uVar2))
				{
					Function_79();
					UNK_0x6745191B(&uVar2, Function_79());
				}
				ACTOR_ENABLE_VARIABLE_MESH(&uVar1, 23, false);
				ACTOR_ENABLE_VARIABLE_MESH(&uVar1, 29, true);
				ACTOR_ENABLE_VARIABLE_MESH(&uVar1, 30, false);
				return;
			}
		}
		bVar0++;
	}
	return;
}

bool Function_257(int iParam0) //Position: 0xBC72 / 48242
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1254)
	{
		return 1;
	}
	if (Function_258(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

bool Function_258(int iParam0, int iParam1) //Position: 0xBCC1 / 48321
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

var Function_259() //Position: 0xBD06 / 48390
{
	var uVar0;
	
	Function_261(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Zombie01_layout");
	*(&iLocal_4 + 400) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CutsceneVol_set");
	*(&iLocal_4 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene02Vol", 2,802597E-45f, Vector(-120.0f, 118,8691f, 1381,029f), Vector(41,33096f, -90,91557f, -39,58593f), Vector(32,10567f, 12,2545f, 38,76885f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 400, &iLocal_4 + 368[0]);
	*(&iLocal_4 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CutsceneLastVol", 2,802597E-45f, Vector(-99,0854f, 120,6755f, 1355,911f), Vector(177,7992f, -147,8449f, -178,5149f), Vector(5,495292f, 3,567515f, 5,933247f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 400, &iLocal_4 + 368[1]);
	*(&iLocal_4 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Cutscene01Vol", 2,802597E-45f, Vector(-103,3133f, 122,7773f, 1364,703f), Vector(0.0f, -32,11531f, 0.0f), Vector(45,93721f, 12,84925f, 54,25098f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 400, &iLocal_4 + 368[2]);
	*(&iLocal_4 + 464) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageOneVolumes_set");
	*(&iLocal_4 + 408[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Obj02VolReturn", 2,802597E-45f, Vector(-95,63145f, 122,7773f, 1392,872f), Vector(0.0f, -32,11531f, 0.0f), Vector(157,1402f, 33,40461f, 121,1155f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 408[0]);
	*(&iLocal_4 + 408[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Obj02VolFail", 2,802597E-45f, Vector(-95,63145f, 122,7773f, 1392,872f), Vector(0.0f, -32,11531f, 0.0f), Vector(245,3514f, 52,15641f, 189,1042f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 408[1]);
	*(&iLocal_4 + 408[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HorseRestrict", 2,802597E-45f, Vector(-67,38859f, 117,8693f, 1406,081f), Vector(0.0f, -25,32704f, 0.0f), Vector(1.0f, 3,628846f, 2,012245f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 408[2]);
	*(&iLocal_4 + 408[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFrontDoor", 2,802597E-45f, Vector(-111,7704f, 120,4601f, 1366,87f), Vector(0.0f, -31,57249f, 0.0f), Vector(1,36704f, 3,266641f, 2,05411f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 408[3]);
	*(&iLocal_4 + 408[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BackDoor", 2,802597E-45f, Vector(-101,0252f, 120,3626f, 1350,905f), Vector(0.0f, -31,57249f, 0.0f), Vector(1,36704f, 3,266641f, 2,42411f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 408[4]);
	*(&iLocal_4 + 408[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nHideUncle", 2,802597E-45f, Vector(-113,0215f, 119,947f, 1377,137f), Vector(0.0f, -31,57249f, 0.0f), Vector(5,561775f, 3,969853f, 5,410573f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 464, &iLocal_4 + 408[5]);
	*(&iLocal_4 + 496) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "StageOneConvoVols_set");
	*(&iLocal_4 + 472[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "JacksBedroom", 2,802597E-45f, Vector(-106,3705f, 120,2085f, 1367,589f), Vector(0.0f, -31,57249f, 0.0f), Vector(4,690285f, 4,913627f, 3,616837f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 496, &iLocal_4 + 472[0]);
	*(&iLocal_4 + 472[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "InsideHouse", 2,802597E-45f, Vector(-105,8779f, 118,8691f, 1359,17f), Vector(0.0f, -31,57249f, 0.0f), Vector(13,43062f, 7,856521f, 18,16065f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 496, &iLocal_4 + 472[1]);
	*(&iLocal_4 + 504) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 512[03]) = Vector(-97,40059f, 119,521f, 1355,153f);
	*(&iLocal_4 + 512[03] + 12) = Vector(0.0f, 436,7617f, 0.0f);
	*(&iLocal_4 + 664[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart01", Vector(-97,40059f, 119,521f, 1355,153f), Vector(0.0f, 436,7617f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 664[0], &iLocal_4 + 504);
	*(&iLocal_4 + 512[13]) = Vector(-118,237f, 118,9235f, 1371,51f);
	*(&iLocal_4 + 512[13] + 12) = Vector(0.0f, -147,6835f, 0.0f);
	*(&iLocal_4 + 664[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEnd01", Vector(-118,237f, 118,9235f, 1371,51f), Vector(0.0f, -147,6835f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 664[1], &iLocal_4 + 504);
	*(&iLocal_4 + 512[23]) = Vector(-107,3499f, 119,5209f, 1368,729f);
	*(&iLocal_4 + 512[23] + 12) = Vector(0.0f, 497,1168f, 0.0f);
	*(&iLocal_4 + 664[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "SonEnd01", Vector(-107,3499f, 119,5209f, 1368,729f), Vector(0.0f, 497,1168f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 664[2], &iLocal_4 + 504);
	*(&iLocal_4 + 512[33]) = Vector(-113,4363f, 119,0699f, 1376,616f);
	*(&iLocal_4 + 512[33] + 12) = Vector(0.0f, -159,1188f, 0.0f);
	*(&iLocal_4 + 664[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nWifeEnd01", Vector(-113,4363f, 119,0699f, 1376,616f), Vector(0.0f, -159,1188f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 664[3], &iLocal_4 + 504);
	*(&iLocal_4 + 512[43]) = Vector(-115,66f, 118,9023f, 1376,9f);
	*(&iLocal_4 + 512[43] + 12) = Vector(0.0f, 24,69647f, 0.0f);
	*(&iLocal_4 + 664[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "UncleEnd01", Vector(-115,66f, 118,9023f, 1376,9f), Vector(0.0f, 24,69647f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 664[4], &iLocal_4 + 504);
	*(&iLocal_4 + 512[53]) = Vector(-113,6092f, 118,9506f, 1377,039f);
	*(&iLocal_4 + 512[53] + 12) = Vector(0.0f, -159,1188f, 0.0f);
	*(&iLocal_4 + 664[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "WifeEnd01Blood", Vector(-113,6092f, 118,9506f, 1377,039f), Vector(0.0f, -159,1188f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 664[5], &iLocal_4 + 504);
	*(&iLocal_4 + 720) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 728[03]) = Vector(-111,9167f, 119,4843f, 1367,233f);
	*(&iLocal_4 + 728[03] + 12) = Vector(-0,4908393f, 693,2698f, 0,960059f);
	*(&iLocal_4 + 808[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStartLast", Vector(-111,9167f, 119,4843f, 1367,233f), Vector(-0,4908393f, 693,2698f, 0,960059f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[0], &iLocal_4 + 720);
	*(&iLocal_4 + 728[13]) = Vector(-115,942f, 118,869f, 1385,209f);
	*(&iLocal_4 + 728[13] + 12) = Vector(0,5521672f, 577,4448f, 0,4035577f);
	*(&iLocal_4 + 808[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerEndLast", Vector(-115,942f, 118,869f, 1385,209f), Vector(0,5521672f, 577,4448f, 0,4035577f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[1], &iLocal_4 + 720);
	*(&iLocal_4 + 728[23]) = Vector(-111,3223f, 121,5405f, 1366,133f);
	*(&iLocal_4 + 728[23] + 12) = Vector(-0,4908393f, 693,2698f, 0,960059f);
	*(&iLocal_4 + 808[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CameraFocusLast", Vector(-111,3223f, 121,5405f, 1366,133f), Vector(-0,4908393f, 693,2698f, 0,960059f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 808[2], &iLocal_4 + 720);
	*(&iLocal_4 + 840) = CREATE_OBJECTSET_IN_LAYOUT("StageOneSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 848[03]) = Vector(-69,03903f, 117,9838f, 1415,278f);
	*(&iLocal_4 + 848[03] + 12) = Vector(0.0f, -171,9329f, 0.0f);
	*(&iLocal_4 + 1000[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "LassoPos", Vector(-69,03903f, 117,9838f, 1415,278f), Vector(0.0f, -171,9329f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1000[0], &iLocal_4 + 840);
	*(&iLocal_4 + 848[13]) = Vector(-109,4612f, 117,7173f, 1401,953f);
	*(&iLocal_4 + 848[13] + 12) = Vector(0.0f, -50,86387f, 0.0f);
	*(&iLocal_4 + 1000[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TeleportSonCS", Vector(-109,4612f, 117,7173f, 1401,953f), Vector(0.0f, -50,86387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1000[1], &iLocal_4 + 840);
	*(&iLocal_4 + 848[23]) = Vector(-90,09449f, 118,018f, 1391,062f);
	*(&iLocal_4 + 848[23] + 12) = Vector(0.0f, -142,6257f, 0.0f);
	*(&iLocal_4 + 1000[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TeleportWifeCS", Vector(-90,09449f, 118,018f, 1391,062f), Vector(0.0f, -142,6257f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1000[2], &iLocal_4 + 840);
	*(&iLocal_4 + 848[33]) = Vector(-69,49256f, 116,8503f, 1405,535f);
	*(&iLocal_4 + 848[33] + 12) = Vector(0.0f, 64,9786f, 0.0f);
	*(&iLocal_4 + 1000[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TeleportPlayerCS", Vector(-69,49256f, 116,8503f, 1405,535f), Vector(0.0f, 64,9786f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1000[3], &iLocal_4 + 840);
	*(&iLocal_4 + 848[43]) = Vector(-463,2997f, 152,8353f, 1367,753f);
	*(&iLocal_4 + 848[43] + 12) = Vector(0.0f, -171,9329f, 0.0f);
	*(&iLocal_4 + 1000[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "RufusFleeGoto", Vector(-463,2997f, 152,8353f, 1367,753f), Vector(0.0f, -171,9329f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1000[4], &iLocal_4 + 840);
	*(&iLocal_4 + 848[53]) = Vector(-100,9118f, 118,8691f, 1340,912f);
	*(&iLocal_4 + 848[53] + 12) = Vector(0.0f, -171,9329f, 0.0f);
	*(&iLocal_4 + 1000[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "TeleUncleCorpse", Vector(-100,9118f, 118,8691f, 1340,912f), Vector(0.0f, -171,9329f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1000[5], &iLocal_4 + 840);
	*(&iLocal_4 + 1056) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "stand_wring_hands", "stand_wring_hands", Vector(-101,8665f, 119,5159f, 1357,228f), Vector(0.0f, -35,47153f, 0.0f));
}

void BëS`D®tÂÖö¬Bí!üD­XOÂè  Bí¼øD¬K£Â(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193) //Position: 0xC9AB / 51627
{
	(StackVal - 4676)->f_44031 = StackVal;
	*(&iLocal_4 + 1064) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, StackVal, StackVal);
	return;
}

void Function_261(int iParam0, int iParam1) //Position: 0xC9E6 / 51686
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

bool Function_262(struct<2>[] Param0) //Position: 0xCA30 / 51760
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_267();
	iVar1 = 0;
	if (!Function_142(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_266(&(Param0[iVar02]), 8);
		}
		else if (Function_265())
		{
			iVar1 = 1;
			Function_266(&(Param0[iVar02]), 8);
		}
		Function_266(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_142(&(Param0[iVar02]), 4))
		{
			if (!Function_142(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_142(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_142(&(Param0[02]), 8) || iVar1));
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
				Function_266(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_142(&(Param0[iVar02]), 4))
		{
			if (!Function_142(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_266(&(Param0[iVar02]), 2);
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
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_266(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_266(&(Param0[iVar02]), 2);
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
	Function_263();
	return 1;
}

void Function_263() //Position: 0xCDF2 / 52722
{
	if (!Function_264(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_264(int iParam0) //Position: 0xCE32 / 52786
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_265() //Position: 0xCE4E / 52814
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

void Function_266(struct<13> Param0) //Position: 0xCE7C / 52860
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_267() //Position: 0xCE8F / 52879
{
	if (!Function_264(128))
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

bool Function_268() //Position: 0xCED1 / 52945
{
	Function_271(&iLocal_4 + 8, 1228, 2, 0);
	Function_271(&iLocal_4 + 8, 1276, 2, 0);
	Function_271(&iLocal_4 + 8, 1279, 2, 0);
	Function_271(&iLocal_4 + 8, 1231, 2, 0);
	Function_271(&iLocal_4 + 8, 1280, 2, 0);
	Function_271(&iLocal_4 + 8, 1041, 2, 0);
	Function_271(&iLocal_4 + 8, 976, 2, 0);
	Function_271(&iLocal_4 + 8, 1196, 2, 0);
	Function_269(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/stand_wring_hands", 1, 0);
	if (Function_262(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_269(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xCF92 / 53138
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_270(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_266(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_270(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xCFD0 / 53200
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_142(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_266(&(Param0[iVar02]), 4);
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

var Function_271(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD09F / 53407
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_142(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_266(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_266(&(Param0[iVar02]), 8);
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

int Function_272() //Position: 0xD17B / 53627
{
	bool bVar0;
	
	Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_10996, "tempcutscenevol", 2, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_273(StackVal, &Global_10996, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_273(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0xD1E1 / 53729
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
				Function_274(&uVar1, &uParam0);
			}
		}
		if (!Function_77(StackVal, Var2))
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

void Function_274(var uParam0, float fParam1) //Position: 0xD481 / 54401
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

void Function_275(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xD503 / 54531
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
	Function_191();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_55();
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
				Function_233(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_135(), 2, Function_233(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_90(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_276()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_276()));
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
	if (Function_264(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_143(0x4000000);
	}
	if (Function_264(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_143(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_276() //Position: 0xD7B5 / 55221
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

float Function_277(vector3 vParam0) //Position: 0xD843 / 55363
{
	if (Function_244(&vParam0))
	{
		if (Function_278(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_278(int iParam0) //Position: 0xD910 / 55568
{
	return Function_14(iParam0, 2);
}

void Function_279(float fParam0) //Position: 0xD91E / 55582
{
	Function_243(&fParam0, 0.0f);
	return;
}

bool Function_280(int iParam0, int iParam1, struct<41> Param2) //Position: 0xD92B / 55595
{
	if (!&bParam15)
	{
		Function_288(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_234(&Param2) || Param2.f_40 < 1))
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
				Function_279(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_287())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_286(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_279(&iParam1 + 4);
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
					Function_286(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_277(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_277(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_284(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_286(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_279(&iParam1 + 4);
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
						Function_220(1.0f);
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
						Function_282();
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
					Function_281(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_234(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_281(int iParam0, bool bParam1) //Position: 0xDF8D / 57229
{
	iParam0 = &iParam0;
	HUD_ENABLE(&iParam0);
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
		Function_158();
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

void Function_282() //Position: 0xE05C / 57436
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_283();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_283() //Position: 0xE0A1 / 57505
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_284(var uParam0, int iParam1) //Position: 0xE0B3 / 57523
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_135(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_285(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_285(int iParam0) //Position: 0xE145 / 57669
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

int Function_286(bool bParam0) //Position: 0xE176 / 57718
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

bool Function_287() //Position: 0xE239 / 57913
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

void Function_288(var uParam0, bool bParam1) //Position: 0xE276 / 57974
{
	Function_289(&uParam0, &bParam1, 0);
	return;
}

void Function_289(var uParam0, bool bParam1, int iParam2) //Position: 0xE286 / 57990
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
			Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_90(20, 1, 0, 0);
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
						if (!IS_STRING_VALID(&iParam2))
						{
							Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_90(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

int Function_290() //Position: 0xE3FE / 58366
{
	return 1;
}

int Function_291() //Position: 0xE405 / 58373
{
	Function_292(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_292(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xE41A / 58394
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
		uVar0 = Function_55();
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
		Function_90(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_191();
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
	Function_281(&iParam9, &iParam10);
}

int Function_293() //Position: 0xE4E9 / 58601
{
	return 1;
}

int Function_294() //Position: 0xE4F0 / 58608
{
	return 1;
}

int Function_295() //Position: 0xE4F7 / 58615
{
	return 1;
}

int Function_296() //Position: 0xE4FE / 58622
{
	switch (bLocal_471)
	{
		case 0x00000063:
			if (!SQUAD_IS_VALID(&iLocal_4 + 216))
			{
				Function_254();
			}
			Function_298(&iLocal_4 + 160[12], 1, 1);
			Function_227(&iLocal_4 + 160[12], &iLocal_4 + 664[3], 1, 1, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 160[12]);
			SET_ACTOR_FACTION(&iLocal_4 + 160[12], 20);
			if (!IS_OBJECT_VALID(&uLocal_675))
			{
				uLocal_675 = CREATE_GRINGO_IN_LAYOUT(&uLocal_273, Function_135(), "DLC_Outbreak3", (&iLocal_4 + 512[33]), *(&iLocal_4 + 512[33] + 12));
				SNAP_OBJECT_TO_GROUND(&uLocal_675, 1.0f, true, 1092616192);
				CREATE_DECAL(0, *(&iLocal_4 + 512[53]), 0,25f, 1, 1);
			}
			SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 160[12], &uLocal_675, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&iLocal_4 + 160[12], GET_GRINGO_FROM_OBJECT(&uLocal_675), "UseCase1", 4294967295, 1);
			SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_4 + 160[12]), true);
			return 1;
			break;
		
		case 0x00000001:
			Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_273(StackVal, &uLocal_273, *(&iLocal_4 + 512[03]), &iLocal_4 + 368[0], 0, 0, 0, 0, 1, 1);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&Global_54076);
			Function_228(1, &iLocal_4 + 408[5]);
			if (!IS_ACTORSET_VALID(&iLocal_4 + 328))
			{
				Function_136();
				TASK_STAND_STILL(&iLocal_4 + 304[02], -1.0f, 0, 0);
				TASK_PRIORITY_SET(&iLocal_4 + 304[02], true);
				AI_IGNORE_ACTOR(&iLocal_4 + 304[02]);
				SET_ACTOR_RIDEABLE(&iLocal_4 + 304[02], 0);
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_297(&Global_54076);
			Function_273(StackVal, &uLocal_273, Function_297(&Global_54076), &iLocal_4 + 368[1], 0, 0, 0, 0, 1, 1);
			Function_228(1, &iLocal_4 + 368[1]);
			return 1;
			break;
		
		default:
			Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_297(&Global_54076);
			Function_273(StackVal, &uLocal_273, Function_297(&Global_54076), &iLocal_459 + 32, 0, 0, 0, 0, 1, 1);
			return 1;
			break;
	}
	return 0;
}

struct<8> Function_297(int iParam0) //Position: 0xE727 / 59175
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

void Function_298(var uParam0, bool bParam1, bool bParam2) //Position: 0xE793 / 59283
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

void Function_299(bool bParam0) //Position: 0xE843 / 59459
{
	Function_300(0, 0x40400000);
	Function_165();
	Function_164();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_300(float fParam0, float fParam1) //Position: 0xE879 / 59513
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
	Function_302();
	Function_301();
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

void Function_301() //Position: 0xE98A / 59786
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_302() //Position: 0xE9BE / 59838
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

void Function_303() //Position: 0xEAC4 / 60100
{
	Function_347(5, 30, 0, 23, 59, 59);
	if (iLocal_472 < 2 && iLocal_472 > 105)
	{
		if (iLocal_472 == 10)
		{
			if (Function_343())
			{
				Function_28("Zombie01_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_472 = 13;
			}
		}
		if (!DECOR_CHECK_EXIST(&Global_54076, "nNoGrapple"))
		{
			DECOR_SET_BOOL(&Global_54076, "nNoGrapple", true);
		}
		if (GET_WEAPON_IN_HAND(&Global_54076) != 21)
		{
			ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 3, 1);
		}
		else if (GET_WEAPON_IN_HAND(&Global_54076) == 21)
		{
			ACTOR_DISABLE_WEAPON_RENDER(&Global_54076, 3, 0);
		}
		if (!Function_244(&fLocal_696))
		{
			Function_242(&fLocal_696);
		}
		else if (Function_277(&fLocal_696) < 0,5f)
		{
			Function_225(1, 1);
			Function_279(&fLocal_696);
		}
	}
	switch (iLocal_472)
	{
		case 0x00000000:
			Function_299(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_227(&Global_54076, &iLocal_4 + 664[1], 1, 1, 1);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(4, false, false));
			if (!iLocal_630[0])
			{
				Function_279(&fLocal_657);
				iLocal_472 = 1;
			}
			else
			{
				Function_279(&fLocal_657);
				iLocal_472 = 4;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_342(Global_46914[1]))
			{
				Function_279(&fLocal_657);
				iLocal_472 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_340(StackVal, StackVal, StackVal, StackVal, StackVal, Local_275, bLocal_471))
			{
				Function_279(&fLocal_657);
				iLocal_472 = 3;
			}
			else
			{
				Function_279(&fLocal_657);
				iLocal_472 = 4;
			}
			Function_185(bLocal_471);
			Function_332(StackVal, Function_185(bLocal_471), bLocal_471, Global_46914[1], Function_188(bLocal_471), 0);
			break;
		
		case 0x00000003:
			if (Function_280("$/cutscene/OUTBREAK_3_CS_SEQ/OUTBREAK_3_CS_SEQ", &iLocal_459, &Local_275, &bLocal_471, 58622, 66667, 47831, 40518, 58373, 58366, 0, 2, 1, 2, 2, 0, 1))
			{
				Function_279(&fLocal_657);
				iLocal_472 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_234(&Local_275))
			{
				Function_229();
			}
			ADD_COMPANION_PERMANENT();
			iLocal_673 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_273, Function_135(), "shotgun_doubleBarrel01x", Vector(-119,351f, 118,875f, 1372,24f), Vector(-180.0f, 56,5379f, -180.0f), false);
			iLocal_687 = 0;
			Function_220(1.0f);
			Function_243(&fLocal_700, 15.0f);
			Function_279(&fLocal_657);
			iLocal_472 = 6;
			break;
		
		case 0x00000006:
			if ((!iLocal_687 && !GET_WEAPON_IN_HAND(&Global_54076) != 21) && (!HUD_IS_FADED() || HUD_IS_FADING()))
			{
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				SIMULATE_PLAYER_INPUT_GAIT(0, 2, 1073741824, 0);
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 21, 1);
				iLocal_687 = 1;
			}
			if (!HUD_IS_FADING() && !HUD_IS_FADED())
			{
				Function_28("Zombie01_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				Function_328(&fLocal_712, 7.0f);
				Function_279(&fLocal_657);
				iLocal_472 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_327(&Global_54076, &iLocal_4 + 224[02], 25.0f))
			{
				Function_324(&uLocal_661, 150.0f, 200.0f, &iLocal_4 + 224[12], "Zombie01_Return_Son", "Zombie01_Fail_Son", &bLocal_653, 0, 0, 0, 322, 1);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 408[0])))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iLocal_4 + 408[0]));
				}
			}
			else
			{
				Function_317(&uLocal_661, &iLocal_4 + 408[0], &iLocal_4 + 408[1], "Zombie01_Return_Home", "Zombie01_Fail_Home", &bLocal_653, 0, &uLocal_273, &iLocal_4, 330, 1);
			}
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 408[0])) && !DECOR_CHECK_EXIST(&iLocal_4 + 408[0], "bNamedBlip"))
			{
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 408[0]), "behv_region");
				DECOR_SET_BOOL(&iLocal_4 + 408[0], "bNamedBlip", true);
			}
			else if (DECOR_CHECK_EXIST(&iLocal_4 + 408[0], "bNamedBlip") && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 408[0])))
			{
				DECOR_REMOVE(&iLocal_4 + 408[0], "bNamedBlip");
			}
			if (!iLocal_687 && !GET_WEAPON_IN_HAND(&Global_54076) != 21)
			{
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 21, 1);
				iLocal_687 = 1;
			}
			if (Function_277(&fLocal_657) < 1.0f && !DECOR_CHECK_EXIST(&uLocal_273, "lassohelp01"))
			{
				if (GET_PLAYER_COMBATMODE() == 1)
				{
					Function_316("Zombie01_help_hogtie_01_expert", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_316("Zombie01_help_hogtie_01", 0x41200000, 1, 0, 2, 1, 0);
				}
				DECOR_SET_BOOL(&uLocal_273, "lassohelp01", true);
			}
			Function_309();
			if (IS_PHYSINST_IN_LEVEL(GET_PHYSINST_FROM_OBJECT(&iLocal_673)) && !DECOR_CHECK_EXIST(&iLocal_673, "nactivated"))
			{
				ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&iLocal_673));
				DECOR_SET_BOOL(&iLocal_673, "nactivated", true);
			}
			if (IS_ACTOR_HOGTIED(&iLocal_4 + 224[02]))
			{
				if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&Global_54076)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[02])))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[02]));
					}
					TASK_MELEE_ATTACK(&iLocal_4 + 224[12], &Global_54076, -1.0f);
					uLocal_717 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 224[12], 322, 0f, 2, 0);
					SET_BLIP_NAME(&uLocal_717, "Zombie01_Blip_Son");
					SET_BLIP_IMPAIRMENT_MASK(&uLocal_717, 2048);
					Function_28("Zombie01_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
					Function_279(&fLocal_657);
					iLocal_472 = 11;
				}
				else if (!DECOR_CHECK_EXIST(&iLocal_4 + 224[12], "bPlayerAttackedMe"))
				{
					TASK_MELEE_ATTACK(&iLocal_4 + 224[12], &Global_54076, -1.0f);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 272[02], &iLocal_4 + 848[43], 3);
					DECOR_SET_BOOL(&iLocal_4 + 224[12], "bPlayerAttackedMe", true);
				}
			}
			break;
		
		case 0x0000000B:
			if (Function_277(&fLocal_657) < 0,5f)
			{
				Function_28("Zombie01_obj03", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_472 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_317(&uLocal_661, &iLocal_4 + 408[0], &iLocal_4 + 408[1], "Zombie01_Return_Home", "Zombie01_Fail_Home", &bLocal_653, 0, &uLocal_273, &iLocal_4, 330, 1);
			Function_309();
			if (Function_277(&fLocal_712) < 10.0f)
			{
				SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 224[12], "MAJOR_ANGER", &Global_54076, 1, 1, 0, 0, 0);
				Function_279(&fLocal_712);
			}
			if (IS_ACTOR_HOGTIED(&iLocal_4 + 224[12]) && GET_CURR_ACTION_NODE_PLAY_TIME(&Global_54076) < 3.0f)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[12])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[12]));
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				iLocal_472 = 105;
			}
			break;
		
		case 0x0000000D:
			Function_317(&uLocal_661, &iLocal_4 + 408[0], &iLocal_4 + 408[1], "Zombie01_Return_Home", "Zombie01_Fail_Home", &bLocal_653, 0, &uLocal_273, &iLocal_4, 330, 1);
			Function_309();
			if (!IS_ACTOR_HOGTIED(&iLocal_4 + 224[02]))
			{
				if (Function_277(&fLocal_712) < 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 224[02], "MAJOR_ANGER", &Global_54076, 1, 1, 0, 0, 0);
					Function_279(&fLocal_712);
				}
			}
			else if (!IS_ACTOR_HOGTIED(&iLocal_4 + 224[12]))
			{
				if (Function_277(&fLocal_712) < 10.0f)
				{
					SAY_SINGLE_LINE_SCRIPTED(&iLocal_4 + 224[12], "MAJOR_ANGER", &Global_54076, 1, 1, 0, 0, 0);
					Function_279(&fLocal_712);
				}
			}
			if ((IS_ACTOR_HOGTIED(&iLocal_4 + 224[12]) && IS_ACTOR_HOGTIED(&iLocal_4 + 224[02])) && GET_CURR_ACTION_NODE_PLAY_TIME(&Global_54076) < 3.0f)
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[12])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[12]));
				}
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[02])))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[02]));
				}
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				Function_175(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				iLocal_472 = 105;
			}
			break;
		
		case 0x00000069:
			if (HUD_IS_FADED() && !HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
				{
					FREE_FROM_HOGTIE(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076));
				}
				else if (MAKE_ACTOR_READY_FOR_ACTION(&Global_54076, 1))
				{
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					Function_227(&Global_54076, &iLocal_4 + 664[0], 1, 1, 1);
					DELETE_WEAPON_FROM_ACTOR(&Global_54076, 21);
					Function_124(3, 0, 0);
					Function_279(&fLocal_657);
					iLocal_472 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			Function_186(&iLocal_4 + 368[0]);
			Function_304(StackVal, "$/cutscene/OUTBREAK_4_PT_a_cs/OUTBREAK_4_PT_a_cs", &uLocal_656, Function_186(&iLocal_4 + 368[0]), 0, 10.0f, 200.0f, 2, 2, 2, 2, 1, 1);
			if (Function_277(&fLocal_657) < 3.0f)
			{
				Function_138(&iLocal_4 + 224[12]);
				Function_138(&iLocal_4 + 224[02]);
				iLocal_630[1] = 1;
				bLocal_471 = 101;
				iLocal_472 = 0;
			}
			break;
	}
	return;
}

bool Function_304(int iParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0xF53B / 62779
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_307(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_308()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
		if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
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
				if (!Function_77(StackVal, Var16))
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
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&iParam0))
				{
					LOG_ERROR("GLOBAL_PRELOAD_CUTSCENE: Preload cutscene DOES NOT exist, skipping preload and going to CUTPRELOAD_SKIPPEDLOADING");
					uParam1 = 5;
				}
				else if ((!CUTSCENE_MANAGER_IS_CUTFILE_LOADED() && !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED()) && STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0))
				{
					uParam1 = 1;
				}
				else
				{
					CUTSCENE_MANAGER_LOAD_CUTFILE(&iParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_305();
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
	else if ((!Function_307(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_308()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_307(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_305() //Position: 0xF7A3 / 63395
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
			Function_306(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_306(char* cParam0) //Position: 0xF7F7 / 63479
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

bool Function_307(var uParam0, struct<2> Param1, float fParam3) //Position: 0xF920 / 63776
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_297(&uParam0);
		if (VDIST(Function_297(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_308() //Position: 0xF9AC / 63916
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_309() //Position: 0xF9BB / 63931
{
	if (!DECOR_CHECK_EXIST(&uLocal_273, "Zombie01_help_hogtie_02"))
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_690))
		{
			HUD_CLEAR_HELP_QUEUE();
			Function_316("Zombie01_help_hogite_02", 0x41200000, 1, 0, 2, 1, 0);
			DECOR_SET_BOOL(&uLocal_273, "Zombie01_help_hogtie_02", true);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_694))
	{
		if (!DECOR_CHECK_EXIST(&uLocal_273, "DX_obj02_wife_hog"))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_315();
			}
			DECOR_SET_BOOL(&uLocal_273, "DX_obj02_wife_hog", true);
			Function_230(&iLocal_4 + 224[12], &Global_54076);
			TASK_GO_NEAR_COORD(&iLocal_4 + 224[12], &Global_54078, 5.0f, 4);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_692))
	{
		if (!DECOR_CHECK_EXIST(&uLocal_273, "DX_obj02_son_hog"))
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_314();
			}
			DECOR_SET_BOOL(&uLocal_273, "DX_obj02_son_hog", true);
		}
	}
	if (Function_277(&fLocal_700) <= (15.0f - 5.0f) && !IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Function_310();
		Function_279(&fLocal_700);
	}
	return;
}

void Function_310() //Position: 0xFB19 / 64281
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z01_YellsAtTheFams", "Z01_YellsAtTheFams", true, 2, 1, 0, 1);
		Function_233(&Global_54076);
		Function_233(&iLocal_4 + 160[12]);
		Function_233(&Global_54076);
		Function_233(&iLocal_4 + 160[22]);
		if (VDIST(Function_233(&Global_54076), Function_233(&iLocal_4 + 160[12])) > VDIST(Function_233(&Global_54076), Function_233(&iLocal_4 + 160[22])))
		{
			Function_311(9);
		}
		else
		{
			Function_311(17);
		}
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_311(int iParam0) //Position: 0xFB9D / 64413
{
	Function_312(0, &Global_54076, iParam0, 0);
	Function_312(1, &iLocal_4 + 160[22], iParam0, 0);
	Function_312(2, &iLocal_4 + 160[12], iParam0, 0);
	Function_312(3, &iLocal_4 + 224[02], iParam0, 0);
	Function_312(4, &iLocal_4 + 224[12], iParam0, 0);
	return;
}

void Function_312(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0xFBEA / 64490
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_313(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

bool Function_313(bool bParam0) //Position: 0xFC12 / 64530
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_314() //Position: 0xFC1E / 64542
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z01_HogtiesJack", "Z01_HogtiesJack", true, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_315() //Position: 0xFC65 / 64613
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z01_HogtiesAbi", "Z01_HogtiesAbi", true, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_316(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xFCAA / 64682
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
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

int Function_317(struct<2> Param0, var uParam2, int iParam3, char* cParam4, var uParam5, bool bParam6, var uParam7, int iParam8, int iParam9, bool bParam10) //Position: 0xFD35 / 64821
{
	Param0 = { StackVal, Param0 };
	if (!IS_VOLUME_VALID(&iParam1) || !IS_VOLUME_VALID(&uParam2))
	{
		return 0;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &uParam2))
	{
		Function_180(&cParam4);
		uParam5 = 1;
		return 1;
	}
	if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iParam1))
	{
		if (!Function_323(64))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam6)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_28(&iParam3, 7,5f, 0, 2, &bParam6, 0, 0, 0);
				Function_322(64);
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_321(&uParam7, 0, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_321(&iParam8, 0, 4294967295, 0, &iParam1);
			}
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&iParam8)))
			{
				ADD_BLIP_FOR_OBJECT(&iParam1, &iParam9, 0f, 2, 0);
				DECOR_SET_BOOL(&iParam1, "MVODR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_323(64))
	{
		Function_320(64);
		if (!Function_319())
		{
			if (&bParam10)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_318();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam1)) && (IS_LAYOUTREF_VALID(&uParam7) || IS_LAYOUTREF_VALID(&iParam8))) && DECOR_CHECK_EXIST(&iParam1, "MVODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam1));
				DECOR_REMOVE(&iParam1, "MVODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam7))
			{
				Function_321(&uParam7, 1, 4294967295, 0, &iParam1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_321(&iParam8, 1, 4294967295, 0, &iParam1);
			}
		}
	}
	return 0;
}

void Function_318() //Position: 0xFED0 / 65232
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

bool Function_319() //Position: 0xFEFE / 65278
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

void Function_320(bool bParam0) //Position: 0xFF45 / 65349
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_47(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_321(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xFFAC / 65452
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

void Function_322(bool bParam0) //Position: 0x10069 / 65641
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_129(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_323(bool bParam0) //Position: 0x100D0 / 65744
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

int Function_324(struct<2> Param0, var uParam2, int iParam3, float fParam4, char* cParam5, var uParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x1011A / 65818
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_327(&Global_54076, &iParam3, uParam2))
	{
		Function_180(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_327(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_323(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_28(&fParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_322(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_321(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_321(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", true);
			}
		}
		return 1;
	}
	if (Function_323(2))
	{
		Function_320(2);
		if (!Function_319())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_318();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_326(&iParam3);
				Function_325(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_321(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_321(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_325(var uParam0) //Position: 0x102D8 / 66264
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

void Function_326(int iParam0) //Position: 0x1030B / 66315
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

bool Function_327(var uParam0, var uParam1, bool bParam2) //Position: 0x1033E / 66366
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

void Function_328(int iParam0, float fParam1) //Position: 0x10453 / 66643
{
	if (!Function_244(&iParam0))
	{
		Function_243(&iParam0, fParam1);
	}
	return;
}

int Function_329() //Position: 0x1046B / 66667
{
	switch (bLocal_471)
	{
		case 0x00000063:
			return 1;
			break;
		
		case 0x00000001:
			Function_331();
			if (IS_ACTOR_VALID(&iLocal_4 + 160[12]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 160[12]);
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
			{
				if (IS_ACTOR_IN_VOLUME(&iLocal_4 + 160[02], &iLocal_4 + 408[5]))
				{
					CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 160[02]);
					Function_330(&iLocal_4 + 160[02]);
				}
			}
			if (IS_ACTOR_VALID(&iLocal_4 + 304[02]))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 304[02]);
			}
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_330(var uParam0) //Position: 0x1050B / 66827
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (GET_OBJECT_NAMED_BONE_POSITION(&uParam0, "head", &Var0))
		{
			uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uLocal_273, Function_135(), 2, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(0,25f, 0,25f, 0,25f));
			RESET_RMPTFX_IN_VOLUME(&uVar2);
			DESTROY_VOLUME(&uVar2);
		}
	}
	return;
}

int Function_331() //Position: 0x1055E / 66910
{
	bool bVar0;
	var uVar1;
	var uVar3;
	var uVar5;
	
	bVar0 = false;
	while (bVar0 <= CUTSCENE_MANAGER_GET_NUM_CUTSCENE_PROPS())
	{
		if (CUTSCENE_MANAGER_GET_CUTSCENE_PROP_BY_INDEX_END_ORIENT(bVar0, &uVar1, &uVar3))
		{
			uVar5 = CUTSCENE_MANAGER_GET_CUTSCENE_PROP_NAME(bVar0);
		}
		bVar0++;
	}
	return 1;
}

void Function_332(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1058D / 66957
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
	if (iParam2 != Global_53524.f_48 && !Function_339())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_338(0);
	Function_337();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_97())
	{
		Function_335(iParam2);
	}
	Function_334(uParam3, iVar0, iVar1);
	Function_333();
}

void Function_333() //Position: 0x10636 / 67126
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

void Function_334(int iParam0, bool bParam1, bool bParam2) //Position: 0x10677 / 67191
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
	if (Function_87(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_48();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_335(bool bParam0) //Position: 0x107E0 / 67552
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_336() };
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
	PLAYSTAT_INT("HC_MONEY", Function_30(0));
	PLAYSTAT_INT("HC_FAME", Function_30(3));
	PLAYSTAT_INT("HC_HONOR", Function_30(1));
	return;
}

struct<16> Function_336() //Position: 0x10978 / 67960
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

void Function_337() //Position: 0x109BE / 68030
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_338(bool bParam0) //Position: 0x109E2 / 68066
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

bool Function_339() //Position: 0x10A11 / 68113
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

bool Function_340(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x10A2C / 68140
{
	if (Function_341(&iParam0) == iParam6 || Function_339())
	{
		return 1;
	}
	return 0;
}

int Function_341(int iParam0) //Position: 0x10A4B / 68171
{
	if (Function_234(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

bool Function_342(int iParam0) //Position: 0x10A64 / 68196
{
	if (!Function_87(iParam0))
	{
		return 1;
	}
	return Function_148(&(Global_43791[iParam0]), 4);
}

bool Function_343() //Position: 0x10A80 / 68224
{
	if (!DECOR_CHECK_EXIST(&iLocal_4 + 224[12], "bPlayerAttackedMe"))
	{
		if ((GET_LASSO_TARGET(&Global_54076) != &iLocal_4 + 224[12] || GET_LAST_ATTACKER(&iLocal_4 + 224[12]) != &Global_54076) || Function_344(&Global_54076, &iLocal_4 + 224[12], 10.0f))
		{
			TASK_MELEE_ATTACK(&iLocal_4 + 224[12], &Global_54076, -1.0f);
			TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_4 + 272[02], &iLocal_4 + 848[43], 3);
			DECOR_SET_BOOL(&iLocal_4 + 224[12], "bPlayerAttackedMe", true);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 224[12])))
			{
				uLocal_717 = ADD_BLIP_FOR_OBJECT(&iLocal_4 + 224[12], 322, 0f, 2, 0);
				SET_BLIP_NAME(&uLocal_717, "Zombie01_Blip_Son");
				SET_BLIP_IMPAIRMENT_MASK(&uLocal_717, 2048);
			}
			return 1;
		}
	}
	return 0;
}

int Function_344(var uParam0, var uParam1, float fParam2) //Position: 0x10B83 / 68483
{
	float fVar0;
	
	fVar0 = Function_345(&uParam0, &uParam1);
	if (fVar0 >= fParam2)
	{
		return 1;
	}
	return 0;
}

var Function_345(var uParam0, int iParam1) //Position: 0x10BA2 / 68514
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_346(&uVar0, &uVar2);
	return iVar4;
}

var Function_346(struct<2> Param0) //Position: 0x10BC3 / 68547
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

int Function_347(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5) //Position: 0x10BE2 / 68578
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

void Function_348() //Position: 0x10C78 / 68728
{
	Function_347(5, 30, 0, 23, 59, 59);
	if (iLocal_472 < 2 && iLocal_472 > 105)
	{
		Function_186(&iLocal_4 + 368[0]);
		if (!Function_304(StackVal, "$/cutscene/OUTBREAK_3_CS_SEQ/OUTBREAK_3_CS_SEQ", &uLocal_656, Function_186(&iLocal_4 + 368[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1))
		{
		}
		if (!DECOR_CHECK_EXIST(&Global_54076, "nNoGrapple"))
		{
			DECOR_SET_BOOL(&Global_54076, "nNoGrapple", true);
		}
		if (!Function_244(&fLocal_696))
		{
			Function_242(&fLocal_696);
		}
		else if (Function_277(&fLocal_696) < 0,5f)
		{
			Function_225(1, 1);
			Function_279(&fLocal_696);
		}
	}
	switch (iLocal_472)
	{
		case 0x00000000:
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_227(&Global_54076, &iLocal_4 + 664[1], 1, 1, 1);
			SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(4, false, false));
			Function_279(&fLocal_657);
			iLocal_472 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_342(Global_46914[1]))
			{
				Function_279(&fLocal_657);
				iLocal_472 = 2;
			}
			break;
		
		case 0x00000002:
			Function_185(bLocal_471);
			Function_332(StackVal, Function_185(bLocal_471), bLocal_471, Global_46914[1], Function_188(bLocal_471), 0);
			if (Function_234(&Local_275) || HUD_IS_FADED())
			{
				Function_241();
			}
			ADD_COMPANION_PERMANENT();
			Function_279(&fLocal_657);
			iLocal_472 = 6;
			break;
		
		case 0x00000006:
			if (!Function_234(&Local_275) || (Function_363(&iLocal_4 + 160[02], 1, 5.0f) && Function_363(&iLocal_4 + 160[12], 1, 5.0f)))
			{
				Function_220(1.0f);
			}
			if ((!HUD_IS_FADING() && !HUD_IS_FADED()) && IS_WEAPON_DRAWN(&Global_54076))
			{
				Function_28("Zombie01_obj01", 0x40f00000, 1, 2, 0, 0, 0, 0);
				SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_4 + 160[02], 322, 0, 2, 0), "Zombie01_Blip_Uncle");
				SET_ACTOR_FACTION(&iLocal_4 + 160[02], 32);
				Function_298(&iLocal_4 + 160[12], 1, 1);
				Function_279(&fLocal_657);
				iLocal_472 = 7;
			}
			else if (!IS_WEAPON_DRAWN(&Global_54076))
			{
				ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 16, 1);
			}
			break;
		
		case 0x00000007:
			if (Function_277(&fLocal_657) < 1.0f)
			{
				Function_316("tut_weapon_zoom", 0x41200000, 1, 0, 2, 1, 0);
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				Function_243(&fLocal_700, 15.0f);
				Function_279(&fLocal_657);
				iLocal_472 = 8;
			}
			break;
		
		case 0x00000008:
			Function_324(&uLocal_661, 60.0f, 200.0f, &iLocal_4 + 160[12], "Zombie01_Return_Wife", "Zombie01_Fail_Wife", &bLocal_653, 0, &uLocal_273, &iLocal_4, 325, 1);
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 160[12])) && !DECOR_CHECK_EXIST(&iLocal_4 + 160[12], "bNamedBlip"))
			{
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&iLocal_4 + 160[12]), "Zombie01_Blip_Wife");
				DECOR_SET_BOOL(&iLocal_4 + 160[12], "bNamedBlip", true);
			}
			else if (DECOR_CHECK_EXIST(&iLocal_4 + 160[12], "bNamedBlip") && !IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 160[12])))
			{
				DECOR_REMOVE(&iLocal_4 + 160[12], "bNamedBlip");
			}
			if (!DECOR_CHECK_EXIST(&uLocal_273, "aimtutorial"))
			{
				if (UNK_0x062C5047("@GENERIC.TARGET", 1, 0))
				{
					HUD_CLEAR_HELP_QUEUE();
					if (GET_PLAYER_COMBATMODE() == 1)
					{
						if (IS_USING_KEYBOARD_AND_MOUSE())
						{
							Function_316("tut_weapon_aim_expert_KBM", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_316("tut_weapon_aim_expert", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					else if (GET_PLAYER_COMBATMODE() == 2)
					{
						Function_316("tut_weapon_aim_normal", 0x41200000, 1, 0, 2, 1, 0);
					}
					else
					{
						Function_316("tut_weapon_aim_casual", 0x41200000, 1, 0, 2, 1, 0);
					}
					DECOR_SET_BOOL(&uLocal_273, "aimtutorial", true);
					Function_362(&Global_119936, 256);
				}
			}
			if (!IS_ACTOR_ALIVE(&iLocal_4 + 160[02]))
			{
				if (!Function_244(&iLocal_708))
				{
					Function_242(&iLocal_708);
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!DECOR_CHECK_EXIST(&uLocal_273, "bYellsZombieUnkle"))
					{
						if (Function_277(&iLocal_708) < 0,5f)
						{
							Function_361();
							DECOR_SET_BOOL(&uLocal_273, "bYellsZombieUnkle", true);
						}
					}
					else if (Function_277(&iLocal_708) < 1,5f)
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_4 + 160[02])))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_4 + 160[02]));
						}
						Function_191();
						Function_360(&(Local_530[115]));
						Function_360(&(Local_530[015]));
						AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
						iLocal_472 = 106;
					}
				}
			}
			else if (!DECOR_CHECK_EXIST(&iLocal_4 + 160[02], "nbAttacked"))
			{
				if (GET_LAST_ATTACKER(&iLocal_4 + 160[02]) == &Global_54076)
				{
					RESET_ANIM_SET_FOR_ACTOR(&iLocal_4 + 160[02], 1);
					TASK_MELEE_ATTACK(&iLocal_4 + 160[02], &Global_54076, -1.0f);
					DECOR_SET_BOOL(&iLocal_4 + 160[02], "nbAttacked", true);
				}
				Function_350();
				Function_349();
			}
			break;
		
		case 0x0000006A:
			iLocal_459 = 1000;
			iLocal_630[0] = 1;
			bLocal_471 = true;
			iLocal_472 = 2;
			break;
	}
	return;
}

void Function_349() //Position: 0x11297 / 70295
{
	if (IS_ACTOR_VALID(&iLocal_4 + 160[02]))
	{
		if (IS_ACTOR_ALIVE(&iLocal_4 + 160[02]))
		{
			if ((IS_ACTOR_IN_VOLUME(&iLocal_4 + 160[02], &iLocal_4 + 408[3]) || IS_ACTOR_IN_VOLUME(&iLocal_4 + 160[02], &iLocal_4 + 408[4])) && !DECOR_CHECK_EXIST(&iLocal_4 + 160[02], "bPathOff"))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&iLocal_4 + 160[02], 0);
				DECOR_SET_BOOL(&iLocal_4 + 160[02], "bPathOff", true);
			}
			else if (DECOR_CHECK_EXIST(&iLocal_4 + 160[02], "bPathOff"))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&iLocal_4 + 160[02], 1);
				DECOR_REMOVE(&iLocal_4 + 160[02], "bPathOff");
			}
		}
	}
	return;
}

void Function_350() //Position: 0x11360 / 70496
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING() || Function_359())
	{
		return;
	}
	if (!Function_244(&fLocal_700))
	{
		Function_242(&fLocal_700);
	}
	if (!Function_244(&iLocal_704))
	{
		Function_328(&iLocal_704, 15.0f);
	}
	if (Function_277(&iLocal_704) <= 15.0f)
	{
		if (GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iLocal_4 + 160[22] || GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iLocal_4 + 160[22])
		{
			Function_358();
			Function_279(&iLocal_704);
		}
		else if (GET_LAST_ATTACKER(&iLocal_4 + 160[22]) != &Global_54076 || GET_LAST_ATTACK_TARGET(&Global_54076) != &iLocal_4 + 160[22])
		{
			Function_357();
			Function_279(&iLocal_704);
		}
		else if (AI_HAS_ACTOR_BUMPED_INTO_ME(&iLocal_4 + 160[22], &Global_54076, 1.0f))
		{
			Function_356();
			Function_279(&iLocal_704);
		}
	}
	if (IS_ACTOR_IN_VOLUME(&iLocal_4 + 160[02], &iLocal_4 + 472[1]) && !DECOR_CHECK_EXIST(&iLocal_4 + 160[02], "Z01_PLAY_UnklEntersHouse"))
	{
		Function_355();
		DECOR_SET_BOOL(&iLocal_4 + 160[02], "Z01_PLAY_UnklEntersHouse", true);
		Function_279(&fLocal_700);
	}
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 472[1]))
	{
		if (!DECOR_CHECK_EXIST(&uLocal_273, "Z01_PLAY_BakInB4Kill"))
		{
			Function_354();
			DECOR_SET_BOOL(&uLocal_273, "Z01_PLAY_BakInB4Kill", true);
			Function_279(&fLocal_700);
		}
		else if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !DECOR_CHECK_EXIST(&uLocal_273, "Z01_PLAY_JonBakInNoKil"))
		{
			Function_353();
			DECOR_SET_BOOL(&uLocal_273, "Z01_PLAY_JonBakInNoKil", true);
			Function_279(&fLocal_700);
		}
	}
	if ((Function_277(&fLocal_657) < 30.0f && Function_277(&fLocal_700) <= 15.0f) && !DECOR_CHECK_EXIST(&uLocal_273, "Z01_PLAY_NotKillnUncle"))
	{
		Function_352();
		DECOR_SET_BOOL(&uLocal_273, "Z01_PLAY_NotKillnUncle", true);
		Function_279(&fLocal_700);
	}
	if (Function_277(&fLocal_700) <= 15.0f)
	{
		if (RAND_FLOAT_RANGE(0.0f, 100000.0f) < 50000.0f)
		{
			Function_361();
		}
		else
		{
			Function_351();
		}
		Function_279(&fLocal_700);
		Function_243(&iLocal_704, 15.0f);
	}
	return;
}

void Function_351() //Position: 0x115EB / 71147
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z01_WindShout", "Z01_WindShout", false, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_352() //Position: 0x1162E / 71214
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z01_NotKillnUncle", "Z01_NotKillnUncle", false, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_353() //Position: 0x11679 / 71289
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z01_JonBakInNoKil", "Z01_JonBakInNoKil", true, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_354() //Position: 0x116C4 / 71364
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z01_BakInB4Kill", "Z01_BakInB4Kill", false, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_355() //Position: 0x1170B / 71435
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z01_UnklEntersHouse", "Z01_UnklEntersHouse", false, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_356() //Position: 0x1175A / 71514
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z01_JonBumpsJak", "Z01_JonBumpsJak", false, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_357() //Position: 0x117A1 / 71585
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z01_JonHitsJak", "Z01_JonHitsJak", false, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_358() //Position: 0x117E6 / 71654
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z01_JonTargetsJak", "Z01_JonTargetsJak", false, 1, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_359() //Position: 0x11831 / 71729
{
	return (HUD_IS_SHOWING_OBJECTIVE() || HUD_IS_SHOWING_SMALL_TEXT());
}

void Function_360(struct<69> Param0) //Position: 0x1183E / 71742
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

void Function_361() //Position: 0x118FE / 71934
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z01_YellsZombieUnkle", "Z01_YellsZombieUnkle", true, 2, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_362(var uParam0, int iParam1) //Position: 0x1194F / 72015
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_363(int iParam0, bool bParam1, float fParam2) //Position: 0x11960 / 72032
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

void Function_364() //Position: 0x11A02 / 72194
{
	switch (iLocal_472)
	{
		case 0x00000006:
			Function_468(&Local_275, 1);
			uLocal_273 = CREATE_LAYOUT("Zombie01_DYNAMICLAYOUT");
			Function_155(0x4000000);
			Function_143(114696);
			Function_466(1);
			Function_465();
			Global_99147 = 0;
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			uLocal_473 = CREATE_OBJECT_ITERATOR(&uLocal_273);
			if (Function_464())
			{
				Function_194();
			}
			Function_26(0x8000000);
			AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
			ENABLE_CHILD_SECTOR("dlc_beh_fireplace01x");
			DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
			DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
			Function_240(0, 0);
			Function_463(20, 0);
			Function_190(1, 0);
			Function_190(3, 0);
			Function_132(0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-99,751f, 119,489f, 1358,906f), 420,0682f, 1, 1, true);
			if (!Function_234(&Local_275) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ"))
			{
				Function_462(4, 1);
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(18, false, false));
				SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 10);
				SET_WEAPONENUM_LOCKED(4, 0);
				Function_130(4, 0, 0);
				iLocal_472 = 25;
			}
			else
			{
				Function_462(13, 1);
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(4, false, false));
				SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 21);
				SET_WEAPONENUM_LOCKED(16, 0);
				_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 12.0f, 0);
				Function_130(16, 0, 0);
				SET_WEAPONENUM_LOCKED(21, 0);
				iLocal_472 = 9;
			}
			break;
		
		case 0x00000019:
			if (Function_461() && Function_262(&iLocal_369))
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_719))
				{
					Function_459();
				}
				else if (Function_387())
				{
					Function_386();
					Function_139(&iLocal_369);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-99,751f, 119,489f, 1358,906f), 420,0682f, 1, 1, true);
					iLocal_472 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_342(Global_46914[1]))
				{
					Function_225(0, 1);
					DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
					DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
					Function_279(&iLocal_459 + 4);
					iLocal_472 = 8;
				}
			}
			break;
		
		case 0x00000008:
			if (Function_375())
			{
				Function_279(&fLocal_657);
				if (HUD_IS_FADING() || HUD_IS_FADED())
				{
					iLocal_472 = 9;
				}
				else
				{
					bLocal_471 = false;
					iLocal_472 = 2;
					Function_373(&Local_275, &bLocal_471, &iLocal_472);
				}
			}
			break;
		
		case 0x00000009:
			if (Function_365())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
				}
				iLocal_472 = 10;
			}
			break;
		
		case 0x0000000A:
			bLocal_471 = iLocal_272;
			iLocal_472 = 0;
			Function_373(&Local_275, &bLocal_471, &iLocal_472);
			switch (bLocal_471)
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

bool Function_365() //Position: 0x11D59 / 73049
{
	int iVar0;
	
	iVar0 = 1;
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_268())
		{
			iVar0 = 0;
		}
		if (!Function_262(&iLocal_287))
		{
			iVar0 = 0;
		}
		if (!IS_ACTOR_VALID(&uLocal_667))
		{
			uLocal_667 = Function_366(1, 1, 0, 0, 0, 0, 1, 0);
			iVar0 = 0;
		}
	}
	return iVar0;
}

int Function_366(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x11D9F / 73119
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
		Function_372(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_371())
		{
			return "";
		}
	}
	if (!Function_369())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_158();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_186(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_186(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_186(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_186(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_368(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_368(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
				if (!Function_77(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_135(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_367(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_367(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x120FC / 73980
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

var Function_368(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12146 / 74054
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

bool Function_369() //Position: 0x121E6 / 74214
{
	if (Function_370() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_370() //Position: 0x121FC / 74236
{
	return Global_21369.f_244;
}

bool Function_371() //Position: 0x12207 / 74247
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_372(var uParam0, bool bParam1, bool bParam2) //Position: 0x12227 / 74279
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_129(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_129(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_373(int iParam0, int iParam1, int iParam2) //Position: 0x12256 / 74326
{
	if (Function_234(&iParam0))
	{
		iParam1 = Function_341(&iParam0);
		if (iParam1 == 4294967295)
		{
			iParam1 = 0;
		}
		if (iParam1 == 99)
		{
			iParam1 = 0;
			iParam2 = 0;
		}
		Function_374();
	}
	return;
}

void Function_374() //Position: 0x12292 / 74386
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

bool Function_375() //Position: 0x122E3 / 74467
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (iLocal_459 > 1006)
	{
		if (!IS_LAYOUTREF_VALID(&iLocal_4))
		{
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_342(Global_46914[1]))
				{
					if (Function_268())
					{
						if (Function_262(&iLocal_287))
						{
							if (!IS_LAYOUTREF_VALID(&iLocal_4))
							{
								Function_225(0, 1);
							}
						}
					}
				}
			}
		}
	}
	Function_289(&iLocal_459, 1, "Intro01");
	switch (iLocal_459)
	{
		case 0x000003E8:
			if (!iLocal_716)
			{
				Function_275(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
				Function_273(Function_259(), &uLocal_273, *(&iLocal_4 + 512[03]), &iLocal_4 + 368[2], 0, 0, 0, 0, 1, 1);
				Function_298(&Global_54076, 1, 1);
				iLocal_716 = 1;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_459 = 1105;
				return 0;
			}
			STREAMING_UNLOAD_BOUNDS();
			STREAMING_UNLOAD_SCENE();
			iLocal_716 = 0;
			CUTSCENE_MANAGER_LOAD_CUTSCENE("$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ", 0, 2, 1, 2, 2);
			if (CUTSCENE_MANAGER_GET_INITIAL_STREAMING_LOAD_SCENE_EXT(&Var0, &Var2))
			{
				VSCALE(&Var2, (360.0f / 6,28f));
				STREAMING_OVERRIDE_MAIN_POI(Var0, Var2);
			}
			Function_279(&iLocal_459 + 4);
			iLocal_459 = 1053;
			break;
		
		case 0x0000041D:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				STREAMING_RELEASE_MAIN_POI();
				CUTSCENE_MANAGER_PLAY_CUTSCENE();
				iLocal_950 = CUTSCENE_MANAGER_GET_CURRENT_FRAME();
				Function_279(&iLocal_459 + 4);
				iLocal_459 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (CUTSCENE_MANAGER_GET_CURRENT_FRAME() <= 3270 && !IS_OBJECT_VALID(&uLocal_677))
			{
				uLocal_677 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &Global_46715, Function_135(), "env_lightningForked_stormy", Vector(-74,266f, 119,127f, 1388,855f));
				UNK_0x6745191B(StackVal, &uLocal_677, Vector(0.0f, 0.0f, 0.0f));
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (IS_OBJECT_VALID(&uLocal_677))
				{
					DESTROY_OBJECT(&uLocal_677);
				}
				DEEQUIP_ACCESSORY(&Global_54076, 0);
				iLocal_716 = 0;
				Function_279(&iLocal_459 + 4);
				iLocal_459 = 1005;
			}
			else
			{
				if (CUTSCENE_MANAGER_GET_CURRENT_TIME() < 5.0f && !iLocal_716)
				{
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					iLocal_716 = 1;
				}
				Function_385(19, 21, 0, iLocal_950);
				if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					*(&iLocal_459 + 24) = Function_381(&uLocal_273, 0, 1, 0, 0);
					if (IS_OBJECT_VALID(&iLocal_459 + 24))
					{
					}
					else
					{
						LOG_ERROR("Marshal01_Outro - Failed to create Marshal01_Outro_cutscene");
					}
					CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_459 + 24, 1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_459 + 24, 0);
				}
			}
			break;
		
		case 0x000003ED:
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_716)
			{
				UI_PUSH("nCutscenes");
				iLocal_716 = 1;
			}
			if (Function_277(&iLocal_459 + 4) < 4,5f)
			{
				Function_186(&Global_54076);
				if (Function_304(StackVal, "$/cutscene/OUTBREAK_1_PT_1B_SEQ/OUTBREAK_1_PT_1B_SEQ", &uLocal_656, Function_186(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
				{
					STREAMING_RELEASE_MAIN_POI();
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_950 = CUTSCENE_MANAGER_GET_CURRENT_FRAME();
					iLocal_951 = 0;
					Function_279(&iLocal_459 + 4);
					iLocal_459 = 1006;
				}
				else
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
					iLocal_459 = 1105;
				}
			}
			else if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_1B_SEQ/OUTBREAK_1_PT_1B_SEQ"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_459 = 1105;
			}
			else
			{
				Function_186(&Global_54076);
				Function_304(StackVal, "$/cutscene/OUTBREAK_1_PT_1B_SEQ/OUTBREAK_1_PT_1B_SEQ", &uLocal_656, Function_186(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			}
			break;
		
		case 0x000003EE:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(true, false, false));
				Function_240(0, 0);
				SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 21);
				SET_WEAPONENUM_LOCKED(16, 0);
				_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 12.0f, 0);
				Function_130(16, 0, 0);
				SET_WEAPONENUM_LOCKED(21, 0);
				SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
				iLocal_716 = 0;
				if (!IS_ACTOR_VALID(&iLocal_4 + 336[02]))
				{
					Function_239();
				}
				if (!SQUAD_IS_VALID(&iLocal_4 + 216))
				{
					Function_254();
				}
				Function_227(&iLocal_4 + 160[12], &iLocal_4 + 664[3], 1, 1, 1);
				DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 160[12]);
				SET_ACTOR_FACTION(&iLocal_4 + 160[12], 20);
				if (!IS_OBJECT_VALID(&uLocal_675))
				{
					uLocal_675 = CREATE_GRINGO_IN_LAYOUT(&uLocal_273, Function_135(), "DLC_Outbreak3", *(&iLocal_4 + 512[33]), *(&iLocal_4 + 512[33] + 12));
					SNAP_OBJECT_TO_GROUND(&uLocal_675, 1.0f, true, 1092616192);
					CREATE_DECAL(0, *(&iLocal_4 + 512[53]), 0,25f, 1, 1);
				}
				SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 160[12], &uLocal_675, "UseCase1", true, 0, 0);
				TASK_USE_GRINGO(&iLocal_4 + 160[12], GET_GRINGO_FROM_OBJECT(&uLocal_675), "UseCase1", 4294967295, 1);
				SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_4 + 160[12]), true);
				Function_298(&iLocal_4 + 160[12], 1, 1);
				Function_279(&iLocal_459 + 4);
				iLocal_459 = 1007;
			}
			else
			{
				Function_385(21, 23, 59, iLocal_950);
				if (!iLocal_952)
				{
					iLocal_951++;
					if (iLocal_951 > 2)
					{
						Function_462(0, 1);
						iLocal_952 = 1;
					}
				}
				if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
				{
					CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
					*(&iLocal_459 + 24) = Function_378(&uLocal_273, 0, 1, 0, 0);
					if (IS_OBJECT_VALID(&iLocal_459 + 24))
					{
					}
					else
					{
						LOG_ERROR("Marshal01_Outro - Failed to create CREATE_ZOMBIE01_OUTSIDE02_CUTSCENE");
					}
					CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iLocal_459 + 24, 1);
					SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_459 + 24, 0);
				}
			}
			break;
		
		case 0x000003EF:
			if (!UI_ISACTIVE("nCutscenes") && !iLocal_716)
			{
				UI_PUSH("nCutscenes");
				iLocal_716 = 1;
			}
			if (Function_277(&iLocal_459 + 4) < 5.0f)
			{
				Function_186(&Global_54076);
				if (Function_304(StackVal, "$/cutscene/OUTBREAK_1_PT_2_SEQ/OUTBREAK_1_PT_2_SEQ", &uLocal_656, Function_186(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1))
				{
					CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(0, 0);
					STREAMING_RELEASE_MAIN_POI();
					AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
					CUTSCENE_MANAGER_PLAY_CUTSCENE();
					iLocal_950 = CUTSCENE_MANAGER_GET_CURRENT_FRAME();
					iLocal_951 = 0;
					Function_279(&iLocal_459 + 4);
					iLocal_716 = 0;
					iLocal_952 = 0;
					iLocal_459 = 1008;
				}
				else if (Function_277(&iLocal_459 + 4) < 59.0f)
				{
					HUD_FADE_OUT(0.0f, 1f, 1);
					iLocal_459 = 1105;
					return 0;
				}
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/OUTBREAK_1_PT_2_SEQ/OUTBREAK_1_PT_2_SEQ"))
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				iLocal_459 = 1105;
				return 0;
			}
			Function_186(&Global_54076);
			Function_304(StackVal, "$/cutscene/OUTBREAK_1_PT_2_SEQ/OUTBREAK_1_PT_2_SEQ", &uLocal_656, Function_186(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			break;
		
		case 0x000003F0:
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				Function_292(0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				Function_298(&Global_54076, 0, 1);
				Function_279(&iLocal_459 + 4);
				return 1;
			}
			if (!iLocal_716)
			{
				if (IS_OBJECT_VALID(&iLocal_459 + 24))
				{
					DESTROY_OBJECT(&iLocal_459 + 24);
				}
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 160[12]);
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 160[22]);
				CUTSCENE_MANAGER_HIDE_ACTOR(&iLocal_4 + 160[02]);
				iLocal_716 = 1;
			}
			if (!iLocal_952)
			{
				iLocal_951++;
				if (iLocal_951 > 2)
				{
					Function_462(21, 0);
					iLocal_952 = 1;
				}
			}
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
			{
				Function_376(13, 0, 10, 0, 1);
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			Function_385(3, 4, 0, iLocal_950);
			if (CUTSCENE_MANAGER_CAN_SET_POST_CUTSCENE_POSES())
			{
				CUTSCENE_MANAGER_CLEAR_CAN_SET_POST_CUTSCENE_POSES();
				Function_241();
			}
			break;
		
		case 0x00000451:
			if (HUD_IS_FADED())
			{
				if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
				else if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					if (STREAMING_IS_WORLD_LOADED())
					{
						if (Function_342(Global_46914[1]))
						{
							if (Function_268())
							{
								if (Function_262(&iLocal_287))
								{
									if (!IS_LAYOUTREF_VALID(&iLocal_4))
									{
									}
								}
							}
						}
					}
				}
				else
				{
					if (!SQUAD_IS_VALID(&iLocal_4 + 216))
					{
						Function_254();
					}
					Function_298(&iLocal_4 + 160[12], 1, 1);
					Function_227(&iLocal_4 + 160[12], &iLocal_4 + 664[3], 1, 1, 1);
					DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 160[12]);
					SET_ACTOR_FACTION(&iLocal_4 + 160[12], 20);
					if (!IS_OBJECT_VALID(&uLocal_675))
					{
						uLocal_675 = CREATE_GRINGO_IN_LAYOUT(&uLocal_273, Function_135(), "DLC_Outbreak3", *(&iLocal_4 + 512[33]), *(&iLocal_4 + 512[33] + 12));
						SNAP_OBJECT_TO_GROUND(&uLocal_675, 1.0f, true, 1092616192);
						CREATE_DECAL(0, *(&iLocal_4 + 512[53]), 0,25f, 1, 1);
					}
					SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 160[12], &uLocal_675, "UseCase1", true, 0, 0);
					TASK_USE_GRINGO(&iLocal_4 + 160[12], GET_GRINGO_FROM_OBJECT(&uLocal_675), "UseCase1", 4294967295, 1);
					SET_PHYSINST_FROZEN(GET_PHYSINST_FROM_ACTOR(&iLocal_4 + 160[12]), true);
					if (IS_OBJECT_VALID(&uLocal_677))
					{
						DESTROY_OBJECT(&uLocal_677);
					}
					if (!IS_ACTOR_VALID(&iLocal_4 + 336[02]))
					{
						Function_239();
					}
					if (IS_OBJECT_VALID(&iLocal_459 + 24))
					{
						DESTROY_OBJECT(&iLocal_459 + 24);
					}
					Function_462(13, 1);
					Function_292(0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					DELETE_WEAPON_FROM_ACTOR(&Global_54076, 4);
					SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, 21);
					SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(22, false, false));
					SET_WEAPONENUM_LOCKED(16, 0);
					_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 12.0f, 0);
					Function_130(16, 0, 0);
					SET_WEAPONENUM_LOCKED(21, 0);
					SET_PLAYER_DEADEYE_POINTS(0, 100.0f, 0);
					Function_298(&Global_54076, 0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_376(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x12E37 / 77367
{
	int iVar0;
	bool bVar1;
	
	Function_127(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_377(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_125(StackVal, &bVar1, &bParam4);
		}
	}
}

void Function_377(int iParam0, int iParam1) //Position: 0x12EB1 / 77489
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_127(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_125(iParam0, &uVar0, &iParam1);
	return;
}

var Function_378(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x12EDA / 77530
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_135(), 1, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Zombie01_Outside02", 1, 1);
	}
	Function_379(&uVar0);
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

void Function_379(int iParam0) //Position: 0x12F66 / 77670
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_380(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 60.0f, 0);
	return;
}

void Function_380(int iParam0) //Position: 0x12F93 / 77715
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 28,43486f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-231,847f, 200,8657f, 1661,782f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,257949f, 2,647881f, -0,016713f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_381(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x13004 / 77828
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_135(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Zombie01_Outside01", 2, 1);
	}
	Function_382(&uVar0);
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

void Function_382(int iParam0) //Position: 0x13090 / 77968
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_384(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_383(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 5.0f, 0, 0);
	return;
}

void Function_383(int iParam0) //Position: 0x130CB / 78027
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,03296f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-100,3975f, 119,7329f, 1383,078f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,147675f, 0,188491f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_384(int iParam0) //Position: 0x13138 / 78136
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 36,03296f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-99,58214f, 119,8001f, 1380,495f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,147675f, 0,178642f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_385(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x131A5 / 78245
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	fVar0 = (TO_FLOAT(CUTSCENE_MANAGER_GET_CURRENT_FRAME()) / TO_FLOAT((CUTSCENE_MANAGER_GET_TOTAL_FRAMES() - iParam3)));
	bVar1 = false;
	bVar2 = (FLOOR((((TO_FLOAT(bParam1) - TO_FLOAT(bParam0)) * 60.0f) * fVar0)) + iParam2);
	while (bVar2 >= 60)
	{
		bVar1++;
		bVar2 = (bVar2 - 60);
	}
	bVar1 = (bVar1 + bParam0);
	if (bVar1 <= 0 && bVar2 <= 0)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(bVar1, bVar2, false));
	}
}

void Function_386() //Position: 0x13213 / 78355
{
	Function_139(&iLocal_719 + 8);
	RELEASE_LAYOUT_REF(&iLocal_719);
	return;
}

bool Function_387() //Position: 0x13228 / 78376
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Vector(-98,72256f, 118,1979f, 1733,032f);
	Var2 = Vector(-110,39f, 117,9389f, 1704,054f);
	Function_289(&iLocal_459, 1, 0);
	switch (iLocal_459)
	{
		case 0x000003E8:
			Function_275(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0,45f, 0);
			Function_458();
			iLocal_961 = &iLocal_719 + 144[02];
			iLocal_957 = &iLocal_719 + 144[12];
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&iLocal_961, 0);
			TASK_STAND_STILL(&iLocal_961, -1.0f, 0, 0);
			SET_ACTOR_UPDATE_PRIORITY(&iLocal_961, false);
			SET_ACTOR_UPDATE_PRIORITY(&iLocal_957, false);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_961);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_957);
			Function_453();
			iLocal_963 = &iLocal_719 + 192[02];
			iLocal_959 = &iLocal_719 + 192[12];
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&iLocal_963, 0);
			TASK_STAND_STILL(&iLocal_963, -1.0f, 0, 0);
			SET_ACTOR_UPDATE_PRIORITY(&iLocal_963, false);
			SET_ACTOR_UPDATE_PRIORITY(&iLocal_959, false);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_963);
			STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(&iLocal_959);
			fLocal_972 = ANIMAL_SPECIES_TUNING_GET_ATTRIB_FLOAT(23, 67, 0);
			ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT(23, 67, -1.0f, 0);
			Function_499(1);
			AUDIO_MUSIC_ONE_SHOT("INTRO_SONG_01_P1", "IDLE", 0.0f, 0.0f, 1, 1);
			if (!Function_244(&iLocal_459 + 4))
			{
				Function_242(&iLocal_459 + 4);
			}
			else
			{
				Function_279(&iLocal_459 + 4);
			}
			STREAMING_OVERRIDE_MAIN_POI(StackVal, StackVal, Vector(39,12394f, 120,3175f, 1315,23f), Vector(-0,509f, 112,706f, 0.0f));
			iLocal_459 = 1013;
			break;
		
		case 0x000003F5:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (Function_277(&iLocal_459 + 4) < 1.0f)
				{
					if (AUDIO_MUSIC_IS_PREPARED())
					{
						*(&iLocal_459 + 24) = Function_420(&iLocal_719, 0, &Global_54076, &iLocal_957, &iLocal_959, 1, 0, 0);
						if (IS_OBJECT_VALID(&iLocal_459 + 24))
						{
						}
						else
						{
							LOG_ERROR("Zombie01_Intro - Failed to create Zombie01_Intro_cutscene");
						}
						TELEPORT_ACTOR_WITH_HEADING(&iLocal_957, Var0, 79,61429f, 1, 1, true);
						TELEPORT_ACTOR_WITH_HEADING(&iLocal_959, Var2, 28,95583f, 1, 1, true);
						iLocal_953 = 0;
						iLocal_954 = 0;
						iLocal_955 = 0;
						STREAMING_RELEASE_MAIN_POI();
						Function_279(&iLocal_459 + 4);
						iLocal_459 = 1004;
					}
					else
					{
						Function_499(1);
						AUDIO_MUSIC_ONE_SHOT("INTRO_SONG_01_P1", "IDLE", 0.0f, 0.0f, 1, 1);
					}
				}
			}
			break;
		
		case 0x000003EC:
			if (Function_414())
			{
				uLocal_965 = Vector(-89,268f, 117,497f, 1379,306f);
				TELEPORT_ACTOR(&Global_54076, &uLocal_965, 1, 1, 1);
				iLocal_459 = 1005;
			}
			break;
		
		case 0x000003ED:
			if (HUD_IS_FADED() && Function_277(&iLocal_459 + 4) < 43.0f)
			{
				if (IS_OBJECT_VALID(&iLocal_459 + 24))
				{
					DESTROY_OBJECT(&iLocal_459 + 24);
				}
				Function_499(1);
				AUDIO_MUSIC_ONE_SHOT("INTRO_SONG_01_P2", "IDLE", 0.0f, 0.0f, 1, 1);
				Function_279(&iLocal_459 + 4);
				iLocal_459 = 1023;
			}
			break;
		
		case 0x000003FF:
			if (STREAMING_IS_WORLD_LOADED() && AUDIO_MUSIC_IS_PREPARED())
			{
				*(&iLocal_459 + 24) = Function_402(&iLocal_719, 0, &iLocal_959, 1, 0, 0);
				if (IS_OBJECT_VALID(&iLocal_459 + 24))
				{
				}
				else
				{
					LOG_ERROR("Zombie01_Intro - Failed to create Zombie01_Intro_cutscene");
				}
				AUDIO_MUSIC_PLAY_PREPARED();
				AUDIO_MUSIC_RELEASE_CONTROL(30000, 1);
				if (!Function_244(&iLocal_459 + 4))
				{
					Function_242(&iLocal_459 + 4);
				}
				else
				{
					Function_279(&iLocal_459 + 4);
				}
				STREAMING_RELEASE_MAIN_POI();
				STREAMING_UNLOAD_BOUNDS();
				Function_225(0, 1);
				HUD_FADE_IN(0.0f, 1065353216);
				iLocal_956 = 0;
				iLocal_975 = 0;
				iLocal_459 = 1006;
			}
			break;
		
		case 0x000003EE:
			if (Function_390() && Function_388())
			{
				Function_279(&iLocal_459 + 4);
				iLocal_459 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				if (IS_ACTOR_VALID(&iLocal_961))
				{
					DESTROY_ACTOR(&iLocal_961);
					DESTROY_ACTOR(&iLocal_957);
				}
				DESTROY_ACTOR(&iLocal_963);
				DESTROY_ACTOR(&iLocal_959);
				if (IS_ACTOR_VALID(&iLocal_719 + 288[02]))
				{
					DESTROY_ACTOR(&iLocal_719 + 288[02]);
				}
				if (IS_ACTOR_VALID(&iLocal_719 + 240[02]))
				{
					DESTROY_ACTOR(&iLocal_719 + 240[02]);
				}
				if (IS_ACTOR_VALID(&iLocal_719 + 240[12]))
				{
					DESTROY_ACTOR(&iLocal_719 + 240[12]);
				}
				UNK_0xE613AE52(0.0f);
				UNK_0xF55B50ED(0);
				if (IS_SWITCH())
				{
					UNK_0x6336182D("un_intro_logo");
				}
				else
				{
					UNK_0x6336182D("un_intro_logo_4K");
				}
				ANIMAL_SPECIES_TUNING_SET_ATTRIB_FLOAT(23, 67, fLocal_972, 0);
				if (bLocal_969)
				{
					DYNAMICMIXER_DETRIGGERSTATE(&uLocal_970, 0);
				}
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				uLocal_965 = Vector(-89,268f, 117,497f, 1379,306f);
				TELEPORT_ACTOR(&Global_54076, &uLocal_965, 1, 1, 1);
				AI_STOP_IGNORING_ACTORS();
				CLEAR_AMBIENT_ALL_RESTRICTIONS();
				if (IS_OBJECT_VALID(&uLocal_677))
				{
					DESTROY_OBJECT(&uLocal_677);
				}
				STREAMING_RELEASE_MAIN_POI();
				STREAMING_UNLOAD_BOUNDS();
				uLocal_965 = Vector(-89,268f, 117,497f, 1379,306f);
				TELEPORT_ACTOR(&Global_54076, &uLocal_965, 1, 1, 1);
				Function_292(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				HUD_TIMER_DISPLAY(0);
				DECOR_REMOVE(&Global_54076, "__CameraReady");
				if (IS_OBJECT_VALID(&iLocal_459 + 24))
				{
					DESTROY_OBJECT(&iLocal_459 + 24);
				}
				iLocal_459 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				AUDIO_MUSIC_FORCE_TRACK("NRT_ZMB_SONG_01", "SILENT", 0.0f, 4294967295, 750, 3212836864, 0);
				UI_EXIT("Splash_Message_OverFade");
				iLocal_459 = 1104;
			}
			break;
	}
	return 0;
}

int Function_388() //Position: 0x137F5 / 79861
{
	switch (iLocal_975)
	{
		case 0x00000000:
			UNK_0xE613AE52(0.0f);
			UNK_0x84F3DD81(0.0f, 0.0f);
			if (GET_CAMERA_ASPECT_RATIO(GET_GAME_CAMERA()) > 1,4f)
			{
				UNK_0x3A6960B2(0,33f);
			}
			else
			{
				UNK_0x3A6960B2(0,5f);
			}
			if (IS_SWITCH())
			{
				UNK_0x6336182D("un_intro_rgp");
			}
			else
			{
				UNK_0x6336182D("un_intro_rgp_4K");
			}
			UNK_0xF55B50ED(1);
			iLocal_975 = 6;
			break;
		
		case 0x00000006:
			if (Function_277(&iLocal_459 + 4) < 0,5f)
			{
				fLocal_973 = 0.0f;
				fLocal_974 = GET_CURRENT_GAME_TIME();
				UNK_0xE613AE52(0.0f);
				if (IS_SWITCH())
				{
					UNK_0x6336182D("un_intro_rgp");
				}
				else
				{
					UNK_0x6336182D("un_intro_rgp_4K");
				}
				iLocal_975 = 7;
			}
			break;
		
		case 0x00000007:
			Function_389(fLocal_974, 1);
			if (Function_277(&iLocal_459 + 4) < 3.0f)
			{
				fLocal_974 = GET_CURRENT_GAME_TIME();
				iLocal_975 = 8;
			}
			break;
		
		case 0x00000008:
			Function_389(fLocal_974, 0);
			if (Function_277(&iLocal_459 + 4) < 7,5f)
			{
				fLocal_973 = 0.0f;
				fLocal_974 = GET_CURRENT_GAME_TIME();
				if (IS_SWITCH())
				{
					UNK_0x6336182D("un_intro_rsdp");
				}
				else
				{
					UNK_0x6336182D("un_intro_rsdp_4K");
				}
				UNK_0xE613AE52(fLocal_973);
				UNK_0xF55B50ED(1);
				iLocal_975 = 9;
			}
			break;
		
		case 0x00000009:
			Function_389(fLocal_974, 1);
			if (Function_277(&iLocal_459 + 4) < 10.0f)
			{
				fLocal_974 = GET_CURRENT_GAME_TIME();
				iLocal_975 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_389(fLocal_974, 0);
			if (Function_277(&iLocal_459 + 4) < 17,45f)
			{
				fLocal_973 = 1.0f;
				fLocal_974 = GET_CURRENT_GAME_TIME();
				UNK_0xE613AE52(fLocal_973);
				UNK_0xF55B50ED(1);
				if (GET_CAMERA_ASPECT_RATIO(GET_GAME_CAMERA()) > 1,4f)
				{
					UNK_0x3A6960B2(0,56f);
				}
				else
				{
					UNK_0x3A6960B2(0,85f);
				}
				if (IS_SWITCH())
				{
					UNK_0x6336182D("un_intro_logo");
				}
				else
				{
					UNK_0x6336182D("un_intro_logo_4K");
				}
				iLocal_975 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_186(&Global_54076);
			Function_304(StackVal, "$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ", &uLocal_656, Function_186(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			if (Function_277(&iLocal_459 + 4) < 21,5f)
			{
				fLocal_974 = GET_CURRENT_GAME_TIME();
				iLocal_975 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_389(fLocal_974, 0);
			Function_186(&Global_54076);
			Function_304(StackVal, "$/cutscene/OUTBREAK_1_PT_1_SEQ/OUTBREAK_1_PT_1_SEQ", &uLocal_656, Function_186(&Global_54076), 1, 75.0f, 150.0f, 2, 1, 2, 2, 1, 1);
			if (Function_277(&iLocal_459 + 4) < 22.0f)
			{
				UNK_0xE613AE52(0.0f);
				UNK_0xF55B50ED(0);
				return 1;
				iLocal_975 = 106;
			}
			break;
	}
	return 0;
}

void Function_389(float fParam0, bool bParam1) //Position: 0x13B17 / 80663
{
	if (bParam1)
	{
		if (fLocal_973 > 1.0f)
		{
			fLocal_973 = ((GET_CURRENT_GAME_TIME() - fParam0) / 0,5f);
			if (fLocal_973 < 1.0f)
			{
				fLocal_973 = 1.0f;
			}
			UNK_0xE613AE52(fLocal_973);
		}
	}
	else if (fLocal_973 < 0.0f)
	{
		fLocal_973 = ((fParam0 + 0,5f) - GET_CURRENT_GAME_TIME());
		fLocal_973 = (fLocal_973 / 0,5f);
		if (fLocal_973 > 0.0f)
		{
			fLocal_973 = 0.0f;
		}
		UNK_0xE613AE52(fLocal_973);
	}
	return;
}

int Function_390() //Position: 0x13B83 / 80771
{
	if (IS_ACTOR_VALID(&iLocal_957))
	{
		Function_233(&iLocal_957);
		STREAMING_LOAD_BOUNDS_EXT(0, Function_233(&iLocal_957), 50.0f, 1);
	}
	if (IS_ACTOR_VALID(&iLocal_959))
	{
		Function_233(&iLocal_959);
		STREAMING_LOAD_BOUNDS_EXT(1, Function_233(&iLocal_959), 50.0f, 1);
	}
	if (IS_ACTOR_VALID(&iLocal_719 + 240[02]))
	{
		STREAMING_LOAD_BOUNDS_EXT(StackVal, 2,802597E-45f, Vector(-103,691f, 120,277f, 1362,156f), 50.0f, 1);
	}
	switch (iLocal_956)
	{
		case 0x00000000:
			if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_957, false) != &iLocal_961)
			{
				SET_ACTOR_IN_VEHICLE(&iLocal_961, &iLocal_957, false);
			}
			if (GET_ACTOR_IN_VEHICLE_SEAT(&iLocal_959, false) != &iLocal_963)
			{
				SET_ACTOR_IN_VEHICLE(&iLocal_963, &iLocal_959, false);
			}
			Function_399();
			SNAP_ACTOR_TO_GRINGO(&iLocal_719 + 240[02], &iLocal_719 + 848, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&iLocal_719 + 240[02], GET_GRINGO_FROM_OBJECT(&iLocal_719 + 848), "UseCase1", 4294967295, 1);
			SNAP_ACTOR_TO_GRINGO(&iLocal_719 + 240[12], &iLocal_719 + 856, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&iLocal_719 + 240[12], GET_GRINGO_FROM_OBJECT(&iLocal_719 + 856), "UseCase1", 4294967295, 1);
			iLocal_956 = 6;
			break;
		
		case 0x00000006:
			Function_186(&iLocal_719 + 456[3]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186(&iLocal_719 + 456[3]), 50.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 1.0f)
			{
				Function_394(&iLocal_961, &iLocal_957, &iLocal_719 + 456[3], &iLocal_719 + 872, 1, 4, 6.0f, 1);
				Function_227(&Global_54076, &iLocal_719 + 696[0], 1, 1, 1);
				iLocal_956 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_277(&iLocal_459 + 4) < 10,5f)
			{
				DESTROY_ACTOR(&iLocal_961);
				DESTROY_ACTOR(&iLocal_957);
				Function_227(&iLocal_959, &iLocal_719 + 640[3], 1, 1, 1);
				TASK_GO_NEAR_OBJECT(&iLocal_963, &iLocal_719 + 640[4], 2.0f, 2, 0, 1);
				AI_ACTOR_FORCE_SPEED(&iLocal_963, 2);
				SET_ACTOR_SPEED(&iLocal_963, 8.0f);
				SET_ACTOR_SPEED(&iLocal_959, 8.0f);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(false, &iLocal_959), 2);
				AI_ACTOR_FORCE_SPEED(GET_DRAFT_ACTOR(true, &iLocal_959), 2);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(false, &iLocal_959), 8.0f);
				SET_ACTOR_SPEED(GET_DRAFT_ACTOR(true, &iLocal_959), 8.0f);
				AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&iLocal_963, 0);
				AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&iLocal_959, 0);
				iLocal_956 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_277(&iLocal_459 + 4) < 12,5f)
			{
				TASK_STAND_STILL(&iLocal_963, -1.0f, 0, 0);
				iLocal_956 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_277(&iLocal_459 + 4) < 14.0f)
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&iLocal_963, 0);
				Function_391(&iLocal_963);
				iLocal_956 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_277(&iLocal_459 + 4) < 17,4f)
			{
				STREAMING_UNLOAD_BOUNDS();
				HUD_FADE_OUT(0.0f, 1.0f, 0);
				iLocal_956 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_277(&iLocal_459 + 4) < 22.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_391(int iParam0) //Position: 0x13E81 / 81537
{
	var uVar0;
	var uVar2;
	struct<2> Var4;
	
	ACTOR_DISMOUNT_NOW(&iParam0);
	uVar0 = Vector(-1.0f, 0.0f, 0,25f);
	UNK_0xB89CC342(&iParam0, &uVar0, &uVar2);
	Function_393(&uVar2, &Var4);
	TELEPORT_ACTOR_WITH_HEADING(&iParam0, Var4, Function_392(&iParam0), 1, 1, true);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iParam0, &iLocal_719 + 912, 1, 1, 0, 1, false);
	ACTOR_POP_NEXT_GAIT(&iParam0, 1, false);
	return;
}

var Function_392(int iParam0) //Position: 0x13ED8 / 81624
{
	return GET_HEADING(&iParam0);
}

int Function_393(vector3 vParam0) //Position: 0x13EE4 / 81636
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_77(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_77(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_394(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7) //Position: 0x13F5A / 81754
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("bad wagon!");
		return;
	}
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("invalid driver!");
		return;
	}
	if (&bParam4)
	{
		Function_227(&iParam1, &uParam2, 0, 0, 0);
	}
	START_VEHICLE(&iParam1);
	AI_CLEAR_NAV_MATERIAL_USAGE(&iParam0);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iParam0, &uParam3, &bParam5, 1, 0, 0, false);
	AI_ACTOR_FORCE_SPEED(&iParam0, &bParam5);
	ACTOR_POP_NEXT_GAIT(&iParam0, 3, false);
	SET_ACTOR_SPEED(&iParam0, &fParam6);
	if (&bParam7)
	{
		Function_395(&iParam1, &bParam5, &fParam6, &uParam3);
	}
}

void Function_395(int iParam0, bool bParam1, float fParam2, var uParam3) //Position: 0x14000 / 81920
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	var uVar4;
	
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&iParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &iParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_ACTOR_FORCE_SPEED(&uVar1, bParam1);
			SET_ACTOR_SPEED(&uVar1, fParam2);
			ACTOR_POP_NEXT_GAIT(&uVar1, 4, false);
			SET_ACTOR_INVULNERABILITY(&uVar1, true);
		}
		bVar0++;
	}
	SET_VEHICLE_ALLOWED_TO_DRIVE(&iParam0, 1);
	SET_ACTOR_SPEED(&iParam0, fParam2);
	GET_PATH_POINT(&uParam3, Function_396(&iParam0, &uParam3), &Var2);
	Function_233(&iParam0);
	uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Function_233(&iParam0), Var2, StackVal);
	SET_PROP_VELOCITY(GET_PHYSINST_FROM_ACTOR(&iParam0), &uVar4);
}

var Function_396(var uParam0, int iParam1) //Position: 0x1408C / 82060
{
	bool bVar0;
	struct<2> Var1;
	
	bVar0 = false;
	bVar0 = Function_398(&uParam0, &iParam1);
	GET_PATH_POINT(&iParam1, bVar0, &Var1);
	if (Function_397(StackVal, &uParam0, Var1) < 0.0f)
	{
		bVar0++;
	}
	if (bVar0 > GET_PATH_NUM_POINTS(&iParam1))
	{
		bVar0 = (GET_PATH_NUM_POINTS(&iParam1) - 1);
	}
	return bVar0;
}

float Function_397(var uParam0, struct<2> Param1) //Position: 0x140D6 / 82134
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	int iVar6;
	
	if (GET_OBJECT_AXIS(&uParam0, &uVar2, 2))
	{
		GET_OBJECT_POSITION(&uParam0, &Var0);
		uVar4 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
		iVar6 = VDOT(&uVar4, &uVar2);
	}
	return iVar6;
}

int Function_398(int iParam0, bool bParam1) //Position: 0x14108 / 82184
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
		Function_233(&iParam0);
		bVar5 = VDIST(Function_233(&iParam0), Var1);
		if (bVar5 > bVar4)
		{
			bVar3 = bVar0;
			bVar4 = bVar5;
		}
		bVar0++;
	}
	return bVar3;
}

void Function_399() //Position: 0x1415F / 82271
{
	*(&iLocal_719 + 280) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_719, "FamilyGroupset", 0);
	*(&iLocal_719 + 240[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "SonIntro", 638, Vector(-98,85898f, 118,1876f, 1736,197f), Vector(0.0f, 8,498847f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_719 + 280, &iLocal_719 + 240[02]);
	*(&iLocal_719 + 240[12]) = Function_400(StackVal, StackVal, &iLocal_719, "nWifeIntro", 698, Function_135(), 976, Vector(-98,72256f, 118,1979f, 1733,032f), Vector(0.0f, 79,61429f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_719 + 280, &iLocal_719 + 240[12]);
	return;
}

int Function_400(var uParam0, var uParam1, bool bParam2, var uParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x14220 / 82464
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_401(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_401(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		DESTROY_ACTOR(&uVar1);
		return "";
	}
	ACCESSORIZE_HORSE(&uVar1, 3);
	ACTOR_MOUNT_ACTOR(&uVar0, &uVar1);
	return &uVar0;
}

bool Function_401(bool bParam0) //Position: 0x14358 / 82776
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_402(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x1436F / 82799
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_135(), 10, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Zombie01_Intro02", 10, 1);
	}
	Function_403(&uVar0, &uParam2);
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

void Function_403(var uParam0, var uParam1) //Position: 0x143FE / 82942
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_413(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_412(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_411(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_410(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_409(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_408(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 6);
	Function_407(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 7);
	Function_406(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 8);
	Function_405(&uVar0, &uParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 9);
	Function_404(&uVar0, &uParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 4.0f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 2, 3, 3.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 4, 5, 4.0f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 6, 7, 3.0f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 8, 9, 4.0f, 4, 0);
	return;
}

void Function_404(int iParam0, int iParam1) //Position: 0x144F6 / 83190
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 23,93401f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(3,441198f, 1,224381f, -0,807036f), Vector(0,432583f, 63,79438f, 0,707775f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,004326f, 0,775918f, -0,031697f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_405(int iParam0, int iParam1) //Position: 0x14588 / 83336
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 23,93401f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(3,555627f, 1,221698f, -0,630054f), Vector(0,402044f, 64,4856f, 0,715796f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,004326f, 0,787993f, -0,031697f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_406(int iParam0) //Position: 0x1461A / 83482
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 25,88194f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-105,9294f, 119,7099f, 1408,374f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,030365f, 0,124689f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_407(int iParam0) //Position: 0x1468F / 83599
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 25,88194f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-106,1009f, 119,701f, 1408,689f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,030365f, 0,143723f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_408(int iParam0) //Position: 0x14704 / 83716
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,11528f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-115,8965f, 121,0091f, 1353,614f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,010622f, -2,178065f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_409(int iParam0) //Position: 0x14779 / 83833
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,11528f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-116,4481f, 121,0018f, 1353,229f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,010622f, -2,178065f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_410(int iParam0) //Position: 0x147EE / 83950
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 39,9631f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-114,3837f, 120,9872f, 1367,108f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,01545f, 3,101486f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_411(int iParam0) //Position: 0x14863 / 84067
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 39,9631f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-114,3751f, 120,9908f, 1366,876f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,01545f, 3,103958f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_412(int iParam0) //Position: 0x148D8 / 84184
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 37,2252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-164,2681f, 131,4014f, 1294,022f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,020975f, -2,094627f, -0,015359f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_413(var uParam0) //Position: 0x14951 / 84305
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 37,2252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(-163,2467f, 131,4335f, 1292,188f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,020975f, -2,078669f, -0,015359f), 1);
	RESET_CAMERASHOT_TARGET(&uParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

bool Function_414() //Position: 0x149CA / 84426
{
	if (IS_ACTOR_VALID(&iLocal_957))
	{
		Function_233(&iLocal_957);
		STREAMING_LOAD_BOUNDS_EXT(0, Function_233(&iLocal_957), 100.0f, 1);
	}
	if (IS_ACTOR_VALID(&iLocal_959))
	{
		Function_233(&iLocal_959);
		STREAMING_LOAD_BOUNDS_EXT(1, Function_233(&iLocal_959), 100.0f, 1);
	}
	Function_419();
	Function_417();
	switch (iLocal_953)
	{
		case 0x00000000:
			Function_227(&Global_54076, &iLocal_719 + 696[3], 1, 1, 1);
			SET_ACTOR_IN_VEHICLE(&iLocal_961, &iLocal_957, false);
			SET_ACTOR_IN_VEHICLE(&iLocal_963, &iLocal_959, false);
			Function_416(&iLocal_959, 0);
			HUD_FADE_IN(1.0f, 1065353216);
			AUDIO_MUSIC_PLAY_PREPARED();
			AUDIO_MUSIC_RELEASE_CONTROL(47000, 1);
			iLocal_953 = 6;
			break;
		
		case 0x00000006:
			Function_186(&iLocal_719 + 456[0]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186(&iLocal_719 + 456[0]), 100.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 2.0f)
			{
				Function_394(&iLocal_961, &iLocal_957, &iLocal_719 + 456[0], &iLocal_719 + 888, 0, 4, 0x41000000, 1);
				Function_227(&Global_54076, &iLocal_719 + 696[5], 1, 1, 1);
				iLocal_953 = 7;
			}
			break;
		
		case 0x00000007:
			Function_186(&iLocal_719 + 640[0]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186(&iLocal_719 + 640[0]), 100.0f, 1);
			if (Function_277(&iLocal_459 + 4) < (8.0f - 1,5f) && !IS_OBJECT_VALID(&uLocal_677))
			{
				uLocal_677 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(StackVal, &iLocal_719, Function_135(), "env_lightningForked_stormy", Vector(-174,437f, 147,041f, 1709,752f));
				UNK_0x6745191B(StackVal, &uLocal_677, Vector(0.0f, 0.0f, 0.0f));
			}
			if (Function_277(&iLocal_459 + 4) <= 6.0f && !bLocal_969)
			{
				DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE_CUTSCENE_INGAME_INTRO", &uLocal_970);
				bLocal_969 = true;
			}
			if (Function_277(&iLocal_459 + 4) < 8.0f)
			{
				Function_394(&iLocal_963, &iLocal_959, &iLocal_719 + 640[0], &iLocal_719 + 864, 0, 4, 0x41000000, 1);
				iLocal_968 = 0;
				iLocal_953 = 8;
			}
			break;
		
		case 0x00000008:
			Function_186(&iLocal_719 + 456[1]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186(&iLocal_719 + 456[1]), 100.0f, 1);
			if (Function_277(&iLocal_459 + 4) < (12.0f - 2.0f) && !iLocal_968)
			{
				iLocal_968 = 1;
				Function_227(&Global_54076, &iLocal_719 + 696[2], 1, 1, 1);
			}
			if (Function_277(&iLocal_459 + 4) < (12.0f - 0,5f) && !DECOR_CHECK_EXIST(&iLocal_959, "bVisible"))
			{
				Function_416(&iLocal_959, 1);
				DECOR_SET_BOOL(&iLocal_959, "bVisible", true);
			}
			if (Function_277(&iLocal_459 + 4) < 12.0f)
			{
				Function_227(&iLocal_957, &iLocal_719 + 456[1], 0, 0, 0);
				TASK_STAND_STILL(&iLocal_961, -1.0f, 0, 0);
				iLocal_953 = 9;
			}
			break;
		
		case 0x00000009:
			Function_186(&iLocal_719 + 456[1]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186(&iLocal_719 + 456[1]), 100.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 12,5f)
			{
				Function_394(&iLocal_961, &iLocal_957, &iLocal_719 + 456[1], &iLocal_719 + 896, 0, 4, 0x41000000, 1);
				iLocal_953 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_186(&iLocal_719 + 456[1]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186(&iLocal_719 + 456[1]), 50.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 16.0f)
			{
				Function_227(&iLocal_959, &iLocal_719 + 640[1], 1, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(&iLocal_963, 1);
				TASK_STAND_STILL(&iLocal_963, -1.0f, 0, 0);
				Function_227(&Global_54076, &iLocal_719 + 696[1], 1, 1, 1);
				iLocal_953 = 11;
			}
			break;
		
		case 0x0000000B:
			Function_186(&iLocal_719 + 640[1]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186(&iLocal_719 + 640[1]), 50.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 22.0f)
			{
				Function_394(&iLocal_963, &iLocal_959, &iLocal_719 + 640[1], &iLocal_719 + 904, 0, 4, 0x41000000, 1);
				Function_227(&Global_54076, &iLocal_719 + 696[1], 1, 1, 1);
				iLocal_953 = 12;
			}
			break;
		
		case 0x0000000C:
			Function_186(&iLocal_719 + 640[1]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186(&iLocal_719 + 640[1]), 50.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 26.0f)
			{
				Function_227(&Global_54076, &iLocal_719 + 696[0], 1, 1, 1);
				Function_227(&iLocal_957, &iLocal_719 + 456[3], 1, 1, 1);
				TASK_STAND_STILL(&iLocal_961, -1.0f, 0, 0);
				iLocal_953 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_186(&iLocal_719 + 640[3]);
			STREAMING_LOAD_BOUNDS_EXT(2, Function_186(&iLocal_719 + 640[3]), 50.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 31.0f)
			{
				Function_394(&iLocal_961, &iLocal_957, &iLocal_719 + 456[3], &iLocal_719 + 880, 0, 4, 0x41000000, 1);
				iLocal_953 = 14;
			}
			break;
		
		case 0x0000000E:
			Function_186(&iLocal_719 + 640[2]);
			STREAMING_LOAD_BOUNDS_EXT(3, Function_186(&iLocal_719 + 640[2]), 50.0f, 1);
			if (Function_277(&iLocal_459 + 4) < 34.0f)
			{
				Function_394(&iLocal_963, &iLocal_959, &iLocal_719 + 640[2], &iLocal_719 + 880, 1, 4, 0x41000000, 1);
				Function_415();
				TASK_GO_NEAR_OBJECT(&iLocal_719 + 288[02], &iLocal_719 + 776, 2.0f, 2, 1, 1);
				TASK_PRIORITY_SET(&iLocal_719 + 288[02], true);
				iLocal_953 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_277(&iLocal_459 + 4) < 40.0f)
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
				if (bLocal_969)
				{
					DYNAMICMIXER_DETRIGGERSTATE(&uLocal_970, 0);
				}
				iLocal_953 = 25;
			}
			break;
		
		case 0x00000019:
			if (Function_277(&iLocal_459 + 4) < 40,5f)
			{
				STREAMING_OVERRIDE_MAIN_POI(StackVal, StackVal, Vector(-163,9361f, 131,6873f, 1289,087f), Vector(-1,637f, -121,672f, -0,88f));
				TASK_STAND_STILL(&iLocal_961, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_963, -1.0f, 0, 0);
				DESTROY_ACTOR(&iLocal_719 + 288[02]);
				STREAMING_UNLOAD_BOUNDS();
				return 1;
			}
			break;
	}
	return 0;
}

void Function_415() //Position: 0x14FC6 / 85958
{
	(&iLocal_719 + 312) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_719, "CougarGroupset", 0);
	*(&iLocal_719 + 288[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "CougarZombie", 1244, Vector(-128,6675f, 119,0184f, 1559,332f), Vector(0.0f, 24,98631f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_719 + 312, &iLocal_719 + 288[02]);
	return;
}

void Function_416(int iParam0, bool bParam1) //Position: 0x1503C / 86076
{
	bool bVar0;
	var uVar1;
	
	SET_DRAW_ACTOR(&iParam0, bParam1);
	if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(&iParam0, false)))
	{
		SET_DRAW_ACTOR(GET_ACTOR_IN_VEHICLE_SEAT(&iParam0, false), bParam1);
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFT_POSITIONS(&iParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &iParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_DRAW_ACTOR(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_417() //Position: 0x15096 / 86166
{
	switch (iLocal_955)
	{
		case 0x00000000:
			if (Function_277(&iLocal_459 + 4) < 7,25f)
			{
				Function_418("nZINTRO_01", -1.0f, 0, 2, 1, 0);
				iLocal_955 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_277(&iLocal_459 + 4) < 12,5f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_955 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_277(&iLocal_459 + 4) < 13.0f)
			{
				Function_418("nZINTRO_02", -1.0f, 0, 2, 1, 0);
				iLocal_955 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_277(&iLocal_459 + 4) < 18.0f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_955 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_277(&iLocal_459 + 4) < 18,75f)
			{
				Function_418("nZINTRO_03", -1.0f, 0, 2, 1, 0);
				iLocal_955 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_277(&iLocal_459 + 4) < 22,5f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_955 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_277(&iLocal_459 + 4) < 23.0f)
			{
				Function_418("nZINTRO_04", -1.0f, 0, 2, 1, 0);
				iLocal_955 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_277(&iLocal_459 + 4) < 30,25f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_955 = 13;
			}
			break;
		
		case 0x0000000D:
			if (Function_277(&iLocal_459 + 4) < 31.0f)
			{
				Function_418("nZINTRO_05", -1.0f, 0, 2, 1, 0);
				iLocal_955 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_277(&iLocal_459 + 4) < 34.0f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_955 = 15;
			}
			break;
		
		case 0x0000000F:
			if (Function_277(&iLocal_459 + 4) < 36,25f)
			{
				Function_418("nZINTRO_06", -1.0f, 0, 2, 1, 0);
				iLocal_955 = 16;
			}
			break;
		
		case 0x00000010:
			if (Function_277(&iLocal_459 + 4) < 38,5f)
			{
				HUD_CLEAR_SMALL_TEXT_QUEUE();
				iLocal_955 = 106;
			}
			break;
	}
	return;
}

void Function_418(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x152A0 / 86688
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
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

void Function_419() //Position: 0x15325 / 86821
{
	switch (iLocal_954)
	{
		case 0x00000000:
			if (Function_277(&iLocal_459 + 4) < (2.0f + 0,5f))
			{
				Function_395(&iLocal_957, 4, 8.0f, &iLocal_719 + 888);
				iLocal_954 = 6;
			}
			break;
		
		case 0x00000006:
			if (Function_277(&iLocal_459 + 4) < (8.0f + 1,5f))
			{
				Function_395(&iLocal_959, 4, 8.0f, &iLocal_719 + 864);
				iLocal_954 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_277(&iLocal_459 + 4) < (12,5f + 0,5f))
			{
				Function_395(&iLocal_957, 4, 8.0f, &iLocal_719 + 896);
				iLocal_954 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_277(&iLocal_459 + 4) < (22.0f + 0,5f))
			{
				Function_395(&iLocal_959, 4, 8.0f, &iLocal_719 + 904);
				iLocal_954 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_277(&iLocal_459 + 4) < (31.0f + 0,5f))
			{
				Function_395(&iLocal_957, 4, 8.0f, &iLocal_719 + 880);
				iLocal_954 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_277(&iLocal_459 + 4) < (34.0f + 0,5f))
			{
				Function_395(&iLocal_959, 4, 8.0f, &iLocal_719 + 880);
				iLocal_954 = 106;
			}
			break;
	}
	return;
}

var Function_420(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, var uParam7) //Position: 0x15483 / 87171
{
	var uVar0;
	
	if (&bParam5)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_135(), 31, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Zombie01_Intro", 31, 1);
	}
	Function_421(&uVar0, &uParam2, &uParam3, &uParam4);
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
			PLAY_CUTSCENEOBJECT(&uVar0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
		}
	}
	return &uVar0;
}

void Function_421(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x15516 / 87318
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_452(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_451(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_450(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 3);
	Function_449(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 4);
	Function_448(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 5);
	Function_447(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 6);
	Function_446(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 7);
	Function_445(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 8);
	Function_444(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 9);
	Function_443(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 10);
	Function_442(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 11);
	Function_441(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 12);
	Function_440(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 13);
	Function_439(&uVar0, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 14);
	Function_438(&uVar0, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 15);
	Function_437(&uVar0, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 16);
	Function_436(&uVar0, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 17);
	Function_435(&uVar0, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 18);
	Function_434(&uVar0, &uParam2);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 19);
	Function_433(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 20);
	Function_432(&uVar0, &uParam3);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 21);
	Function_431(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 22);
	Function_430(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 23);
	Function_429(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 24);
	Function_428(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 25);
	Function_427(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 26);
	Function_426(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 27);
	Function_425(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 28);
	Function_424(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 29);
	Function_423(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 30);
	Function_422(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_DECORATOR(&uParam0, 0, &uParam1, "__CameraReady", 0, 0, 0.0f);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 0, 1, 2,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 2, 3, 2,5f, 2, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 4, 5, 2,5f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 6, 7, 4.0f, 4, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 8, 1.0f, 5);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 9, 10, 2.0f, 6, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 11, 12, 4.0f, 7, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 13, 14, 1.0f, 8, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 15, 16, 3.0f, 9, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 17, 18, 2.0f, 10, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 19, 1.0f, 11);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&uParam0, 20, 4.0f, 12);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&uParam0, 21, 22, 2.0f, 13, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 23, 24, 2.0f, 14, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 25, 26, 2.0f, 15, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 27, 28, 3.0f, 16, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&uParam0, 29, 30, 2.0f, 17, 0);
}

void Function_422(int iParam0) //Position: 0x15867 / 88167
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 38,82442f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-122,8229f, 126,9981f, 1534,267f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,825664f, 0,797489f, -0,063715f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_423(int iParam0) //Position: 0x158E0 / 88288
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 38,82442f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-122,8229f, 126,9981f, 1534,267f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,86559f, 0,782259f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_424(int iParam0) //Position: 0x15955 / 88405
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-136,7268f, 121,3001f, 1560,136f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,06306f, -0,268019f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_425(int iParam0) //Position: 0x159CA / 88522
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-137,6447f, 121,3469f, 1560,648f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,06306f, -0,268019f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_426(int iParam0) //Position: 0x15A3F / 88639
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-113,3634f, 119,2625f, 1432,468f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,068206f, 2,995783f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_427(int iParam0) //Position: 0x15AB4 / 88756
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-113,2732f, 119,1296f, 1430,513f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,068206f, 2,995783f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_428(int iParam0) //Position: 0x15B29 / 88873
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,0299f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-382,7564f, 145,0078f, 1357,588f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,08349f, -1,06691f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_429(int iParam0) //Position: 0x15B9E / 88990
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,0299f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-382,2203f, 144,5053f, 1357,291f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,08349f, -1,06691f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_430(int iParam0) //Position: 0x15C13 / 89107
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 16,75354f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-355,0955f, 137,4087f, 1342,875f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,138792f, 2,222839f, 1E-06f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_431(int iParam0) //Position: 0x15C84 / 89220
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 16,75354f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-354,9489f, 137,3454f, 1342,296f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,138792f, 2,186475f, 1E-06f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_432(int iParam0, int iParam1) //Position: 0x15CF5 / 89333
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 28,07796f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,275767f, 0,769731f, -7,145361f), Vector(17,91685f, 175,8783f, 0,709837f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,348552f, -0,597201f, 0,006745f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_433(int iParam0, int iParam1) //Position: 0x15D87 / 89479
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 21,00769f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,823505f, 0,420028f, -7,119478f), Vector(4,706676f, -166,8265f, -0,114076f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,089357f, -0,385611f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_434(int iParam0, int iParam1) //Position: 0x15E15 / 89621
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,308218f, 2,93f, -1,831971f), Vector(-10,25594f, -8,223491f, -1,760241f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,163453f, -1,321959f, -0,007228f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_435(int iParam0, int iParam1) //Position: 0x15EA7 / 89767
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,308218f, 2,93f, -1,831971f), Vector(-10,25594f, -8,223491f, -1,760241f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,163453f, -1,321959f, -0,007228f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_436(int iParam0, int iParam1) //Position: 0x15F39 / 89913
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,368544f, 2,505008f, -2,817437f), Vector(14,85605f, 149,0269f, 1,704492f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,298626f, -1,071758f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_437(int iParam0, int iParam1) //Position: 0x15FC7 / 90055
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 17,53701f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(0,505638f, 2,434298f, -3,031056f), Vector(12,50784f, 147,342f, 1,752277f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,2568f, -1,100172f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_438(int iParam0, int iParam1) //Position: 0x16055 / 90197
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-4,083646f, 1,166111f, -2,727159f), Vector(-3,039999f, -138,4459f, -0,913295f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,031558f, 0,202027f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_439(int iParam0, int iParam1) //Position: 0x160E3 / 90339
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15.0f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-4,560697f, 1,268597f, -7,660202f), Vector(-0,727198f, -135,1523f, -0,982107f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,007851f, 0,260145f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_440(int iParam0) //Position: 0x16171 / 90481
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 27,93789f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-235,9659f, 132,1998f, 1317,964f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,092178f, -0,495739f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_441(int iParam0) //Position: 0x161E6 / 90598
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 27,93789f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-236,3858f, 132,2711f, 1318,556f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,098692f, -0,475985f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_442(int iParam0, int iParam1) //Position: 0x1625B / 90715
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,58285f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(4,458053f, 0,847403f, 1,857898f), Vector(-2,412897f, 106,1102f, 0,788906f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,036813f, -1,811551f, -0,011358f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_443(int iParam0, int iParam1) //Position: 0x162ED / 90861
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,56265f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(3,451633f, 1,068114f, -6,565561f), Vector(-2,623803f, 114,6761f, 0,727656f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,04215f, -1,662401f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_444(int iParam0, int iParam1) //Position: 0x1637B / 91003
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 15,92159f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(1,072242f, 0,392939f, -6,686222f), Vector(-1,8789f, 163,3209f, 0,323893f), Vector(0.0f, 0.0f, 0.0f), 0);
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,020863f, -0,813795f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_445(int iParam0) //Position: 0x16409 / 91145
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,45504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-190,3892f, 139,4305f, 1705,412f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,274532f, -1,817516f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_446(int iParam0) //Position: 0x1647E / 91262
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 46,45504f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-190,975f, 139,5952f, 1704,511f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,215081f, -1,772147f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_447(int iParam0) //Position: 0x164F3 / 91379
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 39,20287f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-271,5614f, 150,0491f, 1683,264f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,087707f, -1,729516f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_448(int iParam0) //Position: 0x16568 / 91496
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 39,1936f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-274,3018f, 150,2933f, 1682,822f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,087707f, -1,729516f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_449(int iParam0) //Position: 0x165DD / 91613
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,66177f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-204,3413f, 130,6037f, 1616,557f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,016896f, -0,358849f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_450(int iParam0) //Position: 0x16652 / 91730
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 43,66177f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-203,5676f, 130,5971f, 1617,211f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,016896f, -0,312649f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_451(int iParam0) //Position: 0x166C7 / 91847
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 47,97706f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(38,92046f, 120,3155f, 1315,316f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,008875f, 1,967088f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_452(var uParam0) //Position: 0x16734 / 91956
{
	SET_CAMERASHOT_PERSPECTIVE(&uParam0, 1);
	SET_CAMERASHOT_FOV(&uParam0, 47,97706f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&uParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&uParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&uParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &uParam0, Vector(39,12394f, 120,3175f, 1315,23f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &uParam0, Vector(-0,008875f, 1,967088f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&uParam0);
	return;
}

void Function_453() //Position: 0x167A1 / 92065
{
	(&iLocal_719 + 232) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_719, "WagonGroup02set", 0);
	*(&iLocal_719 + 192[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerClone02", 1282, Vector(-113,9555f, 119,3169f, 1719,207f), Vector(11,7933f, -81,17902f, -9,700644f));
	ADD_ACTORSET_MEMBER(&iLocal_719 + 232, &iLocal_719 + 192[02]);
	*(&iLocal_719 + 192[12]) = Function_454(StackVal, StackVal, &iLocal_719, "Wagon02", 1196, 976, Vector(-110,39f, 117,9389f, 1704,054f), Vector(0,5489022f, 28,95583f, 0,02664249f), 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(&iLocal_719 + 232, &iLocal_719 + 192[12]);
	return;
}

int Function_454(int iParam0, int iParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x1687B / 92283
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	bool bVar9;
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
		bVar9 = false;
		while (bVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, bVar9, 16);
			uVar15 = "";
			if (Function_457(&(Global_46972[6]), 4, 23, 0) && iParam8)
			{
				bVar16 = Function_456(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_455(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[bVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (bVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, bVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			bVar9++;
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

bool Function_455(int iParam0, bool[] bParam1) //Position: 0x16ACE / 92878
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

var Function_456(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x16B02 / 92930
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_457(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x16B1E / 92958
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

void Function_458() //Position: 0x16B4A / 93002
{
	(&iLocal_719 + 184) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_719, "WagonGroup01set", 0);
	*(&iLocal_719 + 144[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerClone01", 1282, Vector(-98,85898f, 118,1876f, 1736,197f), Vector(0.0f, 8,498847f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_719 + 184, &iLocal_719 + 144[02]);
	*(&iLocal_719 + 144[12]) = Function_454(StackVal, StackVal, &iLocal_719, "Wagon01", 1196, 976, Vector(-98,72256f, 118,1979f, 1733,032f), Vector(0.0f, 79,61429f, 0.0f), 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(&iLocal_719 + 184, &iLocal_719 + 144[12]);
	return;
}

void Function_459() //Position: 0x16C14 / 93204
{
	var uVar0;
	
	Function_261(4, 1);
	uVar0 = &uVar0;
	iLocal_719 = CREATE_LAYOUT("Zombie01Intro_layout");
	*(&iLocal_719 + 320) = CREATE_OBJECTSET_IN_LAYOUT("WagonTeleports01Set", &iLocal_719, 8, 0);
	*(&iLocal_719 + 328[03]) = Vector(-98,71005f, 118,1972f, 1733,042f);
	*(&iLocal_719 + 328[03] + 12) = Vector(0.0f, 77,31985f, 0.0f);
	*(&iLocal_719 + 456[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon01_Tele01", Vector(-98,71005f, 118,1972f, 1733,042f), Vector(0.0f, 77,31985f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 456[0], &iLocal_719 + 320);
	*(&iLocal_719 + 328[13]) = Vector(-251,5009f, 127,6625f, 1290,41f);
	*(&iLocal_719 + 328[13] + 12) = Vector(15,61252f, 281,9437f, -13,72014f);
	*(&iLocal_719 + 456[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon01_Tele02", Vector(-251,5009f, 127,6625f, 1290,41f), Vector(15,61252f, 281,9437f, -13,72014f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 456[1], &iLocal_719 + 320);
	*(&iLocal_719 + 328[23]) = Vector(-111,7816f, 118,3498f, 1465,095f);
	*(&iLocal_719 + 328[23] + 12) = Vector(0.0f, 377,0617f, 0.0f);
	*(&iLocal_719 + 456[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon01_Tele03", Vector(-111,7816f, 118,3498f, 1465,095f), Vector(0.0f, 377,0617f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 456[2], &iLocal_719 + 320);
	*(&iLocal_719 + 328[33]) = Vector(-112,687f, 118,3479f, 1461,432f);
	*(&iLocal_719 + 328[33] + 12) = Vector(0.0f, 369,9934f, 0.0f);
	*(&iLocal_719 + 456[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon01_Tele04", Vector(-112,687f, 118,3479f, 1461,432f), Vector(0.0f, 369,9934f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 456[3], &iLocal_719 + 320);
	*(&iLocal_719 + 328[43]) = Vector(-131,0294f, 118,2951f, 1507,086f);
	*(&iLocal_719 + 328[43] + 12) = Vector(0.0f, 356,8519f, 0.0f);
	*(&iLocal_719 + 456[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon01_Tele05", Vector(-131,0294f, 118,2951f, 1507,086f), Vector(0.0f, 356,8519f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 456[4], &iLocal_719 + 320);
	*(&iLocal_719 + 504) = CREATE_OBJECTSET_IN_LAYOUT("WagonTeleports02Set", &iLocal_719, 8, 0);
	*(&iLocal_719 + 512[03]) = Vector(-110,4373f, 117,9379f, 1703,936f);
	*(&iLocal_719 + 512[03] + 12) = Vector(6,011225f, 37,78076f, 4,850446f);
	*(&iLocal_719 + 640[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon02_Tele01", Vector(-110,4373f, 117,9379f, 1703,936f), Vector(6,011225f, 37,78076f, 4,850446f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 640[0], &iLocal_719 + 504);
	*(&iLocal_719 + 512[13]) = Vector(-420,8987f, 147,495f, 1375,022f);
	*(&iLocal_719 + 512[13] + 12) = Vector(0,7987052f, -65,66412f, -1,974732f);
	*(&iLocal_719 + 640[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon02_Tele02", Vector(-420,8987f, 147,495f, 1375,022f), Vector(0,7987052f, -65,66412f, -1,974732f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 640[1], &iLocal_719 + 504);
	*(&iLocal_719 + 512[23]) = Vector(-116,5459f, 118,2126f, 1564,995f);
	*(&iLocal_719 + 512[23] + 12) = Vector(4,090935f, 17,71888f, 6,760347f);
	*(&iLocal_719 + 640[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon02_Tele03", Vector(-116,5459f, 118,2126f, 1564,995f), Vector(4,090935f, 17,71888f, 6,760347f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 640[2], &iLocal_719 + 504);
	*(&iLocal_719 + 512[33]) = Vector(-110,3335f, 117,8137f, 1407,175f);
	*(&iLocal_719 + 512[33] + 12) = Vector(0.0f, 352,4897f, 0.0f);
	*(&iLocal_719 + 640[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon02_Tele04", Vector(-110,3335f, 117,8137f, 1407,175f), Vector(0.0f, 352,4897f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 640[3], &iLocal_719 + 504);
	*(&iLocal_719 + 512[43]) = Vector(-105,0253f, 117,8754f, 1391,755f);
	*(&iLocal_719 + 512[43] + 12) = Vector(0.0f, 343,621f, 0.0f);
	*(&iLocal_719 + 640[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Wagon02_GotoEnd", Vector(-105,0253f, 117,8754f, 1391,755f), Vector(0.0f, 343,621f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 640[4], &iLocal_719 + 504);
	*(&iLocal_719 + 688) = CREATE_OBJECTSET_IN_LAYOUT("PlayerTeleportsSet", &iLocal_719, 8, 0);
	*(&iLocal_719 + 696[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerTeleport04", Vector(-104,1065f, 117,8353f, 1439,91f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 696[0], &iLocal_719 + 688);
	*(&iLocal_719 + 696[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerTeleport03", Vector(-427,6012f, 147,9779f, 1368,519f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 696[1], &iLocal_719 + 688);
	*(&iLocal_719 + 696[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerTeleport02", Vector(-239,7236f, 127,6356f, 1293,901f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 696[2], &iLocal_719 + 688);
	*(&iLocal_719 + 696[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerTeleport01", Vector(-113,9654f, 119,3208f, 1719,233f), Vector(0.0f, 23,08274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 696[3], &iLocal_719 + 688);
	*(&iLocal_719 + 696[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerTeleport05", Vector(-124,0483f, 118,4134f, 1510,985f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 696[4], &iLocal_719 + 688);
	*(&iLocal_719 + 696[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "PlayerTeleport06", Vector(-114,128f, 119,508f, 1719,822f), Vector(0.0f, 23,08274f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_719 + 696[5], &iLocal_719 + 688);
	*(&iLocal_719 + 752) = Vector(-141,2719f, 118,4627f, 1534,728f);
	*(&iLocal_719 + 752 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_719 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "CougarGoto", Vector(-141,2719f, 118,4627f, 1534,728f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_719 + 784) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_719 + 784 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_719 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "nFindComfy", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_719 + 816) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_719 + 816 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_719 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "Flag1", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_719 + 848) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "sit_chair_couch", "sit_chair_couch", Vector(-103,375f, 119,5919f, 1363,564f), Vector(0.0f, -213,6582f, 0.0f));
	*(&iLocal_719 + 856) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_719, "sit_chair_comfy", "sit_chair_comfy", Vector(-104,8212f, 119,4998f, 1361,017f), Vector(0.0f, 23,31212f, 0.0f));
	PushArrayP();
	*(&iLocal_719 + 864) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_719, "FrontsidePath01");
	PushArrayP();
	*(&iLocal_719 + 872) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_719, "FrontsidePath02");
}

var BëeD¯´ÂÖ~XBë]D®Ð%ÂÊ8BëRîD®]-,GLÏB(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193) //Position: 0x1770B / 96011
{
}

int Function_461() //Position: 0x17A33 / 96819
{
	Function_271(&iLocal_719 + 8, 1282, 2, 0);
	Function_271(&iLocal_719 + 8, 1196, 2, 0);
	Function_271(&iLocal_719 + 8, 976, 2, 0);
	Function_271(&iLocal_719 + 8, 638, 2, 0);
	Function_271(&iLocal_719 + 8, 698, 2, 0);
	Function_271(&iLocal_719 + 8, 1244, 2, 0);
	Function_269(&iLocal_719 + 8, "$/content/scripting/gringo/simplegringo/sit_chair_couch", 1, 0);
	Function_269(&iLocal_719 + 8, "$/content/scripting/gringo/simplegringo/sit_chair_comfy", 1, 0);
	if (Function_262(&iLocal_719 + 8))
	{
		return 1;
	}
	return 0;
}

void Function_462(int iParam0, int iParam1) //Position: 0x17B25 / 97061
{
	Function_127(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_377(StackVal, &iParam1);
	}
	return;
}

int Function_463(bool bParam0, bool bParam1) //Position: 0x17B57 / 97111
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_161(bParam0), Function_55()) >= 0)
		{
			DELETE_ITEM(Function_161(bParam0), Function_55(), 0);
			return 1;
		}
	}
	DELETE_ITEM(Function_161(bParam0), Function_55(), 1);
	return 1;
}

bool Function_464() //Position: 0x17B9F / 97183
{
	return Global_47307;
}

void Function_465() //Position: 0x17BA8 / 97192
{
	Function_269(&iLocal_287, "dead_ground_male", 5, 0);
	Function_269(&iLocal_287, "custom/dead_ground_male", 8, 0);
	Function_269(&iLocal_287, "z_dlc_z_roar", 5, 0);
	Function_269(&iLocal_287, "custom/z_dlc_z_roar", 8, 0);
	Function_269(&iLocal_287, "rfl_brk", 5, 0);
	Function_269(&iLocal_287, "DLC_uncle_roar", 5, 0);
	Function_269(&iLocal_287, "DLC_outbreak_dead", 5, 0);
	Function_269(&iLocal_287, "custom/DLC_outbreak_dead", 8, 0);
	Function_269(&iLocal_287, "wringhands_no_cry", 1, 0);
	Function_269(&iLocal_287, "DLC_Outbreak3", 1, 0);
	Function_269(&iLocal_287, "shotgun_doubleBarrel01x", 0, 0);
	Function_271(&iLocal_287, 1232, 3, 0);
	Function_271(&iLocal_287, 1230, 3, 0);
	Function_271(&iLocal_287, 1204, 3, 0);
	Function_271(&iLocal_287, 21, 3, 0);
	Function_271(&iLocal_287, 10, 3, 0);
	Function_271(&iLocal_287, 16, 3, 0);
	Function_269(&iLocal_287, "dlc_zombiepack_zombie01", 10, 0);
	Function_269(&iLocal_369, "dlc_zombiepack_zombie01_intro", 10, 0);
	return;
}

void Function_466(int iParam0) //Position: 0x17D81 / 97665
{
	Function_467(&Global_43580, iParam0);
	return;
}

void Function_467(var uParam0, int iParam1) //Position: 0x17D8F / 97679
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_468(int iParam0, bool bParam1) //Position: 0x17DB7 / 97719
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_474(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_234(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_98();
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
	if (!Function_234(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_172();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_191();
	Function_283();
	Function_180("");
	Function_473(0);
	Function_472();
	Function_165();
	Function_164();
	ENABLE_JOURNAL_REPLAY(0);
	Function_471();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_366(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_300(0, 0x40400000);
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
	Function_470(13);
	Function_470(14);
	Function_470(25);
	Function_470(24);
	Function_470(12);
	Function_470(27);
	Function_470(26);
	Function_470(15);
	Function_469();
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

void Function_469() //Position: 0x182CC / 99020
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

void Function_470(int iParam0) //Position: 0x18351 / 99153
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_471() //Position: 0x18371 / 99185
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

void Function_472() //Position: 0x183B7 / 99255
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_473(int iParam0) //Position: 0x183CD / 99277
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_168())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_474(int iParam0, int iParam1) //Position: 0x18406 / 99334
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
			Function_475(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_475(struct<113> Param0) //Position: 0x1848D / 99469
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

void Function_476() //Position: 0x184EB / 99563
{
	return;
}

bool Function_477(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x184F1 / 99569
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
		Function_497(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_496(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_495(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_495(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_481(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_497(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_480(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_479(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_480(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_478(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_180(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_479(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_497(&Param2, 0);
	return 0;
}

void Function_478(char* cParam0) //Position: 0x18907 / 100615
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

void Function_479(struct<25> Param0) //Position: 0x189FB / 100859
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
			Function_47(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_47(&iParam2, 2);
			break;
	}
	Function_47(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_480(bool bParam0) //Position: 0x18A73 / 100979
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_47(&iVar0, 1);
	Function_47(&iVar0, 2);
	Function_47(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_481(struct<57> Param0) //Position: 0x18A97 / 101015
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
			return Function_492(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_485(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_492(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_482(&Param0, bVar2);
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
						bVar2 = Function_492(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_482(&Param0, bVar2);
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

var Function_482(int iParam0, bool bParam1) //Position: 0x18C08 / 101384
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
				bParam1 = Function_484(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_483(16);
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
				bParam1 = Function_484(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_483(256);
			}
		}
	}
	return bParam1;
}

bool Function_483(int iParam0) //Position: 0x18D44 / 101700
{
	return 2 | iParam0;
}

int Function_484(int iParam0) //Position: 0x18D4E / 101710
{
	return 4 | iParam0;
}

int Function_485(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x18D58 / 101720
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
				iParam3 = Function_491(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_129(&iParam3, 2);
					Function_47(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_483(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_486(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_129(&iParam3, 2);
					Function_47(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_483(16);
		}
	}
	return 0;
}

int Function_486(int iParam0, vector3 vParam1) //Position: 0x18E13 / 101907
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_490(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_489(iVar0, 3, 1, bParam3))
			{
				if (!Function_495(&iParam0, 8, 1))
				{
					return Function_488(64, 1024, bParam2);
				}
			}
			return Function_487(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_489(iVar0, 2, 1, bParam3))
			{
				if (!Function_495(&iParam0, 32, 1))
				{
					return Function_488(64, 1024, bParam2);
				}
			}
			return Function_487(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_489(iVar0, 1, 1, bParam3))
			{
				if (!Function_495(&iParam0, 64, 1))
				{
					return Function_488(64, 1024, bParam2);
				}
			}
			return Function_487(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_489(iVar0, 3, 1, bParam3))
			{
				if (!Function_495(&iParam0, 128, 1))
				{
					return Function_488(64, 1024, bParam2);
				}
			}
			return Function_487(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_489(iVar0, 1, 1, bParam3))
			{
				if (!Function_495(&iParam0, 1024, 1))
				{
					return Function_488(64, 1024, bParam2);
				}
			}
			return Function_487(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_489(iVar0, 1, 1, bParam3))
			{
				if (!Function_495(&iParam0, 1024, 1))
				{
					return Function_488(64, 1024, bParam2);
				}
			}
			return Function_487(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_487(int iParam0, int iParam1, bool bParam2) //Position: 0x18FDB / 102363
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_488(int iParam0, int iParam1, bool bParam2) //Position: 0x18FF0 / 102384
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_489(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x19005 / 102405
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_490(int iParam0) //Position: 0x19022 / 102434
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

int Function_491(var uParam0, vector3 vParam1) //Position: 0x19095 / 102549
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_490(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_489(iVar0, 3, 1, bParam2))
			{
				if (!Function_495(&uParam0, 8, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000009:
			if (Function_489(iVar0, 3, 1, bParam2))
			{
				if (!Function_495(&uParam0, 8, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x0000006E:
			if (Function_489(iVar0, 2, 1, bParam2))
			{
				if (!Function_495(&uParam0, 16, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x0000005B:
			if (Function_489(iVar0, 2, 1, bParam2))
			{
				if (!Function_495(&uParam0, 32, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000031:
			if (Function_489(iVar0, 1, 1, bParam2))
			{
				if (!Function_495(&uParam0, 64, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000007:
			if (Function_489(iVar0, 3, 1, bParam2))
			{
				if (!Function_495(&uParam0, 128, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000008:
			if (Function_489(iVar0, 2, 1, bParam2))
			{
				if (!Function_495(&uParam0, 256, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000014:
			if (Function_489(iVar0, 1, 1, bParam2))
			{
				if (!Function_495(&uParam0, 512, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000018:
			if (Function_489(iVar0, 1, 1, bParam2))
			{
				if (!Function_495(&uParam0, 512, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000057:
			if (Function_489(iVar0, 1, 1, bParam2))
			{
				if (!Function_495(&uParam0, 1024, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000058:
			if (Function_489(iVar0, 1, 1, bParam2))
			{
				if (!Function_495(&uParam0, 1024, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_492(struct<65> Param0) //Position: 0x192BE / 103102
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
						return Function_491(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_495(&Param0, 2, 1))
					{
						return Function_484(8);
					}
					return Function_483(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_495(&Param0, 4, 1))
					{
						return Function_484(16);
					}
					return Function_483(16);
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
							return Function_486(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_495(&Param0, 2, 1))
						{
							return Function_484(128);
						}
						return Function_483(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_495(&Param0, 4, 1))
						{
							return Function_484(256);
						}
						return Function_483(256);
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
						return Function_486(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_495(&Param0, 2, 1))
					{
						return Function_484(8);
					}
					return Function_483(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_495(&Param0, 4, 1))
					{
						return Function_484(16);
					}
					return Function_483(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_494(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_495(&Param0, 2, 1))
					{
						return Function_484(8);
					}
					return Function_483(8);
				}
				if (!Function_495(&Param0, 4, 1))
				{
					return Function_484(16);
				}
				return Function_483(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_486(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_129(&iParam4, 2);
								Function_47(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_493(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_483(128);
							}
							if (!Function_495(&Param0, 2, 1))
							{
								return Function_484(8);
							}
							return Function_483(8);
						}
						if (iParam4 == 2)
						{
							if (Function_493(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_483(256);
							}
							if (!Function_495(&Param0, 4, 1))
							{
								return Function_484(16);
							}
							return Function_483(16);
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

bool Function_493(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x195A4 / 103844
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

int Function_494(int iParam0, vector3 vParam1) //Position: 0x19672 / 104050
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_490(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_489(iVar0, 2, 1, bParam2))
			{
				if (!Function_495(&iParam0, 16, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x0000005B:
			if (Function_489(iVar0, 2, 1, bParam2))
			{
				if (!Function_495(&iParam0, 32, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000057:
			if (Function_489(iVar0, 1, 1, bParam2))
			{
				if (!Function_495(&iParam0, 1024, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		case 0x00000058:
			if (Function_489(iVar0, 1, 1, bParam2))
			{
				if (!Function_495(&iParam0, 1024, 1))
				{
					return Function_484(64);
				}
			}
			return Function_483(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_495(struct<69> Param0) //Position: 0x19794 / 104340
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

int Function_496(int iParam0) //Position: 0x197BE / 104382
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_135());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_135());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_497(struct<25> Param0) //Position: 0x197F4 / 104436
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

void Function_498(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1981F / 104479
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_499(int iParam0) //Position: 0x1984C / 104524
{
	switch (iParam0)
	{
		case 0x00000000:
			AUDIO_MUSIC_SET_STATE("SILENT");
			break;
		
		case 0x00000001:
			AUDIO_MUSIC_SET_STATE("SCRIPTED");
			break;
		
		case 0x00000002:
			AUDIO_MUSIC_SET_STATE("UNSCRIPTED");
			break;
	}
	return;
}

