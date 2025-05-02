//Decompiled with MagicRDR v1.0
//Function Count : 315
//Statics Count : 891
//Natives Count : 501
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	var uLocal_58 = 8;
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
	var uLocal_286 = 3;
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
	int iLocal_378 = 0;
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
	bool bLocal_409 = false;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	float fLocal_419 = 0.0f;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
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
	int iLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453[2] = { 0, 0 };
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 3;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 2;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 1;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	int iLocal_481 = 22;
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
	int iLocal_571 = 0;
	struct<6> Local_572[5];
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
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	var uLocal_636 = 0;
	int iLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	int iLocal_641 = 0;
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
	int iLocal_653 = 0;
	var uLocal_654 = 0;
	int iLocal_655 = 0;
	bool bLocal_656 = false;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	bool bLocal_661 = false;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 10;
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
	var uLocal_770 = 0;
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
	int iLocal_888 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_408 = 0;
	bLocal_409 = false;
	iLocal_416 = 31;
	iLocal_417 = 33;
	iLocal_418 = 1;
	fLocal_419 = 2.0f;
	uLocal_420 = Vector(-4691,224f, 3,166f, 4010,023f);
	iLocal_425 = 0;
	iLocal_426 = 0;
	iLocal_634 = 0;
	iLocal_655 = 0;
	iLocal_657 = 0;
	bLocal_661 = false;
	iLocal_658 = 0;
	bLocal_660 = Function_314(&(Global_43791[iScriptParam_0]));
	if (bLocal_660 && Function_313(&Global_11946, iScriptParam_0))
	{
		if (Function_312(8))
		{
			bLocal_661 = true;
			Function_311(8);
		}
	}
	Function_310("Initializing Nosalida", 3);
	while (!IS_EXITFLAG_SET())
	{
		bLocal_659 = 1000;
		switch (iLocal_658)
		{
			case 0x00000000:
				if (Global_6632)
				{
					iLocal_658 = 1;
				}
				bLocal_659 = false;
				break;
			
			case 0x00000001:
				Function_309();
				if (Function_309())
				{
					iLocal_658 = 2;
				}
				bLocal_659 = false;
				break;
			
			case 0x00000002:
				if (Function_307())
				{
					Function_306(&(Global_43791[iScriptParam_0]), 32);
					iLocal_658 = 3;
				}
				bLocal_659 = false;
				break;
			
			case 0x00000003:
				uLocal_662 = LAUNCH_NEW_SCRIPT_WITH_ARGS("NosalidaVol", &iScriptParam_0, 2, 0);
				Function_305(&Global_11946, &Global_14176, iScriptParam_0);
				iLocal_658 = 5;
				if (0 & Function_304())
				{
					uLocal_664 = LAUNCH_NEW_SCRIPT("$/content/Multiplayer/Action_Areas/Nosalida/NosalidaMP", 0);
				}
				bLocal_659 = false;
				break;
			
			case 0x00000005:
				if (Function_303(&Global_11946, &Global_14176, iScriptParam_0))
				{
					iLocal_658 = 4;
					bLocal_659 = false;
				}
				else
				{
					bLocal_659 = 100;
				}
				break;
			
			case 0x00000004:
				if (Function_302(&(Global_43791[iScriptParam_0]), 16) && Function_301(Global_44085[iScriptParam_09]))
				{
					iLocal_658 = 6;
				}
				bLocal_659 = false;
				break;
			
			case 0x00000006:
				if (!Function_302(&(Global_43791[iScriptParam_0]), 256) && Function_312(2))
				{
					Function_293(StackVal, 0, &uLocal_666, *(&iLocal_0 + 232[03]));
					Function_292(0, &uLocal_666, &iLocal_0);
					Function_293(StackVal, 1, &uLocal_666, *(&iLocal_0 + 232[13]));
					Function_292(1, &uLocal_666, &iLocal_0);
					Function_293(StackVal, 3, &uLocal_666, *(&iLocal_0 + 232[33]));
					Function_292(3, &uLocal_666, &iLocal_0);
					Function_293(StackVal, 5, &uLocal_666, *(&iLocal_0 + 232[43]));
					Function_292(5, &uLocal_666, &iLocal_0);
					Function_293(StackVal, 6, &uLocal_666, *(&iLocal_0 + 232[53]));
					Function_292(6, &uLocal_666, &iLocal_0);
					Function_293(StackVal, 7, &uLocal_666, *(&iLocal_0 + 232[63]));
					Function_292(7, &uLocal_666, &iLocal_0);
					Function_293(StackVal, 9, &uLocal_666, *(&iLocal_0 + 232[73]));
					Function_292(9, &uLocal_666, &iLocal_0);
					if (!Global_46720 != 2)
					{
						Function_289(&Global_11946, &Global_14176, &uLocal_666, &Global_10996, iScriptParam_0);
					}
				}
				else
				{
					bLocal_660 = false;
					iLocal_888 = 1;
				}
				if (!Global_46720 != 2)
				{
					if (Function_302(&(Global_43791[iScriptParam_0]), 256) || !Function_312(2))
					{
						iLocal_888 = 1;
					}
				}
				Function_306(&(Global_43791[iScriptParam_0]), 8);
				iLocal_658 = 7;
				bLocal_659 = false;
				break;
			
			case 0x00000007:
				switch (Global_46720)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000002:
						break;
					
					case 0x00000003:
						break;
				}
				iLocal_658 = 8;
				bLocal_659 = false;
				break;
			
			case 0x00000008:
				Function_288(64);
				Function_284(2, 4294967295, 4294967295, 0, 3);
				if (Function_283(iScriptParam_0, &Global_11946, iLocal_888))
				{
					Function_281(0, 0,2f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
				}
				else
				{
					switch (Global_46720)
					{
						case 0x00000000:
						case 0x00000001:
							Function_281(2, 0,5f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000002:
							Function_281(0, 0,5f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						
						case 0x00000003:
							Function_281(2, 0,5f, 3, &iLocal_0, &Global_44085[iScriptParam_09] + 8, 1);
							break;
						}
				}
				Function_306(&(Global_43791[iScriptParam_0]), 512);
				iLocal_658 = 9;
				bLocal_659 = false;
				break;
			
			case 0x00000009:
				Function_279(&iLocal_0, iScriptParam_0);
				Function_306(&(Global_43791[iScriptParam_0]), 4);
				Function_278("Finished Initializing Nosalida", 5.0f);
				iLocal_658 = 10;
				bLocal_659 = false;
				if (((bLocal_660 && !Function_277(Global_46850[1])) && Function_276(25, 0)) || !Global_6606)
				{
					Function_272();
					Function_270(32768);
				}
				else
				{
					if (Function_277(Global_46850[1]) && !Global_99146)
					{
						Function_269();
						Function_268("AA_GhostTown", 0, -1.0f, 1, 0, 0);
					}
					bLocal_660 = false;
				}
				Function_266(&(Global_43791[iScriptParam_0]));
				break;
			
			case 0x0000000A:
				Function_263();
				if (bLocal_660)
				{
					bLocal_660 = Function_44();
					if (!bLocal_660)
					{
						Function_36();
					}
					bLocal_659 = false;
				}
				break;
			
			case 0x0000000B:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(bLocal_659);
	}
	if (Function_35(Global_46954) == 2)
	{
		Function_25(Global_46954);
	}
	if (bLocal_660)
	{
		Function_36();
	}
	if (bLocal_661)
	{
		Function_24(8);
	}
	Function_22();
	Function_12(&Global_11946, &Global_14176, iScriptParam_0, iLocal_888);
	Function_11();
	Function_6();
	Function_2(iScriptParam_0);
	Function_1(&(Global_43791[iScriptParam_0]), 32);
	Function_1(&(Global_43791[iScriptParam_0]), 64);
	Function_1(&(Global_43791[iScriptParam_0]), 8);
	Function_1(&(Global_43791[iScriptParam_0]), 512);
	Function_1(&(Global_43791[iScriptParam_0]), 4);
	if (IS_SCRIPT_VALID(&uLocal_664))
	{
		TERMINATE_SCRIPT(&uLocal_664);
	}
	if (IS_SCRIPT_VALID(&uLocal_662))
	{
		TERMINATE_SCRIPT(&uLocal_662);
	}
	Function_278("Unloaded Nosalida", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x5CA / 1482
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2(int iParam0) //Position: 0x5E4 / 1508
{
	int iVar0;
	
	if (!Function_5(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_3(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_3(int iParam0) //Position: 0x61A / 1562
{
	if (!Function_4(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_4(int iParam0) //Position: 0x63C / 1596
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x652 / 1618
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_6() //Position: 0x668 / 1640
{
	Function_7(&iLocal_378 + 8);
	RELEASE_LAYOUT_REF(&iLocal_378);
	return;
}

void Function_7(int iParam0) //Position: 0x67D / 1661
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_8(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_8(struct<2>[] Param0, int iParam1) //Position: 0x6A5 / 1701
{
	if (Function_10(&(Param0[iParam12]), 4))
	{
		if (Function_10(&(Param0[iParam12]), 1))
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
			Function_9(&(Param0[iParam12]), 1);
			Function_9(&(Param0[iParam12]), 2);
			Function_9(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_9(struct<13> Param0) //Position: 0x7F0 / 2032
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_10(struct<13> Param0) //Position: 0x80D / 2061
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_11() //Position: 0x82B / 2091
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_12(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0x837 / 2103
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar0, Function_21(bParam2), 64);
	if (Function_19())
	{
		stradd(&cVar0, "_z", 64);
	}
	if (Function_302(&(Global_43791[bParam2]), 0x40000000))
	{
		STREAMING_EVICT_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar0, 12));
		Function_1(&(Global_43791[bParam2]), 0x40000000);
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (!Function_18(&(Param0[bVar162]), 1))
		{
			if ((!vParam1[bVar163] != 4294967295 && !vParam1[bVar163] != 0) && Function_18(&(Param0[bVar162]), 8))
			{
				STREAMING_EVICT_ACTOR(vParam1[bVar163], 4294967295);
				Function_17(&(Param0[bVar162]), 8);
			}
		}
		if (UNK_0x214AFB8C(&vParam1[bVar163] + 8) && Function_18(&(Param0[bVar162]), 16))
		{
			STREAMING_EVICT_GRINGO(&vParam1[bVar163] + 8);
			Function_17(&(Param0[bVar162]), 16);
		}
		bVar16++;
	}
	if (!Function_302(&(Global_43791[bParam2]), 8))
	{
		bParam3 = 1;
	}
	bVar17 = true;
	if (!Function_312(2) || Function_302(&(Global_43791[bParam2]), 256))
	{
		bVar17 = false;
	}
	bVar16 = false;
	bVar16 = false;
	while (bVar16 <= Param0)
	{
		if (Function_18(&(Param0[bVar162]), 2) && !Function_18(&(Param0[bVar162]), 4))
		{
			Function_13(&Param0, &vParam1, bVar16, &bParam3);
		}
		if (bVar17)
		{
			if (Function_18(&(Param0[bVar162]), 2) && !Function_18(&(Param0[bVar162]), 4))
			{
				iVar18++;
			}
			else
			{
				iVar19++;
			}
		}
		bVar16++;
	}
	if (bVar17)
	{
		bVar20 = FIND_OBJECT_IN_LAYOUT(&Global_10996, "ncorpseSet");
		uVar21 = GET_OBJECTSET_FROM_OBJECT(&bVar20);
		if (IS_OBJECTSET_VALID(&uVar21))
		{
			bVar16 = false;
			while (GET_OBJECTSET_SIZE(&uVar21) >= 0)
			{
				DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar21));
				CLEAN_OBJECTSET(&uVar21);
			}
			DESTROY_OBJECTSET(&uVar21);
		}
		if (StackVal && !(((iVar18 != 0 && iVar19 < 0) && !bParam2 != 4294967295) && !&bParam3) != 3)
		{
			Function_306(&(Global_43791[bParam2]), 2048);
		}
	}
}

void Function_13(struct<2>[] Param0, vector3[] vParam1, bool bParam2, bool bParam3) //Position: 0xA55 / 2645
{
	if (IS_PERS_CHAR_VALID(&vParam1[bParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[bParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[bParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_16(&(Param0[bParam22]), 4);
				*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_18(&(Param0[bParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[bParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[bParam23] + 16);
			(&vParam1[bParam23] + 16) = "";
		}
	}
	else if (!Function_18(&(Param0[bParam22]), 1) && !&bParam3)
	{
		Function_16(&(Param0[bParam22]), 4);
		*(&Param0[bParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[bParam22] + 8, Function_15(Global_43790), Function_14(Global_43790), false, 0);
	}
}

int Function_14(int iParam0) //Position: 0xBBB / 3003
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

int Function_15(int iParam0) //Position: 0xBE6 / 3046
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

void Function_16(int iParam0, int iParam1) //Position: 0xC1A / 3098
{
	iParam0 = (iParam0 || iParam1);
	return;
}

void Function_17(var uParam0, int iParam1) //Position: 0xC2B / 3115
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_18(int iParam0, int iParam1) //Position: 0xC45 / 3141
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_19() //Position: 0xC62 / 3170
{
	if (Function_20(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_20(bool bParam0, bool bParam1) //Position: 0xC7D / 3197
{
	return (bParam0 && bParam1) == 0;
}

var Function_21(int iParam0) //Position: 0xC8A / 3210
{
	if (!Function_5(iParam0))
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

void Function_22() //Position: 0x1138 / 4408
{
	if (IS_OBJECTSET_VALID(&uLocal_410))
	{
		Function_23(&uLocal_410);
		DESTROY_OBJECTSET(&uLocal_410);
	}
	return;
}

void Function_23(var uParam0) //Position: 0x1156 / 4438
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

void Function_24(bool bParam0) //Position: 0x11A5 / 4517
{
	if (Function_20(bParam0, 1) && !Function_20(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_25(int iParam0) //Position: 0x11D2 / 4562
{
	var uVar0;
	
	if (!Function_33(iParam0))
	{
		Function_31();
		return;
	}
	uVar0 = Function_30(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_26("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_26(bool bParam0, bool bParam1) //Position: 0x1225 / 4645
{
	struct<4> Var0;
	
	if (!Function_33(bParam1))
	{
		return;
	}
	switch (Function_30(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_27(Function_28(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, &Var0, Function_30(bParam1), Function_28(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "PROCEDURAL", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "LOCATION", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "MINIGAME", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "ACTIONAREA_EVENT", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &bParam0, "JOB", Function_30(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_27(int iParam0) //Position: 0x134F / 4943
{
	char* cVar0[16];
	
	if (!Function_19())
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

int Function_28(bool bParam0) //Position: 0x1389 / 5001
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_29(int iParam0) //Position: 0x13A9 / 5033
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_30(bool bParam0) //Position: 0x13C0 / 5056
{
	if (!Function_29(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_31() //Position: 0x13DB / 5083
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
			Function_32(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_32(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1622 / 5666
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_33(int iParam0) //Position: 0x164E / 5710
{
	if (!Function_29(iParam0))
	{
		return 0;
	}
	if (!Function_34(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_34(int iParam0) //Position: 0x1672 / 5746
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_35(int iParam0) //Position: 0x1687 / 5767
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_36() //Position: 0x16A1 / 5793
{
	Function_39();
	RESET_FACTIONS_STATUS_TWO_WAY(2, 16);
	Function_7(&iLocal_481);
	Function_37(32768);
	AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	if (DECOR_CHECK_EXIST(&Global_54076, "Nosalida_TriggeringEnd"))
	{
		DECOR_REMOVE(&Global_54076, "Nosalida_TriggeringEnd");
	}
	return;
}

void Function_37(int iParam0) //Position: 0x170B / 5899
{
	Function_38(&Global_43580, iParam0);
	return;
}

void Function_38(var uParam0, var uParam1) //Position: 0x1719 / 5913
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_39() //Position: 0x1738 / 5944
{
	int iVar0;
	
	FIRE_STOP_ALL_FIRES();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_BLIP_VALID(&Local_572[iVar06] + 32))
		{
			REMOVE_BLIP(&Local_572[iVar06] + 32);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Function_42(&Global_11946, &Global_14176, iVar0, 0);
		iVar0++;
	}
	REMOVE_GLOW_INDICATOR(uLocal_654);
	if (IS_BLIP_VALID(&uLocal_423))
	{
		REMOVE_BLIP(&uLocal_423);
	}
	if (IS_ACTOR_VALID(&uLocal_412))
	{
		RELEASE_ACTOR(&uLocal_412);
	}
	if (IS_ACTOR_VALID(&(uLocal_453[0])))
	{
		TASK_CLEAR(&(uLocal_453[0]));
		RELEASE_ACTOR(&(uLocal_453[0]));
	}
	if (IS_ACTOR_VALID(&(uLocal_453[1])))
	{
		TASK_CLEAR(&(uLocal_453[1]));
		RELEASE_ACTOR(&(uLocal_453[1]));
	}
	if (SQUAD_IS_VALID(&uLocal_441))
	{
		Function_40(&uLocal_441, 0, 0);
		DESTROY_OBJECT(&uLocal_441);
	}
	if (SQUAD_IS_VALID(&iLocal_443))
	{
		Function_40(&iLocal_443, 0, 0);
		DESTROY_OBJECT(&iLocal_443);
	}
	if (SQUAD_IS_VALID(&uLocal_449))
	{
		Function_40(&uLocal_449, 0, 0);
		DESTROY_OBJECT(&uLocal_449);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_431))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_431);
		RELEASE_LAYOUT_REF(&uLocal_431);
	}
	if (IS_LAYOUTREF_VALID(&uLocal_433))
	{
		RELEASE_LAYOUT_OBJECTS(&uLocal_433);
		RELEASE_LAYOUT_REF(&uLocal_433);
	}
	if (Function_20(iLocal_653, 128))
	{
		RESET_FACTIONS_STATUS_TWO_WAY(2, 27);
	}
	Global_6628 = 0;
	if (Function_35(Global_46954) == 2)
	{
		Function_25(Global_46954);
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_FLEEING", true, false, 2, 0, true, false);
		}
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	return;
}

void Function_40(var uParam0, bool bParam1, bool bParam2) //Position: 0x18C2 / 6338
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
				if (!Function_41(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x194B / 6475
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_42(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x196B / 6507
{
	int iVar0;
	
	iVar0 = iParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_18(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_18(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_18(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_17(&(Param0[iVar02]), 8);
	}
	Function_17(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_43(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_13(&Param0, &vParam1, iParam2, 0);
	}
}

int Function_43(int iParam0) //Position: 0x1A13 / 6675
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

bool Function_44() //Position: 0x1ABC / 6844
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	
	if (!Function_262(&uLocal_477))
	{
		Function_39();
		iLocal_571 = 7;
		return 0;
	}
	switch (iLocal_571)
	{
		case 0x00000000:
			bVar0 = true;
			if (!Function_257(&iLocal_481))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				Function_247(&uLocal_431, &uLocal_433, &uLocal_441, &iLocal_443, &uLocal_445, &uLocal_449, &uLocal_412, &uLocal_453, &iLocal_653, &uLocal_435, &uLocal_654, &uLocal_459);
				Function_244(&uLocal_431, &uLocal_437);
				iLocal_571 = 1;
			}
			break;
		
		case 0x00000001:
			Function_243(&Local_572);
			Function_240(StackVal, *(&iLocal_0 + 1288), 0, 0);
			Function_240(StackVal, *(&iLocal_0 + 1320), 0, 0);
			Function_239(&uLocal_431, &uLocal_467, &uLocal_451);
			iLocal_634 = 0;
			iLocal_571 = 2;
			break;
		
		case 0x00000002:
			Function_237("sc_challenge_aa_04", &iLocal_641);
			if (Function_20(iLocal_653, 131072))
			{
				Function_234(&iLocal_653, &Local_572, &iLocal_635);
			}
			if (!Function_213(&uLocal_412, &uLocal_453, &iLocal_634, &uLocal_441, &iLocal_653, &Local_572, &uLocal_433, &uLocal_447, &uLocal_445, &iLocal_635, &uLocal_439, &uLocal_431, &uLocal_645, &uLocal_649, &uLocal_473))
			{
				Function_39();
				SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
				SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
				if (IS_ACTOR_VALID(&(uLocal_453[0])))
				{
					MEMORY_CONSIDER_AS(&(uLocal_453[0]), &Global_54076, 4);
				}
				if (IS_ACTOR_VALID(&(uLocal_453[1])))
				{
					MEMORY_CONSIDER_AS(&(uLocal_453[1]), &Global_54076, 4);
				}
				return 1;
			}
			if (Function_20(iLocal_653, 32768))
			{
				Function_212(&iLocal_653, 32768);
			}
			if (Function_20(iLocal_653, 1024))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 160) && !Function_20(iLocal_653, 512))
				{
					SQUAD_GOALS_CLEAR(&iLocal_443);
					Function_211(&iLocal_443);
					SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iLocal_443, 0, &iLocal_0 + 160, 4, 1);
					Function_210(&iLocal_443, -1.0f);
					Function_209(&iLocal_653, 512);
				}
			}
			if (!Function_20(iLocal_653, 8192))
			{
				if (Function_205(&uLocal_441, &iLocal_443, &uLocal_449, &iLocal_653))
				{
					Function_209(&iLocal_653, 8192);
				}
			}
			if (Function_196(&Local_572, &uLocal_453, &uLocal_412, &uLocal_449, &uLocal_441, &iLocal_443, &iLocal_653, &iLocal_655, &iLocal_635, &uLocal_459))
			{
				Function_209(&iLocal_653, 524288);
				if (IS_BLIP_VALID(&uLocal_423))
				{
					REMOVE_BLIP(&uLocal_423);
				}
				bVar2 = false;
				while (bVar2 < (SQUAD_GET_SIZE(&uLocal_441) - 1))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uLocal_441, bVar2);
					if (!Function_41(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						KILL_ACTOR(&uVar1);
					}
					bVar2++;
				}
				Function_195(&uLocal_441, 1);
				bVar2 = false;
				while (bVar2 < (SQUAD_GET_SIZE(&iLocal_443) - 1))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uLocal_441, bVar2);
					if (!Function_41(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						KILL_ACTOR(&uVar1);
					}
					bVar2++;
				}
				Function_195(&iLocal_443, 1);
				if (!iLocal_425)
				{
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uLocal_412);
					SET_ACTOR_STAY_WITHIN_VOLUME(&uLocal_412, &iLocal_0 + 176, 4, true);
					TASK_CLEAR(&uLocal_412);
					bVar3 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_COORD(false, &iLocal_0 + 1224, 2.0f, 1);
					TASK_FACE_ACTOR(0, &Global_54076, 1, 3212836864);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&uLocal_412, bVar3);
					TASK_SEQUENCE_RELEASE(bVar3, 1);
					iLocal_425 = 1;
				}
				if (IS_ACTOR_ALIVE(&(uLocal_453[0])) || (IS_ACTOR_ALIVE(&(uLocal_453[1])) && !Function_20(iLocal_653, 2)))
				{
					Function_209(&iLocal_653, 2);
				}
				iLocal_571 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_20(iLocal_653, 262144))
			{
				if (Function_194(&uLocal_412, &Global_54076) > 3,25f)
				{
					Function_193(Global_46954, 0);
					if (Function_192(&iLocal_641))
					{
						bLocal_656 = Function_190(&iLocal_641);
					}
					if (Function_192(&iLocal_641))
					{
						if (Function_189(466) < 0.0f)
						{
							if (bLocal_656 > Function_189(466))
							{
								Function_188(466, bLocal_656, 0);
							}
						}
						else
						{
							Function_188(466, bLocal_656, 0);
						}
					}
					Function_209(&iLocal_653, 262144);
				}
			}
			else if (Function_160(&uLocal_636, &uLocal_412, &iLocal_653, &uLocal_431, &uLocal_475, &uLocal_441, &iLocal_443, &uLocal_449, &uLocal_445, &uLocal_447, &Local_572))
			{
				iLocal_571 = 4;
			}
			break;
		
		case 0x00000004:
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 2);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 2);
			SET_WEAPONENUM_LOCKED(10, 0);
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 10, false, 1, 1);
			Function_156(200, 1, 0);
			Function_143(50, 1, 0);
			Function_112(Global_46954);
			Function_110(Function_111(1, 1, 1, 0, 0), 1, 1);
			Function_108(9, 0, 1);
			Global_6628 = 0;
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(iLocal_635, 0);
			APPEND_JOURNAL_ENTRY(iLocal_635, 1);
			Function_106(Global_46850[1], &Global_11946, &Global_14176, 1);
			Function_112(Global_46954);
			AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
			Function_48(Global_46954, 1, 1, 0);
			SET_PLAYER_ENDLESS_READYMODE(0, 0);
			if (Function_47(Global_46953) > 1)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(14))
				{
					AWARD_ACHIEVEMENT(14);
				}
			}
			Function_45(&iLocal_637);
			iLocal_571 = 6;
			break;
		
		case 0x00000006:
			if (!iLocal_657)
			{
				Function_36();
				iLocal_657 = 1;
			}
			break;
	}
	return 1;
}

void Function_45(int iParam0) //Position: 0x1F94 / 8084
{
	Function_46(&iParam0, 0.0f);
	return;
}

void Function_46(vector3 vParam0) //Position: 0x1FA1 / 8097
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_209(&vParam0, 1);
	Function_212(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

int Function_47(bool bParam0) //Position: 0x1FC6 / 8134
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_48(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1FE0 / 8160
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_33(bParam0))
	{
		Function_31();
		return;
	}
	bVar0 = Function_30(bParam0);
	if (!bVar0 != 1)
	{
		Global_21684[bParam07].f_12++;
		if (Function_105())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_28(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_103(Global_10966) };
		}
		if (Function_105())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_97();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
		}
	}
	if (Function_105())
	{
		Function_96();
	}
	*(&Global_21684[bParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_26("DEED_COMPLETE", bParam0);
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
			Function_91(bParam0);
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
						switch (Function_28(bParam0))
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
			Function_51(1);
			Function_50(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_49(bParam0, &Var14);
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

void Function_49(int iParam0, struct<41> Param1) //Position: 0x223E / 8766
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_50(bool bParam0, int iParam1) //Position: 0x227C / 8828
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

void Function_51(bool bParam0) //Position: 0x22BB / 8891
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_81();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_52();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_212(&Global_99144, 1);
		Function_212(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_52() //Position: 0x2310 / 8976
{
	Function_79();
	Function_78();
	Function_78();
	Function_77();
	Function_77();
	Function_76();
	Function_76();
	Function_60(0);
	Function_60(0);
	Function_57();
	Function_56();
	Function_55();
	Function_54();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_53();
	return;
}

void Function_53() //Position: 0x235B / 9051
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

void Function_54() //Position: 0x2461 / 9313
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

void Function_55() //Position: 0x2494 / 9364
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

void Function_56() //Position: 0x2627 / 9767
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

void Function_57() //Position: 0x27E0 / 10208
{
	Function_58(&Global_42918, 1, 0);
	return;
}

void Function_58(struct<2317> Param0) //Position: 0x27EE / 10222
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
	
	uVar0 = Function_59();
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

var Function_59() //Position: 0x2A0B / 10763
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_60(int iParam0) //Position: 0x2A20 / 10784
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
					iVar2 = ((Function_75((50 + iVar4)) + Function_75((183 + iVar4))) + Function_75((90 + iVar4)));
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
	Function_61(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_61(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AC7 / 10951
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
		Function_74(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_73(iParam0);
	if (&bParam2)
	{
		Function_62(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_62(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2D63 / 11619
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_72(390))), 32);
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
					bVar19 = (Function_189(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_189(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_70(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_67(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_65(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_64(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_63(), &Var9);
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

var Function_63() //Position: 0x33A1 / 13217
{
	int iVar0;
	
	return &iVar0;
}

var Function_64(int iParam0) //Position: 0x33AA / 13226
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_65(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x33BB / 13243
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_66("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_66(char* cParam0) //Position: 0x34B2 / 13490
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_67(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x34CD / 13517
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_69(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_68(Function_69(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_68(int iParam0, int iParam1) //Position: 0x3534 / 13620
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_69(int iParam0, bool bParam1) //Position: 0x3546 / 13638
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_70(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3558 / 13656
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
	if (((Function_71(iParam0) != 19 || Function_71(iParam0) != 17) || Function_71(iParam0) != 10) || Function_71(iParam0) != 9)
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

int Function_71(int iParam0) //Position: 0x368C / 13964
{
	return Global_55480[iParam016].f_96;
}

var Function_72(int iParam0) //Position: 0x369B / 13979
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_73(int iParam0) //Position: 0x36D8 / 14040
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

int Function_74(int iParam0, bool bParam1, bool bParam2) //Position: 0x3872 / 14450
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

int Function_75(bool bParam0) //Position: 0x3AB6 / 15030
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_76() //Position: 0x3AF7 / 15095
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
		iVar2 = ((Function_75((50 + iVar3) + 15) + Function_75((183 + iVar3) + 15)) + Function_75((90 + iVar3) + 15));
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
	Function_61(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_77() //Position: 0x3B80 / 15232
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
			iVar2 = ((Function_75((50 + iVar3) + 8) + Function_75((183 + iVar3) + 8)) + Function_75((90 + iVar3) + 8));
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
	Function_61(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_78() //Position: 0x3C17 / 15383
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
		iVar2 = ((Function_75((50 + iVar3)) + Function_75((183 + iVar3))) + Function_75((90 + iVar3)));
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
	Function_61(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_79() //Position: 0x3C96 / 15510
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_80(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_61(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_80(int iParam0, bool bParam1, int iParam2) //Position: 0x3CD3 / 15571
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
	Function_74(iParam0, bParam1, 1);
	Function_73(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_62(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_81() //Position: 0x3EDF / 16095
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_19())
	{
		Function_88(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_88(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_83(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_83(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_82(StackVal, Var0))
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

bool Function_82(char* cParam0) //Position: 0x3F96 / 16278
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_83(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3FAE / 16302
{
	int iVar0;
	
	iVar0 = Function_86(&uParam2, &uParam3);
	if (Function_85(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_209(&Global_99144, 1);
			Function_212(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_209(&Global_99144, 2);
			Function_212(&Global_99144, 1);
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
		Function_209(&Global_99144, 2);
		Function_212(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_84();
	return StackVal, Function_84();
}

struct<8> Function_84() //Position: 0x40A7 / 16551
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_85(int iParam0) //Position: 0x40B1 / 16561
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_86(bool bParam0, bool bParam1) //Position: 0x40C7 / 16583
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
				fVar2 = Function_87(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_87(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_85(iVar0) && !&bParam1)
	{
		iVar0 = Function_86(&bParam0, 1);
	}
	return iVar0;
}

float Function_87(struct<2> Param0, struct<2> Param2) //Position: 0x4193 / 16787
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_88(float fParam0, int iParam1) //Position: 0x41B0 / 16816
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_90(&Global_54076, &Var3);
	if (!Function_89(Global_46760[0]))
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
	if (!Function_89(Global_46760[2]))
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
	if (!Function_89(Global_46760[1]))
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
	if (!Function_89(Global_46796[1]))
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
	if (!Function_89(Global_46796[3]))
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
	if (!Function_89(Global_46796[2]))
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
	if (!Function_89(Global_46796[4]))
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
	if (!Function_89(Global_46816[0]))
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
	if (!Function_89(Global_46816[1]))
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
	if (!Function_89(Global_46816[2]))
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
	if (!Function_89(Global_46838[0]))
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
	if (!Function_89(Global_46850[0]))
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
	if (!Function_89(Global_46850[1]))
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
	if (!Function_89(Global_46850[2]))
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
	if (!Function_89(Global_46866[0]))
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
	if (!Function_89(Global_46866[1]))
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
	if (!Function_89(Global_46866[2]))
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
	if (!Function_89(Global_46894[2]))
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
	if (!Function_89(Global_46894[3]))
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
	if (!Function_89(Global_46894[0]))
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
	if (!Function_89(Global_46914[0]))
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
	if (!Function_89(Global_46926[2]))
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
	if (!Function_89(Global_46926[1]))
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
	if (!Function_89(Global_46926[0]))
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
	if (!Function_89(Global_46838[1]))
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
	if (!Function_89(Global_46894[1]))
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
	Function_209(&Global_99144, 2);
	Function_212(&Global_99144, 1);
	iParam1 = 0;
	if (Function_82(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_89(int iParam0) //Position: 0x49DC / 18908
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_20(iVar0, 0x1000000) || Function_20(iVar0, 0x2000000)) || Function_20(iVar0, 0x4000000)) || !Function_20(iVar0, 0x10000000));
}

void Function_90(var uParam0, int iParam1) //Position: 0x4A17 / 18967
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_91(bool bParam0) //Position: 0x4A26 / 18982
{
	int iVar0;
	int iVar1;
	
	if (!Function_29(bParam0))
	{
		return;
	}
	switch (Function_30(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_28(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_94(12, 1, 0, 0);
				Function_93(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_94(13, 1, 0, 0);
				Function_93(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_94(14, 1, 0, 0);
				Function_93(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_94(15, 1, 0, 0);
				Function_93(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_94(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_28(bParam0))
			{
				case 0x00000000:
					if (Function_47(bParam0) == 1)
					{
						iVar0 = Function_92(bParam0);
						if (Function_5(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_93(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_93(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_93(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_93(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_93(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_93(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_93(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_93(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_93(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_93(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_93(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_93(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_93(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_93(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_93(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_93(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_93(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_93(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_93(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_93(4, 19);
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
								Function_94(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_94(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_94(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_92(bParam0) == 0)
			{
				if (Function_47(bParam0) == 1)
				{
					Function_94(458, 1, 0, 0);
					iVar0 = Function_28(bParam0);
					if (Function_5(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_93(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_93(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_93(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_93(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_93(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_93(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_93(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_93(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_47(bParam0) == 1)
			{
				Function_94(400, 1, 0, 0);
			}
			switch (Function_28(bParam0))
			{
				case 0x00000001:
					Function_94(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_93(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_93(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_93(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_94(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_93(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_93(6, 9);
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

int Function_92(bool bParam0) //Position: 0x4F02 / 20226
{
	if (!Function_29(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_93(int iParam0, int iParam1) //Position: 0x4F21 / 20257
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

int Function_94(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4F8B / 20363
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
	Function_74(iParam0, TO_FLOAT(bParam1), 1);
	Function_73(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_62(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_95(iParam0);
	return 1;
}

void Function_95(int iParam0) //Position: 0x51B3 / 20915
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

void Function_96() //Position: 0x5251 / 21073
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
	PLAYSTAT_INT("HC_MONEY", Function_75(0));
	PLAYSTAT_INT("HC_FAME", Function_75(3));
	PLAYSTAT_INT("HC_HONOR", Function_75(1));
	return;
}

void Function_97() //Position: 0x53B3 / 21427
{
	int iVar0;
	int iVar1;
	
	if (!Function_102(Global_10966))
	{
		return;
	}
	iVar0 = Function_75(24);
	iVar1 = Function_101(Global_10966);
	if (!Function_102(iVar0) && Function_100(iVar1) < 0)
	{
		Function_61(24, Global_10966, 0);
		Function_98(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_100(Function_101(iVar0)))
	{
		Function_61(24, Global_10966, 0);
		Function_98(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_98(int iParam0, char* cParam1) //Position: 0x5433 / 21555
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
		Function_99(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_99(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x578A / 22410
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

int Function_100(int iParam0) //Position: 0x5812 / 22546
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_101(int iParam0) //Position: 0x582C / 22572
{
	if (!Function_102(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_102(int iParam0) //Position: 0x5846 / 22598
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_103(int iParam0) //Position: 0x585C / 22620
{
	char* cVar0[16];
	
	if (!Function_19())
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

struct<24> Function_104(char* cParam0) //Position: 0x589B / 22683
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

bool Function_105() //Position: 0x5AF1 / 23281
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_106(int iParam0, struct<2>[] Param1, vector3[] vParam2, var uParam3) //Position: 0x5B1C / 23324
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	Function_306(&(Global_43791[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= Param1)
	{
		bVar1 = iVar0;
		if (Function_18(&(Param1[iVar02]), 1))
		{
			Function_42(&Param1, &vParam2, bVar1, 0);
		}
		Function_13(&Param1, &vParam2, bVar1, 0);
		Function_107(&(Param1[iVar02]), &(vParam2[iVar03]), 0);
		uVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&uVar2, &uParam3, 0, false, 0);
		*(&Param1[iVar02] + 8) = &uVar2;
		iVar0++;
	}
}

void Function_107(bool bParam0, int iParam1, int iParam2) //Position: 0x5BA0 / 23456
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	if (&iParam2 == 0)
	{
		ADD_TIME(&iVar0, Function_15(Global_43790), 0, false, 0);
	}
	else
	{
		ADD_TIME(&iVar0, &iParam2, 0, false, 0);
	}
	*(&bParam0 + 8) = &iVar0;
	Function_16(&bParam0, 4);
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&iParam1 + 16))
		{
			DESTROY_OBJECT(&iParam1 + 16);
		}
	}
	return;
}

int Function_108(bool bParam0, bool bParam1, int iParam2) //Position: 0x5C00 / 23552
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_109(bParam0), Function_59()) == 0)
		{
			ADD_ITEM(Function_109(bParam0), Function_59(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_109(bParam0), Function_59(), &iParam2);
	return 1;
}

var Function_109(bool bParam0) //Position: 0x5C4E / 23630
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

int Function_110(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5D42 / 23874
{
	bool bVar0;
	
	bVar0 = Function_75(0);
	if ((Function_75(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_94(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_75(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_94(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_75(597) + Function_75(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

var Function_111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5E14 / 24084
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_75(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_109(17), &Global_54076))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

void Function_112(bool bParam0) //Position: 0x5F1B / 24347
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Function_28(bParam0) == Global_46760[2])
	{
		if (Function_142(2) && !Function_141(2))
		{
			Function_134(2, 2, 0, 0, 1);
		}
	}
	if (Function_28(bParam0) == Global_46796[3])
	{
		if (Function_142(6) && !Function_141(6))
		{
			Function_134(6, 16, 0, 0, 1);
		}
	}
	if (!Function_142(10) || Function_141(10))
	{
		return;
	}
	uVar0 = MAKE_TIME_OF_DAY_EX((GET_DAY(0) - 1), GET_HOUR(false), GET_MINUTE(0), GET_SECOND(0));
	uVar1 = GET_TIME_OF_DAY();
	iVar2 = Function_47(Global_46948);
	if (Global_46948 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_46950);
	if (Global_46950 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_46952);
	if (Global_46952 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_46951);
	if (Global_46951 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	iVar2 = Function_47(Global_46953);
	if (Global_46953 == bParam0)
	{
		iVar2++;
	}
	if (iVar2 == 0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469507] + 40, &uVar0, &uVar1) && !Global_46950 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469487] + 40, &uVar0, &uVar1) && !Global_46948 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469527] + 40, &uVar0, &uVar1) && !Global_46952 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469517] + 40, &uVar0, &uVar1) && !Global_46951 != bParam0)
	{
		return;
	}
	if (!TIME_IS_IN_RANGE(&Global_21684[Global_469537] + 40, &uVar0, &uVar1) && !Global_46953 != bParam0)
	{
		return;
	}
	Function_93(2, 24);
	Function_113(10, 0, 1);
	return;
}

void Function_113(bool bParam0, bool bParam1, bool bParam2) //Position: 0x60D9 / 24793
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_141(bParam0))
	{
		if (!Function_142(bParam0))
		{
			Function_117(bParam0, 1, 0, 0, 1);
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
		Function_94(457, 1, 0, 0);
		Function_116(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_115(0, 0, 1, 1))
			{
				Function_51(1);
				Function_50(1, 0);
			}
			else
			{
				Function_114();
			}
		}
	}
	return;
}

void Function_114() //Position: 0x627A / 25210
{
	return;
}

bool Function_115(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x6280 / 25216
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

void Function_116(bool bParam0, int iParam1) //Position: 0x632F / 25391
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

void Function_117(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x6384 / 25476
{
	char* cVar0[32];
	
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_132(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_142(bParam0))
	{
		Function_94(456, 1, 0, 0);
		Function_116(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_115(0, 0, 1, 1))
			{
				Function_51(1);
				Function_50(1, 5);
			}
			else
			{
				Function_114();
			}
		}
		Function_126(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_125() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_125() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_124(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_19())
		{
			if (!Function_123(Global_119934, 2))
			{
				Function_118(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_118(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x64E0 / 25824
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_120(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_119(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_119(char* cParam0) //Position: 0x6555 / 25941
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

bool Function_120(int iParam0, var uParam1, int iParam2) //Position: 0x658F / 25999
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
		if (Function_122(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_121(uVar0))
		{
			case 0x00000002:
				if (!Function_123(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_121(char* cParam0) //Position: 0x660B / 26123
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

int Function_122(int iParam0) //Position: 0x66AC / 26284
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_212(&iVar1, 2147483648);
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

bool Function_123(int iParam0, int iParam1) //Position: 0x66E9 / 26345
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_124(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x66FC / 26364
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_103(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

bool Function_125() //Position: 0x6787 / 26503
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_126(bool bParam0) //Position: 0x67B4 / 26548
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
			if (Function_130(bParam0, Function_131(bVar24)))
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
			if (Function_130(bParam0, Function_131(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_129(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_128(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_127(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_127(int iParam0) //Position: 0x6964 / 26980
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

void Function_128(char* cParam0, bool bParam1) //Position: 0x69BB / 27067
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

var Function_129(int iParam0) //Position: 0x69E0 / 27104
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_133(iParam0))
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

bool Function_130(bool bParam0, bool bParam1) //Position: 0x6A36 / 27190
{
	int iVar0;
	
	if (!Function_133(bParam0))
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

bool Function_131(bool bParam0) //Position: 0x6A95 / 27285
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_132(int iParam0) //Position: 0x6AA1 / 27297
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_133(int iParam0) //Position: 0x6ABD / 27325
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_134(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6AD3 / 27347
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_132(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_140(bParam0, 2))
	{
		Function_94(456, 1, 0, 0);
		Function_116(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_124(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_130(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_116(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_115(0, 0, 1, 1))
			{
				Function_51(1);
				Function_50(1, 0);
			}
			else
			{
				Function_114();
			}
		}
		Function_126(bParam0);
		if (StackVal && !Function_20(((((!Function_125() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_20((((Function_125() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_19())
		{
			if (!Function_123(Global_119934, 2))
			{
				Function_118(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_136();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_135(3, bParam1);
				break;
			
			case 0x00000005:
				Function_135(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_135(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_135(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_135(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_135(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_93(2, 24);
				break;
			
			case 0x00000003:
				Function_93(2, 25);
				break;
			
			case 0x0000000F:
				Function_93(2, 26);
				break;
			
			case 0x0000000D:
				Function_93(2, 27);
				break;
			
			case 0x0000000E:
				Function_93(2, 28);
				break;
			}
	}
}

void Function_135(int iParam0, bool bParam1) //Position: 0x6D72 / 28018
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

void Function_136() //Position: 0x6DE1 / 28129
{
	if (Function_133(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_139(Global_42827);
			(&Global_42827 + 8) = Function_137(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_139(Global_42827);
			*(&Global_42827 + 8) = Function_137(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_137(int iParam0, int iParam1) //Position: 0x6E61 / 28257
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
					if (Function_276(6, 0) || Function_276(12, 0))
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
					if (Function_138(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_276(5, 0))
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
					if (Function_138(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_138(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_138(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_138(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_276(26, 0))
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
					if (Function_138(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_138(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_138(27) && iVar16)
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
					if (Function_138(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_138(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_138(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_138(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_276(17, 0) && iVar13)
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
					if (Function_138(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_276(6, 0) && Function_138(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_138(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_276(9, 0) && Function_138(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_138(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_276(8, 0) && iVar17)
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
	if (Function_82(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_82(StackVal, vVar2))
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
	if (!Function_82(StackVal, vVar2))
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

int Function_138(int iParam0) //Position: 0x7AC4 / 31428
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_139(int iParam0) //Position: 0x7AD9 / 31449
{
	int iVar0;
	int iVar1;
	
	if (!Function_133(iParam0))
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

bool Function_140(int iParam0, int iParam1) //Position: 0x7B28 / 31528
{
	int iVar0;
	
	if (!Function_133(iParam0))
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

bool Function_141(int iParam0) //Position: 0x7B55 / 31573
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_140(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_142(int iParam0) //Position: 0x7BA6 / 31654
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_140(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_143(int iParam0, bool bParam1, bool bParam2) //Position: 0x7BF8 / 31736
{
	int iVar0;
	bool bVar1;
	
	if (Function_155(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_105())
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
	iVar0 = Function_75(3);
	Function_152();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_150(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_123(Global_119936, 4))
			{
				Function_118(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_94(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_189(3));
	iVar0 = Function_75(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_145(4, Function_149(Global_21369.f_248), 1);
				Function_144(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_145(4, Function_149(Global_21369.f_248), 1);
				Function_144(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_145(4, Function_149(Global_21369.f_248), 1);
				Function_144(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_145(4, Function_149(Global_21369.f_248), 1);
				Function_144(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_145(4, Function_149(Global_21369.f_248), 1);
				Function_144(Global_21369.f_244, Global_21369.f_248);
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

void Function_144(int iParam0, int iParam1) //Position: 0x7DCC / 32204
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

int Function_145(int iParam0, char* cParam1) //Position: 0x8039 / 32825
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
	Function_98(iParam0, &cParam1, 0, 1);
	iVar1 = Function_146();
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

int Function_146() //Position: 0x81C9 / 33225
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
	Function_147();
	return 0;
}

void Function_147() //Position: 0x826A / 33386
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_148(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_148(int iParam0) //Position: 0x8328 / 33576
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

var Function_149(int iParam0) //Position: 0x838E / 33678
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

int Function_150(int iParam0, bool bParam1) //Position: 0x841D / 33821
{
	bool bVar0;
	int iVar1;
	
	Function_94(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_151(iParam0, 4294967295);
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
	iVar1 = Function_146();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_151(int iParam0, int iParam1) //Position: 0x85C9 / 34249
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

void Function_152() //Position: 0x860E / 34318
{
	Function_154(3, 0.0f);
	Function_153(3, 10000.0f);
	return;
}

int Function_153(int iParam0, int iParam1) //Position: 0x8624 / 34340
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x8664 / 34404
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_155(int iParam0) //Position: 0x86A4 / 34468
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x86B3 / 34483
{
	int iVar0;
	bool bVar1;
	
	if (Function_155(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_105())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_75(1);
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
			Function_150(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_123(Global_119936, 1))
				{
					Function_118(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_159(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_123(Global_119936, 2))
				{
					Function_118(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_94(1, bVar1, 0, 0);
	}
	else
	{
		Function_158(1, (4294967295 * bVar1), 0);
	}
	if (Function_75(1) <= 4294962296)
	{
		Function_61(1, 4294962296, 0);
	}
	else if (Function_75(1) >= 5000)
	{
		Function_61(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_189(1));
	iVar0 = Function_75(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_145(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_145(2, Function_157(Global_21369.f_244), 0);
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
				Function_145(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_145(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_145(2, Function_157(Global_21369.f_244), 1);
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
				Function_145(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_145(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_145(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_145(2, Function_157(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_145(2, Function_157(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_145(2, Function_157(Global_21369.f_244), 1);
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
				Function_145(2, Function_157(Global_21369.f_244), 0);
			}
			break;
	}
	Function_144(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_157(int iParam0) //Position: 0x89DA / 35290
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

int Function_158(int iParam0, bool bParam1, int iParam2) //Position: 0x8A7D / 35453
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
	Function_73(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_62(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_159(int iParam0, bool bParam1) //Position: 0x8C7A / 35962
{
	bool bVar0;
	int iVar1;
	
	Function_158(iParam0, bParam1, 0);
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
	iVar1 = Function_151(iParam0, 4294967295);
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
	iVar1 = Function_146();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

bool Function_160(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10) //Position: 0x8E25 / 36389
{
	var uVar0;
	
	switch (uParam0)
	{
		case 0x00000000:
			Function_45(&iLocal_427);
			Function_186(1, 0, 1, 1, 1, 1, 0, &iLocal_0 + 176, 1, 1, 1, 1, 0x3f800000, 0);
			TELEPORT_ACTOR(&Global_54076, &iLocal_0 + 1256, 1, 1, 1);
			TELEPORT_ACTOR(&iParam1, &iLocal_0 + 1224, 1, 1, 1);
			Function_182(&iParam1, &Global_54076);
			Function_182(&Global_54076, &iParam1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&Global_54076, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam1, 1);
			uParam4 = Function_176(&uParam3, 0, 1, 0, 0);
			UI_PUSH("CutsceneWithMessages");
			if (IS_PLAYER_CONTROLLABLE(0))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
			}
			DELETE_ALL_WEAPONS_FROM_ACTOR(&iParam1);
			Function_173(&uParam5, &uParam6, &bParam7, &iParam1, &uParam10);
			HUD_ENABLE(0);
			ENABLE_USE_CONTEXTS(0);
			TASK_CLEAR(&iParam1);
			TASK_STAND_STILL(&iParam1, -1.0f, 0, 0);
			uParam0 = 1;
			break;
		
		case 0x00000001:
			if (Function_192(&iLocal_427))
			{
				if (Function_190(&iLocal_427) <= 1.0f && !Function_20(iParam2, 2097152))
				{
					Function_209(&iParam2, 2097152);
					SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(27, &Global_54076, 2);
					SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(16, &Global_54076, 2);
					SET_FACTIONS_STATUS_TWO_WAY(27, 16, 2);
					Function_169(&uParam3);
					RESET_ANIM_SET_FOR_ACTOR(&iParam1, 0);
					RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 0);
					SET_ANIM_SET_FOR_ACTOR(&iParam1, "handoff", 0);
					SET_LINKED_ANIM_TARGET(&iParam1, &Global_54076);
					SET_ACTION_NODE_FOR_ACTOR(&iParam1, "handoff");
					Function_166();
				}
				else if (Function_190(&iLocal_427) <= 8,5f && !Function_20(iParam2, 4194304))
				{
					Function_209(&iParam2, 4194304);
					DECOR_SET_BOOL(&Global_54076, "Nosalida_TriggeringEnd", true);
					Function_165(&bParam9);
					while (SQUAD_GET_SIZE(&uParam5) >= 0)
					{
						uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam5, false);
						if (IS_ACTOR_VALID(&uVar0))
						{
							SQUAD_LEAVE(&uVar0);
							KILL_ACTOR(&uVar0);
						}
					}
					while (SQUAD_GET_SIZE(&uParam6) >= 0)
					{
						uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam6, false);
						if (IS_ACTOR_VALID(&uVar0))
						{
							SQUAD_LEAVE(&uVar0);
							KILL_ACTOR(&uVar0);
						}
					}
					Function_165(&bParam7);
					SQUAD_LEAVE(&iParam1);
					Function_165(&bParam8);
				}
				else if (Function_190(&iLocal_427) <= 11,5f)
				{
					PRINT_BIG("NOS_PrintBig", 5f, 0, 2, 0);
					DESTROY_ACTOR(&iParam1);
					uParam0 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_192(&iLocal_427))
			{
				if (Function_190(&iLocal_427) <= 16,25f)
				{
					UI_POP("CutsceneWithMessages");
					HUD_ENABLE(1);
					ENABLE_USE_CONTEXTS(1);
					Function_161(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_161(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0x90FB / 37115
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
		uVar0 = Function_59();
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
		Function_94(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_164();
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
	Function_162(&iParam9, &iParam10);
}

void Function_162(var uParam0, bool bParam1) //Position: 0x91CA / 37322
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
		Function_163();
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

void Function_163() //Position: 0x9299 / 37529
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

void Function_164() //Position: 0x9311 / 37649
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_165(bool bParam0) //Position: 0x9326 / 37670
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

void Function_166() //Position: 0x9371 / 37745
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "NoSalida_MGThanksMe", "NoSalida_MGThanksMe", false, 4, 1, 0, 1);
		Function_167(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_167(int iParam0) //Position: 0x93C0 / 37824
{
	Function_168(0, &Global_54076, iParam0, 0);
	Function_168(1, &uLocal_412, iParam0, 0);
	Function_168(2, &uLocal_414, iParam0, 0);
	return;
}

void Function_168(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x93E7 / 37863
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_20(uParam2, Function_131(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_169(int iParam0) //Position: 0x940F / 37903
{
	var uVar0;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("NOS_AreaVultures", &iParam0, 4294967295, 0);
	Function_170(&iParam0, &uVar0, &iLocal_0 + 168);
	return;
}

void Function_170(float fParam0, float fParam1, var uParam2) //Position: 0x9440 / 37952
{
	struct<9> Var0;
	struct<2> Var15;
	struct<2> Var17;
	var uVar19;
	
	if (!IS_LAYOUTREF_VALID(&fParam0))
	{
		return;
	}
	if (!IS_VOLUME_VALID(&uParam2))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(&fParam1))
	{
		fParam1 = CREATE_OBJECTSET_IN_LAYOUT("Ambiance_VultureSet", &fParam0, 15, 0);
	}
	vVar0 = Vector(0.0f, 0.0f, 0.0f);
	GET_VOLUME_SCALE(&uParam2, &vVar0);
	fVar2 = ((vVar0.x + vVar0.z) / 2.0f);
	bVar3 = ROUND((vVar0.x + IntToFloat(RAND_INT_RANGE(true, 3))));
	PRINTSTRING("Trying to create this many vultures: ");
	PRINTINT(bVar3);
	PRINTNL();
	vVar4 = Vector(0.0f, 0.0f, 0.0f);
	GET_VOLUME_CENTER(&uParam2, &vVar4);
	iVar6 = 0;
	while (iVar6 < (bVar3 - 1))
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("Ambiance_Vlt") };
		Var15 = Vector(RAND_FLOAT_RANGE((vVar4.x - fVar2), (vVar4.x + fVar2)), RAND_FLOAT_RANGE((vVar4.y - 5.0f), (vVar4.y + 5.0f)), RAND_FLOAT_RANGE((vVar4.z - fVar2), (vVar4.z + fVar2)));
		Var17 = Vector(0.0f, RAND_FLOAT_RANGE(0.0f, 359,9f), 0.0f);
		uVar19 = CREATE_ACTOR_IN_LAYOUT(&fParam0, &Var7, 1128, Var15, Var17);
		MAKE_BIRD_FLY_FROM_POINT(&uVar19, Var15, Var17);
		ADD_OBJECT_TO_OBJECTSET(&uVar19, &fParam1);
		TASK_PRIORITY_SET(&uVar19, true);
		TASK_BIRD_SOAR_AT_COORD(&uVar19, &vVar4, -1.0f, 1106247680);
		iVar6++;
	}
	return;
}

struct<32> Function_171(char* cParam0) //Position: 0x95AA / 38314
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_172("0", &cVar8, ""), 4);
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

struct<32> Function_172(char* cParam0) //Position: 0x9616 / 38422
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_173(int iParam0, int iParam1, var uParam2, var uParam3, struct<6>[] Param4) //Position: 0x9638 / 38456
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (IS_BLIP_VALID(&uLocal_423))
	{
		REMOVE_BLIP(&uLocal_423);
	}
	if (IS_ACTOR_VALID(&uParam3))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam3)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam3));
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_BLIP_VALID(&Param4[iVar06] + 32))
		{
			REMOVE_BLIP(&Param4[iVar06] + 32);
		}
		iVar0++;
	}
	Function_211(&iParam0);
	SQUAD_GOALS_CLEAR(&iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iParam0))
	{
		if (Function_175(&iParam0, 0))
		{
			Function_174(&iParam0);
		}
		iVar1++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iParam1))
	{
		if (Function_175(&iParam1, 0))
		{
			Function_174(&iParam1);
		}
		iVar2++;
	}
	bVar3 = false;
	bVar3 = false;
	while (bVar3 < (SQUAD_GET_SIZE(&uParam2) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam2, bVar3)))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam2, bVar3))))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam2, bVar3)));
			}
		}
		bVar3++;
	}
	return 1;
}

void Function_174(int iParam0) //Position: 0x9757 / 38743
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

bool Function_175(var uParam0, bool bParam1) //Position: 0x97AB / 38827
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
			if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				if (!bParam1)
				{
					return 1;
				}
			}
			if (bParam1)
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

var Function_176(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x9807 / 38919
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_63(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "NosalidaCut", 4, 1);
	}
	Function_177(&uVar0);
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

void Function_177(int iParam0) //Position: 0x988C / 39052
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_181(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_180(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_179(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_178(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7.0f, 0, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 2,5f, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 2, 3, 7.0f, 2, 1);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1.0f, 3);
	return;
}

void Function_178(int iParam0) //Position: 0x990E / 39182
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4695,956f, 4,826315f, 3991,861f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,007988f, 0,390051f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_179(int iParam0) //Position: 0x9983 / 39299
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4697,108f, 4,808572f, 3995,103f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,010988f, 0,643152f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_180(int iParam0) //Position: 0x99F8 / 39416
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4690,164f, 4,744025f, 4012,163f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,126308f, -0,271354f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_181(int iParam0) //Position: 0x9A6D / 39533
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 55,51708f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4690,805f, 5,845698f, 4011,834f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,090499f, 0,339764f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_182(var uParam0, int iParam1) //Position: 0x9AE2 / 39650
{
	struct<2> Var0;
	
	GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&iParam1), &Var0);
	Function_183(StackVal, &uParam0, Var0);
	return;
}

void Function_183(float fParam0, struct<2> Param1) //Position: 0x9AFE / 39678
{
	if (!IS_ACTOR_VALID(GET_MOUNT(&fParam0)))
	{
		SET_ACTOR_HEADING(StackVal, Function_184(&fParam0, &fParam0, Param1), 1);
	}
	else
	{
		SET_ACTOR_HEADING(StackVal, Function_184(GET_MOUNT(&fParam0), &fParam0, Param1), 1);
	}
	return;
}

var Function_184(float fParam0, struct<2> Param1) //Position: 0x9B39 / 39737
{
	struct<2> Var0;
	
	Function_185(&fParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_185(&fParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_185(float fParam0) //Position: 0x9BBA / 39866
{
	struct<2> Var0;
	
	GET_POSITION(&fParam0, &Var0);
	return StackVal, Var0;
}

void Function_186(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, var uParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x9BCC / 39884
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
	Function_164();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_59();
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
			if (IS_VOLUME_VALID(&uParam7))
			{
				FIRE_STOP_FLAMES_IN_VOLUME(&uParam7);
				DELETE_PROJECTILES_IN_VOLUME(&uParam7);
			}
			else
			{
				FIRE_STOP_ALL_FIRES();
				Function_185(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_63(), 2,802597E-45f, Function_185(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_94(19, 1, 0, 0);
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
	if (iParam10 && !Function_19())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_187()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_187()));
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
		Function_311(0x4000000);
	}
	if (Function_312(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_311(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_187() //Position: 0x9E7E / 40574
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

int Function_188(int iParam0, bool bParam1, bool bParam2) //Position: 0x9F0C / 40716
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
	if (Global_54086[iParam0] > bParam1)
	{
		Function_74(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_73(iParam0);
	if (&bParam2)
	{
		Function_62(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

float Function_189(int iParam0) //Position: 0xA179 / 41337
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_190(vector3 vParam0) //Position: 0xA1B2 / 41394
{
	if (Function_192(&vParam0))
	{
		if (Function_191(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_191(int iParam0) //Position: 0xA27F / 41599
{
	return Function_20(iParam0, 2);
}

bool Function_192(int iParam0) //Position: 0xA28D / 41613
{
	return Function_20(iParam0, 1);
}

void Function_193(int iParam0, int iParam1) //Position: 0xA29B / 41627
{
	if (!Function_33(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = iParam1;
	return;
}

float Function_194(var uParam0, int iParam1) //Position: 0xA2B6 / 41654
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

void Function_195(int iParam0, bool bParam1) //Position: 0xA3AB / 41899
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	iVar0 = SQUAD_GET_SIZE(&iParam0);
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < (iVar0 - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar2);
		SET_ACTOR_ONE_SHOT_DEATH(&uVar1, bParam1);
		bVar2++;
	}
	return;
}

bool Function_196(struct<6>[] Param0) //Position: 0xA3EF / 41967
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_ACTOR_VALID(&(uParam1[0])))
	{
		if (IS_ACTOR_ALIVE(&(uParam1[0])))
		{
			uVar0 = &uParam1[0];
		}
	}
	if (!IS_ACTOR_VALID(&uVar0))
	{
		if (IS_ACTOR_VALID(&(uParam1[1])))
		{
			if (IS_ACTOR_ALIVE(&(uParam1[1])))
			{
				uVar0 = &uParam1[1];
			}
		}
	}
	if (IS_VOLUME_ENABLED(&iLocal_0 + 80))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 80))
		{
			SET_VOLUME_ENABLED(&iLocal_0 + 80, 0);
			Function_204(&uParam3, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			bVar1 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_COORD(0, &iLocal_0 + 1040, 4);
			TASK_DISMOUNT(false, 1);
			TASK_SEQUENCE_CLOSE();
			TASK_SEQUENCE_PERFORM(&(uParam9[0]), bVar1);
			TASK_SEQUENCE_PERFORM(&(uParam9[1]), bVar1);
			TASK_SEQUENCE_PERFORM(&(uParam9[2]), bVar1);
			TASK_SEQUENCE_RELEASE(bVar1, 1);
			uVar2 = GET_MOUNT(&(uParam9[0]));
			if (IS_ACTOR_VALID(&uVar2))
			{
				TASK_FLEE_ACTOR(&uVar2, &(uParam9[0]), 200.0f, -1.0f, 0, 0, 0);
			}
			uVar2 = GET_MOUNT(&(uParam9[1]));
			if (IS_ACTOR_VALID(&uVar2))
			{
				TASK_FLEE_ACTOR(&uVar2, &(uParam9[1]), 200.0f, -1.0f, 0, 0, 0);
			}
			uVar2 = GET_MOUNT(&(uParam9[2]));
			if (IS_ACTOR_VALID(&uVar2))
			{
				TASK_FLEE_ACTOR(&uVar2, &(uParam9[2]), 200.0f, -1.0f, 0, 0, 0);
			}
			Function_203(&uParam3, &iLocal_0 + 88, 0, 4294967295);
		}
	}
	if (!Param0[06].f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(&Param0[06] + 24) > 4)
		{
			if (IS_BLIP_VALID(&Param0[06] + 32))
			{
				REMOVE_BLIP(&Param0[06] + 32);
			}
			FIRE_CREATE_IN_VOLUME(&Param0[06] + 40, &iLocal_0 + 184, 12, 1);
			Param0[06].f_12 = 1;
			uParam7++;
			if (uParam7 <= 5)
			{
				Function_269();
				Function_164();
				Function_202();
			}
			Function_201(&uParam4, &Global_54076, 1);
		}
	}
	if (!Param0[16].f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(&Param0[16] + 24) > 4)
		{
			if (IS_BLIP_VALID(&Param0[16] + 32))
			{
				REMOVE_BLIP(&Param0[16] + 32);
			}
			FIRE_CREATE_IN_VOLUME(&Param0[16] + 40, &iLocal_0 + 192, 12, 1);
			Param0[16].f_12 = 1;
			uParam7++;
			if (uParam7 != 5)
			{
				Function_269();
				Function_164();
				Function_202();
			}
			Function_201(&uParam4, &Global_54076, 1);
		}
	}
	if (!Param0[26].f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(&Param0[26] + 24) > 4)
		{
			if (IS_BLIP_VALID(&Param0[26] + 32))
			{
				REMOVE_BLIP(&Param0[26] + 32);
			}
			FIRE_CREATE_IN_VOLUME(&Param0[26] + 40, &iLocal_0 + 200, 12, 1);
			Function_201(&uParam3, &Global_54076, 1);
			Function_201(&uParam5, &Global_54076, 1);
			Param0[26].f_12 = 1;
			uParam7++;
			if (uParam7 != 5)
			{
				Function_269();
				Function_164();
				Function_202();
			}
			Function_209(&iParam6, 1024);
		}
	}
	if (!Param0[36].f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(&Param0[36] + 24) > 4)
		{
			if (IS_BLIP_VALID(&Param0[36] + 32))
			{
				REMOVE_BLIP(&Param0[36] + 32);
			}
			FIRE_CREATE_IN_VOLUME(&Param0[36] + 40, &Param0[36] + 24, 12, 1);
			Param0[36].f_12 = 1;
			uParam7++;
			if (uParam7 != 5)
			{
				Function_269();
				Function_164();
				Function_202();
			}
		}
	}
	if (!Param0[46].f_12)
	{
		if (COUNT_FLAMES_IN_VOLUME(&Param0[46] + 24) > 4)
		{
			if (IS_BLIP_VALID(&Param0[46] + 32))
			{
				REMOVE_BLIP(&Param0[46] + 32);
			}
			FIRE_CREATE_IN_VOLUME(&Param0[46] + 40, &Param0[46] + 24, 12, 1);
			Param0[46].f_12 = 1;
			uParam7++;
			if (uParam7 != 5)
			{
				Function_269();
				Function_164();
				Function_202();
			}
		}
	}
	if (uParam7 == 5)
	{
		AUDIO_MUSIC_SET_MOOD("PASTORAL", 0, 4294967295, 4294967295);
		Function_200();
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
		if (IS_ACTOR_VALID(&(uParam1[0])))
		{
			Function_198(&(uParam1[0]), &iLocal_0 + 712, 1, 4, -1.0f, 1, 0, 1, 0);
		}
		if (IS_ACTOR_VALID(&(uParam1[1])))
		{
			Function_198(&(uParam1[1]), &iLocal_0 + 680, 1, 4, -1.0f, 1, 0, 1, 0);
		}
		Function_197("NOS_Army_Obj_ReturnToGen", 0x40f00000, 1, 2, 0, 0, 0, 0);
		CLEAR_JOURNAL_ENTRY_DETAIL_LIST(uParam8, 0);
		APPEND_JOURNAL_ENTRY_DETAIL(uParam8, "NOS_Army_Obj_ReturnToGen", 0, 0, false);
		APPEND_JOURNAL_ENTRY(uParam8, 0);
		if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam2)))
		{
			ADD_BLIP_FOR_ACTOR(&uParam2, 325, 0, 2, 0);
		}
		return 1;
	}
	return 0;
}

void Function_197(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xA8BA / 43194
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
			Var0 = { StackVal, StackVal, StackVal, Function_103(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&bParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_198(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8) //Position: 0xA94F / 43343
{
	vector3 vVar0;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam1))
	{
		return;
	}
	if (GET_OBJECT_TYPE(&uParam1) != 8)
	{
		return;
	}
	GET_OBJECT_POSITION(&uParam1, &vVar0);
	(&vVar0 + 12)->f_4 = GET_OBJECT_HEADING(&uParam1);
	Function_199(StackVal, StackVal, &uParam0, vVar0, &iParam2, &iParam3, &fParam4, &iParam5, &iParam6, &iParam7, &iParam8);
}

void Function_199(float fParam0, struct<2> Param1, var uParam3, var uParam4, int iParam5, var uParam6, bool bParam7, bool bParam8, Vector3 vParam9, bool bParam10) //Position: 0xA9B3 / 43443
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	uVar0 = FIND_NEAREST_COVER_LOCATION(StackVal, &Param1, 2,5f, 90.0f, 7);
	bVar1 = TASK_SEQUENCE_OPEN();
	if (IS_COVER_LOCATION_VALID(&uVar0))
	{
		if (&iParam5 != 2)
		{
			Function_185(&fParam0);
			if (VDIST(Function_185(&fParam0), Param1) < 5.0f)
			{
				if (&bParam10)
				{
					TASK_GO_NEAR_COORD(false, &Param1, 2.0f, &iParam5);
				}
				else
				{
					TASK_GO_TO_COORD_NONSTOP(0, &Param1, &iParam5, 3212836864);
				}
			}
		}
		if (&bParam7)
		{
			if (&bParam8)
			{
				TASK_SHOOT_FROM_COVER(0, &Global_54076, &uVar0, &uParam6, 1086324736);
			}
			else
			{
				TASK_SHOOT_ENEMIES_FROM_COVER(0, &uVar0, &uParam6, 1086324736);
			}
		}
		else
		{
			TASK_HIDE_AT_COVER(0, &uVar0, &uParam6, 6.0f, &vParam9);
		}
	}
	else if (&bParam7)
	{
		TASK_GO_NEAR_COORD(false, &Param1, 5.0f, &iParam5);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, 0, &Param1, &uParam6);
	}
	else
	{
		TASK_GO_TO_COORD(0, &Param1, &iParam5);
		UNK_0x44986367(StackVal, &Var2);
		Param1 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(Var2, Param1, StackVal) * Vector(10.0f, 10.0f, 10.0f), StackVal, StackVal);
		TASK_FACE_COORD(0, &Param1, 0);
		TASK_CROUCH(false, &uParam6);
	}
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&fParam0);
	TASK_PRIORITY_SET(&fParam0, &uParam4);
	TASK_SEQUENCE_PERFORM(&fParam0, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
}

void Function_200() //Position: 0xAAE5 / 43749
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "NoSalida_Return2General", "NoSalida_Return2General", false, 3, 1, 0, 1);
		Function_167(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_201(var uParam0, var uParam1, bool bParam2) //Position: 0xAB3C / 43836
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
				}
				else
				{
					GET_POSITION(&uParam1, &uVar2);
					MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_202() //Position: 0xABB4 / 43956
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(2, "NoSalida_BurnsTargets", "NoSalida_BurnsTargets", false, 3, 1, 0, 1);
		Function_167(5);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_203(var uParam0, var uParam1, int iParam2, int iParam3) //Position: 0xAC07 / 44039
{
	var uVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return &uVar0;
	}
	uVar0 = SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&uParam0, iParam2, &uParam1, iParam3);
	iVar1 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&uParam0, 0, &uParam1, 4, 1);
	SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(&uParam0, &iVar1, &uVar0);
	return &uVar0;
}

void Function_204(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xAC4E / 44110
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

bool Function_205(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xAD5E / 44382
{
	if (((Function_207(&Global_54076, &uParam0, 1, 0, 0, 3212836864) || Function_207(&Global_54076, &uParam1, 1, 0, 0, 3212836864)) || Function_207(&Global_54076, &uParam2, 1, 0, 0, 3212836864)) || Function_20(uParam3, 16384))
	{
		Function_204(&uParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_204(&uParam1, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_204(&uParam2, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
		Function_206(&uParam0, &Global_54076, 4);
		Function_206(&uParam1, &Global_54076, 4);
		Function_206(&uParam2, &Global_54076, 4);
		return 1;
	}
	return 0;
}

void Function_206(var uParam0, var uParam1, bool bParam2) //Position: 0xAE26 / 44582
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

int Function_207(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xAE72 / 44658
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
			if (Function_208(&uParam0, &uVar1, iParam2, &iParam3, &iParam4, &iParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xAEDD / 44765
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

void Function_209(int iParam0, bool bParam1) //Position: 0xAFE3 / 45027
{
	iParam0 = (iParam0 || bParam1);
	return;
}

void Function_210(int iParam0, bool bParam1) //Position: 0xAFF4 / 45044
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
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_211(int iParam0) //Position: 0xB045 / 45125
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_212(int iParam0, bool bParam1) //Position: 0xB07A / 45178
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

bool Function_213(var uParam0, var[] uParam1, var uParam3, int iParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, var uParam14) //Position: 0xB090 / 45200
{
	bool bVar0;
	struct<2> Var1;
	var uVar3;
	var uVar5;
	var uVar7;
	float fVar8;
	var uVar9;
	struct<2> Var11;
	
	if (uParam2 == 10)
	{
		return 0;
	}
	if (IS_ACTOR_VALID(&uParam0) && !DECOR_CHECK_EXIST(&Global_54076, "Nosalida_TriggeringEnd"))
	{
		if (Function_233(&uParam0, &Global_54076) || Function_232(&uParam0, &Global_54076, 0, 1))
		{
			Function_209(&iParam4, 128);
			Function_164();
			Function_124("NOS_Help_PlayerKilledGeneral", 0x41200000, 1, 0, 2, 1, 0);
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 27, 0);
			MEMORY_CONSIDER_AS_ENEMY(&uParam0, &Global_54076);
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			TASK_CLEAR(&uParam0);
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < (SQUAD_GET_SIZE(&uParam3) - 1))
			{
				MEMORY_CONSIDER_AS(SQUAD_GET_ACTOR_BY_INDEX(&uParam3, bVar0), &Global_54076, false);
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam3, bVar0)))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam3, bVar0))))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&uParam3, bVar0)));
					}
				}
				bVar0++;
			}
			if (IS_BLIP_VALID(&uLocal_423))
			{
				REMOVE_BLIP(&uLocal_423);
			}
			uParam2 = 10;
			return 0;
		}
	}
	if (!DECOR_CHECK_EXIST(&Global_54076, "Nosalida_TriggeringEnd"))
	{
		if (Function_231(&uParam8, &Global_54076))
		{
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
			MEMORY_CONSIDER_AS_ENEMY(&uParam0, &Global_54076);
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			TASK_CLEAR(&uParam0);
			if (!Function_20(iParam4, 2048))
			{
				Function_164();
				Function_124("NOS_KilledArmyGuy_Help_01", 0x41200000, 1, 0, 2, 1, 0);
				Function_209(&iParam4, 2048);
			}
			uParam2 = 10;
			return 0;
		}
	}
	if (!DECOR_CHECK_EXIST(&Global_54076, "Nosalida_TriggeringEnd"))
	{
		if (Function_232(&(uParam1[0]), &Global_54076, 0, 1) || Function_232(&(uParam1[1]), &Global_54076, 0, 1))
		{
			SET_FACTIONS_STATUS_TWO_WAY(2, 16, 4);
			SET_FACTIONS_STATUS_TWO_WAY(2, 10, 4);
			MEMORY_CONSIDER_AS_ENEMY(&uParam0, &Global_54076);
			RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
			TASK_CLEAR(&uParam0);
			if (!Function_20(iParam4, 2048))
			{
				Function_164();
				Function_124("NOS_KilledArmyGuy_Help_01", 0x41200000, 1, 0, 2, 1, 0);
				Function_209(&iParam4, 2048);
			}
			uParam2 = 10;
			return 0;
		}
	}
	if (!iLocal_426)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 208) && IS_ACTOR_RIDING(&Global_54076))
		{
			if (HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
			}
			Function_124("mission_no_horse", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_426 = 1;
		}
	}
	if (!iLocal_426)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_0 + 208) && IS_ACTOR_RIDING_VEHICLE(&Global_54076))
		{
			if (HUD_IS_SHOWING_HELP_TEXT())
			{
				HUD_CLEAR_HELP();
				HUD_CLEAR_HELP_QUEUE();
			}
			Function_124("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
			iLocal_426 = 1;
		}
	}
	if (iLocal_426)
	{
		if (Function_228(&Global_54076, &iLocal_0 + 208) <= 15.0f)
		{
			iLocal_426 = 0;
		}
	}
	GET_POSITION(&Global_54076, &Var1);
	switch (uParam2)
	{
		case 0x00000000:
			GET_POSITION(&uParam0, &uVar3);
			if (!Function_20(iParam4, 16))
			{
				if (!Function_192(&iParam12))
				{
					Function_45(&iParam12);
				}
				if (Function_190(&iParam12) < 3.0f)
				{
					if (IS_ACTOR_VALID(&uParam0))
					{
						uParam10 = CREATE_GATEWAY_IN_LAYOUT(&uParam11, Function_63(), &iLocal_0 + 208, &Global_54076, 2, 3, 0, 0, 1, 1);
						if (HUD_IS_SHOWING_OBJECTIVE())
						{
							HUD_CLEAR_OBJECTIVE();
							HUD_CLEAR_OBJECTIVE_QUEUE();
						}
						Function_197("NOS_Obj_StartSeeGen", 0x40f00000, 1, 2, 0, 0, 0, 0);
						CLEAR_JOURNAL_ENTRY_DETAIL_LIST(uParam9, 0);
						APPEND_JOURNAL_ENTRY_DETAIL(uParam9, "NOS_Obj_StartSeeGen", 0, 0, false);
						APPEND_JOURNAL_ENTRY(uParam9, 0);
						SET_ANIM_SET_FOR_ACTOR(&uParam0, "excited_return", 0);
						SET_ACTION_NODE_FOR_ACTOR(&uParam0, "excited_return/mobile_and_loop/loop");
						if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uParam10)))
						{
							SET_BLIP_BLINK(ADD_BLIP_FOR_OBJECT(&uParam10, 330, 0f, 2, 0), 1, 0, 5f);
						}
						Function_209(&iParam4, 16);
						SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uParam0, 0.0f);
					}
				}
			}
			if (!IS_ACTOR_IN_VOLUME(&uParam0, &iLocal_0 + 176))
			{
				uParam2 = 3;
				break;
			}
			if (IS_OBJECT_VALID(&uParam10))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&Global_54076)))
				{
					uParam14 = GET_MOUNT(&Global_54076);
				}
				if (Function_226(&uParam10, 0, 1, 1, 1, 0))
				{
					DESTROY_OBJECT(&uParam10);
					if (!Function_35(Global_46954) != 2)
					{
						Global_6628 = 1;
						Function_225(Global_46954, 0);
						SET_PLAYER_ENDLESS_READYMODE(0, 1);
					}
					Function_209(&iParam4, 32768);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
					}
					RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
					TASK_PRIORITY_SET(&uParam0, true);
					TASK_FACE_ACTOR(&uParam0, &Global_54076, 1, 3212836864);
					if (IS_ACTOR_VALID(&uParam14))
					{
						if (IS_ACTOR_IN_VOLUME(&uParam14, &iLocal_0 + 216))
						{
							SET_OBJECT_POSITION(&uParam14, (&iLocal_0 + 1480));
							SET_OBJECT_ORIENTATION(&uParam14, *(&iLocal_0 + 1480 + 12));
						}
					}
					Function_186(0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
					Function_224(&iParam13);
					Function_45(&iParam13);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, *(&iLocal_0 + 1416), 1, 1, 1);
					Function_222(&Global_54076, 0);
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &uParam0, *(&iLocal_0 + 1448), 1, 1, 1);
					Function_222(&uParam0, 0);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&Global_54076, &uParam0, -1.0f, 0);
					AI_IGNORE_ACTOR(&uParam0);
					Function_218(&uParam11, 0, 1, 0, 0);
					Function_269();
					Function_164();
					uParam2 = 1;
				}
				else if (!Function_20(iParam4, 8))
				{
					if (Function_231(&uParam3, &Global_54076))
					{
						Function_209(&iParam4, 8);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (GET_TASK_STATUS(&uParam0, 1) == 2)
			{
				TASK_CLEAR(&uParam0);
				RESET_ANIM_SET_FOR_ACTOR(&uParam0, 1);
				TASK_GO_TO_COORD(&uParam0, &iLocal_0 + 1224, 1);
			}
			else if (GET_TASK_STATUS(&uParam0, 1) == 0)
			{
				TASK_PRIORITY_SET(&uParam0, true);
				TASK_FACE_ACTOR(&uParam0, &Global_54076, 1, 3212836864);
				SET_ANIM_SET_FOR_ACTOR(&uParam0, "excited_return", 0);
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "excited_return/mobile_and_loop/loop");
				uParam2 = 0;
			}
			break;
		
		case 0x00000001:
			if (Function_192(&iParam13))
			{
				if (Function_190(&iParam13) <= 3.0f)
				{
					if (Function_20(iParam4, 4096))
					{
						Function_217();
					}
					else
					{
						Function_216();
					}
					uParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_192(&iParam13))
			{
				if (Function_190(&iParam13) <= 6,8f)
				{
					uVar5 = Vector(-4691,224f, 3,166f, 4010,023f);
					uVar7 = LOCATE_GRINGO_OF_TYPE("molotov", &uVar5, 5.0f, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar7), "AutoGiveAway", true);
					MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam0, 0);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_161(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
					Function_45(&iParam13);
					AI_STOP_IGNORING_ACTOR(&uParam0);
					uParam2 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (Function_190(&iParam13) <= 1.0f)
			{
				if (Function_20(iParam4, 4096))
				{
					iParam7 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam6, "helperSquad"));
					if (IS_ACTOR_VALID(&(uParam1[0])))
					{
						SQUAD_JOIN(&(uParam1[0]), &iParam7);
					}
					if (IS_ACTOR_VALID(&(uParam1[1])))
					{
						SQUAD_JOIN(&(uParam1[1]), &iParam7);
					}
					SQUAD_GOALS_CLEAR(&iParam7);
					Function_211(&iParam7);
					SQUAD_GOAL_ADD_BATTLE_ALLIES(&iParam7, 0, &Global_54076, 2);
					SET_ACTOR_STAY_WITHIN_VOLUME(&uParam0, &iLocal_0 + 120, 1, true);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uParam0, -1.0f);
				}
				else
				{
					SET_ACTOR_STAY_WITHIN_VOLUME(&uParam0, &iLocal_0 + 120, 1, true);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&uParam0, -1.0f);
				}
				Function_209(&iParam4, 16384);
				uParam2 = 5;
			}
			break;
		
		case 0x00000005:
			if (FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)) == 0)
			{
				if (!IS_BLIP_VALID(&uLocal_423))
				{
					uLocal_423 = ADD_BLIP_FOR_COORD(&uLocal_420, 335, 0, 2, 0);
					SET_BLIP_NAME(&uLocal_423, "NOS_Item_firebottle");
				}
				if (!Function_20(iParam4, 64))
				{
					if (HUD_IS_SHOWING_OBJECTIVE())
					{
						HUD_CLEAR_OBJECTIVE();
						HUD_CLEAR_OBJECTIVE_QUEUE();
					}
					Function_197("NOS_PickupFire", 0x40f00000, 1, 2, 0, 0, 0, 0);
					APPEND_JOURNAL_ENTRY_DETAIL(uParam9, "NOS_PickupFire", 0, 0, false);
					APPEND_JOURNAL_ENTRY(uParam9, 0);
					Function_209(&iParam4, 64);
				}
			}
			else if (_GET_AMMO_AMOUNT(&Global_54076, 4, 1) < 0.0f)
			{
				if (IS_BLIP_VALID(&uLocal_423))
				{
					REMOVE_BLIP(&uLocal_423);
				}
				uParam2 = 6;
			}
			break;
		
		case 0x00000006:
			if (HUD_IS_SHOWING_OBJECTIVE())
			{
				HUD_CLEAR_OBJECTIVE();
				HUD_CLEAR_OBJECTIVE_QUEUE();
			}
			Function_197("NOS_Army_Obj_DestroyObjs", 0x40f00000, 1, 2, 0, 0, 0, 0);
			CLEAR_JOURNAL_ENTRY_DETAIL_LIST(uParam9, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(uParam9, "NOS_Army_Obj_DestroyObjs", 0, 0, false);
			APPEND_JOURNAL_ENTRY(uParam9, 0);
			Function_215(&uParam5);
			uParam2 = 7;
			break;
		
		case 0x00000007:
			Function_268("NOS_Help_Destroy_Targets", Function_214(&uParam1), 10.0f, 1, 0, 0);
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_LOW", 0, 4294967295, 4294967295);
			Function_209(&iParam4, 131072);
			uParam2 = 9;
			break;
		
		case 0x00000009:
			if (Function_20(iParam4, 4096))
			{
				if ((!IS_ACTOR_ALIVE(&(uParam1[0])) && !IS_ACTOR_ALIVE(&(uParam1[1]))) && !Function_20(iParam4, 32))
				{
					Function_209(&iParam4, 32);
					Function_124("NOS_Help_HelpersDead", 0x41200000, 1, 0, 2, 1, 0);
				}
				else if (IS_ACTOR_ALIVE(&(uParam1[0])) || IS_ACTOR_ALIVE(&(uParam1[1])))
				{
					Function_212(&iParam4, 32);
					if (GET_TASK_STATUS(&(uParam1[0]), 6) != 1 || GET_TASK_STATUS(&(uParam1[1]), 6) != 1)
					{
						if (VDIST(StackVal, Var1, Vector(-4702,572f, 2,008f, 4011,515f)) > 5.0f)
						{
							if (IS_ACTOR_VALID(&(uParam1[0])))
							{
								SQUAD_JOIN(&(uParam1[0]), &iParam7);
							}
							if (IS_ACTOR_VALID(&(uParam1[1])))
							{
								SQUAD_JOIN(&(uParam1[1]), &iParam7);
							}
							SQUAD_GOALS_CLEAR(&iParam7);
							Function_211(&iParam7);
							SQUAD_GOAL_ADD_BATTLE_ALLIES(&iParam7, 1, &Global_54076, 2);
						}
					}
					else
					{
						fVar8 = 0.0f;
						if (IS_ACTOR_ALIVE(&(uParam1[0])))
						{
							fVar8 = Function_194(&Global_54076, &(uParam1[0]));
						}
						if (IS_ACTOR_ALIVE(&(uParam1[1])))
						{
							if (Function_194(&Global_54076, &(uParam1[1])) > fVar8)
							{
								fVar8 = Function_194(&Global_54076, &(uParam1[1]));
							}
						}
					}
				}
				else if (Function_20(iParam4, 32))
				{
					uVar9 = Vector(-4687,891f, 4,04f, 4012.0f);
					if (!(IS_ACTOR_ALIVE(&(uParam1[0])) || IS_ACTOR_ALIVE(&(uParam1[1]))))
					{
						if (!(WOULD_ACTOR_BE_VISIBLE(391, &uVar9, 3212836864) && WOULD_ACTOR_BE_VISIBLE(392, &uVar9, 3212836864)))
						{
							Var11 = Vector(-4693,071f, 3,309f, 4013,277f);
							uParam1[0] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam6, Function_63(), 391, Vector(-4690,751f, 3,199f, 4010,532f), Var11);
							TASK_STAND_STILL(&(uParam1[0]), -1.0f, 0, 0);
							SET_ACTOR_HEADING(&(uParam1[0]), 219,018f, 1);
							SET_ACTOR_ALLOW_DISARM(&(uParam1[0]), false);
							MEMORY_CONSIDER_AS(&(uParam1[0]), &Global_54076, false);
							SET_CRIPPLE_ENABLE(&(uParam1[0]), 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam1[0]), 0);
							uParam1[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, &uParam6, Function_63(), 392, Vector(-4686,832f, 3,116f, 4007,598f), Var11);
							TASK_STAND_STILL(&(uParam1[1]), -1.0f, 0, 0);
							SET_ACTOR_HEADING(&(uParam1[1]), 219,018f, 1);
							SET_ACTOR_ALLOW_DISARM(&(uParam1[1]), false);
							MEMORY_CONSIDER_AS(&(uParam1[1]), &Global_54076, false);
							SET_CRIPPLE_ENABLE(&(uParam1[1]), 0);
							MEMORY_SET_WEAPON_DRAW_PREFERENCE(&(uParam1[1]), 0);
							if (IS_ACTOR_VALID(&(uParam1[0])))
							{
								SQUAD_JOIN(&(uParam1[0]), &iParam7);
							}
							if (IS_ACTOR_VALID(&(uParam1[1])))
							{
								SQUAD_JOIN(&(uParam1[1]), &iParam7);
							}
							SQUAD_GOALS_CLEAR(&iParam7);
							Function_211(&iParam7);
							SQUAD_GOAL_ADD_BATTLE_ALLIES(&iParam7, 1, &Global_54076, 2);
							Function_204(&iParam7, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
					}
				}
			}
			break;
	}
	return 1;
}

var Function_214(int[] iParam0) //Position: 0xBDCD / 48589
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (IS_ACTOR_VALID(&(iParam0[0])))
	{
		if (IS_ACTOR_ALIVE(&(iParam0[0])))
		{
			bVar0 = true;
		}
	}
	if (IS_ACTOR_VALID(&(iParam0[1])))
	{
		if (IS_ACTOR_ALIVE(&(iParam0[1])))
		{
			bVar1 = true;
		}
	}
	if (bVar0 && bVar1)
	{
		fVar2 = Function_194(&Global_54076, &(iParam0[0]));
		if (fVar2 > Function_194(&Global_54076, &(iParam0[1])))
		{
			return &(iParam0[0]);
		}
		return &(iParam0[1]);
	}
	if (bVar0)
	{
		return &(iParam0[0]);
	}
	if (bVar1)
	{
		return &(iParam0[1]);
	}
	return "";
}

void Function_215(struct<6>[] Param0) //Position: 0xBE74 / 48756
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(&Param0[iVar06] + 32) = ADD_BLIP_FOR_COORD(&(Param0[iVar06]), 330, 0, 2, 0);
		SET_BLIP_PRIORITY(&Param0[iVar06] + 32, 3);
		Param0[iVar06].f_12 = 0;
		iVar0++;
	}
	return;
}

void Function_216() //Position: 0xBEBE / 48830
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "NoSalida_GreetsPlayer2", "NoSalida_GreetsPlayer2", false, 1, 1, 0, 1);
		Function_167(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_217() //Position: 0xBF13 / 48915
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "NoSalida_GreetsPlayer", "NoSalida_GreetsPlayer", false, 1, 1, 0, 1);
		Function_167(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_218(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xBF66 / 48998
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_63(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "nNOS_Intro", 2, 1);
	}
	Function_219(&uVar0);
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

void Function_219(int iParam0) //Position: 0xBFE9 / 49129
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_221(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_220(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 1.0f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 4.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 2.0f, 2);
	return;
}

void Function_220(int iParam0) //Position: 0xC03C / 49212
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,82822f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4684,729f, 5,583888f, 4011,124f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,169505f, 1,319899f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_221(int iParam0) //Position: 0xC0B1 / 49329
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,82822f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-4683,699f, 6,361753f, 4010,798f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,040508f, 0,651719f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_222(var uParam0, bool bParam1) //Position: 0xC126 / 49446
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
	else if (!&bParam1 || Function_223(&uParam0, 0) < 2.0f)
	{
		RESET_ACTOR_GAITS(&uParam0, 1);
	}
	return;
}

float Function_223(var uParam0, bool bParam1) //Position: 0xC190 / 49552
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_224(int iParam0) //Position: 0xC1B1 / 49585
{
	if (!Function_192(&iParam0))
	{
		Function_46(&iParam0, 0.0f);
	}
	return;
}

void Function_225(bool bParam0, bool bParam1) //Position: 0xC1C8 / 49608
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	int iVar12;
	
	if (!Function_33(bParam0))
	{
		Function_31();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_30(bParam0);
	if (StackVal != 2)
	{
		Function_26("DEED_START", bParam0);
	}
	Global_21684[bParam07].f_8 = StackVal + 1;
	Global_21684[bParam07].f_4 = 2;
	Global_10968 = bParam0;
	if (!Global_53524.f_36 && bParam1)
	{
		Function_51(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_28(bParam0);
		Global_10966 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_104(Global_10966) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_103(Global_10966) };
		}
		iVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(iVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(iVar12);
		APPEND_JOURNAL_ENTRY(iVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_6619 = 1;
	return;
}

bool Function_226(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xC2D9 / 49881
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
				Function_222(&uVar1, &fParam5);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				if (Function_223(&uVar1, 0) < 10.0f && IS_ACTOR_VALID(GET_MOUNT(&uVar1)))
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
				if (Function_223(&uVar1, 0) < 12.0f)
				{
					iVar3 = Vector(0.0f, 0.0f, -4.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_227(&uVar5, &iVar3);
				}
				else
				{
					iVar3 = Vector(0.0f, 0.0f, -2.0f);
					UNK_0xB89CC342(&uVar1, &iVar3, &uVar5);
					Function_227(&uVar5, &iVar3);
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

int Function_227(vector3 vParam0) //Position: 0xC50E / 50446
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_82(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_82(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

float Function_228(var uParam0, var uParam1) //Position: 0xC584 / 50564
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_230(&uParam0);
		Var0 = Function_230(&uParam0);
		Function_229(&uParam1);
		Var2 = Function_229(&uParam1);
		return VDIST(Var0, Var2);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_229(int iParam0) //Position: 0xC602 / 50690
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&iParam0, &Var0);
	return StackVal, Var0;
}

struct<8> Function_230(int iParam0) //Position: 0xC614 / 50708
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

bool Function_231(var uParam0, int iParam1) //Position: 0xC680 / 50816
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &iParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

int Function_232(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xC6F2 / 50930
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (GET_LAST_ATTACKER(&iParam0) == &iParam1)
		{
			if (bParam2)
			{
				if (!IS_ACTOR_ALIVE(&iParam0))
				{
					return 1;
				}
			}
			return 1;
		}
		if (&bParam3)
		{
			if (GET_LASSO_TARGET(&iParam1) == &iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int Function_233(int iParam0, int iParam1) //Position: 0xC740 / 51008
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

void Function_234(int iParam0, struct<6>[] Param1) //Position: 0xC776 / 51062
{
	if (!Function_20(iParam0, 524288))
	{
		if (Function_20(iParam0, 4096))
		{
			if ((((!Param1[06].f_12 || !Param1[16].f_12) || !Param1[26].f_12) || !Param1[36].f_12) || !Param1[46].f_12)
			{
				if (!Function_20(iParam0, 4))
				{
					if (FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)) == 0)
					{
						if (!IS_BLIP_VALID(&uLocal_423))
						{
							uLocal_423 = ADD_BLIP_FOR_COORD(&uLocal_420, 335, 0, 2, 0);
							SET_BLIP_NAME(&uLocal_423, "NOS_Item_firebottle");
							if (HUD_IS_SHOWING_OBJECTIVE())
							{
								HUD_CLEAR_OBJECTIVE();
								HUD_CLEAR_OBJECTIVE_QUEUE();
							}
							Function_197("NOS_PickupFire", 0x40f00000, 1, 2, 0, 0, 0, 0);
							APPEND_JOURNAL_ENTRY_DETAIL(iParam2, "NOS_PickupFire", 0, 0, false);
							APPEND_JOURNAL_ENTRY(iParam2, 0);
							Function_236(&Param1);
						}
						Function_209(&iParam0, 4);
					}
				}
				else if (_GET_AMMO_AMOUNT(&Global_54076, 4, 0) < 0.0f)
				{
					if (IS_BLIP_VALID(&uLocal_423))
					{
						REMOVE_BLIP(&uLocal_423);
					}
					Function_235(&Param1);
					Function_212(&iParam0, 4);
				}
			}
		}
	}
	return;
}

void Function_235(struct<6>[] Param0) //Position: 0xC8AA / 51370
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!Param0[iVar06].f_12)
		{
			*(&Param0[iVar06] + 32) = ADD_BLIP_FOR_COORD(&(Param0[iVar06]), 330, 0, 2, 0);
			SET_BLIP_PRIORITY(&Param0[iVar06] + 32, 3);
		}
		iVar0++;
	}
	return;
}

void Function_236(struct<6>[] Param0) //Position: 0xC8F7 / 51447
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_BLIP_VALID(&Param0[iVar06] + 32))
		{
			REMOVE_BLIP(&Param0[iVar06] + 32);
		}
		iVar0++;
	}
	return;
}

void Function_237(var uParam0, int iParam1) //Position: 0xC92C / 51500
{
	var uVar0;
	int iVar1;
	
	uVar0 = NET_MAILBOX_GET_CHALLENGE_BY_ID(&uParam0);
	iVar1 = Function_238(&uVar0);
	if (iVar1 >= 4294967295)
	{
		if (Global_132987[iVar1125].f_116 && Function_192(&iParam1))
		{
			(*&Global_132987[iVar1125] + 212)[411] = Function_190(&iParam1);
		}
	}
	return;
}

var Function_238(int iParam0) //Position: 0xC96F / 51567
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

void Function_239(bool bParam0, bool[] bParam1) //Position: 0xC9A2 / 51618
{
	iParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "BackUpHorseSquad"));
	bParam1[0] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "Horse01", 976, *(&iLocal_0 + 1352), *(&iLocal_0 + 1352 + 12));
	SQUAD_JOIN(&(bParam1[0]), &iParam2);
	TASK_STAND_STILL(&(bParam1[0]), -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&(bParam1[0]), 3);
	bParam1[1] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "Horse02", 977, *(&iLocal_0 + 1384), *(&iLocal_0 + 1384 + 12));
	SQUAD_JOIN(&(bParam1[1]), &iParam2);
	TASK_STAND_STILL(&(bParam1[1]), -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&(bParam1[1]), 3);
	return;
}

int Function_240(struct<2> Param0, bool bParam2, bool bParam3) //Position: 0xCA6D / 51821
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	
	Function_242(StackVal, Param0, &(uVar0[0]), &(uVar0[1]));
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
			iVar4 = GET_ACTOR_FROM_OBJECT(Function_241(&(uVar0[0]), "UseCase1"));
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
			iVar5 = GET_ACTOR_FROM_OBJECT(Function_241(&(uVar0[1]), "UseCase1"));
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

var Function_241(var uParam0, int iParam1) //Position: 0xCBEA / 52202
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_242(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0xCBF9 / 52217
{
	var uVar0;
	
	uVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &bParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(&uVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(&uVar0), &bParam0);
		if (!Function_19())
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

void Function_243(struct<6>[] Param0) //Position: 0xCD43 / 52547
{
	Param0[06] = *(&iLocal_0 + 432);
	*(&Param0[06] + 24) = &iLocal_0 + 8;
	*(&Param0[06] + 40) = FIRE_CREATE_HANDLE();
	Param0[16] = *(&iLocal_0 + 464);
	*(&Param0[16] + 24) = &iLocal_0 + 16;
	*(&Param0[16] + 40) = FIRE_CREATE_HANDLE();
	Param0[26] = *(&iLocal_0 + 496);
	*(&Param0[26] + 24) = &iLocal_0 + 24;
	*(&Param0[26] + 40) = FIRE_CREATE_HANDLE();
	Param0[36] = *(&iLocal_0 + 528);
	*(&Param0[36] + 24) = &iLocal_0 + 32;
	*(&Param0[36] + 40) = FIRE_CREATE_HANDLE();
	Param0[46] = *(&iLocal_0 + 560);
	*(&Param0[46] + 24) = &iLocal_0 + 40;
	*(&Param0[46] + 40) = FIRE_CREATE_HANDLE();
	return;
}

void Function_244(var uParam0, int iParam1) //Position: 0xCE11 / 52753
{
	iParam1 = CREATE_OBJECTSET_IN_LAYOUT("NOS_AreaChests", &uParam0, 4294967295, 0);
	Function_245(&uParam0, &iLocal_0 + 1136, &iParam1);
	return;
}

void Function_245(var uParam0, var uParam1, int iParam2) //Position: 0xCE44 / 52804
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	float fVar4;
	struct<8> Var5;
	var uVar13;
	
	if (!IS_LAYOUTREF_VALID(&uParam0))
	{
		return;
	}
	if (!IS_OBJECTSET_VALID(&iParam2))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (GET_OBJECTSET_SIZE(&uParam1) - 1))
	{
		bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uParam1);
		Function_246(&bVar1);
		Var2 = Function_246(&bVar1);
		fVar4 = GET_OBJECT_HEADING(&bVar1);
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("amb_areaChest") };
		uVar13 = CREATE_GRINGO_IN_LAYOUT(StackVal, &uParam0, &Var5, "$/content/scripting/gringo/simpleGringo/locked_footlocker", Var2, Vector(0.0f, fVar4, 0.0f));
		GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&uVar13), 0);
		ADD_OBJECT_TO_OBJECTSET(&uVar13, &iParam2);
		if (DECOR_CHECK_EXIST(&bVar1, "GringoDollarAmt"))
		{
			DECOR_SET_INT(&uVar13, "GringoDollarAmt", DECOR_GET_INT(&bVar1, "GringoDollarAmt"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "GiveItem"))
		{
			DECOR_SET_INT(&uVar13, "GiveItem", DECOR_GET_INT(&bVar1, "GiveItem"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_5"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_5", DECOR_GET_INT(&bVar1, "Ammo_5"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_6"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_6", DECOR_GET_INT(&bVar1, "Ammo_6"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_7"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_7", DECOR_GET_INT(&bVar1, "Ammo_7"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_8"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_8", DECOR_GET_INT(&bVar1, "Ammo_8"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_9"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_9", DECOR_GET_INT(&bVar1, "Ammo_9"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_10"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_10", DECOR_GET_INT(&bVar1, "Ammo_10"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_11"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_11", DECOR_GET_INT(&bVar1, "Ammo_11"));
		}
		if (DECOR_CHECK_EXIST(&bVar1, "Ammo_12"))
		{
			DECOR_SET_INT(&uVar13, "Ammo_12", DECOR_GET_INT(&bVar1, "Ammo_12"));
		}
		bVar0++;
	}
	return;
}

struct<8> Function_246(bool bParam0) //Position: 0xD12A / 53546
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

void Function_247(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, var[] uParam11) //Position: 0xD153 / 53587
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	bParam2 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "NOS_Squad_Reb"));
	bParam3 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "NOS_Squad_Reb01"));
	iVar0 = 0;
	while (iVar0 < 9)
	{
		uVar1 = Function_254(&Global_11946, &Global_14176, iVar0, 0, 0, 1);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, true);
			if (iVar0 <= 0 && iVar0 >= 6)
			{
				SQUAD_JOIN(&uVar1, &bParam2);
			}
			else if (iVar0 <= 7 && iVar0 >= 9)
			{
				SQUAD_JOIN(&uVar1, &bParam3);
			}
		}
		iVar0++;
	}
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&bParam2, 0, &iLocal_0 + 48, 4, 1);
	Function_210(&bParam2, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&bParam2, 2);
	Function_253(&bParam2, &Global_54076);
	SQUAD_SET_FACTION(&bParam2, 19);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bParam2, 690856);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&bParam3, 0, &iLocal_0 + 144, 4, 1);
	Function_210(&bParam3, -1.0f);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&bParam3, 2);
	Function_253(&bParam3, &Global_54076);
	SQUAD_SET_FACTION(&bParam3, 19);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bParam3, 690856);
	bParam4 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, "NOS_Squad_Army"));
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&bParam4, 0, &iLocal_0 + 56, 4, 1);
	Function_210(&bParam4, -1.0f);
	Function_251(&uParam1, &bParam4, &bParam6, &bParam7, &bParam8, &uLocal_414);
	Function_249(&bParam2, &bParam4, 4);
	Function_248(&bParam2, &bParam4);
	Function_248(&bParam3, &bParam4);
	Var2 = Vector(-4691,224f, 3,166f, 4010,023f);
	bParam9 = CREATE_PROP_IN_LAYOUT(StackVal, &bParam0, Function_63(), "$/fragments/p_gen_molotovCrate01x", Var2, Vector(0.0f, 0.0f, 0.0f), 1);
	CLEAR_AREA_OF_GRASS(Var2, 2.0f);
	if (IS_OBJECT_VALID(&bParam9))
	{
		bParam10 = UNK_0x3B32AB84(&bParam9, 1.0f, 1.0f, 1.0f);
	}
	SET_FACTIONS_STATUS_TWO_WAY(2, 16, 0);
	SET_FACTIONS_STATUS_TWO_WAY(2, 10, 0);
	SET_FACTIONS_STATUS_TWO_WAY(27, 16, 4);
	SET_FACTIONS_STATUS_TWO_WAY(27, 10, 4);
	bParam5 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0, Function_63()));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bParam5, 690856);
	Function_253(&bParam5, &Global_54076);
	SQUAD_SET_FACTION(&bParam5, 19);
	uParam11[0] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "nCalvary01", 521, *(&iLocal_0 + 848), *(&iLocal_0 + 848 + 12));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam11[0]), true);
	SQUAD_JOIN(&(uParam11[0]), &bParam5);
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&bParam0, "Calvary01Horse", 976, *(&iLocal_0 + 880), *(&iLocal_0 + 880 + 12));
	TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR(&(uParam11[0]), &uVar1);
	uParam11[1] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "nCalvary02", 522, *(&iLocal_0 + 912), *(&iLocal_0 + 912 + 12));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam11[1]), true);
	SQUAD_JOIN(&(uParam11[1]), &bParam5);
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&bParam0, "Calvary02Horse", 977, *(&iLocal_0 + 944), *(&iLocal_0 + 944 + 12));
	TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR(&(uParam11[1]), &uVar1);
	uParam11[2] = CREATE_ACTOR_IN_LAYOUT(&bParam0, "nCalvary03", 523, *(&iLocal_0 + 976), *(&iLocal_0 + 976 + 12));
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam11[2]), true);
	SQUAD_JOIN(&(uParam11[2]), &bParam5);
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&bParam0, "Calvary03Horse", 980, *(&iLocal_0 + 1008), *(&iLocal_0 + 1008 + 12));
	TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
	ACTOR_MOUNT_ACTOR(&(uParam11[2]), &uVar1);
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&bParam0, "ndockGuy01", 521, *(&iLocal_0 + 1072), *(&iLocal_0 + 1072 + 12));
	SQUAD_JOIN(&uVar1, &bParam2);
	SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 104, 4, true);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, true);
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&bParam0, "ndockGuy02", 523, *(&iLocal_0 + 1104), *(&iLocal_0 + 1104 + 12));
	SQUAD_JOIN(&uVar1, &bParam2);
	ADD_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &iLocal_0 + 104);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, true);
}

void Function_248(var uParam0, int iParam1) //Position: 0xD5D3 / 54739
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&iParam1) - 1))
				{
					uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iParam1, bVar1);
					if (IS_ACTOR_VALID(&uVar3))
					{
						if (IS_ACTOR_ALIVE(&uVar3))
						{
							MEMORY_IDENTIFY(&uVar2, &uVar3);
						}
					}
					bVar1++;
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_249(var uParam0, var uParam1, int iParam2) //Position: 0xD664 / 54884
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_250(&uVar1, &uParam1, iParam2);
		}
		bVar0++;
	}
	return;
}

void Function_250(var uParam0, var uParam1, bool bParam2) //Position: 0xD6BB / 54971
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
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_251(bool bParam0, var uParam1, var uParam2, var[] uParam3, var uParam5) //Position: 0xD70D / 55053
{
	bool bVar0;
	struct<2> Var1;
	
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_63(), 379, *(&iLocal_0 + 592), Function_84()), &uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_63(), 382, *(&iLocal_0 + 624), Function_84()), &uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_63(), 380, *(&iLocal_0 + 656), Function_84()), &uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_63(), 395, *(&iLocal_0 + 688), Function_84()), &uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_63(), 381, *(&iLocal_0 + 720), Function_84()), &uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_63(), 391, *(&iLocal_0 + 752), Function_84()), &uParam1);
	Function_84();
	SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&bParam0, Function_63(), 392, *(&iLocal_0 + 784), Function_84()), &uParam1);
	Function_252(&uParam1, 1);
	SQUAD_GOAL_ADD_COMBAT(&uParam1, 1, 4294967295, 0);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&uParam1, 2);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		SET_ACTOR_ALLOW_DISARM(SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0), false);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0), true);
		bVar0++;
	}
	Var1 = Vector(0,582f, -0,209f, 0,786f);
	uParam2 = CREATE_ACTOR_IN_LAYOUT(StackVal, &bParam0, Function_63(), 396, Vector(-4688,546f, 3,2f, 4009,068f), Var1);
	TASK_PRIORITY_SET(&uParam2, true);
	TASK_FACE_ACTOR(&uParam2, &Global_54076, 1, 3212836864);
	MEMORY_CONSIDER_AS(&uParam2, &Global_54076, false);
	SET_ACTOR_ALLOW_DISARM(&uParam2, false);
	SET_CRIPPLE_ENABLE(&uParam2, 0);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&uParam2, 0.0f);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam2, false);
	if (Function_20(bParam4, 4096))
	{
		uParam5 = CREATE_ACTOR_IN_LAYOUT(StackVal, &bParam0, "nArmyGuy01", 391, Vector(-4693,071f, 3,309f, 4013,277f), Var1);
		uParam3[0] = &uParam5;
		TASK_PRIORITY_SET(&(uParam3[0]), true);
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uParam3[0]), &iLocal_0 + 128, 2, true);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&(uParam3[0]), -1.0f);
		SET_ACTOR_HEADING(&(uParam3[0]), 219,018f, 1);
		SET_ACTOR_ALLOW_DISARM(&(uParam3[0]), false);
		MEMORY_CONSIDER_AS(&(uParam3[0]), &Global_54076, false);
		SET_CRIPPLE_ENABLE(&(uParam3[0]), 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam3[0]), true);
	}
	if (Function_20(bParam4, 4096))
	{
		uParam3[1] = CREATE_ACTOR_IN_LAYOUT(StackVal, &bParam0, "nArmyGuy02", 392, Vector(-4686,832f, 3,116f, 4007,598f), Var1);
		TASK_PRIORITY_SET(&(uParam3[1]), true);
		SET_ACTOR_STAY_WITHIN_VOLUME(&(uParam3[1]), &iLocal_0 + 136, 2, true);
		TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&(uParam3[1]), -1.0f);
		SET_ACTOR_HEADING(&(uParam3[1]), 219,018f, 1);
		SET_ACTOR_ALLOW_DISARM(&(uParam3[1]), false);
		MEMORY_CONSIDER_AS(&(uParam3[1]), &Global_54076, false);
		SET_CRIPPLE_ENABLE(&(uParam3[1]), 0);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&(uParam3[1]), true);
	}
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam3[0]), &iLocal_0 + 8, 4, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam3[0]), &iLocal_0 + 16);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam3[0]), &iLocal_0 + 24);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam3[1]), &iLocal_0 + 8, 4, 1);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam3[1]), &iLocal_0 + 16);
	ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&(uParam3[1]), &iLocal_0 + 24);
}

void Function_252(var uParam0, int iParam1) //Position: 0xDA64 / 55908
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_253(var uParam0, bool bParam1) //Position: 0xDAA9 / 55977
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &bParam1);
			}
		}
		bVar0++;
	}
	return;
}

var Function_254(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, bool bParam4, bool bParam5) //Position: 0xDB04 / 56068
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return "";
	}
	if (Function_18(&(Param0[iVar02]), 1))
	{
		return "";
	}
	if (!Function_18(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16) || uParam3)
		{
			if (!IS_PERS_CHAR_ALIVE(&vParam1[iVar03] + 16))
			{
				REVIVE_PERS_CHAR(&vParam1[iVar03] + 16, 1);
			}
			if (!Function_18(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_16(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	else if (IS_EARLIER_THAN(&Param0[iVar02] + 8, 0) || uParam3)
	{
		GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
		(&vParam1[iVar03] + 16) = Function_256(StackVal, &Global_10996, Function_63(), vParam1[iVar03], &vParam1[iVar03] + 8, Var2, 0x42700000);
		if (IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
		{
			if (!Function_18(&(Param0[iVar02]), 8))
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], true, false);
				Function_16(&(Param0[iVar02]), 8);
			}
			ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
			uVar1 = GET_ACTOR_FROM_PERS_CHAR(&vParam1[iVar03] + 16);
		}
	}
	if (!IS_ACTOR_VALID(&uVar1))
	{
		return "";
	}
	Function_16(&(Param0[iVar02]), 1);
	Function_255(&vParam1[iVar03] + 16, 1);
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

int Function_255(int iParam0, bool bParam1) //Position: 0xDCCB / 56523
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

var Function_256(var uParam0, var uParam1, var uParam2, var uParam3, struct<2> Param4, float fParam6) //Position: 0xDD7D / 56701
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
		ATTACH_OBJECTS(StackVal, StackVal, &uVar3, GET_OBJECT_FROM_PERS_CHAR(&uVar2), Function_63(), Vector(0.0f, 1,5f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
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

bool Function_257(struct<2>[] Param0) //Position: 0xDEA4 / 56996
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_261();
	iVar1 = 0;
	if (!Function_10(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_260(&(Param0[iVar02]), 8);
		}
		else if (Function_259())
		{
			iVar1 = 1;
			Function_260(&(Param0[iVar02]), 8);
		}
		Function_260(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_10(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_10(&(Param0[02]), 8) || iVar1));
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
				Function_260(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_10(&(Param0[iVar02]), 4))
		{
			if (!Function_10(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_260(&(Param0[iVar02]), 2);
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
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_260(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_260(&(Param0[iVar02]), 2);
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
	Function_258();
	return 1;
}

void Function_258() //Position: 0xE266 / 57958
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

bool Function_259() //Position: 0xE2A6 / 58022
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

void Function_260(struct<13> Param0) //Position: 0xE2D4 / 58068
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_261() //Position: 0xE2E7 / 58087
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

bool Function_262(int[] iParam0) //Position: 0xE329 / 58153
{
	int iVar0;
	
	if (Global_6623 || Global_6622)
	{
		iVar0 = 0;
		while (iVar0 <= iParam0)
		{
			if (IS_SCRIPT_VALID(&(iParam0[iVar0])))
			{
				TERMINATE_SCRIPT(&(iParam0[iVar0]));
			}
			iVar0++;
		}
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
		CLEAR_PRINTED_OBJECTIVE();
		Function_269();
		return 0;
	}
	return 1;
}

void Function_263() //Position: 0xE376 / 58230
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	
	if (bLocal_409)
	{
		bVar0 = false;
		while (bVar0 < (GET_OBJECTSET_SIZE(&uLocal_410) - 1))
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &uLocal_410);
			bVar2 = FLOOR(POW(2.0f, TO_FLOAT(bVar0)));
			if (Function_264(&Global_54076, &bVar1) > 100.0f)
			{
				Function_246(&bVar1);
				Var3 = Function_246(&bVar1);
				if (!Function_20(iLocal_408, bVar2))
				{
					Function_209(&iLocal_408, bVar2);
					CLEAR_AREA_OF_GRASS(Var3, 1,75f);
				}
				if (GET_DEBUG_DRAW_STATE())
				{
				}
			}
			else
			{
				Function_212(&iLocal_408, bVar2);
			}
			bVar0++;
		}
	}
	return;
}

float Function_264(var uParam0, int iParam1) //Position: 0xE404 / 58372
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_265(&uParam0);
			Var0 = Function_265(&uParam0);
			Function_265(&iParam1);
			Var2 = Function_265(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between two objects, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

struct<8> Function_265(int iParam0) //Position: 0xE4A1 / 58529
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

int Function_266(var uParam0) //Position: 0xE50F / 58639
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	struct<8> Var6;
	var uVar14;
	
	if (!Function_302(&uParam0, 2048))
	{
		return 0;
	}
	uLocal_410 = CREATE_OBJECTSET_IN_LAYOUT("AARewardChests", &Global_46715, 12, 0);
	bLocal_409 = true;
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "f_AreaTreasure");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		Function_246(&iVar1);
		Var2 = Function_246(&iVar1);
		Function_267(&iVar1);
		Var4 = Function_267(&iVar1);
		Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_171("NoAATreasure") };
		uVar14 = CREATE_GRINGO_IN_LAYOUT(&Global_46715, &Var6, "$/content/scripting/gringo/SimpleGringo/Locked_Footlocker", Var2, Var4);
		DECOR_SET_BOOL(&uVar14, "ActionAreaRewardChest", true);
		ADD_OBJECT_TO_OBJECTSET(&uVar14, &uLocal_410);
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 1;
}

struct<8> Function_267(bool bParam0) //Position: 0xE639 / 58937
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&bParam0, &Var0);
	return StackVal, Var0;
}

int Function_268(char* cParam0) //Position: 0xE662 / 58978
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		if (STRING_LENGTH(&(Global_99485[iVar019])) == 0)
		{
			strcpy(&(Global_99485[iVar019]), &cParam0, 32);
			*(&Global_99485[iVar019] + 64) = &uParam1;
			Global_99485[iVar019].f_72 = fParam2;
			Global_99485[iVar019].f_76 = iParam3;
			strcpy(&Global_99485[iVar019] + 84, &cParam4, 32);
			Global_99485[iVar019].f_80 = 1;
			Global_99485[iVar019].f_148 = &iParam5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_269() //Position: 0xE6EF / 59119
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_99485 - 1))
	{
		Global_99485[iVar019].f_76 = 0;
		strcpy(&Global_99485[iVar019] + 84, "", 32);
		Global_99485[iVar019].f_72 = 1.0f;
		(&Global_99485[iVar019] + 64) = "";
		strcpy(&(Global_99485[iVar019]), "", 32);
		Global_99485[iVar019].f_80 = 0;
		Global_99485[iVar019].f_148 = 0;
		iVar0++;
	}
	return;
}

void Function_270(int iParam0) //Position: 0xE761 / 59233
{
	Function_271(&Global_43580, iParam0);
	return;
}

void Function_271(var uParam0, var uParam1) //Position: 0xE76F / 59247
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_272() //Position: 0xE797 / 59287
{
	int iVar0;
	var uVar1;
	
	if (Function_47(Global_46954) <= 1)
	{
		Function_209(&iLocal_653, 4096);
	}
	AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_05", "SUSPENSE_LOW", 0, 4294967295, 4294967295, 3212836864, 0);
	Function_193(Global_46954, 1);
	iLocal_635 = CREATE_JOURNAL_ENTRY("NOS_JournalID", 0, 4294967295, 0);
	APPEND_JOURNAL_ENTRY(iLocal_635, 0);
	Function_275(&iLocal_481, 379, 3, 1);
	Function_275(&iLocal_481, 380, 3, 1);
	Function_275(&iLocal_481, 381, 3, 1);
	Function_275(&iLocal_481, 382, 3, 1);
	Function_275(&iLocal_481, 391, 3, 1);
	Function_275(&iLocal_481, 392, 3, 1);
	Function_275(&iLocal_481, 393, 3, 1);
	Function_275(&iLocal_481, 396, 3, 1);
	Function_275(&iLocal_481, 395, 3, 1);
	Function_275(&iLocal_481, 523, 3, 1);
	Function_275(&iLocal_481, 976, 3, 1);
	Function_275(&iLocal_481, 977, 3, 1);
	Function_275(&iLocal_481, 980, 3, 1);
	Function_275(&iLocal_481, 1128, 3, 1);
	Function_273(&iLocal_481, "$/fragments/p_gen_lantern09x", 0, 1);
	Function_273(&iLocal_481, "$/fragments/p_gen_molotovCrate01x", 0, 1);
	Function_273(&iLocal_481, "action_areas", 10, 0);
	Function_273(&iLocal_481, "handoff", 5, 0);
	Function_273(&iLocal_481, "custom/handoff", 8, 0);
	Function_273(&iLocal_481, "excited_return", 5, 0);
	Function_273(&iLocal_481, "custom/excited_return", 8, 0);
	Function_273(&iLocal_481, "$/content/scripting/gringo/simpleGringo/Locked_Footlocker", 1, 0);
	uLocal_433 = CREATE_LAYOUT("ArmyAttackLayout");
	uLocal_431 = CREATE_LAYOUT("NOS_AILayout");
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,01f);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	SET_WEAPONENUM_LOCKED(23, 0);
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((!Function_18(&(Global_11946[iVar02]), 2) || Function_18(&(Global_11946[iVar02]), 4)) && ((iVar0 == 2 && iVar0 == 4) && iVar0 == 8))
		{
			Function_209(&iLocal_653, 1048576);
			iVar0 = 999;
		}
		iVar0++;
	}
	if (!Function_20(iLocal_653, 1048576))
	{
		uVar1 = NET_MAILBOX_GET_CHALLENGE_BY_ID("sc_challenge_aa_04");
		SC_CHALLENGE_LAUNCH(&uVar1);
		if (!Function_192(&iLocal_641))
		{
			Function_224(&iLocal_641);
		}
		else
		{
			Function_45(&iLocal_641);
		}
	}
	if ((!Function_123(Global_119934, 16) && !Global_53524.f_36) && !IS_ACTOR_ON_TRAIN(&Global_54076, 0))
	{
		Function_118(&Global_54076, 16, 1, 0);
	}
	Function_240(StackVal, Vector(-4715,903f, 3,037f, 3967,543f), 0, 0);
	Function_240(StackVal, Vector(-4749,25f, 3,026f, 4029,477f), 0, 0);
	return;
}

var Function_273(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xEAF7 / 60151
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_274(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_260(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_274(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xEB35 / 60213
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_260(&(Param0[iVar02]), 4);
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

var Function_275(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xEC04 / 60420
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_10(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_260(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_260(&(Param0[iVar02]), 8);
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

int Function_276(int iParam0, bool bParam1) //Position: 0xECE0 / 60640
{
	int iVar0;
	
	iVar0 = Function_101(iParam0);
	if (!Function_29(iVar0))
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

bool Function_277(int iParam0) //Position: 0xED1E / 60702
{
	if (!Function_5(iParam0))
	{
		return 0;
	}
	return Function_302(&(Global_43791[iParam0]), 2048);
}

void Function_278(char* cParam0) //Position: 0xED3C / 60732
{
	if (!Function_312(128))
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

void Function_279(int iParam0, bool bParam1) //Position: 0xED7C / 60796
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
		Function_280(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_280(var uParam0, bool bParam1) //Position: 0xEE6C / 61036
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &bParam1);
	return;
}

void Function_281(int iParam0, float fParam1, int iParam2, int iParam3, var uParam4, bool bParam5) //Position: 0xEE79 / 61049
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam3))
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
	Global_43580.f_12 = iParam0;
	*(&Global_43580 + 24) = &iParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = fParam1;
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
		Function_282();
	}
	if (&bParam5)
	{
		Function_37(1048576);
	}
}

void Function_282() //Position: 0xEF87 / 61319
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_37(16384);
	}
	return;
}

bool Function_283(int iParam0, struct<2>[] Param1, bool bParam2) //Position: 0xEFA3 / 61347
{
	char* cVar0[64];
	struct<5> Var16;
	
	Param1[02] = { StackVal, Param1[02] };
	if (StackVal == 3)
	{
		return 0;
	}
	if (!Function_302(&(Global_43791[iParam0]), 2048))
	{
		return 0;
	}
	if (iParam0 != Global_46914[1] && Function_276(49, 0))
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

void Function_284(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4) //Position: 0xF061 / 61537
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
		Function_285();
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

void Function_285() //Position: 0xF14F / 61775
{
	int iVar0;
	
	Global_41176 = Function_286(StackVal);
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

int Function_286(int iParam0) //Position: 0xF19D / 61853
{
	if (!Function_287(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_287(int iParam0) //Position: 0xF1B5 / 61877
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

void Function_288(int iParam0) //Position: 0xF1CA / 61898
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_289(struct<2>[] Param0, vector3[] vParam1, var uParam2, var uParam3, int iParam4) //Position: 0xF1DD / 61917
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_312(2))
	{
		return;
	}
	if (Function_302(&(Global_43791[iParam4]), 256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_290(&(Param0[iVar02]), &(vParam1[iVar03]), iVar0, &uParam2, &uParam3, iParam4))
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
		Function_1(&(Global_43791[iParam4]), 2048);
	}
	else if (iVar1 != 0 && iVar2 < 0)
	{
		Function_306(&(Global_43791[iParam4]), 2048);
	}
}

bool Function_290(int iParam0, int iParam1, var uParam2, struct<11>[] Param3, var uParam4, int iParam5) //Position: 0xF295 / 62101
{
	int iVar0;
	char* cVar1[16];
	
	iVar0 = uParam2;
	if (Function_302(&(Global_43791[iParam5]), 256))
	{
		return 1;
	}
	if (!Function_18(&iParam0, 2))
	{
		return 1;
	}
	if (Function_18(&iParam0, 4))
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
		(&iParam1 + 16) = Function_256(StackVal, &uParam4, &cVar1, iParam1, &iParam1 + 8, Param3[iVar011], Param3[iVar011].f_80);
		PRINTSTRING("Creating guy with a position of: ");
		PRINTVECTOR(Param3[iVar011]);
		PRINTNL();
		if (Function_82(StackVal, Param3[iVar011]))
		{
			LOG_ERROR("A regional character is being created at <<0,0,0>>. Please give this guy a schedule or notify CC.");
		}
		Function_17(&iParam0, 4);
	}
	Function_291(&iParam1 + 16, &(Param3[iVar011]));
	return 1;
}

int Function_291(int iParam0, struct<2> Param1) //Position: 0xF416 / 62486
{
	int iVar0;
	var uVar11;
	
	uVar11 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(&iParam0), "Persistent_Char_Brain");
	if (GRINGO_QUERY_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22))
	{
		if (!Function_82(StackVal, Param1))
		{
			iVar0 = Param1;
		}
		if (!Function_82(StackVal, *(&Param1 + 12)))
		{
			*(&iVar0 + 12) = *(&Param1 + 12);
		}
		if (!Function_82(StackVal, *(&Param1 + 24)))
		{
			*(&iVar0 + 24) = *(&Param1 + 24);
		}
		if (!Function_82(StackVal, *(&Param1 + 36)))
		{
			*(&iVar0 + 36) = *(&Param1 + 36);
		}
		if (!Function_82(StackVal, *(&Param1 + 48)))
		{
			*(&iVar0 + 48) = *(&Param1 + 48);
		}
		if (!Function_82(StackVal, *(&Param1 + 60)))
		{
			*(&iVar0 + 60) = *(&Param1 + 60);
		}
		return GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(&uVar11), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &iVar0, 22);
	}
	return 0;
	return 0;
}

void Function_292(int iParam0, struct<11>[] Param1, int iParam2) //Position: 0xF55C / 62812
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

void Function_293(int iParam0, var uParam1, struct<2> Param2) //Position: 0xF5BB / 62907
{
	if (Function_82(StackVal, Param2))
	{
		LOG_ERROR("You're passing in a zero vector for ASSIGN_RC_VEC_ALL_TIMES. Please fix this!");
	}
	else
	{
		Function_300(StackVal, iParam0, &uParam1, Param2);
		Function_299(StackVal, iParam0, &uParam1, Param2);
		Function_298(StackVal, iParam0, &uParam1, Param2);
		Function_297(StackVal, iParam0, &uParam1, Param2);
		Function_296(StackVal, iParam0, &uParam1, Param2);
		Function_294(StackVal, iParam0, &uParam1, Param2);
	}
}

void Function_294(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xF66B / 63083
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_295(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Night Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 60) = Param2;
}

bool Function_295(struct<2> Param0, struct<2> Param2) //Position: 0xF6D2 / 63186
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_296(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xF6FE / 63230
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_295(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Evening Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 48) = Param2;
}

void Function_297(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xF767 / 63335
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_295(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Afternoon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 36) = Param2;
}

void Function_298(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xF7D2 / 63442
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_295(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Noon Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 24) = Param2;
}

void Function_299(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xF838 / 63544
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_295(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Morning Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	*(&Param1[bVar011] + 12) = Param2;
}

void Function_300(var uParam0, struct<11>[] Param1, struct<2> Param2) //Position: 0xF8A1 / 63649
{
	bool bVar0;
	
	bVar0 = uParam0;
	if (Function_295(StackVal, StackVal, Param2, Vector(0.0f, 0.0f, 0.0f)))
	{
		LOG_ERROR("Dawn Vector is 0,0,0, please fix!");
		PRINTSTRING("nCharacter");
		PRINTINT(bVar0);
		PRINTNL();
	}
	Param1[bVar011] = Param2;
}

int Function_301(int iParam0) //Position: 0xF905 / 63749
{
	if (!Function_5(iParam0))
	{
		return 1;
	}
	return Function_302(&(Global_43791[iParam0]), 4);
}

bool Function_302(var uParam0, int iParam1) //Position: 0xF921 / 63777
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_303(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xF93E / 63806
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return 1;
	}
	if (StackVal != 5 && 0)
	{
		return 1;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (Function_302(&(Global_43791[iParam2]), 0x40000000))
	{
		if (!STREAMING_IS_GRINGO_DICTIONARY_LOADED(GET_ASSET_ID(&cVar1, 12)))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8) && Function_18(&(Param0[iVar02]), 16))
		{
			if (!STREAMING_IS_GRINGO_LOADED(&vParam1[iVar03] + 8))
			{
				return 0;
			}
		}
		if (StackVal == 5)
		{
			if ((!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0) && Function_18(&(Param0[iVar02]), 8))
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

int Function_304() //Position: 0xFA27 / 64039
{
	return 0;
}

void Function_305(struct<2>[] Param0, vector3[] vParam1, int iParam2) //Position: 0xFA2E / 64046
{
	int iVar0;
	char* cVar1[64];
	
	iVar0 = 0;
	if (!Function_5(iParam2))
	{
		return;
	}
	if (StackVal != 5 && 0)
	{
		return;
	}
	strcpy(&cVar1, Function_21(iParam2), 64);
	if (Function_19())
	{
		stradd(&cVar1, "_z", 64);
	}
	if (!Function_302(&(Global_43791[iParam2]), 0x40000000))
	{
		if (_IS_TYPE_ID_VALID_BY_STRING(&cVar1, 12))
		{
			STREAMING_REQUEST_GRINGO_DICTIONARY(GET_ASSET_ID(&cVar1, 12));
			Function_306(&(Global_43791[iParam2]), 0x40000000);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (UNK_0x214AFB8C(&vParam1[iVar03] + 8))
		{
			STREAMING_REQUEST_GRINGO(&vParam1[iVar03] + 8);
			Function_16(&(Param0[iVar02]), 16);
		}
		if (StackVal == 5)
		{
			if (!vParam1[iVar03] != 4294967295 && !vParam1[iVar03] != 0)
			{
				STREAMING_REQUEST_ACTOR(vParam1[iVar03], 4294967295, true);
				Function_16(&(Param0[iVar02]), 8);
			}
		}
		iVar0++;
	}
	return;
}

void Function_306(var uParam0, int iParam1) //Position: 0xFB1E / 64286
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_307() //Position: 0xFB2F / 64303
{
	var uVar0;
	
	Function_308(3, 3);
	uVar0 = &uVar0;
	Function_273(&iLocal_378 + 8, "$/content/scripting/gringo/simplegringo/kneel_hammer", 1, 0);
	Function_273(&iLocal_378 + 8, "$/content/scripting/gringo/simplegringo/stand_announce", 1, 0);
	Function_273(&iLocal_378 + 8, "$/content/scripting/gringo/simplegringo/mex_cartvendor", 1, 0);
	Function_273(&iLocal_378 + 8, "$/content/scripting/gringo/simplegringo/mex_pickgarbage", 1, 0);
	if (!Function_257(&iLocal_378 + 8))
	{
		return 0;
	}
	iLocal_378 = FIND_NAMED_LAYOUT("Nosalida_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_378))
	{
		iLocal_378 = CREATE_LAYOUT("Nosalida_layout");
	}
	*(&iLocal_378 + 80) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_378, "kneel_hammer", "kneel_hammer", Vector(-4700,316f, 3,036526f, 3988,724f), Vector(0.0f, -156,4159f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_378 + 80), 0);
	*(&iLocal_378 + 88) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_378, "stand_announce", "stand_announce", Vector(-4720,354f, 3,042003f, 3983,954f), Vector(0.0f, 0.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_378 + 88), 0);
	*(&iLocal_378 + 96) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_378, "mex_cartVendor", "mex_cartVendor", Vector(-4720,121f, 3,038558f, 3987,487f), Vector(0.0f, -197,8742f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_378 + 96), 0);
	*(&iLocal_378 + 104) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_378, "mex_pickGarbage", "mex_pickGarbage", Vector(-4734,564f, 3,041318f, 3973,093f), Vector(0.0f, 100,7985f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_378 + 104), 0);
	*(&iLocal_378 + 112) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_378, "mex_pickGarbage1", "mex_pickGarbage", Vector(-4695,087f, 3,034575f, 3978,083f), Vector(0.0f, -137,2131f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_378 + 112), 0);
	return 1;
}

void Function_308(int iParam0, int iParam1) //Position: 0xFE41 / 65089
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

struct<8> Function_309() //Position: 0xFE8B / 65163
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
	
	Function_308(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("Nosalida_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Nosalida_layout");
	}
	*(&iLocal_0 + 8) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_Objective_01fireVolume", 2,802597E-45f, Vector(-4709,446f, 5,552271f, 3963,373f), Vector(0.0f, -4,432055f, 0.0f), Vector(9,224729f, 5,214296f, 13,86991f));
	*(&iLocal_0 + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_Objective_02fireVolume", 2,802597E-45f, Vector(-4733,974f, 3,116947f, 3959,436f), Vector(0.0f, -10,54039f, 0.0f), Vector(8,988496f, 11,51615f, 13,89985f));
	*(&iLocal_0 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_Objective_03fireVolume", 2,802597E-45f, Vector(-4754,845f, 3,026183f, 4024,557f), Vector(0.0f, 14,26587f, 0.0f), Vector(12,11258f, 11,04522f, 8,636647f));
	*(&iLocal_0 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_Objective_04fireVolume", 2,802597E-45f, Vector(-4772,851f, 3,088484f, 3962,299f), Vector(0.0f, 4,683409f, 0.0f), Vector(6,622854f, 7,789352f, 21,06963f));
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_Objective_05fireVolume", 2,802597E-45f, Vector(-4755,996f, 3,288223f, 3931,389f), Vector(0.0f, 8,626548f, 0.0f), Vector(20,50637f, 8,552637f, 6,570903f));
	*(&iLocal_0 + 48) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_rebInside", 4,203895E-45f, Vector(-4722,388f, 2,765542f, 3959,484f), Vector(0.0f, -32,1914f, 0.0f), Vector(36,05387f, 4,051332f, 29,8035f));
	*(&iLocal_0 + 56) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_armyInside", 2,802597E-45f, Vector(-4705,538f, 5,878049f, 3996,561f), Vector(0.0f, -25,59672f, 0.0f), Vector(39,08514f, 9,120494f, 138,936f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_gateway", 4,203895E-45f, Vector(-4689,991f, 3,825f, 4009,823f), Vector(0.0f, 20.0f, 0.0f), Vector(3,351947f, 3,351947f, 3,351947f));
	*(&iLocal_0 + 72) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "endOfMissionVolumeCheck", 2,802597E-45f, Vector(-4688,099f, 2,460529f, 4010,164f), Vector(0.0f, -45,2289f, 0.0f), Vector(5,940689f, 7,940591f, 11,52552f));
	*(&iLocal_0 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "calvaryVolume", 2,802597E-45f, Vector(-4747,688f, 4,792599f, 4028,951f), Vector(0.0f, 0.0f, 0.0f), Vector(56,46494f, 19,5902f, 34,79697f));
	*(&iLocal_0 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "calvaryVolumeDefend", 2,802597E-45f, Vector(-4762,947f, 3,768141f, 4028,679f), Vector(0.0f, 13,43209f, 0.0f), Vector(44,56448f, 10,70631f, 25,87819f));
	*(&iLocal_0 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dockBuilding_doorFireVolume", 2,802597E-45f, Vector(-4729,248f, 3,214536f, 3955,667f), Vector(0.0f, -9,357233f, 0.0f), Vector(0,5046002f, 5,885669f, 1,357214f));
	*(&iLocal_0 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_DockGuyStayIn", 2,802597E-45f, Vector(-4746,453f, 2,543439f, 3947,074f), Vector(0.0f, -9,584526f, 0.0f), Vector(23,04869f, 14,09589f, 17,5876f));
	*(&iLocal_0 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generalWanderVolume", 2,802597E-45f, Vector(-4685,477f, 4,295681f, 4014,545f), Vector(0.0f, 43,11362f, 0.0f), Vector(29,63213f, 7,427694f, 28,06384f));
	*(&iLocal_0 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "generalWanderVolume01", 2,802597E-45f, Vector(-4685,369f, 4,084026f, 4006,042f), Vector(0.0f, 44,21463f, 0.0f), Vector(4,614594f, 3,431276f, 2,896145f));
	*(&iLocal_0 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "helperDefendVolume", 2,802597E-45f, Vector(-4694,468f, 3,614192f, 4013,739f), Vector(0.0f, 47,02509f, 0.0f), Vector(2,214979f, 5,488709f, 2,124118f));
	*(&iLocal_0 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "helperDefendVolume1", 2,802597E-45f, Vector(-4685,167f, 3,614192f, 4006,074f), Vector(0.0f, 47,02509f, 0.0f), Vector(3,152885f, 5,488709f, 2,387681f));
	*(&iLocal_0 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nosv_rebInside01", 4,203895E-45f, Vector(-4755,573f, 6,633423f, 4027,75f), Vector(0.0f, 20.0f, 0.0f), Vector(15,32538f, 4,026557f, 12,15825f));
	*(&iLocal_0 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_NearHouse01", 2,802597E-45f, Vector(-4754,313f, 4,532856f, 4028,792f), Vector(0.0f, 13,1505f, 0.0f), Vector(45,75178f, 20,38658f, 49,98456f));
	*(&iLocal_0 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_NearHouse02", 2,802597E-45f, Vector(-4715,648f, 4,532856f, 3963,537f), Vector(0.0f, -10,37949f, 0.0f), Vector(69,31184f, 26,16855f, 66,58784f));
	*(&iLocal_0 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_VoltureSpawn", 2,802597E-45f, Vector(-4715,568f, 16,34434f, 3963,013f), Vector(0.0f, 0.0f, 0.0f), Vector(5,140819f, 3,472213f, 5,140819f));
	*(&iLocal_0 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_GeneralStayIn", 2,802597E-45f, Vector(-4689,667f, 4,084026f, 4010,224f), Vector(0.0f, 44,21463f, 0.0f), Vector(5,933511f, 4,08388f, 4,180257f));
	*(&iLocal_0 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_Objective0_fire01", 2,802597E-45f, Vector(-4708,783f, 5,497333f, 3964,844f), Vector(0.0f, -5,895035f, 0.0f), Vector(5,195776f, 4,434219f, 9,584059f));
	*(&iLocal_0 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_Objective1_fire01", 2,802597E-45f, Vector(-4734,606f, 5,124694f, 3958,798f), Vector(0.0f, -10,46925f, 0.0f), Vector(5,820748f, 5,631747f, 13,39896f));
	*(&iLocal_0 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_Objective2_fire01", 2,802597E-45f, Vector(-4754,649f, 5,464931f, 4026,394f), Vector(0.0f, -74,14159f, 0.0f), Vector(4,956543f, 5,219628f, 9,106956f));
	*(&iLocal_0 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_GeneralGateway", 4,203895E-45f, Vector(-4687,216f, 4,505077f, 4010,7f), Vector(0.0f, 20.0f, 0.0f), Vector(2,664417f, 3,306562f, 2,664417f));
	*(&iLocal_0 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_horseOut", 2,802597E-45f, Vector(-4686,678f, 3,92862f, 4011,22f), Vector(0.0f, 44,48948f, 0.0f), Vector(7,157873f, 7,157873f, 7,157873f));
	*(&iLocal_0 + 224) = CREATE_OBJECTSET_IN_LAYOUT("PersCharSchedsSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 232[03]) = Vector(-4703,538f, 3,036527f, 3968.0f);
	*(&iLocal_0 + 232[03] + 12) = Vector(0.0f, -106,3578f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_01", Vector(-4703,538f, 3,036527f, 3968.0f), Vector(0.0f, -106,3578f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_0 + 224);
	*(&iLocal_0 + 232[13]) = Vector(-4698,436f, 3,036527f, 3960,331f);
	*(&iLocal_0 + 232[13] + 12) = Vector(0.0f, -84,63377f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_02", Vector(-4698,436f, 3,036527f, 3960,331f), Vector(0.0f, -84,63377f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_0 + 224);
	*(&iLocal_0 + 232[23]) = Vector(-4703,327f, 2,886f, 3981,982f);
	*(&iLocal_0 + 232[23] + 12) = Vector(0.0f, -166,5518f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_03", Vector(-4703,327f, 2,886f, 3981,982f), Vector(0.0f, -166,5518f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_0 + 224);
	*(&iLocal_0 + 232[33]) = Vector(-4713,813f, 3,036527f, 3985,813f);
	*(&iLocal_0 + 232[33] + 12) = Vector(0.0f, -204,4494f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_04", Vector(-4713,813f, 3,036527f, 3985,813f), Vector(0.0f, -204,4494f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_0 + 224);
	*(&iLocal_0 + 232[43]) = Vector(-4719,853f, 3,036527f, 3971,027f);
	*(&iLocal_0 + 232[43] + 12) = Vector(0.0f, -111,6387f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_06", Vector(-4719,853f, 3,036527f, 3971,027f), Vector(0.0f, -111,6387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_0 + 224);
	*(&iLocal_0 + 232[53]) = Vector(-4697,857f, 2,886f, 3971,966f);
	*(&iLocal_0 + 232[53] + 12) = Vector(0.0f, -102,3352f, 0.0f);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_07", Vector(-4697,857f, 2,886f, 3971,966f), Vector(0.0f, -102,3352f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_0 + 224);
	*(&iLocal_0 + 232[63]) = Vector(-4738,075f, 2,901256f, 4016.0f);
	*(&iLocal_0 + 232[63] + 12) = Vector(0.0f, -104,727f, 0.0f);
	uVar7 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_08", Vector(-4738,075f, 2,901256f, 4016.0f), Vector(0.0f, -104,727f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar7, &iLocal_0 + 224);
	*(&iLocal_0 + 232[73]) = Vector(-4757,558f, 3,026183f, 4033,558f);
	*(&iLocal_0 + 232[73] + 12) = Vector(0.0f, -137,3479f, 0.0f);
	uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "NOS_rebelSpawn_10", Vector(-4757,558f, 3,026183f, 4033,558f), Vector(0.0f, -137,3479f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar8, &iLocal_0 + 224);
	*(&iLocal_0 + 432) = Vector(-4708,778f, 3,036526f, 3965,028f);
	*(&iLocal_0 + 432 + 12) = Vector(0.0f, -2,08889f, 0.0f);
	*(&iLocal_0 + 456) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosv_Objective_01_YellowBlip", Vector(-4708,778f, 3,036526f, 3965,028f), Vector(0.0f, -2,08889f, 0.0f));
	*(&iLocal_0 + 464) = Vector(-4734,29f, 3,036526f, 3959,818f);
	*(&iLocal_0 + 464 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 488) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosv_Objective_02_YellowBlip", Vector(-4734,29f, 3,036526f, 3959,818f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 496) = Vector(-4754,288f, 3,026182f, 4026,292f);
	*(&iLocal_0 + 496 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 520) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosv_Objective_03_YellowBlip", Vector(-4754,288f, 3,026182f, 4026,292f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 528) = Vector(-4772,777f, 3,209405f, 3962,875f);
	*(&iLocal_0 + 528 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 552) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosv_Objective_04_YellowBlip", Vector(-4772,777f, 3,209405f, 3962,875f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 560) = Vector(-4756,351f, 3,209512f, 3931,581f);
	*(&iLocal_0 + 560 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 584) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosv_Objective_05_YellowBlip", Vector(-4756,351f, 3,209512f, 3931,581f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 592) = Vector(-4693,709f, 3,036527f, 3936.0f);
	*(&iLocal_0 + 592 + 12) = Vector(0.0f, 120,3813f, 0.0f);
	*(&iLocal_0 + 616) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_ArmySpawn1", Vector(-4693,709f, 3,036527f, 3936.0f), Vector(0.0f, 120,3813f, 0.0f));
	*(&iLocal_0 + 624) = Vector(-4680.0f, 3,036526f, 3953,331f);
	*(&iLocal_0 + 624 + 12) = Vector(0.0f, 92,45324f, 0.0f);
	*(&iLocal_0 + 648) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_ArmySpawn2", Vector(-4680.0f, 3,036526f, 3953,331f), Vector(0.0f, 92,45324f, 0.0f));
	*(&iLocal_0 + 656) = Vector(-4675,076f, 3,036526f, 3983,289f);
	*(&iLocal_0 + 656 + 12) = Vector(0.0f, 67,23847f, 0.0f);
	*(&iLocal_0 + 680) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_ArmySpawn3", Vector(-4675,076f, 3,036526f, 3983,289f), Vector(0.0f, 67,23847f, 0.0f));
	*(&iLocal_0 + 688) = Vector(-4701,401f, 3,036527f, 4009,017f);
	*(&iLocal_0 + 688 + 12) = Vector(0.0f, 12,40536f, 0.0f);
	*(&iLocal_0 + 712) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_ArmySpawn4", Vector(-4701,401f, 3,036527f, 4009,017f), Vector(0.0f, 12,40536f, 0.0f));
	*(&iLocal_0 + 720) = Vector(-4724,104f, 4,015711f, 4039,953f);
	*(&iLocal_0 + 720 + 12) = Vector(0.0f, 65,89757f, 0.0f);
	*(&iLocal_0 + 744) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_ArmySpawn5", Vector(-4724,104f, 4,015711f, 4039,953f), Vector(0.0f, 65,89757f, 0.0f));
	*(&iLocal_0 + 752) = Vector(-4737,167f, 5,21044f, 4049,167f);
	*(&iLocal_0 + 752 + 12) = Vector(0.0f, 68,3275f, 0.0f);
	*(&iLocal_0 + 776) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_ArmySpawn6", Vector(-4737,167f, 5,21044f, 4049,167f), Vector(0.0f, 68,3275f, 0.0f));
	*(&iLocal_0 + 784) = Vector(-4755,197f, 4,878185f, 4050,355f);
	*(&iLocal_0 + 784 + 12) = Vector(0.0f, 1,376681f, 0.0f);
	*(&iLocal_0 + 808) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_ArmySpawn7", Vector(-4755,197f, 4,878185f, 4050,355f), Vector(0.0f, 1,376681f, 0.0f));
	*(&iLocal_0 + 816) = Vector(-4664.0f, 5,05754f, 4028.0f);
	*(&iLocal_0 + 816 + 12) = Vector(0.0f, 44,01219f, 0.0f);
	*(&iLocal_0 + 840) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "nosf_teleport", Vector(-4664.0f, 5,05754f, 4028.0f), Vector(0.0f, 44,01219f, 0.0f));
	*(&iLocal_0 + 848) = Vector(-4826,156f, 3,552852f, 4054,156f);
	*(&iLocal_0 + 848 + 12) = Vector(0.0f, -91,84901f, 0.0f);
	*(&iLocal_0 + 872) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "calvaryGuy1", Vector(-4826,156f, 3,552852f, 4054,156f), Vector(0.0f, -91,84901f, 0.0f));
	*(&iLocal_0 + 880) = Vector(-4824.0f, 3,538639f, 4054,099f);
	*(&iLocal_0 + 880 + 12) = Vector(0.0f, -89,72305f, 0.0f);
	*(&iLocal_0 + 904) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "calvaryHorse1", Vector(-4824.0f, 3,538639f, 4054,099f), Vector(0.0f, -89,72305f, 0.0f));
	*(&iLocal_0 + 912) = Vector(-4826,283f, 3,227272f, 4049,253f);
	*(&iLocal_0 + 912 + 12) = Vector(0.0f, -88,79588f, 0.0f);
	*(&iLocal_0 + 936) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "calvaryGuy2", Vector(-4826,283f, 3,227272f, 4049,253f), Vector(0.0f, -88,79588f, 0.0f));
	*(&iLocal_0 + 944) = Vector(-4824.0f, 3,513752f, 4050.0f);
	*(&iLocal_0 + 944 + 12) = Vector(0.0f, -91,31888f, 0.0f);
	*(&iLocal_0 + 968) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "calvaryHorse2", Vector(-4824.0f, 3,513752f, 4050.0f), Vector(0.0f, -91,31888f, 0.0f));
	*(&iLocal_0 + 976) = Vector(-4822,656f, 3,011791f, 4052,188f);
	*(&iLocal_0 + 976 + 12) = Vector(0.0f, -89,68262f, 0.0f);
	*(&iLocal_0 + 1000) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "calvaryGuy3", Vector(-4822,656f, 3,011791f, 4052,188f), Vector(0.0f, -89,68262f, 0.0f));
	*(&iLocal_0 + 1008) = Vector(-4820,658f, 3,177021f, 4052,658f);
	*(&iLocal_0 + 1008 + 12) = Vector(0.0f, -91,65162f, 0.0f);
	*(&iLocal_0 + 1032) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "calvaryHorse3", Vector(-4820,658f, 3,177021f, 4052,658f), Vector(0.0f, -91,65162f, 0.0f));
	*(&iLocal_0 + 1040) = Vector(-4777,106f, 3,599078f, 4037,106f);
	*(&iLocal_0 + 1040 + 12) = Vector(0.0f, -73,366f, 0.0f);
	*(&iLocal_0 + 1064) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "calvaryFlag", Vector(-4777,106f, 3,599078f, 4037,106f), Vector(0.0f, -73,366f, 0.0f));
	*(&iLocal_0 + 1072) = Vector(-4746,449f, 2,804573f, 3945,967f);
	*(&iLocal_0 + 1072 + 12) = Vector(0.0f, -119,1971f, 0.0f);
	*(&iLocal_0 + 1096) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ndockGuy01", Vector(-4746,449f, 2,804573f, 3945,967f), Vector(0.0f, -119,1971f, 0.0f));
	*(&iLocal_0 + 1104) = Vector(-4741,667f, 2,579734f, 3953,043f);
	*(&iLocal_0 + 1104 + 12) = Vector(0.0f, -164,6073f, 0.0f);
	*(&iLocal_0 + 1128) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "ndockGuy02", Vector(-4741,667f, 2,579734f, 3953,043f), Vector(0.0f, -164,6073f, 0.0f));
	*(&iLocal_0 + 1136) = CREATE_OBJECTSET_IN_LAYOUT("NosalidaAreaChestsSet", &iLocal_0, 8, 0);
	*(&iLocal_0 + 1144[03]) = Vector(-4743,301f, 3,088794f, 4024,138f);
	*(&iLocal_0 + 1144[03] + 12) = Vector(0.0f, 17,51707f, 0.0f);
	uVar9 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_AreaChest01", Vector(-4743,301f, 3,088794f, 4024,138f), Vector(0.0f, 17,51707f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar9, &iLocal_0 + 1136);
	*(&iLocal_0 + 1144[13]) = Vector(-4701,916f, 3,036526f, 3946,633f);
	*(&iLocal_0 + 1144[13] + 12) = Vector(0.0f, 136,781f, 0.0f);
	uVar10 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_AreaChest02", Vector(-4701,916f, 3,036526f, 3946,633f), Vector(0.0f, 136,781f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar10, &iLocal_0 + 1136);
	*(&iLocal_0 + 1144[23]) = Vector(-4732,187f, 3,036526f, 3976,027f);
	*(&iLocal_0 + 1144[23] + 12) = Vector(0.0f, 188,0969f, 0.0f);
	uVar11 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_AreaChest03", Vector(-4732,187f, 3,036526f, 3976,027f), Vector(0.0f, 188,0969f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar11, &iLocal_0 + 1136);
	*(&iLocal_0 + 1224) = Vector(-4689,455f, 3,146862f, 4009,476f);
	*(&iLocal_0 + 1224 + 12) = Vector(0.0f, 132,6365f, 0.0f);
	*(&iLocal_0 + 1248) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_SheriffReturnSpot", Vector(-4689,455f, 3,146862f, 4009,476f), Vector(0.0f, 132,6365f, 0.0f));
	*(&iLocal_0 + 1256) = Vector(-4690,204f, 3,177641f, 4010,204f);
	*(&iLocal_0 + 1256 + 12) = Vector(0.0f, -37,91885f, 0.0f);
	*(&iLocal_0 + 1280) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_PlayerTeleportSpot", Vector(-4690,204f, 3,177641f, 4010,204f), Vector(0.0f, -37,91885f, 0.0f));
	*(&iLocal_0 + 1288) = Vector(-4750,632f, 3,026183f, 4028,435f);
	*(&iLocal_0 + 1288 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1312) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_noHorseHitch01", Vector(-4750,632f, 3,026183f, 4028,435f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1320) = Vector(-4716.0f, 3,036528f, 3967,568f);
	*(&iLocal_0 + 1320 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1344) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_noHorseHitch02", Vector(-4716.0f, 3,036528f, 3967,568f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1352) = Vector(-4674,369f, 3,036526f, 3940.0f);
	*(&iLocal_0 + 1352 + 12) = Vector(0.0f, 96,24602f, 0.0f);
	*(&iLocal_0 + 1376) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_01", Vector(-4674,369f, 3,036526f, 3940.0f), Vector(0.0f, 96,24602f, 0.0f));
	*(&iLocal_0 + 1384) = Vector(-4716.0f, 2,926777f, 4031,033f);
	*(&iLocal_0 + 1384 + 12) = Vector(0.0f, 40,28528f, 0.0f);
	*(&iLocal_0 + 1408) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_Horse_02", Vector(-4716.0f, 2,926777f, 4031,033f), Vector(0.0f, 40,28528f, 0.0f));
	*(&iLocal_0 + 1416) = Vector(-4686,678f, 3,92862f, 4011,22f);
	*(&iLocal_0 + 1416 + 12) = Vector(0.0f, 49,4488f, 0.0f);
	*(&iLocal_0 + 1440) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_MarstonStart", Vector(-4686,678f, 3,92862f, 4011,22f), Vector(0.0f, 49,4488f, 0.0f));
	*(&iLocal_0 + 1448) = Vector(-4688,117f, 3,495452f, 4009,935f);
	*(&iLocal_0 + 1448 + 12) = Vector(0.0f, -139,7478f, 0.0f);
	*(&iLocal_0 + 1472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "f_GenStart", Vector(-4688,117f, 3,495452f, 4009,935f), Vector(0.0f, -139,7478f, 0.0f));
	*(&iLocal_0 + 1480) = Vector(-4687,636f, 3,859688f, 4017,944f);
	*(&iLocal_0 + 1480 + 12) = Vector(0.0f, 96,47251f, 0.0f);
	PushArrayP();
	*(&iLocal_0 + 1504) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_0, "calvaryCurve");
	return 1;
}

void Function_310(char* cParam0) //Position: 0x11713 / 71443
{
	if (!Function_312(128))
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

void Function_311(int iParam0) //Position: 0x11750 / 71504
{
	int iVar0;
	
	if (Function_20(iParam0, 1) && Function_20(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_312(int iParam0) //Position: 0x11784 / 71556
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_313(struct<2>[] Param0, int iParam1) //Position: 0x117A0 / 71584
{
	int iVar0;
	
	if (!Function_312(2))
	{
		return 0;
	}
	if (Function_302(&(Global_43791[iParam1]), 256))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (Function_18(&(Param0[iVar02]), 2))
		{
			if (Function_18(&(Param0[iVar02]), 4))
			{
				if (IS_LATER_THAN(&Param0[iVar02] + 8, false))
				{
					return 1;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_314(int iParam0) //Position: 0x1180F / 71695
{
	if (Global_6666)
	{
		return 0;
	}
	iParam0 = &iParam0;
	if (Global_6623 || Global_6622)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6622)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6646)
	{
		return 1;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	if (Function_302(&iParam0, 256))
	{
		return 0;
	}
	return 1;
}

