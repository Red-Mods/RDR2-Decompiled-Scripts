//Decompiled with MagicRDR v1.0
//Function Count : 67
//Statics Count : 812
//Natives Count : 125
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 2;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 1;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 3;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 2;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 2;
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
	var uLocal_54 = 4;
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
	var uLocal_66 = 5;
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
	var uLocal_80 = 1;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 32;
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
	var uLocal_154 = 4;
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
	var uLocal_166 = 7;
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
	var uLocal_184 = 4;
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
	var uLocal_196 = 2;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 5;
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
	var uLocal_218 = 2;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 5;
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
	var uLocal_244 = 3;
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
	var uLocal_262 = 4;
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
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 2;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 7;
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
	var uLocal_310 = 2;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 1;
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
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 21;
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
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	char[] cLocal_660[4] = 0;
	var uLocal_661 = 0;
	struct<4> Local_662[18];
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
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	iLocal_524 = 0;
	Function_66("Initializing Chuparosa Volumes", 3);
	while (!IS_EXITFLAG_SET())
	{
		iLocal_525 = 500;
		uLocal_526 = Function_65();
		switch (iLocal_524)
		{
			case 0x00000000:
				if (Function_63())
				{
					cLocal_660 = Function_62(&iLocal_0, "nchuparosa", iScriptParam_0);
					iLocal_524 = 1;
				}
				iLocal_525 = 0;
				break;
			
			case 0x00000001:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_660))
				{
					iLocal_524 = 2;
				}
				iLocal_525 = 0;
				break;
			
			case 0x00000002:
				Function_61(&uLocal_528);
				Function_60(&uLocal_528, &uLocal_532, 4, &iLocal_0 + 968, 4294967295, 4);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 32, 4294967295, 0x1000108);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 896, 4294967295, 0x1000108);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 64, 4294967295, 65802);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 104, 4294967295, 0x2000010a);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 136, 4294967295, 16650);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 1008, 4294967295, 16648);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 168, 4294967295, 0x4000010a);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 1264, 4294967295, 0x4000010a);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 1288, 4294967295, 0x4000010a);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 1216, 4294967295, 0x40000108);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 200, 4294967295, 4194570);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 256, 4294967295, 778);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 1088, 4294967295, 776);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 208, 4294967295, 258);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 312, 4294967295, 0x2000108);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 1024, 4294967295, 8456);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 1016, 4294967295, 2312);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 656, 4294967295, 0x10000108);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 40, 4294967295, 0x800018a);
				Function_60(&uLocal_528, &uLocal_532, 5, &iLocal_0 + 872[1], 4294967295, 0x1000000);
				Function_58(&Local_662, &cLocal_660, "ncantina01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 208, 0, 1);
				Function_58(&Local_662, &cLocal_660, "bank01", 3, &Global_44085[iScriptParam_09] + 32, 1, &iLocal_0 + 40, 0, 0);
				iLocal_808 = Function_58(&Local_662, &cLocal_660, "bank01", 2, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 40, 0, 0);
				if (iLocal_808 <= 0 && iLocal_808 > Local_662)
				{
					Function_57(&(Local_662[iLocal_8084]), 15);
				}
				iLocal_809 = Function_58(&Local_662, &cLocal_660, "bank01", 1, &Global_44085[iScriptParam_09] + 32, 0, &iLocal_0 + 40, 0, 0);
				if (iLocal_809 <= 0 && iLocal_809 > Local_662)
				{
					Function_57(&(Local_662[iLocal_8094]), 48);
				}
				Function_58(&Local_662, &cLocal_660, "trainstation01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "trainstation01", 2, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "trainstation01", 3, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "trainstation01", 4, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "church01", 1, &Global_44085[iScriptParam_09] + 32, 0, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "corral01", 3, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "corral01", 4, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "corral01", 5, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				Function_58(&Local_662, &cLocal_660, "corral01", 6, &Global_44085[iScriptParam_09] + 32, 1, 0, 0, 0);
				iLocal_524 = 3;
				iLocal_525 = 0;
				break;
			
			case 0x00000003:
				Function_56(&(Global_43791[iScriptParam_0]), 16);
				Function_55("Finished Initializing Chuparosa Volumes", 5.0f);
				iLocal_524 = 4;
				iLocal_525 = 0;
				break;
			
			case 0x00000004:
				Function_16(&uLocal_528, &uLocal_532, &uLocal_526, iScriptParam_0);
				Function_12(&Local_662, 0);
				break;
			
			case 0x00000005:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				iLocal_525 = 0;
				break;
		}
		WAIT(iLocal_525);
	}
	Function_4(&uLocal_528, &uLocal_532);
	Function_3(&Local_662);
	Function_2();
	Function_1(&(Global_43791[iScriptParam_0]), 16);
	Function_55("Unloaded Chuparosa Volumes", 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(var uParam0, int iParam1) //Position: 0x56F / 1391
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_2() //Position: 0x589 / 1417
{
	RELEASE_LAYOUT_REF(&iLocal_0);
	return;
}

void Function_3(struct<4>[] Param0) //Position: 0x595 / 1429
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
		{
			if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
			if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
			}
		}
		iVar0++;
	}
	return;
}

void Function_4(var uParam0, vector3[] vParam1) //Position: 0x5FA / 1530
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_11(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_10(&(vParam1[iVar03]), 4);
		}
		if (Function_11(&(vParam1[iVar03]), 8))
		{
			Function_5(0, 0, 30);
			Function_10(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_5(int iParam0, int iParam1, int iParam2) //Position: 0x657 / 1623
{
	int iVar0;
	
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, &iParam1, &iParam2);
		Function_6(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_6(int iParam0, int iParam1, bool bParam2) //Position: 0x741 / 1857
{
	int iVar0;
	
	Function_9(iParam0);
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
	Function_7();
	Global_26182.f_48 = StackVal;
	*(&Global_26182 + 56) = GET_TIME_OF_DAY();
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

void Function_7() //Position: 0x8C0 / 2240
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_8(int iParam0) //Position: 0x8CC / 2252
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

void Function_9(int iParam0) //Position: 0x916 / 2326
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

void Function_10(struct<17> Param0) //Position: 0x95C / 2396
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_11(struct<17> Param0) //Position: 0x979 / 2425
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_12(struct<4>[] Param0, bool bParam1) //Position: 0x997 / 2455
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	var uVar10;
	
	bVar6 = false;
	if (Global_46721 > Param0)
	{
		Global_46721 = 0;
	}
	iVar0 = Global_46721;
	while (iVar0 < Function_15((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_14(&(Param0[iVar04]), 16384);
				uVar8 = Param0[iVar04].f_12;
			}
			bVar1 = DECOR_GET_BOOL_VERBOSE(&uVar7, "lockMe", &bVar2);
			bVar4 = DECOR_GET_BOOL_VERBOSE(&uVar7, "unlockMe", &bVar5);
			if (uVar8 & 2 >= 0)
			{
				if (!(bVar1 || bVar4))
				{
					if (bVar6)
					{
						if (&bParam1)
						{
							if (uVar8 & 1 == 0)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_14(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_65(), &Param0[iVar04] + 16))
							{
								bVar9 = true;
							}
							if (IS_PERS_CHAR_VALID(&Param0[iVar04] + 24))
							{
								if (IS_PERS_CHAR_ALIVE(&Param0[iVar04] + 24))
								{
									uVar10 = GET_ACTOR_FROM_PERS_CHAR(&Param0[iVar04] + 24);
									if (IS_ACTOR_VALID(&uVar10))
									{
										if (IS_ACTOR_IN_VOLUME(&uVar10, &Param0[iVar04] + 16))
										{
											bVar9 = true;
										}
									}
								}
							}
							if (!bVar9)
							{
								Function_13(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
							if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
						else
						{
							Function_13(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_14(&(Param0[iVar04]), 1);
						uVar8 = Param0[iVar04].f_12;
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
							if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Param0[iVar04] + 16))
							{
								REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Param0[iVar04] + 16);
							}
						}
					}
				}
			}
			if (bVar1)
			{
				if (!bVar2)
				{
					DECOR_REMOVE(&uVar7, "lockMe");
				}
				if (uVar8 & 8192 == 0)
				{
					Function_13(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_13(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			else if (bVar4)
			{
				if (!bVar5)
				{
					DECOR_REMOVE(&uVar7, "unlockMe");
				}
				if (uVar8 & 8192 >= 0)
				{
					Function_14(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_14(&(Param0[iVar04]), 1);
					uVar8 = Param0[iVar04].f_12;
				}
			}
			bVar3 = IS_DOOR_LOCKED(&uVar7);
			if (uVar8 & 1 >= 0)
			{
				if (Global_6630)
				{
					if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 8192 != 0)
					{
						if (bVar3)
						{
							if (IS_ACTOR_IN_VOLUME(Function_65(), &Param0[iVar04] + 16))
							{
								SET_DOOR_LOCK(&uVar7, 0);
							}
						}
					}
				}
				else if (!bVar3)
				{
					SET_DOOR_LOCK(&uVar7, 1);
				}
			}
			else if (Global_6630)
			{
				if (IS_VOLUME_VALID(&Param0[iVar04] + 16) && uVar8 & 32768 < 0)
				{
					if (IS_ACTOR_IN_VOLUME(Function_65(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_14(&(Param0[iVar04]), 32768);
						}
					}
				}
			}
			else if (bVar3)
			{
				SET_DOOR_LOCK(&uVar7, 0);
			}
		}
		iVar0++;
	}
	Global_46721 = iVar0;
	return;
}

void Function_13(struct<13> Param0) //Position: 0xDB8 / 3512
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_14(struct<13> Param0) //Position: 0xDCB / 3531
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_15(int iParam0, bool bParam1) //Position: 0xDE8 / 3560
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_16(vector3 vParam0) //Position: 0xDFA / 3578
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_54(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_17(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
		{
			iVar1 = 1;
		}
		iVar0++;
	}
	if (Global_6630)
	{
		vParam0.f_8 = 1;
	}
	else if (Global_6629)
	{
		vParam0.f_8 = 1;
	}
	else if (vParam0.z)
	{
		vParam0.f_8 = 0;
	}
}

bool Function_17(vector3 vParam0, var uParam3, bool bParam4) //Position: 0xE84 / 3716
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_53(&vParam0))
	{
		return 0;
	}
	Function_1(&(Global_43791[iParam2]), 4194304);
	bVar0 = DECOR_GET_INT(&vParam0 + 8, "locflag");
	if (bVar0 != 0 && vParam0 != 5)
	{
		return 0;
	}
	bVar1 = uParam3;
	switch (vParam0)
	{
		case 0x00000005:
			if ((bVar0 && 240) == 0)
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if ((bVar0 && 32) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_51(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_50(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_5(0, 0, 0);
						}
						else
						{
							Function_5(0, 0, 30);
						}
						Function_10(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_50(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_10(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_49(iParam2)) && !Function_48(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_47(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_11(&vParam0, 2))
					{
						if (!Function_11(&vParam0, 16))
						{
							bVar2 = true;
							if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
							{
								if (GET_CURRENT_GAME_TIME() > DECOR_GET_FLOAT(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime"))
								{
									bVar2 = false;
								}
								else
								{
									DECOR_REMOVE(GET_OBJECT_FROM_VOLUME(&vParam0 + 8), "lawAllowTrespassTime");
								}
							}
							if (bVar2)
							{
								Function_50(&vParam0, 16);
								Function_39(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (Function_11(&vParam0, 16))
					{
						Function_10(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_11(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_11(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_50(&vParam0, 2);
			}
			else
			{
				Function_10(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_49(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_38(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_11(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_37(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_50(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_49(iParam2))
					{
						Function_36(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_18(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_18(int iParam0) //Position: 0x12DC / 4828
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_38(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_56(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_23(473, 1, 0, 0);
		iVar0 = Function_22(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_23(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_23(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_23(476, 1, 0, 0);
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
		Function_21(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_21(7, 30);
	}
	if (Function_20(473) <= Function_19(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_19(int iParam0) //Position: 0x13CD / 5069
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_20(int iParam0) //Position: 0x140A / 5130
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_21(int iParam0, int iParam1) //Position: 0x1443 / 5187
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

var Function_22(int iParam0) //Position: 0x14AD / 5293
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_49(iParam0))
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

int Function_23(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1505 / 5381
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
	Function_35(iParam0, TO_FLOAT(bParam1), 1);
	Function_34(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_25(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_24(iParam0);
	return 1;
}

void Function_24(bool bParam0) //Position: 0x172D / 5933
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

void Function_25(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x17CB / 6091
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
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
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
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
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
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
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
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
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_19(390))), 32);
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
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_20(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_20(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_32(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_30(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_28(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_27(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_26(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_26() //Position: 0x1E09 / 7689
{
	int iVar0;
	
	return &iVar0;
}

var Function_27(int iParam0) //Position: 0x1E12 / 7698
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_28(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1E23 / 7715
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_29("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_29(char* cParam0) //Position: 0x1F1A / 7962
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_30(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1F35 / 7989
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_15(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_31(Function_15(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_31(int iParam0, int iParam1) //Position: 0x1F9C / 8092
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_32(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1FAE / 8110
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
	if (((Function_33(iParam0) != 19 || Function_33(iParam0) != 17) || Function_33(iParam0) != 10) || Function_33(iParam0) != 9)
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

int Function_33(int iParam0) //Position: 0x20E2 / 8418
{
	return Global_55480[iParam016].f_96;
}

void Function_34(int iParam0) //Position: 0x20F1 / 8433
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

int Function_35(int iParam0, float fParam1, bool bParam2) //Position: 0x228B / 8843
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
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
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

void Function_36(var uParam0, int iParam1) //Position: 0x24CF / 9423
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_37(int iParam0, var uParam1, var uParam2) //Position: 0x24DC / 9436
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

bool Function_38(var uParam0, int iParam1) //Position: 0x2506 / 9478
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_39(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2523 / 9507
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_46(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_45(iParam1))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeType");
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam2))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid criminal");
		return "";
	}
	if (!IS_OBJECT_VALID(&uParam3) && !iParam0 != 4)
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid victim");
		return "";
	}
	if (!Function_42(1))
	{
		LOG_ERROR("Crime is disabled: CREATE_CRIME_EVENT failure");
		return "";
	}
	uVar2 = CREATE_CRIME_IN_LAYOUT(&Global_39918);
	uVar3 = FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes");
	if ((IS_CRIME_VALID(&uVar2) && IS_OBJECT_VALID(&uVar3)) && GET_OBJECT_TYPE(&uVar3) != 2)
	{
		SET_CRIME_TYPE(&uVar2, iParam1);
		SET_CRIME_VICTIM(&uVar2, &uParam3);
		SET_CRIME_CRIMINAL(&uVar2, &uParam2);
		SET_CRIME_BEGIN_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		SET_CRIME_END_TIMESTAMP(&uVar2, GET_CURRENT_GAME_TIME());
		GET_OBJECT_POSITION(&uParam3, &Var0);
		SET_CRIME_POSITION(&uVar2, Var0);
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_26(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_40();
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

void Function_40() //Position: 0x27D6 / 10198
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_41(&uVar0, &uVar1);
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

void Function_41(var uParam0, int iParam1) //Position: 0x2849 / 10313
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

bool Function_42(bool bParam0) //Position: 0x287F / 10367
{
	if (Function_47(256))
	{
		return 0;
	}
	if (Function_47(262144))
	{
		return 0;
	}
	if (Function_44())
	{
		return 0;
	}
	if (!Function_47(1))
	{
		return 0;
	}
	if (!Function_47(4096))
	{
		return 0;
	}
	if (bParam0 && Function_43(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_47(2048))
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

int Function_43(int iParam0) //Position: 0x28F5 / 10485
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_44() //Position: 0x2906 / 10502
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

bool Function_45(int iParam0) //Position: 0x291F / 10527
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_46(int iParam0) //Position: 0x2935 / 10549
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x294A / 10570
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_48(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x2968 / 10600
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

bool Function_49(int iParam0) //Position: 0x2A17 / 10775
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_50(struct<17> Param0) //Position: 0x2A2D / 10797
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_51(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x2A40 / 10816
{
	int iVar0;
	int iVar1;
	
	Function_9(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_52(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_6(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x2ABA / 10938
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_9(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_6(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_53(int iParam0) //Position: 0x2AE3 / 10979
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam0 + 8))
	{
		return 0;
	}
	return 1;
}

bool Function_54(int iParam0) //Position: 0x2B03 / 11011
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_55(char* cParam0) //Position: 0x2B1F / 11039
{
	if (!Function_54(128))
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

void Function_56(var uParam0, int iParam1) //Position: 0x2B5F / 11103
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_57(vector3 vParam0) //Position: 0x2B70 / 11120
{
	Function_13(&vParam0, 2);
	vParam0.z = bParam1;
	return;
}

var Function_58(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x2B84 / 11140
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_59(&Param0);
	if (iVar0 <= 0)
	{
		return 4294967295;
	}
	strcpy(&cVar1, &cParam4, 32);
	stradd(&cVar1, "_", 32);
	stradd(&cVar1, &cParam2, 32);
	stradd(&cVar1, "*", 32);
	strcpy(&cVar9, "door", 8);
	if (iParam3 <= 10)
	{
		stradd(&cVar9, "0", 8);
	}
	straddi(&cVar9, iParam3, 8);
	uVar11 = GET_WORLD_SECTOR_CHILD_OBJECT(&iParam1, &cVar1, &cVar9);
	if (!IS_DOOR_VALID(GET_DOOR_FROM_OBJECT(&uVar11)))
	{
		return 4294967295;
	}
	Param0[iVar04] = GET_DOOR_FROM_OBJECT(&uVar11);
	if (bParam5)
	{
		Function_13(&(Param0[iVar04]), 1);
	}
	Function_13(&(Param0[iVar04]), 4096);
	(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_13(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_13(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_59(struct<4>[] Param0) //Position: 0x2C78 / 11384
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Param0)
	{
		if (!IS_DOOR_VALID(&(Param0[iVar04])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void Function_60(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x2CA9 / 11433
{
	if (uParam0 >= (vParam1 - 1))
	{
		LOG_ERROR("Too many locations defined - increase array size in vol file!");
		return;
	}
	if (!IS_VOLUME_VALID(&uParam3))
	{
		LOG_ERROR("NL_INIT_LOCATION got invalid VOLUME!");
		return;
	}
	iParam4 = iParam4;
	*(&vParam1[uParam03] + 8) = &uParam3;
	vParam1[uParam03] = iParam2;
	DECOR_SET_INT(&vParam1[uParam03] + 8, "locflag", &iParam5);
	if (iParam2 == 4)
	{
		ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&vParam1[uParam03] + 8, 0);
	}
	uParam0++;
}

void Function_61(struct<5> Param0) //Position: 0x2D96 / 11670
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

var Function_62(int iParam0, var uParam1, int iParam2) //Position: 0x2DA7 / 11687
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_63() //Position: 0x2DCA / 11722
{
	var uVar0;
	
	Function_64(3, 3);
	uVar0 = &uVar0;
	iLocal_0 = FIND_NAMED_LAYOUT("Chuparosa_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_0))
	{
		iLocal_0 = CREATE_LAYOUT("Chuparosa_layout");
	}
	*(&iLocal_0 + 32) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_stables_cow_set");
	*(&iLocal_0 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stables1", 2,802597E-45f, Vector(-2605,795f, 31,90274f, 4276,023f), Vector(0.0f, -40,69148f, 0.0f), Vector(21,76543f, 6,78934f, 24,16265f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 32, &iLocal_0 + 8[0]);
	*(&iLocal_0 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stables2", 2,802597E-45f, Vector(-2619,399f, 32,10219f, 4271,353f), Vector(0.0f, 49,09663f, 0.0f), Vector(10,0665f, 4,514367f, 7,047185f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 32, &iLocal_0 + 8[1]);
	*(&iLocal_0 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_bank_vault", 2,802597E-45f, Vector(-2742,777f, 33,46533f, 4247,736f), Vector(0.0f, 49,41427f, 0.0f), Vector(5,571682f, 5,029839f, 7,834123f));
	*(&iLocal_0 + 64) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_house_set");
	*(&iLocal_0 + 48[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_house1", 2,802597E-45f, Vector(-2740,028f, 33,46533f, 4245,018f), Vector(0.0f, 49,41427f, 0.0f), Vector(13,64407f, 5,029839f, 8,517245f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 64, &iLocal_0 + 48[0]);
	*(&iLocal_0 + 104) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_hotel_set");
	*(&iLocal_0 + 72[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_hotel3", 2,802597E-45f, Vector(-2730,003f, 38,03709f, 4235,552f), Vector(0.0f, 31,74332f, 0.0f), Vector(2,598028f, 3,262976f, 20,73465f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 72[0]);
	*(&iLocal_0 + 72[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_hotel4", 2,802597E-45f, Vector(-2730,383f, 38,03709f, 4225,049f), Vector(0.0f, 31,74332f, 0.0f), Vector(9,602288f, 3,262976f, 2,906296f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 72[1]);
	*(&iLocal_0 + 72[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_hotel5", 2,802597E-45f, Vector(-2721,777f, 37,9095f, 4241,192f), Vector(0.0f, 31,3836f, 0.0f), Vector(6,75748f, 3,126287f, 2,483033f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 104, &iLocal_0 + 72[2]);
	*(&iLocal_0 + 136) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_trainStation_set");
	*(&iLocal_0 + 112[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_trainStation1", 2,802597E-45f, Vector(-2687,257f, 34,22969f, 4221,403f), Vector(0.0f, -12,84121f, 0.0f), Vector(15,41997f, 5,172666f, 4,103372f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 136, &iLocal_0 + 112[0]);
	*(&iLocal_0 + 112[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_trainStation2", 2,802597E-45f, Vector(-2685,808f, 34,63214f, 4225,351f), Vector(0.0f, -11,91832f, 0.0f), Vector(10,35141f, 4,421164f, 3,167867f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 136, &iLocal_0 + 112[1]);
	*(&iLocal_0 + 168) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_courthouse_set");
	*(&iLocal_0 + 144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse1", 2,802597E-45f, Vector(-2655,946f, 34,90889f, 4256,365f), Vector(0.0f, -9,855526f, 0.0f), Vector(16,0207f, 10,87173f, 10,90119f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 144[0]);
	*(&iLocal_0 + 144[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse4", 2,802597E-45f, Vector(-2657,589f, 39,74383f, 4255,818f), Vector(0.0f, -9,682225f, 0.0f), Vector(11,91524f, 7,825671f, 5,567136f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 168, &iLocal_0 + 144[1]);
	*(&iLocal_0 + 200) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_church_set");
	*(&iLocal_0 + 176[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_church1", 2,802597E-45f, Vector(-2667,556f, 32,96333f, 4281,396f), Vector(0.0f, 46,52884f, 0.0f), Vector(6,338459f, 4,524786f, 19,98719f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 200, &iLocal_0 + 176[0]);
	*(&iLocal_0 + 176[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_church2", 2,802597E-45f, Vector(-2658,874f, 32,65079f, 4279,752f), Vector(0.0f, -42,52038f, 0.0f), Vector(8,600691f, 5,134214f, 17,95993f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 200, &iLocal_0 + 176[1]);
	*(&iLocal_0 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_players_room", 2,802597E-45f, Vector(-2689,648f, 33,35108f, 4295,297f), Vector(0.0f, -2,425529f, 0.0f), Vector(10,214f, 5,658111f, 7,198388f));
	*(&iLocal_0 + 256) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_saloon_set");
	*(&iLocal_0 + 216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon2", 2,802597E-45f, Vector(-2697,394f, 33,08836f, 4288,752f), Vector(0.0f, -1,969252f, 0.0f), Vector(4,890943f, 4,747464f, 12,32002f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[0]);
	*(&iLocal_0 + 216[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon1", 2,802597E-45f, Vector(-2688,345f, 33,61721f, 4285,196f), Vector(0.0f, -1,700859f, 0.0f), Vector(14,83546f, 5,431608f, 4,634268f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[1]);
	*(&iLocal_0 + 216[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon3", 2,802597E-45f, Vector(-2700,984f, 33,20852f, 4283,411f), Vector(0.0f, -1,902949f, 0.0f), Vector(3,817018f, 4,0988f, 1,967225f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[2]);
	*(&iLocal_0 + 216[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon9", 2,802597E-45f, Vector(-2692,352f, 33,08047f, 4289,536f), Vector(0.0f, -1,439431f, 0.0f), Vector(4,770793f, 3,772571f, 3,995768f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 256, &iLocal_0 + 216[3]);
	*(&iLocal_0 + 312) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_market_set");
	*(&iLocal_0 + 264[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_market5", 2,802597E-45f, Vector(-2726,348f, 34,69062f, 4276,513f), Vector(0.0f, -7,341915f, 0.0f), Vector(4,81046f, 4,198735f, 29,25647f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 264[0]);
	*(&iLocal_0 + 264[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_market4", 2,802597E-45f, Vector(-2720,054f, 34,31895f, 4273,662f), Vector(0.0f, 0.0f, 0.0f), Vector(5,22965f, 3,263618f, 6,33866f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 264[1]);
	*(&iLocal_0 + 264[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_market3", 2,802597E-45f, Vector(-2719,863f, 34,76211f, 4264,865f), Vector(0.0f, 1,273791f, 0.0f), Vector(10,42363f, 4,100439f, 10,10078f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 264[2]);
	*(&iLocal_0 + 264[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_market2", 2,802597E-45f, Vector(-2734,906f, 34,4425f, 4284,707f), Vector(0.0f, -13,18575f, 0.0f), Vector(10,61949f, 5,015597f, 5,316793f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 264[3]);
	*(&iLocal_0 + 264[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_market1", 2,802597E-45f, Vector(-2739,525f, 33,03678f, 4274,165f), Vector(0.0f, -15,13602f, 0.0f), Vector(8,98315f, 3,795127f, 22,59898f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 312, &iLocal_0 + 264[4]);
	*(&iLocal_0 + 336) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_townsquare_set");
	*(&iLocal_0 + 320[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_townsquare1", 4,203895E-45f, Vector(-2683,989f, 33,46743f, 4255,27f), Vector(0.0f, 20.0f, 0.0f), Vector(6,893754f, 2,452447f, 7,361441f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 336, &iLocal_0 + 320[0]);
	*(&iLocal_0 + 608) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_walkways_set");
	*(&iLocal_0 + 344[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways1", 2,802597E-45f, Vector(-2663,449f, 32,90543f, 4272,755f), Vector(0.0f, 44,77998f, 0.0f), Vector(11,40482f, 5,514219f, 6,185249f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[0]);
	*(&iLocal_0 + 344[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways2", 2,802597E-45f, Vector(-2671,435f, 32,91413f, 4271,317f), Vector(0.0f, 44,40546f, 0.0f), Vector(2,22827f, 5,059163f, 8,534715f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[1]);
	*(&iLocal_0 + 344[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways3", 2,802597E-45f, Vector(-2676,688f, 32,75834f, 4273,152f), Vector(0.0f, 44,71632f, 0.0f), Vector(9,467569f, 4,288859f, 3,956372f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[2]);
	*(&iLocal_0 + 344[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways4", 2,802597E-45f, Vector(-2680,241f, 33,2816f, 4267,359f), Vector(0.0f, 26,25295f, 0.0f), Vector(2,822908f, 4,375935f, 12,09651f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[3]);
	*(&iLocal_0 + 344[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways5", 2,802597E-45f, Vector(-2673,886f, 32,99639f, 4253,706f), Vector(0.0f, 8,458183f, 0.0f), Vector(8,853853f, 5,540692f, 2,461343f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[4]);
	*(&iLocal_0 + 344[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways6", 2,802597E-45f, Vector(-2666,907f, 32,97532f, 4251,073f), Vector(0.0f, -7,572112f, 0.0f), Vector(4,506724f, 4,847564f, 3,539175f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[5]);
	*(&iLocal_0 + 344[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways7", 2,802597E-45f, Vector(-2667,572f, 32,82364f, 4257,39f), Vector(0.0f, -10,168f, 0.0f), Vector(5,064583f, 4,673167f, 2,895167f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[6]);
	*(&iLocal_0 + 344[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways8", 2,802597E-45f, Vector(-2696,814f, 33,2753f, 4256,957f), Vector(0.0f, 0.0f, 0.0f), Vector(14,74983f, 5,179121f, 2,849099f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[7]);
	*(&iLocal_0 + 344[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways9", 2,802597E-45f, Vector(-2698,064f, 32,57437f, 4261,74f), Vector(0.0f, 0.0f, 0.0f), Vector(2,594186f, 4,441894f, 26,43219f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[8]);
	*(&iLocal_0 + 344[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways10", 2,802597E-45f, Vector(-2702,273f, 32,94614f, 4264,21f), Vector(0.0f, 0.0f, 0.0f), Vector(5,131135f, 6,732898f, 7,927642f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[9]);
	*(&iLocal_0 + 344[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways11", 2,802597E-45f, Vector(-2696,826f, 32,4829f, 4271,945f), Vector(0.0f, 0.0f, 0.0f), Vector(12,9258f, 3,870071f, 5,757498f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[10]);
	*(&iLocal_0 + 344[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways12", 2,802597E-45f, Vector(-2687,551f, 32,30338f, 4279,523f), Vector(0.0f, -1,777115f, 0.0f), Vector(14,91622f, 5,789664f, 4,542312f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[11]);
	*(&iLocal_0 + 344[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways13", 2,802597E-45f, Vector(-2691,89f, 32,96828f, 4275,994f), Vector(0.0f, 0.0f, 0.0f), Vector(2,800533f, 5,42481f, 3,40191f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[12]);
	*(&iLocal_0 + 344[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways14", 2,802597E-45f, Vector(-2705,243f, 32,29985f, 4275,185f), Vector(0.0f, 0.0f, 0.0f), Vector(2,8164f, 3,914332f, 13,35452f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[13]);
	*(&iLocal_0 + 344[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways15", 2,802597E-45f, Vector(-2713,837f, 34,08649f, 4256,925f), Vector(0.0f, 0.0f, 0.0f), Vector(14,83939f, 3,823054f, 2,593326f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[14]);
	*(&iLocal_0 + 344[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways16", 2,802597E-45f, Vector(-2704,942f, 33,30577f, 4256,926f), Vector(0.0f, 0.0f, -25,97463f), Vector(5,665668f, 4,231193f, 2,919568f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[15]);
	*(&iLocal_0 + 344[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways17", 2,802597E-45f, Vector(-2712,254f, 33,65039f, 4281,824f), Vector(-1,778329f, -90,58387f, -1,576875f), Vector(30,71697f, 3,196666f, 5,200883f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[16]);
	*(&iLocal_0 + 344[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways18", 2,802597E-45f, Vector(-2716,191f, 33,96391f, 4263,158f), Vector(0.0f, 5,117352f, 0.0f), Vector(3,161594f, 3,360472f, 12,75982f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[17]);
	*(&iLocal_0 + 344[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways19", 2,802597E-45f, Vector(-2735,923f, 33,88766f, 4284,459f), Vector(0.0f, -31,17464f, 0.0f), Vector(13,79623f, 4,296254f, 2,581599f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[18]);
	*(&iLocal_0 + 344[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways20", 2,802597E-45f, Vector(-2745,691f, 33,72624f, 4280,568f), Vector(0.0f, 15,40936f, 0.0f), Vector(9,722217f, 3,939612f, 2,465116f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[19]);
	*(&iLocal_0 + 344[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways21", 2,802597E-45f, Vector(-2747,219f, 34,11061f, 4253,73f), Vector(0.0f, 48,06638f, 0.0f), Vector(3,890298f, 4,112593f, 10,44536f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[20]);
	*(&iLocal_0 + 344[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways22", 2,802597E-45f, Vector(-2735,906f, 33,69557f, 4249,452f), Vector(0.0f, -42,25198f, 0.0f), Vector(2,968621f, 4,48543f, 13,71076f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[21]);
	*(&iLocal_0 + 344[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways23", 2,802597E-45f, Vector(-2721,404f, 33,91082f, 4242,746f), Vector(0.0f, 31,45421f, 0.0f), Vector(8,25839f, 4,405485f, 5,534965f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[22]);
	*(&iLocal_0 + 344[23]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways24", 2,802597E-45f, Vector(-2727,653f, 33,71625f, 4239,352f), Vector(0.0f, -57,05105f, 0.0f), Vector(15,81942f, 3,878973f, 2,139719f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[23]);
	*(&iLocal_0 + 344[24]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways29", 2,802597E-45f, Vector(-2711,572f, 33,82289f, 4241,125f), Vector(0.0f, 31,3482f, 0.0f), Vector(13,96442f, 4,243851f, 2,366093f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[24]);
	*(&iLocal_0 + 344[25]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways28", 2,802597E-45f, Vector(-2710,467f, 33,65117f, 4227,495f), Vector(0.0f, 30,98882f, 0.0f), Vector(1,90464f, 4,235637f, 19,46796f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[25]);
	*(&iLocal_0 + 344[26]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways27", 2,802597E-45f, Vector(-2724,336f, 33,89269f, 4226,71f), Vector(0.0f, 32,45915f, 0.0f), Vector(22,54301f, 4,913895f, 2,197382f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[26]);
	*(&iLocal_0 + 344[27]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways26", 2,802597E-45f, Vector(-2687,867f, 32,29839f, 4229,06f), Vector(0.0f, -12,96379f, 0.0f), Vector(19,02541f, 6,773013f, 3,620454f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[27]);
	*(&iLocal_0 + 344[28]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways25", 2,802597E-45f, Vector(-2696,427f, 32,94411f, 4239,017f), Vector(0.0f, -11,91591f, 0.0f), Vector(3,086068f, 4,205414f, 21,22056f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[28]);
	*(&iLocal_0 + 344[29]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways30", 2,802597E-45f, Vector(-2697,4f, 34,17563f, 4222,308f), Vector(0.0f, -11,86304f, 0.0f), Vector(2,621392f, 4,440036f, 15,74873f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[29]);
	*(&iLocal_0 + 344[30]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways31", 2,802597E-45f, Vector(-2676,649f, 34,14864f, 4225,073f), Vector(0.0f, -11,78958f, 0.0f), Vector(6,262226f, 4,621839f, 15,9958f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[30]);
	*(&iLocal_0 + 344[31]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_walkways32", 2,802597E-45f, Vector(-2686,26f, 33,89177f, 4216,742f), Vector(0.0f, -11,97022f, 0.0f), Vector(19,66932f, 4,200562f, 3,361279f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 608, &iLocal_0 + 344[31]);
	*(&iLocal_0 + 656) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_stagecoachStop_set");
	*(&iLocal_0 + 616[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stagestop1", 2,802597E-45f, Vector(-2753,092f, 34,05214f, 4282,551f), Vector(0.0f, 14,71638f, 0.0f), Vector(3,520556f, 2,896959f, 10,84694f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 656, &iLocal_0 + 616[0]);
	*(&iLocal_0 + 616[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stagestop2", 2,802597E-45f, Vector(-2748,03f, 34,14611f, 4290,846f), Vector(0.0f, -24,77999f, 0.0f), Vector(6,070085f, 3,006409f, 3,20946f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 656, &iLocal_0 + 616[1]);
	*(&iLocal_0 + 616[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stagestop3", 2,802597E-45f, Vector(-2750,961f, 33,96892f, 4288,507f), Vector(0.0f, -54,72388f, 0.0f), Vector(3,158629f, 2,82801f, 3,446311f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 656, &iLocal_0 + 616[2]);
	*(&iLocal_0 + 616[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stagestop4", 2,802597E-45f, Vector(-2755,459f, 33,94178f, 4282,888f), Vector(0.0f, 15,4364f, 0.0f), Vector(3,706964f, 2,641813f, 2,94574f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 656, &iLocal_0 + 616[3]);
	*(&iLocal_0 + 728) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_chicken_set");
	*(&iLocal_0 + 664[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchickens7", 4,203895E-45f, Vector(-2737,708f, 34,03755f, 4272,097f), Vector(0.0f, 20.0f, 0.0f), Vector(14,31845f, 2,551048f, 14,31845f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 664[0]);
	*(&iLocal_0 + 664[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchickens1", 4,203895E-45f, Vector(-2722,387f, 35,01705f, 4258,46f), Vector(0.0f, 20.0f, 0.0f), Vector(14,31845f, 3,24735f, 10,73739f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 664[1]);
	*(&iLocal_0 + 664[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchickens2", 4,203895E-45f, Vector(-2721,272f, 35,26456f, 4283,757f), Vector(0.0f, 20.0f, 0.0f), Vector(14,31845f, 3,24735f, 14,31845f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 664[2]);
	*(&iLocal_0 + 664[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchickens3", 4,203895E-45f, Vector(-2689,449f, 34,28006f, 4255,05f), Vector(0.0f, 20.0f, 0.0f), Vector(14,31845f, 3,24735f, 14,31845f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 664[3]);
	*(&iLocal_0 + 664[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchickens4", 4,203895E-45f, Vector(-2670,597f, 34,28032f, 4239,371f), Vector(0.0f, 20.0f, 0.0f), Vector(14,31845f, 3,24735f, 6,080139f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 664[4]);
	*(&iLocal_0 + 664[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchickens5", 4,203895E-45f, Vector(-2654,585f, 34,05864f, 4233,173f), Vector(0.0f, 20.0f, 0.0f), Vector(14,31845f, 3,24735f, 10,59429f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 664[5]);
	*(&iLocal_0 + 664[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "nchickens6", 4,203895E-45f, Vector(-2697,439f, 34,16259f, 4245,152f), Vector(0.0f, 20.0f, 0.0f), Vector(14,31845f, 3,24735f, 9,11238f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 728, &iLocal_0 + 664[6]);
	*(&iLocal_0 + 776) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_dog_set");
	*(&iLocal_0 + 736[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dog5", 4,203895E-45f, Vector(-2667,705f, 34,3265f, 4238,568f), Vector(0.0f, 20.0f, 0.0f), Vector(18,00911f, 3,643864f, 6,865031f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 736[0]);
	*(&iLocal_0 + 736[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dog2", 4,203895E-45f, Vector(-2699,685f, 32,82862f, 4244,346f), Vector(0.0f, 115,5934f, 0.0f), Vector(4,517485f, 2,158237f, 22,88598f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 736[1]);
	*(&iLocal_0 + 736[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dog3", 4,203895E-45f, Vector(-2750,257f, 32,7332f, 4264,145f), Vector(0.0f, 105,802f, 0.0f), Vector(13,10861f, 2,158237f, 3,75971f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 736[2]);
	*(&iLocal_0 + 736[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dog4", 4,203895E-45f, Vector(-2705,278f, 32,13754f, 4226,758f), Vector(0.0f, 107,4618f, 0.0f), Vector(11,01402f, 2,158237f, 1,987857f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 776, &iLocal_0 + 736[3]);
	*(&iLocal_0 + 808) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_goat_set");
	*(&iLocal_0 + 784[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "goat1", 4,203895E-45f, Vector(-2723,971f, 34,60061f, 4255,979f), Vector(0.0f, 20.0f, 0.0f), Vector(18,95487f, 3,846697f, 7,981451f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 784[0]);
	*(&iLocal_0 + 784[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "goat2", 4,203895E-45f, Vector(-2679,677f, 33,84932f, 4241,338f), Vector(0.0f, 12,06359f, 0.0f), Vector(32,2497f, 3,182418f, 5,023716f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 808, &iLocal_0 + 784[1]);
	*(&iLocal_0 + 864) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_bird_set");
	*(&iLocal_0 + 816[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bird1", 4,203895E-45f, Vector(-2743,083f, 39,11457f, 4269,54f), Vector(0.0f, 20.0f, 0.0f), Vector(25,81576f, 6,289899f, 34,42829f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 816[0]);
	*(&iLocal_0 + 816[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bird2", 4,203895E-45f, Vector(-2695,979f, 38,04613f, 4280,02f), Vector(0.0f, 20.0f, 0.0f), Vector(22,62743f, 6,289899f, 28,09335f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 816[1]);
	*(&iLocal_0 + 816[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bird3", 4,203895E-45f, Vector(-2703,406f, 39,58453f, 4229,563f), Vector(0.0f, 20.0f, 0.0f), Vector(34,84185f, 6,289899f, 24,96616f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 816[2]);
	*(&iLocal_0 + 816[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bird4", 4,203895E-45f, Vector(-2661,546f, 40,36647f, 4257,891f), Vector(0.0f, 20.0f, 0.0f), Vector(31,34077f, 6,289899f, 34,12703f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 816[3]);
	*(&iLocal_0 + 816[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "bird5", 4,203895E-45f, Vector(-2615,523f, 36,11472f, 4267,196f), Vector(0.0f, 20.0f, 0.0f), Vector(22,62743f, 6,289899f, 30,50311f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 864, &iLocal_0 + 816[4]);
	*(&iLocal_0 + 896) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_stables_horse_set");
	*(&iLocal_0 + 872[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stables3", 4,203895E-45f, Vector(-2633,31f, 32,62882f, 4265,351f), Vector(0.0f, 20.0f, 0.0f), Vector(5,116687f, 2,589136f, 5,018899f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 896, &iLocal_0 + 872[0]);
	*(&iLocal_0 + 872[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_stables4", 4,203895E-45f, Vector(-2627,845f, 32,91703f, 4257,556f), Vector(0.0f, 20.0f, 0.0f), Vector(7,41245f, 3,302373f, 6,790393f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 896, &iLocal_0 + 872[1]);
	*(&iLocal_0 + 952) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_workers_set");
	*(&iLocal_0 + 904[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_wrks6", 2,802597E-45f, Vector(-2639,073f, 31,75344f, 4260,873f), Vector(0.0f, -3,911364f, 0.0f), Vector(8,509206f, 5,552478f, 20,54389f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 952, &iLocal_0 + 904[0]);
	*(&iLocal_0 + 904[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_wrks5", 2,802597E-45f, Vector(-2623,323f, 32,1165f, 4253,195f), Vector(0.0f, -38,70404f, 0.0f), Vector(13,79655f, 3,537822f, 7,133165f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 952, &iLocal_0 + 904[1]);
	*(&iLocal_0 + 904[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_wrks4", 2,802597E-45f, Vector(-2607,996f, 31,49876f, 4252,447f), Vector(0.0f, 49,37606f, 0.0f), Vector(1,910371f, 2,699449f, 13,69001f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 952, &iLocal_0 + 904[2]);
	*(&iLocal_0 + 904[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_wrks3", 2,802597E-45f, Vector(-2611,132f, 31,39912f, 4256,74f), Vector(0.0f, -41,03762f, 0.0f), Vector(2,908644f, 3,039696f, 10,09038f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 952, &iLocal_0 + 904[3]);
	*(&iLocal_0 + 904[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_wrks2", 2,802597E-45f, Vector(-2617,347f, 31,08973f, 4256,227f), Vector(0.0f, 50,73727f, 0.0f), Vector(11,44008f, 3,101299f, 6,267551f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 952, &iLocal_0 + 904[4]);
	*(&iLocal_0 + 960) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_drinkAmbExc", 2,802597E-45f, Vector(-2700,821f, 32,13797f, 4278,411f), Vector(0.0f, 0.0f, 0.0f), Vector(3,515234f, 2,327648f, 4,484485f));
	*(&iLocal_0 + 968) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_region", 4,203895E-45f, Vector(-2675,111f, 43,96156f, 4264,86f), Vector(0.0f, -2,629206f, 0.0f), Vector(94,09933f, 18,2189f, 54,8989f));
	*(&iLocal_0 + 1008) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_TrnPlatform_set");
	*(&iLocal_0 + 976[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box", 2,802597E-45f, Vector(-2683,835f, 34,45031f, 4217,348f), Vector(0.0f, -12,81581f, 0.0f), Vector(21,12366f, 9,21448f, 3,346525f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1008, &iLocal_0 + 976[0]);
	*(&iLocal_0 + 976[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box1", 2,802597E-45f, Vector(-2695,527f, 33,85666f, 4222,814f), Vector(0.0f, -12,65563f, 0.0f), Vector(8,677244f, 5,121027f, 18,19546f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1008, &iLocal_0 + 976[1]);
	*(&iLocal_0 + 976[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "Box2", 2,802597E-45f, Vector(-2677,591f, 33,90228f, 4227,211f), Vector(0.0f, -13,57747f, 0.0f), Vector(6,69855f, 6,410012f, 14,02431f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1008, &iLocal_0 + 976[2]);
	*(&iLocal_0 + 1016) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_doctor", 2,802597E-45f, Vector(-2710,858f, 34,26593f, 4287,386f), Vector(0.0f, 0.0f, 0.0f), Vector(4,215548f, 5,405833f, 8,614675f));
	*(&iLocal_0 + 1024) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_merchant", 2,802597E-45f, Vector(-2725,998f, 34,26593f, 4294,91f), Vector(0.0f, 80,14656f, 0.0f), Vector(5,884212f, 5,405833f, 6,282685f));
	*(&iLocal_0 + 1032) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_Poker", 4,203895E-45f, Vector(-2701,122f, 32,11704f, 4278,083f), Vector(0.0f, 20.0f, 0.0f), Vector(2,220927f, 1,739343f, 2,220927f));
	*(&iLocal_0 + 1040) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_Blackjack", 2,802597E-45f, Vector(-2686,531f, 32,24573f, 4285,035f), Vector(0.0f, -2,442021f, 0.0f), Vector(4,640112f, 3,665987f, 4,480659f));
	*(&iLocal_0 + 1088) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_saloon_outside_set");
	*(&iLocal_0 + 1048[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon4", 2,802597E-45f, Vector(-2694,648f, 32,6645f, 4278,047f), Vector(0.0f, -1,617445f, 0.0f), Vector(17,58019f, 4,795472f, 7,065094f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1088, &iLocal_0 + 1048[0]);
	*(&iLocal_0 + 1048[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon5", 2,802597E-45f, Vector(-2698,433f, 32,6645f, 4271,201f), Vector(0.0f, -1,771135f, 0.0f), Vector(9,569883f, 4,795472f, 5,503832f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1088, &iLocal_0 + 1048[1]);
	*(&iLocal_0 + 1048[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon6", 2,802597E-45f, Vector(-2701,678f, 32,6645f, 4265,335f), Vector(0.0f, 0.0f, 0.0f), Vector(7,109518f, 4,795472f, 7,896147f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1088, &iLocal_0 + 1048[2]);
	*(&iLocal_0 + 1048[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_saloon7", 2,802597E-45f, Vector(-2676,078f, 33,91975f, 4290,298f), Vector(0.0f, -1,592756f, 0.0f), Vector(8,817321f, 5,658111f, 13,34158f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1088, &iLocal_0 + 1048[3]);
	*(&iLocal_0 + 1112) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_dog_saloon_set");
	*(&iLocal_0 + 1096[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "dog1", 4,203895E-45f, Vector(-2694,044f, 32,9851f, 4276,215f), Vector(0.0f, -10,884f, 0.0f), Vector(13,10861f, 2,158237f, 5,512248f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1112, &iLocal_0 + 1096[0]);
	*(&iLocal_0 + 1144) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_dog_market_set");
	*(&iLocal_0 + 1120[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_dogs_market2", 2,802597E-45f, Vector(-2725,921f, 33,43172f, 4273,139f), Vector(0.0f, -14,01336f, 0.0f), Vector(27,58388f, 4,278932f, 27,55243f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1144, &iLocal_0 + 1120[0]);
	*(&iLocal_0 + 1120[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_dogs_market1", 2,802597E-45f, Vector(-2723,038f, 33,92895f, 4290,304f), Vector(0.0f, -14,23901f, 0.0f), Vector(21,6487f, 4,094554f, 4,094554f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1144, &iLocal_0 + 1120[1]);
	*(&iLocal_0 + 1216) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_courthouse_outside_set");
	*(&iLocal_0 + 1152[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse2", 2,802597E-45f, Vector(-2666,559f, 33,35002f, 4254,434f), Vector(0.0f, -8,804039f, 0.0f), Vector(4,922725f, 4,092079f, 13,87084f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1216, &iLocal_0 + 1152[0]);
	*(&iLocal_0 + 1152[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse3", 2,802597E-45f, Vector(-2666,97f, 37,40295f, 4254,591f), Vector(0.0f, -9,665345f, 0.0f), Vector(4,347551f, 3,734251f, 14,05577f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1216, &iLocal_0 + 1152[1]);
	*(&iLocal_0 + 1152[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse5", 2,802597E-45f, Vector(-2659,082f, 42,34615f, 4250,685f), Vector(0.0f, -10,87788f, 0.0f), Vector(6,730814f, 4,057639f, 3,620087f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1216, &iLocal_0 + 1152[2]);
	*(&iLocal_0 + 1152[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse9", 2,802597E-45f, Vector(-2655,358f, 37,18073f, 4248,958f), Vector(0.0f, -10,46922f, 0.0f), Vector(17,64188f, 3,310561f, 2,610626f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1216, &iLocal_0 + 1152[3]);
	*(&iLocal_0 + 1152[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse7", 2,802597E-45f, Vector(-2659,883f, 32,90754f, 4262,868f), Vector(0.0f, -10,46922f, 0.0f), Vector(19,61751f, 3,310561f, 2,610626f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1216, &iLocal_0 + 1152[4]);
	*(&iLocal_0 + 1152[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse6", 2,802597E-45f, Vector(-2655,358f, 32,79028f, 4248,926f), Vector(0.0f, -10,46922f, 0.0f), Vector(17,64188f, 3,310561f, 2,610626f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1216, &iLocal_0 + 1152[5]);
	*(&iLocal_0 + 1152[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_courthouse8", 2,802597E-45f, Vector(-2657,928f, 37,18073f, 4263,22f), Vector(0.0f, -10,46922f, 0.0f), Vector(17,64188f, 3,310561f, 2,610626f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1216, &iLocal_0 + 1152[6]);
	*(&iLocal_0 + 1224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_badAsses", 4,203895E-45f, Vector(-2687,962f, 32,67879f, 4289,49f), Vector(0.0f, 20.0f, 0.0f), Vector(2,055984f, 2,055984f, 2,055984f));
	*(&iLocal_0 + 1232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_streetSpawn", 2,802597E-45f, Vector(-2702,846f, 36,95881f, 4248,667f), Vector(0.0f, 13,35266f, 0.0f), Vector(91,75193f, 17,73903f, 24,08395f));
	*(&iLocal_0 + 1264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_posta_set");
	*(&iLocal_0 + 1240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_posta_01", 2,802597E-45f, Vector(-2721,238f, 34,81779f, 4229,788f), Vector(0.0f, 33,41322f, 0.0f), Vector(18,58422f, 14,92971f, 15,75771f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1264, &iLocal_0 + 1240[0]);
	*(&iLocal_0 + 1240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_posta_02", 2,802597E-45f, Vector(-2715,984f, 29,78246f, 4232,95f), Vector(0.0f, 33,41322f, 0.0f), Vector(11,97683f, 14,92971f, 15,75771f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1264, &iLocal_0 + 1240[1]);
	*(&iLocal_0 + 1288) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_telegraph_set");
	*(&iLocal_0 + 1272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "chuv_telegraph_01", 2,802597E-45f, Vector(-2685,709f, 34,15121f, 4223,509f), Vector(0.0f, -12,75292f, 0.0f), Vector(12,55758f, 10,08817f, 8,809672f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1288, &iLocal_0 + 1272[0]);
	*(&iLocal_0 + 1320) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_0, "chuv_knockout_set");
	*(&iLocal_0 + 1296[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_KO1", 2,802597E-45f, Vector(-2695,583f, 30,69284f, 4282,8f), Vector(0.0f, -2,373667f, 0.0f), Vector(14,57814f, 11,86625f, 16,37682f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1320, &iLocal_0 + 1296[0]);
	*(&iLocal_0 + 1296[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_0, "v_KO2", 2,802597E-45f, Vector(-2685,945f, 32,43866f, 4287,007f), Vector(0.0f, -0,6835338f, 0.0f), Vector(9,57671f, 8,217264f, 9,420851f));
	ADD_TO_VOLUME_SET(&iLocal_0 + 1320, &iLocal_0 + 1296[1]);
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_report_crime", Vector(-2666,634f, 31,2f, 4253,878f), Vector(0.0f, 0.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_clear_bounty", Vector(-2687,541f, 32,3f, 4224,16f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1328) = Vector(-2700,765f, 32,09935f, 4278,523f);
	*(&iLocal_0 + 1328 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1352) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinkingMG", Vector(-2700,765f, 32,09935f, 4278,523f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1360) = Vector(-2699,204f, 31,33568f, 4279,528f);
	*(&iLocal_0 + 1360 + 12) = Vector(0.0f, 79,19083f, 0.0f);
	*(&iLocal_0 + 1384) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinkcrowd1", Vector(-2699,204f, 31,33568f, 4279,528f), Vector(0.0f, 79,19083f, 0.0f));
	*(&iLocal_0 + 1392) = Vector(-2700,205f, 31,33568f, 4280,411f);
	*(&iLocal_0 + 1392 + 12) = Vector(182,1453f, 168,6411f, 176,0581f);
	*(&iLocal_0 + 1416) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinkcrowd2", Vector(-2700,205f, 31,33568f, 4280,411f), Vector(182,1453f, 168,6411f, 176,0581f));
	*(&iLocal_0 + 1424) = Vector(-2700,835f, 31,33568f, 4281,266f);
	*(&iLocal_0 + 1424 + 12) = Vector(0.0f, 1,370011f, 0.0f);
	*(&iLocal_0 + 1448) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinkcrowd3", Vector(-2700,835f, 31,33568f, 4281,266f), Vector(0.0f, 1,370011f, 0.0f));
	*(&iLocal_0 + 1456) = Vector(-2701,484f, 31,33568f, 4280,312f);
	*(&iLocal_0 + 1456 + 12) = Vector(0.0f, 339,9957f, 0.0f);
	*(&iLocal_0 + 1480) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinkcrowd4", Vector(-2701,484f, 31,33568f, 4280,312f), Vector(0.0f, 339,9957f, 0.0f));
	*(&iLocal_0 + 1488) = Vector(-2702,414f, 31,33568f, 4279,533f);
	*(&iLocal_0 + 1488 + 12) = Vector(0.0f, -68,86294f, 0.0f);
	*(&iLocal_0 + 1512) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinkcrowd5", Vector(-2702,414f, 31,33568f, 4279,533f), Vector(0.0f, -68,86294f, 0.0f));
	*(&iLocal_0 + 1520) = Vector(-2702,553f, 31,33568f, 4278,674f);
	*(&iLocal_0 + 1520 + 12) = Vector(0.0f, -82,61247f, 0.0f);
	*(&iLocal_0 + 1544) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinkcrowd6", Vector(-2702,553f, 31,33568f, 4278,674f), Vector(0.0f, -82,61247f, 0.0f));
	*(&iLocal_0 + 1552) = Vector(-2701,738f, 31,33568f, 4278,39f);
	*(&iLocal_0 + 1552 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1576) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_drinksrch", Vector(-2701,738f, 31,33568f, 4278,39f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1584) = Vector(-2664,401f, 31,39944f, 4249,833f);
	*(&iLocal_0 + 1584 + 12) = Vector(0.0f, 261,5f, 0.0f);
	*(&iLocal_0 + 1608) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "prdf_merc_giver", Vector(-2664,401f, 31,39944f, 4249,833f), Vector(0.0f, 261,5f, 0.0f));
	*(&iLocal_0 + 1616) = Vector(-2663,958f, 31,443f, 4239,576f);
	*(&iLocal_0 + 1616 + 12) = Vector(0.0f, 92,509f, 0.0f);
	*(&iLocal_0 + 1640) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_playerDuel1", Vector(-2663,958f, 31,443f, 4239,576f), Vector(0.0f, 92,509f, 0.0f));
	*(&iLocal_0 + 1648) = Vector(-2672,878f, 31,469f, 4239,77f);
	*(&iLocal_0 + 1648 + 12) = Vector(0.0f, 275,9781f, 0.0f);
	*(&iLocal_0 + 1672) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_enDuel1", Vector(-2672,878f, 31,469f, 4239,77f), Vector(0.0f, 275,9781f, 0.0f));
	*(&iLocal_0 + 1680) = Vector(-2725,153f, 32,537f, 4254,593f);
	*(&iLocal_0 + 1680 + 12) = Vector(0.0f, 289,582f, 0.0f);
	*(&iLocal_0 + 1704) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_playerDuel2", Vector(-2725,153f, 32,537f, 4254,593f), Vector(0.0f, 289,582f, 0.0f));
	*(&iLocal_0 + 1712) = Vector(-2717,136f, 32,343f, 4251,679f);
	*(&iLocal_0 + 1712 + 12) = Vector(0.0f, 115,9211f, 0.0f);
	*(&iLocal_0 + 1736) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_enDuel2", Vector(-2717,136f, 32,343f, 4251,679f), Vector(0.0f, 115,9211f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_jail_sit", Vector(-2647,498f, 31,386f, 4247,398f), Vector(0.0f, -258,6953f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_jail_leave_start", Vector(-2662,834f, 31,386f, 4255,184f), Vector(0.0f, 67,279f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_jail_leave_end", Vector(-2671,889f, 31,371f, 4253,421f), Vector(0.0f, 80,026f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_jail_leave_end2", Vector(-2653,371f, 31,386f, 4259,339f), Vector(0.0f, 95,276f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_cell_leave_cop", Vector(-2650,306f, 31,386f, 4252,54f), Vector(0.0f, 303,691f, 0.0f));
	*(&iLocal_0 + 1744) = Vector(-2737,057f, 32,53271f, 4244,75f);
	*(&iLocal_0 + 1744 + 12) = Vector(0.0f, -133,7233f, 0.0f);
	*(&iLocal_0 + 1768) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_InteriorPoint_bank", Vector(-2737,057f, 32,53271f, 4244,75f), Vector(0.0f, -133,7233f, 0.0f));
	*(&iLocal_0 + 1776) = Vector(-2683,148f, 32,4736f, 4222,974f);
	*(&iLocal_0 + 1776 + 12) = Vector(0.0f, -177,6252f, 0.0f);
	*(&iLocal_0 + 1800) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_InteriorPoint_station", Vector(-2683,148f, 32,4736f, 4222,974f), Vector(0.0f, -177,6252f, 0.0f));
	*(&iLocal_0 + 1808) = Vector(-2721,896f, 32,8284f, 4292,93f);
	*(&iLocal_0 + 1808 + 12) = Vector(0.0f, 0.0f, 0.0f);
	*(&iLocal_0 + 1832) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_InteriorPoint_store", Vector(-2721,896f, 32,8284f, 4292,93f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_0 + 1840) = Vector(-2721,896f, 32,8284f, 4292,93f);
	*(&iLocal_0 + 1840 + 12) = Vector(0.0f, 119,815f, 0.0f);
	*(&iLocal_0 + 1864) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_stand_pos_store", Vector(-2721,896f, 32,8284f, 4292,93f), Vector(0.0f, 119,815f, 0.0f));
	*(&iLocal_0 + 1872) = Vector(-2720,649f, 32,7354f, 4290,826f);
	*(&iLocal_0 + 1872 + 12) = Vector(0.0f, 181,8715f, 0.0f);
	*(&iLocal_0 + 1896) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "return_gateway_pos_store", Vector(-2720,649f, 32,7354f, 4290,826f), Vector(0.0f, 181,8715f, 0.0f));
	*(&iLocal_0 + 1904) = Vector(-2716,641f, 32,8284f, 4286,344f);
	*(&iLocal_0 + 1904 + 12) = Vector(0.0f, 119,815f, 0.0f);
	*(&iLocal_0 + 1928) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "horse_pos_store", Vector(-2716,641f, 32,8284f, 4286,344f), Vector(0.0f, 119,815f, 0.0f));
	*(&iLocal_0 + 1936) = Vector(-2723,588f, 35,6484f, 4289,898f);
	*(&iLocal_0 + 1936 + 12) = Vector(0.0f, 119,815f, 0.0f);
	*(&iLocal_0 + 1960) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos2_store", Vector(-2723,588f, 35,6484f, 4289,898f), Vector(0.0f, 119,815f, 0.0f));
	*(&iLocal_0 + 1968) = Vector(-2719,114f, 35,7994f, 4287,955f);
	*(&iLocal_0 + 1968 + 12) = Vector(0.0f, 119,815f, 0.0f);
	*(&iLocal_0 + 1992) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "camera_cut_pos1_store", Vector(-2719,114f, 35,7994f, 4287,955f), Vector(0.0f, 119,815f, 0.0f));
	*(&iLocal_0 + 2000) = Vector(-2660,317f, 31,33828f, 4255,919f);
	*(&iLocal_0 + 2000 + 12) = Vector(0.0f, 74,53823f, 0.0f);
	*(&iLocal_0 + 2024) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_InteriorPoint_jail", Vector(-2660,317f, 31,33828f, 4255,919f), Vector(0.0f, 74,53823f, 0.0f));
	*(&iLocal_0 + 2032) = Vector(-2670,832f, 31,27951f, 4278,465f);
	*(&iLocal_0 + 2032 + 12) = Vector(0.0f, 46,27048f, 0.0f);
	*(&iLocal_0 + 2056) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_InteriorPoint_church", Vector(-2670,832f, 31,27951f, 4278,465f), Vector(0.0f, 46,27048f, 0.0f));
	*(&iLocal_0 + 2064) = Vector(-2697,442f, 32,07358f, 4285,811f);
	*(&iLocal_0 + 2064 + 12) = Vector(0.0f, 11,84616f, 0.0f);
	*(&iLocal_0 + 2088) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chuf_InteriorPoint_bar", Vector(-2697,442f, 32,07358f, 4285,811f), Vector(0.0f, 11,84616f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos1", Vector(-2769,073f, 36,053f, 4279,637f), Vector(0,502f, -67,454f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos2", Vector(-2759,287f, 39,616f, 4254,398f), Vector(-8,921f, -72,737f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos3", Vector(-2718,258f, 37,99f, 4212,228f), Vector(-6,184f, -138,744f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos4", Vector(-2645,999f, 39,226f, 4238,823f), Vector(1,418f, 106,276f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos5", Vector(-2621,604f, 33,366f, 4306,046f), Vector(3,843f, 31,15f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos6", Vector(-2664,343f, 33,939f, 4296,427f), Vector(-5,671f, 52,437f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos7", Vector(-2710,338f, 33,748f, 4299,298f), Vector(10,957f, 21,026f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos8", Vector(-2751,88f, 35,592f, 4298,03f), Vector(-6,125f, -72,609f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos9", Vector(-2678,659f, 36,249f, 4281,84f), Vector(-11,417f, 69,215f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_0, "chu_vista_cam_pos10", Vector(-2737,684f, 34,468f, 4249,075f), Vector(2,63f, -87,853f, 0.0f));
	return 1;
}

void Function_64(int iParam0, int iParam1) //Position: 0x64E2 / 25826
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

var Function_65() //Position: 0x652C / 25900
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_66(char* cParam0) //Position: 0x6541 / 25921
{
	if (!Function_54(128))
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

