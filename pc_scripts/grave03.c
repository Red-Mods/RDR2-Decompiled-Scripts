//Decompiled with MagicRDR v1.0
//Function Count : 528
//Statics Count : 901
//Natives Count : 727
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 1;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 8;
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
	var uLocal_59 = 7;
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
	var uLocal_89 = 3;
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
	var uLocal_105 = 2;
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
	var uLocal_117 = 4;
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
	var uLocal_137 = 3;
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
	var uLocal_153 = 8;
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
	var uLocal_189 = 9;
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
	var uLocal_229 = 4;
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
	var uLocal_241 = 16;
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
	var uLocal_277 = 2;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 3;
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
	var uLocal_325 = 5;
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
	var uLocal_343 = 4;
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
	var uLocal_361 = 10;
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
	var uLocal_385 = 7;
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
	var uLocal_403 = 5;
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
	var uLocal_417 = 3;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 5;
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
	var uLocal_439 = 5;
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
	var uLocal_473 = 7;
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
	var uLocal_491 = 4;
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
	var uLocal_503 = 11;
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
	int iLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	struct<6> Local_554 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
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
	bool bLocal_580 = false;
	bool bLocal_581 = false;
	bool bLocal_582 = false;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	bool bLocal_591 = false;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	bool bLocal_595 = false;
	int iLocal_596[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_618 = 8;
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
	int iLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	int iLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	int iLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	int iLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	int iLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	int iLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	int iLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	int iLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	int iLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	int iLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	int iLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	bool bLocal_698 = false;
	var uLocal_699 = 0;
	bool bLocal_700 = false;
	var uLocal_701 = 0;
	bool bLocal_702 = false;
	var uLocal_703 = 0;
	bool bLocal_704 = false;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	bool bLocal_708 = false;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	int iLocal_712 = 0;
	var uLocal_713 = 0;
	bool bLocal_714 = false;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	int iLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	int iLocal_722 = 0;
	var uLocal_723 = 0;
	struct<2> Local_724 = { 0, 0 } ;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	float fLocal_730 = 0.0f;
	bool bLocal_731 = false;
	bool bLocal_732 = false;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	float fLocal_739 = 0.0f;
	float fLocal_740 = 0.0f;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	int iLocal_743 = 0;
	bool bLocal_744 = false;
	bool bLocal_745 = false;
	bool bLocal_746 = false;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	bool bLocal_749 = false;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	bool bLocal_763 = false;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	bool bLocal_769 = false;
	int iLocal_770 = 0;
	bool bLocal_771 = false;
	int iLocal_772 = 0;
	int iLocal_773[5] = { 0, 0, 0, 0, 0 };
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	int iLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 13;
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
	struct<15> Local_849[1];
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 5;
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
	iLocal_551 = 0;
	fLocal_730 = 2.0f;
	iLocal_746 = 0;
	iLocal_748 = 0;
	Local_554 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	iLocal_566 = 99;
	iLocal_567 = 6;
	iLocal_568 = 1000;
	while (Function_278())
	{
		Function_231();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x50 / 80
{
	DISABLE_CHILD_SECTOR("sp_grave03x");
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	Function_230(&iLocal_17 + 344);
	Function_230(&iLocal_17 + 392);
	Function_230(&iLocal_17 + 472);
	Function_230(&iLocal_17 + 536);
	Function_230(&iLocal_17 + 680);
	if (IS_OBJECT_VALID(&iLocal_17 + 2128))
	{
		DESTROY_OBJECT(&iLocal_17 + 2128);
	}
	if (IS_OBJECT_VALID(&uLocal_692))
	{
		DESTROY_OBJECT(&uLocal_692);
	}
	if (IS_OBJECTSET_VALID(&uLocal_696))
	{
		DESTROY_OBJECTSET(&uLocal_696);
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&bLocal_591);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_593);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_591, 0);
	RESET_ACTOR_GAITS(&bLocal_591, 0);
	SET_CRIPPLE_ENABLE(&bLocal_591, 0);
	MEMORY_CLEAR_WEAPON_DRAW_PREFERENCE(&bLocal_591);
	CLEAR_ACTOR_STAY_WITHIN_VOLUME(&bLocal_591);
	SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_591, true);
	Function_228(1, 0, 1);
	Function_227(&uLocal_552);
	Function_227(&iLocal_17);
	RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	Function_226(&(Global_43791[Global_46796[0]]), 256);
	if (IS_PIP_ENABLED(0))
	{
		ENABLE_PIP(0, 0, 1);
	}
	Function_225();
	Function_195(bLocal_582, 1, 1, 1, 1, 1, 1, 1);
	Function_191(&iLocal_618);
	Function_187();
	if (IS_ITERATOR_VALID(&uLocal_652))
	{
		DESTROY_ITERATOR(&uLocal_652);
	}
	RELEASE_LAYOUT_REF(&uLocal_552);
	if (bLocal_580)
	{
		Function_177(Global_46796[0], &Global_11420, &Global_13398, 1);
		Function_29(Local_554, 1, 1, 1, 0);
	}
	else if (bLocal_582)
	{
		Function_26(1, 0, 0, 1, 1);
		Function_22(Local_554);
		TERMINATE_THIS_SCRIPT();
	}
	else
	{
		Function_26(1, 0, 0, 1, 1);
		Function_2(Local_554);
		TERMINATE_THIS_SCRIPT();
	}
	return;
}

void Function_2(int iParam0) //Position: 0x1CD / 461
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x1EE / 494
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x20B / 523
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x22E / 558
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x245 / 581
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

void Function_7(int iParam0) //Position: 0x2E7 / 743
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x30A / 778
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

void Function_9() //Position: 0x354 / 852
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(int iParam0) //Position: 0x36D / 877
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

void Function_11(var uParam0, int iParam1) //Position: 0x3C0 / 960
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

struct<16> Function_12(int iParam0) //Position: 0x4EA / 1258
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

bool Function_13() //Position: 0x524 / 1316
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x53F / 1343
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(int iParam0) //Position: 0x54C / 1356
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x56C / 1388
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(int iParam0) //Position: 0x583 / 1411
{
	if (!Function_16(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_18() //Position: 0x59E / 1438
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7E5 / 2021
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x811 / 2065
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

bool Function_21(int iParam0) //Position: 0x835 / 2101
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x84A / 2122
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(int iParam0) //Position: 0x868 / 2152
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

struct<16> Function_24(int iParam0) //Position: 0x90E / 2318
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

struct<24> Function_25(char* cParam0) //Position: 0x94D / 2381
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

int Function_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xBA3 / 2979
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
		Function_28(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, 1);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_27(&Global_15402[iParam014] + 8);
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

void Function_27(int iParam0) //Position: 0xEE5 / 3813
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

void Function_28(int iParam0) //Position: 0xF18 / 3864
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&iParam0);
	return;
}

void Function_29(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xF2F / 3887
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
		Function_172(&(Global_6667[iVar228]));
		Function_171(4194304);
		if (&bParam3)
		{
			Function_124(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_118(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_124(iVar2, &uVar0, 0);
		}
		bVar1 = Function_117();
		if (&bParam1)
		{
			Function_101(iVar2, iParam0, bVar1);
			Function_100();
		}
	}
	Function_42(iParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(iParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_34(iVar2, bVar1);
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
	Function_30();
}

void Function_30() //Position: 0x1023 / 4131
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_31(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

bool Function_31(int iParam0, bool bParam1) //Position: 0x1055 / 4181
{
	int iVar0;
	
	iVar0 = Function_32(iParam0);
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

int Function_32(int iParam0) //Position: 0x1093 / 4243
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_33(int iParam0) //Position: 0x10AD / 4269
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_34(int iParam0, bool bParam1) //Position: 0x10C3 / 4291
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
							Function_35(&Global_54076, 0x1000000, 3, 0);
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
							Function_35(&Global_54076, 0x1000000, 3, 0);
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
							Function_35(&Global_54076, 0x1000000, 3, 0);
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
							Function_35(&Global_54076, 0x1000000, 3, 0);
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
							Function_35(&Global_54076, 0x1000000, 3, 0);
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
							Function_35(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_34(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_34(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_34(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_34(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_34(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_34(57, 0);
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

void Function_35(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x13C0 / 5056
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_37(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_36(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_36(char* cParam0) //Position: 0x1435 / 5173
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

bool Function_37(int iParam0, var uParam1, int iParam2) //Position: 0x146F / 5231
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
		if (Function_40(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_39(uVar0))
		{
			case 0x00000002:
				if (!Function_38(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x14EB / 5355
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_39(char* cParam0) //Position: 0x14FE / 5374
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

int Function_40(int iParam0) //Position: 0x159F / 5535
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_41(&bVar1, 2147483648);
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

void Function_41(bool bParam0, bool bParam1) //Position: 0x15DC / 5596
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_42(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15F2 / 5618
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
		if (Function_99())
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
		if (Function_99())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_95();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_99())
	{
		Function_94();
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
			Function_87(iParam0);
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
			Function_45(1);
			Function_44(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_43(iParam0, &Var14);
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

void Function_43(int iParam0, struct<41> Param1) //Position: 0x1850 / 6224
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_44(bool bParam0, int iParam1) //Position: 0x188E / 6286
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

void Function_45(bool bParam0) //Position: 0x18CD / 6349
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
	Function_46();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_41(&Global_99144, 1);
		Function_41(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_46() //Position: 0x1922 / 6434
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_54(0);
	Function_54(0);
	Function_51();
	Function_50();
	Function_49();
	Function_48();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_47();
	return;
}

void Function_47() //Position: 0x196D / 6509
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

void Function_48() //Position: 0x1A73 / 6771
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

void Function_49() //Position: 0x1AA6 / 6822
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

void Function_50() //Position: 0x1C39 / 7225
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

void Function_51() //Position: 0x1DF2 / 7666
{
	Function_52(&Global_42918, 1, 0);
	return;
}

void Function_52(struct<2317> Param0) //Position: 0x1E00 / 7680
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
	
	uVar0 = Function_53();
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

bool Function_53() //Position: 0x201D / 8221
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_54(int iParam0) //Position: 0x2032 / 8242
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
					iVar2 = ((Function_70((50 + iVar4)) + Function_70((183 + iVar4))) + Function_70((90 + iVar4)));
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
	Function_55(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_55(int iParam0, bool bParam1, bool bParam2) //Position: 0x20D9 / 8409
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
		Function_69(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_68(iParam0);
	if (&bParam2)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_56(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2375 / 9077
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_67(390))), 32);
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
					bVar19 = (Function_66(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_66(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_64(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_61(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_59(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_58(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_57(), &Var9);
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

var Function_57() //Position: 0x29B3 / 10675
{
	int iVar0;
	
	return &iVar0;
}

var Function_58(int iParam0) //Position: 0x29BC / 10684
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_59(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x29CD / 10701
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_60("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_60(char* cParam0) //Position: 0x2AC4 / 10948
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_61(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2ADF / 10975
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_63(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_62(Function_63(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_62(int iParam0, int iParam1) //Position: 0x2B46 / 11078
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_63(int iParam0, bool bParam1) //Position: 0x2B58 / 11096
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_64(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2B6A / 11114
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
	if (((Function_65(iParam0) != 19 || Function_65(iParam0) != 17) || Function_65(iParam0) != 10) || Function_65(iParam0) != 9)
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

int Function_65(int iParam0) //Position: 0x2C9E / 11422
{
	return Global_55480[iParam016].f_96;
}

float Function_66(int iParam0) //Position: 0x2CAD / 11437
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_67(int iParam0) //Position: 0x2CE6 / 11494
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_68(int iParam0) //Position: 0x2D23 / 11555
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

int Function_69(int iParam0, bool bParam1, bool bParam2) //Position: 0x2EBD / 11965
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

int Function_70(bool bParam0) //Position: 0x3101 / 12545
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_71() //Position: 0x3142 / 12610
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
		iVar2 = ((Function_70((50 + iVar3) + 15) + Function_70((183 + iVar3) + 15)) + Function_70((90 + iVar3) + 15));
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
	Function_55(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x31CB / 12747
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
			iVar2 = ((Function_70((50 + iVar3) + 8) + Function_70((183 + iVar3) + 8)) + Function_70((90 + iVar3) + 8));
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
	Function_55(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x3262 / 12898
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
		iVar2 = ((Function_70((50 + iVar3)) + Function_70((183 + iVar3))) + Function_70((90 + iVar3)));
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
	Function_55(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_74() //Position: 0x32E1 / 13025
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_75(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_55(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x331E / 13086
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
	Function_69(iParam0, bParam1, 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_56(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_76() //Position: 0x352A / 13610
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_84(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_84(&Global_53524 + 12, &Global_53524 + 16);
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

bool Function_77(char* cParam0) //Position: 0x35E1 / 13793
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_78(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x35F9 / 13817
{
	int iVar0;
	
	iVar0 = Function_82(&uParam2, &fParam3);
	if (Function_81(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_80(&Global_99144, 1);
			Function_41(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_80(&Global_99144, 2);
			Function_41(&Global_99144, 1);
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
		Function_80(&Global_99144, 2);
		Function_41(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_79();
	return StackVal, Function_79();
}

struct<8> Function_79() //Position: 0x36F1 / 14065
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_80(bool bParam0, bool bParam1) //Position: 0x36FB / 14075
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_81(int iParam0) //Position: 0x370C / 14092
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x3722 / 14114
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
				fVar2 = Function_83(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_83(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_81(iVar0) && !&bParam1)
	{
		iVar0 = Function_82(&bParam0, 1);
	}
	return iVar0;
}

float Function_83(struct<2> Param0, struct<2> Param2) //Position: 0x37EE / 14318
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_84(float fParam0, int iParam1) //Position: 0x380B / 14347
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_86(&Global_54076, &Var3);
	if (!Function_85(Global_46760[0]))
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
	if (!Function_85(Global_46760[2]))
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
	if (!Function_85(Global_46760[1]))
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
	if (!Function_85(Global_46796[1]))
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
	if (!Function_85(Global_46796[3]))
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
	if (!Function_85(Global_46796[2]))
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
	if (!Function_85(Global_46796[4]))
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
	if (!Function_85(Global_46816[0]))
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
	if (!Function_85(Global_46816[1]))
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
	if (!Function_85(Global_46816[2]))
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
	if (!Function_85(Global_46838[0]))
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
	if (!Function_85(Global_46850[0]))
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
	if (!Function_85(Global_46850[1]))
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
	if (!Function_85(Global_46850[2]))
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
	if (!Function_85(Global_46866[0]))
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
	if (!Function_85(Global_46866[1]))
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
	if (!Function_85(Global_46866[2]))
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
	if (!Function_85(Global_46894[2]))
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
	if (!Function_85(Global_46894[3]))
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
	if (!Function_85(Global_46894[0]))
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
	if (!Function_85(Global_46914[0]))
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
	if (!Function_85(Global_46926[2]))
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
	if (!Function_85(Global_46926[1]))
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
	if (!Function_85(Global_46926[0]))
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
	if (!Function_85(Global_46838[1]))
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
	if (!Function_85(Global_46894[1]))
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
	Function_80(&Global_99144, 2);
	Function_41(&Global_99144, 1);
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

bool Function_85(int iParam0) //Position: 0x4041 / 16449
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_86(var uParam0, int iParam1) //Position: 0x407C / 16508
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_87(int iParam0) //Position: 0x408B / 16523
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
				Function_92(12, 1, 0, 0);
				Function_91(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_92(13, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_92(14, 1, 0, 0);
				Function_91(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_92(15, 1, 0, 0);
				Function_91(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_92(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(iParam0))
			{
				case 0x00000000:
					if (Function_90(iParam0) == 1)
					{
						iVar0 = Function_89(iParam0);
						if (Function_88(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_91(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_91(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_91(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_91(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_91(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_91(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_91(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_91(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_91(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_91(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_91(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_91(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_91(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_91(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_91(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_91(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_91(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_91(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_91(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_91(4, 19);
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
								Function_92(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_92(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_92(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_89(iParam0) == 0)
			{
				if (Function_90(iParam0) == 1)
				{
					Function_92(458, 1, 0, 0);
					iVar0 = Function_15(iParam0);
					if (Function_88(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_91(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_91(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_91(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_91(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_91(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_91(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_91(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_91(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_90(iParam0) == 1)
			{
				Function_92(400, 1, 0, 0);
			}
			switch (Function_15(iParam0))
			{
				case 0x00000001:
					Function_92(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_91(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_91(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_91(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_92(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_91(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_91(6, 9);
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

bool Function_88(int iParam0) //Position: 0x4567 / 17767
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_89(int iParam0) //Position: 0x457D / 17789
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_90(int iParam0) //Position: 0x459C / 17820
{
	if (!Function_16(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_91(int iParam0, int iParam1) //Position: 0x45B6 / 17846
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

int Function_92(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4620 / 17952
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
	Function_69(iParam0, TO_FLOAT(bParam1), 1);
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_93(iParam0);
	return 1;
}

void Function_93(int iParam0) //Position: 0x4848 / 18504
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

void Function_94() //Position: 0x48E6 / 18662
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
	PLAYSTAT_INT("HC_MONEY", Function_70(0));
	PLAYSTAT_INT("HC_FAME", Function_70(3));
	PLAYSTAT_INT("HC_HONOR", Function_70(1));
	return;
}

void Function_95() //Position: 0x4A48 / 19016
{
	int iVar0;
	int iVar1;
	
	if (!Function_33(Global_10966))
	{
		return;
	}
	iVar0 = Function_70(24);
	iVar1 = Function_32(Global_10966);
	if (!Function_33(iVar0) && Function_98(iVar1) < 0)
	{
		Function_55(24, Global_10966, 0);
		Function_96(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_98(Function_32(iVar0)))
	{
		Function_55(24, Global_10966, 0);
		Function_96(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_96(int iParam0, char* cParam1) //Position: 0x4AC8 / 19144
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
		Function_97(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_97(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4E1F / 19999
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

int Function_98(int iParam0) //Position: 0x4EA7 / 20135
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_99() //Position: 0x4EC1 / 20161
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_100() //Position: 0x4EEC / 20204
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

void Function_101(int iParam0, int iParam1, bool bParam2) //Position: 0x4F1A / 20250
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
	
	if (!Function_33(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_116(iParam0);
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
				bVar0 = (Function_70(42) - Global_53524.f_168);
				bVar1 = (Function_70(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_67(49)) - Global_53524.f_176);
				bVar3 = (Function_70(49) - Global_53524.f_180);
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
				bVar4 = (Function_70(355) - Global_53524.f_168);
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
		iVar15 = Function_115(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_102(50, 1, 0);
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

void Function_102(int iParam0, bool bParam1, bool bParam2) //Position: 0x51B6 / 20918
{
	int iVar0;
	bool bVar1;
	
	if (Function_114(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_99())
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
	iVar0 = Function_70(3);
	Function_111();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_109(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_38(Global_119936, 4))
			{
				Function_35(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_92(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_66(3));
	iVar0 = Function_70(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_104(4, Function_108(Global_21369.f_248), 1);
				Function_103(Global_21369.f_244, Global_21369.f_248);
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

void Function_103(int iParam0, int iParam1) //Position: 0x538A / 21386
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

int Function_104(int iParam0, char* cParam1) //Position: 0x55F4 / 22004
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
	Function_96(iParam0, &cParam1, 0, 1);
	iVar1 = Function_105();
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

int Function_105() //Position: 0x5784 / 22404
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
	Function_106();
	return 0;
}

void Function_106() //Position: 0x5825 / 22565
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
		Function_107(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_107(int iParam0) //Position: 0x58E3 / 22755
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

var Function_108(int iParam0) //Position: 0x5949 / 22857
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

int Function_109(int iParam0, bool bParam1) //Position: 0x59D8 / 23000
{
	bool bVar0;
	int iVar1;
	
	Function_92(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_110(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_110(int iParam0, int iParam1) //Position: 0x5B84 / 23428
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

void Function_111() //Position: 0x5BC9 / 23497
{
	Function_113(3, 0.0f);
	Function_112(3, 10000.0f);
	return;
}

int Function_112(int iParam0, int iParam1) //Position: 0x5BDF / 23519
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_113(int iParam0, int iParam1) //Position: 0x5C1F / 23583
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_114(int iParam0) //Position: 0x5C5F / 23647
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_115(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5C6E / 23662
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

int Function_116(int iParam0) //Position: 0x5E36 / 24118
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

var Function_117() //Position: 0x5ECB / 24267
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_118(int iParam0) //Position: 0x5EF0 / 24304
{
	if (!Function_33(iParam0))
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
			Function_102(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_102(25, 1, 0);
			Function_123(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_123(50, 1, 1);
			Function_102(250, 1, 0);
			Function_119(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_123(50, 1, 1);
			Function_102(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_123(5, 1, 1);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_102(75, 1, 0);
			Function_119(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_123(5, 1, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_123(25, 1, 1);
			Function_102(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_123(10, 1, 1);
			Function_102(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_102(50, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_102(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_119(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_123(20, 1, 1);
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_123(25, 1, 1);
			Function_102(150, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_123(10, 1, 1);
			Function_102(150, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_102(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_119(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_119(100, 1, 0);
			Function_123(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_123(3, 1, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_119(125, 1, 0);
			Function_102(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_123(50, 1, 1);
			Function_102(100, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_123(50, 1, 1);
			Function_102(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_123(75, 1, 1);
			Function_102(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_102(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_102(250, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_102(75, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_102(200, 1, 0);
			Function_119(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_102(75, 1, 0);
			Function_119(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_102(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_123(50, 1, 1);
			Function_102(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_123(100, 1, 1);
			Function_102(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_102(200, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_102(300, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_102(500, 1, 0);
			Function_119(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_102(150, 1, 0);
			Function_119(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_119(25, 1, 0);
			Function_123(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_102(150, 1, 0);
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_119(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_119(150, 1, 0);
			Function_123(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_119(150, 1, 0);
			Function_123(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_119(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_119(int iParam0, bool bParam1, bool bParam2) //Position: 0x63BF / 25535
{
	int iVar0;
	bool bVar1;
	
	if (Function_114(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_99())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_70(1);
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
			Function_109(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_38(Global_119936, 1))
				{
					Function_35(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_122(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_38(Global_119936, 2))
				{
					Function_35(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_92(1, bVar1, 0, 0);
	}
	else
	{
		Function_121(1, (4294967295 * bVar1), 0);
	}
	if (Function_70(1) <= 4294962296)
	{
		Function_55(1, 4294962296, 0);
	}
	else if (Function_70(1) >= 5000)
	{
		Function_55(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_66(1));
	iVar0 = Function_70(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_104(2, Function_120(Global_21369.f_244), 0);
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
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_104(2, Function_120(Global_21369.f_244), 1);
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
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_104(2, Function_120(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_104(2, Function_120(Global_21369.f_244), 1);
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
				Function_104(2, Function_120(Global_21369.f_244), 0);
			}
			break;
	}
	Function_103(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_120(int iParam0) //Position: 0x66E6 / 26342
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

int Function_121(int iParam0, bool bParam1, int iParam2) //Position: 0x6789 / 26505
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
	Function_68(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_56(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_122(int iParam0, bool bParam1) //Position: 0x6986 / 27014
{
	bool bVar0;
	int iVar1;
	
	Function_121(iParam0, bParam1, 0);
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
	iVar1 = Function_110(iParam0, 4294967295);
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
	iVar1 = Function_105();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_123(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6B31 / 27441
{
	bool bVar0;
	
	bVar0 = Function_70(0);
	if ((Function_70(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_92(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_70(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_92(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_70(597) + Function_70(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_124(int iParam0, var uParam1, bool bParam2) //Position: 0x6C03 / 27651
{
	struct<4> Var0;
	
	if (!Function_33(iParam0))
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
			Function_169(4, &bParam2, 0);
			if (uParam1 <= 1)
			{
				uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_166(Global_46760[0]);
			Function_166(Global_46838[1]);
			break;
		
		case 0x00000002:
			if (uParam1 <= 2)
			{
				uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_164(8, &bParam2, 4);
			EQUIP_ACCESSORY(&Global_54076, 0, 1);
			Function_166(Global_46816[0]);
			Function_156(0);
			Function_154(2, 1);
			Function_154(0, 1);
			Function_154(1, 1);
			break;
		
		case 0x00000003:
			Function_166(Global_46816[0]);
			break;
		
		case 0x00000004:
			Function_166(Global_46816[0]);
			Function_166(Global_46760[0]);
			Function_152(0, 1);
			Function_152(15, 1);
			Function_152(9, 1);
			Function_152(12, 1);
			Function_152(16, 1);
			Function_154(3, 1);
			break;
		
		case 0x00000005:
			Function_166(Global_46816[0]);
			break;
		
		case 0x00000006:
			Function_164(21, &bParam2, 4);
			Function_166(Global_46816[0]);
			Function_154(39, 1);
			break;
		
		case 0x00000007:
			Function_166(Global_46816[0]);
			break;
		
		case 0x00000016:
			Function_166(Global_46816[0]);
			break;
		
		case 0x00000008:
			if (!&bParam2)
			{
				if (IS_PS3() || Function_151())
				{
					if (!Function_150(4))
					{
						Function_140(4, 0, 0, 1, 0);
					}
				}
			}
			Function_166(Global_46760[0]);
			Function_166(Global_46760[10]);
			break;
		
		case 0x00000009:
			Function_166(Global_46760[0]);
			Function_166(Global_46816[2]);
			Function_139(&(Global_43791[Global_46816[2]]), 32768);
			Function_226(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_164(9, &bParam2, 4);
			Function_166(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_166(Global_46760[0]);
			Function_166(Global_46796[0]);
			Function_139(&(Global_43791[Global_46796[0]]), 32768);
			Function_226(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_166(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_166(Global_46760[0]);
			Function_166(Global_46760[1]);
			break;
		
		case 0x0000000F:
			Function_166(Global_46760[1]);
			Function_166(Global_46838[0]);
			break;
		
		case 0x00000010:
			Function_166(Global_46838[0]);
			Function_166(Global_46796[5]);
			break;
		
		case 0x00000011:
			Function_166(Global_46796[5]);
			Function_166(Global_46796[1]);
			break;
		
		case 0x0000000C:
			Function_164(21, &bParam2, 4);
			Function_166(Global_46760[4]);
			Function_166(Global_46796[4]);
			Function_138(&Global_119935, 0x2000000);
			Function_138(&Global_119935, 0x4000000);
			Function_138(&Global_119935, 4096);
			Function_138(&Global_119935, 8);
			Function_138(&Global_119935, 8388608);
			Function_138(&Global_119935, 524288);
			Function_138(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_166(Global_46760[4]);
			Function_166(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_226(&(Global_43791[Global_46760[4]]), 256);
			Function_166(Global_46760[4]);
			Function_166(Global_46796[0]);
			Function_139(&(Global_43791[Global_46796[0]]), 32768);
			Function_226(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_166(Global_46760[0]);
			Function_166(Global_46760[5]);
			Function_164(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_166(Global_46796[3]);
			Function_139(&(Global_43791[Global_46796[3]]), 32768);
			Function_226(&(Global_43791[Global_46796[3]]), 256);
			break;
		
		case 0x00000014:
			Function_164(9, &bParam2, 4);
			Function_166(Global_46816[1]);
			break;
		
		case 0x00000018:
			Function_139(&(Global_43791[Global_46838[1]]), 32768);
			Function_166(Global_46838[1]);
			break;
		
		case 0x00000019:
			Function_164(12, &bParam2, 4);
			Function_226(&(Global_43791[Global_46838[1]]), 256);
			Function_166(Global_46816[3]);
			Function_166(Global_46866[0]);
			Function_166(Global_46850[0]);
			Function_156(4);
			Function_152(13, 1);
			Function_152(1, 1);
			Function_152(18, 1);
			Function_154(34, 1);
			Function_154(44, 1);
			Function_154(47, 1);
			Global_39380[10] = 1;
			break;
		
		case 0x0000001E:
			Function_164(5, &bParam2, 4);
			if (uParam1 <= 4)
			{
				uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_166(Global_46866[0]);
			break;
		
		case 0x0000001F:
			Function_166(Global_46866[0]);
			break;
		
		case 0x00000020:
			Function_166(Global_46866[0]);
			Function_166(Global_46894[0]);
			break;
		
		case 0x00000021:
			Function_166(Global_46866[0]);
			break;
		
		case 0x0000001A:
			Function_166(Global_46850[0]);
			Function_166(Global_46866[0]);
			Function_166(Global_46866[1]);
			Function_166(Global_46894[2]);
			break;
		
		case 0x0000001B:
			Function_164(23, &bParam2, 3);
			Function_152(23, 1);
			Function_166(Global_46850[0]);
			Function_166(Global_46850[2]);
			Function_139(&(Global_43791[Global_46850[2]]), 32768);
			Function_226(&(Global_43791[Global_46850[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_164(19, &bParam2, 4);
			Function_166(Global_46850[0]);
			Function_166(Global_46894[3]);
			break;
		
		case 0x0000001D:
			Function_164(24, &bParam2, 3);
			Function_152(24, 1);
			Function_166(Global_46850[0]);
			break;
		
		case 0x00000024:
			Function_166(Global_46850[0]);
			Function_166(Global_46850[3]);
			break;
		
		case 0x00000022:
			Function_166(Global_46866[12]);
			Function_166(Global_46850[1]);
			break;
		
		case 0x00000023:
			Function_166(Global_46866[12]);
			Function_166(Global_46894[1]);
			break;
		
		case 0x00000025:
			Function_164(25, &bParam2, 10);
			Function_166(Global_46866[2]);
			break;
		
		case 0x00000026:
			Function_166(Global_46866[12]);
			break;
		
		case 0x00000027:
			Function_166(Global_46866[12]);
			break;
		
		case 0x00000028:
			Function_164(13, &bParam2, 4);
			Function_166(Global_46866[2]);
			Function_166(Global_46894[1]);
			break;
		
		case 0x00000029:
			if (!&bParam2)
			{
				if (!Function_150(8))
				{
					Function_140(8, 0, 0, 1, 0);
				}
			}
			Function_166(Global_46850[0]);
			Function_156(9);
			Function_152(7, 1);
			Function_152(11, 1);
			Function_152(3, 1);
			Function_152(20, 1);
			Function_154(57, 1);
			break;
		
		case 0x0000002A:
			Function_164(2, &bParam2, 4);
			Function_166(Global_46914[0]);
			Function_166(Global_46914[3]);
			break;
		
		case 0x0000002B:
			Function_166(Global_46914[0]);
			break;
		
		case 0x0000002C:
			Function_166(Global_46914[0]);
			Function_166(Global_46926[0]);
			break;
		
		case 0x0000002D:
			Function_166(Global_46914[0]);
			break;
		
		case 0x0000002E:
			Function_166(Global_46914[0]);
			break;
		
		case 0x0000002F:
			Function_166(Global_46914[0]);
			break;
		
		case 0x00000030:
			Function_164(17, &bParam2, 4);
			Function_166(Global_46926[0]);
			Function_166(Global_46914[0]);
			break;
		
		case 0x00000031:
			if (!&bParam2)
			{
				if (!Function_136(15))
				{
					Function_131(15, 0, 1);
				}
			}
			Function_91(2, 26);
			Function_226(&(Global_43791[Global_46914[1]]), 256);
			Function_156(11);
			Function_166(Global_46914[1]);
			Function_166(Global_46816[0]);
			break;
		
		case 0x00000032:
			Function_166(Global_46914[1]);
			break;
		
		case 0x00000033:
			Function_166(Global_46914[1]);
			Function_166(Global_46914[0]);
			break;
		
		case 0x00000034:
			Function_166(Global_46914[1]);
			break;
		
		case 0x00000035:
			Function_166(Global_46914[1]);
			break;
		
		case 0x00000036:
			Function_166(Global_46914[1]);
			break;
		
		case 0x00000037:
			Function_166(Global_46914[1]);
			break;
		
		case 0x00000038:
			Function_166(Global_46914[1]);
			break;
		
		case 0x00000039:
			Function_166(Global_46914[1]);
			Function_125(11);
			Function_156(12);
			Global_26200[1114].f_40 = 0;
			Function_154(56, 1);
			if (!&bParam2)
			{
				if (!Function_150(9))
				{
					Function_140(9, 0, 0, 0, 0);
				}
				if (!Function_150(10))
				{
					Function_140(10, 0, 0, 1, 0);
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

void Function_125(int iParam0) //Position: 0x751E / 29982
{
	var uVar0;
	
	if (!Function_81(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_130(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_130(&Global_26200[iParam014] + 88, 0);
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
			Function_126(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_126(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x769B / 30363
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
		Function_128(Function_129(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_128(Function_129(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_128(StackVal);
				Var1 = Function_128(StackVal);
				if (Function_127(StackVal, StackVal, Var1, Var3))
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

bool Function_127(struct<2> Param0, struct<2> Param2) //Position: 0x77A6 / 30630
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_128(int iParam0) //Position: 0x77D2 / 30674
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

var Function_129(vector3 vParam0) //Position: 0x7829 / 30761
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

void Function_130(var uParam0, int iParam1) //Position: 0x7877 / 30839
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

void Function_131(bool bParam0, bool bParam1, bool bParam2) //Position: 0x78D2 / 30930
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_136(bParam0))
	{
		if (!Function_150(bParam0))
		{
			Function_140(bParam0, 1, 0, 0, 1);
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
		Function_92(457, 1, 0, 0);
		Function_134(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_45(1);
				Function_44(1, 0);
			}
			else
			{
				Function_132();
			}
		}
	}
	return;
}

void Function_132() //Position: 0x7A73 / 31347
{
	return;
}

bool Function_133(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x7A79 / 31353
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

void Function_134(bool bParam0, int iParam1) //Position: 0x7B28 / 31528
{
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_135(int iParam0) //Position: 0x7B7D / 31613
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_136(int iParam0) //Position: 0x7B93 / 31635
{
	if (!Function_135(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_137(int iParam0, int iParam1) //Position: 0x7BE4 / 31716
{
	int iVar0;
	
	if (!Function_135(iParam0))
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

void Function_138(var uParam0, int iParam1) //Position: 0x7C11 / 31761
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_139(var uParam0, int iParam1) //Position: 0x7C22 / 31778
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_140(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7C33 / 31795
{
	char* cVar0[32];
	
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_149(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_150(bParam0))
	{
		Function_92(456, 1, 0, 0);
		Function_134(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_45(1);
				Function_44(1, 5);
			}
			else
			{
				Function_132();
			}
		}
		Function_143(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_142() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_142() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_141(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_13())
		{
			if (!Function_38(Global_119934, 2))
			{
				Function_35(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_141(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7D8F / 32143
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

bool Function_142() //Position: 0x7E1A / 32282
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_143(bool bParam0) //Position: 0x7E47 / 32327
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
			if (Function_147(bParam0, Function_148(bVar24)))
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
			if (Function_147(bParam0, Function_148(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_146(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_145(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_144(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_144(int iParam0) //Position: 0x7FF7 / 32759
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_135(iParam0))
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

void Function_145(char* cParam0, int iParam1) //Position: 0x8050 / 32848
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

var Function_146(int iParam0) //Position: 0x8075 / 32885
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_135(iParam0))
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

bool Function_147(bool bParam0, bool bParam1) //Position: 0x80CB / 32971
{
	int iVar0;
	
	if (!Function_135(bParam0))
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

bool Function_148(bool bParam0) //Position: 0x812A / 33066
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_149(int iParam0) //Position: 0x8136 / 33078
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_150(int iParam0) //Position: 0x8152 / 33106
{
	if (!Function_135(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_137(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_151() //Position: 0x81A4 / 33188
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_152(int iParam0, int iParam1) //Position: 0x81D4 / 33236
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_35(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x8249 / 33353
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_154(int iParam0, int iParam1) //Position: 0x82A6 / 33446
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_155(iParam0, iParam1);
	Function_35(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_155(int iParam0, int iParam1) //Position: 0x8319 / 33561
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_156(int iParam0) //Position: 0x8374 / 33652
{
	var uVar0;
	var uVar1;
	
	if (!Function_81(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_163(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_163(&Global_26200[iParam014] + 88, 0);
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
			Function_92(468, 1, 0, 0);
			Function_91(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_141("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_126(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_140(14, 1, 0, 0, 0);
				Function_157(14, 1, 0, 0, 0);
			}
			if (!Function_133(0, 0, 1, 1))
			{
				Function_45(1);
				Function_44(1, 6);
			}
			else
			{
				Function_132();
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
			Function_141("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_92(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_91(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_157(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x8634 / 34356
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_135(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_149(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_137(bParam0, 2))
	{
		Function_92(456, 1, 0, 0);
		Function_134(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_141(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_147(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_134(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_133(0, 0, 1, 1))
			{
				Function_45(1);
				Function_44(1, 0);
			}
			else
			{
				Function_132();
			}
		}
		Function_143(bParam0);
		if (StackVal && !Function_14(((((!Function_142() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_14((((Function_142() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_13())
		{
			if (!Function_38(Global_119934, 2))
			{
				Function_35(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_159();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_158(3, bParam1);
				break;
			
			case 0x00000005:
				Function_158(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_158(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_158(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_158(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_158(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_91(2, 24);
				break;
			
			case 0x00000003:
				Function_91(2, 25);
				break;
			
			case 0x0000000F:
				Function_91(2, 26);
				break;
			
			case 0x0000000D:
				Function_91(2, 27);
				break;
			
			case 0x0000000E:
				Function_91(2, 28);
				break;
			}
	}
}

void Function_158(int iParam0, bool bParam1) //Position: 0x88D3 / 35027
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

void Function_159() //Position: 0x8942 / 35138
{
	if (Function_135(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_162(Global_42827);
			(&Global_42827 + 8) = Function_160(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_162(Global_42827);
			*(&Global_42827 + 8) = Function_160(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_160(int iParam0, int iParam1) //Position: 0x89C2 / 35266
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
					if (Function_31(6, 0) || Function_31(12, 0))
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
					if (Function_161(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_31(5, 0))
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
					if (Function_161(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_161(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_161(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_161(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_31(26, 0))
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
					if (Function_161(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_161(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_161(27) && iVar16)
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
					if (Function_161(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_161(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_161(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_161(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_31(17, 0) && iVar13)
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
					if (Function_161(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_31(6, 0) && Function_161(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_161(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_31(9, 0) && Function_161(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_161(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_31(8, 0) && iVar17)
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
	if (Function_77(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_77(StackVal, vVar2))
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
	if (!Function_77(StackVal, vVar2))
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

int Function_161(int iParam0) //Position: 0x9625 / 38437
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_162(int iParam0) //Position: 0x963A / 38458
{
	int iVar0;
	int iVar1;
	
	if (!Function_135(iParam0))
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

void Function_163(bool bParam0, int iParam1) //Position: 0x9689 / 38537
{
	if (!IS_DOOR_VALID(&bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(&bParam0, "unlockMe", &iParam1);
	if (DECOR_CHECK_EXIST(&bParam0, "lockMe"))
	{
		DECOR_REMOVE(&bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(&bParam0))
	{
		SET_DOOR_LOCK(&bParam0, 0);
	}
	return;
}

void Function_164(bool bParam0, bool bParam1, int iParam2) //Position: 0x96E1 / 38625
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(&iParam2));
		if (Function_165(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(&Global_54076, bParam0))
			{
				Function_169(bParam0, 0, 0);
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

bool Function_165(int iParam0, int iParam1) //Position: 0x9754 / 38740
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_166(int iParam0) //Position: 0x9768 / 38760
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_168(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_139(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_92(473, 1, 0, 0);
		iVar0 = Function_167(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_92(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_92(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_92(476, 1, 0, 0);
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
		Function_91(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_91(7, 30);
	}
	if (Function_66(473) <= Function_67(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_167(int iParam0) //Position: 0x9859 / 39001
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_88(iParam0))
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

bool Function_168(var uParam0, int iParam1) //Position: 0x98B1 / 39089
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_169(bool bParam0, bool bParam1, int iParam2) //Position: 0x98CE / 39118
{
	if (!Function_170(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_53(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_53(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_53(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_170(int iParam0) //Position: 0x9928 / 39208
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_171(bool bParam0) //Position: 0x993A / 39226
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

void Function_172(struct<185> Param0) //Position: 0x996E / 39278
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
			Function_173(4, 0, 0);
		}
	}
	return;
}

void Function_173(int iParam0, var uParam1, int iParam2) //Position: 0x99D9 / 39385
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
		Function_174(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_174(int iParam0, int iParam1, bool bParam2) //Position: 0x9AC3 / 39619
{
	int iVar0;
	
	Function_176(iParam0);
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
	Function_175();
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

void Function_175() //Position: 0x9C42 / 40002
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_176(int iParam0) //Position: 0x9C4E / 40014
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

void Function_177(int iParam0, struct<2>[] Param1, vector3[] vParam2, var uParam3) //Position: 0x9C94 / 40084
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Function_139(&(Global_43791[iParam0]), 2048);
	iVar0 = 0;
	while (iVar0 <= Param1)
	{
		iVar1 = iVar0;
		if (Function_186(&(Param1[iVar02]), 1))
		{
			Function_183(&Param1, &vParam2, iVar1, 0);
		}
		Function_181(&Param1, &vParam2, iVar1, 0);
		Function_178(&(Param1[iVar02]), &(vParam2[iVar03]), 0);
		uVar2 = GET_TIME_OF_DAY();
		ADD_TIME(&uVar2, &uParam3, 0, false, 0);
		*(&Param1[iVar02] + 8) = &uVar2;
		iVar0++;
	}
}

void Function_178(int iParam0, int iParam1, int iParam2) //Position: 0x9D18 / 40216
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	if (&iParam2 == 0)
	{
		ADD_TIME(&iVar0, Function_180(Global_43790), 0, false, 0);
	}
	else
	{
		ADD_TIME(&iVar0, &iParam2, 0, false, 0);
	}
	*(&iParam0 + 8) = &iVar0;
	Function_179(&iParam0, 4);
	if (IS_PERS_CHAR_VALID(&iParam1 + 16))
	{
		if (IS_PERS_CHAR_ALIVE(&iParam1 + 16))
		{
			DESTROY_OBJECT(&iParam1 + 16);
		}
	}
	return;
}

void Function_179(int iParam0, int iParam1) //Position: 0x9D78 / 40312
{
	iParam0 = (iParam0 || iParam1);
	return;
}

int Function_180(int iParam0) //Position: 0x9D89 / 40329
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

void Function_181(struct<2>[] Param0, vector3[] vParam1, int iParam2, bool bParam3) //Position: 0x9DBD / 40381
{
	if (IS_PERS_CHAR_VALID(&vParam1[iParam23] + 16))
	{
		if (!IS_PERS_CHAR_ALIVE(&vParam1[iParam23] + 16))
		{
			if (GET_PERS_CHAR_DEATH_TIMESTAMP(&vParam1[iParam23] + 16) > GET_CURRENT_GAME_TIME())
			{
				Function_179(&(Param0[iParam22]), 4);
				*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
				ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_182(Global_43790), false, 0);
			}
			else
			{
				LOG_ERROR("We have a perschar that is dead, but his deadstamp is later than the current time.");
			}
		}
		if (!Function_186(&(Param0[iParam22]), 1))
		{
			DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&vParam1[iParam23] + 16, "Persistent_Char_Brain"));
			RELEASE_PERS_CHAR(&vParam1[iParam23] + 16);
			(&vParam1[iParam23] + 16) = "";
		}
	}
	else if (!Function_186(&(Param0[iParam22]), 1) && !&bParam3)
	{
		Function_179(&(Param0[iParam22]), 4);
		*(&Param0[iParam22] + 8) = GET_TIME_OF_DAY();
		ADD_TIME(&Param0[iParam22] + 8, Function_180(Global_43790), Function_182(Global_43790), false, 0);
	}
}

int Function_182(int iParam0) //Position: 0x9F23 / 40739
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

void Function_183(struct<2>[] Param0, vector3[] vParam1, var uParam2, bool bParam3) //Position: 0x9F4E / 40782
{
	int iVar0;
	
	iVar0 = uParam2;
	if (!iVar0 > Param0 && iVar0 <= 0)
	{
		return;
	}
	if (!Function_186(&(Param0[iVar02]), 1))
	{
		return;
	}
	if (!Function_186(&(Param0[iVar02]), 2))
	{
		return;
	}
	if (Function_186(&(Param0[iVar02]), 8))
	{
		STREAMING_EVICT_ACTOR(vParam1[iVar03], 4294967295);
		Function_185(&(Param0[iVar02]), 8);
	}
	Function_185(&(Param0[iVar02]), 1);
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return;
	}
	Function_184(&vParam1[iVar03] + 16);
	if (&bParam3)
	{
		Function_181(&Param0, &vParam1, uParam2, 0);
	}
}

int Function_184(int iParam0) //Position: 0x9FF6 / 40950
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

void Function_185(var uParam0, int iParam1) //Position: 0xA09F / 41119
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_186(int iParam0, int iParam1) //Position: 0xA0B9 / 41145
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_187() //Position: 0xA0D6 / 41174
{
	Function_190();
	Function_189();
	Function_188();
	return;
}

void Function_188() //Position: 0xA0E5 / 41189
{
	Function_191(&iLocal_17 + 8);
	Function_191(&iLocal_17 + 32);
	Function_191(&iLocal_17 + 168);
	RELEASE_LAYOUT_REF(&iLocal_17);
	return;
}

void Function_189() //Position: 0xA106 / 41222
{
	Function_191(&iLocal_17 + 168);
	return;
}

void Function_190() //Position: 0xA113 / 41235
{
	Function_191(&iLocal_17 + 32);
	return;
}

void Function_191(int iParam0) //Position: 0xA120 / 41248
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_192(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_192(struct<2>[] Param0, int iParam1) //Position: 0xA148 / 41288
{
	if (Function_194(&(Param0[iParam12]), 4))
	{
		if (Function_194(&(Param0[iParam12]), 1))
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
			Function_193(&(Param0[iParam12]), 1);
			Function_193(&(Param0[iParam12]), 2);
			Function_193(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_193(struct<13> Param0) //Position: 0xA293 / 41619
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_194(struct<13> Param0) //Position: 0xA2B0 / 41648
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && bParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0xA2CE / 41678
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_224());
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
	Function_223();
	CLEAR_PRINTED_OBJECTIVE();
	Function_222();
	Function_220(0);
	Function_219();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_218();
	Function_217();
	Function_223();
	ENABLE_JOURNAL_REPLAY(1);
	Function_216(1);
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
		Function_215(&Global_54076);
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
	Function_212(Global_42825);
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
	Function_211();
	Function_210(1178687);
	Function_208(33039);
	Function_207(0x218003f);
	Function_206(4194560);
	Function_205();
	Function_204();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_201(0, 1, 1);
	}
	else
	{
		Function_201(0, 1, 1);
	}
	Function_200();
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
	Function_196();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_41(&Global_21369 + 72 + 32, 16);
}

void Function_196() //Position: 0xA4DA / 42202
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
		if (Function_199() > 3)
		{
			iVar0 *= 2;
		}
		Function_197(StackVal, 0, 0, Function_5(iVar0), 0);
	}
	return;
}

void Function_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA531 / 42289
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_198(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_198(bool bParam0) //Position: 0xA581 / 42369
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_199() //Position: 0xA5AA / 42410
{
	return Global_21369.f_248;
}

void Function_200() //Position: 0xA5B5 / 42421
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_226(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_201(int iParam0, bool bParam1, int iParam2) //Position: 0xA5DF / 42463
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
		if (Function_88(Global_43789))
		{
			Function_139(&(Global_43791[Global_43789]), 131072);
			Function_226(&(Global_43791[Global_43789]), 2097152);
			Function_202(Global_43789);
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
				if (Function_168(&(Global_43791[iVar0]), 4) || Function_168(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_226(&(Global_43791[iVar0]), 2097155);
					Function_139(&(Global_43791[iVar0]), 262144);
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

void Function_202(int iParam0) //Position: 0xA6EB / 42731
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_203())
			{
				return;
			}
		}
		if (!Function_168(&(Global_43791[iParam0]), 2048))
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

bool Function_203() //Position: 0xA76A / 42858
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_168(&(Global_43791[iVar0]), 4) || Function_168(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_204() //Position: 0xA7D3 / 42963
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

void Function_205() //Position: 0xA7F9 / 43001
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

void Function_206(int iParam0) //Position: 0xA81F / 43039
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_207(int iParam0) //Position: 0xA83C / 43068
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_208(int iParam0) //Position: 0xA84F / 43087
{
	Function_209(&Global_43580, iParam0);
	return;
}

void Function_209(var uParam0, int iParam1) //Position: 0xA85D / 43101
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_210(bool bParam0) //Position: 0xA87C / 43132
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_211() //Position: 0xA8A9 / 43177
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

void Function_212(int iParam0) //Position: 0xA921 / 43297
{
	int iVar0;
	int iVar1;
	
	if (!Function_135(iParam0))
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
		Function_213(78, 1, 1);
		if (!Function_38(Global_119935, 64))
		{
			Function_35(&Global_54076, 64, 2, 0);
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

int Function_213(bool bParam0, bool bParam1, int iParam2) //Position: 0xAA57 / 43607
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_214(bParam0), Function_53()) == 0)
		{
			ADD_ITEM(Function_214(bParam0), Function_53(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_214(bParam0), Function_53(), &iParam2);
	return 1;
}

var Function_214(bool bParam0) //Position: 0xAAA5 / 43685
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

void Function_215(int iParam0) //Position: 0xAB99 / 43929
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

void Function_216(bool bParam0) //Position: 0xAC1C / 44060
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

void Function_217() //Position: 0xAC93 / 44179
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

void Function_218() //Position: 0xACD7 / 44247
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

void Function_219() //Position: 0xAD1B / 44315
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_220(int iParam0) //Position: 0xAD31 / 44337
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_221())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_221() //Position: 0xAD71 / 44401
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

void Function_222() //Position: 0xAD96 / 44438
{
	Global_15862 = 0.0f;
	return;
}

void Function_223() //Position: 0xADA0 / 44448
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

int Function_224() //Position: 0xADCB / 44491
{
	var uVar0;
	
	uVar0 = Function_53();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_225() //Position: 0xADE8 / 44520
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

void Function_226(var uParam0, int iParam1) //Position: 0xAF1A / 44826
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_227(int iParam0) //Position: 0xAF34 / 44852
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

void Function_228(int iParam0, bool bParam1, bool bParam2) //Position: 0xAF9C / 44956
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
						Function_27(&uVar1);
					}
				}
				Function_229(&uVar0);
			}
		}
	}
	return;
}

void Function_229(bool bParam0) //Position: 0xB0AB / 45227
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

void Function_230(bool bParam0) //Position: 0xB0DE / 45278
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

void Function_231() //Position: 0xB129 / 45353
{
	var uVar0[12];
	int iVar13;
	
	if (Function_277())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		uVar0[3] = "Stage 02 - Mansion Mayhem";
		uVar0[4] = "Last Stage";
		uVar0[5] = "Clear Baddies";
		uVar0[6] = "Spawn/Kill CrazyMiners";
		uVar0[7] = "Kill House Guys";
		uVar0[8] = "Disable Town Fight";
		uVar0[9] = "Debug Front Door";
		uVar0[10] = "Setup Grave";
		uVar0[11] = "Toggle Child Sector";
		iVar13 = Function_263(&uLocal_583, &uVar0, &Local_554 + 4, GET_DEBUG_PADINDEX(), 0);
		if (Function_262(&iVar13, &iLocal_566, &iLocal_567, &iLocal_568))
		{
			Function_255();
			Function_254();
		}
		if (iVar13 == 0)
		{
			Function_255();
			Function_254();
			Function_253(&bLocal_580, 8);
		}
		else if (iVar13 == 1)
		{
			Function_255();
			Function_254();
			Function_248(iLocal_566);
			Function_244(StackVal, 5, &bLocal_582, &iLocal_566, Function_251(iLocal_566), Function_248(iLocal_566), 0);
		}
		else if (iVar13 == 2)
		{
			Function_255();
			Function_254();
			Function_239(&bLocal_581, 4);
		}
		else if (iVar13 == 3)
		{
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_237(&iLocal_654);
			iLocal_566 = 1;
			iLocal_567 = 0;
			iLocal_568 = 1000;
		}
		else if (iVar13 == 4)
		{
			Function_255();
			Function_254();
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
			Function_237(&iLocal_654);
			iLocal_566 = 101;
			iLocal_567 = 0;
			iLocal_568 = 1000;
		}
		else if (iVar13 == 5)
		{
			Function_255();
			Function_254();
			if (SQUAD_IS_VALID(&bLocal_708))
			{
				Function_230(&bLocal_708);
			}
		}
		else if (iVar13 == 6)
		{
			Function_255();
			Function_254();
			if (!SQUAD_IS_VALID(&iLocal_17 + 840))
			{
				Function_236();
				Function_235(&iLocal_17 + 840, 0);
			}
			else
			{
				Function_234(&iLocal_17 + 840);
			}
		}
		else if (iVar13 == 7)
		{
			if (SQUAD_IS_VALID(&iLocal_17 + 680))
			{
				Function_230(&iLocal_17 + 680);
			}
		}
		else if (iVar13 == 8)
		{
			Function_255();
			Function_254();
			iLocal_753 = 1;
		}
		else if (iVar13 == 9)
		{
			Function_255();
			Function_254();
		}
		else if (iVar13 == 10)
		{
			Function_255();
			Function_254();
			Function_232();
		}
		else if (iVar13 == 11)
		{
			if (!iLocal_770)
			{
				ENABLE_CHILD_SECTOR("sp_grave03x");
				iLocal_770 = 1;
			}
			else
			{
				DISABLE_CHILD_SECTOR("sp_grave03x");
				iLocal_770 = 0;
			}
		}
	}
	return;
}

bool Function_232() //Position: 0xB418 / 46104
{
	if (!IS_OBJECT_VALID(&uLocal_716))
	{
		uLocal_716 = Function_233(Global_46796[0], "tumbleweed", "grave", 13);
	}
	else if (IS_PROP_STREAMED_IN(&uLocal_716))
	{
		if (!GRAVE_IS_DUG_UP(&uLocal_716))
		{
			GRAVE_SET_DUG_UP(&uLocal_716, 1);
		}
		return 1;
	}
	return 0;
}

var Function_233(int iParam0, var uParam1, char* cParam2) //Position: 0xB473 / 46195
{
	var uVar0;
	char* cVar1[8];
	char* cVar3[32];
	var uVar11;
	
	if (!Function_88(iParam0))
	{
		return "";
	}
	uVar0 = CREATE_WORLD_SECTOR(FIND_NAMED_LAYOUT("formations"), &uParam1);
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

void Function_234(int iParam0) //Position: 0xB54A / 46410
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

void Function_235(var uParam0, bool bParam1) //Position: 0xB598 / 46488
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SQUAD_SET_UPDATE_PRIORTY was passed an invalid squad");
	}
	return;
}

void Function_236() //Position: 0xB627 / 46631
{
	(&iLocal_17 + 840) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "BaddieTest"));
	*(&iLocal_17 + 688[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nCM_Hard03", 515, Vector(-3881,944f, 31,34614f, 2916,037f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[02], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[02], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[02], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[02], 0);
	*(&iLocal_17 + 688[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CM_Med03", 510, Vector(-3883,472f, 31,17933f, 2916,01f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[12], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[12], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[12], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[12], 0);
	*(&iLocal_17 + 688[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nCM_Easy03", 507, Vector(-3885,322f, 31,12169f, 2916.0f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[22], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[22], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[22], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[22], 0);
	*(&iLocal_17 + 688[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nCM_Hard02", 514, Vector(-3881,944f, 31,34614f, 2918,587f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[32], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[32], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[32], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[32], 0);
	*(&iLocal_17 + 688[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CM_Med02", 509, Vector(-3883,472f, 31,17933f, 2918,56f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[42], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[42], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[42], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[42], 0);
	*(&iLocal_17 + 688[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nCM_Easy02", 506, Vector(-3885,322f, 31,12169f, 2918,55f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[52], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[52], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[52], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[52], 0);
	*(&iLocal_17 + 688[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nCM_Hard01", 513, Vector(-3881,944f, 31,34614f, 2920,973f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[62], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[62], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[62], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[62], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[62], 0);
	*(&iLocal_17 + 688[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "CM_Med01", 508, Vector(-3883,472f, 31,17933f, 2920,946f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[72], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[72], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[72], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[72], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[72], 0);
	*(&iLocal_17 + 688[82]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nCM_Easy01", 505, Vector(-3885,322f, 31,12169f, 2920,936f), Vector(0.0f, 139.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 688[82], &iLocal_17 + 840);
	TASK_STAND_STILL(&iLocal_17 + 688[82], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 688[82], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 688[82], 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 688[82], 0);
	return;
}

void Function_237(int iParam0) //Position: 0xBABA / 47802
{
	Function_238(&iParam0, 0.0f);
	return;
}

void Function_238(vector3 vParam0) //Position: 0xBAC7 / 47815
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_80(&vParam0, 1);
	Function_41(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_239(bool bParam0, int iParam1) //Position: 0xBAEC / 47852
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(&iParam1);
	bParam0 = 1;
	return;
}

void Function_240(int iParam0) //Position: 0xBB11 / 47889
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_243("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_242(2) || Function_242(8)) || Function_242(9)) || Function_242(10))
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
		Function_243("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_243("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_243("");
	}
	else if (iParam0 == 8)
	{
		Function_241();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_241();
	}
	return;
}

void Function_241() //Position: 0xBC08 / 48136
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_242(int iParam0) //Position: 0xBC14 / 48148
{
	int iVar0;
	
	if (!Function_33(iParam0))
	{
		return 0;
	}
	iVar0 = Function_32(iParam0);
	if (!Function_20(Function_32(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_243(char* cParam0) //Position: 0xBC4A / 48202
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_244(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0xBCB6 / 48310
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_245(StackVal, Param4, uParam3, &iParam6);
		Function_240(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_245(struct<2> Param0, var uParam2, var uParam3) //Position: 0xBCF7 / 48375
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_247(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_246(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_246(int iParam0) //Position: 0xBD79 / 48505
{
	if (!Function_88(iParam0))
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

var Function_247(struct<2> Param0, bool bParam2) //Position: 0xC233 / 49715
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

struct<8> Function_248(int iParam0) //Position: 0xC29F / 49823
{
	Function_249(iParam0 + 1);
	return StackVal, Function_249(iParam0 + 1);
}

struct<8> Function_249(int iParam0) //Position: 0xC2AC / 49836
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_250(&iLocal_17 + 1376[0]);
			return StackVal, Function_250(&iLocal_17 + 1376[0]);
			break;
		
		case 0x00000001:
			Function_250(&iLocal_17 + 1600[0]);
			return StackVal, Function_250(&iLocal_17 + 1600[0]);
			break;
		
		default:
			Function_250(&iLocal_17 + 1640[0]);
			return StackVal, Function_250(&iLocal_17 + 1640[0]);
			break;
	}
	Function_250(&iLocal_17 + 1640[0]);
	return StackVal, Function_250(&iLocal_17 + 1640[0]);
}

struct<8> Function_250(bool bParam0) //Position: 0xC301 / 49921
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

int Function_251(int iParam0) //Position: 0xC32A / 49962
{
	return Function_252(iParam0 + 1);
}

int Function_252(int iParam0) //Position: 0xC337 / 49975
{
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_17 + 1376[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_17 + 1600[0]);
			break;
		
		case 0x00000065:
			return GET_OBJECT_HEADING(&iLocal_17 + 1640[0]);
			break;
	}
	return GET_OBJECT_HEADING(&iLocal_17 + 1640[0]);
}

void Function_253(bool bParam0, int iParam1) //Position: 0xC392 / 50066
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_240(&iParam1);
	bParam0 = 1;
	return;
}

void Function_254() //Position: 0xC3B7 / 50103
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_255() //Position: 0xC3CC / 50124
{
	Function_257();
	Function_256(10, 3);
	return;
}

void Function_256(int iParam0, int iParam1) //Position: 0xC3DB / 50139
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

void Function_257() //Position: 0xC528 / 50472
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_261())
	{
		Function_260(10, 3);
	}
	else
	{
		Function_258();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_53(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_53());
	UI_POP("nDebugMenu");
	return;
}

void Function_258() //Position: 0xC573 / 50547
{
	Function_259(25, 2);
	return;
}

void Function_259(int iParam0, int iParam1) //Position: 0xC57F / 50559
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

void Function_260(int iParam0, int iParam1) //Position: 0xC7AB / 51115
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

bool Function_261() //Position: 0xC8F8 / 51448
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

bool Function_262(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xC960 / 51552
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_255();
			Function_254();
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
		Function_243("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_263(struct<17> Param0) //Position: 0xCA0F / 51727
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_276(&Var12, &Var0);
	uVar15 = Function_275(uParam1, &Var12);
	Function_274(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_273(&Param0, uVar15);
	Function_271(StackVal, &Param0, Var12.f_12);
	Function_269(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_268(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_265(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_264(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_264(int iParam0, int iParam1, int iParam2) //Position: 0xCB03 / 51971
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

bool Function_265(struct<17> Param0) //Position: 0xCB63 / 52067
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
				Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_267(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_264(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_266(Param1.f_64);
	}
	else
	{
		Function_266(Param1.f_64);
	}
	return 0;
}

void Function_266(bool bParam0) //Position: 0xCCF6 / 52470
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

void Function_267(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xCD34 / 52532
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

var Function_268(int iParam0, struct<21> Param1) //Position: 0xCDEA / 52714
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_269(vector3 vParam0) //Position: 0xCE11 / 52753
{
	switch (Function_270())
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

int Function_270() //Position: 0xCEBD / 52925
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

void Function_271(vector3 vParam0) //Position: 0xCEF9 / 52985
{
	switch (Function_272(&vParam0))
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

int Function_272(bool bParam0) //Position: 0xCFA2 / 53154
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_80(&bParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(bParam0, 0x40000000))
		{
			Function_80(&bParam0, 0x40000000);
			return 2;
		}
	}
	Function_41(&bParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_80(&bParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(bParam0, 0x20000000))
		{
			Function_80(&bParam0, 0x20000000);
			return 4;
		}
	}
	Function_41(&bParam0, 0x20000000);
	return 0;
}

var Function_273(struct<21> Param0) //Position: 0xD0C2 / 53442
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

void Function_274(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xD27C / 53884
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

var Function_275(int iParam0, struct<13> Param1) //Position: 0xD318 / 54040
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_276(struct<17> Param0) //Position: 0xD334 / 54068
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

bool Function_277() //Position: 0xD38E / 54158
{
	return Global_47307;
}

bool Function_278() //Position: 0xD397 / 54167
{
	if (IS_EXITFLAG_SET())
	{
		Function_248(iLocal_566);
		Function_244(StackVal, 4, &bLocal_582, &iLocal_566, Function_251(iLocal_566), Function_248(iLocal_566), 0);
		return 0;
	}
	Function_527(StackVal, StackVal, StackVal, StackVal, StackVal, Local_554, iLocal_566, iLocal_567, &bLocal_581, &bLocal_580, &bLocal_582);
	if (iLocal_566 == 99 && iLocal_566 == 100)
	{
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_248(iLocal_566);
			Function_244(StackVal, 1, &bLocal_582, &iLocal_566, Function_251(iLocal_566), Function_248(iLocal_566), 0);
			return 1;
		}
		if (Function_526(2048))
		{
			Function_248(iLocal_566);
			Function_244(StackVal, 3, &bLocal_582, &iLocal_566, Function_251(iLocal_566), Function_248(iLocal_566), 0);
			return 1;
		}
		if (Function_506(&Local_849, &uLocal_795, &uLocal_881, &uLocal_652, uLocal_794))
		{
			if (Function_504(&uLocal_881))
			{
				Function_248(iLocal_566);
				Function_244(StackVal, 5, &bLocal_582, &iLocal_566, Function_251(iLocal_566), Function_248(iLocal_566), 0);
				return 1;
			}
		}
		Function_503();
	}
	switch (iLocal_566)
	{
		case 0x00000063:
			Function_479();
			break;
		
		case 0x00000000:
			Function_428();
			break;
		
		case 0x00000001:
			Function_356();
			break;
		
		case 0x00000065:
			Function_281();
			break;
		
		case 0x00000064:
			if (Function_280(&bLocal_582))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_279(&iLocal_566, &iLocal_567, &iLocal_568))
			{
				return 0;
			}
			break;
	}
	if (bLocal_581)
	{
		Function_239(&bLocal_581, 4);
		Function_1();
		return 0;
	}
	if (bLocal_580)
	{
		if (!iLocal_755)
		{
			Function_253(&bLocal_580, 8);
			Function_1();
			iLocal_755 = 1;
		}
		else if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_690)))
		{
			Local_724 = Vector(-4094,684f, 40,49754f, 2948,147f);
			iLocal_690 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("sit_headinhands_n_any", &Local_724, 5.0f, 0));
		}
		else
		{
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			TERMINATE_THIS_SCRIPT();
			return 0;
		}
	}
	if (bLocal_582 && iLocal_566 == 100)
	{
		Function_248(iLocal_566);
		Function_244(StackVal, 5, &bLocal_582, &iLocal_566, Function_251(iLocal_566), Function_248(iLocal_566), 0);
	}
	return 1;
}

bool Function_279(var uParam0, var uParam1, int iParam2) //Position: 0xD57D / 54653
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

bool Function_280(int iParam0) //Position: 0xD5C6 / 54726
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_281() //Position: 0xD5DA / 54746
{
	switch (iLocal_567)
	{
		case 0x00000000:
			Function_352(0);
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			SET_ACTOR_HEALTH(&bLocal_591, GET_ACTOR_MAX_HEALTH(&bLocal_591));
			CLEAR_ACTOR_MIN_SPEED(&bLocal_591);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_349();
			bLocal_595 = Global_46736[1];
			if (!Function_348(bLocal_595))
			{
				Function_347(&Local_554);
			}
			Function_237(&iLocal_654);
			iLocal_567 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_348(bLocal_595) || bLocal_595 != 4294967295))
			{
				Function_237(&iLocal_654);
				iLocal_567 = 3;
			}
			break;
		
		case 0x00000003:
			if (Function_282("$/cutscene/Grave03_CS03/Grave03_CS03", &iLocal_568, &Local_554, &iLocal_566, 74586, 74112, 74058, 73537, 73271, 58129, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_237(&iLocal_654);
				iLocal_567 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_580 = true;
			}
			break;
	}
	return;
}

bool Function_282(int iParam0, int iParam1, struct<41> Param2) //Position: 0xD703 / 55043
{
	if (!&bParam15)
	{
		Function_295(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_294(&Param2) || Param2.f_40 < 1))
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
				Function_237(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_293())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_292(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_237(&iParam1 + 4);
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
					Function_292(1);
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
						Function_287(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_292(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_237(&iParam1 + 4);
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
						Function_286(1.0f);
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
						Function_284();
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
					Function_283(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_294(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_283(var uParam0, bool bParam1) //Position: 0xDD65 / 56677
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
		Function_211();
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

void Function_284() //Position: 0xDE34 / 56884
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_285();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_285() //Position: 0xDE79 / 56953
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_286(bool bParam0) //Position: 0xDE8B / 56971
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

void Function_287(var uParam0, int iParam1) //Position: 0xDEA8 / 57000
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_57(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_288(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_288(int iParam0) //Position: 0xDF3A / 57146
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

float Function_289(vector3 vParam0) //Position: 0xDF6B / 57195
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

bool Function_290(int iParam0) //Position: 0xE038 / 57400
{
	return Function_14(iParam0, 2);
}

bool Function_291(int iParam0) //Position: 0xE046 / 57414
{
	return Function_14(iParam0, 1);
}

int Function_292(bool bParam0) //Position: 0xE054 / 57428
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

bool Function_293() //Position: 0xE117 / 57623
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

bool Function_294(struct<37> Param0) //Position: 0xE154 / 57684
{
	return Param0.f_36;
}

void Function_295(var uParam0, int iParam1) //Position: 0xE15F / 57695
{
	Function_296(&uParam0, &iParam1, 0);
	return;
}

void Function_296(var uParam0, bool bParam1, bool bParam2) //Position: 0xE16F / 57711
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
			Function_297(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_92(20, 1, 0, 0);
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
							Function_297(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_92(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

void Function_297(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xE2E7 / 58087
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

int Function_298() //Position: 0xE311 / 58129
{
	switch (iLocal_566)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_17))
			{
				if (Function_301())
				{
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				return 1;
			}
			break;
		
		case 0x00000065:
			if (!IS_LAYOUTREF_VALID(&iLocal_17))
			{
				if (Function_301())
				{
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

var Function_299() //Position: 0xE38D / 58253
{
	var uVar0;
	
	Function_300(4, 1);
	uVar0 = &uVar0;
	iLocal_17 = CREATE_LAYOUT("Grave03_layout");
	*(&iLocal_17 + 888) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "battleZones_set");
	*(&iLocal_17 + 848[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "bz_1", 2,802597E-45f, Vector(-4079,674f, 38,69606f, 2954,757f), Vector(0.0f, -27,06444f, 0.0f), Vector(18,89509f, 18,26869f, 38,56414f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 888, &iLocal_17 + 848[0]);
	*(&iLocal_17 + 848[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "bz_2", 2,802597E-45f, Vector(-4064,686f, 32,41863f, 2959,029f), Vector(0.0f, -3,625995f, 0.0f), Vector(22,85352f, 18,26869f, 56,63118f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 888, &iLocal_17 + 848[1]);
	*(&iLocal_17 + 848[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "bz_3", 2,802597E-45f, Vector(-4039,213f, 29,53448f, 2952,684f), Vector(0.0f, 2,149521f, 0.0f), Vector(24,59064f, 18,26869f, 59,21653f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 888, &iLocal_17 + 848[2]);
	*(&iLocal_17 + 848[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "bz_4", 2,802597E-45f, Vector(-3999,148f, 28,32094f, 2936,556f), Vector(0.0f, 5,313835f, 0.0f), Vector(35,31941f, 15,8791f, 60,59407f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 888, &iLocal_17 + 848[3]);
	*(&iLocal_17 + 1032) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "MansionVols_set");
	*(&iLocal_17 + 896[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "inBasement_1", 2,802597E-45f, Vector(-4101,271f, 35,45918f, 2943,609f), Vector(0.0f, -33,37211f, 0.0f), Vector(5,939363f, 3,437768f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[0]);
	*(&iLocal_17 + 896[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "inBasement_2", 2,802597E-45f, Vector(-4096,751f, 35,3269f, 2936,653f), Vector(0.0f, -33,37211f, 0.0f), Vector(5,939363f, 3,437768f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[1]);
	*(&iLocal_17 + 896[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "player1stFloor", 2,802597E-45f, Vector(-4092,961f, 38,76855f, 2941,531f), Vector(0.0f, -30,67736f, 0.0f), Vector(17,08137f, 3,38489f, 2,539254f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[2]);
	*(&iLocal_17 + 896[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "player2ndFloor_L", 2,802597E-45f, Vector(-4093,41f, 41,02037f, 2930,515f), Vector(0.0f, -119,6774f, 0.0f), Vector(2,47336f, 3,114333f, 0,4874636f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[3]);
	*(&iLocal_17 + 896[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "player2ndFloor_R", 2,802597E-45f, Vector(-4088,012f, 40,75969f, 2933,606f), Vector(0.0f, -119,6774f, 0.0f), Vector(2,47336f, 3,114333f, 0,4874636f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[4]);
	*(&iLocal_17 + 896[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "player2ndFloor_L2", 2,802597E-45f, Vector(-4097,109f, 40,46792f, 2942,302f), Vector(0.0f, -119,6774f, 0.0f), Vector(2,47336f, 3,114333f, 0,4874636f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[5]);
	*(&iLocal_17 + 896[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "thruWindow", 2,802597E-45f, Vector(-4086,134f, 38,21935f, 2945,732f), Vector(0.0f, 59,62789f, 0.0f), Vector(21,06367f, 3,437768f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[6]);
	*(&iLocal_17 + 896[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "treasureBounds", 2,802597E-45f, Vector(-4098,651f, 41,06268f, 2948,472f), Vector(0.0f, 59,62789f, 0.0f), Vector(1,085408f, 0,9626604f, 0,6179027f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[7]);
	*(&iLocal_17 + 896[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "MansionShell", 2,802597E-45f, Vector(-4093,273f, 38,21935f, 2941,549f), Vector(0.0f, 59,62789f, 0.0f), Vector(31,29905f, 21,50578f, 25,05025f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[8]);
	*(&iLocal_17 + 896[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "basementSteps", 2,802597E-45f, Vector(-4102,821f, 36,19485f, 2946,899f), Vector(0.0f, -29,37211f, 0.0f), Vector(2,461056f, 6,282485f, 2,723439f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[9]);
	*(&iLocal_17 + 896[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nfrontDoor", 2,802597E-45f, Vector(-4080,492f, 36,4991f, 2950,575f), Vector(0.0f, -29,37211f, 0.0f), Vector(2,173054f, 3,713893f, 3,125601f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[10]);
	*(&iLocal_17 + 896[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "upBasement", 2,802597E-45f, Vector(-4093,524f, 37,86659f, 2948,144f), Vector(0.0f, -29,37211f, 0.0f), Vector(2,069867f, 3,572973f, 2,723439f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[11]);
	*(&iLocal_17 + 896[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "baddieFirstFl", 2,802597E-45f, Vector(-4090,645f, 40,45509f, 2937,626f), Vector(0.0f, -30,67736f, 0.0f), Vector(17,08137f, 6,848712f, 11,91126f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[12]);
	*(&iLocal_17 + 896[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "alertDoorway", 2,802597E-45f, Vector(-4085,498f, 42,12447f, 2942,585f), Vector(0.0f, -119,3721f, 0.0f), Vector(14,83467f, 3,572973f, 4,406552f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[13]);
	*(&iLocal_17 + 896[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "updateBasement", 2,802597E-45f, Vector(-4091,687f, 34,17862f, 2942,1f), Vector(0.0f, -121,3721f, 0.0f), Vector(21,80067f, 5,401567f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[14]);
	*(&iLocal_17 + 896[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "doorBlocker", 2,802597E-45f, Vector(-4085,893f, 38,36665f, 2945,579f), Vector(0.0f, -30,16089f, 0.0f), Vector(0,9494758f, 2,524778f, 2,267413f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1032, &iLocal_17 + 896[15]);
	*(&iLocal_17 + 1064) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "SethVols_set");
	*(&iLocal_17 + 1040[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "SethStage02", 2,802597E-45f, Vector(-4041,513f, 28,23527f, 2915,95f), Vector(0.0f, 9.0f, 0.0f), Vector(43,73191f, 14,74309f, 347,7109f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1064, &iLocal_17 + 1040[0]);
	*(&iLocal_17 + 1040[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "SethStage03", 2,802597E-45f, Vector(-4092,21f, 30,98361f, 2923,98f), Vector(0.0f, 9.0f, 0.0f), Vector(57,49835f, 16,754f, 347,7109f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1064, &iLocal_17 + 1040[1]);
	*(&iLocal_17 + 1104) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "CutsceneVols_set");
	*(&iLocal_17 + 1072[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "IntroCS", 2,802597E-45f, Vector(-3906,577f, 36,69199f, 2913,343f), Vector(0.0f, 60,1983f, 0.0f), Vector(37,66953f, 15,47603f, 53,78489f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1104, &iLocal_17 + 1072[0]);
	*(&iLocal_17 + 1072[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "FinalCS", 2,802597E-45f, Vector(-4093,32f, 40,03424f, 2949,075f), Vector(0.0f, 60,1983f, 0.0f), Vector(12,03339f, 15,47603f, 12,8734f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1104, &iLocal_17 + 1072[1]);
	*(&iLocal_17 + 1072[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nCorpseVol", 2,802597E-45f, Vector(-4098,564f, 41,63768f, 2948,597f), Vector(0.0f, 60,1983f, 0.0f), Vector(1,942563f, 2,459336f, 1,329349f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1104, &iLocal_17 + 1072[2]);
	*(&iLocal_17 + 1112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "S1_Fight", 2,802597E-45f, Vector(-3914,37f, 31,12174f, 2909,676f), Vector(0.0f, -72.0f, 0.0f), Vector(79,37913f, 6,580472f, 1,25855f));
	*(&iLocal_17 + 1120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nnearHouse", 2,802597E-45f, Vector(-4092,195f, 41,42531f, 2941,904f), Vector(0.0f, -30,67736f, 0.0f), Vector(27,32982f, 13,9054f, 28,82103f));
	*(&iLocal_17 + 1128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nearFrontDoor", 2,802597E-45f, Vector(-4084,753f, 38,36665f, 2946,369f), Vector(0.0f, -30,16089f, 0.0f), Vector(6,507657f, 2,524778f, 2,267413f));
	*(&iLocal_17 + 1136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "inBasement_door", 2,802597E-45f, Vector(-4101,55f, 34,95256f, 2944,765f), Vector(0.0f, -33,37211f, 0.0f), Vector(1,142369f, 2,347216f, 1.0f));
	*(&iLocal_17 + 1144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "napproachL", 2,802597E-45f, Vector(-3936,923f, 30,79538f, 3026,882f), Vector(0.0f, 17,93869f, 0.0f), Vector(1.0f, 14,74309f, 239,3237f));
	*(&iLocal_17 + 1152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "napproachR", 2,802597E-45f, Vector(-4020,83f, 30,41927f, 2804,186f), Vector(0.0f, 24,21904f, 0.0f), Vector(1.0f, 14,74309f, 239,3237f));
	*(&iLocal_17 + 1160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nearBoss", 2,802597E-45f, Vector(-4091,194f, 41,55911f, 2951,71f), Vector(0.0f, -30,67736f, 0.0f), Vector(3,529629f, 2,016632f, 5,950282f));
	*(&iLocal_17 + 1168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "treasureRoom", 2,802597E-45f, Vector(-4096,727f, 41,55911f, 2948,507f), Vector(0.0f, -30,67736f, 0.0f), Vector(6,840574f, 2,016632f, 5,950282f));
	*(&iLocal_17 + 1176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nbaddieFl1", 2,802597E-45f, Vector(-4089,713f, 38,44497f, 2939,58f), Vector(0.0f, -30,67736f, 0.0f), Vector(5,656697f, 2,546784f, 5,950282f));
	*(&iLocal_17 + 1184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nhouseCage", 2,802597E-45f, Vector(-4092,984f, 41,42531f, 2941,954f), Vector(0.0f, -30,67736f, 0.0f), Vector(20,21956f, 26,64758f, 22,45677f));
	*(&iLocal_17 + 1192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "covBasementSeth", 2,802597E-45f, Vector(-4093,12f, 35,06679f, 2938,393f), Vector(0.0f, -30,67736f, 0.0f), Vector(8,157269f, 2,582282f, 11,31645f));
	*(&iLocal_17 + 1200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "cov1stFlSeth", 2,802597E-45f, Vector(-4089,751f, 40,53315f, 2941,642f), Vector(0.0f, -30,67736f, 0.0f), Vector(11,69881f, 6,909453f, 17,61907f));
	*(&iLocal_17 + 1208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "playerBasement", 2,802597E-45f, Vector(-4092,761f, 41,42531f, 2942,086f), Vector(0.0f, -30,67736f, 0.0f), Vector(20,21956f, 4,352289f, 16,36774f));
	*(&iLocal_17 + 1216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "player2ndFloor", 2,802597E-45f, Vector(-4090,366f, 39,98158f, 2933,433f), Vector(0.0f, -30,67736f, 0.0f), Vector(2,47336f, 3,114333f, 0,4874636f));
	*(&iLocal_17 + 1224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "cov2ndFlSeth", 2,802597E-45f, Vector(-4089,441f, 42,42603f, 2941,826f), Vector(0.0f, -30,67736f, 0.0f), Vector(12,49945f, 3,524738f, 17,61907f));
	*(&iLocal_17 + 1280) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "SethS1Vols_set");
	*(&iLocal_17 + 1232[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nS1_Fight1", 2,802597E-45f, Vector(-3923,055f, 32,82224f, 2891,613f), Vector(0.0f, -124.0f, 0.0f), Vector(33,35488f, 7,538969f, 1,25855f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1280, &iLocal_17 + 1232[0]);
	*(&iLocal_17 + 1232[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nS1_Fight2", 2,802597E-45f, Vector(-3920,987f, 38,13965f, 2978,005f), Vector(0.0f, -81.0f, 0.0f), Vector(146,7096f, 21,07521f, 1,25855f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1280, &iLocal_17 + 1232[1]);
	*(&iLocal_17 + 1232[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nS1_Fight3", 2,802597E-45f, Vector(-3970,483f, 28,80408f, 2887,276f), Vector(0.0f, -48.0f, 0.0f), Vector(80,56192f, 21,07521f, 1,25855f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1280, &iLocal_17 + 1232[2]);
	*(&iLocal_17 + 1232[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nS1_Fight4", 2,802597E-45f, Vector(-3936,873f, 29,17418f, 2941,85f), Vector(0.0f, -75.0f, 0.0f), Vector(52,65687f, 21,07521f, 1,25855f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1280, &iLocal_17 + 1232[3]);
	*(&iLocal_17 + 1232[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nS1_Fight5", 2,802597E-45f, Vector(-3983,434f, 29,7139f, 2959,193f), Vector(0.0f, -59.0f, 0.0f), Vector(166,8024f, 21,07521f, 46,22523f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1280, &iLocal_17 + 1232[4]);
	*(&iLocal_17 + 1288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "MissionRestrictVol", 2,802597E-45f, Vector(-3995,315f, 34,03971f, 2931,845f), Vector(0.0f, 5,322636f, 0.0f), Vector(249,4176f, 26,64758f, 106,5863f));
	*(&iLocal_17 + 1296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "SetOffNextBattle", 2,802597E-45f, Vector(-3974,697f, 27,91657f, 2929,712f), Vector(0.0f, 33,7195f, 0.0f), Vector(1.0f, 14,74309f, 239,3237f));
	*(&iLocal_17 + 1344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_17, "JohnMansionVols_set");
	*(&iLocal_17 + 1304[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "check1", 2,802597E-45f, Vector(-4095,446f, 38,60322f, 2947,062f), Vector(0.0f, -29,37211f, 0.0f), Vector(2,069867f, 3,572973f, 2,723439f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1344, &iLocal_17 + 1304[0]);
	*(&iLocal_17 + 1304[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "check2", 2,802597E-45f, Vector(-4091,116f, 38,94334f, 2934,595f), Vector(0.0f, -119,3721f, 0.0f), Vector(2,069867f, 3,572973f, 2,39027f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1344, &iLocal_17 + 1304[1]);
	*(&iLocal_17 + 1304[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "check3A", 2,802597E-45f, Vector(-4083,03f, 42,33358f, 2939,094f), Vector(0.0f, -119,3721f, 0.0f), Vector(2,069867f, 3,572973f, 2,39027f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1344, &iLocal_17 + 1304[2]);
	*(&iLocal_17 + 1304[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "check3B", 2,802597E-45f, Vector(-4097,546f, 41,94956f, 2942,107f), Vector(0.0f, -119,3721f, 0.0f), Vector(2,069867f, 3,214086f, 1,330383f));
	ADD_TO_VOLUME_SET(&iLocal_17 + 1344, &iLocal_17 + 1304[3]);
	*(&iLocal_17 + 1352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "skipMansion", 2,802597E-45f, Vector(-4028,623f, 27,52894f, 2942,44f), Vector(0.0f, 25,93869f, 0.0f), Vector(1.0f, 14,74309f, 239,3237f));
	*(&iLocal_17 + 1360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_17, "nearBossRoom", 2,802597E-45f, Vector(-4088,625f, 41,69334f, 2948,563f), Vector(0.0f, -30,67736f, 0.0f), Vector(3,529629f, 2,758149f, 5,950282f));
	*(&iLocal_17 + 1368) = CREATE_OBJECTSET_IN_LAYOUT("Stage01Set", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1376[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerPos01", Vector(-3913,887f, 31,0999f, 2902,346f), Vector(0.0f, 59.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[0], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nSethPos01", Vector(-3916,772f, 31,02521f, 2902,826f), Vector(0.0f, 56,77f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[1], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nLedgeJump", Vector(-3928,183f, 30,33865f, 2918,304f), Vector(0.0f, 643.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[2], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "BaddieCover1", Vector(-3926,975f, 30,55618f, 2897,986f), Vector(185,5632f, 196,9671f, -181,4229f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[3], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nSethCover", Vector(-3922,356f, 31,04314f, 2911,302f), Vector(0.0f, 454.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[4], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerPos03", Vector(-3973,725f, 27,73097f, 2925,725f), Vector(0.0f, 121.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[5], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nSethPos04", Vector(-4080,52f, 35,65381f, 2950,848f), Vector(0.0f, 400.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[6], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerPos04", Vector(-4080,23f, 35,65085f, 2948,836f), Vector(0.0f, 61.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[7], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "doorGringoPos", Vector(-4084,272f, 37,225f, 2946,852f), Vector(0.0f, 61.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[8], &iLocal_17 + 1368);
	*(&iLocal_17 + 1376[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nSethPos05", Vector(-4078,323f, 35,53316f, 2949,033f), Vector(0.0f, 61.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1376[9], &iLocal_17 + 1368);
	*(&iLocal_17 + 1464) = CREATE_OBJECTSET_IN_LAYOUT("S1_SethIdlePtsSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1472[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nIdlePt_01", Vector(-3927,335f, 30,4115f, 2895,913f), Vector(0.0f, -273.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1472[0], &iLocal_17 + 1464);
	*(&iLocal_17 + 1472[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nIdlePt_02", Vector(-3951,787f, 29,11373f, 2912,294f), Vector(0.0f, -229.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1472[1], &iLocal_17 + 1464);
	*(&iLocal_17 + 1472[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nIdlePt_03", Vector(-3954,359f, 29,0896f, 2917,579f), Vector(0.0f, -229.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1472[2], &iLocal_17 + 1464);
	*(&iLocal_17 + 1472[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nIdlePt_04", Vector(-3968,933f, 27,70122f, 2913,631f), Vector(0.0f, -238.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1472[3], &iLocal_17 + 1464);
	*(&iLocal_17 + 1472[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nIdlePt_05", Vector(-3975,828f, 27,75798f, 2925,961f), Vector(0.0f, -238.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1472[4], &iLocal_17 + 1464);
	*(&iLocal_17 + 1472[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nIdlePt_06", Vector(-3988,481f, 28,21542f, 2928,492f), Vector(0.0f, -238.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1472[5], &iLocal_17 + 1464);
	*(&iLocal_17 + 1472[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nIdlePt_07", Vector(-3954,965f, 29,05244f, 2919,503f), Vector(0.0f, -238.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1472[6], &iLocal_17 + 1464);
	*(&iLocal_17 + 1536) = CREATE_OBJECTSET_IN_LAYOUT("Wave01_ShootPtsSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1544[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Wv01_ShootFrom01", Vector(-3975,946f, 31,932f, 2919,054f), Vector(0.0f, -84.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1544[0], &iLocal_17 + 1536);
	*(&iLocal_17 + 1544[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Wv01_ShootFrom02", Vector(-3965,071f, 29,02164f, 2932.0f), Vector(0.0f, -50.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1544[1], &iLocal_17 + 1536);
	*(&iLocal_17 + 1544[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Wv01_ShootFrom03", Vector(-3976,926f, 27,85839f, 2929,545f), Vector(0.0f, -50.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1544[2], &iLocal_17 + 1536);
	*(&iLocal_17 + 1544[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Wv01_ShootFrom04", Vector(-3977,857f, 33,21274f, 2918,557f), Vector(0.0f, -94.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1544[3], &iLocal_17 + 1536);
	*(&iLocal_17 + 1544[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "Wv02_ShootFrom01", Vector(-3992,849f, 29,289f, 2954,191f), Vector(0.0f, -76.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1544[4], &iLocal_17 + 1536);
	*(&iLocal_17 + 1592) = CREATE_OBJECTSET_IN_LAYOUT("Stage02Set", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1600[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerPos12", Vector(-4104,056f, 35,76294f, 2948,794f), Vector(0.0f, -30.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1600[0], &iLocal_17 + 1592);
	*(&iLocal_17 + 1600[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nSethPos12", Vector(-4102,746f, 35,8256f, 2949,78f), Vector(0.0f, 716.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1600[1], &iLocal_17 + 1592);
	*(&iLocal_17 + 1600[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerStart02", Vector(-3925,459f, 31,06101f, 2911,034f), Vector(0.0f, -84,40497f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1600[2], &iLocal_17 + 1592);
	*(&iLocal_17 + 1632) = CREATE_OBJECTSET_IN_LAYOUT("StageLastSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1640[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "PlayerPos02", Vector(-4094,509f, 40,588f, 2949,616f), Vector(0.0f, 240.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1640[0], &iLocal_17 + 1632);
	*(&iLocal_17 + 1640[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nSethPos02", Vector(-4094,935f, 40,58777f, 2951,003f), Vector(0.0f, 685.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1640[1], &iLocal_17 + 1632);
	*(&iLocal_17 + 1640[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "COMPANION_EXIT", Vector(-4076,057f, 35,28338f, 2927,535f), Vector(0.0f, 266,8387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1640[2], &iLocal_17 + 1632);
	*(&iLocal_17 + 1640[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SethGotoEnd", Vector(-4098,016f, 40,58777f, 2948,848f), Vector(0.0f, 784.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1640[3], &iLocal_17 + 1632);
	*(&iLocal_17 + 1640[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nCorpsePos", Vector(-4097,867f, 40,58776f, 2946,629f), Vector(0.0f, 685.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1640[4], &iLocal_17 + 1632);
	*(&iLocal_17 + 1688[03]) = Vector(-4002,191f, 26,73814f, 2900,735f);
	*(&iLocal_17 + 1688[03] + 12) = Vector(0.0f, -73,31422f, 0.0f);
	*(&iLocal_17 + 1688[13]) = Vector(-4014,522f, 28,97481f, 2916,653f);
	*(&iLocal_17 + 1688[13] + 12) = Vector(0.0f, -73,31422f, 0.0f);
	*(&iLocal_17 + 1688[23]) = Vector(-4004,311f, 28,70392f, 2923,85f);
	*(&iLocal_17 + 1688[23] + 12) = Vector(0.0f, 17,72256f, 0.0f);
	*(&iLocal_17 + 1688[33]) = Vector(-4011,437f, 29,14916f, 2916,563f);
	*(&iLocal_17 + 1688[33] + 12) = Vector(0.0f, -87,29693f, 0.0f);
	*(&iLocal_17 + 1688[43]) = Vector(-4004,811f, 26,60392f, 2895,189f);
	*(&iLocal_17 + 1688[43] + 12) = Vector(0.0f, -87,29693f, 0.0f);
	*(&iLocal_17 + 1816) = CREATE_OBJECTSET_IN_LAYOUT("sethMansionCoverSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1824[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nfirstFL01", Vector(-4096,358f, 33,808f, 2939,588f), Vector(0.0f, 330.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1824[0], &iLocal_17 + 1816);
	*(&iLocal_17 + 1824[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nfirstFL02", Vector(-4102,504f, 33,822f, 2943,601f), Vector(0.0f, -212.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1824[1], &iLocal_17 + 1816);
	*(&iLocal_17 + 1824[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nfirstFL03", Vector(-4093,758f, 37,202f, 2947,478f), Vector(0.0f, -26.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1824[2], &iLocal_17 + 1816);
	*(&iLocal_17 + 1824[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nfirstFL04", Vector(-4092,688f, 36,437f, 2948,124f), Vector(0.0f, 332.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1824[3], &iLocal_17 + 1816);
	*(&iLocal_17 + 1824[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nfirstFL05", Vector(-4089,673f, 37,212f, 2936,975f), Vector(0.0f, 220.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1824[4], &iLocal_17 + 1816);
	*(&iLocal_17 + 1824[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nfirstFL06", Vector(-4083,781f, 40,583f, 2936,83f), Vector(0.0f, -211.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1824[5], &iLocal_17 + 1816);
	*(&iLocal_17 + 1824[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nfirstFL07", Vector(-4089,425f, 40,549f, 2948,049f), Vector(0.0f, 150.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1824[6], &iLocal_17 + 1816);
	*(&iLocal_17 + 1888) = CREATE_OBJECTSET_IN_LAYOUT("SethCovSpotsSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1896[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SETHC01", Vector(-4009,221f, 29,01953f, 2920.0f), Vector(0.0f, -262.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1896[0], &iLocal_17 + 1888);
	*(&iLocal_17 + 1896[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SETHC02", Vector(-4005,68f, 28,67109f, 2954,32f), Vector(0.0f, -244.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1896[1], &iLocal_17 + 1888);
	*(&iLocal_17 + 1896[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SETHC03", Vector(-4059,221f, 31,10617f, 2940f), Vector(0.0f, -244.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1896[2], &iLocal_17 + 1888);
	*(&iLocal_17 + 1896[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SETHC04", Vector(-4049,89f, 30,7164f, 2974,11f), Vector(0.0f, -244.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1896[3], &iLocal_17 + 1888);
	*(&iLocal_17 + 1936) = CREATE_OBJECTSET_IN_LAYOUT("HouseGuyPtsSet", &iLocal_17, 8, 0);
	*(&iLocal_17 + 1944[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SecondFloor_01", Vector(-4090,199f, 40,58777f, 2945,287f), Vector(0.0f, -25.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[0], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "nNearPiano", Vector(-4089,823f, 37,25368f, 2940,712f), Vector(6,490564f, 108,1041f, 7,101904f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[1], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "treasureGringo", Vector(-4091,411f, 33,86287f, 2932,129f), Vector(6,490564f, 108,1041f, 7,101904f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[2], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "fl1_SideRoom", Vector(-4095,414f, 37,23855f, 2936,176f), Vector(0.0f, 155,889f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[3], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "fl1_BustDoor", Vector(-4091,993f, 37,24179f, 2936,538f), Vector(0.0f, 147.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[4], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "fl1_BustDoor1", Vector(-4085,758f, 40,48339f, 2945,612f), Vector(0.0f, 53.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[5], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "fl2_BustDoor1", Vector(-4097,61f, 40,554f, 2938,913f), Vector(0.0f, -19.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[6], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "fl2_BustDoor2", Vector(-4087,197f, 40,40279f, 2945,128f), Vector(0.0f, 57.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[7], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "fl2_BustDoor3", Vector(-4090,352f, 40,54115f, 2951,384f), Vector(0.0f, -34.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[8], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bm_Cov01", Vector(-4088,701f, 33,84138f, 2941,781f), Vector(0.0f, 63.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[9], &iLocal_17 + 1936);
	*(&iLocal_17 + 1944[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bm_Cov02", Vector(-4086,911f, 33,93096f, 2935,825f), Vector(0.0f, 83.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_17 + 1944[10], &iLocal_17 + 1936);
	*(&iLocal_17 + 2040) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "cover_corner17", Vector(-4089,369f, 40,53251f, 2948,872f), Vector(0.0f, 149,5607f, 0.0f), 1);
	*(&iLocal_17 + 2048) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "cover_corner21", Vector(-4093,673f, 40,59332f, 2951,082f), Vector(0.0f, -481.0f, 0.0f), 1);
	*(&iLocal_17 + 2056) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "cover_corner22", Vector(-4104,332f, 35,88f, 2943,492f), Vector(0.0f, -298.0f, 0.0f), 1);
	*(&iLocal_17 + 2064) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SethCovObj_01", Vector(-3988,879f, 28,20096f, 2929,258f), Vector(0.0f, -514.0f, 0.0f), 1);
	*(&iLocal_17 + 2072) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "coverS1Seth", Vector(-3954,525f, 29,138f, 2919,259f), Vector(0.0f, 126.0f, 0.0f), 4);
	*(&iLocal_17 + 2080) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "SethCovObj_02", Vector(-3976.0f, 27,84365f, 2929,433f), Vector(0.0f, -595.0f, 0.0f), 1);
	*(&iLocal_17 + 2088) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "ncover_low", Vector(-4086,898f, 33,88873f, 2935,476f), Vector(0.0f, 83.0f, 0.0f), 4);
	*(&iLocal_17 + 2096) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "cover_low1", Vector(-4089,617f, 33,88873f, 2935,143f), Vector(0.0f, -97.0f, 0.0f), 4);
	PushArrayP();
	*(&iLocal_17 + 2104) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_17, "nhousePath");
	PushArrayP();
	*(&iLocal_17 + 2112) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_17, "s1_Seth2Ambush");
	PushArrayP();
	*(&iLocal_17 + 2120) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_17, "SethIntoBasement");
	*(&iLocal_17 + 2128) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "footLocker03x0", "p_gen_footLocker03x", Vector(-4098,537f, 40,58661f, 2948,58f), Vector(0.0f, 59.0f, 0.0f), 1);
	return;
}

void Function_300(int iParam0, int iParam1) //Position: 0x10912 / 67858
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

bool Function_301() //Position: 0x1095C / 67932
{
	if (!IS_EXITFLAG_SET())
	{
		if (!iLocal_751)
		{
			if (!Function_329(0))
			{
				return 0;
			}
			iLocal_751 = 1;
		}
		if (!Function_326())
		{
			return 0;
		}
		if (!Function_324())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_318(&iLocal_618))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&bLocal_591))
		{
			bLocal_591 = Function_309(1, 0, 1, 0, 0, 0, 0, 0, 0);
			return 0;
		}
		if (!IS_ACTOR_VALID(&uLocal_593))
		{
			uLocal_593 = Function_302(1, 1, 0, 0, 0, 0, 1, 0);
			return 0;
		}
	}
	return 1;
}

var Function_302(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x109E2 / 68066
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
		Function_308(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_307())
		{
			return "";
		}
	}
	if (!Function_305())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_211();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_250(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_250(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_250(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_250(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_304(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_304(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_57(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_57(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_57(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_57(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_303(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_303(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x10D3F / 68927
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

var Function_304(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10D89 / 69001
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

bool Function_305() //Position: 0x10E29 / 69161
{
	if (Function_306() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_306() //Position: 0x10E3F / 69183
{
	return Global_21369.f_244;
}

bool Function_307() //Position: 0x10E4A / 69194
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_308(var uParam0, bool bParam1, bool bParam2) //Position: 0x10E6A / 69226
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_80(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_80(&Global_21369 + 72 + 32, 64);
	}
	return;
}

var Function_309(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, bool bParam8) //Position: 0x10E99 / 69273
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
		if (!Function_168(&(Global_43791[Global_46722[3]]), 4))
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
		Function_228(iParam0, 0, 1);
		SET_PERS_CHAR_ENABLED(&(Global_15402[iParam014]), true);
		DECOR_REMOVE(GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[iParam014])), "KeepLastTask");
		bVar1 = GET_ACTOR_FROM_PERS_CHAR(&(Global_15402[iParam014]));
	}
	else
	{
		if (&bParam6)
		{
			bVar1 = Function_317(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (&bParam8)
		{
			bVar1 = Function_312(&Global_15402[iParam014] + 16, &uParam7);
		}
		if (!IS_ACTOR_VALID(&bVar1))
		{
			Var3 = &uParam3;
			Var3.f_4 = &uParam4;
			Var3.f_8 = &uParam5;
			if (Function_77(StackVal, Var3))
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
		Function_311(&bVar1, 0, 0, 0, 0);
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
		Function_310(&bVar1, 0);
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

void Function_310(var uParam0, bool bParam1) //Position: 0x113D9 / 70617
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_311(var uParam0, var uParam1, var uParam2, bool bParam3, var uParam4) //Position: 0x113FB / 70651
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

var Function_312(int iParam0, int iParam1) //Position: 0x1145C / 70748
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_316(iParam0))
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
						Function_313(&uVar2, &iParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_313(var uParam0, int iParam1) //Position: 0x114EA / 70890
{
	Function_315(&uParam0);
	Function_314(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_314(int iParam0) //Position: 0x11516 / 70934
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_315(int iParam0) //Position: 0x1153C / 70972
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

bool Function_316(int iParam0) //Position: 0x11612 / 71186
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_317(int iParam0, var uParam1) //Position: 0x11629 / 71209
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

bool Function_318(struct<2>[] Param0) //Position: 0x116CF / 71375
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_323();
	iVar1 = 0;
	if (!Function_194(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_322(&(Param0[iVar02]), 8);
		}
		else if (Function_321())
		{
			iVar1 = 1;
			Function_322(&(Param0[iVar02]), 8);
		}
		Function_322(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_194(&(Param0[iVar02]), 4))
		{
			if (!Function_194(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_194(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_194(&(Param0[02]), 8) || iVar1));
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
				Function_322(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_194(&(Param0[iVar02]), 4))
		{
			if (!Function_194(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
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
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_322(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_322(&(Param0[iVar02]), 2);
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
	Function_319();
	return 1;
}

void Function_319() //Position: 0x11A91 / 72337
{
	if (!Function_320(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_320(int iParam0) //Position: 0x11AD1 / 72401
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_321() //Position: 0x11AED / 72429
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

void Function_322(struct<13> Param0) //Position: 0x11B1B / 72475
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_323() //Position: 0x11B2E / 72494
{
	if (!Function_320(128))
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

bool Function_324() //Position: 0x11B70 / 72560
{
	Function_325(&iLocal_17 + 32, 505, 2, 0);
	Function_325(&iLocal_17 + 32, 506, 2, 0);
	Function_325(&iLocal_17 + 32, 509, 2, 0);
	Function_325(&iLocal_17 + 32, 512, 2, 0);
	Function_325(&iLocal_17 + 32, 510, 2, 0);
	Function_325(&iLocal_17 + 32, 508, 2, 0);
	Function_325(&iLocal_17 + 32, 513, 2, 0);
	Function_325(&iLocal_17 + 32, 507, 2, 0);
	if (Function_318(&iLocal_17 + 32))
	{
		return 1;
	}
	return 0;
}

var Function_325(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11BEB / 72683
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_194(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_322(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_322(&(Param0[iVar02]), 8);
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

bool Function_326() //Position: 0x11CC7 / 72903
{
	Function_327(&iLocal_17 + 8, "p_gen_footLocker03x", 0, 0);
	if (Function_318(&iLocal_17 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_327(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x11CFA / 72954
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_328(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_322(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_328(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x11D38 / 73016
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_194(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_322(&(Param0[iVar02]), 4);
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

bool Function_329(bool bParam0) //Position: 0x11E07 / 73223
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

int Function_330() //Position: 0x11E37 / 73271
{
	switch (iLocal_566)
	{
		case 0x00000063:
			Function_331(2, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_331(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_331(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x11E72 / 73330
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
		uVar0 = Function_53();
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
		Function_92(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_254();
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
	Function_283(&iParam9, &bParam10);
}

int Function_332() //Position: 0x11F41 / 73537
{
	switch (iLocal_566)
	{
		case 0x00000063:
			Function_335();
			return 1;
			break;
		
		case 0x00000065:
			Function_333();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_333() //Position: 0x11F71 / 73585
{
	SET_ACTOR_SPEED(&Global_54076, 0.0f);
	Function_26(1, 1, 0, 1, 1);
	Function_334(&Global_54076, &iLocal_17 + 1640[0], 1, 0, 1);
	TASK_STAND_STILL(&Global_54076, 1.0f, 1, 0);
	return;
}

void Function_334(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0x11FA5 / 73637
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

void Function_335() //Position: 0x120B5 / 73909
{
	if (!iLocal_752)
	{
		Local_724 = Vector(-4081,185f, 41,028f, 2946,763f);
		ENABLE_GAME_CAMERA_FOCUS(Local_724, 2.0f, 6, 1, 1, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_591, true);
		AI_GOAL_LOOK_AT_COORD(&bLocal_591, &Local_724, 1, 0.0f, 3.0f, 5.0f);
		Function_334(&Global_54076, &iLocal_17 + 1376[0], 1, 1, 0);
		TASK_CLEAR(&Global_54076);
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 7.0f, 1);
		ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
		Function_334(&bLocal_591, &iLocal_17 + 1376[1], 1, 1, 0);
		ACTOR_POP_NEXT_GAIT(&bLocal_591, 1, 0);
		iLocal_752 = 1;
	}
	return;
}

int Function_336() //Position: 0x1214A / 74058
{
	switch (iLocal_566)
	{
		case 0x00000063:
			if (!Function_318(&iLocal_618))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000065:
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

bool Function_337() //Position: 0x12180 / 74112
{
	switch (iLocal_566)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_17))
			{
				if (Function_348(Global_46796[0]))
				{
					return Function_232();
				}
			}
			if (Function_301())
			{
				bLocal_595 = Global_46796[0];
				if (!Function_348(bLocal_595))
				{
					Function_347(&Local_554);
				}
				Global_99147 = 0;
				TELEPORT_ACTOR_WITH_HEADING(Function_299(), &Global_54076, Vector(-3910,114f, 31,102f, 2907,608f), 98.0f, 1, 1, 1);
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			}
			break;
		
		default:
			Function_338();
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
	}
	return 0;
}

void Function_338() //Position: 0x1220A / 74250
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&iLocal_17 + 544[72]))
	{
		if (IS_ACTOR_IN_VOLUME(&iLocal_17 + 544[72], &iLocal_17 + 1072[2]))
		{
			DESTROY_ACTOR(&iLocal_17 + 544[72]);
			Function_250(&iLocal_17 + 1640[4]);
			Function_339(&iLocal_17 + 1640[4]);
			iLocal_694 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&uLocal_552, "WelshCorpse", 7,216687E-43f, Function_250(&iLocal_17 + 1640[4]), Function_339(&iLocal_17 + 1640[4]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(&iLocal_694, 10.0f, true, 1092616192);
		}
	}
	else if (GET_OBJECTSET_SIZE(&uLocal_696) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uLocal_696);
		if (IS_OBJECT_VALID(&uVar0))
		{
			if (IS_OBJECT_IN_VOLUME(&uVar0, &iLocal_17 + 1072[2]))
			{
				DESTROY_OBJECT(&uVar0);
				Function_250(&iLocal_17 + 1640[4]);
				Function_339(&iLocal_17 + 1640[4]);
				iLocal_694 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&uLocal_552, "WelshCorpse", 7,216687E-43f, Function_250(&iLocal_17 + 1640[4]), Function_339(&iLocal_17 + 1640[4]), "dead_ground_male");
				SNAP_OBJECT_TO_GROUND(&iLocal_694, 10.0f, true, 1092616192);
			}
		}
	}
	return;
}

struct<8> Function_339(var uParam0) //Position: 0x12331 / 74545
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return StackVal, Var0;
	}
	GET_OBJECT_ORIENTATION(&uParam0, &Var0);
	return StackVal, Var0;
}

int Function_340() //Position: 0x1235A / 74586
{
	switch (iLocal_566)
	{
		case 0x00000063:
			Function_344(1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			Function_342(StackVal, &uLocal_552, Vector(-3910,114f, 31,102f, 2907,608f), &uLocal_788, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		case 0x00000065:
			Function_341();
			Function_344(1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			(&iLocal_568 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_552, "FinalCS", 2,802597E-45f, Vector(-4093,32f, 40,03424f, 2949,075f), Vector(0.0f, 60,1983f, 0.0f), Vector(12,03339f, 15,47603f, 12,8734f));
			Function_250(&iLocal_17 + 1640[0]);
			Function_342(StackVal, &uLocal_552, Function_250(&iLocal_17 + 1640[0]), &iLocal_568 + 32, 1, 0, 0, 0, 1, 1);
			return 1;
			break;
		
		default:
			Function_344(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_341() //Position: 0x12444 / 74820
{
	AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&bLocal_591, true);
	FIRE_STOP_FLAMES_IN_VOLUME(&iLocal_17 + 1168);
	AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	if (IS_OBJECT_VALID(&iLocal_17 + 2128))
	{
		DESTROY_OBJECT(&iLocal_17 + 2128);
	}
	if (!IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_690)))
	{
		Local_724 = Vector(-4094,684f, 40,49754f, 2948,147f);
		iLocal_690 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("sit_headinhands_n_any", &Local_724, 5.0f, 0));
	}
	return;
}

void Function_342(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9) //Position: 0x124C8 / 74952
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
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &uParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
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

void Function_343(var uParam0, float fParam1) //Position: 0x12768 / 75624
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

void Function_344(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x127EA / 75754
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
	Function_254();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_53();
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
				Function_346(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_57(), 2,802597E-45f, Function_346(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_92(19, 1, 0, 0);
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
	if (Function_320(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_171(0x4000000);
	}
	if (Function_320(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_171(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_345() //Position: 0x12A9C / 76444
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

struct<8> Function_346(bool bParam0) //Position: 0x12B2A / 76586
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_347(int iParam0) //Position: 0x12B3C / 76604
{
	if (!Function_294(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_201(1, 0, 1);
		}
	}
	return;
}

bool Function_348(bool bParam0) //Position: 0x12B58 / 76632
{
	if (!Function_88(bParam0))
	{
		return 1;
	}
	return Function_168(&(Global_43791[bParam0]), 4);
}

void Function_349() //Position: 0x12B74 / 76660
{
	Function_206(47);
	Function_207(256);
	Function_171(15);
	Function_350(9);
	return;
}

void Function_350(int iParam0) //Position: 0x12B8F / 76687
{
	Function_351(&Global_43580, iParam0);
	return;
}

void Function_351(var uParam0, int iParam1) //Position: 0x12B9D / 76701
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_352(bool bParam0) //Position: 0x12BC5 / 76741
{
	Function_353(0, 0x40400000);
	Function_218();
	Function_217();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_353(float fParam0, float fParam1) //Position: 0x12BFB / 76795
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
	Function_355();
	Function_354();
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

void Function_354() //Position: 0x12D0C / 77068
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_355() //Position: 0x12D40 / 77120
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

void Function_356() //Position: 0x12E46 / 77382
{
	if (iLocal_567 == 0 && iLocal_567 == 1)
	{
		Function_250(&iLocal_17 + 1640[0]);
		Function_423(StackVal, "$/cutscene/Grave03_CS03/Grave03_CS03", &uLocal_787, Function_250(&iLocal_17 + 1640[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_415(&iLocal_662, 60.0f, 120.0f, &bLocal_591, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_582, 0, &uLocal_552, &iLocal_17, 325, 1);
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1184) && iLocal_567 > 14)
		{
			Function_413();
		}
		if (bLocal_769)
		{
			Function_407();
		}
		if (iLocal_567 > 8)
		{
			Function_399();
		}
		Function_396(&iLocal_17 + 680);
		Function_392();
	}
	switch (iLocal_567)
	{
		case 0x00000000:
			Function_352(0);
			Function_391(&iLocal_17 + 344);
			CLEAR_ACTOR_MIN_SPEED(&bLocal_591);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
			Function_349();
			if (!iLocal_596[0] == 1)
			{
				bLocal_595 = Global_46736[1];
				if (!Function_348(bLocal_595))
				{
					Function_347(&Local_554);
				}
				Function_334(&Global_54076, &iLocal_17 + 1600[0], 1, 1, 1);
				Function_334(&bLocal_591, &iLocal_17 + 1600[1], 1, 1, 1);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_591, "Grave03_Seth_idle", 0);
				SET_ACTION_NODE_FOR_ACTOR(&bLocal_591, "Grave03_Seth_idle");
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_591, 1);
				SQUAD_GOAL_ADD_BATTLE_ALLIES(&uLocal_710, 1, &Global_54076, 1);
			}
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			Function_237(&iLocal_654);
			iLocal_567 = 1;
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_390()) && (Function_348(bLocal_595) || bLocal_595 != 4294967295))
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				Function_237(&iLocal_654);
				Function_389();
				iLocal_567 = 2;
			}
			break;
		
		case 0x00000002:
			Function_249(iLocal_566);
			Function_381(StackVal, Function_249(iLocal_566), iLocal_566, Global_46736[1], Function_252(iLocal_566), 0);
			Function_250(&iLocal_17 + 1944[2]);
			Local_724 = Function_250(&iLocal_17 + 1944[2]);
			if (IS_GRINGO_VALID(LOCATE_GRINGO_OF_TYPE("treasure_hunting_3", &Local_724, 2.0f, 0)))
			{
				uLocal_720 = LOCATE_GRINGO_OF_TYPE("treasure_hunting_3", &Local_724, 2.0f, 0);
			}
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_380();
			Function_379(&iLocal_17 + 896[15], &uLocal_552);
			Function_379(&iLocal_17 + 896[7], &uLocal_552);
			Function_163(Function_377("tumbleweed", "mansion", 3), 1);
			Function_371();
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_591, 0);
			if (IS_MOVER_FROZEN(&bLocal_591))
			{
				SET_MOVER_FROZEN(&bLocal_591, 0);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
			}
			Function_370("Grave03_obj06", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_237(&iLocal_654);
			iLocal_567 = 6;
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID(&iLocal_17 + 896[9]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[9]))
				{
					DESTROY_VOLUME(&iLocal_17 + 896[9]);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
				}
			}
			if (IS_VOLUME_VALID(&iLocal_17 + 1136))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1136))
				{
					DESTROY_VOLUME(&iLocal_17 + 1136);
					DESTROY_VOLUME(&iLocal_17 + 896[6]);
					Function_369();
					Function_237(&iLocal_670);
				}
			}
			if (IS_VOLUME_VALID(&iLocal_17 + 896[6]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[6]))
				{
					DESTROY_VOLUME(&iLocal_17 + 896[6]);
					Function_369();
					Function_237(&iLocal_670);
					bLocal_749 = true;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[1]) || bLocal_749)
			{
				MEMORY_ALLOW_SHOOTING(&iLocal_17 + 544[12], false);
				MEMORY_ALLOW_SHOOTING(&iLocal_17 + 544[02], false);
				Function_368(&bLocal_591, &iLocal_17 + 680, 1);
				TASK_CLEAR(&iLocal_17 + 544[02]);
				TASK_CLEAR(&iLocal_17 + 544[12]);
				if (!bLocal_749)
				{
					Function_250(&iLocal_17 + 1944[9]);
					Local_724 = Function_250(&iLocal_17 + 1944[9]);
					bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1944[9]);
					TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER(&iLocal_17 + 544[02], FIND_NEAREST_COVER_LOCATION(&Local_724, 2.0f, bLocal_732, 30.0f, 7), -1.0f, 1086324736);
					Function_250(&iLocal_17 + 1944[10]);
					Local_724 = Function_250(&iLocal_17 + 1944[10]);
					bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1944[10]);
					TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER(&iLocal_17 + 544[12], FIND_NEAREST_COVER_LOCATION(&Local_724, 2.0f, bLocal_732, 30.0f, 7), -1.0f, 2.0f);
				}
				else
				{
					bLocal_744 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, &Global_54076, 3.0f, 2);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_17 + 544[02], bLocal_744);
					TASK_SEQUENCE_RELEASE(bLocal_744, 1);
					bLocal_744 = TASK_SEQUENCE_OPEN();
					TASK_GO_NEAR_ACTOR(0, &Global_54076, 3.0f, 2);
					TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
					TASK_SEQUENCE_CLOSE();
					TASK_SEQUENCE_PERFORM(&iLocal_17 + 544[12], bLocal_744);
					TASK_SEQUENCE_RELEASE(bLocal_744, 1);
				}
				TASK_PRIORITY_SET(&iLocal_17 + 544[02], true);
				TASK_PRIORITY_SET(&iLocal_17 + 544[12], true);
				AUDIO_SET_PLAYER_MOOD(2, 0);
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				Function_237(&iLocal_654);
				iLocal_567 = 7;
			}
			else if (Function_289(&iLocal_670) < 15.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
				{
					Function_365();
					Function_237(&iLocal_670);
				}
			}
			break;
		
		case 0x00000007:
			if (((Function_364(&Global_54076, &iLocal_17 + 680, 1, 1, 0, 3212836864) || MEMORY_GET_IS_IDENTIFIED(&iLocal_17 + 544[02], &Global_54076)) || MEMORY_GET_IS_IDENTIFIED(&iLocal_17 + 544[12], &Global_54076)) || bLocal_749)
			{
				AUDIO_MUSIC_SET_MOOD("GRAVE_GUNFIGHT_02", 0, 4294967295, 4294967295);
				HUD_CLEAR_SMALL_TEXT();
				HUD_CLEAR_OBJECTIVE();
				SAY_SINGLE_LINE_STRING(&iLocal_17 + 544[02], "Grave03_InsideMansionBasement", true, false, 3, 0, true, false);
				MEMORY_ALLOW_SHOOTING(&iLocal_17 + 544[12], true);
				MEMORY_ALLOW_SHOOTING(&iLocal_17 + 544[02], true);
				Function_237(&iLocal_654);
				Function_237(&iLocal_666);
				Function_237(&iLocal_674);
				Function_237(&iLocal_670);
				iLocal_567 = 8;
			}
			break;
		
		case 0x00000008:
			Function_363();
			if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1160) || MEMORY_GET_IS_VISIBLE(&iLocal_17 + 544[72], &Global_54076)) || Function_362(&Global_54076, &iLocal_17 + 544[72], 1, 1, 0, 3212836864))
			{
				MEMORY_ALLOW_TAKE_COVER(&iLocal_17 + 544[72], 0);
				iLocal_743 = 4;
				MEMORY_ALLOW_SHOOTING(&iLocal_17 + 544[72], true);
				TASK_CLEAR(&iLocal_17 + 544[72]);
				Function_346(&iLocal_17 + 544[72]);
				Local_724 = Function_346(&iLocal_17 + 544[72]);
				Function_361(&Global_54076);
				bLocal_732 = Function_360(StackVal, &iLocal_17 + 544[72], Function_361(&Global_54076));
				bLocal_744 = TASK_SEQUENCE_OPEN();
				TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_724, bLocal_732, 3.0f);
				TASK_KILL_CHAR(false, &Global_54076);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_17 + 544[72], bLocal_744);
				TASK_SEQUENCE_RELEASE(bLocal_744, 1);
				TASK_PRIORITY_SET(&bLocal_591, true);
				SAY_SINGLE_LINE_STRING(&iLocal_17 + 544[72], "Grave03_ReachesBoss", true, false, 3, 0, true, false);
				Function_237(&iLocal_654);
				iLocal_567 = 14;
			}
			break;
		
		case 0x0000000E:
			if (Function_359(&iLocal_17 + 544[72], 1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_591, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_591, 1);
				iLocal_761 = 1;
				bLocal_744 = TASK_SEQUENCE_OPEN();
				TASK_GO_NEAR_OBJECT(0, &iLocal_17 + 1640[3], 2.0f, 2, 1, 1);
				TASK_DRAW_HOLSTER_WEAPON(0, 0);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&bLocal_591);
				TASK_SEQUENCE_PERFORM(&bLocal_591, bLocal_744);
				TASK_SEQUENCE_RELEASE(bLocal_744, 1);
				TASK_PRIORITY_SET(&bLocal_591, true);
				Function_237(&iLocal_654);
				iLocal_567 = 15;
			}
			break;
		
		case 0x0000000F:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1168))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_289(&iLocal_654) < 10.0f)
				{
					Function_358(&bLocal_698);
					Function_358(&bLocal_700);
					Function_163(&bLocal_698, 1);
					Function_163(&bLocal_700, 1);
					SET_ACTOR_PROOF(&bLocal_591, 16);
					FIRE_STOP_ON_ACTOR(&bLocal_591);
					SET_ACTOR_PROOF(&Global_54076, 16);
					FIRE_STOP_ON_ACTOR(&Global_54076);
					if (Function_357("pax"))
					{
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
					Function_237(&iLocal_654);
					iLocal_567 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			if (Function_357("pax"))
			{
				if (HUD_IS_FADED())
				{
					bLocal_580 = true;
				}
			}
			else if (!HUD_IS_FADING())
			{
				Function_189();
				DESTROY_ACTOR(&iLocal_17 + 544[72]);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 0);
				iLocal_596[1] = 1;
				Function_237(&iLocal_654);
				iLocal_566 = 101;
				iLocal_567 = 3;
			}
			break;
	}
	return;
}

bool Function_357(int iParam0) //Position: 0x136EC / 79596
{
	int iVar0;
	
	iVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&iVar0))
	{
		return 1;
	}
	return 0;
}

void Function_358(bool bParam0) //Position: 0x1370E / 79630
{
	if (!IS_DOOR_VALID(&bParam0))
	{
		return;
	}
	if (DECOR_CHECK_EXIST(&bParam0, "unlockMe"))
	{
		DECOR_REMOVE(&bParam0, "unlockMe");
	}
	if (DECOR_CHECK_EXIST(&bParam0, "lockMe"))
	{
		DECOR_REMOVE(&bParam0, "lockMe");
	}
	return;
}

bool Function_359(int iParam0, int iParam1) //Position: 0x13767 / 79719
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_360(var uParam0, struct<2> Param1) //Position: 0x137B9 / 79801
{
	struct<2> Var0;
	
	Function_346(&uParam0);
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Function_346(&uParam0), Param1, StackVal);
	VNORMALIZE(&Var0);
	PRINTSTRING("GET_ACTOR_HEADING_TO_POSITION: Found unit vector of ");
	PRINTVECTOR(Var0);
	PRINTSTRING(", got heading of ");
	PRINTFLOAT(UNK_0x9C40E671(&Var0));
	PRINTNL();
	return UNK_0x9C40E671(&Var0);
}

struct<8> Function_361(bool bParam0) //Position: 0x1383A / 79930
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

bool Function_362(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x138A6 / 80038
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

void Function_363() //Position: 0x139AC / 80300
{
	if (Function_359(&iLocal_17 + 544[12], 1) && Function_359(&iLocal_17 + 544[02], 1))
	{
		if (IS_GRINGO_VALID(&uLocal_720))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(&uLocal_720))
			{
				GRINGO_ALLOW_ACTIVATION(&uLocal_720, true);
			}
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 896[11]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[11]))
		{
			TASK_KILL_CHAR(&iLocal_17 + 544[02], &Global_54076);
			TASK_KILL_CHAR(&iLocal_17 + 544[12], &Global_54076);
			DESTROY_VOLUME(&iLocal_17 + 896[11]);
		}
	}
	if (!iLocal_756)
	{
		if (MEMORY_GET_IS_VISIBLE(&iLocal_17 + 544[22], &Global_54076))
		{
			Function_346(&iLocal_17 + 544[22]);
			Local_724 = Function_346(&iLocal_17 + 544[22]);
			TASK_SHOOT_FROM_POSITION(&iLocal_17 + 544[22], &Global_54076, &Local_724);
			iLocal_756 = 1;
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 896[13]))
	{
		if (!Function_359(&iLocal_17 + 544[52], 1))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1360))
			{
				Function_250(&iLocal_17 + 1944[8]);
				Local_724 = Function_250(&iLocal_17 + 1944[8]);
				TASK_CLEAR(&iLocal_17 + 544[52]);
				TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_17 + 544[52], &Local_724, GET_OBJECT_HEADING(&iLocal_17 + 1944[8]), -1f);
				DESTROY_VOLUME(&iLocal_17 + 896[13]);
			}
			else if (!iLocal_757)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[13]))
				{
					TASK_CLEAR(&iLocal_17 + 544[52]);
					TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 544[52], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_17 + 2040), -1.0f, 3.0f);
					iLocal_757 = 1;
				}
			}
			else if (iLocal_757)
			{
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[13]))
				{
					TASK_CLEAR(&iLocal_17 + 544[52]);
					TASK_HIDE_AT_COVER(&iLocal_17 + 544[52], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_17 + 2040), -1.0f, 6.0f, 0);
					if (!DECOR_CHECK_EXIST(&iLocal_17 + 544[52], "AiCoverDontPeek"))
					{
						DECOR_SET_BOOL(&iLocal_17 + 544[52], "AiCoverDontPeek", 1);
					}
					iLocal_757 = 0;
				}
			}
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 896[5]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[5]))
		{
			Function_250(&iLocal_17 + 1944[7]);
			Local_724 = Function_250(&iLocal_17 + 1944[7]);
			Function_361(&Global_54076);
			bLocal_732 = Function_360(StackVal, &iLocal_17 + 544[52], Function_361(&Global_54076));
			TASK_CLEAR(&iLocal_17 + 544[52]);
			MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[52], 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_17 + 544[52], &Local_724, bLocal_732, -1f);
			DESTROY_VOLUME(&iLocal_17 + 896[5]);
			DESTROY_VOLUME(&iLocal_17 + 896[13]);
		}
	}
	if (!iLocal_766)
	{
		if (((((Function_362(&Global_54076, &iLocal_17 + 544[22], 1, 0, 0, 3212836864) || Function_362(&Global_54076, &iLocal_17 + 544[32], 1, 0, 0, 3212836864)) || Function_362(&Global_54076, &iLocal_17 + 544[42], 1, 0, 0, 3212836864)) || Function_362(&iLocal_17 + 544[22], &Global_54076, 1, 0, 0, 3212836864)) || Function_362(&iLocal_17 + 544[32], &Global_54076, 1, 0, 0, 3212836864)) || Function_362(&iLocal_17 + 544[42], &Global_54076, 1, 0, 0, 3212836864))
		{
			AUDIO_MUSIC_SET_MOOD("GRAVE_GUNFIGHT_02_HIGH", 0, 4294967295, 4294967295);
			iLocal_766 = 1;
		}
	}
	if (!iLocal_767)
	{
		if ((Function_359(&iLocal_17 + 544[22], 1) && Function_359(&iLocal_17 + 544[32], 1)) && Function_359(&iLocal_17 + 544[42], 1))
		{
			AUDIO_MUSIC_SET_MOOD("GRAVE_GUNFIGHT_02", 0, 4294967295, 4294967295);
			iLocal_767 = 1;
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 896[3]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[3]))
		{
			bLocal_744 = TASK_SEQUENCE_OPEN();
			Function_250(&iLocal_17 + 1944[6]);
			Local_724 = Function_250(&iLocal_17 + 1944[6]);
			TASK_GO_TO_OBJECT(0, &iLocal_17 + 1944[6], 2, 1, 1);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_724, GET_OBJECT_HEADING(&iLocal_17 + 1944[6]), 3.0f);
			TASK_CROUCH(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&iLocal_17 + 544[62]);
			TASK_SEQUENCE_PERFORM(&iLocal_17 + 544[62], bLocal_744);
			TASK_SEQUENCE_RELEASE(bLocal_744, 1);
			TASK_PRIORITY_SET(&iLocal_17 + 544[62], true);
			DESTROY_VOLUME(&iLocal_17 + 896[3]);
			DESTROY_VOLUME(&iLocal_17 + 896[4]);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 896[4]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[4]))
		{
			Function_250(&iLocal_17 + 1944[0]);
			Local_724 = Function_250(&iLocal_17 + 1944[0]);
			MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[62], 1);
			bLocal_744 = TASK_SEQUENCE_OPEN();
			TASK_SHOOT_ENEMIES_FROM_COVER(0, FIND_NEAREST_COVER_LOCATION(&Local_724, 2.0f, GET_OBJECT_HEADING(&iLocal_17 + 1944[0]), 60.0f, 7), 2.0f, 1086324736);
			TASK_SHOOT_ENEMIES_FROM_POSITION(false, &Local_724, GET_OBJECT_HEADING(&iLocal_17 + 1944[0]), -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&iLocal_17 + 544[62]);
			TASK_SEQUENCE_PERFORM(&iLocal_17 + 544[62], bLocal_744);
			TASK_SEQUENCE_RELEASE(bLocal_744, 1);
			TASK_PRIORITY_SET(&iLocal_17 + 544[62], true);
			DESTROY_VOLUME(&iLocal_17 + 896[3]);
			DESTROY_VOLUME(&iLocal_17 + 896[4]);
			DESTROY_VOLUME(&iLocal_17 + 896[5]);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 896[2]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[2]))
		{
			if (IS_ACTOR_VALID(&iLocal_17 + 544[42]))
			{
				TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iLocal_17 + 544[42], -1.0f);
			}
			DESTROY_VOLUME(&iLocal_17 + 896[2]);
		}
	}
	if (iLocal_772)
	{
		if (IS_ACTOR_VALID(&iLocal_17 + 544[22]))
		{
			ADD_ACTOR_STAY_WITHIN_VOLUME(&iLocal_17 + 544[22], &iLocal_17 + 896[12]);
			bLocal_744 = TASK_SEQUENCE_OPEN();
			TASK_GO_NEAR_OBJECT(0, &iLocal_17 + 1944[1], 2.0f, 2, 1, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(0, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&iLocal_17 + 544[22]);
			TASK_SEQUENCE_PERFORM(&iLocal_17 + 544[22], bLocal_744);
			TASK_SEQUENCE_RELEASE(bLocal_744, 1);
			TASK_PRIORITY_SET(&iLocal_17 + 544[22], true);
			iLocal_772 = 0;
		}
	}
	return;
}

int Function_364(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x13FB0 / 81840
{
	bool bVar0;
	int iVar1;
	
	if (!IS_ACTOR_VALID(&iParam0))
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
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_362(&iParam0, &iVar1, bParam2, &bParam3, &bParam4, &bParam5))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_365() //Position: 0x1401D / 81949
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_WaitingForJonToGo", "Grave03_WaitingForJonToGo", 0, 1, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_366(int iParam0) //Position: 0x14076 / 82038
{
	Function_367(0, &Global_54076, iParam0, 0);
	Function_367(1, &bLocal_591, iParam0, 0);
	Function_367(2, &iLocal_17 + 288[02], iParam0, 0);
	Function_367(3, &iLocal_17 + 288[12], iParam0, 0);
	Function_367(4, &iLocal_17 + 400[12], iParam0, 0);
	Function_367(5, &iLocal_17 + 544[22], iParam0, 0);
	Function_367(6, &iLocal_17 + 400[12], iParam0, 0);
	Function_367(7, &iLocal_17 + 352[12], iParam0, 0);
	Function_367(8, &iLocal_17 + 480[02], iParam0, 0);
	Function_367(9, &iLocal_17 + 544[52], iParam0, 0);
	return;
}

void Function_367(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x14114 / 82196
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_148(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_368(var uParam0, var uParam1, bool bParam2) //Position: 0x1413C / 82236
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
				MEMORY_IDENTIFY(&uParam0, &uVar1);
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uParam0, &uVar1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

void Function_369() //Position: 0x1419C / 82332
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Grave03_FindsUnlockedDoor", "Grave03_FindsUnlockedDoor", 1, 1, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_370(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x141F5 / 82421
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
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&iParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_371() //Position: 0x1428A / 82570
{
	bool bVar0;
	
	Function_376();
	Function_235(&iLocal_17 + 680, 0);
	Function_375(&iLocal_17 + 680, 0);
	Function_374(&iLocal_17 + 680);
	Function_373(&iLocal_17 + 680, 1);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_17 + 680, 2560);
	bLocal_708 = &iLocal_17 + 680;
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 680))
	{
		COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_17 + 680, bVar0), 0);
		bVar0++;
	}
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 544[02], 1);
	TASK_STAND_STILL(&iLocal_17 + 544[02], -1.0f, 0, 0);
	TASK_DRAW_HOLSTER_WEAPON(&iLocal_17 + 544[12], 1);
	TASK_STAND_STILL(&iLocal_17 + 544[12], -1.0f, 0, 0);
	Local_724 = Vector(-4093,665f, 38,481f, 2942,288f);
	TASK_POINT_GUN_AT_COORD(&iLocal_17 + 544[22], &Local_724, -1.0f);
	Function_372(&iLocal_17 + 544[22], 3212836864);
	Function_372(&iLocal_17 + 544[32], 3212836864);
	TASK_PRIORITY_SET(&iLocal_17 + 544[32], false);
	ADD_ACTOR_STAY_WITHIN_VOLUME(&iLocal_17 + 544[42], &iLocal_17 + 1176);
	Function_250(&iLocal_17 + 1944[1]);
	Local_724 = Function_250(&iLocal_17 + 1944[1]);
	bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1944[1]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 544[42], FIND_NEAREST_COVER_LOCATION(&Local_724, 2.0f, bLocal_732, 90.0f, 7), -1.0f, 1086324736);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_17 + 544[62], 20, 1.0f);
	TASK_HIDE_AT_COVER(&iLocal_17 + 544[52], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_17 + 2040), -1.0f, 6.0f, 0);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[72]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[72], 8, false, 1, 1);
	ACTOR_PUT_WEAPON_IN_HAND(&iLocal_17 + 544[72], 8, 1);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[72], 0);
	Local_724 = Vector(-4088,459f, 40,499f, 2950,366f);
	TASK_POINT_GUN_AT_COORD(&iLocal_17 + 544[72], &Local_724, -1.0f);
	MEMORY_ALLOW_SHOOTING(&iLocal_17 + 544[72], false);
	TASK_PRIORITY_SET(&iLocal_17 + 544[72], true);
	uLocal_696 = CREATE_OBJECTSET_IN_LAYOUT("CorpseObjSet", &uLocal_552, 4294967295, 0);
	DECOR_SET_OBJECT(&iLocal_17 + 544[72], "ReturnCorpse", &uLocal_696);
	return;
}

void Function_372(var uParam0, int iParam1) //Position: 0x144B0 / 83120
{
	var uVar0;
	
	GET_POSITION(&uParam0, &uVar0);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&uParam0, &uVar0, GET_HEADING(&uParam0), &iParam1);
	return;
}

void Function_373(var uParam0, int iParam1) //Position: 0x144CF / 83151
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&uVar1, &iParam1);
			}
			bVar0++;
		}
	}
	else
	{
		LOG_ERROR("ERROR:  SETUP_SQUAD_AI_COMBAT_SET_NEW_STATE_MACHINE was passed an invalid squad");
	}
	return;
}

void Function_374(var uParam0) //Position: 0x14572 / 83314
{
	bLocal_745 = false;
	while (bLocal_745 <= SQUAD_GET_SIZE(&uParam0))
	{
		iLocal_712 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bLocal_745);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_712, 20, 0,8f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_712, 49, 6.0f);
		COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iLocal_712, 0,7f);
		bLocal_745++;
	}
	return;
}

void Function_375(var uParam0, int iParam1) //Position: 0x145C4 / 83396
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_376() //Position: 0x145FE / 83454
{
	(&iLocal_17 + 680) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "nhouseGuys"));
	*(&iLocal_17 + 544[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "houseGuy_1", 507, Vector(-4094,222f, 37,21381f, 2948,28f), Vector(0.0f, 246.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 544[02], &iLocal_17 + 680);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[02], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[02], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[02], 0);
	*(&iLocal_17 + 544[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "houseGuy_2", 506, Vector(-4093,075f, 36,82227f, 2947,902f), Vector(178,5827f, -59,84823f, -179,4288f));
	SQUAD_JOIN(&iLocal_17 + 544[12], &iLocal_17 + 680);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[12], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[12], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[12], 0);
	*(&iLocal_17 + 544[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "houseGuy_3", 507, Vector(-4082,036f, 37,21073f, 2938,076f), Vector(0.0f, 116.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 544[22], &iLocal_17 + 680);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[22], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[22], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[22], 0);
	*(&iLocal_17 + 544[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "houseGuy_5", 509, Vector(-4085,862f, 40,60736f, 2935,693f), Vector(0.0f, 155,1318f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 544[32], &iLocal_17 + 680);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[32]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[32], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[32], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[32], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[32], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[32], 0);
	*(&iLocal_17 + 544[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "houseGuy_7", 514, Vector(-4089,863f, 37,20628f, 2940,389f), Vector(0.0f, 101,9665f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 544[42], &iLocal_17 + 680);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[42]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[42], 40, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[42], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[42], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[42], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[42], 0);
	*(&iLocal_17 + 544[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "houseGuy10", 508, Vector(-4090,121f, 40,62067f, 2949,701f), Vector(0.0f, -30,83462f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 544[52], &iLocal_17 + 680);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[52]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[52], 40, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[52], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[52], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[52], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[52], 0);
	*(&iLocal_17 + 544[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "houseGuy_8", 511, Vector(-4099,772f, 40,58754f, 2941,927f), Vector(0.0f, -27.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 544[62], &iLocal_17 + 680);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[62]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[62], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[62], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[62], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[62], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[62], 0);
	*(&iLocal_17 + 544[72]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "leader", 515, Vector(-4099,708f, 40,58543f, 2948,07f), Vector(0.0f, 253.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 544[72], &iLocal_17 + 680);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 544[72]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 544[72], 41, 0,999f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 544[72], -1.0f, 0, 0);
	TASK_STAND_STILL(&iLocal_17 + 544[72], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 544[72], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 544[72], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 544[72], 0);
	return;
}

int Function_377(float fParam0, bool bParam1, int iParam2) //Position: 0x14B2E / 84782
{
	return Function_378(Global_43789, &fParam0, &bParam1, iParam2);
}

int Function_378(int iParam0, char* cParam1, bool bParam3) //Position: 0x14B42 / 84802
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_88(iParam0))
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

void Function_379(float fParam0, var uParam1) //Position: 0x14BE7 / 84967
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	
	Var2 = Vector(0.0f, 0.0f, 0.0f);
	GET_VOLUME_CENTER(&fParam0, &Var0);
	Var2.f_4 = GET_VOLUME_HEADING(&fParam0);
	GET_VOLUME_SCALE(&fParam0, &Var4);
	DESTROY_VOLUME(&fParam0);
	CREATE_OBSTACLE_IN_LAYOUT(&uParam1, Function_57(), Var0, Var2, Var4);
	return;
}

void Function_380() //Position: 0x14C2A / 85034
{
	GRINGO_ALLOW_ACTIVATION(&uLocal_720, false);
	uLocal_792 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 2128, 335, 0f, 2, 0);
	SET_BLIP_PRIORITY(&uLocal_792, 3);
	SET_BLIP_NAME(&uLocal_792, "Grave03_Blip_Treasure");
	return;
}

void Function_381(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x14C72 / 85106
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
	if (iParam2 != Global_53524.f_48 && !Function_388())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_387(0);
	Function_386();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_99())
	{
		Function_384(iParam2);
	}
	Function_383(uParam3, iVar0, iVar1);
	Function_382();
}

void Function_382() //Position: 0x14D1B / 85275
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

void Function_383(int iParam0, bool bParam1, bool bParam2) //Position: 0x14D5C / 85340
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
	if (Function_88(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_46();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_384(bool bParam0) //Position: 0x14EC5 / 85701
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_385() };
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
	PLAYSTAT_INT("HC_MONEY", Function_70(0));
	PLAYSTAT_INT("HC_FAME", Function_70(3));
	PLAYSTAT_INT("HC_HONOR", Function_70(1));
	return;
}

struct<16> Function_385() //Position: 0x1505D / 86109
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

void Function_386() //Position: 0x150A3 / 86179
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_387(bool bParam0) //Position: 0x150C7 / 86215
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

bool Function_388() //Position: 0x150F6 / 86262
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

void Function_389() //Position: 0x15111 / 86289
{
	if (Function_348(Global_46736[1]))
	{
		if (IS_DOOR_VALID(Function_377("tumbleweed", "mansion", 1)))
		{
			bLocal_698 = Function_377("tumbleweed", "mansion", 1);
			CLOSE_DOOR_FAST(&bLocal_698);
			Function_130(&bLocal_698, 0);
		}
		if (IS_DOOR_VALID(Function_377("tumbleweed", "mansion", 2)))
		{
			bLocal_700 = Function_377("tumbleweed", "mansion", 2);
			CLOSE_DOOR_FAST(&bLocal_700);
			Function_130(&bLocal_700, 0);
		}
		if (IS_DOOR_VALID(Function_377("tumbleweed", "mansion", 9)))
		{
			bLocal_702 = Function_377("tumbleweed", "mansion", 9);
			CLOSE_DOOR_FAST(&bLocal_702);
			Function_130(&bLocal_702, 0);
		}
		if (IS_DOOR_VALID(Function_377("tumbleweed", "mansion", 8)))
		{
			bLocal_704 = Function_377("tumbleweed", "mansion", 8);
			Function_163(&bLocal_704, 1);
			OPEN_DOOR_DIRECTION(&bLocal_704, 0);
			HIDE_PHYSINST(&bLocal_704);
			DESTROY_OBJECT(&bLocal_704);
		}
		if (IS_DOOR_VALID(Function_377("tumbleweed", "mansion", 4)))
		{
			uLocal_706 = Function_377("tumbleweed", "mansion", 4);
			Function_163(&uLocal_706, 1);
			OPEN_DOOR_DIRECTION(&uLocal_706, 0);
			HIDE_PHYSINST(&uLocal_706);
			DESTROY_OBJECT(&uLocal_706);
		}
	}
	return;
}

int Function_390() //Position: 0x152D0 / 86736
{
	Function_325(&iLocal_17 + 168, 507, 2, 0);
	Function_325(&iLocal_17 + 168, 506, 2, 0);
	Function_325(&iLocal_17 + 168, 509, 2, 0);
	Function_325(&iLocal_17 + 168, 514, 2, 0);
	Function_325(&iLocal_17 + 168, 508, 2, 0);
	Function_325(&iLocal_17 + 168, 511, 2, 0);
	Function_325(&iLocal_17 + 168, 515, 2, 0);
	if (Function_318(&iLocal_17 + 168))
	{
		return 1;
	}
	return 0;
}

void Function_391(bool bParam0) //Position: 0x1533E / 86846
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

void Function_392() //Position: 0x15389 / 86921
{
	if (!iLocal_773[3])
	{
		if (IS_ACTOR_VALID(&iLocal_17 + 544[22]))
		{
			if (!Function_359(&iLocal_17 + 544[22], 1))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &iLocal_17 + 544[22], 20.0f))
				{
					if (Function_395(&iLocal_17 + 544[22], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						iLocal_773[3] = 1;
						Function_394();
					}
				}
			}
		}
	}
	if (!iLocal_773[4])
	{
		if (IS_ACTOR_VALID(&iLocal_17 + 544[52]))
		{
			if (!Function_359(&iLocal_17 + 544[52], 1))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &iLocal_17 + 544[52], 20.0f))
				{
					if (Function_395(&iLocal_17 + 544[52], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						iLocal_773[4] = 1;
						Function_393();
					}
				}
			}
		}
	}
	return;
}

void Function_393() //Position: 0x1545F / 87135
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(9, "Grave03_TreasureHunterTaunts6", "Grave03_TreasureHunterTaunts6", 0, 1, 1, 0, 1);
	Function_366(513);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_394() //Position: 0x154C3 / 87235
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(5, "Grave03_TreasureHunterTaunts2", "Grave03_TreasureHunterTaunts2", 0, 1, 1, 0, 1);
	Function_366(33);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_395(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x15525 / 87333
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_396(int iParam0) //Position: 0x15545 / 87365
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&iParam0))
	{
		bVar0 = false;
		while (bVar0 < (Function_398(&iParam0) - 1))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				Function_397(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_397(var uParam0) //Position: 0x1558E / 87438
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (!DECOR_CHECK_EXIST(&uParam0, "blipped"))
		{
			if (((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&uParam0)) > 1.0f || Function_362(&uParam0, &Global_54076, 1, 0, 0, 3212836864)) || MEMORY_GET_IS_VISIBLE(&uParam0, &Global_54076))
			{
				DECOR_SET_BOOL(&uParam0, "blipped", 1);
				iLocal_722 = ADD_BLIP_FOR_ACTOR(&uParam0, 322, 0, 2, 0);
				SET_BLIP_IMPAIRMENT_MASK(&iLocal_722, 690824);
			}
		}
	}
	return;
}

int Function_398(int iParam0) //Position: 0x1560B / 87563
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

void Function_399() //Position: 0x15661 / 87649
{
	if (!iLocal_761)
	{
		if (IS_ACTOR_SHOOTING(&Global_54076))
		{
			Function_237(&iLocal_674);
		}
		if (Function_289(&iLocal_662) < 1.0f)
		{
			if ((!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE()) && Function_289(&iLocal_670) < 15.0f)
			{
				if (Function_406(&Global_54076, &bLocal_591) < 24.0f)
				{
					Function_405();
					Function_237(&iLocal_670);
				}
				else if (Function_404() && IS_AI_ACTOR_ENGAGED_IN_COMBAT(&bLocal_591))
				{
					if (Function_289(&iLocal_674) < 20.0f)
					{
						Function_403();
						Function_237(&iLocal_674);
						Function_237(&iLocal_670);
					}
					else if (RAND_FLOAT_RANGE(1.0f, 500.0f) < 250.0f)
					{
						Function_402();
						Function_237(&iLocal_670);
					}
					else
					{
						Function_401();
						Function_237(&iLocal_670);
					}
				}
				else
				{
					Function_365();
					Function_237(&iLocal_670);
				}
				Function_237(&iLocal_662);
			}
		}
	}
	else if (!iLocal_759)
	{
		if (ACTORS_IN_RANGE(&Global_54076, &bLocal_591, 15.0f))
		{
			Function_400();
			iLocal_759 = 1;
		}
	}
	return;
}

void Function_400() //Position: 0x1574E / 87886
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_ReturnedTreasureSeth", "Grave03_ReturnedTreasureSeth", 0, 1, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_401() //Position: 0x157AD / 87981
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_SethShoutsEncJon", "Grave03_SethShoutsEncJon", 0, 2, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_402() //Position: 0x15804 / 88068
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_SethTauntsAttackers", "Grave03_SethTauntsAttackers", 0, 2, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_403() //Position: 0x15861 / 88161
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_JonNoShootGF", "Grave03_JonNoShootGF", 0, 2, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

bool Function_404() //Position: 0x158B0 / 88240
{
	if (iLocal_566 == 0)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 344) >= 0)
		{
			return 1;
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 536) >= 0)
		{
			return 1;
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 472) >= 0)
		{
			return 1;
		}
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 392) >= 0)
		{
			return 1;
		}
		if (!Function_359(&iLocal_17 + 352[12], 1))
		{
			return 1;
		}
		return 0;
	}
	if (SQUAD_IS_VALID(&iLocal_17 + 680))
	{
		return SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 680) < 0;
	}
	return 0;
}

void Function_405() //Position: 0x1593C / 88380
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_RunsAwayGF", "Grave03_RunsAwayGF", 0, 2, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

float Function_406(float fParam0, bool bParam1) //Position: 0x15987 / 88455
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&fParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&fParam0, &Var0);
	GET_POSITION(&bParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_407() //Position: 0x15A7C / 88700
{
	switch (iLocal_747)
	{
		case 0x00000000:
			if (IS_BLIP_VALID(&iLocal_790))
			{
				if (IS_BLIP_VISIBLE(&iLocal_790))
				{
					if (IS_VOLUME_VALID(&iLocal_17 + 1128))
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1128) && !Function_404())
						{
							if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076)))
							{
								DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(&Global_54076));
								SCRIPT_BREAKPOINT("DESTROY GUY ON SHOULDER");
							}
							Function_412(&iLocal_17, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
							Function_410(StackVal, StackVal, Vector(-4085,193f, 38,739f, 2949,181f), Vector(0,213f, -0,075f, -0,974f), 0x40a00000, 0, 1);
							HUD_ENABLE(0);
							Function_250(&iLocal_17 + 1376[8]);
							Local_724 = Function_250(&iLocal_17 + 1376[8]);
							bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1376[8]);
							SET_ANIM_SET_FOR_ACTOR(&Global_54076, "door_locked", 1);
							SET_PLAYER_CONTROL(0, 0, 0, 0);
							SET_MOVER_FROZEN(&Global_54076, 1);
							TELEPORT_ACTOR_WITH_HEADING(&Global_54076, Local_724, bLocal_732, 0, 1, 1);
							SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "door_locked");
							AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&bLocal_591, 1);
							TASK_CLEAR(&bLocal_591);
							TASK_STAND_STILL(&bLocal_591, -1.0f, 0, 0);
							AI_GOAL_LOOK_AT_ACTOR(&bLocal_591, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
							Function_250(&iLocal_17 + 1376[6]);
							TELEPORT_ACTOR_WITH_HEADING(&bLocal_591, Function_250(&iLocal_17 + 1376[6]), GET_OBJECT_HEADING(&iLocal_17 + 1376[6]), 1, 1, 1);
							SET_ANIM_SET_FOR_ACTOR(&bLocal_591, "Grave03_Seth_idle", 0);
							SET_ACTION_NODE_FOR_ACTOR(&bLocal_591, "Grave03_Seth_idle");
							Function_237(&iLocal_670);
							iLocal_747 = 1;
							Function_237(&iLocal_662);
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "door_locked"))
			{
				if (IS_BLIP_VALID(&iLocal_790))
				{
					REMOVE_BLIP(&iLocal_790);
					HUD_CLEAR_OBJECTIVE_QUEUE();
					HUD_CLEAR_OBJECTIVE();
				}
				iLocal_747 = 2;
				Function_237(&iLocal_670);
				Function_237(&iLocal_662);
			}
			break;
		
		case 0x00000002:
			if (Function_289(&iLocal_662) <= 0.0f)
			{
				Function_409();
				ADD_BLIP_FOR_OBJECT(&iLocal_17 + 1136, 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&iLocal_17 + 1136), 3);
				SET_MOVER_FROZEN(&Global_54076, 0);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				HUD_ENABLE(1);
				AI_GOAL_LOOK_CLEAR(&bLocal_591);
				RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
				SET_ANIM_SET_FOR_ACTOR(&bLocal_591, "Grave03_Seth_idle", 0);
				iLocal_747 = 3;
				Function_237(&iLocal_662);
			}
			break;
		
		case 0x00000003:
			if (!iLocal_762)
			{
				if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "door_locked") || Function_289(&iLocal_662) <= 2.0f)
				{
					Function_408(1, 1);
					iLocal_762 = 1;
				}
			}
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!bLocal_769)
				{
					DESTROY_VOLUME(&iLocal_17 + 1128);
				}
				Function_370("Grave03_obj04", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_747 = 4;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_762)
			{
				Function_408(1, 1);
				iLocal_762 = 1;
				iLocal_747 = 5;
			}
			break;
	}
	return;
}

void Function_408(bool bParam0, bool bParam1) //Position: 0x15DAA / 89514
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

void Function_409() //Position: 0x15E00 / 89600
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(0, "Grave03_FindsDoorLocked", "Grave03_FindsDoorLocked", 1, 1, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_410(struct<2> Param0, struct<2> Param2, int iParam4, var uParam5, var uParam6) //Position: 0x15E55 / 89685
{
	Function_411(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
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

void Function_411(float fParam0) //Position: 0x15F6E / 89966
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_412(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, var uParam13) //Position: 0x15F81 / 89985
{
	Function_408(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_57(), 2, 1);
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

void Function_413() //Position: 0x1608A / 90250
{
	Function_414();
	if (iLocal_743 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[0]) || bLocal_749)
		{
			Function_346(&bLocal_591);
			Function_250(&iLocal_17 + 1600[1]);
			if (VDIST(Function_346(&bLocal_591), Function_250(&iLocal_17 + 1600[1])) <= 5.0f && !IS_ACTOR_IN_VOLUME(&bLocal_591, &iLocal_17 + 1184))
			{
				Function_250(&iLocal_17 + 1600[1]);
				TELEPORT_ACTOR_WITH_HEADING(&bLocal_591, Function_250(&iLocal_17 + 1600[1]), GET_OBJECT_HEADING(&iLocal_17 + 1600[1]), 0, 1, 1);
			}
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
			Function_250(&iLocal_17 + 1824[0]);
			uLocal_727 = Function_250(&iLocal_17 + 1824[0]);
			iLocal_718 = FIND_NEAREST_COVER_LOCATION(&uLocal_727, 2.0f, 330.0f, 20.0f, 7);
			AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_591, 0);
			bLocal_744 = TASK_SEQUENCE_OPEN();
			Function_250(&iLocal_17 + 1944[6]);
			Local_724 = Function_250(&iLocal_17 + 1944[6]);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_17 + 2120, 1, 0, 0, 0, false);
			TASK_HIDE_AT_COVER(0, &iLocal_718, -1.0f, 6f, 1);
			TASK_CROUCH(false, -1.0f);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&bLocal_591);
			TASK_SEQUENCE_PERFORM(&bLocal_591, bLocal_744);
			TASK_SEQUENCE_RELEASE(bLocal_744, 1);
			TASK_PRIORITY_SET(&bLocal_591, true);
			Function_237(&iLocal_670);
			iLocal_743 = 1;
		}
	}
	else if (iLocal_743 == 1)
	{
		if (Function_359(&iLocal_17 + 544[02], 1) && Function_359(&iLocal_17 + 544[12], 1))
		{
			if (iLocal_748 < 0 || bLocal_749)
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&bLocal_591, 1);
				Function_250(&iLocal_17 + 1824[2]);
				uLocal_727 = Function_250(&iLocal_17 + 1824[2]);
				iLocal_718 = FIND_NEAREST_COVER_LOCATION(&uLocal_727, 2.0f, 330.0f, 20.0f, 7);
				TASK_CLEAR(&bLocal_591);
				TASK_HIDE_AT_COVER(&bLocal_591, &iLocal_718, -1.0f, 6.0f, 0);
				TASK_PRIORITY_SET(&bLocal_591, true);
				if (!bLocal_749)
				{
					AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				}
				Function_401();
				Function_237(&iLocal_670);
				iLocal_743 = 2;
			}
		}
	}
	else if (iLocal_743 == 2)
	{
		if ((Function_359(&iLocal_17 + 544[32], 1) && Function_359(&iLocal_17 + 544[42], 1)) && Function_359(&iLocal_17 + 544[22], 1))
		{
			if (iLocal_748 >= 1)
			{
				Function_250(&iLocal_17 + 1824[4]);
				uLocal_727 = Function_250(&iLocal_17 + 1824[4]);
				iLocal_718 = FIND_NEAREST_COVER_LOCATION(&uLocal_727, 2.0f, 220.0f, 30.0f, 7);
				if (IS_ACTOR_VALID(&iLocal_17 + 544[22]))
				{
					Function_361(&iLocal_17 + 544[22]);
					Local_724 = Function_361(&iLocal_17 + 544[22]);
				}
				bLocal_744 = TASK_SEQUENCE_OPEN();
				TASK_HIDE_AT_COVER(0, &iLocal_718, 4.0f, 6f, 1);
				TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_718, -1.0f, 1086324736);
				TASK_CROUCH(false, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&bLocal_591);
				TASK_SEQUENCE_PERFORM(&bLocal_591, bLocal_744);
				TASK_SEQUENCE_RELEASE(bLocal_744, 1);
				TASK_PRIORITY_SET(&bLocal_591, true);
				Function_402();
				Function_237(&iLocal_670);
				iLocal_743 = 3;
			}
		}
	}
	else if (iLocal_743 == 3)
	{
		if (Function_359(&iLocal_17 + 544[52], 1))
		{
			if (iLocal_748 >= 2)
			{
				Function_250(&iLocal_17 + 1824[5]);
				uLocal_727 = Function_250(&iLocal_17 + 1824[5]);
				iLocal_718 = FIND_NEAREST_COVER_LOCATION(&uLocal_727, 5.0f, 150.0f, 30.0f, 7);
				TASK_CLEAR(&bLocal_591);
				TASK_HIDE_AT_COVER(&bLocal_591, &iLocal_718, -1.0f, 6f, 1);
				Function_402();
				Function_237(&iLocal_670);
				iLocal_743 = 4;
			}
		}
	}
	return;
}

void Function_414() //Position: 0x16384 / 91012
{
	if (IS_VOLUME_VALID(&iLocal_17 + 1304[0]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1304[0]))
		{
			iLocal_748 = 1;
			DESTROY_VOLUME(&iLocal_17 + 1304[0]);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 1304[1]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1304[1]))
		{
			iLocal_748 = 2;
			iLocal_772 = 1;
			DESTROY_VOLUME(&iLocal_17 + 1304[1]);
			DESTROY_VOLUME(&iLocal_17 + 1304[0]);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 1304[2]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1304[2]))
		{
			iLocal_748 = 3;
			DESTROY_VOLUME(&iLocal_17 + 1304[2]);
			DESTROY_VOLUME(&iLocal_17 + 1304[3]);
			DESTROY_VOLUME(&iLocal_17 + 1304[1]);
			DESTROY_VOLUME(&iLocal_17 + 1304[0]);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_17 + 1304[3]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1304[3]))
		{
			iLocal_748 = 3;
			DESTROY_VOLUME(&iLocal_17 + 1304[2]);
			DESTROY_VOLUME(&iLocal_17 + 1304[3]);
			DESTROY_VOLUME(&iLocal_17 + 1304[1]);
			DESTROY_VOLUME(&iLocal_17 + 1304[0]);
		}
	}
	return;
}

bool Function_415(struct<2> Param0, int iParam2, int iParam3, int iParam4, bool bParam5, var uParam6, bool bParam7, var uParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x164AA / 91306
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_422(&Global_54076, &iParam3, iParam2))
	{
		Function_243(&bParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_422(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_421(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				if (!STRINGS_ARE_EQUAL(&iParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_370(&iParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				}
				Function_420(2);
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_419(&uParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_419(&iParam9, 0, 4294967295, 1, &iParam3);
			}
			if ((!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9)))
			{
				ADD_BLIP_FOR_ACTOR(&iParam3, &iParam10, 0, 2, 0);
				DECOR_SET_BOOL(&iParam3, "MADR_addedblip", 1);
			}
		}
		return 1;
	}
	if (Function_421(2))
	{
		Function_418(2);
		if (!Function_417())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_416();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&uParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_27(&iParam3);
				Function_229(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&uParam8))
			{
				Function_419(&uParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_419(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_416() //Position: 0x16668 / 91752
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

bool Function_417() //Position: 0x16696 / 91798
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

void Function_418(bool bParam0) //Position: 0x166DD / 91869
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_41(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_419(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4) //Position: 0x16744 / 91972
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

void Function_420(bool bParam0) //Position: 0x167FF / 92159
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_80(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_421(bool bParam0) //Position: 0x16866 / 92262
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

bool Function_422(var uParam0, var uParam1, bool bParam2) //Position: 0x168B0 / 92336
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

int Function_423(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, var uParam12) //Position: 0x169C5 / 92613
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_426(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_427()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
		if ((uParam12 && Global_6623) && CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &uParam7, &uParam8, &uParam9, &uParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_424();
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
	else if ((!Function_426(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_427()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_426(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_424() //Position: 0x16C2D / 93229
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
			Function_425(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_425(char* cParam0) //Position: 0x16C81 / 93313
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

bool Function_426(bool bParam0, struct<2> Param1, float fParam3) //Position: 0x16DAA / 93610
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_361(&bParam0);
		if (VDIST(Function_361(&bParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_427() //Position: 0x16E36 / 93750
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_428() //Position: 0x16E45 / 93765
{
	Function_448();
	switch (iLocal_567)
	{
		case 0x00000000:
			Function_352(0);
			if (Function_294(&Local_554))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				CLEAR_ACTOR_MIN_SPEED(&bLocal_591);
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(10);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_349();
				bLocal_595 = Global_46736[1];
				if (!Function_348(bLocal_595))
				{
					Function_347(&Local_554);
				}
				Function_237(&iLocal_654);
				iLocal_567 = 1;
			}
			else
			{
				Function_237(&iLocal_654);
				iLocal_567 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_348(bLocal_595) || bLocal_595 != 4294967295))
			{
				if (Function_324())
				{
					if (Function_232())
					{
						Function_237(&iLocal_654);
						iLocal_567 = 2;
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_335();
			Function_447();
			Function_237(&iLocal_654);
			iLocal_567 = 6;
			break;
		
		case 0x00000006:
			if (!Global_6658)
			{
				if (Function_31(19, 0))
				{
					Function_446();
					Global_6658 = 1;
				}
			}
			Function_237(&iLocal_654);
			iLocal_567 = 7;
			break;
		
		case 0x00000007:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_445();
				Function_237(&iLocal_654);
				iLocal_567 = 8;
			}
			break;
		
		case 0x00000008:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_370("Grave03_obj_return_house", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_790 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 1128, 330, 0f, 2, 0);
				SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&iLocal_17 + 1128), 3);
				Function_237(&iLocal_654);
				iLocal_567 = 9;
			}
			break;
		
		case 0x00000009:
			if (iLocal_746 > 2)
			{
				if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 344) > 1 || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1232[4]))
				{
					AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
					Function_444();
					if (!iLocal_753)
					{
						Function_439();
					}
					Function_237(&iLocal_654);
					iLocal_567 = 10;
				}
			}
			break;
		
		case 0x0000000A:
			Function_433();
			if (Function_289(&iLocal_654) < 1.0f)
			{
				if (!iLocal_750)
				{
					if (Function_406(&Global_54076, &iLocal_17 + 400[12]) > 35.0f)
					{
						bLocal_745 = false;
						while (bLocal_745 <= SQUAD_GET_SIZE(&iLocal_17 + 472))
						{
							TASK_CROUCH(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_17 + 472, bLocal_745), RAND_FLOAT_RANGE(1.0f, 5.0f));
							bLocal_745++;
						}
						iLocal_750 = 1;
					}
				}
			}
			if (!iLocal_768)
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1296) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 344) > 1)
				{
					if (!Function_359(&iLocal_17 + 288[22], 1))
					{
						TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER(&iLocal_17 + 288[22], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_17 + 2080), -1.0f, 1086324736);
					}
					iLocal_768 = 1;
					Function_389();
				}
			}
			if (!iLocal_764)
			{
				if (Function_364(&Global_54076, &iLocal_17 + 536, 1, 1, 0, 3212836864) || Function_432(&iLocal_17 + 536, &Global_54076, 1, 1, 1))
				{
					RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
					AUDIO_SET_PLAYER_MOOD(1, 0);
					AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
					iLocal_764 = 1;
				}
			}
			if (!iLocal_765)
			{
				if (!Function_404())
				{
					if (!IS_BLIP_VALID(&iLocal_790))
					{
						iLocal_790 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 1128, 330, 0f, 2, 0);
						SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&iLocal_17 + 1128), 3);
					}
					Function_370("Grave03_obj_return_house", 0x40f00000, 1, 2, 0, 0, 0, 0);
					AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
					bLocal_771 = true;
					iLocal_765 = 1;
				}
			}
			if (bLocal_771)
			{
				if (IS_BLIP_VISIBLE(&iLocal_790))
				{
					if (IS_VOLUME_VALID(&iLocal_17 + 1128) && !iLocal_754)
					{
						if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1128))
						{
							iLocal_754 = 1;
						}
					}
				}
				if (IS_VOLUME_VALID(&iLocal_17 + 896[9]))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[9]))
					{
						DESTROY_VOLUME(&iLocal_17 + 896[9]);
						AUDIO_MUSIC_SET_MOOD("SUSPENSE_HIGH", 0, 4294967295, 4294967295);
					}
				}
				if (IS_VOLUME_VALID(&iLocal_17 + 1136))
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1136))
					{
						DESTROY_VOLUME(&iLocal_17 + 1136);
						iLocal_754 = 1;
						Function_369();
						Function_429();
						Function_237(&iLocal_670);
						Function_237(&iLocal_654);
						Function_237(&iLocal_666);
						iLocal_567 = 106;
					}
				}
			}
			if (IS_VOLUME_VALID(&iLocal_17 + 896[6]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 896[6]))
				{
					DESTROY_VOLUME(&iLocal_17 + 896[6]);
					iLocal_754 = 1;
					bLocal_749 = true;
					Function_229(&iLocal_17 + 1136);
					Function_369();
					Function_429();
					Function_237(&iLocal_670);
					Function_237(&iLocal_654);
					Function_237(&iLocal_666);
					iLocal_567 = 106;
				}
			}
			break;
		
		case 0x0000006A:
			iLocal_596[0] = 1;
			Function_237(&iLocal_654);
			Function_190();
			iLocal_566 = 1;
			iLocal_567 = 2;
			break;
	}
	return;
}

void Function_429() //Position: 0x172E3 / 94947
{
	Function_229(&iLocal_17 + 1128);
	if (SQUAD_IS_VALID(&iLocal_17 + 392))
	{
		Function_431(&iLocal_17 + 392);
		Function_430(&iLocal_17 + 392, 0, 0);
	}
	if (SQUAD_IS_VALID(&iLocal_17 + 472))
	{
		Function_431(&iLocal_17 + 472);
		Function_430(&iLocal_17 + 472, 0, 0);
	}
	if (SQUAD_IS_VALID(&iLocal_17 + 536))
	{
		Function_431(&iLocal_17 + 536);
		Function_430(&iLocal_17 + 536, 0, 0);
	}
	return;
}

void Function_430(var uParam0, bool bParam1, bool bParam2) //Position: 0x1734F / 95055
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
				if (!Function_395(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_431(int iParam0) //Position: 0x173D8 / 95192
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			Function_27(&iVar1);
		}
		bVar0++;
	}
	return;
}

int Function_432(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x17414 / 95252
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (Function_362(&iVar1, &iParam1, bParam2, &bParam3, &bParam4, 3212836864))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_433() //Position: 0x17481 / 95361
{
	if (!iLocal_773[0])
	{
		if (IS_ACTOR_VALID(&iLocal_17 + 400[12]))
		{
			if (!Function_359(&iLocal_17 + 400[12], 1))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &iLocal_17 + 400[12], 20.0f))
				{
					if (Function_395(&iLocal_17 + 400[12], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if ((Function_438() % 2) <= 1)
						{
							Function_437();
						}
						else
						{
							Function_436();
						}
						iLocal_773[0] = 1;
					}
				}
			}
		}
	}
	if (!iLocal_773[1])
	{
		if (IS_ACTOR_VALID(&iLocal_17 + 352[12]))
		{
			if (!Function_359(&iLocal_17 + 352[12], 1))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &iLocal_17 + 352[12], 20.0f))
				{
					if (Function_395(&iLocal_17 + 352[12], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_435();
						iLocal_773[1] = 1;
					}
				}
			}
		}
	}
	if (!iLocal_773[2])
	{
		if (IS_ACTOR_VALID(&iLocal_17 + 480[02]))
		{
			if (!Function_359(&iLocal_17 + 480[02], 1))
			{
				if (ACTORS_IN_RANGE(&Global_54076, &iLocal_17 + 480[02], 20.0f))
				{
					if (Function_395(&iLocal_17 + 480[02], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						iLocal_773[2] = 1;
						Function_434();
					}
				}
			}
		}
	}
	return;
}

void Function_434() //Position: 0x175CE / 95694
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(8, "Grave03_TreasureHunterTaunts5", "Grave03_TreasureHunterTaunts5", 0, 1, 1, 0, 1);
	Function_366(257);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_435() //Position: 0x17632 / 95794
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(7, "Grave03_TreasureHunterTaunts4", "Grave03_TreasureHunterTaunts4", 0, 1, 1, 0, 1);
	Function_366(129);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_436() //Position: 0x17694 / 95892
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(4, "Grave03_TreasureHunterTaunts3", "Grave03_TreasureHunterTaunts3", 0, 1, 1, 0, 1);
	Function_366(17);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_437() //Position: 0x176F6 / 95990
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(4, "Grave03_TreasureHunterTaunts1", "Grave03_TreasureHunterTaunts1", 0, 1, 1, 0, 1);
	Function_366(17);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

int Function_438() //Position: 0x17758 / 96088
{
	return Global_53524.f_64;
}

void Function_439() //Position: 0x17763 / 96099
{
	Function_443();
	Function_442();
	Function_441();
	Function_373(&iLocal_17 + 392, 1);
	Function_373(&iLocal_17 + 472, 1);
	Function_373(&iLocal_17 + 536, 1);
	Function_374(&iLocal_17 + 392);
	Function_374(&iLocal_17 + 472);
	Function_374(&iLocal_17 + 536);
	SQUAD_LEAVE(&iLocal_17 + 352[12]);
	Function_372(&iLocal_17 + 352[12], 3212836864);
	Function_440(&iLocal_17 + 352[12], &Global_54076, 1);
	SET_ACTOR_ONE_SHOT_DEATH(&iLocal_17 + 352[12], 1);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iLocal_17 + 392, 0, &iLocal_17 + 848[0], 4, 0);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iLocal_17 + 392, 0, &iLocal_17 + 848[0], 4294967295);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iLocal_17 + 472, 0, &iLocal_17 + 848[2], 4294967295);
	SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&iLocal_17 + 536, 0, &iLocal_17 + 848[3], 4294967295);
	SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(&iLocal_17 + 536, 0, &iLocal_17 + 848[3], 4, 0);
	DECOR_SET_INT(&iLocal_17 + 472, "curVol", 3);
	DECOR_SET_INT(&iLocal_17 + 536, "curVol", 4);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_17 + 392, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_17 + 472, 1);
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_17 + 536, 1);
	return;
}

void Function_440(var uParam0, bool bParam1, bool bParam2) //Position: 0x17896 / 96406
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&bParam1))
		{
			MEMORY_IDENTIFY(&uParam0, &bParam1);
			Function_361(&bParam1);
			uVar0 = Function_361(&bParam1);
			if (&bParam2)
			{
				MEMORY_REPORT_POSITION_AUTO(&uParam0, &bParam1, 1);
			}
			else
			{
				MEMORY_REPORT_POSITION(&uParam0, &bParam1, &uVar0);
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

void Function_441() //Position: 0x179A7 / 96679
{
	*(&iLocal_17 + 536) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "bg_hunters_3"));
	*(&iLocal_17 + 480[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg3_hunter_2", 513, Vector(-3987,396f, 28,20847f, 2940f), Vector(-292,2352f, -90,42974f, 292,5006f));
	SQUAD_JOIN(&iLocal_17 + 480[02], &iLocal_17 + 536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 480[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 480[02], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 480[02], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 480[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 480[02], 0);
	TASK_CROUCH(&iLocal_17 + 480[02], -1.0f);
	*(&iLocal_17 + 480[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg3_hunter_3", 507, Vector(-3991,72f, 28,77672f, 2928,981f), Vector(0,4012431f, -187,5269f, 0,3174013f));
	SQUAD_JOIN(&iLocal_17 + 480[12], &iLocal_17 + 536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 480[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 480[12], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 480[12], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 480[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 480[12], 0);
	TASK_CROUCH(&iLocal_17 + 480[12], -1.0f);
	*(&iLocal_17 + 480[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg3_hunter_4", 506, Vector(-3993,362f, 29,28168f, 2955f), Vector(-0,8776791f, -63,04834f, 1,047207f));
	SQUAD_JOIN(&iLocal_17 + 480[22], &iLocal_17 + 536);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 480[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 480[22], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 480[22], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 480[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 480[22], 0);
	TASK_CROUCH(&iLocal_17 + 480[22], -1.0f);
	return;
}

void Function_442() //Position: 0x17BC6 / 97222
{
	*(&iLocal_17 + 472) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "bg_hunters_2"));
	*(&iLocal_17 + 400[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg2_hunter_2", 506, Vector(-4056f, 30,98066f, 2956,746f), Vector(-1,620569f, -75,78913f, 1,835844f));
	SQUAD_JOIN(&iLocal_17 + 400[02], &iLocal_17 + 472);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 400[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 400[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 400[02], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 400[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 400[02], 0);
	TASK_CROUCH(&iLocal_17 + 400[02], -1.0f);
	*(&iLocal_17 + 400[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg2_hunter_3", 508, Vector(-4025,926f, 28,42418f, 2940f), Vector(-1,054637f, -67,83989f, 1,241591f));
	SQUAD_JOIN(&iLocal_17 + 400[12], &iLocal_17 + 472);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 400[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 400[12], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 400[12], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 400[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 400[12], 0);
	TASK_CROUCH(&iLocal_17 + 400[12], -1.0f);
	*(&iLocal_17 + 400[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg1_hunter_5", 505, Vector(-4039,451f, 30,08911f, 2959,956f), Vector(0.0f, -60,36108f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 400[22], &iLocal_17 + 472);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 400[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 400[22], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 400[22], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 400[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 400[22], 0);
	TASK_CROUCH(&iLocal_17 + 400[22], -1.0f);
	*(&iLocal_17 + 400[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg1_hunter_6", 509, Vector(-4056f, 30,98065f, 2954,006f), Vector(0.0f, -77,64235f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 400[32], &iLocal_17 + 472);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 400[32]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 400[32], 40, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 400[32], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 400[32], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 400[32], 0);
	TASK_CROUCH(&iLocal_17 + 400[32], -1.0f);
	return;
}

void Function_443() //Position: 0x17E7E / 97918
{
	*(&iLocal_17 + 392) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "bg_hunters_1"));
	*(&iLocal_17 + 352[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg1_hunter_2", 512, Vector(-4074,548f, 35,11081f, 2947,974f), Vector(2,207938f, 259,6183f, -1,906986f));
	SQUAD_JOIN(&iLocal_17 + 352[02], &iLocal_17 + 392);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 352[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 352[02], 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 352[02], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 352[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 352[02], 0);
	TASK_CROUCH(&iLocal_17 + 352[02], -1.0f);
	*(&iLocal_17 + 352[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "bg1_hunter_7", 510, Vector(-4086,04f, 40,56728f, 2947,351f), Vector(-179,0683f, -64,72552f, 179,4223f));
	SQUAD_JOIN(&iLocal_17 + 352[12], &iLocal_17 + 392);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_17 + 352[12], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 352[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 352[12], 41, 0,5f, 1, 1);
	SET_ACTOR_VISION_XRAY(&iLocal_17 + 352[12], true);
	SET_ACTOR_ONE_SHOT_DEATH(&iLocal_17 + 352[12], 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 352[12], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 352[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 352[12], 0);
	TASK_CROUCH(&iLocal_17 + 352[12], -1.0f);
	return;
}

void Function_444() //Position: 0x1801E / 98334
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_GoFindTreasure", "Grave03_GoFindTreasure", 0, 1, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_445() //Position: 0x18071 / 98417
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_TreasureMansion", "Grave03_TreasureMansion", 0, 2, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_446() //Position: 0x180C6 / 98502
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_447() //Position: 0x180DE / 98526
{
	Function_390();
	Function_249(iLocal_566);
	Function_381(StackVal, Function_249(iLocal_566), iLocal_566, Global_46736[1], Function_252(iLocal_566), 0);
	Function_232();
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&bLocal_591, 1);
	if (!IS_OBJECT_VALID(&uLocal_692))
	{
		uLocal_692 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_552, "coffinCorpse02x0", "p_gen_coffinCorpse02x", Vector(-3912,762f, 30,46479f, 2899,567f), Vector(0.0f, -135.0f, 0.0f), 1);
	}
	RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
	SET_ANIM_SET_FOR_ACTOR(&bLocal_591, "wave", 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_591, 8, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&bLocal_591, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_591, 53, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&bLocal_591, 54, 0.0f);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&bLocal_591, &iLocal_17 + 2112, 1, 0, 0, 1, false);
	SQUAD_GOAL_ADD_BATTLE_ALLIES(&uLocal_710, 2, &Global_54076, 1);
	Function_130(Function_377("tumbleweed", "mansion", 3), 1);
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	Function_286(1.0f);
	return;
}

void Function_448() //Position: 0x181F7 / 98807
{
	if (iLocal_567 < 4 && iLocal_567 > 105)
	{
		Function_463();
		if (Function_415(&iLocal_662, 60.0f, 120.0f, &bLocal_591, "GraveRobber_return", "GraveRobber_abandoned", &bLocal_582, 0, &uLocal_552, &iLocal_17, 325, 0))
		{
			if (iLocal_567 <= 10)
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE_LOW", 0, 4294967295, 4294967295);
				if (IS_BLIP_VALID(&iLocal_790))
				{
					REMOVE_BLIP(&iLocal_790);
				}
				if (!iLocal_753)
				{
					Function_439();
				}
				iLocal_785 = 1;
				Function_237(&iLocal_654);
				iLocal_567 = 10;
			}
		}
		else if (iLocal_785)
		{
			Function_370("Grave03_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_462(&iLocal_17 + 344, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			iLocal_785 = 0;
		}
		if (iLocal_567 >= 9)
		{
			Function_453();
			Function_451();
			Function_397(&iLocal_17 + 352[12]);
			Function_449(&iLocal_17 + 392);
			Function_449(&iLocal_17 + 472);
			Function_449(&iLocal_17 + 536);
			Function_407();
		}
	}
	return;
}

void Function_449(int iParam0) //Position: 0x18328 / 99112
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (!DECOR_CHECK_EXIST(&iParam0, "blipped"))
		{
			bVar0 = false;
			while (bVar0 < (Function_398(&iParam0) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
				if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&uVar1)) > 1.0f || Function_450(&iParam0, &Global_54076))
				{
					if (!DECOR_CHECK_EXIST(&iParam0, "blipped"))
					{
						DECOR_SET_BOOL(&iParam0, "blipped", 1);
						Function_462(&iParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0, 690824);
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

int Function_450(var uParam0, int iParam1) //Position: 0x183D5 / 99285
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1) && MEMORY_GET_IS_VISIBLE(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_451() //Position: 0x18433 / 99379
{
	if (!Function_291(&iLocal_682))
	{
		Function_452(&iLocal_682);
	}
	else if (Function_289(&iLocal_682) < 2.0f)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_708) <= 1)
		{
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 536) >= 0)
			{
				bLocal_708 = &iLocal_17 + 536;
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 472) >= 0)
			{
				bLocal_708 = &iLocal_17 + 472;
			}
			else if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_17 + 392) >= 0)
			{
				bLocal_708 = &iLocal_17 + 392;
			}
		}
		Function_237(&iLocal_682);
	}
	return;
}

void Function_452(int iParam0) //Position: 0x184B3 / 99507
{
	if (!Function_291(&iParam0))
	{
		Function_238(&iParam0, 0.0f);
	}
	return;
}

void Function_453() //Position: 0x184CA / 99530
{
	if (IS_OBJECT_VALID(&iLocal_17 + 1120))
	{
		if (IS_VOLUME_VALID(&iLocal_17 + 1152))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1152))
			{
				if (iLocal_746 <= 1)
				{
					iLocal_746 = 1;
				}
				DESTROY_VOLUME(&iLocal_17 + 1152);
				if (Function_461(&iLocal_17 + 536) < 0)
				{
					Function_460(&iLocal_17 + 536, &iLocal_17 + 1688);
				}
			}
		}
		if (IS_VOLUME_VALID(&iLocal_17 + 1144))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1144))
			{
				if (iLocal_746 <= 1)
				{
					iLocal_746 = 1;
				}
				DESTROY_VOLUME(&iLocal_17 + 1144);
				DESTROY_VOLUME(&iLocal_17 + 1152);
			}
		}
		if (Function_458(&Global_54076, &iLocal_17 + 1120, 35.0f))
		{
			Function_457(&iLocal_17 + 344);
			Function_456(&iLocal_17 + 344, 0);
			Function_456(&iLocal_17 + 536, 0);
			Function_456(&iLocal_17 + 472, 0);
		}
		else if (Function_458(&Global_54076, &iLocal_17 + 1120, 55.0f))
		{
			Function_457(&iLocal_17 + 392);
			Function_457(&iLocal_17 + 344);
			Function_456(&iLocal_17 + 344, 1);
			Function_456(&iLocal_17 + 536, 1);
			Function_456(&iLocal_17 + 472, 1);
		}
		else if (Function_458(&Global_54076, &iLocal_17 + 1120, 85.0f))
		{
			Function_457(&iLocal_17 + 472);
			Function_457(&iLocal_17 + 344);
			Function_456(&iLocal_17 + 344, 2);
			Function_456(&iLocal_17 + 536, 2);
			Function_456(&iLocal_17 + 472, 2);
		}
		else
		{
			Function_456(&iLocal_17 + 536, 3);
			Function_456(&iLocal_17 + 472, 2);
		}
		if (Function_458(&Global_54076, &iLocal_17 + 1120, 140.0f) || Function_454(&iLocal_17 + 536, &Global_54076, 0, 1))
		{
			Function_457(&iLocal_17 + 536);
		}
	}
	return;
}

int Function_454(var uParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x18671 / 99953
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		iVar2 = GET_MOUNT(&uVar1);
		if (Function_455(&uVar1, &iParam1, bParam2, &bParam3) || Function_455(&iVar2, &iParam1, bParam2, &bParam3))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_455(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x186CE / 100046
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

void Function_456(var uParam0, bool bParam1) //Position: 0x1871C / 100124
{
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (DECOR_GET_INT(&uParam0, "curVol") != bParam1)
		{
			SQUAD_GOALS_CLEAR(&uParam0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&uParam0, 1);
			SQUAD_GOAL_ADD_BATTLE_DEFEND_VOLUME(&uParam0, 0, &iLocal_17 + 848[bParam1], 4294967295);
			DECOR_SET_INT(&uParam0, "curVol", bParam1);
		}
	}
	return;
}

void Function_457(int iParam0) //Position: 0x18772 / 100210
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

bool Function_458(bool bParam0, var uParam1, float fParam2) //Position: 0x187A7 / 100263
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&uParam1))
		{
			Function_361(&bParam0);
			Function_459(&uParam1);
			if (VDIST(Function_361(&bParam0), Function_459(&uParam1)) >= fParam2)
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

struct<8> Function_459(int iParam0) //Position: 0x188C5 / 100549
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

void Function_460(var uParam0, vector3[] vParam1) //Position: 0x18933 / 100659
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		TELEPORT_ACTOR_WITH_HEADING(StackVal, SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), vParam1[iVar13], 1, 1, 1);
		iVar1++;
		if (iVar1 >= (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			iVar1 = 0;
		}
		bVar0++;
	}
	return;
}

int Function_461(bool bParam0) //Position: 0x18990 / 100752
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		if (Function_395(SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0), 1.0f, 50.0f, 1, 1, 0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void Function_462(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x189E0 / 100832
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
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
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
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
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

void Function_463() //Position: 0x18AF0 / 101104
{
	if (iLocal_746 >= 5)
	{
		Function_399();
	}
	if (iLocal_746 <= 2)
	{
		Function_478(&iLocal_17 + 2112);
	}
	if (!bLocal_763)
	{
		if (iLocal_746 > 4)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				Function_370("Grave03_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
				bLocal_763 = true;
			}
		}
	}
	if (iLocal_746 == 0)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1232[0]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1232[1]))
		{
			MEMORY_ALLOW_SHOOTING(&bLocal_591, false);
			if (!SQUAD_IS_VALID(&iLocal_17 + 344))
			{
				Function_477();
				bLocal_708 = &iLocal_17 + 344;
			}
			Function_476();
		}
	}
	else if (iLocal_746 == 1)
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1232[2]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_17 + 1232[3]))
		{
			Function_475();
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_591, false);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_591, 0);
			Function_476();
		}
	}
	else if (iLocal_746 == 2)
	{
		if (Function_289(&iLocal_658) <= 0,5f)
		{
			AUDIO_MUSIC_SET_MOOD("GUNFIGHT_HIGH", 0, 4294967295, 4294967295);
			SET_PLAYER_ENDLESS_READYMODE(0, 1);
			MEMORY_SET_WEAPON_DRAW_PREFERENCE(&bLocal_591, 0);
			MEMORY_ALLOW_SHOOTING(&bLocal_591, true);
			Function_474(&bLocal_591, &iLocal_17 + 344);
			iLocal_718 = GET_COVER_LOCATION_FROM_OBJECT(&iLocal_17 + 2072);
			bLocal_744 = TASK_SEQUENCE_OPEN();
			TASK_HIDE_AT_COVER(0, &iLocal_718, 6.0f, 6.0f, 0);
			TASK_SHOOT_ENEMIES_FROM_COVER(0, &iLocal_718, -1.0f, 1086324736);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&bLocal_591);
			TASK_SEQUENCE_PERFORM(&bLocal_591, bLocal_744);
			TASK_SEQUENCE_RELEASE(bLocal_744, 1);
			TASK_PRIORITY_SET(&bLocal_591, true);
			Function_476();
		}
	}
	else if (iLocal_746 == 3)
	{
		if (Function_289(&iLocal_658) <= 1.0f)
		{
			Function_473();
			Function_476();
		}
	}
	else if (iLocal_746 == 4)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_472();
			Function_476();
		}
	}
	else if (iLocal_746 == 5)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING() && HUD_IS_SHOWING_OBJECTIVE())
		{
			if (ACTORS_IN_RANGE(&Global_54076, &bLocal_591, 30.0f))
			{
				Function_471();
			}
			Function_476();
		}
	}
	else if (iLocal_746 == 6)
	{
		if (iLocal_768)
		{
			if (IS_BLIP_VALID(&iLocal_790))
			{
				REMOVE_BLIP(&iLocal_790);
			}
			MEMORY_ALLOW_SHOOTING(&bLocal_591, true);
			AI_SPEECH_SET_ALLOW_FOR_ACTOR(&bLocal_591, 1);
			Function_466(&iLocal_17 + 536, &Global_54076, 1);
			if (!bLocal_763)
			{
				Function_370("Grave03_obj02", 0x40f00000, 1, 2, 0, 0, 0, 0);
			}
			Function_476();
		}
	}
	else if (iLocal_746 == 7)
	{
		if (Function_404())
		{
			if (!iLocal_754)
			{
				Function_464();
			}
		}
		else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			if (iLocal_747 <= 1)
			{
				Function_370("Grave03_obj_return_house", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if (!IS_BLIP_VALID(&iLocal_790))
				{
					iLocal_790 = ADD_BLIP_FOR_OBJECT(&iLocal_17 + 1128, 330, 0f, 2, 0);
					SET_BLIP_PRIORITY(GET_BLIP_ON_OBJECT(&iLocal_17 + 1128), 3);
				}
			}
			bLocal_771 = true;
			Function_163(Function_377("tumbleweed", "mansion", 3), 1);
			TASK_CLEAR(&bLocal_591);
			SQUAD_GOAL_ADD_BATTLE_ALLIES(&uLocal_710, 1, &Global_54076, 1);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_591, "Grave03_Seth_idle", 0);
			Function_476();
		}
	}
	else if (iLocal_746 == 8)
	{
		Function_250(&iLocal_17 + 1376[6]);
		Local_724 = Function_250(&iLocal_17 + 1376[6]);
		bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1376[6]);
		bLocal_744 = TASK_SEQUENCE_OPEN();
		TASK_GO_TO_OBJECT(0, &iLocal_17 + 1376[6], 4, 0, 1);
		TASK_ACTION_PERFORM(0, "Grave03_Seth_idle");
		TASK_SEQUENCE_CLOSE();
		TASK_CLEAR(&bLocal_591);
		TASK_SEQUENCE_PERFORM(&bLocal_591, bLocal_744);
		TASK_SEQUENCE_RELEASE(bLocal_744, 1);
		TASK_PRIORITY_SET(&bLocal_591, true);
		Function_476();
	}
	else if (iLocal_746 == 9)
	{
		if (!iLocal_760)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() && !HUD_IS_SHOWING_OBJECTIVE())
			{
				if (iLocal_747 <= 1)
				{
					Function_444();
					iLocal_760 = 1;
				}
			}
		}
		if (!IS_MOVER_FROZEN(&bLocal_591))
		{
			if (IS_ACTOR_IN_VOLUME(&bLocal_591, &iLocal_17 + 896[10]))
			{
				if (IS_ACTION_NODE_PLAYING_PARTIAL(&bLocal_591, "Grave03_Seth_idle"))
				{
					SET_MOVER_FROZEN(&bLocal_591, 1);
				}
			}
		}
		else if (iLocal_747 > 4)
		{
			SET_MOVER_FROZEN(&bLocal_591, 0);
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
			SET_ANIM_SET_FOR_ACTOR(&bLocal_591, "Grave03_Seth_idle", 0);
			Function_250(&iLocal_17 + 1600[1]);
			Local_724 = Function_250(&iLocal_17 + 1600[1]);
			bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1600[1]);
			bLocal_744 = TASK_SEQUENCE_OPEN();
			TASK_GO_TO_OBJECT(0, &iLocal_17 + 1600[1], 2, 0, 1);
			TASK_ACTION_PERFORM(0, "Grave03_Seth_idle");
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&bLocal_591);
			TASK_SEQUENCE_PERFORM(&bLocal_591, bLocal_744);
			TASK_SEQUENCE_RELEASE(bLocal_744, 1);
			TASK_PRIORITY_SET(&bLocal_591, true);
			Function_476();
		}
	}
	return;
}

void Function_464() //Position: 0x18FBD / 102333
{
	if (Function_289(&iLocal_678) < 6.0f && iLocal_758)
	{
		GET_OBJECT_POSITION(&Global_54076, &uLocal_727);
		bLocal_714 = Function_465(&bLocal_708, &bLocal_591, 0, 0);
		if (IS_ACTOR_VALID(&bLocal_714))
		{
			Function_361(&bLocal_714);
			bLocal_731 = Function_360(StackVal, &bLocal_591, Function_361(&bLocal_714));
			iLocal_718 = FIND_NEAREST_COVER_LOCATION(&uLocal_727, 15.0f, bLocal_731, 60.0f, 7);
		}
		else if (IS_ACTOR_VALID(&iLocal_17 + 352[12]))
		{
			Function_361(&iLocal_17 + 352[12]);
			bLocal_731 = Function_360(StackVal, &bLocal_591, Function_361(&iLocal_17 + 352[12]));
			iLocal_718 = FIND_NEAREST_COVER_LOCATION(&uLocal_727, 15.0f, bLocal_731, 60.0f, 7);
		}
		else
		{
			iLocal_718 = FIND_NEAREST_COVER_LOCATION(&uLocal_727, 15.0f, 100.0f, 60.0f, 7);
		}
		if (IS_COVER_LOCATION_VALID(&iLocal_718))
		{
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(&bLocal_591))
			{
				TASK_CLEAR(&bLocal_591);
				TASK_SHOOT_ENEMIES_FROM_COVER(&bLocal_591, &iLocal_718, -1.0f, 1086324736);
				iLocal_758 = 0;
			}
			else
			{
				TASK_CLEAR(&bLocal_591);
				TASK_HIDE_AT_COVER(&bLocal_591, &iLocal_718, -1.0f, 6f, 1);
				iLocal_758 = 0;
			}
		}
	}
	if (Function_406(&Global_54076, &bLocal_591) < 10.0f && !iLocal_758)
	{
		iLocal_758 = 1;
		Function_237(&iLocal_678);
	}
	return;
}

var Function_465(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x190F1 / 102641
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&bParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		fVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&fVar4), iVar5))
			{
				fVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&fVar4))
			{
				fVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&fVar4) && IS_ACTOR_ALIVE(&fVar4))
		{
			fVar3 = Function_406(&fVar4, &bParam1);
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

void Function_466(var uParam0, var uParam1, bool bParam2) //Position: 0x191BC / 102844
{
	Function_470(&uParam0, &uParam1, 1);
	Function_469(&uParam0, 1);
	Function_468(&uParam0, &uParam1, 4);
	Function_467(&uParam0, &uParam1);
	if (&bParam2)
	{
		Function_462(&uParam0, 322, 4294967295, 0.0f, 3212836864, 0x3f800000, 2048, 0);
	}
	return;
}

void Function_467(var uParam0, int iParam1) //Position: 0x19205 / 102917
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
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
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_468(var uParam0, var uParam1, bool bParam2) //Position: 0x19260 / 103008
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

void Function_469(var uParam0, int iParam1) //Position: 0x192AC / 103084
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

void Function_470(var uParam0, var uParam1, bool bParam2) //Position: 0x192F1 / 103153
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

void Function_471() //Position: 0x19369 / 103273
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_GunFightBanter_v1_AA", "Grave03_GunFightBanter_v1_AA", 0, 2, 1, 0, 1);
	ADD_LINE_TO_CONVERSATION(0, "Grave03_GunFightBanter_v1_AB", "Grave03_GunFightBanter_v1_AB", 1, 2, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_472() //Position: 0x1940F / 103439
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(2, "Grave03_TreasureHunterSurp", "Grave03_TreasureHunterSurp", 0, 2, 1, 0, 1);
	Function_366(5);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_473() //Position: 0x1946A / 103530
{
	ABORT_SCRIPTED_CONVERSATION(1);
	NEW_SCRIPTED_CONVERSATION();
	ADD_LINE_TO_CONVERSATION(1, "Grave03_SethYellsAmbush", "Grave03_SethYellsAmbush", 0, 2, 1, 0, 1);
	Function_366(3);
	START_SCRIPT_CONVERSATION(true, 1);
	return;
}

void Function_474(var uParam0, bool bParam1) //Position: 0x194BF / 103615
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uParam0, &uVar1);
		}
		bVar0++;
	}
	return;
}

void Function_475() //Position: 0x194FB / 103675
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_BLIP_VALID(&iLocal_790))
	{
		REMOVE_BLIP(&iLocal_790);
	}
	Function_466(&iLocal_17 + 344, &Global_54076, 1);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_17 + 344, 658056);
	Function_250(&iLocal_17 + 1544[3]);
	Var0 = Function_250(&iLocal_17 + 1544[3]);
	Function_361(&bLocal_591);
	uVar2 = Function_361(&bLocal_591);
	FIRE_PROJECTILE(&iLocal_17 + 288[22], "base_repeater", 0,001f, &Var0, &uVar2);
	PLAY_SOUND_FROM_POSITION("ENEMY_SHOT_REPEATER_HI_POWER_MASTER", Var0);
	SET_FACTION_TO_FACTION_ACCURACY_SCALE_FACTOR(19, 20, 0,1f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iLocal_17 + 288[02], 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_17 + 288[02], 53, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_17 + 288[02], 54, 0.0f);
	Function_250(&iLocal_17 + 1544[0]);
	Local_724 = Function_250(&iLocal_17 + 1544[0]);
	Function_361(&Global_54076);
	bLocal_732 = Function_360(StackVal, &iLocal_17 + 288[02], Function_361(&Global_54076));
	TASK_CLEAR(&iLocal_17 + 288[02]);
	TASK_SHOOT_ENEMIES_FROM_POSITION(&iLocal_17 + 288[02], &Local_724, bLocal_732, -1f);
	TASK_PRIORITY_SET(&iLocal_17 + 288[02], false);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iLocal_17 + 288[12], 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_17 + 288[12], 53, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iLocal_17 + 288[12], 54, 0.0f);
	Function_250(&iLocal_17 + 1544[1]);
	Local_724 = Function_250(&iLocal_17 + 1544[1]);
	bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1544[1]);
	TASK_CLEAR(&iLocal_17 + 288[12]);
	TASK_SHOOT_ENEMIES_FROM_PREFERRED_COVER(&iLocal_17 + 288[12], FIND_NEAREST_COVER_LOCATION(&Local_724, 2.0f, bLocal_732, 30.0f, 7), -1.0f, 1086324736);
	TASK_PRIORITY_SET(&iLocal_17 + 288[02], false);
	Function_250(&iLocal_17 + 1544[2]);
	Local_724 = Function_250(&iLocal_17 + 1544[2]);
	bLocal_732 = GET_OBJECT_HEADING(&iLocal_17 + 1544[2]);
	TASK_CLEAR(&iLocal_17 + 288[22]);
	TASK_SHOOT_ENEMIES_FROM_COVER(&iLocal_17 + 288[22], GET_COVER_LOCATION_FROM_OBJECT(&iLocal_17 + 2080), -1.0f, 1086324736);
	TASK_PRIORITY_SET(&iLocal_17 + 288[22], false);
	return;
}

void Function_476() //Position: 0x19704 / 104196
{
	iLocal_746++;
	Function_237(&iLocal_658);
	PRINTSTRING("iS1SethIndex: ");
	PRINTINT(iLocal_746);
	PRINTNL();
	return;
}

void Function_477() //Position: 0x19735 / 104245
{
	(&iLocal_17 + 344) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "ChurchGuys"));
	*(&iLocal_17 + 288[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "churchGuy2", 505, Vector(-3978,164f, 31,92458f, 2918,071f), Vector(0.0f, 243.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 288[02], &iLocal_17 + 344);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 288[02]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 288[02], 41, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 288[02], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 288[02], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 288[02], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 288[02], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 288[02], 0);
	*(&iLocal_17 + 288[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "churchGuy5", 506, Vector(-3963,255f, 29,05244f, 2936.0f), Vector(0.0f, 36.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 288[12], &iLocal_17 + 344);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 288[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 288[12], 40, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 288[12], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 288[12], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 288[12], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 288[12], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 288[12], 0);
	*(&iLocal_17 + 288[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_17, "churchGuy1", 509, Vector(-3977,487f, 27,85028f, 2928,652f), Vector(0.0f, -78.0f, 0.0f));
	SQUAD_JOIN(&iLocal_17 + 288[22], &iLocal_17 + 344);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_17 + 288[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 288[22], 41, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_17 + 288[22], 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&iLocal_17 + 288[22], -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_17 + 288[22], 1);
	SET_ACTOR_FACTION(&iLocal_17 + 288[22], 19);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iLocal_17 + 288[22], 0);
	return;
}

void Function_478(var uParam0) //Position: 0x19979 / 104825
{
	GET_POSITION(&Global_54076, &uLocal_733);
	GET_POSITION(&bLocal_591, &uLocal_736);
	ESTIMATE_TWO_DISTANCES_ALONG_PATH(&uParam0, &uLocal_733, &uLocal_736, &fLocal_739, &fLocal_740, &uLocal_741);
	if (!Function_291(&iLocal_686))
	{
		Function_452(&iLocal_686);
	}
	if ((fLocal_739 - fLocal_740) <= 15.0f)
	{
		if (iLocal_786 != 0 || iLocal_786 != 2)
		{
			iLocal_786 = 1;
			TASK_OVERRIDE_SET_MOVETYPE(&bLocal_591, 2);
		}
	}
	else if ((fLocal_739 - fLocal_740) >= -15.0f)
	{
		if (iLocal_786 <= 2)
		{
			iLocal_786 = 2;
			SET_ACTOR_CAN_PLAY_GESTURES(&bLocal_591, false);
			TASK_OVERRIDE_SET_MOVETYPE(&bLocal_591, 5);
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_591, "nwave/back");
			Function_365();
			Function_237(&iLocal_686);
		}
	}
	else if (ACTORS_IN_RANGE(&Global_54076, &bLocal_591, 6.0f))
	{
		if (iLocal_786 >= 0)
		{
			iLocal_786 = 0;
			TASK_OVERRIDE_CLEAR_MOVETYPE(&bLocal_591);
		}
	}
	if (iLocal_786 == 2)
	{
		if (Function_289(&iLocal_686) < 25.0f)
		{
			RESET_ANIM_SET_FOR_ACTOR(&bLocal_591, 1);
			if (!ACTOR_HAS_ANIM_SET(&bLocal_591, "wave"))
			{
				SET_ANIM_SET_FOR_ACTOR(&bLocal_591, "wave", 0);
			}
			SET_ACTION_NODE_FOR_ACTOR(&bLocal_591, "nwave/back");
			Function_365();
			Function_237(&iLocal_686);
		}
	}
	return;
}

void Function_479() //Position: 0x19AAE / 105134
{
	switch (iLocal_567)
	{
		case 0x00000006:
			Function_494(&Local_554, 1);
			uLocal_552 = CREATE_LAYOUT(Function_57());
			Function_493();
			Function_491(&uLocal_795, &uLocal_552);
			AUDIO_MUSIC_FORCE_TRACK("FTR_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-3910,114f, 31,102f, 2907,608f), 98.0f, 1, 1, 1);
			ENABLE_CHILD_SECTOR("sp_grave03x");
			Function_171(114688);
			if (((iLocal_566 != 99 && Function_294(&Local_554)) || !CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/Grave_03/Grave_03")) || iLocal_551 == 0)
			{
				iLocal_567 = 8;
			}
			else
			{
				uLocal_788 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_552, "IntroCS", 2,802597E-45f, Vector(-3906,577f, 35,60458f, 2913,343f), Vector(0.0f, 60,1983f, 0.0f), Vector(37,66953f, 15,47603f, 53,78489f));
				iLocal_567 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_282("$/cutscene/Grave_03/Grave_03", &iLocal_568, &Local_554, &iLocal_566, 74586, 74112, 74058, 73537, 73271, 58129, 0, 1, 1, 2, 2, 0, 1))
			{
				iLocal_567 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_301())
			{
				AUDIO_MUSIC_SET_MOOD("SUSPENSE", 0, 4294967295, 4294967295);
				iLocal_567 = 9;
			}
			break;
		
		case 0x00000009:
			if (!IS_LAYOUTREF_VALID(&iLocal_17))
			{
			}
			else
			{
				uLocal_652 = CREATE_OBJECT_ITERATOR(&iLocal_17);
				Function_228(1, 1, 1);
				RESET_ACTOR_GAITS(&bLocal_591, 0);
				SET_CRIPPLE_ENABLE(&bLocal_591, 0);
				SET_ACTOR_FACTION(&bLocal_591, 20);
				TASK_PRIORITY_SET(&bLocal_591, true);
				TASK_STAND_STILL(&bLocal_591, -1.0f, 0, 0);
				AI_BEHAVIOR_SET_ALLOW(&bLocal_591, 0, 0);
				SET_ACTOR_MAX_HEALTH(&bLocal_591, 50.0f);
				SET_ACTOR_HEALTH(&bLocal_591, GET_ACTOR_MAX_HEALTH(&bLocal_591));
				SET_AUTO_CONVERSATION_LOOK(&bLocal_591, 0);
				SET_ACTOR_STAY_WITHIN_VOLUME(&bLocal_591, &iLocal_17 + 1288, 4, true);
				Function_484(&(Local_849[015]), &bLocal_591, "GraveRobber", 0, 0x5f5e100, 1);
				RESET_ACTOR_GAITS(&uLocal_593, 0);
				TASK_PRIORITY_SET(&uLocal_593, true);
				TASK_STAND_STILL(&uLocal_593, -1.0f, 0, 0);
				SET_ACTOR_MAX_HEALTH(&uLocal_593, 50.0f);
				SET_ACTOR_HEALTH(&uLocal_593, GET_ACTOR_MAX_HEALTH(&uLocal_593));
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&bLocal_591, 0);
				iLocal_743 = 0;
				Function_139(&(Global_43791[Global_46796[0]]), 256);
				uLocal_710 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_17, "GoodGuys"));
				SQUAD_JOIN(&bLocal_591, &uLocal_710);
				uLocal_742 = (*&Global_53524 + 76)[0];
				uLocal_742 = uLocal_742;
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 896[8]);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 896[8]);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 896[8], 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_17 + 896[8]);
				ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 1288);
				ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_17 + 1288);
				CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_17 + 1288, 15);
				DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_17 + 1288);
				Function_452(&iLocal_654);
				Function_452(&iLocal_658);
				Function_452(&iLocal_662);
				Function_452(&iLocal_666);
				Function_452(&iLocal_670);
				Function_452(&iLocal_674);
				Function_452(&iLocal_678);
				iLocal_566 = iLocal_551;
				iLocal_567 = 0;
				Function_481(&Local_554, &iLocal_566, &iLocal_567);
				Function_480(StackVal, StackVal, StackVal, StackVal, Function_299(), Local_554);
				TOGGLE_COVER_PROPS(0);
			}
			break;
	}
	return;
}

void Function_480(struct<41> Param0) //Position: 0x19E20 / 106016
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			iLocal_566 = 0;
			break;
		
		case 0x0000000A:
			iLocal_566 = 101;
			break;
	}
}

void Function_481(int iParam0, var uParam1, int iParam2) //Position: 0x19E4C / 106060
{
	if (Function_294(&iParam0))
	{
		uParam1 = Function_483(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_482();
	}
	return;
}

void Function_482() //Position: 0x19E88 / 106120
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

var Function_483(bool bParam0) //Position: 0x19ED9 / 106201
{
	if (Function_294(&bParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

int Function_484(struct<69> Param0) //Position: 0x19EF2 / 106226
{
	if (!Function_490(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_489(&Param0, &uParam2))
	{
		return 0;
	}
	Function_488(&Param0, &uParam3);
	Param0.f_68 = 0;
	Function_485(&Param0, &uParam4, &uParam5);
	return 1;
}

void Function_485(var uParam0, int iParam1, int iParam2) //Position: 0x19F38 / 106296
{
	if (iParam1 != 100000000)
	{
		Function_487(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_486(&uParam0, &iParam2);
	}
	return;
}

void Function_486(struct<69> Param0) //Position: 0x19F5F / 106335
{
	Param0.f_68 = 0;
	Function_487(&Param0, 2, &bParam1);
	Function_487(&Param0, 4, &bParam1);
	Function_487(&Param0, 8, &bParam1);
	Function_487(&Param0, 16, &bParam1);
	Function_487(&Param0, 32, &bParam1);
	Function_487(&Param0, 64, &bParam1);
	Function_487(&Param0, 128, &bParam1);
	Function_487(&Param0, 256, &bParam1);
	Function_487(&Param0, 512, &bParam1);
	Function_487(&Param0, 1024, &bParam1);
	return;
}

void Function_487(int iParam0, int iParam1, bool bParam2) //Position: 0x19FDA / 106458
{
	bool bVar0;
	
	Function_80(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_80(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_41(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_80(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_488(struct<65> Param0) //Position: 0x1A019 / 106521
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_489(int iParam0, char* cParam1) //Position: 0x1A026 / 106534
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

bool Function_490(struct<61> Param0) //Position: 0x1A0B3 / 106675
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

int Function_491(struct<2>[] Param0) //Position: 0x1A266 / 107110
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

bool Function_492(struct<13> Param0) //Position: 0x1A93F / 108863
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
	Function_80(&Param0 + 12, iParam4);
	return 1;
}

void Function_493() //Position: 0x1AA0E / 109070
{
	Function_327(&iLocal_618, "Grave03_Seth_idle", 5, 0);
	Function_327(&iLocal_618, "custom/Grave03_Seth_idle", 8, 0);
	Function_327(&iLocal_618, "door_locked", 5, 0);
	Function_327(&iLocal_618, "custom/door_locked", 8, 0);
	Function_327(&iLocal_618, "wave", 5, 0);
	Function_327(&iLocal_618, "custom/wave", 8, 0);
	Function_327(&iLocal_618, "p_gen_coffinCorpse02x", 0, 0);
	Function_327(&iLocal_618, "grave03", 10, 0);
	return;
}

void Function_494(int iParam0, bool bParam1) //Position: 0x1AAE9 / 109289
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_501(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_294(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_100();
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
	if (!Function_294(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_500();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_254();
	Function_285();
	Function_243("");
	Function_499(0);
	Function_498();
	Function_218();
	Function_217();
	ENABLE_JOURNAL_REPLAY(0);
	Function_497();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_302(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_353(0, 0x40400000);
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
	Function_496(13);
	Function_496(14);
	Function_496(25);
	Function_496(24);
	Function_496(12);
	Function_496(27);
	Function_496(26);
	Function_496(15);
	Function_495();
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

void Function_495() //Position: 0x1AF29 / 110377
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

void Function_496(int iParam0) //Position: 0x1AFAE / 110510
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_497() //Position: 0x1AFCE / 110542
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

void Function_498() //Position: 0x1B014 / 110612
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_499(int iParam0) //Position: 0x1B02A / 110634
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_221())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_500() //Position: 0x1B063 / 110691
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_501(int iParam0, int iParam1) //Position: 0x1B06C / 110700
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
			Function_502(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_502(struct<113> Param0) //Position: 0x1B0F3 / 110835
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

void Function_503() //Position: 0x1B151 / 110929
{
	return;
}

bool Function_504(struct<25> Param0) //Position: 0x1B157 / 110935
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
			Function_505(&Param0, 1);
			return 1;
		}
	}
	Function_505(&Param0, 0);
	return 0;
}

void Function_505(struct<25> Param0) //Position: 0x1B1E3 / 111075
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

bool Function_506(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1B20E / 111118
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
		Function_505(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_525(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_524(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_524(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_510(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, iParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_505(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_509(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_508(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_509(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_507(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_243(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_508(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_505(&Param2, 0);
	return 0;
}

void Function_507(char* cParam0) //Position: 0x1B624 / 112164
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

void Function_508(struct<25> Param0) //Position: 0x1B718 / 112408
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
			Function_41(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_41(&iParam2, 2);
			break;
	}
	Function_41(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_509(bool bParam0) //Position: 0x1B790 / 112528
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_41(&iVar0, 1);
	Function_41(&iVar0, 2);
	Function_41(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_510(struct<57> Param0) //Position: 0x1B7B4 / 112564
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
			return Function_521(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_514(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_521(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_511(&Param0, bVar2);
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
						bVar2 = Function_521(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_511(&Param0, bVar2);
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

var Function_511(int iParam0, bool bParam1) //Position: 0x1B925 / 112933
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
				bParam1 = Function_513(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_512(16);
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
				bParam1 = Function_513(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_512(256);
			}
		}
	}
	return bParam1;
}

bool Function_512(int iParam0) //Position: 0x1BA61 / 113249
{
	return 2 | iParam0;
}

int Function_513(int iParam0) //Position: 0x1BA6B / 113259
{
	return 4 | iParam0;
}

int Function_514(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1BA75 / 113269
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
				iParam3 = Function_520(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_80(&iParam3, 2);
					Function_41(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_512(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_515(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_80(&iParam3, 2);
					Function_41(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_512(16);
		}
	}
	return 0;
}

int Function_515(int iParam0, vector3 vParam1) //Position: 0x1BB30 / 113456
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_519(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_518(iVar0, 3, 1, bParam3))
			{
				if (!Function_524(&iParam0, 8, 1))
				{
					return Function_517(64, 1024, bParam2);
				}
			}
			return Function_516(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_518(iVar0, 2, 1, bParam3))
			{
				if (!Function_524(&iParam0, 32, 1))
				{
					return Function_517(64, 1024, bParam2);
				}
			}
			return Function_516(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_518(iVar0, 1, 1, bParam3))
			{
				if (!Function_524(&iParam0, 64, 1))
				{
					return Function_517(64, 1024, bParam2);
				}
			}
			return Function_516(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_518(iVar0, 3, 1, bParam3))
			{
				if (!Function_524(&iParam0, 128, 1))
				{
					return Function_517(64, 1024, bParam2);
				}
			}
			return Function_516(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_518(iVar0, 1, 1, bParam3))
			{
				if (!Function_524(&iParam0, 1024, 1))
				{
					return Function_517(64, 1024, bParam2);
				}
			}
			return Function_516(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_518(iVar0, 1, 1, bParam3))
			{
				if (!Function_524(&iParam0, 1024, 1))
				{
					return Function_517(64, 1024, bParam2);
				}
			}
			return Function_516(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_516(int iParam0, int iParam1, bool bParam2) //Position: 0x1BCF8 / 113912
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_517(int iParam0, int iParam1, bool bParam2) //Position: 0x1BD0D / 113933
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_518(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1BD22 / 113954
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_519(int iParam0) //Position: 0x1BD3F / 113983
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

int Function_520(var uParam0, vector3 vParam1) //Position: 0x1BDB2 / 114098
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_519(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_518(iVar0, 3, 1, bParam2))
			{
				if (!Function_524(&uParam0, 8, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000009:
			if (Function_518(iVar0, 3, 1, bParam2))
			{
				if (!Function_524(&uParam0, 8, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x0000006E:
			if (Function_518(iVar0, 2, 1, bParam2))
			{
				if (!Function_524(&uParam0, 16, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x0000005B:
			if (Function_518(iVar0, 2, 1, bParam2))
			{
				if (!Function_524(&uParam0, 32, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000031:
			if (Function_518(iVar0, 1, 1, bParam2))
			{
				if (!Function_524(&uParam0, 64, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000007:
			if (Function_518(iVar0, 3, 1, bParam2))
			{
				if (!Function_524(&uParam0, 128, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000008:
			if (Function_518(iVar0, 2, 1, bParam2))
			{
				if (!Function_524(&uParam0, 256, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000014:
			if (Function_518(iVar0, 1, 1, bParam2))
			{
				if (!Function_524(&uParam0, 512, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000018:
			if (Function_518(iVar0, 1, 1, bParam2))
			{
				if (!Function_524(&uParam0, 512, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000057:
			if (Function_518(iVar0, 1, 1, bParam2))
			{
				if (!Function_524(&uParam0, 1024, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000058:
			if (Function_518(iVar0, 1, 1, bParam2))
			{
				if (!Function_524(&uParam0, 1024, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_521(struct<65> Param0) //Position: 0x1BFDB / 114651
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
						return Function_520(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_524(&Param0, 2, 1))
					{
						return Function_513(8);
					}
					return Function_512(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_524(&Param0, 4, 1))
					{
						return Function_513(16);
					}
					return Function_512(16);
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
							return Function_515(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_524(&Param0, 2, 1))
						{
							return Function_513(128);
						}
						return Function_512(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_524(&Param0, 4, 1))
						{
							return Function_513(256);
						}
						return Function_512(256);
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
						return Function_515(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_524(&Param0, 2, 1))
					{
						return Function_513(8);
					}
					return Function_512(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_524(&Param0, 4, 1))
					{
						return Function_513(16);
					}
					return Function_512(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_523(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_524(&Param0, 2, 1))
					{
						return Function_513(8);
					}
					return Function_512(8);
				}
				if (!Function_524(&Param0, 4, 1))
				{
					return Function_513(16);
				}
				return Function_512(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_515(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_80(&iParam4, 2);
								Function_41(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_522(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_512(128);
							}
							if (!Function_524(&Param0, 2, 1))
							{
								return Function_513(8);
							}
							return Function_512(8);
						}
						if (iParam4 == 2)
						{
							if (Function_522(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_512(256);
							}
							if (!Function_524(&Param0, 4, 1))
							{
								return Function_513(16);
							}
							return Function_512(16);
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

bool Function_522(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1C2C2 / 115394
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

int Function_523(int iParam0, vector3 vParam1) //Position: 0x1C390 / 115600
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_519(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_518(iVar0, 2, 1, bParam2))
			{
				if (!Function_524(&iParam0, 16, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x0000005B:
			if (Function_518(iVar0, 2, 1, bParam2))
			{
				if (!Function_524(&iParam0, 32, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000057:
			if (Function_518(iVar0, 1, 1, bParam2))
			{
				if (!Function_524(&iParam0, 1024, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		case 0x00000058:
			if (Function_518(iVar0, 1, 1, bParam2))
			{
				if (!Function_524(&iParam0, 1024, 1))
				{
					return Function_513(64);
				}
			}
			return Function_512(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_524(struct<69> Param0) //Position: 0x1C4B2 / 115890
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

int Function_525(int iParam0) //Position: 0x1C4DC / 115932
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_57());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_57());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_526(bool bParam0) //Position: 0x1C512 / 115986
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && bParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_527(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1C530 / 116016
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

