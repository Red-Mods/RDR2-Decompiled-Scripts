//Decompiled with MagicRDR v1.0
//Function Count : 472
//Statics Count : 1784
//Natives Count : 679
//Parameters Count : 2

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	char[] cLocal_7[4] = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 8;
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
	var uLocal_107 = 1;
	var uLocal_108 = 0;
	var uLocal_109 = 13;
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
	var uLocal_167 = -1;
	var uLocal_168 = 0;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = false;
	int iLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 4;
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
	var uLocal_286 = 1;
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
	var uLocal_300 = 5;
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
	var uLocal_314 = 37;
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
	var uLocal_392 = 6;
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
	var uLocal_408 = 2;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 3;
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
	int iLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 3;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 2;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 3;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 2;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 1;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 1;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 2;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 1;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 2;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 1;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 1;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 37;
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
	var uLocal_604 = 8;
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
	var uLocal_624 = 1;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 6;
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
	var uLocal_648 = 10;
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
	var uLocal_674 = 1;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 2;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 3;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 2;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 1;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 1;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 1;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 5;
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
	var uLocal_740 = 1;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 1;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 3;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 41;
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
	var uLocal_848 = 1;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 2;
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
	var uLocal_866 = 3;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 1;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 3;
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
	var uLocal_896 = 14;
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
	var uLocal_940 = 2;
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
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
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
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
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
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
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
	struct<13> Local_1116 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0 } ;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	bool bLocal_1136 = false;
	bool bLocal_1137 = false;
	bool bLocal_1138 = false;
	bool bLocal_1139 = false;
	int iLocal_1140 = 0;
	int iLocal_1141 = 0;
	var uLocal_1142 = 0;
	int iLocal_1143 = 5;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	int iLocal_1165 = 0;
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	bool bLocal_1169 = false;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	var uLocal_1172 = 0;
	int iLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	int iLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	int iLocal_1185 = 0;
	bool bLocal_1186 = false;
	int iLocal_1187 = 0;
	float fLocal_1188 = 0.0f;
	int iLocal_1189 = 0;
	int iLocal_1190 = 0;
	int iLocal_1191 = 0;
	int iLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	float fLocal_1196 = 0.0f;
	int iLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	int iLocal_1200 = 0;
	var uLocal_1201 = 0;
	struct<9> Local_1202 = { 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	int iLocal_1244 = 0;
	int iLocal_1245 = 0;
	var uLocal_1246 = 20;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	struct<4> Local_1368[37];
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	int iLocal_1666 = 2;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676[2] = { 0, 0 };
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	int iLocal_1682 = 0;
	var uLocal_1683[3] = { 0, 0, 0 };
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	int iLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	int iLocal_1703 = 0;
	int iLocal_1704 = 0;
	int iLocal_1705 = 0;
	struct<265> Local_1706 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	char* cVar0[64];
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	iLocal_1704 = 0;
	iLocal_1774 = 4294967295;
	uLocal_1775 = "";
	iLocal_1777 = !Function_471();
	iLocal_1778 = 0;
	bLocal_1779 = false;
	strcpy(&cVar0, "Initializing ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_470(&cVar0, 3);
	Function_469();
	if (StackVal && (((((!Global_6666 && bScriptParam_0 == Global_46838[1]) && bScriptParam_0 == Global_46894[1]) && bScriptParam_0 == Global_46894[2]) && bScriptParam_0 == Global_46914[1]) && bScriptParam_0 == Global_46796[0]) == 5)
	{
		bLocal_177 = true;
	}
	iLocal_5 = 0;
	while (!IS_EXITFLAG_SET())
	{
		iLocal_6 = 1000;
		switch (iLocal_5)
		{
			case 0x00000000:
				if (Global_6632)
				{
					if (bLocal_177)
					{
						Function_464(&iLocal_13, bScriptParam_0, 0);
					}
					else
					{
						Function_463(bScriptParam_0, 0);
					}
					iLocal_5 = 1;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000001:
				if (Function_460())
				{
					Function_459();
					iLocal_5 = 2;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000002:
				if (Function_458())
				{
					Function_457();
					Function_456(&(Global_43791[bScriptParam_0]), 32);
					iLocal_5 = 3;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000003:
				iLocal_6 = 500;
				if (Function_453())
				{
					Function_451(bScriptParam_0);
					if (bLocal_177)
					{
						Function_449(&iLocal_13, Function_450(), bScriptParam_0);
						Function_448(&iLocal_13, Function_450());
					}
					Function_456(&(Global_43791[bScriptParam_0]), 16);
					iLocal_5 = 4;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000004:
				if (IS_WORLD_SECTOR_LOADED(&cLocal_7))
				{
					iLocal_5 = 5;
					iLocal_6 = 0;
				}
				break;
			
			case 0x00000005:
				Function_447(&uLocal_9);
				Function_444();
				Function_441(bScriptParam_0);
				iLocal_5 = 6;
				iLocal_6 = 0;
				break;
			
			case 0x00000006:
				if ((Function_440() && Function_439(Global_44085[bScriptParam_09])) && Function_438(&iLocal_13))
				{
					Function_436();
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				else
				{
					iLocal_6 = 100;
				}
				break;
			
			case 0x00000007:
				if (bLocal_177)
				{
					Function_424(&iLocal_13, bScriptParam_0, Function_450());
				}
				Function_423(bScriptParam_0);
				Function_422();
				Function_421();
				Function_456(&(Global_43791[bScriptParam_0]), 8);
				if (Function_420(&(Global_43791[bScriptParam_0]), 131072))
				{
					Function_419(&(Global_43791[bScriptParam_0]), 131072);
					iLocal_5 = 11;
				}
				else
				{
					iLocal_5 = 8;
				}
				iLocal_6 = 0;
				break;
			
			case 0x00000008:
				Function_418(bScriptParam_0);
				Function_417();
				Function_416(bScriptParam_0);
				iLocal_5 = 9;
				iLocal_6 = 0;
				break;
			
			case 0x00000009:
				Function_410(bScriptParam_0);
				Function_409(64);
				Function_456(&(Global_43791[bScriptParam_0]), 512);
				iLocal_5 = 10;
				iLocal_6 = 0;
				break;
			
			case 0x0000000A:
				Function_408(Function_450(), bScriptParam_0);
				strcpy(&cVar0, "Finished Initializing ", 64);
				stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
				Function_407(&cVar0, 5.0f);
				Function_456(&(Global_43791[bScriptParam_0]), 4);
				iLocal_5 = 11;
				iLocal_6 = 0;
				break;
			
			case 0x0000000B:
				Function_224(bScriptParam_0);
				if (Function_420(&(Global_43791[bScriptParam_0]), 131072))
				{
					iLocal_5 = 7;
					iLocal_6 = 0;
				}
				if (bLocal_177)
				{
					Function_109(&iLocal_13, bScriptParam_0);
				}
				Function_73(&uLocal_9, &uLocal_1246, Function_108(), bScriptParam_0);
				Function_69(&Local_1368, 0);
				break;
			
			case 0x0000000C:
				break;
		}
		WAIT(iLocal_6);
	}
	if (bLocal_177)
	{
		Function_54(&iLocal_13, bScriptParam_0);
	}
	Function_52(bScriptParam_0);
	Function_23();
	Function_22();
	Function_21();
	Function_13(&uLocal_9, &uLocal_1246);
	Function_12(&Local_1368);
	Function_10();
	Function_6(bScriptParam_0);
	SET_AMBIENT_TUNING_MAX_VISIBLE_RANGE(70.0f);
	Function_409(64);
	Function_419(&(Global_43791[bScriptParam_0]), 32);
	Function_419(&(Global_43791[bScriptParam_0]), 64);
	Function_419(&(Global_43791[bScriptParam_0]), 8);
	Function_419(&(Global_43791[bScriptParam_0]), 512);
	Function_419(&(Global_43791[bScriptParam_0]), 16);
	Function_419(&(Global_43791[bScriptParam_0]), 4);
	Function_1();
	strcpy(&cVar0, "nUnloaded ", 64);
	stradd(&cVar0, &Global_44085[bScriptParam_09] + 32, 64);
	Function_407(&cVar0, 5.0f);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x3E6 / 998
{
	SET_DUST_LEVEL(1);
	Function_2(&iLocal_1666);
	iLocal_1682 = 0;
	while (iLocal_1682 <= 3)
	{
		if (IS_OBJECT_VALID(&(uLocal_1683[iLocal_1682])))
		{
			DEREFERENCE_OBJECT(&(uLocal_1683[iLocal_1682]));
		}
		iLocal_1682++;
	}
	if (IS_OBJECT_VALID(&iLocal_1691 + 24))
	{
		DESTROY_OBJECT(&iLocal_1691 + 24);
		STREAMING_SET_POI_LIMIT(1);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bBuckedPlayerOffHorse"))
	{
		DECOR_REMOVE(&Global_54076, "bBuckedPlayerOffHorse");
	}
	return;
}

void Function_2(int iParam0) //Position: 0x483 / 1155
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_3(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_3(struct<2>[] Param0, int iParam1) //Position: 0x4AB / 1195
{
	if (Function_5(&(Param0[iParam12]), 4))
	{
		if (Function_5(&(Param0[iParam12]), 1))
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
			Function_4(&(Param0[iParam12]), 1);
			Function_4(&(Param0[iParam12]), 2);
			Function_4(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_4(struct<13> Param0) //Position: 0x5F6 / 1526
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_5(struct<13> Param0) //Position: 0x613 / 1555
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x631 / 1585
{
	int iVar0;
	
	if (!Function_9(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 <= Global_27462)
	{
		if (Global_27462[iVar052].f_156 == iParam0)
		{
			Function_7(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_7(int iParam0) //Position: 0x667 / 1639
{
	if (!Function_8(iParam0))
	{
		return;
	}
	Global_27462[iParam052].f_188 = 0;
	Global_38376 = (Global_38376 - 1);
	return;
}

bool Function_8(int iParam0) //Position: 0x689 / 1673
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

bool Function_9(int iParam0) //Position: 0x69F / 1695
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_10() //Position: 0x6B5 / 1717
{
	REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_434 + 2048);
	REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_434 + 2048);
	Function_11();
	return;
}

void Function_11() //Position: 0x6D2 / 1746
{
	RELEASE_LAYOUT_REF(&iLocal_434);
	return;
}

void Function_12(struct<4>[] Param0) //Position: 0x6DF / 1759
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

void Function_13(var uParam0, vector3[] vParam1) //Position: 0x744 / 1860
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (uParam0 - 1))
	{
		if (Function_20(&(vParam1[iVar03]), 4))
		{
			SET_CURRENT_MAP(false);
			Function_19(&(vParam1[iVar03]), 4);
		}
		if (Function_20(&(vParam1[iVar03]), 8))
		{
			Function_14(0, 0, 30);
			Function_19(&(vParam1[iVar03]), 8);
		}
		iVar0++;
	}
	return;
}

void Function_14(int iParam0, int iParam1, int iParam2) //Position: 0x7A1 / 1953
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
		Function_15(Global_26182, &iVar0, 1);
	}
	return;
}

void Function_15(int iParam0, int iParam1, bool bParam2) //Position: 0x88B / 2187
{
	int iVar0;
	
	Function_18(iParam0);
	Function_17(&iParam1);
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
	Function_16();
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

void Function_16() //Position: 0xA0A / 2570
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_17(int iParam0) //Position: 0xA16 / 2582
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

void Function_18(int iParam0) //Position: 0xA60 / 2656
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

void Function_19(struct<17> Param0) //Position: 0xAA6 / 2726
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	Param0.f_16 = (Param0.f_16 - iVar0);
	return;
}

bool Function_20(struct<17> Param0) //Position: 0xAC3 / 2755
{
	int iVar0;
	
	iVar0 = (Param0.f_16 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_21() //Position: 0xAE1 / 2785
{
	return;
}

void Function_22() //Position: 0xAE7 / 2791
{
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13);
	RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13);
	return;
}

void Function_23() //Position: 0xB44 / 2884
{
	iLocal_6 = 1000;
	Function_25(&Local_1706);
	Function_24();
	return;
}

void Function_24() //Position: 0xB58 / 2904
{
	Function_2(&iLocal_178 + 8);
	RELEASE_LAYOUT_REF(&iLocal_178);
	return;
}

void Function_25(struct<265> Param0) //Position: 0xB6B / 2923
{
	int iVar0;
	
	if (!bLocal_1169)
	{
		if (!Function_50(&Param0))
		{
			return;
		}
		if (Function_44(Param0.f_264))
		{
			return;
		}
	}
	RESET_TREE_TYPE_CLEARING();
	STREAMING_UNLOAD_BOUNDS();
	Function_42();
	Function_2(&iLocal_1143);
	if (!Function_50(&Param0) || Global_6666)
	{
		Param0.f_4 = 1;
	}
	else
	{
		Param0.f_4 = 14;
	}
	Function_33(&Param0);
	if (Global_6666)
	{
		Function_32(0);
	}
	else
	{
		Function_32(bLocal_1169);
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (iLocal_1124[iVar0] == 4294967295 && iLocal_1124[iVar0] == 0)
		{
			STREAMING_EVICT_ACTOR(iLocal_1124[iVar0], 4294967295);
			iLocal_1124[iVar0] = 4294967295;
		}
		iVar0++;
	}
	if (iLocal_1136 == 4294967295 && iLocal_1136 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_1136, 4294967295);
		bLocal_1136 = 4294967295;
	}
	if (iLocal_1139 == 4294967295 && iLocal_1139 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_1139, 4294967295);
		bLocal_1139 = 4294967295;
	}
	if (iLocal_1138 == 4294967295 && iLocal_1138 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_1138, 4294967295);
		bLocal_1138 = 4294967295;
	}
	if (iLocal_1137 == 4294967295 && iLocal_1137 == 0)
	{
		STREAMING_EVICT_ACTOR(iLocal_1137, 4294967295);
		bLocal_1137 = 4294967295;
	}
	if (iLocal_1170)
	{
		Function_31(0.0f);
		iLocal_1170 = 0;
	}
	Global_6628 = 0;
	if (DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
	{
		DECOR_REMOVE(&Global_54076, "bStartedGY");
	}
	CLEAR_ACTOR_PROOF(&Global_54076, 16);
	if (Function_28(Global_46914[0]) && Param0.f_264 != 0)
	{
		AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	}
	else
	{
		AUDIO_MUSIC_SET_MOOD("SILENT", 0, 4294967295, 4294967295);
	}
	ENABLE_WEATHER_SPHERE(Function_27(Param0.f_264), 0);
	if (Global_6666)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 7, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 6, 60.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 8, 30.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 10, 20.0f, 0);
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, 15, 5.0f, 0);
		ADD_ITEM(Function_26(3), &Global_54076, 0);
		ADD_ITEM(Function_26(3), &Global_54076, 0);
		ADD_ITEM(Function_26(3), &Global_54076, 0);
		ADD_ITEM(Function_26(3), &Global_54076, 0);
		ADD_ITEM(Function_26(3), &Global_54076, 0);
		ADD_ITEM(Function_26(1), &Global_54076, 0);
		ADD_ITEM(Function_26(1), &Global_54076, 0);
		ADD_ITEM(Function_26(1), &Global_54076, 0);
		ADD_ITEM(Function_26(1), &Global_54076, 0);
		ADD_ITEM(Function_26(1), &Global_54076, 0);
		ADD_ITEM(Function_26(20), &Global_54076, 0);
	}
	if (Global_6666)
	{
		DESTROY_LAYOUT(&uLocal_1198);
		CLEAR_ALL_CORPSES();
	}
	else
	{
		RELEASE_LAYOUT_REF(&uLocal_1198);
	}
	return;
}

var Function_26(bool bParam0) //Position: 0xDEC / 3564
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

int Function_27(int iParam0) //Position: 0xEE0 / 3808
{
	switch (iParam0)
	{
		case 0x00000000:
			return 31;
			break;
		
		case 0x00000001:
			return 30;
			break;
		
		case 0x00000002:
			return 32;
			break;
		
		case 0x00000003:
			return 33;
			break;
		
		case 0x00000004:
			return 29;
			break;
	}
	LOG_ERROR("should not be here");
	return 31;
}

bool Function_28(bool bParam0) //Position: 0xF43 / 3907
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((bParam0 != Global_46894[2] || bParam0 != Global_46894[1]) || bParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[bParam0];
	return (((Function_30(uVar0, 0x1000000) || Function_30(uVar0, 0x2000000)) || Function_30(uVar0, 0x4000000)) || Function_29(bParam0));
}

bool Function_29(int iParam0) //Position: 0xFB6 / 4022
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_30(var uParam0, bool bParam1) //Position: 0xFD3 / 4051
{
	return (uParam0 && bParam1) == 0;
}

void Function_31(int iParam0) //Position: 0xFE0 / 4064
{
	Global_26182.f_32 = iParam0;
	SET_RAIN_AMOUNT(Global_26182.f_32);
	return;
}

void Function_32(bool bParam0) //Position: 0xFF5 / 4085
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (IS_OBJECT_VALID(&(Local_1210[iVar04])))
		{
			if (bParam0)
			{
				RELEASE_OBJECT_REF(&(Local_1210[iVar04]));
			}
			else
			{
				DESTROY_OBJECT(&(Local_1210[iVar04]));
			}
		}
		Local_1210[iVar04].f_8 = 0;
		iVar0++;
	}
	if (IS_OBJECT_VALID(&vLocal_1202))
	{
		if (bParam0)
		{
			RELEASE_OBJECT_REF(&vLocal_1202);
		}
		else
		{
			DESTROY_OBJECT(&vLocal_1202);
		}
	}
	vLocal_1202.f_8 = 0;
	return;
}

void Function_33(int iParam0) //Position: 0x1069 / 4201
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&iParam0 + 8))
	{
		Function_34(SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, iVar0));
		iVar0++;
	}
	if (IS_ACTOR_VALID(&iLocal_1171))
	{
		SET_ACTOR_INVULNERABILITY(&iLocal_1171, 0);
		Function_34(&iLocal_1171);
	}
	return;
}

void Function_34(int iParam0) //Position: 0x10B3 / 4275
{
	Function_35(&iParam0, 1);
	SET_ACTOR_HEALTH(&iParam0, 0.0f);
	return;
}

void Function_35(int iParam0, bool bParam1) //Position: 0x10C7 / 4295
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 23, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 24, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 25, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 26, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 27, !bParam1);
		ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 28, !bParam1);
		if (!bParam1)
		{
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 29, false);
			ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 30, false);
		}
		else
		{
			if (((Function_41() || Function_40(&iParam0)) || Function_39(&iParam0)) || Function_38(&iParam0, 1))
			{
				ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 29, true);
			}
			else
			{
				ACTOR_ENABLE_VARIABLE_MESH(&iParam0, 30, true);
			}
			if (GET_OBJECT_NAMED_BONE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam0), "head", &Var0))
			{
				uVar2 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &iParam0, Function_37(), 2,802597E-45f, Var0, Vector(0.0f, 0.0f, 0.0f), Vector(0,5f, 0,5f, 0,5f));
				RESET_RMPTFX_IN_VOLUME(&uVar2);
				DESTROY_VOLUME(&uVar2);
			}
			if (DECOR_CHECK_EXIST(&iParam0, "oLeftEyeGlow"))
			{
				uVar3 = DECOR_GET_OBJECT(&iParam0, "oLeftEyeGlow");
				if (IS_OBJECT_VALID(&uVar3))
				{
					UNK_0x1A59E608(&uVar3);
				}
				DECOR_REMOVE(&iParam0, "oLeftEyeGlow");
			}
			if (DECOR_CHECK_EXIST(&iParam0, "oRightEyeGlow"))
			{
				uVar3 = DECOR_GET_OBJECT(&iParam0, "oRightEyeGlow");
				if (IS_OBJECT_VALID(&uVar3))
				{
					UNK_0x1A59E608(&uVar3);
				}
				DECOR_REMOVE(&iParam0, "oRightEyeGlow");
			}
			DECOR_SET_BOOL(&iParam0, "Zombie_NoHead", 1);
			Function_36();
			bVar4 = CREATE_RMPTFX_EMITTER_ON_BONE(Function_37(), "blood_zombie_shotgun_exit", "head", &iParam0, Function_36(), &iParam0);
			if (IS_OBJECT_VALID(&bVar4))
			{
				Function_36();
				UNK_0x6745191B(&bVar4, Function_36());
			}
		}
	}
	return;
}

struct<8> Function_36() //Position: 0x12B9 / 4793
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

var Function_37() //Position: 0x12C3 / 4803
{
	int iVar0;
	
	return &iVar0;
}

bool Function_38(int iParam0, int iParam1) //Position: 0x12CC / 4812
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((iVar0 != 1252 && iParam1) || (iVar0 != 1253 && iParam1)) || iVar0 != 541) || iVar0 != 542) || iVar0 != 543) || iVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_39(int iParam0) //Position: 0x1311 / 4881
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1228 && iVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_40(int iParam0) //Position: 0x1332 / 4914
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

var Function_41() //Position: 0x1353 / 4947
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_42() //Position: 0x1366 / 4966
{
	Local_1116.f_12 = 0;
	Local_1116.f_8 = 0;
	Local_1116 = 0.0f;
	Function_43(&Local_1116 + 4, 3);
	UI_HIDE("XPMultiplierSP");
	return;
}

void Function_43(int iParam0, int iParam1) //Position: 0x1399 / 5017
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_44(int iParam0) //Position: 0x13AF / 5039
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (Global_6666)
	{
		return 0;
	}
	uVar0 = Function_45(Function_49(iParam0));
	iVar1 = CONVERT_TIME_OF_DAY_TO_INT(&uVar0);
	uVar2 = MAKE_TIME_OF_DAY(24, 0, 0);
	iVar3 = CONVERT_TIME_OF_DAY_TO_INT(&uVar2);
	iVar4 = CONVERT_TIME_OF_DAY_TO_INT(GET_TIME_OF_DAY());
	if ((iVar4 - iVar1) <= iVar3)
	{
		return 1;
	}
	return 0;
}

var Function_45(int iParam0) //Position: 0x13F7 / 5111
{
	if (!Function_46(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return &Global_21684[iParam07] + 40;
}

bool Function_46(int iParam0) //Position: 0x1417 / 5143
{
	if (!Function_48(iParam0))
	{
		return 0;
	}
	if (!Function_47(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_47(int iParam0) //Position: 0x143B / 5179
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_48(int iParam0) //Position: 0x1450 / 5200
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_49(int iParam0) //Position: 0x1467 / 5223
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

bool Function_50(struct<265> Param0) //Position: 0x1529 / 5417
{
	if (Global_6666)
	{
		return 1;
	}
	switch (Param0.f_264)
	{
		case 0x00000000:
			if (Function_51(4) && !Global_6625)
			{
				return 1;
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if ((Function_51(4) && Function_51(6)) && !Global_6625)
			{
				return 1;
			}
			break;
		
		case 0x00000004:
			if (Function_51(26) && !Global_6625)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool Function_51(int iParam0) //Position: 0x15A3 / 5539
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_52(bool bParam0) //Position: 0x15B8 / 5560
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (Function_420(&(Global_43791[bParam0]), 0x20000000))
	{
		Function_419(&(Global_43791[bParam0]), 0x20000000);
		if (IS_LAYOUTREF_VALID(&Global_43578))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Global_43578);
			ITERATE_IN_LAYOUT(&uVar0, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
			START_OBJECT_ITERATOR(&uVar0);
			iVar1 = START_OBJECT_ITERATOR(&uVar0);
			while (IS_OBJECT_VALID(&iVar1))
			{
				uVar2 = GET_ACTOR_FROM_OBJECT(&iVar1);
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar2)))
				{
					DEREFERENCE_ACTOR(&uVar2);
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar2));
					CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar2);
					TASK_CLEAR(&uVar2);
				}
				iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
			}
			DESTROY_ITERATOR(&uVar0);
		}
		SET_POP_DENSITY_MULTIPLIER(1.0f);
		if (Function_28(bParam0))
		{
			ENABLE_AMBIENT_SPAWNING(Function_53(1));
		}
	}
	return;
}

bool Function_53(int iParam0) //Position: 0x1672 / 5746
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_54(int iParam0, int iParam1) //Position: 0x168E / 5774
{
	HUD_CLEAR_HELP_QUEUE();
	if (!Function_9(iParam1) || Function_30(&iParam0 + 608, 16))
	{
		return;
	}
	if (iParam1 == Global_46760[0])
	{
		Function_57(&iParam0, &Global_11014, iParam1);
	}
	else if (iParam1 == Global_46760[1])
	{
		Function_57(&iParam0, &Global_11146, iParam1);
	}
	else if (iParam1 == Global_46760[2])
	{
		Function_57(&iParam0, &Global_11120, iParam1);
	}
	else if (iParam1 == Global_46796[1])
	{
		Function_57(&iParam0, &Global_11222, iParam1);
	}
	else if (iParam1 == Global_46796[3])
	{
		Function_57(&iParam0, &Global_11284, iParam1);
	}
	else if (iParam1 == Global_46796[4])
	{
		Function_57(&iParam0, &Global_11492, iParam1);
	}
	else if (iParam1 == Global_46816[0])
	{
		Function_57(&iParam0, &Global_11544, iParam1);
	}
	else if (iParam1 == Global_46816[1])
	{
		Function_57(&iParam0, &Global_11646, iParam1);
	}
	else if (iParam1 == Global_46816[2])
	{
		Function_57(&iParam0, &Global_11704, iParam1);
	}
	else if (iParam1 == Global_46838[1])
	{
		Function_57(&iParam0, &Global_11752, iParam1);
	}
	else if (iParam1 == Global_46838[0])
	{
		Function_57(&iParam0, &Global_11726, iParam1);
	}
	else if (iParam1 == Global_46850[0])
	{
		Function_57(&iParam0, &Global_11836, iParam1);
	}
	else if (iParam1 == Global_46850[1])
	{
		Function_57(&iParam0, &Global_11946, iParam1);
	}
	else if (iParam1 == Global_46850[2])
	{
		Function_57(&iParam0, &Global_11988, iParam1);
	}
	else if (iParam1 == Global_46866[0])
	{
		Function_57(&iParam0, &Global_12048, iParam1);
	}
	else if (iParam1 == Global_46866[1])
	{
		Function_57(&iParam0, &Global_12150, iParam1);
	}
	else if (iParam1 == Global_46866[2])
	{
		Function_57(&iParam0, &Global_11398, iParam1);
	}
	else if (iParam1 == Global_46894[2])
	{
		Function_57(&iParam0, &Global_12284, iParam1);
	}
	else if (iParam1 == Global_46894[1])
	{
		Function_57(&iParam0, &Global_12342, iParam1);
	}
	else if (iParam1 == Global_46894[0])
	{
		Function_57(&iParam0, &Global_12422, iParam1);
	}
	else if (iParam1 == Global_46894[3])
	{
		Function_57(&iParam0, &Global_12392, iParam1);
	}
	else if (iParam1 == Global_46926[0])
	{
		Function_57(&iParam0, &Global_12760, iParam1);
	}
	else if (iParam1 == Global_46926[1])
	{
		Function_57(&iParam0, &Global_12714, iParam1);
	}
	else if (iParam1 == Global_46926[2])
	{
		Function_57(&iParam0, &Global_12644, iParam1);
	}
	else if (iParam1 == Global_46914[0])
	{
		Function_57(&iParam0, &Global_12488, iParam1);
	}
	else if (iParam1 == Global_46914[1])
	{
		Function_57(&iParam0, &Global_12482, iParam1);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	UI_SET_ICON("ZMeter", 0);
	UI_SET_PROGRESS_BAR_CHANGE("ZMeter", false);
	UI_SET_PROGRESS_BAR_VAL("ZMeter", 1.0f);
	UI_EXIT("ZMeter");
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	Function_52(iParam1);
	RESET_FACTIONS_STATUS_TWO_WAY(23, 32);
	if (!Global_6623)
	{
		Function_55(iParam1);
	}
	return;
}

void Function_55(int iParam0) //Position: 0x19F5 / 6645
{
	var uVar0;
	
	if (Global_6623 || Function_53(0x8000000))
	{
		return;
	}
	uVar0 = Function_56(iParam0);
	if (Function_28(iParam0))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "nIDLE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	AUDIO_MUSIC_RELEASE_CONTROL(20000, 0);
	return;
}

int Function_56(int iParam0) //Position: 0x1A5C / 6748
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_46838[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46894[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_46914[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_46926[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46926[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_46850[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46850[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46850[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46866[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46866[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46894[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_46894[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_46760[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46760[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46760[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_46796[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_46796[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_46816[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_46838[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return &iVar0;
}

void Function_57(vector3 vParam0) //Position: 0x1DA4 / 7588
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (!IS_ACTOR_VALID(&uVar1))
		{
		}
		else if (!IS_ACTOR_ALIVE(&uVar1))
		{
		}
		else
		{
			Function_68(&(Param1[iVar02]), 4);
		}
		if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
		{
			DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
		}
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
		}
		iVar0++;
	}
	if (!Function_28(iParam2))
	{
		Global_21684[&vParam0 + 6247].f_32 = 0.0f;
		if (!Function_67(Global_119934, 0x4000000))
		{
			Function_62(&Global_54076, 0x4000000, 1, 0);
		}
	}
	else if (Function_30(&vParam0 + 608, 32))
	{
		if (!Function_67(Global_119934, 8388608))
		{
			Function_62(&Global_54076, 8388608, 1, 0);
		}
	}
	else if (!Function_67(Global_119934, 4194304))
	{
		Function_62(&Global_54076, 4194304, 1, 0);
	}
	Function_60(&vParam0, 0, 0);
	DESTROY_OBJECT(&vParam0);
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRevolvers"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRevolvers");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRifles"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRifles");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumRepeaters"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumRepeaters");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumPistols"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumPistols");
	}
	if (DECOR_CHECK_EXIST(&Global_44085[iParam29] + 8, "ZP_NumShotguns"))
	{
		DECOR_REMOVE(&Global_44085[iParam29] + 8, "ZP_NumShotguns");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
	{
		DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
	}
	Function_2(&vParam0 + 384);
	AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
	Function_58(iParam2, Function_28(iParam2));
	ENABLE_AMBIENT_SPAWNING(Function_53(1));
	return;
}

void Function_58(int iParam0, bool bParam1) //Position: 0x2084 / 8324
{
	if (!Function_9(iParam0))
	{
		return;
	}
	if (bParam1 && Function_59("noZombieFireArt"))
	{
		return;
	}
	if (iParam0 == Global_46760[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46760[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46796[4])
	{
	}
	else if (iParam0 == Global_46816[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_51(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46816[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46838[1])
	{
	}
	else if (iParam0 == Global_46838[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46850[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46866[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[1])
	{
	}
	else if (iParam0 == Global_46894[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46894[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[0])
	{
	}
	else if (iParam0 == Global_46926[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46926[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (iParam0 == Global_46914[1])
	{
	}
	return;
}

int Function_59(int iParam0) //Position: 0x27DA / 10202
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_60(var uParam0, bool bParam1, bool bParam2) //Position: 0x27FC / 10236
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_61(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
			iVar0++;
		}
	}
	return;
}

bool Function_61(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2885 / 10373
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5);
}

void Function_62(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x28A5 / 10405
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_64(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_63(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_63(char* cParam0) //Position: 0x291A / 10522
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

bool Function_64(int iParam0, var uParam1, int iParam2) //Position: 0x2954 / 10580
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
		if (Function_66(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_65(uVar0))
		{
			case 0x00000002:
				if (!Function_67(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_65(char* cParam0) //Position: 0x29D0 / 10704
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

int Function_66(int iParam0) //Position: 0x2A71 / 10865
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_43(&iVar1, 2147483648);
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

bool Function_67(var uParam0, int iParam1) //Position: 0x2AAE / 10926
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_68(var uParam0, int iParam1) //Position: 0x2AC1 / 10945
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_69(struct<4>[] Param0, bool bParam1) //Position: 0x2ADB / 10971
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
	while (iVar0 < Function_72((Param0 - 1), Global_46721 + 4))
	{
		uVar7 = &Param0[iVar04];
		if (IS_DOOR_VALID(&uVar7))
		{
			uVar8 = Param0[iVar04].f_12;
			if (uVar8 & 16384 >= 0)
			{
				*(&Param0[iVar04] + 24) = GET_PERS_CHAR_FROM_OBJECT(DECOR_GET_OBJECT(&uVar7, "owner"));
				Function_71(&(Param0[iVar04]), 16384);
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
								Function_70(&(Param0[iVar04]), 1);
								uVar8 = Param0[iVar04].f_12;
							}
						}
						else if (uVar8 & 1 >= 0)
						{
							Function_71(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) < 0 && uVar8 & 1 != 0)
					{
						if (IS_VOLUME_VALID(&Param0[iVar04] + 16))
						{
							bVar9 = false;
							if (IS_ACTOR_IN_VOLUME(Function_108(), &Param0[iVar04] + 16))
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
								Function_70(&(Param0[iVar04]), 1);
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
							Function_70(&(Param0[iVar04]), 1);
							uVar8 = Param0[iVar04].f_12;
						}
					}
					else if ((StackVal && Global_99472) != 0 && uVar8 & 1 < 0)
					{
						Function_71(&(Param0[iVar04]), 1);
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
					Function_70(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 == 0)
				{
					Function_70(&(Param0[iVar04]), 1);
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
					Function_71(&(Param0[iVar04]), 8192);
					uVar8 = Param0[iVar04].f_12;
				}
				if (uVar8 & 1 >= 0)
				{
					Function_71(&(Param0[iVar04]), 1);
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
							if (IS_ACTOR_IN_VOLUME(Function_108(), &Param0[iVar04] + 16))
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
					if (IS_ACTOR_IN_VOLUME(Function_108(), &Param0[iVar04] + 16))
					{
						if (IS_DOOR_OPENED(&uVar7))
						{
							CLOSE_DOOR(&uVar7, 1.0f);
							Function_71(&(Param0[iVar04]), 32768);
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

void Function_70(struct<13> Param0) //Position: 0x2EFC / 12028
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_71(struct<13> Param0) //Position: 0x2F0F / 12047
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

int Function_72(int iParam0, bool bParam1) //Position: 0x2F2C / 12076
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_73(vector3 vParam0) //Position: 0x2F3E / 12094
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	vParam0.f_4 = 0;
	uVar2 = Global_6629;
	Global_6629 = 0;
	if (!Function_53(32) || !IS_ACTOR_VALID(&uParam2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (vParam0 - 1))
	{
		if (Function_74(&(vParam1[iVar03]), &uParam2, uParam3, iVar1, uVar2))
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

bool Function_74(vector3 vParam0, var uParam3, bool bParam4) //Position: 0x2FC8 / 12232
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Function_107(&vParam0))
	{
		return 0;
	}
	Function_419(&(Global_43791[iParam2]), 4194304);
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
					if (!Function_20(&vParam0, 2))
					{
						if (!Function_20(&vParam0, 8))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "customweather"))
							{
								Function_105(DECOR_GET_INT(&vParam0 + 8, "customweather"), 0, 0, 30, 1);
								Function_104(&vParam0, 8);
							}
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (Function_20(&vParam0, 8))
					{
						if (HUD_IS_FADED())
						{
							Function_14(0, 0, 0);
						}
						else
						{
							Function_14(0, 0, 30);
						}
						Function_19(&vParam0, 8);
					}
				}
			}
			if ((bVar0 && 16) >= 0)
			{
				if (bVar1)
				{
					if (!Function_20(&vParam0, 2))
					{
						if (!Function_20(&vParam0, 4))
						{
							if (DECOR_CHECK_EXIST(&vParam0 + 8, "ncustommap"))
							{
								SET_CURRENT_MAP(DECOR_GET_INT(&vParam0 + 8, "ncustommap"));
								Function_104(&vParam0, 4);
							}
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (Function_20(&vParam0, 4))
					{
						SET_CURRENT_MAP(false);
						Function_19(&vParam0, 4);
					}
				}
			}
			if ((bVar0 && 128) >= 0)
			{
				if ((((((bVar1 && Function_9(iParam2)) && !Function_103(0, 0, 1, 1)) && !Global_6646) && !Global_6647) && !Function_102(2048)) && !IS_SCRIPT_VALID(&Global_39922 + 96))
				{
					if (!Function_20(&vParam0, 2))
					{
						if (!Function_20(&vParam0, 16))
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
								Function_104(&vParam0, 16);
								Function_94(3, 28, &uParam1, GET_OBJECT_FROM_VOLUME(&vParam0 + 8), 0);
							}
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (Function_20(&vParam0, 16))
					{
						Function_19(&vParam0, 16);
					}
				}
			}
			if ((bVar0 && 64) >= 0)
			{
				if (bVar1 && !Global_6623)
				{
					if (!Function_20(&vParam0, 2))
					{
						if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
						{
							SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2, DECOR_GET_INT(&vParam0 + 8, "relationship"));
						}
					}
				}
				else if (Function_20(&vParam0, 2))
				{
					if (DECOR_CHECK_EXIST(&vParam0 + 8, "factionswap") && DECOR_CHECK_EXIST(&vParam0 + 8, "relationship"))
					{
						RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(DECOR_GET_INT(&vParam0 + 8, "factionswap"), 2);
					}
				}
			}
			if (bVar1)
			{
				Function_104(&vParam0, 2);
			}
			else
			{
				Function_19(&vParam0, 2);
			}
			break;
		
		case 0x00000002:
		case 0x00000004:
			if (!Function_9(iParam2))
			{
				return 0;
			}
			if (IS_ACTOR_IN_VOLUME(&uParam1, &vParam0 + 8))
			{
				if (!Function_420(&(Global_43791[iParam2]), 262144))
				{
					if (!Function_20(&vParam0, 1))
					{
						if (!Global_6620)
						{
							Function_93(StackVal, StackVal, vParam0);
						}
						else
						{
							Global_6620 = 0;
						}
						Function_104(&vParam0, 1);
					}
				}
				if (vParam0 == 4)
				{
					if (!bParam4 && Function_9(iParam2))
					{
						Function_92(&Global_44085[Global_44085[iParam29]9] + 32, &Global_44085[iParam29] + 32);
					}
					Global_6629 = 1;
				}
				Function_75(iParam2);
			}
			else if (vParam0 == 4)
			{
				Global_6629 = 0;
			}
			break;
	}
	return bVar1;
}

void Function_75(int iParam0) //Position: 0x3420 / 13344
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Function_420(&(Global_43791[iParam0]), 4096))
	{
		return;
	}
	Function_456(&(Global_43791[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_80(473, 1, 0, 0);
		iVar0 = Function_79(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_80(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_80(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_80(476, 1, 0, 0);
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
		Function_78(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_78(7, 30);
	}
	if (Function_77(473) <= Function_76(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

float Function_76(int iParam0) //Position: 0x3511 / 13585
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

float Function_77(int iParam0) //Position: 0x354E / 13646
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_78(int iParam0, int iParam1) //Position: 0x3587 / 13703
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

var Function_79(int iParam0) //Position: 0x35F1 / 13809
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_9(iParam0))
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

int Function_80(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x3649 / 13897
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
	Function_91(iParam0, TO_FLOAT(bParam1), 1);
	Function_90(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_82(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_81(iParam0);
	return 1;
}

void Function_81(bool bParam0) //Position: 0x3871 / 14449
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

void Function_82(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x390F / 14607
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_76(390))), 32);
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
					fVar19 = (Function_77(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_77(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_88(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, 0, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_86(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_84(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_83(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_37(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, 0, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, 0, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_83(int iParam0) //Position: 0x3F4D / 16205
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_84(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x3F5E / 16222
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_85("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_85(char* cParam0) //Position: 0x4060 / 16480
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_86(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x407B / 16507
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_72(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_87(Function_72(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_87(int iParam0, int iParam1) //Position: 0x40E2 / 16610
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_88(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x40F4 / 16628
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
	if (((Function_89(iParam0) != 19 || Function_89(iParam0) != 17) || Function_89(iParam0) != 10) || Function_89(iParam0) != 9)
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

int Function_89(int iParam0) //Position: 0x4228 / 16936
{
	return Global_55480[iParam016].f_96;
}

void Function_90(int iParam0) //Position: 0x4237 / 16951
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

int Function_91(int iParam0, float fParam1, bool bParam2) //Position: 0x43D1 / 17361
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

void Function_92(var uParam0, int iParam1) //Position: 0x4615 / 17941
{
	AMBIENCE_AUDIO_ENTITY_UPDATE_LOCATION(&uParam0, &iParam1);
	return;
}

void Function_93(int iParam0, var uParam1, int iParam2) //Position: 0x4622 / 17954
{
	if (!&iParam0 + 8 != &Global_21498)
	{
		Global_21498 = &iParam0 + 8;
		Global_21498.f_12 = iParam0;
		Global_21498.f_8 = 0;
	}
	return;
}

var Function_94(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x464C / 17996
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (!Function_101(iParam0))
	{
		LOG_ERROR("Attempting to CREATE_CRIME_EVENT with an invalid CrimeCategory");
		return "";
	}
	if (!Function_100(iParam1))
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
	if (!Function_97(1))
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
		uVar4 = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), &Global_39918, 3, 0);
		SET_CRIME_OBJECTSET(&uVar2, &uVar4);
		if (!&bParam4)
		{
			SET_CRIME_WITNESSED(&uVar2, 1);
		}
		else
		{
			SET_CRIME_WITNESSED(&uVar2, 3);
			Function_95();
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

void Function_95() //Position: 0x48FF / 18687
{
	var uVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_39918);
	uVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&Global_39918, "CurrentCrimes"));
	Function_96(&uVar0, &uVar1);
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

void Function_96(var uParam0, int iParam1) //Position: 0x4972 / 18802
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

bool Function_97(bool bParam0) //Position: 0x49A8 / 18856
{
	if (Function_102(256))
	{
		return 0;
	}
	if (Function_102(262144))
	{
		return 0;
	}
	if (Function_99())
	{
		return 0;
	}
	if (!Function_102(1))
	{
		return 0;
	}
	if (!Function_102(4096))
	{
		return 0;
	}
	if (bParam0 && Function_98(12))
	{
		return 0;
	}
	if (Global_6621)
	{
		return 0;
	}
	if (Function_102(2048))
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

int Function_98(int iParam0) //Position: 0x4A1E / 18974
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_99() //Position: 0x4A2F / 18991
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

bool Function_100(int iParam0) //Position: 0x4A48 / 19016
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_101(int iParam0) //Position: 0x4A5E / 19038
{
	if (iParam0 > 0 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_102(int iParam0) //Position: 0x4A73 / 19059
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_103(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x4A91 / 19089
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

void Function_104(struct<17> Param0) //Position: 0x4B40 / 19264
{
	Param0.f_16 = (Param0.f_16 || iParam1);
	return;
}

void Function_105(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x4B53 / 19283
{
	int iVar0;
	int iVar1;
	
	Function_18(uParam0);
	Global_26182.f_4 = uParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(0);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_106(StackVal, &bParam4);
		}
		else
		{
			iVar1 = MAKE_TIME_OF_DAY(&uParam1, &uParam2, &uParam3);
			Function_15(StackVal, &iVar1, &bParam4);
		}
	}
}

void Function_106(int iParam0, int iParam1) //Position: 0x4BCD / 19405
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_18(iParam0);
	Function_17(&uVar0);
	PRINTNL();
	Function_15(iParam0, &uVar0, &iParam1);
	return;
}

bool Function_107(int iParam0) //Position: 0x4BF6 / 19446
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

var Function_108() //Position: 0x4C16 / 19478
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_109(struct<82> Param0) //Position: 0x4C2B / 19499
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	char* cVar5[32];
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	struct<5> Var24;
	bool bVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	
	if (DECOR_CHECK_EXIST(&Global_54076, "QM_TriggerAttack"))
	{
		DECOR_REMOVE(&Global_54076, "QM_TriggerAttack");
		Function_43(&Param0 + 608, 16);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		if (&Param0 + 624 == 4294967295)
		{
			(&Param0 + 624) = Function_219(0, bParam1, 3);
		}
		if (!Function_30(&Param0 + 608, 64))
		{
			*(&Param0 + 376) = 8;
		}
	}
	else if (bParam1 != Global_46914[1] || HUD_IS_FADED())
	{
		if (!Function_30(&Param0 + 608, 0x20000000))
		{
			AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(!Function_218(1, 0));
			Function_217(&Param0 + 608, 0x20000000);
		}
		return;
	}
	if (Function_30(&Param0 + 608, 16))
	{
		Function_216(bParam1, 0.0f);
		if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
		{
			DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		}
		return;
	}
	if (Function_30(&Param0 + 608, 4))
	{
		return;
	}
	if (Global_6623 && !Function_30(&Param0 + 608, 4))
	{
		Function_217(&Param0 + 608, 4);
		Function_54(&Param0, bParam1);
		DECOR_SET_FLOAT(&Global_44085[bParam19] + 8, "ZombieScore", 0.0f);
		Function_215(0, 4294967295);
		Function_214();
		Function_52(bParam1);
		return;
	}
	fVar0 = Function_212(Function_213(bParam1));
	fVar1 = Function_211(bParam1);
	fVar2 = ((fVar1 / fVar0) * 100.0f);
	if (&Param0 + 616 == 4294967295)
	{
		*(&Param0 + 616) = Function_219(111, 111, 5);
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CurrentTown_Safe"))
	{
		DECOR_REMOVE(&Global_54076, "CurrentTown_Safe");
		iVar3 = 0;
		while (StackVal < (iVar3 - 1))
		{
			uVar4 = &Param0 + 8[iVar35];
			if (IS_ACTOR_ALIVE(&uVar4))
			{
				Function_210(&Param0 + 8[iVar35]);
			}
			iVar3++;
		}
		Function_209(&Param0);
		*(&Param0 + 376) = 7;
		return;
	}
	if (Function_208(Function_213(bParam1)))
	{
		if (((&Param0 + 376 > 7 && !Function_30(&Param0 + 608, 2048)) && !IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo")) && !ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
		{
			strcpy(&cVar5, "SURVIVOR_LOC:", 32);
			stradd(&cVar5, &Global_44085[bParam19] + 32, 32);
			SET_MISSION_INFO(&cVar5, "");
			if (Function_30(&Param0 + 608, 4096) || fVar0 >= (fVar1 + 10.0f))
			{
				Function_205(&Param0, 0);
				Function_210(&Param0 + 336);
				iVar13 = 0;
				while (StackVal < (iVar13 - 1))
				{
					Function_210(&Param0 + 8[iVar135]);
					iVar13++;
				}
				Function_217(&Param0 + 608, 2048);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", 100.0f);
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
				UI_REFRESH("ZMeter");
				Function_216(bParam1, 0.0f);
				ENABLE_AMBIENT_SPAWNING(true);
				SET_POP_DENSITY_MULTIPLIER(0,5f);
				Function_204(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				DECOR_SET_INT(&Global_54076, "nDecayRate", 3);
				*(&Param0 + 376) = 5;
			}
			else
			{
				Function_202();
			}
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI"))
		{
			if (DECOR_GET_FLOAT(&Global_54076, "TimeToDestroyUI") + 2.0f) > GET_CURRENT_GAME_TIME()
			{
				DECOR_REMOVE(&Global_54076, "TimeToDestroyUI");
				UI_EXIT("ZMeter");
			}
		}
		if (&Param0 + 376 <= 1 && &Param0 + 376 >= 6)
		{
			if (&Param0 + 376 >= 1)
			{
				Function_198(&Param0, bParam1, fVar2);
			}
			if (!Function_30(&Param0 + 608, 131072))
			{
				if (&Param0 + 376 == 6 && &Param0 + 376 < 1)
				{
					if ((Global_6629 && !Function_30(&Param0 + 608, 32768)) && !UI_ISACTIVE("LocationText"))
					{
						Function_217(&Param0 + 608, 32768);
						UI_ENTER("ZMeter");
						UI_SET_TEXT("ZMeter", "Undead_Density");
						UI_SET_ICON("ZMeter", (FLOOR((fVar0 / 10.0f)) - 1));
						fVar14 = Function_211(bParam1);
						fVar15 = (fVar14 % 10.0f);
						fVar16 = (fVar14 / 10.0f);
						UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar15 * 10.0f)) + 1.0f));
						UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar16));
						UI_REFRESH("ZMeter");
					}
					if (((Function_30(&Param0 + 608, 32768) && !DECOR_CHECK_EXIST(&Global_54076, "TimeToDestroyUI")) && UI_ISACTIVE("ZMeter")) && &Param0 + 376 > 5)
					{
						Function_209(&Param0);
					}
				}
			}
		}
	}
	Function_196(&Param0, bParam1);
	if (Function_30(&Param0 + 608, 1024))
	{
		Function_195(&Param0);
	}
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING() || Global_99146)
	{
		if (!Function_30(&Param0 + 608, 16384))
		{
			Function_217(&Param0 + 608, 16384);
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 0);
				iVar17++;
			}
		}
	}
	else if (Function_30(&Param0 + 608, 16384))
	{
		Function_43(&Param0 + 608, 16384);
		iVar17 = 0;
		while (StackVal < (iVar17 - 1))
		{
			MEMORY_ALLOW_SHOOTING(&Param0 + 8[iVar175], 1);
			iVar17++;
		}
	}
	if (Function_30(&Param0 + 608, 262144))
	{
		if (Function_438(&Param0))
		{
			Function_43(&Param0 + 608, 262144);
			Function_193(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &Global_46715, bParam1, Param0);
			if (!Function_28(bParam1))
			{
				if (!Function_30(&Param0 + 608, 8))
				{
					Function_217(&Param0 + 608, 8);
					Function_192();
				}
			}
		}
	}
	if (Function_30(&Param0 + 608, 524288))
	{
		if (Function_192())
		{
			Function_217(&Param0 + 608, 8);
			Function_43(&Param0 + 608, 524288);
		}
	}
	switch (&Param0 + 376)
	{
		case 0x00000001:
			if (((!HUD_IS_FADED() && (Function_67(Global_119934, 65536) || !Global_6606)) && Global_6629) && !Global_6628)
			{
				if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
				{
					DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
				}
				if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
				{
					DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
				}
				Function_184(&Param0);
				Function_217(&Param0 + 608, 262144);
				if (Function_28(bParam1))
				{
					if ((RAND_INT_RANGE(0, 100000) % 100) <= 75)
					{
						SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SHOCKED_BY_CARNAGE", true, true, 0, 0, true, false);
					}
					Function_463(bParam1, 1);
					Function_178(bParam1);
					Function_215(0, 4294967295);
					Function_216(bParam1, 0.0f);
					REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					if (Function_30(&Param0 + 608, 1))
					{
						Function_177(&Param0, bParam1);
						Function_176("Survivor_Obj_TalkToLeader", 0x40f00000, 1, 2, 0, 0, 0, 0);
						*(&Param0 + 376) = 2;
					}
					else
					{
						*(&Param0 + 376) = 4;
					}
					Function_173("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_463(bParam1, 0);
					Function_178(bParam1);
					Function_217(&Param0 + 608, 2);
					Function_215(1, 4294967295);
					AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
					*(&Param0 + 632) = 1000.0f;
					*(&Param0 + 376) = 11;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_167(&Param0 + 336, 1, &Param0 + 608))
			{
				SET_ANIM_SET_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo", 0);
				iVar18 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&Param0 + 336));
				if (((iVar18 != 41 || iVar18 != 42) || iVar18 != 43) || iVar18 != 44)
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Rfl");
				}
				else
				{
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 336, "DLC_give_ammo/Survivor/Leader/Ptl");
				}
				Function_135(&Param0, bParam1);
				SAY_SINGLE_LINE_STRING_WITH_REPLY(&Param0 + 336, "GET_US_AMMO_P", &Global_54076, "PLAYER_AGREE_TO_GET_AMMO", 1, 1, 0, 0);
				*(&Param0 + 376) = 3;
			}
			break;
		
		case 0x00000003:
			bVar19 = false;
			iVar17 = 0;
			while (StackVal < (iVar17 - 1))
			{
				uVar20 = &Param0 + 8[iVar175];
				if (IS_ACTOR_ALIVE(&uVar20))
				{
					if (Function_30((&Param0 + 8[iVar175])->f_32, 2))
					{
						if (DECOR_CHECK_EXIST(&uVar20, "nUC_NoAmmo"))
						{
							if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(DECOR_GET_INT(&uVar20, "nUC_NoAmmo")))
							{
								RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&uVar20, "nUC_NoAmmo"));
								DECOR_REMOVE(&uVar20, "nUC_NoAmmo");
								SAY_SINGLE_LINE_STRING(&uVar20, "PLAYER_NO_AMMO_P", true, true, 2, 0, true, false);
								return;
							}
						}
						if (Function_167(&Param0 + 8[iVar175], 0, &Param0 + 8[iVar175] + 32))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
							iVar21 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&uVar20));
							Global_21684[&Param0 + 6247].f_32 = (Global_21684[&Param0 + 6247].f_32 + 1.0f);
							AI_DONT_HARM_ACTOR(&Global_54076);
							AI_DONT_HARM_ACTOR(&Param0 + 8[iVar175]);
							Function_124(&Param0 + 8[iVar175], iVar21);
							Function_43(&Param0 + 8[iVar175] + 32, 2);
							Function_217(&Param0 + 8[iVar175] + 32, 16);
						}
						bVar19++;
					}
					else if ((!IS_ACTION_NODE_PLAYING_PARTIAL(&uVar20, "DLC_give_ammo") && Function_30((&Param0 + 8[iVar175])->f_32, 16)) && (GET_TASK_STATUS(&uVar20, 6) != 0 || GET_TASK_STATUS(&uVar20, 6) != 2))
					{
						Function_43(&Param0 + 8[iVar175] + 32, 16);
						AI_CLEAR_DONT_HARM_ACTOR(&uVar20);
						AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
						SET_MOVER_FROZEN(&uVar20, 0);
						RESET_ANIM_SET_FOR_ACTOR(&uVar20, 1);
						uVar22 = Vector(0.0f, 0.0f, 0.0f);
						Var24 = Vector(0.0f, 0.0f, 0.0f);
						GET_OBJECT_POSITION(&Param0 + 8[iVar175] + 8, &uVar22);
						GET_OBJECT_ORIENTATION(&Param0 + 8[iVar175] + 8, &Var24);
						TASK_PRIORITY_SET(&uVar20, true);
						TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar20, &uVar22, -1f);
						strcpy(&cVar26, "PLAYER_RESPOND_TO_THANKS_Z_", 64);
						if (IS_ACTOR_MALE(&uVar20))
						{
							stradd(&cVar26, "M", 64);
						}
						else
						{
							stradd(&cVar26, "F", 64);
						}
						if (Function_123(&uVar20))
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "THANKS_FOR_AMMO_P", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						else
						{
							SAY_SINGLE_LINE_STRING_WITH_REPLY(&uVar20, "nTHANK_YOU", &Global_54076, &cVar26, 1, 1, 2, 0);
						}
						Param0.f_640 = GET_CURRENT_GAME_TIME();
					}
				}
				else if (!IS_ACTOR_ALIVE(&uVar20))
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
					}
					if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
					{
						DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
					}
				}
				iVar17++;
			}
			if (Global_47151[31])
			{
				PRINTSTRING("Survivors left to save: ");
				PRINTINT(bVar19);
				PRINTNL();
			}
			if (bVar19 == 0)
			{
				*(&Param0 + 376) = 4;
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			if (!DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_SET_BOOL(&Global_54076, "bNoSurvivorHelp", 1);
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "nDecayRate"))
			{
				bVar42 = DECOR_GET_INT(&Global_54076, "nDecayRate");
				if (bVar42 == 3)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", 2);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,5f);
				}
				else if (bVar42 == 2)
				{
					DECOR_SET_INT(&Global_54076, "nDecayRate", true);
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(0,75f);
				}
				else if (bVar42 == 1)
				{
					DECOR_REMOVE(&Global_54076, "nDecayRate");
					SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
					SET_POP_DENSITY_MULTIPLIER(1.0f);
				}
			}
			else
			{
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
				SET_POP_DENSITY_MULTIPLIER(1.0f);
			}
			ENABLE_AMBIENT_SPAWNING(true);
			Function_204(1);
			if (Function_118(&Param0))
			{
				DECOR_SET_FLOAT(&Global_54076, "TimeToDestroyUI", GET_CURRENT_GAME_TIME());
				SET_POP_DENSITY_MULTIPLIER(0.0f);
				ENABLE_AMBIENT_SPAWNING(false);
				Function_117(1);
				SET_AMBIENT_DEAD_COUNT_DECAY_RATE(3.0f);
				*(&Param0 + 376) = 6;
			}
			break;
		
		case 0x00000006:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 600) == 0)
			{
				AUDIO_MUSIC_RELEASE_CONTROL(3000, 0);
				Function_216(bParam1, 300.0f);
			}
			else
			{
				Function_216(bParam1, 0.0f);
			}
			break;
		
		case 0x00000007:
			if (!Function_30(&Param0 + 608, 8))
			{
				Function_217(&Param0 + 608, 8);
				Function_192();
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bTalkedToLeader"))
			{
				DECOR_REMOVE(&Global_54076, "bTalkedToLeader");
			}
			if (DECOR_CHECK_EXIST(&Global_54076, "bNoSurvivorHelp"))
			{
				DECOR_REMOVE(&Global_54076, "bNoSurvivorHelp");
			}
			Function_116(bParam1);
			Function_115(&Param0);
			Function_205(&Param0, 1);
			Function_52(Global_43789);
			CLEAR_MISSION_INFO();
			*(&Param0 + 624) = Function_219(0, bParam1, 3);
			Function_217(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			Function_217(&Param0 + 608, 512);
			if (!Function_30(Global_21684[&Param0 + 6247].f_24, 1))
			{
				bVar43 = Function_112(Function_213(bParam1));
				Function_80(660, bVar43, 0, 0);
				Function_217(&Global_21684[&Param0 + 6247] + 24, 1);
			}
			*(&Param0 + 376) = 11;
			break;
		
		case 0x00000008:
			Function_464(&Param0, bParam1, 1);
			Function_449(&Param0, &Global_46715, bParam1);
			Function_448(&Param0, &Global_46715);
			*(&Param0 + 376) = 9;
			break;
		
		case 0x00000009:
			if (Function_438(&Param0))
			{
				if (!bParam1 != Global_46914[0])
				{
					Function_424(&Param0, bParam1, &Global_46715);
					*(&Param0 + 376) = 1;
				}
				else if (!DECOR_CHECK_EXIST(&Global_54076, "BLACKWATER_WAIT"))
				{
					Function_424(&Param0, bParam1, &Global_46715);
					DECOR_SET_FLOAT(&Global_54076, "BLACKWATER_WAIT", GET_CURRENT_GAME_TIME());
				}
				else if (DECOR_GET_FLOAT(&Global_54076, "BLACKWATER_WAIT") + 3.0f) > GET_CURRENT_GAME_TIME()
				{
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[15], "tense_with_guns");
					SET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns", 0);
					SET_ACTION_NODE_FOR_ACTOR(&Param0 + 8[25], "tense_with_guns");
					*(&Param0 + 376) = 10;
				}
			}
			break;
		
		case 0x0000000A:
			if (DECOR_CHECK_EXIST(&Global_54076, "Special_BLK_Ready"))
			{
				DECOR_REMOVE(&Global_54076, "Special_BLK_Ready");
				Function_135(&Param0, bParam1);
				Function_184(&Param0);
				Function_217(&Param0 + 608, 262144);
				Function_463(bParam1, 1);
				Function_217(&Global_21684[Function_219(111, 111, 5)7] + 20, 4);
				Function_178(bParam1);
				Function_215(0, 4294967295);
				Function_216(bParam1, 0.0f);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam19] + 8);
				AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(true);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[15], 0);
				RESET_ANIM_SET_FOR_ACTOR(&Param0 + 8[25], 0);
				*(&Param0 + 376) = 3;
			}
			break;
	}
	iVar17 = 0;
	while (StackVal < (iVar17 - 1))
	{
		iVar44 = &Param0 + 8[iVar175];
		if (IS_ACTOR_VALID(&iVar44))
		{
			if (!IS_ACTOR_ALIVE(&iVar44))
			{
				if (!DECOR_CHECK_EXIST(&iVar44, "DeathTallied"))
				{
					DECOR_SET_BOOL(&iVar44, "DeathTallied", 1);
					Global_21684[&Param0 + 6247].f_28 = (Global_21684[&Param0 + 6247].f_28 + 1.0f);
					if (Function_30(Global_21684[&Param0 + 6247].f_24, 1))
					{
						Function_111(660, 1, 0);
					}
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (DECOR_CHECK_EXIST(&Param0 + 8[iVar175], "nUC_NoAmmo"))
				{
					RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&Param0 + 8[iVar175], "nUC_NoAmmo"));
				}
				if (&iVar44 == &Param0 + 336)
				{
					if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
					{
						RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
					}
					if (&Param0 + 376 <= 7)
					{
						if ((!GET_LAST_ATTACKER(&iVar44) != &Global_54076 && &Param0 + 376 != 2) && !Function_30(&Param0 + 608, 8192))
						{
							Function_217(&Param0 + 608, 8192);
							Function_173("TerrCont_LeaderDead", 0x41200000, 1, 0, 2, 1, 0);
							iVar45 = 0;
							while (StackVal < (iVar45 - 1))
							{
								Function_210(&Param0 + 8[iVar455]);
								SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar455], true);
								iVar45++;
							}
							if (&Param0 + 376 <= 4)
							{
								*(&Param0 + 376) = 4;
							}
						}
					}
				}
				if (IS_VOLUME_VALID(&Param0 + 8[iVar175] + 24))
				{
					DESTROY_VOLUME(&Param0 + 8[iVar175] + 24);
				}
			}
			if (GET_LAST_ATTACKER(&iVar44) != &Global_54076 && !Function_30(&Param0 + 608, 0x4000000))
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 8[iVar175] + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 8[iVar175] + 16);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(&Param0 + 336 + 16))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&Param0 + 336 + 16);
				}
				iVar46 = 0;
				while (StackVal < (iVar46 - 1))
				{
					Function_210(&Param0 + 8[iVar465]);
					SET_ACTOR_CAN_BE_TARGETED(&Param0 + 8[iVar465], true);
					MEMORY_CONSIDER_AS_ENEMY(&Param0 + 8[iVar465], &Global_54076);
					iVar46++;
				}
				if (&Param0 + 376 <= 7)
				{
					if (&Param0 + 376 <= 5)
					{
						*(&Param0 + 376) = 4;
					}
					Function_173("Survivor_HitOne_Help", 0x41200000, 1, 0, 2, 1, 0);
				}
				Function_217(&Param0 + 608, 0x4000000);
				*(&Param0 + 624) = Function_219(0, bParam1, 3);
				Function_217(&Global_21684[&Param0 + 6247] + 24, 0x40000000);
			}
		}
		iVar17++;
	}
	if (!IS_ACTION_NODE_PLAYING_PARTIAL(&Global_54076, "DLC_give_ammo") && ACTOR_HAS_ANIM_SET(&Global_54076, "DLC_give_ammo"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
	}
	uVar47 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar47))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar47)), "footlock"))
		{
			Function_110(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, &uVar47, Param0);
		}
	}
	return;
}

void Function_110(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, bool bParam80, var uParam81, char* cParam82) //Position: 0x610D / 24845
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	uVar0 = GET_OBJECT_FROM_GRINGO(&uParam0);
	uVar1 = GET_OBJECT_NAME(&uVar0);
	STRING_CLEAR_TOKENIZER();
	iVar2 = SET_OWNERSHIP_STRAGGLER(&uVar1, "_");
	uVar3 = STRING_GET_TOKEN((iVar2 - 2));
	fVar4 = TO_FLOAT(STRING_TO_INT(&uVar3));
	Function_217(&Global_21684[&iParam1 + 6247] + 20, FLOOR(POW(2.0f, fVar4)));
}

int Function_111(int iParam0, bool bParam1, int iParam2) //Position: 0x6164 / 24932
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
	Function_90(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_82(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

var Function_112(int iParam0) //Position: 0x6361 / 25441
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	iVar0 = Function_114(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_113(&iVar1, iVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_11014[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_11120[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_11146[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_11222[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_11284[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_11544[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_11646[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_11726[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_11836[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_11946[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_11988[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_12048[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_12150[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_11398[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_12284[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_12392[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_12422[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_12488[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_12644[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_12714[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_12760[iVar102];
					break;
			}
			if (!Function_30(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_113(int[] iParam0) //Position: 0x654B / 25931
{
	iParam1 = iParam1;
	if (iParam1 == Global_46760[0])
	{
		iParam0[0] = 65;
		iParam0[1] = 68;
		iParam0[2] = 435;
		iParam0[3] = 428;
		iParam0[4] = 107;
		iParam0[5] = 140;
		return 6;
	}
	if (iParam1 == Global_46914[0])
	{
		iParam0[0] = 89;
		iParam0[1] = 95;
		iParam0[2] = 146;
		return 3;
	}
	if (iParam1 == Global_46816[1])
	{
		iParam0[0] = 56;
		iParam0[1] = 24;
		iParam0[2] = 138;
		iParam0[3] = 139;
		return 4;
	}
	if (iParam1 == Global_46816[0])
	{
		iParam0[0] = 54;
		iParam0[1] = 420;
		iParam0[2] = 38;
		iParam0[3] = 213;
		iParam0[4] = 55;
		return 5;
	}
	if (iParam1 == Global_46866[0])
	{
		iParam0[0] = 276;
		iParam0[1] = 237;
		iParam0[2] = 290;
		iParam0[3] = 460;
		iParam0[4] = 269;
		iParam0[5] = 283;
		return 6;
	}
	if (iParam1 == Global_46850[0])
	{
		iParam0[0] = 289;
		iParam0[1] = 392;
		iParam0[2] = 268;
		iParam0[3] = 266;
		iParam0[4] = 382;
		iParam0[5] = 245;
		iParam0[6] = 304;
		return 7;
	}
	if (iParam1 == Global_46760[2])
	{
		iParam0[0] = 487;
		iParam0[1] = 491;
		iParam0[2] = 493;
		return 3;
	}
	if (iParam1 == Global_46894[3])
	{
		iParam0[0] = 379;
		iParam0[1] = 380;
		iParam0[2] = 391;
		iParam0[3] = 455;
		return 4;
	}
	if (iParam1 == Global_46850[2])
	{
		iParam0[0] = 410;
		iParam0[1] = 411;
		iParam0[2] = 465;
		return 3;
	}
	if (iParam1 == Global_46760[1])
	{
		iParam0[0] = 152;
		iParam0[1] = 176;
		return 2;
	}
	if (iParam1 == Global_46796[1])
	{
		iParam0[0] = 133;
		iParam0[1] = 144;
		return 2;
	}
	if (iParam1 == Global_46926[2])
	{
		iParam0[0] = 29;
		iParam0[1] = 30;
		iParam0[2] = 28;
		return 3;
	}
	if (iParam1 == Global_46850[1])
	{
		iParam0[0] = 516;
		iParam0[1] = 529;
		return 2;
	}
	if (iParam1 == Global_46926[1])
	{
		iParam0[0] = 169;
		iParam0[1] = 39;
		iParam0[2] = 149;
		return 3;
	}
	if (iParam1 == Global_46866[1])
	{
		iParam0[0] = 62;
		iParam0[1] = 242;
		iParam0[2] = 244;
		iParam0[3] = 296;
		iParam0[4] = 297;
		iParam0[5] = 260;
		iParam0[6] = 295;
		iParam0[7] = 141;
		return 8;
	}
	if (iParam1 == Global_46796[3])
	{
		iParam0[0] = 505;
		iParam0[1] = 506;
		iParam0[2] = 507;
		iParam0[3] = 508;
		iParam0[4] = 510;
		iParam0[5] = 509;
		return 6;
	}
	if (iParam1 == Global_46796[4])
	{
		iParam0[0] = 400;
		return 1;
	}
	if (iParam1 == Global_46894[2])
	{
		iParam0[0] = 281;
		iParam0[1] = 282;
		iParam0[2] = 456;
		return 3;
	}
	if (iParam1 == Global_46894[0])
	{
		iParam0[0] = 396;
		iParam0[1] = 462;
		iParam0[2] = 15;
		iParam0[3] = 11;
		iParam0[4] = 461;
		return 5;
	}
	if (iParam1 == Global_46866[2])
	{
		iParam0[0] = 238;
		iParam0[1] = 530;
		iParam0[2] = 294;
		return 3;
	}
	if (iParam1 == Global_46926[0])
	{
		iParam0[0] = 404;
		return 1;
	}
	if (iParam1 == Global_46838[0])
	{
		iParam0[0] = 168;
		iParam0[1] = 176;
		iParam0[2] = 177;
		return 3;
	}
	return 0;
}

var Function_114(int iParam0) //Position: 0x697A / 27002
{
	if (iParam0 == 1)
	{
		return Global_46760[0];
	}
	if (iParam0 == 2)
	{
		return Global_46760[2];
	}
	if (iParam0 == 3)
	{
		return Global_46760[1];
	}
	if (iParam0 == 4)
	{
		return Global_46796[1];
	}
	if (iParam0 == 5)
	{
		return Global_46796[3];
	}
	if (iParam0 == 8)
	{
		return Global_46816[0];
	}
	if (iParam0 == 9)
	{
		return Global_46816[1];
	}
	if (iParam0 == 11)
	{
		return Global_46838[0];
	}
	if (iParam0 == 12)
	{
		return Global_46850[0];
	}
	if (iParam0 == 13)
	{
		return Global_46850[1];
	}
	if (iParam0 == 14)
	{
		return Global_46850[2];
	}
	if (iParam0 == 15)
	{
		return Global_46866[0];
	}
	if (iParam0 == 16)
	{
		return Global_46866[1];
	}
	if (iParam0 == 17)
	{
		return Global_46866[2];
	}
	if (iParam0 == 25)
	{
		return Global_46894[2];
	}
	if (iParam0 == 18)
	{
		return Global_46894[3];
	}
	if (iParam0 == 19)
	{
		return Global_46894[0];
	}
	if (iParam0 == 21)
	{
		return Global_46914[0];
	}
	if (iParam0 == 22)
	{
		return Global_46926[2];
	}
	if (iParam0 == 23)
	{
		return Global_46926[1];
	}
	if (iParam0 == 24)
	{
		return Global_46926[0];
	}
	if (iParam0 == 26)
	{
		return Global_46838[1];
	}
	if (iParam0 == 27)
	{
		return Global_46894[1];
	}
	return 4294967295;
}

void Function_115(vector3 vParam0) //Position: 0x6B00 / 27392
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 8[iVar05] + 16))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 8[iVar05] + 16);
		}
		iVar0++;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&vParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&vParam0 + 336 + 16);
	}
	return;
}

void Function_116(int iParam0) //Position: 0x6B5A / 27482
{
	var uVar0;
	
	if (Global_6623 || Function_53(0x8000000))
	{
		return;
	}
	uVar0 = Function_56(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

void Function_117(int iParam0) //Position: 0x6B94 / 27540
{
	int iVar0;
	
	if (Function_30(iParam0, 1) && Function_30(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

bool Function_118(int iParam0) //Position: 0x6BC8 / 27592
{
	return Function_119(&iParam0 + 600);
}

int Function_119(int iParam0) //Position: 0x6BD7 / 27607
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	var uVar11;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_37()));
	}
	uVar0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_46715, Function_37()));
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_IN_LAYOUT(&uVar1, GET_AMBIENT_LAYOUT());
	ITERATE_ON_OBJECT_TYPE(&uVar1, 15);
	ITERATE_IN_VOLUME(&uVar1, &Global_44085[Global_437899] + 8);
	START_OBJECT_ITERATOR(&uVar1);
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		uVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
		if ((!IS_ACTOR_HORSE(&uVar3) && !IS_ACTOR_HOGTIED(&uVar3)) && IS_ACTOR_ALIVE(&uVar3))
		{
			iVar4 = GET_ACTOR_ENUM(&uVar3);
			if ((iVar4 > 1128 || iVar4 < 1130) && iVar4 == 1247)
			{
				Var5 = Vector(0.0f, 0.0f, 0.0f);
				GET_POSITION(&uVar3, &Var5);
				iVar7 = GET_MATERIAL_AT_VECTOR(&Var5);
				bVar8 = (Function_30(iVar7, 1024) && iVar7 == 4294967295);
				if (IS_POSITION_INDOORS(Var5))
				{
					bVar8 = true;
				}
				if (!bVar8)
				{
					iVar9 = SQUAD_GET_SIZE(&iParam0);
					if (iVar9 >= 6)
					{
						if (Function_121(StackVal, &uVar3, Global_54078) < 20.0f && !Function_61(&uVar3, 0x3f800000, 0x42960000, 1, 1, 0))
						{
							bVar8 = true;
						}
					}
					if (!bVar8)
					{
						if (FABS((StackVal - StackVal)) < 25.0f)
						{
							bVar8 = true;
						}
					}
				}
				if (bVar8)
				{
					SQUAD_JOIN(&uVar3, &uVar0);
				}
				else
				{
					SQUAD_JOIN(&uVar3, &iParam0);
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	if (SQUAD_GET_SIZE(&iParam0) > 4)
	{
		Function_120(&uVar0);
		DESTROY_OBJECT(&uVar0);
		SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iParam0, 2560);
		Function_456(&(Global_43791[Global_43789]), 0x20000000);
		Function_176("Survivor_FewZombiesLeft", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iVar10 = 0;
		while (iVar10 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar11 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar10);
			REFERENCE_ACTOR(&uVar11);
			SET_ACTOR_STAY_WITHIN_VOLUME(&uVar11, &Global_44085[Global_437899] + 8, 1, 1);
			TASK_PRIORITY_SET(&uVar11, false);
			TASK_GO_NEAR_OBJECT(&uVar11, &Global_54076, 10.0f, 4, 0, 1);
			if (IS_ACTOR_ANIMAL(&uVar11))
			{
				ANIMAL_TUNING_SET_ATTRIB_BOOL(&uVar11, 11, 0);
			}
			ADD_BLIP_FOR_ACTOR(&uVar11, 322, 0, 2, 0);
			iVar10++;
		}
		return 1;
	}
	DESTROY_OBJECT(&uVar0);
	DESTROY_OBJECT(&iParam0);
	return 0;
}

void Function_120(int iParam0) //Position: 0x6E2E / 28206
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0);
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
			iVar0++;
		}
	}
	return;
}

float Function_121(var uParam0, struct<2> Param1) //Position: 0x6E85 / 28293
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_122(&uParam0);
		Var0 = Function_122(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_122(int iParam0) //Position: 0x6EFC / 28412
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

bool Function_123(int iParam0) //Position: 0x6F68 / 28520
{
	int iVar0;
	
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 9 || iVar0 != 15) || iVar0 != 24) || iVar0 != 420) || iVar0 != 28) || iVar0 != 29) || iVar0 != 30) || iVar0 != 36) || iVar0 != 38) || iVar0 != 39) || iVar0 != 54) || iVar0 != 55) || iVar0 != 56) || iVar0 != 65) || iVar0 != 68) || iVar0 != 404) || iVar0 != 400) || iVar0 != 89) || iVar0 != 95) || iVar0 != 96) || iVar0 != 107) || iVar0 != 139) || iVar0 != 140) || iVar0 != 141) || iVar0 != 144) || iVar0 != 146) || iVar0 != 149) || iVar0 != 152) || iVar0 != 168) || iVar0 != 169) || iVar0 != 176) || iVar0 != 177) || iVar0 != 213) || iVar0 != 509) || iVar0 != 493) || iVar0 != 529) || iVar0 != 237) || iVar0 != 238) || iVar0 != 245) || iVar0 != 266) || iVar0 != 268) || iVar0 != 269) || iVar0 != 276) || iVar0 != 283) || iVar0 != 289) || iVar0 != 294) || iVar0 != 304) || iVar0 != 428) || iVar0 != 435) || iVar0 != 461) || iVar0 != 465) || iVar0 != 455) || iVar0 != 456)
	{
		return 1;
	}
	return 0;
}

void Function_124(int iParam0, bool bParam1) //Position: 0x70D9 / 28889
{
	struct<2> Var0;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<2> Var6;
	var uVar8;
	int iVar9;
	int iVar10;
	
	Function_134();
	Function_133();
	GET_POSITION(&iParam0, &Var0);
	uVar2 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar2, 8);
	ITERATE_ON_PARTIAL_NAME(&uVar2, "Ammo");
	ITERATE_IN_SPHERE(&uVar2, Var0, 2.0f);
	uVar5 = START_OBJECT_ITERATOR(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar3 = &uVar5;
	}
	uVar5 = OBJECT_ITERATOR_NEXT(&uVar2);
	if (IS_OBJECT_VALID(&uVar5))
	{
		uVar4 = &uVar5;
	}
	DESTROY_ITERATOR(&uVar2);
	Function_80(661, 1, 0, 0);
	if (!IS_OBJECT_VALID(&uVar3) || !IS_OBJECT_VALID(&uVar4))
	{
		SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
		Function_132(bParam1, 5.0f, 1);
		Function_210(&iParam0);
		Function_131(Global_43789, 10.0f);
		return;
	}
	GET_OBJECT_POSITION(&uVar3, &Var6);
	uVar8 = GET_OBJECT_HEADING(&uVar3);
	SET_OBJECT_POSITION(&Global_54076, Var6);
	SET_ACTOR_HEADING(&Global_54076, uVar8, 1);
	SET_MOVER_FROZEN(&iParam0, 1);
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "DLC_give_ammo", 1);
	if (!Function_130(StackVal, &iParam0, Var6))
	{
		iVar9 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar9 != 41 || iVar9 != 42) || iVar9 != 43) || iVar9 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/LT/Ptl");
		}
	}
	else
	{
		iVar10 = UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&iParam0));
		if (((iVar10 != 41 || iVar10 != 42) || iVar10 != 43) || iVar10 != 44)
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Rfl");
		}
		else
		{
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, "DLC_give_ammo/Survivor/RT/Ptl");
		}
	}
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "DLC_give_ammo", 1);
	if (GET_WEAPON_IN_HAND(&Global_54076) == 4294967295)
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Hnd");
	}
	else
	{
		SET_ACTION_NODE_FOR_ACTOR(&Global_54076, "DLC_give_ammo/Player/Weapon");
	}
	TASK_PRIORITY_SET(&iParam0, true);
	TASK_STAND_STILL(&iParam0, 3.0f, 0, 0);
	Function_125(&iParam0, 0, &Global_54076, 1, 0, 0);
	SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_SUPPLY_WITH_AMMUNITION", true, true, 2, 0, true, false);
	Function_132(bParam1, 5.0f, 1);
	Function_210(&iParam0);
	Function_131(Global_43789, 10.0f);
	return;
}

var Function_125(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, var uParam5) //Position: 0x73D3 / 29651
{
	var uVar0;
	
	if (&bParam3)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 3, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Survivor_GiveAmmo", 3, 1);
	}
	Function_126(&uVar0, &uParam2);
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

void Function_126(var uParam0, int iParam1) //Position: 0x7461 / 29793
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 0);
	Function_129(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 1);
	Function_128(&uVar0, &iParam1);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&uParam0, 2);
	Function_127(&uVar0, &iParam1);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&uParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 0, 1, 1,6f, 0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&uParam0, 1, 2, 1,5f, 1, 0);
	return;
}

void Function_127(int iParam0, int iParam1) //Position: 0x74CA / 29898
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,402189f, 1,415817f, -0,851866f), Vector(6,384388f, -147,5115f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_128(int iParam0, var uParam1) //Position: 0x755B / 30043
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &uParam1, Vector(-0,421349f, 1,41818f, -0,861325f), Vector(-6,658212f, -134,564f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &uParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_129(int iParam0, int iParam1) //Position: 0x75EC / 30188
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,86088f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	ATTACH_CAMERASHOT(StackVal, StackVal, StackVal, &iParam0, &iParam1, Vector(-0,442921f, 1,420794f, -0,871029f), Vector(4,479696f, -143,4034f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 0);
	RESET_CAMERASHOT_TARGET(&iParam0, 0);
	ADD_CAMERASHOT_COLLISION_EXCLUSION(&iParam0, &iParam1, 20);
	SET_CAMERASHOT_TARGET_OBJECT(&iParam0, &iParam1, 1);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, StackVal, &iParam0, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1);
	return;
}

bool Function_130(var uParam0, struct<2> Param1) //Position: 0x7682 / 30338
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	float fVar6;
	
	GET_OBJECT_POSITION(&uParam0, &Var0);
	uVar2 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Param1, StackVal);
	GET_OBJECT_AXIS(&uParam0, &uVar4, 0);
	fVar6 = VDOT(&uVar2, &uVar4);
	if (fVar6 < 0.0f)
	{
		return 1;
	}
	return 0;
}

void Function_131(int iParam0, float fParam1) //Position: 0x76BD / 30397
{
	float fVar0;
	
	fVar0 = (DECOR_GET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore") + fParam1);
	DECOR_SET_FLOAT(&Global_44085[iParam09] + 8, "ZombieScore", fVar0);
	return;
}

void Function_132(bool bParam0, float fParam1, bool bParam2) //Position: 0x7701 / 30465
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	
	bVar0 = GET_WEAPONENUM_FOR_AMMOENUM(&Global_54076, bParam0);
	fVar1 = _GET_AMMO_AMOUNT(&Global_54076, bParam0, 0);
	fVar2 = ACTOR_GET_WEAPON_AMMO(&Global_54076, bVar0);
	if (fVar1 <= fParam1)
	{
		fVar3 = fParam1;
		fVar4 = 0.0f;
	}
	else
	{
		fVar3 = fVar1;
		fVar4 = (fParam1 - fVar3);
	}
	if (fVar4 == 0.0f)
	{
		ACTOR_SET_WEAPON_AMMO(&Global_54076, bVar0, (fVar2 - fVar4));
	}
	if (fVar3 == 0.0f)
	{
		_SET_ACTOR_AMMO_OF_TYPE(&Global_54076, bParam0, (fVar1 - fVar3), 0);
	}
	if (&bParam2)
	{
		bVar5 = FLOOR(fParam1);
		bVar5 = (bVar5 * 4294967295);
		if (bParam0 == 10)
		{
			bVar6 = "ammo_shotgun";
		}
		else if (bParam0 == 8)
		{
			bVar6 = "ammo_repeater";
		}
		else if (bParam0 == 7)
		{
			bVar6 = "ammo_revolver";
		}
		else if (bParam0 == 11)
		{
			bVar6 = "ammo_sniperrifle";
		}
		else if (bParam0 == 6)
		{
			bVar6 = "ammo_pistol";
		}
		else if (bParam0 == 9)
		{
			bVar6 = "ammo_rifle";
		}
		SET_STAT_MESSAGE(STRING_TO_HASH(&bVar6), INT_TO_STRING(bVar5), 5.0f, Function_37(), 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
	}
	return;
}

void Function_133() //Position: 0x7845 / 30789
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_134() //Position: 0x7857 / 30807
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_135(int iParam0, bool bParam1) //Position: 0x786C / 30828
{
	var uVar0[3];
	int iVar4;
	
	DECOR_SET_BOOL(&Global_54076, "bTalkedToLeader", 1);
	Function_138(StackVal, Global_54078, 1, &iParam0 + 336, 0);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 336 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 336 + 16);
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRevolvers") != 0)
	{
		uVar0[iVar4] = "ammo_revolver";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRifles") != 0)
	{
		uVar0[iVar4] = "ammo_rifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumRepeaters") != 0)
	{
		uVar0[iVar4] = "ammo_repeater";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumShotguns") != 0)
	{
		uVar0[iVar4] = "ammo_shell";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumSnipers") != 0)
	{
		uVar0[iVar4] = "ammo_sniperrifle";
		iVar4++;
	}
	if (DECOR_GET_INT(&Global_44085[bParam19] + 8, "ZP_NumPistols") != 0)
	{
		uVar0[iVar4] = "ammo_pistol";
		iVar4++;
	}
	if (iVar4 == 1)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_1AmmoType", &(uVar0[0]), 0, 0, 0, 2, 0, 0);
	}
	else if (iVar4 == 2)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_2AmmoType", &(uVar0[0]), &(uVar0[1]), 0, 0, 2, 0, 0);
	}
	else if (iVar4 != 0)
	{
		PRINT_HELP_FORMAT(10.0f, "Survivor_Help_3AmmoType", &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), 0, 2, 0, 0);
	}
	Function_176("TerrControl_NeedSavePeople", 0x40f00000, 1, 2, 0, 0, 0, 0);
	if (!Function_30(&iParam0 + 608, 8))
	{
		if (Function_192())
		{
			Function_217(&iParam0 + 608, 8);
		}
		else
		{
			Function_217(&iParam0 + 608, 524288);
		}
	}
	Function_217(&iParam0 + 608, 32);
	*(&iParam0 + 624) = Function_219(0, bParam1, 3);
	Function_217(&Global_21684[&iParam0 + 6247] + 24, 0x40000000);
	Function_136(&iParam0);
	return;
}

void Function_136(vector3 vParam0) //Position: 0x7B74 / 31604
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		iVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&iVar1))
		{
			if (!DECOR_CHECK_EXIST(&iVar1, "PreSaved") || (DECOR_CHECK_EXIST(&iVar1, "PreSaved") && DECOR_CHECK_EXIST(&iVar1, "Core")))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar1)))
				{
					REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iVar1));
				}
				uVar2 = ADD_BLIP_FOR_ACTOR(&iVar1, 325, 0, 2, 0);
				SET_BLIP_NAME(&uVar2, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar2, 1);
				if (Global_43789 == Global_46914[0])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 2,5f);
				}
				else if (Global_43789 == Global_46816[1])
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 4.0f);
				}
				else
				{
					SET_BLIP_MAX_DISTANCE(&uVar2, 1,75f);
				}
				UNK_0x1E98AFEC(&uVar2, 1);
				if (IS_VOLUME_VALID(&vParam0 + 8[iVar05] + 24))
				{
					DESTROY_VOLUME(&vParam0 + 8[iVar05] + 24);
				}
				*(&vParam0 + 8[iVar05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_37(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &vParam0 + 8[iVar05] + 24, &iVar1, Function_37(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				bVar3 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iVar1));
				uVar4 = Function_137(&iVar1);
				if (_GET_AMMO_AMOUNT(&Global_54076, bVar3, 1) <= 5.0f)
				{
					*(&vParam0 + 8[iVar05] + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
				}
				else if (!DECOR_CHECK_EXIST(&iVar1, "nUC_NoAmmo"))
				{
					uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &vParam0 + 8[iVar05] + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
					DECOR_SET_INT(&iVar1, "nUC_NoAmmo", &uVar5);
				}
				Function_217(&vParam0 + 8[iVar05] + 32, 2);
				uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iVar1, Function_37(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uVar6, &iVar1, Function_37(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				uVar7 = ADD_BLIP_FOR_OBJECT(&uVar6, 325, 0f, 2, 0);
				UNK_0xFF3DB575(&uVar7, 1);
				DECOR_SET_INT(&iVar1, "PauseMapBlip", &uVar7);
				SET_BLIP_NAME(&uVar7, "Surv_Unsafe");
				SET_BLIP_PRIORITY(&uVar7, 1);
			}
			else
			{
				Function_131(Global_43789, 10.0f);
			}
		}
		iVar0++;
	}
	return;
}

var Function_137(int iParam0) //Position: 0x7E42 / 32322
{
	bool bVar0;
	
	bVar0 = DECOR_GET_INT(&iParam0, "nammo_type");
	if (bVar0 == 8)
	{
		return "ammo_repeater";
	}
	if (bVar0 == 6)
	{
		return "ammo_pistol";
	}
	if (bVar0 == 10)
	{
		return "ammo_shotgun";
	}
	if (bVar0 == 9)
	{
		return "ammo_rifle";
	}
	if (bVar0 == 11)
	{
		return "ammo_sniperrifle";
	}
	if (bVar0 == 7)
	{
		return "ammo_revolver";
	}
	return "ammo_repeater";
}

var Function_138(struct<2> Param0, bool bParam2, int iParam3, bool bParam4) //Position: 0x7F06 / 32518
{
	bool bVar0;
	var uVar1;
	var uVar3;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	var uVar10;
	int iVar12;
	struct<2> Var13;
	struct<2> Var15;
	struct<2> Var17;
	int iVar19;
	var uVar20;
	
	if (Function_166(StackVal, Param0))
	{
		LOG_ERROR("SAVE_SOFT_DEATH_RESTART: Strange things are afoot...");
	}
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	Global_53524.f_164 = GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0));
	PRINTSTRING("Weapon at last checkpoint was a ");
	PRINTSTRING(GET_WEAPON_ENUM_STRING_FROM_ENUM(Global_53524.f_164));
	PRINTNL();
	bVar0 = false;
	Global_53524.f_16 = 0;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	if (&bParam2)
	{
		Global_53524.f_24 = Global_43789;
		if (IS_ACTOR_VALID(&iParam3))
		{
			Function_165(&iParam3);
			uVar1 = Vector(StackVal, StackVal, StackVal) - Vector(Global_54078, Function_165(&iParam3), StackVal);
			VNORMALIZE(&uVar1);
			Global_53524.f_12 = UNK_0x9C40E671(&uVar1);
		}
		else
		{
			Global_53524.f_12 = Function_164(&Global_54076);
		}
		Global_53524 = Param0;
		if (IS_PS3())
		{
			Global_53524.f_4 = (StackVal + 0,1f);
		}
		bVar0 = true;
	}
	else if (&bParam4)
	{
		Global_53524.f_24 = Global_43789;
		if (!Function_163(&Global_53524, &Global_53524 + 12, &uVar3))
		{
			GET_VOLUME_CENTER(&uVar3, &Var4);
			if (Function_159(StackVal, Var4, &uVar3, &Var6, &Var8, 1))
			{
				uVar10 = Vector(StackVal, StackVal, StackVal) - Vector(Var6, Var8, StackVal);
				VNORMALIZE(&uVar10);
				Global_53524.f_12 = UNK_0x9C40E671(&uVar10);
				Global_53524 = Var6;
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			(*&Global_53524 + 76)[9] = 1;
			bVar0 = true;
		}
	}
	else if (!Function_163(&Global_53524, &Global_53524 + 12, &iVar12))
	{
		Global_53524.f_24 = Function_157(StackVal, Param0, 0.0f, 1);
		if (Function_9(Global_53524.f_24))
		{
			iVar12 = &Global_44085[Global_53524.f_249] + 8;
			GET_VOLUME_CENTER(&iVar12, &Var13);
			if (Function_159(StackVal, Var13, &iVar12, &Var15, &Var17, 0))
			{
				iVar19 = Function_156(StackVal, Var15, 1);
				if ((StackVal && ((iVar19 == Global_46746[0] && iVar19 == Global_46746[2]) && iVar19 == Global_46746[1]) != 3) && Global_43787 != 1)
				{
					Global_53524 = Vector(-3515,646f, 19,234f, 4205,955f);
					Global_53524.f_12 = 225,789f;
				}
				else if (Global_53524.f_24 == Global_46914[1])
				{
					Global_53524 = Vector(-66,023f, 116,861f, 1411,445f);
					Global_53524.f_12 = 64,688f;
				}
				else if (Global_53524.f_24 == Global_46796[3])
				{
					Global_53524 = Vector(-4504,957f, 20,121f, 3406,793f);
					Global_53524.f_12 = 324,417f;
				}
				else if (Global_53524.f_24 == Global_46894[1])
				{
					Global_53524 = Vector(-746,495f, 67,416f, 3414,803f);
					Global_53524.f_12 = 316,104f;
				}
				else if (Global_53524.f_24 == Global_46894[3])
				{
					Global_53524 = Vector(451,281f, 78,306f, 3474,125f);
					Global_53524.f_12 = 79,05f;
				}
				else
				{
					uVar20 = Vector(StackVal, StackVal, StackVal) - Vector(Var15, Var17, StackVal);
					VNORMALIZE(&uVar20);
					Global_53524.f_12 = UNK_0x9C40E671(&uVar20);
					Global_53524 = Var15;
				}
				(*&Global_53524 + 76)[9] = 1;
				bVar0 = true;
			}
			else if (Global_43789 == Global_46926[0])
			{
				Global_53524 = Vector(-737,414f, 178,366f, 782,796f);
				Global_53524.f_12 = 117,832f;
				Global_53524.f_24 = Global_46926[0];
				bVar0 = true;
			}
			else
			{
				LOG_ERROR("DID NOT FIND A VALID TRAFFIC CURVE NEAR");
			}
		}
		else
		{
			LOG_ERROR("DID NOT FIND A VALID REGION NEAR");
		}
	}
	else
	{
		Global_53524.f_24 = Global_43789;
		bVar0 = true;
	}
	if (bVar0)
	{
		Function_139();
		SAVE_SOFT_SAVE(1);
	}
	return bVar0;
}

void Function_139() //Position: 0x8314 / 33556
{
	Function_152();
	Function_151();
	Function_151();
	Function_150();
	Function_150();
	Function_149();
	Function_149();
	Function_146(0);
	Function_146(0);
	Function_144();
	Function_143();
	Function_142();
	Function_141();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_140();
	return;
}

void Function_140() //Position: 0x835F / 33631
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

void Function_141() //Position: 0x8465 / 33893
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

void Function_142() //Position: 0x8498 / 33944
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

void Function_143() //Position: 0x862B / 34347
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

void Function_144() //Position: 0x87E4 / 34788
{
	Function_145(&Global_42918, 1, 0);
	return;
}

void Function_145(struct<2317> Param0) //Position: 0x87F2 / 34802
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
	
	uVar0 = Function_108();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || iParam2)
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

struct<8> Function_146(int iParam0) //Position: 0x8A0F / 35343
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
					iVar2 = ((Function_148((50 + iVar4)) + Function_148((183 + iVar4))) + Function_148((90 + iVar4)));
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
	Function_147(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_147(int iParam0, bool bParam1, bool bParam2) //Position: 0x8AB6 / 35510
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
		Function_91(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_90(iParam0);
	if (&bParam2)
	{
		Function_82(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_148(bool bParam0) //Position: 0x8D52 / 36178
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_149() //Position: 0x8D93 / 36243
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
		iVar2 = ((Function_148((50 + iVar3) + 15) + Function_148((183 + iVar3) + 15)) + Function_148((90 + iVar3) + 15));
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
	Function_147(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_150() //Position: 0x8E1C / 36380
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
			iVar2 = ((Function_148((50 + iVar3) + 8) + Function_148((183 + iVar3) + 8)) + Function_148((90 + iVar3) + 8));
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
	Function_147(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_151() //Position: 0x8EB3 / 36531
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
		iVar2 = ((Function_148((50 + iVar3)) + Function_148((183 + iVar3))) + Function_148((90 + iVar3)));
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
	Function_147(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_152() //Position: 0x8F32 / 36658
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_153(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_147(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_153(int iParam0, float fParam1, int iParam2) //Position: 0x8F6F / 36719
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
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_91(iParam0, fParam1, 1);
	Function_90(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_82(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

int Function_154(int iParam0) //Position: 0x917B / 37243
{
	if (!Function_155(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_155(int iParam0) //Position: 0x9195 / 37269
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_156(struct<2> Param0, bool bParam2) //Position: 0x91AB / 37291
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

var Function_157(struct<2> Param0, float fParam2, int iParam3) //Position: 0x9217 / 37399
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_166(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if (StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_158(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (!Function_420(&(Global_43791[iVar5]), 4096) && !IS_ACTOR_IN_VOLUME(&Global_54076, &Global_44085[iVar59] + 8))
			{
				iVar4 = 0;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_9(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_158(bool bParam0) //Position: 0x9317 / 37655
{
	bool bVar0;
	
	bVar0 = 4294967295;
	if (!bParam0 != 4294967295 && Function_9(bParam0))
	{
		if (StackVal == 1)
		{
			bVar0 = bParam0;
		}
		else if (StackVal == 2)
		{
			bVar0 = Global_44085[bParam09];
		}
		else
		{
			bVar0 = Global_44085[bParam09];
			bVar0 = Global_44085[bVar09];
		}
	}
	return bVar0;
}

bool Function_159(struct<2> Param0, int iParam2, struct<2> Param3, bool bParam5) //Position: 0x936F / 37743
{
	var uVar0;
	int iVar1;
	struct<9> Var2;
	var uVar13;
	int iVar16;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	var uVar25;
	
	if (Function_166(StackVal, Param0) || !IS_VOLUME_VALID(&iParam2))
	{
		return 0;
	}
	uVar0 = START_CURVE_QUERY(&Global_43578, Param0, 2096, 0,1f, 300.0f, Function_162(60.0f, 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) < 0)
	{
		UNK_0xDF93BD7C(&uVar0);
		return 0;
	}
	bVar7 = -1.0f;
	bVar9 = false;
	iVar1 = 0;
	while (iVar1 < (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar0) - 1))
	{
		GET_POINT_FROM_CURVE_QUERY(&uVar0, iVar1, &vVar2);
		Var5 = vVar2.x;
		Var5.f_4 = vVar2.y;
		Var5.f_8 = vVar2.z;
		if ((bVar7 > 0.0f || bVar7 < VDIST(Param0, Var5)) && !IS_POINT_IN_VOLUME(Var5, &iParam2))
		{
			bVar7 = VDIST(Param0, Var5);
			Param3 = Var5;
			uVar8 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar0, iVar1);
			bVar9 = true;
		}
		iVar1++;
	}
	UNK_0xDF93BD7C(&uVar0);
	if (bVar9)
	{
		Function_161(StackVal, Param3);
		vVar10 = { StackVal, StackVal, Function_161(StackVal, Param3) };
		if (!bParam5)
		{
			UNK_0x19D652F9(&uVar8, 100.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -100.0f, &vVar10, &iVar16);
		}
		else
		{
			UNK_0x19D652F9(&uVar8, 10.0f, &vVar10, &uVar13);
			UNK_0x19D652F9(&uVar8, -10.0f, &vVar10, &iVar16);
		}
		Function_160(&uVar13);
		Var19 = Function_160(&uVar13);
		Function_160(&iVar16);
		Var21 = Function_160(&iVar16);
		GET_VOLUME_CENTER(&iParam2, &Var23);
		if (!bParam5)
		{
			if (VDIST(Var19, Var23) >= VDIST(Var21, Var23))
			{
				bParam4 = Var19;
			}
			else
			{
				bParam4 = Var21;
			}
		}
		else
		{
			uVar25 = Param3;
			Param3 = Var21;
			if (!IS_POINT_IN_VOLUME(Var19, &iParam2))
			{
				Param3 = Var19;
			}
			bParam4 = Var23;
		}
	}
	return bVar9;
}

struct<8> Function_160(vector3 vParam0) //Position: 0x9529 / 38185
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_161(vector3 vParam0) //Position: 0x954B / 38219
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_162(int iParam0, int iParam1) //Position: 0x9569 / 38249
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_163(float fParam0, var uParam1, int iParam2) //Position: 0x957C / 38268
{
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (Function_420(&(Global_43791[Global_46914[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Blackwater_layout"), "blkv_graveyard_set");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 298,377f;
			fParam0 = Vector(422,321f, 101,465f, 1199,226f);
			return 1;
		}
	}
	if (Function_420(&(Global_43791[Global_46760[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("CootsChapel_layout"), "coov_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 214,92f;
			fParam0 = Vector(-1812,829f, 22,935f, 2813,963f);
			return 1;
		}
	}
	if (Function_420(&(Global_43791[Global_46760[12]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("OddFellowsRest_layout"), "oddv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 24,686f;
			fParam0 = Vector(-2897,155f, 17,974f, 2715,677f);
			return 1;
		}
	}
	if (Function_420(&(Global_43791[Global_46796[0]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Tumbleweed_layout"), "tumv_Graveyard");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 332,057f;
			fParam0 = Vector(-3911,452f, 31,16f, 2975,941f);
			return 1;
		}
	}
	if (Function_420(&(Global_43791[Global_46866[4]]), 4))
	{
		iParam2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("Sepulcro_layout"), "sepv_graveyard_vol");
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
		{
			uParam1 = 285,436f;
			fParam0 = Vector(-1402,147f, 10,939f, 4317,528f);
			return 1;
		}
	}
	return 0;
}

var Function_164(int iParam0) //Position: 0x97CA / 38858
{
	return GET_HEADING(&iParam0);
}

struct<8> Function_165(int iParam0) //Position: 0x97D6 / 38870
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

bool Function_166(vector3 vParam0) //Position: 0x97E8 / 38888
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_167(int iParam0, bool bParam1, int iParam2) //Position: 0x9800 / 38912
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (bParam1 && DECOR_CHECK_EXIST(&iParam0, "FirstTimeBLKTrigger"))
	{
		if (((((IS_ACTOR_IN_VOLUME(&Global_54076, &iParam0 + 24) && !IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076)) && !IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076))) && !FIRE_IS_ACTOR_ON_FIRE(&iParam0)) && IS_ACTOR_ALIVE(&iParam0)) && !Function_169(&Global_54076, 0, 0))
		{
			DECOR_REMOVE(&iParam0, "FirstTimeBLKTrigger");
			return 1;
		}
	}
	bVar0 = false;
	if (bParam1)
	{
		bVar0 = true;
	}
	else
	{
		bVar1 = GET_AMMO_ENUM(GET_WEAPON_IN_HAND(&iParam0));
		bVar0 = _GET_AMMO_AMOUNT(&Global_54076, bVar1, 1) <= 5.0f;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		if (Function_169(&Global_54076, 0, 0) || !IS_ACTOR_ALIVE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
		if (!bVar0 && !bParam1)
		{
			if (!Function_30(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
			{
				if (Function_168(&Global_54076, &iParam0) > 3.0f)
				{
					Function_217(&iParam2, 65536);
					Function_173("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				uVar2 = Function_137(&iParam0);
				uVar3 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar2, "", "", "", 4, 0);
				DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar3);
			}
			RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
			return 0;
		}
	}
	if (!IS_ACTOR_ALIVE(&iParam0))
	{
		return 0;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_LASSO_TARGET(&Global_54076)))
	{
		return 0;
	}
	if (IS_ACTOR_PERFORMING_LINKED_ANIMATION(&Global_54076))
	{
		return 0;
	}
	if (!bVar0 && !bParam1)
	{
		if (!Function_30(iParam2, 65536) && !HUD_IS_SHOWING_HELP_TEXT())
		{
			if (Function_168(&Global_54076, &iParam0) > 3.0f)
			{
				Function_217(&iParam2, 65536);
				Function_173("TerrControl_NoAmmoToHelp", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
		if (!DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
		{
			uVar4 = Function_137(&iParam0);
			uVar5 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_NeedAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar4, "", "", "", 4, 0);
			DECOR_SET_INT(&iParam0, "nUC_NoAmmo", &uVar5);
		}
		return 0;
	}
	if (!Function_169(&Global_54076, 0, 0))
	{
		if (bParam1)
		{
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 24, 10, "@GENERIC.USE", "", "", "", "", 4, 0);
		}
		else
		{
			if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
			{
				RELEASE_SCRIPT_USE_CONTEXT(DECOR_GET_INT(&iParam0, "nUC_NoAmmo"));
				DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
			}
			uVar6 = Function_137(&iParam0);
			*(&iParam0 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_GiveAmmo", &iParam0 + 24, 10, "@GENERIC.USE", &uVar6, "", "", "", 4, 0);
		}
	}
	else
	{
		return 0;
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		return WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(&iParam0 + 16);
	}
	return 0;
}

float Function_168(var uParam0, int iParam1) //Position: 0x9C16 / 39958
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

bool Function_169(int iParam0, bool bParam1, bool bParam2) //Position: 0x9D0B / 40203
{
	if (!IS_PLAYER_CONTROLLABLE(0) && !&bParam1)
	{
		return 1;
	}
	if (IS_PLAYER_DEADEYE(0))
	{
		return 1;
	}
	if (IS_PLAYER_USING_COVER(0))
	{
		return 1;
	}
	if (IS_ACTOR_BEING_DRAGGED(&iParam0, 0,3f))
	{
		return 1;
	}
	if (Function_172(&iParam0))
	{
		return 1;
	}
	if (Function_171(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_CROUCHING(&iParam0) && !&bParam2)
	{
		return 1;
	}
	if (IS_ACTOR_DRUNK(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_HOGTIED(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_IN_WATER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_ON_LADDER(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_USING_LEDGE(&iParam0))
	{
		return 1;
	}
	if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(&iParam0)))
	{
		return 1;
	}
	if (FIRE_IS_ACTOR_ON_FIRE(&iParam0))
	{
		return 1;
	}
	if (IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iParam0)))
	{
		return 1;
	}
	if (Function_170())
	{
		return 1;
	}
	return 0;
}

bool Function_170() //Position: 0x9DCF / 40399
{
	return ((Global_54082 != 0 || Global_54082 != 2) || Global_54082 != 3);
}

bool Function_171(int iParam0) //Position: 0x9DE6 / 40422
{
	return IS_ACTOR_IN_HOGTIE(&iParam0);
}

bool Function_172(int iParam0) //Position: 0x9DF2 / 40434
{
	return IS_ACTOR_VALID(GET_LASSO_USER(&iParam0));
}

void Function_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x9E01 / 40449
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_174(Global_10966) };
		}
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&iParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_174(int iParam0) //Position: 0x9E8C / 40588
{
	char* cVar0[16];
	
	if (!Function_175())
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

bool Function_175() //Position: 0x9ECB / 40651
{
	if (Function_30(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_176(float fParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x9EE6 / 40678
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
			Var0 = { StackVal, StackVal, StackVal, Function_174(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&fParam0, &iParam1, &iParam7, &iParam3, &iParam2, &Var0, 0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&fParam0, &iParam1, &iParam7, &iParam3, &iParam2, &uVar4, &iParam5, &iParam6);
	}
}

void Function_177(int iParam0, bool bParam1) //Position: 0x9F7B / 40827
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_ACTOR(&iParam0 + 336, 325, 0, 2, 0);
	SET_BLIP_NAME(&uVar0, "nSurv_Core");
	SET_BLIP_PRIORITY(&uVar0, 1);
	(&iParam0 + 336 + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &Global_46715, Function_37(), 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 1,2f, 2.0f));
	ATTACH_OBJECTS(StackVal, StackVal, &iParam0 + 336 + 24, &iParam0 + 336, Function_37(), Vector(0.0f, 0,8f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
	if (&iParam0 + 624 == 4294967295)
	{
		*(&iParam0 + 624) = Function_219(0, bParam1, 3);
	}
	*(&iParam0 + 336 + 16) = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("Survivor_TalkToCore", &iParam0 + 336 + 24, 10, "@GENERIC.USE", 0, 0, 0, 0, 4294967295, 0);
	DECOR_SET_BOOL(&iParam0 + 336, "Core", 1);
	return;
}

void Function_178(bool bParam0) //Position: 0xA063 / 41059
{
	var uVar0;
	var uVar1;
	var uVar5;
	var uVar6;
	var uVar9;
	var uVar11;
	int iVar12;
	var uVar13;
	
	PRINTSTRING("Discovering: ");
	PRINTSTRING(&Global_44085[bParam09] + 32);
	PRINTNL();
	if (Function_29(bParam0))
	{
		if ((bParam0 != Global_46838[1] || bParam0 != Global_46894[1]) || bParam0 != Global_46894[2])
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_OBJECT_POSITION(&Global_44085[bParam09] + 8, &uVar1);
			uVar0 = ADD_BLIP_FOR_COORD(&uVar1, 564, 0, 2, 0);
			SET_BLIP_NAME(&uVar0, "Status_SafeZone");
			UNK_0xFF3DB575(&uVar0, 1);
			SET_BLIP_PRIORITY(&uVar0, 3);
			uVar5 = Global_43791[bParam0];
			Function_217(&uVar5, 0x8000000);
			Function_217(&uVar5, 0x10000000);
			Global_43791[bParam0] = uVar5;
		}
		else
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(&Global_44085[bParam09] + 8)));
			}
			GET_VOLUME_SCALE(&Global_44085[bParam09] + 8, &uVar9);
			uVar6 = Function_183(&Global_44085[bParam09] + 8, 563, 0.0f);
			SET_BLIP_NAME(&uVar6, "Status_UnderAttack");
			UNK_0xFF3DB575(&uVar6, 1);
			uVar11 = Function_213(bParam0);
			iVar12 = Function_219(111, 111, 5);
			Function_182(uVar11, GET_DAY(0), GET_HOUR(0), GET_MINUTE(0), GET_SECOND(0));
			Function_181(uVar11, 1, (RAND_INT_RANGE(0, 100000) % 12), (RAND_INT_RANGE(0, 100000) % 60), 0);
			Function_179(iVar12);
			uVar13 = Global_43791[bParam0];
			Function_217(&uVar13, 0x1000000);
			Function_217(&uVar13, 0x10000000);
			Global_43791[bParam0] = uVar13;
		}
	}
	return;
}

void Function_179(int iParam0) //Position: 0xA224 / 41508
{
	int iVar0;
	int iVar1;
	
	if (&iParam0 == 4294967295)
	{
		iParam0 = Function_219(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(&Global_11014[02] + 8, &iVar1) && !Function_180(1))
	{
		iVar0 = 1;
		iVar1 = &Global_11014[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11120[02] + 8, &iVar1) && !Function_180(2))
	{
		iVar0 = 2;
		iVar1 = &Global_11120[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11146[02] + 8, &iVar1) && !Function_180(3))
	{
		iVar0 = 3;
		iVar1 = &Global_11146[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11222[02] + 8, &iVar1) && !Function_180(4))
	{
		iVar0 = 4;
		iVar1 = &Global_11222[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11284[02] + 8, &iVar1) && !Function_180(5))
	{
		iVar0 = 5;
		iVar1 = &Global_11284[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11544[02] + 8, &iVar1) && !Function_180(8))
	{
		iVar0 = 8;
		iVar1 = &Global_11544[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11646[02] + 8, &iVar1) && !Function_180(9))
	{
		iVar0 = 9;
		iVar1 = &Global_11646[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11726[02] + 8, &iVar1) && !Function_180(11))
	{
		iVar0 = 11;
		iVar1 = &Global_11726[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11836[02] + 8, &iVar1) && !Function_180(12))
	{
		iVar0 = 12;
		iVar1 = &Global_11836[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11946[02] + 8, &iVar1) && !Function_180(13))
	{
		iVar0 = 13;
		iVar1 = &Global_11946[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11988[02] + 8, &iVar1) && !Function_180(14))
	{
		iVar0 = 14;
		iVar1 = &Global_11988[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12048[02] + 8, &iVar1) && !Function_180(15))
	{
		iVar0 = 15;
		iVar1 = &Global_12048[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12150[02] + 8, &iVar1) && !Function_180(16))
	{
		iVar0 = 16;
		iVar1 = &Global_12150[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_11398[02] + 8, &iVar1) && !Function_180(17))
	{
		iVar0 = 17;
		iVar1 = &Global_11398[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12392[02] + 8, &iVar1) && !Function_180(18))
	{
		iVar0 = 18;
		iVar1 = &Global_12392[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12422[02] + 8, &iVar1) && !Function_180(19))
	{
		iVar0 = 19;
		iVar1 = &Global_12422[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12488[02] + 8, &iVar1) && !Function_180(21))
	{
		iVar0 = 21;
		iVar1 = &Global_12488[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12644[02] + 8, &iVar1) && !Function_180(22))
	{
		iVar0 = 22;
		iVar1 = &Global_12644[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12714[02] + 8, &iVar1) && !Function_180(23))
	{
		iVar0 = 23;
		iVar1 = &Global_12714[02] + 8;
	}
	if (IS_EARLIER_THAN(&Global_12760[02] + 8, &iVar1) && !Function_180(24))
	{
		iVar0 = 24;
		iVar1 = &Global_12760[02] + 8;
	}
	Global_21684[&iParam07].f_16 = iVar0;
	Global_21684[&iParam07].f_24 = &iVar1;
	return;
}

bool Function_180(int iParam0) //Position: 0xA58E / 42382
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_114(iParam0);
	uVar1 = Global_43791[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

void Function_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xA5B2 / 42418
{
	while (&iParam4 > 60)
	{
		iParam4 = (&iParam4 - 60);
		iParam3 = &iParam3 + 1;
	}
	while (&iParam3 > 60)
	{
		iParam3 = (&iParam3 - 60);
		iParam2 = &iParam2 + 1;
	}
	while (&iParam2 > 24)
	{
		iParam2 = (&iParam2 - 24);
		iParam1 = &iParam1 + 1;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11014[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11120[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11146[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11222[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11284[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11544[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11646[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11726[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11836[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11946[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11988[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12048[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12150[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_11398[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12392[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12422[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12488[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12644[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12714[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_12760[02] + 8, MAKE_TIME_OF_DAY_EX(&iParam1, &iParam2, &iParam3, &iParam4));
			break;
	}
}

void Function_182(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4) //Position: 0xA8D1 / 43217
{
	switch (iParam0)
	{
		case 0x00000001:
			*(&Global_11014[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000002:
			*(&Global_11120[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000003:
			*(&Global_11146[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000004:
			*(&Global_11222[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000005:
			*(&Global_11284[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000008:
			*(&Global_11544[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000009:
			*(&Global_11646[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000B:
			*(&Global_11726[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000C:
			*(&Global_11836[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000D:
			*(&Global_11946[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000E:
			*(&Global_11988[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x0000000F:
			*(&Global_12048[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000010:
			*(&Global_12150[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000011:
			*(&Global_11398[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000012:
			*(&Global_12392[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000013:
			*(&Global_12422[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000015:
			*(&Global_12488[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000016:
			*(&Global_12644[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000017:
			*(&Global_12714[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
		
		case 0x00000018:
			*(&Global_12760[02] + 8) = MAKE_TIME_OF_DAY_EX(&iParam1, &uParam2, &iParam3, &uParam4);
			break;
	}
}

var Function_183(int iParam0, int iParam1, int iParam2) //Position: 0xAB74 / 43892
{
	int iVar0;
	
	if (!IS_VOLUME_VALID(&iParam0))
	{
		return "";
	}
	iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
	if (IS_BLIP_VALID(&iVar0))
	{
		if (GET_BLIP_ICON(&iVar0) == iParam1)
		{
			return &iVar0;
		}
		REMOVE_BLIP(&iVar0);
	}
	iVar0 = ADD_BLIP_FOR_OBJECT(&iParam0, iParam1, &iParam2, 2, 0);
	if (IS_BLIP_VALID(&iVar0))
	{
		return &iVar0;
	}
	return "";
}

void Function_184(int iParam0) //Position: 0xABCD / 43981
{
	Function_190(&iParam0 + 384, "DLC_give_ammo", 5, 1);
	Function_190(&iParam0 + 384, "custom/DLC_give_ammo", 8, 1);
	Function_190(&iParam0 + 384, "ZombiePack_Footlocker", 1, 1);
	Function_185(&iParam0 + 384);
	return;
}

bool Function_185(struct<2>[] Param0) //Position: 0xAC41 / 44097
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_189();
	iVar1 = 0;
	if (!Function_5(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_188(&(Param0[iVar02]), 8);
		}
		else if (Function_187())
		{
			iVar1 = 1;
			Function_188(&(Param0[iVar02]), 8);
		}
		Function_188(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_5(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_5(&(Param0[02]), 8) || iVar1));
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
				Function_188(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_5(&(Param0[iVar02]), 4))
		{
			if (!Function_5(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_188(&(Param0[iVar02]), 2);
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
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_188(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_188(&(Param0[iVar02]), 2);
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
	Function_186();
	return 1;
}

void Function_186() //Position: 0xB003 / 45059
{
	if (!Function_53(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_187() //Position: 0xB043 / 45123
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

void Function_188(struct<13> Param0) //Position: 0xB071 / 45169
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_189() //Position: 0xB084 / 45188
{
	if (!Function_53(128))
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

var Function_190(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xB0C6 / 45254
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_191(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_188(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_191(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xB104 / 45316
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_188(&(Param0[iVar02]), 4);
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

bool Function_192() //Position: 0xB1D3 / 45523
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	bVar0 = false;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar1, "ZombiePack_foot");
	uVar2 = START_OBJECT_ITERATOR(&uVar1);
	while (IS_OBJECT_VALID(&uVar2))
	{
		if (!DECOR_CHECK_EXIST(&uVar2, "GringoIsDone"))
		{
			uVar3 = ADD_BLIP_FOR_OBJECT(&uVar2, 335, 0f, 2, 0);
			SET_BLIP_NAME(&uVar3, "Chest_BlipName");
			DECOR_SET_INT(&uVar2, "ChestBlip_AsInt", &uVar3);
			SET_BLIP_PRIORITY(&uVar3, 1);
			if (Global_43789 == Global_46914[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 2,3f);
			}
			else if (Global_43789 == Global_46926[0])
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 4.0f);
			}
			else
			{
				SET_BLIP_MAX_DISTANCE(&uVar3, 1,5f);
			}
		}
		bVar0 = true;
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
	}
	DESTROY_ITERATOR(&uVar1);
	return bVar0;
}

void Function_193(var uParam0, var uParam1, struct<82> Param2) //Position: 0xB2CC / 45772
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	char* cVar5[32];
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	var uVar17;
	float fVar18;
	struct<2> Var19;
	struct<2> Var21;
	var uVar23;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	uVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = Function_194(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param2);
	if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	uParam1 = uParam1;
	uVar3 = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), &uParam0, 4294967295, 0);
	bVar4 = false;
	while (IS_OBJECT_VALID(&uVar1) && !bVar4)
	{
		strcpy(&cVar5, GET_OBJECT_NAME(&uVar1), 32);
		if (STRING_CONTAINS_STRING(&cVar5, "chests"))
		{
			uVar14 = GET_OBJECTSET_FROM_OBJECT(&uVar1);
			iVar13 = 0;
			while (iVar13 < (GET_OBJECTSET_SIZE(&uVar14) - 1))
			{
				uVar15 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar13, &uVar14);
				strcpy(&cVar5, GET_OBJECT_NAME(&uVar15), 32);
				STRING_CLEAR_TOKENIZER();
				iVar16 = SET_OWNERSHIP_STRAGGLER(&cVar5, "_");
				uVar17 = STRING_GET_TOKEN((iVar16 - 1));
				fVar18 = TO_FLOAT(STRING_TO_INT(&uVar17));
				if (!Function_30(Global_21684[&Param2 + 6247].f_20, FLOOR(POW(2.0f, fVar18))))
				{
					Var19 = Vector(0.0f, 0.0f, 0.0f);
					Var21 = Vector(0.0f, 0.0f, 0.0f);
					stradd(&cVar5, "_gringo", 32);
					GET_OBJECT_POSITION(&uVar15, &Var19);
					GET_OBJECT_ORIENTATION(&uVar15, &Var21);
					uVar23 = CREATE_GRINGO_IN_LAYOUT(&uParam0, &cVar5, "$/content/DLC/ZombiePack/Gringos/ZombiePack_footlocker", Var19, Var21);
					ADD_OBJECT_TO_OBJECTSET(&uVar23, &uVar3);
				}
				iVar13++;
			}
			bVar4 = true;
		}
		uVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	STRING_CLEAR_TOKENIZER();
	DESTROY_OBJECTSET(&uVar3);
}

var Function_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81) //Position: 0xB456 / 46166
{
	return Global_21684[&iParam0 + 6247].f_20;
}

void Function_195(vector3 vParam0) //Position: 0xB46B / 46187
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < (vParam0.z - 1))
	{
		if (Function_30((&vParam0 + 8[iVar15])->f_32, 1))
		{
			if (IS_ACTOR_ALIVE(&vParam0 + 8[iVar15]))
			{
				Var2 = Vector(0.0f, 0.0f, 0.0f);
				GET_OBJECT_POSITION(&vParam0 + 8[iVar15] + 8, &Var2);
				if (STREAMING_ARE_BOUNDS_LOADED(Var2, 3.0f))
				{
					if (!Function_61(&vParam0 + 8[iVar15], 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_43(&vParam0 + 8[iVar15] + 32, 1);
						SET_OBJECT_POSITION(&vParam0 + 8[iVar15], Var2);
					}
					else
					{
						bVar0 = false;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		Function_43(&vParam0 + 608, 1024);
	}
	return;
}

void Function_196(struct<649> Param0) //Position: 0xB52E / 46382
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	if (Function_197(&iVar0, 20.0f, 0))
	{
		if (ACTOR_HAS_ANIM_SET(&iVar0, "DLC_give_ammo"))
		{
			return;
		}
		iVar1 = 0;
		while (StackVal < (iVar1 - 1))
		{
			if (&iVar0 == &Param0 + 8[iVar15])
			{
				uVar3 = &iVar0;
				iVar2 = iVar1;
				iVar1 = 9999;
			}
			iVar1++;
		}
		if (StackVal || (!IS_ACTOR_ALIVE(&uVar3) || iVar2 > 0) < (iVar2 - 1))
		{
			return;
		}
		fVar4 = GET_CURRENT_GAME_TIME();
		if (iParam1 == Global_46816[0])
		{
			if (!Function_30(&Param0 + 608, 0x40000000))
			{
				iVar5 = GET_ACTOR_ENUM(&uVar3);
				if (iVar5 != 550 && !IS_ANY_SPEECH_PLAYING(&uVar3))
				{
					if (Function_168(&uVar3, &Global_54076) > 3,5f)
					{
						Function_217(&Param0 + 608, 0x40000000);
						SAY_SINGLE_LINE_CONTEXT(&uVar3, 118, &Global_54076, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						Param0.f_648 = fVar4;
						return;
					}
				}
			}
		}
		if (Function_30(&Param0 + 608, 2))
		{
			fVar6 = Function_168(&uVar3, &Global_54076);
			if ((fVar6 < 10.0f && fVar6 > 18.0f) && !Function_30((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_217(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_PLAYER_RETURN_P", "GREET", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
			else if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else if (Function_30(&Param0 + 608, 512))
		{
			if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
			{
				if ((RAND_INT_RANGE(0, 100000) % 100) <= 50)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "POST_SAVE_THANKS", "nTHANK_YOU", "", 1, 1, 2, 0);
				}
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_640 = fVar4;
			}
		}
		else
		{
			fVar7 = Function_168(&uVar3, &Global_54076);
			if (fVar7 < 16.0f && !Function_30((&Param0 + 8[iVar25])->f_32, 4))
			{
				Function_217(&Param0 + 8[iVar25] + 32, 4);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRY_FOR_HELP_P", "MAJOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
			else if (fVar7 > 10.0f && !Function_30((&Param0 + 8[iVar25])->f_32, 8))
			{
				Function_217(&Param0 + 8[iVar25] + 32, 8);
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "GREET_UNDER_ATTACK_P", "SERIOUSLY_WOUNDED", "", 1, 1, 2, 0);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
				Param0.f_648 = fVar4;
			}
			else if (!Function_30((&Param0 + 8[iVar25])->f_32, 2))
			{
				if (fVar4 - Param0.f_640) < RAND_FLOAT_RANGE(45.0f, 60.0f)
				{
					SAY_SINGLE_LINE_STRING(&uVar3, "POST_SAVE_ANECDOTE_P", true, true, 2, 0, true, false);
					AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar3, &Global_54076, 2,21749f, 0);
					Param0.f_640 = fVar4;
					Param0.f_648 = fVar4;
				}
			}
			else if (fVar4 - Param0.f_648) < RAND_FLOAT_RANGE(30.0f, 45.0f)
			{
				SAY_SINGLE_LINE_STRING_WITH_BACKUPS(&uVar3, "CRIES_OUT_IN_TEROR", "MINOR_SHOCK", "", 1, 1, 2, 0);
				Param0.f_648 = fVar4;
			}
		}
	}
	return;
}

bool Function_197(var uParam0, int iParam1, bool bParam2) //Position: 0xB9AE / 47534
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 15);
	ITERATE_IN_SPHERE(&uVar0, Global_54078, &iParam1);
	bVar1 = false;
	iVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar2) && !bVar1)
	{
		iVar3 = GET_ACTOR_FROM_OBJECT(&iVar2);
		if (IS_ACTOR_RIDING(&iVar3))
		{
			if (&bParam2)
			{
				uParam0 = &iVar3;
			}
		}
		else
		{
			uParam0 = &iVar3;
		}
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			bVar1 = true;
		}
		else
		{
			uParam0 = "";
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return bVar1;
}

void Function_198(int iParam0, int iParam1, bool bParam2) //Position: 0xBA40 / 47680
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (Global_6623 || Function_53(0x8000000))
	{
		return;
	}
	uVar0 = Function_56(iParam1);
	if (iParam1 == Global_46760[0])
	{
		uVar1 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "spawnresrict_2");
		if (IS_VOLUME_VALID(&uVar1))
		{
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uVar1))
			{
				if (!Function_30(&iParam0 + 608, 0x2000000))
				{
					Function_43(&iParam0 + 608, 4194304);
					Function_43(&iParam0 + 608, 8388608);
					Function_43(&iParam0 + 608, 0x1000000);
					Function_43(&iParam0 + 608, 1048576);
					Function_43(&iParam0 + 608, 2097152);
					Function_217(&iParam0 + 608, 0x2000000);
					AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
					return;
				}
				return;
			}
			Function_43(&iParam0 + 608, 0x2000000);
		}
	}
	if (!Function_30(&iParam0 + 608, 2097152))
	{
		if (bParam2 <= 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_217(&iParam0 + 608, 1048576);
			Function_217(&iParam0 + 608, 2097152);
			Function_217(&iParam0 + 608, 4194304);
			Function_217(&iParam0 + 608, 8388608);
			Function_217(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	if (!Function_30(&iParam0 + 608, 1048576))
	{
		if (bParam2 <= 40.0f && bParam2 > 70.0f)
		{
			AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_MEDIUM", 0, 4294967295, 4294967295, 3212836864, 0);
			Function_217(&iParam0 + 608, 1048576);
			Function_217(&iParam0 + 608, 4194304);
			Function_217(&iParam0 + 608, 8388608);
			Function_217(&iParam0 + 608, 0x1000000);
			return;
		}
	}
	iVar2 = Function_199(StackVal, Global_54078, 16.0f, 0x40400000, 1, 0);
	if (iVar2 <= 3 && !Function_30(&iParam0 + 608, 4194304))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "HIGH_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_217(&iParam0 + 608, 4194304);
		Function_217(&iParam0 + 608, 8388608);
		Function_217(&iParam0 + 608, 0x1000000);
	}
	else if ((iVar2 > 3 && iVar2 == 0) && !Function_30(&iParam0 + 608, 8388608))
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "LOW_FIGHT_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
		Function_217(&iParam0 + 608, 8388608);
		Function_217(&iParam0 + 608, 0x1000000);
	}
	else if (iVar2 != 0 && !Function_30(&iParam0 + 608, 0x1000000))
	{
		Function_217(&iParam0 + 608, 0x1000000);
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_199(struct<2> Param0, float fParam2, var uParam3, var uParam4, var uParam5) //Position: 0xBD4A / 48458
{
	var uVar0;
	var uVar1;
	
	uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_46715, Function_37(), 4,203895E-45f, Param0, Vector(0.0f, 0.0f, 0.0f), Vector(fParam2, &uParam3, fParam2));
	uVar1 = Function_200(&uVar0, &uParam4, &uParam5);
	DESTROY_VOLUME(&uVar0);
	return uVar1;
}

int Function_200(var uParam0, var uParam1, bool bParam2) //Position: 0xBD86 / 48518
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(&Global_46715))
	{
		return 0;
	}
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), &Global_46715, 15, 1);
	iVar1 = 0;
	if (IS_OBJECTSET_VALID(&uVar0))
	{
		LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
		iVar2 = GET_OBJECTSET_SIZE(&uVar0);
		if (iVar2 < 0)
		{
			return iVar1;
		}
		iVar3 = 0;
		while (iVar3 <= iVar2)
		{
			uVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar3, &uVar0);
			if (IS_OBJECT_VALID(&uVar4))
			{
				uVar5 = GET_ACTOR_FROM_OBJECT(&uVar4);
				if (IS_ACTOR_VALID(&uVar5))
				{
					if (Function_201(&uVar5))
					{
						if (uParam1 || !IS_ACTOR_HOGTIED(&uVar5))
						{
							if (&bParam2)
							{
								if (Function_61(&uVar5, 0x3f800000, 0x42960000, 1, 1, 0))
								{
									iVar1++;
								}
							}
							else
							{
								iVar1++;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	DESTROY_OBJECTSET(&uVar0);
	return iVar1;
}

bool Function_201(int iParam0) //Position: 0xBE64 / 48740
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1254)
	{
		return 1;
	}
	if (Function_38(&iParam0, 1))
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
	{
		return DECOR_GET_BOOL(&iParam0, "Zombie");
	}
	return 0;
}

void Function_202() //Position: 0xBEB3 / 48819
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = Function_213(Global_43789);
	fVar1 = Function_211(Global_43789);
	fVar2 = Function_212(iVar0);
	iVar3 = (((fVar2 - fVar1) / fVar2) * 1,5f);
	iVar3 = Function_203(0,33f, Function_162(iVar3, 1.0f));
	SET_POP_DENSITY_MULTIPLIER(iVar3);
	SET_AMBIENT_DEAD_COUNT_DECAY_RATE(0.0f);
	ENABLE_AMBIENT_SPAWNING(true);
	Function_204(1);
	return;
}

int Function_203(int iParam0, int iParam1) //Position: 0xBF01 / 48897
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_204(int iParam0) //Position: 0xBF14 / 48916
{
	if (Function_30(iParam0, 1) && !Function_30(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_205(vector3 vParam0) //Position: 0xBF41 / 48961
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<5> Var4;
	
	SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	iVar0 = 0;
	while (iVar0 < (vParam0.z - 1))
	{
		uVar1 = &vParam0 + 8[iVar05];
		if (IS_ACTOR_ALIVE(&uVar1))
		{
			SET_MOVER_FROZEN(&uVar1, 0);
			SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&uVar1, 4);
			if (!Function_30(&vParam0 + 608, 0x4000000))
			{
				MEMORY_CLEAR_ALL(&uVar1);
				MEMORY_CONSIDER_AS(&uVar1, &Global_54076, 2);
			}
			AI_CLEAR_DONT_HARM_ACTOR(&uVar1);
			iVar2 = Vector(0.0f, 0.0f, 0.0f);
			Var4 = Vector(0.0f, 0.0f, 0.0f);
			GET_OBJECT_POSITION(&vParam0 + 8[iVar05] + 8, &iVar2);
			GET_OBJECT_ORIENTATION(&vParam0 + 8[iVar05] + 8, &Var4);
			if (!&bParam1)
			{
				TASK_PRIORITY_SET(&uVar1, true);
				TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &uVar1, &iVar2, -1.0f);
			}
			else
			{
				SET_ACTOR_CAN_BE_TARGETED(&uVar1, true);
				if (!Function_30(&vParam0 + 608, 0x4000000))
				{
					TASK_PRIORITY_SET(&uVar1, false);
					TASK_STAND_STILL(&uVar1, -1.0f, 0, 0);
				}
			}
		}
		iVar0++;
	}
	Function_206(&vParam0, &vParam0, 0);
	return;
}

void Function_206(int iParam0, int iParam1, int iParam2) //Position: 0xC043 / 49219
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_207(&uVar1, &iParam1, iParam2);
		}
		iVar0++;
	}
	return;
}

void Function_207(var uParam0, var uParam1, int iParam2) //Position: 0xC09A / 49306
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, iVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_CONSIDER_AS(&uParam0, &uVar1, iParam2);
			}
		}
		iVar0++;
	}
	return;
}

bool Function_208(int iParam0) //Position: 0xC0EC / 49388
{
	int iVar0;
	
	iVar0 = Function_114(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_28(iVar0) || Function_180(iParam0));
}

void Function_209(int iParam0) //Position: 0xC12B / 49451
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (!Function_30(&iParam0 + 608, 512))
	{
		fVar0 = Function_211(Global_43789);
		iVar1 = Function_213(Global_43789);
		if (iVar1 == 0 && &iParam0 + 632 >= 120.0f)
		{
			fVar2 = Function_212(iVar1);
			iVar3 = ((fVar0 / fVar2) * 100.0f);
			if (iVar3 <= 120.0f)
			{
				(&iParam0 + 632) = 1000.0f;
				return;
			}
			if (iVar3 == &iParam0 + 632)
			{
				fVar4 = (fVar0 % 10.0f);
				fVar5 = (fVar0 / 10.0f);
				UI_SET_PROGRESS_BAR_VAL("ZMeter", (FABS((fVar4 * 10.0f)) + 1.0f));
				UI_SET_PROGRESS_BAR_CHANGE("ZMeter", FLOOR(fVar5));
				UI_REFRESH("ZMeter");
				*(&iParam0 + 632) = iVar3;
			}
		}
	}
	return;
}

void Function_210(int iParam0) //Position: 0xC1F6 / 49654
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = GET_BLIP_ON_ACTOR(&iParam0);
	if (GET_BLIP_ICON(&uVar0) == 325)
	{
		REMOVE_BLIP(&uVar0);
	}
	uVar1 = DECOR_GET_INT(&iParam0, "PauseMapBlip");
	if (IS_BLIP_VALID(&uVar1))
	{
		REMOVE_BLIP(&uVar1);
	}
	DECOR_REMOVE(&iParam0, "PauseMapBlip");
	if (IS_SCRIPT_USE_CONTEXT_VALID(&iParam0 + 16))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&iParam0 + 16);
	}
	if (DECOR_CHECK_EXIST(&iParam0, "nUC_NoAmmo"))
	{
		uVar2 = DECOR_GET_INT(&iParam0, "nUC_NoAmmo");
		if (IS_SCRIPT_USE_CONTEXT_VALID(&uVar2))
		{
			RELEASE_SCRIPT_USE_CONTEXT(&uVar2);
		}
		DECOR_REMOVE(&iParam0, "nUC_NoAmmo");
	}
	if (IS_VOLUME_VALID(&iParam0 + 24))
	{
		DESTROY_VOLUME(&iParam0 + 24);
	}
	return;
}

var Function_211(bool bParam0) //Position: 0xC2D0 / 49872
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	uVar2 = &Global_44085[bParam09] + 8;
	if (IS_VOLUME_VALID(&uVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(&uVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(&uVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

var Function_212(int iParam0) //Position: 0xC32F / 49967
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

int Function_213(bool bParam0) //Position: 0xC472 / 50290
{
	if (bParam0 == Global_46760[0])
	{
		return 1;
	}
	if (bParam0 == Global_46760[2])
	{
		return 2;
	}
	if (bParam0 == Global_46760[1])
	{
		return 3;
	}
	if (bParam0 == Global_46796[1])
	{
		return 4;
	}
	if (bParam0 == Global_46796[3])
	{
		return 5;
	}
	if (bParam0 == Global_46816[0])
	{
		return 8;
	}
	if (bParam0 == Global_46816[1])
	{
		return 9;
	}
	if (bParam0 == Global_46838[0])
	{
		return 11;
	}
	if (bParam0 == Global_46850[0])
	{
		return 12;
	}
	if (bParam0 == Global_46850[1])
	{
		return 13;
	}
	if (bParam0 == Global_46850[2])
	{
		return 14;
	}
	if (bParam0 == Global_46866[0])
	{
		return 15;
	}
	if (bParam0 == Global_46866[1])
	{
		return 16;
	}
	if (bParam0 == Global_46866[2])
	{
		return 17;
	}
	if (bParam0 == Global_46894[2])
	{
		return 25;
	}
	if (bParam0 == Global_46894[3])
	{
		return 18;
	}
	if (bParam0 == Global_46894[0])
	{
		return 19;
	}
	if (bParam0 == Global_46914[0])
	{
		return 21;
	}
	if (bParam0 == Global_46926[2])
	{
		return 22;
	}
	if (bParam0 == Global_46926[1])
	{
		return 23;
	}
	if (bParam0 == Global_46926[0])
	{
		return 24;
	}
	if (bParam0 == Global_46838[1])
	{
		return 26;
	}
	if (bParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

void Function_214() //Position: 0xC5F8 / 50680
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&Global_46715);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 12);
	ITERATE_ON_PARTIAL_MODEL_NAME(&uVar0, "ZombiePack_foot");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar2 = GET_BLIP_ON_OBJECT(&iVar1);
		if (IS_BLIP_VALID(&uVar2))
		{
			REMOVE_BLIP(&uVar2);
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

bool Function_215(bool bParam0, int iParam1) //Position: 0xC664 / 50788
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(&Global_46715))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&Global_46715);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 12);
		ITERATE_ON_PARTIAL_NAME(&uVar1, "player_sleep");
		if (&iParam1 == Global_46736[2])
		{
			ITERATE_IN_SPHERE(StackVal, &uVar1, Vector(123,033f, 72,791f, 2669,954f), 10.0f);
		}
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		if (IS_OBJECT_VALID(&uVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(&uVar2);
			if (IS_GRINGO_VALID(&bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(&bVar3, bParam0);
				uVar4 = GET_OBJECT_FROM_GRINGO(&bVar3);
				uVar5 = GET_BLIP_ON_OBJECT(&uVar4);
				if (IS_BLIP_VALID(&uVar5))
				{
					REMOVE_BLIP(&uVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(&uVar4, "SavingAtBedAllowed", 1);
					uVar5 = ADD_BLIP_FOR_OBJECT(&uVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(&uVar5, 1);
					if (&iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(&uVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(&uVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return iVar0;
}

void Function_216(bool bParam0, float fParam1) //Position: 0xC7A3 / 51107
{
	DECOR_SET_FLOAT(&Global_44085[bParam09] + 8, "ZombieScore", fParam1);
	return;
}

void Function_217(var uParam0, bool bParam1) //Position: 0xC7C7 / 51143
{
	uParam0 = (uParam0 || bParam1);
	return;
}

bool Function_218(int iParam0, bool bParam1) //Position: 0xC7D8 / 51160
{
	int iVar0;
	
	iVar0 = Function_154(iParam0);
	if (!Function_48(iVar0))
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

int Function_219(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC816 / 51222
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_223(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_220(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_220(bParam0, bParam1, bParam2, 4294967295);
}

int Function_220(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC874 / 51316
{
	var uVar0;
	
	if (!Function_222(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_223(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_221(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_221(int iParam0) //Position: 0xC9D8 / 51672
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_222(int iParam0) //Position: 0xCA16 / 51734
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_223(int iParam0, int iParam1, int iParam2) //Position: 0xCA2B / 51755
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_224(int iParam0) //Position: 0xCA4B / 51787
{
	var uVar0;
	var uVar1;
	
	iParam0 = iParam0;
	if (!iLocal_1704)
	{
		if (!Function_471())
		{
			iLocal_1704 = Function_215(0, 4294967295);
		}
		else
		{
			iLocal_1704 = 1;
		}
	}
	iLocal_1682 = 0;
	while (iLocal_1682 <= 3)
	{
		if (!IS_OBJECT_VALID(&(uLocal_1683[iLocal_1682])))
		{
			Function_406(&iLocal_178 + 952[iLocal_1682]);
			uVar0 = LOCATE_PHYSINST_OF_TYPE(Function_406(&iLocal_178 + 952[iLocal_1682]), 1.0f, "c_gen_flag01x", 1);
			if (IS_PHYSINST_VALID(&uVar0))
			{
				uLocal_1683[iLocal_1682] = GET_OBJECT_FROM_PHYSINST(&uVar0);
				if (IS_OBJECT_VALID(&(uLocal_1683[iLocal_1682])))
				{
					REFERENCE_OBJECT(&(uLocal_1683[iLocal_1682]));
					SET_DRAW_OBJECT(&(uLocal_1683[iLocal_1682]), 0);
				}
			}
		}
		iLocal_1682++;
	}
	if (IS_ACTOR_IN_VOLUME(Function_108(), &iLocal_434 + 2048) && Function_51(4))
	{
		iLocal_1780 = 1;
		iLocal_1781 = 0;
	}
	else if ((StackVal && (StackVal || (StackVal || iLocal_1780 != 6 != 10) != 9)) && !iLocal_1781)
	{
		Function_176("nGY_Return", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_1781 = 1;
	}
	if ((StackVal || (StackVal || IS_ACTOR_IN_VOLUME(Function_108(), &iLocal_434 + 2016) != 11) != 12) && iLocal_1780)
	{
		iLocal_6 = 0;
		if (Function_243(&Local_1706))
		{
			if (iLocal_1780)
			{
				Function_25(&Local_1706);
			}
		}
	}
	else if (iLocal_1780)
	{
		iLocal_1780 = 0;
		iLocal_1781 = 0;
		iLocal_6 = 1000;
		Function_25(&Local_1706);
		Local_1706.f_4 = 1;
	}
	if (iLocal_1777)
	{
		if (iLocal_1774 == 4294967295)
		{
			iLocal_1774 = Function_49(0);
		}
		else
		{
			if (!IS_VOLUME_VALID(&uLocal_1775))
			{
				uLocal_1775 = FIND_VOLUME_IN_LAYOUT(&Global_46715, "triggerSurvivorSystem");
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &uLocal_1775))
			{
				if (Function_242(iLocal_1774) < 0 && !Function_471())
				{
					Function_178(Global_43789);
					Function_241();
					iLocal_1777 = 0;
				}
			}
		}
	}
	if (Global_6606)
	{
		if (!Function_67(Global_119934, 65536))
		{
			if ((Function_51(4) && !Function_51(3)) && Function_242(Global_46948) < 0)
			{
				if (iLocal_1703)
				{
					if (Function_230())
					{
						iLocal_6 = 1000;
						Function_229(&Global_119934, 65536);
						STOP_PED_SPEAKING(&iLocal_13 + 8[05], 0);
						STOP_PED_SPEAKING(&iLocal_13 + 8[15], 0);
						STOP_PED_SPEAKING(&iLocal_13 + 8[25], 0);
						bLocal_1779 = true;
					}
					else
					{
						iLocal_6 = 0;
					}
				}
				else if (iLocal_1705)
				{
					if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_434 + 2064))
					{
						iLocal_1691 = 1000;
						if (&iLocal_13 + 8[05] != &iLocal_13 + 336)
						{
							STOP_PED_SPEAKING(&iLocal_13 + 8[05], 1);
						}
						if (&iLocal_13 + 8[15] != &iLocal_13 + 336)
						{
							STOP_PED_SPEAKING(&iLocal_13 + 8[15], 1);
						}
						if (&iLocal_13 + 8[25] != &iLocal_13 + 336)
						{
							STOP_PED_SPEAKING(&iLocal_13 + 8[25], 1);
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))))
						{
							REMOVE_BLIP(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")));
							DECOR_SET_BOOL(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe", 1);
						}
						iLocal_1703 = 1;
					}
					iLocal_6 = 0;
				}
				else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_434 + 2072))
				{
					*(&iLocal_1691 + 24) = Function_225(GET_AMBIENT_LAYOUT(), 0, 1, 1, 0);
					if (IS_OBJECT_VALID(&iLocal_1691 + 24))
					{
						STREAMING_SET_POI_LIMIT(2);
						SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1691 + 24, 1);
					}
					else
					{
						LOG_ERROR("Z_FirstTime_Survivor - Failed to create Z_FirstTime_Survivor_cutscene (paused)");
					}
					iLocal_1705 = 1;
					iLocal_6 = 0;
				}
			}
		}
		else if (bLocal_1779)
		{
			if (!iLocal_1778)
			{
				iLocal_1778 = 1;
				DECOR_SET_BOOL(&Global_54076, "Special_BLK_Ready", 1);
			}
		}
	}
	if (Global_21684[Function_49(0)7].f_12 != 1 && !Function_51(3))
	{
		if (Function_30(&iLocal_13 + 608, 1))
		{
			if (Function_67(Global_119934, 65536))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")));
					DECOR_SET_BOOL(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe", 1);
				}
			}
		}
		else if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))) && !DECOR_CHECK_EXIST(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe"))
		{
			uVar1 = Function_183(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), 312, 0.0f);
			if (IS_BLIP_VALID(&uVar1))
			{
				SET_BLIP_COLOR(&uVar1, 0,63f, 0,85f, 0.0f, 1.0f);
				SET_BLIP_BLINK(&uVar1, 1, 0, 5f);
				SET_BLIP_NAME(&uVar1, &Global_99725[243] + 4);
			}
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "CORE_SURV_TALK_NOW"))
	{
		DECOR_REMOVE(&Global_54076, "CORE_SURV_TALK_NOW");
		SAY_SINGLE_LINE_STRING(&iLocal_13 + 336, "CRY_FOR_HELP_P", true, true, 2, 0, true, false);
	}
	return;
}

var Function_225(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0xD0E5 / 53477
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "Z_FirstTime_Survivor", 2, 1);
	}
	Function_226(&uVar0);
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

void Function_226(int iParam0) //Position: 0xD173 / 53619
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_228(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_227(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_LERP(&iParam0, 0, 1, 4.0f, 0, 0);
	return;
}

void Function_227(int iParam0) //Position: 0xD1AE / 53678
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 28,30709f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,5209f, 86,07175f, 1277,423f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,032678f, -2,559936f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_228(int iParam0) //Position: 0xD223 / 53795
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,91978f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(691,4238f, 86,07019f, 1276,816f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,002031f, -2,687907f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	return;
}

void Function_229(var uParam0, var uParam1) //Position: 0xD291 / 53905
{
	uParam0 = (uParam0 || uParam1);
	return;
}

bool Function_230() //Position: 0xD2A2 / 53922
{
	var uVar0;
	
	switch (iLocal_1691)
	{
		case 0x000003E8:
			Function_239(0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0x3f800000, 0);
			SET_SCRIPT_CUTSCENE_ACTIVE(1);
			UNK_0x9F832205(1);
			if (UNK_0xCDA6BB6C())
			{
				uVar0 = UNK_0xFF1F1730();
				*(&iLocal_1691 + 24) = GET_CUTSCENE_TUNER_CUTSCENEOBJECT();
			}
			else if (IS_OBJECT_VALID(&iLocal_1691 + 24))
			{
				Function_238(&iLocal_1691 + 24, 0);
				Function_173("Survivor_Help_TownAttack", 0x41200000, 1, 0, 2, 1, 0);
				DECOR_SET_BOOL(&Global_54076, "CORE_SURV_TALK_NOW", 1);
			}
			else
			{
				*(&iLocal_1691 + 24) = Function_225(GET_AMBIENT_LAYOUT(), 0, 1, 0, 0);
			}
			if (IS_OBJECT_VALID(&iLocal_1691 + 24))
			{
				STREAMING_SET_POI_LIMIT(1);
				SET_CUTSCENE_STREAMING_LOAD_SCENE(&iLocal_1691 + 24, 1);
			}
			else
			{
				LOG_ERROR("Z_FirstTime_Survivor - Failed to create Z_FirstTime_Survivor_cutscene");
				iLocal_1691 = 1000;
				return 1;
			}
			iLocal_1691 = 1001;
			break;
		
		case 0x000003E9:
			Function_237(&Global_54076, 1, 1);
			TASK_STAND_STILL(&Global_54076, -1.0f, 0, 0);
			iLocal_1691 = 1002;
			break;
		
		case 0x000003EA:
			Function_236(1.0f);
			iLocal_1691 = 1003;
			break;
		
		case 0x000003EB:
			if (!HUD_IS_FADING())
			{
				Function_234(&iLocal_1691 + 4);
				iLocal_1691 = 1004;
			}
			break;
		
		case 0x000003EC:
			if (!UNK_0xCDA6BB6C() && !IS_OBJECT_VALID(&iLocal_1691 + 24))
			{
				Function_234(&iLocal_1691 + 4);
				iLocal_1691 = 1104;
			}
			break;
		
		case 0x00000450:
			if (!HUD_IS_FADING())
			{
				Function_237(&Global_54076, 0, 1);
				SET_SCRIPT_CUTSCENE_ACTIVE(0);
				UNK_0x9F832205(0);
				Function_231(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				if (UNK_0xCDA6BB6C())
				{
					CANCEL_CUTSCENE_TUNER_PLAYBACK();
				}
				else if (IS_OBJECT_VALID(&iLocal_1691 + 24))
				{
					DESTROY_OBJECT(&iLocal_1691 + 24);
				}
				iLocal_1691 = 1000;
				return 1;
			}
			break;
		
		case 0x00000451:
			if (!HUD_IS_FADING())
			{
				iLocal_1691 = 1104;
			}
			break;
	}
	return 0;
}

void Function_231(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10) //Position: 0xD4BE / 54462
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
		uVar0 = Function_108();
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
		Function_80(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_134();
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
	Function_232(&iParam9, &iParam10);
}

void Function_232(var uParam0, bool bParam1) //Position: 0xD58D / 54669
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
		Function_233();
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

void Function_233() //Position: 0xD65C / 54876
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

void Function_234(int iParam0) //Position: 0xD6D4 / 54996
{
	Function_235(&iParam0, 0.0f);
	return;
}

void Function_235(vector3 vParam0) //Position: 0xD6E1 / 55009
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_217(&vParam0, 1);
	Function_43(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_236(bool bParam0) //Position: 0xD706 / 55046
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

void Function_237(var uParam0, bool bParam1, bool bParam2) //Position: 0xD723 / 55075
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
		SET_ACTOR_INVULNERABILITY(&uParam0, 1);
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
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&uParam0);
		SET_ACTOR_INVULNERABILITY(&uParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
	}
	return;
}

void Function_238(var uParam0, bool bParam1) //Position: 0xD7D3 / 55251
{
	PLAY_CUTSCENEOBJECT(&uParam0, bParam1, 0.0f, 0.0f, 4294967295, 4294967295, 0, 0, 0, 0);
	return;
}

void Function_239(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0xD7E9 / 55273
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
	Function_134();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		iVar1 = Function_108();
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
				Function_165(&iVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_37(), 2,802597E-45f, Function_165(&iVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_80(19, 1, 0, 0);
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
	if (iParam10 && !Function_175())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_240()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_240()));
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
	if (Function_53(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_117(0x4000000);
	}
	if (Function_53(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_117(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_240() //Position: 0xDA9B / 55963
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar1 = CREATE_OBJECT_ITERATOR(&uVar0);
		uVar2 = START_OBJECT_ITERATOR(&uVar1);
		ITERATE_ON_OBJECT_TYPE(&uVar1, 42);
		if (IS_OBJECT_VALID(&uVar2))
		{
			while (IS_OBJECT_VALID(&uVar2))
			{
				PRINTSTRING(GET_OBJECT_NAME(&uVar2));
				PRINTNL();
				if (STRINGS_ARE_EQUAL(GET_OBJECT_NAME(&uVar2), "bino_camera"))
				{
					return &uVar2;
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
		DESTROY_ITERATOR(&uVar1);
	}
	return "";
}

void Function_241() //Position: 0xDB29 / 56105
{
	if (Global_43789 == Global_46914[0])
	{
		DECOR_SET_BOOL(&Global_54076, "QM_TriggerAttack", 1);
	}
	return;
}

int Function_242(int iParam0) //Position: 0xDB57 / 56151
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_243(struct<265> Param0) //Position: 0xDB71 / 56177
{
	int iVar0;
	int iVar1;
	
	switch (StackVal)
	{
		case 0x00000000:
			Function_404(&Param0);
			Param0.f_4 = 1;
			break;
		
		case 0x00000001:
			if (Function_403())
			{
				if (!Function_50(&Param0))
				{
					return 1;
				}
				if (Function_44(Param0.f_264) && Function_242(Function_49(Param0.f_264)) < 0)
				{
					if (!Param0.f_256)
					{
						Param0.f_256 = 1;
						Function_173("GY_STILL_CLENSED", 0x41200000, 1, 0, 2, 1, 0);
					}
					return 1;
				}
				Function_399(&Param0);
			}
			break;
		
		case 0x00000002:
			Function_398();
			if (Function_397())
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				vLocal_1202.f_8 = 1;
				if (!DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
				{
					Function_138(StackVal, Global_54078, 0, 0, 1);
					DECOR_SET_BOOL(&Global_54076, "bStartedGY", 1);
				}
				CANCEL_DEADEYE();
				Function_396(&Param0);
				Function_239(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0x3f800000, 0);
				iLocal_1141 = Function_392(&uLocal_1198, 0, 1, 0, 0);
				iLocal_1187 = 1;
				fLocal_1188 = GET_CURRENT_GAME_TIME();
				SET_ACTOR_PROOF(&Global_54076, 16);
				iLocal_1170 = 1;
				Function_31(1.0f);
				Function_391(&iLocal_1181, -10.0f);
				Function_390(&iLocal_1192);
				ENABLE_WEATHER_SPHERE(Function_27(Param0.f_264), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&Global_54076)))
				{
					TASK_FLEE_ACTOR(Function_384(1, 0, 0, 0, 0, 0, 1, 0), &Global_54076, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_378(&Param0);
				Param0.f_4 = 4;
			}
			break;
		
		case 0x00000003:
			Function_398();
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&vLocal_1202, "LootCoffin")))
			{
				AUDIO_MUSIC_SET_MOOD("LOW_FIGHT_DARK", 0, 4294967295, 4294967295);
				vLocal_1202.f_8 = 1;
				if (!DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
				{
					Function_138(StackVal, Global_54078, 0, 0, 1);
					DECOR_SET_BOOL(&Global_54076, "bStartedGY", 1);
				}
				Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1170 = 1;
				Function_31(1.0f);
				Function_391(&iLocal_1181, -10.0f);
				Function_390(&iLocal_1192);
				ENABLE_WEATHER_SPHERE(Function_27(Param0.f_264), 1);
				if (IS_ACTOR_VALID(GET_ACTORS_HORSE(&Global_54076)))
				{
					TASK_FLEE_ACTOR(Function_384(1, 0, 0, 0, 0, 0, 1, 0), &Global_54076, 100.0f, 15.0f, 0, 0, 0);
				}
				Function_378(&Param0);
				Param0.f_4 = 6;
			}
			break;
		
		case 0x00000004:
			if (!IS_OBJECT_VALID(&iLocal_1141) || Function_376())
			{
				if (bLocal_1186)
				{
					AI_IGNORE_ACTOR(&Global_54076);
					Param0.f_4 = 5;
				}
				else
				{
					Function_231(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					ACTOR_DRAW_LAST_WEAPON(&Global_54076, 0);
					if (IS_OBJECT_VALID(&iLocal_1141))
					{
						DESTROY_OBJECT(&iLocal_1141);
					}
					Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
					iLocal_1187 = 1;
					fLocal_1188 = GET_CURRENT_GAME_TIME();
					SET_ACTOR_PROOF(&Global_54076, 16);
					Param0.f_4 = 6;
				}
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				Function_231(2, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(&Global_54076, 0);
				if (IS_OBJECT_VALID(&iLocal_1141))
				{
					DESTROY_OBJECT(&iLocal_1141);
				}
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(549,994f, 94,248f, 1189,528f), 107,628f, 1, 1, 1);
				AI_STOP_IGNORING_ACTOR(&Global_54076);
				Function_236(2,5f);
				Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Param0.f_4 = 6;
			}
			break;
		
		case 0x00000006:
			Function_398();
			Function_374(&Param0);
			if (Function_373(&iLocal_1181, 0.0f))
			{
				Function_372();
				if (Param0.f_264 == 4)
				{
					Function_235(&iLocal_1181, TO_FLOAT(RAND_INT_RANGE(4294967276, 4294967286)));
				}
				else
				{
					Function_235(&iLocal_1181, TO_FLOAT(RAND_INT_RANGE(4294967251, 4294967271)));
				}
			}
			return Function_346(&Param0);
			break;
		
		case 0x00000007:
			if (Function_344(&iLocal_1120, 0.0f))
			{
				AUDIO_MUSIC_SET_MOOD("HIGH_FIGHT_DARK", 0, 4294967295, 4294967295);
				AI_IGNORE_ACTOR(&Global_54076);
				Function_391(&uLocal_1177, -10.0f);
				CANCEL_DEADEYE();
				Function_341(&Param0);
				Function_239(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0x3f800000, 0);
				Function_318(&Param0);
				Function_235(&iLocal_1120, 0.0f);
				Param0.f_4 = 8;
				UNK_0x3B93B981(1);
			}
			break;
		
		case 0x00000008:
			if (Function_344(&iLocal_1120, 5.0f))
			{
				Function_309(&Param0);
			}
			if (!IS_OBJECT_VALID(&iLocal_1141))
			{
				AI_STOP_IGNORING_ACTOR(&Global_54076);
				Function_231(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				ACTOR_DRAW_LAST_WEAPON(&Global_54076, 0);
				Param0.f_4 = 9;
				Function_308(Param0.f_264);
				Function_307(&Param0 + 8, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
				UNK_0x3B93B981(0);
			}
			break;
		
		case 0x00000009:
			Function_374(&Param0);
			Function_398();
			if (!IS_ACTOR_ALIVE(&iLocal_1171) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 8) != 0)
			{
				Function_42();
				if (!Function_306())
				{
					Param0.f_4 = 10;
				}
				else
				{
					Function_235(&iLocal_1120, 0.0f);
					Function_305(&Param0);
					Param0.f_4 = 11;
				}
			}
			break;
		
		case 0x0000000A:
			Function_301(&Param0);
			Function_374(&Param0);
			Function_398();
			Function_300(&Param0);
			if (Function_306())
			{
				Function_305(&Param0);
				Function_235(&iLocal_1120, 2,6f);
				Param0.f_4 = 11;
			}
			else if (iLocal_1167)
			{
				Function_176("GY_Coffin_reminder", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1167 = 0;
			}
			break;
		
		case 0x0000000B:
			if (Function_373(&iLocal_1120, 2,5f))
			{
				AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
				ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
				bLocal_1169 = true;
				CANCEL_DEADEYE();
				Function_239(1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0x3f800000, 0);
				UI_PUSH("CutsceneWithMessages");
				Function_279(&Param0);
				if (IS_OBJECT_VALID(&iLocal_1141))
				{
					Function_234(&iLocal_1120);
					Param0.f_4 = 12;
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_344(&iLocal_1120, 2,5f))
			{
				Function_278(&Param0);
			}
			if (!IS_OBJECT_VALID(&iLocal_1141))
			{
				Function_231(2, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				UI_POP("CutsceneWithMessages");
				if (Param0.f_264 == 0)
				{
					if (Function_242(Global_46948) == 0)
					{
						Function_176("GY_RETURN_BLK", 0x40f00000, 1, 2, 0, 0, 0, 0);
						iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(Global_99725[343].f_224);
						iVar1 = 0;
						while (iVar1 <= iVar0)
						{
							SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(Global_99725[343].f_224, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(Global_99725[343].f_224, iVar1), 4, 0);
							iVar1++;
						}
						APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, 0);
						Function_277(Global_99725[343].f_224, 0);
					}
				}
				Function_244(&Param0);
				if (Global_6666)
				{
					TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-2899,875f, 19,075f, 2710,246f), 24,269f, 1, 1, 1);
				}
				Param0.f_4 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_25(&Param0);
			return 1;
			break;
	}
	return 0;
}

void Function_244(struct<265> Param0) //Position: 0xE2D2 / 58066
{
	int iVar0;
	
	if (Function_276(&iLocal_1192))
	{
		fLocal_1196 = Function_274(&iLocal_1192);
		iVar0 = Function_273(Param0.f_264);
		if (Function_77(iVar0) < 0.0f)
		{
			if (fLocal_1196 > Function_77(iVar0))
			{
				Function_272(iVar0, fLocal_1196, 0);
			}
		}
		else
		{
			Function_272(iVar0, fLocal_1196, 0);
		}
	}
	if (Function_242(Function_49(Param0.f_264)) == 0)
	{
		Function_80(656, 1, 0, 0);
	}
	Function_245(Function_49(Param0.f_264), 1, 1, 0);
	return;
}

void Function_245(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xE34B / 58187
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_46(iParam0))
	{
		Function_270();
		return;
	}
	iVar0 = Function_269(iParam0);
	if (!iVar0 != 1)
	{
		Global_21684[iParam07].f_12++;
		if (Function_268())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", iVar0);
		}
	}
	else
	{
		Global_10966 = Function_267(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_266(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_174(Global_10966) };
		}
		if (Function_268())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_262();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_268())
	{
		Function_261();
	}
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_259("DEED_COMPLETE", iParam0);
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
			Function_257(iParam0);
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
						switch (Function_267(iParam0))
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
			Function_248(1);
			Function_247(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_246(iParam0, &Var14);
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

void Function_246(int iParam0, struct<41> Param1) //Position: 0xE5A9 / 58793
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_247(var uParam0, int iParam1) //Position: 0xE5E7 / 58855
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_248(bool bParam0) //Position: 0xE626 / 58918
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_249();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_139();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_43(&Global_99144, 1);
		Function_43(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_249() //Position: 0xE67B / 59003
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_175())
	{
		Function_254(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_254(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_250(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_250(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_166(StackVal, Var0))
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

struct<8> Function_250(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xE732 / 59186
{
	int iVar0;
	
	iVar0 = Function_252(&uParam2, &uParam3);
	if (Function_251(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_217(&Global_99144, 1);
			Function_43(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_217(&Global_99144, 2);
			Function_43(&Global_99144, 1);
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
		Function_217(&Global_99144, 2);
		Function_43(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_36();
	return StackVal, Function_36();
}

bool Function_251(int iParam0) //Position: 0xE82A / 59434
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_252(bool bParam0, bool bParam1) //Position: 0xE840 / 59456
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
				fVar2 = Function_253(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_253(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_251(iVar0) && !&bParam1)
	{
		iVar0 = Function_252(&bParam0, 1);
	}
	return iVar0;
}

float Function_253(struct<2> Param0, struct<2> Param2) //Position: 0xE90C / 59660
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_254(float fParam0, int iParam1) //Position: 0xE929 / 59689
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_256(&Global_54076, &Var3);
	if (!Function_255(Global_46760[0]))
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
	if (!Function_255(Global_46760[2]))
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
	if (!Function_255(Global_46760[1]))
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
	if (!Function_255(Global_46796[1]))
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
	if (!Function_255(Global_46796[3]))
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
	if (!Function_255(Global_46796[2]))
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
	if (!Function_255(Global_46796[4]))
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
	if (!Function_255(Global_46816[0]))
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
	if (!Function_255(Global_46816[1]))
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
	if (!Function_255(Global_46816[2]))
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
	if (!Function_255(Global_46838[0]))
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
	if (!Function_255(Global_46850[0]))
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
	if (!Function_255(Global_46850[1]))
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
	if (!Function_255(Global_46850[2]))
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
	if (!Function_255(Global_46866[0]))
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
	if (!Function_255(Global_46866[1]))
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
	if (!Function_255(Global_46866[2]))
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
	if (!Function_255(Global_46894[2]))
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
	if (!Function_255(Global_46894[3]))
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
	if (!Function_255(Global_46894[0]))
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
	if (!Function_255(Global_46914[0]))
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
	if (!Function_255(Global_46926[2]))
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
	if (!Function_255(Global_46926[1]))
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
	if (!Function_255(Global_46926[0]))
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
	if (!Function_255(Global_46838[1]))
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
	if (!Function_255(Global_46894[1]))
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
	Function_217(&Global_99144, 2);
	Function_43(&Global_99144, 1);
	iParam1 = 0;
	if (Function_166(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_255(int iParam0) //Position: 0xF155 / 61781
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_30(uVar0, 0x1000000) || Function_30(uVar0, 0x2000000)) || Function_30(uVar0, 0x4000000)) || !Function_30(uVar0, 0x10000000));
}

void Function_256(var uParam0, int iParam1) //Position: 0xF190 / 61840
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_257(int iParam0) //Position: 0xF19F / 61855
{
	int iVar0;
	int iVar1;
	
	if (!Function_48(iParam0))
	{
		return;
	}
	switch (Function_269(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_267(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_80(12, 1, 0, 0);
				Function_78(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_80(13, 1, 0, 0);
				Function_78(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_80(14, 1, 0, 0);
				Function_78(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_80(15, 1, 0, 0);
				Function_78(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_80(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_267(iParam0))
			{
				case 0x00000000:
					if (Function_242(iParam0) == 1)
					{
						iVar0 = Function_258(iParam0);
						if (Function_9(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_78(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_78(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_78(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_78(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_78(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_78(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_78(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_78(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_78(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_78(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_78(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_78(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_78(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_78(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_78(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_78(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_78(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_78(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_78(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_78(4, 19);
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
								Function_80(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_80(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_80(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_258(iParam0) == 0)
			{
				if (Function_242(iParam0) == 1)
				{
					Function_80(458, 1, 0, 0);
					iVar0 = Function_267(iParam0);
					if (Function_9(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_78(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_78(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_78(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_78(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_78(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_78(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_78(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_78(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_242(iParam0) == 1)
			{
				Function_80(400, 1, 0, 0);
			}
			switch (Function_267(iParam0))
			{
				case 0x00000001:
					Function_80(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_78(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_78(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_78(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_80(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_78(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_78(6, 9);
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

int Function_258(int iParam0) //Position: 0xF67B / 63099
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

void Function_259(var uParam0, int iParam1) //Position: 0xF69A / 63130
{
	struct<4> Var0;
	
	if (!Function_46(iParam1))
	{
		return;
	}
	switch (Function_269(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_260(Function_267(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_269(iParam1), Function_267(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_269(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_269(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_269(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_269(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_269(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_260(int iParam0) //Position: 0xF7C4 / 63428
{
	char* cVar0[16];
	
	if (!Function_175())
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

void Function_261() //Position: 0xF7FE / 63486
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
	PLAYSTAT_INT("HC_MONEY", Function_148(0));
	PLAYSTAT_INT("HC_FAME", Function_148(3));
	PLAYSTAT_INT("HC_HONOR", Function_148(1));
	return;
}

void Function_262() //Position: 0xF960 / 63840
{
	int iVar0;
	int iVar1;
	
	if (!Function_155(Global_10966))
	{
		return;
	}
	iVar0 = Function_148(24);
	iVar1 = Function_154(Global_10966);
	if (!Function_155(iVar0) && Function_265(iVar1) < 0)
	{
		Function_147(24, Global_10966, 0);
		Function_263(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_265(Function_154(iVar0)))
	{
		Function_147(24, Global_10966, 0);
		Function_263(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_263(int iParam0, char* cParam1) //Position: 0xF9E0 / 63968
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
		Function_264(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_264(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0xFD37 / 64823
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, 0, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

int Function_265(int iParam0) //Position: 0xFDBF / 64959
{
	if (!Function_46(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

struct<24> Function_266(char* cParam0) //Position: 0xFDD9 / 64985
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

int Function_267(int iParam0) //Position: 0x10032 / 65586
{
	if (!Function_48(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_268() //Position: 0x10052 / 65618
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_269(int iParam0) //Position: 0x1007D / 65661
{
	if (!Function_48(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_270() //Position: 0x10098 / 65688
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
			Function_271(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_271(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x102DF / 66271
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

int Function_272(int iParam0, float fParam1, bool bParam2) //Position: 0x1030B / 66315
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
	if (Global_54086[iParam0] > fParam1)
	{
		Function_91(iParam0, fParam1, 0);
	}
	Global_54086[iParam0] = fParam1;
	Function_90(iParam0);
	if (&bParam2)
	{
		Function_82(iParam0, 1, fParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

int Function_273(int iParam0) //Position: 0x10578 / 66936
{
	switch (iParam0)
	{
		case 0x00000000:
			return 662;
			break;
		
		case 0x00000001:
			return 663;
			break;
		
		case 0x00000002:
			return 665;
			break;
		
		case 0x00000003:
			return 664;
			break;
		
		case 0x00000004:
			return 666;
			break;
	}
	LOG_ERROR("should not be here");
	return 662;
}

float Function_274(vector3 vParam0) //Position: 0x105E1 / 67041
{
	if (Function_276(&vParam0))
	{
		if (Function_275(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_275(int iParam0) //Position: 0x106AE / 67246
{
	return Function_30(iParam0, 2);
}

bool Function_276(int iParam0) //Position: 0x106BC / 67260
{
	return Function_30(iParam0, 1);
}

void Function_277(var uParam0, int iParam1) //Position: 0x106CA / 67274
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

void Function_278(struct<265> Param0) //Position: 0x106EF / 67311
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			PRINT_BIG("BLK_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000001:
			PRINT_BIG("COOTS_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000004:
			PRINT_BIG("SEP_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000003:
			PRINT_BIG("TUM_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
		
		case 0x00000002:
			PRINT_BIG("ODD_GRAVEYARD_COMPLETE", 5f, 0, 2, 0);
			break;
	}
	return;
}

void Function_279(struct<265> Param0) //Position: 0x107E3 / 67555
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			iLocal_1141 = Function_296(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			iLocal_1141 = Function_292(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			iLocal_1141 = Function_288(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			iLocal_1141 = Function_284(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			iLocal_1141 = Function_280(&uLocal_1198, 0, 1, 0, 0);
			break;
	}
	return;
}

int Function_280(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1086C / 67692
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "oddgraveyardComplete", 2, 1);
	}
	Function_281(&uVar0);
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

void Function_281(int iParam0) //Position: 0x108FA / 67834
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_283(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_282(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_282(int iParam0) //Position: 0x10957 / 67927
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2897,067f, 20,62931f, 2714,683f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,039979f, 0,583588f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_283(int iParam0) //Position: 0x109CC / 68044
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 50,40506f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2898,525f, 21,02192f, 2712,473f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,282773f, 0,575102f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_284(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10A41 / 68161
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TumgraveyardComplete", 2, 1);
	}
	Function_285(&uVar0);
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

void Function_285(int iParam0) //Position: 0x10ACF / 68303
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_287(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_286(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_286(int iParam0) //Position: 0x10B2C / 68396
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3918,087f, 31,29665f, 2938,344f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,228078f, -0,797786f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_287(int iParam0) //Position: 0x10BA1 / 68513
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,20898f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3919,805f, 30,81222f, 2939,652f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,222407f, -0,792953f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_288(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10C16 / 68630
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "sepgraveyardComplete", 2, 1);
	}
	Function_289(&uVar0);
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

void Function_289(int iParam0) //Position: 0x10CA4 / 68772
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_291(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_290(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_290(int iParam0) //Position: 0x10D01 / 68865
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1389,109f, 16,60661f, 4315,52f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,088543f, -0,979924f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_291(int iParam0) //Position: 0x10D76 / 68982
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 49,90624f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1389,484f, 14,59394f, 4315,136f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,120229f, -0,992252f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_292(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10DEB / 69099
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "cootsgraveyardComplete", 2, 1);
	}
	Function_293(&uVar0);
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

void Function_293(int iParam0) //Position: 0x10E7B / 69243
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_295(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_294(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_294(int iParam0) //Position: 0x10ED8 / 69336
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1804,425f, 23,51718f, 2823,539f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,312112f, -2,467991f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_295(int iParam0) //Position: 0x10F4D / 69453
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 40,52501f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1807,816f, 23,14842f, 2825,066f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,329485f, -2,366173f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_296(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x10FC2 / 69570
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blkgraveyardComplete", 2, 1);
	}
	Function_297(&uVar0);
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

void Function_297(int iParam0) //Position: 0x11050 / 69712
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_299(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_298(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 9.0f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_298(int iParam0) //Position: 0x110AD / 69805
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(592,2622f, 91,29121f, 1199,506f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,334294f, 1,381979f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_299(int iParam0) //Position: 0x11122 / 69922
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 41,15377f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(590,5406f, 91,34983f, 1205,931f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,310153f, 1,227103f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_300(struct<5> Param0) //Position: 0x11197 / 70039
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		uVar2 = GET_CURRENT_GRINGO(&Global_54076);
		if (IS_GRINGO_VALID(&uVar2))
		{
			if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar2)), "dlc_player_burn_coffin"))
			{
				if (!iLocal_1244)
				{
					Function_391(&iLocal_1120, 0.0f);
					iLocal_1244 = 1;
				}
				else if (Function_373(&iLocal_1120, 1,2f))
				{
					iLocal_1244 = 0;
					Function_305(&Param0);
					Function_391(&iLocal_1120, 2,6f);
					Param0.f_4 = 11;
				}
			}
		}
	}
	return;
}

void Function_301(struct<17> Param0) //Position: 0x11242 / 70210
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			if (!IS_OBJECT_VALID(FIND_OBJECT_IN_OBJECT(&(Local_1210[iVar04]), "LootCoffin")))
			{
				Local_1210[iVar04].f_8 = 1;
				Function_302();
				iLocal_1190++;
				if (iLocal_1190 <= 2 && !iLocal_1189)
				{
					iLocal_1189 = 1;
					Param0.f_16++;
				}
			}
		}
		iVar0++;
	}
	return;
}

void Function_302() //Position: 0x112B8 / 70328
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	Function_303(Function_108(), &uVar0, &iVar7);
	iVar8 = 0;
	while (iVar8 <= iVar7)
	{
		if (uVar0[iVar8] != 4294967295)
		{
			if (_GET_AMMO_AMOUNT(Function_108(), GET_AMMO_ENUM(uVar0[iVar8]), 1) > _GET_MAX_AMMO_AMOUNT(Function_108(), GET_AMMO_ENUM(uVar0[iVar8])))
			{
				_ADD_AMMO_OF_TYPE(Function_108(), GET_AMMO_ENUM(uVar0[iVar8]), 6.0f, 1, 1);
			}
		}
		iVar8++;
	}
	return;
}

void Function_303(var uParam0, int[] iParam1, int iParam2) //Position: 0x11322 / 70434
{
	iParam2 = 0;
	if (Function_304(&uParam0, 39) != 4294967295)
	{
		iParam1[iParam2] = 0;
		iParam2++;
	}
	if (Function_304(&uParam0, 41) != 4294967295)
	{
		iParam1[iParam2] = 8;
		iParam2++;
	}
	if (Function_304(&uParam0, 40) != 4294967295)
	{
		iParam1[iParam2] = 4;
		iParam2++;
	}
	if (Function_304(&uParam0, 42) != 4294967295)
	{
		iParam1[iParam2] = 12;
		iParam2++;
	}
	if (Function_304(&uParam0, 43) != 4294967295)
	{
		iParam1[iParam2] = 17;
		iParam2++;
	}
	if (Function_304(&uParam0, 44) != 4294967295)
	{
		iParam1[iParam2] = 19;
		iParam2++;
	}
	return;
}

int Function_304(var uParam0, int iParam1) //Position: 0x113F1 / 70641
{
	int iVar0;
	
	iVar0 = ACTOR_GET_BEST_WEAPON_OF_TYPE(&uParam0, iParam1);
	return iVar0;
}

void Function_305(struct<265> Param0) //Position: 0x11403 / 70659
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			GIVE_WEAPON_TO_ACTOR(&Global_54076, 8, 0.0f, 1, 0);
			_ADD_AMMO_OF_TYPE(&Global_54076, GET_AMMO_ENUM(8), 18.0f, 0, 1);
			break;
	}
	return;
}

bool Function_306() //Position: 0x1143C / 70716
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!StackVal)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void Function_307(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0x11464 / 70756
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, iVar0);
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
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &uParam4);
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
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || uParam6));
			}
		}
		iVar0++;
	}
}

void Function_308(float fParam0) //Position: 0x11574 / 71028
{
	switch (fParam0)
	{
		case 0x00000000:
			Function_176("GY_Blackwater_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000001:
			Function_176("GY_coots_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000002:
			Function_176("GY_Oddfellows_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000003:
			Function_176("GY_Tumbleweed_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
		
		case 0x00000004:
			Function_176("GY_Sepulcro_boss", 0x40f00000, 1, 2, 0, 0, 0, 0);
			break;
	}
	return;
}

void Function_309(struct<265> Param0) //Position: 0x11656 / 71254
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			Function_317();
			break;
		
		case 0x00000001:
			Function_316();
			break;
		
		case 0x00000004:
			Function_315();
			break;
		
		case 0x00000003:
			Function_314();
			break;
		
		case 0x00000002:
			Function_310();
			break;
	}
	return;
}

void Function_310() //Position: 0x116A3 / 71331
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Pturner1", "RCMBoss_Pturner1", 0, 3, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_311(int iParam0) //Position: 0x116EC / 71404
{
	Function_312(0, &Global_54076, iParam0, 0);
	Function_312(1, &iLocal_1171, iParam0, 0);
	return;
}

void Function_312(int iParam0, int iParam1, var uParam2, int iParam3) //Position: 0x11708 / 71432
{
	var uVar0;
	
	iParam3 = &iParam3;
	if (Function_30(uParam2, Function_313(iParam0)))
	{
		uVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(uVar0, &iParam1, 0);
	}
}

int Function_313(bool bParam0) //Position: 0x11730 / 71472
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_314() //Position: 0x1173C / 71484
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_JimySaint1", "RCMBoss_JimySaint1", 0, 3, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_315() //Position: 0x11789 / 71561
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_DeSanta1", "RCMBoss_DeSanta1", 0, 3, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_316() //Position: 0x117D2 / 71634
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_MissHorlk1", "RCMBoss_MissHorlk1", 0, 3, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_317() //Position: 0x1181F / 71711
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(1, "RCMBoss_Mordecai1", "RCMBoss_Mordecai1", 0, 3, 1, 0, 1);
		Function_311(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_318(struct<265> Param0) //Position: 0x1186A / 71786
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			iLocal_1141 = Function_337(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000001:
			iLocal_1141 = Function_333(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000004:
			iLocal_1141 = Function_327(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000003:
			iLocal_1141 = Function_323(&uLocal_1198, 0, 1, 0, 0);
			break;
		
		case 0x00000002:
			iLocal_1141 = Function_319(&uLocal_1198, 0, 1, 0, 0);
			break;
	}
	return;
}

int Function_319(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x118F3 / 71923
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "oddBossFightGraveyard", 2, 1);
	}
	Function_320(&uVar0);
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

void Function_320(int iParam0) //Position: 0x11982 / 72066
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_322(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_321(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_321(int iParam0) //Position: 0x119DF / 72159
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,66159f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2903,974f, 19,79888f, 2710,857f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,150541f, 0,507457f, 0,004521f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_322(int iParam0) //Position: 0x11A58 / 72280
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,66233f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-2904,165f, 19,51034f, 2708,177f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,102399f, 1,165359f, 0,004493f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_323(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11AD1 / 72401
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "TumBossFightGraveyard", 2, 1);
	}
	Function_324(&uVar0);
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

void Function_324(int iParam0) //Position: 0x11B60 / 72544
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_326(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_325(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_325(int iParam0) //Position: 0x11BBD / 72637
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 31,86192f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3911,766f, 31,83612f, 2921,979f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,078771f, 2,88158f, 0,004278f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_326(int iParam0) //Position: 0x11C36 / 72758
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 25,76166f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-3913,444f, 31,26865f, 2924,223f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,117483f, -2,70611f, 0,004294f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_327(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11CAF / 72879
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 4, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "SepBossFightGraveyard", 4, 1);
	}
	Function_328(&uVar0);
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

void Function_328(int iParam0) //Position: 0x11D3E / 73022
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_332(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_331(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 2);
	Function_330(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 3);
	Function_329(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,001f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN(&iParam0, 0, 1, 4,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 2, 0,001f, 2);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_OUT(&iParam0, 2, 3, 2,5f, 3, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 3, 1.0f, 4);
	return;
}

void Function_329(int iParam0) //Position: 0x11DD7 / 73175
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,537f, 13,61537f, 4300,938f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,525523f, 1,490034f, 0,001164f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_330(int iParam0) //Position: 0x11E50 / 73296
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,537f, 13,61537f, 4300,938f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,373518f, 1,402987f, 0,001081f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_331(int iParam0) //Position: 0x11EC9 / 73417
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 34,77014f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,477f, 13,66733f, 4299,932f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,072472f, 1,915836f, 0,001009f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_332(int iParam0) //Position: 0x11F42 / 73538
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 25,45625f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1383,713f, 13,89411f, 4300,767f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(-0,043377f, 1,765097f, -0,000861f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_333(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x11FBB / 73659
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "cootsBossFightGraveyard", 2, 1);
	}
	Function_334(&uVar0);
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

void Function_334(int iParam0) //Position: 0x1204C / 73804
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_336(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_335(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 7,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_335(int iParam0) //Position: 0x120A9 / 73897
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 35,26746f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1763,659f, 25,13008f, 2844,199f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,133221f, -2,84744f, 0,000148f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_336(int iParam0) //Position: 0x12122 / 74018
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 23,50987f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(-1763,345f, 24,48004f, 2845,35f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,039157f, -2,624838f, 0,000147f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

var Function_337(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x1219B / 74139
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blkBossFightGraveyard", 2, 1);
	}
	Function_338(&uVar0);
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

void Function_338(int iParam0) //Position: 0x1222A / 74282
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_340(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_339(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 8,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,5f, 2);
	return;
}

void Function_339(int iParam0) //Position: 0x12287 / 74375
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 32,89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(530,6407f, 95,02366f, 1201,827f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,183638f, -1,091771f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_340(int iParam0) //Position: 0x122FC / 74492
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 32,89204f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(531,275f, 94,5818f, 1201,307f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,145415f, -1,242507f, 0.0f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_341(struct<265> Param0) //Position: 0x12371 / 74609
{
	Function_343(&iLocal_1171, 2, 0);
	TASK_MELEE_ATTACK(&iLocal_1171, &Global_54076, -1.0f);
	SET_ACTOR_INVULNERABILITY(&iLocal_1171, 0);
	Function_342(&iLocal_1171, 1, 1, 1, 1, 0, 1);
	ENABLE_MOVER(&iLocal_1171);
	switch (Param0.f_264)
	{
		case 0x00000000:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_1171, 392, 0, 2, 0), "BLK_BOSS_NAME");
			break;
		
		case 0x00000001:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_1171, 392, 0, 2, 0), "COOTS_BOSS_NAME");
			break;
		
		case 0x00000002:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_1171, 392, 0, 2, 0), "ODD_BOSS_NAME");
			break;
		
		case 0x00000003:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_1171, 392, 0, 2, 0), "TUM_BOSS_NAME");
			break;
		
		case 0x00000004:
			SET_BLIP_NAME(ADD_BLIP_FOR_ACTOR(&iLocal_1171, 392, 0, 2, 0), "SEP_BOSS_NAME");
			break;
	}
	return;
}

void Function_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x12482 / 74882
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(&iParam0, &iParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(&iParam0, &iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(&iParam0, &iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(&iParam0, &iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(&iParam0, &iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(&iParam0, &iParam4);
	}
}

void Function_343(int iParam0, int iParam1, bool bParam2) //Position: 0x124CC / 74956
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	var uVar7;
	
	SET_ALLOW_EXECUTE(&iParam0, 1);
	AI_CLEAR_DONT_HARM_ACTOR(&iParam0);
	switch (&iParam1)
	{
		case 0x00000001:
			GET_POSITION(&iParam0, &Var0);
			GET_ACTOR_AXIS(&iParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			FIND_GROUND_INTERSECTION(&Var0, 10.0f, &Var2, &Var4);
			Var2.f_4 = (StackVal + 0,05f);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_37(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_36();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_37(), Var2, Function_36());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&iParam0, &Var0);
			GET_ACTOR_AXIS(&iParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_37(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_36();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_37(), Var0, Function_36());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, 1, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
	}
	if (!&bParam2)
	{
		if (!DECOR_CHECK_EXIST(&iParam0, "WakeUp"))
		{
			DECOR_SET_BOOL(&iParam0, "WakeUp", 1);
		}
	}
	else if (!DECOR_CHECK_EXIST(&iParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&iParam0, "WakeUpFast", 1);
	}
	return;
}

bool Function_344(int iParam0, float fParam1) //Position: 0x12698 / 75416
{
	if (Function_373(&iParam0, fParam1))
	{
		Function_345(&iParam0);
		return 1;
	}
	return 0;
}

void Function_345(vector3 vParam0) //Position: 0x126B2 / 75442
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

int Function_346(struct<261> Param0) //Position: 0x126C9 / 75465
{
	if (!iLocal_1168)
	{
		Function_371(&Param0);
		iLocal_1168 = 1;
	}
	if (Param0 <= Param0.f_260 && !IS_PLAYER_DEADEYE(0))
	{
		Function_235(&iLocal_1173, -1.0f);
		Function_235(&iLocal_1120, -2.0f);
		Param0.f_4 = 7;
	}
	Function_355(&Param0);
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 32))
	{
		Param0.f_24++;
		Function_351(&Param0 + 32);
		Function_349(&Param0, EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 40));
		EVENT_TRAP_CLEAR_EVENTS(&Param0 + 32);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 32);
		EVENT_TRAP_CLEAR_EVENTS(&Param0 + 40);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 40);
	}
	if (Param0.f_60 >= Param0.f_64)
	{
		Function_347(&Param0);
	}
	Function_301(&Param0);
	if (iLocal_1167 && Function_306())
	{
		Function_176("GY_objective_1", 0x40f00000, 1, 2, 0, 0, 0, 0);
		iLocal_1167 = 0;
	}
	return 0;
}

void Function_347(struct<21> Param0) //Position: 0x127AD / 75693
{
	Function_235(&iLocal_1173, -5.0f);
	Function_348(&Param0);
	Param0++;
	if (Param0.f_16 <= Param0.f_20)
	{
		Param0.f_16++;
	}
	return;
}

void Function_348(struct<65> Param0) //Position: 0x127E7 / 75751
{
	Param0.f_64 = (Param0.f_64 + (50 * Param0));
	return;
}

void Function_349(var uParam0, bool bParam1) //Position: 0x127FF / 75775
{
	int iVar0;
	
	iVar0 = 0;
	switch (StackVal)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			iVar0 = 5;
			break;
		
		case 0x00000002:
			iVar0 = 5;
			break;
		
		case 0x00000003:
			iVar0 = 10;
			break;
		
		case 0x00000004:
			iVar0 = 10;
			break;
		
		case 0x00000005:
			iVar0 = 15;
			break;
		
		case 0x00000006:
			iVar0 = 20;
			break;
		
		case 0x00000007:
			iVar0 = 25;
			break;
		
		case 0x00000008:
			iVar0 = 30;
			break;
		
		case 0x00000009:
			iVar0 = 40;
			break;
		
		default:
			if (StackVal <= 15)
			{
				iVar0 = 50;
			}
			else
			{
				iVar0 = 100;
			}
			break;
	}
	if (bParam1)
	{
		Function_350(&uParam0, ((10 + iVar0) * CEIL(1,25f)));
	}
	else
	{
		Function_350(&uParam0, (10 + iVar0));
	}
	return;
}

void Function_350(struct<61> Param0) //Position: 0x128D0 / 75984
{
	Param0.f_60 = (&iParam1 + Param0.f_60);
	return;
}

void Function_351(var uParam0) //Position: 0x128E4 / 76004
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_1198);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&uParam0);
		EVENT_TRAP_CLEAR_EVENTS(&uParam0);
		return;
	}
	ITERATE_IN_EVENT_TRAP(&uVar0, &uParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 3);
	iVar4 = START_OBJECT_ITERATOR(&uVar0);
	if (!IS_OBJECT_VALID(&iVar4))
	{
	}
	while (IS_OBJECT_VALID(&iVar4))
	{
		uVar2 = GET_EVENT_FROM_OBJECT(&iVar4);
		uVar3 = GET_EVENT_TARGET_AS_OBJECT(&uVar2);
		iVar1 = GET_ACTOR_FROM_OBJECT(&uVar3);
		if (IS_OBJECT_VALID(&uVar3))
		{
			if (IS_ACTOR_VALID(&iVar1))
			{
				if ((Function_354(&iVar1) || Function_353(&iVar1)) || Function_352(&iVar1))
				{
					iLocal_1165 = (iLocal_1165 - 1);
				}
			}
			else
			{
				LOG_ERROR("our actor is not valid?!");
			}
		}
		iVar4 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

bool Function_352(int iParam0) //Position: 0x129BF / 76223
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1222 && iVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

int Function_353(int iParam0) //Position: 0x129E0 / 76256
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1214 && iVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

int Function_354(int iParam0) //Position: 0x12A01 / 76289
{
	int iVar0;
	
	iVar0 = GET_ACTOR_ENUM(&iParam0);
	if (iVar0 <= 1204 && iVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

void Function_355(struct<265> Param0) //Position: 0x12A22 / 76322
{
	int iVar1;
	
	if (Function_274(&iLocal_1173) < 0.0f)
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&Param0 + 8) <= Param0.f_16)
		{
			Function_365(&Param0);
			if (iLocal_1165 <= Param0.f_264)
			{
				if (Param0 <= 4 && iLocal_1165 > Param0.f_264)
				{
					iVar1 = 2;
				}
				else if (Param0 <= 3 && iLocal_1165 > Param0.f_264)
				{
					iVar1 = 1;
				}
				else if (Param0 <= 2 && iLocal_1165 > Param0.f_264)
				{
					iVar1 = 0;
				}
				else
				{
					iVar1 = 4294967295;
				}
				if (iLocal_1166 >= iVar1)
				{
					iLocal_1166 = 0;
				}
				if (iVar1 != 4294967295)
				{
					switch (iLocal_1166)
					{
						case 0x00000000:
							Function_361(&Param0, bLocal_1137);
							Function_359(&bLocal_1137, 1214, 1221);
							break;
						
						case 0x00000001:
							Function_361(&Param0, bLocal_1138);
							Function_359(&bLocal_1138, 1204, 1213);
							break;
						
						case 0x00000002:
							Function_361(&Param0, bLocal_1139);
							Function_359(&bLocal_1139, 1222, 1227);
							break;
					}
					iLocal_1197++;
					iLocal_1165++;
					iLocal_1166++;
				}
			}
			Function_358(&Param0);
			Function_235(&iLocal_1173, -0,5f);
			iLocal_1197++;
			if (iLocal_1197 >= 20)
			{
				Function_356(StackVal, *(&Param0 + 48), 20.0f);
				iLocal_1197 = 0;
			}
		}
	}
	return;
}

void Function_356(struct<2> Param0, bool bParam2) //Position: 0x12B68 / 76648
{
	var uVar0;
	bool bVar1;
	
	uVar0 = CREATE_OBJECT_ITERATOR(GET_GC_LAYOUT());
	ITERATE_IN_LAYOUT(&uVar0, GET_GC_LAYOUT());
	bVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&bVar1))
	{
		Function_406(&bVar1);
		if ((GET_OBJECT_TYPE(&bVar1) != 29 && VDIST(Param0, Function_406(&bVar1)) >= bParam2) && !Function_357(&bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
		{
			DESTROY_OBJECT(&bVar1);
		}
		bVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

bool Function_357(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x12BDC / 76764
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

var Function_358(int iParam0) //Position: 0x12BFC / 76796
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= SQUAD_GET_SIZE(&iParam0 + 8))
	{
		if (IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, iVar0)))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 8, iVar0);
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
			Function_350(&iParam0, 40);
		}
		iVar0++;
	}
	return "";
}

void Function_359(bool bParam0, int iParam1, bool bParam2) //Position: 0x12C51 / 76881
{
	STREAMING_EVICT_ACTOR(bParam0, 4294967295);
	bParam0 = Function_360(iParam1, bParam2);
	STREAMING_REQUEST_ACTOR(bParam0, 1, false);
	return;
}

var Function_360(int iParam0, bool bParam1) //Position: 0x12C73 / 76915
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 4294967295)
	{
		return 4294967295;
	}
	if (bParam1 > 1311)
	{
		return 4294967295;
	}
	iVar1 = RAND_INT_RANGE(iParam0, bParam1);
	iVar0 = iVar1;
	return iVar0;
}

void Function_361(int iParam0, bool bParam1) //Position: 0x12C9A / 76954
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Function_364();
	Function_406(&iParam0 + 116[iVar1]);
	Function_363(&iParam0 + 116[iVar1]);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), bParam1, Function_406(&iParam0 + 116[iVar1]), Function_363(&iParam0 + 116[iVar1]));
	Function_362(&uVar0, 1, 1);
	SQUAD_JOIN(&uVar0, &iParam0 + 8);
	if (Function_352(&uVar0))
	{
		TASK_GO_NEAR_ACTOR(&uVar0, &Global_54076, 20.0f, 2);
	}
	else
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(0, &Global_54076, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&uVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
	}
	return;
}

void Function_362(var uParam0, int iParam1, bool bParam2) //Position: 0x12D40 / 77120
{
	switch (&iParam1)
	{
		case 0x00000000:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/PlayDead"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/PlayDead");
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (!IS_ACTION_NODE_PLAYING(&uParam0, "zombie/GroundSpawn"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&uParam0, "zombie/GroundSpawn");
			}
			break;
	}
	if (&iParam1 != 4294967295)
	{
		if (&bParam2)
		{
			Function_343(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

struct<8> Function_363(int iParam0) //Position: 0x12DFD / 77309
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

var Function_364() //Position: 0x12E26 / 77350
{
	int iVar0;
	
	iVar0 = RAND_INT_RANGE(0, 14);
	if (iLocal_1191 != iVar0)
	{
		iLocal_1191 = iVar0;
	}
	else
	{
		iVar0++;
		if (iVar0 >= 14)
		{
			iVar0 = 0;
		}
		iLocal_1191 = iVar0;
	}
	return iVar0;
}

void Function_365(bool bParam0) //Position: 0x12E5B / 77403
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (STREAMING_IS_ACTOR_LOADED(iLocal_1124[iLocal_1140], 4294967295))
	{
		iVar1 = Function_364();
		Function_406(&bParam0 + 116[iVar1]);
		Function_363(&bParam0 + 116[iVar1]);
		iVar0 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), iLocal_1124[iLocal_1140], Function_406(&bParam0 + 116[iVar1]), Function_363(&bParam0 + 116[iVar1]));
		Function_367(&iVar0, 1254, 4294967295, 4294967295, 2, 1, 1, 1);
		SQUAD_JOIN(&iVar0, &bParam0 + 8);
		DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
		iVar2 = TASK_SEQUENCE_OPEN();
		if (RAND_INT_RANGE(0, 100000) >= 50000)
		{
			TASK_GO_NEAR_ACTOR(0, &Global_54076, 8.0f, 1);
		}
		TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
		TASK_SEQUENCE_CLOSE();
		TASK_SEQUENCE_PERFORM(&iVar0, iVar2);
		TASK_SEQUENCE_RELEASE(iVar2, 1);
		Function_366();
		iLocal_1140++;
		if (iLocal_1140 > 5)
		{
			iLocal_1140 = 0;
		}
	}
	else
	{
		iLocal_1140++;
		if (iLocal_1140 > 5)
		{
			iLocal_1140 = 0;
		}
	}
	return;
}

void Function_366() //Position: 0x12F2D / 77613
{
	iLocal_1185++;
	if (iLocal_1185 >= (GET_NUM_ACTORENUMS_IN_POPULATION(&(Global_46972[0])) - 1))
	{
		iLocal_1185 = 0;
	}
	STREAMING_EVICT_ACTOR(iLocal_1124[iLocal_1140], 4294967295);
	iLocal_1124[iLocal_1140] = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), iLocal_1185);
	STREAMING_REQUEST_ACTOR(iLocal_1124[iLocal_1140], 1, false);
	return;
}

void Function_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x12F7F / 77695
{
	var uVar0;
	
	if (Function_40(&iParam0) && !Function_38(&iParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&iParam0, &iParam1);
	if (&iParam2 == 4294967294 && &iParam3 == 4294967294)
	{
		if (&iParam2 == 4294967295)
		{
			iParam2 = RAND_INT_RANGE(0, 4);
		}
		if (&iParam3 == 4294967295)
		{
			iParam3 = RAND_INT_RANGE(0, 4);
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
	Function_369(&iParam0);
	DECOR_SET_BOOL(&iParam0, "Zombie", 1);
	Function_368(&iParam0);
	SET_ACTOR_ALLOW_DISARM(&iParam0, 0);
	SET_CRIPPLE_ENABLE(&iParam0, 0);
	SET_CRIPPLE_FLAG(&iParam0, 0);
	SET_ALLOW_COLD_WEATHER_BREATH(&iParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&iParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&iParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iParam0, 0);
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
		DECOR_SET_BOOL(&iParam0, "FastZombie", 1);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&iParam0, "BruiserZombie", 1);
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
	Function_362(&iParam0, &iParam4, &iParam5);
}

void Function_368(int iParam0) //Position: 0x1321C / 78364
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

void Function_369(int iParam0) //Position: 0x13253 / 78419
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(&iParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(&iParam0, 0,4f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&iParam0, 0,6f, 1,1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(&iParam0, 1,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 29, 3,5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&iParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&iParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&iParam0, 18, 0);
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
	Function_370(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_370(var uParam0, bool bParam1) //Position: 0x13611 / 79377
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

void Function_371(int iParam0) //Position: 0x13634 / 79412
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Function_406(&iParam0 + 68[iVar0 + 1]);
		Function_363(&iParam0 + 68[iVar0 + 1]);
		Local_1210[iVar04] = CREATE_PROP_IN_LAYOUT(&uLocal_1198, Function_37(), "$/fragments/p_gen_coffin04x", Function_406(&iParam0 + 68[iVar0 + 1]), Function_363(&iParam0 + 68[iVar0 + 1]), 1);
		SNAP_OBJECT_TO_GROUND(&(Local_1210[iVar04]), 5.0f, 1, 1092616192);
		Function_406(&(Local_1210[iVar04]));
		CLEAR_AREA_OF_GRASS(Function_406(&(Local_1210[iVar04])), 2.0f);
		Function_406(&(Local_1210[iVar04]));
		CLEAR_AREA_OF_TREE_TYPE(Function_406(&(Local_1210[iVar04])), 2.0f, "");
		Local_1210[iVar04].f_8 = 0;
		SET_PROP_AI_OBSTACLE_ENABLED(&(Local_1210[iVar04]), 1);
		uVar1 = ADD_BLIP_FOR_OBJECT(&(Local_1210[iVar04]), 330, 0f, 2, 0);
		SET_BLIP_SCALE(&uVar1, 0,75f);
		SET_BLIP_NAME(&uVar1, "blip_coffin");
		Function_406(&iParam0 + 68[iVar0 + 1]);
		Function_363(&iParam0 + 68[iVar0 + 1]);
		(&Local_1210[iVar04] + 16) = CREATE_VOLUME_IN_LAYOUT(StackVal, &uLocal_1198, Function_37(), 2,802597E-45f, Function_406(&iParam0 + 68[iVar0 + 1]), Function_363(&iParam0 + 68[iVar0 + 1]), Vector(3.0f, 1,5f, 3.0f));
		*(&Local_1210[iVar04] + 24) = CREATE_EVENT_TRAP(Function_37(), 17, &uLocal_1198);
		EVENT_TRAP_STORE_EVENTS(&Local_1210[iVar04] + 24, 1);
		EVENT_TRAP_ON_VOLUME(&Local_1210[iVar04] + 24, &Local_1210[iVar04] + 16);
		iVar0++;
	}
	return;
}

void Function_372() //Position: 0x13791 / 79761
{
	struct<2> Var0;
	int iVar2;
	bool bVar3;
	
	Function_165(&Global_54076);
	Var0 = Function_165(&Global_54076);
	iVar2 = RAND_INT_RANGE(50, 100);
	bVar3 = Function_41();
	if (bVar3)
	{
		iVar2 *= 1;
	}
	else
	{
		iVar2 = (iVar2 * 4294967295);
	}
	Var0 = (Var0 + IntToFloat(iVar2));
	Var0.f_8 = (StackVal + IntToFloat(iVar2));
	if (IS_OBJECT_VALID(&iLocal_1200))
	{
		UNK_0x7246F438(&iLocal_1200);
	}
	iLocal_1200 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_1198, Function_37(), "env_lightningForked_stormy", Var0);
	UNK_0x6745191B(StackVal, &iLocal_1200, Vector(0.0f, 0.0f, 0.0f));
	return;
}

bool Function_373(int iParam0, float fParam1) //Position: 0x13823 / 79907
{
	if (Function_276(&iParam0))
	{
		if (Function_274(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_374(struct<17> Param0) //Position: 0x13841 / 79937
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (StackVal && !IS_OBJECT_VALID(&Local_1210[iVar04] + 24))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&Local_1210[iVar04] + 24))
			{
				if (Function_375(&Local_1210[iVar04] + 24))
				{
					Local_1210[iVar04].f_8 = 1;
					Function_302();
					DESTROY_OBJECT(FIND_OBJECT_IN_OBJECT(&(Local_1210[iVar04]), "LootCoffin"));
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(&(Local_1210[iVar04])));
					EVENT_TRAP_CLEAR_TRAP_FLAG(&Local_1210[iVar04] + 24);
					EVENT_TRAP_CLEAR_EVENTS(&Local_1210[iVar04] + 24);
					iVar1 = &Local_1210[iVar04];
					iVar2 = 0;
					if (GET_OBJECT_TYPE(&iVar1) == 17)
					{
						Function_406(&iVar1);
						UNK_0x6745191B(StackVal, CREATE_RMPTFX_EMITTER_IN_LAYOUT(&uLocal_1198, Function_37(), "fire_zombie_02_dataSphere", Function_406(&iVar1)), Vector(0.0f, 0.0f, 0.0f));
					}
					iLocal_1190++;
					if (iLocal_1190 <= 2 && !iLocal_1189)
					{
						iLocal_1189 = 1;
						Param0.f_16++;
					}
				}
			}
		}
		iVar0++;
	}
	return;
}

bool Function_375(int iParam0) //Position: 0x13956 / 80214
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&uLocal_1198);
	if (!IS_ITERATOR_VALID(&uVar0))
	{
		DESTROY_ITERATOR(&uVar0);
		EVENT_TRAP_CLEAR_TRAP_FLAG(&iParam0);
		EVENT_TRAP_CLEAR_EVENTS(&iParam0);
		return 0;
	}
	ITERATE_IN_EVENT_TRAP(&uVar0, &iParam0);
	uVar2 = START_OBJECT_ITERATOR(&uVar0);
	if (!IS_OBJECT_VALID(&uVar2))
	{
	}
	while (IS_OBJECT_VALID(&uVar2))
	{
		uVar1 = GET_EVENT_FROM_OBJECT(&uVar2);
		if (DECOR_GET_STRING_HASH(&uVar1, "ExplosionType") == STRING_TO_HASH("FireBottleExplosion"))
		{
			DESTROY_ITERATOR(&uVar0);
			return 1;
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return 0;
}

int Function_376() //Position: 0x139FF / 80383
{
	if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
	{
		if (CUTSCENE_MANAGER_GET_CURRENT_TIME() > 1,5f)
		{
			return 0;
		}
	}
	if (HUD_IS_FADING())
	{
		return 0;
	}
	if (UNK_0xDA674AE0("@UI.ACCEPT", 1, 0))
	{
		if (!UI_ISACTIVE("Cutscenes_Paused"))
		{
			if (!UI_ISACTIVE("LoadingScreen") && !UI_ISACTIVE("PauseScene"))
			{
				Function_80(20, 1, 0, 0);
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 1);
				Function_377(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
				bLocal_1186 = true;
				STREAMING_RELEASE_MAIN_POI();
				return 1;
			}
		}
	}
	return 0;
}

void Function_377(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5) //Position: 0x13A9A / 80538
{
	if (!HUD_IS_FADED())
	{
		if (!HUD_IS_FADING())
		{
			HUD_SET_FADE_COLOR(fParam0, fParam1, fParam2, fParam3);
			HUD_FADE_OUT(fParam4, 1.0f, &uParam5);
		}
	}
}

void Function_378(struct<265> Param0) //Position: 0x13AC4 / 80580
{
	switch (Param0.f_264)
	{
		case 0x00000000:
			Function_383(&Param0 + 248);
			break;
		
		case 0x00000001:
			Function_382(&Param0 + 248);
			break;
		
		case 0x00000002:
			Function_381(&Param0 + 248);
			break;
		
		case 0x00000003:
			Function_380(&Param0 + 248);
			break;
		
		case 0x00000004:
			Function_379(&Param0 + 248);
			break;
	}
	SET_ACTOR_MAX_HEALTH(&iLocal_1171, 35.0f);
	SET_ACTOR_HEALTH(&iLocal_1171, 35.0f);
	DECOR_SET_BOOL(&iLocal_1171, "CanBeLasso", 0);
	SET_ACTOR_INVULNERABILITY(&iLocal_1171, 1);
	Function_342(&iLocal_1171, 0, 1, 1, 1, 0, 1);
	SUSPEND_MOVER(&iLocal_1171);
	STREAMING_ENABLE_FORCE_FRAGMENT_HIGH_LOD(GET_OBJECT_FROM_ACTOR(&iLocal_1171));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_1171, false);
	Function_406(&Param0 + 248);
	STREAMING_LOAD_BOUNDS(Function_406(&Param0 + 248), 3.0f, 0);
	return;
}

void Function_379(int iParam0) //Position: 0x13B99 / 80793
{
	Function_406(&iParam0);
	Function_363(&iParam0);
	iLocal_1171 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), 556, Function_406(&iParam0), Function_363(&iParam0));
	Function_367(&iLocal_1171, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_380(int iParam0) //Position: 0x13BCC / 80844
{
	Function_406(&iParam0);
	Function_363(&iParam0);
	iLocal_1171 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), 357, Function_406(&iParam0), Function_363(&iParam0));
	Function_367(&iLocal_1171, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_381(int iParam0) //Position: 0x13BFF / 80895
{
	Function_406(&iParam0);
	Function_363(&iParam0);
	iLocal_1171 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), 182, Function_406(&iParam0), Function_363(&iParam0));
	Function_367(&iLocal_1171, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_382(int iParam0) //Position: 0x13C31 / 80945
{
	Function_406(&iParam0);
	Function_363(&iParam0);
	iLocal_1171 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), 332, Function_406(&iParam0), Function_363(&iParam0));
	Function_367(&iLocal_1171, 1254, 4294967295, 4294967295, 2, 0, 1, 1);
	return;
}

void Function_383(bool bParam0) //Position: 0x13C64 / 80996
{
	Function_406(&bParam0);
	Function_363(&bParam0);
	iLocal_1171 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), 1220, Function_406(&bParam0), Function_363(&bParam0));
	Function_362(&iLocal_1171, 2, 0);
	SET_ACTOR_PROOF(&iLocal_1171, 4194304);
	return;
}

var Function_384(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x13C9B / 81051
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
		Function_389(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_388())
		{
			return "";
		}
	}
	if (!Function_386())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_233();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_406(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_406(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_406(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_406(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_385(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_385(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
				if (!Function_166(StackVal, Var8))
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_37(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, 1, 1092616192);
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
		Function_342(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

var Function_385(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13FF8 / 81912
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

bool Function_386() //Position: 0x1409A / 82074
{
	if (Function_387() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_387() //Position: 0x140B0 / 82096
{
	return Global_21369.f_244;
}

bool Function_388() //Position: 0x140BB / 82107
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_389(var uParam0, bool bParam1, bool bParam2) //Position: 0x140DB / 82139
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_217(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_217(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_390(int iParam0) //Position: 0x1410A / 82186
{
	if (!Function_276(&iParam0))
	{
		Function_235(&iParam0, 0.0f);
	}
	return;
}

void Function_391(int iParam0, int iParam1) //Position: 0x14121 / 82209
{
	if (!Function_276(&iParam0))
	{
		Function_235(&iParam0, iParam1);
	}
	return;
}

var Function_392(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0x14139 / 82233
{
	var uVar0;
	
	if (&bParam2)
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_37(), 2, 1);
	}
	else
	{
		uVar0 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, "blkFirstTimeGraveyard", 2, 1);
	}
	Function_393(&uVar0);
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

void Function_393(int iParam0) //Position: 0x141C8 / 82376
{
	var uVar0;
	
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 0);
	Function_395(&uVar0);
	uVar0 = GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&iParam0, 1);
	Function_394(&uVar0);
	CUTSCENEOBJECT_SET_RECENTER_GAMECAM(&iParam0, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 0, 0,5f, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_EASE_IN_OUT(&iParam0, 0, 1, 8,5f, 1, 0);
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(&iParam0, 1, 0,09f, 2);
	return;
}

void Function_394(int iParam0) //Position: 0x14225 / 82469
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,71252f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(542,7578f, 93,98339f, 1198,781f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,325511f, 2,072496f, -2E-06f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_395(int iParam0) //Position: 0x1429E / 82590
{
	SET_CAMERASHOT_PERSPECTIVE(&iParam0, 1);
	SET_CAMERASHOT_FOV(&iParam0, 29,73172f);
	SET_CAMERASHOT_NEAR_CLIP_PLANE(&iParam0, 0,1f);
	SET_CAMERASHOT_COLLISION_PARAMETERS(&iParam0, 0,3f, 1);
	SET_CAMERASHOT_COLLISION_ENABLED(&iParam0, 0);
	SET_CAMERASHOT_POSITION(StackVal, &iParam0, Vector(542,1422f, 93,89145f, 1200,29f));
	SET_CAMERASHOT_ORIENTATION(StackVal, &iParam0, Vector(0,249336f, 1,708657f, -2E-06f), 1);
	RESET_CAMERASHOT_TARGET(&iParam0, 1);
	RESET_CAMERASHOT_TARGETDOF(&iParam0);
	return;
}

void Function_396(bool bParam0) //Position: 0x14317 / 82711
{
	var uVar0;
	
	Function_406(&bParam0 + 116[0]);
	Function_363(&bParam0 + 116[0]);
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uLocal_1198, Function_37(), iLocal_1124[iLocal_1140], Function_406(&bParam0 + 116[0]), Function_363(&bParam0 + 116[0]));
	Function_367(&uVar0, 1254, 4294967295, 4294967295, 1, 1, 1, 1);
	SQUAD_JOIN(&uVar0, &bParam0 + 8);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&uVar0);
	TASK_GO_NEAR_ACTOR(&uVar0, &Global_54076, 3.0f, 1);
	Function_366();
	iLocal_1140++;
	return;
}

bool Function_397() //Position: 0x14382 / 82818
{
	var uVar0;
	
	uVar0 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar0)), "dlc_player_burn_coffin"))
		{
			if (!iLocal_1245)
			{
				Function_391(&iLocal_1120, 0.0f);
				iLocal_1245 = 1;
			}
			else if (Function_373(&iLocal_1120, 1,5f))
			{
				iLocal_1245 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void Function_398() //Position: 0x143ED / 82925
{
	var uVar0;
	
	uVar0 = GET_CURRENT_GRINGO(&Global_54076);
	if (IS_GRINGO_VALID(&uVar0))
	{
		if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(GET_OBJECT_FROM_GRINGO(&uVar0)), "dlc_player_burn_coffin"))
		{
			iLocal_1187 = 1;
			SET_ACTOR_PROOF(&Global_54076, 16);
			fLocal_1188 = GET_CURRENT_GAME_TIME();
		}
	}
	if (iLocal_1187)
	{
		if ((GET_CURRENT_GAME_TIME() - fLocal_1188) < 7,5f)
		{
			CLEAR_ACTOR_PROOF(&Global_54076, 16);
			iLocal_1187 = 0;
		}
	}
	return;
}

void Function_399(struct<265> Param0) //Position: 0x14464 / 83044
{
	int iVar0;
	int iVar1;
	
	uLocal_1198 = CREATE_LAYOUT("ngraveyard");
	if (IS_LAYOUTREF_VALID(&uLocal_1198))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			iLocal_1124[iVar0] = GET_ACTORENUM_IN_POPULATION(&(Global_46972[0]), iLocal_1185);
			STREAMING_REQUEST_ACTOR(iLocal_1124[iVar0], 1, false);
			iLocal_1185++;
			iVar0++;
		}
		bLocal_1136 = Function_360(9, 15);
		STREAMING_REQUEST_ACTOR(bLocal_1136, 1, false);
		bLocal_1137 = Function_360(1214, 1221);
		STREAMING_REQUEST_ACTOR(bLocal_1137, 1, false);
		bLocal_1138 = Function_360(1204, 1213);
		STREAMING_REQUEST_ACTOR(bLocal_1138, 1, false);
		bLocal_1139 = Function_360(1222, 1227);
		STREAMING_REQUEST_ACTOR(bLocal_1139, 1, false);
		iLocal_1140 = 0;
		iLocal_1165 = 0;
		iLocal_1166 = 0;
		iLocal_1167 = 1;
		bLocal_1169 = false;
		iLocal_1170 = 0;
		bLocal_1186 = false;
		iLocal_1190 = 0;
		iLocal_1189 = 0;
		if (!SQUAD_IS_VALID(&Param0 + 8))
		{
			*(&Param0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uLocal_1198, "Squad_Zombie"));
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 8);
			iVar1 |= 2048;
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&Param0 + 8, iVar1);
		}
		Param0 = 1;
		Param0.f_60 = 0;
		Param0.f_24 = 0;
		Param0.f_64 = 75;
		if (Param0.f_264 != 0 && Function_242(Global_46948) >= 0)
		{
			Param0.f_4 = 2;
		}
		else
		{
			Param0.f_4 = 3;
		}
		if (Global_6666)
		{
			Param0.f_16 = 2;
			Param0.f_20 = 6;
		}
		iLocal_1168 = 0;
		Function_391(&iLocal_1173, -5.0f);
		if (!IS_OBJECT_VALID(&Param0 + 32))
		{
			*(&Param0 + 32) = CREATE_EVENT_TRAP("killET", 2, &uLocal_1198);
			EVENT_TRAP_ON_PERPETRATOR(&Param0 + 32, &Global_54076);
			EVENT_TRAP_STORE_EVENTS(&Param0 + 32, 1);
		}
		if (!IS_OBJECT_VALID(&Param0 + 40))
		{
			*(&Param0 + 40) = CREATE_EVENT_TRAP("headshotET", 10, &uLocal_1198);
			EVENT_TRAP_ON_PERPETRATOR(&Param0 + 40, &Global_54076);
			EVENT_TRAP_STORE_EVENTS(&Param0 + 40, 1);
		}
		Function_406(&Param0 + 68[0]);
		Function_363(&Param0 + 68[0]);
		vLocal_1202 = CREATE_PROP_IN_LAYOUT(&uLocal_1198, Function_37(), "$/fragments/p_gen_coffin04x", Function_406(&Param0 + 68[0]), Function_363(&Param0 + 68[0]), 1);
		SNAP_OBJECT_TO_GROUND(&vLocal_1202, 5.0f, 1, 1092616192);
		SET_PROP_AI_OBSTACLE_ENABLED(&vLocal_1202, 1);
		Function_406(&vLocal_1202);
		CLEAR_AREA_OF_GRASS(Function_406(&vLocal_1202), 2.0f);
		Function_406(&vLocal_1202);
		CLEAR_AREA_OF_TREE_TYPE(Function_406(&vLocal_1202), 2.0f, "");
		SET_BLIP_NAME(ADD_BLIP_FOR_OBJECT(&vLocal_1202, 330, 0f, 2, 0), "blip_coffin");
		Function_176("GY_Burn_coffin", 0x40f00000, 1, 2, 0, 0, 0, 0);
		Function_401(&Param0);
		Global_6628 = 1;
		if (DECOR_CHECK_EXIST(&Global_54076, "bStartedGY"))
		{
			DECOR_REMOVE(&Global_54076, "bStartedGY");
		}
		AUDIO_MUSIC_FORCE_TRACK(Function_400(Param0.f_264), "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

var Function_400(int iParam0) //Position: 0x14763 / 83811
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, RETURN TC_NRT_SONG_01!");
		return "TC_NRT_SONG_01";
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "TC_NRT_SONG_01";
			break;
		
		case 0x00000001:
			return "TC_FTR_SONG_02";
			break;
		
		case 0x00000004:
			return "TC_MEX_SONG_01";
			break;
		
		case 0x00000003:
			return "TC_FTR_SONG_04";
			break;
		
		case 0x00000002:
			return "TC_FTR_SONG_03";
			break;
	}
	return "TC_NRT_SONG_01";
}

void Function_401(struct<265> Param0) //Position: 0x14881 / 84097
{
	int iVar0;
	
	switch (Param0.f_264)
	{
		case 0x00000000:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_402(&iVar0);
			}
			break;
		
		case 0x00000001:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "coots_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_402(&iVar0);
			}
			break;
		
		case 0x00000003:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "tumbleweed_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_402(&iVar0);
			}
			break;
		
		case 0x00000002:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "oddfellows_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_402(&iVar0);
			}
			break;
		
		case 0x00000004:
			iVar0 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "sepulcro_gy_blip_vol");
			if (IS_VOLUME_VALID(&iVar0))
			{
				Function_402(&iVar0);
			}
			break;
	}
	return;
}

void Function_402(var uParam0) //Position: 0x14A11 / 84497
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		uVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		while (IS_BLIP_VALID(&uVar0))
		{
			REMOVE_BLIP(&uVar0);
			uVar0 = GET_BLIP_ON_OBJECT(&uParam0);
		}
	}
	return;
}

bool Function_403() //Position: 0x14A44 / 84548
{
	if (!Function_185(&iLocal_1143))
	{
		return 0;
	}
	return 1;
}

void Function_404(struct<265> Param0) //Position: 0x14A57 / 84567
{
	Function_190(&iLocal_1143, "repeater_carbine01x", 0, 0);
	switch (Param0.f_264)
	{
		case 0x00000000:
			Function_405(&iLocal_1143, 1220, 3, 0);
			break;
		
		case 0x00000001:
			Function_405(&iLocal_1143, 332, 3, 0);
			break;
		
		case 0x00000003:
			Function_405(&iLocal_1143, 357, 3, 0);
			break;
		
		case 0x00000002:
			Function_405(&iLocal_1143, 182, 3, 0);
			break;
		
		case 0x00000004:
			Function_405(&iLocal_1143, 556, 3, 0);
			break;
	}
	return;
}

var Function_405(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x14AEF / 84719
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_5(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_188(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_188(&(Param0[iVar02]), 8);
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

struct<8> Function_406(int iParam0) //Position: 0x14BCB / 84939
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

void Function_407(char* cParam0) //Position: 0x14BF4 / 84980
{
	if (!Function_53(128))
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

void Function_408(int iParam0, bool bParam1) //Position: 0x14C34 / 85044
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
		Function_92(&Global_44085[bParam19] + 32, &cVar0);
	}
	if (!Global_6623 && 1)
	{
	}
	DECOR_SET_INT(&iParam0, "regid", bParam1);
	Global_46721 = 0;
	return;
}

void Function_409(int iParam0) //Position: 0x14D24 / 85284
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_410(int iParam0) //Position: 0x14D37 / 85303
{
	Function_412(0, 0,5f, 1, &iLocal_178, &Global_44085[iParam09] + 8, 1);
	Function_411(1);
	return;
}

void Function_411(bool bParam0) //Position: 0x14D59 / 85337
{
	if (bParam0 <= 0)
	{
		return;
	}
	if (bParam0 >= 10)
	{
		bParam0 = 3;
	}
	Global_43580.f_60 = bParam0;
	return;
}

void Function_412(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, bool bParam5) //Position: 0x14D77 / 85367
{
	var uVar0;
	
	if (!IS_LAYOUTREF_VALID(&uParam3))
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
	Global_43580.f_12 = uParam0;
	*(&Global_43580 + 24) = &uParam3;
	*(&Global_43580 + 32) = &uParam4;
	Global_43580.f_48 = uParam1;
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
		Function_415();
	}
	if (&bParam5)
	{
		Function_413(1048576);
	}
}

void Function_413(int iParam0) //Position: 0x14E85 / 85637
{
	Function_414(&Global_43580, iParam0);
	return;
}

void Function_414(var uParam0, var uParam1) //Position: 0x14E93 / 85651
{
	uParam0 = (uParam0 || uParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_415() //Position: 0x14EB2 / 85682
{
	if (!Global_53524.f_44 && !Global_53524.f_28)
	{
		Function_413(16384);
	}
	return;
}

void Function_416(var uParam0) //Position: 0x14ECE / 85710
{
	uParam0 = uParam0;
	return;
}

void Function_417() //Position: 0x14ED8 / 85720
{
	return;
}

void Function_418(int iParam0) //Position: 0x14EDE / 85726
{
	iParam0 = iParam0;
	return;
}

void Function_419(var uParam0, int iParam1) //Position: 0x14EE8 / 85736
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_420(int iParam0, int iParam1) //Position: 0x14F02 / 85762
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_421() //Position: 0x14F1F / 85791
{
	return;
}

void Function_422() //Position: 0x14F25 / 85797
{
	return;
}

void Function_423(int iParam0) //Position: 0x14F2B / 85803
{
	iParam0 = iParam0;
	return;
}

void Function_424(int iParam0, bool bParam1, int iParam2) //Position: 0x14F35 / 85813
{
	if ((!Function_9(bParam1) || Global_6623) || Function_30(&iParam0 + 608, 16))
	{
		return;
	}
	if (bParam1 == Global_46760[0])
	{
		Function_425(&iParam0, bParam1, &Global_11014, &iParam2);
	}
	else if (bParam1 == Global_46760[1])
	{
		Function_425(&iParam0, bParam1, &Global_11146, &iParam2);
	}
	else if (bParam1 == Global_46760[2])
	{
		Function_425(&iParam0, bParam1, &Global_11120, &iParam2);
	}
	else if (bParam1 == Global_46796[1])
	{
		Function_425(&iParam0, bParam1, &Global_11222, &iParam2);
	}
	else if (bParam1 == Global_46796[3])
	{
		Function_425(&iParam0, bParam1, &Global_11284, &iParam2);
	}
	else if (bParam1 == Global_46796[4])
	{
		Function_425(&iParam0, bParam1, &Global_11492, &iParam2);
	}
	else if (bParam1 == Global_46816[0])
	{
		Function_425(&iParam0, bParam1, &Global_11544, &iParam2);
	}
	else if (bParam1 == Global_46816[1])
	{
		Function_425(&iParam0, bParam1, &Global_11646, &iParam2);
	}
	else if (bParam1 == Global_46816[2])
	{
		Function_425(&iParam0, bParam1, &Global_11704, &iParam2);
	}
	else if (bParam1 == Global_46838[1])
	{
		Function_425(&iParam0, bParam1, &Global_11752, &iParam2);
	}
	else if (bParam1 == Global_46838[0])
	{
		Function_425(&iParam0, bParam1, &Global_11726, &iParam2);
	}
	else if (bParam1 == Global_46850[0])
	{
		Function_425(&iParam0, bParam1, &Global_11836, &iParam2);
	}
	else if (bParam1 == Global_46850[1])
	{
		Function_425(&iParam0, bParam1, &Global_11946, &iParam2);
	}
	else if (bParam1 == Global_46850[2])
	{
		Function_425(&iParam0, bParam1, &Global_11988, &iParam2);
	}
	else if (bParam1 == Global_46866[0])
	{
		Function_425(&iParam0, bParam1, &Global_12048, &iParam2);
	}
	else if (bParam1 == Global_46866[1])
	{
		Function_425(&iParam0, bParam1, &Global_12150, &iParam2);
	}
	else if (bParam1 == Global_46866[2])
	{
		Function_425(&iParam0, bParam1, &Global_11398, &iParam2);
	}
	else if (bParam1 == Global_46894[2])
	{
		Function_425(&iParam0, bParam1, &Global_12284, &iParam2);
	}
	else if (bParam1 == Global_46894[1])
	{
		Function_425(&iParam0, bParam1, &Global_12342, &iParam2);
	}
	else if (bParam1 == Global_46894[0])
	{
		Function_425(&iParam0, bParam1, &Global_12422, &iParam2);
	}
	else if (bParam1 == Global_46894[3])
	{
		Function_425(&iParam0, bParam1, &Global_12392, &iParam2);
	}
	else if (bParam1 == Global_46926[0])
	{
		Function_425(&iParam0, bParam1, &Global_12760, &iParam2);
	}
	else if (bParam1 == Global_46926[1])
	{
		Function_425(&iParam0, bParam1, &Global_12714, &iParam2);
	}
	else if (bParam1 == Global_46926[2])
	{
		Function_425(&iParam0, bParam1, &Global_12644, &iParam2);
	}
	else if (bParam1 == Global_46914[0])
	{
		Function_425(&iParam0, bParam1, &Global_12488, &iParam2);
	}
	else if (bParam1 == Global_46914[1])
	{
		Function_425(&iParam0, bParam1, &Global_12482, &iParam2);
	}
	Function_217(&iParam0 + 608, 64);
	return;
}

void Function_425(int iParam0, int iParam1, struct<2>[] Param2, var uParam3) //Position: 0x15239 / 86585
{
	struct<8> Var0;
	var uVar8;
	int iVar9[8];
	int iVar18;
	int iVar19;
	bool bVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	struct<2> Var24;
	struct<2> Var26;
	struct<8> Var28;
	
	Function_43(&iParam0 + 608, 1);
	if (!SQUAD_IS_VALID(&iParam0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("localSurvSquad") };
		iParam0 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&uParam3, &Var0));
	}
	uVar8 = Function_433(&uParam3, iParam1);
	iVar18 = Function_113(&iVar9, iParam1);
	iVar19 = 0;
	bVar20 = FLOOR(Global_21684[&iParam0 + 6247].f_28);
	if (iVar18 < bVar20)
	{
		iVar19 = 1;
	}
	bVar21 = Function_28(iParam1);
	iVar22 = 0;
	while (iVar22 < (iVar18 - 1))
	{
		if (iVar22 <= Param2)
		{
			if (!Function_432(&(Param2[iVar222]), 4))
			{
				*(&iParam0 + 8[iVar225] + 8) = GET_INDEXED_OBJECT_IN_OBJECTSET(iVar22, &uVar8);
				bVar23 = true;
				if (bVar20 >= 0)
				{
					if (DECOR_CHECK_EXIST(&iParam0 + 8[iVar225] + 8, "Core") && iVar19)
					{
						bVar23 = false;
					}
					else if (!DECOR_CHECK_EXIST(&iParam0 + 8[iVar225] + 8, "Core"))
					{
						bVar23 = false;
					}
				}
				if (bVar23)
				{
					Var24 = Vector(0.0f, 0.0f, 0.0f);
					Var26 = Vector(0.0f, 0.0f, 0.0f);
					GET_OBJECT_POSITION(&iParam0 + 8[iVar225] + 8, &Var24);
					GET_OBJECT_ORIENTATION(&iParam0 + 8[iVar225] + 8, &Var26);
					Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_434("nSurvivor_") };
					*(&iParam0 + 8[iVar225]) = CREATE_ACTOR_IN_LAYOUT(&uParam3, &Var28, iVar9[iVar22], Var24, Var26);
					Function_427(iVar22, &iParam0, &uParam3, bVar21, iParam1);
					if (!STREAMING_ARE_BOUNDS_LOADED(Var24, 3.0f))
					{
						Function_217(&iParam0 + 8[iVar225] + 32, 1);
						Function_217(&iParam0 + 608, 1024);
					}
					Function_217(&iParam0 + 608, 1);
				}
				else
				{
					bVar20 = (bVar20 - 1);
					Function_426(&(Param2[iVar222]), 4);
				}
			}
		}
		iVar22++;
	}
	SET_FACTIONS_STATUS_TWO_WAY(4, 4, 0);
	SET_FACTIONS_STATUS_TWO_WAY(6, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(4, 6, 0);
	SET_FACTIONS_STATUS_TWO_WAY(13, 10, 0);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 4, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 6, false);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, false);
	Function_206(&iParam0, &iParam0, 0);
	SET_FACTIONS_STATUS_TWO_WAY(23, 32, 4);
}

void Function_426(var uParam0, int iParam1) //Position: 0x15445 / 87109
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_427(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4) //Position: 0x15456 / 87126
{
	int iVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	struct<5> Var6;
	bool bVar11;
	bool bVar12;
	char* cVar13[32];
	var uVar21;
	var uVar22;
	
	iVar0 = &iParam1 + 8[iParam05];
	uVar1 = &iParam1 + 8[iParam05] + 8;
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iVar0);
	SQUAD_JOIN(&iVar0, &iParam1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&iVar0, 170.0f);
	fVar2 = (GET_ACTOR_VISION_MAX_RANGE(&iVar0) + 10.0f);
	SET_ACTOR_VISION_MAX_RANGE(&iVar0, fVar2, 1);
	fVar3 = GET_ACTOR_MAX_HEALTH(&iVar0);
	SET_ACTOR_MAX_HEALTH(&iVar0, (fVar3 + 30.0f));
	SET_ALLOW_EXECUTE(&iVar0, 0);
	uVar4 = Vector(0.0f, 0.0f, 0.0f);
	Var6 = Vector(0.0f, 0.0f, 0.0f);
	GET_OBJECT_POSITION(&iParam1 + 8[iParam05] + 8, &uVar4);
	GET_OBJECT_ORIENTATION(&iParam1 + 8[iParam05] + 8, &Var6);
	bVar8 = true;
	if (DECOR_CHECK_EXIST(&uVar1, "GiveWeapon"))
	{
		bVar9 = DECOR_GET_INT(&uVar1, "GiveWeapon");
		GIVE_WEAPON_TO_ACTOR(&iVar0, bVar9, 0f, 1, 1);
		iVar10 = UNK_0xDB679ED9(bVar9);
		if (iVar10 == 40)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRevolvers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 7);
		}
		else if (iVar10 == 39)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumPistols", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 6);
		}
		else if (iVar10 == 41)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 8);
		}
		else if (iVar10 == 42)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRifles", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 9);
		}
		else if (iVar10 == 43)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumShotguns", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 10);
		}
		else if (iVar10 == 44)
		{
			bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers"));
			DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumSnipers", bVar8);
			DECOR_SET_INT(&iVar0, "nammo_type", 11);
		}
	}
	else
	{
		GIVE_WEAPON_TO_ACTOR(&iVar0, 41, 0f, 1, 1);
		bVar8 = (bVar8 + DECOR_GET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters"));
		DECOR_SET_INT(&Global_44085[iParam49] + 8, "ZP_NumRepeaters", bVar8);
		DECOR_SET_INT(&iVar0, "nammo_type", 8);
	}
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
	SET_ACTOR_WEAPON_REACTION_ACTOR_TYPE(&iVar0, 3);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar0, 1);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&iVar0, 0);
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(&iVar0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&iVar0, false);
	AI_BEHAVIOR_SET_ALLOW(&iVar0, 0, 0);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&iVar0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&iVar0, 1);
	Function_431(&iVar0, 0);
	Function_430(&iVar0, 0);
	SET_CRIPPLE_ENABLE(&iVar0, 0);
	SET_ACTOR_ALLOW_DISARM(&iVar0, 0);
	if (DECOR_CHECK_EXIST(&uVar1, "Accuracy"))
	{
		bVar11 = DECOR_GET_INT(&uVar1, "Accuracy");
		Function_429(&iVar0, TO_FLOAT(bVar11), 1.0f, 1.0f);
	}
	else
	{
		Function_429(&iVar0, 75.0f, 1.0f, 1.0f);
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&iVar0, 61, RAND_FLOAT_RANGE(0,1f, 1.0f));
	AI_SET_SHOTS_PER_BURST(&iVar0, (RAND_INT_RANGE(0, 10000) % 5) + 1);
	AI_SET_FIRE_DELAY(&iVar0, RAND_FLOAT_RANGE(1.0f, 3.0f));
	AI_SET_FIRE_DELAY_RANDOMNESS(&iVar0, RAND_FLOAT_RANGE(0.0f, 2.0f));
	if (DECOR_CHECK_EXIST(&uVar1, "nShoot_Vol"))
	{
		bVar12 = DECOR_GET_INT(&uVar1, "nShoot_Vol");
		strcpy(&cVar13, "survVol_", 32);
		stradd(&cVar13, INT_TO_STRING(bVar12), 32);
		uVar21 = FIND_VOLUME_IN_LAYOUT(&uParam2, &cVar13);
		if (IS_VOLUME_VALID(&uVar21))
		{
			SET_ACTOR_STAY_WITHIN_VOLUME(&iVar0, &uVar21, 4, 1);
			TASK_SHOOT_ENEMIES_FROM_ANY_COVER(&iVar0, -1.0f);
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, true);
			TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
		}
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "CrouchShoot"))
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_OVERRIDE_SET_POSTURE(&iVar0, 1);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	else if (DECOR_CHECK_EXIST(&uVar1, "Gringo") || !bParam3)
	{
		uVar22 = LOCATE_GRINGO_OF_TYPE("", &uVar4, 1.0f, 1);
		if (IS_GRINGO_VALID(&uVar22))
		{
			if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse"))
			{
				if (!IS_OBJECT_VALID(Function_428(&uVar22, "UseCase1")))
				{
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowSun", 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "ForceAllowRain", 1);
					SNAP_ACTOR_TO_GRINGO(&iVar0, GET_OBJECT_FROM_GRINGO(&uVar22), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(&iVar0, 2);
					TASK_USE_GRINGO(&iVar0, &uVar22, "UseCase1", 4294967295, 1);
					DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(&uVar22), "CantUse", 1);
				}
			}
		}
		else
		{
			TASK_PRIORITY_SET(&iVar0, 2);
			TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
		}
	}
	else if (bParam3)
	{
		MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iVar0, 0);
		TASK_PRIORITY_SET(&iVar0, true);
		TASK_SHOOT_ENEMIES_FROM_POSITION(StackVal, &iVar0, &uVar4, -1.0f);
	}
	Function_429(&iVar0, 20.0f, 1.0f, 1.0f);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&iVar0, 0,75f);
	MEMORY_CONSIDER_AS(&iVar0, &Global_54076, 5);
	SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(32, &iVar0, 4);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&iVar0, 2);
	if (bParam3)
	{
		if (DECOR_CHECK_EXIST(&uVar1, "Core"))
		{
			*(&iParam1 + 336) = &iVar0;
		}
		else if (Global_21684[&iParam1 + 6247].f_32 < 0.0f)
		{
			Global_21684[&iParam1 + 6247].f_32 = (Global_21684[&iParam1 + 6247].f_32 - 1.0f);
			DECOR_SET_BOOL(&iVar0, "PreSaved", 1);
		}
	}
	else
	{
		SET_PLAYER_CAUSE_WEAPON_REACTION_COMBAT(&Global_54076, 1);
	}
}

var Function_428(var uParam0, int iParam1) //Position: 0x15B3D / 88893
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(&uParam0, &iParam1);
}

void Function_429(var uParam0, float fParam1, float fParam2, float fParam3) //Position: 0x15B4C / 88908
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (&fParam2 == -1.0f || &fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(&uParam0, &fParam2, &fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 54, 0.0f);
		}
	}
}

void Function_430(var uParam0, bool bParam1) //Position: 0x15B9D / 88989
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[7]));
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[5]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[7]), 0);
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[5]), 0);
	}
	return;
}

void Function_431(var uParam0, bool bParam1) //Position: 0x15BEC / 89068
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_PREDICATE_OVERRIDE_CLEAR(&uParam0, &(Global_39591[0]));
	}
	else
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &(Global_39591[0]), 0);
	}
	return;
}

bool Function_432(var uParam0, int iParam1) //Position: 0x15C20 / 89120
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_433(int iParam0, int iParam1) //Position: 0x15C3D / 89149
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8;
	
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 2);
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	iVar2 = 0;
	while (IS_OBJECT_VALID(&iVar1))
	{
		uVar8 = GET_OBJECT_NAME(&iVar1);
		if (Function_28(iParam1))
		{
			if (STRING_CONTAINS_STRING(&uVar8, "_def"))
			{
				uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
				iVar2++;
			}
		}
		else if (STRING_CONTAINS_STRING(&uVar8, "_safe"))
		{
			uVar3[iVar2] = GET_OBJECTSET_FROM_OBJECT(&iVar1);
			iVar2++;
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return &(uVar3[(RAND_INT_RANGE(0, 100000) % iVar2)]);
}

struct<32> Function_434(char* cParam0) //Position: 0x15CF3 / 89331
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_435("0", &cVar8, ""), 4);
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

struct<32> Function_435(char* cParam0) //Position: 0x15D5F / 89439
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_436() //Position: 0x15D81 / 89473
{
	Function_406(&iLocal_178 + 920[0]);
	Function_36();
	uLocal_1676[0] = Function_437(StackVal, StackVal, &iLocal_178, Function_37(), "$/tune/refGroups/campsiteSets/cam_deadBody01x", Function_406(&iLocal_178 + 920[0]), Function_36(), 4294967295);
	uLocal_1676[0] = &uLocal_1676[0];
	Function_406(&iLocal_178 + 920[1]);
	Function_36();
	uLocal_1676[1] = Function_437(StackVal, StackVal, &iLocal_178, Function_37(), "$/tune/refGroups/campsiteSets/cam_deadBody02x", Function_406(&iLocal_178 + 920[1]), Function_36(), 4294967295);
	uLocal_1676[1] = &uLocal_1676[1];
	return;
}

var Function_437(var uParam0, int iParam1, var uParam2, struct<2> Param3, struct<2> Param5, int iParam7) //Position: 0x15E43 / 89667
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	
	uVar0 = CREATE_PROPSET_IN_LAYOUT(&uParam0, &iParam1, &uParam2, Param3, Param5);
	uVar1 = GET_LAYOUT_FROM_OBJECT(&uVar0);
	uVar2 = CREATE_OBJECT_ITERATOR(&uVar1);
	ITERATE_IN_LAYOUT(&uVar2, &uVar1);
	iVar3 = START_OBJECT_ITERATOR(&uVar2);
	while (IS_OBJECT_VALID(&iVar3))
	{
		if (!GET_OBJECT_TYPE(&iVar3) != 57)
		{
			if (!&iParam7 != 4294967295)
			{
				GET_OBJECT_POSITION(&iVar3, &Var4);
				Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(0.0f, 4.0f, 0.0f), Var4, StackVal);
				iVar6 = GET_MATERIAL_AT_VECTOR(&Var4);
				if (!iVar6 != 0 && (iVar6 && iParam7) < 0)
				{
					PRINTSTRING("Deleting object. Materials were above");
					PRINTNL();
					DESTROY_OBJECT(&iVar3);
				}
			}
			if (IS_OBJECT_VALID(&iVar3))
			{
				if (DECOR_CHECK_EXIST(&iVar3, "rstarInfoSnapping_Type"))
				{
					iVar7 = DECOR_CHECK_STRING(&iVar3, "rstarInfoSnapping_Type", "align");
					SNAP_OBJECT_TO_GROUND(&iVar3, 10.0f, iVar7, 1092616192);
				}
				NET_OBJECT_SET_REPLICATION_MODE(&iVar3, 0);
			}
		}
		iVar3 = OBJECT_ITERATOR_NEXT(&uVar2);
	}
	STORE_MOBILE_LAYOUT_TRANSFORMS(GET_MOBILE_LAYOUT_FROM_OBJECT(&uVar0));
	ADD_AI_COVERSET_FOR_PROPSET(&uVar0);
	DESTROY_ITERATOR(&uVar2);
	return &uVar0;
}

bool Function_438(int iParam0) //Position: 0x15F9A / 90010
{
	if (Function_30(&iParam0 + 608, 16))
	{
		return 1;
	}
	return Function_185(&iParam0 + 384);
}

int Function_439(int iParam0) //Position: 0x15FBD / 90045
{
	if (!Function_9(iParam0))
	{
		return 1;
	}
	return Function_420(&(Global_43791[iParam0]), 4);
}

bool Function_440() //Position: 0x15FD9 / 90073
{
	return Function_185(&iLocal_1666);
}

void Function_441(bool bParam0) //Position: 0x15FE5 / 90085
{
	int iVar0;
	
	Function_442(&Local_1368, &cLocal_7, "bank_int", 10, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 80, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "bank01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 40, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "bank01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 40, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "bank01_int", 4, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1840, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "bank01_int", 7, &Global_44085[bParam09] + 32, 1, &iLocal_434 + 1840, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "church01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 120, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "church01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 120, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "church01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 120, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "cityHall01", 7, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "doctor", 1, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 152, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "doctor", 2, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 152, 1, 0);
	Function_442(&Local_1368, &cLocal_7, "generalStore01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "generalStore01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "generalStore01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "gunshop", 1, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1048, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "gunshop", 2, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1048, 1, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 240, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 240, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 240, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 7, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 8, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 240, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 9, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 11, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "hotel01", 13, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "policeStation01", 1, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "policeStation01", 2, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "policeStation01", 4, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "policeStation01", 5, &Global_44085[bParam09] + 32, 0, 0, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "saloon_int", 8, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 280, 0, 1);
	Function_442(&Local_1368, &cLocal_7, "saloon_int", 9, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 280, 0, 1);
	Function_442(&Local_1368, &cLocal_7, "tailor", 1, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1080, 0, 0);
	iVar0 = Function_442(&Local_1368, &cLocal_7, "tailor", 2, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1080, 1, 0);
	if (iVar0 <= 0 && iVar0 > Local_1368)
	{
		if (IS_OBJECT_VALID(&(Local_1368[iVar04])))
		{
			DESTROY_OBJECT(&(Local_1368[iVar04]));
		}
	}
	Function_442(&Local_1368, &cLocal_7, "ntheatre01", 1, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1264, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "ntheatre01", 2, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1264, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "ntheatre01", 3, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1264, 0, 0);
	Function_442(&Local_1368, &cLocal_7, "ntheatre01", 4, &Global_44085[bParam09] + 32, 0, &iLocal_434 + 1264, 0, 0);
	return;
}

var Function_442(struct<4>[] Param0, int iParam1, char* cParam2) //Position: 0x165D2 / 91602
{
	int iVar0;
	char* cVar1[32];
	char* cVar9[8];
	var uVar11;
	
	iVar0 = Function_443(&Param0);
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
		Function_70(&(Param0[iVar04]), 1);
	}
	else
	{
		OPEN_DOOR_DIRECTION_FAST(&(Param0[iVar04]), 1);
	}
	Function_70(&(Param0[iVar04]), 4096);
	*(&Param0[iVar04] + 16) = &bParam6;
	if (&bParam7)
	{
		Function_70(&(Param0[iVar04]), 16384);
	}
	if (&bParam8)
	{
		Function_70(&(Param0[iVar04]), 32768);
	}
	if (IS_OBJECT_VALID(&bParam6))
	{
		DECOR_SET_OBJECT(&uVar11, "roomvol", &bParam6);
	}
	return iVar0;
}

var Function_443(struct<4>[] Param0) //Position: 0x166D5 / 91861
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

void Function_444() //Position: 0x16706 / 91910
{
	Function_446(&uLocal_9, &uLocal_1246, 4, &iLocal_434 + 848, 4294967295, 4);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 40, 4294967295, 0x800010a);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 80, 4294967295, 0x800018a);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 72, 4294967295, 131338);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 120, 4294967295, 4194570);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 152, 4294967295, 8458);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 176, 4294967295, 266);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 240, 4294967295, 0x2000010a);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 272, 4294967295, 266);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 312, 4294967295, 778);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 280, 4294967295, 258);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 336, 4294967295, 16650);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 1264, 4294967295, 266);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 952, 4294967295, 33034);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 1048, 4294967295, 4362);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 1080, 4294967295, 2314);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 1136, 4294967295, 2314);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 1648, 4294967295, 65800);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 1672, 4294967295, 2314);
	Function_446(&uLocal_9, &uLocal_1246, 5, &iLocal_434 + 976, 4294967295, 0x1000000);
	Function_445(&iLocal_434 + 2008, 8);
	return;
}

void Function_445(var uParam0, bool bParam1) //Position: 0x168AB / 92331
{
	if (DECOR_CHECK_EXIST(&uParam0, "locflag"))
	{
		DECOR_SET_INT(&uParam0, "locflag", (32 || DECOR_GET_INT(&uParam0, "locflag")));
	}
	else
	{
		DECOR_SET_INT(&uParam0, "locflag", 32);
	}
	DECOR_SET_INT(&uParam0, "customweather", bParam1);
	return;
}

void Function_446(var uParam0, vector3[] vParam1, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x16917 / 92439
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

void Function_447(struct<5> Param0) //Position: 0x16A04 / 92676
{
	Param0 = 0;
	Param0.f_4 = 0;
	return;
}

void Function_448(int iParam0, int iParam1) //Position: 0x16A15 / 92693
{
	var uVar0;
	int iVar1;
	
	if (Function_30(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "MoveRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	return;
}

void Function_449(int iParam0, int iParam1, bool bParam2) //Position: 0x16A8B / 92811
{
	var uVar0;
	int iVar1;
	
	if (Function_30(&iParam0 + 608, 16))
	{
		return;
	}
	uVar0 = CREATE_OBJECT_ITERATOR(&iParam1);
	ITERATE_ON_OBJECT_TYPE(&uVar0, 9);
	ITERATE_ON_PARTIAL_NAME(&uVar0, "SpawnRestrict");
	iVar1 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&iVar1))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(GET_VOLUME_FROM_OBJECT(&iVar1)))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(GET_VOLUME_FROM_OBJECT(&iVar1));
		}
		iVar1 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	DESTROY_ITERATOR(&uVar0);
	if (!Function_28(bParam2))
	{
		if (!DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_44085[bParam29] + 8))
		{
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_44085[bParam29] + 8);
		}
	}
	return;
}

var Function_450() //Position: 0x16B29 / 92969
{
	return &iLocal_178;
}

void Function_451(int iParam0) //Position: 0x16B32 / 92978
{
	cLocal_7 = Function_452(&iLocal_178, "blackwater", iParam0);
	return;
}

int Function_452(int iParam0, var uParam1, int iParam2) //Position: 0x16B50 / 93008
{
	*(&Global_44085[iParam29] + 56) = CREATE_WORLD_SECTOR(&iParam0, &uParam1);
	return &Global_44085[iParam29] + 56;
}

bool Function_453() //Position: 0x16B73 / 93043
{
	if (Function_454())
	{
		CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_434 + 2048, 15);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_434 + 2048);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_434 + 2048);
		return 1;
	}
	return 0;
}

bool Function_454() //Position: 0x16BA2 / 93090
{
	var uVar0;
	
	Function_455(3, 3);
	uVar0 = &uVar0;
	iLocal_434 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_434))
	{
		iLocal_434 = CREATE_LAYOUT("Blackwater_layout");
	}
	*(&iLocal_434 + 40) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_bank_set");
	*(&iLocal_434 + 8[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "bankv3", 2,802597E-45f, Vector(685,012f, 83,54934f, 1228,977f), Vector(0.0f, 89,4097f, 0.0f), Vector(6,222911f, 10,39784f, 17,46343f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 40, &iLocal_434 + 8[0]);
	*(&iLocal_434 + 8[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "bankv2", 2,802597E-45f, Vector(683,6581f, 83,69234f, 1234,58f), Vector(0.0f, 89,4097f, 0.0f), Vector(5,997558f, 9,306466f, 14,46865f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 40, &iLocal_434 + 8[1]);
	*(&iLocal_434 + 8[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "bankv1", 2,802597E-45f, Vector(684,7269f, 83,54934f, 1240,591f), Vector(0.0f, 89,4097f, 0.0f), Vector(6,52847f, 10,39784f, 18,22007f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 40, &iLocal_434 + 8[2]);
	*(&iLocal_434 + 72) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_barn_set");
	*(&iLocal_434 + 48[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "barnv1", 2,802597E-45f, Vector(583,7659f, 87,39951f, 1323,992f), Vector(0.0f, 0.0f, 0.0f), Vector(16,03014f, 4,136538f, 21,79914f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 72, &iLocal_434 + 48[0]);
	*(&iLocal_434 + 48[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "barnv2", 2,802597E-45f, Vector(592,6696f, 86,83189f, 1332,13f), Vector(0.0f, 0.0f, 0.0f), Vector(2,219453f, 3,000689f, 5,909022f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 72, &iLocal_434 + 48[1]);
	*(&iLocal_434 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_bank_vault", 2,802597E-45f, Vector(679,6162f, 80,76677f, 1227,462f), Vector(0.0f, 89,4097f, 0.0f), Vector(2,239555f, 3,572292f, 5,903275f));
	*(&iLocal_434 + 120) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_church_set");
	*(&iLocal_434 + 88[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "churchv1", 2,802597E-45f, Vector(551,4929f, 95,67864f, 1198,728f), Vector(0.0f, -93,1861f, 0.0f), Vector(3,867709f, 5,662213f, 3,031523f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 120, &iLocal_434 + 88[0]);
	*(&iLocal_434 + 88[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "churchv2", 2,802597E-45f, Vector(559,042f, 97,66423f, 1192,044f), Vector(0.0f, 87,16801f, 0.0f), Vector(18,22243f, 8,206848f, 11,36879f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 120, &iLocal_434 + 88[1]);
	*(&iLocal_434 + 88[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "churchv3", 2,802597E-45f, Vector(565,0886f, 100,8047f, 1184,277f), Vector(0.0f, -92,77225f, 0.0f), Vector(4,307622f, 24,27567f, 2,470683f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 120, &iLocal_434 + 88[2]);
	*(&iLocal_434 + 152) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_doctor_set");
	*(&iLocal_434 + 128[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "doctor01", 2,802597E-45f, Vector(722,0671f, 78,48743f, 1364,301f), Vector(0.0f, 89,97367f, 0.0f), Vector(6,625236f, 8,511094f, 8,727087f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 152, &iLocal_434 + 128[0]);
	*(&iLocal_434 + 128[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "doctor02", 2,802597E-45f, Vector(726,3837f, 80,53288f, 1365,952f), Vector(0.0f, 89,97367f, 0.0f), Vector(1,491828f, 1,899601f, 0,4062393f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 152, &iLocal_434 + 128[1]);
	*(&iLocal_434 + 176) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_fbi_set");
	*(&iLocal_434 + 160[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "fbiv", 2,802597E-45f, Vector(769,4239f, 82,72511f, 1234,899f), Vector(0.0f, 0.0f, 0.0f), Vector(17,29858f, 9,946985f, 17,77562f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 176, &iLocal_434 + 160[0]);
	*(&iLocal_434 + 200) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_gazebo_set");
	*(&iLocal_434 + 184[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "gazebov", 4,203895E-45f, Vector(1,912712f, 0,8222067f, -11,30511f), Vector(0.0f, 29,35592f, 0.0f), Vector(6,145772f, 3,393198f, 6,145772f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 200, &iLocal_434 + 184[0]);
	*(&iLocal_434 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_hotel_lobby", 2,802597E-45f, Vector(747,7106f, 79,8069f, 1267,899f), Vector(0.0f, 90,34145f, 0.0f), Vector(12,41521f, 3,927039f, 12,25801f));
	*(&iLocal_434 + 240) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_hotel_set");
	*(&iLocal_434 + 216[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "hotelv", 2,802597E-45f, Vector(753,863f, 84,51958f, 1267,863f), Vector(0.0f, 90,34145f, 0.0f), Vector(12,45637f, 12,57302f, 18,12087f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 240, &iLocal_434 + 216[0]);
	*(&iLocal_434 + 216[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "hotelv1", 2,802597E-45f, Vector(762,2801f, 87,19563f, 1271,319f), Vector(0.0f, 90,34145f, 0.0f), Vector(10,22215f, 10,31789f, 5,849715f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 240, &iLocal_434 + 216[1]);
	*(&iLocal_434 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_freightplatform", 2,802597E-45f, Vector(667,2385f, 80,99831f, 1332,081f), Vector(0.0f, 0.0f, 0.0f), Vector(28,54802f, 4,387286f, 20,21121f));
	*(&iLocal_434 + 272) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_freightStation_set");
	*(&iLocal_434 + 256[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "freightStationv1", 2,802597E-45f, Vector(671,9913f, 80,99831f, 1332,735f), Vector(0.0f, 0.0f, 0.0f), Vector(10,37562f, 4,257046f, 14,01441f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 272, &iLocal_434 + 256[0]);
	*(&iLocal_434 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_players_room", 2,802597E-45f, Vector(713,2771f, 84,66203f, 1322,427f), Vector(0.0f, 90,26811f, 0.0f), Vector(8,244068f, 4,262002f, 8,929452f));
	*(&iLocal_434 + 312) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_saloon_set");
	*(&iLocal_434 + 288[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "saloonv5", 2,802597E-45f, Vector(718,1539f, 83,47411f, 1318,515f), Vector(0.0f, 89,99537f, 0.0f), Vector(16,42857f, 10,38234f, 18,53994f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 312, &iLocal_434 + 288[0]);
	*(&iLocal_434 + 288[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "saloonv6", 2,802597E-45f, Vector(720,5394f, 80,53291f, 1320,628f), Vector(0.0f, 89,99537f, 0.0f), Vector(16,60321f, 4,454592f, 12,34287f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 312, &iLocal_434 + 288[1]);
	*(&iLocal_434 + 336) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_trainStation_set");
	*(&iLocal_434 + 320[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "trainStationv", 2,802597E-45f, Vector(662,8956f, 82,90158f, 1314,376f), Vector(0.0f, 0.0f, 0.0f), Vector(10,1784f, 9,940033f, 16,36202f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 336, &iLocal_434 + 320[0]);
	*(&iLocal_434 + 360) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_theatre_night_set");
	*(&iLocal_434 + 344[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "ntheatrev1", 2,802597E-45f, Vector(710,5163f, 82,8928f, 1289,718f), Vector(0.0f, 90,02578f, 0.0f), Vector(20,03429f, 11,01707f, 33,30777f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 360, &iLocal_434 + 344[0]);
	*(&iLocal_434 + 672) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_sidewalk_town_set");
	*(&iLocal_434 + 368[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv26", 2,802597E-45f, Vector(750,4879f, 81,27018f, 1235,168f), Vector(0.0f, 0.0f, 0.0f), Vector(14,12516f, 7,551131f, 23,47999f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[0]);
	*(&iLocal_434 + 368[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv25", 2,802597E-45f, Vector(780,9568f, 81,08485f, 1299,409f), Vector(0.0f, 0.0f, 0.0f), Vector(3,77752f, 7,551131f, 160,3003f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[1]);
	*(&iLocal_434 + 368[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv24", 2,802597E-45f, Vector(745,0521f, 81,28633f, 1259,639f), Vector(0.0f, 0.0f, 0.0f), Vector(102,865f, 7,551131f, 3,98151f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[2]);
	*(&iLocal_434 + 368[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv23", 2,802597E-45f, Vector(692,7038f, 81,25581f, 1328,674f), Vector(0.0f, 0.0f, 0.0f), Vector(3,886184f, 7,551131f, 142,1541f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[3]);
	*(&iLocal_434 + 368[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv22", 2,802597E-45f, Vector(733,5353f, 81,95405f, 1245,95f), Vector(0.0f, 0.0f, 0.0f), Vector(117,3182f, 7,551131f, 3,935042f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[4]);
	*(&iLocal_434 + 368[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv21", 2,802597E-45f, Vector(692,8892f, 81,24154f, 1256,207f), Vector(0.0f, 0.0f, 0.0f), Vector(3,66921f, 7,551131f, 22,38496f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[5]);
	*(&iLocal_434 + 368[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv20", 2,802597E-45f, Vector(729,8685f, 81,70876f, 1176,64f), Vector(0.0f, 0.0f, 0.0f), Vector(67,70959f, 7,551131f, 3,73394f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[6]);
	*(&iLocal_434 + 368[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv19", 2,802597E-45f, Vector(763,9297f, 81,50655f, 1191,37f), Vector(0.0f, 0.0f, 0.0f), Vector(3,539133f, 7,551131f, 32,30503f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[7]);
	*(&iLocal_434 + 368[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv18", 2,802597E-45f, Vector(732,3339f, 81,43412f, 1212,267f), Vector(0.0f, 0.0f, 0.0f), Vector(67,77905f, 7,551131f, 4,093557f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[8]);
	*(&iLocal_434 + 368[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv17", 2,802597E-45f, Vector(770,7201f, 81,20591f, 1214,631f), Vector(0.0f, 49,24516f, 0.0f), Vector(3,48217f, 7,551131f, 20,62198f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[9]);
	*(&iLocal_434 + 368[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv14", 2,802597E-45f, Vector(738,1655f, 81,36582f, 1330,836f), Vector(0.0f, 0.0f, 0.0f), Vector(91,05147f, 7,551131f, 3,688597f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[10]);
	*(&iLocal_434 + 368[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv12", 2,802597E-45f, Vector(728,9019f, 81,24676f, 1319,37f), Vector(0.0f, 0.0f, 0.0f), Vector(3,529351f, 7,551131f, 146,8364f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[11]);
	*(&iLocal_434 + 368[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv11", 2,802597E-45f, Vector(755,1953f, 81,28096f, 1385,705f), Vector(0.0f, 17,6138f, 0.0f), Vector(55,03497f, 7,551131f, 3,323842f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[12]);
	*(&iLocal_434 + 368[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv9", 2,802597E-45f, Vector(736,9777f, 81,29997f, 1342,492f), Vector(0.0f, 0.0f, 0.0f), Vector(91,653f, 7,551131f, 3,939708f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[13]);
	*(&iLocal_434 + 368[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv5", 2,802597E-45f, Vector(668,9208f, 81,29395f, 1357,18f), Vector(0.0f, 0.0f, 0.0f), Vector(27,62087f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[14]);
	*(&iLocal_434 + 368[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv35", 2,802597E-45f, Vector(710,8467f, 81,76566f, 1396,286f), Vector(0.0f, 7,894397f, 0.0f), Vector(36,66884f, 9,535529f, 3,794664f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[15]);
	*(&iLocal_434 + 368[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv34", 2,802597E-45f, Vector(680,9053f, 81,60557f, 1378,852f), Vector(0.0f, 0,3763108f, 0.0f), Vector(3,448853f, 9,535529f, 46,55386f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[16]);
	*(&iLocal_434 + 368[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "buildingType2_05v", 2,802597E-45f, Vector(811,5858f, 81,57787f, 1242,259f), Vector(0.0f, 0.0f, 0.0f), Vector(6,744418f, 4,187153f, 12,31418f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[17]);
	*(&iLocal_434 + 368[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv47", 2,802597E-45f, Vector(733,548f, 81,82948f, 1216,751f), Vector(0.0f, 0.0f, 0.0f), Vector(69,29767f, 10,45926f, 16,03515f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[18]);
	*(&iLocal_434 + 368[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv45", 2,802597E-45f, Vector(742,9442f, 81,92759f, 1318,057f), Vector(0.0f, 0.0f, 0.0f), Vector(3,819721f, 10,45926f, 144,69f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[19]);
	*(&iLocal_434 + 368[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv41", 2,802597E-45f, Vector(620,8363f, 81,51477f, 1307,774f), Vector(0.0f, -9,045968f, 0.0f), Vector(4,253928f, 10,45926f, 18,01833f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[20]);
	*(&iLocal_434 + 368[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv48", 2,802597E-45f, Vector(673,6802f, 81,24154f, 1234,902f), Vector(0.0f, 0.0f, 0.0f), Vector(3,66921f, 7,551131f, 26,09772f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[21]);
	*(&iLocal_434 + 368[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv49", 2,802597E-45f, Vector(698,0182f, 81,24154f, 1211,328f), Vector(0.0f, 0.0f, 0.0f), Vector(3,66921f, 7,551131f, 70,05096f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[22]);
	*(&iLocal_434 + 368[23]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv50", 2,802597E-45f, Vector(695,8677f, 81,24154f, 1223,744f), Vector(0.0f, -89,87884f, 0.0f), Vector(3,66921f, 7,551131f, 42,88503f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[23]);
	*(&iLocal_434 + 368[24]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv51", 2,802597E-45f, Vector(718,6068f, 81,24154f, 1228,93f), Vector(0.0f, 0.0f, 0.0f), Vector(5,448182f, 7,551131f, 36,78898f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[24]);
	*(&iLocal_434 + 368[25]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv52", 2,802597E-45f, Vector(738,7516f, 81,24154f, 1234,945f), Vector(0.0f, -89,87884f, 0.0f), Vector(6,302614f, 7,551131f, 42,88503f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[25]);
	*(&iLocal_434 + 368[26]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv53", 2,802597E-45f, Vector(737,1594f, 81,24154f, 1228,007f), Vector(0.0f, 0,5153338f, 0.0f), Vector(6,302614f, 7,551131f, 34,69927f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[26]);
	*(&iLocal_434 + 368[27]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv54", 2,802597E-45f, Vector(757,8832f, 81,24154f, 1227,821f), Vector(0.0f, 0,5153338f, 0.0f), Vector(4,884216f, 7,551131f, 34,69927f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[27]);
	*(&iLocal_434 + 368[28]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv55", 2,802597E-45f, Vector(768,6282f, 81,24154f, 1223,844f), Vector(0.0f, 0,5153338f, 0.0f), Vector(22,89185f, 7,551131f, 4,622076f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[28]);
	*(&iLocal_434 + 368[29]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv56", 2,802597E-45f, Vector(686,8564f, 81,60557f, 1399,255f), Vector(0.0f, -82,82469f, 0.0f), Vector(3,448853f, 9,535529f, 13,79854f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[29]);
	*(&iLocal_434 + 368[30]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv57", 2,802597E-45f, Vector(686,1123f, 81,29395f, 1342,593f), Vector(0.0f, 0.0f, 0.0f), Vector(13,0501f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[30]);
	*(&iLocal_434 + 368[31]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv58", 2,802597E-45f, Vector(679,214f, 81,29395f, 1306,024f), Vector(0.0f, 89,97923f, 0.0f), Vector(71,48866f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[31]);
	*(&iLocal_434 + 368[32]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv59", 2,802597E-45f, Vector(793,893f, 81,08485f, 1299,553f), Vector(0.0f, 0.0f, 0.0f), Vector(3,77752f, 7,551131f, 143,9355f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[32]);
	*(&iLocal_434 + 368[33]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv60", 2,802597E-45f, Vector(680,0897f, 81,29395f, 1348,524f), Vector(0.0f, -83,23032f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[33]);
	*(&iLocal_434 + 368[34]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv61", 2,802597E-45f, Vector(787,6937f, 81,29395f, 1342,844f), Vector(0.0f, -0,4282522f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[34]);
	*(&iLocal_434 + 368[35]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv62", 2,802597E-45f, Vector(787,7839f, 81,29395f, 1330,775f), Vector(0.0f, -0,4282522f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[35]);
	*(&iLocal_434 + 368[36]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalkv63", 2,802597E-45f, Vector(787,4879f, 81,29395f, 1369,694f), Vector(0.0f, 0,7767695f, 0.0f), Vector(16,36002f, 7,551131f, 3,612056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 672, &iLocal_434 + 368[36]);
	*(&iLocal_434 + 752) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_sidewalk_docks_set");
	*(&iLocal_434 + 680[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv", 2,802597E-45f, Vector(801,8156f, 81,60444f, 1247,176f), Vector(0.0f, 0.0f, 0.0f), Vector(11,76809f, 4,313719f, 40,32629f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[0]);
	*(&iLocal_434 + 680[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv7", 2,802597E-45f, Vector(824,2244f, 80,79265f, 1250,541f), Vector(0.0f, 0.0f, 0,229665f), Vector(22,26314f, 4,313719f, 3,967483f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[1]);
	*(&iLocal_434 + 680[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv6", 2,802597E-45f, Vector(849,8587f, 80,74489f, 1241,462f), Vector(0.0f, 0.0f, 0.0f), Vector(18,6001f, 4,882585f, 13,70244f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[2]);
	*(&iLocal_434 + 680[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv5", 2,802597E-45f, Vector(840,6787f, 80,57874f, 1250,424f), Vector(0.0f, 0.0f, 0.0f), Vector(14,89873f, 4,313719f, 3,970972f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[3]);
	*(&iLocal_434 + 680[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv4", 2,802597E-45f, Vector(811,5286f, 81,68847f, 1230,949f), Vector(0.0f, 0.0f, 0.0f), Vector(7,570256f, 4,313719f, 8,017331f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[4]);
	*(&iLocal_434 + 680[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv2", 2,802597E-45f, Vector(811,6128f, 81,6553f, 1258,082f), Vector(0.0f, 0.0f, 0.0f), Vector(7,879981f, 4,569567f, 18,17561f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[5]);
	*(&iLocal_434 + 680[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv1", 2,802597E-45f, Vector(789,1606f, 80,32297f, 1247,867f), Vector(0.0f, 66,50256f, 0.0f), Vector(3,87126f, 4,781995f, 19,64315f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[6]);
	*(&iLocal_434 + 680[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_docksv8", 2,802597E-45f, Vector(788,6102f, 80,32297f, 1255,243f), Vector(0.0f, 123,2449f, 0.0f), Vector(3,87126f, 4,781995f, 19,64315f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 752, &iLocal_434 + 680[7]);
	*(&iLocal_434 + 776) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_sidewalk_factory_set");
	*(&iLocal_434 + 760[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_factoryv10", 2,802597E-45f, Vector(803,7894f, 79,94149f, 1287,728f), Vector(0.0f, 0.0f, 0.0f), Vector(22,90565f, 6,452754f, 35,84712f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 776, &iLocal_434 + 760[0]);
	*(&iLocal_434 + 840) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_sidewalk_slums_set");
	*(&iLocal_434 + 784[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_slumsv7", 2,802597E-45f, Vector(691,486f, 80,66692f, 1413,543f), Vector(0.0f, 5,287261f, 0.0f), Vector(49,20615f, 6,201427f, 4,651156f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 840, &iLocal_434 + 784[0]);
	*(&iLocal_434 + 784[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_slumsv6", 2,802597E-45f, Vector(725,566f, 79,8988f, 1411,999f), Vector(0.0f, 0.0f, 0.0f), Vector(3,0684f, 3,641126f, 9,026872f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 840, &iLocal_434 + 784[1]);
	*(&iLocal_434 + 784[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_slumsv5", 2,802597E-45f, Vector(740,1075f, 80,09385f, 1409,544f), Vector(0.0f, 12,88769f, 0.0f), Vector(2,821099f, 3,641126f, 9,026872f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 840, &iLocal_434 + 784[2]);
	*(&iLocal_434 + 784[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_slumsv4", 2,802597E-45f, Vector(701,2999f, 79,80818f, 1416,071f), Vector(3,333661f, 8,713227f, 1,905108f), Vector(2,856709f, 3,641126f, 9,026872f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 840, &iLocal_434 + 784[3]);
	*(&iLocal_434 + 784[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_slumsv8", 2,802597E-45f, Vector(726,8785f, 80,66692f, 1407,953f), Vector(0.0f, 12,1173f, 0.0f), Vector(44,34429f, 6,201427f, 4,651156f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 840, &iLocal_434 + 784[4]);
	*(&iLocal_434 + 784[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "sidewalk_slumsv9", 2,802597E-45f, Vector(747,494f, 80,66692f, 1404,957f), Vector(0.0f, -1,049141f, 0.0f), Vector(20,80766f, 6,201427f, 4,651156f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 840, &iLocal_434 + 784[5]);
	*(&iLocal_434 + 848) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_region", 4,203895E-45f, Vector(707,485f, 86,24601f, 1307,235f), Vector(0.0f, 0.0f, 0.0f), Vector(212,9846f, 26,39366f, 221,8356f));
	*(&iLocal_434 + 944) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_birds_set");
	*(&iLocal_434 + 856[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv10", 4,203895E-45f, Vector(824,3123f, 81,89945f, 1365,872f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[0]);
	*(&iLocal_434 + 856[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv9", 4,203895E-45f, Vector(784,3028f, 81,89945f, 1437,775f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[1]);
	*(&iLocal_434 + 856[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv8", 4,203895E-45f, Vector(806,499f, 85,4902f, 1288,864f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[2]);
	*(&iLocal_434 + 856[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv7", 4,203895E-45f, Vector(779,4973f, 86,19636f, 1243,967f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[3]);
	*(&iLocal_434 + 856[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv6", 4,203895E-45f, Vector(747,2687f, 81,89945f, 1364,051f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[4]);
	*(&iLocal_434 + 856[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv5", 4,203895E-45f, Vector(685,1721f, 81,89945f, 1429,138f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[5]);
	*(&iLocal_434 + 856[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv4", 4,203895E-45f, Vector(702,5702f, 81,89945f, 1288,937f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[6]);
	*(&iLocal_434 + 856[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv3", 4,203895E-45f, Vector(712,5511f, 81,89945f, 1205,071f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[7]);
	*(&iLocal_434 + 856[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv2", 4,203895E-45f, Vector(647,5953f, 81,89945f, 1338,431f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[8]);
	*(&iLocal_434 + 856[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "birdsv1", 4,203895E-45f, Vector(616,8579f, 81,89945f, 1244,28f), Vector(0.0f, 20.0f, 0.0f), Vector(51,88136f, 18,86082f, 50,82921f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 944, &iLocal_434 + 856[9]);
	*(&iLocal_434 + 952) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "nblkv_jail", 2,802597E-45f, Vector(771,7086f, 80,92284f, 1241,441f), Vector(0.0f, -90,42757f, 0.0f), Vector(3,554834f, 3,100976f, 11,28596f));
	*(&iLocal_434 + 976) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_cows_set");
	*(&iLocal_434 + 960[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "cowv01", 4,203895E-45f, Vector(561,9985f, 86,29778f, 1309,302f), Vector(0.0f, 20.0f, 0.0f), Vector(11,56515f, 5,799623f, 9,141501f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 976, &iLocal_434 + 960[0]);
	*(&iLocal_434 + 1008) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_pigs_set");
	*(&iLocal_434 + 984[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "pigv1", 2,802597E-45f, Vector(805,6634f, 83,80357f, 1404,162f), Vector(0.0f, 0.0f, 0.0f), Vector(13,86579f, 4,348662f, 11,61409f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1008, &iLocal_434 + 984[0]);
	*(&iLocal_434 + 984[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "pigv2", 2,802597E-45f, Vector(792,6331f, 87,97289f, 1452,428f), Vector(0.0f, -5,696201f, 0.0f), Vector(12,54771f, 8,287045f, 15,19059f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1008, &iLocal_434 + 984[1]);
	*(&iLocal_434 + 1048) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_gunShop_set");
	*(&iLocal_434 + 1016[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_gunshop_01", 2,802597E-45f, Vector(774,1391f, 79,00788f, 1318,239f), Vector(0.0f, 269,8509f, 0.0f), Vector(6,0513f, 5,570204f, 8,86475f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1048, &iLocal_434 + 1016[0]);
	*(&iLocal_434 + 1016[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_gunshop_02", 2,802597E-45f, Vector(778,6971f, 80,185f, 1319,976f), Vector(0.0f, 269,8509f, 0.0f), Vector(1,996747f, 1,919043f, 0,2349873f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1048, &iLocal_434 + 1016[1]);
	*(&iLocal_434 + 1016[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_gunshop_03", 2,802597E-45f, Vector(778,681f, 80,185f, 1316,416f), Vector(0.0f, 269,8509f, 0.0f), Vector(1,996747f, 1,919043f, 0,2349873f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1048, &iLocal_434 + 1016[2]);
	*(&iLocal_434 + 1080) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_tailor_set");
	*(&iLocal_434 + 1056[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_tailor_01", 2,802597E-45f, Vector(772,2798f, 79,91953f, 1293,268f), Vector(0.0f, 269,8509f, 0.0f), Vector(6,553066f, 6,51972f, 12,21916f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1080, &iLocal_434 + 1056[0]);
	*(&iLocal_434 + 1056[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_tailor_02", 2,802597E-45f, Vector(778,5352f, 80,04887f, 1294,266f), Vector(0.0f, 269,8509f, 0.0f), Vector(3,566595f, 2,45683f, 0,421526f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1080, &iLocal_434 + 1056[1]);
	*(&iLocal_434 + 1088) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_corral", 2,802597E-45f, Vector(562,2942f, 86,87167f, 1332,205f), Vector(0.0f, 0.0f, 0.0f), Vector(26,4426f, 20,61478f, 24,10768f));
	*(&iLocal_434 + 1112) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_train_platform_set");
	*(&iLocal_434 + 1096[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_train_platform1", 2,802597E-45f, Vector(662,3517f, 81,52242f, 1302,591f), Vector(0.0f, 0.0f, 0.0f), Vector(17,46338f, 8,051627f, 42,10011f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1112, &iLocal_434 + 1096[0]);
	*(&iLocal_434 + 1136) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_anthro_set");
	*(&iLocal_434 + 1120[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_anthro_01", 2,802597E-45f, Vector(752,3961f, 82,25603f, 1278,439f), Vector(0.0f, 0.0f, 0.0f), Vector(15,83952f, 9,6679f, 8,930294f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1136, &iLocal_434 + 1120[0]);
	*(&iLocal_434 + 1160) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_construction_C_set");
	*(&iLocal_434 + 1144[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "construction_C_01", 2,802597E-45f, Vector(723,2885f, 82,33974f, 1221,455f), Vector(0.0f, 0.0f, 0.0f), Vector(14,26601f, 7,143672f, 7,612081f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1160, &iLocal_434 + 1144[0]);
	*(&iLocal_434 + 1216) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_dog_set");
	*(&iLocal_434 + 1168[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "dogv", 4,203895E-45f, Vector(601,3074f, 78,30591f, 1288,111f), Vector(0.0f, -4,385f, 0.0f), Vector(57,46009f, 40,83388f, 99,76994f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1216, &iLocal_434 + 1168[0]);
	*(&iLocal_434 + 1168[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "dogv5", 2,802597E-45f, Vector(767,9095f, 77,91833f, 1324,901f), Vector(0.0f, 0.0f, 0.0f), Vector(78,61015f, 5,613335f, 153,3716f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1216, &iLocal_434 + 1168[1]);
	*(&iLocal_434 + 1168[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "dogv6", 2,802597E-45f, Vector(706,5726f, 75,77726f, 1363,489f), Vector(0.0f, 0.0f, 0.0f), Vector(47,38691f, 10,65252f, 68,62831f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1216, &iLocal_434 + 1168[2]);
	*(&iLocal_434 + 1168[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "dogv8", 4,203895E-45f, Vector(742,5462f, 78,30591f, 1424,712f), Vector(0.0f, 8,458379f, 0.0f), Vector(69,62122f, 40,83388f, 35,96353f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1216, &iLocal_434 + 1168[3]);
	*(&iLocal_434 + 1168[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "dogv9", 4,203895E-45f, Vector(749,7135f, 78,30591f, 1475,305f), Vector(0.0f, 35,8815f, 0.0f), Vector(69,62122f, 40,83388f, 35,96353f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1216, &iLocal_434 + 1168[4]);
	*(&iLocal_434 + 1240) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_saloon_lobby_set");
	*(&iLocal_434 + 1224[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "saloonv_lobby", 2,802597E-45f, Vector(720,5389f, 80,55681f, 1319,615f), Vector(0.0f, 89,99537f, 0.0f), Vector(17,62081f, 4,280502f, 11,8605f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1240, &iLocal_434 + 1224[0]);
	*(&iLocal_434 + 1264) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_theatre_set");
	*(&iLocal_434 + 1248[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "ntheatrev6", 2,802597E-45f, Vector(710,5497f, 82,57385f, 1289,718f), Vector(0.0f, 90,02578f, 0.0f), Vector(20,59159f, 8,113025f, 33,23232f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1264, &iLocal_434 + 1248[0]);
	*(&iLocal_434 + 1304) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_null_set");
	*(&iLocal_434 + 1272[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "null_01", 2,802597E-45f, Vector(659,7327f, 80,66309f, 1314,168f), Vector(0.0f, 0.0f, 0.0f), Vector(3,981915f, 5,151976f, 5,252973f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1304, &iLocal_434 + 1272[0]);
	*(&iLocal_434 + 1272[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "null_02", 2,802597E-45f, Vector(811,4948f, 80,66309f, 1242,025f), Vector(0.0f, 0.0f, 0.0f), Vector(7,153082f, 8,437317f, 12,81722f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1304, &iLocal_434 + 1272[1]);
	*(&iLocal_434 + 1272[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "null_03", 2,802597E-45f, Vector(755,9504f, 79,58879f, 1265,108f), Vector(0.0f, 0.0f, 0.0f), Vector(3,358343f, 3,961287f, 6,017633f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1304, &iLocal_434 + 1272[2]);
	*(&iLocal_434 + 1648) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_generic_set");
	*(&iLocal_434 + 1312[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_01", 2,802597E-45f, Vector(719,0051f, 80,66309f, 1270,237f), Vector(0.0f, 0.0f, 0.0f), Vector(16,3107f, 11,35147f, 17,84992f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[0]);
	*(&iLocal_434 + 1312[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_02", 2,802597E-45f, Vector(755,9504f, 79,58879f, 1265,108f), Vector(0.0f, 0.0f, 0.0f), Vector(3,358343f, 3,961287f, 6,017633f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[1]);
	*(&iLocal_434 + 1312[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_34", 2,802597E-45f, Vector(701,2072f, 80,66309f, 1269f), Vector(0.0f, 0.0f, 0.0f), Vector(14,14371f, 9,843351f, 14,39592f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[2]);
	*(&iLocal_434 + 1312[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_45", 2,802597E-45f, Vector(698,8359f, 80,66309f, 1308,067f), Vector(0.0f, 0.0f, 0.0f), Vector(9,473412f, 6,593044f, 7,940928f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[3]);
	*(&iLocal_434 + 1312[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_48", 2,802597E-45f, Vector(719,137f, 80,66309f, 1306,026f), Vector(0.0f, 0.0f, 0.0f), Vector(16,57833f, 7,39364f, 8,905197f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[4]);
	*(&iLocal_434 + 1312[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_50", 2,802597E-45f, Vector(697,9652f, 80,66309f, 1347,683f), Vector(0.0f, 0.0f, 0.0f), Vector(7,576689f, 6,057273f, 6,696494f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[5]);
	*(&iLocal_434 + 1312[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_51", 2,802597E-45f, Vector(720,0439f, 80,66309f, 1351,682f), Vector(0.0f, 0.0f, 0.0f), Vector(17,60391f, 12,34337f, 18,48228f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[6]);
	*(&iLocal_434 + 1312[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_03", 2,802597E-45f, Vector(710,5839f, 80,66309f, 1347,578f), Vector(0.0f, 0.0f, 0.0f), Vector(3,137462f, 6,98278f, 10,45563f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[7]);
	*(&iLocal_434 + 1312[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_04", 2,802597E-45f, Vector(701,4631f, 80,66309f, 1368,878f), Vector(0.0f, 0.0f, 0.0f), Vector(13,93133f, 6,98278f, 16,21684f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[8]);
	*(&iLocal_434 + 1312[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_05", 2,802597E-45f, Vector(721,9731f, 80,66309f, 1371,314f), Vector(0.0f, 0.0f, 0.0f), Vector(9,571938f, 6,98278f, 7,319722f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[9]);
	*(&iLocal_434 + 1312[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_06", 2,802597E-45f, Vector(672,6883f, 80,66309f, 1372,518f), Vector(0.0f, 0.0f, 0.0f), Vector(12,69705f, 10,3425f, 7,957937f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[10]);
	*(&iLocal_434 + 1312[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_07", 2,802597E-45f, Vector(671,2278f, 80,66309f, 1363,645f), Vector(0.0f, 0.0f, 0.0f), Vector(15,72239f, 6,678134f, 8,588763f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[11]);
	*(&iLocal_434 + 1312[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_08", 2,802597E-45f, Vector(676,0389f, 80,66309f, 1383,852f), Vector(0.0f, 0.0f, 0.0f), Vector(9,710629f, 6,678134f, 7,967698f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[12]);
	*(&iLocal_434 + 1312[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_10", 2,802597E-45f, Vector(628,5198f, 81,94388f, 1374,903f), Vector(0.0f, -4,579623f, 0.0f), Vector(8,048456f, 8,836883f, 13,46529f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[13]);
	*(&iLocal_434 + 1312[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_12", 2,802597E-45f, Vector(601,7166f, 87,01135f, 1374,708f), Vector(0.0f, 27,75126f, 0.0f), Vector(6,865475f, 5,819565f, 8,556458f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[14]);
	*(&iLocal_434 + 1312[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_13", 2,802597E-45f, Vector(623,0494f, 81,94388f, 1338,679f), Vector(0.0f, -0,4369935f, 0.0f), Vector(7,044266f, 8,836883f, 10,06581f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[15]);
	*(&iLocal_434 + 1312[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_14", 2,802597E-45f, Vector(604,4156f, 91,24645f, 1275,856f), Vector(0.0f, -15,9371f, 0.0f), Vector(7,923491f, 14,77712f, 17,17298f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[16]);
	*(&iLocal_434 + 1312[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_15", 2,802597E-45f, Vector(564,4659f, 92,57674f, 1254,814f), Vector(0.0f, -42,71138f, 0.0f), Vector(12,70037f, 14,77712f, 17,17298f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[17]);
	*(&iLocal_434 + 1312[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_16", 2,802597E-45f, Vector(605,0024f, 92,57674f, 1224,546f), Vector(0.0f, -48,25452f, 0.0f), Vector(17,11747f, 14,77712f, 17,17298f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[18]);
	*(&iLocal_434 + 1312[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_17", 2,802597E-45f, Vector(660,7715f, 83,26146f, 1419,815f), Vector(0.0f, 0.0f, 0.0f), Vector(7,472981f, 8,806527f, 9,360711f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[19]);
	*(&iLocal_434 + 1312[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_19", 2,802597E-45f, Vector(711,1942f, 81,13219f, 1414,713f), Vector(0.0f, 12,64984f, 0.0f), Vector(15,38927f, 6,084082f, 9,799738f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[20]);
	*(&iLocal_434 + 1312[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_21", 2,802597E-45f, Vector(734,6071f, 81,13219f, 1413,205f), Vector(0.0f, 12,64984f, 0.0f), Vector(7,565314f, 8,376842f, 12,72061f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[21]);
	*(&iLocal_434 + 1312[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_22", 2,802597E-45f, Vector(750,4719f, 81,61691f, 1409,201f), Vector(0.0f, -0,7728498f, 0.0f), Vector(7,565314f, 7,660175f, 10,20408f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[22]);
	*(&iLocal_434 + 1312[23]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_23", 2,802597E-45f, Vector(788,2316f, 88,30206f, 1412,882f), Vector(0.0f, 11,76387f, 0.0f), Vector(16,85998f, 14,10618f, 16,55526f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[23]);
	*(&iLocal_434 + 1312[24]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_24", 2,802597E-45f, Vector(777,0667f, 94,1466f, 1449,045f), Vector(0.0f, -4,202371f, 0.0f), Vector(14,75591f, 14,10618f, 11,96048f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[24]);
	*(&iLocal_434 + 1312[25]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_25", 2,802597E-45f, Vector(744,9584f, 91,7512f, 1444,467f), Vector(0.0f, 9,579886f, 0.0f), Vector(12,48155f, 11,93197f, 10,11699f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[25]);
	*(&iLocal_434 + 1312[26]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_26", 2,802597E-45f, Vector(724,3195f, 102,9277f, 1499,536f), Vector(0.0f, -10,94988f, 0.0f), Vector(17,59094f, 16,1011f, 13,65195f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[26]);
	*(&iLocal_434 + 1312[27]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_27", 2,802597E-45f, Vector(753,1341f, 82,14568f, 1350,611f), Vector(0.0f, -0,1161031f, 0.0f), Vector(18,73808f, 16,1011f, 12,90974f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[27]);
	*(&iLocal_434 + 1312[28]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_28", 2,802597E-45f, Vector(749,0399f, 82,33894f, 1361,032f), Vector(0.0f, -0,1161031f, 0.0f), Vector(10,38853f, 9,475595f, 7,964375f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[28]);
	*(&iLocal_434 + 1312[29]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_31", 2,802597E-45f, Vector(748,0307f, 80,16731f, 1379,677f), Vector(0.0f, -0,1161031f, 0.0f), Vector(8,000346f, 9,813577f, 6,846375f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[29]);
	*(&iLocal_434 + 1312[30]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_33", 2,802597E-45f, Vector(771,7179f, 80,16731f, 1355,466f), Vector(0.0f, -0,1161031f, 0.0f), Vector(14,04748f, 9,813577f, 16,73632f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[30]);
	*(&iLocal_434 + 1312[31]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_35", 2,802597E-45f, Vector(772,0789f, 80,16731f, 1325,204f), Vector(0.0f, -0,1161031f, 0.0f), Vector(14,04748f, 9,813577f, 8,008526f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[31]);
	*(&iLocal_434 + 1312[32]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_36", 2,802597E-45f, Vector(752,0589f, 80,16731f, 1313,919f), Vector(0.0f, -0,1161031f, 0.0f), Vector(15,86565f, 9,813577f, 8,332936f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[32]);
	*(&iLocal_434 + 1312[33]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_37", 2,802597E-45f, Vector(770,6945f, 82,4274f, 1309,134f), Vector(0.0f, -0,1161031f, 0.0f), Vector(16,29833f, 11,38274f, 11,03976f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[33]);
	*(&iLocal_434 + 1312[34]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_38", 2,802597E-45f, Vector(773,9312f, 80,71098f, 1300,629f), Vector(0.0f, -0,1161031f, 0.0f), Vector(10,34967f, 7,653213f, 7,422611f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[34]);
	*(&iLocal_434 + 1312[35]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_39", 2,802597E-45f, Vector(772,0616f, 80,71098f, 1285,607f), Vector(0.0f, -0,1161031f, 0.0f), Vector(13,70134f, 7,653213f, 7,422611f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[35]);
	*(&iLocal_434 + 1312[36]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_40", 2,802597E-45f, Vector(773,6594f, 80,71098f, 1278,626f), Vector(0.0f, -0,1161031f, 0.0f), Vector(10,09816f, 7,653213f, 7,422611f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[36]);
	*(&iLocal_434 + 1312[37]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_41", 2,802597E-45f, Vector(774,08f, 80,71098f, 1265,002f), Vector(0.0f, -0,1161031f, 0.0f), Vector(9,721198f, 7,653213f, 6,597037f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[37]);
	*(&iLocal_434 + 1312[38]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_42", 2,802597E-45f, Vector(751,1092f, 83,37032f, 1286,902f), Vector(0.0f, -0,1161031f, 0.0f), Vector(17,9842f, 9,982813f, 8,605144f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[38]);
	*(&iLocal_434 + 1312[39]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_43", 2,802597E-45f, Vector(752,6476f, 83,37032f, 1295,584f), Vector(0.0f, -0,1161031f, 0.0f), Vector(15,91635f, 10,47344f, 9,028062f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[39]);
	*(&iLocal_434 + 1312[40]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_44", 2,802597E-45f, Vector(749,8453f, 83,37032f, 1303,44f), Vector(0.0f, -0,1161031f, 0.0f), Vector(16,16646f, 10,47344f, 8,201642f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1648, &iLocal_434 + 1312[40]);
	*(&iLocal_434 + 1672) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_blacksmith_set");
	*(&iLocal_434 + 1656[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "generic_09", 2,802597E-45f, Vector(674,5723f, 80,66309f, 1394,737f), Vector(0.0f, 2,457322f, 0.0f), Vector(12,694f, 6,678134f, 9,48127f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1672, &iLocal_434 + 1656[0]);
	*(&iLocal_434 + 1704) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_seagulls_set");
	*(&iLocal_434 + 1680[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "gulls1", 4,203895E-45f, Vector(851,8363f, 81,89945f, 1296,511f), Vector(0.0f, 0,3603036f, 0.0f), Vector(85,74756f, 41,01292f, 128,9268f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1704, &iLocal_434 + 1680[0]);
	*(&iLocal_434 + 1680[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "gulls2", 4,203895E-45f, Vector(836,9991f, 81,89945f, 1179,526f), Vector(0.0f, 34,21489f, 0.0f), Vector(84,42347f, 38,58218f, 101,1785f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1704, &iLocal_434 + 1680[1]);
	*(&iLocal_434 + 1712) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_blackjack", 2,802597E-45f, Vector(718,5128f, 79,25579f, 1312,409f), Vector(0.0f, 0,4749511f, 0.0f), Vector(4,148842f, 4,148842f, 4,148842f));
	*(&iLocal_434 + 1720) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_poker", 2,802597E-45f, Vector(717,2479f, 79,2292f, 1325,739f), Vector(0.0f, -0,2920592f, 0.0f), Vector(4,792871f, 4,792871f, 4,792871f));
	*(&iLocal_434 + 1760) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_barnyard_set");
	*(&iLocal_434 + 1728[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_barnyard_02", 2,802597E-45f, Vector(560,8457f, 87,39951f, 1322,146f), Vector(0.0f, 0.0f, 0.0f), Vector(27,94673f, 13,51856f, 51,41708f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1760, &iLocal_434 + 1728[0]);
	*(&iLocal_434 + 1728[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_barnyard_03", 2,802597E-45f, Vector(584,4229f, 86,83189f, 1341,847f), Vector(0.0f, 0.0f, 0.0f), Vector(20,67807f, 12,44218f, 12,26767f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1760, &iLocal_434 + 1728[1]);
	*(&iLocal_434 + 1728[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_barnyard_01", 2,802597E-45f, Vector(584,4229f, 86,83189f, 1304,895f), Vector(0.0f, 0.0f, 0.0f), Vector(20,67807f, 11,59534f, 15,81178f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1760, &iLocal_434 + 1728[2]);
	*(&iLocal_434 + 1784) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_fbi_int_set");
	*(&iLocal_434 + 1768[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "fbiv02", 2,802597E-45f, Vector(766,2209f, 82,72511f, 1235,356f), Vector(0.0f, 0.0f, 0.0f), Vector(24,55437f, 9,946985f, 7,307757f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1784, &iLocal_434 + 1768[0]);
	*(&iLocal_434 + 1824) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_bank_int_set");
	*(&iLocal_434 + 1792[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "bankv4", 2,802597E-45f, Vector(687,6222f, 80,49551f, 1234,989f), Vector(0.0f, 89,4097f, 0.0f), Vector(16,99455f, 5,574651f, 5,091676f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1824, &iLocal_434 + 1792[0]);
	*(&iLocal_434 + 1792[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "bankv5", 2,802597E-45f, Vector(690,2325f, 80,49551f, 1228,89f), Vector(0.0f, 89,4097f, 0.0f), Vector(5,077168f, 5,574651f, 5,091676f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1824, &iLocal_434 + 1792[1]);
	*(&iLocal_434 + 1792[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "bankv6", 2,802597E-45f, Vector(690,5524f, 80,49551f, 1240,817f), Vector(0.0f, 89,4097f, 0.0f), Vector(5,077168f, 5,574651f, 5,091676f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1824, &iLocal_434 + 1792[2]);
	*(&iLocal_434 + 1832) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_poker_H", 2,802597E-45f, Vector(748,9402f, 83,85324f, 1267,118f), Vector(0.0f, 90,34145f, 0.0f), Vector(4,798298f, 3,587841f, 4,73581f));
	*(&iLocal_434 + 1840) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_bank_back", 2,802597E-45f, Vector(680,8967f, 82,37836f, 1241,004f), Vector(0.0f, 0.0f, 0.0f), Vector(7,126543f, 6,574588f, 4,640002f));
	*(&iLocal_434 + 1968) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_streetSpawn_set");
	*(&iLocal_434 + 1848[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetSpawn01", 2,802597E-45f, Vector(771,7525f, 78,30585f, 1194,439f), Vector(0.0f, 0.0f, 0.0f), Vector(61,83163f, 36,25699f, 105,7322f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[0]);
	*(&iLocal_434 + 1848[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_1", 2,802597E-45f, Vector(698,3498f, 78,30585f, 1171,227f), Vector(0.0f, 0.0f, 0.0f), Vector(92,81285f, 34,24347f, 77,73894f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[1]);
	*(&iLocal_434 + 1848[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_2", 2,802597E-45f, Vector(736,7742f, 78,27515f, 1294,559f), Vector(0.0f, 0.0f, 0.0f), Vector(21,78906f, 34,24347f, 71,52024f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[2]);
	*(&iLocal_434 + 1848[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_4", 2,802597E-45f, Vector(788,5724f, 78,30589f, 1294,576f), Vector(0.0f, 0.0f, 0.0f), Vector(18,26107f, 34,24347f, 76,04086f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[3]);
	*(&iLocal_434 + 1848[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_5", 2,802597E-45f, Vector(747,422f, 78,30585f, 1365,236f), Vector(0.0f, 0.0f, 0.0f), Vector(104,6321f, 34,54143f, 42,17798f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[4]);
	*(&iLocal_434 + 1848[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_6", 2,802597E-45f, Vector(685,4605f, 78,18396f, 1301,025f), Vector(0.0f, 0.0f, 0.0f), Vector(14,67729f, 34,24347f, 62,36569f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[5]);
	*(&iLocal_434 + 1848[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_7", 2,802597E-45f, Vector(686,7188f, 78,30585f, 1376,857f), Vector(0.0f, 0.0f, 0.0f), Vector(19,91489f, 34,24347f, 37,09056f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[6]);
	*(&iLocal_434 + 1848[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_8", 2,802597E-45f, Vector(686,7984f, 78,30585f, 1344,384f), Vector(0.0f, 0.0f, 0.0f), Vector(20,20308f, 34,24347f, 7,430287f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[7]);
	*(&iLocal_434 + 1848[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_9", 2,802597E-45f, Vector(713,035f, 78,31379f, 1336,31f), Vector(0.0f, 0.0f, 0.0f), Vector(32,85799f, 34,24347f, 19,50919f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[8]);
	*(&iLocal_434 + 1848[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_10", 2,802597E-45f, Vector(761,3331f, 78,30588f, 1335,632f), Vector(0.0f, 0.0f, 0.0f), Vector(37,99918f, 34,24347f, 17,38168f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[9]);
	*(&iLocal_434 + 1848[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_11", 2,802597E-45f, Vector(711,4492f, 78,30646f, 1252,874f), Vector(0.0f, 0.0f, 0.0f), Vector(36,31134f, 34,24347f, 13,88048f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[10]);
	*(&iLocal_434 + 1848[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn02_3", 2,802597E-45f, Vector(669,1378f, 78,27731f, 1238,347f), Vector(0.0f, 0.0f, 0.0f), Vector(17,38816f, 34,24347f, 38,57463f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[11]);
	*(&iLocal_434 + 1848[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn03", 2,802597E-45f, Vector(759,9683f, 78,30585f, 1252,016f), Vector(0.0f, 0.0f, 0.0f), Vector(36,57722f, 36,57722f, 15,36263f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[12]);
	*(&iLocal_434 + 1848[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_streetspawn09", 2,802597E-45f, Vector(713,1572f, 78,30591f, 1403,859f), Vector(0.0f, 8,115254f, 0.0f), Vector(37,81604f, 15,5878f, 19,22191f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 1968, &iLocal_434 + 1848[13]);
	*(&iLocal_434 + 1976) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_theatrePop", 2,802597E-45f, Vector(710,7824f, 80,55675f, 1289,806f), Vector(0.0f, 0.0f, 0.0f), Vector(12,50965f, 7,019596f, 17,49664f));
	*(&iLocal_434 + 1984) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_highStakesSecurity", 2,802597E-45f, Vector(752,1826f, 83,66572f, 1270,208f), Vector(0.0f, 0.0f, 0.0f), Vector(2,989091f, 4,146807f, 6,575893f));
	*(&iLocal_434 + 1992) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_highStakesWhores", 2,802597E-45f, Vector(748,7577f, 83,66572f, 1271,79f), Vector(0.0f, 0.0f, 0.0f), Vector(6,968231f, 4,146807f, 3,084016f));
	*(&iLocal_434 + 2000) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_highStakesPoker_room", 2,802597E-45f, Vector(755,7731f, 84,10152f, 1270,006f), Vector(0.0f, 0.0f, 0.0f), Vector(3,205048f, 2,879115f, 7,246208f));
	*(&iLocal_434 + 2008) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_theatreweather", 2,802597E-45f, Vector(708,415f, 82,56446f, 1289,639f), Vector(0.0f, 0.0f, 0.0f), Vector(25,74156f, 9,408668f, 19,58652f));
	*(&iLocal_434 + 2016) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_graveyardExit", 2,802597E-45f, Vector(515,0563f, 95,67864f, 1194,465f), Vector(0.0f, -93,1861f, 0.0f), Vector(82,11459f, 31,17953f, 170,4347f));
	*(&iLocal_434 + 2048) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_434, "blkv_graveyard_set");
	*(&iLocal_434 + 2024[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "graveyardv1", 2,802597E-45f, Vector(568,5518f, 95,67864f, 1202,722f), Vector(0.0f, -93,1861f, 0.0f), Vector(53,72871f, 31,17953f, 35,36819f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 2048, &iLocal_434 + 2024[0]);
	*(&iLocal_434 + 2024[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "graveyardv2", 2,802597E-45f, Vector(512,3994f, 97,66423f, 1196,842f), Vector(0.0f, 87,16801f, 0.0f), Vector(43,48843f, 13,32846f, 104,0232f));
	ADD_TO_VOLUME_SET(&iLocal_434 + 2048, &iLocal_434 + 2024[1]);
	*(&iLocal_434 + 2056) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_firsttime_talk", 2,802597E-45f, Vector(736,7761f, 80.0f, 1292.0f), Vector(0.0f, 0.0f, 0.0f), Vector(110.0f, 100.0f, 110.0f));
	*(&iLocal_434 + 2064) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_firsttime_start", 2,802597E-45f, Vector(736,7761f, 80.0f, 1292.0f), Vector(0.0f, 0.0f, 0.0f), Vector(170.0f, 100.0f, 170.0f));
	*(&iLocal_434 + 2072) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_firsttime_stream", 2,802597E-45f, Vector(736,7761f, 80.0f, 1292.0f), Vector(0.0f, 0.0f, 0.0f), Vector(340.0f, 100.0f, 340.0f));
	*(&iLocal_434 + 2080) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_434, "blkv_dismount", 4,203895E-45f, Vector(738,7781f, 87,88023f, 1292,274f), Vector(0,8755189f, -1,579979f, -0,455464f), Vector(115,5923f, 48,21666f, 164,5822f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_report_crime", Vector(757,2836f, 78,47209f, 1235,004f), Vector(0.0f, -89,7756f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_jail_leave_end", Vector(757,209f, 78,472f, 1234,862f), Vector(0.0f, 90.0f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_jail_leave_start", Vector(763,437f, 79,456f, 1234,952f), Vector(0.0f, 111,092f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_jail_sit", Vector(772,1412f, 79,45659f, 1242,596f), Vector(0.0f, 364,7601f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_clear_bounty", Vector(662,525f, 78,755f, 1313,455f), Vector(0.0f, 98,16f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_cell_leave_end", Vector(771,335f, 79,456f, 1233,199f), Vector(0.0f, 90,12395f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_cell_leave_cop", Vector(770,4432f, 79,456f, 1238,214f), Vector(0.0f, 259,884f, 0.0f));
	*(&iLocal_434 + 2088) = Vector(813,7691f, 79,59104f, 1227,949f);
	*(&iLocal_434 + 2088 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_434 + 2112) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_respawn_water_05", Vector(813,7691f, 79,59104f, 1227,949f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_434 + 2120) = Vector(857,6336f, 78,46339f, 1236,871f);
	*(&iLocal_434 + 2120 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_434 + 2144) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_respawn_water_06", Vector(857,6336f, 78,46339f, 1236,871f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_434 + 2152) = Vector(814,3057f, 77,23427f, 1286,12f);
	*(&iLocal_434 + 2152 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_434 + 2176) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_respawn_water_07", Vector(814,3057f, 77,23427f, 1286,12f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_434 + 2184) = Vector(815,4921f, 79,56301f, 1259,733f);
	*(&iLocal_434 + 2184 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_434 + 2208) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_respawn_water_014", Vector(815,4921f, 79,56301f, 1259,733f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_434 + 2216) = Vector(839,1734f, 78,4516f, 1250,671f);
	*(&iLocal_434 + 2216 + 12) = Vector(0.0f, -89,03281f, 0.0f);
	*(&iLocal_434 + 2240) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_respawn_water_015", Vector(839,1734f, 78,4516f, 1250,671f), Vector(0.0f, -89,03281f, 0.0f));
	*(&iLocal_434 + 2248) = Vector(775,3324f, 78,69197f, 1318,03f);
	*(&iLocal_434 + 2248 + 12) = Vector(0.0f, -92,75435f, 0.0f);
	*(&iLocal_434 + 2272) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_gunsmith", Vector(775,3324f, 78,69197f, 1318,03f), Vector(0.0f, -92,75435f, 0.0f));
	*(&iLocal_434 + 2280) = Vector(774,2303f, 78,46262f, 1292,043f);
	*(&iLocal_434 + 2280 + 12) = Vector(0.0f, 270,1447f, 0.0f);
	*(&iLocal_434 + 2304) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_tailor", Vector(774,2303f, 78,46262f, 1292,043f), Vector(0.0f, 270,1447f, 0.0f));
	*(&iLocal_434 + 2312) = Vector(750,4651f, 78,18945f, 1265,279f);
	*(&iLocal_434 + 2312 + 12) = Vector(0.0f, 89,57835f, 0.0f);
	*(&iLocal_434 + 2336) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_hotel", Vector(750,4651f, 78,18945f, 1265,279f), Vector(0.0f, 89,57835f, 0.0f));
	*(&iLocal_434 + 2344) = Vector(747,5429f, 78,30585f, 1323,35f);
	*(&iLocal_434 + 2344 + 12) = Vector(0.0f, 89,76045f, 0.0f);
	*(&iLocal_434 + 2368) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_store1", Vector(747,5429f, 78,30585f, 1323,35f), Vector(0.0f, 89,76045f, 0.0f));
	*(&iLocal_434 + 2376) = Vector(741,4055f, 78,32f, 1321,329f);
	*(&iLocal_434 + 2376 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_434 + 2400) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "return_gateway_pos_store1", Vector(741,4055f, 78,32f, 1321,329f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_434 + 2408) = Vector(741,787f, 81,233f, 1324,388f);
	*(&iLocal_434 + 2408 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_434 + 2432) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "camera_cut_pos2_store1", Vector(741,787f, 81,233f, 1324,388f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_434 + 2440) = Vector(738,1561f, 81,384f, 1321,131f);
	*(&iLocal_434 + 2440 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_434 + 2464) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "camera_cut_pos1_store1", Vector(738,1561f, 81,384f, 1321,131f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_434 + 2472) = Vector(743,838f, 78,413f, 1321,586f);
	*(&iLocal_434 + 2472 + 12) = Vector(0.0f, 234,4381f, 0.0f);
	*(&iLocal_434 + 2496) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "return_stand_pos_store1", Vector(743,838f, 78,413f, 1321,586f), Vector(0.0f, 234,4381f, 0.0f));
	*(&iLocal_434 + 2504) = Vector(720,0005f, 78,30585f, 1312.0f);
	*(&iLocal_434 + 2504 + 12) = Vector(0.0f, -91,1851f, 0.0f);
	*(&iLocal_434 + 2528) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_saloon", Vector(720,0005f, 78,30585f, 1312.0f), Vector(0.0f, -91,1851f, 0.0f));
	*(&iLocal_434 + 2536) = Vector(716,3461f, 79,38245f, 1289,751f);
	*(&iLocal_434 + 2536 + 12) = Vector(0.0f, -84,49128f, 0.0f);
	*(&iLocal_434 + 2560) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_theater", Vector(716,3461f, 79,38245f, 1289,751f), Vector(0.0f, -84,49128f, 0.0f));
	*(&iLocal_434 + 2568) = Vector(664,1627f, 78,7551f, 1314,16f);
	*(&iLocal_434 + 2568 + 12) = Vector(0.0f, -90,44082f, 0.0f);
	*(&iLocal_434 + 2592) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_train", Vector(664,1627f, 78,7551f, 1314,16f), Vector(0.0f, -90,44082f, 0.0f));
	*(&iLocal_434 + 2600) = Vector(559,0537f, 94,55469f, 1192,885f);
	*(&iLocal_434 + 2600 + 12) = Vector(0.0f, -46,26857f, 0.0f);
	*(&iLocal_434 + 2624) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_church", Vector(559,0537f, 94,55469f, 1192,885f), Vector(0.0f, -46,26857f, 0.0f));
	*(&iLocal_434 + 2632) = Vector(686,1531f, 79,43501f, 1234,501f);
	*(&iLocal_434 + 2632 + 12) = Vector(0.0f, -91,31918f, 0.0f);
	*(&iLocal_434 + 2656) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_interiorPoint_bank", Vector(686,1531f, 79,43501f, 1234,501f), Vector(0.0f, -91,31918f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos1", Vector(518,503f, 109,865f, 1179,648f), Vector(-8,414f, -125,394f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos2", Vector(885,73f, 99,231f, 1217,082f), Vector(-10,656f, 129,049f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos3", Vector(694,244f, 111,065f, 1524,643f), Vector(-13,252f, -23,584f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos4", Vector(612,272f, 95,593f, 1450,567f), Vector(-9,001f, -35,454f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos5", Vector(780,48f, 99,04f, 1201,082f), Vector(-5,407f, 113,683f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos6", Vector(586,377f, 93,308f, 1162,875f), Vector(17,478f, 141,312f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos7", Vector(728,058f, 80,017f, 1229,739f), Vector(17,785f, -31,731f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos8", Vector(777,901f, 86,397f, 1418,993f), Vector(10,197f, 147,041f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos9", Vector(568,593f, 89,009f, 1344,56f), Vector(2,137f, -72,828f, 0.0f));
	CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blk_vista_cam_pos10", Vector(686,754f, 87,687f, 1323,54f), Vector(-5,394f, 50,819f, 0.0f));
	*(&iLocal_434 + 2664) = Vector(664,3132f, 78,755f, 1315,971f);
	*(&iLocal_434 + 2664 + 12) = Vector(0.0f, 180,7735f, 0.0f);
	*(&iLocal_434 + 2688) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "blkf_merc_giver", Vector(664,3132f, 78,755f, 1315,971f), Vector(0.0f, 180,7735f, 0.0f));
	*(&iLocal_434 + 2696) = Vector(741,746f, 78,425f, 1328,435f);
	*(&iLocal_434 + 2696 + 12) = Vector(0.0f, -90.0f, 0.0f);
	*(&iLocal_434 + 2720) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_434, "horse_pos_store1", Vector(741,746f, 78,425f, 1328,435f), Vector(0.0f, -90.0f, 0.0f));
	return 1;
}

void Function_455(int iParam0, int iParam1) //Position: 0x1BE6D / 114285
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

void Function_456(var uParam0, int iParam1) //Position: 0x1BEB7 / 114359
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_457() //Position: 0x1BEC8 / 114376
{
	return;
}

bool Function_458() //Position: 0x1BECE / 114382
{
	return 1;
}

void Function_459() //Position: 0x1BED5 / 114389
{
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 2, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(15, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 4, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 6, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(4, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 8, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(6, 13, 2);
	SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(8, 13, 2);
	return;
}

bool Function_460() //Position: 0x1BF41 / 114497
{
	if (Function_462())
	{
		Function_461();
		return 1;
	}
	return 0;
}

void Function_461() //Position: 0x1BF53 / 114515
{
	int iVar0;
	
	Local_1706.f_16 = 2;
	Local_1706.f_20 = 3;
	*(&Local_1706 + 48) = Vector(530,885f, 94,369f, 1198,078f);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		*(&Local_1706 + 68[iVar0]) = &iLocal_178 + 488[iVar0];
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		*(&Local_1706 + 116[iVar0]) = &iLocal_178 + 544[iVar0];
		iVar0++;
	}
	*(&Local_1706 + 248) = &iLocal_178 + 984;
	Local_1706.f_264 = 0;
	if (Function_242(Global_46948) >= 0)
	{
		Local_1706.f_256 = 0;
	}
	else
	{
		Local_1706.f_256 = 1;
	}
	Local_1706.f_260 = 3;
	return;
}

bool Function_462() //Position: 0x1C000 / 114688
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	Function_455(3, 3);
	uVar0 = &uVar0;
	Function_190(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_roof_rfl", 1, 0);
	Function_190(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_stand_rfl", 1, 0);
	Function_190(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/dlc_survivor_low_wall_rfl", 1, 0);
	Function_190(&iLocal_178 + 8, "$/content/scripting/gringo/simplegringo/zombiepack_player_sleep_bed_l", 1, 0);
	if (!Function_185(&iLocal_178 + 8))
	{
		return 0;
	}
	iLocal_178 = FIND_NAMED_LAYOUT("Blackwater_layout");
	if (!IS_LAYOUTREF_VALID(&iLocal_178))
	{
		iLocal_178 = CREATE_LAYOUT("Blackwater_layout");
	}
	*(&iLocal_178 + 80) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "triggerSurvivorSystem", 2,802597E-45f, Vector(701,5436f, 78,30585f, 1276,022f), Vector(0.0f, 0.0f, 0.0f), Vector(514,5482f, 76,93849f, 308,338f));
	*(&iLocal_178 + 88) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_1", 2,802597E-45f, Vector(754,5334f, 79,03398f, 1267,851f), Vector(0.0f, 0.0f, 0.0f), Vector(22,03567f, 31,08453f, 14,29633f));
	*(&iLocal_178 + 96) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_2", 2,802597E-45f, Vector(770,935f, 81,89222f, 1322,242f), Vector(0.0f, 0.0f, 0.0f), Vector(16,18164f, 12,50009f, 14,29633f));
	*(&iLocal_178 + 104) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_3", 2,802597E-45f, Vector(771,5578f, 81,89222f, 1286,797f), Vector(0.0f, 0.0f, 0.0f), Vector(17,58543f, 12,50009f, 52,37956f));
	*(&iLocal_178 + 112) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_4", 2,802597E-45f, Vector(752,1559f, 81,89222f, 1301,85f), Vector(0.0f, 0.0f, 0.0f), Vector(16,18164f, 12,50009f, 54,72323f));
	*(&iLocal_178 + 120) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_5", 2,802597E-45f, Vector(810,863f, 84,06447f, 1241,816f), Vector(0.0f, 0.0f, 0.0f), Vector(11,73523f, 12,50009f, 14,57157f));
	*(&iLocal_178 + 128) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_6", 2,802597E-45f, Vector(788,2883f, 88,54328f, 1413,228f), Vector(0.0f, 11,06068f, 0.0f), Vector(11,61341f, 12,50009f, 12,33151f));
	*(&iLocal_178 + 136) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_7", 2,802597E-45f, Vector(778,6614f, 92,08953f, 1449,433f), Vector(0.0f, -5,638336f, 0.0f), Vector(11,61341f, 16,66179f, 12,33151f));
	*(&iLocal_178 + 144) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_8", 2,802597E-45f, Vector(718,062f, 81,89222f, 1295,245f), Vector(0.0f, 0.0f, 0.0f), Vector(18,82863f, 16,3222f, 68,70721f));
	*(&iLocal_178 + 152) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_9", 2,802597E-45f, Vector(736,8108f, 81,89222f, 1191,287f), Vector(0.0f, 0.0f, 0.0f), Vector(48,51094f, 13,39699f, 27,44732f));
	*(&iLocal_178 + 160) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_10", 2,802597E-45f, Vector(769,8707f, 82,4599f, 1234,892f), Vector(0.0f, 0.0f, 0.0f), Vector(21,22429f, 13,39699f, 19,77503f));
	*(&iLocal_178 + 168) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_11", 2,802597E-45f, Vector(719,0986f, 82,4599f, 1351,841f), Vector(0.0f, 0.0f, 0.0f), Vector(15,56211f, 13,39699f, 18,23576f));
	*(&iLocal_178 + 176) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_13", 2,802597E-45f, Vector(701,5168f, 82,4599f, 1369,143f), Vector(0.0f, 0.0f, 0.0f), Vector(15,56211f, 13,39699f, 17,38514f));
	*(&iLocal_178 + 184) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_14", 2,802597E-45f, Vector(721,2412f, 81,93707f, 1368,902f), Vector(0.0f, 0.0f, 0.0f), Vector(11,49411f, 13,39699f, 15,90847f));
	*(&iLocal_178 + 192) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_15", 2,802597E-45f, Vector(761,6038f, 81,93707f, 1353,956f), Vector(0.0f, 0.0f, 0.0f), Vector(37,48207f, 13,39699f, 24,20335f));
	*(&iLocal_178 + 200) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_16", 2,802597E-45f, Vector(751,1933f, 81,93707f, 1375,006f), Vector(0.0f, 0.0f, 0.0f), Vector(16,73852f, 13,39699f, 17,59374f));
	*(&iLocal_178 + 208) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_17", 2,802597E-45f, Vector(698,0447f, 80,81419f, 1348,198f), Vector(0.0f, 0.0f, 0.0f), Vector(8,150702f, 9,862112f, 8,96517f));
	*(&iLocal_178 + 216) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_18", 2,802597E-45f, Vector(700,642f, 81,89222f, 1287,333f), Vector(0.0f, 0.0f, 0.0f), Vector(16,00434f, 16,3222f, 52,00218f));
	*(&iLocal_178 + 224) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_19", 2,802597E-45f, Vector(672,0278f, 81,89222f, 1332,706f), Vector(0.0f, 0.0f, 0.0f), Vector(13,51831f, 16,3222f, 17,85074f));
	*(&iLocal_178 + 232) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_20", 2,802597E-45f, Vector(662,7478f, 81,89222f, 1314,307f), Vector(0.0f, 0.0f, 0.0f), Vector(14,95818f, 16,3222f, 18,89109f));
	*(&iLocal_178 + 240) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_21", 2,802597E-45f, Vector(671,6304f, 81,89222f, 1368,071f), Vector(0.0f, 0.0f, 0.0f), Vector(17,68105f, 16,3222f, 18,89109f));
	*(&iLocal_178 + 248) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_22", 2,802597E-45f, Vector(674,1426f, 81,89222f, 1389,913f), Vector(0.0f, 0.0f, 0.0f), Vector(14,42173f, 16,3222f, 22,32273f));
	*(&iLocal_178 + 256) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_23", 2,802597E-45f, Vector(711,5789f, 81,89222f, 1414,993f), Vector(0.0f, -77,20113f, 0.0f), Vector(11,03058f, 7,535629f, 22,32273f));
	*(&iLocal_178 + 264) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_24", 2,802597E-45f, Vector(742,3478f, 81,89222f, 1411,446f), Vector(0.0f, -82,28098f, 0.0f), Vector(15,06627f, 7,535629f, 25,89932f));
	*(&iLocal_178 + 272) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_25", 2,802597E-45f, Vector(661,2703f, 81,89222f, 1419,683f), Vector(0.0f, -90,83127f, 0.0f), Vector(11,76671f, 11,55919f, 9,236011f));
	*(&iLocal_178 + 280) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_26", 2,802597E-45f, Vector(627,3466f, 81,89222f, 1375,064f), Vector(0.0f, -95,06596f, 0.0f), Vector(15,47339f, 16,90226f, 11,91588f));
	*(&iLocal_178 + 288) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_27", 2,802597E-45f, Vector(602,0614f, 81,89222f, 1374,206f), Vector(0.0f, -64,3229f, 0.0f), Vector(15,47339f, 16,90226f, 11,91588f));
	*(&iLocal_178 + 296) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_28", 2,802597E-45f, Vector(623,5632f, 81,89222f, 1339,584f), Vector(0.0f, -89,38726f, 0.0f), Vector(13,4279f, 16,90226f, 10,15464f));
	*(&iLocal_178 + 304) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_29", 2,802597E-45f, Vector(583,9124f, 88,18353f, 1324,891f), Vector(0.0f, -89,38726f, 0.0f), Vector(25,57564f, 16,90226f, 19,136f));
	*(&iLocal_178 + 312) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_30", 2,802597E-45f, Vector(604,1472f, 88,18353f, 1276,176f), Vector(0.0f, -104,0415f, 0.0f), Vector(18,64487f, 16,90226f, 9,276472f));
	*(&iLocal_178 + 320) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_31", 2,802597E-45f, Vector(564,4509f, 91,28577f, 1255,504f), Vector(0.0f, -134,8178f, 0.0f), Vector(18,64487f, 16,90226f, 15,12299f));
	*(&iLocal_178 + 328) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "SpawnRestrict_32", 2,802597E-45f, Vector(604,7711f, 91,28577f, 1224,323f), Vector(0.0f, -138,8027f, 0.0f), Vector(18,64487f, 16,90226f, 18,46247f));
	*(&iLocal_178 + 336) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_1", 2,802597E-45f, Vector(718,0458f, 81,89222f, 1314,451f), Vector(0.0f, 0.0f, 0.0f), Vector(18,59654f, 16,3222f, 25,71696f));
	*(&iLocal_178 + 344) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_2", 2,802597E-45f, Vector(753,1475f, 81,89222f, 1266,68f), Vector(0.0f, 0.0f, 0.0f), Vector(20,43948f, 16,3222f, 13,4232f));
	*(&iLocal_178 + 352) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_3", 2,802597E-45f, Vector(719,7505f, 81,89222f, 1351,856f), Vector(0.0f, 0.0f, 0.0f), Vector(17,55804f, 16,3222f, 18,80357f));
	*(&iLocal_178 + 360) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_4", 2,802597E-45f, Vector(709,1932f, 81,89222f, 1280,848f), Vector(0.0f, 0.0f, 0.0f), Vector(36,14334f, 16,3222f, 38,49687f));
	*(&iLocal_178 + 368) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_5", 2,802597E-45f, Vector(769,4438f, 84,0359f, 1235,024f), Vector(0.0f, 0.0f, 0.0f), Vector(19,81414f, 14,38264f, 18,42144f));
	*(&iLocal_178 + 376) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_6", 2,802597E-45f, Vector(787,855f, 84,0359f, 1412,756f), Vector(0.0f, 11,638f, 0.0f), Vector(11,22855f, 23,157f, 11,34812f));
	*(&iLocal_178 + 384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_7", 2,802597E-45f, Vector(701,287f, 81,89222f, 1369,088f), Vector(0.0f, 0.0f, 0.0f), Vector(15,10512f, 16,3222f, 16,77639f));
	*(&iLocal_178 + 392) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_8", 2,802597E-45f, Vector(662,8776f, 81,89222f, 1314,426f), Vector(0.0f, 0.0f, 0.0f), Vector(11,37235f, 16,3222f, 17,0849f));
	*(&iLocal_178 + 400) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_178, "MoveRestrict_9", 2,802597E-45f, Vector(750,6041f, 81,89222f, 1409,512f), Vector(0.0f, 0.0f, 0.0f), Vector(8,985372f, 11,34808f, 10,88084f));
	*(&iLocal_178 + 408) = CREATE_OBJECTSET_IN_LAYOUT("SurvivorGroup1_defSet", &iLocal_178, 8, 0);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "BLK_def2", Vector(695,33f, 84,87696f, 1284,561f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&uVar1, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_178 + 408);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "BLK_def3", Vector(695,2338f, 84,88f, 1298,307f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&uVar2, "GiveWeapon", 44);
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_178 + 408);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "BLK_def1_core", Vector(695,2228f, 84,87891f, 1281,323f), Vector(0.0f, 90.0f, 0.0f));
	DECOR_SET_INT(&uVar3, "GiveWeapon", 44);
	DECOR_SET_BOOL(&uVar3, "Core", 1);
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_178 + 408);
	*(&iLocal_178 + 416) = CREATE_OBJECTSET_IN_LAYOUT("SurvivorGroup1_safeSet", &iLocal_178, 8, 0);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nBLK_safe1", Vector(694,345f, 84,87891f, 1281,323f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_178 + 416);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nBLK_safe2", Vector(694,473f, 84,87696f, 1284,561f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_178 + 416);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nBLK_safe3", Vector(696,0092f, 84,83648f, 1296,946f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_178 + 416);
	*(&iLocal_178 + 424) = CREATE_OBJECTSET_IN_LAYOUT("nchestsSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 432[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "chest_2", Vector(677,308f, 83,50591f, 1227,112f), Vector(0.0f, -135.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 432[0], &iLocal_178 + 424);
	*(&iLocal_178 + 448) = Vector(760,5018f, 86,90958f, 1271,963f);
	*(&iLocal_178 + 448 + 12) = Vector(0.0f, -90.0f, 0.0f);
	*(&iLocal_178 + 472) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "player_save_01", Vector(760,5018f, 86,90958f, 1271,963f), Vector(0.0f, -90.0f, 0.0f));
	*(&iLocal_178 + 480) = CREATE_OBJECTSET_IN_LAYOUT("coffinSpawnsSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 488[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_0", Vector(549,8986f, 94,2186f, 1192.0f), Vector(0.0f, -265,7521f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 488[0], &iLocal_178 + 480);
	*(&iLocal_178 + 488[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_1", Vector(519,9999f, 95,12469f, 1204.0f), Vector(0.0f, -98,51028f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 488[1], &iLocal_178 + 480);
	*(&iLocal_178 + 488[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_2", Vector(495,9843f, 94,311f, 1188,071f), Vector(0.0f, -90,72598f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 488[2], &iLocal_178 + 480);
	*(&iLocal_178 + 488[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_3", Vector(469,3133f, 98,6019f, 1200.0f), Vector(0.0f, 12,39842f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 488[3], &iLocal_178 + 480);
	*(&iLocal_178 + 488[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "CoffinFlag_4", Vector(488,274f, 97,23036f, 1206,911f), Vector(-8,122568f, -85,13523f, 6,886539f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 488[4], &iLocal_178 + 480);
	*(&iLocal_178 + 536) = CREATE_OBJECTSET_IN_LAYOUT("zombieSpawnsSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 544[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_0", Vector(537,9926f, 94,36859f, 1200,726f), Vector(0.0f, -90,72598f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[0], &iLocal_178 + 536);
	*(&iLocal_178 + 544[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_1", Vector(538,0598f, 94,36859f, 1197,94f), Vector(0.0f, -90,72598f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[1], &iLocal_178 + 536);
	*(&iLocal_178 + 544[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_2", Vector(537,8795f, 94,36859f, 1195,216f), Vector(0.0f, -90,72598f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[2], &iLocal_178 + 536);
	*(&iLocal_178 + 544[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_3", Vector(537,8151f, 94,36859f, 1192,359f), Vector(0.0f, -90,72598f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[3], &iLocal_178 + 536);
	*(&iLocal_178 + 544[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_4", Vector(525,9158f, 94,36859f, 1199,322f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[4], &iLocal_178 + 536);
	*(&iLocal_178 + 544[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_5", Vector(522,0606f, 94,85532f, 1199,322f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[5], &iLocal_178 + 536);
	*(&iLocal_178 + 544[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_6", Vector(517,1386f, 95,18188f, 1199,105f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[6], &iLocal_178 + 536);
	*(&iLocal_178 + 544[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_7", Vector(513,1426f, 95,70654f, 1198,857f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[7], &iLocal_178 + 536);
	*(&iLocal_178 + 544[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_8", Vector(527,5528f, 94,36859f, 1195,045f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[8], &iLocal_178 + 536);
	*(&iLocal_178 + 544[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "nz_spawn_9", Vector(524,3365f, 94,36859f, 1195,437f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[9], &iLocal_178 + 536);
	*(&iLocal_178 + 544[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_10", Vector(520,366f, 94,65339f, 1195,409f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[10], &iLocal_178 + 536);
	*(&iLocal_178 + 544[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_11", Vector(516,32f, 95,29221f, 1195,68f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[11], &iLocal_178 + 536);
	*(&iLocal_178 + 544[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_12", Vector(525,9407f, 94,24622f, 1191,504f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[12], &iLocal_178 + 536);
	*(&iLocal_178 + 544[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_13", Vector(520,9338f, 94,30061f, 1191,495f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[13], &iLocal_178 + 536);
	*(&iLocal_178 + 544[14]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_14", Vector(516,899f, 94,78615f, 1191,561f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[14], &iLocal_178 + 536);
	*(&iLocal_178 + 544[15]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_15", Vector(514,0285f, 94,8174f, 1191,549f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[15], &iLocal_178 + 536);
	*(&iLocal_178 + 544[16]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_16", Vector(528,2914f, 93,3646f, 1187,708f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[16], &iLocal_178 + 536);
	*(&iLocal_178 + 544[17]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_17", Vector(524,3463f, 93,77219f, 1187,654f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[17], &iLocal_178 + 536);
	*(&iLocal_178 + 544[18]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_18", Vector(520,3496f, 94,26744f, 1187,585f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[18], &iLocal_178 + 536);
	*(&iLocal_178 + 544[19]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_19", Vector(515,4617f, 94,28661f, 1187,573f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[19], &iLocal_178 + 536);
	*(&iLocal_178 + 544[20]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_20", Vector(493,8216f, 95,53751f, 1199,221f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[20], &iLocal_178 + 536);
	*(&iLocal_178 + 544[21]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_21", Vector(489,9596f, 95,92699f, 1199,457f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[21], &iLocal_178 + 536);
	*(&iLocal_178 + 544[22]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_22", Vector(486,0927f, 96,37646f, 1199,622f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[22], &iLocal_178 + 536);
	*(&iLocal_178 + 544[23]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_23", Vector(481,2227f, 97,54697f, 1199,373f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[23], &iLocal_178 + 536);
	*(&iLocal_178 + 544[24]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_24", Vector(491,5925f, 95,63563f, 1195,595f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[24], &iLocal_178 + 536);
	*(&iLocal_178 + 544[25]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_25", Vector(487,5227f, 95,83676f, 1195,528f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[25], &iLocal_178 + 536);
	*(&iLocal_178 + 544[26]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_26", Vector(484,1803f, 96,33928f, 1195,704f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[26], &iLocal_178 + 536);
	*(&iLocal_178 + 544[27]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_27", Vector(480,3238f, 96,77772f, 1195,72f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[27], &iLocal_178 + 536);
	*(&iLocal_178 + 544[28]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_28", Vector(494,088f, 94,70947f, 1191,59f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[28], &iLocal_178 + 536);
	*(&iLocal_178 + 544[29]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_29", Vector(489,9848f, 95,39673f, 1191,508f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[29], &iLocal_178 + 536);
	*(&iLocal_178 + 544[30]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_30", Vector(486,1131f, 95,76262f, 1191,543f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[30], &iLocal_178 + 536);
	*(&iLocal_178 + 544[31]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_31", Vector(481,1115f, 96,26715f, 1191,498f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[31], &iLocal_178 + 536);
	*(&iLocal_178 + 544[32]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_32", Vector(492,3056f, 94,49518f, 1187,465f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[32], &iLocal_178 + 536);
	*(&iLocal_178 + 544[33]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_33", Vector(487,6063f, 94,90971f, 1187,321f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[33], &iLocal_178 + 536);
	*(&iLocal_178 + 544[34]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_34", Vector(484,2368f, 95,42692f, 1187,408f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[34], &iLocal_178 + 536);
	*(&iLocal_178 + 544[35]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_35", Vector(479,221f, 95,90733f, 1187,673f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[35], &iLocal_178 + 536);
	*(&iLocal_178 + 544[36]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "z_spawn_36", Vector(473,2255f, 98,3242f, 1198,651f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 544[36], &iLocal_178 + 536);
	*(&iLocal_178 + 848) = CREATE_OBJECTSET_IN_LAYOUT("AmmoExchangeSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 856[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Ammo1", Vector(696,2446f, 84,87891f, 1281,317f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 856[0], &iLocal_178 + 848);
	*(&iLocal_178 + 856[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Ammo2", Vector(694,845f, 84,87891f, 1281,323f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 856[1], &iLocal_178 + 848);
	*(&iLocal_178 + 856[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Ammo3", Vector(696,3719f, 84,87696f, 1284,556f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 856[2], &iLocal_178 + 848);
	*(&iLocal_178 + 856[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Ammo4", Vector(694,973f, 84,87696f, 1284,561f), Vector(0.0f, 270.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 856[3], &iLocal_178 + 848);
	*(&iLocal_178 + 856[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Ammo5", Vector(696,3559f, 84,88029f, 1298,314f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 856[4], &iLocal_178 + 848);
	*(&iLocal_178 + 856[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "Ammo6", Vector(694,9557f, 84,88f, 1298,307f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 856[5], &iLocal_178 + 848);
	*(&iLocal_178 + 912) = CREATE_OBJECTSET_IN_LAYOUT("BodiesFlagSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 920[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "BodiesFlag01", Vector(703,2864f, 78,306f, 1318,995f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 920[0], &iLocal_178 + 912);
	*(&iLocal_178 + 920[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "BodiesFlag02", Vector(726,222f, 78,521f, 1225,048f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 920[1], &iLocal_178 + 912);
	*(&iLocal_178 + 944) = CREATE_OBJECTSET_IN_LAYOUT("NormalFlagSet", &iLocal_178, 8, 0);
	*(&iLocal_178 + 952[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "NormalFlag01", Vector(693,0386f, 84,53831f, 1236,743f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 952[0], &iLocal_178 + 944);
	*(&iLocal_178 + 952[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "NormalFlag02", Vector(693,0275f, 84,53855f, 1232,961f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 952[1], &iLocal_178 + 944);
	*(&iLocal_178 + 952[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "NormalFlag03", Vector(669,6278f, 88,76215f, 1314,132f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_178 + 952[2], &iLocal_178 + 944);
	*(&iLocal_178 + 984) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "gy_Boss_spawn", Vector(533,24f, 94,369f, 1200,666f), Vector(0.0f, 90,915f, 0.0f));
	*(&iLocal_178 + 992) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "DLC_survivor_roof_rfl", "DLC_survivor_roof_rfl", Vector(695,0573f, 84,87891f, 1281,34f), Vector(0.0f, 87,97826f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 992), 0);
	*(&iLocal_178 + 1000) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "DLC_survivor_stand_rfl", "DLC_survivor_stand_rfl", Vector(694,4941f, 84,87696f, 1286,594f), Vector(0.0f, 90.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 1000), 0);
	*(&iLocal_178 + 1008) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "DLC_survivor_low_wall_rfl", "DLC_survivor_low_wall_rfl", Vector(695,9702f, 84,88029f, 1296,948f), Vector(0.0f, -90.0f, 0.0f));
	GRINGO_ENABLE_SPAWN(GET_GRINGO_FROM_OBJECT(&iLocal_178 + 1008), 0);
	*(&iLocal_178 + 1016) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_178, "ZombiePack_player_sleep_bed_L", "ZombiePack_player_sleep_bed_L", Vector(759,0798f, 86,91051f, 1269,05f), Vector(0.0f, 90.0f, 0.0f));
	return 1;
}

void Function_463(bool bParam0, bool bParam1) //Position: 0x1DFE8 / 122856
{
	var uVar0;
	
	if (Global_6623 || Function_53(0x8000000))
	{
		return;
	}
	uVar0 = Function_56(bParam0);
	if ((bParam0 != Global_46838[1] || bParam0 != Global_46894[1]) || bParam0 != Global_46914[1])
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else if (&bParam1)
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "SUSPENSE_DARK", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	else
	{
		AUDIO_MUSIC_FORCE_TRACK(&uVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	}
	return;
}

void Function_464(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E083 / 123011
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	
	Function_43(&iParam0 + 608, 16);
	if (!&bParam2)
	{
		if (!Function_465(bParam1))
		{
			Function_217(&iParam0 + 608, 16);
			return;
		}
	}
	*(&iParam0 + 624) = Function_219(0, bParam1, 3);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1[iVar0] = 4294967295;
		iVar0++;
	}
	iVar10 = Function_113(&iVar1, bParam1);
	iVar0 = 0;
	while (iVar0 < (iVar10 - 1))
	{
		if (iVar1[iVar0] >= 0)
		{
			Function_405(&iParam0 + 384, iVar1[iVar0], 3, 1);
		}
		iVar0++;
	}
	if (&bParam2)
	{
		Function_190(&iParam0 + 384, "tense_with_guns", 5, 1);
		Function_190(&iParam0 + 384, "custom/tense_with_guns", 8, 1);
	}
	else
	{
		*(&iParam0 + 376) = 1;
	}
	Function_185(&iParam0 + 384);
	if (HUD_IS_FADED())
	{
		Function_58(bParam1, Function_28(bParam1));
	}
	RAND_SET_SEED(FLOOR(GET_CURRENT_GAME_TIME()));
	return;
}

bool Function_465(int iParam0) //Position: 0x1E18F / 123279
{
	if ((iParam0 != Global_46816[2] || iParam0 != Global_46796[4]) || iParam0 != Global_46796[2])
	{
		return 0;
	}
	if ((iParam0 != Global_46850[0] && (!Function_468(&Global_6667[328] + 184, 2) || Global_6623)) && !Function_218(3, 0))
	{
		return 0;
	}
	if (Global_6606)
	{
		if (!Function_467(0))
		{
			return 0;
		}
		if ((!Function_51(24) || Function_466(24)) && iParam0 != Global_46866[1])
		{
			return 0;
		}
	}
	return 1;
}

int Function_466(int iParam0) //Position: 0x1E20A / 123402
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_467(int iParam0) //Position: 0x1E21F / 123423
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_49(iParam0)7].f_12 < 0;
}

bool Function_468(int iParam0, int iParam1) //Position: 0x1E285 / 123525
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_469() //Position: 0x1E2A2 / 123554
{
	SET_DUST_LEVEL(0);
	Function_190(&iLocal_1666, "$/tune/refGroups/campsiteSets/cam_deadBody01x", 7, 0);
	Function_190(&iLocal_1666, "$/tune/refGroups/campsiteSets/cam_deadBody02x", 7, 0);
	return;
}

void Function_470(char* cParam0) //Position: 0x1E31F / 123679
{
	if (!Function_53(128))
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

bool Function_471() //Position: 0x1E35C / 123740
{
	return Function_30(Global_21684[Function_219(111, 111, 5)7].f_20, 4);
}

