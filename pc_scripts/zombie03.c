//Decompiled with MagicRDR v1.0
//Function Count : 568
//Statics Count : 1676
//Natives Count : 678
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 2;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 10;
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
	var uLocal_58 = 4;
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
	var uLocal_76 = 3;
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
	var uLocal_90 = 1;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 1;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 1;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 1;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 2;
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
	var uLocal_150 = 2;
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
	var uLocal_162 = 1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 1;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 1;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 3;
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
	var uLocal_200 = 1;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 2;
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
	var uLocal_220 = 1;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 1;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 1;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 1;
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
	var uLocal_280 = 4;
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
	var uLocal_292 = 1;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 2;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 2;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 12;
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
	var uLocal_342 = 23;
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
	var uLocal_392 = 17;
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
	var uLocal_430 = 10;
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
	var uLocal_454 = 6;
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
	var uLocal_470 = 5;
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
	var uLocal_484 = 9;
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
	var uLocal_506 = 2;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 14;
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
	var uLocal_548 = 1;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 1;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 1;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 1;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 4;
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
	var uLocal_584 = 3;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 6;
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
	var uLocal_610 = 8;
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
	var uLocal_630 = 3;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 1;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 5;
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
	var uLocal_660 = 1;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 2;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 3;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 4;
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
	var uLocal_696 = 8;
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
	var uLocal_716 = 1;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 7;
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
	var uLocal_740 = 3;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 4;
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
	var uLocal_762 = 1;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 2;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 6;
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
	var uLocal_792 = 1;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 4;
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
	var uLocal_810 = 2;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 5;
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
	var uLocal_832 = 5;
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
	var uLocal_846 = 12;
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
	var uLocal_874 = 5;
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
	bool bLocal_904 = false;
	int iLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	struct<6> Local_908 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	int iLocal_920 = 17;
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
	int iLocal_998 = 0;
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
	bool bLocal_1010 = false;
	int iLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	int iLocal_1014 = 0;
	var uLocal_1015 = 13;
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
	struct<15> Local_1069[3];
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 5;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 5;
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
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	int iLocal_1169[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	bool bLocal_1191 = false;
	bool bLocal_1192 = false;
	bool bLocal_1193 = false;
	int iLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	int iLocal_1197 = 1;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	int iLocal_1208 = 0;
	int iLocal_1209[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	int iLocal_1239 = 0;
	var uLocal_1240 = 0;
	int iLocal_1241 = 0;
	var uLocal_1242 = 0;
	int iLocal_1243 = 0;
	var uLocal_1244 = 0;
	int iLocal_1245 = 0;
	var uLocal_1246 = 0;
	int iLocal_1247 = 0;
	var uLocal_1248 = 0;
	int iLocal_1249 = 0;
	var uLocal_1250 = 0;
	int iLocal_1251 = 0;
	var uLocal_1252 = 0;
	int iLocal_1253 = 0;
	var uLocal_1254 = 0;
	int iLocal_1255 = 0;
	var uLocal_1256 = 0;
	int iLocal_1257 = 0;
	var uLocal_1258 = 0;
	int iLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	int iLocal_1263 = 0;
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
	int iLocal_1275[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1295[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1315[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1335[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_1355 = false;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	bool bLocal_1358 = false;
	int iLocal_1359 = 0;
	bool bLocal_1360 = false;
	int iLocal_1361 = 0;
	int iLocal_1362[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	int iLocal_1374[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	int iLocal_1386[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	int iLocal_1398[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	int iLocal_1424 = 27;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
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
	bool bLocal_1534 = false;
	var uLocal_1535 = 0;
	bool bLocal_1536 = false;
	var uLocal_1537 = 0;
	bool bLocal_1538 = false;
	var uLocal_1539 = 0;
	bool bLocal_1540 = false;
	var uLocal_1541 = 0;
	bool bLocal_1542 = false;
	var uLocal_1543 = 0;
	bool bLocal_1544 = false;
	var uLocal_1545 = 0;
	bool bLocal_1546 = false;
	var uLocal_1547 = 0;
	bool bLocal_1548 = false;
	var uLocal_1549 = 0;
	bool bLocal_1550 = false;
	var uLocal_1551 = 0;
	bool bLocal_1552 = false;
	var uLocal_1553 = 0;
	bool bLocal_1554 = false;
	var uLocal_1555 = 0;
	bool bLocal_1556 = false;
	var uLocal_1557 = 0;
	struct<2> Local_1558 = { 0, 0 } ;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	int iLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	int iLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	int iLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	int iLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	int iLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	int iLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	int iLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	int iLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	int iLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	int iLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	int iLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	int iLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	int iLocal_1610 = 0;
	bool bLocal_1611 = false;
	int iLocal_1612 = 0;
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	int iLocal_1617 = 0;
	int iLocal_1618 = 0;
	int iLocal_1619 = 0;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
	int iLocal_1624 = 0;
	int iLocal_1625 = 0;
	bool bLocal_1626 = false;
	int iLocal_1627 = 0;
	int iLocal_1628 = 0;
	int iLocal_1629 = 0;
	int iLocal_1630 = 0;
	int iLocal_1631 = 0;
	bool bLocal_1632 = false;
	int iLocal_1633 = 0;
	int iLocal_1634 = 0;
	int iLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	struct<2> Local_1661 = { 0, 0 } ;
	var uLocal_1663 = 0;
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
	bLocal_904 = 2696;
	iLocal_905 = 0;
	iLocal_1014 = 1;
	iLocal_1203 = 0;
	iLocal_1204 = 0;
	iLocal_1205 = 1;
	iLocal_1206 = 1;
	iLocal_1207 = 0;
	iLocal_1614 = 1;
	Local_1661 = Vector(0.0f, 0.0f, 0.0f);
	Local_908 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_1010 = 99;
	iLocal_1011 = 6;
	iLocal_998 = 1000;
	Function_567(0);
	while (Function_227())
	{
		Function_185();
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x72 / 114
{
	int iVar0;
	
	Function_184(&uLocal_906);
	Function_184(&iLocal_4);
	Function_183();
	if (bLocal_1626)
	{
		Function_179(0, 0, 15);
	}
	Function_178();
	Function_176(1);
	Function_175();
	Function_174();
	Function_173();
	Function_172();
	Function_171();
	Function_170();
	Function_166(&iLocal_1197);
	Function_164();
	Function_163();
	Function_162();
	if (IS_OBJECTSET_VALID(&uLocal_1273))
	{
		DESTROY_OBJECTSET(&uLocal_1273);
	}
	if (IS_OBJECT_VALID(&iLocal_1263))
	{
		DESTROY_OBJECT(&iLocal_1263);
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (IS_OBJECT_VALID(&(uLocal_1638[iVar0])))
		{
			DESTROY_OBJECT(&(uLocal_1638[iVar0]));
		}
		iVar0++;
	}
	Function_161(0);
	ENABLE_CHILD_SECTOR("esc_villa01x");
	ENABLE_CHILD_SECTOR("esc_villaPatio01props01x");
	ENABLE_CHILD_SECTOR("esc_villaPatio01x");
	ENABLE_CHILD_SECTOR("esc_villa01props01x");
	ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
	ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
	ENABLE_CHILD_SECTOR("esc_villaWall01x");
	ENABLE_CHILD_SECTOR("esc_villaWall02x");
	ENABLE_CHILD_SECTOR("esc_villaWall03x");
	ENABLE_CHILD_SECTOR("esc_villaWall04x");
	ENABLE_CHILD_SECTOR("esc_villaWall01props01x");
	ENABLE_CHILD_SECTOR("esc_villaPost01x");
	ENABLE_CHILD_SECTOR("esc_villaPost01props01x");
	ENABLE_CHILD_SECTOR("esc_villaPost02x");
	ENABLE_CHILD_SECTOR("esc_villaPost02props01x");
	DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1659, 0);
	Function_131(bLocal_1192, 1, 1, 1, 1, 0, 1, 0);
	Function_166(&iLocal_920);
	Function_130();
	Function_128();
	if (IS_ITERATOR_VALID(&uLocal_1012))
	{
		DESTROY_ITERATOR(&uLocal_1012);
	}
	RELEASE_LAYOUT_REF(&uLocal_906);
	if (bLocal_1191)
	{
		Function_26(Local_908, 1, 1, 1, 0);
	}
	else if (bLocal_1192)
	{
		PRINTSTRING("Number of zombies reported killed on mission fail: ");
		PRINTINT(bLocal_1360);
		PRINTNL();
		Function_22(Local_908);
	}
	else
	{
		Function_2(Local_908);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x329 / 809
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x34A / 842
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x367 / 871
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x38A / 906
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x3A1 / 929
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

void Function_7(int iParam0) //Position: 0x443 / 1091
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x466 / 1126
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

void Function_9() //Position: 0x4B0 / 1200
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x4C9 / 1225
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

void Function_11(var uParam0, bool bParam1) //Position: 0x51C / 1308
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

struct<16> Function_12(int iParam0) //Position: 0x646 / 1606
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

bool Function_13() //Position: 0x680 / 1664
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x69B / 1691
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x6A8 / 1704
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x6C8 / 1736
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x6DF / 1759
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x6FA / 1786
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x941 / 2369
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x96D / 2413
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

bool Function_21(int iParam0) //Position: 0x991 / 2449
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x9A6 / 2470
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x9C4 / 2500
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

struct<16> Function_24(int iParam0) //Position: 0xA6A / 2666
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

struct<24> Function_25(char* cParam0) //Position: 0xAA9 / 2729
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

void Function_26(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xCFF / 3327
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
		Function_127(&(Global_6667[iVar228]));
		Function_126(4194304);
		if (&bParam3)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		else if (&bParam4)
		{
			Function_123(iVar2, &uVar0, 0);
		}
		uVar1 = Function_122();
		if (&bParam1)
		{
			Function_100(iVar2, bParam0, uVar1);
			Function_99();
		}
	}
	Global_53524.f_64 = 0;
	Global_53524.f_68 = 0;
	Global_21684[bParam07].f_32 = TO_FLOAT(GET_TIME_OF_DAY_AS_INT());
	Function_42(bParam0, &bParam1, &uParam2, uVar1);
	if (Function_17(bParam0) == 1)
	{
		if (&bParam1)
		{
		}
	}
	Function_28(0);
	iVar2 = Function_15(bParam0);
	if (iVar2 == 1)
	{
		Function_27("ZOMBIE_STORY_1_SHORT", (7,5f + 5.0f), 1, 2, 0, 0, 0, 0);
	}
	else if (iVar2 == 2)
	{
		Function_27("ZOMBIE_STORY_4_SHORT", 7,5f, 1, 2, 0, 0, 0, 0);
	}
}

void Function_27(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xE0E / 3598
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

void Function_28(int iParam0) //Position: 0xEA3 / 3747
{
	int iVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_39(1, 0))
	{
		Function_37("ZOMBIE_STORY_1_OBJ");
		if (!Function_36(2))
		{
			iVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_36(4) && !Function_34(0))
	{
		iVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_36(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_2Nigel_OBJ");
		Function_37("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_36(8) && !Function_36(6))
		{
			iVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_36(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_36(8))
		{
			iVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_36(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_36(6))
		{
			iVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_31(&Global_6667[228] + 184, 2) || ((((((Function_36(14) && Function_36(18)) && Function_36(37)) && Function_36(7)) && Function_36(11)) && Function_36(5)) && Function_36(21)))
	{
		Function_37("ZOMBIE_STORY_3_OBJ");
		if (!Function_39(2, 0))
		{
			iVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_39(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_4_OBJ");
		if (!Function_36(24))
		{
			iVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_31(&Global_6667[328] + 184, 2) || ((Function_36(27) && Function_36(1)) && Function_36(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_37("ZOMBIE_STORY_5_OBJ");
		if (!Function_39(3, 0))
		{
			iVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_39(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_36(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[243].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[443].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[343].f_224);
		bVar1 = false;
		if (Function_36(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[243] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[243].f_224, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_36(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_36(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_99725[443] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_30(Global_46948)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[443].f_224, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_30(Global_46948) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[443].f_224, "blackwater3_OBJ", 4, 0);
			}
			if (Function_30(Global_46948) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_29(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_29(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_36(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[343].f_224, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_36(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[343].f_224, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_36(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_99725[643].f_224);
		CLEAR_JOURNAL_ENTRY(Global_99725[743].f_224);
		if (Function_36(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[643].f_224, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_36(6) && Function_30(Global_46949) < 0) && Function_30(Global_46951) < 0) && Function_30(Global_46952) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[643].f_224, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[743].f_224, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_36(11))
	{
		if (Function_36(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_99725[843].f_224);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_29(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_29(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_29(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_29(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_29(491) <= 5 && Function_29(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_36(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[843].f_224, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[943].f_224, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_36(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_99725[943].f_224, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_99725[1043].f_224, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(&iVar0))
	{
		Function_27(&iVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_29(int iParam0) //Position: 0x17C4 / 6084
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[iParam0]);
}

int Function_30(bool bParam0) //Position: 0x1805 / 6149
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

bool Function_31(int iParam0, int iParam1) //Position: 0x181F / 6175
{
	int iVar0;
	
	iVar0 = (iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_32() //Position: 0x183C / 6204
{
	return STRING_TO_HASH(Function_33());
}

var Function_33() //Position: 0x1848 / 6216
{
	return "ZOMBIE_STORY";
}

bool Function_34(int iParam0) //Position: 0x185D / 6237
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_35(iParam0)7].f_12 < 0;
}

int Function_35(int iParam0) //Position: 0x18C3 / 6339
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

bool Function_36(int iParam0) //Position: 0x1985 / 6533
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_37(int iParam0) //Position: 0x199A / 6554
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_32(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_33(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_32(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_32(), &iParam0, 0, 3, false);
	Function_38(Function_32(), 0);
	return;
}

void Function_38(bool bParam0, bool bParam1) //Position: 0x19E3 / 6627
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

bool Function_39(int iParam0, bool bParam1) //Position: 0x1A08 / 6664
{
	int iVar0;
	
	iVar0 = Function_40(iParam0);
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

int Function_40(int iParam0) //Position: 0x1A46 / 6726
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_41(int iParam0) //Position: 0x1A60 / 6752
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_42(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1A76 / 6774
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
		if (Function_98())
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
		if (Function_98())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_94();
		CLEAR_JOURNAL_ENTRY(bVar11);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(bVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(bVar11, true);
		}
	}
	if (Function_98())
	{
		Function_93();
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
			Function_87(bParam0);
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
			Function_43(bParam0, &Var14);
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

void Function_43(int iParam0, struct<41> Param1) //Position: 0x1CD4 / 7380
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_44(var uParam0, int iParam1) //Position: 0x1D12 / 7442
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

void Function_45(bool bParam0) //Position: 0x1D51 / 7505
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
	Function_47();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_46(&Global_99144, 1);
		Function_46(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_46(int iParam0, bool bParam1) //Position: 0x1DA6 / 7590
{
	iParam0 = (iParam0 - (iParam0 && bParam1));
	return;
}

void Function_47() //Position: 0x1DBC / 7612
{
	Function_74();
	Function_73();
	Function_73();
	Function_72();
	Function_72();
	Function_71();
	Function_71();
	Function_55(0);
	Function_55(0);
	Function_52();
	Function_51();
	Function_50();
	Function_49();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_48();
	return;
}

void Function_48() //Position: 0x1E07 / 7687
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

void Function_49() //Position: 0x1F0D / 7949
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

void Function_50() //Position: 0x1F40 / 8000
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

void Function_51() //Position: 0x20D3 / 8403
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

void Function_52() //Position: 0x228C / 8844
{
	Function_53(&Global_42918, 1, 0);
	return;
}

void Function_53(struct<2317> Param0) //Position: 0x229A / 8858
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
	
	uVar0 = Function_54();
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

bool Function_54() //Position: 0x24B7 / 9399
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_55(int iParam0) //Position: 0x24CC / 9420
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
					iVar2 = ((Function_29((50 + iVar4)) + Function_29((183 + iVar4))) + Function_29((90 + iVar4)));
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
	Function_56(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_56(int iParam0, bool bParam1, bool bParam2) //Position: 0x2573 / 9587
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
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_57(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x280F / 10255
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
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_59(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_58(), &Var9);
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

var Function_58() //Position: 0x2E4D / 11853
{
	int iVar0;
	
	return &iVar0;
}

var Function_59(int iParam0) //Position: 0x2E56 / 11862
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_60(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2E67 / 11879
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

struct<32> Function_61(char* cParam0) //Position: 0x2F5E / 12126
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_62(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2F79 / 12153
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_64(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_63(Function_64(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_63(int iParam0, int iParam1) //Position: 0x2FE0 / 12256
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_64(int iParam0, bool bParam1) //Position: 0x2FF2 / 12274
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_65(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x3004 / 12292
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

int Function_66(int iParam0) //Position: 0x3138 / 12600
{
	return Global_55480[iParam016].f_96;
}

float Function_67(int iParam0) //Position: 0x3147 / 12615
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_68(int iParam0) //Position: 0x3180 / 12672
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_69(int iParam0) //Position: 0x31BD / 12733
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

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x3357 / 13143
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

struct<8> Function_71() //Position: 0x359B / 13723
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
		iVar2 = ((Function_29((50 + iVar3) + 15) + Function_29((183 + iVar3) + 15)) + Function_29((90 + iVar3) + 15));
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
	Function_56(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_72() //Position: 0x3624 / 13860
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
			iVar2 = ((Function_29((50 + iVar3) + 8) + Function_29((183 + iVar3) + 8)) + Function_29((90 + iVar3) + 8));
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
	Function_56(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_73() //Position: 0x36BB / 14011
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
		iVar2 = ((Function_29((50 + iVar3)) + Function_29((183 + iVar3))) + Function_29((90 + iVar3)));
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
	Function_56(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_74() //Position: 0x373A / 14138
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_75(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_56(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_75(int iParam0, bool bParam1, int iParam2) //Position: 0x3777 / 14199
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
		Function_57(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_76() //Position: 0x3983 / 14723
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

bool Function_77(vector3 vParam0) //Position: 0x3A3A / 14906
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_78(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3A52 / 14930
{
	int iVar0;
	
	iVar0 = Function_82(&uParam2, &uParam3);
	if (Function_81(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_80(&Global_99144, 1);
			Function_46(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_80(&Global_99144, 2);
			Function_46(&Global_99144, 1);
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
		Function_46(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_79();
	return StackVal, Function_79();
}

struct<8> Function_79() //Position: 0x3B4A / 15178
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_80(int iParam0, bool bParam1) //Position: 0x3B54 / 15188
{
	iParam0 = (iParam0 || bParam1);
	return;
}

bool Function_81(int iParam0) //Position: 0x3B65 / 15205
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_82(bool bParam0, bool bParam1) //Position: 0x3B7B / 15227
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

float Function_83(struct<2> Param0, struct<2> Param2) //Position: 0x3C47 / 15431
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_84(float fParam0, int iParam1) //Position: 0x3C64 / 15460
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
	Function_46(&Global_99144, 1);
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

bool Function_85(int iParam0) //Position: 0x4492 / 17554
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_86(var uParam0, int iParam1) //Position: 0x44CD / 17613
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_87(bool bParam0) //Position: 0x44DC / 17628
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
				Function_91(12, 1, 0, 0);
				Function_90(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_91(13, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_91(14, 1, 0, 0);
				Function_90(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_91(15, 1, 0, 0);
				Function_90(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_91(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_15(bParam0))
			{
				case 0x00000000:
					if (Function_30(bParam0) == 1)
					{
						iVar0 = Function_89(bParam0);
						if (Function_88(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_90(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_90(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_90(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_90(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_90(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_90(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_90(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_90(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_90(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_90(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_90(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_90(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_90(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_90(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_90(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_90(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_90(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_90(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_90(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_90(4, 19);
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
								Function_91(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_91(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_91(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_89(bParam0) == 0)
			{
				if (Function_30(bParam0) == 1)
				{
					Function_91(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_88(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_90(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_90(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_90(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_90(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_90(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_90(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_90(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_90(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_30(bParam0) == 1)
			{
				Function_91(400, 1, 0, 0);
			}
			switch (Function_15(bParam0))
			{
				case 0x00000001:
					Function_91(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_90(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_90(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_90(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_91(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_90(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_90(6, 9);
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

bool Function_88(int iParam0) //Position: 0x49B8 / 18872
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_89(bool bParam0) //Position: 0x49CE / 18894
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

void Function_90(int iParam0, int iParam1) //Position: 0x49ED / 18925
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

int Function_91(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4A57 / 19031
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
		Function_57(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_92(iParam0);
	return 1;
}

void Function_92(int iParam0) //Position: 0x4C7F / 19583
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

void Function_93() //Position: 0x4D1D / 19741
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
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

void Function_94() //Position: 0x4E7F / 20095
{
	int iVar0;
	int iVar1;
	
	if (!Function_41(Global_10966))
	{
		return;
	}
	iVar0 = Function_29(24);
	iVar1 = Function_40(Global_10966);
	if (!Function_41(iVar0) && Function_97(iVar1) < 0)
	{
		Function_56(24, Global_10966, 0);
		Function_95(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_97(Function_40(iVar0)))
	{
		Function_56(24, Global_10966, 0);
		Function_95(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_95(int iParam0, char* cParam1) //Position: 0x4EFF / 20223
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
		Function_96(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_96(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x5256 / 21078
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

int Function_97(int iParam0) //Position: 0x52DE / 21214
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_98() //Position: 0x52F8 / 21240
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_99() //Position: 0x5323 / 21283
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

void Function_100(int iParam0, int iParam1, bool bParam2) //Position: 0x5351 / 21329
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
	
	if (!Function_41(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_121(iParam0);
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
				bVar0 = (Function_29(42) - Global_53524.f_168);
				bVar1 = (Function_29(27) - Global_53524.f_172);
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
				bVar3 = (Function_29(49) - Global_53524.f_180);
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
				bVar4 = (Function_29(355) - Global_53524.f_168);
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
		iVar15 = Function_120(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_101(50, 1, 0);
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

void Function_101(int iParam0, bool bParam1, bool bParam2) //Position: 0x55ED / 21997
{
	int iVar0;
	bool bVar1;
	
	if (Function_119(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_98())
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
	iVar0 = Function_29(3);
	Function_116();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_114(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_113(Global_119936, 4))
			{
				Function_108(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_91(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_67(3));
	iVar0 = Function_29(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_103(4, Function_107(Global_21369.f_248), 1);
				Function_102(Global_21369.f_244, Global_21369.f_248);
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

void Function_102(int iParam0, int iParam1) //Position: 0x57C1 / 22465
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

int Function_103(int iParam0, char* cParam1) //Position: 0x5A2B / 23083
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
	Function_95(iParam0, &cParam1, 0, 1);
	iVar1 = Function_104();
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

int Function_104() //Position: 0x5BBB / 23483
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
	Function_105();
	return 0;
}

void Function_105() //Position: 0x5C5C / 23644
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
		Function_106(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_106(int iParam0) //Position: 0x5D1A / 23834
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

var Function_107(int iParam0) //Position: 0x5D80 / 23936
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

void Function_108(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5E0F / 24079
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_110(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_109(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_109(char* cParam0) //Position: 0x5E84 / 24196
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

bool Function_110(int iParam0, var uParam1, int iParam2) //Position: 0x5EBE / 24254
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
		if (Function_112(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_111(uVar0))
		{
			case 0x00000002:
				if (!Function_113(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_111(char* cParam0) //Position: 0x5F3A / 24378
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

int Function_112(int iParam0) //Position: 0x5FDB / 24539
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_46(&iVar1, 2147483648);
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

bool Function_113(var uParam0, int iParam1) //Position: 0x6018 / 24600
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_114(int iParam0, bool bParam1) //Position: 0x602B / 24619
{
	bool bVar0;
	int iVar1;
	
	Function_91(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_115(iParam0, 4294967295);
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
	iVar1 = Function_104();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_115(int iParam0, int iParam1) //Position: 0x61D7 / 25047
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

void Function_116() //Position: 0x621C / 25116
{
	Function_118(3, 0.0f);
	Function_117(3, 10000.0f);
	return;
}

int Function_117(int iParam0, int iParam1) //Position: 0x6232 / 25138
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_118(int iParam0, int iParam1) //Position: 0x6272 / 25202
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_119(int iParam0) //Position: 0x62B2 / 25266
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_120(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x62C1 / 25281
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

int Function_121(int iParam0) //Position: 0x6489 / 25737
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

var Function_122() //Position: 0x651E / 25886
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_123(int iParam0, var uParam1, bool bParam2) //Position: 0x6543 / 25923
{
	struct<4> Var0;
	
	uParam1 = uParam1;
	if (!Function_41(iParam0))
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
			Function_124(21, &bParam2, 0);
			Function_124(16, &bParam2, 0);
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

int Function_124(bool bParam0, bool bParam1, int iParam2) //Position: 0x65E5 / 26085
{
	if (!Function_125(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_54(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_54(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_54(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_125(int iParam0) //Position: 0x663F / 26175
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_126(bool bParam0) //Position: 0x6651 / 26193
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

void Function_127(struct<185> Param0) //Position: 0x6685 / 26245
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
			Function_179(4, 0, 0);
		}
	}
	return;
}

void Function_128() //Position: 0x66F0 / 26352
{
	Function_129();
	return;
}

void Function_129() //Position: 0x66F9 / 26361
{
	Function_166(&iLocal_4 + 8);
	Function_166(&iLocal_4 + 48);
	Function_166(&iLocal_4 + 216);
	Function_166(&iLocal_4 + 288);
	Function_166(&iLocal_4 + 344);
	Function_166(&iLocal_4 + 368);
	Function_166(&iLocal_4 + 392);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_130() //Position: 0x673A / 26426
{
	Function_166(&iLocal_1424);
	return;
}

void Function_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x6746 / 26438
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_160());
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
	Function_159();
	CLEAR_PRINTED_OBJECTIVE();
	Function_158();
	Function_156(0);
	Function_155();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_154();
	Function_153();
	Function_159();
	ENABLE_JOURNAL_REPLAY(1);
	Function_152(1);
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
		Function_151(&Global_54076);
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
	Function_147(Global_42825);
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
	Function_146();
	Function_145(1178687);
	Function_143(33039);
	Function_142(0x218003f);
	Function_141(4194560);
	Function_140();
	Function_139();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_134(0, 1, 1);
	}
	else
	{
		Function_134(0, 1, 1);
	}
	Function_132();
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
	Function_46(&Global_21369 + 72 + 32, 16);
}

void Function_132() //Position: 0x694F / 26959
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_133(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x6979 / 27001
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_134(int iParam0, bool bParam1, int iParam2) //Position: 0x6993 / 27027
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
			Function_138(&(Global_43791[Global_43789]), 131072);
			Function_133(&(Global_43791[Global_43789]), 2097152);
			Function_136(Global_43789);
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
				if (Function_135(&(Global_43791[iVar0]), 4) || Function_135(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_133(&(Global_43791[iVar0]), 2097155);
					Function_138(&(Global_43791[iVar0]), 262144);
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

bool Function_135(var uParam0, int iParam1) //Position: 0x6A9F / 27295
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_136(int iParam0) //Position: 0x6ABC / 27324
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_137())
			{
				return;
			}
		}
		if (!Function_135(&(Global_43791[iParam0]), 2048))
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

bool Function_137() //Position: 0x6B3B / 27451
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_135(&(Global_43791[iVar0]), 4) || Function_135(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_138(var uParam0, int iParam1) //Position: 0x6BA4 / 27556
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_139() //Position: 0x6BB5 / 27573
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

void Function_140() //Position: 0x6BDB / 27611
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

void Function_141(int iParam0) //Position: 0x6C01 / 27649
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_142(int iParam0) //Position: 0x6C1E / 27678
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_143(int iParam0) //Position: 0x6C31 / 27697
{
	Function_144(&Global_43580, iParam0);
	return;
}

void Function_144(var uParam0, int iParam1) //Position: 0x6C3F / 27711
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_145(bool bParam0) //Position: 0x6C5E / 27742
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_146() //Position: 0x6C8B / 27787
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

void Function_147(int iParam0) //Position: 0x6D03 / 27907
{
	int iVar0;
	int iVar1;
	
	if (!Function_150(iParam0))
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
		Function_148(78, 1, 1);
		if (!Function_113(Global_119935, 64))
		{
			Function_108(&Global_54076, 64, 2, 0);
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

int Function_148(bool bParam0, bool bParam1, int iParam2) //Position: 0x6E39 / 28217
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_149(bParam0), Function_54()) == 0)
		{
			ADD_ITEM(Function_149(bParam0), Function_54(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_149(bParam0), Function_54(), &iParam2);
	return 1;
}

var Function_149(bool bParam0) //Position: 0x6E87 / 28295
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

bool Function_150(int iParam0) //Position: 0x6F7B / 28539
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_151(int iParam0) //Position: 0x6F91 / 28561
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

void Function_152(bool bParam0) //Position: 0x7014 / 28692
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

void Function_153() //Position: 0x708B / 28811
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

void Function_154() //Position: 0x70CF / 28879
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

void Function_155() //Position: 0x7113 / 28947
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_156(int iParam0) //Position: 0x7129 / 28969
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_157())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_157() //Position: 0x7169 / 29033
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

void Function_158() //Position: 0x718E / 29070
{
	Global_15862 = 0.0f;
	return;
}

void Function_159() //Position: 0x7198 / 29080
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

int Function_160() //Position: 0x71C3 / 29123
{
	var uVar0;
	
	uVar0 = Function_54();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_161(bool bParam0) //Position: 0x71E0 / 29152
{
	if (bParam0)
	{
		if (!bLocal_1611)
		{
			DISABLE_CHILD_SECTOR("esc_generalhouse02props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse02x");
			DISABLE_CHILD_SECTOR("esc_generalhouse03props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse03x");
			DISABLE_CHILD_SECTOR("esc_generalhouse04props01x");
			DISABLE_CHILD_SECTOR("esc_generalhouse04x");
			DISABLE_CHILD_SECTOR("esc_blacksmith01x");
			DISABLE_CHILD_SECTOR("esc_blacksmith01props01x");
			DISABLE_CHILD_SECTOR("esc_cantina01props01x");
			DISABLE_CHILD_SECTOR("esc_cantina01x");
			DISABLE_CHILD_SECTOR("esc_courtyard01props01x");
			DISABLE_CHILD_SECTOR("esc_courtyard01x");
			DISABLE_CHILD_SECTOR("esc_doctor01x");
			DISABLE_CHILD_SECTOR("esc_doctor01props01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01x");
			DISABLE_CHILD_SECTOR("esc_generalstore01props01x");
			DISABLE_CHILD_SECTOR("esc_gunsmith01props01x");
			DISABLE_CHILD_SECTOR("esc_gunsmith01x");
			DISABLE_CHILD_SECTOR("esc_stable01x");
			DISABLE_CHILD_SECTOR("esc_stable01props01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01x");
			DISABLE_CHILD_SECTOR("esc_trashPile01props01x");
			DISABLE_CHILD_SECTOR("esc_whorehouse01props01x");
			DISABLE_CHILD_SECTOR("esc_whorehouse01x");
			DISABLE_CHILD_SECTOR("esc_church01props01x");
			DISABLE_CHILD_SECTOR("esc_church01x");
			DISABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
			DISABLE_CHILD_SECTOR("esc_villaBaracks01x");
			DISABLE_CHILD_SECTOR("esc_tent01props01x");
			DISABLE_CHILD_SECTOR("esc_tent01x");
			DISABLE_CHILD_SECTOR("esc_shack01props01x");
			DISABLE_CHILD_SECTOR("esc_shack01x");
			DISABLE_CHILD_SECTOR("esc_tent01x");
			DISABLE_CHILD_SECTOR("esc_tent02x");
			DISABLE_CHILD_SECTOR("esc_tent01props01x");
			DISABLE_CHILD_SECTOR("esc_tent02props01x");
			bLocal_1611 = true;
		}
	}
	else if (bLocal_1611)
	{
		ENABLE_CHILD_SECTOR("esc_generalhouse02props01x");
		ENABLE_CHILD_SECTOR("esc_generalhouse02x");
		ENABLE_CHILD_SECTOR("esc_generalhouse03props01x");
		ENABLE_CHILD_SECTOR("esc_generalhouse03x");
		ENABLE_CHILD_SECTOR("esc_generalhouse04props01x");
		ENABLE_CHILD_SECTOR("esc_generalhouse04x");
		ENABLE_CHILD_SECTOR("esc_blacksmith01x");
		ENABLE_CHILD_SECTOR("esc_blacksmith01props01x");
		ENABLE_CHILD_SECTOR("esc_cantina01props01x");
		ENABLE_CHILD_SECTOR("esc_cantina01x");
		ENABLE_CHILD_SECTOR("esc_courtyard01props01x");
		ENABLE_CHILD_SECTOR("esc_courtyard01x");
		ENABLE_CHILD_SECTOR("esc_doctor01x");
		ENABLE_CHILD_SECTOR("esc_doctor01props01x");
		ENABLE_CHILD_SECTOR("esc_generalstore01x");
		ENABLE_CHILD_SECTOR("esc_generalstore01props01x");
		ENABLE_CHILD_SECTOR("esc_gunsmith01props01x");
		ENABLE_CHILD_SECTOR("esc_gunsmith01x");
		ENABLE_CHILD_SECTOR("esc_stable01x");
		ENABLE_CHILD_SECTOR("esc_stable01props01x");
		ENABLE_CHILD_SECTOR("esc_trashPile01x");
		ENABLE_CHILD_SECTOR("esc_trashPile01props01x");
		ENABLE_CHILD_SECTOR("esc_whorehouse01props01x");
		ENABLE_CHILD_SECTOR("esc_whorehouse01x");
		ENABLE_CHILD_SECTOR("esc_church01props01x");
		ENABLE_CHILD_SECTOR("esc_church01x");
		ENABLE_CHILD_SECTOR("esc_villaBaracks01props01x");
		ENABLE_CHILD_SECTOR("esc_villaBaracks01x");
		ENABLE_CHILD_SECTOR("esc_tent01props01x");
		ENABLE_CHILD_SECTOR("esc_tent01x");
		ENABLE_CHILD_SECTOR("esc_shack01props01x");
		ENABLE_CHILD_SECTOR("esc_shack01x");
		ENABLE_CHILD_SECTOR("esc_tent01x");
		ENABLE_CHILD_SECTOR("esc_tent02x");
		ENABLE_CHILD_SECTOR("esc_tent01props01x");
		ENABLE_CHILD_SECTOR("esc_tent02props01x");
		bLocal_1611 = false;
	}
	return;
}

void Function_162() //Position: 0x78F7 / 30967
{
	if (IS_OBJECT_VALID(&uLocal_1271))
	{
		DESTROY_OBJECT(&uLocal_1271);
	}
	return;
}

void Function_163() //Position: 0x790E / 30990
{
	if (IS_OBJECT_VALID(&uLocal_1267))
	{
		DESTROY_OBJECT(&uLocal_1267);
	}
	return;
}

void Function_164() //Position: 0x7925 / 31013
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (IS_DOOR_VALID(&(uLocal_1638[iVar0])))
		{
			if (IS_DOOR_LOCKED(&(uLocal_1638[iVar0])))
			{
				Function_165(&(uLocal_1638[iVar0]), 0);
			}
		}
		iVar0++;
	}
	return;
}

void Function_165(var uParam0, int iParam1) //Position: 0x7969 / 31081
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

void Function_166(int iParam0) //Position: 0x79C1 / 31169
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_167(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_167(struct<2>[] Param0, int iParam1) //Position: 0x79E9 / 31209
{
	if (Function_169(&(Param0[iParam12]), 4))
	{
		if (Function_169(&(Param0[iParam12]), 1))
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
			Function_168(&(Param0[iParam12]), 1);
			Function_168(&(Param0[iParam12]), 2);
			Function_168(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_168(struct<13> Param0) //Position: 0x7B34 / 31540
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_169(struct<13> Param0) //Position: 0x7B51 / 31569
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_170() //Position: 0x7B6F / 31599
{
	Function_166(&iLocal_4 + 368);
	return;
}

void Function_171() //Position: 0x7B7D / 31613
{
	Function_166(&iLocal_4 + 344);
	return;
}

void Function_172() //Position: 0x7B8B / 31627
{
	Function_166(&iLocal_4 + 288);
	return;
}

void Function_173() //Position: 0x7B99 / 31641
{
	Function_166(&iLocal_4 + 216);
	return;
}

void Function_174() //Position: 0x7BA6 / 31654
{
	Function_166(&iLocal_4 + 48);
	return;
}

void Function_175() //Position: 0x7BB3 / 31667
{
	Function_166(&iLocal_4 + 392);
	return;
}

void Function_176(bool bParam0) //Position: 0x7BC1 / 31681
{
	if (SQUAD_IS_VALID(&bLocal_1534))
	{
		Function_177(&bLocal_1534);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1534);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1536))
	{
		Function_177(&bLocal_1536);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1536);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1538))
	{
		Function_177(&bLocal_1538);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1538);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1540))
	{
		Function_177(&bLocal_1540);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1540);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1542))
	{
		Function_177(&bLocal_1542);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1542);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1544))
	{
		Function_177(&bLocal_1544);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1544);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1546))
	{
		Function_177(&bLocal_1546);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1546);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1548))
	{
		Function_177(&bLocal_1548);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1548);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1550))
	{
		Function_177(&bLocal_1550);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1550);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1552))
	{
		Function_177(&bLocal_1552);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1552);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1556))
	{
		Function_177(&bLocal_1556);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1556);
		}
	}
	if (SQUAD_IS_VALID(&bLocal_1554))
	{
		Function_177(&bLocal_1554);
		if (&bParam0)
		{
			DESTROY_OBJECT(&bLocal_1554);
		}
	}
	return;
}

void Function_177(bool bParam0) //Position: 0x7D23 / 32035
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

void Function_178() //Position: 0x7D71 / 32113
{
	if (IS_ACTORSET_VALID(&iLocal_1257))
	{
		DESTROY_ACTORSET(&iLocal_1257);
	}
	if (IS_ACTORSET_VALID(&iLocal_1259))
	{
		DESTROY_ACTORSET(&iLocal_1259);
	}
	if (IS_ACTOR_VALID(&uLocal_1233))
	{
		DESTROY_ACTOR(&uLocal_1233);
	}
	if (IS_ACTOR_VALID(&uLocal_1237))
	{
		DESTROY_ACTOR(&uLocal_1237);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 472[02]))
	{
		DESTROY_ACTOR(&iLocal_4 + 472[02]);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 504[02]))
	{
		DESTROY_ACTOR(&iLocal_4 + 504[02]);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 576))
	{
		Function_177(&iLocal_4 + 576);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 624))
	{
		Function_177(&iLocal_4 + 624);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 656))
	{
		Function_177(&iLocal_4 + 656);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 688))
	{
		Function_177(&iLocal_4 + 688);
	}
	if (IS_OBJECT_VALID(&uLocal_1261))
	{
		DESTROY_OBJECT(&uLocal_1261);
	}
	if (IS_ACTOR_VALID(&iLocal_1243))
	{
		DESTROY_ACTOR(&iLocal_1243);
	}
	if (IS_ACTOR_VALID(&iLocal_1245))
	{
		DESTROY_ACTOR(&iLocal_1245);
	}
	if (IS_ACTOR_VALID(&iLocal_1247))
	{
		DESTROY_ACTOR(&iLocal_1247);
	}
	if (IS_ACTOR_VALID(&iLocal_1249))
	{
		DESTROY_ACTOR(&iLocal_1249);
	}
	if (IS_ACTOR_VALID(&iLocal_1251))
	{
		DESTROY_ACTOR(&iLocal_1251);
	}
	if (IS_ACTOR_VALID(&iLocal_1253))
	{
		DESTROY_ACTOR(&iLocal_1253);
	}
	if (IS_ACTOR_VALID(&iLocal_1255))
	{
		DESTROY_ACTOR(&iLocal_1255);
	}
	return;
}

void Function_179(bool bParam0, int iParam1, int iParam2) //Position: 0x7ECB / 32459
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
		Function_180(Global_26182, &bVar0, 1);
	}
	return;
}

void Function_180(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7FB5 / 32693
{
	int iVar0;
	
	Function_182(bParam0);
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
	Function_181();
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

void Function_181() //Position: 0x8162 / 33122
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_182(int iParam0) //Position: 0x816E / 33134
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

void Function_183() //Position: 0x81B4 / 33204
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_184(int iParam0) //Position: 0x81BD / 33213
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

void Function_185() //Position: 0x8225 / 33317
{
	var uVar0[10];
	int iVar11;
	
	if (Function_226())
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Debug Stuff";
		uVar0[3] = "Escalera Yard";
		uVar0[4] = "Cata Entrance";
		uVar0[5] = "Grave Room";
		uVar0[6] = "Final Tunnel";
		uVar0[7] = "Altar Room";
		uVar0[8] = "Last Cutscene";
		uVar0[9] = "Pass Final Room";
		iVar11 = Function_212(&uLocal_990, &uVar0, "RDR MISSION MENU", 1, 0);
		if (Function_211(&iVar11, &bLocal_1010, &iLocal_1011, &iLocal_998))
		{
			Function_204();
			Function_203();
		}
		if (iVar11 == 0)
		{
			Function_204();
			Function_203();
			Function_202(&bLocal_1191, 8);
		}
		else if (iVar11 == 1)
		{
			Function_204();
			Function_203();
			Function_197(bLocal_1010);
			Function_189(StackVal, 5, &bLocal_1192, &bLocal_1010, Function_200(bLocal_1010), Function_197(bLocal_1010), 0);
		}
		else if (iVar11 == 2)
		{
			Function_204();
			Function_187(&iLocal_1241, 0);
		}
		else if (iVar11 == 3)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1010 = true;
			iLocal_1011 = 0;
			iLocal_998 = 1000;
		}
		else if (iVar11 == 4)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1010 = 2;
			iLocal_1011 = 0;
			iLocal_998 = 1000;
		}
		else if (iVar11 == 5)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1010 = 3;
			iLocal_1011 = 0;
			iLocal_998 = 1000;
		}
		else if (iVar11 == 6)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1010 = 4;
			iLocal_1011 = 0;
			iLocal_998 = 1000;
		}
		else if (iVar11 == 7)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1010 = 5;
			iLocal_1011 = 0;
			iLocal_998 = 1000;
		}
		else if (iVar11 == 8)
		{
			Function_204();
			Function_203();
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
			bLocal_1010 = 101;
			iLocal_1011 = 0;
			iLocal_998 = 1000;
		}
		else if (iVar11 == 9)
		{
			Function_204();
			Function_203();
			Function_177(&bLocal_1556);
			iLocal_1357 = 11;
			iLocal_1356 = 3;
		}
	}
	return;
}

void Function_186(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0x8485 / 33925
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

void Function_187(int iParam0, bool bParam1) //Position: 0x84AF / 33967
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return;
	}
	if (((!DECOR_CHECK_EXIST(&iParam0, "wallVolume") || !DECOR_CHECK_EXIST(&iParam0, "wallPosition")) || !DECOR_CHECK_EXIST(&iParam0, "wallRollLeft")) || !DECOR_CHECK_EXIST(&iParam0, "wallHeight"))
	{
		KILL_ACTOR(&iParam0);
		return;
	}
	uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam0, "wallVolume"));
	iVar1 = DECOR_GET_OBJECT(&iParam0, "wallPosition");
	if (!IS_ACTOR_IN_VOLUME(&iParam0, &uVar0))
	{
		Function_188(&iParam0, &iVar1, 0, 0, 0);
	}
	SET_ANIM_SET_FOR_ACTOR(&iParam0, "z_dlc_z_crypt", 0);
	switch (DECOR_GET_INT(&iParam0, "wallHeight"))
	{
		case 0x00000001:
			if (DECOR_GET_BOOL(&iParam0, "wallRollLeft"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "z_dlc_z_crypt/Crypt1_2_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "z_dlc_z_crypt/Crypt1_2");
			}
			break;
		
		case 0x00000002:
			if (DECOR_GET_BOOL(&iParam0, "wallRollLeft"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "z_dlc_z_crypt/Crypt2_5_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "z_dlc_z_crypt/Crypt2_5");
			}
			break;
		
		case 0x00000003:
			if (DECOR_GET_BOOL(&iParam0, "wallRollLeft"))
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "z_dlc_z_crypt/Crypt4_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&iParam0, "z_dlc_z_crypt/Crypt4");
			}
			break;
	}
	uVar2 = GET_PHYSINST_FROM_ACTOR(&iParam0);
	if (IS_PHYSINST_VALID(&uVar2))
	{
		ACTIVATE_PHYSINST(&uVar2);
	}
	ENABLE_MOVER(&iParam0);
	if (!&bParam1)
	{
		DECOR_SET_BOOL(&iParam0, "WakeUp", true);
	}
	else
	{
		DECOR_SET_BOOL(&iParam0, "WakeUpFast", true);
	}
	DECOR_SET_BOOL(&iParam0, "bIsWallZomb", false);
	bLocal_1355 = TASK_SEQUENCE_OPEN();
	TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iParam0);
	TASK_SEQUENCE_PERFORM(&iParam0, bLocal_1355);
	TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
	return;
}

void Function_188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x875B / 34651
{
	struct<2> Var0;
	struct<5> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			if (GET_OBJECT_TYPE(&iParam1) == 8)
			{
				GET_OBJECT_POSITION(&iParam1, &Var0);
				GET_OBJECT_ORIENTATION(&iParam1, &Var2);
				TELEPORT_ACTOR_WITH_HEADING(StackVal, &uParam0, Var0, &iParam2, &iParam3, &iParam4);
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

void Function_189(int iParam0, bool bParam1, int iParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x886B / 34923
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (iParam2 != 100)
	{
		Function_194(StackVal, Param4, uParam3, &iParam6);
		Function_190(iParam0);
		bParam1 = 1;
		iParam2 = 100;
	}
}

void Function_190(int iParam0) //Position: 0x88AC / 34988
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_193("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_192(2) || Function_192(8)) || Function_192(9)) || Function_192(10))
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
		Function_193("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_193("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_193("");
	}
	else if (iParam0 == 8)
	{
		Function_191();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_191();
	}
	return;
}

void Function_191() //Position: 0x89A3 / 35235
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_192(int iParam0) //Position: 0x89AF / 35247
{
	int iVar0;
	
	if (!Function_41(iParam0))
	{
		return 0;
	}
	iVar0 = Function_40(iParam0);
	if (!Function_20(Function_40(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_193(char* cParam0) //Position: 0x89E5 / 35301
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

void Function_194(struct<2> Param0, var uParam2, int iParam3) //Position: 0x8A51 / 35409
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = iParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_196(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_195(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_195(int iParam0) //Position: 0x8AD3 / 35539
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

var Function_196(struct<2> Param0, bool bParam2) //Position: 0x8F81 / 36737
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

struct<8> Function_197(int iParam0) //Position: 0x8FED / 36845
{
	Function_198(iParam0 + 1);
	return StackVal, Function_198(iParam0 + 1);
}

struct<8> Function_198(int iParam0) //Position: 0x8FFA / 36858
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_199(&iLocal_4 + 2048[0]);
			return StackVal, Function_199(&iLocal_4 + 2048[0]);
			break;
		
		case 0x00000001:
			Function_199(&iLocal_4 + 2048[2]);
			return StackVal, Function_199(&iLocal_4 + 2048[2]);
			break;
		
		case 0x00000002:
			Function_199(&iLocal_4 + 2048[4]);
			return StackVal, Function_199(&iLocal_4 + 2048[4]);
			break;
		
		case 0x00000003:
			Function_199(&iLocal_4 + 2048[6]);
			return StackVal, Function_199(&iLocal_4 + 2048[6]);
			break;
		
		case 0x00000004:
			Function_199(&iLocal_4 + 2048[9]);
			return StackVal, Function_199(&iLocal_4 + 2048[9]);
			break;
		
		case 0x00000005:
			Function_199(&iLocal_4 + 2048[10]);
			return StackVal, Function_199(&iLocal_4 + 2048[10]);
			break;
	}
	Function_199(&iLocal_4 + 2048[10]);
	return StackVal, Function_199(&iLocal_4 + 2048[10]);
}

struct<8> Function_199(bool bParam0) //Position: 0x909A / 37018
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

int Function_200(int iParam0) //Position: 0x90C3 / 37059
{
	return Function_201(iParam0 + 1);
}

int Function_201(int iParam0) //Position: 0x90D0 / 37072
{
	iParam0 = iParam0;
	switch (iParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 2048[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 2048[2]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 2048[4]);
			break;
		
		case 0x00000003:
			return GET_OBJECT_HEADING(&iLocal_4 + 2048[6]);
			break;
		
		case 0x00000004:
			return GET_OBJECT_HEADING(&iLocal_4 + 2048[9]);
			break;
		
		case 0x00000005:
			return GET_OBJECT_HEADING(&iLocal_4 + 2048[10]);
			break;
	}
	return GET_OBJECT_HEADING(&iLocal_4 + 2048[10]);
}

void Function_202(bool bParam0, int iParam1) //Position: 0x9174 / 37236
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_190(&iParam1);
	bParam0 = 1;
	return;
}

void Function_203() //Position: 0x9199 / 37273
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_204() //Position: 0x91AE / 37294
{
	Function_206();
	Function_205(10, 3);
	return;
}

void Function_205(int iParam0, int iParam1) //Position: 0x91BD / 37309
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

void Function_206() //Position: 0x930A / 37642
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_210())
	{
		Function_209(10, 3);
	}
	else
	{
		Function_207();
	}
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_54(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_54());
	UI_POP("nDebugMenu");
	return;
}

void Function_207() //Position: 0x9355 / 37717
{
	Function_208(25, 2);
	return;
}

void Function_208(int iParam0, int iParam1) //Position: 0x9361 / 37729
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

void Function_209(int iParam0, int iParam1) //Position: 0x958D / 38285
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

bool Function_210() //Position: 0x96DA / 38618
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

bool Function_211(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9742 / 38722
{
	if (IS_DEBUGKEY_PRESSED(36))
	{
		if ((!Global_99146 && IS_ACTOR_READY_FOR_ACTION(&Global_54076)) && !Global_6610)
		{
			Function_204();
			Function_203();
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
		Function_193("missionFail_debug");
		uParam0 = 1;
	}
	if (IS_DEBUGKEY_PRESSED(iLocal_2))
	{
		uParam0 = 2;
	}
	return 0;
}

var Function_212(struct<17> Param0) //Position: 0x97F1 / 38897
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &uParam4;
	Function_225(&Var12, &Var0);
	uVar15 = Function_224(uParam1, &Var12);
	Function_223(&uParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_222(&Param0, uVar15);
	Function_220(StackVal, &Param0, Var12.f_12);
	Function_218(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_217(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_214(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_213(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_213(int iParam0, int iParam1, int iParam2) //Position: 0x98E5 / 39141
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

bool Function_214(struct<17> Param0) //Position: 0x9945 / 39237
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
				Function_216(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
			Function_216(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
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
				Function_213(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_215(Param1.f_64);
	}
	else
	{
		Function_215(Param1.f_64);
	}
	return 0;
}

void Function_215(bool bParam0) //Position: 0x9AD8 / 39640
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

void Function_216(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0x9B16 / 39702
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

var Function_217(int iParam0, struct<21> Param1) //Position: 0x9BCC / 39884
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_218(vector3 vParam0) //Position: 0x9BF3 / 39923
{
	switch (Function_219())
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

int Function_219() //Position: 0x9C9F / 40095
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

void Function_220(vector3 vParam0) //Position: 0x9CDB / 40155
{
	switch (Function_221(&vParam0))
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

int Function_221(int iParam0) //Position: 0x9D84 / 40324
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_80(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_14(iParam0, 0x40000000))
		{
			Function_80(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_46(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_80(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_14(iParam0, 0x20000000))
		{
			Function_80(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_46(&iParam0, 0x20000000);
	return 0;
}

var Function_222(struct<21> Param0) //Position: 0x9EA4 / 40612
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

void Function_223(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xA05E / 41054
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

var Function_224(int iParam0, struct<13> Param1) //Position: 0xA0FA / 41210
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_225(struct<17> Param0) //Position: 0xA116 / 41238
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

bool Function_226() //Position: 0xA170 / 41328
{
	return Global_47307;
}

bool Function_227() //Position: 0xA179 / 41337
{
	if (IS_EXITFLAG_SET())
	{
		Function_197(bLocal_1010);
		Function_189(StackVal, 4, &bLocal_1192, &bLocal_1010, Function_200(bLocal_1010), Function_197(bLocal_1010), 0);
		return 0;
	}
	Function_566(StackVal, StackVal, StackVal, StackVal, StackVal, Local_908, bLocal_1010, iLocal_1011, &bLocal_1193, &bLocal_1191, &bLocal_1192);
	if (bLocal_1010 == 99 && bLocal_1010 == 100)
	{
		if (Function_546(&Local_1069, &uLocal_1015, &uLocal_1161, &uLocal_1012, iLocal_1014))
		{
			if (Function_544(&uLocal_1161))
			{
				Function_197(bLocal_1010);
				Function_189(StackVal, 5, &bLocal_1192, &bLocal_1010, Function_200(bLocal_1010), Function_197(bLocal_1010), 0);
				return 1;
			}
		}
		if (IS_ACTOR_DEAD(&Global_54076))
		{
			Function_197(bLocal_1010);
			Function_189(StackVal, 1, &bLocal_1192, &bLocal_1010, Function_200(bLocal_1010), Function_197(bLocal_1010), 0);
			return 1;
		}
		if (Global_6646 || Global_6647)
		{
			Function_197(bLocal_1010);
			Function_189(StackVal, 2, &bLocal_1192, &bLocal_1010, Function_200(bLocal_1010), Function_197(bLocal_1010), 0);
			return 1;
		}
	}
	switch (bLocal_1010)
	{
		case 0x00000063:
			Function_525();
			break;
		
		case 0x00000000:
			Function_518();
			break;
		
		case 0x00000001:
			Function_504();
			break;
		
		case 0x00000002:
			Function_477();
			break;
		
		case 0x00000003:
			Function_458();
			break;
		
		case 0x00000004:
			Function_409();
			break;
		
		case 0x00000005:
			Function_336();
			break;
		
		case 0x00000065:
			Function_233();
			break;
		
		case 0x00000064:
			if (Function_232(&bLocal_1192))
			{
				if (bLocal_1010 != 2 || bLocal_1010 != 3)
				{
					Function_197(5);
					Function_194(StackVal, Function_197(5), Function_200(5), 0);
				}
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_231(&bLocal_1010, &iLocal_1011, &iLocal_998))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1191)
	{
		Function_202(&bLocal_1191, 8);
		Function_230(0, 1);
		Function_229(1, 0);
		Function_1();
		return 0;
	}
	if (bLocal_1192 && bLocal_1010 == 100)
	{
		Function_197(bLocal_1010);
		Function_189(StackVal, 5, &bLocal_1192, &bLocal_1010, Function_200(bLocal_1010), Function_197(bLocal_1010), 0);
	}
	if (bLocal_1193)
	{
		Function_230(0, 1);
		Function_229(1, 0);
		Function_228(&bLocal_1193, 4);
		Function_1();
		return 0;
	}
	return 1;
}

void Function_228(var uParam0, int iParam1) //Position: 0xA352 / 41810
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_190(&iParam1);
	uParam0 = 1;
	return;
}

void Function_229(bool bParam0, bool bParam1) //Position: 0xA377 / 41847
{
	if (bParam0)
	{
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
	}
	if (bParam1)
	{
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
	}
	return;
}

void Function_230(bool bParam0, bool bParam1) //Position: 0xA423 / 42019
{
	if (bParam0)
	{
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
	}
	if (bParam1)
	{
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
	}
	return;
}

bool Function_231(var uParam0, var uParam1, int iParam2) //Position: 0xA4CF / 42191
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

bool Function_232(int iParam0) //Position: 0xA518 / 42264
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_233() //Position: 0xA52C / 42284
{
	switch (iLocal_1011)
	{
		case 0x00000000:
			Function_332(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(25);
			if (!iLocal_1169[5])
			{
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_330(16, 1);
				Function_188(&Global_54076, &iLocal_4 + 2048[12], 1, 1, 1);
				iLocal_1011 = 1;
			}
			else
			{
				iLocal_1011 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_329(Global_46850[0]))
			{
				iLocal_1011 = 2;
			}
			break;
		
		case 0x00000002:
			Function_327(&uLocal_1196, 6, 0, 4294967295, 4294967295);
			iLocal_1011 = 3;
			break;
		
		case 0x00000003:
			if (Function_241("$/cutscene/ESCALERA_2_PT_F_CS/escalera_2_pt_f_cs", &iLocal_998, &Local_908, &bLocal_1010, 80940, 77874, 77559, 72736, 72299, 46937, 0, 2, 1, 1, 2, 0, 1))
			{
				iLocal_1011 = 6;
			}
			break;
		
		case 0x00000006:
			if (STREAMING_IS_WORLD_LOADED())
			{
				if (IS_ACTOR_VALID(&iLocal_1235))
				{
					Function_188(&iLocal_1235, &iLocal_4 + 2048[13], 1, 1, 1);
					TASK_STAND_STILL(&iLocal_1235, -1.0f, 0, 0);
					iLocal_1011 = 106;
				}
				else
				{
					iLocal_1235 = Function_234(1, 1, 0, 0, 0, 0, 1, 0);
				}
			}
			break;
		
		case 0x0000006A:
			bLocal_1191 = true;
			break;
	}
	return;
}

int Function_234(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xA68C / 42636
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
		Function_240(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_239())
		{
			return "";
		}
	}
	if (!Function_237())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_146();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_199(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_199(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_199(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_199(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_236(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_236(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), bVar0, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_58(), 993, Vector(&iParam2, &iParam3, &iParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_235(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xA9E9 / 43497
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

var Function_236(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xAA33 / 43571
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

bool Function_237() //Position: 0xAAD3 / 43731
{
	if (Function_238() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_238() //Position: 0xAAE9 / 43753
{
	return Global_21369.f_244;
}

bool Function_239() //Position: 0xAAF4 / 43764
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_240(var uParam0, bool bParam1, bool bParam2) //Position: 0xAB14 / 43796
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

bool Function_241(int iParam0, int iParam1, struct<41> Param2) //Position: 0xAB43 / 43843
{
	if (!&bParam15)
	{
		Function_256(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (iParam3 != 99 && (Function_255(&Param2) || Param2.f_40 < 1))
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
				Function_253(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &iParam0) || !Function_252())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_251(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_253(&iParam1 + 4);
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
					Function_251(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_248(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_248(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_246(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_251(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_253(&iParam1 + 4);
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
						Function_245(1.0f);
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
						Function_243();
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
					Function_242(1, 1);
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
			if ((HUD_IS_FADED() && iParam3 == 99) && !Function_255(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_242(var uParam0, bool bParam1) //Position: 0xB1A5 / 45477
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
		Function_146();
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

void Function_243() //Position: 0xB274 / 45684
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_244();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_244() //Position: 0xB2B9 / 45753
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_245(bool bParam0) //Position: 0xB2CB / 45771
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

void Function_246(var uParam0, int iParam1) //Position: 0xB2E8 / 45800
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_58(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_247(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_247(int iParam0) //Position: 0xB37A / 45946
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

float Function_248(vector3 vParam0) //Position: 0xB3AB / 45995
{
	if (Function_250(&vParam0))
	{
		if (Function_249(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_249(int iParam0) //Position: 0xB478 / 46200
{
	return Function_14(iParam0, 2);
}

bool Function_250(int iParam0) //Position: 0xB486 / 46214
{
	return Function_14(iParam0, 1);
}

int Function_251(bool bParam0) //Position: 0xB494 / 46228
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

bool Function_252() //Position: 0xB557 / 46423
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

void Function_253(int iParam0) //Position: 0xB594 / 46484
{
	Function_254(&iParam0, 0.0f);
	return;
}

void Function_254(vector3 vParam0) //Position: 0xB5A1 / 46497
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_80(&vParam0, 1);
	Function_46(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_255(struct<37> Param0) //Position: 0xB5C6 / 46534
{
	return Param0.f_36;
}

void Function_256(var uParam0, int iParam1) //Position: 0xB5D1 / 46545
{
	Function_257(&uParam0, &iParam1, 0);
	return;
}

void Function_257(var uParam0, bool bParam1, var uParam2) //Position: 0xB5E1 / 46561
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
			Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
		}
		STREAMING_RELEASE_MAIN_POI();
		Function_91(20, 1, 0, 0);
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
							Function_186(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
						}
						else if (!HUD_IS_FADED())
						{
							if (!HUD_IS_FADING())
							{
								HUD_FADE_TO_LOADING_SCREEN();
							}
						}
					}
					Function_91(20, 1, 0, 0);
					uParam0 = 1105;
				}
			}
		}
	}
	return;
}

int Function_258() //Position: 0xB759 / 46937
{
	switch (bLocal_1010)
	{
		case 0x00000063:
			if (!IS_LAYOUTREF_VALID(&iLocal_4))
			{
				if ((Function_273() && Function_272()) && Function_260())
				{
					iLocal_1610 = 1;
					Function_259();
				}
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
			{
				CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
			}
			else
			{
				iLocal_1612 = 1;
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

struct<8> Function_259() //Position: 0xB7B1 / 47025
{
	var uVar0;
	
	Unknown_Function();
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("Zombie03_layout");
	*(&iLocal_4 + 976) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "NoBackTrackVols_set");
	*(&iLocal_4 + 960[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, 5,605194E-45f, true, &iLocal_4, "PillarRoom_Ammo", 2,802597E-45f, Vector(-4355,577f, 24,58127f, 4368,24f), Vector(0.0f, -0,1073254f, 0.0f), Vector(20,18934f, 5,756174f, 7,673368f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 976, &iLocal_4 + 960[0]);
	*(&iLocal_4 + 1048) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "FailVols_set");
	*(&iLocal_4 + 984[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFailVol_0", 2,802597E-45f, Vector(-4337,887f, 35,82172f, 4240,77f), Vector(0.0f, 160,6906f, 0.0f), Vector(122,9297f, 28,21127f, 43,86913f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 984[0]);
	*(&iLocal_4 + 984[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFailVol_1", 2,802597E-45f, Vector(-4408,502f, 34,03202f, 4270,83f), Vector(0.0f, 239,0781f, 0.0f), Vector(122,9297f, 28,21127f, 43,86913f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 984[1]);
	*(&iLocal_4 + 984[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFailVol_2", 2,802597E-45f, Vector(-4416,589f, 38,07753f, 4376,697f), Vector(0.0f, 312,9973f, 0.0f), Vector(122,9297f, 28,21127f, 43,86913f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 984[2]);
	*(&iLocal_4 + 984[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFailVol_3", 2,802597E-45f, Vector(-4338,766f, 39,79316f, 4407,374f), Vector(0.0f, 363,551f, 0.0f), Vector(122,9297f, 22,60033f, 43,86913f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 984[3]);
	*(&iLocal_4 + 984[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFailVol_4", 2,802597E-45f, Vector(-4287,646f, 38,99223f, 4323,234f), Vector(0.0f, 446,212f, 0.0f), Vector(122,9297f, 22,60033f, 43,86913f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 984[4]);
	*(&iLocal_4 + 984[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFailVol_5", 2,802597E-45f, Vector(-4331,759f, 35,48927f, 4378,618f), Vector(0.0f, 452,9165f, 0.0f), Vector(25,46953f, 12,0977f, 37,63341f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 984[5]);
	*(&iLocal_4 + 984[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFailVol_6", 2,802597E-45f, Vector(-4386,587f, 39,79336f, 4383,331f), Vector(0.0f, 453,5276f, 0.0f), Vector(24,24959f, 12,86428f, 49,85642f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1048, &iLocal_4 + 984[6]);
	*(&iLocal_4 + 1096) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Global_Vols_set");
	*(&iLocal_4 + 1056[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Mansion_Out", 2,802597E-45f, Vector(-4363,658f, 17,08423f, 4360,27f), Vector(0.0f, -90,88387f, 0.0f), Vector(27,6025f, 22,12873f, 40,60747f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1096, &iLocal_4 + 1056[0]);
	*(&iLocal_4 + 1056[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Mansion_In", 2,802597E-45f, Vector(-4340,54f, 30,98529f, 4316,018f), Vector(0.0f, 88,89235f, 0.0f), Vector(11,32791f, 8,309637f, 2,860054f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1096, &iLocal_4 + 1056[1]);
	*(&iLocal_4 + 1056[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Mansion_Out_1", 2,802597E-45f, Vector(-4361,125f, 22,33068f, 4331,996f), Vector(0.0f, -89,9641f, 0.0f), Vector(48,75595f, 28,60038f, 29,36757f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1096, &iLocal_4 + 1056[2]);
	*(&iLocal_4 + 1056[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Mansion_Out_2", 2,802597E-45f, Vector(-4401,391f, 15,06409f, 4406,377f), Vector(0.0f, -89,9641f, 0.0f), Vector(123,4836f, 16,61502f, 55,48017f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1096, &iLocal_4 + 1056[3]);
	*(&iLocal_4 + 1144) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "EmergTeleVols_set");
	*(&iLocal_4 + 1104[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "S2_TeleOn_0", 2,802597E-45f, Vector(-4358,507f, 22,33068f, 4338,042f), Vector(0.0f, -89,9641f, 0.0f), Vector(50,33968f, 28,60038f, 49,43056f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1144, &iLocal_4 + 1104[0]);
	*(&iLocal_4 + 1104[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "S3_TeleOn_0", 2,802597E-45f, Vector(-4401,391f, 15,06409f, 4406,377f), Vector(0.0f, -89,9641f, 0.0f), Vector(123,4836f, 16,61502f, 55,48017f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1144, &iLocal_4 + 1104[1]);
	*(&iLocal_4 + 1104[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "TeleOn_0", 2,802597E-45f, Vector(-4344,039f, 36,72928f, 4303,354f), Vector(0.0f, -89,9641f, 0.0f), Vector(16,23474f, 7,978823f, 38,4685f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1144, &iLocal_4 + 1104[2]);
	*(&iLocal_4 + 1104[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "TeleOn_1", 2,802597E-45f, Vector(-4349f, 42,9818f, 4313,582f), Vector(0.0f, -89,9641f, 0.0f), Vector(25,42356f, 9,389962f, 38,4685f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1144, &iLocal_4 + 1104[3]);
	*(&iLocal_4 + 1168) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "MaidenVols_set");
	*(&iLocal_4 + 1152[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "S2_StairWait", 2,802597E-45f, Vector(-4350,536f, 30,54615f, 4314,865f), Vector(0.0f, 0.0f, 0.0f), Vector(1,976131f, 6,983809f, 11,30036f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1168, &iLocal_4 + 1152[0]);
	*(&iLocal_4 + 1200) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Sector_Vols_set");
	*(&iLocal_4 + 1176[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "UnloadEsc_0", 2,802597E-45f, Vector(-4358,215f, 41,31655f, 4363,875f), Vector(0.0f, 0.0f, 0.0f), Vector(122,9297f, 12,56611f, 43,86913f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1176[0]);
	*(&iLocal_4 + 1176[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "UnloadEsc_1", 2,802597E-45f, Vector(-4343,09f, 35,87574f, 4376,705f), Vector(0.0f, 2,379181f, 0.0f), Vector(34,75255f, 12,56611f, 20,55668f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1200, &iLocal_4 + 1176[1]);
	*(&iLocal_4 + 1232) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage0_Vol_set");
	*(&iLocal_4 + 1208[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "ReyesCorpseClear", 2,802597E-45f, Vector(-4345,478f, 43,04445f, 4328,781f), Vector(0.0f, 0.0f, 0.0f), Vector(5,069133f, 5,249363f, 4,429136f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1208[0]);
	*(&iLocal_4 + 1208[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CupClear", 2,802597E-45f, Vector(-4344,47f, 43,01931f, 4326,723f), Vector(0.0f, 0.0f, 0.0f), Vector(5,069133f, 2,635121f, 2,945575f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1232, &iLocal_4 + 1208[1]);
	*(&iLocal_4 + 1344) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage1_Vol_set");
	*(&iLocal_4 + 1240[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CataEntrance", 2,802597E-45f, Vector(-4336,157f, 36,33408f, 4309,212f), Vector(3,446721f, 0.0f, 0.0f), Vector(7,640728f, 4,843626f, 5,880766f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[0]);
	*(&iLocal_4 + 1240[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Zomb_Wand_0", 2,802597E-45f, Vector(-4362,997f, 33,34029f, 4290,453f), Vector(95,14659f, -86,53931f, -95,15594f), Vector(19,4923f, 13,348f, 26,45648f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[1]);
	*(&iLocal_4 + 1240[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Zomb_Wand_1", 2,802597E-45f, Vector(-4361,276f, 34,57593f, 4269,937f), Vector(3,447611f, -1,30075f, -0,07835675f), Vector(27,76566f, 13,348f, 16,20614f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[2]);
	*(&iLocal_4 + 1240[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Zomb_Wand_2", 2,802597E-45f, Vector(-4337,271f, 34,02592f, 4295,694f), Vector(0.0f, 0.0f, 0.0f), Vector(21,41543f, 12,85652f, 5,137695f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[3]);
	*(&iLocal_4 + 1240[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Zomb_Wand_3", 2,802597E-45f, Vector(-4342,233f, 39,1862f, 4314,996f), Vector(0.0f, 0.0f, 0.0f), Vector(13,40223f, 12,85652f, 11,79779f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[4]);
	*(&iLocal_4 + 1240[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Zomb_Wand_4", 2,802597E-45f, Vector(-4363,677f, 39,1862f, 4308,147f), Vector(0.0f, 0.0f, 0.0f), Vector(7,007284f, 12,85652f, 12,89245f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[5]);
	*(&iLocal_4 + 1240[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BullRing_Wand_0", 2,802597E-45f, Vector(-4336,458f, 33,93618f, 4282,528f), Vector(0.0f, -2,354123f, 0.0f), Vector(23,5628f, 13,4421f, 18,4309f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[6]);
	*(&iLocal_4 + 1240[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nDinerZs_0", 2,802597E-45f, Vector(-4350,46f, 39,1862f, 4311,477f), Vector(0.0f, 0.0f, 0.0f), Vector(5,714423f, 12,85652f, 5,920617f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[7]);
	*(&iLocal_4 + 1240[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nDinerZs_1", 2,802597E-45f, Vector(-4354,48f, 39,1862f, 4310,01f), Vector(0.0f, 0.0f, 0.0f), Vector(13,45023f, 12,85652f, 2,826781f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[8]);
	*(&iLocal_4 + 1240[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "NoZCataEnt", 2,802597E-45f, Vector(-4337,271f, 34,02592f, 4302,318f), Vector(0.0f, 0.0f, 0.0f), Vector(21,41543f, 18,91016f, 7,5745f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[9]);
	*(&iLocal_4 + 1240[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nS1_RetVol", 2,802597E-45f, Vector(-4350,73f, 42,08863f, 4322,674f), Vector(0.0f, -33,39755f, 0.0f), Vector(105,2729f, 46,32956f, 122,9132f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[10]);
	*(&iLocal_4 + 1240[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "BullLine", 2,802597E-45f, Vector(-4342,491f, 37,82693f, 4298,185f), Vector(0.0f, 0.0f, 0.0f), Vector(21,41543f, 8,446486f, 12,86065f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1344, &iLocal_4 + 1240[11]);
	*(&iLocal_4 + 1544) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage2_Vol_set");
	*(&iLocal_4 + 1352[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nOutZClear", 2,802597E-45f, Vector(-4345,316f, 32,05203f, 4315,173f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 8,798776f, 3,749693f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[0]);
	*(&iLocal_4 + 1352[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "LobbyWander", 2,802597E-45f, Vector(-4356,425f, 31,96985f, 4315,318f), Vector(0.0f, 0.0f, 0.0f), Vector(12,90676f, 9,704557f, 13,35989f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[1]);
	*(&iLocal_4 + 1352[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "TunelAtk", 2,802597E-45f, Vector(-4355,943f, 31,59781f, 4323,514f), Vector(0.0f, 0,09675296f, 0.0f), Vector(27,3713f, 8,798776f, 4,636235f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[2]);
	*(&iLocal_4 + 1352[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "TunelAtkShoot", 4,203895E-45f, Vector(-4355,461f, 28,982f, 4320,413f), Vector(0.0f, 0,09675296f, 0.0f), Vector(6,026576f, 4,542552f, 6,356361f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[3]);
	*(&iLocal_4 + 1352[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RampRoom", 2,802597E-45f, Vector(-4356,748f, 27,42441f, 4331,197f), Vector(0.0f, -0,1073254f, 0.0f), Vector(27,3713f, 8,798776f, 4,636235f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[4]);
	*(&iLocal_4 + 1352[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nPillarEnt", 2,802597E-45f, Vector(-4356,201f, 24,24387f, 4346,024f), Vector(0.0f, -0,1073254f, 0.0f), Vector(14,50033f, 5,894801f, 2,391205f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[5]);
	*(&iLocal_4 + 1352[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RampRoomAttack2", 2,802597E-45f, Vector(-4356,132f, 26,98198f, 4336,943f), Vector(0.0f, -0,1073254f, 0.0f), Vector(19,17819f, 10,60319f, 4,973832f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[6]);
	*(&iLocal_4 + 1352[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PillarAtk_0", 2,802597E-45f, Vector(-4348,106f, 24,28679f, 4358,37f), Vector(0.0f, -0,1073254f, 0.0f), Vector(5,353344f, 5,044935f, 10,0785f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[7]);
	*(&iLocal_4 + 1352[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PillarAtk_1", 2,802597E-45f, Vector(-4356,764f, 21,96388f, 4361,28f), Vector(0.0f, -0,1073254f, 0.0f), Vector(14,83636f, 5,044935f, 4,2943f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[8]);
	*(&iLocal_4 + 1352[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PillWander", 2,802597E-45f, Vector(-4358,575f, 24,58127f, 4367,347f), Vector(0.0f, -0,1073254f, 0.0f), Vector(6,578821f, 5,756174f, 4,68861f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[9]);
	*(&iLocal_4 + 1352[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "PillGuard_Atk", 2,802597E-45f, Vector(-4359,853f, 24,58127f, 4368,231f), Vector(0.0f, -0,1073254f, 0.0f), Vector(14,54377f, 5,756174f, 7,673368f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[10]);
	*(&iLocal_4 + 1352[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "GraveRoomEnt", 2,802597E-45f, Vector(-4367,988f, 17,06638f, 4360,714f), Vector(0.0f, 0.0f, 0.0f), Vector(3,873509f, 10,11554f, 14,78145f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[11]);
	*(&iLocal_4 + 1352[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "S2_BruiseCorn", 2,802597E-45f, Vector(-4356,573f, 22,07122f, 4353,756f), Vector(0.0f, 89,34531f, 0.0f), Vector(3,873509f, 10,11554f, 14,78145f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[12]);
	*(&iLocal_4 + 1352[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "DarknessLine", 2,802597E-45f, Vector(-4332,034f, 36,17297f, 4310,577f), Vector(0.0f, 30,30008f, 0.0f), Vector(7,157114f, 7,079535f, 2,860054f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[13]);
	*(&iLocal_4 + 1352[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nCryptTalk", 2,802597E-45f, Vector(-4345,316f, 30,73267f, 4315,173f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 8,798776f, 3,749693f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[14]);
	*(&iLocal_4 + 1352[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SoldierTalk_0", 2,802597E-45f, Vector(-4356,002f, 21,08523f, 4361,075f), Vector(0.0f, 0.0f, 0.0f), Vector(18,90613f, 12,09974f, 5,414574f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[15]);
	*(&iLocal_4 + 1352[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CD_NoAtk", 2,802597E-45f, Vector(-4355,242f, 24,54259f, 4350,777f), Vector(5,051053f, -0,1073254f, 0.0f), Vector(14,50033f, 6,915009f, 21,78211f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[16]);
	*(&iLocal_4 + 1352[17]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HackRoll_Tun", 2,802597E-45f, Vector(-4359,97f, 27,84034f, 4338,936f), Vector(0,4656475f, -0,1073254f, 0.0f), Vector(3,34699f, 0,8037193f, 4,011473f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[17]);
	*(&iLocal_4 + 1352[18]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HackRoll_Tun1", 2,802597E-45f, Vector(-4359,97f, 26,59817f, 4338,926f), Vector(0,4656475f, -0,1073254f, 0.0f), Vector(3,34699f, 0,8037193f, 4,011473f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[18]);
	*(&iLocal_4 + 1352[19]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HackRoll_Tun2", 2,802597E-45f, Vector(-4350,831f, 26,01018f, 4346,272f), Vector(0,4656475f, -0,1073254f, 0.0f), Vector(3,34699f, 0,8037193f, 4,011473f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[19]);
	*(&iLocal_4 + 1352[20]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HackRoll_Tun3", 2,802597E-45f, Vector(-4360,092f, 25,59545f, 4347,872f), Vector(0,4656475f, -0,1073254f, 0.0f), Vector(3,34699f, 0,8037193f, 4,011473f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[20]);
	*(&iLocal_4 + 1352[21]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "MusFirstZombEnc", 2,802597E-45f, Vector(-4341,128f, 32,17254f, 4316,963f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 8,798776f, 3,749693f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[21]);
	*(&iLocal_4 + 1352[22]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "NoEnco_0", 2,802597E-45f, Vector(-4332,812f, 34,20797f, 4314,123f), Vector(0.0f, -89,9641f, 0.0f), Vector(22,2412f, 8,798776f, 21,00913f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1352[22]);
	*(&iLocal_4 + 1696) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage3_Vol_set");
	*(&iLocal_4 + 1552[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "GRC_Walk", 2,802597E-45f, Vector(-4375,944f, 14,8804f, 4360,25f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 8,098523f, 3,749693f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[0]);
	*(&iLocal_4 + 1552[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "GRC_WallAmbush", 2,802597E-45f, Vector(-4397,61f, 13,76094f, 4360,264f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 6,401049f, 10,01462f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[1]);
	*(&iLocal_4 + 1552[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "GRC_WallSp_0", 2,802597E-45f, Vector(-4389,916f, 14,78061f, 4361,729f), Vector(0.0f, 0,6375712f, 0.0f), Vector(7,842602f, 10,11554f, 14,78145f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[2]);
	*(&iLocal_4 + 1552[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AtFinalHall", 2,802597E-45f, Vector(-4410,421f, 9,314589f, 4408,721f), Vector(0.0f, 90,63173f, 0.0f), Vector(4,550706f, 6,664324f, 6,356517f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[3]);
	*(&iLocal_4 + 1552[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nFC_Create", 2,802597E-45f, Vector(-4409,685f, 10,94747f, 4362,835f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 5,766354f, 3,749693f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[4]);
	*(&iLocal_4 + 1552[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "FC_Walk", 2,802597E-45f, Vector(-4413,184f, 11,9206f, 4361,949f), Vector(0.0f, -78,59061f, 0.0f), Vector(11,83726f, 5,766354f, 1,95916f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[5]);
	*(&iLocal_4 + 1552[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "GasR_Create", 2,802597E-45f, Vector(-4404,873f, 10,09703f, 4380,029f), Vector(0.0f, -90,49245f, 0.0f), Vector(8,493193f, 5,766354f, 1,95916f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[6]);
	*(&iLocal_4 + 1552[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Aud_GlowEyes", 2,802597E-45f, Vector(-4348,962f, 31,71795f, 4314,997f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 5,766354f, 6,078347f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[7]);
	*(&iLocal_4 + 1552[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HackWall_Vol", 2,802597E-45f, Vector(-4405,263f, 13,40738f, 4365,485f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,166003f, 0,9823262f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[8]);
	*(&iLocal_4 + 1552[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "HackWall_Vol1", 2,802597E-45f, Vector(-4395,639f, 14,61901f, 4356,417f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,649206f, 1,066521f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[9]);
	*(&iLocal_4 + 1552[10]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "EmergRoll_Left", 2,802597E-45f, Vector(-4394,883f, 14,39155f, 4360,949f), Vector(0.0f, -89,9641f, 0.0f), Vector(11,83726f, 13,57921f, 3,749693f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[10]);
	*(&iLocal_4 + 1552[11]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nToxicLine", 2,802597E-45f, Vector(-4408,562f, 8,326777f, 4379,828f), Vector(0.0f, -104,2739f, 0.0f), Vector(8,493193f, 5,766354f, 1,95916f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[11]);
	*(&iLocal_4 + 1552[12]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Hack2nd_Vol0", 2,802597E-45f, Vector(-4405,263f, 12,20442f, 4365,485f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,166003f, 0,9823262f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[12]);
	*(&iLocal_4 + 1552[13]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Hack2nd_Vol1", 2,802597E-45f, Vector(-4405,263f, 14,83288f, 4365,485f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,166003f, 0,9823262f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[13]);
	*(&iLocal_4 + 1552[14]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Hack2nd_Vol2", 2,802597E-45f, Vector(-4395,639f, 13,45992f, 4356,417f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,649206f, 1,066521f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[14]);
	*(&iLocal_4 + 1552[15]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Hack2nd_Vol3", 2,802597E-45f, Vector(-4395,639f, 12,2875f, 4356,417f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,649206f, 1,066521f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[15]);
	*(&iLocal_4 + 1552[16]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "GR_Maiden_2nd", 2,802597E-45f, Vector(-4384,583f, 14,78061f, 4361,67f), Vector(0.0f, 0,6375712f, 0.0f), Vector(4,03459f, 10,11554f, 14,78145f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1696, &iLocal_4 + 1552[16]);
	*(&iLocal_4 + 1792) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage4_Vol_set");
	*(&iLocal_4 + 1704[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "SpawnTun_0", 2,802597E-45f, Vector(-4410,489f, 8,74748f, 4411,443f), Vector(0.0f, 90,05663f, 0.0f), Vector(10,85959f, 7,175731f, 9,588489f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[0]);
	*(&iLocal_4 + 1704[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StartBendZombs", 2,802597E-45f, Vector(-4393,408f, 9,729f, 4419,622f), Vector(0.0f, 90,73871f, 0.0f), Vector(16,88334f, 7,175731f, 3,120484f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[1]);
	*(&iLocal_4 + 1704[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StartBruiseWalk", 2,802597E-45f, Vector(-4399,444f, 11,76014f, 4419,452f), Vector(0.0f, 89,20106f, 0.0f), Vector(9,284448f, 7,175731f, 3,120484f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[2]);
	*(&iLocal_4 + 1704[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "nAmmoGuard", 2,802597E-45f, Vector(-4389,01f, 11,76014f, 4419,087f), Vector(0.0f, 89,84267f, 0.0f), Vector(9,284448f, 7,175731f, 3,120484f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[3]);
	*(&iLocal_4 + 1704[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "RollRightWalk", 2,802597E-45f, Vector(-4380,588f, 10,99f, 4426,269f), Vector(0.0f, 150,6991f, 0.0f), Vector(9,284448f, 7,175731f, 2,899794f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[4]);
	*(&iLocal_4 + 1704[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "StartleftTun", 2,802597E-45f, Vector(-4408,753f, 9,051f, 4417,077f), Vector(0.0f, 0,4193181f, 0.0f), Vector(16,883f, 7,176f, 3,120484f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[5]);
	*(&iLocal_4 + 1704[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "AtFinalRoom", 2,802597E-45f, Vector(-4405,653f, 9,022472f, 4453,854f), Vector(0.0f, -89,9641f, 0.0f), Vector(24,42494f, 12,52313f, 28,7057f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[6]);
	*(&iLocal_4 + 1704[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WallZomTunLWR", 2,802597E-45f, Vector(-4394,303f, 12,53988f, 4422,787f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,649206f, 1,858154f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[7]);
	*(&iLocal_4 + 1704[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WallZomTunRWR_0", 2,802597E-45f, Vector(-4393,376f, 10,99336f, 4429,968f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,649206f, 1,858154f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[8]);
	*(&iLocal_4 + 1704[9]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "WallZomTunRWR_1", 2,802597E-45f, Vector(-4396,334f, 10,38831f, 4424,295f), Vector(0.0f, -89,9641f, 0.0f), Vector(3,649206f, 1,858154f, 5,022008f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1792, &iLocal_4 + 1704[9]);
	*(&iLocal_4 + 1856) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "Stage5_Vol_set");
	*(&iLocal_4 + 1800[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "LastCs", 2,802597E-45f, Vector(-4405,462f, 12,24296f, 4460,119f), Vector(0.0f, 0.0f, 0.0f), Vector(5,151551f, 11,99067f, 12,01448f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1856, &iLocal_4 + 1800[0]);
	*(&iLocal_4 + 1800[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Boss_NW", 2,802597E-45f, Vector(-4412,253f, 9,803206f, 4447,175f), Vector(0.0f, 0.0f, 0.0f), Vector(14,5172f, 14,53968f, 12,64909f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1856, &iLocal_4 + 1800[1]);
	*(&iLocal_4 + 1800[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Boss_SW", 2,802597E-45f, Vector(-4412,242f, 9,803206f, 4458,474f), Vector(0.0f, 0.0f, 0.0f), Vector(14,5172f, 14,53968f, 12,33484f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1856, &iLocal_4 + 1800[2]);
	*(&iLocal_4 + 1800[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Boss_SE", 2,802597E-45f, Vector(-4398,919f, 9,803206f, 4458,541f), Vector(0.0f, 0.0f, 0.0f), Vector(14,5172f, 14,53968f, 12,1933f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1856, &iLocal_4 + 1800[3]);
	*(&iLocal_4 + 1800[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Boss_NE", 2,802597E-45f, Vector(-4398,851f, 9,803206f, 4447,175f), Vector(0.0f, 0.0f, 0.0f), Vector(14,5172f, 14,53968f, 12,64909f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1856, &iLocal_4 + 1800[4]);
	*(&iLocal_4 + 1800[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Boss_Mid", 2,802597E-45f, Vector(-4405,716f, 9,803206f, 4452,891f), Vector(0.0f, 0.0f, 0.0f), Vector(8,058099f, 14,53968f, 7,896736f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1856, &iLocal_4 + 1800[5]);
	*(&iLocal_4 + 1912) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "WeatherVols_set");
	*(&iLocal_4 + 1864[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "escWeathVol_3", 2,802597E-45f, Vector(-4344,617f, 31,12805f, 4317,454f), Vector(0.0f, 0.0f, 0.0f), Vector(15,24643f, 11,0293f, 11,08799f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1912, &iLocal_4 + 1864[0]);
	*(&iLocal_4 + 1864[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "escWeathVol_2", 2,802597E-45f, Vector(-4355,07f, 31,06223f, 4327,425f), Vector(0.0f, 0.0f, 0.0f), Vector(16,09284f, 11,0293f, 41,56862f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1912, &iLocal_4 + 1864[1]);
	*(&iLocal_4 + 1864[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "escWeathVol_1", 2,802597E-45f, Vector(-4355,844f, 18,95531f, 4347,297f), Vector(0.0f, 0.0f, 0.0f), Vector(46,382f, 20,161f, 52,545f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1912, &iLocal_4 + 1864[2]);
	*(&iLocal_4 + 1864[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "escWeathVol_0", 2,802597E-45f, Vector(-4391,969f, 10,78906f, 4406,321f), Vector(0.0f, 0.0f, 0.0f), Vector(67,35807f, 14,21569f, 127,3627f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1912, &iLocal_4 + 1864[3]);
	*(&iLocal_4 + 1864[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "escWeathVol_4", 2,802597E-45f, Vector(-4332,393f, 32,21358f, 4321,834f), Vector(0.0f, -33,20564f, 0.0f), Vector(19,09162f, 11,0293f, 11,08799f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1912, &iLocal_4 + 1864[4]);
	*(&iLocal_4 + 2000) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "CatacombVolSet_set");
	*(&iLocal_4 + 1920[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol1", 2,802597E-45f, Vector(-4405,369f, 12,73499f, 4452,891f), Vector(0.0f, 0.0f, 0.0f), Vector(28,04976f, 15,99745f, 28,10167f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[0]);
	*(&iLocal_4 + 1920[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol2", 2,802597E-45f, Vector(-4396,305f, 12,73499f, 4426,018f), Vector(0.0f, 0.0f, 0.0f), Vector(48,21389f, 15,99745f, 28,10167f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[1]);
	*(&iLocal_4 + 1920[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol3", 2,802597E-45f, Vector(-4407,938f, 12,73499f, 4384,106f), Vector(0.0f, 0.0f, 0.0f), Vector(30,84031f, 15,99745f, 58,12931f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[2]);
	*(&iLocal_4 + 1920[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol4", 2,802597E-45f, Vector(-4378,914f, 16,46799f, 4361,226f), Vector(0.0f, 0.0f, 0.0f), Vector(30,84031f, 15,99745f, 9,937187f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[3]);
	*(&iLocal_4 + 1920[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol5", 2,802597E-45f, Vector(-4355,462f, 22,81601f, 4360,866f), Vector(0.0f, 0.0f, 0.0f), Vector(19,81077f, 13,8646f, 20,25659f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[4]);
	*(&iLocal_4 + 1920[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol6", 2,802597E-45f, Vector(-4355,462f, 28,27895f, 4336,576f), Vector(0.0f, 0.0f, 0.0f), Vector(13,36648f, 13,8646f, 29,43307f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[5]);
	*(&iLocal_4 + 1920[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol7", 2,802597E-45f, Vector(-4355,462f, 31,74846f, 4314,676f), Vector(0.0f, 0.0f, 0.0f), Vector(15,58662f, 13,8646f, 16,26372f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[6]);
	*(&iLocal_4 + 1920[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol8", 2,802597E-45f, Vector(-4336,832f, 31,74846f, 4314,676f), Vector(0.0f, 0.0f, 0.0f), Vector(22,07125f, 13,8646f, 16,26372f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[7]);
	*(&iLocal_4 + 1920[8]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "CatacombVol9", 2,802597E-45f, Vector(-4336,832f, 37,59294f, 4303,073f), Vector(0.0f, 0.0f, 0.0f), Vector(13,57511f, 9,893325f, 10,24567f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2000, &iLocal_4 + 1920[8]);
	*(&iLocal_4 + 2032) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, "ReyesElim_set");
	*(&iLocal_4 + 2008[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Elim_0", 2,802597E-45f, Vector(-4351,687f, 43,04445f, 4326,273f), Vector(0.0f, 0.0f, 0.0f), Vector(19,3f, 15,08773f, 9,359695f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2032, &iLocal_4 + 2008[0]);
	*(&iLocal_4 + 2008[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, "Elim_1", 2,802597E-45f, Vector(-4343,729f, 43,04445f, 4329,385f), Vector(0.0f, 88,89737f, 0.0f), Vector(16,14785f, 15,08773f, 5,278673f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 2032, &iLocal_4 + 2008[1]);
	*(&iLocal_4 + 2040) = CREATE_OBJECTSET_IN_LAYOUT("StagePositionSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2048[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart_0", Vector(-4343,997f, 42,09053f, 4331,209f), Vector(0.0f, 33,82376f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[0], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompStart_0", Vector(-4336,917f, 42,08085f, 4329,415f), Vector(0.0f, 79,29158f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[1], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart_1", Vector(-4355,055f, 42,01784f, 4324,092f), Vector(0.0f, 88,50552f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[2], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompStart_1", Vector(-4353,957f, 42,01784f, 4324,88f), Vector(0.0f, 88,50552f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[3], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart_2", Vector(-4334,063f, 35,787f, 4309,241f), Vector(0.0f, 236,382f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[4], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompStart_2", Vector(-4335,615f, 36,16592f, 4307,208f), Vector(0.0f, 196,1474f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[5], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart_3", Vector(-4368,73f, 15,93122f, 4361,757f), Vector(0.0f, 88,50552f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[6], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompStart_3", Vector(-4366,729f, 16,14518f, 4360,13f), Vector(28,49943f, 88,60828f, 28,54417f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[7], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompStart_4", Vector(-4411,493f, 8,462169f, 4410,158f), Vector(0.0f, 178,1128f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[8], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart_4", Vector(-4410,923f, 8,066486f, 4413,28f), Vector(0.0f, 180,8657f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[9], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart_5", Vector(-4404,606f, 7,673f, 4449,625f), Vector(0.0f, 174,4191f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[10], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompStart_5", Vector(-4405,957f, 7,651312f, 4447,922f), Vector(0.0f, 172,4657f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[11], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[12]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "PlayerStart_Lst", Vector(-4343,361f, 36,03331f, 4300,123f), Vector(0.0f, 90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[12], &iLocal_4 + 2040);
	*(&iLocal_4 + 2048[13]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FinalHorse_Pos", Vector(-4352,047f, 33,92792f, 4297,497f), Vector(186,1563f, 70,47005f, 186,0756f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2048[13], &iLocal_4 + 2040);
	*(&iLocal_4 + 2168) = CREATE_OBJECTSET_IN_LAYOUT("Global_PosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2176[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nMaskAltar", Vector(-4405,347f, 7,86182f, 4463,59f), Vector(0.0f, -2,062448f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2176[0], &iLocal_4 + 2168);
	*(&iLocal_4 + 2192) = CREATE_OBJECTSET_IN_LAYOUT("Stage0_PosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2200[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S0_ReyesCorpse", Vector(-4347,29f, 42,08085f, 4327,559f), Vector(0.0f, 217,1094f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2200[0], &iLocal_4 + 2192);
	*(&iLocal_4 + 2216) = CREATE_OBJECTSET_IN_LAYOUT("Stage1_PosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2224[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CataEntBlip", Vector(-4335,91f, 36,16592f, 4307,456f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2224[0], &iLocal_4 + 2216);
	*(&iLocal_4 + 2240) = CREATE_OBJECTSET_IN_LAYOUT("S1_Zomb_LocsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2248[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Balc_Go_Near_0", Vector(-4358,562f, 42,01784f, 4323,576f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2248[0], &iLocal_4 + 2240);
	*(&iLocal_4 + 2264) = CREATE_OBJECTSET_IN_LAYOUT("Stage2_PosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2272[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Shotgun_Pillar", Vector(-4363,459f, 23,26119f, 4367,712f), Vector(136,043f, 3,349626f, 91,04864f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[0], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_CamLook", Vector(-4328,291f, 36,23187f, 4314,052f), Vector(-1,990755f, -8,742201f, 3,590581f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[1], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "M_StairWait", Vector(-4348,031f, 30,73267f, 4313,44f), Vector(0.0f, 112,4618f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[2], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nM_TunWait", Vector(-4353,11f, 29,01651f, 4318,608f), Vector(0.0f, 163,942f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[3], &iLocal_4 + 2264);
	*(&iLocal_4 + 2312) = CREATE_OBJECTSET_IN_LAYOUT("S2_Zomb_LocsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2320[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Tunnel_Go_Near_0", Vector(-4355,178f, 28,98228f, 4316,799f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2320[0], &iLocal_4 + 2312);
	*(&iLocal_4 + 2320[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Pillar_GN_0", Vector(-4348,424f, 21,9122f, 4361,988f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2320[1], &iLocal_4 + 2312);
	*(&iLocal_4 + 2320[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bruise_Corn_0", Vector(-4347,832f, 22,96402f, 4354,88f), Vector(0.0f, 76,07336f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2320[2], &iLocal_4 + 2312);
	*(&iLocal_4 + 2352) = CREATE_OBJECTSET_IN_LAYOUT("S2_Ground_0Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2360[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_Gr_0", Vector(-4355,2f, 27,91489f, 4327,658f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2360[0], &iLocal_4 + 2352);
	*(&iLocal_4 + 2360[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_Gr_1", Vector(-4356,759f, 24,67279f, 4341,346f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2360[1], &iLocal_4 + 2352);
	*(&iLocal_4 + 2360[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_Gr_2", Vector(-4354,088f, 25,20029f, 4339,2f), Vector(0.0f, 6,892387f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2360[2], &iLocal_4 + 2352);
	*(&iLocal_4 + 2360[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_Gr_3", Vector(-4356,54f, 26,93808f, 4332,183f), Vector(0.0f, -8,206666f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2360[3], &iLocal_4 + 2352);
	*(&iLocal_4 + 2360[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_Gr_4", Vector(-4357,037f, 23,94528f, 4345,072f), Vector(0.0f, -4,743802f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2360[4], &iLocal_4 + 2352);
	*(&iLocal_4 + 2360[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_Gr_5", Vector(-4353,984f, 23,56672f, 4346,253f), Vector(0.0f, 0,5054937f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2360[5], &iLocal_4 + 2352);
	*(&iLocal_4 + 2416) = CREATE_OBJECTSET_IN_LAYOUT("S2_Wall_0Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2424[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_0_Roll", Vector(-4359,258f, 27,78125f, 4338,733f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[0], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_0_Spawn", Vector(-4357,326f, 25,323f, 4346,687f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[1], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_1_Roll", Vector(-4359,05f, 26,369f, 4338,947f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[2], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_1_Spawn", Vector(-4357,305f, 25,323f, 4339,542f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[3], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_2_Spawn", Vector(-4353,369f, 23,55106f, 4346,256f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[4], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_3_Spawn", Vector(-4356,578f, 23,37786f, 4347,289f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[5], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_2_Roll", Vector(-4351,389f, 25,86822f, 4346,611f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[6], &iLocal_4 + 2416);
	*(&iLocal_4 + 2424[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S2_W_3_Roll", Vector(-4359,371f, 25,39331f, 4348,01f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2424[7], &iLocal_4 + 2416);
	*(&iLocal_4 + 2496) = CREATE_OBJECTSET_IN_LAYOUT("S2_Ground_1Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2504[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS2_Gr_1_0", Vector(-4357,166f, 22,81425f, 4349,798f), Vector(0.0f, -1,012896f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2504[0], &iLocal_4 + 2496);
	*(&iLocal_4 + 2504[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS2_Gr_1_1", Vector(-4355,209f, 24,1418f, 4343,932f), Vector(0.0f, 1,368407f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2504[1], &iLocal_4 + 2496);
	*(&iLocal_4 + 2504[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Bruise_GrndSpwn", Vector(-4356,397f, 22,10285f, 4356,348f), Vector(0.0f, -7,002051f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2504[2], &iLocal_4 + 2496);
	*(&iLocal_4 + 2536) = CREATE_OBJECTSET_IN_LAYOUT("S2_PD_0Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2544[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS2_PD_0_0", Vector(-4361,312f, 22,0449f, 4367,393f), Vector(-180,0025f, -186,8171f, 179,4038f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2544[0], &iLocal_4 + 2536);
	*(&iLocal_4 + 2560) = CREATE_OBJECTSET_IN_LAYOUT("Stage3_PosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2568[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_CamLook", Vector(-4392,333f, 11,20395f, 4361,001f), Vector(183,0502f, 60,9958f, 182,6201f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2568[0], &iLocal_4 + 2560);
	*(&iLocal_4 + 2568[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_FC_GoNear", Vector(-4415,771f, 10,91544f, 4364,176f), Vector(0.0f, 1,449f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2568[1], &iLocal_4 + 2560);
	*(&iLocal_4 + 2568[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_M_GR_Wait", Vector(-4375,75f, 13,94843f, 4359,876f), Vector(0.0f, 107,5662f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2568[2], &iLocal_4 + 2560);
	*(&iLocal_4 + 2568[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_Rep_0", Vector(-4395,011f, 8,418857f, 4398,619f), Vector(136,0959f, 2,22075f, 92,13737f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2568[3], &iLocal_4 + 2560);
	*(&iLocal_4 + 2568[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_M_GR_Wait_0", Vector(-4381,284f, 11,6957f, 4359,56f), Vector(0.0f, 109,3734f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2568[4], &iLocal_4 + 2560);
	*(&iLocal_4 + 2616) = CREATE_OBJECTSET_IN_LAYOUT("S3_Zomb_LocsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2624[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GR_GoNear_0", Vector(-4383,464f, 10,8341f, 4360,802f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2624[0], &iLocal_4 + 2616);
	*(&iLocal_4 + 2640) = CREATE_OBJECTSET_IN_LAYOUT("S3_Ground_0Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2648[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS3_Gr_0_0", Vector(-4392,584f, 11,0618f, 4360,579f), Vector(0.0f, -95,68273f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[0], &iLocal_4 + 2640);
	*(&iLocal_4 + 2648[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS3_Gr_0_1", Vector(-4406,031f, 10,91451f, 4359,652f), Vector(0.0f, -87,41605f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2648[1], &iLocal_4 + 2640);
	*(&iLocal_4 + 2672) = CREATE_OBJECTSET_IN_LAYOUT("S3_Walk_0Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2680[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_W_0_0", Vector(-4401,633f, 11,0279f, 4362,859f), Vector(0.0f, -87,41605f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2680[0], &iLocal_4 + 2672);
	*(&iLocal_4 + 2680[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_W_0_1", Vector(-4402,601f, 11,40411f, 4359,185f), Vector(0.0f, -93,81799f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2680[1], &iLocal_4 + 2672);
	*(&iLocal_4 + 2680[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_W_0_2", Vector(-4419,116f, 11,34014f, 4360,219f), Vector(0.0f, -87,41605f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2680[2], &iLocal_4 + 2672);
	*(&iLocal_4 + 2712) = CREATE_OBJECTSET_IN_LAYOUT("S3_GRC_Wall_0Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2720[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC_Wall_0_Roll", Vector(-4395,638f, 14,56267f, 4357,531f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2720[0], &iLocal_4 + 2712);
	*(&iLocal_4 + 2720[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC_Wall_0_SP", Vector(-4395,63f, 10,92504f, 4359,25f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2720[1], &iLocal_4 + 2712);
	*(&iLocal_4 + 2720[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC_Wall_1_Roll", Vector(-4404,853f, 13,24793f, 4364,756f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2720[2], &iLocal_4 + 2712);
	*(&iLocal_4 + 2720[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC_Wall_1_SP", Vector(-4404,166f, 10,88603f, 4362,022f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2720[3], &iLocal_4 + 2712);
	*(&iLocal_4 + 2760) = CREATE_OBJECTSET_IN_LAYOUT("S3_GRC_Wall_1Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2768[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_0_Roll", Vector(-4404,82f, 12,07803f, 4364,565f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[0], &iLocal_4 + 2760);
	*(&iLocal_4 + 2768[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_0_SP", Vector(-4405,957f, 11,05989f, 4362,408f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[1], &iLocal_4 + 2760);
	*(&iLocal_4 + 2768[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_1_Roll", Vector(-4404,853f, 14,55111f, 4364,625f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[2], &iLocal_4 + 2760);
	*(&iLocal_4 + 2768[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_1_SP", Vector(-4404,952f, 10,85118f, 4362,773f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[3], &iLocal_4 + 2760);
	*(&iLocal_4 + 2768[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_2_Roll", Vector(-4395,808f, 12,10765f, 4357,748f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[4], &iLocal_4 + 2760);
	*(&iLocal_4 + 2768[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_2_SP", Vector(-4395,028f, 10,89999f, 4359,675f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[5], &iLocal_4 + 2760);
	*(&iLocal_4 + 2768[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_3_Roll", Vector(-4395,766f, 13,33827f, 4357,425f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[6], &iLocal_4 + 2760);
	*(&iLocal_4 + 2768[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "GRC1_Wall_3_SP", Vector(-4395,084f, 10,91368f, 4360,485f), Vector(0.0f, -99,94138f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2768[7], &iLocal_4 + 2760);
	*(&iLocal_4 + 2840) = CREATE_OBJECTSET_IN_LAYOUT("S3_FastCornSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2848[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S3_FC_0", Vector(-4410,336f, 8,700473f, 4379,645f), Vector(0.0f, 97,74782f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2848[0], &iLocal_4 + 2840);
	*(&iLocal_4 + 2864) = CREATE_OBJECTSET_IN_LAYOUT("S3_Gas_Tox_0Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2872[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Gas_Tox_0_0", Vector(-4415,41f, 7,825043f, 4387,876f), Vector(0.0f, -72,82075f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[0], &iLocal_4 + 2864);
	*(&iLocal_4 + 2872[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Gas_Tox_0_1", Vector(-4417,823f, 8,128137f, 4393,746f), Vector(0.0f, -29,97459f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[1], &iLocal_4 + 2864);
	*(&iLocal_4 + 2872[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Gas_Tox_0_2", Vector(-4407,802f, 8,148f, 4395,376f), Vector(0.0f, 77,91801f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[2], &iLocal_4 + 2864);
	*(&iLocal_4 + 2872[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Gas_Tox_0_3", Vector(-4409,366f, 7,73168f, 4402,514f), Vector(0.0f, -72,2013f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[3], &iLocal_4 + 2864);
	*(&iLocal_4 + 2872[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Gas_Walker_0_0", Vector(-4412,799f, 7,818703f, 4393,719f), Vector(0.0f, -29,97459f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[4], &iLocal_4 + 2864);
	*(&iLocal_4 + 2872[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Gas_Walker_0_1", Vector(-4395,682f, 7,78519f, 4397,758f), Vector(0.0f, -29,97459f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[5], &iLocal_4 + 2864);
	*(&iLocal_4 + 2872[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Gas_Walker_0_2", Vector(-4409,875f, 7,948917f, 4401,828f), Vector(0.0f, -29,97459f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2872[6], &iLocal_4 + 2864);
	*(&iLocal_4 + 2936) = CREATE_OBJECTSET_IN_LAYOUT("S3_Gas_Walker_DestSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2944[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS3_Dest_0", Vector(-4406,593f, 7,889936f, 4386,786f), Vector(0.0f, -29,97459f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[0], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS3_Dest_1", Vector(-4415,432f, 7,781497f, 4392,31f), Vector(0.0f, 24,21241f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[1], &iLocal_4 + 2936);
	*(&iLocal_4 + 2944[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS3_Dest_2", Vector(-4397,948f, 7,825559f, 4394,66f), Vector(0.0f, 24,21241f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2944[2], &iLocal_4 + 2936);
	*(&iLocal_4 + 2976) = CREATE_OBJECTSET_IN_LAYOUT("Stage4_PosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2984[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_CamLook", Vector(-4407,387f, 9,706504f, 4420,382f), Vector(184,2346f, 60,95396f, 183,9746f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2984[0], &iLocal_4 + 2976);
	*(&iLocal_4 + 2984[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_LeftGo_Near", Vector(-4405,61f, 7,866611f, 4419,591f), Vector(184,2346f, 60,95396f, 183,9746f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2984[1], &iLocal_4 + 2976);
	*(&iLocal_4 + 2984[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_ShtGun_0", Vector(-4376,253f, 11,77131f, 4424,266f), Vector(136,6093f, 1,873046f, 91,95398f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2984[2], &iLocal_4 + 2976);
	*(&iLocal_4 + 2984[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_RightGo_Near", Vector(-4384,862f, 10,45842f, 4426,853f), Vector(184,2346f, 60,95396f, 183,9746f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2984[3], &iLocal_4 + 2976);
	*(&iLocal_4 + 3024) = CREATE_OBJECTSET_IN_LAYOUT("S4_Zomb_LocsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3032[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "FH_Go_Near_0", Vector(-4407,537f, 7,861943f, 4419,55f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3032[0], &iLocal_4 + 3024);
	*(&iLocal_4 + 3048) = CREATE_OBJECTSET_IN_LAYOUT("S4_TunLWRSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3056[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLWR_R", Vector(-4394,303f, 12,53988f, 4422,787f), Vector(0.0f, 85,76615f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3056[0], &iLocal_4 + 3048);
	*(&iLocal_4 + 3056[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLWR_S", Vector(-4394,325f, 10,21249f, 4421,038f), Vector(0.0f, 94,89729f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3056[1], &iLocal_4 + 3048);
	*(&iLocal_4 + 3080) = CREATE_OBJECTSET_IN_LAYOUT("S4_TunLGrndSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3088[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLGrnd_0", Vector(-4401,2f, 8,507927f, 4420,606f), Vector(0.0f, 79,71889f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3088[0], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLGrnd_1", Vector(-4387,021f, 10,84708f, 4421,021f), Vector(0.0f, 86,80899f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3088[1], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLGrnd_2", Vector(-4383,522f, 11,1292f, 4419,126f), Vector(1,509045f, 93,63868f, 0,3546027f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3088[2], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLWlk_0", Vector(-4387,005f, 10,86274f, 4421,165f), Vector(178,4062f, 93,4449f, 177,2576f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3088[3], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLWlk_1", Vector(-4394,46f, 10,05851f, 4418,068f), Vector(178,4062f, 93,4449f, 177,2576f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3088[4], &iLocal_4 + 3080);
	*(&iLocal_4 + 3088[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunLWlkBruise", Vector(-4379,775f, 10,85426f, 4423,901f), Vector(179,3644f, 180,0785f, 178,3891f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3088[5], &iLocal_4 + 3080);
	*(&iLocal_4 + 3144) = CREATE_OBJECTSET_IN_LAYOUT("S4_TunMAmmoSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3152[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunMFast_0", Vector(-4378,164f, 11,02858f, 4422,878f), Vector(0.0f, 71,13152f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3152[0], &iLocal_4 + 3144);
	*(&iLocal_4 + 3168) = CREATE_OBJECTSET_IN_LAYOUT("S4_TunRWRSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3176[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunRWR_R_0", Vector(-4393,376f, 10,99336f, 4429,968f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3176[0], &iLocal_4 + 3168);
	*(&iLocal_4 + 3176[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunRWR_S_0", Vector(-4393,541f, 8,978894f, 4428,567f), Vector(0.0f, -83,46635f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3176[1], &iLocal_4 + 3168);
	*(&iLocal_4 + 3176[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunRWR_R_1", Vector(-4396,334f, 10,38831f, 4424,295f), Vector(0.0f, -90.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3176[2], &iLocal_4 + 3168);
	*(&iLocal_4 + 3176[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunRWR_S_1", Vector(-4396,493f, 8,295035f, 4425,301f), Vector(0.0f, -100,4661f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3176[3], &iLocal_4 + 3168);
	*(&iLocal_4 + 3216) = CREATE_OBJECTSET_IN_LAYOUT("S4_TunRGrndSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3224[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunRGrnd_0", Vector(-4401,864f, 7,785156f, 4427,031f), Vector(0.0f, -87,47363f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3224[0], &iLocal_4 + 3216);
	*(&iLocal_4 + 3224[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S4_TunRWlk_1", Vector(-4392,682f, 8,805483f, 4425,436f), Vector(0.0f, -99,10239f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3224[1], &iLocal_4 + 3216);
	*(&iLocal_4 + 3248) = CREATE_OBJECTSET_IN_LAYOUT("S5_BossFight_IntroSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3256[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS5_BF_I_0", Vector(-4405,321f, 7,571939f, 4460,919f), Vector(0.0f, 0,3849253f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3256[0], &iLocal_4 + 3248);
	*(&iLocal_4 + 3256[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS5_BF_I_1", Vector(-4406,633f, 7,575405f, 4460,083f), Vector(0.0f, -12,46367f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3256[1], &iLocal_4 + 3248);
	*(&iLocal_4 + 3256[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS5_BF_I_2", Vector(-4403,887f, 7,598949f, 4459,997f), Vector(0.0f, 10,39272f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3256[2], &iLocal_4 + 3248);
	*(&iLocal_4 + 3256[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS5_BF_I_3", Vector(-4397,228f, 7,580396f, 4452,891f), Vector(0.0f, 55,72137f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3256[3], &iLocal_4 + 3248);
	*(&iLocal_4 + 3256[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS5_BF_I_4", Vector(-4414,354f, 7,694942f, 4452,808f), Vector(0.0f, -92,55119f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3256[4], &iLocal_4 + 3248);
	*(&iLocal_4 + 3304) = CREATE_OBJECTSET_IN_LAYOUT("Stage5_PosSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3312[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_CamLook", Vector(-4405,347f, 8,784268f, 4461,007f), Vector(184,2346f, 60,95396f, 183,9746f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3312[0], &iLocal_4 + 3304);
	*(&iLocal_4 + 3312[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_Maiden_Spec", Vector(-4406,817f, 7,915734f, 4443,225f), Vector(182,2297f, -22,85634f, 179,4046f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3312[1], &iLocal_4 + 3304);
	*(&iLocal_4 + 3312[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_Maiden_Wait", Vector(-4406,738f, 8,250564f, 4456,035f), Vector(182,0695f, -6,896797f, 180,0224f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3312[2], &iLocal_4 + 3304);
	*(&iLocal_4 + 3312[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_ShtGun_0", Vector(-4393,762f, 8,925014f, 4452,102f), Vector(161,7782f, 1,873046f, 91,95398f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3312[3], &iLocal_4 + 3304);
	*(&iLocal_4 + 3312[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_ShtGun_1", Vector(-4416,763f, 8,961376f, 4453,06f), Vector(161,7875f, 0,5034602f, 92,40482f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3312[4], &iLocal_4 + 3304);
	*(&iLocal_4 + 3360) = CREATE_OBJECTSET_IN_LAYOUT("S5_Boss_SpawnsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3368[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_NW_Spawn_Start", Vector(-4409,411f, 7,889452f, 4445,181f), Vector(3,04827f, 227,6102f, 358,0187f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[0], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_NW_Spawn_0", Vector(-4413,194f, 8,327497f, 4446,2f), Vector(186,1484f, -70,44411f, 534,4748f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[1], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_NW_Spawn_End", Vector(-4413,422f, 7,82607f, 4450,225f), Vector(184,8122f, 295,2997f, 175,9185f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[2], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_NE_Spawn_Start", Vector(-4397,217f, 7,861141f, 4450,127f), Vector(184,2346f, 60,95396f, 183,9746f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[3], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_NE_Spawn_0", Vector(-4397,829f, 8,475432f, 4446,15f), Vector(182,8772f, 44,42f, 182,2856f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[4], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_NE_Spawn_End", Vector(-4400,514f, 7,996771f, 4445,201f), Vector(183,2371f, 50,58808f, 182,773f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[5], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_SW_Spawn_Start", Vector(-4413,502f, 7,78046f, 4455,888f), Vector(176,2157f, 237,0993f, 183,4497f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[6], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_SW_Spawn_0", Vector(-4408,839f, 7,956619f, 4461,49f), Vector(177,6118f, 210,6441f, 181,4888f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[7], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_SW_Spawn_End", Vector(-4411,535f, 7,878655f, 4460,608f), Vector(177,5182f, 214,1142f, 181,6635f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[8], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_SE_Spawn_Start", Vector(-4401,431f, 7,986619f, 4460,757f), Vector(357,144f, 43,9849f, 358,2868f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[9], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[10]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_SE_Spawn_0", Vector(-4398,406f, 8,052126f, 4460,001f), Vector(354,8176f, 66,61569f, 355,5122f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[10], &iLocal_4 + 3360);
	*(&iLocal_4 + 3368[11]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_SE_Spawn_End", Vector(-4396,93f, 7,950848f, 4457,377f), Vector(177,8709f, 164,7968f, 179,7124f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3368[11], &iLocal_4 + 3360);
	*(&iLocal_4 + 3472) = CREATE_OBJECTSET_IN_LAYOUT("S5_Fast_Zom_RunSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 3480[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_Fast_Run_center", Vector(-4405,369f, 7,519726f, 4452,891f), Vector(357,144f, 43,9849f, 358,2868f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3480[0], &iLocal_4 + 3472);
	*(&iLocal_4 + 3480[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_Fast_Run_Altar", Vector(-4405,318f, 7,688932f, 4461,487f), Vector(357,144f, 43,9849f, 358,2868f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3480[1], &iLocal_4 + 3472);
	*(&iLocal_4 + 3480[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_Fast_Run_Left", Vector(-4396,442f, 7,691697f, 4452,891f), Vector(357,144f, 43,9849f, 358,2868f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3480[2], &iLocal_4 + 3472);
	*(&iLocal_4 + 3480[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_Fast_Run_Door", Vector(-4405,453f, 7,702914f, 4444,644f), Vector(357,144f, 43,9849f, 358,2868f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3480[3], &iLocal_4 + 3472);
	*(&iLocal_4 + 3480[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S5_Fast_Run_Right", Vector(-4414,933f, 7,816479f, 4452,891f), Vector(357,144f, 43,9849f, 358,2868f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 3480[4], &iLocal_4 + 3472);
	*(&iLocal_4 + 3528) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "DLC_female_cower", "DLC_female_cower", Vector(-4336,917f, 42,0773f, 4329,415f), Vector(0.0f, 63,86532f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 3536) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "BalcCorner");
	PushArrayP();
	*(&iLocal_4 + 3544) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "PillarFast");
	PushArrayP();
	*(&iLocal_4 + 3552) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "PreGasFast");
	PushArrayP();
	*(&iLocal_4 + 3560) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "FH_Corn");
	PushArrayP();
	*(&iLocal_4 + 3568) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "MaidenFol_S1");
	PushArrayP();
	*(&iLocal_4 + 3576) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "MaidenFol_S2");
	PushArrayP();
	*(&iLocal_4 + 3584) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "MaidenFol_S3");
	PushArrayP();
	*(&iLocal_4 + 3592) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, "MaidenFol_S4");
	return;
}

bool Function_260() //Position: 0x11230 / 70192
{
	if (!IS_EXITFLAG_SET())
	{
		if (!iLocal_1610)
		{
			if (!Function_271(0))
			{
				return 0;
			}
			if (!Function_267())
			{
				return 0;
			}
			iLocal_1610 = 1;
		}
		if (!Function_261(&iLocal_920))
		{
			return 0;
		}
		if (!Function_239())
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_1235))
		{
			iLocal_1235 = Function_234(1, 1, 0, 0, 0, 0, 1, 0);
			TASK_STAND_STILL(&iLocal_1235, -1.0f, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&iLocal_1235, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_261(struct<2>[] Param0) //Position: 0x112A8 / 70312
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_266();
	iVar1 = 0;
	if (!Function_169(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_265(&(Param0[iVar02]), 8);
		}
		else if (Function_264())
		{
			iVar1 = 1;
			Function_265(&(Param0[iVar02]), 8);
		}
		Function_265(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_169(&(Param0[iVar02]), 4))
		{
			if (!Function_169(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_169(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_169(&(Param0[02]), 8) || iVar1));
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
				Function_265(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_169(&(Param0[iVar02]), 4))
		{
			if (!Function_169(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
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
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_265(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_265(&(Param0[iVar02]), 2);
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
	Function_262();
	return 1;
}

void Function_262() //Position: 0x1166A / 71274
{
	if (!Function_263(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_263(int iParam0) //Position: 0x116AA / 71338
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_264() //Position: 0x116C6 / 71366
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

void Function_265(struct<13> Param0) //Position: 0x116F4 / 71412
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_266() //Position: 0x11707 / 71431
{
	if (!Function_263(128))
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

bool Function_267() //Position: 0x11749 / 71497
{
	Function_270(&iLocal_4 + 8, 1274, 2, 0);
	Function_268(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/dlc_female_cower", 1, 0);
	if (Function_261(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

var Function_268(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x117AE / 71598
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_269(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_265(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_269(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x117EC / 71660
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_169(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_265(&(Param0[iVar02]), 4);
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

var Function_270(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x118BB / 71867
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_169(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_265(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_265(&(Param0[iVar02]), 8);
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

bool Function_271(bool bParam0) //Position: 0x11997 / 72087
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

int Function_272() //Position: 0x119C7 / 72135
{
	if (!IS_EXITFLAG_SET())
	{
		if (!Function_271(0))
		{
			return 0;
		}
		if (!Function_267())
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED())
		{
			return 0;
		}
		if (!Function_239())
		{
			return 0;
		}
		if (!Function_261(&iLocal_920))
		{
			return 0;
		}
		if (!Function_261(&iLocal_1197))
		{
			return 0;
		}
		if (!IS_ACTOR_VALID(&iLocal_1235))
		{
			iLocal_1235 = Function_234(1, 1, 0, 0, 0, 0, 1, 0);
			TASK_STAND_STILL(&iLocal_1235, -1.0f, 0, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&iLocal_1235, 1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_273() //Position: 0x11A49 / 72265
{
	Function_270(&iLocal_4 + 392, 1238, 2, 0);
	if (Function_261(&iLocal_4 + 392))
	{
		return 1;
	}
	return 0;
}

int Function_274() //Position: 0x11A6B / 72299
{
	switch (bLocal_1010)
	{
		case 0x00000063:
			Function_276();
			Function_275(2, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1);
			RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
			return 1;
			break;
		
		case 0x00000001:
			CUTSCENE_MANAGER_SHOW_ACTOR(&uLocal_1233);
			Function_275(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
		
		default:
			Function_275(2, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void Function_275(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x11AD2 / 72402
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
		uVar0 = Function_54();
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
		Function_91(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_203();
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
	Function_242(&iParam9, &bParam10);
}

void Function_276() //Position: 0x11BA1 / 72609
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("cupSet", &uLocal_906, 4294967295, 0);
	LOCATE_PHYSINSTS_OF_PARTIAL_TYPE(&uVar0, &iLocal_4 + 1208[1], "p_gen_glass06", 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			uVar3 = GET_PHYSINST_FROM_OBJECT(&uVar2);
			if (IS_PHYSINST_VALID(&uVar3))
			{
				HIDE_PHYSINST(&uVar3);
			}
		}
		bVar1++;
	}
	return;
}

int Function_277() //Position: 0x11C20 / 72736
{
	switch (bLocal_1010)
	{
		case 0x00000063:
			Function_188(&Global_54076, &iLocal_4 + 2048[0], 0, 0, 0);
			Function_188(&uLocal_1233, &iLocal_4 + 2048[1], 1, 1, 1);
			Function_299();
			TASK_CLEAR(&uLocal_1233);
			SNAP_ACTOR_TO_GRINGO(&uLocal_1233, &iLocal_4 + 3528, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&uLocal_1233, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3528), "UseCase1", 4294967295, 1);
			Function_298();
			if (!iLocal_1612)
			{
				Function_296();
			}
			return 1;
			break;
		
		case 0x00000001:
			Function_279();
			Function_188(&Global_54076, &iLocal_4 + 2048[2], 0, 1, 1);
			Function_188(&uLocal_1233, &iLocal_4 + 2048[3], 1, 1, 1);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			ACTOR_POP_NEXT_GAIT(&Global_54076, 1, false);
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,35f, 0);
			return 1;
			break;
		
		case 0x00000005:
			Function_188(&Global_54076, &iLocal_4 + 2048[10], 1, 1, 1);
			Function_188(&uLocal_1233, &iLocal_4 + 2048[11], 1, 1, 1);
			Function_278();
			return 1;
			break;
		
		case 0x00000065:
			Function_188(&Global_54076, &iLocal_4 + 2048[12], 0, 1, 1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_278() //Position: 0x11D59 / 73049
{
	var uVar0;
	
	uLocal_1267 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_906, "nFinalDoor", "p_gen_doorStone_cs01x", Vector(-4407,195f, 7,6413f, 4441,882f), Vector(0.0f, 0,884f, 0.0f), true);
	if (!IS_OBJECT_VALID(&uLocal_1267))
	{
		LOG_ERROR("CreateFinalDoor -- Final door unable to be created...");
	}
	else
	{
		uVar0 = GET_PHYSINST_FROM_OBJECT(&uLocal_1267);
		if (IS_PHYSINST_VALID(&uVar0))
		{
			SET_PROP_TARGETABLE(&uVar0, 0, 1);
		}
	}
	return;
}

void Function_279() //Position: 0x11E0B / 73227
{
	Function_295();
	Function_294();
	Function_293();
	Function_292();
	Function_291();
	Function_282(&iLocal_4 + 576, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_282(&iLocal_4 + 624, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_282(&iLocal_4 + 656, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_282(&iLocal_4 + 688, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_280(&iLocal_4 + 576, &iLocal_4 + 1240[1], 1, &iLocal_4 + 1240[9], 1);
	Function_280(&iLocal_4 + 624, &iLocal_4 + 1240[2], 1, &iLocal_4 + 1240[9], 1);
	Function_280(&iLocal_4 + 656, &iLocal_4 + 1240[5], 1, &iLocal_4 + 1240[9], 1);
	Function_280(&iLocal_4 + 688, &iLocal_4 + 1240[4], 1, &iLocal_4 + 1240[9], 1);
	return;
}

void Function_280(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4) //Position: 0x11EE0 / 73440
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
			Function_281(&uVar1, &uParam1, &iParam2, &uParam3, 2);
			if (&bParam4)
			{
				MEMORY_CONSIDER_AS(&uVar1, &Global_54076, 3);
			}
		}
		bVar0++;
	}
}

void Function_281(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4) //Position: 0x11F44 / 73540
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	TASK_CLEAR(&uParam0);
	SET_ACTOR_STAY_WITHIN_VOLUME(&uParam0, &uParam1, 1, &uParam4);
	AI_AVOID_IGNORE_ACTOR(&uParam0, &Global_54076);
	AI_SET_NAV_SUBGRID_CELL_SIZE(&uParam0, 0,5f);
	if (&bParam2)
	{
		if (IS_VOLUME_VALID(&uParam3))
		{
			SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uParam0, &uParam3, 1, 1);
			SET_ACTOR_VOLUME_PARAMETERS(&uParam0, true, 1);
		}
	}
}

void Function_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x11FA6 / 73638
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Passed invalid squad, exiting...");
		PRINTNL();
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_283(&uVar1, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &iParam6, &iParam7);
		}
		else
		{
			PRINTSTRING("MAKE_SQUAD_ZOMBIE -- Invalid member in the squad..");
			PRINTNL();
		}
		bVar0++;
	}
}

void Function_283(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7) //Position: 0x1207D / 73853
{
	var uVar0;
	
	if (Function_290(&uParam0) && !Function_289(&uParam0, 1))
	{
		LOG_ERROR("Calling MAKE_ACTOR_ZOMBIE() on a CUSTOM ZOMBIE! Don't do that!");
		return;
	}
	TURN_ACTOR_INTO_ZOMBIE(&uParam0, &iParam1);
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
		if (!ADD_ZOMBIE_TO_ACTOR(&uParam0, &iParam2, &iParam3))
		{
			LOG_ERROR("MAKE_ACTOR_ZOMBIE: Failed to apply bloody head/body textures!");
		}
	}
	if (&bParam6)
	{
		DEEQUIP_ACCESSORY(&uParam0, 0);
	}
	if (&bParam7)
	{
		DELETE_ALL_WEAPONS_FROM_ACTOR(&uParam0);
	}
	Function_287(&uParam0);
	DECOR_SET_BOOL(&uParam0, "Zombie", true);
	Function_286(&uParam0);
	SET_ACTOR_ALLOW_DISARM(&uParam0, false);
	SET_CRIPPLE_ENABLE(&uParam0, 0);
	SET_CRIPPLE_FLAG(&uParam0, false);
	SET_ALLOW_COLD_WEATHER_BREATH(&uParam0, 0);
	SET_ACTOR_CAN_PLAY_GESTURES(&uParam0, false);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&uParam0, 0);
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&uParam0, false);
	SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(&uParam0, 0);
	SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(&uParam0, 1);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(&uParam0, 0.0f, 1,115f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 33, 15.0f);
	SET_ACTOR_VISION_FIELD_OF_VIEW(&uParam0, 155.0f);
	AI_SET_NAV_HAZARD_AVOIDANCE_ENABLED(&uParam0, 0, 0);
	uVar0 = AI_PREDICATE_FIND_NAMED("NonToxic", 0);
	if (AI_PREDICATE_IS_VALID(&uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(&uParam0, &uVar0, 1);
	}
	if (&iParam1 <= 1204 && &iParam1 >= 1213)
	{
		DECOR_SET_BOOL(&uParam0, "FastZombie", true);
	}
	else if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		DECOR_SET_BOOL(&uParam0, "BruiserZombie", true);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 12,5f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 29, 12.0f);
		COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 30, 0,5f);
	}
	SET_ACTOR_HARD_LOCK_AQUIRE_BONE_CASUAL(&uParam0, "head");
	if (&iParam1 <= 1214 && &iParam1 >= 1221)
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2030.0f, 1);
	}
	else
	{
		SET_ACTOR_BASE_SCORE(&uParam0, 220.0f, 0);
		SET_ACTOR_BASE_SCORE(&uParam0, 2020.0f, 1);
	}
	Function_284(&uParam0, &iParam4, &iParam5);
}

void Function_284(var uParam0, int iParam1, bool bParam2) //Position: 0x1231A / 74522
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
			Function_285(&uParam0, &iParam1, 0);
		}
		else
		{
			AI_DONT_HARM_ACTOR(&uParam0);
			SET_ALLOW_EXECUTE(&uParam0, 0);
		}
	}
	return;
}

void Function_285(int iParam0, int iParam1, bool bParam2) //Position: 0x123D7 / 74711
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
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_58(), "script_zombie_emerge", Var2);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_79();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_58(), Var2, Function_79());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
				GET_OBJECT_ORIENTATION(&uVar7, &Var4);
				DESTROY_OBJECT(&uVar7);
				UNK_0x6745191B(&uVar6, Var4);
			}
			break;
		
		case 0x00000002:
			GET_POSITION(&iParam0, &Var0);
			GET_ACTOR_AXIS(&iParam0, &Var2, 2);
			Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Vector(Var2, Var0, StackVal) * Vector(0,75f, 0,75f, 0,75f), StackVal, StackVal);
			uVar6 = CREATE_RMPTFX_EMITTER_IN_LAYOUT(&iParam0, Function_58(), "script_zombie_emerge", Var0);
			if (IS_OBJECT_VALID(&uVar6))
			{
				Function_79();
				uVar7 = CREATE_POINT_IN_LAYOUT(&iParam0, Function_58(), Var0, Function_79());
				SNAP_OBJECT_TO_GROUND(&uVar7, 2,5f, true, 1092616192);
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
			DECOR_SET_BOOL(&iParam0, "WakeUp", true);
		}
	}
	else if (!DECOR_CHECK_EXIST(&iParam0, "WakeUpFast"))
	{
		DECOR_SET_BOOL(&iParam0, "WakeUpFast", true);
	}
	return;
}

void Function_286(int iParam0) //Position: 0x125A3 / 75171
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

void Function_287(int iParam0) //Position: 0x125DA / 75226
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
	Function_288(&iParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(&iParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(&iParam0, 0.0f);
	return;
}

void Function_288(var uParam0, bool bParam1) //Position: 0x12998 / 76184
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

bool Function_289(var uParam0, int iParam1) //Position: 0x129BB / 76219
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&uParam0);
	if ((((((bVar0 != 1252 && iParam1) || (bVar0 != 1253 && iParam1)) || bVar0 != 541) || bVar0 != 542) || bVar0 != 543) || bVar0 != 544)
	{
		return 1;
	}
	return 0;
}

int Function_290(int iParam0) //Position: 0x12A00 / 76288
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

void Function_291() //Position: 0x12A21 / 76321
{
	*(&iLocal_4 + 696[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS1_Bull_0", 1243, Vector(-4330,518f, 33,93618f, 4281,578f), Vector(0.0f, 49,31692f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 696[02], false);
	return;
}

void Function_292() //Position: 0x12A6A / 76394
{
	*(&iLocal_4 + 688) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S1_Wand_3"));
	*(&iLocal_4 + 664[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S1_Wand_3_1", 301, Vector(-4342,126f, 39,1862f, 4312,019f), Vector(0.0f, 92,92538f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 664[02], &iLocal_4 + 688);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 664[02], false);
	return;
}

void Function_293() //Position: 0x12AE7 / 76519
{
	*(&iLocal_4 + 656) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S1_Wand_2"));
	*(&iLocal_4 + 632[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S1_Wand_2_1", 279, Vector(-4364,819f, 39,18619f, 4304,881f), Vector(0.0f, 187,8941f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 632[02], &iLocal_4 + 656);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 632[02], false);
	SET_ACTOR_FACTION(&iLocal_4 + 632[02], 19);
	return;
}

void Function_294() //Position: 0x12B72 / 76658
{
	*(&iLocal_4 + 624) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S1_Wand_1"));
	*(&iLocal_4 + 584[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S1_Wand_1_0", 293, Vector(-4365,599f, 34,77072f, 4267,824f), Vector(0.0f, 242,9447f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 584[02], &iLocal_4 + 624);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 584[02], false);
	SET_ACTOR_FACTION(&iLocal_4 + 584[02], 19);
	*(&iLocal_4 + 584[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S1_Wand_1_1", 257, Vector(-4353,858f, 35,02679f, 4265,987f), Vector(0.0f, 160,6753f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 584[12], &iLocal_4 + 624);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 584[12], false);
	SET_ACTOR_FACTION(&iLocal_4 + 584[12], 19);
	return;
}

void Function_295() //Position: 0x12C62 / 76898
{
	*(&iLocal_4 + 576) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S1_Wand_0"));
	*(&iLocal_4 + 536[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S1_Wand_0_0", 295, Vector(-4365,527f, 33,34626f, 4285,958f), Vector(0.0f, -117,0553f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 536[02], &iLocal_4 + 576);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 536[02], false);
	*(&iLocal_4 + 536[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S1_Wand_0_1", 285, Vector(-4353,124f, 34,08927f, 4282,834f), Vector(0.0f, 160,6753f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 536[12], &iLocal_4 + 576);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 536[12], false);
	return;
}

void Function_296() //Position: 0x12D36 / 77110
{
	var uVar0;
	
	Function_297(&Global_54076);
	uVar0 = Function_297(&Global_54076);
	MEMORY_REPORT_POSITION(&uLocal_1237, &Global_54076, &uVar0);
	SET_ANIM_SET_FOR_ACTOR(&uLocal_1237, "z_dlc_z_roar", 0);
	bLocal_1355 = TASK_SEQUENCE_OPEN();
	if (!iLocal_1612)
	{
		TASK_STAND_STILL(false, 0,4f, 0, 0);
	}
	TASK_ACTION_PERFORM(false, "z_dlc_z_roar/bruiser/roar");
	TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&uLocal_1237, bLocal_1355);
	TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
	TASK_PRIORITY_SET(&uLocal_1237, true);
	return;
}

struct<8> Function_297(var uParam0) //Position: 0x12DC8 / 77256
{
	struct<2> Var0;
	
	GET_POSITION(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_298() //Position: 0x12DDA / 77274
{
	uLocal_1271 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &uLocal_906, "nBriefCase", "p_gen_suitCaseMask01x", Vector(-4344,566f, 42,904f, 4327,105f), Vector(180.0f, 14,08f, 180.0f), true);
	if (!IS_OBJECT_VALID(&uLocal_1271))
	{
		LOG_ERROR("CreateBriefCase -- Final door unable to be created...");
	}
	return;
}

void Function_299() //Position: 0x12E76 / 77430
{
	SET_ANIM_SET_FOR_ACTOR(&Global_54076, "ptl_base", 1);
	ACTOR_END_FORCE_HOLSTER(&Global_54076);
	if (ACTOR_GET_NEXT_EQUIP_SLOT(&Global_54076) != 1)
	{
		ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
	}
	if (GET_WEAPON_EQUIPPED(&Global_54076, true) != 5)
	{
		ACTOR_SET_NEXT_WEAPON(&Global_54076, 5);
	}
	if (ACTOR_HAS_WEAPON(&Global_54076, 5))
	{
		ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 5, iLocal_1612);
	}
	else
	{
		ACTOR_PUT_WEAPON_IN_HAND(&Global_54076, 4, iLocal_1612);
	}
	RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	ACTOR_POP_NEXT_GAIT(&Global_54076, 0, false);
	return;
}

int Function_300() //Position: 0x12EF7 / 77559
{
	switch (bLocal_1010)
	{
		case 0x00000063:
			if ((!Function_267() && !Function_261(&iLocal_920)) && Function_260())
			{
				iLocal_1610 = 1;
				return 0;
			}
			ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			return 1;
			break;
		
		case 0x00000001:
			Function_162();
			Function_301();
			if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() != 4294967295)
			{
				Function_327(&uLocal_1196, 6, 0, 4294967295, 4294967295);
				CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
			}
			return 1;
			break;
		
		case 0x00000005:
			if (!iLocal_1623)
			{
				CLEAR_ALL_CORPSES();
				iLocal_1623 = 1;
			}
			return 1;
			break;
		
		case 0x00000065:
			Function_163();
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_301() //Position: 0x12F85 / 77701
{
	if (IS_ACTOR_VALID(&uLocal_1237))
	{
		if (IS_ACTOR_IN_VOLUME(&uLocal_1237, &iLocal_4 + 1208[0]))
		{
			DESTROY_ACTOR(&uLocal_1237);
			Function_199(&iLocal_4 + 2200[0]);
			Function_302(&iLocal_4 + 2200[0]);
			iLocal_1263 = CREATE_CORPSE_IN_LAYOUT_RANDOM(&uLocal_906, "ReyesCorpse", 1,734807E-42f, Function_199(&iLocal_4 + 2200[0]), Function_302(&iLocal_4 + 2200[0]), "dead_ground_male");
			SNAP_OBJECT_TO_GROUND(&iLocal_1263, 10.0f, true, 1092616192);
		}
	}
	return;
}

struct<8> Function_302(var uParam0) //Position: 0x13009 / 77833
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

int Function_303() //Position: 0x13032 / 77874
{
	switch (bLocal_1010)
	{
		case 0x00000063:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				return 1;
			}
			if (Function_272() && Function_273())
			{
				Function_259();
				Function_320();
				Function_310(0);
				Function_307();
				CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
				CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(Function_259(), Vector(-4347,43f, 42,032f, 4326,633f), 0, 0);
				return 1;
			}
			break;
		
		case 0x00000001:
			Function_304();
			CUTSCENE_MANAGER_HIDE_ACTOR(&uLocal_1233);
			return 1;
			break;
		
		case 0x00000065:
			CUTSCENE_MANAGER_SET_HIDE_NONCUTSCENE_ACTORS(1);
			return 1;
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void Function_304() //Position: 0x130B4 / 78004
{
	Function_306();
	Function_305();
	Function_283(&iLocal_4 + 472[02], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	Function_283(&iLocal_4 + 504[02], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	return;
}

void Function_305() //Position: 0x130EA / 78058
{
	*(&iLocal_4 + 528) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S1_Low_Balc"));
	*(&iLocal_4 + 504[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "S1_Low_Balc_0", 239, Vector(-4354,963f, 40,53178f, 4316,993f), Vector(0.0f, 90,52868f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 504[02], &iLocal_4 + 528);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 504[02], false);
	TASK_STAND_STILL(&iLocal_4 + 504[02], -1.0f, 0, 0);
	return;
}

void Function_306() //Position: 0x13179 / 78201
{
	*(&iLocal_4 + 496) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S1_Balc"));
	*(&iLocal_4 + 472[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "nS1_Balc_0", 319, Vector(-4366,283f, 42,01784f, 4326,679f), Vector(0.0f, -3,412766f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 472[02], &iLocal_4 + 496);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 472[02], false);
	TASK_STAND_STILL(&iLocal_4 + 472[02], -1.0f, 0, 0);
	return;
}

void Function_307() //Position: 0x13201 / 78337
{
	uLocal_1638[0] = Function_309(Global_46850[0], "escalara", "villa01props01", 1);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[0])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[0]));
	}
	Function_308(&(uLocal_1638[0]), 1);
	uLocal_1638[1] = Function_309(Global_46850[0], "escalara", "villa01props01", 2);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[1])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[1]));
	}
	Function_308(&(uLocal_1638[1]), 1);
	uLocal_1638[3] = Function_309(Global_46850[0], "escalara", "villaWall04", 2);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[3])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[3]));
	}
	Function_308(&(uLocal_1638[3]), 1);
	uLocal_1638[4] = Function_309(Global_46850[0], "escalara", "villaWall04", 1);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[4])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[4]));
	}
	Function_308(&(uLocal_1638[4]), 1);
	uLocal_1638[6] = Function_309(Global_46850[0], "escalara", "villaWall02", 3);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[6])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[6]));
	}
	Function_308(&(uLocal_1638[6]), 1);
	uLocal_1638[5] = Function_309(Global_46850[0], "escalara", "villaWall02", 4);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[5])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[5]));
	}
	Function_308(&(uLocal_1638[5]), 1);
	uLocal_1638[2] = Function_309(Global_46850[0], "escalara", "villa01props01", 4);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[2])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[2]));
	}
	Function_308(&(uLocal_1638[2]), 1);
	uLocal_1638[7] = Function_309(Global_46850[0], "escalara", "villaPost01props01", 3);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[7])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[7]));
	}
	Function_308(&(uLocal_1638[7]), 1);
	uLocal_1638[8] = Function_309(Global_46850[0], "escalara", "villaPost01props01", 2);
	if (!IS_DOOR_CLOSED(&(uLocal_1638[8])))
	{
		CLOSE_DOOR_FAST(&(uLocal_1638[8]));
	}
	Function_308(&(uLocal_1638[8]), 1);
	return;
}

void Function_308(var uParam0, int iParam1) //Position: 0x134D7 / 79063
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

int Function_309(int iParam0, char* cParam1, bool bParam3) //Position: 0x13532 / 79154
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

void Function_310(bool bParam0) //Position: 0x135D7 / 79319
{
	if (IS_ACTOR_VALID(&uLocal_1233))
	{
		return;
	}
	Function_319();
	uLocal_1233 = &iLocal_4 + 448[02];
	Function_312(&(Local_1069[015]), &uLocal_1233, "Maiden", 0, 0x5f5e100, 1);
	RESET_ACTOR_GAITS(&uLocal_1233, 0);
	SET_CRIPPLE_ENABLE(&uLocal_1233, 0);
	SET_ACTOR_FACTION(&uLocal_1233, 20);
	TASK_PRIORITY_SET(&uLocal_1233, true);
	TASK_STAND_STILL(&uLocal_1233, -1.0f, 0, 0);
	AI_BEHAVIOR_SET_ALLOW(&uLocal_1233, 0, 0);
	SET_ACTOR_MAX_HEALTH(&uLocal_1233, 300.0f);
	SET_ACTOR_HEALTH(&uLocal_1233, GET_ACTOR_MAX_HEALTH(&uLocal_1233));
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uLocal_1233, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&uLocal_1233, 0);
	AI_SET_NAV_ACTOR_WIDTH(&uLocal_1233, 0,5f);
	SET_ACTOR_PROOF(&uLocal_1233, 24);
	AI_IGNORE_ACTOR(&uLocal_1233);
	AI_SET_NAV_SUBGRID_CELL_SIZE(&uLocal_1233, 0,5f);
	LIMIT_BLOOD_ON_ACTOR(&uLocal_1233, 0);
	AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&uLocal_1233, 1);
	SET_ACTOR_ALLOW_DISARM(&uLocal_1233, false);
	SET_ACTOR_CAN_PLAY_BORED_IDLES(&uLocal_1233, 0);
	SET_ACTOR_MOVE_CONFLICT_HIGH_PRIORITY(&uLocal_1233, 1);
	SET_ACTOR_IS_COMPANION(&uLocal_1233, 1);
	SET_ACTOR_CUTSCENE_MODE(&uLocal_1233, 1);
	Function_311(&uLocal_1233, 0);
	if (&bParam0)
	{
		GIVE_WEAPON_TO_ACTOR(&uLocal_1233, 33, false, 1, 1);
		ACTOR_PUT_WEAPON_IN_HAND(&uLocal_1233, 33, 1);
		SET_ANIM_SET_FOR_ACTOR(&uLocal_1233, "DLC_torch_girl", 0);
	}
	return;
}

void Function_311(var uParam0, bool bParam1) //Position: 0x13714 / 79636
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

int Function_312(struct<69> Param0) //Position: 0x13736 / 79670
{
	if (!Function_318(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_317(&Param0, &uParam2))
	{
		return 0;
	}
	Function_316(&Param0, &uParam3);
	Param0.f_68 = 0;
	Function_313(&Param0, &uParam4, &uParam5);
	return 1;
}

void Function_313(var uParam0, int iParam1, int iParam2) //Position: 0x1377C / 79740
{
	if (iParam1 != 100000000)
	{
		Function_315(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_314(&uParam0, &iParam2);
	}
	return;
}

void Function_314(struct<69> Param0) //Position: 0x137A3 / 79779
{
	Param0.f_68 = 0;
	Function_315(&Param0, 2, &bParam1);
	Function_315(&Param0, 4, &bParam1);
	Function_315(&Param0, 8, &bParam1);
	Function_315(&Param0, 16, &bParam1);
	Function_315(&Param0, 32, &bParam1);
	Function_315(&Param0, 64, &bParam1);
	Function_315(&Param0, 128, &bParam1);
	Function_315(&Param0, 256, &bParam1);
	Function_315(&Param0, 512, &bParam1);
	Function_315(&Param0, 1024, &bParam1);
	return;
}

void Function_315(int iParam0, int iParam1, bool bParam2) //Position: 0x1381E / 79902
{
	bool bVar0;
	
	Function_80(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_80(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_46(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_80(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_316(struct<65> Param0) //Position: 0x1385D / 79965
{
	Param0.f_64 = iParam1;
	return;
}

bool Function_317(int iParam0, char* cParam1) //Position: 0x1386A / 79978
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

bool Function_318(struct<61> Param0) //Position: 0x138F7 / 80119
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

void Function_319() //Position: 0x13AAA / 80554
{
	(&iLocal_4 + 448[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "CompMaiden", 1274, Vector(-4336,917f, 42,08085f, 4329,415f), Vector(0.0f, 79,29158f, 0.0f));
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 448[02], false);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 448[02]);
	TASK_STAND_STILL(&iLocal_4 + 448[02], -1.0f, 0, 0);
	SET_ACTOR_FACTION(&iLocal_4 + 448[02], 20);
	return;
}

void Function_320() //Position: 0x13B1D / 80669
{
	Function_321();
	uLocal_1237 = &iLocal_4 + 416[02];
	DECOR_SET_BOOL(&uLocal_1237, "CanBeLasso", false);
	TASK_STAND_STILL(&uLocal_1237, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&uLocal_1237, true);
	AI_BEHAVIOR_SET_ALLOW(&uLocal_1237, 0, 0);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(&uLocal_1237, 0);
	SET_ACTOR_ALLOW_NM_BUMP_REACTIONS(&uLocal_1237, 0);
	uLocal_1273 = CREATE_OBJECTSET_IN_LAYOUT("ReyesObjSet", &uLocal_906, 4294967295, 0);
	DECOR_SET_OBJECT(&uLocal_1237, "ReturnCorpse", &uLocal_1273);
	return;
}

void Function_321() //Position: 0x13BAA / 80810
{
	*(&iLocal_4 + 440) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_Reyes"));
	*(&iLocal_4 + 416[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Reyes", 1238, Vector(-4347,43f, 42,03176f, 4326,633f), Vector(0.0f, 216,8481f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 416[02], &iLocal_4 + 440);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 416[02], false);
	TASK_STAND_STILL(&iLocal_4 + 416[02], -1.0f, 0, 0);
	return;
}

int Function_322() //Position: 0x13C2C / 80940
{
	iLocal_1612 = 0;
	switch (bLocal_1010)
	{
		case 0x00000063:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			uLocal_1636 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &uLocal_906, "nintro_vol", 2,802597E-45f, Vector(-4357,865f, 42,018f, 4346,34f), Vector(0.0f, 0.0f, 0.0f), Vector(47,16f, 27,748f, 34,94f));
			Function_323(StackVal, &uLocal_906, *(&Global_6667[328] + 88), &uLocal_1636, 1, 0, 0, 0, 1, 1);
			Function_327(&uLocal_1196, 0, 0, 4294967295, 4294967295);
			return 1;
			break;
		
		case 0x00000001:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			TASK_CLEAR(&uLocal_1233);
			TASK_STAND_STILL(&uLocal_1233, -1.0f, 0, 0);
			Function_327(&uLocal_1196, 0, 0, 4294967295, 4294967295);
			CLEAR_DECALS();
			return 1;
			break;
		
		case 0x00000065:
			Function_327(&uLocal_1196, 6, 0, 4294967295, 4294967295);
			DELETE_ALL_WEAPONS_FROM_ACTOR(&uLocal_1233);
			return 1;
			break;
		
		default:
			Function_325(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
			return 1;
			break;
	}
	return 0;
}

void Function_323(var uParam0, struct<2> Param1, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, bool bParam8, bool bParam9) //Position: 0x13D33 / 81203
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
				Function_324(&uVar1, &uParam0);
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

void Function_324(var uParam0, float fParam1) //Position: 0x13FD3 / 81875
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

void Function_325(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, int iParam13) //Position: 0x14056 / 82006
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
	Function_203();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		uVar1 = Function_54();
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
				Function_297(&uVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_58(), 2, Function_297(&uVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
				DELETE_PROJECTILES_IN_VOLUME(&uVar0);
			}
		}
		Function_91(19, 1, 0, 0);
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
	if ((IS_OBJECT_VALID(Function_326()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_326()));
		DECOR_SET_BOOL(&Global_54076, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(&Global_54076, true);
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
	if (Function_263(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x4000000);
	}
	if (Function_263(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_126(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&iParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

var Function_326() //Position: 0x14308 / 82696
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

void Function_327(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x14396 / 82838
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_328(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_328(int iParam0) //Position: 0x143C0 / 82880
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

bool Function_329(int iParam0) //Position: 0x14915 / 84245
{
	if (!Function_88(iParam0))
	{
		return 1;
	}
	return Function_135(&(Global_43791[iParam0]), 4);
}

void Function_330(int iParam0, int iParam1) //Position: 0x14931 / 84273
{
	Function_182(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	if (!StackVal != StackVal)
	{
		Function_331(StackVal, &iParam1);
	}
	return;
}

void Function_331(int iParam0, int iParam1) //Position: 0x14963 / 84323
{
	var uVar0;
	
	uVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_182(iParam0);
	Function_8(&uVar0);
	PRINTNL();
	Function_180(iParam0, &uVar0, &iParam1);
	return;
}

void Function_332(bool bParam0) //Position: 0x1498C / 84364
{
	Function_333(0, 0x40400000);
	Function_154();
	Function_153();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_333(float fParam0, float fParam1) //Position: 0x149C2 / 84418
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
	Function_335();
	Function_334();
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

void Function_334() //Position: 0x14AD3 / 84691
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_335() //Position: 0x14B07 / 84743
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

void Function_336() //Position: 0x14C0D / 85005
{
	if (iLocal_1011 < 3 && iLocal_1011 > 105)
	{
		Function_199(&iLocal_4 + 2048[10]);
		Function_403(StackVal, "$/cutscene/escalera_2_pt_f_cs/escalera_2_pt_f_cs", &uLocal_1658, Function_199(&iLocal_4 + 2048[10]), 0, 75.0f, 150.0f, 2, 1, 1, 2, 0, 1);
		Function_400();
		Function_399();
	}
	switch (iLocal_1011)
	{
		case 0x00000000:
			Function_332(0);
			if (iLocal_1169[4] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_397();
				Function_330(16, 1);
				Function_394();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_188(&Global_54076, &iLocal_4 + 2048[10], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 1;
			}
			else
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 2;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_393()) && Function_392())
			{
				Function_310(1);
				Function_307();
				Function_199(&iLocal_4 + 3312[0]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199(&iLocal_4 + 3312[0]), 0.0f, 0, 1, 1, 0);
				Function_327(&uLocal_1196, 7, 0, 4294967295, 4294967295);
				Function_253(&iLocal_1562);
				iLocal_1011 = 2;
			}
			break;
		
		case 0x00000002:
			Function_387();
			Function_386();
			Function_253(&iLocal_1566);
			Function_384();
			if (Function_382(StackVal, StackVal, StackVal, StackVal, StackVal, Local_908, 5))
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 3;
			}
			else
			{
				Function_188(&Global_54076, &iLocal_4 + 2048[10], 1, 1, 1);
				Function_188(&uLocal_1233, &iLocal_4 + 2048[11], 1, 1, 1);
				Function_278();
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_241("$/cutscene/escalera_2_pt_e_cs/escalera_2_pt_e_cs", &iLocal_998, &Local_908, &bLocal_1010, 80940, 77874, 77559, 72736, 72299, 46937, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000004:
			Function_198(bLocal_1010);
			Function_374(StackVal, Function_198(bLocal_1010), bLocal_1010, Global_46850[0], Function_201(bLocal_1010), 0);
			Function_245(1.0f);
			Function_370();
			Function_327(&uLocal_1196, 40, 0, 4294967295, 4294967295);
			STREAMING_UNLOAD_BOUNDS();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_HEALTH(&uLocal_1233, GET_ACTOR_MAX_HEALTH(&uLocal_1233));
			iLocal_1011 = 6;
			break;
		
		case 0x00000006:
			Function_368(&bLocal_1556, 4294967295);
			if (!HUD_IS_FADING())
			{
				iLocal_1011 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_337())
			{
				iLocal_1011 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_1169[5] = 1;
				Function_170();
				bLocal_1010 = 101;
				iLocal_1011 = 0;
			}
			break;
	}
	return;
}

bool Function_337() //Position: 0x14ECF / 85711
{
	Function_365();
	switch (iLocal_1207)
	{
		case 0x00000000:
			Function_27("Zomb03_DefeatUndeadObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_364(&iLocal_4 + 2176[0]);
			Function_363();
			iLocal_1208 = 13;
			Function_362(&iLocal_1590);
			iLocal_1207 = 1;
			break;
		
		case 0x00000001:
			if (Function_345())
			{
				Function_327(&uLocal_1196, 6, 0, 4294967295, 4294967295);
				Function_253(&iLocal_1562);
				iLocal_1207 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_248(&iLocal_1562) <= 2.0f)
			{
				if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1800[0]))
				{
					iLocal_1208 = 14;
					Function_344();
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2176[0], 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2176[0]), "Zomb03_Altar");
					Function_253(&iLocal_1562);
					iLocal_1207 = 3;
				}
				else
				{
					HUD_CLEAR_OBJECTIVE();
					Function_253(&iLocal_1562);
					iLocal_1207 = 5;
				}
			}
			break;
		
		case 0x00000003:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_1562) <= 8.0f)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_27("Zomb03_GoToAltarObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_253(&iLocal_1562);
				iLocal_1207 = 5;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1800[0]))
			{
				iLocal_1207 = 5;
				return 0;
			}
			Function_338();
			break;
		
		case 0x00000005:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1800[0]))
			{
				Function_364(&iLocal_4 + 2176[0]);
				return 1;
			}
			Function_338();
			break;
	}
	return 0;
}

void Function_338() //Position: 0x15073 / 86131
{
	if (!Function_250(&iLocal_1590))
	{
		Function_343(&iLocal_1590, 14.0f);
	}
	else if (Function_248(&iLocal_1590) <= 20.0f)
	{
		Function_199(&iLocal_4 + 3312[2]);
		Function_297(&uLocal_1233);
		if (Function_83(StackVal, StackVal, Function_199(&iLocal_4 + 3312[2]), Function_297(&uLocal_1233)) >= 2.0f)
		{
			if (SET_ANIM_SET_FOR_ACTOR(&uLocal_1233, "one_handed_wave", 1))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1704[6]))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!iLocal_1621)
						{
							Function_339();
							iLocal_1621 = 1;
						}
						SET_ACTOR_FACE_STYLE(&uLocal_1233, 2);
						TASK_CLEAR(&uLocal_1233);
						bLocal_1355 = TASK_SEQUENCE_OPEN();
						TASK_FACE_ACTOR(false, &Global_54076, 0, 3212836864);
						TASK_ACTION_PERFORM(false, "one_handed_wave/wave");
						TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
						TASK_SEQUENCE_CLOSE();
						TASK_SEQUENCE_PERFORM(&uLocal_1233, bLocal_1355);
						TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
						Function_253(&iLocal_1590);
					}
				}
			}
		}
	}
	return;
}

void Function_339() //Position: 0x15166 / 86374
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_WaitJonTrigs", "Z03_WaitJonTrigs", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_340(int iParam0) //Position: 0x151AF / 86447
{
	Function_341(0, &Global_54076, iParam0, 0);
	Function_341(1, &uLocal_1233, iParam0, 0);
	return;
}

void Function_341(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x151CB / 86475
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_342(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

bool Function_342(bool bParam0) //Position: 0x151F3 / 86515
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_343(int iParam0, float fParam1) //Position: 0x151FF / 86527
{
	if (!Function_250(&iParam0))
	{
		Function_254(&iParam0, fParam1);
	}
	return;
}

void Function_344() //Position: 0x15217 / 86551
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_AllZombsKild", "Z03_AllZombsKild", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_345() //Position: 0x15260 / 86624
{
	Function_368(&bLocal_1556, 4294967295);
	Function_361();
	switch (iLocal_1356)
	{
		case 0x00000000:
			if (!Function_250(&iLocal_1590))
			{
				Function_343(&iLocal_1590, 14.0f);
			}
			else if (Function_248(&iLocal_1590) <= 20.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_360();
					Function_253(&iLocal_1590);
				}
			}
			if (Function_248(&iLocal_1566) <= 2,5f)
			{
				if (Function_359(&bLocal_1556) <= 3)
				{
					if (iLocal_1357 <= 4)
					{
						Function_253(&iLocal_1566);
						Function_350(1);
					}
				}
			}
			if (iLocal_1357 > 4)
			{
				Function_253(&iLocal_1566);
				iLocal_1356 = 1;
			}
			break;
		
		case 0x00000001:
			if (!Function_250(&iLocal_1590))
			{
				Function_343(&iLocal_1590, 14.0f);
			}
			else if (Function_248(&iLocal_1590) <= 20.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_360();
					Function_253(&iLocal_1590);
				}
			}
			if (Function_359(&bLocal_1556) >= 0)
			{
				Function_253(&iLocal_1566);
			}
			if (Function_248(&iLocal_1566) <= 2.0f)
			{
				Function_327(&uLocal_1196, 34, 0, 4294967295, 4294967295);
				Function_346();
				iLocal_1356 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_248(&iLocal_1566) <= 10.0f)
			{
				Function_327(&uLocal_1196, 40, 0, 4294967295, 4294967295);
				iLocal_1357 = 5;
				Function_350(1);
				Function_350(1);
				Function_350(1);
				Function_350(1);
				Function_253(&iLocal_1566);
				iLocal_1356 = 3;
			}
			break;
		
		case 0x00000003:
			if (!Function_250(&iLocal_1590))
			{
				Function_343(&iLocal_1590, 14.0f);
			}
			else if (Function_248(&iLocal_1590) <= 20.0f)
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_360();
					Function_253(&iLocal_1590);
				}
			}
			if (Function_248(&iLocal_1566) <= 1,75f)
			{
				if (Function_359(&bLocal_1556) <= 4)
				{
					Function_253(&iLocal_1566);
					Function_350(1);
				}
			}
			if (!iLocal_1627)
			{
				if (iLocal_1357 > 7)
				{
					SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, false, false);
					iLocal_1627 = 1;
				}
			}
			if (iLocal_1357 > 11)
			{
				if (Function_359(&bLocal_1556) < 0)
				{
					Function_327(&uLocal_1196, 6, 0, 4294967295, 4294967295);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void Function_346() //Position: 0x15462 / 87138
{
	if ((Function_349() % 2) == 1)
	{
		Function_348();
	}
	else
	{
		Function_347();
	}
	return;
}

void Function_347() //Position: 0x1547A / 87162
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_FinalRoomBantWave1_v2_AA", "Z03_FinalRoomBantWave1_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_FinalRoomBantWave1_v2_AB", "Z03_FinalRoomBantWave1_v2_AB", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_348() //Position: 0x15522 / 87330
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_FinalRoomBantWave1_v1_AA", "Z03_FinalRoomBantWave1_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_FinalRoomBantWave1_v1_AB", "Z03_FinalRoomBantWave1_v1_AB", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_349() //Position: 0x155CA / 87498
{
	return Global_53524.f_68;
}

void Function_350(bool bParam0) //Position: 0x155D5 / 87509
{
	int iVar0;
	int iVar1;
	
	if (iLocal_1357 <= 11)
	{
		iVar0 = Function_357();
		if (&iVar0 == "")
		{
			Function_254(&iLocal_1566, 99.0f);
			return;
		}
		switch (iLocal_1209[iLocal_1357])
		{
			case 0x00000000:
				iVar1 = Function_355(&iVar0, Function_58(), 1, 0, 4294967295);
				break;
			
			case 0x00000001:
				iVar1 = Function_354(&iVar0, Function_58(), 1, 0, 4294967295);
				break;
			
			case 0x00000002:
				iVar1 = Function_353(&iVar0, Function_58(), 1, 0, 4294967295);
				break;
			
			case 0x00000003:
				iVar1 = Function_352(&iVar0, Function_58(), 1, 0, 4294967295);
				break;
		}
		if (iLocal_1209[iLocal_1357] == 2)
		{
			TASK_GO_NEAR_ACTOR(&iVar1, &Global_54076, 7.0f, 2);
		}
		else
		{
			TASK_MELEE_ATTACK(&iVar1, &Global_54076, -1.0f);
		}
		TASK_PRIORITY_SET(&iVar1, true);
		SQUAD_JOIN(&iVar1, &bLocal_1556);
		Function_285(&iVar1, 4294967295, 0);
		ADD_BLIP_FOR_ACTOR(&iVar1, 322, 0, 2, 0);
		Function_351(&iVar1);
		if (&bParam0)
		{
			iLocal_1357++;
		}
	}
	return;
}

void Function_351(int iParam0) //Position: 0x156CA / 87754
{
	int iVar0;
	
	iParam0 = &iParam0;
	if (!IS_ACTOR_VALID(&iParam0))
	{
	}
	else
	{
		SET_ACTOR_FACTION(&iParam0, 32);
		AI_BEHAVIOR_SET_ALLOW(&iParam0, 0, 0);
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "oLeftEyeGlow"))
	{
		iVar0 = CREATE_RMPTFX_EMITTER_ON_BONE(StackVal, Function_58(), "script_zombie_eyelight", "eyePivot_l", &iParam0, Vector(0.0f, 0.0f, 0.0f), &iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			UNK_0x6745191B(StackVal, &iVar0, Vector(0.0f, 0.0f, 0.0f));
			DECOR_SET_OBJECT(&iParam0, "oLeftEyeGlow", &iVar0);
		}
	}
	if (!DECOR_CHECK_EXIST(&iParam0, "oRightEyeGlow"))
	{
		iVar0 = CREATE_RMPTFX_EMITTER_ON_BONE(StackVal, Function_58(), "script_zombie_eyelight_r", "eyePivot_r", &iParam0, Vector(0.0f, 0.0f, 0.0f), &iParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			UNK_0x6745191B(StackVal, &iVar0, Vector(0.0f, 0.0f, 0.0f));
			DECOR_SET_OBJECT(&iParam0, "oRightEyeGlow", &iVar0);
		}
	}
	return;
}

int Function_352(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x157FB / 88059
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	bool bVar4;
	
	if (&iParam4 == 4294967295)
	{
		bVar4 = iLocal_1374[RAND_INT_RANGE(false, (iLocal_1374 - 1))];
	}
	else
	{
		bVar4 = &iParam4;
	}
	GET_OBJECT_POSITION(&iParam0, &Var1);
	bVar0 = GET_OBJECT_HEADING(&iParam0);
	iVar3 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_4, &uParam1, bVar4, Var1, Vector(0.0f, bVar0, 0.0f));
	if (&iParam2 == 1)
	{
		Function_284(&iVar3, &iParam2, &bParam3);
	}
	return &iVar3;
}

var Function_353(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x15860 / 88160
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	bool bVar4;
	
	if (&iParam4 == 4294967295)
	{
		bVar4 = iLocal_1386[RAND_INT_RANGE(false, (iLocal_1386 - 1))];
	}
	else
	{
		bVar4 = &iParam4;
	}
	GET_OBJECT_POSITION(&iParam0, &Var1);
	bVar0 = GET_OBJECT_HEADING(&iParam0);
	iVar3 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_4, &uParam1, bVar4, Var1, Vector(0.0f, bVar0, 0.0f));
	if (&iParam2 == 1)
	{
		Function_284(&iVar3, &iParam2, &bParam3);
	}
	return &iVar3;
}

var Function_354(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x158C5 / 88261
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	bool bVar4;
	
	if (&iParam4 == 4294967295)
	{
		bVar4 = iLocal_1362[RAND_INT_RANGE(false, (iLocal_1362 - 1))];
	}
	else
	{
		bVar4 = &iParam4;
	}
	GET_OBJECT_POSITION(&iParam0, &Var1);
	bVar0 = GET_OBJECT_HEADING(&iParam0);
	iVar3 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_4, &uParam1, bVar4, Var1, Vector(0.0f, bVar0, 0.0f));
	if (&iParam2 == 1)
	{
		Function_284(&iVar3, &iParam2, &bParam3);
	}
	return &iVar3;
}

int Function_355(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x1592A / 88362
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	bool bVar4;
	
	if (&iParam2 == 1)
	{
		bVar4 = Function_356();
	}
	else if (&iParam4 == 4294967295)
	{
		bVar4 = iLocal_1398[RAND_INT_RANGE(false, (iLocal_1398 - 1))];
	}
	else
	{
		bVar4 = &iParam4;
	}
	GET_OBJECT_POSITION(&iParam0, &Var1);
	bVar0 = GET_OBJECT_HEADING(&iParam0);
	iVar3 = CREATE_ACTOR_IN_LAYOUT(StackVal, &iLocal_4, &uParam1, bVar4, Var1, Vector(0.0f, bVar0, 0.0f));
	Function_283(&iVar3, 1254, 4294967295, 4294967295, &iParam2, &bParam3, 1, 1);
	CLEAR_ACTOR_PROOF(&iVar3, 16);
	return &iVar3;
}

var Function_356() //Position: 0x159A6 / 88486
{
	int iVar0;
	
	iVar0 = 1252;
	switch (RAND_INT_RANGE(false, 2))
	{
		case 0x00000000:
			iVar0 = 1253;
			break;
		
		case 0x00000001:
			iVar0 = 1252;
			break;
		
		case 0x00000002:
			iVar0 = 1253;
			break;
	}
	return iVar0;
}

var Function_357() //Position: 0x159E7 / 88551
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar4;
	
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1800[1]))
	{
		iVar0 = 0;
	}
	else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1800[4]))
	{
		iVar0 = 1;
	}
	else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1800[2]))
	{
		iVar0 = 2;
	}
	else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1800[3]))
	{
		iVar0 = 3;
	}
	bLocal_1358 = RAND_INT_RANGE_DIFFERENT(iLocal_1358, 0, 8);
	switch (iVar0)
	{
		case 0x00000000:
			bVar1 = &iLocal_4 + 3368[iLocal_1275[bLocal_1358]];
			break;
		
		case 0x00000001:
			bVar1 = &iLocal_4 + 3368[iLocal_1295[bLocal_1358]];
			break;
		
		case 0x00000002:
			bVar1 = &iLocal_4 + 3368[iLocal_1335[bLocal_1358]];
			break;
		
		case 0x00000003:
			bVar1 = &iLocal_4 + 3368[iLocal_1315[bLocal_1358]];
			break;
	}
	Function_199(&bVar1);
	Function_302(&bVar1);
	uVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, &uLocal_906, "nSpawnTest", 2, Function_199(&bVar1), Function_302(&bVar1), Vector(5.0f, 15.0f, 5.0f));
	if (Function_358(&bLocal_1556, &uVar4, 0) < 0 || IS_ACTOR_IN_VOLUME(&Global_54076, &uVar4))
	{
		DESTROY_VOLUME(&uVar4);
		return "";
	}
	if (!IS_OBJECT_VALID(&bVar1))
	{
		DESTROY_VOLUME(&uVar4);
		return "";
	}
	Function_199(&bVar1);
	iVar2 = Function_199(&bVar1);
	DESTROY_VOLUME(&uVar4);
	return &bVar1;
}

int Function_358(var uParam0, var uParam1, bool bParam2) //Position: 0x15B48 / 88904
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_IN_VOLUME(&uVar2, &uParam1))
		{
			if (&bParam2)
			{
				if (!IS_ACTOR_HOGTIED(&uVar2))
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

int Function_359(bool bParam0) //Position: 0x15BB4 / 89012
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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

void Function_360() //Position: 0x15C0A / 89098
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "nZ03_Shock", "nZ03_Shock", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_361() //Position: 0x15C45 / 89157
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&bLocal_1556))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&bLocal_1556))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bLocal_1556, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (!IS_ACTOR_IN_VOLUME(&uVar1, &iLocal_4 + 1704[6]))
				{
					KILL_ACTOR(&uVar1);
				}
			}
			bVar0++;
		}
	}
	return;
}

void Function_362(vector3 vParam0) //Position: 0x15C9B / 89243
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_363() //Position: 0x15CB2 / 89266
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_ZombsRise", "Z03_ZombsRise", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_364(var uParam0) //Position: 0x15CF5 / 89333
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

void Function_365() //Position: 0x15D28 / 89384
{
	int iVar0;
	
	Function_367();
	switch (iLocal_1208)
	{
		case 0x0000000D:
			Function_199(&iLocal_4 + 3312[1]);
			iVar0 = Function_199(&iLocal_4 + 3312[1]);
			bLocal_1355 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(0, &iVar0, 0);
			TASK_GO_NEAR_COORD(false, &iVar0, 0,5f, 2);
			TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&uLocal_1233);
			TASK_SEQUENCE_PERFORM(&uLocal_1233, bLocal_1355);
			TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
			iLocal_1208 = 15;
			break;
		
		case 0x0000000F:
			Function_366(0x420c0000, 0x425c0000);
			break;
		
		case 0x0000000E:
			Function_199(&iLocal_4 + 3312[2]);
			iVar0 = Function_199(&iLocal_4 + 3312[2]);
			bLocal_1355 = TASK_SEQUENCE_OPEN();
			TASK_FACE_COORD(0, &iVar0, 0);
			TASK_GO_NEAR_COORD(false, &iVar0, 0,5f, 1);
			TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
			TASK_SEQUENCE_CLOSE();
			TASK_CLEAR(&uLocal_1233);
			TASK_SEQUENCE_PERFORM(&uLocal_1233, bLocal_1355);
			TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
			iLocal_1208 = 15;
			break;
	}
	return;
}

void Function_366(int iParam0, int iParam1) //Position: 0x15E0D / 89613
{
	iParam0 = &iParam0;
	iParam1 = &iParam1;
	Local_1558 = { StackVal, Local_1558 };
	return;
}

void Function_367() //Position: 0x15E29 / 89641
{
	if ((!ACTOR_HAS_WEAPON(&uLocal_1233, 33) || !IS_WEAPON_DRAWN(&uLocal_1233)) || GET_WEAPON_IN_HAND(&uLocal_1233) == 33)
	{
		if (!ACTOR_HAS_ANIM_SET(&uLocal_1233, "DLC_torch_girl"))
		{
			RESET_ANIM_SET_FOR_ACTOR(&uLocal_1233, 1);
			SET_ANIM_SET_FOR_ACTOR(&uLocal_1233, "DLC_torch_girl", 0);
		}
		if (!ACTOR_HAS_WEAPON(&uLocal_1233, 33))
		{
			GIVE_WEAPON_TO_ACTOR(&uLocal_1233, 33, false, 1, 1);
		}
		ACTOR_PUT_WEAPON_IN_HAND(&uLocal_1233, 33, 1);
	}
	return;
}

void Function_368(bool bParam0, int iParam1) //Position: 0x15EB2 / 89778
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&bParam0))
	{
		if (!DECOR_CHECK_EXIST(&bParam0, "bCanWakeUp"))
		{
			return;
		}
		iVar1 = SQUAD_GET_SIZE(&bParam0);
		if (iVar1 >= 0)
		{
			if (!DECOR_CHECK_EXIST(&bParam0, "fStartWake"))
			{
				DECOR_SET_FLOAT(&bParam0, "fStartWake", GET_CURRENT_GAME_TIME());
			}
			bVar0 = false;
			while (bVar0 <= iVar1)
			{
				uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar2))
				{
					if (DECOR_CHECK_EXIST(&uVar2, "fWakeUpTime"))
					{
						if (GET_CURRENT_GAME_TIME() < (DECOR_GET_FLOAT(&uVar2, "fWakeUpTime") + DECOR_GET_FLOAT(&bParam0, "fStartWake")))
						{
							if (Function_369(&uVar2))
							{
								Function_187(&uVar2, 0);
							}
							else if (DECOR_CHECK_EXIST(&uVar2, "WakeUpFast"))
							{
								Function_285(&uVar2, &iParam1, 1);
							}
							else
							{
								Function_285(&uVar2, &iParam1, 0);
							}
							DECOR_REMOVE(&uVar2, "fWakeUpTime");
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

bool Function_369(int iParam0) //Position: 0x15FD7 / 90071
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "bIsWallZomb"))
	{
		return 1;
	}
	return 0;
}

void Function_370() //Position: 0x16003 / 90115
{
	if (SQUAD_IS_VALID(&bLocal_1556))
	{
		DECOR_SET_BOOL(&bLocal_1556, "bCanWakeUp", true);
	}
	Function_373(&bLocal_1556);
	Function_372(&bLocal_1556, &Global_54076, 0);
	SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1556, false, 2, 4294967295);
	TASK_GO_NEAR_ACTOR(0, &Global_54076, 5.0f, 1);
	Function_371(&bLocal_1556, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
	return;
}

void Function_371(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x1606B / 90219
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
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
				SET_BLIP_SCALE(&uVar1, &bParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, bParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &bParam5);
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

void Function_372(bool bParam0, var uParam1, bool bParam2) //Position: 0x1617B / 90491
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (&bParam2)
				{
					MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, true);
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

void Function_373(bool bParam0) //Position: 0x161F3 / 90611
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

void Function_374(struct<2> Param0, int iParam2, var uParam3, int iParam4, int iParam5) //Position: 0x16228 / 90664
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
	if (iParam2 != Global_53524.f_48 && !Function_381())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_380(0);
	Function_379();
	Global_53524.f_48 = iParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_98())
	{
		Function_377(iParam2);
	}
	Function_376(uParam3, iVar0, iVar1);
	Function_375();
}

void Function_375() //Position: 0x162D1 / 90833
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

void Function_376(int iParam0, bool bParam1, bool bParam2) //Position: 0x16312 / 90898
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
	Function_47();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_377(bool bParam0) //Position: 0x1647B / 91259
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_378() };
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
	PLAYSTAT_INT("HC_MONEY", Function_29(0));
	PLAYSTAT_INT("HC_FAME", Function_29(3));
	PLAYSTAT_INT("HC_HONOR", Function_29(1));
	return;
}

struct<16> Function_378() //Position: 0x16613 / 91667
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

void Function_379() //Position: 0x16659 / 91737
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_380(bool bParam0) //Position: 0x1667D / 91773
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

bool Function_381() //Position: 0x166AC / 91820
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

bool Function_382(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x166C7 / 91847
{
	if (Function_383(&iParam0) == iParam6 || Function_381())
	{
		return 1;
	}
	return 0;
}

int Function_383(int iParam0) //Position: 0x166E6 / 91878
{
	if (Function_255(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

void Function_384() //Position: 0x166FF / 91903
{
	Function_385(&uLocal_906, 8, &iLocal_4 + 3312[3], 0, 3, 0, 1, 3212836864);
	Function_385(&uLocal_906, 18, &iLocal_4 + 3312[4], 0, 4, 0, 1, 3212836864);
	return;
}

var Function_385(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7) //Position: 0x1673D / 91965
{
	var uVar0;
	var uVar1;
	var uVar3;
	struct<2> Var5;
	struct<2> Var7;
	
	GET_OBJECT_POSITION(&uParam2, &uVar3);
	uVar0 = CREATE_WEAPON_PICKUP(&uParam0, iParam1, &uVar3, 0.0f, &fParam5, &fParam6, &fParam7);
	GET_OBJECT_POSITION(&uParam2, &Var5);
	GET_OBJECT_ORIENTATION(&uParam2, &Var7);
	SET_OBJECT_POSITION(&uVar0, Var5);
	SET_OBJECT_ORIENTATION(&uVar0, Var7);
	if (&bParam3)
	{
		uVar1 = Vector(0.0f, -0,001f, 0.0f);
		ACTIVATE_PHYSINST(GET_PHYSINST_FROM_OBJECT(&uVar0));
		SET_PROP_VELOCITY(GET_PHYSINST_FROM_OBJECT(&uVar0), &uVar1);
	}
	DECOR_SET_INT(&uVar0, "NumClips", &iParam4);
	return &uVar0;
}

void Function_386() //Position: 0x167CB / 92107
{
	iLocal_1209[0] = 0;
	iLocal_1209[1] = 2;
	iLocal_1209[2] = 0;
	iLocal_1209[3] = 3;
	iLocal_1209[4] = 0;
	iLocal_1209[5] = 0;
	iLocal_1209[6] = 2;
	iLocal_1209[7] = 0;
	iLocal_1209[8] = 2;
	iLocal_1209[9] = 0;
	iLocal_1209[10] = 3;
	iLocal_1275[0] = 3;
	iLocal_1275[1] = 4;
	iLocal_1275[2] = 5;
	iLocal_1275[3] = 6;
	iLocal_1275[4] = 7;
	iLocal_1275[5] = 8;
	iLocal_1275[6] = 9;
	iLocal_1275[7] = 10;
	iLocal_1275[8] = 11;
	iLocal_1295[0] = 0;
	iLocal_1295[1] = 1;
	iLocal_1295[2] = 2;
	iLocal_1295[3] = 6;
	iLocal_1295[4] = 7;
	iLocal_1295[5] = 8;
	iLocal_1295[6] = 9;
	iLocal_1295[7] = 10;
	iLocal_1295[8] = 11;
	iLocal_1335[0] = 0;
	iLocal_1335[1] = 1;
	iLocal_1335[2] = 2;
	iLocal_1335[3] = 3;
	iLocal_1335[4] = 4;
	iLocal_1335[5] = 5;
	iLocal_1335[6] = 9;
	iLocal_1335[7] = 10;
	iLocal_1335[8] = 11;
	iLocal_1315[0] = 0;
	iLocal_1315[1] = 1;
	iLocal_1315[2] = 2;
	iLocal_1315[3] = 3;
	iLocal_1315[4] = 4;
	iLocal_1315[5] = 5;
	iLocal_1315[6] = 6;
	iLocal_1315[7] = 7;
	iLocal_1315[8] = 8;
	return;
}

void Function_387() //Position: 0x16929 / 92457
{
	Function_391();
	Function_389();
	Function_388(&bLocal_1556);
	return;
}

void Function_388(var uParam0) //Position: 0x1693C / 92476
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		if (SQUAD_GET_SIZE(&uParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_351(&uVar1);
					SET_ACTOR_FACTION(&uVar1, 32);
				}
				bVar0++;
			}
		}
	}
	return;
}

void Function_389() //Position: 0x1698E / 92558
{
	int iVar0;
	
	iVar0 = Function_353(&iLocal_4 + 3256[1], Function_58(), 1, 0, 1223);
	SQUAD_JOIN(&iVar0, &bLocal_1556);
	Function_390(&iVar0, 1,2f, 1,2f);
	TASK_FOLLOW_OBJECT_AT_DISTANCE(&iVar0, &Global_54076, 3,5f, 2);
	iVar0 = Function_353(&iLocal_4 + 3256[2], Function_58(), 1, 0, 1226);
	SQUAD_JOIN(&iVar0, &bLocal_1556);
	Function_390(&iVar0, 2,5f, 2,5f);
	TASK_FOLLOW_OBJECT_AT_DISTANCE(&iVar0, &Global_54076, 3,5f, 2);
	iVar0 = Function_355(&iLocal_4 + 3256[3], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1556);
	Function_390(&iVar0, 1,2f, 1,2f);
	iVar0 = Function_355(&iLocal_4 + 3256[4], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1556);
	Function_390(&iVar0, 2,2f, 2,2f);
	return;
}

void Function_390(int iParam0, float fParam1, float fParam2) //Position: 0x16A74 / 92788
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!DECOR_CHECK_EXIST(&iParam0, "fWakeUpTime"))
		{
			bVar0 = RAND_FLOAT_RANGE(&fParam1, &fParam2);
			DECOR_SET_FLOAT(&iParam0, "fWakeUpTime", bVar0);
		}
	}
	return;
}

void Function_391() //Position: 0x16AC0 / 92864
{
	iLocal_1255 = Function_352(&iLocal_4 + 3256[0], Function_58(), 1, 0, 1215);
	SQUAD_JOIN(&iLocal_1255, &bLocal_1556);
	Function_390(&iLocal_1255, 0.0f, 0,1f);
	return;
}

int Function_392() //Position: 0x16AF6 / 92918
{
	Function_270(&iLocal_4 + 368, 1215, 2, 0);
	if (Function_261(&iLocal_4 + 368))
	{
		return 1;
	}
	return 0;
}

int Function_393() //Position: 0x16B18 / 92952
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_1362 - 1))
	{
		Function_270(&iLocal_1424, iLocal_1362[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_1374 - 1))
	{
		Function_270(&iLocal_1424, iLocal_1374[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_1386 - 1))
	{
		Function_270(&iLocal_1424, iLocal_1386[iVar0], 2, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (iLocal_1398 - 1))
	{
		Function_270(&iLocal_1424, iLocal_1398[iVar0], 2, 0);
		iVar0++;
	}
	if (Function_261(&iLocal_1424))
	{
		return 1;
	}
	return 0;
}

void Function_394() //Position: 0x16BC5 / 93125
{
	switch (bLocal_1010)
	{
		case 0x00000000:
			Function_142(0x4000000);
			Function_126(114703);
			Function_395(1);
			break;
		
		default:
			Function_142(0x4000000);
			Function_126(114696);
			Function_395(1);
			break;
	}
	return;
}

void Function_395(int iParam0) //Position: 0x16C05 / 93189
{
	Function_396(&Global_43580, iParam0);
	return;
}

void Function_396(var uParam0, var uParam1) //Position: 0x16C13 / 93203
{
	int iVar0;
	
	iVar0 = (uParam0 && uParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

void Function_397() //Position: 0x16C3B / 93243
{
	Function_398();
	return;
}

void Function_398() //Position: 0x16C44 / 93252
{
	iLocal_1398[0] = 379;
	iLocal_1398[1] = 380;
	iLocal_1398[2] = 391;
	iLocal_1398[3] = 392;
	iLocal_1398[4] = 383;
	iLocal_1398[5] = 1252;
	iLocal_1398[6] = 1253;
	iLocal_1398[7] = 1252;
	iLocal_1398[8] = 1253;
	iLocal_1398[9] = 388;
	iLocal_1398[10] = 389;
	iLocal_1398[11] = 393;
	iLocal_1362[0] = 1211;
	iLocal_1362[1] = 1208;
	iLocal_1362[2] = 1210;
	iLocal_1362[3] = 1205;
	iLocal_1362[4] = 1204;
	iLocal_1374[0] = 1217;
	iLocal_1374[1] = 1218;
	iLocal_1374[2] = 1215;
	iLocal_1374[3] = 1216;
	iLocal_1374[4] = 1219;
	iLocal_1386[0] = 1222;
	iLocal_1386[1] = 1223;
	iLocal_1386[2] = 1225;
	iLocal_1386[3] = 1226;
	iLocal_1386[4] = 1227;
	return;
}

void Function_399() //Position: 0x16D41 / 93505
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1048))
	{
		Function_193("Zomb03_AbandonCat_S1");
		Function_197(bLocal_1010);
		Function_189(StackVal, 5, &bLocal_1192, &bLocal_1010, Function_200(bLocal_1010), Function_197(bLocal_1010), 0);
	}
	return;
}

void Function_400() //Position: 0x16D88 / 93576
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1200))
	{
		if (bLocal_1611)
		{
			Function_229(1, 0);
		}
		Function_161(0);
	}
	else
	{
		if (!bLocal_1611)
		{
			Function_230(1, 0);
		}
		Function_161(1);
	}
	Function_401();
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 2000))
	{
		if (!iLocal_1628)
		{
			uLocal_1659 = "";
			DYNAMICMIXER_TRIGGERSTATE_PERSISTENT("DYNAMIC_MIXER_ZOMBIE_FIRE_DOWN", &uLocal_1659);
			iLocal_1628 = 1;
		}
	}
	else if (iLocal_1628)
	{
		DYNAMICMIXER_DETRIGGERSTATE(&uLocal_1659, 0);
		iLocal_1628 = 0;
	}
	if (iLocal_1614)
	{
		if (((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[0]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[2])) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[3])) && ((IS_ACTOR_IN_VOLUME(&uLocal_1233, &iLocal_4 + 1056[0]) || IS_ACTOR_IN_VOLUME(&uLocal_1233, &iLocal_4 + 1056[2])) || IS_ACTOR_IN_VOLUME(&uLocal_1233, &iLocal_4 + 1056[3])))
		{
			DISABLE_CHILD_SECTOR("esc_villa01x");
			DISABLE_CHILD_SECTOR("esc_villaPatio01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPatio01x");
			DISABLE_CHILD_SECTOR("esc_villa01props01x");
			DISABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
			DISABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
			DISABLE_CHILD_SECTOR("esc_villaWall01x");
			DISABLE_CHILD_SECTOR("esc_villaWall02x");
			DISABLE_CHILD_SECTOR("esc_villaWall03x");
			DISABLE_CHILD_SECTOR("esc_villaWall04x");
			DISABLE_CHILD_SECTOR("esc_villaWall01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPost01x");
			DISABLE_CHILD_SECTOR("esc_villaPost01props01x");
			DISABLE_CHILD_SECTOR("esc_villaPost02x");
			DISABLE_CHILD_SECTOR("esc_villaPost02props01x");
			iLocal_1614 = 0;
		}
	}
	else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1056[1]))
	{
		ENABLE_CHILD_SECTOR("esc_villa01x");
		ENABLE_CHILD_SECTOR("esc_villaPatio01props01x");
		ENABLE_CHILD_SECTOR("esc_villaPatio01x");
		ENABLE_CHILD_SECTOR("esc_villa01props01x");
		ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
		ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
		ENABLE_CHILD_SECTOR("esc_villaWall01x");
		ENABLE_CHILD_SECTOR("esc_villaWall02x");
		ENABLE_CHILD_SECTOR("esc_villaWall03x");
		ENABLE_CHILD_SECTOR("esc_villaWall04x");
		ENABLE_CHILD_SECTOR("esc_villaWall01props01x");
		ENABLE_CHILD_SECTOR("esc_villaPost01x");
		ENABLE_CHILD_SECTOR("esc_villaPost01props01x");
		ENABLE_CHILD_SECTOR("esc_villaPost02x");
		ENABLE_CHILD_SECTOR("esc_villaPost02props01x");
		iLocal_1614 = 1;
	}
	return;
}

void Function_401() //Position: 0x17194 / 94612
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1912))
	{
		if (!bLocal_1626)
		{
			Function_402(16, 0, 1, 30, 1);
			bLocal_1626 = true;
		}
		else if (GET_WEATHER() != 16)
		{
			Function_402(16, 0, 1, 30, 1);
		}
	}
	else if (bLocal_1626)
	{
		Function_179(0, 1, 30);
		bLocal_1626 = false;
	}
	return;
}

void Function_402(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x171E8 / 94696
{
	int iVar0;
	bool bVar1;
	
	Function_182(iParam0);
	Global_26182.f_4 = iParam0;
	Global_26182.f_24 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_331(StackVal, &bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(&iParam1, &iParam2, &iParam3);
			Function_180(StackVal, &bVar1, &bParam4);
		}
	}
}

int Function_403(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x17262 / 94818
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_406(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_408()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
					CUTSCENE_MANAGER_LOAD_CUTFILE(&uParam0, 0, &iParam7, &iParam8, &iParam9, &iParam10);
					uParam1 = 1;
				}
				break;
			
			case 0x00000001:
				if (CUTSCENE_MANAGER_IS_CUTFILE_LOADED())
				{
					Function_404();
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
	else if ((!Function_406(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_408()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_406(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_404() //Position: 0x174CA / 95434
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
			Function_405(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_405(char* cParam0) //Position: 0x1751E / 95518
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

bool Function_406(var uParam0, struct<2> Param1, float fParam3) //Position: 0x17647 / 95815
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_407(&uParam0);
		if (VDIST(Function_407(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

struct<8> Function_407(var uParam0) //Position: 0x176D3 / 95955
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

int Function_408() //Position: 0x1773F / 96063
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_409() //Position: 0x1774E / 96078
{
	if (iLocal_1011 < 3 && iLocal_1011 > 105)
	{
		Function_199(&iLocal_4 + 2048[10]);
		Function_403(StackVal, "$/cutscene/escalera_2_pt_e_cs/escalera_2_pt_e_cs", &uLocal_1658, Function_199(&iLocal_4 + 2048[10]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_400();
		Function_399();
	}
	switch (iLocal_1011)
	{
		case 0x00000000:
			Function_332(0);
			if (iLocal_1169[3] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_397();
				Function_394();
				Function_330(16, 1);
				Function_230(1, 0);
				Function_229(0, 1);
				Function_188(&Global_54076, &iLocal_4 + 2048[9], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 1;
			}
			else
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_457()) && Function_393())
			{
				Function_199(&iLocal_4 + 2984[0]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199(&iLocal_4 + 2984[0]), 0.0f, 0, 1, 1, 0);
				Function_310(1);
				Function_188(&uLocal_1233, &iLocal_4 + 2048[8], 1, 1, 1);
				Function_446();
				DESTROY_VOLUME(&iLocal_4 + 1704[0]);
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000004:
			Function_245(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_392();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_307();
			Function_445();
			Function_327(&uLocal_1196, 7, 0, 4294967295, 4294967295);
			SET_ACTOR_HEALTH(&uLocal_1233, GET_ACTOR_MAX_HEALTH(&uLocal_1233));
			iLocal_1011 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_1169[3] == 0)
				{
					Function_444();
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2176[0], 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2176[0]), "Zomb03_Altar");
					iLocal_1206 = 0;
				}
				iLocal_1208 = 11;
				uLocal_1265 = &iLocal_4 + 3592;
				iLocal_1011 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_410())
			{
				iLocal_1011 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_1169[4] = 1;
				Function_171();
				TASK_STAND_STILL(&iLocal_1235, -1.0f, 0, 0);
				bLocal_1010 = 5;
				iLocal_1011 = 0;
			}
			break;
	}
	return;
}

bool Function_410() //Position: 0x1798B / 96651
{
	Function_421();
	switch (iLocal_1206)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_1562) <= 8.0f)
			{
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1206 = 1;
			}
			break;
		
		case 0x00000001:
			if (!Function_420())
			{
				if (!iLocal_1620)
				{
					Function_417();
					iLocal_1620 = 1;
				}
			}
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1704[6]))
			{
				Function_414();
				if (!Function_412())
				{
					TASK_CLEAR(&uLocal_1233);
					TASK_FOLLOW_ACTOR(&uLocal_1233, &Global_54076);
					iLocal_1616 = 1;
					Function_411();
					Function_364(&iLocal_4 + 2176[0]);
					iLocal_1617 = 1;
					iLocal_1206 = 3;
					Function_253(&iLocal_1562);
				}
				else
				{
					TASK_CLEAR(&uLocal_1233);
					TASK_STAND_STILL(&uLocal_1233, -1.0f, 0, 0);
					Function_364(&iLocal_4 + 2176[0]);
					return 1;
				}
			}
			break;
		
		case 0x00000003:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_1562) <= 8.0f)
			{
				Function_27("Zomb03_ClearCataObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1206 = 2;
			}
			if (Function_412())
			{
				Function_203();
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2176[0], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2176[0]), "Zomb03_Altar");
				iLocal_1206 = 4;
			}
			break;
		
		case 0x00000002:
			if (Function_412())
			{
				Function_203();
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2176[0], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2176[0]), "Zomb03_Altar");
				iLocal_1206 = 4;
			}
			break;
		
		case 0x00000004:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1704[6]))
			{
				TASK_CLEAR(&uLocal_1233);
				TASK_STAND_STILL(&uLocal_1233, -1.0f, 0, 0);
				Function_364(&iLocal_4 + 2176[0]);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_411() //Position: 0x17BC2 / 97218
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_FinalRoomNoKills", "Z03_FinalRoomNoKills", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_412() //Position: 0x17C13 / 97299
{
	if (Function_413())
	{
		return 1;
	}
	return 0;
}

bool Function_413() //Position: 0x17C22 / 97314
{
	if (GET_ACTORSET_SIZE(&iLocal_1259) >= 0)
	{
		return 0;
	}
	return 1;
}

void Function_414() //Position: 0x17C36 / 97334
{
	bool bVar0;
	var uVar1;
	
	if (IS_ACTORSET_VALID(&iLocal_1257))
	{
		if (GET_ACTORSET_SIZE(&iLocal_1257) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= GET_ACTORSET_SIZE(&iLocal_1257))
			{
				uVar1 = GET_ACTOR_FROM_ACTORSET(&iLocal_1257, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_ALIVE(&uVar1))
					{
						if (!IS_ACTOR_IN_ACTORSET(&iLocal_1259, &uVar1))
						{
							if (Function_415(&uVar1, &Global_54076) >= 40.0f)
							{
								ADD_ACTORSET_MEMBER(&iLocal_1259, &uVar1);
							}
						}
					}
				}
				bVar0++;
			}
		}
	}
	return;
}

float Function_415(var uParam0, int iParam1) //Position: 0x17CB3 / 97459
{
	var uVar0;
	var uVar2;
	int iVar4;
	
	GET_POSITION(&uParam0, &uVar0);
	GET_POSITION(&iParam1, &uVar2);
	iVar4 = Function_416(&uVar0, &uVar2);
	return iVar4;
}

var Function_416(struct<2> Param0) //Position: 0x17CD4 / 97492
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_417() //Position: 0x17CF3 / 97523
{
	if ((Function_349() % 2) == 1)
	{
		Function_419();
	}
	else
	{
		Function_418();
	}
	return;
}

void Function_418() //Position: 0x17D0B / 97547
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_ReferenceBookBant_v2_AA", "Z03_ReferenceBookBant_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Z03_ReferenceBookBant_v2_AB", "Z03_ReferenceBookBant_v2_AB", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_419() //Position: 0x17DAF / 97711
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_ReferenceBookBant_v1_AA", "Z03_ReferenceBookBant_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Z03_ReferenceBookBant_v1_AB", "Z03_ReferenceBookBant_v1_AB", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_420() //Position: 0x17E53 / 97875
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_421() //Position: 0x17E80 / 97920
{
	var uVar0;
	var uVar2;
	
	Function_441(&iLocal_1257);
	Function_431();
	Function_368(&bLocal_1550, 4294967295);
	Function_368(&bLocal_1552, 4294967295);
	if (!Function_430(&bLocal_1550, 0) || !Function_430(&bLocal_1552, 0))
	{
		if (!IS_VOLUME_VALID(&iLocal_4 + 1704[5]))
		{
			Function_428();
		}
	}
	if (Function_425(&iLocal_4 + 1704[0], 0, 0, 0))
	{
		Function_446();
	}
	if (Function_425(&iLocal_4 + 1704[2], 0, 0, 0))
	{
		Function_424();
	}
	if (Function_425(&iLocal_4 + 1704[5], 0, 0, 0))
	{
		Function_187(&iLocal_1249, 0);
		Function_199(&iLocal_4 + 2984[1]);
		uVar0 = Function_199(&iLocal_4 + 2984[1]);
		Function_373(&bLocal_1550);
		SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1550, false, 2, 4294967295);
		TASK_WANDER(false, 3212836864);
		if (SQUAD_IS_VALID(&bLocal_1550))
		{
			DECOR_SET_BOOL(&bLocal_1550, "bCanWakeUp", true);
		}
	}
	if (Function_425(&iLocal_4 + 1704[3], 0, 0, 0))
	{
		if (!iLocal_1633)
		{
			Function_423();
			iLocal_1633 = 1;
		}
		Function_285(&iLocal_1253, 4294967295, 0);
		TASK_MELEE_ATTACK(&iLocal_1253, &Global_54076, -1.0f);
		TASK_PRIORITY_SET(&iLocal_1253, true);
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1704[4]))
	{
		if (Function_425(&iLocal_4 + 1704[4], 0, 0, 0) || Function_422(&bLocal_1552, &Global_54076))
		{
			if (!iLocal_1633)
			{
				Function_423();
				iLocal_1633 = 1;
			}
			if (!DECOR_CHECK_EXIST(&bLocal_1552, "bCanWakeUp"))
			{
				Function_199(&iLocal_4 + 2984[3]);
				uVar2 = Function_199(&iLocal_4 + 2984[3]);
				Function_373(&bLocal_1552);
				Function_372(&bLocal_1552, &Global_54076, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1552, false, 2, 4294967295);
				TASK_GO_TO_COORD_NONSTOP(0, &uVar2, 1, 6.0f);
				if (SQUAD_IS_VALID(&bLocal_1552))
				{
					DECOR_SET_BOOL(&bLocal_1552, "bCanWakeUp", true);
				}
				DESTROY_VOLUME(&iLocal_4 + 1704[4]);
			}
		}
	}
	return;
}

int Function_422(bool bParam0, int iParam1) //Position: 0x18044 / 98372
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar1);
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

void Function_423() //Position: 0x180B6 / 98486
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_Carnage", "Z03_Carnage", true, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_424() //Position: 0x180F5 / 98549
{
	bLocal_1355 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_ACTOR(0, &Global_54076, 10.0f, 1);
	TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_1251);
	TASK_SEQUENCE_PERFORM(&iLocal_1251, bLocal_1355);
	TASK_PRIORITY_SET(&iLocal_1251, 2);
	AI_ACTOR_FORCE_SPEED(&iLocal_1251, true);
	TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
	return;
}

bool Function_425(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x18143 / 98627
{
	if (IS_VOLUME_VALID(&uParam0))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &uParam0))
		{
			DESTROY_VOLUME(&uParam0);
			return 1;
		}
		if (&bParam3)
		{
			if (Function_427(&uParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				DESTROY_VOLUME(&uParam0);
				return 1;
			}
		}
		if (&bParam1)
		{
			if (&iParam2 != "")
			{
				if (Function_426(&Global_54076, 1) && IS_ACTOR_IN_VOLUME(&Global_54076, &iParam2))
				{
					DESTROY_VOLUME(&uParam0);
					return 1;
				}
			}
			if (Function_426(&Global_54076, 1))
			{
				DESTROY_VOLUME(&uParam0);
				return 1;
			}
		}
	}
	return 0;
}

bool Function_426(var uParam0, bool bParam1) //Position: 0x181DF / 98783
{
	bool bVar0;
	
	bVar0 = false;
	if ((GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&uParam0)) > 1.0f)
	{
		switch (UNK_0xDB679ED9(GET_WEAPON_IN_HAND(&uParam0)))
		{
			case 0x0000002F:
				if (&bParam1)
				{
					bVar0 = true;
				}
				break;
			
			case 0x00000029:
				bVar0 = true;
				break;
			
			case 0x00000027:
				bVar0 = true;
				break;
			
			case 0x00000028:
				bVar0 = true;
				break;
			
			case 0x0000002A:
				bVar0 = true;
				break;
			
			case 0x0000002B:
				bVar0 = true;
				break;
			
			case 0x0000002C:
				bVar0 = true;
				break;
			
			case 0x00000031:
				bVar0 = true;
				break;
			}
	}
	return bVar0;
}

bool Function_427(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x1826D / 98925
{
	return CAMERA_IS_VISIBLE_VOLUME(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_428() //Position: 0x1828D / 98957
{
	if (!Function_250(&iLocal_1582))
	{
		Function_253(&iLocal_1582);
	}
	else if (Function_248(&iLocal_1582) <= 20.0f)
	{
		Function_429();
		Function_253(&iLocal_1582);
	}
	else if (Function_426(&Global_54076, 1))
	{
		if (Function_248(&iLocal_1582) <= 1,2f)
		{
			Function_253(&iLocal_1582);
		}
	}
	return;
}

void Function_429() //Position: 0x182E1 / 99041
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_JonNoShoot", "Z03_JonNoShoot", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_430(int iParam0, bool bParam1) //Position: 0x18326 / 99110
{
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iParam0) >= 0)
		{
			if (&bParam1)
			{
				if (!DECOR_CHECK_EXIST(&iParam0, "bBlipped"))
				{
					Function_371(&iParam0, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					DECOR_SET_BOOL(&iParam0, "bBlipped", true);
				}
			}
			return 0;
		}
		if (&bParam1)
		{
			if (DECOR_CHECK_EXIST(&iParam0, "bBlipped"))
			{
				DECOR_REMOVE(&iParam0, "bBlipped");
			}
		}
		return 1;
	}
	return 1;
}

void Function_431() //Position: 0x183BA / 99258
{
	Function_440();
	Function_435();
	Function_367();
	Function_433();
	switch (iLocal_1208)
	{
		case 0x0000000B:
			Function_432();
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_1233, &Global_54076, 15.0f, 3.0f, 10.0f);
			iLocal_1613 = 1;
			iLocal_1208 = 12;
			break;
		
		case 0x0000000C:
			Function_366(0x420c0000, 0x425c0000);
			break;
	}
	return;
}

void Function_432() //Position: 0x18416 / 99350
{
	TASK_CLEAR(&uLocal_1233);
	TASK_FOLLOW_OBJECT_ALONG_PATH(&uLocal_1233, &Global_54076, &uLocal_1265, 4,25f, 1, 0);
	TASK_PRIORITY_SET(&uLocal_1233, true);
	iLocal_1616 = 0;
	return;
}

void Function_433() //Position: 0x18445 / 99397
{
	float fVar0;
	
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1352[22]))
	{
		Function_253(&iLocal_1606);
		return;
	}
	fVar0 = (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076));
	if (fVar0 >= 1,75f)
	{
		Function_253(&iLocal_1606);
		return;
	}
	if (GET_ACTOR_HEALTH(&Global_54076) > (GET_ACTOR_MAX_HEALTH(&Global_54076) - 10.0f))
	{
		Function_253(&iLocal_1606);
		return;
	}
	if (!Function_250(&iLocal_1606))
	{
		Function_253(&iLocal_1606);
	}
	else if (Function_248(&iLocal_1606) <= 10.0f)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Function_434();
			Function_253(&iLocal_1606);
		}
	}
	return;
}

void Function_434() //Position: 0x184D9 / 99545
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_EncoJon", "Z03_EncoJon", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_435() //Position: 0x18518 / 99608
{
	var uVar0;
	var uVar2;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	var uVar8;
	
	Function_438();
	if (!iLocal_1616)
	{
		if (iLocal_1361 <= 5)
		{
			if (!Function_250(&iLocal_1602))
			{
				Function_253(&iLocal_1602);
			}
			else
			{
				Function_297(&Global_54076);
				Var4 = Function_297(&Global_54076);
				if (!Function_437(StackVal, StackVal, Local_1661, Var4))
				{
					Function_253(&iLocal_1602);
					Local_1661 = Var4;
				}
				else if (Function_248(&iLocal_1602) <= 10.0f)
				{
					Function_436();
					iLocal_1361++;
					Function_253(&iLocal_1602);
					Function_253(&iLocal_1594);
					Function_253(&iLocal_1606);
				}
			}
		}
		if (Function_250(&iLocal_1574))
		{
			if (Function_248(&iLocal_1574) < 1.0f)
			{
				Function_297(&Global_54076);
				uVar0 = Function_297(&Global_54076);
				Function_297(&uLocal_1233);
				uVar2 = Function_297(&uLocal_1233);
				ESTIMATE_TWO_DISTANCES_ALONG_PATH(&uLocal_1265, &uVar0, &uVar2, &fVar6, &fVar7, &uVar8);
				if (fVar6 > fVar7)
				{
					if (!iLocal_1615)
					{
						TASK_CLEAR(&uLocal_1233);
						TASK_FACE_ACTOR(&uLocal_1233, &Global_54076, 1, 3212836864);
						AI_GOAL_LOOK_AT_ACTOR(&uLocal_1233, &Global_54076, 1, 1065353216, 3212836864, 3212836864, 0);
						iLocal_1615 = 1;
					}
				}
				else if (iLocal_1615)
				{
					Function_432();
					iLocal_1615 = 0;
					STOP_FORCE_LOOK_AT_COORD(&uLocal_1233);
					iLocal_1622 = 0;
					Function_362(&iLocal_1594);
				}
			}
		}
		else
		{
			Function_253(&iLocal_1574);
		}
	}
	return;
}

void Function_436() //Position: 0x18643 / 99907
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_JonNoMoveForward", "Z03_JonNoMoveForward", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_437(struct<2> Param0, struct<2> Param2) //Position: 0x18694 / 99988
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

void Function_438() //Position: 0x186C0 / 100032
{
	float fVar0;
	
	if (iLocal_1615)
	{
		if (!Function_250(&iLocal_1594))
		{
			Function_253(&iLocal_1594);
		}
		else
		{
			fVar0 = (GET_CURRENT_GAME_TIME() - GET_LAST_ATTACK_TIME(&Global_54076));
			if (fVar0 >= 2.0f)
			{
				Function_253(&iLocal_1594);
			}
			else if (GET_ACTOR_HEALTH(&Global_54076) > (GET_ACTOR_MAX_HEALTH(&Global_54076) - 10.0f))
			{
				Function_253(&iLocal_1594);
			}
			else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 976))
			{
				Function_253(&iLocal_1594);
			}
			else if (Function_248(&iLocal_1594) <= 5.0f)
			{
				if (iLocal_1622)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (Function_248(&iLocal_1594) <= 13.0f)
						{
							Function_439();
							Function_253(&iLocal_1594);
						}
					}
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_439();
					Function_253(&iLocal_1594);
					iLocal_1622 = 1;
				}
			}
		}
	}
	return;
}

void Function_439() //Position: 0x1877D / 100221
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_JonTurnsBak", "Z03_JonTurnsBak", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_440() //Position: 0x187C4 / 100292
{
	if (iLocal_1613)
	{
		if (!IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1144) || iLocal_1616)
		{
			if (bLocal_1010 == 1)
			{
				return;
			}
			DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_1233);
			iLocal_1613 = 0;
		}
	}
	else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1144) && !iLocal_1616)
	{
		ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_1233, &Global_54076, 15.0f, 5.0f, 10.0f);
		iLocal_1613 = 1;
	}
	return;
}

void Function_441(int iParam0) //Position: 0x1882C / 100396
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		if (GET_ACTORSET_SIZE(&iParam0) >= 0)
		{
			bVar0 = false;
			while (bVar0 <= GET_ACTORSET_SIZE(&iParam0))
			{
				uVar1 = GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					if (IS_ACTOR_ALIVE(&uVar1))
					{
						if (!IS_ACTOR_IN_VOLUME(&uVar1, &iLocal_4 + 2000))
						{
							KILL_ACTOR(&uVar1);
						}
						else if (IS_ACTOR_HOGTIED(&uVar1))
						{
							if (!ACTORS_IN_RANGE(&uVar1, &Global_54076, 10.0f))
							{
								if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uVar1, 1065353216, 1117126656, 1, 1, 0))
								{
									KILL_ACTOR(&uVar1);
								}
							}
						}
						else
						{
							if (DECOR_CHECK_EXIST(&uVar1, "bWallZombie"))
							{
								if (DECOR_GET_BOOL(&uVar1, "bWallZombie"))
								{
									Function_443(&uVar1);
								}
							}
							if (iLocal_1617)
							{
								if (IS_ACTOR_IN_ACTORSET(&iLocal_1259, &uVar1))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
									{
										ADD_BLIP_FOR_ACTOR(&uVar1, 322, 0, 2, 0);
									}
								}
								else
								{
									DESTROY_ACTOR(&uVar1);
								}
							}
						}
					}
					if (!IS_ACTOR_ALIVE(&uVar1))
					{
						if (DECOR_CHECK_EXIST(&uVar1, "oLeftEyeGlow"))
						{
							uVar2 = DECOR_GET_OBJECT(&uVar1, "oLeftEyeGlow");
							if (IS_OBJECT_VALID(&uVar2))
							{
								UNK_0xE18028C1(&uVar2);
								DESTROY_OBJECT(&uVar2);
							}
						}
						if (DECOR_CHECK_EXIST(&uVar1, "oRightEyeGlow"))
						{
							uVar2 = DECOR_GET_OBJECT(&uVar1, "oRightEyeGlow");
							if (IS_OBJECT_VALID(&uVar2))
							{
								UNK_0xE18028C1(&uVar2);
								DESTROY_OBJECT(&uVar2);
							}
						}
						if (IS_ACTOR_IN_ACTORSET(&iLocal_1259, &uVar1))
						{
							REMOVE_ACTORSET_MEMBER(&iLocal_1259, &uVar1);
						}
						REMOVE_ACTORSET_MEMBER(&iParam0, &uVar1);
						bLocal_1360++;
						Function_442(Local_908, bLocal_1360);
						PRINTSTRING("A zombie has died, total number dead: ");
						PRINTINT(bLocal_1360);
						PRINTNL();
					}
				}
				else
				{
					if (DECOR_CHECK_EXIST(&uVar1, "oLeftEyeGlow"))
					{
						uVar3 = DECOR_GET_OBJECT(&uVar1, "oLeftEyeGlow");
						if (IS_OBJECT_VALID(&uVar3))
						{
							UNK_0xE18028C1(&uVar3);
							DESTROY_OBJECT(&uVar3);
						}
					}
					if (DECOR_CHECK_EXIST(&uVar1, "oRightEyeGlow"))
					{
						uVar3 = DECOR_GET_OBJECT(&uVar1, "oRightEyeGlow");
						if (IS_OBJECT_VALID(&uVar3))
						{
							UNK_0xE18028C1(&uVar3);
							DESTROY_OBJECT(&uVar3);
						}
					}
					if (IS_ACTOR_IN_ACTORSET(&iLocal_1259, &uVar1))
					{
						REMOVE_ACTORSET_MEMBER(&iLocal_1259, &uVar1);
					}
					REMOVE_ACTORSET_MEMBER(&iParam0, &uVar1);
					bLocal_1360++;
					Function_442(Local_908, bLocal_1360);
					PRINTSTRING("A zombie has become invalid, total number dead: ");
					PRINTINT(bLocal_1360);
					PRINTNL();
				}
				bVar0++;
			}
		}
		if (!iLocal_1624)
		{
			if (bLocal_1010 > 3)
			{
				if (bLocal_1360 > 15)
				{
					Function_198(3);
					Function_374(StackVal, Function_198(3), 3, Global_46850[0], Function_201(3), 0);
					iLocal_1624 = 1;
				}
			}
		}
		else if (!iLocal_1625)
		{
			if (bLocal_1010 > 4)
			{
				if (bLocal_1360 > 33)
				{
					Function_198(4);
					Function_374(StackVal, Function_198(4), 4, Global_46850[0], Function_201(4), 0);
					iLocal_1625 = 1;
				}
			}
		}
	}
	return;
}

void Function_442(int iParam0, bool bParam1) //Position: 0x18B9B / 101275
{
	if (!Function_20(iParam0))
	{
		return;
	}
	Global_21684[iParam07].f_16 = bParam1;
	return;
}

void Function_443(var uParam0) //Position: 0x18BB6 / 101302
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_ALIVE(&uParam0))
		{
			if (((!DECOR_CHECK_EXIST(&uParam0, "wallVolume") || !DECOR_CHECK_EXIST(&uParam0, "wallPosition")) || !DECOR_CHECK_EXIST(&uParam0, "wallRollLeft")) || !DECOR_CHECK_EXIST(&uParam0, "wallHeight"))
			{
				uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&uParam0, "wallVolume"));
				if (IS_VOLUME_VALID(&uVar0))
				{
					if (!IS_ACTOR_IN_VOLUME(&uParam0, &uVar0))
					{
						Function_188(&uParam0, DECOR_GET_OBJECT(&uParam0, "wallPosition"), 0, 0, 0);
						SET_ANIM_SET_FOR_ACTOR(&uParam0, "z_dlc_z_crypt", 0);
						switch (DECOR_GET_INT(&uParam0, "wallHeight"))
						{
							case 0x00000001:
								if (DECOR_GET_BOOL(&uParam0, "wallRollLeft"))
								{
									SET_ACTION_NODE_FOR_ACTOR(&uParam0, "z_dlc_z_crypt/Crypt1_2_lft");
								}
								else
								{
									SET_ACTION_NODE_FOR_ACTOR(&uParam0, "z_dlc_z_crypt/Crypt1_2");
								}
								break;
							
							case 0x00000002:
								if (DECOR_GET_BOOL(&uParam0, "wallRollLeft"))
								{
									SET_ACTION_NODE_FOR_ACTOR(&uParam0, "z_dlc_z_crypt/Crypt2_5_lft");
								}
								else
								{
									SET_ACTION_NODE_FOR_ACTOR(&uParam0, "z_dlc_z_crypt/Crypt2_5");
								}
								break;
							
							case 0x00000003:
								if (DECOR_GET_BOOL(&uParam0, "wallRollLeft"))
								{
									SET_ACTION_NODE_FOR_ACTOR(&uParam0, "z_dlc_z_crypt/Crypt4_lft");
								}
								else
								{
									SET_ACTION_NODE_FOR_ACTOR(&uParam0, "z_dlc_z_crypt/Crypt4");
								}
								break;
							}
					}
				}
				else
				{
					KILL_ACTOR(&uParam0);
				}
			}
			else
			{
				KILL_ACTOR(&uParam0);
			}
		}
	}
	return;
}

void Function_444() //Position: 0x18DEB / 101867
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_remindJon", "Z03_remindJon", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_445() //Position: 0x18E2E / 101934
{
	Function_385(&uLocal_906, 18, &iLocal_4 + 2984[2], 0, 4, 0, 1, 3212836864);
	return;
}

void Function_446() //Position: 0x18E50 / 101968
{
	Function_456();
	Function_455();
	Function_454();
	Function_452();
	Function_447();
	return;
}

void Function_447() //Position: 0x18E65 / 101989
{
	int iVar0;
	
	iVar0 = Function_451(&iLocal_4 + 3176[1], &iLocal_4 + 3176[0], 1, &iLocal_4 + 1704[8], Function_58(), 2, 0, 1252);
	SQUAD_JOIN(&iVar0, &bLocal_1552);
	iVar0 = Function_355(&iLocal_4 + 3224[0], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1552);
	iVar0 = Function_451(&iLocal_4 + 3176[3], &iLocal_4 + 3176[2], 0, &iLocal_4 + 1704[9], Function_58(), 2, 0, 1253);
	SQUAD_JOIN(&iVar0, &bLocal_1552);
	Function_450(&bLocal_1552, 1,5f, 2,25f);
	iVar0 = Function_355(&iLocal_4 + 3224[1], Function_58(), 4294967295, 1, 4294967295);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	SQUAD_JOIN(&iVar0, &bLocal_1552);
	Function_388(&bLocal_1552);
	Function_449(&bLocal_1552, &iLocal_1257);
	Function_448(&bLocal_1552);
	return;
}

void Function_448(int iParam0) //Position: 0x18F46 / 102214
{
	if (!SQUAD_IS_VALID(&iParam0))
	{
		LOG_ERROR("Squad_AddMustKillZombie -- Invalid squad... exiting..");
		return;
	}
	Function_449(&iParam0, &iLocal_1259);
	return;
}

void Function_449(int iParam0, int iParam1) //Position: 0x18F9C / 102300
{
	bool bVar0;
	var uVar1;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (SQUAD_GET_SIZE(&iParam0) >= 0)
		{
			if (IS_ACTORSET_VALID(&iParam1))
			{
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
				{
					uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
					if (IS_ACTOR_VALID(&uVar1))
					{
						ADD_ACTORSET_MEMBER(&iParam1, &uVar1);
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

void Function_450(var uParam0, float fParam1, bool bParam2) //Position: 0x18FF3 / 102387
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
			if (bVar0 == 0)
			{
				Function_390(&uVar1, 0.0f, 0.0f);
			}
			else
			{
				Function_390(&uVar1, &fParam1, &bParam2);
			}
		}
		bVar0++;
	}
	return;
}

var Function_451(int iParam0, int iParam1, bool bParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1904C / 102476
{
	var uVar0;
	
	switch (&iParam6)
	{
		case 0x00000000:
			uVar0 = Function_355(&iParam0, &uParam4, 4294967295, 0, &iParam7);
			break;
		
		case 0x00000001:
			uVar0 = Function_354(&iParam0, &uParam4, 4294967295, 0, &iParam7);
			break;
		
		case 0x00000002:
			uVar0 = Function_353(&iParam0, &uParam4, 4294967295, 0, &iParam7);
			break;
	}
	SUSPEND_MOVER(&uVar0);
	Function_188(&uVar0, &iParam1, 0, 0, 0);
	DECOR_SET_OBJECT(&uVar0, "wallVolume", &uParam3);
	DECOR_SET_OBJECT(&uVar0, "wallPosition", &iParam1);
	DECOR_SET_BOOL(&uVar0, "wallRollLeft", bParam2);
	DECOR_SET_INT(&uVar0, "wallHeight", &iParam5);
	SET_ANIM_SET_FOR_ACTOR(&uVar0, "z_dlc_z_crypt", 0);
	switch (&iParam5)
	{
		case 0x00000001:
			if (bParam2)
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar0, "z_dlc_z_crypt/Crypt1_2_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar0, "z_dlc_z_crypt/Crypt1_2");
			}
			break;
		
		case 0x00000002:
			if (bParam2)
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar0, "z_dlc_z_crypt/Crypt2_5_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar0, "z_dlc_z_crypt/Crypt2_5");
			}
			break;
		
		case 0x00000003:
			if (bParam2)
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar0, "z_dlc_z_crypt/Crypt4_lft");
			}
			else
			{
				SET_ACTION_NODE_FOR_ACTOR(&uVar0, "z_dlc_z_crypt/Crypt4");
			}
			break;
	}
	DECOR_SET_BOOL(&uVar0, "bIsWallZomb", true);
	return &uVar0;
}

void Function_452() //Position: 0x1924F / 102991
{
	iLocal_1253 = Function_355(&iLocal_4 + 3152[0], Function_58(), 1, 0, 4294967295);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_1253);
	Function_453(&iLocal_1253);
	return;
}

void Function_453(int iParam0) //Position: 0x1927E / 103038
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("AddMustKillZombie -- Invalid actor... exiting..");
		return;
	}
	ADD_ACTORSET_MEMBER(&iLocal_1259, &iParam0);
	return;
}

void Function_454() //Position: 0x192CF / 103119
{
	iLocal_1251 = Function_352(&iLocal_4 + 3088[5], Function_58(), 4294967295, 1, 1216);
	TASK_STAND_STILL(&iLocal_1251, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_1251, true);
	Function_351(&iLocal_1251);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_1251);
	Function_453(&iLocal_1251);
	return;
}

void Function_455() //Position: 0x19319 / 103193
{
	var uVar0;
	
	uVar0 = Function_355(&iLocal_4 + 3088[0], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&uVar0, &bLocal_1550);
	uVar0 = Function_355(&iLocal_4 + 3088[1], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&uVar0, &bLocal_1550);
	uVar0 = Function_355(&iLocal_4 + 3088[2], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&uVar0, &bLocal_1550);
	Function_450(&bLocal_1550, 1,6f, 3,3f);
	uVar0 = Function_355(&iLocal_4 + 3088[3], Function_58(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(&uVar0, &bLocal_1550);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	uVar0 = Function_355(&iLocal_4 + 3088[4], Function_58(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(&uVar0, &bLocal_1550);
	TASK_STAND_STILL(&uVar0, -1.0f, 0, 0);
	Function_388(&bLocal_1550);
	Function_449(&bLocal_1550, &iLocal_1257);
	Function_448(&bLocal_1550);
	return;
}

void Function_456() //Position: 0x193F6 / 103414
{
	iLocal_1249 = Function_451(&iLocal_4 + 3056[1], &iLocal_4 + 3056[0], 0, &iLocal_4 + 1704[7], Function_58(), 2, 0, 1253);
	Function_351(&iLocal_1249);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_1249);
	Function_453(&iLocal_1249);
	return;
}

int Function_457() //Position: 0x19441 / 103489
{
	Function_270(&iLocal_4 + 344, 1210, 2, 0);
	if (Function_261(&iLocal_4 + 344))
	{
		return 1;
	}
	return 0;
}

void Function_458() //Position: 0x19463 / 103523
{
	if (iLocal_1011 < 4 && iLocal_1011 > 105)
	{
		Function_400();
		Function_399();
	}
	switch (iLocal_1011)
	{
		case 0x00000000:
			Function_332(0);
			if (iLocal_1169[2] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_397();
				Function_394();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_330(16, 1);
				Function_188(&Global_54076, &iLocal_4 + 2048[6], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 1;
			}
			else
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_476()) && Function_393())
			{
				Function_199(&iLocal_4 + 2568[0]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199(&iLocal_4 + 2568[0]), 0.0f, 0, 1, 1, 0);
				Function_310(1);
				Function_188(&uLocal_1233, &iLocal_4 + 2048[7], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000004:
			Function_245(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_307();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_457();
			Function_475();
			Function_474();
			Function_327(&uLocal_1196, 7, 0, 4294967295, 4294967295);
			SET_ACTOR_HEALTH(&uLocal_1233, GET_ACTOR_MAX_HEALTH(&uLocal_1233));
			iLocal_1011 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				if (iLocal_1169[2] == 0)
				{
					Function_444();
					ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2176[0], 330, 0f, 2, 0);
					SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2176[0]), "Zomb03_Altar");
					iLocal_1205 = 0;
				}
				iLocal_1208 = 7;
				uLocal_1265 = &iLocal_4 + 3584;
				iLocal_1011 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_459())
			{
				iLocal_1011 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_1169[3] = 1;
				Function_172();
				TASK_STAND_STILL(&iLocal_1235, -1.0f, 0, 0);
				bLocal_1010 = 4;
				iLocal_1011 = 0;
			}
			break;
	}
	return;
}

bool Function_459() //Position: 0x19639 / 103993
{
	Function_463();
	Function_462();
	Function_460();
	switch (iLocal_1205)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_1562) <= 8.0f)
			{
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1205 = 1;
			}
			break;
		
		case 0x00000001:
			if (Function_425(&iLocal_4 + 1552[3], 0, 0, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_460() //Position: 0x196B3 / 104115
{
	if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1540) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1542) >= 0) && Function_461(&iLocal_1245, 0)) && Function_461(&iLocal_1247, 0))
	{
		if (!iLocal_1630)
		{
			Function_327(&uLocal_1196, 7, 0, 4294967295, 4294967295);
			iLocal_1630 = 1;
		}
	}
	return;
}

int Function_461(int iParam0, int iParam1) //Position: 0x196F6 / 104182
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

void Function_462() //Position: 0x19748 / 104264
{
	if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1552[16]) || Function_422(&bLocal_1540, &Global_54076))
	{
		if (!iLocal_1631)
		{
			Function_327(&uLocal_1196, 35, 0, 4294967295, 4294967295);
			iLocal_1631 = 1;
		}
	}
	return;
}

void Function_463() //Position: 0x19784 / 104324
{
	var uVar0;
	var uVar2;
	
	Function_441(&iLocal_1257);
	Function_471();
	Function_368(&bLocal_1540, 4294967295);
	Function_368(&bLocal_1542, 4294967295);
	if (!Function_430(&bLocal_1540, 0))
	{
		Function_428();
	}
	if (Function_425(&iLocal_4 + 1552[0], 0, 0, 0))
	{
		Function_199(&iLocal_4 + 2624[0]);
		uVar0 = Function_199(&iLocal_4 + 2624[0]);
		Function_373(&bLocal_1540);
		Function_372(&bLocal_1540, &Global_54076, 0);
		SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1540, false, 2, 4294967295);
		TASK_GO_TO_COORD_NONSTOP(0, &uVar0, 1, 6.0f);
		if (SQUAD_IS_VALID(&bLocal_1540))
		{
			DECOR_SET_BOOL(&bLocal_1540, "bCanWakeUp", true);
		}
		Function_470(&iLocal_4 + 2568[2]);
		iLocal_1208 = 8;
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1552[1]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1552[1]) || Function_422(&bLocal_1542, &Global_54076))
		{
			Function_199(&Global_54076);
			uVar2 = Function_199(&Global_54076);
			Function_373(&bLocal_1542);
			Function_372(&bLocal_1542, &Global_54076, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1542, false, 2, 4294967295);
			TASK_GO_TO_COORD_NONSTOP(0, &uVar2, 1, 6.0f);
			if (SQUAD_IS_VALID(&bLocal_1542))
			{
				DECOR_SET_BOOL(&bLocal_1542, "bCanWakeUp", true);
			}
			SAY_SINGLE_LINE_STRING(&Global_54076, "PLAYER_RED_MIST_DESCENDS", true, false, 2, 0, false, false);
			DESTROY_VOLUME(&iLocal_4 + 1552[1]);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1552[2]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1552[2]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1540) >= 3)
		{
			Function_187(&iLocal_1245, 0);
			Function_253(&iLocal_1570);
			DESTROY_VOLUME(&iLocal_4 + 1552[2]);
		}
	}
	if (Function_250(&iLocal_1570))
	{
		if (Function_248(&iLocal_1570) <= 2,5f || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1552[10]))
		{
			Function_187(&iLocal_1247, 0);
			Function_253(&iLocal_1570);
			Function_362(&iLocal_1570);
		}
	}
	if (Function_425(&iLocal_4 + 1552[4], 0, 0, 0))
	{
		Function_468();
	}
	if (Function_425(&iLocal_4 + 1552[5], 0, 0, 0))
	{
		Function_466();
	}
	if (Function_425(&iLocal_4 + 1552[6], 0, 0, 0))
	{
		Function_465();
	}
	if (Function_425(&iLocal_4 + 1552[11], 0, 0, 1))
	{
		Function_464();
	}
	if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1554) < 6)
	{
		if (!IS_VOLUME_VALID(&iLocal_4 + 1552[6]))
		{
			if (!iLocal_1619)
			{
				iLocal_1635 = 1;
				iLocal_1619 = 1;
			}
		}
	}
	return;
}

void Function_464() //Position: 0x199DB / 104923
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_SpotsGreenSmoke", "Z03_SpotsGreenSmoke", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_465() //Position: 0x19A2A / 105002
{
	var uVar0;
	
	uVar0 = Function_353(&iLocal_4 + 2872[0], Function_58(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(&uVar0, &Global_54076, 1, 3212836864);
	TASK_PRIORITY_SET(&uVar0, 2);
	SQUAD_JOIN(&uVar0, &bLocal_1554);
	uVar0 = Function_353(&iLocal_4 + 2872[1], Function_58(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(&uVar0, &Global_54076, 1, 3212836864);
	TASK_PRIORITY_SET(&uVar0, 2);
	SQUAD_JOIN(&uVar0, &bLocal_1554);
	uVar0 = Function_353(&iLocal_4 + 2872[2], Function_58(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(&uVar0, &Global_54076, 1, 3212836864);
	TASK_PRIORITY_SET(&uVar0, 2);
	SQUAD_JOIN(&uVar0, &bLocal_1554);
	uVar0 = Function_353(&iLocal_4 + 2872[3], Function_58(), 4294967295, 1, 4294967295);
	TASK_FACE_ACTOR(&uVar0, &Global_54076, 1, 3212836864);
	TASK_PRIORITY_SET(&uVar0, 2);
	SQUAD_JOIN(&uVar0, &bLocal_1554);
	uVar0 = Function_355(&iLocal_4 + 2872[4], Function_58(), 4294967295, 1, 4294967295);
	TASK_GO_NEAR_OBJECT(&uVar0, &iLocal_4 + 2944[0], 1.0f, 1, 1, 1);
	TASK_PRIORITY_SET(&uVar0, 3);
	SQUAD_JOIN(&uVar0, &bLocal_1554);
	uVar0 = Function_355(&iLocal_4 + 2872[5], Function_58(), 4294967295, 1, 4294967295);
	TASK_GO_NEAR_OBJECT(&uVar0, &iLocal_4 + 2944[1], 1.0f, 1, 1, 1);
	TASK_PRIORITY_SET(&uVar0, 3);
	SQUAD_JOIN(&uVar0, &bLocal_1554);
	uVar0 = Function_354(&iLocal_4 + 2872[6], Function_58(), 4294967295, 1, 4294967295);
	TASK_GO_NEAR_OBJECT(&uVar0, &iLocal_4 + 2944[2], 1.0f, 1, 1, 1);
	TASK_PRIORITY_SET(&uVar0, 3);
	SQUAD_JOIN(&uVar0, &bLocal_1554);
	Function_388(&bLocal_1554);
	Function_449(&bLocal_1554, &iLocal_1257);
	Function_448(&bLocal_1554);
	return;
}

void Function_466() //Position: 0x19BCC / 105420
{
	int iVar0;
	
	bLocal_1355 = TASK_SEQUENCE_OPEN();
	Function_199(&iLocal_4 + 2568[1]);
	iVar0 = Function_199(&iLocal_4 + 2568[1]);
	if (!Function_467(&iLocal_4 + 816[02]))
	{
		TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3552, 1, 1, 0, 1, false);
		TASK_GO_TO_COORD_NONSTOP(0, &iVar0, 1, 9,35f);
	}
	TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_CLEAR(&iLocal_4 + 816[02]);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 816[02], bLocal_1355);
	TASK_PRIORITY_SET(&iLocal_4 + 816[02], 2);
	AI_ACTOR_FORCE_SPEED(&iLocal_4 + 816[02], true);
	TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
	TASK_CLEAR(&iLocal_4 + 816[12]);
	TASK_GO_TO_COORD_NONSTOP(&iLocal_4 + 816[12], &iVar0, 1, 6.0f);
	TASK_PRIORITY_SET(&iLocal_4 + 816[12], 2);
	return;
}

bool Function_467(int iParam0) //Position: 0x19C83 / 105603
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (GET_ACTOR_HEALTH(&iParam0) > GET_ACTOR_MAX_HEALTH(&iParam0))
	{
		return 1;
	}
	return 0;
}

void Function_468() //Position: 0x19CA8 / 105640
{
	Function_469();
	TASK_STAND_STILL(&iLocal_4 + 816[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 816[02], true);
	Function_351(&iLocal_4 + 816[02]);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_4 + 816[02]);
	Function_283(&iLocal_4 + 816[12], 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	TASK_STAND_STILL(&iLocal_4 + 816[12], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 816[12], true);
	Function_351(&iLocal_4 + 816[12]);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_4 + 816[12]);
	return;
}

void Function_469() //Position: 0x19D38 / 105784
{
	(&iLocal_4 + 856) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S3_PreGas"));
	*(&iLocal_4 + 816[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Zomb_S3_PG_F", 1211, Vector(-4412,189f, 9,424933f, 4378,62f), Vector(-0,003816543f, 48,72021f, -0,5987498f));
	SQUAD_JOIN(&iLocal_4 + 816[02], &iLocal_4 + 856);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 816[02], false);
	TASK_STAND_STILL(&iLocal_4 + 816[02], -1.0f, 0, 0);
	*(&iLocal_4 + 816[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Zomb_S3_PG_W", 297, Vector(-4416,734f, 11,05062f, 4375,079f), Vector(-0,002539429f, 7,463752f, -0,5962116f));
	SQUAD_JOIN(&iLocal_4 + 816[12], &iLocal_4 + 856);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 816[12], false);
	TASK_STAND_STILL(&iLocal_4 + 816[12], -1.0f, 0, 0);
	return;
}

void Function_470(var uParam0) //Position: 0x19E3C / 106044
{
	TASK_CLEAR(&uLocal_1233);
	bLocal_1355 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_OBJECT(0, &uParam0, 0,5f, 1, 0, 1);
	TASK_FACE_ACTOR(false, &Global_54076, 1, 3212836864);
	TASK_SEQUENCE_CLOSE();
	AI_GOAL_LOOK_AT_ACTOR(&uLocal_1233, &Global_54076, 0, 1065353216, 3212836864, 3212836864, 0);
	iLocal_1616 = 1;
	TASK_SEQUENCE_PERFORM(&uLocal_1233, bLocal_1355);
	TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
	return;
}

void Function_471() //Position: 0x19EA0 / 106144
{
	Function_440();
	Function_435();
	Function_367();
	Function_433();
	Function_472();
	switch (iLocal_1208)
	{
		case 0x00000007:
			Function_432();
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_1233, &Global_54076, 15.0f, 3.0f, 10.0f);
			iLocal_1613 = 1;
			iLocal_1208 = 10;
			break;
		
		case 0x00000008:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1552[16]))
			{
				Function_470(&iLocal_4 + 2568[4]);
				iLocal_1208 = 9;
			}
			break;
		
		case 0x00000009:
			if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1540) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1542) >= 0) && Function_461(&iLocal_1245, 0)) && Function_461(&iLocal_1247, 0))
			{
				Function_432();
				iLocal_1208 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_366(0x420c0000, 0x425c0000);
			break;
	}
	return;
}

void Function_472() //Position: 0x19F66 / 106342
{
	if (iLocal_1635)
	{
		if (ACTORS_IN_RANGE(&Global_54076, &uLocal_1233, 7.0f))
		{
			Function_473();
			iLocal_1635 = 0;
			LOG_ERROR("Playing line..");
		}
	}
	return;
}

void Function_473() //Position: 0x19F9C / 106396
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_ToxicZombs", "Z03_ToxicZombs", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474() //Position: 0x19FE1 / 106465
{
	Function_385(&uLocal_906, 8, &iLocal_4 + 2568[3], 0, 3, 0, 1, 3212836864);
	return;
}

void Function_475() //Position: 0x1A003 / 106499
{
	int iVar0;
	
	iVar0 = Function_355(&iLocal_4 + 2648[0], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1540);
	iVar0 = Function_355(&iLocal_4 + 2648[1], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1540);
	Function_450(&bLocal_1540, 2.0f, 2,1f);
	iVar0 = Function_355(&iLocal_4 + 2680[0], Function_58(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1540);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	iVar0 = Function_352(&iLocal_4 + 2680[2], Function_58(), 4294967295, 1, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1540);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	Function_388(&bLocal_1540);
	Function_449(&bLocal_1540, &iLocal_1257);
	iLocal_1245 = Function_451(&iLocal_4 + 2720[1], &iLocal_4 + 2720[0], 0, &iLocal_4 + 1552[9], Function_58(), 3, 0, 1253);
	Function_351(&iLocal_1245);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_1245);
	iLocal_1247 = Function_451(&iLocal_4 + 2720[3], &iLocal_4 + 2720[2], 1, &iLocal_4 + 1552[8], Function_58(), 2, 0, 1252);
	Function_351(&iLocal_1247);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_1247);
	iLocal_1241 = &iLocal_1247;
	iVar0 = Function_451(&iLocal_4 + 2768[1], &iLocal_4 + 2768[0], 1, &iLocal_4 + 1552[12], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1542);
	Function_390(&iVar0, 3.0f, 4.0f);
	Function_351(&iVar0);
	iVar0 = Function_451(&iLocal_4 + 2768[3], &iLocal_4 + 2768[2], 1, &iLocal_4 + 1552[13], Function_58(), 3, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1542);
	Function_390(&iVar0, 0.0f, 0,1f);
	Function_351(&iVar0);
	iVar0 = Function_451(&iLocal_4 + 2768[5], &iLocal_4 + 2768[4], 0, &iLocal_4 + 1552[14], Function_58(), 1, 0, 393);
	SQUAD_JOIN(&iVar0, &bLocal_1542);
	Function_390(&iVar0, 10.0f, 10.0f);
	Function_351(&iVar0);
	Function_449(&bLocal_1542, &iLocal_1257);
	return;
}

int Function_476() //Position: 0x1A218 / 107032
{
	Function_270(&iLocal_4 + 288, 1211, 2, 0);
	Function_270(&iLocal_4 + 288, 297, 2, 0);
	Function_270(&iLocal_4 + 288, 1210, 2, 0);
	if (Function_261(&iLocal_4 + 288))
	{
		return 1;
	}
	return 0;
}

void Function_477() //Position: 0x1A256 / 107094
{
	if (iLocal_1011 < 4 && iLocal_1011 > 105)
	{
		Function_400();
		Function_399();
	}
	switch (iLocal_1011)
	{
		case 0x00000000:
			Function_332(0);
			if (iLocal_1169[1] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_394();
				Function_397();
				Function_230(1, 0);
				Function_229(0, 1);
				Function_188(&Global_54076, &iLocal_4 + 2048[4], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 1;
			}
			else
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && Function_503()) && Function_393())
			{
				Function_199(&iLocal_4 + 2272[1]);
				ENABLE_GAME_CAMERA_FOCUS(Function_199(&iLocal_4 + 2272[1]), 0.0f, 0, 1, 1, 0);
				Function_310(1);
				Function_188(&uLocal_1233, &iLocal_4 + 2048[5], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000004:
			Function_198(bLocal_1010);
			Function_374(StackVal, Function_198(bLocal_1010), bLocal_1010, Global_46850[0], Function_201(bLocal_1010), 0);
			Function_245(1.0f);
			STREAMING_UNLOAD_BOUNDS();
			Function_476();
			Function_327(&uLocal_1196, 7, 0, 4294967295, 4294967295);
			if (Function_250(&iLocal_1598))
			{
				RESET_ANIM_SET_FOR_ACTOR(&uLocal_1233, 1);
				AI_GOAL_AIM_CLEAR(&uLocal_1233);
				Function_253(&iLocal_1598);
				Function_362(&iLocal_1598);
				LOG_ERROR("This worked...");
			}
			Function_501();
			Function_500();
			Function_307();
			iLocal_1634 = 0;
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_ACTOR_HEALTH(&uLocal_1233, GET_ACTOR_MAX_HEALTH(&uLocal_1233));
			iLocal_1011 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_1208 = 3;
				uLocal_1265 = &iLocal_4 + 3576;
				if (iLocal_1169[1] == 0)
				{
					Function_444();
				}
				Function_364(&iLocal_4 + 2224[0]);
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2176[0], 330, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_4 + 2176[0]), "Zomb03_Altar");
				iLocal_1011 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_478())
			{
				iLocal_1011 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_1169[2] = 1;
				Function_173();
				TASK_STAND_STILL(&iLocal_1235, -1.0f, 0, 0);
				bLocal_1010 = 3;
				iLocal_1011 = 0;
			}
			break;
	}
	return;
}

bool Function_478() //Position: 0x1A483 / 107651
{
	Function_494();
	Function_484();
	Function_483();
	Function_482();
	switch (iLocal_1204)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_1562) <= 8.0f)
			{
				Function_481();
				Function_27("Zomb03_ReturnMaskObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				iLocal_1204 = 1;
			}
			break;
		
		case 0x00000001:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_1562) <= 8.0f)
			{
				if ((Function_349() % 2) == 1)
				{
					Function_480();
				}
				else
				{
					Function_479();
				}
				iLocal_1204 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_425(&iLocal_4 + 1352[11], 0, 0, 0))
			{
				Function_327(&uLocal_1196, 11, 0, 4294967295, 4294967295);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_479() //Position: 0x1A542 / 107842
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_MaidnBanterCrypt2_v1_AA1", "Z03_MaidnBanterCrypt2_v1_AA1", false, 2, 0, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_MaidnBanterCrypt2_v1_AA2", "Z03_MaidnBanterCrypt2_v1_AA2", false, 2, 0, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_480() //Position: 0x1A5EA / 108010
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_MaidnBanterCrypt_v1_AA1", "Z03_MaidnBanterCrypt_v1_AA1", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_MaidnBanterCrypt_v1_AA2", "Z03_MaidnBanterCrypt_v1_AA2", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_481() //Position: 0x1A68E / 108174
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_EnterCrypt", "Z03_EnterCrypt", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482() //Position: 0x1A6D3 / 108243
{
	if (!IS_VOLUME_VALID(&iLocal_4 + 1352[3]) && !IS_VOLUME_VALID(&iLocal_4 + 1352[5]))
	{
		if (((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1534) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1536) >= 0) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1538) >= 0) && Function_461(&iLocal_1243, 0))
		{
			if (!iLocal_1629)
			{
				Function_327(&uLocal_1196, 7, 0, 4294967295, 4294967295);
				iLocal_1629 = 1;
			}
		}
	}
	return;
}

void Function_483() //Position: 0x1A735 / 108341
{
	if (IS_VOLUME_VALID(&iLocal_4 + 1352[21]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1352[21]) || Function_422(&iLocal_4 + 776, &Global_54076))
		{
			Function_327(&uLocal_1196, 11, 0, 4294967295, 4294967295);
			DESTROY_VOLUME(&iLocal_4 + 1352[21]);
		}
	}
	return;
}

void Function_484() //Position: 0x1A785 / 108421
{
	Function_440();
	if (!ACTOR_HAS_WEAPON(&uLocal_1233, 33))
	{
		if (IS_ACTOR_IN_VOLUME(&uLocal_1233, &iLocal_4 + 1240[0]))
		{
			bLocal_1632 = true;
		}
	}
	if (bLocal_1632)
	{
		Function_367();
	}
	Function_435();
	Function_491();
	Function_489();
	Function_487();
	Function_485();
	Function_433();
	switch (iLocal_1208)
	{
		case 0x00000003:
			Function_432();
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_1233, &Global_54076, 15.0f, 3.0f, 10.0f);
			iLocal_1613 = 1;
			iLocal_1208 = 6;
			break;
		
		case 0x00000004:
			if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 776) < 0)
			{
				Function_432();
				iLocal_1208 = 6;
			}
			break;
		
		case 0x00000005:
			if ((SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1534) >= 0 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1536) >= 2) && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1538) >= 0)
			{
				Function_432();
				iLocal_1208 = 6;
			}
			break;
		
		case 0x00000006:
			Function_366(0x420c0000, 0x425c0000);
			if (Function_425(&iLocal_4 + 1152[0], 0, 0, 0))
			{
				Function_470(&iLocal_4 + 2272[2]);
				iLocal_1208 = 4;
			}
			break;
	}
	return;
}

void Function_485() //Position: 0x1A884 / 108676
{
	if (Function_425(&iLocal_4 + 1552[7], 0, 0, 0))
	{
		if (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&iLocal_4 + 776) >= 0)
		{
			if ((Function_349() % 2) == 1)
			{
				Function_486();
			}
			else
			{
				Function_486();
			}
		}
	}
	return;
}

void Function_486() //Position: 0x1A8BA / 108730
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_GlowingEyesBant_v1_AA", "Z03_GlowingEyesBant_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_GlowingEyesBant_v1_AB", "Z03_GlowingEyesBant_v1_AB", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_487() //Position: 0x1A956 / 108886
{
	if (!iLocal_1618)
	{
		if (!IS_OBJECT_VALID(&uLocal_1269))
		{
			Function_488();
			iLocal_1618 = 1;
		}
	}
	return;
}

void Function_488() //Position: 0x1A975 / 108917
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_piksAmmo1stTime", "Z03_piksAmmo1stTime", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_489() //Position: 0x1A9C4 / 108996
{
	if (Function_425(&iLocal_4 + 1352[16], 0, 0, 0))
	{
		Function_490();
	}
	return;
}

void Function_490() //Position: 0x1A9DF / 109023
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_NotHarmedBant_v1_AA", "Z03_NotHarmedBant_v1_AA", true, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_NotHarmedBant_v1_AB", "Z03_NotHarmedBant_v1_AB", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Z03_NotHarmedBant_v1_AC", "Z03_NotHarmedBant_v1_AC", true, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_491() //Position: 0x1AAB0 / 109232
{
	if (Function_425(&iLocal_4 + 1352[15], 0, 0, 0))
	{
		Function_327(&uLocal_1196, 11, 0, 4294967295, 4294967295);
		if ((Function_349() % 2) == 1)
		{
			Function_493();
		}
		else
		{
			Function_492();
		}
	}
	return;
}

void Function_492() //Position: 0x1AAE5 / 109285
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_ZombUniformBant_v2_AA", "Z03_ZombUniformBant_v2_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Z03_ZombUniformBant_v2_AB", "Z03_ZombUniformBant_v2_AB", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_493() //Position: 0x1AB81 / 109441
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_ZombUniformBant_v1_AA", "Z03_ZombUniformBant_v1_AA", false, 2, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Z03_ZombUniformBant_v1_AB", "Z03_ZombUniformBant_v1_AB", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_494() //Position: 0x1AC1D / 109597
{
	var uVar0;
	var uVar2;
	var uVar4;
	var uVar6;
	var uVar8;
	
	Function_441(&iLocal_1257);
	Function_368(&bLocal_1534, 4294967295);
	Function_368(&bLocal_1536, 4294967295);
	Function_368(&bLocal_1538, 4294967295);
	if ((!Function_430(&bLocal_1534, 0) || !Function_430(&bLocal_1536, 0)) || !Function_430(&bLocal_1538, 0))
	{
		if (!IS_VOLUME_VALID(&iLocal_4 + 1352[3]))
		{
			Function_428();
		}
	}
	if (Function_425(&iLocal_4 + 1352[0], 0, 0, 0))
	{
		Function_499();
		Function_498();
	}
	if (Function_425(&iLocal_4 + 1352[3], 0, 0, 0))
	{
		Function_199(&iLocal_4 + 2320[0]);
		uVar0 = Function_199(&iLocal_4 + 2320[0]);
		Function_373(&bLocal_1534);
		SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1534, false, 2, 4294967295);
		TASK_GO_TO_COORD_NONSTOP(0, &uVar0, 1, 7.0f);
		if (SQUAD_IS_VALID(&bLocal_1534))
		{
			DECOR_SET_BOOL(&bLocal_1534, "bCanWakeUp", true);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1352[4]))
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1352[4]) || SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1534) > 4) || Function_422(&bLocal_1538, &Global_54076))
		{
			if (!IS_VOLUME_VALID(&iLocal_4 + 1352[3]))
			{
				if (SQUAD_IS_VALID(&bLocal_1538))
				{
					DECOR_SET_BOOL(&bLocal_1538, "bCanWakeUp", true);
				}
				Function_372(&bLocal_1538, &Global_54076, 0);
				Function_199(&iLocal_4 + 2320[0]);
				uVar2 = Function_199(&iLocal_4 + 2320[0]);
				Function_373(&bLocal_1538);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1538, false, 2, 4294967295);
				TASK_GO_TO_COORD_NONSTOP(0, &uVar2, 1, 7.0f);
				Function_470(&iLocal_4 + 2272[3]);
				iLocal_1208 = 5;
				DESTROY_VOLUME(&iLocal_4 + 1352[4]);
			}
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1352[6]))
	{
		if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1352[6]) || (SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1534) >= 2 && SQUAD_GET_NUM_NOT_ELIMINATED_ACTORS(&bLocal_1538) >= 2)) || Function_422(&bLocal_1536, &Global_54076))
		{
			if (!IS_VOLUME_VALID(&iLocal_4 + 1352[3]))
			{
				if (SQUAD_IS_VALID(&bLocal_1536))
				{
					DECOR_SET_BOOL(&bLocal_1536, "bCanWakeUp", true);
				}
				Function_372(&bLocal_1536, &Global_54076, 0);
				Function_199(&iLocal_4 + 2320[0]);
				uVar4 = Function_199(&iLocal_4 + 2320[0]);
				Function_373(&bLocal_1536);
				SQUAD_GOAL_ADD_GENERAL_TASK(&bLocal_1536, false, 2, 4294967295);
				TASK_GO_TO_COORD_NONSTOP(0, &uVar4, 1, 7.0f);
				DESTROY_VOLUME(&iLocal_4 + 1352[6]);
			}
		}
	}
	if (Function_425(&iLocal_4 + 1352[5], 0, 0, 0))
	{
		Function_496();
		Function_495();
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1352[12]))
	{
		if (Function_425(&iLocal_4 + 1352[12], 0, 0, 0) || Function_467(&iLocal_1243))
		{
			TASK_CLEAR(&iLocal_1243);
			MEMORY_IDENTIFY(&iLocal_1243, &Global_54076);
			TASK_MELEE_ATTACK(&iLocal_1243, &Global_54076, -1.0f);
		}
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1352[7]))
	{
		if (IS_ACTOR_VALID(&iLocal_4 + 784[02]))
		{
			if ((IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1352[7]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1352[8])) || Function_467(&iLocal_4 + 784[02]))
			{
				bLocal_1355 = TASK_SEQUENCE_OPEN();
				Function_199(&iLocal_4 + 2320[1]);
				uVar6 = Function_199(&iLocal_4 + 2320[1]);
				if (!Function_467(&iLocal_4 + 784[02]))
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3544, 1, 1, 0, 1, false);
					TASK_GO_TO_COORD_NONSTOP(0, &uVar6, 1, 5,9f);
				}
				TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
				TASK_SEQUENCE_CLOSE();
				TASK_CLEAR(&iLocal_4 + 784[02]);
				TASK_SEQUENCE_PERFORM(&iLocal_4 + 784[02], bLocal_1355);
				TASK_PRIORITY_SET(&iLocal_4 + 784[02], 2);
				AI_ACTOR_FORCE_SPEED(&iLocal_4 + 784[02], true);
				TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
				DESTROY_VOLUME(&iLocal_4 + 1352[7]);
			}
		}
	}
	if (Function_425(&iLocal_4 + 1352[10], 0, 0, 0) || Function_467(&iLocal_1239))
	{
		if (IS_ACTOR_VALID(&iLocal_1239))
		{
			Function_297(&Global_54076);
			uVar8 = Function_297(&Global_54076);
			MEMORY_REPORT_POSITION(&iLocal_1239, &Global_54076, &uVar8);
			Function_285(&iLocal_1239, 4294967295, 1);
		}
	}
	return;
}

void Function_495() //Position: 0x1AFD9 / 110553
{
	iLocal_1243 = Function_352(&iLocal_4 + 2320[2], Function_58(), 4294967295, 1, 4294967295);
	TASK_STAND_STILL(&iLocal_1243, -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_1243, true);
	Function_351(&iLocal_1243);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_1243);
	return;
}

void Function_496() //Position: 0x1B01A / 110618
{
	Function_497();
	TASK_STAND_STILL(&iLocal_4 + 784[02], -1.0f, 0, 0);
	TASK_PRIORITY_SET(&iLocal_4 + 784[02], true);
	Function_351(&iLocal_4 + 784[02]);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_4 + 784[02]);
	iLocal_1239 = Function_355(&iLocal_4 + 2544[0], Function_58(), 0, 0, 391);
	Function_351(&iLocal_1239);
	ADD_ACTORSET_MEMBER(&iLocal_1257, &iLocal_1239);
	return;
}

void Function_497() //Position: 0x1B087 / 110727
{
	*(&iLocal_4 + 808) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S2_Pillar"));
	*(&iLocal_4 + 784[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Zomb_S2_Pillar_0", 1210, Vector(-4350,922f, 22,68301f, 4368,044f), Vector(-0,006797275f, -68,25787f, -0,589568f));
	SQUAD_JOIN(&iLocal_4 + 784[02], &iLocal_4 + 808);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 784[02], false);
	return;
}

void Function_498() //Position: 0x1B111 / 110865
{
	int iVar0;
	
	iVar0 = Function_355(&iLocal_4 + 2360[0], "z_sq_0_0", 1, 0, 4294967295);
	Function_351(&iVar0);
	SQUAD_JOIN(&iVar0, &bLocal_1534);
	iVar0 = Function_355(&iLocal_4 + 2360[1], "z_sq_0_1", 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1534);
	Function_351(&iVar0);
	iVar0 = Function_355(&iLocal_4 + 2360[2], "z_sq_0_2", 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1534);
	Function_351(&iVar0);
	Function_450(&bLocal_1534, 1.0f, 3.0f);
	iVar0 = Function_355(&iLocal_4 + 2360[5], "z_sq_0_3", 4294967295, 1, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1534);
	TASK_STAND_STILL(&iVar0, -1.0f, 0, 0);
	Function_351(&iVar0);
	Function_449(&bLocal_1534, &iLocal_1257);
	iVar0 = Function_451(&iLocal_4 + 2424[1], &iLocal_4 + 2424[0], 0, &iLocal_4 + 1352[17], "z_sq_1_0", 2, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1538);
	iLocal_1241 = &iVar0;
	Function_390(&iVar0, 0.0f, 0.0f);
	Function_351(&iVar0);
	iVar0 = Function_355(&iLocal_4 + 2504[0], "z_sq_1_1", 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1538);
	Function_390(&iVar0, 2.0f, 2.0f);
	Function_351(&iVar0);
	iVar0 = Function_355(&iLocal_4 + 2504[1], "z_sq_1_2", 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1538);
	Function_390(&iVar0, 3,3f, 3,5f);
	Function_351(&iVar0);
	Function_449(&bLocal_1538, &iLocal_1257);
	iVar0 = Function_451(&iLocal_4 + 2424[4], &iLocal_4 + 2424[6], 1, &iLocal_4 + 1352[19], Function_58(), 2, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1536);
	Function_390(&iVar0, 0.0f, 0,1f);
	Function_351(&iVar0);
	iVar0 = Function_451(&iLocal_4 + 2424[5], &iLocal_4 + 2424[7], 0, &iLocal_4 + 1352[20], Function_58(), 2, 2, 1210);
	SQUAD_JOIN(&iVar0, &bLocal_1536);
	Function_390(&iVar0, 3.0f, 4.0f);
	Function_351(&iVar0);
	iVar0 = Function_352(&iLocal_4 + 2504[2], Function_58(), 1, 0, 4294967295);
	SQUAD_JOIN(&iVar0, &bLocal_1536);
	Function_390(&iVar0, 1,75f, 2,25f);
	Function_351(&iVar0);
	Function_449(&bLocal_1536, &iLocal_1257);
	return;
}

void Function_499() //Position: 0x1B37D / 111485
{
	if (IS_ACTOR_VALID(&iLocal_4 + 472[02]))
	{
		DESTROY_ACTOR(&iLocal_4 + 472[02]);
	}
	if (IS_ACTOR_VALID(&iLocal_4 + 504[02]))
	{
		DESTROY_ACTOR(&iLocal_4 + 504[02]);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 576))
	{
		Function_177(&iLocal_4 + 576);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 624))
	{
		Function_177(&iLocal_4 + 624);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 656))
	{
		Function_177(&iLocal_4 + 656);
	}
	if (SQUAD_IS_VALID(&iLocal_4 + 688))
	{
		Function_177(&iLocal_4 + 688);
	}
	return;
}

void Function_500() //Position: 0x1B409 / 111625
{
	uLocal_1269 = Function_385(&uLocal_906, 18, &iLocal_4 + 2272[0], 0, 4, 0, 1, 3212836864);
	return;
}

void Function_501() //Position: 0x1B42E / 111662
{
	Function_502();
	Function_282(&iLocal_4 + 776, 1254, 4294967295, 4294967295, 4294967295, 1, 1, 1);
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&iLocal_4 + 776, bLocal_904);
	Function_280(&iLocal_4 + 776, &iLocal_4 + 1352[1], 1, &iLocal_4 + 1240[9], 0);
	Function_388(&iLocal_4 + 776);
	Function_449(&iLocal_4 + 776, &iLocal_1257);
	return;
}

void Function_502() //Position: 0x1B489 / 111753
{
	*(&iLocal_4 + 776) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zomb_S2_Lobby"));
	*(&iLocal_4 + 720[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Zomb_S2_Lobby_0", 321, Vector(-4356,191f, 28,98228f, 4316,015f), Vector(0.0f, 242,9447f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 720[02], &iLocal_4 + 776);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 720[02], false);
	*(&iLocal_4 + 720[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Zomb_S2_Lobby_1", 324, Vector(-4355,442f, 28,98228f, 4311,047f), Vector(0.0f, 242,9447f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 720[12], &iLocal_4 + 776);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 720[12], false);
	*(&iLocal_4 + 720[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "Zomb_S2_Lobby_2", 320, Vector(-4360,128f, 28,98228f, 4316,932f), Vector(0.0f, 314,7311f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 720[22], &iLocal_4 + 776);
	SET_ACTOR_UPDATE_PRIORITY(&iLocal_4 + 720[22], false);
	return;
}

int Function_503() //Position: 0x1B5BF / 112063
{
	Function_270(&iLocal_4 + 216, 321, 2, 0);
	Function_270(&iLocal_4 + 216, 324, 2, 0);
	Function_270(&iLocal_4 + 216, 320, 2, 0);
	Function_270(&iLocal_4 + 216, 1210, 2, 0);
	if (Function_261(&iLocal_4 + 216))
	{
		return 1;
	}
	return 0;
}

void Function_504() //Position: 0x1B606 / 112134
{
	if (iLocal_1011 < 4 && iLocal_1011 > 105)
	{
		Function_400();
		Function_399();
	}
	switch (iLocal_1011)
	{
		case 0x00000000:
			Function_332(0);
			if (iLocal_1169[0] == 0)
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
				SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
				FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
				Function_394();
				Function_188(&Global_54076, &iLocal_4 + 2048[2], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 1;
			}
			else
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 2;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_517())
			{
				Function_310(0);
				Function_253(&iLocal_1562);
				iLocal_1011 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_382(StackVal, StackVal, StackVal, StackVal, StackVal, Local_908, 1))
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 3;
			}
			else
			{
				Function_188(&Global_54076, &iLocal_4 + 2048[2], 0, 1, 1);
				Function_188(&uLocal_1233, &iLocal_4 + 2048[3], 1, 1, 1);
				Function_279();
				Function_304();
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				ACTOR_POP_NEXT_GAIT(&Global_54076, 1, false);
				SIMULATE_PLAYER_INPUT_GAIT(0, 1, 1,35f, 0);
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000003:
			if (Function_241("$/cutscene/ESCALERA_1_PT_D_CS/ESCALERA_1_PT_D_CS", &iLocal_998, &Local_908, &bLocal_1010, 80940, 77874, 77559, 72736, 72299, 46937, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000004:
			Function_198(bLocal_1010);
			Function_374(StackVal, Function_198(bLocal_1010), bLocal_1010, Global_46850[0], Function_201(bLocal_1010), 0);
			Function_245(2.0f);
			Function_327(&uLocal_1196, 6, 0, 4294967295, 4294967295);
			Function_516();
			Function_230(1, 0);
			Function_229(0, 1);
			Function_307();
			Function_503();
			Function_393();
			STREAMING_UNLOAD_BOUNDS();
			Function_515();
			iLocal_1011 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_444();
				ADD_BLIP_FOR_OBJECT(&iLocal_4 + 2224[0], 330, 0f, 2, 0);
				Function_253(&iLocal_1562);
				iLocal_1011 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_505())
			{
				iLocal_1011 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_1169[1] = 1;
				Function_174();
				bLocal_1010 = 2;
				iLocal_1011 = 0;
			}
			break;
	}
	return;
}

bool Function_505() //Position: 0x1B859 / 112729
{
	Function_514();
	Function_510();
	Function_508();
	switch (iLocal_1203)
	{
		case 0x00000000:
			if (!IS_SCRIPTED_CONVERSATION_ONGOING() || Function_248(&iLocal_1562) <= 8.0f)
			{
				Function_27("Zomb03_ToCatacombsObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				if ((Function_349() % 2) == 0)
				{
					Function_507();
				}
				else
				{
					Function_506();
				}
				iLocal_1203 = 1;
			}
			break;
		
		case 0x00000001:
			if (!Function_420())
			{
				iLocal_1203 = 2;
			}
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1240[0]))
			{
				Function_364(&iLocal_4 + 2224[0]);
				return 1;
			}
			break;
	}
	return 0;
}

void Function_506() //Position: 0x1B908 / 112904
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_OffCrypt_v2_AA", "Z03_OffCrypt_v2_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_OffCrypt_v2_AB", "Z03_OffCrypt_v2_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Z03_OffCrypt_v2_AC", "Z03_OffCrypt_v2_AC", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_507() //Position: 0x1B9BB / 113083
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "Z03_Off2Crypt_v1_AA", "Z03_Off2Crypt_v1_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "Z03_Off2Crypt_v1_AB", "Z03_Off2Crypt_v1_AB", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "Z03_Off2Crypt_v1_AC", "Z03_Off2Crypt_v1_AC", true, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_508() //Position: 0x1BA74 / 113268
{
	if (!Function_250(&iLocal_1586))
	{
		Function_253(&iLocal_1586);
	}
	else if (Function_248(&iLocal_1586) <= 35.0f)
	{
		Function_509();
		Function_253(&iLocal_1586);
	}
	else if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1240[9]))
	{
		Function_253(&iLocal_1586);
	}
	return;
}

void Function_509() //Position: 0x1BAC2 / 113346
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_JonNoCrypt", "Z03_JonNoCrypt", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_510() //Position: 0x1BB07 / 113415
{
	Function_440();
	Function_435();
	Function_366(0x420c0000, 0x425c0000);
	Function_511();
	switch (iLocal_1208)
	{
		case 0x00000000:
			TASK_CLEAR(&uLocal_1233);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(&uLocal_1233, &Global_54076, 3.0f, 2);
			iLocal_1616 = 1;
			ACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&uLocal_1233, &Global_54076, 15.0f, 5.0f, 10.0f);
			iLocal_1613 = 1;
			iLocal_1208 = 1;
			break;
		
		case 0x00000002:
			if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1240[9]))
			{
				TASK_CLEAR(&uLocal_1233);
				TASK_FOLLOW_ACTOR(&uLocal_1233, &Global_54076);
				iLocal_1208 = 1;
			}
			break;
		
		case 0x00000001:
			Function_366(0x420c0000, 0x425c0000);
			break;
	}
	return;
}

void Function_511() //Position: 0x1BBB4 / 113588
{
	if (Function_425(&iLocal_4 + 1240[11], 0, 0, 0))
	{
		iLocal_1634 = 1;
	}
	if (iLocal_1634)
	{
		if (ACTORS_IN_RANGE(&Global_54076, &uLocal_1233, 7.0f))
		{
			Function_513(&iLocal_4 + 696[02]);
			Function_512();
			Function_253(&iLocal_1598);
			iLocal_1634 = 0;
		}
	}
	if (Function_250(&iLocal_1598))
	{
		if (Function_248(&iLocal_1598) <= 4.0f)
		{
			RESET_ANIM_SET_FOR_ACTOR(&uLocal_1233, 1);
			AI_GOAL_AIM_CLEAR(&uLocal_1233);
			Function_253(&iLocal_1598);
			Function_362(&iLocal_1598);
		}
	}
	return;
}

void Function_512() //Position: 0x1BC2D / 113709
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_ZombieBulls", "Z03_ZombieBulls", false, 1, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513(var uParam0) //Position: 0x1BC74 / 113780
{
	if (!ACTOR_HAS_ANIM_SET(&uLocal_1233, "aiming_point"))
	{
		RESET_ANIM_SET_FOR_ACTOR(&uLocal_1233, 1);
		SET_ANIM_SET_FOR_ACTOR(&uLocal_1233, "aiming_point", 0);
	}
	SET_ACTION_NODE_FOR_ACTOR(&uLocal_1233, "aiming_point");
	AI_GOAL_AIM_AT_OBJECT(&uLocal_1233, &uParam0, 0);
	return;
}

void Function_514() //Position: 0x1BCD6 / 113878
{
	if (IS_VOLUME_VALID(&iLocal_4 + 1240[7]))
	{
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1240[7]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1240[8]))
		{
			Function_373(&iLocal_4 + 688);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_4 + 688, false, 1, 4294967295);
			TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
			DESTROY_VOLUME(&iLocal_4 + 1240[7]);
			DESTROY_VOLUME(&iLocal_4 + 1240[8]);
		}
	}
	return;
}

void Function_515() //Position: 0x1BD48 / 113992
{
	iLocal_1208 = 0;
	uLocal_1265 = &iLocal_4 + 3568;
	SET_ACTOR_HEALTH(&uLocal_1233, GET_ACTOR_MAX_HEALTH(&uLocal_1233));
	return;
}

void Function_516() //Position: 0x1BD6A / 114026
{
	var uVar0;
	
	bLocal_1355 = TASK_SEQUENCE_OPEN();
	Function_199(&iLocal_4 + 2248[0]);
	uVar0 = Function_199(&iLocal_4 + 2248[0]);
	TASK_FOLLOW_PATH_FROM_NEAREST_POINT(false, &iLocal_4 + 3536, 1, 1, 0, 1, false);
	TASK_GO_TO_COORD_NONSTOP(0, &uVar0, 1, 4,25f);
	TASK_MELEE_ATTACK(0, &Global_54076, -1.0f);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 472[02], bLocal_1355);
	AI_ACTOR_FORCE_SPEED(&iLocal_4 + 472[02], true);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 472[02], &iLocal_4 + 1240[9], 1, 1);
	SET_ACTOR_VOLUME_PARAMETERS(&iLocal_4 + 472[02], true, 1);
	TASK_PRIORITY_SET(&iLocal_4 + 472[02], 3);
	TASK_SEQUENCE_PERFORM(&iLocal_4 + 504[02], bLocal_1355);
	AI_ACTOR_FORCE_SPEED(&iLocal_4 + 504[02], true);
	SET_ACTOR_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 504[02], &iLocal_4 + 1240[9], 1, 1);
	SET_ACTOR_VOLUME_PARAMETERS(&iLocal_4 + 504[02], true, 1);
	TASK_PRIORITY_SET(&iLocal_4 + 504[02], 3);
	TASK_SEQUENCE_RELEASE(bLocal_1355, 1);
	return;
}

int Function_517() //Position: 0x1BE51 / 114257
{
	Function_270(&iLocal_4 + 48, 1238, 2, 0);
	Function_270(&iLocal_4 + 48, 319, 2, 0);
	Function_270(&iLocal_4 + 48, 239, 2, 0);
	Function_270(&iLocal_4 + 48, 295, 2, 0);
	Function_270(&iLocal_4 + 48, 285, 2, 0);
	Function_270(&iLocal_4 + 48, 293, 2, 0);
	Function_270(&iLocal_4 + 48, 257, 2, 0);
	Function_270(&iLocal_4 + 48, 279, 2, 0);
	Function_270(&iLocal_4 + 48, 301, 2, 0);
	Function_270(&iLocal_4 + 48, 1243, 2, 0);
	if (Function_261(&iLocal_4 + 48))
	{
		return 1;
	}
	return 0;
}

void Function_518() //Position: 0x1BEE5 / 114405
{
	if (iLocal_1011 < 4 && iLocal_1011 > 105)
	{
		Function_199(&iLocal_4 + 2048[0]);
		Function_403(StackVal, "$/cutscene/ESCALERA_1_PT_D_CS/ESCALERA_1_PT_D_CS", &uLocal_1658, Function_199(&iLocal_4 + 2048[0]), 0, 0x42960000, 0x43160000, 2, 1, 2, 2, 0, 1);
		Function_400();
		Function_399();
	}
	switch (iLocal_1011)
	{
		case 0x00000000:
			Function_332(0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			if (Function_255(&Local_908))
			{
				if (!Function_329(Global_46850[0]))
				{
					Function_524(&Local_908);
				}
				Function_188(&Global_54076, &iLocal_4 + 2048[0], 1, 1, 1);
				Function_253(&iLocal_1562);
				iLocal_1011 = 1;
			}
			else
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_273())
			{
				ENABLE_GAME_CAMERA_FOCUS(StackVal, Vector(-4347,43f, 42,032f, 4326,633f), 0.0f, 0, 1, 1, 0);
				Function_310(0);
				Function_188(&uLocal_1233, &iLocal_4 + 2048[1], 1, 1, 1);
				Function_320();
				Function_253(&iLocal_1562);
				iLocal_1011 = 4;
			}
			else
			{
				ACTOR_SET_NEXT_EQUIP_SLOT(&Global_54076, 1, 0);
			}
			break;
		
		case 0x00000004:
			if (Function_255(&Local_908))
			{
				if (!STREAMING_IS_WORLD_LOADED())
				{
					return;
				}
			}
			Function_198(bLocal_1010);
			Function_374(StackVal, Function_198(bLocal_1010), bLocal_1010, Global_46850[0], Function_201(bLocal_1010), 0);
			Function_245(1.0f);
			Function_523(Function_255(&Local_908));
			Function_517();
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			STREAMING_UNLOAD_BOUNDS();
			Function_327(&uLocal_1196, 0, 0, 4294967295, 4294967295);
			iLocal_1011 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				Function_522();
				RESET_ANIM_SET_FOR_ACTOR(&Global_54076, 1);
				Function_27("Zomb03_KillReyesObj", 0x40f00000, 1, 2, 0, 0, 0, 0);
				ADD_BLIP_FOR_ACTOR(&uLocal_1237, 322, 0, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_ACTOR(&uLocal_1237), "BLIP_COMP_REBEL");
				Function_254(&iLocal_1578, 0.0f);
				Function_362(&iLocal_1566);
				iLocal_1011 = 7;
			}
			break;
		
		case 0x00000007:
			Function_520();
			if (!IS_ACTOR_ALIVE(&uLocal_1237))
			{
				if (!Function_250(&iLocal_1566))
				{
					if (!IS_PLAYER_DEADEYE(0))
					{
						Function_253(&iLocal_1566);
					}
				}
				else if (Function_519(&iLocal_1566, 1.0f))
				{
					ACTOR_HOLSTER_WEAPON(&Global_54076, 1);
					Function_253(&iLocal_1562);
					iLocal_1011 = 8;
				}
			}
			else if (!IS_ACTOR_IN_VOLUME(&uLocal_1237, &iLocal_4 + 2032))
			{
				KILL_ACTOR(&uLocal_1237);
			}
			break;
		
		case 0x00000008:
			if (Function_248(&iLocal_1562) <= 2.0f)
			{
				iLocal_1011 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				STREAMING_UNLOAD_BOUNDS();
				iLocal_1169[0] = 1;
				Function_175();
				Function_166(&iLocal_1197);
				bLocal_1010 = true;
				iLocal_1011 = 0;
			}
			break;
	}
	return;
}

bool Function_519(int iParam0, float fParam1) //Position: 0x1C19F / 115103
{
	if (Function_250(&iParam0))
	{
		if (Function_248(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void Function_520() //Position: 0x1C1BD / 115133
{
	if (iLocal_1359 <= 3)
	{
		if (Function_248(&iLocal_1578) <= 12.0f)
		{
			Function_521();
			iLocal_1359++;
			Function_253(&iLocal_1578);
		}
	}
	return;
}

void Function_521() //Position: 0x1C1EA / 115178
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_JonNoClearZombs", "Z03_JonNoClearZombs", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_522() //Position: 0x1C239 / 115257
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "Z03_MaidenScreams", "Z03_MaidenScreams", false, 2, 1, 0, 1);
		Function_340(3);
		START_SCRIPT_CONVERSATION(false, 0);
	}
	return;
}

void Function_523(bool bParam0) //Position: 0x1C284 / 115332
{
	iLocal_1208 = 0;
	uLocal_1265 = &iLocal_4 + 3568;
	SET_ACTOR_HEALTH(&uLocal_1233, GET_ACTOR_MAX_HEALTH(&uLocal_1233));
	if (bParam0)
	{
		Function_299();
		Function_296();
		Function_307();
		Function_276();
		TASK_CLEAR(&uLocal_1233);
		SNAP_ACTOR_TO_GRINGO(&uLocal_1233, &iLocal_4 + 3528, "UseCase1", true, 0, 0);
		TASK_USE_GRINGO(&uLocal_1233, GET_GRINGO_FROM_OBJECT(&iLocal_4 + 3528), "UseCase1", 4294967295, 1);
	}
	if (iLocal_1612)
	{
		Function_296();
	}
	return;
}

void Function_524(int iParam0) //Position: 0x1C300 / 115456
{
	if (!Function_255(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_134(1, 0, 1);
		}
	}
	return;
}

void Function_525() //Position: 0x1C31C / 115484
{
	switch (iLocal_1011)
	{
		case 0x00000006:
			if (Function_381())
			{
				iLocal_1194 = 1;
			}
			Function_536(&Local_908, 1);
			uLocal_906 = CREATE_LAYOUT("zombie03_DYNAMICLAYOUT");
			Function_394();
			STREAMING_RELEASE_MAIN_POI();
			Function_397();
			Function_535();
			Function_532(Global_46850[0], 0);
			SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(70);
			FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
			AUDIO_MUSIC_FORCE_TRACK("MEX_ZMB_SONG_01", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			uLocal_1012 = CREATE_OBJECT_ITERATOR(&uLocal_906);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_32(), "ZOMBIE_STORY_5_OBJ", 4, 0);
			if (!Function_255(&Local_908) && CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/ESCALERA_1_CS_SEQ/ESCALERA_1_CS_SEQ"))
			{
				Function_161(1);
				TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&Global_6667[328] + 88), -28,431f, 1, 1, true);
				Global_99147 = 1;
				iLocal_1011 = 7;
			}
			else
			{
				if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST("$/cutscene/ESCALERA_1_CS_SEQ/ESCALERA_1_CS_SEQ"))
				{
				}
				if (!Function_255(&Local_908))
				{
					TELEPORT_ACTOR_WITH_HEADING(&Global_54076, *(&Global_6667[328] + 88), -28,431f, 1, 1, true);
				}
				iLocal_1011 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				iLocal_1011 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_241("$/cutscene/ESCALERA_1_CS_SEQ/ESCALERA_1_CS_SEQ", &iLocal_998, &Local_908, &bLocal_1010, 80940, 77874, 77559, 72736, 72299, 46937, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_253(&iLocal_1562);
				iLocal_1011 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_260())
			{
				if (!IS_LAYOUTREF_VALID(&iLocal_4))
				{
					Function_259();
				}
				iLocal_1011 = 10;
			}
			break;
		
		case 0x0000000A:
			Function_530(&uLocal_1015, &uLocal_906);
			Function_529();
			SET_WEAPONENUM_LOCKED(18, 0);
			iLocal_1011 = 0;
			bLocal_1010 = iLocal_905;
			Function_527(&Local_908, &bLocal_1010, &iLocal_1011);
			bLocal_1360 = false;
			if (iLocal_1194 && (bLocal_1010 != 3 || bLocal_1010 != 4))
			{
				bLocal_1010 = 5;
			}
			if (bLocal_1010 < 2 && bLocal_1010 > 5)
			{
				bLocal_1360 = Function_526(Local_908);
				PRINTSTRING("Number of Zombies killed loaded by deed: ");
				PRINTINT(bLocal_1360);
				PRINTNL();
				switch (bLocal_1010)
				{
					case 0x00000003:
						iLocal_1624 = 1;
						bLocal_1360 = 15;
						break;
					
					case 0x00000004:
						iLocal_1624 = 1;
						iLocal_1625 = 1;
						bLocal_1360 = 33;
						break;
					}
			}
			switch (bLocal_1010)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

int Function_526(int iParam0) //Position: 0x1C63D / 116285
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

void Function_527(int iParam0, var uParam1, var uParam2) //Position: 0x1C657 / 116311
{
	if (Function_255(&iParam0))
	{
		uParam1 = Function_383(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			uParam2 = 0;
		}
		Function_528();
	}
	return;
}

void Function_528() //Position: 0x1C693 / 116371
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

void Function_529() //Position: 0x1C6E4 / 116452
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&bLocal_1534))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie0_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1534 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1534, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1536))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie0_1_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1536 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1536, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1538))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie1_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1538 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1538, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1540))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie2_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1540 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1540, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1542))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie2_0_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1542 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1542, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1544))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie3_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1544 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1544, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1546))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie4_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1546 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1546, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1548))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie5_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1548 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1548, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1550))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie6_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1550 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1550, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1552))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Zombie7_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1552 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1552, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1554))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "Toxic_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1554 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1554, bLocal_904);
		}
	}
	if (!SQUAD_IS_VALID(&bLocal_1556))
	{
		uVar0 = CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "ZombieBoss_Squad");
		if (IS_OBJECT_VALID(&uVar0))
		{
			bLocal_1556 = GET_SQUAD_FROM_OBJECT(&uVar0);
			SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(&bLocal_1556, bLocal_904);
		}
	}
	if (!IS_ACTORSET_VALID(&iLocal_1257))
	{
		iLocal_1257 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "nZombieSet", 0);
		if (!IS_ACTORSET_VALID(&iLocal_1257))
		{
		}
	}
	if (!IS_ACTORSET_VALID(&iLocal_1259))
	{
		iLocal_1259 = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "MustKillSet", 0);
		if (!IS_ACTORSET_VALID(&iLocal_1259))
		{
		}
	}
	return;
}

int Function_530(struct<2>[] Param0) //Position: 0x1CA7B / 117371
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_531(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_531(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_531(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_531(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_531(struct<13> Param0) //Position: 0x1D154 / 119124
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

void Function_532(int iParam0, bool bParam1) //Position: 0x1D223 / 119331
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_534(iParam0);
	if (iVar0 != 0)
	{
		iVar1 = Function_533(iVar0);
		if (iVar1 != 34)
		{
			ENABLE_WEATHER_SPHERE(iVar1, bParam1);
			if (bParam1)
			{
			}
		}
	}
	return;
}

int Function_533(int iParam0) //Position: 0x1D259 / 119385
{
	if (iParam0 == 1)
	{
		return 2;
	}
	if (iParam0 == 2)
	{
		return 3;
	}
	if (iParam0 == 3)
	{
		return 4;
	}
	if (iParam0 == 4)
	{
		return 5;
	}
	if (iParam0 == 5)
	{
		return 6;
	}
	if (iParam0 == 6)
	{
		return 7;
	}
	if (iParam0 == 7)
	{
		return 8;
	}
	if (iParam0 == 8)
	{
		return 9;
	}
	if (iParam0 == 9)
	{
		return 10;
	}
	if (iParam0 == 10)
	{
		return 11;
	}
	if (iParam0 == 11)
	{
		return 12;
	}
	if (iParam0 == 12)
	{
		return 13;
	}
	if (iParam0 == 13)
	{
		return 14;
	}
	if (iParam0 == 14)
	{
		return 15;
	}
	if (iParam0 == 15)
	{
		return 16;
	}
	if (iParam0 == 16)
	{
		return 17;
	}
	if (iParam0 == 17)
	{
		return 18;
	}
	if (iParam0 == 25)
	{
		return 19;
	}
	if (iParam0 == 18)
	{
		return 20;
	}
	if (iParam0 == 19)
	{
		return 21;
	}
	if (iParam0 == 20)
	{
		return 22;
	}
	if (iParam0 == 21)
	{
		return 23;
	}
	if (iParam0 == 22)
	{
		return 24;
	}
	if (iParam0 == 23)
	{
		return 25;
	}
	if (iParam0 == 24)
	{
		return 26;
	}
	return 34;
}

int Function_534(int iParam0) //Position: 0x1D396 / 119702
{
	if (iParam0 == Global_46760[0])
	{
		return 1;
	}
	if (iParam0 == Global_46760[2])
	{
		return 2;
	}
	if (iParam0 == Global_46760[1])
	{
		return 3;
	}
	if (iParam0 == Global_46796[1])
	{
		return 4;
	}
	if (iParam0 == Global_46796[3])
	{
		return 5;
	}
	if (iParam0 == Global_46816[0])
	{
		return 8;
	}
	if (iParam0 == Global_46816[1])
	{
		return 9;
	}
	if (iParam0 == Global_46838[0])
	{
		return 11;
	}
	if (iParam0 == Global_46850[0])
	{
		return 12;
	}
	if (iParam0 == Global_46850[1])
	{
		return 13;
	}
	if (iParam0 == Global_46850[2])
	{
		return 14;
	}
	if (iParam0 == Global_46866[0])
	{
		return 15;
	}
	if (iParam0 == Global_46866[1])
	{
		return 16;
	}
	if (iParam0 == Global_46866[2])
	{
		return 17;
	}
	if (iParam0 == Global_46894[2])
	{
		return 25;
	}
	if (iParam0 == Global_46894[3])
	{
		return 18;
	}
	if (iParam0 == Global_46894[0])
	{
		return 19;
	}
	if (iParam0 == Global_46914[0])
	{
		return 21;
	}
	if (iParam0 == Global_46926[2])
	{
		return 22;
	}
	if (iParam0 == Global_46926[1])
	{
		return 23;
	}
	if (iParam0 == Global_46926[0])
	{
		return 24;
	}
	if (iParam0 == Global_46838[1])
	{
		return 26;
	}
	if (iParam0 == Global_46894[1])
	{
		return 27;
	}
	return 0;
}

void Function_535() //Position: 0x1D51C / 120092
{
	Function_268(&iLocal_920, "shotgun_semiauto01x", 0, 0);
	Function_268(&iLocal_920, "repeater_carbine01x", 0, 0);
	Function_268(&iLocal_920, "p_gen_doorStone_cs01x", 0, 0);
	Function_268(&iLocal_920, "dlc_zombiepack_Zomb03", 10, 0);
	Function_268(&iLocal_920, "dead_ground_male", 5, 0);
	Function_268(&iLocal_920, "custom/dead_ground_male", 8, 0);
	Function_268(&iLocal_920, "z_dlc_z_crypt", 5, 0);
	Function_268(&iLocal_920, "custom/z_dlc_z_crypt", 8, 0);
	Function_268(&iLocal_920, "z_dlc_z_roar", 5, 0);
	Function_268(&iLocal_920, "custom/z_dlc_z_roar", 8, 0);
	Function_268(&iLocal_920, "DLC_torch_girl", 5, 0);
	Function_268(&iLocal_920, "DLC_female_cower", 1, 0);
	Function_268(&iLocal_920, "custom/one_handed_wave", 8, 0);
	Function_268(&iLocal_920, "aiming_point", 5, 0);
	Function_268(&iLocal_920, "custom/aiming_point", 8, 0);
	Function_268(&iLocal_920, "ptl_base", 5, 0);
	Function_270(&iLocal_920, 393, 3, 0);
	Function_268(&iLocal_1197, "revolver_Schofield01x", 0, 0);
	return;
}

void Function_536(int iParam0, bool bParam1) //Position: 0x1D727 / 120615
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_542(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_255(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_99();
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
	if (!Function_255(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_183();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_203();
	Function_244();
	Function_193("");
	Function_541(0);
	Function_540();
	Function_154();
	Function_153();
	ENABLE_JOURNAL_REPLAY(0);
	Function_539();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_234(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_333(0, 0x40400000);
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
	Function_538(13);
	Function_538(14);
	Function_538(25);
	Function_538(24);
	Function_538(12);
	Function_538(27);
	Function_538(26);
	Function_538(15);
	Function_537();
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

void Function_537() //Position: 0x1DB67 / 121703
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

void Function_538(int iParam0) //Position: 0x1DBEC / 121836
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_539() //Position: 0x1DC0C / 121868
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

void Function_540() //Position: 0x1DC52 / 121938
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_541(int iParam0) //Position: 0x1DC68 / 121960
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_157())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_542(int iParam0, int iParam1) //Position: 0x1DCA1 / 122017
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
			Function_543(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_543(struct<113> Param0) //Position: 0x1DD28 / 122152
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

bool Function_544(struct<25> Param0) //Position: 0x1DD86 / 122246
{
	switch (Param0.f_24)
	{
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(&uLocal_1233, "Z03_JonShhotsMaid", 1, 0, 0, 0);
					}
					break;
			}
			break;
		
		case 0x00000020:
			break;
		
		case 0x00000040:
			break;
		
		case 0x00000080:
		case 0x00000100:
			switch (Param0.f_16)
			{
				case 0x00000000:
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(&uLocal_1233, "Z03_JonShhotsMaid", 1, 0, 0, 0);
					}
					break;
			}
			break;
		
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
			Function_545(&Param0, 1);
			return 1;
		}
	}
	Function_545(&Param0, 0);
	return 0;
}

void Function_545(struct<25> Param0) //Position: 0x1DE87 / 122503
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

bool Function_546(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x1DEB2 / 122546
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
		Function_545(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_565(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_564(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_564(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_550(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_545(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_549(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_548(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_549(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_547(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_193(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_548(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_545(&Param2, 0);
	return 0;
}

void Function_547(char* cParam0) //Position: 0x1E2C8 / 123592
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

void Function_548(struct<25> Param0) //Position: 0x1E3BC / 123836
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
			Function_46(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_46(&iParam2, 2);
			break;
	}
	Function_46(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_549(bool bParam0) //Position: 0x1E434 / 123956
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_46(&iVar0, 1);
	Function_46(&iVar0, 2);
	Function_46(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_550(struct<57> Param0) //Position: 0x1E458 / 123992
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
			return Function_561(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_554(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_561(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_551(&Param0, bVar2);
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
						bVar2 = Function_561(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_551(&Param0, bVar2);
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

var Function_551(int iParam0, bool bParam1) //Position: 0x1E5C9 / 124361
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
				bParam1 = Function_553(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_552(16);
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
				bParam1 = Function_553(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_552(256);
			}
		}
	}
	return bParam1;
}

bool Function_552(int iParam0) //Position: 0x1E705 / 124677
{
	return 2 | iParam0;
}

int Function_553(int iParam0) //Position: 0x1E70F / 124687
{
	return 4 | iParam0;
}

int Function_554(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x1E719 / 124697
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
				iParam3 = Function_560(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_80(&iParam3, 2);
					Function_46(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_552(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_555(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_80(&iParam3, 2);
					Function_46(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_552(16);
		}
	}
	return 0;
}

int Function_555(int iParam0, vector3 vParam1) //Position: 0x1E7D4 / 124884
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_559(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_558(iVar0, 3, 1, bParam3))
			{
				if (!Function_564(&iParam0, 8, 1))
				{
					return Function_557(64, 1024, bParam2);
				}
			}
			return Function_556(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_558(iVar0, 2, 1, bParam3))
			{
				if (!Function_564(&iParam0, 32, 1))
				{
					return Function_557(64, 1024, bParam2);
				}
			}
			return Function_556(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_558(iVar0, 1, 1, bParam3))
			{
				if (!Function_564(&iParam0, 64, 1))
				{
					return Function_557(64, 1024, bParam2);
				}
			}
			return Function_556(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_558(iVar0, 3, 1, bParam3))
			{
				if (!Function_564(&iParam0, 128, 1))
				{
					return Function_557(64, 1024, bParam2);
				}
			}
			return Function_556(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_558(iVar0, 1, 1, bParam3))
			{
				if (!Function_564(&iParam0, 1024, 1))
				{
					return Function_557(64, 1024, bParam2);
				}
			}
			return Function_556(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_558(iVar0, 1, 1, bParam3))
			{
				if (!Function_564(&iParam0, 1024, 1))
				{
					return Function_557(64, 1024, bParam2);
				}
			}
			return Function_556(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_556(int iParam0, int iParam1, bool bParam2) //Position: 0x1E99C / 125340
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_557(int iParam0, int iParam1, bool bParam2) //Position: 0x1E9B1 / 125361
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_558(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1E9C6 / 125382
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_559(int iParam0) //Position: 0x1E9E3 / 125411
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

int Function_560(var uParam0, vector3 vParam1) //Position: 0x1EA56 / 125526
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_559(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_558(iVar0, 3, 1, bParam2))
			{
				if (!Function_564(&uParam0, 8, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000009:
			if (Function_558(iVar0, 3, 1, bParam2))
			{
				if (!Function_564(&uParam0, 8, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x0000006E:
			if (Function_558(iVar0, 2, 1, bParam2))
			{
				if (!Function_564(&uParam0, 16, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x0000005B:
			if (Function_558(iVar0, 2, 1, bParam2))
			{
				if (!Function_564(&uParam0, 32, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000031:
			if (Function_558(iVar0, 1, 1, bParam2))
			{
				if (!Function_564(&uParam0, 64, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000007:
			if (Function_558(iVar0, 3, 1, bParam2))
			{
				if (!Function_564(&uParam0, 128, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000008:
			if (Function_558(iVar0, 2, 1, bParam2))
			{
				if (!Function_564(&uParam0, 256, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000014:
			if (Function_558(iVar0, 1, 1, bParam2))
			{
				if (!Function_564(&uParam0, 512, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000018:
			if (Function_558(iVar0, 1, 1, bParam2))
			{
				if (!Function_564(&uParam0, 512, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000057:
			if (Function_558(iVar0, 1, 1, bParam2))
			{
				if (!Function_564(&uParam0, 1024, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000058:
			if (Function_558(iVar0, 1, 1, bParam2))
			{
				if (!Function_564(&uParam0, 1024, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_561(struct<65> Param0) //Position: 0x1EC7F / 126079
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
						return Function_560(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_564(&Param0, 2, 1))
					{
						return Function_553(8);
					}
					return Function_552(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_564(&Param0, 4, 1))
					{
						return Function_553(16);
					}
					return Function_552(16);
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
							return Function_555(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_564(&Param0, 2, 1))
						{
							return Function_553(128);
						}
						return Function_552(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_564(&Param0, 4, 1))
						{
							return Function_553(256);
						}
						return Function_552(256);
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
						return Function_555(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_564(&Param0, 2, 1))
					{
						return Function_553(8);
					}
					return Function_552(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_564(&Param0, 4, 1))
					{
						return Function_553(16);
					}
					return Function_552(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_563(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_564(&Param0, 2, 1))
					{
						return Function_553(8);
					}
					return Function_552(8);
				}
				if (!Function_564(&Param0, 4, 1))
				{
					return Function_553(16);
				}
				return Function_552(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_555(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_80(&iParam4, 2);
								Function_46(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_562(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_552(128);
							}
							if (!Function_564(&Param0, 2, 1))
							{
								return Function_553(8);
							}
							return Function_552(8);
						}
						if (iParam4 == 2)
						{
							if (Function_562(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_552(256);
							}
							if (!Function_564(&Param0, 4, 1))
							{
								return Function_553(16);
							}
							return Function_552(16);
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

bool Function_562(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x1EF65 / 126821
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

int Function_563(int iParam0, vector3 vParam1) //Position: 0x1F033 / 127027
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_559(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_558(iVar0, 2, 1, bParam2))
			{
				if (!Function_564(&iParam0, 16, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x0000005B:
			if (Function_558(iVar0, 2, 1, bParam2))
			{
				if (!Function_564(&iParam0, 32, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000057:
			if (Function_558(iVar0, 1, 1, bParam2))
			{
				if (!Function_564(&iParam0, 1024, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		case 0x00000058:
			if (Function_558(iVar0, 1, 1, bParam2))
			{
				if (!Function_564(&iParam0, 1024, 1))
				{
					return Function_553(64);
				}
			}
			return Function_552(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_564(struct<69> Param0) //Position: 0x1F155 / 127317
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

int Function_565(bool bParam0) //Position: 0x1F17F / 127359
{
	if (IS_ITERATOR_VALID(&bParam0))
	{
		ITERATE_EVERYWHERE(&bParam0);
		ITERATE_ON_PARTIAL_NAME(&bParam0, Function_58());
		ITERATE_ON_PARTIAL_MODEL_NAME(&bParam0, Function_58());
		ITERATE_ON_OBJECT_TYPE(&bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_566(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x1F1B5 / 127413
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_567(int iParam0) //Position: 0x1F1E2 / 127458
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

