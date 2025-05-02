//Decompiled with MagicRDR v1.0
//Function Count : 594
//Statics Count : 1709
//Natives Count : 763
//Parameters Count : 12

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 10;
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
	var uLocal_48 = 1;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 17;
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
	var uLocal_124 = 4;
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
	var uLocal_142 = 7;
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
	var uLocal_174 = 2;
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
	var uLocal_202 = 2;
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
	var uLocal_214 = 2;
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
	var uLocal_226 = 3;
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
	var uLocal_242 = 2;
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
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 1;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 1;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 5;
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
	var uLocal_328 = 1;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 6;
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
	var uLocal_352 = 4;
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
	var uLocal_364 = 8;
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
	var uLocal_384 = 2;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 2;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 6;
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
	var uLocal_418 = 7;
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
	var uLocal_436 = 10;
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
	var uLocal_460 = 5;
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
	var uLocal_474 = 6;
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
	var uLocal_490 = 4;
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
	var uLocal_502 = 8;
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
	var uLocal_522 = 6;
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
	var uLocal_538 = 5;
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
	int iLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 1;
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
	var uLocal_640 = 6;
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
	int iLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 3;
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
	var uLocal_700 = 2;
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
	int iLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 3;
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
	var uLocal_748 = 2;
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
	int iLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 1;
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
	int iLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 2;
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
	var uLocal_814 = 2;
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
	int iLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 1;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 1;
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
	int iLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	struct<6> Local_872 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	int iLocal_884 = 30;
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
	int iLocal_1006 = 0;
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
	bool bLocal_1018 = false;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	int iLocal_1023 = 0;
	var uLocal_1024 = 0;
	int iLocal_1025 = 0;
	var uLocal_1026 = 0;
	int iLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	int iLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	int iLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	int iLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	int iLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	int iLocal_1047[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	bool bLocal_1069 = false;
	bool bLocal_1070 = false;
	bool bLocal_1071 = false;
	var uLocal_1072 = 13;
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
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	struct<15> Local_1126[7];
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 5;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
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
	var uLocal_1266 = 5;
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
	var uLocal_1296 = 5;
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
	var uLocal_1326 = 5;
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
	struct<2> Local_1347 = { 0, 0 } ;
	var uLocal_1349 = 0;
	struct<5> Local_1350 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	bool bLocal_1358 = false;
	bool bLocal_1359 = false;
	int iLocal_1360 = 0;
	int iLocal_1361 = 0;
	bool bLocal_1362 = false;
	int iLocal_1363[2] = { 0, 0 };
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	int iLocal_1369[4] = { 0, 0, 0, 0 };
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	int iLocal_1379[3] = { 0, 0, 0 };
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	bool bLocal_1387 = false;
	int iLocal_1388 = 0;
	int iLocal_1389[2] = { 0, 0 };
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	int iLocal_1395 = 0;
	bool bLocal_1396 = false;
	int iLocal_1397 = 0;
	bool bLocal_1398 = false;
	var uLocal_1399 = 0;
	int iLocal_1400 = 0;
	int iLocal_1401 = 0;
	bool bLocal_1402 = false;
	int iLocal_1403 = 0;
	bool bLocal_1404 = false;
	int iLocal_1405 = 0;
	bool bLocal_1406 = false;
	int iLocal_1407 = 0;
	int iLocal_1408 = 0;
	bool bLocal_1409 = false;
	int iLocal_1410 = 0;
	var uLocal_1411 = 0;
	int iLocal_1412 = 0;
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
	bool bLocal_1424 = false;
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
	bool bLocal_1448 = false;
	var uLocal_1449 = 0;
	int iLocal_1450 = 0;
	var uLocal_1451 = 0;
	int iLocal_1452 = 0;
	var uLocal_1453 = 0;
	bool bLocal_1454 = false;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	int iLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	int iLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	int iLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	int iLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	int iLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	int iLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	int iLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	int iLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	int iLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	int iLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	int iLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	int iLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	int iLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	int iLocal_1512 = 0;
	int iLocal_1513 = 0;
	int iLocal_1514 = 0;
	int iLocal_1515 = 0;
	int iLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	int iLocal_1520 = 0;
	var uLocal_1521[2] = { 0, 0 };
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	struct<5> Local_1527[7];
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
	struct<5> Local_1599[5];
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
	int iLocal_1653 = 0;
	bool bLocal_1654 = false;
	var uLocal_1655 = 0;
	int iLocal_1656 = 0;
	bool bLocal_1657 = false;
	int iLocal_1658 = 0;
	bool bLocal_1659 = false;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	int iLocal_1662 = 0;
	var uLocal_1663 = 0;
	int iLocal_1664 = 0;
	var uLocal_1665 = 0;
	int iLocal_1666 = 0;
	var uLocal_1667 = 0;
	int iLocal_1668 = 0;
	var uLocal_1669 = 0;
	int iLocal_1670 = 0;
	var uLocal_1671 = 0;
	int iLocal_1672 = 0;
	var uLocal_1673 = 0;
	int iLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	int iLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	char[] cLocal_1681[4] = 0;
	var uLocal_1682 = 0;
	int iLocal_1683 = 0;
	int iLocal_1684 = 0;
	int iLocal_1685 = 0;
	int iLocal_1686 = 0;
	int iLocal_1687 = 0;
	int iLocal_1688 = 0;
	int iLocal_1689 = 0;
	int iLocal_1690 = 0;
	int iLocal_1691 = 0;
	int iLocal_1692 = 0;
	int iLocal_1693 = 0;
	int iLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
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
	iLocal_1401 = 1;
	bLocal_1409 = true;
	iLocal_1658 = 4294967295;
	iLocal_1678 = 1000;
	iLocal_1683 = 9;
	iLocal_1686 = 7;
	iLocal_1687 = 14;
	iLocal_1688 = 0;
	iLocal_1689 = 10;
	iLocal_1690 = 11;
	iLocal_1691 = 3;
	iLocal_1692 = 10;
	iLocal_1693 = 10;
	iLocal_1694 = 10;
	Local_872 = { StackVal, StackVal, StackVal, StackVal, StackVal, ScriptParam_0 };
	bLocal_1018 = 99;
	iLocal_1019 = 6;
	iLocal_1006 = 1000;
	while (Function_228())
	{
		WAIT(false);
	}
	Function_1();
	return;
}

void Function_1() //Position: 0x7E / 126
{
	ENABLE_CHILD_SECTOR("cas_gunsmithBlacksmith01Props01x");
	ENABLE_CHILD_SECTOR("cas_horsestables01Props01x");
	FORCE_VEHICLE_CINEMATIC_CAMERA(0);
	AUDIO_SET_PLAYER_MOOD(0, 0);
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_227(&(Global_43791[Global_46866[0]]), 256);
	HUD_ENABLE(1);
	if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
	{
		CUTSCENE_MANAGER_UNLOAD_CUTSCENE();
	}
	Function_226(4194304);
	Function_227(&(Global_43791[Global_46866[1]]), 256);
	if (IS_OBJECT_VALID(&bLocal_1424))
	{
		DESTROY_OBJECT(&bLocal_1424);
	}
	RESET_MAX_SCRIPTED_CONVERSATION_DISTANCE();
	STREAMING_UNLOAD_SCENE();
	Function_225(&iLocal_1410);
	UI_EXIT("HealthMeter");
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
	}
	if (IS_ACTOR_VALID(&iLocal_1025))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1025)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iLocal_1025));
		}
	}
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_1023);
	DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&iLocal_1025);
	if (iLocal_1658 >= 4294967295)
	{
		Function_224();
	}
	Function_221(6, 1, 0, 1, 1);
	if (IS_ACTOR_VALID(&iLocal_1023))
	{
		RELEASE_ACTOR(&iLocal_1023);
	}
	Function_220(&iLocal_868);
	Function_220(&iLocal_4);
	Function_219();
	Function_190(bLocal_1070, 1, bLocal_1070, 0, 0, 1, 1, 1);
	Function_189();
	Function_188();
	Function_187();
	Function_186();
	Function_182(&iLocal_884);
	Function_175();
	if (IS_ITERATOR_VALID(&uLocal_1021))
	{
		DESTROY_ITERATOR(&uLocal_1021);
	}
	CLEAR_AMBIENT_ALL_RESTRICTIONS();
	RELEASE_LAYOUT_REF(&iLocal_868);
	STREAMING_UNLOAD_SCENE();
	if (bLocal_1069)
	{
		Global_39324[1] = 0;
		DISABLE_WORLD_SECTOR("butterBridgeB");
		DISABLE_WORLD_SECTOR("butterBridgeA");
		DISABLE_WORLD_SECTOR("butterBridgeC");
		ENABLE_WORLD_SECTOR("butterBridgeD");
		ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
		Function_27(Local_872, 1, 1, 1, 0);
	}
	else if (bLocal_1070)
	{
		if (bLocal_1404)
		{
			Function_26();
		}
		Function_22(Local_872);
	}
	else
	{
		Function_2(Local_872);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_2(int iParam0) //Position: 0x2A2 / 674
{
	Function_10(iParam0);
	Function_9();
	Function_6(2);
	Function_4((15 - Function_5(105)));
	Function_3(12);
	return;
}

void Function_3(int iParam0) //Position: 0x2C3 / 707
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_4(int iParam0) //Position: 0x2E0 / 736
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_5(105)), 0);
	return;
}

int Function_5(int iParam0) //Position: 0x303 / 771
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_6(int iParam0) //Position: 0x31A / 794
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

void Function_7(int iParam0) //Position: 0x3BC / 956
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_5(90)), 0);
	return;
}

void Function_8(var uParam0) //Position: 0x3DF / 991
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

void Function_9() //Position: 0x429 / 1065
{
	if (Global_119941)
	{
		UNK_0x1082715D();
		Global_53524.f_184 = 0;
	}
	return;
}

void Function_10(bool bParam0) //Position: 0x442 / 1090
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

void Function_11(var uParam0, bool bParam1) //Position: 0x495 / 1173
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

struct<16> Function_12(int iParam0) //Position: 0x5BF / 1471
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

bool Function_13() //Position: 0x5F9 / 1529
{
	if (Function_14(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_14(bool bParam0, bool bParam1) //Position: 0x614 / 1556
{
	return (bParam0 && bParam1) == 0;
}

int Function_15(bool bParam0) //Position: 0x621 / 1569
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 12) & 255;
}

bool Function_16(int iParam0) //Position: 0x641 / 1601
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_17(bool bParam0) //Position: 0x658 / 1624
{
	if (!Function_16(bParam0))
	{
		return 0;
	}
	return Global_21684[bParam07] & 15;
}

void Function_18() //Position: 0x673 / 1651
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

void Function_19(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8BA / 2234
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

bool Function_20(int iParam0) //Position: 0x8E6 / 2278
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

bool Function_21(int iParam0) //Position: 0x90A / 2314
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_22(int iParam0) //Position: 0x91F / 2335
{
	Function_23(iParam0);
	Function_6(2);
	Function_3(12);
	Function_4((15 - Function_5(105)));
	return;
}

void Function_23(bool bParam0) //Position: 0x93D / 2365
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

struct<16> Function_24(int iParam0) //Position: 0x9E3 / 2531
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

struct<24> Function_25(char* cParam0) //Position: 0xA22 / 2594
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

void Function_26() //Position: 0xC78 / 3192
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

void Function_27(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0xDAA / 3498
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
		Function_170(&(Global_6667[iVar228]));
		Function_169(4194304);
		if (&bParam3)
		{
			Function_122(iVar2, &uVar0, 0);
			if (!Global_6622)
			{
				Function_116(iVar2);
			}
		}
		else if (&bParam4)
		{
			Function_122(iVar2, &uVar0, 0);
		}
		bVar1 = Function_115();
		if (&bParam1)
		{
			Function_99(iVar2, bParam0, bVar1);
			Function_98();
		}
	}
	Function_40(bParam0, &bParam1, &uParam2, bVar1);
	if (Function_17(bParam0) == 1)
	{
		if (&bParam1)
		{
			if (!Global_6624)
			{
				Function_32(iVar2, bVar1);
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
	Function_28();
}

void Function_28() //Position: 0xE9E / 3742
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_29(Global_99387[iVar0], 0));
		iVar0++;
	}
	return;
}

int Function_29(int iParam0, bool bParam1) //Position: 0xED0 / 3792
{
	int iVar0;
	
	iVar0 = Function_30(iParam0);
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

int Function_30(int iParam0) //Position: 0xF0E / 3854
{
	if (!Function_31(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_31(int iParam0) //Position: 0xF28 / 3880
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_32(int iParam0, bool bParam1) //Position: 0xF3E / 3902
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
							Function_33(&Global_54076, 0x1000000, 3, 0);
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
							Function_33(&Global_54076, 0x1000000, 3, 0);
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
							Function_33(&Global_54076, 0x1000000, 3, 0);
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
							Function_33(&Global_54076, 0x1000000, 3, 0);
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
							Function_33(&Global_54076, 0x1000000, 3, 0);
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
							Function_33(&Global_54076, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_32(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_32(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_32(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_32(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_32(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_32(57, 0);
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

void Function_33(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x123B / 4667
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_35(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_34(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_34(char* cParam0) //Position: 0x12B0 / 4784
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

bool Function_35(int iParam0, var uParam1, int iParam2) //Position: 0x12EA / 4842
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
		if (Function_38(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_37(uVar0))
		{
			case 0x00000002:
				if (!Function_36(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_36(var uParam0, int iParam1) //Position: 0x1366 / 4966
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_37(char* cParam0) //Position: 0x1379 / 4985
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

int Function_38(int iParam0) //Position: 0x141A / 5146
{
	int iVar0;
	bool bVar1;
	
	bVar1 = iParam0;
	if (bVar1 <= 0)
	{
		iVar0 = 1;
		Function_39(&bVar1, 2147483648);
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

void Function_39(bool bParam0, bool bParam1) //Position: 0x1457 / 5207
{
	bParam0 = (bParam0 - (bParam0 && bParam1));
	return;
}

void Function_40(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x146D / 5229
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
		if (Function_97())
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
		if (Function_97())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		iVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_93();
		CLEAR_JOURNAL_ENTRY(iVar11);
		SET_JOURNAL_ENTRY_PROGRESS(iVar11, -2.0f, false, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(iVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(iVar11, true);
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
			Function_85(bParam0);
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
			Function_43(1);
			Function_42(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_41(bParam0, &Var14);
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

void Function_41(int iParam0, struct<41> Param1) //Position: 0x16CB / 5835
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_42(bool bParam0, int iParam1) //Position: 0x1709 / 5897
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

void Function_43(bool bParam0) //Position: 0x1748 / 5960
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_74();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_44();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_39(&Global_99144, 1);
		Function_39(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_44() //Position: 0x179D / 6045
{
	Function_72();
	Function_71();
	Function_71();
	Function_70();
	Function_70();
	Function_69();
	Function_69();
	Function_52(0);
	Function_52(0);
	Function_49();
	Function_48();
	Function_47();
	Function_46();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_45();
	return;
}

void Function_45() //Position: 0x17E8 / 6120
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

void Function_46() //Position: 0x18EE / 6382
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

void Function_47() //Position: 0x1921 / 6433
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

void Function_48() //Position: 0x1AB4 / 6836
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

void Function_49() //Position: 0x1C6D / 7277
{
	Function_50(&Global_42918, 1, 0);
	return;
}

void Function_50(struct<2317> Param0) //Position: 0x1C7B / 7291
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
	
	uVar0 = Function_51();
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

bool Function_51() //Position: 0x1E98 / 7832
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_52(int iParam0) //Position: 0x1EAD / 7853
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
					iVar2 = ((Function_68((50 + iVar4)) + Function_68((183 + iVar4))) + Function_68((90 + iVar4)));
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
	Function_53(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F54 / 8020
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
		Function_67(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_66(iParam0);
	if (&bParam2)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x21F0 / 8688
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_65(390))), 32);
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
					bVar19 = (Function_64(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_64(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_62(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_59(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_56(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_55(), &Var9);
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

var Function_55() //Position: 0x282E / 10286
{
	int iVar0;
	
	return &iVar0;
}

var Function_56(int iParam0) //Position: 0x2837 / 10295
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_57(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2848 / 10312
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_58(char* cParam0) //Position: 0x293F / 10559
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_59(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x295A / 10586
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_61(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_60(Function_61(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_60(int iParam0, int iParam1) //Position: 0x29C1 / 10689
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_61(int iParam0, bool bParam1) //Position: 0x29D3 / 10707
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_62(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x29E5 / 10725
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
	if (((Function_63(iParam0) != 19 || Function_63(iParam0) != 17) || Function_63(iParam0) != 10) || Function_63(iParam0) != 9)
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

int Function_63(int iParam0) //Position: 0x2B19 / 11033
{
	return Global_55480[iParam016].f_96;
}

float Function_64(int iParam0) //Position: 0x2B28 / 11048
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_65(int iParam0) //Position: 0x2B61 / 11105
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_66(int iParam0) //Position: 0x2B9E / 11166
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

int Function_67(int iParam0, bool bParam1, bool bParam2) //Position: 0x2D38 / 11576
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

int Function_68(bool bParam0) //Position: 0x2F7C / 12156
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_69() //Position: 0x2FBD / 12221
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
		iVar2 = ((Function_68((50 + iVar3) + 15) + Function_68((183 + iVar3) + 15)) + Function_68((90 + iVar3) + 15));
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
	Function_53(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_70() //Position: 0x3046 / 12358
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
			iVar2 = ((Function_68((50 + iVar3) + 8) + Function_68((183 + iVar3) + 8)) + Function_68((90 + iVar3) + 8));
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
	Function_53(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_71() //Position: 0x30DD / 12509
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
		iVar2 = ((Function_68((50 + iVar3)) + Function_68((183 + iVar3))) + Function_68((90 + iVar3)));
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
	Function_53(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_72() //Position: 0x315C / 12636
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_73(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_53(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_73(int iParam0, bool bParam1, int iParam2) //Position: 0x3199 / 12697
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
	Function_67(iParam0, bParam1, 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_54(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_74() //Position: 0x33A5 / 13221
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_13())
	{
		Function_82(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_82(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_76(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_76(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_75(StackVal, Var0))
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

bool Function_75(char* cParam0) //Position: 0x345C / 13404
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

struct<8> Function_76(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x3474 / 13428
{
	int iVar0;
	
	iVar0 = Function_80(&uParam2, &uParam3);
	if (Function_79(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_78(&Global_99144, 1);
			Function_39(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_78(&Global_99144, 2);
			Function_39(&Global_99144, 1);
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
		Function_78(&Global_99144, 2);
		Function_39(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_77();
	return StackVal, Function_77();
}

struct<8> Function_77() //Position: 0x356C / 13676
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

void Function_78(bool bParam0, bool bParam1) //Position: 0x3576 / 13686
{
	bParam0 = (bParam0 || bParam1);
	return;
}

bool Function_79(int iParam0) //Position: 0x3587 / 13703
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_80(bool bParam0, bool bParam1) //Position: 0x359D / 13725
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
				fVar2 = Function_81(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_81(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_79(iVar0) && !&bParam1)
	{
		iVar0 = Function_80(&bParam0, 1);
	}
	return iVar0;
}

float Function_81(struct<2> Param0, struct<2> Param2) //Position: 0x3669 / 13929
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_82(float fParam0, int iParam1) //Position: 0x3686 / 13958
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_84(&Global_54076, &Var3);
	if (!Function_83(Global_46760[0]))
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
	if (!Function_83(Global_46760[2]))
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
	if (!Function_83(Global_46760[1]))
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
	if (!Function_83(Global_46796[1]))
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
	if (!Function_83(Global_46796[3]))
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
	if (!Function_83(Global_46796[2]))
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
	if (!Function_83(Global_46796[4]))
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
	if (!Function_83(Global_46816[0]))
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
	if (!Function_83(Global_46816[1]))
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
	if (!Function_83(Global_46816[2]))
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
	if (!Function_83(Global_46838[0]))
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
	if (!Function_83(Global_46850[0]))
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
	if (!Function_83(Global_46850[1]))
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
	if (!Function_83(Global_46850[2]))
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
	if (!Function_83(Global_46866[0]))
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
	if (!Function_83(Global_46866[1]))
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
	if (!Function_83(Global_46866[2]))
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
	if (!Function_83(Global_46894[2]))
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
	if (!Function_83(Global_46894[3]))
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
	if (!Function_83(Global_46894[0]))
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
	if (!Function_83(Global_46914[0]))
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
	if (!Function_83(Global_46926[2]))
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
	if (!Function_83(Global_46926[1]))
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
	if (!Function_83(Global_46926[0]))
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
	if (!Function_83(Global_46838[1]))
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
	if (!Function_83(Global_46894[1]))
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
	Function_78(&Global_99144, 2);
	Function_39(&Global_99144, 1);
	iParam1 = 0;
	if (Function_75(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_83(int iParam0) //Position: 0x3EB2 / 16050
{
	bool bVar0;
	
	bVar0 = Global_43791[iParam0];
	return (((Function_14(bVar0, 0x1000000) || Function_14(bVar0, 0x2000000)) || Function_14(bVar0, 0x4000000)) || !Function_14(bVar0, 0x10000000));
}

void Function_84(var uParam0, int iParam1) //Position: 0x3EED / 16109
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_85(bool bParam0) //Position: 0x3EFC / 16124
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
					if (Function_88(bParam0) == 1)
					{
						iVar0 = Function_87(bParam0);
						if (Function_86(iVar0))
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
			if (Function_87(bParam0) == 0)
			{
				if (Function_88(bParam0) == 1)
				{
					Function_90(458, 1, 0, 0);
					iVar0 = Function_15(bParam0);
					if (Function_86(iVar0))
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
			if (Function_88(bParam0) == 1)
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

bool Function_86(int iParam0) //Position: 0x43D9 / 17369
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_87(bool bParam0) //Position: 0x43EF / 17391
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[bParam07], 4) & 255;
}

int Function_88(bool bParam0) //Position: 0x440E / 17422
{
	if (!Function_16(bParam0))
	{
		return 4294967295;
	}
	return Global_21684[bParam07].f_12;
}

void Function_89(int iParam0, int iParam1) //Position: 0x4428 / 17448
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

int Function_90(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4492 / 17554
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
	Function_67(iParam0, TO_FLOAT(bParam1), 1);
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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

void Function_91(int iParam0) //Position: 0x46BA / 18106
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

void Function_92() //Position: 0x4758 / 18264
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
	PLAYSTAT_INT("HC_MONEY", Function_68(0));
	PLAYSTAT_INT("HC_FAME", Function_68(3));
	PLAYSTAT_INT("HC_HONOR", Function_68(1));
	return;
}

void Function_93() //Position: 0x48BA / 18618
{
	int iVar0;
	int iVar1;
	
	if (!Function_31(Global_10966))
	{
		return;
	}
	iVar0 = Function_68(24);
	iVar1 = Function_30(Global_10966);
	if (!Function_31(iVar0) && Function_96(iVar1) < 0)
	{
		Function_53(24, Global_10966, 0);
		Function_94(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_96(Function_30(iVar0)))
	{
		Function_53(24, Global_10966, 0);
		Function_94(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_94(int iParam0, char* cParam1) //Position: 0x493A / 18746
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

void Function_95(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4C91 / 19601
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

int Function_96(int iParam0) //Position: 0x4D19 / 19737
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_97() //Position: 0x4D33 / 19763
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_98() //Position: 0x4D5E / 19806
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

void Function_99(int iParam0, int iParam1, bool bParam2) //Position: 0x4D8C / 19852
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
	
	if (!Function_31(iParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_114(iParam0);
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
				bVar0 = (Function_68(42) - Global_53524.f_168);
				bVar1 = (Function_68(27) - Global_53524.f_172);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_21684[iParam17].f_20)
				{
					Global_21684[iParam17].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_12(iParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_65(49)) - Global_53524.f_176);
				bVar3 = (Function_68(49) - Global_53524.f_180);
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
				bVar4 = (Function_68(355) - Global_53524.f_168);
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
		iVar15 = Function_113(iParam0, iVar14, Global_53524.f_192, bVar8, bVar0);
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

void Function_100(int iParam0, bool bParam1, bool bParam2) //Position: 0x5028 / 20520
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && (!Global_6623 || iParam0 == 100))
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
	iVar0 = Function_68(3);
	Function_109();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_107(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_36(Global_119936, 4))
			{
				Function_33(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_90(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_64(3));
	iVar0 = Function_68(3);
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

void Function_101(int iParam0, int iParam1) //Position: 0x51FC / 20988
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

int Function_102(int iParam0, char* cParam1) //Position: 0x5466 / 21606
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

int Function_103() //Position: 0x55F6 / 22006
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

void Function_104() //Position: 0x5697 / 22167
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

void Function_105(int iParam0) //Position: 0x5755 / 22357
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

var Function_106(int iParam0) //Position: 0x57BB / 22459
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

int Function_107(int iParam0, bool bParam1) //Position: 0x584A / 22602
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
	iVar1 = Function_108(iParam0, 4294967295);
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

var Function_108(int iParam0, int iParam1) //Position: 0x59F6 / 23030
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

void Function_109() //Position: 0x5A3B / 23099
{
	Function_111(3, 0.0f);
	Function_110(3, 10000.0f);
	return;
}

int Function_110(int iParam0, int iParam1) //Position: 0x5A51 / 23121
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_111(int iParam0, int iParam1) //Position: 0x5A91 / 23185
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_112(int iParam0) //Position: 0x5AD1 / 23249
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_113(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) //Position: 0x5AE0 / 23264
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

int Function_114(int iParam0) //Position: 0x5CA8 / 23720
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

var Function_115() //Position: 0x5D3D / 23869
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_116(int iParam0) //Position: 0x5D62 / 23906
{
	if (!Function_31(iParam0))
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
			Function_100(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_100(25, 1, 0);
			Function_121(1, 1, 1);
			break;
		
		case 0x00000015:
			Function_121(50, 1, 1);
			Function_100(250, 1, 0);
			Function_117(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_121(50, 1, 1);
			Function_100(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_121(5, 1, 1);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_100(75, 1, 0);
			Function_117(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_121(5, 1, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_121(25, 1, 1);
			Function_100(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_121(10, 1, 1);
			Function_100(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_100(50, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_100(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_121(20, 1, 1);
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_121(25, 1, 1);
			Function_100(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_121(10, 1, 1);
			Function_100(150, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_100(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_117(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_117(100, 1, 0);
			Function_121(5, 1, 1);
			break;
		
		case 0x0000000F:
			Function_121(3, 1, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_117(125, 1, 0);
			Function_100(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_121(50, 1, 1);
			Function_100(100, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_121(50, 1, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_121(75, 1, 1);
			Function_100(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_100(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_100(250, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_100(75, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_100(200, 1, 0);
			Function_117(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_100(75, 1, 0);
			Function_117(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_100(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_121(50, 1, 1);
			Function_100(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_121(100, 1, 1);
			Function_100(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_100(200, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_100(300, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_100(500, 1, 0);
			Function_117(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_100(150, 1, 0);
			Function_117(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_117(25, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x0000002A:
			Function_100(150, 1, 0);
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_117(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_117(150, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x00000035:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_117(150, 1, 0);
			Function_121(100, 1, 1);
			break;
		
		case 0x00000032:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_117(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_117(int iParam0, bool bParam1, bool bParam2) //Position: 0x6231 / 25137
{
	int iVar0;
	bool bVar1;
	
	if (Function_112(0) && !Global_6623)
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
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
		return;
	}
	iVar0 = Function_68(1);
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
			Function_107(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_36(Global_119936, 1))
				{
					Function_33(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_120(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_36(Global_119936, 2))
				{
					Function_33(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_90(1, bVar1, 0, 0);
	}
	else
	{
		Function_119(1, (4294967295 * bVar1), 0);
	}
	if (Function_68(1) <= 4294962296)
	{
		Function_53(1, 4294962296, 0);
	}
	else if (Function_68(1) >= 5000)
	{
		Function_53(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_64(1));
	iVar0 = Function_68(1);
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_102(2, Function_118(Global_21369.f_244), 0);
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
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_102(2, Function_118(Global_21369.f_244), 1);
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
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_102(2, Function_118(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_102(2, Function_118(Global_21369.f_244), 1);
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
				Function_102(2, Function_118(Global_21369.f_244), 0);
			}
			break;
	}
	Function_101(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_118(int iParam0) //Position: 0x6558 / 25944
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

int Function_119(int iParam0, bool bParam1, int iParam2) //Position: 0x65FB / 26107
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
	Function_66(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_120(int iParam0, bool bParam1) //Position: 0x67F8 / 26616
{
	bool bVar0;
	int iVar1;
	
	Function_119(iParam0, bParam1, 0);
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
	iVar1 = Function_108(iParam0, 4294967295);
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
	iVar1 = Function_103();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

int Function_121(bool bParam0, bool bParam1, bool bParam2) //Position: 0x69A3 / 27043
{
	bool bVar0;
	
	bVar0 = Function_68(0);
	if ((Function_68(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_90(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_68(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_90(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_68(597) + Function_68(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

void Function_122(int iParam0, var uParam1, bool bParam2) //Position: 0x6A75 / 27253
{
	struct<4> Var0;
	
	if (!Function_31(iParam0))
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
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
			Function_227(&(Global_43791[Global_46816[2]]), 256);
			break;
		
		case 0x00000015:
			Function_162(9, &bParam2, 4);
			Function_164(Global_46760[0]);
			break;
		
		case 0x00000017:
			Function_164(Global_46760[0]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_227(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_164(Global_46760[0]);
			break;
		
		case 0x0000000B:
			if (uParam1 <= 3)
			{
				uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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
			Function_136(&Global_119935, 0x2000000);
			Function_136(&Global_119935, 0x4000000);
			Function_136(&Global_119935, 4096);
			Function_136(&Global_119935, 8);
			Function_136(&Global_119935, 8388608);
			Function_136(&Global_119935, 524288);
			Function_136(&Global_119935, 1048576);
			break;
		
		case 0x0000000D:
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			break;
		
		case 0x0000000E:
			Function_227(&(Global_43791[Global_46760[4]]), 256);
			Function_164(Global_46760[4]);
			Function_164(Global_46796[0]);
			Function_137(&(Global_43791[Global_46796[0]]), 32768);
			Function_227(&(Global_43791[Global_46796[0]]), 256);
			break;
		
		case 0x00000012:
			Function_164(Global_46760[0]);
			Function_164(Global_46760[5]);
			Function_162(16, &bParam2, 4);
			break;
		
		case 0x00000013:
			Function_164(Global_46796[3]);
			Function_137(&(Global_43791[Global_46796[3]]), 32768);
			Function_227(&(Global_43791[Global_46796[3]]), 256);
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
			Function_227(&(Global_43791[Global_46838[1]]), 256);
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
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
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
			Function_227(&(Global_43791[Global_46850[2]]), 256);
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
				if (!Function_134(15))
				{
					Function_129(15, 0, 1);
				}
			}
			Function_89(2, 26);
			Function_227(&(Global_43791[Global_46914[1]]), 256);
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
			Function_123(11);
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

void Function_123(int iParam0) //Position: 0x7390 / 29584
{
	var uVar0;
	
	if (!Function_79(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 80))
	{
		Function_128(&Global_26200[iParam014] + 80, 0);
	}
	if (IS_DOOR_VALID(&Global_26200[iParam014] + 88))
	{
		Function_128(&Global_26200[iParam014] + 88, 0);
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
			Function_124(Global_26200[iParam014].f_48, 16, 0, 0);
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

void Function_124(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x750D / 29965
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
		Function_126(Function_127(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		Var3 = Function_126(Function_127(StackVal, Vector(&iParam2, 0.0f, &iParam3)));
		iVar0 = 0;
		while (iVar0 <= Global_16865)
		{
			if (StackVal == iParam1)
			{
				Function_126(StackVal);
				Var1 = Function_126(StackVal);
				if (Function_125(StackVal, StackVal, Var1, Var3))
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

bool Function_125(struct<2> Param0, struct<2> Param2) //Position: 0x7618 / 30232
{
	struct<2> Var0;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Param2, StackVal);
	if (VMAG(Var0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_126(int iParam0) //Position: 0x7644 / 30276
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

var Function_127(vector3 vParam0) //Position: 0x769B / 30363
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

void Function_128(var uParam0, int iParam1) //Position: 0x76E9 / 30441
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

void Function_129(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7744 / 30532
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
	if (!Function_134(bParam0))
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
		Function_90(457, 1, 0, 0);
		Function_132(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
				Function_42(1, 0);
			}
			else
			{
				Function_130();
			}
		}
	}
	return;
}

void Function_130() //Position: 0x78E5 / 30949
{
	return;
}

bool Function_131(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x78EB / 30955
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

void Function_132(bool bParam0, int iParam1) //Position: 0x799A / 31130
{
	if (!Function_133(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_133(int iParam0) //Position: 0x79EF / 31215
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_134(int iParam0) //Position: 0x7A05 / 31237
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_135(int iParam0, int iParam1) //Position: 0x7A56 / 31318
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

void Function_136(var uParam0, int iParam1) //Position: 0x7A83 / 31363
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_137(var uParam0, int iParam1) //Position: 0x7A94 / 31380
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7AA5 / 31397
{
	char* cVar0[32];
	
	if (!Function_133(bParam0))
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
		Function_90(456, 1, 0, 0);
		Function_132(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
				Function_42(1, 5);
			}
			else
			{
				Function_130();
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
			if (!Function_36(Global_119934, 2))
			{
				Function_33(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_139(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7C01 / 31745
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

bool Function_140() //Position: 0x7C8C / 31884
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_141(bool bParam0) //Position: 0x7CB9 / 31929
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

int Function_142(int iParam0) //Position: 0x7E69 / 32361
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

void Function_143(char* cParam0, bool bParam1) //Position: 0x7EC0 / 32448
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

var Function_144(int iParam0) //Position: 0x7EE5 / 32485
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

bool Function_145(bool bParam0, bool bParam1) //Position: 0x7F3B / 32571
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

bool Function_146(bool bParam0) //Position: 0x7F9A / 32666
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_147(int iParam0) //Position: 0x7FA6 / 32678
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_148(int iParam0) //Position: 0x7FC2 / 32706
{
	if (!Function_133(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_135(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_149() //Position: 0x8044 / 32836
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_14(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_150(int iParam0, int iParam1) //Position: 0x8074 / 32884
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_93259[iParam05].f_32 = iParam1;
	Function_151(iParam0, iParam1);
	Function_33(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_151(int iParam0, int iParam1) //Position: 0x80E9 / 33001
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_97968[iParam0] = iParam1;
	return 1;
}

int Function_152(int iParam0, int iParam1) //Position: 0x8146 / 33094
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_93661[iParam05].f_32 = iParam1;
	Function_153(iParam0, iParam1);
	Function_33(&Global_54076, 1, 4, 1);
	return 1;
}

int Function_153(int iParam0, int iParam1) //Position: 0x81B9 / 33209
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_98050[iParam0] = iParam1;
	return 1;
}

void Function_154(int iParam0) //Position: 0x8214 / 33300
{
	var uVar0;
	var uVar1;
	
	if (!Function_79(iParam0))
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
			Function_90(468, 1, 0, 0);
			Function_89(6, (16 + iParam0));
			Global_26200[iParam014].f_40 = 3;
			Function_139("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_124(Global_26200[iParam014].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_138(14, 1, 0, 0, 0);
				Function_155(14, 1, 0, 0, 0);
			}
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
				Function_42(1, 6);
			}
			else
			{
				Function_130();
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
			Function_90(468, 1, 0, 0);
			Global_26200[iParam014].f_40 = 3;
			Function_89(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_155(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x84D4 / 34004
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
	if (!Function_147(3) || uParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_135(bParam0, 2))
	{
		Function_90(456, 1, 0, 0);
		Function_132(bParam0, 2);
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
		Function_132(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_131(0, 0, 1, 1))
			{
				Function_43(1);
				Function_42(1, 0);
			}
			else
			{
				Function_130();
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
			if (!Function_36(Global_119934, 2))
			{
				Function_33(&Global_54076, 2, 1, 0);
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
				Function_89(2, 24);
				break;
			
			case 0x00000003:
				Function_89(2, 25);
				break;
			
			case 0x0000000F:
				Function_89(2, 26);
				break;
			
			case 0x0000000D:
				Function_89(2, 27);
				break;
			
			case 0x0000000E:
				Function_89(2, 28);
				break;
			}
	}
}

void Function_156(int iParam0, bool bParam1) //Position: 0x8773 / 34675
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

void Function_157() //Position: 0x87E2 / 34786
{
	if (Function_133(Global_42827))
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

int Function_158(int iParam0, int iParam1) //Position: 0x8862 / 34914
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
					if (Function_29(6, 0) || Function_29(12, 0))
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
					else if (iVar14 && Function_29(5, 0))
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
					else if (iVar15 && Function_29(26, 0))
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
					else if (Function_29(17, 0) && iVar13)
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
					else if ((Function_29(6, 0) && Function_159(18)) && iVar17)
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
					else if ((Function_29(9, 0) && Function_159(16)) && iVar17)
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
					else if (Function_29(8, 0) && iVar17)
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
	if (Function_75(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_75(StackVal, vVar2))
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
	if (!Function_75(StackVal, vVar2))
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

int Function_159(int iParam0) //Position: 0x94C5 / 38085
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_160(int iParam0) //Position: 0x94DA / 38106
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

void Function_161(var uParam0, int iParam1) //Position: 0x9529 / 38185
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

void Function_162(bool bParam0, bool bParam1, int iParam2) //Position: 0x9581 / 38273
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

bool Function_163(int iParam0, int iParam1) //Position: 0x95F4 / 38388
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_164(int iParam0) //Position: 0x9608 / 38408
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
		Function_90(473, 1, 0, 0);
		iVar0 = Function_165(iParam0);
		if (iVar0 == Global_46722[0])
		{
			Function_90(474, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[1])
		{
			Function_90(475, 1, 0, 0);
		}
		else if (iVar0 == Global_46722[2])
		{
			Function_90(476, 1, 0, 0);
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
		Function_89(iVar2, iVar1);
	}
	else if (iParam0 == Global_46926[9])
	{
		Function_89(7, 30);
	}
	if (Function_64(473) <= Function_65(473))
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
		{
			AWARD_ACHIEVEMENT(30);
		}
	}
	return;
}

var Function_165(int iParam0) //Position: 0x96F9 / 38649
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_86(iParam0))
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

bool Function_166(var uParam0, int iParam1) //Position: 0x9751 / 38737
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_167(bool bParam0, bool bParam1, int iParam2) //Position: 0x976E / 38766
{
	if (!Function_168(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_51(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_51(), bParam0, 1.0f, &iParam2, 1);
		return 1;
	}
	if (&bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_51(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, &iParam2);
		return 1;
	}
	return 1;
}

bool Function_168(int iParam0) //Position: 0x97C8 / 38856
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_169(bool bParam0) //Position: 0x97DA / 38874
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

void Function_170(struct<185> Param0) //Position: 0x980E / 38926
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
			Function_171(4, 0, 0);
		}
	}
	return;
}

void Function_171(bool bParam0, var uParam1, int iParam2) //Position: 0x9879 / 39033
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
		Function_172(Global_26182, &uVar0, 1);
	}
	return;
}

void Function_172(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9963 / 39267
{
	int iVar0;
	
	Function_174(bParam0);
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
	Function_173();
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

void Function_173() //Position: 0x9AE2 / 39650
{
	Global_26174.f_20 = 0.0f;
	return;
}

void Function_174(int iParam0) //Position: 0x9AEE / 39662
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

void Function_175() //Position: 0x9B34 / 39732
{
	Function_186();
	Function_181();
	Function_180();
	Function_179();
	Function_178();
	Function_177();
	Function_176();
	return;
}

void Function_176() //Position: 0x9B4F / 39759
{
	Function_182(&iLocal_844 + 8);
	RELEASE_LAYOUT_REF(&iLocal_844);
	return;
}

void Function_177() //Position: 0x9B64 / 39780
{
	Function_182(&iLocal_764 + 8);
	RELEASE_LAYOUT_REF(&iLocal_764);
	return;
}

void Function_178() //Position: 0x9B79 / 39801
{
	Function_182(&iLocal_800 + 8);
	RELEASE_LAYOUT_REF(&iLocal_800);
	return;
}

void Function_179() //Position: 0x9B8E / 39822
{
	Function_182(&iLocal_730 + 8);
	RELEASE_LAYOUT_REF(&iLocal_730);
	return;
}

void Function_180() //Position: 0x9BA3 / 39843
{
	Function_182(&iLocal_680 + 8);
	RELEASE_LAYOUT_REF(&iLocal_680);
	return;
}

void Function_181() //Position: 0x9BB8 / 39864
{
	Function_182(&iLocal_610 + 8);
	RELEASE_LAYOUT_REF(&iLocal_610);
	return;
}

void Function_182(int iParam0) //Position: 0x9BCD / 39885
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_183(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_183(struct<2>[] Param0, int iParam1) //Position: 0x9BF5 / 39925
{
	if (Function_185(&(Param0[iParam12]), 4))
	{
		if (Function_185(&(Param0[iParam12]), 1))
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
			Function_184(&(Param0[iParam12]), 1);
			Function_184(&(Param0[iParam12]), 2);
			Function_184(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_184(struct<13> Param0) //Position: 0x9D40 / 40256
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_185(struct<13> Param0) //Position: 0x9D5D / 40285
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_186() //Position: 0x9D7B / 40315
{
	Function_182(&iLocal_4 + 8);
	Function_182(&iLocal_4 + 176);
	Function_182(&iLocal_4 + 200);
	Function_182(&iLocal_4 + 480);
	RELEASE_LAYOUT_REF(&iLocal_4);
	return;
}

void Function_187() //Position: 0x9DA4 / 40356
{
	Function_182(&iLocal_4 + 480);
	return;
}

void Function_188() //Position: 0x9DB2 / 40370
{
	Function_182(&iLocal_4 + 200);
	return;
}

void Function_189() //Position: 0x9DBF / 40383
{
	Function_182(&iLocal_4 + 176);
	return;
}

void Function_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, bool bParam7) //Position: 0x9DCC / 40396
{
	if (!IS_GAME_RESETTING())
	{
		STREAMING_RELEASE_MAIN_POI();
	}
	RESET_TIME_SINCE_LAST_INPUT(Function_218());
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
	Function_217();
	CLEAR_PRINTED_OBJECTIVE();
	Function_216();
	Function_214(0);
	Function_213();
	HUD_COUNTER_DISPLAY(0);
	HUD_TIMER_DISPLAY(0);
	HUD_SET_SHOOT_BLIP_MAX_DISTANCE(1112014848);
	Function_212();
	Function_211();
	Function_217();
	ENABLE_JOURNAL_REPLAY(1);
	Function_210(1);
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
		Function_209(&Global_54076);
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
	Function_206(Global_42825);
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
	Function_205();
	Function_204(1178687);
	Function_202(33039);
	Function_201(0x218003f);
	Function_226(4194560);
	Function_200();
	Function_199();
	Global_38379 = GET_CURRENT_GAME_TIME();
	Global_99147 = 0;
	if (&bParam3)
	{
		Function_196(0, 1, 1);
	}
	else
	{
		Function_196(0, 1, 1);
	}
	Function_195();
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
	Function_191();
	if (&bParam4)
	{
		CAMERA_RESET(0);
	}
	CLEAR_MISSION_INFO();
	Function_39(&Global_21369 + 72 + 32, 16);
}

void Function_191() //Position: 0x9FD8 / 40920
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
		if (Function_194() > 3)
		{
			bVar0 *= 2;
		}
		Function_192(StackVal, 0, 0, Function_5(bVar0), 0);
	}
	return;
}

void Function_192(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xA02F / 41007
{
	var uVar0;
	
	uVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
	if (IS_EARLIER_THAN(&Global_39922 + 148[iParam0], &uVar0) || Function_193(&Global_39922 + 148[iParam0]))
	{
		*(&Global_39922 + 148[iParam0]) = &uVar0;
	}
}

var Function_193(bool bParam0) //Position: 0xA07F / 41087
{
	return (((GET_DAY(&bParam0) != 0 && GET_HOUR(&bParam0) != 0) && GET_MINUTE(&bParam0) != 0) && GET_SECOND(&bParam0) != 1);
}

int Function_194() //Position: 0xA0A8 / 41128
{
	return Global_21369.f_248;
}

void Function_195() //Position: 0xA0B3 / 41139
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 146)
	{
		Function_227(&(Global_43791[iVar0]), 262144);
		iVar0++;
	}
	return;
}

void Function_196(int iParam0, bool bParam1, int iParam2) //Position: 0xA0DD / 41181
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
		if (Function_86(Global_43789))
		{
			Function_137(&(Global_43791[Global_43789]), 131072);
			Function_227(&(Global_43791[Global_43789]), 2097152);
			Function_197(Global_43789);
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
					Function_227(&(Global_43791[iVar0]), 2097155);
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

void Function_197(int iParam0) //Position: 0xA1E9 / 41449
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_198())
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

bool Function_198() //Position: 0xA268 / 41576
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

void Function_199() //Position: 0xA2D1 / 41681
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

void Function_200() //Position: 0xA2F7 / 41719
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

void Function_201(int iParam0) //Position: 0xA31D / 41757
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

void Function_202(int iParam0) //Position: 0xA330 / 41776
{
	Function_203(&Global_43580, iParam0);
	return;
}

void Function_203(var uParam0, int iParam1) //Position: 0xA33E / 41790
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_204(bool bParam0) //Position: 0xA35D / 41821
{
	if (Function_14(bParam0, 1) && !Function_14(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || bParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_205() //Position: 0xA38A / 41866
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

void Function_206(int iParam0) //Position: 0xA402 / 41986
{
	int iVar0;
	int iVar1;
	
	if (!Function_133(iParam0))
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
		Function_207(78, 1, 1);
		if (!Function_36(Global_119935, 64))
		{
			Function_33(&Global_54076, 64, 2, 0);
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

int Function_207(bool bParam0, bool bParam1, int iParam2) //Position: 0xA538 / 42296
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_208(bParam0), Function_51()) == 0)
		{
			ADD_ITEM(Function_208(bParam0), Function_51(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_208(bParam0), Function_51(), &iParam2);
	return 1;
}

var Function_208(bool bParam0) //Position: 0xA586 / 42374
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

void Function_209(int iParam0) //Position: 0xA67A / 42618
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

void Function_210(bool bParam0) //Position: 0xA6FD / 42749
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

void Function_211() //Position: 0xA774 / 42868
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

void Function_212() //Position: 0xA7B8 / 42936
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

void Function_213() //Position: 0xA7FC / 43004
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_214(int iParam0) //Position: 0xA812 / 43026
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
	}
	if (!Function_215())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_215() //Position: 0xA852 / 43090
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

void Function_216() //Position: 0xA877 / 43127
{
	Global_15862 = 0.0f;
	return;
}

void Function_217() //Position: 0xA881 / 43137
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

int Function_218() //Position: 0xA8AC / 43180
{
	var uVar0;
	
	uVar0 = Function_51();
	if (IS_ACTOR_VALID(&uVar0))
	{
		return GET_PLAYER_PADINDEX(&uVar0);
	}
	return 0;
}

void Function_219() //Position: 0xA8C9 / 43209
{
	MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
	return;
}

void Function_220(int iParam0) //Position: 0xA8D2 / 43218
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

int Function_221(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4) //Position: 0xA93A / 43322
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
		Function_223(&Global_15402[iParam014] + 8);
		UNK_0x99AFD2D1(&Global_15402[iParam014] + 8, 0, 0);
		AI_SPEECH_SET_ALLOW_CONTEXT_FOR_ACTOR(&Global_15402[iParam014] + 8, 12, 1);
		DEACTIVATE_EMERGENCY_TELEPORT_FOR_ACTOR(&Global_15402[iParam014] + 8);
		AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(&Global_15402[iParam014] + 8, true);
		LIMIT_BLOOD_ON_ACTOR(&Global_15402[iParam014] + 8, 4294967295);
		AI_SET_NAV_FAILSAFE_MOVEMENT_ENABLED(&Global_15402[iParam014] + 8, 0);
		Function_222(&Global_15402[iParam014] + 8);
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

void Function_222(bool bParam0) //Position: 0xAC7C / 44156
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

void Function_223(var uParam0) //Position: 0xACAF / 44207
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(&uParam0);
	return;
}

void Function_224() //Position: 0xACC6 / 44230
{
	Function_181();
	Function_180();
	Function_179();
	Function_178();
	Function_177();
	Function_176();
	if (iLocal_1658 >= 4294967295)
	{
		TRAIN_RELEASE_TRAIN(iLocal_1658, 200.0f);
		iLocal_1658 = 4294967295;
	}
	return;
}

void Function_225(int iParam0) //Position: 0xACF4 / 44276
{
	int iVar0;
	
	if (IS_OBJECT_VALID(&iParam0))
	{
		iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_OBJECT(&iParam0);
		}
	}
	return;
}

void Function_226(int iParam0) //Position: 0xAD27 / 44327
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

void Function_227(var uParam0, int iParam1) //Position: 0xAD44 / 44356
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

bool Function_228() //Position: 0xAD5E / 44382
{
	if (IS_EXITFLAG_SET())
	{
		Function_592(bLocal_1018);
		Function_588(StackVal, 4, &bLocal_1070, &bLocal_1018, Function_593(bLocal_1018), Function_592(bLocal_1018), 0);
		return 0;
	}
	Function_587(StackVal, StackVal, StackVal, StackVal, StackVal, Local_872, bLocal_1018, iLocal_1019, &bLocal_1071, &bLocal_1069, &bLocal_1070);
	if (bLocal_1018 >= 99)
	{
		if (Function_585(&iLocal_1500) < 1.0f)
		{
			Function_584(&iLocal_1500);
		}
	}
	if (bLocal_1018 == 99 && bLocal_1018 == 100)
	{
		if (!IS_ACTOR_ALIVE(&Global_54076))
		{
			Function_592(bLocal_1018);
			Function_588(StackVal, 1, &bLocal_1070, &bLocal_1018, Function_593(bLocal_1018), Function_592(bLocal_1018), 0);
			return 1;
		}
		if (iLocal_1019 < 4 && iLocal_1019 > 106)
		{
			if (Function_564(&Local_1126, &uLocal_1072, &uLocal_1338, &uLocal_1021, uLocal_1346))
			{
				if (Function_553(&uLocal_1338))
				{
					Function_592(bLocal_1018);
					Function_588(StackVal, 5, &bLocal_1070, &bLocal_1018, Function_593(bLocal_1018), Function_592(bLocal_1018), 0);
					return 1;
				}
			}
		}
		if (Global_6646)
		{
			Function_592(bLocal_1018);
			Function_588(StackVal, 2, &bLocal_1070, &bLocal_1018, Function_593(bLocal_1018), Function_592(bLocal_1018), 0);
			return 1;
		}
		if (Function_552(2048))
		{
			Function_592(bLocal_1018);
			Function_588(StackVal, 3, &bLocal_1070, &bLocal_1018, Function_593(bLocal_1018), Function_592(bLocal_1018), 0);
			return 1;
		}
		if (iLocal_1019 < 4 && iLocal_1019 > 106)
		{
			if (!IS_ACTOR_ALIVE(&iLocal_1023))
			{
				Function_551("Henchman_dead");
				Function_592(bLocal_1018);
				Function_588(StackVal, 5, &bLocal_1070, &bLocal_1018, Function_593(bLocal_1018), Function_592(bLocal_1018), 0);
				return 1;
			}
		}
	}
	switch (bLocal_1018)
	{
		case 0x00000063:
			Function_521();
			break;
		
		case 0x00000000:
			Function_487();
			break;
		
		case 0x00000001:
			Function_373();
			break;
		
		case 0x00000002:
			Function_313();
			break;
		
		case 0x00000008:
			Function_284();
			break;
		
		case 0x00000065:
			Function_236();
			break;
		
		case 0x00000064:
			if (Function_235(&bLocal_1070))
			{
				Function_1();
				return 0;
			}
			break;
		
		default:
			if (!Function_234(&bLocal_1018, &iLocal_1019, &iLocal_1006))
			{
				Function_1();
				return 0;
			}
			break;
	}
	if (bLocal_1071)
	{
		Function_233(&bLocal_1071, 4);
		Function_1();
		return 0;
	}
	if (bLocal_1069)
	{
		Function_229(&bLocal_1069, 8);
		Function_1();
		return 0;
	}
	if (bLocal_1070 && bLocal_1018 == 100)
	{
		Function_592(bLocal_1018);
		Function_588(StackVal, 5, &bLocal_1070, &bLocal_1018, Function_593(bLocal_1018), Function_592(bLocal_1018), 0);
	}
	return 1;
}

void Function_229(var uParam0, int iParam1) //Position: 0xAF7E / 44926
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(&iParam1);
	uParam0 = 1;
	return;
}

void Function_230(int iParam0) //Position: 0xAFA3 / 44963
{
	int iVar0;
	
	Global_10967 = iParam0;
	iVar0 = GET_EXP_MODE_PROMPT_STATE();
	if (iParam0 == 1)
	{
		Function_551("missionFail_playerDead");
		if (iVar0 == 3 && 2 == GET_PLAYER_COMBATMODE())
		{
			if (((Function_232(2) || Function_232(8)) || Function_232(9)) || Function_232(10))
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
		Function_551("missionFail_playerWanted");
	}
	else if (iParam0 == 3)
	{
		Function_551("missionFail_playerArrested");
	}
	else if (iParam0 == 6)
	{
		Function_551("");
	}
	else if (iParam0 == 8)
	{
		Function_231();
		Function_9();
	}
	else if (iParam0 == 4)
	{
		Function_231();
	}
	return;
}

void Function_231() //Position: 0xB09A / 45210
{
	Global_53524.f_48 = 4294967295;
	return;
}

int Function_232(int iParam0) //Position: 0xB0A6 / 45222
{
	int iVar0;
	
	if (!Function_31(iParam0))
	{
		return 0;
	}
	iVar0 = Function_30(iParam0);
	if (!Function_20(Function_30(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_233(var uParam0, int iParam1) //Position: 0xB0DC / 45276
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_230(&iParam1);
	uParam0 = 1;
	return;
}

bool Function_234(var uParam0, var uParam1, int iParam2) //Position: 0xB101 / 45313
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

bool Function_235(int iParam0) //Position: 0xB14A / 45386
{
	if (Global_6638)
	{
		iParam0 = 1;
		return 1;
	}
	return 0;
}

void Function_236() //Position: 0xB15E / 45406
{
	switch (iLocal_1019)
	{
		case 0x00000000:
			if (bLocal_1396)
			{
				Function_280(1);
			}
			iLocal_1400 = 0;
			uLocal_870 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
			if (IS_LAYOUTREF_VALID(&uLocal_870))
			{
				if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&uLocal_870, "dzcv_BB_Restriction")))
				{
					ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&uLocal_870, "dzcv_BB_Restriction"));
					ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&uLocal_870, "dzcv_BB_Restriction"));
				}
			}
			DISABLE_WORLD_SECTOR("butterBridgeB");
			DISABLE_WORLD_SECTOR("butterBridgeA");
			ENABLE_WORLD_SECTOR("butterBridgeC");
			ENABLE_WORLD_SECTOR("butterBridgeD");
			ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			Function_584(&iLocal_1027);
			iLocal_1019 = 1;
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && Function_279())
			{
				Function_277(StackVal, &iLocal_4, Vector(32,13f, 97,27f, 2756,32f), &iLocal_4 + 1328[0], 0, -680,85f, 15,48f, 3706,21f, 1, 1);
				Function_275(&uLocal_1680, 0, 0, 4294967295, 4294967295);
				Function_584(&iLocal_1027);
				iLocal_1019 = 3;
			}
			break;
		
		case 0x00000003:
			DISABLE_WORLD_SECTOR("butterBridgeB");
			if (!IS_PHYSINST_VALID(&cLocal_1681))
			{
				cLocal_1681 = LOCATE_PHYSINST_OF_TYPE(StackVal, Vector(31,7f, 94,5f, 2739.0f), 100.0f, "p_gen_butterbridge02x", 1);
			}
			else
			{
				uLocal_1444 = GET_OBJECT_FROM_PHYSINST(&cLocal_1681);
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					PLAY_SIMPLE_PROP_ANIMATION(&uLocal_1444, "bridgeExplode", 0, 0, 1.0f, 0.0f);
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
			}
			if (Function_237("$/cutscene/MEXARMY02_CS02_B/MEXARMY02_CS02_B", &iLocal_1006, &Local_872, &bLocal_1018, 51474, 51467, 49242, 49235, 48985, 48978, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_584(&iLocal_1027);
				iLocal_1019 = 106;
			}
			break;
		
		case 0x0000006A:
			Function_551("mexarmy02_bridge_destroyed");
			DECOR_SET_BOOL(&Global_54076, "resetignorefadestate", 1);
			bLocal_1070 = true;
			break;
	}
	return;
}

bool Function_237(bool bParam0, int iParam1, struct<41> Param2) //Position: 0xB42D / 46125
{
	if (!&bParam15)
	{
		Function_247(&iParam1, &iParam10);
	}
	switch (iParam1)
	{
		case 0x000003E8:
			if (bParam3 != 99 && (Function_246(&Param2) || Param2.f_40 < 1))
			{
				iParam1 = 1106;
				return 0;
			}
			if (!CUTSCENE_MANAGER_DOES_CUTSCENE_EXIST(&bParam0))
			{
				iParam1 = 1106;
				return 0;
			}
			if (CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				CUTSCENE_MANAGER_LOAD_CUTSCENE(&bParam0, 0, &iParam11, &iParam12, &iParam13, &iParam14);
				Call_Loc(iParam4);
				Global_99147 = 1;
				if (DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen"))
				{
					DECOR_REMOVE(&Global_54076, "globalcutloadscreen");
				}
				Function_584(&iParam1 + 4);
				iParam1 = 1002;
			}
			else if (!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())
			{
				if (CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
				{
					if (!STRINGS_ARE_EQUAL(CUTSCENE_MANAGER_GET_LOADED_CUTFILE(), &bParam0) || !Function_245())
					{
						if (!HUD_IS_FADED() && !HUD_IS_FADING())
						{
							HUD_FADE_OUT(1.0f, 1f, 1);
						}
						Function_244(1);
						CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
					}
					else
					{
						Call_Loc(iParam4);
						Call_Loc(iParam5);
						Global_99147 = 0;
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_584(&iParam1 + 4);
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
					Function_244(1);
					CUTSCENE_MANAGER_STOP_CUTSCENE(1, 2);
				}
			}
			break;
		
		case 0x000003EA:
			if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() && !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED()) || Function_585(&iParam1 + 4) <= 50.0f)
			{
				LOG_ERROR("Cutscene either took too long to load or was missing assets (check TTY)! Skipping...");
				iParam1 = 1105;
			}
			if (HUD_IS_FADED())
			{
				if ((Function_585(&iParam1 + 4) < 15.0f && !DECOR_CHECK_EXIST(&Global_54076, "globalcutloadscreen")) && !UI_ISACTIVE("LoadingScreen"))
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
						Function_242(&Global_99170, &Global_10996);
						if (!UI_ISACTIVE("nCutscenes"))
						{
							UI_PUSH("nCutscenes");
						}
						HUD_CLEAR_SMALL_TEXT_QUEUE();
						PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
						HUD_CLEAR_OBJECTIVE_QUEUE();
						PRINT_OBJECTIVE_B("Common_Null", 0,1f, 0, 2, 1, 0, 0, 0);
						Global_99147 = 0;
						Function_244(0);
						STREAMING_RELEASE_MAIN_POI();
						CUTSCENE_MANAGER_PLAY_CUTSCENE();
						CUTSCENE_MANAGER_SET_SKIP_UI_STACK_POP(0);
						Function_584(&iParam1 + 4);
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
						Function_241(1.0f);
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
						Function_239();
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
					Function_238(1, 1);
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
			if ((HUD_IS_FADED() && bParam3 == 99) && !Function_246(&Param2))
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iParam1 = 1105;
			break;
	}
	return 0;
}

void Function_238(var uParam0, bool bParam1) //Position: 0xBA8F / 47759
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
		Function_205();
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

void Function_239() //Position: 0xBB5E / 47966
{
	if (UI_ISACTIVE("nCutscenes"))
	{
		UI_POP("nCutscenes");
	}
	Function_240();
	PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	return;
}

void Function_240() //Position: 0xBBA3 / 48035
{
	HUD_CLEAR_BIG_TEXT_QUEUE();
	HUD_CLEAR_HELP_QUEUE();
	HUD_CLEAR_OBJECTIVE_QUEUE();
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	return;
}

void Function_241(bool bParam0) //Position: 0xBBB5 / 48053
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

void Function_242(var uParam0, int iParam1) //Position: 0xBBD2 / 48082
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
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT(Function_55(), &iParam1, 4294967295, 1);
	LOCATE_ACTORS_IN_VOLUME(&uParam0, &uVar0, 0, 1);
	bVar1 = false;
	while (bVar1 <= GET_OBJECTSET_SIZE(&uVar0))
	{
		uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &uVar0);
		if (IS_OBJECT_VALID(&uVar2))
		{
			iVar3 = GET_ACTOR_FROM_OBJECT(&uVar2);
			if ((&iVar3 == &Global_54076 && !Function_243(&iVar3)) && !ACTOR_IS_GRABBED_BY_CUTSCENE(&iVar3))
			{
				CUTSCENE_MANAGER_HIDE_ACTOR(&iVar3);
			}
		}
		bVar1++;
	}
	DESTROY_OBJECTSET(&uVar0);
	return;
}

bool Function_243(int iParam0) //Position: 0xBC64 / 48228
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

int Function_244(bool bParam0) //Position: 0xBC95 / 48277
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

bool Function_245() //Position: 0xBD58 / 48472
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

bool Function_246(struct<37> Param0) //Position: 0xBD95 / 48533
{
	return Param0.f_36;
}

void Function_247(var uParam0, int iParam1) //Position: 0xBDA0 / 48544
{
	Function_248(&uParam0, &iParam1, 0);
	return;
}

void Function_248(var uParam0, bool bParam1, bool bParam2) //Position: 0xBDB0 / 48560
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
			Function_249(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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
						if (!IS_STRING_VALID(&bParam2))
						{
							Function_249(0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1);
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

void Function_249(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5) //Position: 0xBF28 / 48936
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

int Function_250() //Position: 0xBF52 / 48978
{
	return 1;
}

int Function_251() //Position: 0xBF59 / 48985
{
	Function_252(2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
	return 1;
}

void Function_252(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, bool bParam10) //Position: 0xBF6E / 49006
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
		uVar0 = Function_51();
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
		Function_253();
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
	Function_238(&uParam9, &bParam10);
}

void Function_253() //Position: 0xC03E / 49214
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_254() //Position: 0xC053 / 49235
{
	return 1;
}

int Function_255() //Position: 0xC05A / 49242
{
	if (bLocal_1018 == 101)
	{
		if (!iLocal_1400)
		{
			Function_268(&Global_54076, &iLocal_4 + 1944[0], 1, 1, 1);
			if (SQUAD_IS_VALID(&iLocal_4 + 1288))
			{
				Function_267(&iLocal_4 + 1288);
			}
			Function_266();
			iLocal_1400 = 1;
		}
	}
	else if (bLocal_1018 == 8)
	{
		if (!iLocal_1400)
		{
			TRAIN_SET_TARGET_SPEED(iLocal_1658, 0.0f);
			if (IS_ACTOR_ALIVE(&iLocal_1025))
			{
				Function_268(&iLocal_1025, &iLocal_4 + 1880[1], 1, 1, 1);
			}
			iLocal_1400 = 1;
		}
	}
	else if (bLocal_1018 == 2)
	{
		if (!iLocal_1400)
		{
			GET_OBJECT_POSITION(&iLocal_4 + 1824[3], &Local_1353);
			if (Function_257(StackVal, Local_1353))
			{
				if (IS_ACTOR_VALID(&iLocal_1025))
				{
					Function_268(&iLocal_1025, &iLocal_4 + 1824[3], 1, 1, 1);
				}
				TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
				Function_256();
				if (IS_ACTOR_ALIVE(&iLocal_4 + 1056[02]))
				{
					SET_ACTOR_RIDEABLE(&iLocal_4 + 1056[02], 1);
				}
				iLocal_1400 = 1;
			}
		}
	}
	return 1;
}

void Function_256() //Position: 0xC14F / 49487
{
	*(&iLocal_4 + 1160) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 1136[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 980, Vector(-804.0f, 13,05098f, 3720f), Vector(0.0f, 222,874f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1136[02], &iLocal_4 + 1160);
	TASK_STAND_STILL(&iLocal_4 + 1136[02], -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&iLocal_4 + 1136[02], 3);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 1136[02], true);
	return;
}

bool Function_257(vector3 vParam0) //Position: 0xC1D0 / 49616
{
	if (!iLocal_1403)
	{
		if (IS_ACTOR_VALID(&iLocal_1025))
		{
			DESTROY_ACTOR(&iLocal_1025);
			return 0;
		}
		iLocal_1403 = 1;
	}
	if (iLocal_1403 == 1)
	{
		if (!IS_ACTOR_VALID(&iLocal_1025))
		{
			iLocal_1025 = Function_258(1, 1, vParam0.x, vParam0.y, vParam0.z, 0, 1, 0);
			return 0;
		}
		if (!MAKE_ACTOR_READY_FOR_ACTION(&iLocal_1025, 1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&iLocal_1025, false);
			return 0;
		}
	}
	return 1;
}

var Function_258(var uParam0, bool bParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7) //Position: 0xC23B / 49723
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
		Function_265(976, 0, 1);
	}
	bParam7 = &bParam7;
	if (!&bParam7)
	{
		if (!Function_264())
		{
			return "";
		}
	}
	if (!Function_262())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		bVar1 = IS_ACTOR_ALIVE(&Global_21369 + 72);
	}
	Function_205();
	if ((bVar1 && iParam6) && uParam0)
	{
		Function_261(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Var2 = Function_261(GET_OBJECT_FROM_ACTOR(&Global_21369 + 72));
		Function_261(GET_OBJECT_FROM_ACTOR(&Global_54076));
		Var4 = Function_261(GET_OBJECT_FROM_ACTOR(&Global_54076));
		iVar6 = Function_260(StackVal, Var2, 0, 1, 1);
		if (iVar6 != 4294967294 || iVar6 != 4294967295)
		{
		}
		else
		{
			iVar7 = Function_260(StackVal, Var4, 0, 1, 1);
			if (iVar6 != iVar7)
			{
				RELEASE_ACTOR(&Global_21369 + 72);
				if (!&bParam7)
				{
					(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), bVar0, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &iParam5, 0.0f));
					SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
				}
				else
				{
					*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), 993, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &iParam5, 0.0f));
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
				Var8 = Vector(&iParam2, &iParam3, &uParam4);
				if (!Function_75(StackVal, Var8))
				{
					TELEPORT_ACTOR(&Global_21369 + 72, &Var8, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (uParam0 || Global_6623))
	{
		if (!&bParam7)
		{
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), bVar0, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &iParam5, 0.0f));
			SNAP_OBJECT_TO_GROUND(&Global_21369 + 72, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_21369 + 72)->f_12 = (bVar0 - 976);
			}
			*(&Global_21369 + 72) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, FIND_NAMED_LAYOUT("PlayerLayout"), Function_55(), 993, Vector(&iParam2, &iParam3, &uParam4), Vector(0.0f, &iParam5, 0.0f));
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
		Function_259(&Global_21369 + 72, 0, 0, 0, 0, 0, 0);
	}
	return &Global_21369 + 72;
}

void Function_259(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xC598 / 50584
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

var Function_260(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC5E2 / 50658
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

struct<8> Function_261(bool bParam0) //Position: 0xC682 / 50818
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

bool Function_262() //Position: 0xC6AB / 50859
{
	if (Function_263() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

int Function_263() //Position: 0xC6C1 / 50881
{
	return Global_21369.f_244;
}

bool Function_264() //Position: 0xC6CC / 50892
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_265(var uParam0, bool bParam1, bool bParam2) //Position: 0xC6EC / 50924
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_78(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_78(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_266() //Position: 0xC71B / 50971
{
	if (IS_LAYOUTREF_VALID(&iLocal_730))
	{
		Function_182(&iLocal_730 + 8);
		DESTROY_LAYOUT(&iLocal_730);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_764))
	{
		DESTROY_LAYOUT(&iLocal_764);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_680))
	{
		Function_182(&iLocal_680 + 8);
		DESTROY_LAYOUT(&iLocal_680);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_800))
	{
		DESTROY_LAYOUT(&iLocal_800);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_844))
	{
		DESTROY_LAYOUT(&iLocal_844);
	}
	if (IS_LAYOUTREF_VALID(&iLocal_610))
	{
		Function_182(&iLocal_610 + 8);
		DESTROY_LAYOUT(&iLocal_610);
	}
	if (iLocal_1658 >= 4294967295)
	{
		TRAIN_DESTROY_TRAIN(iLocal_1658);
		iLocal_1658 = 4294967295;
	}
	return;
}

void Function_267(int iParam0) //Position: 0xC7B0 / 51120
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

void Function_268(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4) //Position: 0xC7FB / 51195
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

int Function_269() //Position: 0xC90B / 51467
{
	return 1;
}

int Function_270() //Position: 0xC912 / 51474
{
	bool bVar0;
	
	Function_271(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0x3f800000, 0);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_10996, "tempcutscenevol", 2,802597E-45f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_277(StackVal, &Global_10996, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

void Function_271(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, int iParam13) //Position: 0xC978 / 51576
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
	Function_253();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(&Global_54076, "iDrunk", false);
	if (&bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_51();
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
				TASK_OVERRIDE_SET_POSTURE(&bVar1, false);
			}
			SET_ACTOR_HEALTH(&bVar1, GET_ACTOR_MAX_HEALTH(&bVar1));
			SET_ACTOR_INVULNERABILITY(&bVar1, true);
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
				Function_274(&bVar1);
				uVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, GET_AMBIENT_LAYOUT(), Function_55(), 2,802597E-45f, Function_274(&bVar1), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 100.0f, 100.0f));
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
	if ((IS_OBJECT_VALID(Function_273()) || DECOR_CHECK_EXIST(&Global_54076, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_273()));
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
	if (Function_272(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x4000000);
	}
	if (Function_272(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_169(0x8000000);
	}
	SET_TREE_COST_MODIFIER(&fParam12);
	SET_USES_QUAD_IK_FIX(&iParam13);
}

bool Function_272(int iParam0) //Position: 0xCC2A / 52266
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_273() //Position: 0xCC46 / 52294
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

struct<8> Function_274(bool bParam0) //Position: 0xCCD4 / 52436
{
	struct<2> Var0;
	
	GET_POSITION(&bParam0, &Var0);
	return StackVal, Var0;
}

void Function_275(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xCCE6 / 52454
{
	if (uParam0 != iParam1)
	{
		uParam0 = iParam1;
		AUDIO_MUSIC_SET_MOOD(Function_276(uParam0), &iParam2, &iParam3, &iParam4);
	}
}

var Function_276(bool bParam0) //Position: 0xCD10 / 52496
{
	int iVar0;
	
	switch (bParam0)
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

void Function_277(float fParam0, struct<2> Param1, bool bParam3, bool bParam4, float fParam5, float fParam6, float fParam7, bool bParam8, bool bParam9) //Position: 0xD265 / 53861
{
	bool bVar0;
	var uVar1;
	struct<2> Var2;
	
	Var2 = &fParam5;
	Var2.f_4 = &fParam6;
	Var2.f_8 = &fParam7;
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
		if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&fParam0), "CutsceneVol")))
		{
			if (&bParam3 == FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&fParam0), "CutsceneVol"))
			{
				SET_OBJECT_POSITION(FIND_VOLUME_IN_LAYOUT(GET_LAYOUT_FROM_OBJECT(&fParam0), "CutsceneVol"), Param1);
			}
		}
	}
	else
	{
		bParam3 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &fParam0, "CutsceneVol", 2,802597E-45f, Param1, Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	}
	if (IS_VOLUME_VALID(&bParam3))
	{
		bVar0 = GET_MOST_RECENT_MOUNT(&Global_54076);
		uVar1 = GET_ACTOR_MOST_RECENT_VEHICLE(&Global_54076);
		if (!Global_6623)
		{
			if (IS_ACTOR_VALID(&bVar0))
			{
				GIVE_OBJECT_TO_LAYOUT(&bVar0, &fParam0);
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				Function_278(&uVar1, &fParam0);
			}
		}
		if (!Function_75(StackVal, Var2))
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

void Function_278(var uParam0, int iParam1) //Position: 0xD505 / 54533
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
			GIVE_OBJECT_TO_LAYOUT(&uVar4, &iParam1);
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
				GIVE_OBJECT_TO_LAYOUT(&uVar5, &iParam1);
			}
		}
		bVar3++;
	}
	return;
}

int Function_279() //Position: 0xD587 / 54663
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
			HUD_CLEAR_HELP_QUEUE();
		}
	}
	if ((CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || !CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		return 1;
	}
	return 0;
}

void Function_280(bool bParam0) //Position: 0xD5C0 / 54720
{
	Function_281(0, 0x40400000);
	Function_212();
	Function_211();
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 1.0f);
	SET_AMBIENT_FORCE_WAIT_STATE(0);
	if (&bParam0)
	{
		UI_SEND_EVENT("nloadStart");
	}
	return;
}

void Function_281(float fParam0, float fParam1) //Position: 0xD5F6 / 54774
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
	Function_283();
	Function_282();
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

void Function_282() //Position: 0xD707 / 55047
{
	if (DECOR_CHECK_EXIST(&Global_54076, "HorseStolen"))
	{
		DECOR_REMOVE(&Global_54076, "HorseStolen");
	}
	return;
}

void Function_283() //Position: 0xD73B / 55099
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

void Function_284() //Position: 0xD841 / 55361
{
	switch (iLocal_1019)
	{
		case 0x00000000:
			if (Function_312(bLocal_1018))
			{
				uLocal_870 = FIND_NAMED_LAYOUT("DiezCoronas_layout");
				iLocal_1400 = 0;
				if (IS_LAYOUTREF_VALID(&uLocal_870))
				{
					if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&uLocal_870, "dzcv_BB_Restriction")))
					{
						ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&uLocal_870, "dzcv_BB_Restriction"));
						ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(FIND_VOLUME_IN_LAYOUT(&uLocal_870, "dzcv_BB_Restriction"));
					}
				}
				DISABLE_WORLD_SECTOR("butterBridgeB");
				DISABLE_WORLD_SECTOR("butterBridgeA");
				ENABLE_WORLD_SECTOR("butterBridgeC");
				ENABLE_WORLD_SECTOR("butterBridgeD");
				ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				if (iLocal_1047[2] == 0)
				{
					iLocal_1520 = 6;
					Function_584(&iLocal_1027);
					iLocal_1019 = 1;
				}
				else
				{
					if (SQUAD_IS_VALID(&iLocal_4 + 1288))
					{
						Function_267(&iLocal_4 + 1288);
					}
					Function_275(&uLocal_1680, 0, 0, 4294967295, 4294967295);
					Function_277(StackVal, &iLocal_4, Vector(32,13f, 97,27f, 2756,32f), &iLocal_4 + 1328[0], 0, -680,85f, 15,48f, 3706,21f, 1, 1);
					iLocal_1520 = 6;
					Function_584(&iLocal_1027);
					iLocal_1019 = 3;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_584(&iLocal_1027);
				iLocal_1019 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_287())
			{
				Function_584(&iLocal_1027);
				if (SQUAD_IS_VALID(&iLocal_4 + 1288))
				{
					Function_267(&iLocal_4 + 1288);
				}
				Function_277(StackVal, &iLocal_4, Vector(32,13f, 97,27f, 2756,32f), &iLocal_4 + 1328[0], 0, -680,85f, 15,48f, 3706,21f, 1, 1);
				Function_275(&uLocal_1680, 0, 0, 4294967295, 4294967295);
				iLocal_1019 = 3;
			}
			break;
		
		case 0x00000003:
			DISABLE_WORLD_SECTOR("butterBridgeB");
			if (!IS_PHYSINST_VALID(&cLocal_1681))
			{
				cLocal_1681 = LOCATE_PHYSINST_OF_PARTIAL_TYPE(StackVal, Vector(31,7f, 94,5f, 2739.0f), 200.0f, "p_gen_butterbridge02x", 1);
			}
			else
			{
				uLocal_1444 = GET_OBJECT_FROM_PHYSINST(&cLocal_1681);
				if (CUTSCENE_MANAGER_GET_SCRIPT_EVENT_DATA() == 1)
				{
					PLAY_SIMPLE_PROP_ANIMATION(&uLocal_1444, "bridgeExplode", 0, 0, 1.0f, 0.0f);
					CUTSCENE_MANAGER_CLEAR_SCRIPT_EVENT();
				}
			}
			if (Function_237("$/cutscene/MEXARMY02_CS02_train/MEXARMY02_CS02_train", &iLocal_1006, &Local_872, &bLocal_1018, 51474, 56709, 49242, 56221, 48985, 48978, 0, 1, 1, 2, 1, 0, 1))
			{
				STREAMING_UNLOAD_SCENE();
				if (HUD_IS_FADED())
				{
					Function_241(0,5f);
				}
				iLocal_1019 = 106;
			}
			break;
		
		case 0x00000069:
			if (Function_585(&iLocal_1027) <= 0,5f)
			{
				Function_584(&iLocal_1027);
				iLocal_1019 = 106;
			}
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				bLocal_1069 = true;
			}
			break;
	}
	return;
}

int Function_285() //Position: 0xDB9D / 56221
{
	if (bLocal_1018 == 0)
	{
		Function_268(&iLocal_1450, &iLocal_4 + 1656[5], 1, 1, 1);
		Function_268(&iLocal_1452, &iLocal_4 + 1656[6], 1, 1, 1);
		TASK_VEHICLE_ENTER(&iLocal_1023, &bLocal_1448, 1, 1);
		TELEPORT_ACTOR_WITH_HEADING(StackVal, &Global_54076, Vector(-4378,868f, 38,704f, 4360,775f), 110,21f, 1, 1, 1);
		ACTOR_POP_NEXT_GAIT(&iLocal_1023, 1, 0);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
		iLocal_1688 = 1;
		iLocal_1693 = 0;
		iLocal_1694 = 0;
	}
	else if (bLocal_1018 == 2)
	{
		if (IS_ACTOR_VALID(&iLocal_1025))
		{
			Function_268(&iLocal_1025, &iLocal_4 + 1824[3], 1, 1, 1);
		}
		TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
		if (IS_ACTOR_ALIVE(&iLocal_4 + 1056[02]))
		{
			SET_ACTOR_RIDEABLE(&iLocal_4 + 1056[02], 1);
		}
		Function_268(&iLocal_1023, &iLocal_4 + 1824[2], 1, 1, 1);
		Function_268(&Global_54076, &iLocal_4 + 1824[0], 1, 0, 0);
		ACTOR_POP_NEXT_GAIT(&Global_54076, 1, 0);
		SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
		TASK_CLEAR(&iLocal_1023);
		TASK_GO_NEAR_OBJECT(&iLocal_1023, &iLocal_4 + 1824[1], 1.0f, 1, 0, 1);
		ENABLE_CHILD_SECTOR("cas_gunsmithBlacksmith01Props01x");
		ENABLE_CHILD_SECTOR("cas_horsestables01Props01x");
	}
	else if (bLocal_1018 == 8)
	{
		Function_268(&Global_54076, &iLocal_4 + 1944[1], 1, 0, 1);
		if (iLocal_1658 >= 4294967295)
		{
			GET_OBJECT_ORIENTATION(&iLocal_4 + 1992[6], &Local_1350);
			UNK_0x44986367(StackVal, &Local_1347);
			Local_1347 = Vector(Local_1347, StackVal, StackVal) * Vector(-1.0f, -1.0f, -1.0f);
			GET_OBJECT_POSITION(&iLocal_4 + 1992[6], &Local_1350);
			TRAIN_SET_POSITION_DIRECTION(iLocal_1658, &Local_1350, &Local_1347);
			GET_OBJECT_POSITION(&iLocal_4 + 1992[6], &Local_1350);
			TRAIN_SET_TARGET_POS(iLocal_1658, &Local_1350);
			TRAIN_SET_TARGET_SPEED(iLocal_1658, 0.0f);
		}
	}
	return 1;
}

int Function_286() //Position: 0xDD85 / 56709
{
	if (bLocal_1018 == 101)
	{
		if (!iLocal_1407)
		{
			CUTSCENE_MANAGER_ORIENT_GAMECAMERA_ON_EXIT(StackVal, Vector(-1,813f, -125,61f, 0.0f), -3.0f, 0);
			iLocal_1407 = 1;
		}
	}
	else if (bLocal_1018 == 2)
	{
		DISABLE_CHILD_SECTOR("cas_gunsmithBlacksmith01Props01x");
		DISABLE_CHILD_SECTOR("cas_horsestables01Props01x");
	}
	else if (bLocal_1018 == 2)
	{
		CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
	}
	return 1;
}

bool Function_287() //Position: 0xDE17 / 56855
{
	switch (iLocal_1520)
	{
		case 0x00000006:
			Function_311(&iLocal_1662);
			Function_311(&iLocal_4 + 672);
			if (IS_ACTOR_VALID(&iLocal_1450))
			{
				bLocal_1454 = GET_MOUNT(&iLocal_1450);
				RELEASE_ACTOR(&iLocal_1450);
				if (IS_ACTOR_VALID(&bLocal_1454))
				{
					RELEASE_ACTOR(&bLocal_1454);
				}
			}
			if (IS_ACTOR_VALID(&iLocal_1452))
			{
				bLocal_1454 = GET_MOUNT(&iLocal_1452);
				RELEASE_ACTOR(&iLocal_1452);
				if (IS_ACTOR_VALID(&bLocal_1454))
				{
					RELEASE_ACTOR(&bLocal_1454);
				}
			}
			if (iLocal_1658 <= 0)
			{
				iLocal_1517 = 6;
				iLocal_1520 = 7;
			}
			else
			{
				iLocal_1520 = 9;
			}
			break;
		
		case 0x00000007:
			if (Function_289("rail__rrtrack_02x", &iLocal_4 + 1992[6], &iLocal_4 + 1992[6], &iLocal_4 + 1992[3]))
			{
				iLocal_1520 = 8;
			}
			break;
		
		case 0x00000008:
			TRAIN_SET_TARGET_SPEED(iLocal_1658, 0.0f);
			TRAIN_SET_ENGINE_ENABLED(iLocal_1658, 0);
			TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iLocal_1658, 4294967295, 0);
			GET_OBJECT_ORIENTATION(&iLocal_4 + 1992[1], &Local_1350);
			UNK_0x44986367(StackVal, &Local_1347);
			GET_OBJECT_POSITION(&iLocal_4 + 1992[1], &Local_1350);
			TRAIN_SET_POSITION_DIRECTION(iLocal_1658, &Local_1350, &Local_1347);
			Function_288(6, 0, 1);
			Function_225(&iLocal_1025);
			iLocal_1520 = 9;
			break;
		
		case 0x00000009:
			iLocal_1520 = 10;
			break;
		
		case 0x0000000A:
			iLocal_1520 = 104;
			break;
		
		case 0x0000000B:
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_288(bool bParam0, bool bParam1, bool bParam2) //Position: 0xDF8B / 57227
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&Global_15402[bParam014] + 8))
	{
		uVar0 = GET_OBJECT_FROM_ACTOR(&Global_15402[bParam014] + 8);
	}
	else if (IS_PERS_CHAR_VALID(&(Global_15402[bParam014])))
	{
		uVar0 = GET_OBJECT_FROM_PERS_CHAR(&(Global_15402[bParam014]));
	}
	else
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (!IS_BLIP_VALID(&Global_15402[bParam014] + 104))
		{
			*(&Global_15402[bParam014] + 104) = ADD_BLIP_FOR_OBJECT(&uVar0, 325, 0.0f, 2, 0);
			if (GET_OBJECT_TYPE(&uVar0) == 15)
			{
				SET_BLIP_NAME(&Global_15402[bParam014] + 104, GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar0)));
			}
		}
		else
		{
			SET_BLIP_MIN_DISTANCE(&Global_15402[bParam014] + 104, 0.0f);
		}
		SET_BLIP_PRIORITY(&Global_15402[bParam014] + 104, 3);
	}
	else
	{
		if (IS_BLIP_VALID(&Global_15402[bParam014] + 104))
		{
			REMOVE_BLIP(&Global_15402[bParam014] + 104);
		}
		if (&bParam2)
		{
			if (IS_OBJECT_VALID(&uVar0))
			{
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					iVar1 = GET_ACTOR_FROM_OBJECT(&uVar0);
					if (IS_ACTOR_VALID(&iVar1))
					{
						Function_222(&iVar1);
					}
				}
				Function_225(&uVar0);
			}
		}
	}
	return;
}

bool Function_289(bool bParam0, var uParam1, var uParam2, int iParam3) //Position: 0xE09A / 57498
{
	var uVar0;
	struct<5> Var2;
	
	switch (iLocal_1517)
	{
		case 0x00000006:
			if (iLocal_1658 <= 0)
			{
				iLocal_1658 = TRAIN_CREATE_NEW_TRAIN(7, &bParam0, 1);
				GET_OBJECT_POSITION(&uParam1, &uVar0);
				GET_OBJECT_ORIENTATION(&uParam2, &Var2);
				GET_OBJECT_POSITION(&iParam3, &uVar4);
				UNK_0x44986367(StackVal, &Local_1347);
				TRAIN_SET_POSITION_DIRECTION(iLocal_1658, &uVar0, &Local_1347);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1658, 1166);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1658, 1167);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1658, 1160);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1658, 1164);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1658, 1156);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1658, 1160);
				TRAIN_ADD_TRAIN_CAR_FROM_ENUM(iLocal_1658, 1162);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, true)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, 2)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, 3)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, 4)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, 5)), true);
				SET_ACTOR_INVULNERABILITY(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, 6)), true);
				TRAIN_FORCE_HIGH_LOD(iLocal_1658, 1);
				TRAIN_SET_TARGET_POS(iLocal_1658, &uVar4);
				TRAIN_SET_TARGET_SPEED(iLocal_1658, 0.0f);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1658, 0);
				iLocal_1410 = TRAIN_GET_CAR(iLocal_1658, false);
				iLocal_1412 = TRAIN_GET_CAR(iLocal_1658, 2);
				uLocal_1414 = TRAIN_GET_CAR(iLocal_1658, 3);
				uLocal_1416 = TRAIN_GET_CAR(iLocal_1658, 4);
				uLocal_1418 = TRAIN_GET_CAR(iLocal_1658, 5);
				uLocal_1420 = TRAIN_GET_CAR(iLocal_1658, 6);
				iLocal_1517 = 7;
			}
			else
			{
				iLocal_1517 = 104;
			}
			break;
		
		case 0x00000007:
			if (Function_307(&iLocal_1410))
			{
				iLocal_1517 = 8;
			}
			break;
		
		case 0x00000008:
			if (Function_306(&iLocal_1412))
			{
				iLocal_1517 = 9;
			}
			break;
		
		case 0x00000009:
			if (Function_305(&uLocal_1414))
			{
				iLocal_1517 = 10;
			}
			break;
		
		case 0x0000000A:
			if (Function_304(&uLocal_1416))
			{
				iLocal_1517 = 11;
			}
			break;
		
		case 0x0000000B:
			if (Function_303(&uLocal_1418))
			{
				iLocal_1517 = 12;
			}
			break;
		
		case 0x0000000C:
			if (Function_293(&uLocal_1420))
			{
				iLocal_1517 = 13;
			}
			break;
		
		case 0x0000000D:
			Function_290();
			iLocal_1517 = 104;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_290() //Position: 0xE2B0 / 58032
{
	Function_291(&iLocal_680 + 112);
	Function_291(&iLocal_680 + 128);
	Function_291(&iLocal_680 + 144);
	Function_291(&iLocal_680 + 160);
	Function_291(&iLocal_680 + 176);
	Function_291(&iLocal_680 + 192);
	Function_291(&iLocal_764 + 48);
	Function_291(&iLocal_764 + 64);
	Function_291(&iLocal_764 + 80);
	Function_291(&iLocal_764 + 96);
	Function_291(&iLocal_764 + 112);
	Function_291(&iLocal_764 + 128);
	Function_291(&iLocal_800 + 88);
	Function_291(&iLocal_800 + 104);
	Function_291(&iLocal_800 + 120);
	Function_291(&iLocal_800 + 136);
	Function_291(&iLocal_800 + 152);
	Function_291(&iLocal_800 + 168);
	Function_291(&iLocal_844 + 72);
	Function_291(&iLocal_844 + 88);
	return;
}

void Function_291(bool bParam0) //Position: 0xE356 / 58198
{
	struct<2> Var0;
	struct<2> Var2;
	char* cVar4[64];
	var uVar20;
	
	Function_261(&bParam0);
	Var0 = Function_261(&bParam0);
	Function_292(&bParam0);
	Var2 = Function_292(&bParam0);
	strcpy(&cVar4, GET_OBJECT_NAME(&bParam0), 64);
	uVar20 = GET_OBJECT_OWNER(&bParam0);
	Var2 = 0.0f;
	Var2.f_8 = 0.0f;
	Var2.f_4 = (StackVal - 180.0f);
	Var2.f_4 = GET_OBJECT_HEADING(&bParam0);
	PRINTSTRING("Creating right hand cover in ");
	PRINTSTRING(GET_OBJECT_NAME(&uVar20));
	PRINTSTRING(" at ");
	PRINTVECTOR(Var0);
	PRINTSTRING(" facing ");
	PRINTVECTOR(Var2);
	PRINTSTRING(" called ");
	PRINTSTRING(&cVar4);
	PRINTNL();
	DESTROY_OBJECT(&bParam0);
	bParam0 = CREATE_COVER_LOCATION_IN_LAYOUT(&uVar20, &cVar4, Var0, Var2, 2);
	return;
}

struct<8> Function_292(int iParam0) //Position: 0xE42A / 58410
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

bool Function_293(int iParam0) //Position: 0xE453 / 58451
{
	var uVar0;
	
	Function_302(3, 2);
	uVar0 = &uVar0;
	Function_300(&iLocal_844 + 8, "p_gen_crateStack02x", 0, 0);
	if (!Function_295(&iLocal_844 + 8))
	{
		return 0;
	}
	iLocal_844 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_844 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_844, "myVolume", 2,802597E-45f, Vector(0.0f, 1,888142f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2,991357f, 2,070917f, 7,725102f));
	*(&iLocal_844 + 40) = CREATE_OBJECTSET_IN_LAYOUT("FirePosSet", &iLocal_844, 8, 0);
	*(&iLocal_844 + 48[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_844, "rear01", Vector(-1,038773f, 0,9787322f, 3,279619f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_844 + 48[0], &iLocal_844 + 40);
	*(&iLocal_844 + 64) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_844, "caboose_cover_01", Vector(-0,4943278f, 0,9404024f, -2,673853f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_844 + 72) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_844, "caboose_cover_02", Vector(0,5130447f, 0,9570659f, -2,644474f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_844 + 80) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_844, "caboose_cover_03", Vector(0,01150592f, 0,9404024f, 3,305179f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_844 + 88) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_844, "caboose_cover_04", Vector(-0,4922998f, 0,9404024f, 2,668518f), Vector(0.0f, 270.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_844, "crateStack02x0", "p_gen_crateStack02x", Vector(0.0f, 0,9629957f, 0.0f), Vector(0.0f, 90,41108f, 0.0f), 1);
	Function_294(&iLocal_844, &iParam0);
	return 1;
}

void Function_294(int iParam0, var uParam1) //Position: 0xE65D / 58973
{
	int iVar0;
	
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		if (GET_OBJECT_TYPE(&iParam0) == 13)
		{
			iVar0 = ATTACH_OBJECTS(StackVal, StackVal, &iParam0, &uParam1, Function_55(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			if (IS_ATTACHMENT_VALID(&iVar0))
			{
				UNK_0x000079CB(GET_MOBILE_LAYOUT_FROM_OBJECT(&iParam0));
			}
		}
	}
	return;
}

bool Function_295(struct<2>[] Param0) //Position: 0xE6A8 / 59048
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_299();
	iVar1 = 0;
	if (!Function_185(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_298(&(Param0[iVar02]), 8);
		}
		else if (Function_297())
		{
			iVar1 = 1;
			Function_298(&(Param0[iVar02]), 8);
		}
		Function_298(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_185(&(Param0[iVar02]), 4))
		{
			if (!Function_185(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_185(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), true, (Function_185(&(Param0[02]), 8) || iVar1));
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
				Function_298(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_185(&(Param0[iVar02]), 4))
		{
			if (!Function_185(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_298(&(Param0[iVar02]), 2);
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
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_298(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_298(&(Param0[iVar02]), 2);
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
	Function_296();
	return 1;
}

void Function_296() //Position: 0xEA6A / 60010
{
	if (!Function_272(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_297() //Position: 0xEAAA / 60074
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

void Function_298(struct<13> Param0) //Position: 0xEAD8 / 60120
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_299() //Position: 0xEAEB / 60139
{
	if (!Function_272(128))
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

var Function_300(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0xEB2D / 60205
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_301(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_298(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_301(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0xEB6B / 60267
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_185(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_298(&(Param0[iVar02]), 4);
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

void Function_302(int iParam0, int iParam1) //Position: 0xEC3A / 60474
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

bool Function_303(int iParam0) //Position: 0xEC84 / 60548
{
	var uVar0;
	
	Function_302(3, 2);
	uVar0 = &uVar0;
	Function_300(&iLocal_800 + 8, "p_gen_crateWeapons04x", 0, 0);
	Function_300(&iLocal_800 + 8, "p_gen_crateStack02x", 0, 0);
	if (!Function_295(&iLocal_800 + 8))
	{
		return 0;
	}
	iLocal_800 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_800 + 48) = CREATE_OBJECTSET_IN_LAYOUT("BoxCar02_RoofSet", &iLocal_800, 8, 0);
	*(&iLocal_800 + 56[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar02_Roof_Pos01", Vector(0.0f, 3,658668f, -2,422935f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_800 + 56[0], &iLocal_800 + 48);
	*(&iLocal_800 + 56[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar02_Roof_Pos02", Vector(0.0f, 3,658668f, 2,559989f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_800 + 56[1], &iLocal_800 + 48);
	*(&iLocal_800 + 80) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_01", Vector(0,162023f, 0,98f, 4,350276f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_800 + 88) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_02", Vector(-0,2564332f, 0,9986529f, 4,234454f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_800 + 96) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_03", Vector(-1,09997f, 0,9785498f, 2,817737f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_800 + 104) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_04", Vector(-0,9130258f, 0,97855f, 1,982805f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_800 + 112) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_05", Vector(-1,113542f, 0,9785501f, -2,150507f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_800 + 120) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_06", Vector(-1,036592f, 0,9785501f, -2,970281f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_800 + 128) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_07", Vector(-0,1856255f, 0,9870022f, -4,370387f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_800 + 136) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_08", Vector(0,1621843f, 0,9620185f, -4,25203f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_800 + 144) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_09", Vector(1,062388f, 0,9785501f, -3,007784f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_800 + 152) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_010", Vector(1,052135f, 0,9785501f, -2,122864f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_800 + 160) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_011", Vector(1,145025f, 0,97855f, 2,063719f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_800 + 168) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "BoxCar04_cover_012", Vector(0,9465319f, 0,97855f, 2,812584f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "crateWeapons04x0", "p_gen_crateWeapons04x", Vector(-0,518935f, 0,9688807f, 0,6482228f), Vector(0.0f, -89,16103f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_800, "crateStack02x0", "p_gen_crateStack02x", Vector(0.0f, 0,9555629f, -1,917668f), Vector(0.0f, -90,06703f, 0.0f), 1);
	Function_294(&iLocal_800, &iParam0);
	return 1;
}

bool Function_304(int iParam0) //Position: 0xF0F3 / 61683
{
	var uVar0;
	
	Function_302(3, 2);
	uVar0 = &uVar0;
	Function_300(&iLocal_764 + 8, "p_gen_crate17x", 0, 0);
	if (!Function_295(&iLocal_764 + 8))
	{
		return 0;
	}
	iLocal_764 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_764 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_764, "myZone", 2,802597E-45f, Vector(0.0f, 2,063129f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5,80653f, 5,484005f, 14,97453f));
	*(&iLocal_764 + 40) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_01", Vector(-0,2499722f, 1,031745f, -5,576481f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_764 + 48) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_02", Vector(0,1772977f, 1,031745f, -5,650031f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_764 + 56) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_03", Vector(1,11525f, 1,036771f, -3,442345f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_764 + 64) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_04", Vector(1,005343f, 1,032476f, -2,873644f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_764 + 72) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_05", Vector(1,013988f, 1,032476f, 3,095541f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_764 + 80) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_06", Vector(1,043006f, 1,036771f, 3,463803f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_764 + 88) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_07", Vector(0,2576328f, 1,031745f, 5,830119f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_764 + 96) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_08", Vector(-0,2142112f, 1,031745f, 5,894929f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_764 + 104) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_09", Vector(-1,059657f, 1,036771f, 3,629973f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_764 + 112) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_010", Vector(-0,9823455f, 1,032476f, 2,893973f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_764 + 120) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_011", Vector(-1,139464f, 1,032476f, -2,925287f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_764 + 128) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "Baggage01_cover_012", Vector(-1,109503f, 1,036771f, -3,538514f), Vector(0.0f, 180.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "ncrate17x0", "p_gen_crate17x", Vector(-0,5942483f, 0,9743899f, -5,083786f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "ncrate17x1", "p_gen_crate17x", Vector(-0,5942483f, 0,9743899f, -3,332435f), Vector(0.0f, -91,26407f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "ncrate17x2", "p_gen_crate17x", Vector(-0,3339943f, 0,9743899f, 3,25312f), Vector(0.0f, -90,43121f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "ncrate17x3", "p_gen_crate17x", Vector(-0,471976f, 0,9650221f, 5,129209f), Vector(-2,27187f, -179,8492f, -88,68757f), 1);
	*(&iLocal_764 + 136) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_764, "ncrate17x4", "p_gen_crate17x", Vector(-0,5927008f, 0,9828935f, -0,6758103f), Vector(0.0f, -85,7381f, 0.0f), 1);
	Function_294(&iLocal_764, &iParam0);
	return 1;
}

bool Function_305(int iParam0) //Position: 0xF573 / 62835
{
	var uVar0;
	
	Function_302(3, 2);
	uVar0 = &uVar0;
	Function_300(&iLocal_730 + 8, "p_gen_crate01x", 0, 0);
	Function_300(&iLocal_730 + 8, "p_gen_crate03x", 0, 0);
	Function_300(&iLocal_730 + 8, "p_gen_crateWeapons04x", 0, 0);
	if (!Function_295(&iLocal_730 + 8))
	{
		return 0;
	}
	iLocal_730 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_730 + 64) = CREATE_OBJECTSET_IN_LAYOUT("BoxCar2RoofSet", &iLocal_730, 8, 0);
	*(&iLocal_730 + 72[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_730, "nrooftop01", Vector(0,4210121f, 1,059848f, 3,50393f), Vector(0.0f, -84,48444f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_730 + 72[0], &iLocal_730 + 64);
	*(&iLocal_730 + 72[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_730, "nrooftop02", Vector(0.0f, 1,06f, -1,181104f), Vector(0.0f, 454,6254f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_730 + 72[1], &iLocal_730 + 64);
	*(&iLocal_730 + 96) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_730, "ncrate01x0", "p_gen_crate01x", Vector(1,260963f, 1,092183f, -3,062003f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_730 + 104) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_730, "ncrate03x0", "p_gen_crate03x", Vector(-0,01797661f, 1,08065f, 4,718172f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_730 + 112) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_730, "crateWeapons04x0", "p_gen_crateWeapons04x", Vector(-1,247103f, 1,070282f, -4,815496f), Vector(0.0f, -26,96412f, 0.0f), 1);
	*(&iLocal_730 + 120) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_730, "crateWeapons04x1", "p_gen_crateWeapons04x", Vector(-1,03719f, 1,032904f, -0,1220456f), Vector(0.0f, -82,40175f, 0.0f), 1);
	*(&iLocal_730 + 128) = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_730, "crateWeapons04x2", "p_gen_crateWeapons04x", Vector(0,4558479f, 1,062771f, 5,275903f), Vector(0.0f, -132,1149f, 0.0f), 1);
	Function_294(&iLocal_730, &iParam0);
	return 1;
}

bool Function_306(int iParam0) //Position: 0xF821 / 63521
{
	var uVar0;
	
	Function_302(3, 2);
	uVar0 = &uVar0;
	Function_300(&iLocal_680 + 8, "p_gen_crateWeapons04x", 0, 0);
	Function_300(&iLocal_680 + 8, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	Function_300(&iLocal_680 + 8, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	if (!Function_295(&iLocal_680 + 8))
	{
		return 0;
	}
	iLocal_680 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_680 + 64) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_680, "myVolume", 2,802597E-45f, Vector(0.0f, 6,604063f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	*(&iLocal_680 + 72) = CREATE_OBJECTSET_IN_LAYOUT("RoofSet", &iLocal_680, 8, 0);
	*(&iLocal_680 + 80[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "pos01", Vector(0.0f, 3,697142f, 2,237385f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_680 + 80[0], &iLocal_680 + 72);
	*(&iLocal_680 + 80[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "pos02", Vector(0.0f, 3,697142f, -2,482769f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_680 + 80[1], &iLocal_680 + 72);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "train_climb_left", "train_climb_left", Vector(-1,411f, 1,039f, -2,620399f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_INT(&uVar0, "trainAttach", 2);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "train_climb_left1", "train_climb_left", Vector(-1,411f, 1,039f, 2,286764f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_INT(&uVar0, "trainAttach", false);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "train_climb_right", "train_climb_right", Vector(1,411f, 1,039f, -2,406803f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_INT(&uVar0, "trainAttach", 3);
	uVar0 = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "train_climb_right1", "train_climb_right", Vector(1,411f, 1,039f, 2,540062f), Vector(0.0f, 0.0f, 0.0f));
	DECOR_SET_INT(&uVar0, "trainAttach", true);
	*(&iLocal_680 + 104) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_01", Vector(0,2870879f, 0,9851047f, 4,303898f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_680 + 112) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_02", Vector(-0,1617738f, 0,9986529f, 4,326625f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_680 + 120) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_03", Vector(-1,218584f, 0,9785498f, 2,863947f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_680 + 128) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_04", Vector(-1,189995f, 0,97855f, 1,921646f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_680 + 136) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_05", Vector(-1,23951f, 0,9785501f, -2,081084f), Vector(0.0f, 270.0f, 0.0f), 1);
	*(&iLocal_680 + 144) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_06", Vector(-1,130085f, 0,9785501f, -2,98185f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_680 + 152) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_07", Vector(-0,1568854f, 0,9870425f, -4,480693f), Vector(0.0f, 180.0f, 0.0f), 1);
	*(&iLocal_680 + 160) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_08", Vector(0,2826001f, 0,9620185f, -4,420415f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_680 + 168) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_09", Vector(1,114297f, 0,9785501f, -2,926259f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_680 + 176) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_010", Vector(1,09524f, 0,9785501f, -2,167124f), Vector(0.0f, 0.0f, 0.0f), 1);
	*(&iLocal_680 + 184) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_011", Vector(1,144359f, 0,97855f, 2,141771f), Vector(0.0f, 90.0f, 0.0f), 1);
	*(&iLocal_680 + 192) = CREATE_COVER_LOCATION_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "BoxCar04_cover_012", Vector(1,01273f, 0,97855f, 2,884024f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "crateWeapons04x0", "p_gen_crateWeapons04x", Vector(-1,12487f, 0,9756501f, -3,629373f), Vector(0.0f, 0.0f, 0.0f), 1);
	CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_680, "crateWeapons04x1", "p_gen_crateWeapons04x", Vector(-0,3865677f, 0,9774683f, 0,6355647f), Vector(0.0f, -92,58096f, 0.0f), 1);
	Function_294(&iLocal_680, &iParam0);
	return 1;
}

bool Function_307(var uParam0) //Position: 0xFE72 / 65138
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	Function_302(3, 2);
	uVar0 = &uVar0;
	Function_300(&iLocal_610 + 8, "$/content/scripting/gringo/simplegringo/train_engineer", 1, 0);
	if (!Function_295(&iLocal_610 + 8))
	{
		return 0;
	}
	iLocal_610 = GET_LAYOUT_FROM_OBJECT(CREATE_MOBILE_LAYOUT(Function_55()));
	*(&iLocal_610 + 32) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_610, "BoilerHitBox", 2,802597E-45f, Vector(0.0f, 1,518635f, -0,5900595f), Vector(0.0f, 0.0f, 0.0f), Vector(2,2f, 2,445126f, 6,634629f));
	*(&iLocal_610 + 40) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_610, "onTrainCheck", 2,802597E-45f, Vector(0.0f, 2,118635f, 4,439789f), Vector(0.0f, 0.0f, 0.0f), Vector(2.0f, 2,5f, 2.0f));
	*(&iLocal_610 + 48) = Vector(0,002348f, 2,778975f, -0,977708f);
	*(&iLocal_610 + 48 + 12) = Vector(0.0f, 90.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 48);
	*(&iLocal_610 + 72) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "Loc_BoilerExp", Vector(0,002348f, 2,778975f, -0,977708f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_610 + 80) = Vector(0,002348f, 2,778975f, -0,977708f);
	*(&iLocal_610 + 80 + 12) = Vector(0.0f, 90.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 80);
	*(&iLocal_610 + 104) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "Loc_BoilerTarget", Vector(0,002348f, 2,778975f, -0,977708f), Vector(0.0f, 90.0f, 0.0f));
	*(&iLocal_610 + 112) = CREATE_OBJECTSET_IN_LAYOUT("nSparksSet", &iLocal_610, 8, 0);
	*(&iLocal_610 + 120[03]) = Vector(0,867815f, 1,080334E-07f, -0,8888474f);
	*(&iLocal_610 + 120[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 120[03]);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "effectPos01", Vector(0,867815f, 1,080334E-07f, -0,8888474f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_610 + 112);
	*(&iLocal_610 + 120[13]) = Vector(0,8909378f, 0,05224555f, 0,8605514f);
	*(&iLocal_610 + 120[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 120[13]);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "effectPos02", Vector(0,8909378f, 0,05224555f, 0,8605514f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_610 + 112);
	*(&iLocal_610 + 120[23]) = Vector(0,8909378f, 0,05224555f, 3,082047f);
	*(&iLocal_610 + 120[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 120[23]);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "effectPos03", Vector(0,8909378f, 0,05224555f, 3,082047f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_610 + 112);
	*(&iLocal_610 + 120[33]) = Vector(-0,9861965f, 0,05224539f, -0,8806729f);
	*(&iLocal_610 + 120[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 120[33]);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "effectPos04", Vector(-0,9861965f, 0,05224539f, -0,8806729f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_610 + 112);
	*(&iLocal_610 + 120[43]) = Vector(-0,8909378f, 0,05224557f, 0,8605514f);
	*(&iLocal_610 + 120[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 120[43]);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "effectPos05", Vector(-0,8909378f, 0,05224557f, 0,8605514f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_610 + 112);
	*(&iLocal_610 + 120[53]) = Vector(-0,9861965f, 0,05224539f, 3,082166f);
	*(&iLocal_610 + 120[53] + 12) = Vector(0.0f, 0.0f, 0.0f);
	Function_308(&uParam0, &iLocal_610 + 120[53]);
	uVar6 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "effectPos06", Vector(-0,9861965f, 0,05224539f, 3,082166f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar6, &iLocal_610 + 112);
	*(&iLocal_610 + 272) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_610, "train_engineer", "train_engineer", Vector(-0,374f, 1,14288f, 3,992f), Vector(0.0f, 0.0f, 0.0f));
	Function_294(&iLocal_610, &uParam0);
	return 1;
}

void Function_308(var uParam0, int iParam1) //Position: 0x1033A / 66362
{
	Function_309(&uParam0, 1, &iParam1, &iParam1 + 12);
	return;
}

void Function_309(var uParam0, bool bParam1, struct<2> Param2) //Position: 0x1034F / 66383
{
	struct<2> Var0;
	
	Var0 = Vector(0.0f, 0.0f, 0.0f);
	if (GET_OBJECT_RELATIVE_POSITION(&uParam0, Param2, &Var0))
	{
		if (bParam1)
		{
			if (!Function_310(&Var0, &Param2))
			{
				Param2 = Var0;
			}
		}
		else
		{
			Param2 = Var0;
		}
	}
	else
	{
		LOG_ERROR("Failed to get object relative position - perhaps the object type does not support transformations");
	}
	if (!GET_OBJECT_RELATIVE_ORIENTATION(&uParam0, Param3, &Var0))
	{
		LOG_ERROR("Failed to get object relative rotation - perhaps the object type does not support transformations");
		Param3 = Var0;
	}
}

bool Function_310(vector3 vParam0) //Position: 0x1047C / 66684
{
	var uVar0;
	
	if (!STREAMING_ARE_BOUNDS_LOADED(vParam0, 0.0f))
	{
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_75(StackVal, Param1))
		{
			return 1;
		}
	}
	vParam0 = (vParam0 + 0,01f);
	vParam0.f_8 = (vParam0.z + 0,01f);
	if (FIND_GROUND_INTERSECTION(&vParam0, 50.0f, &Param1, &uVar0))
	{
		if (!Function_75(StackVal, Param1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_311(int iParam0) //Position: 0x104F2 / 66802
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
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_312(int iParam0) //Position: 0x1053D / 66877
{
	switch (iParam0)
	{
		case 0x00000008:
			Function_280(0);
			if (!iLocal_1047[2])
			{
				if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
				{
					HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
					HUD_FADE_OUT(0.0f, 1f, 1);
				}
			}
			return 1;
			break;
		
		case 0x00000004:
			Function_584(&iLocal_1027);
			iLocal_1019 = 1;
			return 1;
			break;
		
		case 0x00000065:
			if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
			{
				HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
			Function_584(&iLocal_1027);
			iLocal_1019 = 1;
			return 1;
			break;
		
		case 0x00000062:
			return 0;
			break;
	}
	return 0;
}

void Function_313() //Position: 0x105D3 / 67027
{
	if (iLocal_1019 < 4 && iLocal_1019 > 105)
	{
		if (!Function_372(&iLocal_1476))
		{
			Function_371(&iLocal_1476, 13,1f);
		}
		else if (Function_585(&iLocal_1476) < 13.0f)
		{
			if (IS_PLAYER_TARGETTING_ACTOR(0, &iLocal_1023, 1))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_370();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_584(&iLocal_1476);
			}
		}
		Function_355();
		if (!Function_372(&iLocal_1472))
		{
			Function_353(&iLocal_1472);
		}
		else if (Function_585(&iLocal_1472) < 5.0f)
		{
			Function_352();
			Function_584(&iLocal_1472);
		}
		if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1328[2]))
		{
			Function_551("Mexarmy02_cliff_fail");
			bLocal_1070 = true;
		}
		if (iLocal_1019 < 6 && iLocal_1019 == 104)
		{
			Function_261(&iLocal_4 + 1992[6]);
			if (Function_347(StackVal, "$/cutscene/MEXARMY02_CS02_train/MEXARMY02_CS02_train", &uLocal_1679, Function_261(&iLocal_4 + 1992[6]), 0, 1000.0f, 2000.0f, 2, 1, 2, 2, 0, 1))
			{
			}
		}
	}
	switch (iLocal_1019)
	{
		case 0x00000000:
			if (Function_342())
			{
				iLocal_1400 = 0;
				if (!iLocal_1047[1])
				{
					Function_275(&uLocal_1680, 0, 0, 4294967295, 4294967295);
					Function_584(&iLocal_1027);
					iLocal_1019 = 1;
				}
				else
				{
					Function_275(&uLocal_1680, 0, 0, 4294967295, 4294967295);
					Function_584(&iLocal_1027);
					iLocal_1019 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if ((STREAMING_IS_WORLD_LOADED() && (Function_341(Global_46894[2]) || iLocal_1020 != 4294967295)) && Function_339())
			{
				if (Function_339())
				{
					Function_584(&iLocal_1027);
					iLocal_1019 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_338())
			{
				GET_OBJECT_ORIENTATION(&iLocal_4 + 1992[1], &Local_1350);
				UNK_0x44986367(StackVal, &Local_1347);
				GET_OBJECT_POSITION(&iLocal_4 + 1992[1], &Local_1350);
				TRAIN_SET_POSITION_DIRECTION(iLocal_1658, &Local_1350, &Local_1347);
				TRAIN_SET_PARTICLE_EFFECTS_ENABLED(iLocal_1658, 4294967295, 1);
				Function_584(&iLocal_1027);
				if (Function_336(StackVal, StackVal, StackVal, StackVal, StackVal, Local_872, bLocal_1018))
				{
					Function_335(bLocal_1018);
					Function_326(StackVal, Function_335(bLocal_1018), bLocal_1018, Global_46746[1], Function_334(bLocal_1018), 0);
					iLocal_1019 = 3;
					UI_DISABLE("LoadingSpinner");
				}
				else
				{
					Function_335(bLocal_1018);
					Function_326(StackVal, Function_335(bLocal_1018), bLocal_1018, Global_46746[1], Function_334(bLocal_1018), 0);
					Function_268(&iLocal_1023, &iLocal_4 + 1824[2], 1, 1, 1);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
					TASK_CLEAR(&iLocal_1023);
					TASK_GO_NEAR_OBJECT(&iLocal_1023, &iLocal_4 + 1824[1], 1.0f, 1, 0, 1);
					iLocal_1019 = 4;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_237("$/cutscene/MEXARMY02_CS02_a/MEXARMY02_CS02_a", &iLocal_1006, &Local_872, &bLocal_1018, 51474, 56709, 49242, 56221, 48985, 71424, 0, 2, 1, 1, 2, 0, 1))
			{
				Function_584(&iLocal_1027);
				if (!iLocal_1408)
				{
					Function_584(&iLocal_1027);
					iLocal_1019 = 104;
				}
				else
				{
					iLocal_1019 = 4;
				}
			}
			break;
		
		case 0x00000068:
			if (Function_237("$/cutscene/MEXARMY02_CS02_SEQ/MEXARMY02_CS02_SEQ", &iLocal_1006, &Local_872, &bLocal_1018, 51474, 71408, 71401, 56221, 48985, 48978, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_584(&iLocal_1027);
				iLocal_1019 = 4;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_1400)
			{
				if (iLocal_1408)
				{
					GET_OBJECT_POSITION(&iLocal_4 + 1824[3], &Local_1353);
					if (Function_257(StackVal, Local_1353))
					{
						if (IS_ACTOR_VALID(&iLocal_1025))
						{
							Function_268(&iLocal_1025, &iLocal_4 + 1824[3], 1, 1, 1);
						}
						TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
						if (IS_ACTOR_ALIVE(&iLocal_4 + 1056[02]))
						{
							SET_ACTOR_RIDEABLE(&iLocal_4 + 1056[02], 1);
						}
						Function_256();
						Function_268(&iLocal_1023, &iLocal_4 + 1824[2], 1, 1, 1);
						Function_268(&Global_54076, &iLocal_4 + 1824[0], 1, 0, 1);
						SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
						TASK_CLEAR(&iLocal_1023);
						TASK_GO_NEAR_OBJECT(&iLocal_1023, &iLocal_4 + 1824[1], 1.0f, 1, 0, 1);
						iLocal_1408 = 0;
						iLocal_1400 = 1;
					}
				}
				else
				{
					iLocal_1400 = 1;
				}
			}
			else
			{
				if (iLocal_1408)
				{
					Function_268(&iLocal_1023, &iLocal_4 + 1824[2], 1, 1, 1);
					Function_268(&Global_54076, &iLocal_4 + 1824[0], 1, 0, 1);
					SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 0);
					TASK_CLEAR(&iLocal_1023);
					TASK_GO_NEAR_OBJECT(&iLocal_1023, &iLocal_4 + 1824[1], 1.0f, 1, 0, 1);
				}
				Function_322();
				Function_321();
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 1288, 1);
				Function_320(&iLocal_4 + 1288, &Global_54076, 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1992[3], &Local_1350);
				TRAIN_SET_TARGET_POS(iLocal_1658, &Local_1350);
				TRAIN_SET_TARGET_SPEED(iLocal_1658, 13.0f);
				TRAIN_SET_MAX_ACCEL(iLocal_1658, 2.0f);
				Function_584(&iLocal_1027);
				iLocal_1019 = 5;
				UI_ENABLE("LoadingSpinner");
			}
			break;
		
		case 0x00000005:
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(0,5f, 1065353216);
			}
			Function_275(&uLocal_1680, 17, 0, 4294967295, 4294967295);
			AUDIO_SET_PLAYER_MOOD(1, 0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_584(&iLocal_1027);
			iLocal_1019 = 6;
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				iLocal_1686 = 0;
				Function_584(&iLocal_1027);
				iLocal_1019 = 7;
			}
			break;
		
		case 0x00000007:
			if (Function_585(&iLocal_1027) <= 5.0f)
			{
				Function_317();
				Function_584(&iLocal_1027);
				Function_584(&iLocal_1031);
				Function_584(&iLocal_1035);
				iLocal_1019 = 8;
			}
			break;
		
		case 0x00000008:
			if (IS_VOLUME_VALID(&iLocal_4 + 1328[0]))
			{
				if (IS_OBJECT_IN_VOLUME(TRAIN_GET_CAR(iLocal_1658, false), &iLocal_4 + 1328[0]) || uLocal_1399)
				{
					HUD_FADE_OUT(0,5f, 1.0f, 0);
					Function_584(&iLocal_1027);
					Function_584(&iLocal_1031);
					Function_584(&iLocal_1035);
					iLocal_1019 = 106;
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1328[5]))
			{
				if (IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1328[5]))
				{
					STREAMING_LOAD_SCENE_EXT(StackVal, StackVal, Vector(32,13f, 97,27f, 2756,32f), Vector(-0,836f, 0,172f, -0,521f), 1);
					TRAIN_SET_TARGET_SPEED(iLocal_1658, 11.0f);
					DESTROY_VOLUME(&iLocal_4 + 1328[5]);
				}
			}
			if (bLocal_1396)
			{
				Function_584(&iLocal_1027);
				Function_584(&iLocal_1031);
				Function_584(&iLocal_1035);
				iLocal_1019 = 106;
			}
			break;
		
		case 0x0000006A:
			if (bLocal_1396)
			{
				iLocal_1047[2] = 1;
				Function_584(&iLocal_1027);
				bLocal_1018 = 8;
				iLocal_1019 = 0;
			}
			else if (Function_314(&Global_54076, TRAIN_GET_CAR(iLocal_1658, false), 250.0f))
			{
				STREAMING_UNLOAD_SCENE();
				iLocal_1047[2] = 1;
				Function_584(&iLocal_1027);
				bLocal_1018 = 101;
				iLocal_1019 = 0;
			}
			else
			{
				Function_551("mexarmy02_bridge_destroyed");
				bLocal_1070 = true;
			}
			break;
	}
	return;
}

bool Function_314(bool bParam0, int iParam1, float fParam2) //Position: 0x10D04 / 68868
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_316(&bParam0);
			Function_315(&iParam1);
			if (VDIST(Function_316(&bParam0), Function_315(&iParam1)) >= fParam2)
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

struct<8> Function_315(int iParam0) //Position: 0x10E22 / 69154
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

struct<8> Function_316(var uParam0) //Position: 0x10E90 / 69264
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

void Function_317() //Position: 0x10EFC / 69372
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_NoFollowTrain", "MexArmy02_NoFollowTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_318(int iParam0) //Position: 0x10F53 / 69459
{
	Function_319(0, &Global_54076, iParam0, 0);
	Function_319(1, &iLocal_1023, iParam0, 0);
	return;
}

void Function_319(int iParam0, var uParam1, var uParam2, int iParam3) //Position: 0x10F6F / 69487
{
	bool bVar0;
	
	iParam3 = &iParam3;
	if (Function_14(uParam2, Function_146(iParam0)))
	{
		bVar0 = iParam0;
		ADD_NEW_CONVERSATION_SPEAKER(bVar0, &uParam1, 0);
	}
}

void Function_320(var uParam0, var uParam1, bool bParam2) //Position: 0x10F97 / 69527
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
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_IDENTIFY(&uVar1, &uParam1);
			if (!&bParam2)
			{
				GET_POSITION(&uParam1, &uVar2);
				MEMORY_REPORT_POSITION(&uVar1, &uParam1, &uVar2);
			}
			else
			{
				MEMORY_REPORT_POSITION_AUTO(&uVar1, &uParam1, 1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_321() //Position: 0x11003 / 69635
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	struct<2> Var7;
	
	Function_77();
	Var1 = Function_77();
	Var3 = Vector(0.0f, 180.0f, 0.0f);
	Var5 = Vector(0.0f, 90.0f, 0.0f);
	Var7 = Vector(0.0f, -90.0f, 0.0f);
	Local_1599[bVar05] = &iLocal_4 + 1200[32];
	Local_1599[bVar05].f_16 = 2;
	*(&Local_1599[bVar05] + 32) = &iLocal_680 + 80[0];
	*(&Local_1599[bVar05] + 8) = ATTACH_OBJECTS(&(Local_1599[bVar05]), &Local_1599[bVar05] + 32, Function_55(), Var1, Var3, 4294967295);
	TASK_CROUCH(&(Local_1599[bVar05]), -1.0f);
	REMOVE_OBJECT_ATTACHMENT(&Local_1599[bVar05] + 8);
	SET_ACTOR_ONE_SHOT_DEATH(&(Local_1599[bVar05]), true);
	SET_ACTOR_UPDATE_PRIORITY(&(Local_1599[bVar05]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1599[bVar05]), 0);
	if (IS_ACTOR_VALID(&(Local_1599[bVar05])))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	bVar0++;
	Local_1599[bVar05] = &iLocal_4 + 1200[12];
	Local_1599[bVar05].f_16 = 3;
	*(&Local_1599[bVar05] + 32) = &iLocal_730 + 72[1];
	*(&Local_1599[bVar05] + 8) = ATTACH_OBJECTS(&(Local_1599[bVar05]), &Local_1599[bVar05] + 32, Function_55(), Var1, Var5, 4294967295);
	TASK_STAND_STILL(&(Local_1599[bVar05]), -1.0f, 0, 0);
	REMOVE_OBJECT_ATTACHMENT(&Local_1599[bVar05] + 8);
	SET_ACTOR_ONE_SHOT_DEATH(&(Local_1599[bVar05]), true);
	SET_ACTOR_UPDATE_PRIORITY(&(Local_1599[bVar05]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1599[bVar05]), 0);
	if (IS_ACTOR_VALID(&(Local_1599[bVar05])))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	bVar0++;
	Local_1599[bVar05] = &iLocal_4 + 1200[02];
	Local_1599[bVar05].f_16 = 3;
	*(&Local_1599[bVar05] + 32) = &iLocal_730 + 72[0];
	*(&Local_1599[bVar05] + 8) = ATTACH_OBJECTS(&(Local_1599[bVar05]), &Local_1599[bVar05] + 32, Function_55(), Var1, Var7, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(&Local_1599[bVar05] + 8);
	TASK_STAND_STILL(&(Local_1599[bVar05]), -1.0f, 0, 0);
	SET_ACTOR_ONE_SHOT_DEATH(&(Local_1599[bVar05]), true);
	SET_ACTOR_UPDATE_PRIORITY(&(Local_1599[bVar05]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1599[bVar05]), 0);
	if (IS_ACTOR_VALID(&(Local_1599[bVar05])))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	bVar0++;
	Local_1599[bVar05] = &iLocal_4 + 1200[42];
	Local_1599[bVar05].f_16 = 5;
	*(&Local_1599[bVar05] + 32) = &iLocal_800 + 56[0];
	*(&Local_1599[bVar05] + 8) = ATTACH_OBJECTS(&(Local_1599[bVar05]), &Local_1599[bVar05] + 32, Function_55(), Var1, Var3, 4294967295);
	TASK_CROUCH(&(Local_1599[bVar05]), -1.0f);
	REMOVE_OBJECT_ATTACHMENT(&Local_1599[bVar05] + 8);
	SET_ACTOR_ONE_SHOT_DEATH(&(Local_1599[bVar05]), true);
	SET_ACTOR_UPDATE_PRIORITY(&(Local_1599[bVar05]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1599[bVar05]), 0);
	if (IS_ACTOR_VALID(&(Local_1599[bVar05])))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	bVar0++;
	Local_1599[bVar05] = &iLocal_4 + 1200[22];
	Local_1599[bVar05].f_16 = 6;
	*(&Local_1599[bVar05] + 32) = &iLocal_844 + 80;
	*(&Local_1599[bVar05] + 8) = ATTACH_OBJECTS(&(Local_1599[bVar05]), &Local_1599[bVar05] + 32, Function_55(), Var1, Var3, 4294967295);
	TASK_STAND_STILL(&(Local_1599[bVar05]), -1.0f, 0, 0);
	SET_ACTOR_ONE_SHOT_DEATH(&(Local_1599[bVar05]), true);
	SET_ACTOR_UPDATE_PRIORITY(&(Local_1599[bVar05]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1599[bVar05]), 0);
	if (IS_ACTOR_VALID(&(Local_1599[bVar05])))
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	else
	{
		PRINTINT(bVar0);
		PRINTNL();
		PRINTSTRING(GET_OBJECT_MODEL_NAME(&(Local_1599[bVar05])));
		PRINTNL();
	}
	bVar0++;
	return;
}

void Function_322() //Position: 0x11481 / 70785
{
	*(&iLocal_4 + 1288) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 1200[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 522, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1200[02], &iLocal_4 + 1288);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[02], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[02], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 1200[02], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[02], 19);
	*(&iLocal_4 + 1200[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 518, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1200[12], &iLocal_4 + 1288);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[12], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[12], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 1200[12], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[12], 19);
	*(&iLocal_4 + 1200[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 523, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1200[22], &iLocal_4 + 1288);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 1200[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[22], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[22], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 1200[22], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[22], 19);
	*(&iLocal_4 + 1200[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 522, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1200[32], &iLocal_4 + 1288);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[32], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[32], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 1200[32], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[32], 19);
	*(&iLocal_4 + 1200[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 519, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	SQUAD_JOIN(&iLocal_4 + 1200[42], &iLocal_4 + 1288);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[42], 42, 0,5f, 1, 1);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 1200[42], 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&iLocal_4 + 1200[42], 1);
	SET_ACTOR_FACTION(&iLocal_4 + 1200[42], 19);
	return;
}

int Function_323() //Position: 0x116E9 / 71401
{
	return 1;
}

int Function_324() //Position: 0x116F0 / 71408
{
	CUTSCENE_MANAGER_RESET_GAMECAMERA_ON_EXIT(-3.0f, 0);
	return 1;
}

int Function_325() //Position: 0x11700 / 71424
{
	iLocal_1408 = 1;
	return 1;
}

void Function_326(struct<2> Param0, bool bParam2, var uParam3, int iParam4, int iParam5) //Position: 0x1170B / 71435
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
	if (bParam2 != Global_53524.f_48 && !Function_333())
	{
		iVar0 = 1;
	}
	else
	{
		iVar1 = 1;
	}
	Function_332(0);
	Function_331();
	Global_53524.f_48 = bParam2;
	Global_53524.f_20 = Global_10966;
	Global_53524 = Param0;
	Global_53524.f_12 = iParam4;
	Global_53524.f_16 = &iParam5;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_53524.f_192 = (Global_53524.f_192 + (GET_CURRENT_GAME_TIME() - Global_53524.f_188));
	Global_53524.f_188 = GET_CURRENT_GAME_TIME();
	if (Function_97())
	{
		Function_329(bParam2);
	}
	Function_328(uParam3, iVar0, iVar1);
	Function_327();
}

void Function_327() //Position: 0x117B4 / 71604
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

void Function_328(int iParam0, bool bParam1, bool bParam2) //Position: 0x117F5 / 71669
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
	if (Function_86(Global_43788))
	{
	}
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_44();
	SAVE_SOFT_SAVE(1);
	return;
}

void Function_329(bool bParam0) //Position: 0x1195E / 72030
{
	struct<4> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, Function_330() };
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
	PLAYSTAT_INT("HC_MONEY", Function_68(0));
	PLAYSTAT_INT("HC_FAME", Function_68(3));
	PLAYSTAT_INT("HC_HONOR", Function_68(1));
	return;
}

struct<16> Function_330() //Position: 0x11AF6 / 72438
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

void Function_331() //Position: 0x11B3C / 72508
{
	struct<165> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	Var0.f_164 = 0;
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_332(bool bParam0) //Position: 0x11B60 / 72544
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

bool Function_333() //Position: 0x11B8F / 72591
{
	struct<69> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	return Var0.f_68;
}

int Function_334(bool bParam0) //Position: 0x11BAA / 72618
{
	switch (bParam0)
	{
		case 0x00000000:
			return GET_OBJECT_HEADING(&iLocal_4 + 1656[0]);
			break;
		
		case 0x00000001:
			return GET_OBJECT_HEADING(&iLocal_4 + 1728[0]);
			break;
		
		case 0x00000002:
			return GET_OBJECT_HEADING(&iLocal_4 + 1824[0]);
			break;
		
		case 0x00000008:
			return GET_OBJECT_HEADING(&iLocal_4 + 1880[1]);
			break;
		
		default:
			return GET_OBJECT_HEADING(&iLocal_4 + 1944[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	return GET_OBJECT_HEADING(&iLocal_4 + 1656[0]);
}

struct<8> Function_335(bool bParam0) //Position: 0x11C8F / 72847
{
	switch (bParam0)
	{
		case 0x00000000:
			Function_261(&iLocal_4 + 1656[0]);
			return StackVal, Function_261(&iLocal_4 + 1656[0]);
			break;
		
		case 0x00000001:
			return StackVal, Vector(-2766,099f, 33,513f, 4260,272f);
			break;
		
		case 0x00000002:
			Function_261(&iLocal_4 + 1824[0]);
			return StackVal, Function_261(&iLocal_4 + 1824[0]);
			break;
		
		case 0x00000008:
			Function_261(&iLocal_4 + 1880[1]);
			return StackVal, Function_261(&iLocal_4 + 1880[1]);
			break;
		
		default:
			Function_261(&iLocal_4 + 1944[0]);
			return StackVal, Function_261(&iLocal_4 + 1944[0]);
			break;
	}
	LOG_ERROR("Invalid stage passed into GET_PLAYER_START_POS_BY_STAGE, returning first stage start position.");
	Function_261(&iLocal_4 + 1656[0]);
	return StackVal, Function_261(&iLocal_4 + 1656[0]);
}

bool Function_336(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6) //Position: 0x11D78 / 73080
{
	if (Function_337(&iParam0) == iParam6 || Function_333())
	{
		return 1;
	}
	return 0;
}

int Function_337(int iParam0) //Position: 0x11D97 / 73111
{
	if (Function_246(&iParam0))
	{
		return Global_53524.f_48;
	}
	return 4294967295;
}

bool Function_338() //Position: 0x11DB0 / 73136
{
	switch (iLocal_1518)
	{
		case 0x00000006:
			iLocal_1517 = 6;
			if (iLocal_1658 <= 0)
			{
				iLocal_1518 = 7;
			}
			else
			{
				iLocal_1518 = 8;
			}
			break;
		
		case 0x00000007:
			if (Function_289("rail__rrtrack_02x", &iLocal_4 + 1992[1], &iLocal_4 + 1992[1], &iLocal_4 + 1992[3]))
			{
				iLocal_1518 = 8;
			}
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION(&iLocal_4 + 1992[1], &Local_1350);
			TRAIN_SET_TARGET_POS(iLocal_1658, &Local_1350);
			TRAIN_SET_TARGET_SPEED(iLocal_1658, 0.0f);
			TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1658, 0);
			TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
			MEMORY_CLEAR_ALL(&iLocal_1023);
			iLocal_1518 = 9;
			break;
		
		case 0x00000009:
			iLocal_1518 = 10;
			break;
		
		case 0x0000000A:
			if (!iLocal_1047[1])
			{
				GET_OBJECT_POSITION(&iLocal_4 + 1824[3], &Local_1353);
				if (Function_257(StackVal, Local_1353))
				{
					if (!iLocal_1047[1])
					{
						if (IS_ACTOR_VALID(&iLocal_1025))
						{
							Function_268(&iLocal_1025, &iLocal_4 + 1824[3], 1, 1, 1);
						}
						TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
						if (IS_ACTOR_VALID(&iLocal_1023))
						{
							Function_268(&iLocal_1023, &iLocal_4 + 1824[2], 1, 1, 1);
						}
						Function_256();
						if (IS_ACTOR_ALIVE(&iLocal_4 + 1056[02]))
						{
							SET_ACTOR_RIDEABLE(&iLocal_4 + 1056[02], 1);
						}
					}
					iLocal_1518 = 104;
				}
			}
			else
			{
				iLocal_1518 = 104;
			}
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

bool Function_339() //Position: 0x11F29 / 73513
{
	Function_340(&iLocal_4 + 480, 522, 2, 0);
	Function_340(&iLocal_4 + 480, 518, 2, 0);
	Function_340(&iLocal_4 + 480, 523, 2, 0);
	Function_340(&iLocal_4 + 480, 519, 2, 0);
	if (Function_295(&iLocal_4 + 480))
	{
		return 1;
	}
	return 0;
}

var Function_340(struct<2>[] Param0, int iParam1, int iParam2, bool bParam3) //Position: 0x11F75 / 73589
{
	int iVar0;
	
	iParam2 = &iParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_185(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = iParam1;
			Param0[iVar02].f_8 = 3;
			Function_298(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_298(&(Param0[iVar02]), 8);
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

bool Function_341(bool bParam0) //Position: 0x12051 / 73809
{
	if (!Function_86(bParam0))
	{
		return 1;
	}
	return Function_166(&(Global_43791[bParam0]), 4);
}

bool Function_342() //Position: 0x1206D / 73837
{
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	if (!iLocal_1047[1])
	{
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
		}
		Function_268(&Global_54076, &iLocal_4 + 1824[0], 1, 1, 1);
	}
	SET_PLAYER_ENDLESS_READYMODE(0, 0);
	Function_344();
	if (!Function_341(Global_46894[2]))
	{
		Function_343(&Local_872);
	}
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	if (IS_ACTOR_VALID(&iLocal_1450))
	{
		bLocal_1454 = GET_MOUNT(&iLocal_1450);
		RELEASE_ACTOR(&iLocal_1450);
		if (IS_ACTOR_VALID(&bLocal_1454))
		{
			RELEASE_ACTOR(&bLocal_1454);
		}
	}
	if (IS_ACTOR_VALID(&iLocal_1452))
	{
		bLocal_1454 = GET_MOUNT(&iLocal_1452);
		RELEASE_ACTOR(&iLocal_1452);
		if (IS_ACTOR_VALID(&bLocal_1454))
		{
			RELEASE_ACTOR(&bLocal_1454);
		}
	}
	Function_311(&iLocal_1662);
	Function_311(&iLocal_4 + 672);
	Function_225(&iLocal_4 + 1552[0]);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
	}
	return 1;
}

void Function_343(int iParam0) //Position: 0x1215B / 74075
{
	if (!Function_246(&iParam0))
	{
		if (HUD_IS_FADED())
		{
			Function_196(1, 0, 1);
		}
	}
	return;
}

void Function_344() //Position: 0x12177 / 74103
{
	Function_226(46);
	Function_169(83980);
	Function_345(9);
	return;
}

void Function_345(int iParam0) //Position: 0x1218E / 74126
{
	Function_346(&Global_43580, iParam0);
	return;
}

void Function_346(var uParam0, bool bParam1) //Position: 0x1219C / 74140
{
	int iVar0;
	
	iVar0 = (uParam0 && bParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

bool Function_347(var uParam0, var uParam1, struct<2> Param2, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x121C4 / 74180
{
	char* cVar0[64];
	struct<2> Var16;
	struct<2> Var18;
	
	if (Function_350(StackVal, &Global_54076, Param2, (&fParam5 + ((IntToFloat(Function_351()) * (&fParam6 - &fParam5)) * 0,5f))) || bParam11)
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
				if (!Function_75(StackVal, Var16))
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
					Function_348();
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
	else if ((!Function_350(StackVal, &Global_54076, Param2, (&fParam6 + ((IntToFloat(Function_351()) * (&fParam6 - &fParam5)) * 0,5f))) && ((CUTSCENE_MANAGER_IS_CUTSCENE_LOADED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || !CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED())) && !&bParam11)
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		uParam1 = 0;
	}
	else if (!Function_350(StackVal, &Global_54076, Param2, &fParam5))
	{
	}
	return 0;
}

void Function_348() //Position: 0x1242C / 74796
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
			Function_349(StackVal, StackVal, StackVal, StackVal, CUTSCENE_MANAGER_GET_CUTSCENE_ACTOR_NAME(bVar0), (Var1 + 180.0f), (Var5 + 180.0f));
		}
		bVar0++;
	}
	return;
}

void Function_349(char* cParam0) //Position: 0x12480 / 74880
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

bool Function_350(var uParam0, struct<2> Param1, float fParam3) //Position: 0x125A9 / 75177
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_316(&uParam0);
		if (VDIST(Function_316(&uParam0), Param1) >= fParam3)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_351() //Position: 0x12635 / 75317
{
	if (IS_PS3())
	{
		return 1;
	}
	return 0;
}

void Function_352() //Position: 0x12644 / 75332
{
	if (bLocal_1018 == 1)
	{
		bLocal_1657 = false;
		while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_4 + 672))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 672, bLocal_1657)))
			{
				if (SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 672, bLocal_1657) != &iLocal_4 + 552[62])
				{
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 672, bLocal_1657)))
					{
						TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 672, bLocal_1657), -1.0f, 0, 0);
						if (ACTORS_IN_RANGE(&Global_54076, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 672, bLocal_1657), 20.0f))
						{
							FORCE_LOOK_AT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 672, bLocal_1657), &Global_54076, 5.0f);
						}
					}
				}
			}
			bLocal_1657++;
		}
	}
	else if (bLocal_1018 == 2)
	{
		bLocal_1657 = false;
		while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_4 + 1288))
		{
			if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1288, bLocal_1657)))
			{
				if (SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1288, bLocal_1657) == &iLocal_4 + 1200[32] && SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1288, bLocal_1657) == &iLocal_4 + 1200[42])
				{
					TASK_STAND_STILL(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1288, bLocal_1657), -1.0f, 0, 0);
					if (ACTORS_IN_RANGE(&Global_54076, SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1288, bLocal_1657), 20.0f))
					{
						FORCE_LOOK_AT_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1288, bLocal_1657), &Global_54076, 5.0f);
					}
				}
			}
			bLocal_1657++;
		}
	}
	return;
}

void Function_353(int iParam0) //Position: 0x12797 / 75671
{
	if (!Function_372(&iParam0))
	{
		Function_354(&iParam0, 0.0f);
	}
	return;
}

void Function_354(vector3 vParam0) //Position: 0x127AE / 75694
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_78(&vParam0, 1);
	Function_39(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_355() //Position: 0x127D3 / 75731
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	
	if (!DECOR_CHECK_EXIST(&iLocal_868, "m_tOnTrain"))
	{
		DECOR_SET_FLOAT(&iLocal_868, "m_tOnTrain", GET_CURRENT_GAME_TIME());
	}
	if (!Function_372(&iLocal_1496))
	{
		Function_353(&iLocal_1496);
	}
	else if (Function_585(&iLocal_1496) < 5.0f)
	{
		fVar0 = Function_368(&Global_54076, &iLocal_4 + 1328[0]);
		fVar1 = Function_368(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)), &iLocal_4 + 1328[0]);
		fVar2 = (fVar0 - fVar1);
		if (fVar2 < 150.0f)
		{
			Function_361(&iLocal_1035, 220.0f, 320.0f, TRAIN_GET_CAR(iLocal_1658, false), "MexArmy02_catch_up_train", "MexArmy02_train_abandoned", &bLocal_1070, 0, 0, 0, 4294967295, 1, 0);
		}
		Function_584(&iLocal_1496);
	}
	if (IS_VOLUME_VALID(&iLocal_4 + 1328[4]))
	{
		if (IS_OBJECT_IN_VOLUME(TRAIN_GET_CAR(iLocal_1658, false), &iLocal_4 + 1328[4]))
		{
			iLocal_1379[2] = 1;
			DESTROY_VOLUME(&iLocal_4 + 1328[4]);
		}
	}
	if (iLocal_1379[2] && !HUD_IS_SHOWING_OBJECTIVE())
	{
		Function_360("MexArmy02_near_bridge", 7,5f, 1, 2, 0, 0, 0, 0);
		iLocal_1379[2] = 0;
	}
	switch (iLocal_1686)
	{
		case 0x00000000:
			Function_288(6, 0, 1);
			Function_359(4294967295);
			Function_360("mexarmy02_obj02c", 7,5f, 1, 2, 0, 0, 0, 0);
			iLocal_1686 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1025)))
				{
					Function_225(&iLocal_1025);
				}
				SET_PLAYER_ENDLESS_READYMODE(0, 1);
				iLocal_1686 = 2;
			}
			else if (IS_ACTOR_VALID(&iLocal_1025))
			{
				if (!IS_ACTOR_DEAD(&iLocal_1025))
				{
					if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1025)))
					{
						ADD_BLIP_FOR_OBJECT(&iLocal_1025, 334, 0f, 2, 0);
					}
				}
			}
			break;
		
		case 0x00000002:
			Function_253();
			Function_358(&iLocal_4 + 1288, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
			ADD_BLIP_FOR_OBJECT(&iLocal_1410, 325, 0f, 2, 0);
			SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_1410), "MexArmy02_train_health");
			Function_360("MexArmy02_obj03a", 7,5f, 1, 2, 0, 0, 0, 0);
			uLocal_1676 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "srebelsofftrain"));
			iLocal_1686 = 3;
			break;
		
		case 0x00000003:
			if (!Function_372(&iLocal_1472))
			{
				Function_353(&iLocal_1472);
			}
			else if (Function_585(&iLocal_1472) < 1.0f)
			{
				bVar4 = false;
				while (bVar4 <= SQUAD_GET_SIZE(&iLocal_4 + 1288))
				{
					iVar3 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_4 + 1288, bVar4);
					if (&iVar3 != &iLocal_4 + 1200[22])
					{
						if (IS_ACTOR_VALID(&iVar3))
						{
							if (IS_ACTOR_ALIVE(&iVar3))
							{
								if (!IS_ACTOR_ON_TRAIN(&iVar3, 0))
								{
									SQUAD_LEAVE(&iVar3);
									SQUAD_JOIN(&iVar3, &uLocal_1676);
									if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar3)))
									{
										REMOVE_BLIP(GET_BLIP_ON_ACTOR(&iVar3));
										PRINTINT(bVar4);
										PRINTNL();
									}
								}
							}
						}
					}
					bVar4++;
				}
				bVar4 = false;
				while (bVar4 <= SQUAD_GET_SIZE(&uLocal_1676))
				{
					iVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uLocal_1676, bVar4);
					if (IS_ACTOR_VALID(&iVar3))
					{
						if (IS_ACTOR_ALIVE(&iVar3))
						{
							if (IS_ACTOR_ON_TRAIN(&iVar3, 0))
							{
								SQUAD_LEAVE(&iVar3);
								SQUAD_JOIN(&iVar3, &iLocal_4 + 1288);
								if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iVar3)))
								{
									ADD_BLIP_FOR_ACTOR(&iVar3, 322, 0, 2, 0);
									PRINTINT(bVar4);
									PRINTNL();
								}
							}
						}
					}
					bVar4++;
				}
				Function_584(&iLocal_1472);
			}
			if (!Function_357(&iLocal_4 + 1288, 0, 1, 1, 1, 0))
			{
				Function_77();
				ATTACH_OBJECTS(&iLocal_4 + 2312, TRAIN_GET_CAR(iLocal_1658, false), Function_55(), *(&iLocal_4 + 2136[03]), Function_77(), 4294967295);
				Function_77();
				ATTACH_OBJECTS(&iLocal_4 + 2320, TRAIN_GET_CAR(iLocal_1658, false), Function_55(), *(&iLocal_4 + 2136[13]), Function_77(), 4294967295);
				Function_360("MexArmy02_jump_on_steamer", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_275(&uLocal_1680, 17, 0, 4294967295, 4294967295);
				if (!Function_372(&iLocal_1508))
				{
					Function_353(&iLocal_1508);
				}
				else
				{
					Function_584(&iLocal_1508);
				}
				DISABLE_WORLD_SECTOR("butterBridgeB");
				DISABLE_WORLD_SECTOR("butterBridgeA");
				ENABLE_WORLD_SECTOR("butterBridgeC");
				ENABLE_WORLD_SECTOR("butterBridgeD");
				ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				iLocal_1686 = 4;
			}
			else if (Function_356(&iLocal_4 + 1288))
			{
				Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
			}
			break;
		
		case 0x00000004:
			if (((IS_ACTOR_ON_TRAIN(&Global_54076, 0) && IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_610 + 40)) || IS_ACTION_NODE_PLAYING(&Global_54076, "/default_character_main/ride/dismount/coachjacking/dismount_jackleft")) || IS_ACTION_NODE_PLAYING(&Global_54076, "/default_character_main/ride/dismount/coachjacking/dismount_jackright"))
			{
				Function_253();
				DECOR_SET_FLOAT(&iLocal_868, "m_tOnTrain", GET_CURRENT_GAME_TIME());
				Function_584(&iLocal_1508);
				iLocal_1686 = 6;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			if (Function_585(&iLocal_1508) <= 1,2f)
			{
				bLocal_1396 = true;
				iLocal_1686 = 7;
			}
			break;
		
		case 0x00000007:
			break;
	}
	return;
}

bool Function_356(bool bParam0) //Position: 0x12DE2 / 77282
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_SHOOTING(&uVar1))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_357(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0x12E27 / 77351
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				bVar1 = true;
				if (bParam1)
				{
					if (IS_ACTOR_CRIPPLED(&uVar2, 3) || IS_ACTOR_CRIPPLED(&uVar2, 4))
					{
						bVar1 = false;
					}
				}
				if (&bParam2)
				{
					if (IS_ACTOR_HOGTIED(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam3)
				{
					if (IS_ACTOR_BEING_DRAGGED(&uVar2, 1.0f))
					{
						bVar1 = false;
					}
				}
				if (&bParam4)
				{
					if (UNK_0x7A207FFE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (&bParam5)
				{
					if (!IS_ACTOR_RIDING(&uVar2) && !IS_ACTOR_RIDING_VEHICLE(&uVar2))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_358(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x12EEC / 77548
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

void Function_359(bool bParam0) //Position: 0x12FFC / 77820
{
	DECOR_SET_INT(&Global_54076, "Player_SimWhistle", &bParam0);
	DECOR_SET_INT(&Global_54076, "WhistleTimeWaited", 100);
	return;
}

void Function_360(bool bParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0x1303F / 77887
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

int Function_361(struct<2> Param0, int iParam2, int iParam3, bool bParam4, char* cParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12) //Position: 0x130D4 / 78036
{
	Param0 = { StackVal, Param0 };
	if (!IS_OBJECT_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_314(&Global_54076, &iParam3, iParam2))
	{
		Function_551(&cParam5);
		iParam6 = 1;
		return 1;
	}
	if (!Function_314(&Global_54076, &iParam3, fParam1))
	{
		if (!Function_367(1))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || bParam7)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_360(&bParam4, 7,5f, 0, 2, &bParam7, 0, 0, 0);
				Function_366(1);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_365(&iParam8, 0, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_365(&iParam9, 0, 15, 1, &iParam3);
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
		Function_364(1);
		if (!Function_363())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_362();
			}
			if ((IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iParam3)) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MODR_addedblip"))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(&iParam3));
				DECOR_REMOVE(&iParam3, "MODR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_365(&iParam8, 1, 15, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_365(&iParam9, 1, 15, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_362() //Position: 0x1327D / 78461
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

bool Function_363() //Position: 0x132AB / 78507
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

void Function_364(bool bParam0) //Position: 0x132F2 / 78578
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
			Function_39(&bVar0, bParam0);
			DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
		}
	}
	return;
}

void Function_365(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x13359 / 78681
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

void Function_366(bool bParam0) //Position: 0x13414 / 78868
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&Global_54076))
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "missionFailRmd"))
		{
			bVar0 = DECOR_GET_INT(&Global_54076, "missionFailRmd");
		}
		Function_78(&bVar0, bParam0);
		DECOR_SET_INT(&Global_54076, "missionFailRmd", bVar0);
	}
	return;
}

bool Function_367(bool bParam0) //Position: 0x1347B / 78971
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

var Function_368(bool bParam0, var uParam1) //Position: 0x134C5 / 79045
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&bParam0))
	{
		Function_316(&bParam0);
		Var0 = Function_316(&bParam0);
		Function_369(&uParam1);
		Var2 = Function_369(&uParam1);
		return VDIST(Var0, Var2);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to volume. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_369(var uParam0) //Position: 0x13543 / 79171
{
	struct<2> Var0;
	
	GET_VOLUME_CENTER(&uParam0, &Var0);
	return StackVal, Var0;
}

void Function_370() //Position: 0x13555 / 79189
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_371(int iParam0, float fParam1) //Position: 0x135AE / 79278
{
	if (!Function_372(&iParam0))
	{
		Function_354(&iParam0, fParam1);
	}
	return;
}

bool Function_372(int iParam0) //Position: 0x135C6 / 79302
{
	return Function_14(iParam0, 1);
}

void Function_373() //Position: 0x135D4 / 79316
{
	var uVar0;
	int iVar1;
	
	if (iLocal_1019 < 3 && iLocal_1019 > 105)
	{
		Function_478();
		if (!iLocal_1405)
		{
			if (IS_ACTOR_ALIVE(&iLocal_1450))
			{
				if (Function_314(&iLocal_1450, &iLocal_4 + 2272[0], 25.0f))
				{
					GET_OBJECT_POSITION(&iLocal_4 + 2272[0], &Local_1347);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_1450, &Local_1347, 4);
					iLocal_1405 = 1;
				}
			}
		}
		if (!Function_372(&iLocal_1476))
		{
			Function_371(&iLocal_1476, 13,1f);
		}
		else if (Function_585(&iLocal_1476) < 13.0f)
		{
			uVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
			if (IS_PLAYER_TARGETTING_ACTOR(0, &iLocal_1023, 1))
			{
				if (bLocal_1018 != 1 && iLocal_1692 > 1)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_370();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_477();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_TargetsSantaTrain", "MexArmy02_TargetsSantaTrain", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_584(&iLocal_1476);
			}
			else if ((IS_PLAYER_TARGETTING_ACTOR(0, &iLocal_1450, 1) || IS_PLAYER_TARGETTING_ACTOR(0, &iLocal_1452, 1)) || Function_476(0, &iLocal_4 + 672, 1))
			{
				if (bLocal_1018 != 1 && iLocal_1692 > 1)
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_475();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_GunOnSantaMenChu", "MexArmy02_GunOnSantaMenChu", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
				}
				else if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_474();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_TargetsSantasMenTrain", "MexArmy02_TargetsSantasMenTrain", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_584(&iLocal_1476);
			}
			else if (!IS_ACTOR_VALID(&uVar0))
			{
				if (bLocal_1018 != 1 && iLocal_1692 > 1)
				{
					if (IS_ACTOR_SHOOTING(&Global_54076))
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_473();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_ShootsRandChup", "MexArmy02_ShootsRandChup", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
						}
						Function_584(&iLocal_1476);
					}
				}
			}
		}
		if (iLocal_1687 >= 0)
		{
			Function_472();
			Function_471();
			Function_448();
			Function_442();
			Function_425();
			if (!Function_372(&iLocal_1468))
			{
				Function_353(&iLocal_1468);
			}
			else
			{
				if (iLocal_1512 == 10)
				{
					if (Function_585(&iLocal_1468) < 5.0f)
					{
						Function_421();
					}
				}
				else
				{
					Function_421();
				}
				if (Function_585(&iLocal_1468) < 5.0f)
				{
					Function_352();
					Function_420();
					Function_418();
					Function_414();
					Function_413();
					Function_584(&iLocal_1468);
				}
			}
			if (Function_314(&Global_54076, &iLocal_4 + 1328[3], 200.0f))
			{
				Function_261(&iLocal_4 + 1328[3]);
				Function_347(StackVal, "$/cutscene/MEXARMY02_CS02_a/MEXARMY02_CS02_a", &uLocal_1679, Function_261(&iLocal_4 + 1328[3]), 0, 200.0f, 400.0f, 2, 1, 1, 2, 0, 1);
			}
		}
	}
	switch (iLocal_1019)
	{
		case 0x00000000:
			if (Function_412())
			{
				Function_584(&iLocal_1027);
				Function_275(&uLocal_1680, 10, 0, 4294967295, 4294967295);
				if (iLocal_1047[0] == 0)
				{
					iLocal_1019 = 1;
				}
				else
				{
					iLocal_1019 = 2;
				}
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_341(Global_46866[0]) || iLocal_1020 != 4294967295))
			{
				if (Function_411())
				{
					Function_584(&iLocal_1027);
					iLocal_1019 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_376())
			{
				GET_ACTOR_VELOCITY(&bLocal_1448, &Local_1347);
				if (VMAG(Local_1347) >= 0,5f)
				{
					if (HUD_IS_FADED())
					{
						HUD_FADE_IN(1.0f, 1065353216);
					}
					Function_335(bLocal_1018);
					Function_326(StackVal, Function_335(bLocal_1018), bLocal_1018, Global_46746[2], Function_334(bLocal_1018), 2);
					iLocal_1513 = 6;
					iLocal_1514 = 6;
					iLocal_1515 = 6;
					iLocal_1691 = 0;
					SET_PLAYER_CONTROL(0, 1, 0, 0);
					TASK_CLEAR(&Global_54076);
					Function_584(&iLocal_1027);
					iLocal_1019 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (!HUD_IS_FADING())
			{
				GET_ACTOR_VELOCITY(&bLocal_1448, &Local_1347);
				if (VMAG(Local_1347) >= 0,5f)
				{
					iLocal_1691 = 0;
					iLocal_1687 = 0;
					iLocal_1689 = 0;
					iLocal_1692 = 0;
					TASK_STAND_STILL(&bLocal_1448, -1.0f, 0, 0);
					REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1448);
					Function_584(&iLocal_1027);
					iLocal_1019 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (bLocal_1402)
			{
				if (!IS_ACTOR_RIDING(&Global_54076))
				{
					Function_584(&iLocal_1027);
					Function_584(&iLocal_1031);
					Function_584(&iLocal_1035);
					iLocal_1019 = 105;
				}
			}
			break;
		
		case 0x00000069:
			Function_584(&iLocal_1027);
			iLocal_1019 = 106;
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				Function_375(&(Local_1126[215]));
				Function_375(&(Local_1126[315]));
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					if (IS_ACTOR_VALID(&(Local_1527[iVar15])))
					{
						DESTROY_ACTOR(&(Local_1527[iVar15]));
					}
					iVar1++;
				}
				if (SQUAD_IS_VALID(&iLocal_1668))
				{
					Function_374(&iLocal_1668);
				}
				if (SQUAD_IS_VALID(&iLocal_1670))
				{
					Function_374(&iLocal_1670);
				}
				if (SQUAD_IS_VALID(&iLocal_1666))
				{
					Function_374(&iLocal_1666);
				}
				if (SQUAD_IS_VALID(&iLocal_1664))
				{
					Function_374(&iLocal_1664);
				}
				if (SQUAD_IS_VALID(&iLocal_1662))
				{
					Function_374(&iLocal_1662);
				}
				Function_189();
				Function_188();
				Function_339();
				iLocal_1047[1] = 1;
				Function_584(&iLocal_1027);
				bLocal_1018 = 2;
				iLocal_1019 = 0;
			}
			break;
	}
	return;
}

void Function_374(int iParam0) //Position: 0x13BD3 / 80851
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
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
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				iVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&iVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				iVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&iVar2);
			}
			else
			{
				DESTROY_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_375(struct<69> Param0) //Position: 0x13C63 / 80995
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

bool Function_376() //Position: 0x13D23 / 81187
{
	switch (iLocal_1685)
	{
		case 0x00000000:
			if (Function_377())
			{
				iLocal_1685 = 1;
			}
			break;
		
		case 0x00000001:
			if (iLocal_1047[0] == 0)
			{
				Function_268(&iLocal_1023, &iLocal_4 + 1728[2], 1, 1, 1);
				TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_4 + 1056[02], &iLocal_4 + 1728[2], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
				TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_1025, &iLocal_4 + 1728[0], Vector(0.0f, 0.0f, 5.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
				Function_268(&iLocal_1450, &iLocal_4 + 2272[0], 1, 1, 1);
				Function_268(&iLocal_4 + 1056[12], &iLocal_4 + 2272[0], 1, 1, 1);
				TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_1452, &iLocal_4 + 1728[9], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
				TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_4 + 1056[22], &iLocal_4 + 1728[9], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
				TELEPORT_ACTOR(&iLocal_1025, &Global_54078, 1, 1, 1);
				if (!TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &bLocal_1448, &iLocal_4 + 1728[6], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216))
				{
					LOG_ERROR("m_TaxiWagon DID NOT TELEPORT");
				}
			}
			iLocal_1685 = 2;
			break;
		
		case 0x00000002:
			if (iLocal_1047[0] == 0)
			{
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1450))
				{
					ACTOR_MOUNT_ACTOR(&iLocal_1450, &iLocal_4 + 1056[12]);
				}
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1452))
				{
					ACTOR_MOUNT_ACTOR(&iLocal_1452, &iLocal_4 + 1056[22]);
				}
				TASK_STAND_STILL(&iLocal_1450, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_1452, -1.0f, 0, 0);
				MEMORY_PREFER_RIDING(&iLocal_1450, true);
				MEMORY_PREFER_RIDING(&iLocal_1452, true);
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1023))
				{
					ACTOR_MOUNT_ACTOR(&iLocal_1023, &iLocal_4 + 1056[02]);
				}
				MEMORY_PREFER_RIDING(&iLocal_1023, true);
				if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					ACTOR_MOUNT_ACTOR(&Global_54076, &iLocal_1025);
				}
				TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
				TASK_STAND_STILL(&iLocal_4 + 1056[02], -1.0f, 0, 0);
				TASK_STAND_STILL(&bLocal_1448, -1.0f, 0, 0);
			}
			iLocal_1685 = 3;
			break;
		
		case 0x00000003:
			iLocal_1685 = 4;
			break;
		
		case 0x00000004:
			return 1;
			break;
		
		case 0x00000005:
			break;
	}
	return 0;
}

bool Function_377() //Position: 0x13F6A / 81770
{
	switch (iLocal_1516)
	{
		case 0x00000006:
			iLocal_1517 = 6;
			if (iLocal_1658 <= 0)
			{
				iLocal_1516 = 15;
			}
			else
			{
				iLocal_1516 = 16;
			}
			break;
		
		case 0x0000000F:
			if (Function_289("rail__rrtrack_02x", &iLocal_4 + 1992[0], &iLocal_4 + 1992[0], &iLocal_4 + 1992[1]))
			{
				uLocal_1651 = CREATE_EVENT_TRAP("m_eHitBoiler", 5, &iLocal_868);
				EVENT_TRAP_ON_VOLUME(&uLocal_1651, &iLocal_610 + 32);
				EVENT_TRAP_STORE_EVENTS(&uLocal_1651, 1);
				GET_OBJECT_POSITION(&iLocal_4 + 1992[1], &Local_1350);
				TRAIN_SET_TARGET_POS(iLocal_1658, &Local_1350);
				TRAIN_SET_TARGET_SPEED(iLocal_1658, 0.0f);
				TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1658, 0);
				iLocal_1516 = 16;
			}
			break;
		
		case 0x00000010:
			iLocal_1516 = 7;
			break;
		
		case 0x00000007:
			Function_409();
			Function_408(&iLocal_4 + 672, 25.0f);
			Function_407(&iLocal_4 + 672, 15, 1);
			Function_402(&(Local_1126[215]), &iLocal_4 + 672, "MexicanSoldier", 0, 0x5f5e100, 1);
			Function_398(&(Local_1126[215]), 2);
			iLocal_1516 = 8;
			break;
		
		case 0x00000008:
			Function_396();
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 672, 2);
			iLocal_1516 = 9;
			break;
		
		case 0x00000009:
			Function_395();
			Function_393();
			iLocal_1516 = 10;
			break;
		
		case 0x0000000A:
			Function_389();
			Function_388(StackVal, &iLocal_4 + 1000, GET_ACTOR_FROM_OBJECT(&iLocal_1410), Vector(0.0f, 3.0f, 0.0f));
			Function_408(&iLocal_4 + 1000, 35.0f);
			Function_407(&iLocal_4 + 1000, 16, 1);
			iLocal_1516 = 11;
			break;
		
		case 0x0000000B:
			if (!IS_ACTOR_VALID(&iLocal_4 + 1168[02]))
			{
				Function_383();
			}
			bLocal_1448 = &iLocal_4 + 1168[02];
			Function_402(&(Local_1126[115]), &bLocal_1448, "wagon", 1, 0x5f5e100, 1);
			ENABLE_VEHICLE_SEAT(&bLocal_1448, 0, 0);
			Function_382(&bLocal_1448);
			iLocal_1516 = 12;
			break;
		
		case 0x0000000C:
			if (!SQUAD_IS_VALID(&iLocal_4 + 1128))
			{
				Function_380();
			}
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 1056[02], 0);
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 1056[12], 0);
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 1056[22], 0);
			if (!SQUAD_IS_VALID(&iLocal_4 + 720))
			{
				Function_378();
			}
			iLocal_1450 = &iLocal_4 + 680[02];
			iLocal_1452 = &iLocal_4 + 680[12];
			SQUAD_JOIN(&iLocal_1450, &iLocal_1672);
			SQUAD_JOIN(&iLocal_1452, &iLocal_1672);
			Function_402(&(Local_1126[315]), &iLocal_1672, "MexicanSoldier", 0, 0x5f5e100, 1);
			Function_398(&(Local_1126[315]), 2);
			iLocal_1516 = 13;
			break;
		
		case 0x0000000D:
			iLocal_1516 = 104;
			break;
		
		case 0x00000068:
			return 1;
			break;
	}
	return 0;
}

void Function_378() //Position: 0x1423A / 82490
{
	(&iLocal_4 + 720) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 680[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 380, Vector(-4368,016f, 39,0074f, 4351,824f), Vector(0.0f, 120,5122f, 0.0f));
	Function_379(&iLocal_4 + 680[02]);
	*(&iLocal_4 + 680[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 381, Vector(-4372,016f, 38,88618f, 4351,824f), Vector(179,5684f, 75,94582f, 179,7452f));
	Function_379(&iLocal_4 + 680[12]);
	return;
}

void Function_379(var uParam0) //Position: 0x142CC / 82636
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 720);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&uParam0, true);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 20);
	SET_ACTOR_HEALTH(&uParam0, 25.0f);
	return;
}

void Function_380() //Position: 0x14317 / 82711
{
	*(&iLocal_4 + 1128) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 1056[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 976, Vector(-2780f, 32,12549f, 4268f), Vector(0.0f, -8,242899f, 0.0f));
	Function_381(&iLocal_4 + 1056[02]);
	*(&iLocal_4 + 1056[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 977, Vector(-4383,119f, 38,52884f, 4369,14f), Vector(0.0f, 118,6768f, 0.0f));
	Function_381(&iLocal_4 + 1056[12]);
	*(&iLocal_4 + 1056[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 980, Vector(-4387,386f, 38,70368f, 4365,949f), Vector(0.0f, 148,8994f, 0.0f));
	Function_381(&iLocal_4 + 1056[22]);
	*(&iLocal_4 + 1056[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 976, Vector(-2764f, 32,12549f, 4264f), Vector(0.0f, -8,242899f, 0.0f));
	Function_381(&iLocal_4 + 1056[32]);
	return;
}

void Function_381(int iParam0) //Position: 0x14413 / 82963
{
	SQUAD_JOIN(&iParam0, &iLocal_4 + 1128);
	TASK_STAND_STILL(&iParam0, -1.0f, 0, 0);
	ACCESSORIZE_HORSE(&iParam0, 3);
	return;
}

void Function_382(bool bParam0) //Position: 0x14436 / 82998
{
	bool bVar0;
	var uVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("SET_VEHICLE_DRAFTS_FRIENDLY -- Invalid vehicle");
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_NUM_DRAFTED_ACTORS(&bParam0))
	{
		uVar1 = GET_DRAFT_ACTOR(bVar0, &bParam0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_FACTION(&uVar1, 20);
		}
		bVar0++;
	}
	return;
}

void Function_383() //Position: 0x144AE / 83118
{
	*(&iLocal_4 + 1192) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "wagon", 0);
	*(&iLocal_4 + 1168[02]) = Function_384(StackVal, StackVal, &iLocal_4, Function_55(), 1196, 976, Vector(-4395,177f, 37,86773f, 4364,185f), Vector(0.0f, 167,3869f, 0.0f), 1, 976, 976, 976, 4);
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1192, &iLocal_4 + 1168[02]);
	return;
}

int Function_384(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x14517 / 83223
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
	int iVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
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
			if (Function_387(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_386(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_385(bVar16, &iVar1))
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
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_385(int iParam0, bool[] bParam1) //Position: 0x1476A / 83818
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

var Function_386(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x1479E / 83870
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_387(var uParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x147BA / 83898
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

void Function_388(bool bParam0, float fParam1, struct<2> Param2) //Position: 0x147E6 / 83942
{
	int iVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&fParam1))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, false);
		if (IS_ACTOR_VALID(&uVar1))
		{
			AI_SHOOT_TARGET_SET_OFFSET(&uVar1, &fParam1, Param2);
		}
		iVar0++;
	}
}

void Function_389() //Position: 0x14844 / 84036
{
	bool bVar0;
	var uVar1;
	
	bVar0 = &bVar0;
	uVar1 = &uVar1;
	(&iLocal_4 + 1000) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	bVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 521, Function_55(), 977, Vector(-2216f, 13,17877f, 4433,738f), Vector(0.0f, 0,2856277f, 0.0f));
	Function_390(&bVar0);
	bVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 518, Function_55(), 976, Vector(-2204f, 13,051f, 4444.0f), Vector(0.0f, 15,94403f, 0.0f));
	Function_390(&bVar0);
	return;
}

void Function_390(bool bParam0) //Position: 0x148CE / 84174
{
	SQUAD_JOIN(&bParam0, &iLocal_4 + 1000);
	GIVE_WEAPON_TO_ACTOR(&bParam0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&bParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&bParam0, 1);
	SET_ACTOR_FACTION(&bParam0, 19);
	MEMORY_PREFER_RIDING(&bParam0, true);
	return;
}

int Function_391(int iParam0, var uParam1, bool bParam2, float fParam3, bool bParam4, struct<2> Param5, struct<2> Param7) //Position: 0x1490E / 84238
{
	var uVar0;
	var uVar1;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_392(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_392(bParam4))
	{
		bParam4 = 976;
	}
	uVar1 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &fParam3, bParam4, Param5, Param7);
	if (!IS_ACTOR_VALID(&uVar1))
	{
		uVar0 = &uVar1;
		return "";
	}
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&iParam0, &uParam1, bParam2, Param5, Param7);
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

bool Function_392(int iParam0) //Position: 0x14A46 / 84550
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

void Function_393() //Position: 0x14A5D / 84573
{
	(&iLocal_4 + 784) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 728[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 522, Vector(-2201,936f, 5,827535f, 4322,231f), Vector(0.0f, 115,8932f, 0.0f));
	Function_394(&iLocal_4 + 728[02]);
	*(&iLocal_4 + 728[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 516, Vector(-2204,259f, 5,756438f, 4324,621f), Vector(0.0f, 161,9111f, 0.0f));
	Function_394(&iLocal_4 + 728[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 728[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 728[12], 23, 0,5f, 1, 1);
	*(&iLocal_4 + 728[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 529, Vector(-2203,789f, 5,769855f, 4316,77f), Vector(0.0f, 115,8932f, 0.0f));
	Function_394(&iLocal_4 + 728[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 728[22]);
	return;
}

void Function_394(var uParam0) //Position: 0x14B4D / 84813
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 784);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 42, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	SET_ACTOR_HEALTH(&uParam0, 11.0f);
	return;
}

void Function_395() //Position: 0x14B88 / 84872
{
	*(&iLocal_4 + 1320) = CREATE_ACTORSET_IN_LAYOUT(&iLocal_4, "AMBUSHCOVER", 0);
	*(&iLocal_4 + 1296[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 1196, Vector(-2205,332f, 5,758476f, 4325,729f), Vector(0.0f, 24,45701f, 0.0f));
	ADD_ACTORSET_MEMBER(&iLocal_4 + 1320, &iLocal_4 + 1296[02]);
	TASK_STAND_STILL(&iLocal_4 + 1296[02], -1.0f, 0, 0);
	return;
}

void Function_396() //Position: 0x14BF8 / 84984
{
	struct<2> Var0;
	int iVar2;
	struct<2> Var3;
	
	Function_77();
	Var0 = Function_77();
	iVar2 = 0;
	Var3 = Vector(0.0f, 180.0f, 0.0f);
	Local_1527[iVar25] = &iLocal_4 + 552[62];
	*(&Local_1527[iVar25] + 8) = ATTACH_OBJECTS(&iLocal_4 + 552[62], &iLocal_610 + 272, Function_55(), Var0, Var0, 4294967295);
	Local_1527[iVar25].f_16 = 0;
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1527[iVar25]), 0);
	SET_ACTOR_CAN_BE_TARGETED(&(Local_1527[iVar25]), false);
	SET_ACTOR_INVULNERABILITY(&iLocal_4 + 552[62], true);
	iVar2++;
	Local_1527[iVar25] = &iLocal_4 + 552[12];
	Local_1527[iVar25].f_16 = 2;
	*(&Local_1527[iVar25] + 32) = &iLocal_730 + 72[1];
	*(&Local_1527[iVar25] + 8) = ATTACH_OBJECTS(&(Local_1527[iVar25]), &Local_1527[iVar25] + 32, Function_55(), Var0, Var3, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(&Local_1527[iVar25] + 8);
	SET_ACTOR_CAN_BE_TARGETED(&(Local_1527[iVar25]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1527[iVar25]), 0);
	iVar2++;
	Local_1527[iVar25] = &iLocal_4 + 552[02];
	Local_1527[iVar25].f_16 = 3;
	*(&Local_1527[iVar25] + 32) = &iLocal_730 + 72[0];
	*(&Local_1527[iVar25] + 8) = ATTACH_OBJECTS(&(Local_1527[iVar25]), &Local_1527[iVar25] + 32, Function_55(), Var0, Var3, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(&Local_1527[iVar25] + 8);
	TASK_STAND_STILL(&(Local_1527[iVar25]), -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&(Local_1527[iVar25]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1527[iVar25]), 0);
	iVar2++;
	Local_1527[iVar25] = &iLocal_4 + 552[22];
	Local_1527[iVar25].f_16 = 3;
	*(&Local_1527[iVar25] + 32) = &iLocal_680 + 136;
	*(&Local_1527[iVar25] + 8) = ATTACH_OBJECTS(&(Local_1527[iVar25]), &Local_1527[iVar25] + 32, Function_55(), Var0, Var3, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(&Local_1527[iVar25] + 8);
	TASK_STAND_STILL(&(Local_1527[iVar25]), -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&(Local_1527[iVar25]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1527[iVar25]), 0);
	iVar2++;
	Local_1527[iVar25] = &iLocal_4 + 552[32];
	Local_1527[iVar25].f_16 = 4;
	*(&Local_1527[iVar25] + 32) = &iLocal_764 + 72;
	*(&Local_1527[iVar25] + 8) = ATTACH_OBJECTS(&(Local_1527[iVar25]), &Local_1527[iVar25] + 32, Function_55(), Var0, Var3, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(&Local_1527[iVar25] + 8);
	TASK_STAND_STILL(&(Local_1527[iVar25]), -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&(Local_1527[iVar25]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1527[iVar25]), 0);
	iVar2++;
	Local_1527[iVar25] = &iLocal_4 + 552[42];
	Local_1527[iVar25].f_16 = 5;
	*(&Local_1527[iVar25] + 32) = &iLocal_800 + 80;
	*(&Local_1527[iVar25] + 8) = ATTACH_OBJECTS(&(Local_1527[iVar25]), &Local_1527[iVar25] + 32, Function_55(), Var0, Var3, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(&Local_1527[iVar25] + 8);
	TASK_STAND_STILL(&(Local_1527[iVar25]), -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&(Local_1527[iVar25]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1527[iVar25]), 0);
	iVar2++;
	Local_1527[iVar25] = &iLocal_4 + 552[52];
	Local_1527[iVar25].f_16 = 5;
	*(&Local_1527[iVar25] + 32) = &iLocal_800 + 96;
	*(&Local_1527[iVar25] + 8) = ATTACH_OBJECTS(&(Local_1527[iVar25]), &Local_1527[iVar25] + 32, Function_55(), Var0, Var3, 4294967295);
	REMOVE_OBJECT_ATTACHMENT(&Local_1527[iVar25] + 8);
	TASK_STAND_STILL(&(Local_1527[iVar25]), -1.0f, 0, 0);
	SET_ACTOR_CAN_BE_TARGETED(&(Local_1527[iVar25]), false);
	AI_SET_ENABLE_HORSE_CHARGE_REACTIONS(&(Local_1527[iVar25]), 0);
	iVar2++;
	SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_4 + 672, 1);
	Function_397(&iLocal_4 + 672);
	if (IS_ACTOR_VALID(&iLocal_4 + 552[62]))
	{
		REMOVE_OBJECT_ATTACHMENT(&Local_1599[05] + 8);
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(&iLocal_610 + 272)))
		{
			SNAP_ACTOR_TO_GRINGO(&iLocal_4 + 552[62], &iLocal_610 + 272, "UseCase1", true, 0, 0);
			TASK_USE_GRINGO(&iLocal_4 + 552[62], GET_GRINGO_FROM_OBJECT(&iLocal_610 + 272), "UseCase1", 4294967295, 1);
			TASK_PRIORITY_SET(&iLocal_4 + 552[62], true);
		}
	}
	return;
}

void Function_397(int iParam0) //Position: 0x15067 / 86119
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

void Function_398(int iParam0, int iParam1) //Position: 0x1509C / 86172
{
	if (iParam1 != 100000000)
	{
		Function_401(&iParam0, iParam1);
	}
	else
	{
		Function_399(&iParam0, 1);
	}
	return;
}

void Function_399(struct<69> Param0) //Position: 0x150BE / 86206
{
	Param0.f_68 = 0;
	Function_400(&Param0, 2, &bParam1);
	Function_400(&Param0, 4, &bParam1);
	Function_400(&Param0, 8, &bParam1);
	Function_400(&Param0, 16, &bParam1);
	Function_400(&Param0, 32, &bParam1);
	Function_400(&Param0, 64, &bParam1);
	Function_400(&Param0, 128, &bParam1);
	Function_400(&Param0, 256, &bParam1);
	Function_400(&Param0, 512, &bParam1);
	Function_400(&Param0, 1024, &bParam1);
	return;
}

void Function_400(int iParam0, int iParam1, bool bParam2) //Position: 0x15139 / 86329
{
	bool bVar0;
	
	Function_78(&iParam0 + 68, iParam1);
	bVar0 = false;
	Function_78(&bVar0, iParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	if (bParam2)
	{
		Function_39(&iParam0 + 68, bVar0);
	}
	else
	{
		Function_78(&iParam0 + 68, bVar0);
	}
	return;
}

void Function_401(int iParam0, bool bParam1) //Position: 0x15178 / 86392
{
	bool bVar0;
	
	Function_39(&iParam0 + 68, bParam1);
	bVar0 = false;
	Function_78(&bVar0, bParam1);
	bVar0 = SHIFT_LEFT(bVar0, 11);
	Function_39(&iParam0 + 68, bVar0);
	return;
}

int Function_402(struct<69> Param0) //Position: 0x151A5 / 86437
{
	if (!Function_406(&Param0, &uParam1))
	{
		return 0;
	}
	if (!Function_405(&Param0, &uParam2))
	{
		return 0;
	}
	Function_404(&Param0, &iParam3);
	Param0.f_68 = 0;
	Function_403(&Param0, &iParam4, &iParam5);
	return 1;
}

void Function_403(var uParam0, int iParam1, int iParam2) //Position: 0x151EB / 86507
{
	if (iParam1 != 100000000)
	{
		Function_400(&uParam0, iParam1, &iParam2);
	}
	else
	{
		Function_399(&uParam0, &iParam2);
	}
	return;
}

void Function_404(char* cParam0) //Position: 0x15212 / 86546
{
	cParam0.f_64 = iParam1;
	return;
}

bool Function_405(int iParam0, char* cParam1) //Position: 0x1521F / 86559
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

bool Function_406(struct<61> Param0) //Position: 0x152AC / 86700
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

void Function_407(var uParam0, int iParam1, bool bParam2) //Position: 0x1545F / 87135
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_ATTRIB_BOOL(&uVar1, iParam1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_408(var uParam0, bool bParam1) //Position: 0x154B0 / 87216
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
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				COMBAT_CLASS_AI_SET_RANGE_ACCURACY(&uVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_409() //Position: 0x154FF / 87295
{
	*(&iLocal_4 + 672) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 552[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 392, Vector(-4,949314f, 0.0f, 3,907166f), Vector(0.0f, 0.0f, 0.0f));
	Function_410(&iLocal_4 + 552[02]);
	*(&iLocal_4 + 552[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 381, Vector(-4,949314f, 0.0f, 3,907166f), Vector(0.0f, 0.0f, 0.0f));
	Function_410(&iLocal_4 + 552[12]);
	*(&iLocal_4 + 552[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 380, Vector(-4,949314f, 0.0f, 2,87816f), Vector(0.0f, 0.0f, 0.0f));
	Function_410(&iLocal_4 + 552[22]);
	*(&iLocal_4 + 552[32]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 379, Vector(-4,949314f, 0.0f, -0,04726852f), Vector(0.0f, 0.0f, 0.0f));
	Function_410(&iLocal_4 + 552[32]);
	*(&iLocal_4 + 552[42]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 391, Vector(-4,949314f, 0.0f, -1,9909f), Vector(0.0f, 0.0f, 0.0f));
	Function_410(&iLocal_4 + 552[42]);
	*(&iLocal_4 + 552[52]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 382, Vector(-4,949314f, 0.0f, -3,083076f), Vector(0.0f, 0.0f, 0.0f));
	Function_410(&iLocal_4 + 552[52]);
	*(&iLocal_4 + 552[62]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 379, Vector(-4,949314f, 0.0f, -7,016419f), Vector(0.0f, 0.0f, 0.0f));
	Function_410(&iLocal_4 + 552[62]);
	return;
}

void Function_410(var uParam0) //Position: 0x1566E / 87662
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 672);
	ACTOR_SET_GRABBED_BY_CUTSCENE(&uParam0, true);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 20);
	MEMORY_SET_WEAPON_DRAW_PREFERENCE(&uParam0, 0);
	TASK_PRIORITY_SET(&uParam0, false);
	return;
}

bool Function_411() //Position: 0x156BC / 87740
{
	Function_340(&iLocal_4 + 200, 392, 2, 0);
	Function_340(&iLocal_4 + 200, 381, 2, 0);
	Function_340(&iLocal_4 + 200, 380, 2, 0);
	Function_340(&iLocal_4 + 200, 379, 2, 0);
	Function_340(&iLocal_4 + 200, 391, 2, 0);
	Function_340(&iLocal_4 + 200, 382, 2, 0);
	Function_340(&iLocal_4 + 200, 522, 2, 0);
	Function_340(&iLocal_4 + 200, 516, 2, 0);
	Function_340(&iLocal_4 + 200, 529, 2, 0);
	Function_340(&iLocal_4 + 200, 518, 2, 0);
	Function_340(&iLocal_4 + 200, 530, 2, 0);
	Function_340(&iLocal_4 + 200, 521, 2, 0);
	Function_340(&iLocal_4 + 200, 523, 2, 0);
	Function_340(&iLocal_4 + 200, 977, 2, 0);
	Function_340(&iLocal_4 + 200, 976, 2, 0);
	Function_340(&iLocal_4 + 200, 980, 2, 0);
	Function_340(&iLocal_4 + 200, 1196, 2, 0);
	if (Function_295(&iLocal_4 + 200))
	{
		return 1;
	}
	return 0;
}

bool Function_412() //Position: 0x157AC / 87980
{
	if (iLocal_1047[0] == 0)
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
		}
		if (!Function_341(Global_46866[0]))
		{
			Function_343(&Local_872);
		}
		TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Global_54076, &iLocal_4 + 1728[0], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
		Function_225(&iLocal_4 + 1552[0]);
	}
	Function_280(0);
	Function_220(&iLocal_868);
	Function_220(&iLocal_4);
	if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
	{
		RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
	}
	SET_ACTOR_HEALTH(&iLocal_1023, GET_ACTOR_MAX_HEALTH(&iLocal_1023));
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_344();
	Function_204(1);
	return 1;
}

void Function_413() //Position: 0x1585E / 88158
{
	var uVar0;
	var uVar2;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	var uVar9;
	float fVar11;
	float fVar12;
	float fVar13;
	
	if (bLocal_1362)
	{
		if (SQUAD_IS_VALID(&iLocal_1662))
		{
			bLocal_1657 = false;
			while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1662))
			{
				bLocal_1454 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657);
				if (IS_ACTOR_VALID(&bLocal_1454))
				{
					Function_77();
					uVar0 = Function_77();
					Function_77();
					uVar2 = Function_77();
					fVar4 = 0.0f;
					fVar5 = 0.0f;
					fVar6 = 0.0f;
					GET_OBJECT_POSITION(&bLocal_1454, &uVar0);
					GET_OBJECT_POSITION(&uLocal_1420, &uVar2);
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 2400, &uVar0, &uVar2, &fVar4, &fVar5, &fVar6);
					if (fVar4 > (fVar5 - 60.0f))
					{
						bLocal_1657 = GET_ACTOR_ENUM(&bLocal_1454);
						TASK_CLEAR(&bLocal_1454);
						MEMORY_CLEAR_ALL(&bLocal_1454);
						Function_222(&bLocal_1454);
						SQUAD_LEAVE(&bLocal_1454);
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&bLocal_1454)))
						{
							REMOVE_BLIP(GET_BLIP_ON_ACTOR(&bLocal_1454));
						}
						RELEASE_ACTOR(&bLocal_1454);
						return;
					}
				}
				bLocal_1657++;
			}
		}
	}
	if (IS_ITERATOR_VALID(&uLocal_1021))
	{
		ITERATE_ON_OBJECT_TYPE(&uLocal_1021, 15);
		ITERATE_IN_LAYOUT(&uLocal_1021, &iLocal_4);
		uLocal_1426 = START_OBJECT_ITERATOR(&uLocal_1021);
		while (IS_OBJECT_VALID(&uLocal_1426))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uLocal_1426)))
			{
				if (GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(&uLocal_1426)) == 19)
				{
					Function_77();
					uVar7 = Function_77();
					Function_77();
					uVar9 = Function_77();
					fVar11 = 0.0f;
					fVar12 = 0.0f;
					fVar13 = 0.0f;
					GET_OBJECT_POSITION(&uLocal_1426, &uVar7);
					GET_OBJECT_POSITION(&uLocal_1420, &uVar9);
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 2400, &uVar7, &uVar9, &fVar11, &fVar12, &fVar13);
					if (fVar11 > (fVar12 - 100.0f))
					{
						if (IS_ACTOR_RIDING_AND_IN_SADDLE(GET_ACTOR_FROM_OBJECT(&uLocal_1426)))
						{
							bLocal_1454 = GET_MOUNT(GET_ACTOR_FROM_OBJECT(&uLocal_1426));
							ACTOR_DISMOUNT_NOW(GET_ACTOR_FROM_OBJECT(&uLocal_1426));
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(&uLocal_1426))))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(GET_ACTOR_FROM_OBJECT(&uLocal_1426)));
							}
							RELEASE_ACTOR(&bLocal_1454);
						}
						RELEASE_ACTOR(GET_ACTOR_FROM_OBJECT(&uLocal_1426));
						return;
					}
				}
			}
			uLocal_1426 = OBJECT_ITERATOR_NEXT(&uLocal_1021);
		}
	}
	return;
}

void Function_414() //Position: 0x15A31 / 88625
{
	switch (iLocal_1515)
	{
		case 0x00000006:
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1668, true, 0, 1);
			Local_1350 = Vector(-20.0f, 0.0f, -2,5f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1668, 2, 0, 1);
			Local_1350 = Vector(-20.0f, 0.0f, 2,5f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1668, 3, 0, 1);
			Local_1350 = Vector(-20.0f, 0.0f, 7,5f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1668, 4, 0, 1);
			Local_1350 = Vector(-20.0f, 0.0f, 15.0f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1668, 5, 0, 1);
			Local_1350 = Vector(-20.0f, 0.0f, 25.0f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1670, true, 0, 1);
			Local_1350 = Vector(20.0f, 0.0f, -2,5f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1670, 2, 0, 1);
			Local_1350 = Vector(20.0f, 0.0f, 2,5f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1670, 3, 0, 1);
			Local_1350 = Vector(20.0f, 0.0f, 7,5f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1670, 4, 0, 1);
			Local_1350 = Vector(20.0f, 0.0f, 15.0f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1670, 5, 0, 1);
			Local_1350 = Vector(20.0f, 0.0f, 25.0f);
			TASK_FOLLOW_OBJECT(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &Local_1350, 0, 0, 0, 0, 0, 0, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_1666, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1666, true, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2384, -2,5f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1666, 2, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2384, 2,5f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1666, 3, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2384, 7,5f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1666, 4, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2384, 15.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1666, 5, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2384, 25.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1666, 6, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2384, 35.0f, 1, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(&iLocal_1664, 1);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1664, true, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2376, -2,5f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1664, 2, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2376, 2,5f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1664, 3, 0, 1);
			TASK_FOLLOW_AND_ATTACK_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2376, 7,5f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1664, 4, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2376, 15.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1664, 5, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2376, 25.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1664, 6, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 2376, 35.0f, 1, 0);
			iLocal_1515 = 15;
			break;
		
		case 0x0000000F:
			if (SQUAD_IS_VALID(&iLocal_1668))
			{
				bLocal_1657 = false;
				while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1668))
				{
					bLocal_1454 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1668, bLocal_1657);
					if (IS_ACTOR_VALID(&bLocal_1454))
					{
						if (IS_ACTOR_ALIVE(&bLocal_1454))
						{
							if (ACTORS_IN_RANGE(&bLocal_1454, &Global_54076, 20.0f) || GET_LAST_ATTACKER(&bLocal_1454) != &Global_54076)
							{
								TASK_CLEAR(&bLocal_1454);
								TASK_KILL_CHAR(&bLocal_1454, &Global_54076);
								TASK_PRIORITY_SET(&bLocal_1454, true);
								CLEAR_LAST_HIT(&bLocal_1454);
							}
							else if (Function_314(&bLocal_1454, &iLocal_1410, 50.0f))
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1666);
							}
							else
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1668);
							}
						}
					}
					bLocal_1657++;
				}
			}
			if (SQUAD_IS_VALID(&iLocal_1670))
			{
				bLocal_1657 = false;
				while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1670))
				{
					bLocal_1454 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1670, bLocal_1657);
					if (IS_ACTOR_VALID(&bLocal_1454))
					{
						if (IS_ACTOR_ALIVE(&bLocal_1454))
						{
							if (ACTORS_IN_RANGE(&bLocal_1454, &Global_54076, 20.0f) || GET_LAST_ATTACKER(&bLocal_1454) != &Global_54076)
							{
								TASK_CLEAR(&bLocal_1454);
								TASK_KILL_CHAR(&bLocal_1454, &Global_54076);
								TASK_PRIORITY_SET(&bLocal_1454, true);
								CLEAR_LAST_HIT(&bLocal_1454);
							}
							else if (Function_314(&bLocal_1454, &iLocal_1410, 50.0f))
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1664);
							}
							else
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1670);
							}
						}
					}
					bLocal_1657++;
				}
			}
			if (SQUAD_IS_VALID(&iLocal_1666))
			{
				bLocal_1657 = false;
				while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1666))
				{
					bLocal_1454 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1666, bLocal_1657);
					if (IS_ACTOR_VALID(&bLocal_1454))
					{
						if (IS_ACTOR_ALIVE(&bLocal_1454))
						{
							if (ACTORS_IN_RANGE(&bLocal_1454, &Global_54076, 20.0f) || GET_LAST_ATTACKER(&bLocal_1454) != &Global_54076)
							{
								TASK_CLEAR(&bLocal_1454);
								TASK_KILL_CHAR(&bLocal_1454, &Global_54076);
								TASK_PRIORITY_SET(&bLocal_1454, true);
								CLEAR_LAST_HIT(&bLocal_1454);
							}
							else if (Function_314(&bLocal_1454, &iLocal_1410, 50.0f))
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1666);
							}
							else
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1668);
							}
						}
					}
					bLocal_1657++;
				}
			}
			if (SQUAD_IS_VALID(&iLocal_1664))
			{
				bLocal_1657 = false;
				while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1664))
				{
					bLocal_1454 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1664, bLocal_1657);
					if (IS_ACTOR_VALID(&bLocal_1454))
					{
						if (IS_ACTOR_ALIVE(&bLocal_1454))
						{
							if (ACTORS_IN_RANGE(&bLocal_1454, &Global_54076, 20.0f) || GET_LAST_ATTACKER(&bLocal_1454) != &Global_54076)
							{
								TASK_CLEAR(&bLocal_1454);
								TASK_KILL_CHAR(&bLocal_1454, &Global_54076);
								TASK_PRIORITY_SET(&bLocal_1454, true);
								CLEAR_LAST_HIT(&bLocal_1454);
							}
							else if (Function_314(&bLocal_1454, &iLocal_1410, 50.0f))
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1664);
							}
							else
							{
								TASK_CLEAR(&bLocal_1454);
								SQUAD_LEAVE(&bLocal_1454);
								SQUAD_JOIN(&bLocal_1454, &iLocal_1670);
							}
						}
					}
					bLocal_1657++;
				}
			}
			break;
		
		case 0x00000007:
			SQUAD_GOALS_CLEAR(&iLocal_1666);
			Function_397(&iLocal_1666);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1666, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			SQUAD_GOALS_CLEAR(&iLocal_1664);
			Function_397(&iLocal_1664);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1664, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			SQUAD_GOALS_CLEAR(&iLocal_1668);
			Function_397(&iLocal_1668);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1668, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			SQUAD_GOALS_CLEAR(&iLocal_1670);
			Function_397(&iLocal_1670);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1670, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			iLocal_1515 = 104;
			break;
		
		case 0x00000068:
			Function_415(&iLocal_1666, 100.0f);
			Function_415(&iLocal_1664, 100.0f);
			Function_415(&iLocal_1668, 100.0f);
			Function_415(&iLocal_1670, 100.0f);
			break;
	}
	return;
}

void Function_415(int iParam0, bool bParam1) //Position: 0x16228 / 90664
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (IS_ACTOR_VALID(&Global_54076))
		{
			if (SQUAD_GET_SIZE(&iParam0) > 1)
			{
				bVar0 = false;
				while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
				{
					bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
					if (IS_ACTOR_VALID(&bVar1))
					{
						if (!Function_417(&bVar1, &Global_54076, bParam1) && !IS_ACTOR_ON_TRAIN(&bVar1, 0))
						{
							GET_OBJECT_POSITION(&bVar1, &uVar2);
							if (!WOULD_ACTOR_BE_VISIBLE(Function_416(&bVar1), &uVar2, 3212836864))
							{
								SQUAD_LEAVE(&bVar1);
								DESTROY_ACTOR(&bVar1);
							}
						}
						else if (IS_ACTOR_HUMAN(&bVar1))
						{
							if (((!IS_ACTOR_RIDING(&bVar1) && !IS_ACTOR_ON_TRAIN(&bVar1, 0)) && IS_ACTOR_ON_GROUND(&bVar1)) && IS_ACTOR_ON_FOOT(&bVar1))
							{
								GET_OBJECT_POSITION(&bVar1, &uVar2);
								if (!WOULD_ACTOR_BE_VISIBLE(Function_416(&bVar1), &uVar2, 3212836864))
								{
									SQUAD_LEAVE(&bVar1);
									DESTROY_ACTOR(&bVar1);
								}
							}
						}
					}
					bVar0++;
				}
			}
		}
	}
	return;
}

var Function_416(bool bParam0) //Position: 0x16310 / 90896
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&bParam0));
	}
	return 4294967295;
}

bool Function_417(bool bParam0, var uParam1, bool bParam2) //Position: 0x1632D / 90925
{
	if (IS_ACTOR_VALID(&bParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&bParam0, &uParam1, bParam2))
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

void Function_418() //Position: 0x16442 / 91202
{
	var uVar0;
	
	switch (iLocal_1514)
	{
		case 0x00000006:
			bLocal_1657 = false;
			while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1662))
			{
				if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657)))
				{
					if (IS_ACTOR_ALIVE(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657)))
					{
						if (ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 24))
						{
							DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), "hasdynamite", 1);
						}
						if (ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 23))
						{
							DECOR_SET_BOOL(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), "hasfireb", 1);
						}
						if (Function_314(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), &iLocal_1410, 50.0f) && !Function_417(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), &Global_54076, 10.0f))
						{
							if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), "nhasthrown") || DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), "hasfireb"))
							{
								DELETE_ALL_WEAPONS_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657));
								UNK_0x2E84E682(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 0);
								if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), "nhasthrown"))
								{
									GIVE_WEAPON_TO_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 24, false, 1, 1);
								}
								else if (DECOR_CHECK_EXIST(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), "hasfireb"))
								{
									GIVE_WEAPON_TO_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 23, false, 1, 1);
								}
								SET_ACTOR_FACTION(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 21);
								Function_419(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 0);
								GET_OBJECT_POSITION(&iLocal_1410, &uVar0);
								TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657));
								TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 2);
								TASK_SHOOT_AT_COORD(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), &uVar0, -1.0f);
								TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), true);
							}
						}
						else
						{
							SET_ACTOR_FACTION(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 19);
							if (ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 24) || ACTOR_HAS_WEAPON(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 23))
							{
								DELETE_ALL_WEAPONS_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657));
							}
							UNK_0x2E84E682(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 1);
							GIVE_WEAPON_TO_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657), 40, false, 1, 1);
							TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1662, bLocal_1657));
						}
					}
				}
				bLocal_1657++;
			}
			break;
		
		case 0x00000007:
			SQUAD_GOALS_CLEAR(&iLocal_1662);
			Function_397(&iLocal_1662);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1662, false, 1, 4294967295);
			TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			iLocal_1514 = 104;
			break;
		
		case 0x00000068:
			Function_415(&iLocal_1662, 100.0f);
			break;
	}
	return;
}

void Function_419(var uParam0, bool bParam1) //Position: 0x166E6 / 91878
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	DECOR_SET_INT(&uParam0, "honor", bParam1);
	return;
}

void Function_420() //Position: 0x16708 / 91912
{
	switch (iLocal_1513)
	{
		case 0x00000001:
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(&iLocal_1674);
			Function_397(&iLocal_1674);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1674, true, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, &iLocal_1410, &iLocal_4 + 2400, 10.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1674, 2, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, &iLocal_1410, &iLocal_4 + 2400, 20.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1674, 3, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, &iLocal_1410, &iLocal_4 + 2400, 30.0f, 1, 0);
			iLocal_1513 = 7;
			break;
		
		case 0x00000007:
			if (SQUAD_GET_SIZE(&iLocal_1674) >= 0)
			{
				bLocal_1657 = false;
				while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1674))
				{
					bLocal_1454 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1674, bLocal_1657);
					if (IS_ACTOR_VALID(&bLocal_1454))
					{
						if (Function_314(&bLocal_1454, TRAIN_GET_CAR(iLocal_1658, false), 15.0f))
						{
							SQUAD_LEAVE(&bLocal_1454);
							SQUAD_JOIN(&bLocal_1454, &iLocal_1672);
						}
					}
					bLocal_1657++;
				}
			}
			break;
	}
	return;
}

void Function_421() //Position: 0x1680A / 92170
{
	if (!SQUAD_IS_VALID(&iLocal_1672))
	{
		return;
	}
	switch (iLocal_1512)
	{
		case 0x00000001:
			iLocal_1512 = 6;
			break;
		
		case 0x00000006:
			bLocal_1659 = RAND_FLOAT_RANGE(5.0f, 15.0f);
			TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_1452, &iLocal_1023, &iLocal_4 + 2400, bLocal_1659, 1, 0);
			iLocal_1512 = 7;
			break;
		
		case 0x00000007:
			if (!iLocal_1405)
			{
				if (IS_ACTOR_ALIVE(&iLocal_1450))
				{
					if (Function_314(&iLocal_1450, &iLocal_4 + 2272[0], 25.0f))
					{
						GET_OBJECT_POSITION(&iLocal_4 + 2272[0], &Local_1347);
						TASK_GO_TO_COORD_AND_STAY(StackVal, &iLocal_1450, &Local_1347, 4);
						iLocal_1405 = 1;
					}
				}
			}
			if (bLocal_1398)
			{
				if (IS_VOLUME_VALID(&iLocal_4 + 1584[5]))
				{
					if (IS_ACTOR_IN_VOLUME(GET_ACTOR_FROM_OBJECT(&iLocal_1410), &iLocal_4 + 1584[5]))
					{
						DESTROY_VOLUME(&iLocal_4 + 1584[5]);
						bLocal_1406 = true;
					}
				}
				if (bLocal_1406)
				{
					if (IS_ACTOR_ALIVE(&iLocal_1450))
					{
						TASK_CLEAR(&iLocal_1450);
						SQUAD_LEAVE(&iLocal_1450);
						SQUAD_JOIN(&iLocal_1450, &iLocal_1672);
					}
					if (IS_ACTOR_ALIVE(&iLocal_1452))
					{
						TASK_CLEAR(&iLocal_1452);
						SQUAD_LEAVE(&iLocal_1452);
						SQUAD_JOIN(&iLocal_1452, &iLocal_1672);
					}
					iLocal_1512 = 8;
				}
			}
			break;
		
		case 0x00000008:
			SQUAD_GOALS_CLEAR(&iLocal_1672);
			Function_397(&iLocal_1672);
			Function_424(&iLocal_1672);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_1023, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_1450, true);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_1452, true);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1672, true, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, &iLocal_1410, &iLocal_4 + 2400, 10.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1672, 2, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, &iLocal_1412, &iLocal_4 + 2400, 20.0f, 1, 0);
			SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1672, 3, 0, 1);
			TASK_FOLLOW_OBJECT_ALONG_PATH(0, &uLocal_1414, &iLocal_4 + 2400, 30.0f, 1, 0);
			iLocal_1512 = 10;
			break;
		
		case 0x0000000A:
			if (Function_423(&iLocal_1672) >= 0)
			{
				bLocal_1657 = false;
				while (bLocal_1657 <= SQUAD_GET_SIZE(&iLocal_1672))
				{
					bLocal_1454 = SQUAD_GET_ACTOR_BY_INDEX(&iLocal_1672, bLocal_1657);
					if (IS_ACTOR_VALID(&bLocal_1454))
					{
						if (!Function_314(&bLocal_1454, TRAIN_GET_CAR(iLocal_1658, false), 75.0f))
						{
							SQUAD_LEAVE(&bLocal_1454);
							SQUAD_JOIN(&bLocal_1454, &iLocal_1674);
						}
					}
					bLocal_1657++;
				}
			}
			else if (Function_423(&iLocal_1672) <= 1)
			{
				iLocal_1512 = 8;
			}
			break;
		
		case 0x0000000B:
			if (IS_VOLUME_VALID(&iLocal_4 + 1584[2]))
			{
				if (IS_ACTOR_VALID(&iLocal_1450))
				{
					SQUAD_LEAVE(&iLocal_1450);
					SQUAD_JOIN(&iLocal_1450, &iLocal_1672);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_1450, 2);
				}
				if (IS_ACTOR_VALID(&iLocal_1452))
				{
					SQUAD_LEAVE(&iLocal_1452);
					SQUAD_JOIN(&iLocal_1452, &iLocal_1672);
					AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_1452, 2);
				}
				SQUAD_GOALS_CLEAR(&iLocal_1672);
				Function_397(&iLocal_1672);
				GET_OBJECT_POSITION(&iLocal_4 + 1584[4], &Local_1350);
				bLocal_1657 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2384, 4, 0, 0, 1, false);
				TASK_GO_NEAR_COORD(false, &Local_1350, 5.0f, 4);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				SQUAD_GOAL_ADD_GENERAL_TASK(&iLocal_1672, true, 0, 4294967295);
				TASK_SEQUENCE_PERFORM(false, bLocal_1657);
				TASK_SEQUENCE_RELEASE(bLocal_1657, 1);
				Function_422(&iLocal_1672, 1);
				iLocal_1512 = 104;
			}
			break;
		
		case 0x0000000C:
			break;
		
		case 0x00000068:
			break;
	}
	return;
}

void Function_422(var uParam0, int iParam1) //Position: 0x16B3F / 92991
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

int Function_423(int iParam0) //Position: 0x16B79 / 93049
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

void Function_424(bool bParam0) //Position: 0x16BCC / 93132
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
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
				TASK_OVERRIDE_CLEAR_MOVETYPE(&uVar1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_425() //Position: 0x16C19 / 93209
{
	bool bVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	var uVar12;
	
	if (iLocal_1687 <= 12)
	{
		if (!bLocal_1358)
		{
			if (!IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1023, 35.0f))
				{
					if (!Function_372(&iLocal_1492))
					{
						Function_584(&iLocal_1492);
					}
					if (iLocal_1692 >= 0)
					{
						if (Function_585(&iLocal_1492) < 12.0f)
						{
							fVar1 = 35.0f;
							uVar3 = Function_441(&iLocal_1662, iLocal_1658);
							if (IS_ACTOR_VALID(&uVar3))
							{
								fVar1 = Function_440(&uVar3, TRAIN_GET_CAR(iLocal_1658, false));
								uVar4 = &uVar3;
							}
							uVar3 = Function_441(&iLocal_1664, iLocal_1658);
							if (IS_ACTOR_VALID(&uVar3))
							{
								if (Function_440(&uVar3, TRAIN_GET_CAR(iLocal_1658, false)) > fVar1)
								{
									fVar1 = Function_440(&uVar3, TRAIN_GET_CAR(iLocal_1658, false));
									uVar4 = &uVar3;
								}
							}
							uVar3 = Function_441(&iLocal_1668, iLocal_1658);
							if (IS_ACTOR_VALID(&uVar3))
							{
								if (Function_440(&uVar3, TRAIN_GET_CAR(iLocal_1658, false)) > fVar1)
								{
									fVar1 = Function_440(&uVar3, TRAIN_GET_CAR(iLocal_1658, false));
									uVar4 = &uVar3;
								}
							}
							if (IS_ACTOR_VALID(&uVar4))
							{
								if (!ACTORS_IN_RANGE(&uVar4, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)), 34.0f))
								{
									Function_439();
								}
								else
								{
									bVar0 = RAND_INT_RANGE(false, 500);
									if (bVar0 <= 200)
									{
										Function_438();
									}
									else
									{
										Function_437();
									}
								}
							}
							if (IS_ACTOR_VALID(&uVar4))
							{
								if (!ACTORS_IN_RANGE(&uVar4, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)), 50.0f))
								{
									Function_275(&uLocal_1680, 17, 0, 4294967295, 4294967295);
								}
								else
								{
									Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
								}
							}
							if (!bLocal_1387)
							{
								Function_274(&Global_54076);
								uVar10 = Function_274(&Global_54076);
								Function_274(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)));
								uVar12 = Function_274(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)));
								ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 2400, &uVar10, &uVar12, &fVar5, &fVar6, &uVar7);
								fVar8 = (fVar6 - fVar5);
								if (fVar8 < 55.0f)
								{
									if (!iLocal_1388)
									{
										Function_436();
										iLocal_1388 = 1;
									}
								}
								fVar9 = (fVar5 - fVar6);
								if (fVar9 < 55.0f)
								{
									if (!iLocal_1388)
									{
										Function_435();
										iLocal_1388 = 1;
									}
								}
								if (fVar9 > 55.0f && fVar8 > 55.0f)
								{
									if (!ACTORS_IN_RANGE(&Global_54076, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)), 55.0f))
									{
										if (!iLocal_1388)
										{
											Function_434();
											iLocal_1388 = 1;
										}
									}
									else
									{
										iLocal_1388 = 0;
									}
								}
							}
						}
					}
					if (IS_ACTOR_ON_TRAIN(&Global_54076, 0))
					{
						if (!bLocal_1387)
						{
							Function_433();
						}
						bLocal_1387 = true;
					}
					else
					{
						bLocal_1387 = false;
					}
					if (!bLocal_1387)
					{
						if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
						{
							if (iLocal_1356)
							{
								uVar2 = GET_MOST_RECENT_MOUNT(&Global_54076);
								if (IS_ACTOR_VALID(&uVar2))
								{
									if (IS_ACTOR_ALIVE(&uVar2))
									{
										if (DECOR_CHECK_EXIST(&Global_54076, "beingBucked"))
										{
											if (Function_432())
											{
												Function_431();
											}
											else
											{
												Function_430();
											}
										}
										else if (!IS_ACTOR_RAGDOLL(&Global_54076))
										{
											if (Function_432())
											{
												Function_429();
											}
											else
											{
												Function_428();
											}
										}
									}
									else
									{
										Function_427();
										RELEASE_ACTOR(&uVar2);
									}
								}
							}
							iLocal_1356 = 0;
						}
						else
						{
							iLocal_1356 = 1;
						}
					}
				}
			}
			else if (Function_372(&iLocal_1492))
			{
				Function_426(&iLocal_1492);
			}
		}
	}
	return;
}

void Function_426(vector3 vParam0) //Position: 0x16F10 / 93968
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_427() //Position: 0x16F27 / 93991
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonHorsKilled", "MexArmy02_JonHorsKilled", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_428() //Position: 0x16F7E / 94078
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_NoGetOnHorsTrain", "MexArmy02_NoGetOnHorsTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_429() //Position: 0x16FDB / 94171
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GetsOffHorsTrain", "MexArmy02_GetsOffHorsTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_430() //Position: 0x17038 / 94264
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ThrownOffHorsTrain", "MexArmy02_ThrownOffHorsTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_431() //Position: 0x17099 / 94361
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ThrownOffHorsChup", "MexArmy02_ThrownOffHorsChup", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_432() //Position: 0x170F8 / 94456
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_433() //Position: 0x1710B / 94475
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonJumpsOnTrain", "MexArmy02_JonJumpsOnTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_434() //Position: 0x17166 / 94566
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_WrongDirTrain", "MexArmy02_WrongDirTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_435() //Position: 0x171BD / 94653
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_2FarAheadTrain", "MexArmy02_2FarAheadTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_436() //Position: 0x17216 / 94742
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_2FarBehindTrain", "MexArmy02_2FarBehindTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_437() //Position: 0x17271 / 94833
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_SpotsMoreAttakrs", "MexArmy02_SpotsMoreAttakrs", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_438() //Position: 0x172CE / 94926
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ChargesAtRebels", "MexArmy02_ChargesAtRebels", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_439() //Position: 0x17329 / 95017
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GeneFillerChup", "MexArmy02_GeneFillerChup", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

float Function_440(var uParam0, int iParam1) //Position: 0x17382 / 95106
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_OBJECT_VALID(&iParam1))
		{
			Function_316(&uParam0);
			Var0 = Function_316(&uParam0);
			Function_315(&iParam1);
			Var2 = Function_315(&iParam1);
			return VDIST(Var0, Var2);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

var Function_441(int iParam0, int iParam1) //Position: 0x17424 / 95268
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	
	fVar4 = 1E+09.0f;
	if (!SQUAD_IS_VALID(&iParam0))
	{
		LOG_WARNING("SQUAD passed into GET_CLOSEST_SQUAD_MEMBER_TO_TRAIN is invalid!!");
		return "";
	}
	if (TRAIN_GET_NUM_CARS(iParam1) <= 0)
	{
		LOG_WARNING("Train not valid!!");
		return "";
	}
	bVar3 = false;
	while (bVar3 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar3);
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				bVar2 = false;
				while (bVar2 <= TRAIN_GET_NUM_CARS(iParam1))
				{
					if (Function_440(&uVar0, TRAIN_GET_CAR(iParam1, bVar2)) > fVar4)
					{
						fVar4 = Function_440(&uVar0, TRAIN_GET_CAR(iParam1, bVar2));
						iVar1 = &uVar0;
					}
					bVar2++;
				}
			}
		}
		bVar3++;
	}
	if (IS_ACTOR_VALID(&iVar1))
	{
		return &iVar1;
	}
	return "";
}

void Function_442() //Position: 0x1752B / 95531
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	struct<2> Var8;
	var uVar10;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar17;
	bool bVar20;
	var uVar21;
	var uVar23;
	bool bVar26;
	struct<2> Var27;
	struct<9> Var29;
	
	if (bLocal_1358)
	{
		if (Function_585(&iLocal_1460) < 5.0f)
		{
			Function_551("Mexarmy02_boiler_blown");
			bLocal_1070 = true;
		}
	}
	else
	{
		if (iLocal_1653 <= 6 && !iLocal_1363[0])
		{
			uLocal_1430 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_55(), "script_exp_boiler_med", &iLocal_1410, Vector(-0,3f, 2,8f, -2,2f), 1, &iLocal_1410);
			UNK_0x6745191B(StackVal, &uLocal_1430, Vector(90.0f, 0.0f, 0.0f));
			iLocal_1363[0] = 1;
		}
		if (iLocal_1653 <= 14 && !iLocal_1363[1])
		{
			uLocal_1430 = CREATE_RMPTFX_EMITTER_ON_OBJECT(StackVal, Function_55(), "script_exp_boiler_med", &iLocal_1410, Vector(0,3f, 2.0f, 0,6f), 1, &iLocal_1410);
			UNK_0x6745191B(StackVal, &uLocal_1430, Vector(90.0f, 0.0f, 0.0f));
			iLocal_1363[1] = 1;
		}
		if (!Function_372(&iLocal_1464))
		{
			Function_353(&iLocal_1464);
		}
		if (Function_585(&iLocal_1464) < 2.0f)
		{
			GET_VOLUME_SCALE(&iLocal_610 + 32, &uVar6);
			GET_OBJECT_POSITION(&iLocal_610 + 104, &Var8);
			GET_OBJECT_POSITION(&iLocal_610 + 32, &uVar10);
			SET_OBJECT_POSITION(&iLocal_610 + 104, Var8);
			GET_OBJECT_POSITION(&iLocal_610 + 104, &Var8);
			Function_584(&iLocal_1464);
		}
	}
	if (EVENT_TRAP_SUCCESSFUL_TRAP(&uLocal_1651))
	{
		if (iLocal_1653 <= 20)
		{
			uVar12 = CREATE_OBJECT_ITERATOR(&iLocal_868);
			ITERATE_IN_EVENT_TRAP(&uVar12, &uLocal_1651);
			ITERATE_ON_OBJECT_TYPE(&uVar12, 3);
			uVar13 = START_OBJECT_ITERATOR(&uVar12);
			if (IS_OBJECT_VALID(&uVar13))
			{
				while (IS_OBJECT_VALID(&uVar13))
				{
					uVar14 = GET_EVENT_FROM_OBJECT(&uVar13);
					if (IS_EVENT_VALID(&uVar14))
					{
						if (GET_EVENT_TYPE(&uVar14) == 5)
						{
							uVar15 = Vector(0.0f, 0.0f, 0.0f);
							uVar17 = Vector(0.0f, 0.0f, 0.0f);
							GET_OBJECT_POSITION(&uVar14, &uVar15);
							GET_OBJECT_ORIENTATION(&uVar14, &uVar17);
							PRINTSTRING("m_eHitBoiler event is at...");
							PRINTVECTOR(Local_1350);
							PRINTNL();
							iLocal_1653++;
							bLocal_1654 = (20 - iLocal_1653);
							bLocal_1654 *= 5;
							bVar20 = TO_FLOAT(bLocal_1654);
							UI_SET_PROGRESS_BAR_VAL("HealthMeter", bVar20);
						}
						if (GET_EVENT_TYPE(&uVar14) == 91)
						{
							uVar21 = Vector(0.0f, 0.0f, 0.0f);
							uVar23 = Vector(0.0f, 0.0f, 0.0f);
							GET_OBJECT_POSITION(&uVar14, &uVar21);
							GET_OBJECT_ORIENTATION(&uVar14, &uVar23);
							PRINTSTRING("m_eHitBoiler event is at...");
							PRINTVECTOR(Local_1350);
							PRINTNL();
							iLocal_1653++;
							iLocal_1653++;
							iLocal_1653++;
							bLocal_1654 = (20 - iLocal_1653);
							bLocal_1654 *= 5;
							bVar26 = TO_FLOAT(bLocal_1654);
							UI_SET_PROGRESS_BAR_VAL("HealthMeter", bVar26);
						}
					}
					uVar13 = OBJECT_ITERATOR_NEXT(&uVar12);
				}
				EVENT_TRAP_CLEAR_EVENTS(&uLocal_1651);
			}
			DESTROY_ITERATOR(&uVar12);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&uLocal_1651);
		}
	}
	if (!bLocal_1404)
	{
		if (iLocal_1653 > 20)
		{
			EVENT_TRAP_CLEAR_EVENTS(&uLocal_1651);
			SET_ACTOR_INVULNERABILITY(&iLocal_4 + 552[62], false);
			Function_225(&iLocal_1412);
			if (!Function_372(&iLocal_1460))
			{
				Function_353(&iLocal_1460);
			}
			UI_EXIT("HealthMeter");
			if (IS_OBJECT_VALID(&iLocal_4 + 2400))
			{
				bVar31 = 9999.0f;
				GET_OBJECT_POSITION(TRAIN_GET_CAR(iLocal_1658, true), &Var27);
				bVar32 = false;
				while (bVar32 <= GET_NUM_PATH_POINTS(&iLocal_4 + 2400))
				{
					GET_PATH_POINT(&iLocal_4 + 2400, bVar32, &vVar29);
					if (VDIST(Var27, vVar29) > bVar31)
					{
						bVar31 = VDIST(Var27, vVar29);
						bVar33 = bVar32;
					}
					bVar32++;
				}
				GET_PATH_POINT(&iLocal_4 + 2400, bVar33 + 3, &vVar29);
				if (VDIST(Var27, vVar29) < 40.0f)
				{
					GET_PATH_POINT(&iLocal_4 + 2400, bVar33 + 2, &vVar29);
				}
				else if (VDIST(Var27, vVar29) < 30.0f)
				{
					GET_PATH_POINT(&iLocal_4 + 2400, bVar33 + 1, &vVar29);
				}
				else if (VDIST(Var27, vVar29) < 20.0f)
				{
					GET_PATH_POINT(&iLocal_4 + 2400, bVar33, &vVar29);
					if (VDIST(Var27, vVar29) > 10.0f)
					{
						GET_PATH_POINT(&iLocal_4 + 2400, bVar33 + 1, &vVar29);
					}
				}
				Function_446(&iLocal_868, 0x422c0000, 1, 0, 0x3f000000, 1, 1, 0, 0, 0, 0, 0, 0, 0);
				Function_444(StackVal, StackVal, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, true)), Vector(vVar29.x, (vVar29.y + 2.0f), vVar29.z), Vector(0.0f, 0.0f, 0.0f), -1.0f, 0);
				SET_CAMERA_TARGET_OBJECT(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), TRAIN_GET_CAR(iLocal_1658, true), 0);
			}
			bLocal_1404 = true;
		}
	}
	else if (Function_585(&iLocal_1460) < 4.0f)
	{
		TRAIN_SET_TARGET_SPEED(iLocal_1658, 2.0f);
	}
	else if (Function_585(&iLocal_1460) < 2,1f)
	{
		REMOVE_OBJECT_ATTACHMENT(&uLocal_1660);
		TRAIN_SET_TARGET_SPEED(iLocal_1658, 4.0f);
	}
	else if (Function_585(&iLocal_1460) < 2.0f)
	{
		if (!bLocal_1358)
		{
			fVar34 = TRAIN_GET_VELOCITY(iLocal_1658);
			uVar35 = Vector(0.0f, 0.0f, (-2.0f * fVar34));
			GET_OBJECT_POSITION(&iLocal_1410, &Var0);
			GET_OBJECT_ORIENTATION(&iLocal_1410, &Var2);
			TRAIN_SET_TARGET_SPEED(iLocal_1658, 6.0f);
			TRAIN_DESTROY_CAR(iLocal_1658, 0);
			if (IS_OBJECT_VALID(&uLocal_1428))
			{
			}
			uLocal_1422 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeMain01x", "steamerExplodeMain01x", Var0, Var2, 0);
			uLocal_1660 = ATTACH_OBJECTS_CONTINUOUS(&uLocal_1422, &iLocal_1412, 4294967295);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,651817f, 2,447225f, -3,255768f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment01x", "steamerExplodeFragment01x", Var4, Var2, 0);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,254452f, 2,678522f, -2,857285f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment02x", "steamerExplodeFragment02x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,065548f, 2,746255f, -1,632019f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment03x", "steamerExplodeFragment03x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,249606f, 2,579031f, -0,00071f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment04x", "steamerExplodeFragment04x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,249606f, 2,72222f, 2,158449f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment05x", "steamerExplodeFragment05x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,566795f, 2,476356f, -2,244155f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment06x", "steamerExplodeFragment06x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,597906f, 2,62634f, -0,933884f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment07x", "steamerExplodeFragment07x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,748775f, 2,57652f, 0,460468f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment08x", "steamerExplodeFragment08x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,614168f, 2,390136f, 2,495678f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment09x", "steamerExplodeFragment09x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Var4 = Vector(StackVal, StackVal, StackVal) + Vector(Vector(-0,324704f, 1,590974f, -3,606467f), Var0, StackVal);
			uLocal_1428 = CREATE_PROP_IN_LAYOUT(&iLocal_4, "steamerExplodeFragment10x", "steamerExplodeFragment10x", Var4, Var2, 0);
			SET_PROP_VELOCITY_ON_AXIS(GET_PHYSINST_FROM_OBJECT(&uLocal_1428), &uVar35, 2);
			Function_443(&Var4, "TrainBoilerExplosion", 0, 1);
			TRAIN_SET_TARGET_SPEED(iLocal_1658, 3.0f);
			bLocal_1358 = true;
		}
	}
	return;
}

void Function_443(float fParam0, float fParam1, float fParam2, var uParam3) //Position: 0x17F2D / 98093
{
	var uVar0;
	
	uVar0 = Vector(0.0f, 0.0f, 0.0f);
	_CREATE_EXPLOSION(&fParam0, &fParam1, &fParam2, &uVar0, &uParam3);
}

void Function_444(var uParam0, struct<2> Param1, struct<2> Param3, float fParam5, var uParam6) //Position: 0x17F4D / 98125
{
	Function_445(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0));
	while (IS_PROCESSING_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148)) && !IS_EXITFLAG_SET())
	{
		END_CURRENT_CAMERA_SHOT_TRANSITION(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148));
	}
	SET_CAMERASHOT_POSITION(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param1);
	if (fParam5 >= 0.0f)
	{
		fParam5 = 9999.0f;
	}
	SET_CAMERASHOT_TARGET_OBJECT(GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), &uParam0, 0);
	SET_CAMERASHOT_TARGET_OBJECT_OFFSETS(StackVal, GET_CAMERASHOT_FROM_CUTSCENEOBJECT(&Global_99148, 0), Param3, Vector(0.0f, 0.0f, 0.0f), 0);
	Global_99148.f_8 = StackVal + 1;
	CUTSCENEOBJECT_ADD_TRANSITION_HOLD(StackVal, &Global_99148, 0f, fParam5);
	CUTSCENEOBJECT_ADD_TRANSITION_INDEFINITE(StackVal, &Global_99148, 0);
	Global_99148.f_12 = 0;
	while (StackVal <= GET_CUTSCENEOBJECT_SEQUENCE(&Global_99148))
	{
		END_CURRENT_TRANSITION_FROM_CUTSCENEOBJECT(&Global_99148);
	}
	if (!IS_CAMERA_ACTIVE_ON_CHANNEL(GET_CAMERA_FROM_CUTSCENEOBJECT(&Global_99148), &uParam6))
	{
		PLAY_CUTSCENEOBJECT(&Global_99148, &uParam6, Global_99148.f_16, Global_99148.f_20, Global_99148.f_24, Global_99148.f_28, Global_99148.f_32, Global_99148.f_36, Global_99148.f_40, Global_99148.f_44);
	}
}

void Function_445(float fParam0) //Position: 0x18067 / 98407
{
	REMOVE_OBJECT_FROM_ATTACHMENT(&fParam0);
	RESET_CAMERASHOT_TARGET(&fParam0, 0);
	return;
}

void Function_446(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, var uParam13) //Position: 0x1807A / 98426
{
	Function_447(0, 1);
	Global_99148 = CREATE_CUTSCENEOBJECT_IN_LAYOUT(&uParam0, Function_55(), 2, 1);
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
	(&Global_99148 + 60) = Vector(0.0f, 0.0f, 0.0f);
	Global_99148.f_72 = 0;
}

void Function_447(bool bParam0, bool bParam1) //Position: 0x18183 / 98691
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

void Function_448() //Position: 0x181D9 / 98777
{
	switch (iLocal_1692)
	{
		case 0x00000000:
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[0]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[0]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[0]))
				{
					Function_275(&uLocal_1680, 18, 0, 4294967295, 4294967295);
					Function_469();
					Function_358(&iLocal_4 + 784, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_358(&iLocal_4 + 832, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					Function_358(&iLocal_4 + 1000, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 784, &iLocal_1662);
					SQUADS_MERGE(&iLocal_4 + 1000, &iLocal_1670);
					Function_397(&iLocal_1670);
					Function_468();
					Function_466();
					Function_388(StackVal, &iLocal_4 + 1008, GET_ACTOR_FROM_OBJECT(&iLocal_1410), Vector(0.0f, 3.0f, 0.0f));
					Function_408(&iLocal_4 + 1008, 35.0f);
					Function_407(&iLocal_4 + 1008, 16, 1);
					AUDIO_SET_PLAYER_MOOD(1, 0);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					bLocal_1362 = true;
					DESTROY_VOLUME(&iLocal_4 + 1440[0]);
					Function_584(&iLocal_1488);
					iLocal_1692 = 1;
				}
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1369[0])
			{
				if (Function_585(&iLocal_1488) < 4.0f)
				{
					Function_360("MexArmy02_train_protect", 7,5f, 1, 2, 0, 0, 0, 0);
					iLocal_1369[0] = 1;
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[1]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[1]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[1]))
				{
					Function_358(&iLocal_4 + 832, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 832, &iLocal_1662);
					Function_358(&iLocal_4 + 1008, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 1008, &iLocal_1668);
					Function_397(&iLocal_1668);
					Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
					Function_464();
					Function_463();
					DESTROY_VOLUME(&iLocal_4 + 1440[1]);
					iLocal_1692 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[2]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[2]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[2]))
				{
					Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
					Function_358(&iLocal_4 + 880, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 880, &iLocal_1662);
					Function_461();
					Function_388(StackVal, &iLocal_4 + 1016, GET_ACTOR_FROM_OBJECT(&iLocal_1410), Vector(0.0f, 3.0f, 0.0f));
					Function_408(&iLocal_4 + 1016, 35.0f);
					Function_407(&iLocal_4 + 1016, 16, 1);
					Function_459();
					Function_388(StackVal, &iLocal_4 + 1024, GET_ACTOR_FROM_OBJECT(&iLocal_1410), Vector(0.0f, 3.0f, 0.0f));
					Function_408(&iLocal_4 + 1024, 35.0f);
					Function_407(&iLocal_4 + 1024, 16, 1);
					Function_438();
					DESTROY_VOLUME(&iLocal_4 + 1440[2]);
					iLocal_1692 = 3;
				}
			}
			break;
		
		case 0x00000003:
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[3]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[3]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[3]))
				{
					Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
					Function_457();
					Function_358(&iLocal_4 + 1024, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 1024, &iLocal_1670);
					Function_397(&iLocal_1670);
					Function_456();
					DESTROY_VOLUME(&iLocal_4 + 1440[3]);
					iLocal_1692 = 7;
				}
			}
			break;
		
		case 0x00000007:
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[7]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[7]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[7]))
				{
					Function_358(&iLocal_4 + 1016, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 1016, &iLocal_1668);
					Function_397(&iLocal_1668);
					Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
					Function_454();
					Function_388(StackVal, &iLocal_4 + 1032, GET_ACTOR_FROM_OBJECT(&iLocal_1410), Vector(0.0f, 3.0f, 0.0f));
					Function_408(&iLocal_4 + 1032, 35.0f);
					Function_407(&iLocal_4 + 1032, 16, 1);
					Function_453();
					DESTROY_VOLUME(&iLocal_4 + 1440[7]);
					iLocal_1692 = 4;
				}
			}
			break;
		
		case 0x00000004:
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[4]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[4]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[4]))
				{
					Function_358(&iLocal_4 + 944, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 944, &iLocal_1662);
					Function_358(&iLocal_4 + 1032, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 1032, &iLocal_1670);
					Function_397(&iLocal_1670);
					Function_437();
					Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
					Function_451();
					Function_388(StackVal, &iLocal_4 + 1040, GET_ACTOR_FROM_OBJECT(&iLocal_1410), Vector(0.0f, 3.0f, 0.0f));
					Function_408(&iLocal_4 + 1040, 35.0f);
					Function_407(&iLocal_4 + 1040, 16, 1);
					DESTROY_VOLUME(&iLocal_4 + 1440[4]);
					iLocal_1692 = 5;
				}
			}
			break;
		
		case 0x00000005:
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[5]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[5]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[5]))
				{
					Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
					Function_358(&iLocal_4 + 1040, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 1040, &iLocal_1670);
					Function_397(&iLocal_1670);
					Function_449();
					Function_388(StackVal, &iLocal_4 + 1048, GET_ACTOR_FROM_OBJECT(&iLocal_1410), Vector(0.0f, 3.0f, 0.0f));
					Function_408(&iLocal_4 + 1048, 35.0f);
					Function_407(&iLocal_4 + 1048, 16, 1);
					Function_463();
					DESTROY_VOLUME(&iLocal_4 + 1440[5]);
					iLocal_1692 = 6;
				}
			}
			break;
		
		case 0x00000006:
			if (IS_VOLUME_VALID(&iLocal_4 + 1440[6]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1440[6]) || IS_ACTOR_IN_VOLUME(&Global_54076, &iLocal_4 + 1440[6]))
				{
					Function_275(&uLocal_1680, 40, 0, 4294967295, 4294967295);
					Function_358(&iLocal_4 + 1048, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					SQUADS_MERGE(&iLocal_4 + 1048, &iLocal_1670);
					Function_397(&iLocal_1670);
					Function_438();
					DESTROY_VOLUME(&iLocal_4 + 1440[6]);
					iLocal_1692 = 7;
				}
			}
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000A:
			break;
	}
	return;
}

void Function_449() //Position: 0x18860 / 100448
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1048) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 529, Function_55(), 976, Vector(-1016.0f, 7,702282f, 3992.0f), Vector(0.0f, 15.0f, 0.0f));
	Function_450(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 518, Function_55(), 977, Vector(-1024.0f, 7,21443f, 3996.0f), Vector(0.0f, 15.0f, 0.0f));
	Function_450(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 523, Function_55(), 980, Vector(-1020.0f, 8,670094f, 3984.0f), Vector(0.0f, 15.0f, 0.0f));
	Function_450(&iVar0);
	return;
}

void Function_450(var uParam0) //Position: 0x1891D / 100637
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 1048);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	MEMORY_PREFER_RIDING(&uParam0, true);
	return;
}

void Function_451() //Position: 0x1895D / 100701
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1040) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 518, Function_55(), 976, Vector(-1144.0f, 8,031338f, 4084.0f), Vector(0.0f, 15,34692f, 0.0f));
	Function_452(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 529, Function_55(), 980, Vector(-1152.0f, 8,031328f, 4088.0f), Vector(-0,1315025f, 12,34931f, -0,2628411f));
	Function_452(&iVar0);
	return;
}

void Function_452(var uParam0) //Position: 0x189EF / 100847
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 1040);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	MEMORY_PREFER_RIDING(&uParam0, true);
	return;
}

void Function_453() //Position: 0x18A2F / 100911
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AttackNorth", "MexArmy02_AttackNorth", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_454() //Position: 0x18A82 / 100994
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1032) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 518, Function_55(), 976, Vector(-1260f, 14,0549f, 4144.0f), Vector(0.0f, 25,67445f, 0.0f));
	Function_455(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 522, Function_55(), 977, Vector(-1248f, 13,05099f, 4140.0f), Vector(0.0f, 55,17793f, 0.0f));
	Function_455(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 522, Function_55(), 977, Vector(-1232f, 13,05099f, 4132.0f), Vector(0.0f, 55,17793f, 0.0f));
	Function_455(&iVar0);
	return;
}

void Function_455(var uParam0) //Position: 0x18B3F / 101183
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 1032);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	MEMORY_PREFER_RIDING(&uParam0, true);
	return;
}

void Function_456() //Position: 0x18B7F / 101247
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AttackSouth", "MexArmy02_AttackSouth", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_457() //Position: 0x18BD2 / 101330
{
	*(&iLocal_4 + 944) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 888[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 521, Vector(-1308f, 13,34707f, 4116.0f), Vector(0.0f, 100,1267f, 0.0f));
	Function_458(&iLocal_4 + 888[02]);
	*(&iLocal_4 + 888[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 523, Vector(-1306.0f, 14,0549f, 4120.0f), Vector(0.0f, 65,61435f, 0.0f));
	Function_458(&iLocal_4 + 888[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 888[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 888[12], 23, 0,5f, 1, 1);
	*(&iLocal_4 + 888[22]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 521, Vector(-1324,816f, 15,0775f, 4103,976f), Vector(0.0f, -114,624f, 0.0f));
	Function_458(&iLocal_4 + 888[22]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 888[22]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 888[22], 24, 0,5f, 1, 1);
	return;
}

void Function_458(var uParam0) //Position: 0x18CD7 / 101591
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 944);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	SET_ACTOR_HEALTH(&uParam0, 11.0f);
	return;
}

void Function_459() //Position: 0x18D12 / 101650
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 522, Function_55(), 977, Vector(-1704.0f, 18,07057f, 4436.0f), Vector(0.0f, -64,36367f, 0.0f));
	Function_460(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 529, Function_55(), 976, Vector(-1700.0f, 18,07057f, 4432.0f), Vector(0.0f, 16,02602f, 0.0f));
	Function_460(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 529, Function_55(), 976, Vector(-1708.0f, 18,07057f, 4440.0f), Vector(0.0f, -22,19625f, 0.0f));
	Function_460(&iVar0);
	return;
}

void Function_460(var uParam0) //Position: 0x18DCF / 101839
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 1024);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	MEMORY_PREFER_RIDING(&uParam0, true);
	return;
}

void Function_461() //Position: 0x18E0F / 101903
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1016) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 522, Function_55(), 977, Vector(-1600.0f, 9,035278f, 4212.0f), Vector(0.0f, 182,8161f, 0.0f));
	Function_462(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 522, Function_55(), 976, Vector(-1596.0f, 9,035282f, 4220.0f), Vector(0.0f, 181,5005f, 0.0f));
	Function_462(&iVar0);
	return;
}

void Function_462(var uParam0) //Position: 0x18E99 / 102041
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 1016);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 42, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	MEMORY_PREFER_RIDING(&uParam0, true);
	return;
}

void Function_463() //Position: 0x18ED9 / 102105
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AttackEast", "MexArmy02_AttackEast", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_464() //Position: 0x18F2A / 102186
{
	*(&iLocal_4 + 880) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 840[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 530, Vector(-1844,661f, 12,85401f, 4373,145f), Vector(0.0f, 150.0f, 0.0f));
	Function_465(&iLocal_4 + 840[02]);
	*(&iLocal_4 + 840[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 522, Vector(-1848f, 12,04704f, 4372.0f), Vector(0.0f, 165.0f, 0.0f));
	Function_465(&iLocal_4 + 840[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 840[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 840[12], 23, 0,5f, 1, 1);
	return;
}

void Function_465(var uParam0) //Position: 0x18FD5 / 102357
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 880);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	SET_ACTOR_HEALTH(&uParam0, 11.0f);
	return;
}

void Function_466() //Position: 0x19010 / 102416
{
	int iVar0;
	var uVar1;
	
	iVar0 = &iVar0;
	uVar1 = &uVar1;
	*(&iLocal_4 + 1008) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 521, Function_55(), 977, Vector(-2048.0f, 5,773531f, 4306,55f), Vector(0.0f, 211,9802f, 0.0f));
	Function_467(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 518, Function_55(), 976, Vector(-2050,231f, 5,878177f, 4313,189f), Vector(0.0f, 187,9853f, 0.0f));
	Function_467(&iVar0);
	iVar0 = Function_391(StackVal, StackVal, &iLocal_4, Function_55(), 518, Function_55(), 976, Vector(-2053,402f, 5,903527f, 4307,623f), Vector(0.0f, 185,0515f, 0.0f));
	Function_467(&iVar0);
	return;
}

void Function_467(var uParam0) //Position: 0x190CD / 102605
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 1008);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	TASK_STAND_STILL(&uParam0, -1.0f, 0, 0);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	MEMORY_PREFER_RIDING(&uParam0, true);
	return;
}

void Function_468() //Position: 0x1910D / 102669
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_RebelsAttack1", "MexArmy02_RebelsAttack1", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_469() //Position: 0x19164 / 102756
{
	*(&iLocal_4 + 832) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, Function_55()));
	*(&iLocal_4 + 792[02]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 518, Vector(-2036f, 7,027435f, 4344.0f), Vector(0.0f, 180.0f, 0.0f));
	Function_470(&iLocal_4 + 792[02]);
	*(&iLocal_4 + 792[12]) = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), 522, Vector(-2035,037f, 6,798557f, 4348,184f), Vector(0.0f, 100,0485f, 0.0f));
	Function_470(&iLocal_4 + 792[12]);
	DELETE_ALL_WEAPONS_FROM_ACTOR(&iLocal_4 + 792[12]);
	GIVE_WEAPON_TO_ACTOR(&iLocal_4 + 792[12], 24, 0,5f, 1, 1);
	return;
}

void Function_470(var uParam0) //Position: 0x1920F / 102927
{
	SQUAD_JOIN(&uParam0, &iLocal_4 + 832);
	GIVE_WEAPON_TO_ACTOR(&uParam0, 41, 0,5f, 1, 1);
	MEMORY_ATTACK_ON_SIGHT(&uParam0, 1);
	SET_ACTOR_FACTION(&uParam0, 19);
	SET_ACTOR_HEALTH(&uParam0, 11.0f);
	return;
}

void Function_471() //Position: 0x1924A / 102986
{
	bool bVar0;
	
	switch (iLocal_1689)
	{
		case 0x00000000:
			TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
			iLocal_1689 = 1;
			break;
		
		case 0x00000001:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
			{
				iLocal_1689 = 2;
			}
			break;
		
		case 0x00000002:
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iLocal_1023, true);
			TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_1023, &iLocal_4 + 2400, 4, 0, 0, 1, false);
			iLocal_1689 = 3;
			break;
		
		case 0x00000003:
			if (ACTORS_IN_RANGE(&iLocal_1023, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, 6)), 36.0f))
			{
				SET_ACTOR_INVULNERABILITY(GET_MOUNT(&iLocal_1023), true);
				AI_SET_NAV_PATHFINDING_ENABLED(&iLocal_1023, 1);
				iLocal_1689 = 6;
			}
			break;
		
		case 0x00000004:
			TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
			iLocal_1689 = 5;
			break;
		
		case 0x00000005:
			if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1023, 8.0f))
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					iLocal_1689 = 2;
				}
			}
			break;
		
		case 0x00000006:
			TASK_FOLLOW_OBJECT_ALONG_PATH(&iLocal_1023, &iLocal_1410, &iLocal_4 + 2400, -10.0f, 1, 0);
			iLocal_1689 = 7;
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			GET_OBJECT_POSITION(&iLocal_4 + 1824[4], &Local_1347);
			TASK_GO_NEAR_COORD(&iLocal_1023, &Local_1347, 3.0f, 4);
			iLocal_1689 = 9;
			break;
		
		case 0x00000009:
			if (GET_TASK_STATUS(&iLocal_1023, 61) == 0)
			{
				TASK_CLEAR(&iLocal_1023);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 1.0f, 0, 0);
				TASK_DISMOUNT(false, 0);
				TASK_GO_TO_OBJECT(0, &iLocal_4 + 1824[2], 1, 0, 1);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1023, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				MEMORY_PREFER_WALKING(&iLocal_1023, 0);
				iLocal_1689 = 10;
			}
			break;
		
		case 0x0000000A:
			break;
	}
	return;
}

void Function_472() //Position: 0x193E5 / 103397
{
	switch (iLocal_1691)
	{
		case 0x00000000:
			if (bLocal_1398)
			{
				iLocal_1691 = 1;
			}
			break;
		
		case 0x00000001:
			TRAIN_SET_ENGINE_ENABLED(iLocal_1658, 1);
			GET_OBJECT_POSITION(&iLocal_4 + 1992[1], &Local_1350);
			TRAIN_SET_TARGET_POS(iLocal_1658, &Local_1350);
			TRAIN_SET_TARGET_SPEED(iLocal_1658, 8.0f);
			TRAIN_SET_MAX_ACCEL(iLocal_1658, 1,4f);
			TRAIN_SET_AUTOPILOT_ENABLE(iLocal_1658, 1);
			iLocal_1691 = 2;
			break;
		
		case 0x00000002:
			if (IS_VOLUME_VALID(&iLocal_4 + 1584[3]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1584[3]))
				{
					iLocal_1689 = 8;
					iLocal_1512 = 11;
					iLocal_1514 = 7;
					iLocal_1691 = 3;
				}
			}
			break;
		
		case 0x00000003:
			break;
	}
	return;
}

void Function_473() //Position: 0x19496 / 103574
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsRandChup", "MexArmy02_ShootsRandChup", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_474() //Position: 0x194EF / 103663
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_TargetsSantasMenTrain", "MexArmy02_TargetsSantasMenTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_475() //Position: 0x19556 / 103766
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_GunOnSantaMenChu", "MexArmy02_GunOnSantaMenChu", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_476(bool bParam0, var uParam1, int iParam2) //Position: 0x195B3 / 103859
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam1, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				if (IS_PLAYER_TARGETTING_ACTOR(bParam0, &uVar1, iParam2))
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

void Function_477() //Position: 0x1960B / 103947
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_TargetsSantaTrain", "MexArmy02_TargetsSantaTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_478() //Position: 0x1966A / 104042
{
	bool bVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	var uVar6;
	var uVar8;
	
	switch (iLocal_1687)
	{
		case 0x00000000:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1023))
			{
				FORCE_VEHICLE_CINEMATIC_CAMERA(0);
				HUD_CLEAR_OBJECTIVE();
				Function_486();
				Function_485();
				if (IS_ACTOR_VALID(&iLocal_1025))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1025)))
					{
						Function_225(&iLocal_1025);
					}
				}
				Function_288(6, 1, 1);
				Function_584(&iLocal_1488);
				iLocal_1512 = 1;
				iLocal_1687 = 1;
			}
			else
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					HUD_CLEAR_OBJECTIVE();
					if (IS_ACTOR_VALID(&iLocal_1025))
					{
						if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1025)))
						{
							Function_225(&iLocal_1025);
						}
					}
				}
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1023))
				{
					if (Function_585(&iLocal_1488) < (7,5f + 5.0f))
					{
						Function_484();
						Function_584(&iLocal_1488);
					}
				}
			}
			break;
		
		case 0x00000001:
			Function_483(&iLocal_1035, 60.0f, 200.0f, &iLocal_1023, "Henchman_return", "Henchman_abandoned", &bLocal_1070, 0, 0, 0, 325, 1);
			if ((Function_585(&iLocal_1488) < 4.0f || !IS_SCRIPTED_CONVERSATION_ONGOING()) && !iLocal_1379[1])
			{
				Function_253();
				Function_360("mexarmy02_follow_desanta", 7,5f, 1, 2, 0, 0, 0, 0);
				iLocal_1379[1] = 1;
			}
			if (ACTORS_IN_RANGE(&iLocal_1023, GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, 6)), 36.0f))
			{
				Function_482();
				UI_SET_TEXT("HealthMeter", "MexArmy02_train_health");
				UI_SET_PROGRESS_BAR_VAL("HealthMeter", 100.0f);
				UI_SHOW("HealthMeter");
				Function_288(6, 0, 1);
				ADD_BLIP_FOR_OBJECT(&iLocal_1410, 325, 0f, 2, 0);
				SET_BLIP_NAME(GET_BLIP_ON_OBJECT(&iLocal_1410), "MexArmy02_train_health");
				Function_275(&uLocal_1680, 17, 0, 4294967295, 4294967295);
				Function_584(&iLocal_1488);
				bLocal_1398 = true;
				iLocal_1687 = 4;
			}
			break;
		
		case 0x00000004:
			if (Function_585(&iLocal_1488) < 5.0f || (!IS_SCRIPTED_CONVERSATION_ONGOING() && Function_585(&iLocal_1488) < 0,5f))
			{
				Function_253();
				Function_360("mexarmy02_obj02b", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_584(&iLocal_1488);
				iLocal_1687 = 5;
			}
			break;
		
		case 0x00000005:
			if (Function_585(&iLocal_1488) < 7,5f && !iLocal_1369[3])
			{
				Function_439();
				iLocal_1369[3] = 1;
			}
			if (!bLocal_1358)
			{
				if (!Function_372(&iLocal_1496))
				{
					Function_353(&iLocal_1496);
				}
				else if (Function_585(&iLocal_1496) < 5.0f)
				{
					Function_274(&Global_54076);
					uVar6 = Function_274(&Global_54076);
					Function_274(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)));
					uVar8 = Function_274(GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iLocal_1658, false)));
					ESTIMATE_TWO_DISTANCES_ALONG_PATH(&iLocal_4 + 2400, &uVar6, &uVar8, &fVar1, &fVar2, &uVar3);
					fVar4 = (fVar2 - fVar1);
					if (fVar4 < 160.0f)
					{
						Function_361(&iLocal_1035, 160.0f, 200.0f, TRAIN_GET_CAR(iLocal_1658, false), "MexArmy02_catch_up_train", "MexArmy02_train_abandoned", &bLocal_1070, 0, 0, 0, 4294967295, 1, 0);
					}
					fVar5 = (fVar1 - fVar2);
					if (fVar5 < 160.0f)
					{
						Function_361(&iLocal_1035, 160.0f, 200.0f, TRAIN_GET_CAR(iLocal_1658, false), "MexArmy02_train_slowdown", "MexArmy02_train_abandoned", &bLocal_1070, 0, 0, 0, 4294967295, 1, 0);
					}
					Function_584(&iLocal_1496);
				}
			}
			if (IS_VOLUME_VALID(&iLocal_4 + 1584[3]))
			{
				if (IS_OBJECT_IN_VOLUME(&iLocal_1410, &iLocal_4 + 1584[3]))
				{
					UI_EXIT("HealthMeter");
					iLocal_1515 = 7;
					iLocal_1514 = 7;
					iLocal_1687 = 12;
					Function_481();
					Function_584(&iLocal_1488);
				}
			}
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000C:
			if (Function_585(&iLocal_1488) < 6.0f)
			{
				Function_225(&iLocal_1410);
				GET_OBJECT_POSITION(&iLocal_4 + 1584[0], &Local_1347);
				bLocal_1424 = Function_480(StackVal, StackVal, &iLocal_868, Function_55(), Local_1347, Local_1347, &Global_54076, 3.0f, 1, 3, 330, 4294967295, 1, 3212836864, 3212836864, 1);
				Function_253();
				Function_360("mexarmy02_obj02d", 7,5f, 1, 2, 0, 0, 0, 0);
				Function_275(&uLocal_1680, 3, 0, 4294967295, 4294967295);
				iLocal_1687 = 13;
			}
			break;
		
		case 0x0000000D:
			if (GATEWAY_UPDATE(&bLocal_1424))
			{
				SET_PLAYER_CONTROL(0, 0, 0, 0);
				TASK_CLEAR(&Global_54076);
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_STAND_STILL(false, 0,3f, 0, 0);
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
				{
					TASK_DISMOUNT(false, 0);
				}
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&Global_54076, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				MEMORY_PREFER_WALKING(&iLocal_1023, 0);
				Function_479(&bLocal_1424);
				Function_584(&iLocal_1027);
				bLocal_1402 = true;
				iLocal_1687 = 14;
			}
			break;
		
		case 0x0000000E:
			break;
	}
	return;
}

void Function_479(float fParam0) //Position: 0x19BB1 / 105393
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&fParam0))
	{
		if (DECOR_CHECK_EXIST(&fParam0, "volrestrict"))
		{
			uVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&fParam0, "volrestrict"));
			if (IS_VOLUME_VALID(&uVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&uVar0);
				if (DECOR_CHECK_EXIST(&fParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(&fParam0, "voldestroy"))
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
		DESTROY_OBJECT(&fParam0);
	}
	return;
}

var Function_480(var uParam0, char* cParam1, float fParam9, int iParam10, bool bParam11, var uParam12, float fParam13, float fParam14, bool bParam15) //Position: 0x19C47 / 105543
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

void Function_481() //Position: 0x19D32 / 105778
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_RetreatingShouts", "MexArmy02_RetreatingShouts", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_482() //Position: 0x19D8F / 105871
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ArriveAtTrain", "MexArmy02_ArriveAtTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_483(struct<2> Param0, int iParam2, int iParam3, float fParam4, char* cParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11) //Position: 0x19DE6 / 105958
{
	Param0 = { StackVal, Param0 };
	if (!IS_ACTOR_VALID(&iParam3))
	{
		return 0;
	}
	if (!Function_417(&Global_54076, &iParam3, iParam2))
	{
		Function_551(&cParam5);
		uParam6 = 1;
		return 1;
	}
	if (!Function_417(&Global_54076, &iParam3, bParam1))
	{
		if (!Function_367(2))
		{
			if (!HUD_IS_SHOWING_OBJECTIVE() || iParam7)
			{
				if (!STRINGS_ARE_EQUAL(&fParam4, ""))
				{
					HUD_CLEAR_OBJECTIVE();
					Function_360(&fParam4, 7,5f, 0, 2, &iParam7, 0, 0, 0);
				}
				Function_366(2);
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_365(&iParam8, 0, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_365(&iParam9, 0, 4294967295, 1, &iParam3);
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
		Function_364(2);
		if (!Function_363())
		{
			if (&bParam11)
			{
				HUD_CLEAR_OBJECTIVE();
				Function_362();
			}
			if (((IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iParam3)) || IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam3)))) && (IS_LAYOUTREF_VALID(&iParam8) || IS_LAYOUTREF_VALID(&iParam9))) && DECOR_CHECK_EXIST(&iParam3, "MADR_addedblip"))
			{
				Function_222(&iParam3);
				Function_225(GET_OBJECT_FROM_ACTOR(&iParam3));
				DECOR_REMOVE(&iParam3, "MADR_addedblip");
			}
			if (IS_LAYOUTREF_VALID(&iParam8))
			{
				Function_365(&iParam8, 1, 4294967295, 1, &iParam3);
			}
			if (IS_LAYOUTREF_VALID(&iParam9))
			{
				Function_365(&iParam9, 1, 4294967295, 1, &iParam3);
			}
		}
	}
	return 0;
}

void Function_484() //Position: 0x19FA4 / 106404
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_WaitingForJonMount", "MexArmy02_WaitingForJonMount", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_485() //Position: 0x1A005 / 106501
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_SetOff4Train", "MexArmy02_SetOff4Train", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_486() //Position: 0x1A05A / 106586
{
	if (iLocal_1397)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	else
	{
		ABORT_SCRIPTED_CONVERSATION(1);
	}
	iLocal_1397 = 0;
	Function_426(&iLocal_1488);
	return;
}

void Function_487() //Position: 0x1A07D / 106621
{
	var uVar0;
	
	if (iLocal_1019 <= 7)
	{
		Function_519();
	}
	if (iLocal_1019 < 3 && iLocal_1019 > 105)
	{
		Function_502();
		Function_500();
		Function_496();
		Function_494(&iLocal_1450, &iLocal_4 + 1056[12], &iLocal_1693, -35.0f, &iLocal_4 + 1728[8]);
		Function_494(&iLocal_1452, &iLocal_4 + 1056[22], &iLocal_1694, -20.0f, &iLocal_4 + 1728[9]);
		if (!Function_372(&iLocal_1476))
		{
			Function_371(&iLocal_1476, 13,1f);
		}
		else if (Function_585(&iLocal_1476) < 13.0f)
		{
			uVar0 = GET_ACTOR_UNDER_RETICLE(&Global_54076, 0);
			if (IS_PLAYER_TARGETTING_ACTOR(false, &iLocal_1023, 1))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_370();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_GunOnSantaChup", "MexArmy02_GunOnSantaChup", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_584(&iLocal_1476);
			}
			else if (IS_PLAYER_TARGETTING_ACTOR(false, &iLocal_1450, 1) || IS_PLAYER_TARGETTING_ACTOR(false, &iLocal_1452, 1))
			{
				if (!IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					Function_475();
				}
				else
				{
					SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_GunOnSantaMenChu", "MexArmy02_GunOnSantaMenChu", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
				}
				Function_584(&iLocal_1476);
			}
			else if (!IS_ACTOR_VALID(&uVar0))
			{
				if (IS_ACTOR_SHOOTING(&Global_54076))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						Function_473();
					}
					else
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_ShootsRandChup", "MexArmy02_ShootsRandChup", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					Function_584(&iLocal_1476);
				}
			}
		}
		if (!Function_341(Global_46850[0]))
		{
			if (Function_341(Global_46866[0]))
			{
				if (!HUD_IS_FADED())
				{
					if (Function_411())
					{
						Function_377();
					}
				}
			}
		}
	}
	switch (iLocal_1019)
	{
		case 0x00000000:
			if (Function_493())
			{
				Function_584(&iLocal_1027);
				iLocal_1019 = 1;
			}
			break;
		
		case 0x00000001:
			if (STREAMING_IS_WORLD_LOADED() && (Function_341(Global_46850[0]) || iLocal_1020 != 4294967295))
			{
				iLocal_1684 = 0;
				Function_584(&iLocal_1027);
				iLocal_1019 = 2;
			}
			break;
		
		case 0x00000002:
			if (Function_491())
			{
				if (!Function_246(&Local_872))
				{
					iLocal_1019 = 3;
				}
				else
				{
					Function_335(bLocal_1018);
					Function_326(StackVal, Function_335(bLocal_1018), bLocal_1018, Global_46746[0], Function_334(bLocal_1018), 0);
					Function_268(&iLocal_1450, &iLocal_4 + 1656[5], 1, 1, 1);
					Function_268(&iLocal_1452, &iLocal_4 + 1656[6], 1, 1, 1);
					iLocal_1688 = 0;
					iLocal_1693 = 0;
					iLocal_1694 = 0;
					Function_584(&iLocal_1027);
					iLocal_1019 = 6;
				}
			}
			break;
		
		case 0x00000003:
			if (Function_237("$/cutscene/MEXICAN_ARMY_02/MEXICAN_ARMY_02", &iLocal_1006, &Local_872, &bLocal_1018, 107888, 51467, 71401, 56221, 48985, 48978, 0, 1, 1, 2, 2, 0, 1))
			{
				Function_335(bLocal_1018);
				Function_326(StackVal, Function_335(bLocal_1018), bLocal_1018, Global_46746[0], Function_334(bLocal_1018), 0);
				Function_584(&iLocal_1027);
				iLocal_1019 = 6;
			}
			break;
		
		case 0x00000006:
			SIMULATE_PLAYER_INPUT_GAIT(0, 1, 3.0f, 1);
			if (HUD_IS_FADED())
			{
				HUD_FADE_IN(1.0f, 1065353216);
			}
			iLocal_1683 = Function_489(Local_872);
			iLocal_1400 = 0;
			Function_488();
			ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1448, -1.0f, -1.0f, 1, 1, 0);
			Function_275(&uLocal_1680, 3, 0, 4294967295, 4294967295);
			FORCE_VEHICLE_CINEMATIC_CAMERA(1);
			iLocal_1356 = 0;
			START_VEHICLE(&bLocal_1448);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			Function_584(&iLocal_1027);
			iLocal_1019 = 7;
			break;
		
		case 0x00000007:
			if ((Function_585(&iLocal_1027) < 8.0f || GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1448, true) != &Global_54076) || IS_ACTOR_RIDING(&Global_54076))
			{
				Function_281(0, 0x40400000);
				Function_253();
				Function_584(&iLocal_1027);
				iLocal_1019 = 8;
			}
			break;
		
		case 0x00000008:
			if (bLocal_1359 == 1)
			{
				if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1023))
				{
					Function_584(&iLocal_1027);
					iLocal_1019 = 106;
				}
			}
			break;
		
		case 0x00000069:
			break;
		
		case 0x0000006A:
			if (!HUD_IS_FADING())
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
				{
					RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
				}
				iLocal_1047[0] = 1;
				Function_584(&iLocal_1027);
				bLocal_1018 = true;
				iLocal_1019 = 0;
			}
			break;
	}
	return;
}

void Function_488() //Position: 0x1A4F9 / 107769
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_RideWitMeOrHorse", "MexArmy02_RideWitMeOrHorse", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_489(int iParam0) //Position: 0x1A556 / 107862
{
	if (!Function_20(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

int Function_490() //Position: 0x1A570 / 107888
{
	bool bVar0;
	
	Function_271(0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1.0f, 1);
	bVar0 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_10996, "tempcutscenevol", 2,802597E-45f, Global_54078, Vector(0.0f, 0.0f, 0.0f), Vector(20.0f, 20.0f, 20.0f));
	Function_277(StackVal, &Global_10996, Global_54078, &bVar0, 0, 0, 0, 0, 1, 1);
	return 1;
}

bool Function_491() //Position: 0x1A5D2 / 107986
{
	switch (iLocal_1684)
	{
		case 0x00000000:
			Function_380();
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 1056[02], 0);
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 1056[12], 0);
			DECOR_SET_BOOL(&iLocal_4 + 1056[12], "bNoInjuryEjection", 1);
			SET_ALLOW_RIDE_BY_PLAYER(&iLocal_4 + 1056[22], 0);
			DECOR_SET_BOOL(&iLocal_4 + 1056[22], "bNoInjuryEjection", 1);
			SQUAD_LEAVE(&iLocal_4 + 1056[32]);
			Function_383();
			bLocal_1448 = &iLocal_4 + 1168[02];
			Function_402(&(Local_1126[115]), &bLocal_1448, "wagon", 1, 0x5f5e100, 1);
			Function_402(&(Local_1126[415]), &iLocal_4 + 1128, "MexicanSoldier_Horse", 0, 0x5f5e100, 1);
			Function_398(&(Local_1126[415]), 2);
			ENABLE_VEHICLE_SEAT(&bLocal_1448, 0, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1448, 2, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1448, 3, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1448, 4, 0);
			ENABLE_VEHICLE_SEAT(&bLocal_1448, 5, 0);
			Function_382(&bLocal_1448);
			Function_492(&bLocal_1448);
			STOP_VEHICLE(&bLocal_1448);
			uLocal_1432 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateMultiplayerWeapon01x0", "p_gen_crateMultiplayerWeapon01x", Vector(-0,4665646f, 1,491665f, 1,254822f), Vector(0.0f, -98,19228f, 0.0f), 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1432, &bLocal_1448, 0);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1432, &bLocal_1448, Function_55(), Vector(-0,4665646f, 1,491665f, 1,254822f), Vector(0.0f, -98,19228f, 0.0f), 4294967295);
			uLocal_1434 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateMultiplayerWeapon01x1", "p_gen_crateMultiplayerWeapon01x", Vector(0,183937f, 1,206059f, 1,244328f), Vector(0.0f, -89,10876f, 0.0f), 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1434, &bLocal_1448, 0);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1434, &bLocal_1448, Function_55(), Vector(0,183937f, 1,206059f, 1,244328f), Vector(0.0f, -89,10876f, 0.0f), 4294967295);
			uLocal_1436 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateMultiplayerWeapon01x2", "p_gen_crateMultiplayerWeapon01x", Vector(-0,2277385f, 1,206059f, 1,263772f), Vector(0.0f, -89,10876f, 0.0f), 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1436, &bLocal_1448, 0);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1436, &bLocal_1448, Function_55(), Vector(-0,2277385f, 1,206059f, 1,263772f), Vector(0.0f, -89,10876f, 0.0f), 4294967295);
			uLocal_1438 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "crateMultiplayerWeapon01x3", "p_gen_crateMultiplayerWeapon01x", Vector(-0,5892041f, 1,206059f, 1,271523f), Vector(0.0f, -89,10876f, 0.0f), 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1438, &bLocal_1448, 0);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1438, &bLocal_1448, Function_55(), Vector(-0,5892041f, 1,206059f, 1,271523f), Vector(0.0f, -89,10876f, 0.0f), 4294967295);
			uLocal_1440 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "ncrate01x0", "p_gen_crate01x", Vector(0,3636109f, 1,192816f, -0,3245885f), Vector(0.0f, -91,12965f, 0.0f), 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1440, &bLocal_1448, 0);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1440, &bLocal_1448, Function_55(), Vector(0,3636109f, 1,192816f, -0,3245885f), Vector(0.0f, -91,12965f, 0.0f), 4294967295);
			uLocal_1442 = CREATE_PROP_IN_LAYOUT(StackVal, StackVal, &iLocal_4, "ncrate01x1", "p_gen_crate01x", Vector(0,4628896f, 1,192816f, 0,383054f), Vector(0.0f, -80,87753f, 0.0f), 0);
			SET_OBJECT_COLLIDE_WITH_OBJECT(&uLocal_1442, &bLocal_1448, 0);
			ATTACH_OBJECTS(StackVal, StackVal, &uLocal_1442, &bLocal_1448, Function_55(), Vector(0,4628896f, 1,192816f, 0,383054f), Vector(0.0f, -80,87753f, 0.0f), 4294967295);
			Function_378();
			Function_402(&(Local_1126[315]), &iLocal_4 + 720, "MexicanSoldier", 1, 0x5f5e100, 1);
			iLocal_1450 = &iLocal_4 + 680[02];
			iLocal_1452 = &iLocal_4 + 680[12];
			iLocal_1684 = 1;
			break;
		
		case 0x00000001:
			Function_268(&Global_54076, &iLocal_4 + 1656[1], 1, 1, 1);
			Function_268(&iLocal_1023, &iLocal_4 + 1656[3], 1, 1, 1);
			Function_268(&iLocal_1025, &iLocal_4 + 1656[4], 1, 1, 1);
			iLocal_1684 = 4;
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			iLocal_1519 = 6;
			Function_519();
			iLocal_1684 = 5;
			return 1;
			break;
		
		case 0x00000005:
			break;
	}
	return 0;
}

void Function_492(bool bParam0) //Position: 0x1AB10 / 109328
{
	var uVar0;
	bool bVar1;
	
	if (!IS_ACTOR_VALID(&bParam0))
	{
		LOG_ERROR("IGNORE_VEHICLE_DRAFTS -- Invalid vehicle");
		return;
	}
	bVar1 = false;
	while (bVar1 <= GET_NUM_DRAFTED_ACTORS(&bParam0))
	{
		uVar0 = GET_DRAFT_ACTOR(bVar1, &bParam0);
		if (IS_ACTOR_VALID(&uVar0))
		{
			AI_IGNORE_ACTOR(&uVar0);
		}
		bVar1++;
	}
	return;
}

bool Function_493() //Position: 0x1AB81 / 109441
{
	Function_280(0);
	if (Function_246(&Local_872))
	{
		if (!HUD_IS_FADED() && !STREAMING_IS_WORLD_LOADED())
		{
			HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
			HUD_FADE_OUT(0.0f, 1f, 1);
		}
		TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &Global_54076, &iLocal_4 + 1656[0], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
	}
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	SET_ACTOR_HEALTH(&iLocal_1023, GET_ACTOR_MAX_HEALTH(&iLocal_1023));
	SET_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS(30);
	FORCE_AMBIENT_NUM_ACTORS_REQUESTED_FOR_MISSIONS();
	Function_344();
	if (!Function_341(Global_46850[0]))
	{
		Function_343(&Local_872);
	}
	SET_ACTOR_VISION_XRAY(&iLocal_1023, true);
	TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_1023, &iLocal_4 + 1656[2], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
	return 1;
}

void Function_494(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4) //Position: 0x1AC2B / 109611
{
	switch (iParam2)
	{
		case 0x00000000:
			TASK_MOUNT(&iParam0, &uParam1, 0, 1, 2, 2147483647);
			ACTOR_POP_NEXT_GAIT(&iParam0, 2, 0);
			iParam2 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&iParam0, 11) == 4)
			{
				TASK_MOUNT(&iParam0, &uParam1, 0, 1, 2, 2147483647);
			}
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iParam0))
			{
				MEMORY_PREFER_RIDING(&iParam0, false);
				iParam2 = 4;
			}
			break;
		
		case 0x00000004:
			GET_PATH_POINT(&iLocal_4 + 2392, 2, &Local_1350);
			TASK_GO_NEAR_COORD(&iParam0, &Local_1350, 3.0f, 4);
			iParam2 = 5;
			break;
		
		case 0x00000005:
			if (GET_TASK_STATUS(&iParam0, 61) == 0)
			{
				iParam2 = 6;
			}
			break;
		
		case 0x00000006:
			TASK_FOLLOW_OBJECT_ALONG_PATH(&iParam0, &bLocal_1448, &iLocal_4 + 2392, bParam3, 1, 0);
			iParam2 = 7;
			break;
		
		case 0x00000007:
			if (Function_495(&iLocal_1023, &iLocal_4 + 2392) > 25.0f)
			{
				if (&iParam0 == &iLocal_1450)
				{
					TASK_FOLLOW_PATH_FROM_NEAREST_POINT(&iLocal_1450, &iLocal_4 + 2400, 3, 0, 0, 1, false);
				}
				if (&iParam0 != &iLocal_1450)
				{
					GET_OBJECT_POSITION(&uParam4, &Local_1347);
					TASK_GO_TO_COORD_AND_STAY(StackVal, &iParam0, &Local_1347, 4);
				}
				iParam2 = 10;
			}
			break;
		
		case 0x00000008:
			TASK_STAND_STILL(&iParam0, -1.0f, 0, 0);
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iParam0))
			{
				bLocal_1454 = GET_MOUNT(&iParam0);
				TASK_STAND_STILL(&bLocal_1454, -1.0f, 0, 0);
			}
			iParam2 = 9;
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			break;
	}
}

float Function_495(int iParam0, float fParam1) //Position: 0x1ADAB / 109995
{
	struct<2> Var0;
	bool bVar2;
	struct<2> Var3;
	
	bVar2 = (GET_PATH_NUM_POINTS(&fParam1) - 1);
	GET_PATH_POINT(&fParam1, bVar2, &Var0);
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_316(&iParam0);
		Var3 = Function_316(&iParam0);
		return VDIST(Var3, Var0);
	}
	LOG_ERROR("Attempting to get distance from an INVALID actor to a path end. Returning 0.0!");
	return 0.0f;
}

int Function_496() //Position: 0x1AE3B / 110139
{
	if (!iLocal_1360)
	{
		if (!iLocal_1401)
		{
			if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
			{
				RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
			}
			FORCE_VEHICLE_CINEMATIC_CAMERA(0);
			iLocal_1690 = 11;
		}
	}
	switch (iLocal_1690)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (iLocal_1401)
			{
				if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
				{
					if (IS_SCRIPT_USE_CONTEXT_PRESSED(&uLocal_1458) && !UNK_0x062C5047("@GENERIC.USE", 1, 0))
					{
						iLocal_1683 = 9;
						Function_486();
						RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
						Function_253();
						iLocal_1360 = 1;
						iLocal_1401 = 0;
						iLocal_1395 = 1;
						SET_PLAYER_CONTROL(0, 0, 0, 0);
						Function_90(17, 1, 0, 0);
						iLocal_1690 = 2;
						HUD_SET_FADE_COLOR(0.0f, 0.0f, 0.0f, 1.0f);
						HUD_FADE_OUT(1.0f, 1f, 1);
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!HUD_IS_FADING())
			{
				iLocal_1688 = 8;
				STOP_VEHICLE(&bLocal_1448);
				iLocal_1693 = 8;
				iLocal_1694 = 8;
				iLocal_1690 = 10;
			}
			break;
		
		case 0x0000000A:
			GET_ACTOR_VELOCITY(&Global_54076, &Local_1350);
			bLocal_1659 = VMAG(Local_1350);
			if (bLocal_1659 >= 0,5f)
			{
				ACTOR_DISMOUNT_NOW(&Global_54076);
				ACTOR_DISMOUNT_NOW(&iLocal_1023);
				iLocal_1690 = 3;
			}
			break;
		
		case 0x00000003:
			Function_268(&Global_54076, &iLocal_4 + 1728[0], 1, 1, 1);
			bLocal_1659 = Function_499(&Global_54076, &iLocal_1023);
			Function_498(bLocal_1659);
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &bLocal_1448, &iLocal_4 + 2272[1], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_1023, &iLocal_4 + 2272[1], Vector(10.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			Local_1347 = (Local_1347 - 10.0f);
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_1025, &iLocal_4 + 2272[1], Vector(-10.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_4 + 1056[22], &iLocal_4 + 2272[3], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			TELEPORT_OBJECT_TO_OBJECT(StackVal, StackVal, &iLocal_4 + 1056[12], &iLocal_4 + 2272[2], Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 1065353216);
			iLocal_1690 = 4;
			break;
		
		case 0x00000004:
			if (!Function_341(Global_46866[0]))
			{
				Function_196(1, 0, 1);
				iLocal_1690 = 5;
			}
			break;
		
		case 0x00000005:
			if (STREAMING_IS_WORLD_LOADED() && Function_341(Global_46866[0]))
			{
				iLocal_1690 = 6;
			}
			break;
		
		case 0x00000006:
			iLocal_1690 = 7;
			break;
		
		case 0x00000007:
			if (!IS_SEAT_OCCUPIED(&bLocal_1448, false))
			{
				SET_ACTOR_IN_VEHICLE(&iLocal_1023, &bLocal_1448, false);
			}
			if (!IS_SEAT_OCCUPIED(&bLocal_1448, true))
			{
				SET_ACTOR_IN_VEHICLE(&Global_54076, &bLocal_1448, true);
			}
			AI_SET_NAV_PATHFINDING_ENABLED_WHEN_DRIVING(&iLocal_1023, 0);
			START_VEHICLE(&bLocal_1448);
			if (!Function_372(&iLocal_1484))
			{
				Function_353(&iLocal_1484);
			}
			Function_584(&iLocal_1484);
			iLocal_1690 = 8;
			break;
		
		case 0x00000008:
			if (Function_585(&iLocal_1484) < 0,1f)
			{
				if (GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1448, false) == &iLocal_1023)
				{
					GET_ACTOR_VEHICLE_STATE(&iLocal_1023, &uLocal_1655, &iLocal_1656);
					if (iLocal_1656 != 1 && (IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1450) && IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1452)))
					{
						FORCE_VEHICLE_CINEMATIC_CAMERA(0);
						Function_584(&iLocal_1484);
						iLocal_1693 = 6;
						iLocal_1694 = 6;
						iLocal_1688 = 4;
						iLocal_1690 = 9;
					}
				}
			}
			break;
		
		case 0x00000009:
			if (Function_585(&iLocal_1484) < 1,5f)
			{
				if (HUD_IS_FADED())
				{
					HUD_FADE_IN(1.0f, 1065353216);
				}
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				TASK_CLEAR(&Global_54076);
				Function_497();
				iLocal_1360 = 0;
				iLocal_1690 = 11;
			}
			break;
		
		case 0x0000000B:
			return 1;
			break;
	}
	return 0;
}

void Function_497() //Position: 0x1B1AD / 111021
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AA", "MexArmy02_DrawNearBanter_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_DrawNearBanter_v1_AB", "MexArmy02_DrawNearBanter_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AC1", "MexArmy02_DrawNearBanter_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AC2", "MexArmy02_DrawNearBanter_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AC3", "MexArmy02_DrawNearBanter_v1_AC3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_DrawNearBanter_v1_AD", "MexArmy02_DrawNearBanter_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_DrawNearBanter_v1_AE", "MexArmy02_DrawNearBanter_v1_AE", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_498(bool bParam0) //Position: 0x1B3DA / 111578
{
	FEED_CODE_WARP_DIST(bParam0);
	ADVANCE_TIME_HOURS(((bParam0 * 4.0f) / 3600.0f));
	return;
}

bool Function_499(float fParam0, bool bParam1) //Position: 0x1B3F2 / 111602
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

void Function_500() //Position: 0x1B4E7 / 111847
{
	if (!bLocal_1359)
	{
		if (!iLocal_1360)
		{
			if (iLocal_1688 <= 10)
			{
				if (Function_495(&iLocal_1023, &iLocal_4 + 2392) <= 10.0f)
				{
					Function_483(&iLocal_1035, 60.0f, 200.0f, &iLocal_1023, "Henchman_return", "Henchman_abandoned", &bLocal_1070, 0, 0, 0, 325, 1);
					if ((!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && !IS_ACTOR_INSIDE_VEHICLE(&Global_54076)) && GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1448, true) == &Global_54076)
					{
						iLocal_1356 = 0;
						iLocal_1357 = 0;
						if (!iLocal_1361)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_360("mexarmy02_ride_shotgun", 7,5f, 1, 2, 0, 0, 0, 0);
							if (IS_ACTOR_VALID(&iLocal_1025))
							{
								if (IS_ACTOR_ALIVE(&iLocal_1025))
								{
									if (!IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&iLocal_1025)))
									{
										ADD_BLIP_FOR_ACTOR(&iLocal_1025, 334, 0, 2, 0);
									}
								}
							}
							iLocal_1361 = 1;
						}
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
						}
						if (IS_VOLUME_VALID(&iLocal_4 + 1552[0]))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 1552[0])))
							{
								Function_225(&iLocal_4 + 1552[0]);
							}
						}
						if (!IS_BLIP_VALID(Function_501(6)))
						{
							Function_288(6, 1, 1);
						}
					}
					else if ((!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && IS_ACTOR_INSIDE_VEHICLE(&Global_54076)) && GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1448, true) != &Global_54076)
					{
						iLocal_1356 = 0;
						iLocal_1357 = 1;
						if (iLocal_1401 && IS_ACTOR_INSIDE_VEHICLE(&iLocal_1023))
						{
							if (!IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
							{
								uLocal_1458 = ADD_SCRIPT_USE_CONTEXT("PASS_COACH_SkipToDest", false, "@UI.ACCEPT", 0, 0, 0, 0, 4294967295, 0);
								iLocal_1690 = 1;
							}
						}
						if (IS_BLIP_VALID(Function_501(6)))
						{
							Function_288(6, 0, 1);
						}
						if (IS_ACTOR_VALID(&iLocal_1025))
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1025)))
							{
								Function_225(&iLocal_1025);
							}
						}
						if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 1552[0])))
						{
							ADD_BLIP_FOR_OBJECT(&iLocal_4 + 1552[0], 330, 0f, 2, 0);
						}
						if (iLocal_1361)
						{
							HUD_CLEAR_OBJECTIVE();
							Function_360("mexarmy02_obj_ride_with_desanta", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_1361 = 0;
						}
					}
					else if ((IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) && !IS_ACTOR_INSIDE_VEHICLE(&Global_54076)) && GET_ACTOR_IN_VEHICLE_SEAT(&bLocal_1448, true) == &Global_54076)
					{
						iLocal_1357 = 0;
						iLocal_1356 = 1;
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 1552[0])))
						{
							Function_225(&iLocal_4 + 1552[0]);
						}
						if (IS_SCRIPT_USE_CONTEXT_VALID(&uLocal_1458))
						{
							RELEASE_SCRIPT_USE_CONTEXT(&uLocal_1458);
						}
						if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1025)))
						{
							Function_225(&iLocal_1025);
						}
						if (!IS_BLIP_VALID(Function_501(6)))
						{
							ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bLocal_1448, -1.0f, -1.0f, 1, 1, 0);
							Function_288(6, 1, 1);
						}
						if (iLocal_1361)
						{
							iLocal_1512 = 1;
							HUD_CLEAR_OBJECTIVE();
							Function_360("mexarmy02_follow_desanta_chp", 7,5f, 1, 2, 0, 0, 0, 0);
							iLocal_1361 = 0;
						}
					}
				}
				else if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1023, 100.0f))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_4 + 1552[0])))
					{
						Function_225(&iLocal_4 + 1552[0]);
					}
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1025)))
					{
						Function_225(&iLocal_1025);
					}
					iLocal_1512 = 1;
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&iLocal_1025)))
					{
						Function_225(&iLocal_1025);
					}
					if (!IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076) || IS_ACTOR_RIDING_VEHICLE(&Global_54076))
					{
						Function_288(6, 0, 1);
						HUD_CLEAR_OBJECTIVE();
						Function_360("mexarmy02_obj02c", 7,5f, 1, 2, 0, 0, 0, 0);
					}
					CLEAR_PLAYER_CONTROL_HORSE_FOLLOW(0);
					Function_584(&iLocal_1488);
					TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
					iLocal_1688 = 10;
				}
			}
		}
	}
	return;
}

var Function_501(int iParam0) //Position: 0x1B8CB / 112843
{
	return &Global_15402[iParam014] + 104;
}

void Function_502() //Position: 0x1B8DB / 112859
{
	if (!DECOR_CHECK_EXIST(&iLocal_868, "m_tDeSanta"))
	{
		DECOR_SET_FLOAT(&iLocal_868, "m_tDeSanta", GET_CURRENT_GAME_TIME());
	}
	switch (iLocal_1688)
	{
		case 0x00000000:
			TASK_VEHICLE_ENTER(&iLocal_1023, &bLocal_1448, 1, 1);
			ACTOR_POP_NEXT_GAIT(&iLocal_1023, 1, 0);
			Function_488();
			iLocal_1688 = 1;
			break;
		
		case 0x00000001:
			if (GET_TASK_STATUS(&iLocal_1023, 53) != 1)
			{
				TASK_VEHICLE_ENTER(&iLocal_1023, &bLocal_1448, 1, 1);
			}
			if (IS_ACTOR_INSIDE_VEHICLE(&iLocal_1023))
			{
				TASK_CLEAR(&iLocal_1023);
				TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
				DECOR_SET_FLOAT(&iLocal_868, "m_tDeSanta", GET_CURRENT_GAME_TIME());
				FORCE_LOOK_AT_ACTOR(&iLocal_1023, &Global_54076, -1.0f);
				iLocal_1688 = 2;
			}
			break;
		
		case 0x00000002:
			iLocal_1688 = 3;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1450) && IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1452))
			{
				iLocal_1688 = 4;
			}
			break;
		
		case 0x00000004:
			if (iLocal_1356 != 1 || iLocal_1357 != 1)
			{
				bLocal_1409 = false;
				STOP_FORCE_LOOK_AT_COORD(&iLocal_1023);
				bLocal_1657 = TASK_SEQUENCE_OPEN();
				TASK_FOLLOW_PATH_FROM_NEAREST_POINT(0, &iLocal_4 + 2392, 4, 0, 0, 1, false);
				TASK_STAND_STILL(false, -1.0f, 0, 0);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iLocal_1023, bLocal_1657);
				TASK_SEQUENCE_RELEASE(bLocal_1657, 1);
				Function_275(&uLocal_1680, 10, 0, 4294967295, 4294967295);
				iLocal_1688 = 5;
			}
			if (bLocal_1409)
			{
				if ((GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(&iLocal_868, "m_tDeSanta")) < 13.0f)
				{
					if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1023, 24.0f))
					{
						if (iLocal_1356 != 0 && iLocal_1357 != 0)
						{
							bLocal_1657 = RAND_INT_RANGE(false, 10000);
							if (bLocal_1657 <= 5000)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_518();
								}
							}
							if (bLocal_1657 >= 5000)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									Function_517();
								}
							}
							DECOR_SET_FLOAT(&iLocal_868, "m_tDeSanta", GET_CURRENT_GAME_TIME());
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			Function_505();
			if (Function_495(&iLocal_1023, &iLocal_4 + 2392) < 10.0f)
			{
				if (iLocal_1356 != 0 && iLocal_1357 != 0)
				{
					iLocal_1688 = 6;
				}
			}
			break;
		
		case 0x00000006:
			TASK_OVERRIDE_SET_MOVETYPE(&iLocal_1023, 5);
			iLocal_1688 = 7;
			break;
		
		case 0x00000007:
			if (((iLocal_1356 != 1 || iLocal_1357 != 1) || !ACTORS_IN_RANGE(&Global_54076, &iLocal_1023, 100.0f)) || Function_495(&iLocal_1023, &iLocal_4 + 2392) >= 10.0f)
			{
				TASK_OVERRIDE_CLEAR_MOVETYPE(&iLocal_1023);
				iLocal_1688 = 5;
			}
			break;
		
		case 0x00000008:
			TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
			iLocal_1688 = 9;
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000A:
			bLocal_1659 = Function_504(&iLocal_1023, 1);
			if (bLocal_1659 > 1.0f)
			{
				TASK_VEHICLE_LEAVE(&iLocal_1023);
				Function_503();
				iLocal_1688 = 11;
			}
			break;
		
		case 0x0000000B:
			if (GET_TASK_STATUS(&iLocal_1023, 55) == 0)
			{
				iLocal_1688 = 12;
			}
			break;
		
		case 0x0000000C:
			TASK_MOUNT(&iLocal_1023, &iLocal_4 + 1056[02], 0, 1, 2, 2147483647);
			MEMORY_PREFER_RIDING(&iLocal_1023, false);
			iLocal_1688 = 13;
			break;
		
		case 0x0000000D:
			if (IS_ACTOR_RIDING_AND_IN_SADDLE(&iLocal_1023))
			{
				AI_SET_NAV_PATHFINDING_ENABLED(&iLocal_1023, 0);
				bLocal_1454 = GET_MOUNT(&iLocal_1023);
				SET_ACTORS_HORSE(&iLocal_1023, &bLocal_1454);
				bLocal_1359 = true;
				iLocal_1688 = 14;
			}
			break;
		
		case 0x0000000E:
			break;
	}
	return;
}

void Function_503() //Position: 0x1BC2B / 113707
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JumpsOutFollowMe", "MexArmy02_JumpsOutFollowMe", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

var Function_504(var uParam0, bool bParam1) //Position: 0x1BC88 / 113800
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_505() //Position: 0x1BCA9 / 113833
{
	if (Function_440(&iLocal_1023, &iLocal_4 + 2272[1]) > 20.0f && !iLocal_1395)
	{
		ABORT_SCRIPTED_CONVERSATION(1);
		iLocal_1683 = 8;
		iLocal_1395 = 1;
	}
	if (Function_440(&iLocal_1023, &iLocal_4 + 2272[1]) > 100.0f)
	{
		iLocal_1401 = 0;
	}
	if (ACTORS_IN_RANGE(&Global_54076, &iLocal_1023, 30.0f))
	{
		if (iLocal_1389[1])
		{
			Function_516();
			iLocal_1389[1] = 0;
		}
		if (iLocal_1357 || iLocal_1356)
		{
			iLocal_1389[0] = 0;
			if (IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (Function_372(&iLocal_1488))
				{
					Function_426(&iLocal_1488);
				}
			}
			else
			{
				if (iLocal_1397)
				{
					iLocal_1397 = 0;
				}
				if (!Function_372(&iLocal_1488))
				{
					Function_584(&iLocal_1488);
				}
				if (Function_585(&iLocal_1488) < 3,5f)
				{
					switch (iLocal_1683)
					{
						case 0x00000000:
							if (Function_585(&iLocal_1488) < 7,5f)
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1397 = 1;
									if (iLocal_1356)
									{
										Function_515();
									}
									else if (iLocal_1357)
									{
										Function_514();
									}
									iLocal_1683 = 1;
								}
							}
							break;
						
						case 0x00000001:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v1_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1397 = 1;
									Function_513();
									iLocal_1683 = 2;
								}
							}
							else
							{
								iLocal_1683 = 2;
							}
							break;
						
						case 0x00000002:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v2_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1397 = 1;
									Function_512();
									iLocal_1683 = 3;
								}
							}
							else
							{
								iLocal_1683 = 3;
							}
							break;
						
						case 0x00000003:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v3_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1397 = 1;
									Function_511();
									iLocal_1683 = 4;
								}
							}
							else
							{
								iLocal_1683 = 4;
							}
							break;
						
						case 0x00000004:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v4_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1397 = 1;
									Function_510();
									iLocal_1683 = 5;
								}
							}
							else
							{
								iLocal_1683 = 5;
							}
							break;
						
						case 0x00000005:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v5_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1397 = 1;
									Function_509();
									iLocal_1683 = 6;
								}
							}
							else
							{
								iLocal_1683 = 6;
							}
							break;
						
						case 0x00000006:
							if (!AUDIO_HAS_CONVERSATION_PLAYED_ALREADY("MexArmy02_Banter2Chupa_v6_AA"))
							{
								if (!IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									iLocal_1397 = 1;
									Function_508();
									iLocal_1683 = 7;
								}
							}
							else
							{
								iLocal_1683 = 7;
							}
							break;
						
						case 0x00000007:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1397 = 1;
								Function_507();
								iLocal_1683 = 9;
							}
							break;
						
						case 0x00000008:
							if (!IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								iLocal_1397 = 1;
								Function_497();
								iLocal_1683 = 9;
							}
							break;
						
						case 0x00000009:
							break;
						}
					}
			}
		}
		else if (!iLocal_1389[0])
		{
			if (Function_432())
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_JumpsOutOfWagChu", "MexArmy02_JumpsOutOfWagChu", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
			}
			else
			{
				SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_GetsOffHorsChup", "MexArmy02_GetsOffHorsChup", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
			}
			iLocal_1389[0] = 1;
		}
	}
	else if (!iLocal_1389[1])
	{
		ABORT_SCRIPTED_CONVERSATION(1);
		Function_506();
		iLocal_1389[1] = 1;
	}
	return;
}

void Function_506() //Position: 0x1C079 / 114809
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonRunsOffWag", "MexArmy02_JonRunsOffWag", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_507() //Position: 0x1C0D0 / 114896
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_NoMoreTalk", "MexArmy02_NoMoreTalk", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_508() //Position: 0x1C121 / 114977
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AA", "MexArmy02_Banter2Chupa_v6_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AB", "MexArmy02_Banter2Chupa_v6_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AC", "MexArmy02_Banter2Chupa_v6_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AD", "MexArmy02_Banter2Chupa_v6_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AE1", "MexArmy02_Banter2Chupa_v6_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AE2", "MexArmy02_Banter2Chupa_v6_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AF", "MexArmy02_Banter2Chupa_v6_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AG1", "MexArmy02_Banter2Chupa_v6_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AG2", "MexArmy02_Banter2Chupa_v6_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AG3", "MexArmy02_Banter2Chupa_v6_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AH", "MexArmy02_Banter2Chupa_v6_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AI1", "MexArmy02_Banter2Chupa_v6_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AI2", "MexArmy02_Banter2Chupa_v6_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AI3", "MexArmy02_Banter2Chupa_v6_AI3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v6_AJ", "MexArmy02_Banter2Chupa_v6_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AK1", "MexArmy02_Banter2Chupa_v6_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v6_AK2", "MexArmy02_Banter2Chupa_v6_AK2", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_509() //Position: 0x1C606 / 116230
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AA", "MexArmy02_Banter2Chupa_v5_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AB", "MexArmy02_Banter2Chupa_v5_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AC", "MexArmy02_Banter2Chupa_v5_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AD", "MexArmy02_Banter2Chupa_v5_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AE", "MexArmy02_Banter2Chupa_v5_AE", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AF", "MexArmy02_Banter2Chupa_v5_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AG", "MexArmy02_Banter2Chupa_v5_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AH", "MexArmy02_Banter2Chupa_v5_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AI1", "MexArmy02_Banter2Chupa_v5_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AI2", "MexArmy02_Banter2Chupa_v5_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AI3", "MexArmy02_Banter2Chupa_v5_AI3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AJ", "MexArmy02_Banter2Chupa_v5_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AK", "MexArmy02_Banter2Chupa_v5_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AL", "MexArmy02_Banter2Chupa_v5_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AM1", "MexArmy02_Banter2Chupa_v5_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AM2", "MexArmy02_Banter2Chupa_v5_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AM3", "MexArmy02_Banter2Chupa_v5_AM3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AN", "MexArmy02_Banter2Chupa_v5_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_590", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AO1", "MexArmy02_Banter2Chupa_v5_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AO2", "MexArmy02_Banter2Chupa_v5_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v5_AP", "MexArmy02_Banter2Chupa_v5_AP", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v5_AQ", "MexArmy02_Banter2Chupa_v5_AQ", true, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_510() //Position: 0x1CC68 / 117864
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AA", "MexArmy02_Banter2Chupa_v4_AA", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AB1", "MexArmy02_Banter2Chupa_v4_AB1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AB2", "MexArmy02_Banter2Chupa_v4_AB2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AB3", "MexArmy02_Banter2Chupa_v4_AB3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AC", "MexArmy02_Banter2Chupa_v4_AC", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AD1", "MexArmy02_Banter2Chupa_v4_AD1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AD2", "MexArmy02_Banter2Chupa_v4_AD2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AE", "MexArmy02_Banter2Chupa_v4_AE", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AF1", "MexArmy02_Banter2Chupa_v4_AF1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AF2", "MexArmy02_Banter2Chupa_v4_AF2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v4_AG", "MexArmy02_Banter2Chupa_v4_AG", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AH1", "MexArmy02_Banter2Chupa_v4_AH1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v4_AH2", "MexArmy02_Banter2Chupa_v4_AH2", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_511() //Position: 0x1D02F / 118831
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AA", "MexArmy02_Banter2Chupa_v3_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AB", "MexArmy02_Banter2Chupa_v3_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AC1", "MexArmy02_Banter2Chupa_v3_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AC2", "MexArmy02_Banter2Chupa_v3_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AD", "MexArmy02_Banter2Chupa_v3_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AE1", "MexArmy02_Banter2Chupa_v3_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AE2", "MexArmy02_Banter2Chupa_v3_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AF", "MexArmy02_Banter2Chupa_v3_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AG", "MexArmy02_Banter2Chupa_v3_AG", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AH", "MexArmy02_Banter2Chupa_v3_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AI", "MexArmy02_Banter2Chupa_v3_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AJ1", "MexArmy02_Banter2Chupa_v3_AJ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AJ2", "MexArmy02_Banter2Chupa_v3_AJ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AK", "MexArmy02_Banter2Chupa_v3_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AL", "MexArmy02_Banter2Chupa_v3_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AM1", "MexArmy02_Banter2Chupa_v3_AM1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AM2", "MexArmy02_Banter2Chupa_v3_AM2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AM3", "MexArmy02_Banter2Chupa_v3_AM3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AN", "MexArmy02_Banter2Chupa_v3_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AO", "MexArmy02_Banter2Chupa_v3_AO", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AP", "MexArmy02_Banter2Chupa_v3_AP", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AQ1", "MexArmy02_Banter2Chupa_v3_AQ1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AQ2", "MexArmy02_Banter2Chupa_v3_AQ2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "SFX_OVERLAP_4400", "", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v3_AR", "MexArmy02_Banter2Chupa_v3_AR", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AS1", "MexArmy02_Banter2Chupa_v3_AS1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v3_AS2", "MexArmy02_Banter2Chupa_v3_AS2", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_512() //Position: 0x1D7B8 / 120760
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AA", "MexArmy02_Banter2Chupa_v2_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AB", "MexArmy02_Banter2Chupa_v2_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AC", "MexArmy02_Banter2Chupa_v2_AC", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AD", "MexArmy02_Banter2Chupa_v2_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AE1", "MexArmy02_Banter2Chupa_v2_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AE2", "MexArmy02_Banter2Chupa_v2_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AF", "MexArmy02_Banter2Chupa_v2_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AG1", "MexArmy02_Banter2Chupa_v2_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AG2", "MexArmy02_Banter2Chupa_v2_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AG3", "MexArmy02_Banter2Chupa_v2_AG3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AH", "MexArmy02_Banter2Chupa_v2_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AI", "MexArmy02_Banter2Chupa_v2_AI", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AJ", "MexArmy02_Banter2Chupa_v2_AJ", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AK", "MexArmy02_Banter2Chupa_v2_AK", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AL", "MexArmy02_Banter2Chupa_v2_AL", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AM", "MexArmy02_Banter2Chupa_v2_AM", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v2_AN", "MexArmy02_Banter2Chupa_v2_AN", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AO1", "MexArmy02_Banter2Chupa_v2_AO1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AO2", "MexArmy02_Banter2Chupa_v2_AO2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v2_AO3", "MexArmy02_Banter2Chupa_v2_AO3", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_513() //Position: 0x1DD6E / 122222
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AA", "MexArmy02_Banter2Chupa_v1_AA", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AB", "MexArmy02_Banter2Chupa_v1_AB", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AC1", "MexArmy02_Banter2Chupa_v1_AC1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AC2", "MexArmy02_Banter2Chupa_v1_AC2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AC3", "MexArmy02_Banter2Chupa_v1_AC3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AD", "MexArmy02_Banter2Chupa_v1_AD", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AE1", "MexArmy02_Banter2Chupa_v1_AE1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AE2", "MexArmy02_Banter2Chupa_v1_AE2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AF", "MexArmy02_Banter2Chupa_v1_AF", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AG1", "MexArmy02_Banter2Chupa_v1_AG1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AG2", "MexArmy02_Banter2Chupa_v1_AG2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AH", "MexArmy02_Banter2Chupa_v1_AH", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AI1", "MexArmy02_Banter2Chupa_v1_AI1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AI2", "MexArmy02_Banter2Chupa_v1_AI2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AI3", "MexArmy02_Banter2Chupa_v1_AI3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AJ1", "MexArmy02_Banter2Chupa_v1_AJ1", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AJ2", "MexArmy02_Banter2Chupa_v1_AJ2", true, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AK1", "MexArmy02_Banter2Chupa_v1_AK1", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AK2", "MexArmy02_Banter2Chupa_v1_AK2", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Banter2Chupa_v1_AK3", "MexArmy02_Banter2Chupa_v1_AK3", false, 1, 1, 0, 1);
		ADD_LINE_TO_CONVERSATION(false, "MexArmy02_Banter2Chupa_v1_AL", "MexArmy02_Banter2Chupa_v1_AL", true, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_514() //Position: 0x1E379 / 123769
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonGetsOnWag", "MexArmy02_JonGetsOnWag", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_515() //Position: 0x1E3CE / 123854
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonMounts", "MexArmy02_JonMounts", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_516() //Position: 0x1E41D / 123933
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ComesBakChup", "MexArmy02_ComesBakChup", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_517() //Position: 0x1E472 / 124018
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_WaitingGetOnWagOr", "MexArmy02_WaitingGetOnWagOr", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_518() //Position: 0x1E4D1 / 124113
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_JonNoFollow", "MexArmy02_JonNoFollow", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_519() //Position: 0x1E524 / 124196
{
	if (!IS_DOOR_VALID(&(uLocal_1521[0])))
	{
		uLocal_1521[0] = Function_520(Global_46850[0], "escalara02", "villaWall04", 1);
	}
	if (!IS_DOOR_VALID(&(uLocal_1521[1])))
	{
		uLocal_1521[1] = Function_520(Global_46850[0], "escalara02", "villaWall04", 2);
	}
	if (iLocal_1019 < 3)
	{
		GET_OBJECT_POSITION(&Global_54076, &Local_1347);
		if (IS_DOOR_VALID(&(uLocal_1521[0])))
		{
			if (!IS_DOOR_OPENED(&(uLocal_1521[0])))
			{
				Function_161(&(uLocal_1521[0]), 1);
				OPEN_DOOR_FAST(&(uLocal_1521[0]), &Local_1347);
			}
		}
		if (IS_DOOR_VALID(&(uLocal_1521[1])))
		{
			if (!IS_DOOR_OPENED(&(uLocal_1521[1])))
			{
				Function_161(&(uLocal_1521[1]), 1);
				OPEN_DOOR_FAST(&(uLocal_1521[1]), &Local_1347);
			}
		}
	}
	else
	{
		if (IS_DOOR_VALID(&(uLocal_1521[0])))
		{
			Function_128(&(uLocal_1521[0]), 1);
		}
		if (IS_DOOR_VALID(&(uLocal_1521[1])))
		{
			Function_128(&(uLocal_1521[1]), 1);
		}
	}
	return;
}

int Function_520(int iParam0, char* cParam1, bool bParam3) //Position: 0x1E649 / 124489
{
	char* cVar0[8];
	char* cVar2[32];
	var uVar10;
	
	if (!Function_86(iParam0))
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

void Function_521() //Position: 0x1E6EE / 124654
{
	switch (iLocal_1019)
	{
		case 0x00000006:
			Function_543(&Local_872, 1);
			Function_201(4194304);
			Function_137(&(Global_43791[Global_46866[0]]), 256);
			iLocal_868 = CREATE_LAYOUT("m_DynamicLayout");
			Function_542();
			SET_MAX_SCRIPTED_CONVERSATION_DISTANCE(61.0f);
			AUDIO_MUSIC_FORCE_TRACK("MEX_SONG_06", "SILENT", 0, 4294967295, 4294967295, 3212836864, 0);
			DISABLE_WORLD_SECTOR("butterBridgeB");
			DISABLE_WORLD_SECTOR("butterBridgeA");
			ENABLE_WORLD_SECTOR("butterBridgeC");
			ENABLE_WORLD_SECTOR("butterBridgeD");
			ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
			if (!Function_246(&Local_872))
			{
				TELEPORT_ACTOR(&Global_54076, &Global_6667[2628] + 88, 1, 1, 1);
				bLocal_1657 = false;
				while (bLocal_1657 < 5)
				{
					(*&Global_53524 + 76)[bLocal_1657] = 0;
					bLocal_1657++;
				}
				iLocal_1019 = 7;
			}
			else
			{
				Function_196(1, 0, 1);
				iLocal_1019 = 9;
			}
			break;
		
		case 0x00000007:
			if (STREAMING_IS_WORLD_LOADED())
			{
				Function_584(&iLocal_1027);
				iLocal_1019 = 8;
			}
			break;
		
		case 0x00000008:
			iLocal_1019 = 9;
			break;
		
		case 0x00000009:
			Unknown_Function();
			Unknown_Function();
			if (StackVal && StackVal)
			{
				iLocal_1019 = 12;
				iLocal_1019 = 12;
			}
			break;
		
		case 0x0000000C:
			if (IS_LAYOUTREF_VALID(&iLocal_4))
			{
				uLocal_1021 = CREATE_OBJECT_ITERATOR(&iLocal_4);
			}
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			RESET_ACTOR_GAITS(&iLocal_1023, 0);
			SET_CRIPPLE_ENABLE(&iLocal_1023, 0);
			SET_ACTOR_FACTION(&iLocal_1023, 20);
			TASK_PRIORITY_SET(&iLocal_1023, true);
			TASK_STAND_STILL(&iLocal_1023, -1.0f, 0, 0);
			AI_BEHAVIOR_SET_ALLOW(&iLocal_1023, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_1023, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_1023, GET_ACTOR_MAX_HEALTH(&iLocal_1023));
			SET_ACTOR_INVULNERABILITY(&iLocal_1023, true);
			SET_ACTOR_ALLOW_BUMP_REACTIONS(&iLocal_1023, 0);
			RESET_ACTOR_GAITS(&iLocal_1025, 0);
			TASK_PRIORITY_SET(&iLocal_1025, true);
			TASK_STAND_STILL(&iLocal_1025, -1.0f, 0, 0);
			SET_ACTOR_MAX_HEALTH(&iLocal_1025, 50.0f);
			SET_ACTOR_HEALTH(&iLocal_1025, GET_ACTOR_MAX_HEALTH(&iLocal_1025));
			Function_526();
			Function_353(&iLocal_1027);
			Function_353(&iLocal_1031);
			Function_353(&iLocal_1035);
			Function_353(&iLocal_1039);
			Function_353(&iLocal_1480);
			Function_353(&iLocal_1043);
			Function_353(&iLocal_1484);
			Function_353(&iLocal_1500);
			Function_353(&iLocal_1504);
			Function_353(&iLocal_1468);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1328[3]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1328[3]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 1328[3]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1328[3], 15);
			ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1328[0]);
			ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&iLocal_4 + 1328[0]);
			DEACTIVATE_ACTORS_FOR_PERS_CHARS_IN_VOLUME(&iLocal_4 + 1328[0]);
			CLEAR_AMBIENT_OBJECTS_VOLUME(&iLocal_4 + 1328[0], 15);
			Function_525(&(Local_1126[515]), &iLocal_868, 0x5f5e100);
			bLocal_1018 = false;
			iLocal_1019 = 0;
			Function_523(&Local_872, &bLocal_1018, &iLocal_1019);
			Function_522(StackVal, StackVal, StackVal, StackVal, Function_531(), Local_872);
			switch (bLocal_1018)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000008:
					break;
				
				case 0x00000065:
					break;
			}
			break;
	}
	return;
}

void Function_522(struct<41> Param0) //Position: 0x1EA37 / 125495
{
	switch (Param0.f_40)
	{
		case 0x00000001:
			bLocal_1018 = false;
			break;
		
		case 0x00000002:
			bLocal_1018 = 2;
			break;
		
		case 0x0000000A:
			bLocal_1018 = 101;
			break;
	}
}

void Function_523(int iParam0, var uParam1, int iParam2) //Position: 0x1EA70 / 125552
{
	if (Function_246(&iParam0))
	{
		uParam1 = Function_337(&iParam0);
		if (uParam1 == 4294967295)
		{
			uParam1 = 0;
		}
		if (uParam1 == 99)
		{
			uParam1 = 0;
			iParam2 = 0;
		}
		Function_524();
	}
	return;
}

void Function_524() //Position: 0x1EAAC / 125612
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

int Function_525(struct<69> Param0) //Position: 0x1EAFD / 125693
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
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
	Function_77();
	Function_77();
	Param0 = CREATE_POINT_IN_LAYOUT(&iParam1, "nMFT_Dummy", Function_77(), Function_77());
	if (!IS_OBJECT_VALID(&Param0))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_TARGET_DUMMY: Object invalid!");
		return 0;
	}
	Param0.f_56 = 8;
	Param0.f_60 = 2;
	if (!Function_405(&Param0, "nMFT_Dummy"))
	{
		return 0;
	}
	Function_404(&Param0, 0);
	Param0.f_68 = 0;
	Function_403(&Param0, &iParam2, 0);
	Function_398(&Param0, 3);
	return 1;
}

void Function_526() //Position: 0x1EC1E / 125982
{
	UNK_0xAC72E757(1);
	iLocal_1516 = 6;
	iLocal_1518 = 6;
	uLocal_1446 = &uLocal_1446;
	uLocal_1456 = &uLocal_1456;
	Function_530();
	Function_529();
	Function_527(&uLocal_1072, &iLocal_868);
	Function_402(&(Local_1126[015]), &iLocal_1023, "Henchman", 0, 0x5f5e100, 1);
	Function_398(&(Local_1126[215]), 2);
	iLocal_1672 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "m_sMexCavEscortTrain"));
	iLocal_1674 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "m_sMexCavReturn"));
	iLocal_1662 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "m_sRebelInf"));
	iLocal_1670 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "m_sRebCavAprRight"));
	iLocal_1668 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "m_sRebCavAprLeft"));
	iLocal_1664 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "m_sRebCavAttRight"));
	iLocal_1666 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iLocal_4, "m_sRebCavAttLeft"));
	return;
}

int Function_527(struct<2>[] Param0) //Position: 0x1ED5B / 126299
{
	if (!IS_LAYOUTREF_VALID(&iParam1))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Layout invalid!");
		return 0;
	}
	if (!Function_528(&(Param0[02]), &iParam1, "MFE_etDeath", 2, 7))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eDeath' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[12]), &iParam1, "MFE_etProjHit", 5, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[12]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eProjectileHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[22]), &iParam1, "MFE_etAttachHit", 9, 9))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[22]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eAttachmentHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[32]), &iParam1, "MFE_etBurn", 110, 17))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[32]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eBurn' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[42]), &iParam1, "MFE_etExpHit", 91, 33))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[42]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eExplosionHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[52]), &iParam1, "MFE_etLassoAttach", 47, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[52]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoAttached' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[62]), &iParam1, "MFE_etLassoTD", 49, 65))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[62]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eLassoTakeDown' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[72]), &iParam1, "MFE_etMeleeHit", 7, 129))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[72]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeHit' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[82]), &iParam1, "MFE_etMeleeShove", 8, 257))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[82]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eMeleeShove' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[92]), &iParam1, "MFE_etHorseHijack", 20, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[92]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderAnimalHijack' event unsuccessful!");
		return 0;
	}
	if (Function_528(&(Param0[102]), &iParam1, "MFE_etVehicleHijack", 24, 513))
	{
		EVENT_TRAP_ON_PERPETRATOR(&(Param0[102]), &Global_54076);
	}
	else
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eRiderVehicleHijack' event unsuccessful!");
		return 0;
	}
	if (!Function_528(&(Param0[112]), &iParam1, "MFE_etHitByHorse", 87, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByHorse' event unsuccessful!");
		return 0;
	}
	if (!Function_528(&(Param0[122]), &iParam1, "MFE_etHitByVehicle", 88, 1025))
	{
		LOG_ERROR("SETUP_MISSION_FAIL_EVENTS: Setup for 'eHitByVehicle' event unsuccessful!");
		return 0;
	}
	return 1;
}

bool Function_528(struct<13> Param0) //Position: 0x1F434 / 128052
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
	Function_78(&Param0 + 12, iParam4);
	return 1;
}

void Function_529() //Position: 0x1F503 / 128259
{
	Function_137(&(Global_43791[Global_46866[1]]), 256);
	return;
}

void Function_530() //Position: 0x1F51A / 128282
{
	Function_137(&(Global_43791[Global_46866[0]]), 256);
	return;
}

var Function_531() //Position: 0x1F531 / 128305
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	Function_302(4, 1);
	uVar0 = &uVar0;
	iLocal_4 = CREATE_LAYOUT("MexArmy02_layout");
	(&iLocal_4 + 1384) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1328[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(76,89383f, 93,48872f, 2825,198f), Vector(0.0f, 16,93603f, 0.0f), Vector(87,01794f, 16,48365f, 181,6171f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1328[0]);
	*(&iLocal_4 + 1328[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(32,59366f, 99,26919f, 2748,913f), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 63,381f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1328[1]);
	*(&iLocal_4 + 1328[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-203,548f, 61,9703f, 3020,06f), Vector(0.0f, 0.0f, 4,8f), Vector(457,1776f, 1.0f, 480.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1328[2]);
	*(&iLocal_4 + 1328[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-790,8101f, 14,85291f, 3700,328f), Vector(180.0f, 46,25484f, -2,595867f), Vector(25,99133f, 8,770638f, 34,4641f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1328[3]);
	*(&iLocal_4 + 1328[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-17,57545f, 91,73593f, 3065,563f), Vector(0.0f, 16,93603f, 0.0f), Vector(63,57737f, 16,48365f, 58,1548f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1328[4]);
	*(&iLocal_4 + 1328[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-610,8046f, 14,86721f, 3537,383f), Vector(0.0f, 16,93603f, 0.0f), Vector(116,5265f, 29,26781f, 58,1548f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1384, &iLocal_4 + 1328[5]);
	*(&iLocal_4 + 1432) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1392[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-4380,061f, 38,12237f, 4362,101f), Vector(0.0f, 0.0f, 0.0f), Vector(100.0f, 50.0f, 100.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1432, &iLocal_4 + 1392[0]);
	*(&iLocal_4 + 1392[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-2626,85f, 30,14538f, 4221,708f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1432, &iLocal_4 + 1392[1]);
	*(&iLocal_4 + 1392[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(1.0f, 1.0f, 1.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1432, &iLocal_4 + 1392[2]);
	*(&iLocal_4 + 1392[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-784.0f, 13,05098f, 3728.0f), Vector(0.0f, 0.0f, 0.0f), Vector(25.0f, 25.0f, 25.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1432, &iLocal_4 + 1392[3]);
	*(&iLocal_4 + 1512) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1440[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-2297,543f, 6,023549f, 4333,28f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[0]);
	*(&iLocal_4 + 1440[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-2089,403f, 8,963179f, 4349,574f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[1]);
	*(&iLocal_4 + 1440[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1896,553f, 9,812302f, 4390,323f), Vector(0.0f, 0.0f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[2]);
	*(&iLocal_4 + 1440[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1723,727f, 9,449072f, 4357,43f), Vector(0.0f, 22,27736f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[3]);
	*(&iLocal_4 + 1440[4]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1347,181f, 21,73684f, 4148,004f), Vector(0.0f, 39,9031f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[4]);
	*(&iLocal_4 + 1440[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1252f, 11,04314f, 4104.0f), Vector(0.0f, 22,30208f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[5]);
	*(&iLocal_4 + 1440[6]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1124.0f, 8,907719f, 4032f), Vector(0.0f, 26,78057f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[6]);
	*(&iLocal_4 + 1440[7]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-1659,636f, 5,687636f, 4303,198f), Vector(0.0f, 24,09918f, 0.0f), Vector(10.0f, 25.0f, 350.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1512, &iLocal_4 + 1440[7]);
	*(&iLocal_4 + 1544) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1520[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(2,75f, 3.0f, 3.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1520[0]);
	*(&iLocal_4 + 1520[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-699,7909f, 13,37628f, 3712,787f), Vector(0.0f, -41,39167f, 0.0f), Vector(276,6093f, 25.0f, 10.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1544, &iLocal_4 + 1520[1]);
	*(&iLocal_4 + 1576) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1552[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-2772.0f, 32,12549f, 4272f), Vector(0.0f, 0.0f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1576, &iLocal_4 + 1552[0]);
	*(&iLocal_4 + 1552[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-4401,135f, 35,9181f, 4389,286f), Vector(-1,149884f, -14,54725f, 2,45635f), Vector(28,98095f, 15.0f, 25,28393f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1576, &iLocal_4 + 1552[1]);
	*(&iLocal_4 + 1640) = CREATE_VOLUME_SET_IN_LAYOUT(&iLocal_4, Function_55());
	*(&iLocal_4 + 1584[0]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-802,6964f, 13,05098f, 3717,776f), Vector(0.0f, 46,25484f, 0.0f), Vector(4.0f, 15.0f, 4.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1584[0]);
	*(&iLocal_4 + 1584[1]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-2697,189f, 32,21368f, 4207,891f), Vector(0.0f, 89,93345f, 0.0f), Vector(40.0f, 40.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1584[1]);
	*(&iLocal_4 + 1584[2]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-756.0f, 13,05098f, 3780f), Vector(0.0f, 51,79411f, 0.0f), Vector(15.0f, 15.0f, 15.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1584[2]);
	*(&iLocal_4 + 1584[3]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-778,7966f, 13,05098f, 3762,057f), Vector(0.0f, 51,79411f, 0.0f), Vector(250.0f, 50.0f, 250.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1584[3]);
	*(&iLocal_4 + 1584[5]) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iLocal_4, Function_55(), 2,802597E-45f, Vector(-2531,406f, 23,05175f, 4315,438f), Vector(0.0f, 89,93345f, 0.0f), Vector(40.0f, 40.0f, 40.0f));
	ADD_TO_VOLUME_SET(&iLocal_4 + 1640, &iLocal_4 + 1584[5]);
	*(&iLocal_4 + 1648) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1656[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-4378,868f, 38,70368f, 4360,778f), Vector(0.0f, -211,2164f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[0], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-4378,868f, 38,70368f, 4360,778f), Vector(0.0f, -249,79f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[1], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-4378,173f, 38,70368f, 4361,199f), Vector(0.0f, -208,8032f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[2], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-4379,357f, 38,63703f, 4363,291f), Vector(0.0f, 99,17556f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[3], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-4399,859f, 37,82392f, 4355,609f), Vector(0.0f, 228,3658f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[4], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-4374,239f, 38,63691f, 4363,335f), Vector(0.0f, 88,87958f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[5], &iLocal_4 + 1648);
	*(&iLocal_4 + 1656[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-4376,032f, 38,8423f, 4363,623f), Vector(0.0f, 111,5438f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1656[6], &iLocal_4 + 1648);
	*(&iLocal_4 + 1720) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene02Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1728[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2766,104f, 32,12549f, 4260f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[0], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2766,104f, 32,12549f, 4260f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[1], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2776.0f, 32,12549f, 4268f), Vector(0.0f, -40,91803f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[2], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2776.0f, 32,12549f, 4268f), Vector(0.0f, -42,4044f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[3], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2766,657f, 32,12549f, 4269,344f), Vector(0.0f, -0,7896745f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[4], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2780f, 32,12549f, 4268f), Vector(0.0f, -10,47389f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[5], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2772f, 32,12549f, 4268f), Vector(0.0f, -5,729618f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[6], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2768f, 32,9883f, 4268f), Vector(0.0f, -51,17885f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[7], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[8]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2776f, 31,12157f, 4256f), Vector(0.0f, -29,46655f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[8], &iLocal_4 + 1720);
	*(&iLocal_4 + 1728[9]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2764f, 32,12549f, 4256f), Vector(0.0f, 36,87042f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1728[9], &iLocal_4 + 1720);
	*(&iLocal_4 + 1816) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene03Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1824[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-791,765f, 13,05097f, 3711,603f), Vector(0.0f, 120.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1824[0], &iLocal_4 + 1816);
	*(&iLocal_4 + 1824[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-800.0f, 13,05097f, 3720f), Vector(0.0f, 249,0625f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1824[1], &iLocal_4 + 1816);
	*(&iLocal_4 + 1824[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-792.0f, 13,05097f, 3700f), Vector(0.0f, 231,3009f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1824[2], &iLocal_4 + 1816);
	*(&iLocal_4 + 1824[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-803,905f, 13,05098f, 3710,75f), Vector(0.0f, -130,19f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1824[3], &iLocal_4 + 1816);
	*(&iLocal_4 + 1824[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-808,3735f, 13,05097f, 3714,888f), Vector(0.0f, 405,4241f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1824[4], &iLocal_4 + 1816);
	*(&iLocal_4 + 1872) = CREATE_OBJECTSET_IN_LAYOUT("Cutscene09Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1880[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(72,00002f, 94,41074f, 2864.0f), Vector(0.0f, 353,304f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[0], &iLocal_4 + 1872);
	*(&iLocal_4 + 1880[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(72,00004f, 91,54297f, 2960.0f), Vector(0.0f, -10,1075f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[1], &iLocal_4 + 1872);
	*(&iLocal_4 + 1880[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(51,74f, 94,56f, 2775,7f), Vector(0.0f, 217,8f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[2], &iLocal_4 + 1872);
	*(&iLocal_4 + 1880[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(72,00003f, 94,22006f, 2860,001f), Vector(0.0f, -10,1075f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[3], &iLocal_4 + 1872);
	*(&iLocal_4 + 1880[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(68,00005f, 94,87612f, 2900.0f), Vector(0.0f, 15,62845f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[4], &iLocal_4 + 1872);
	*(&iLocal_4 + 1880[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(60,41062f, 94,36859f, 2800,281f), Vector(0.0f, 15,62845f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1880[5], &iLocal_4 + 1872);
	*(&iLocal_4 + 1936) = CREATE_OBJECTSET_IN_LAYOUT("CutsceneLastSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1944[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(48,0001f, 94,36859f, 2780.0f), Vector(0.0f, -40,22651f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[0], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(49,84208f, 94,50358f, 2771,754f), Vector(0.0f, -143,0651f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[1], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(46,33875f, 94,36859f, 2779,184f), Vector(0.0f, 314,7603f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[2], &iLocal_4 + 1936);
	*(&iLocal_4 + 1944[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(46,33875f, 94,36859f, 2779,184f), Vector(0.0f, 314,7603f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1944[3], &iLocal_4 + 1936);
	*(&iLocal_4 + 1984) = CREATE_OBJECTSET_IN_LAYOUT("TrainPointsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 1992[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2635,951f, 31,45428f, 4229,752f), Vector(0.0f, 243,9694f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[0], &iLocal_4 + 1984);
	*(&iLocal_4 + 1992[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-771,559f, 13,43f, 3763,302f), Vector(0.0f, 309,0989f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[1], &iLocal_4 + 1984);
	*(&iLocal_4 + 1992[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-636,0233f, 15,31186f, 3582,619f), Vector(0.0f, 350.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[2], &iLocal_4 + 1984);
	*(&iLocal_4 + 1992[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(51,55246f, 94,87237f, 2767,482f), Vector(0.0f, 30.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[3], &iLocal_4 + 1984);
	*(&iLocal_4 + 1992[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(75,50539f, 94,10248f, 2807,585f), Vector(0.0f, 20.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[4], &iLocal_4 + 1984);
	*(&iLocal_4 + 1992[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(32,74274f, 94,386f, 2740,854f), Vector(0.0f, 30.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[5], &iLocal_4 + 1984);
	*(&iLocal_4 + 1992[6]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(48,432f, 94,704f, 2763,485f), Vector(0.0f, -182,2088f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[6], &iLocal_4 + 1984);
	*(&iLocal_4 + 1992[7]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1646,272f, 7,684686f, 4282,329f), Vector(0.0f, 320,1085f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 1992[7], &iLocal_4 + 1984);
	*(&iLocal_4 + 2064) = CREATE_OBJECTSET_IN_LAYOUT("FlagStage06Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2072[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(27,04836f, 93,348f, 2733,187f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[0], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(42,356f, 94,338f, 2754,992f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[1], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(34,1716f, 94,39109f, 2745,927f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[2], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(17,95124f, 88,47893f, 2729,693f), Vector(0.0f, 40,8548f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[3], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[4]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(4,349076f, 0.0f, -4,249575f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[4], &iLocal_4 + 2064);
	*(&iLocal_4 + 2072[5]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(31,507f, 94,386f, 2741,567f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2072[5], &iLocal_4 + 2064);
	*(&iLocal_4 + 2128) = CREATE_OBJECTSET_IN_LAYOUT("TrainGringoLocatorsSet", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2136[03]) = Vector(-0,9528465f, 1,14288f, 4,973906f);
	*(&iLocal_4 + 2136[03] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar1 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-0,9528465f, 1,14288f, 4,973906f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar1, &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[13]) = Vector(0,9285078f, 1,14288f, 4,973906f);
	*(&iLocal_4 + 2136[13] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar2 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(0,9285078f, 1,14288f, 4,973906f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar2, &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[23]) = Vector(0,011f, 1,419f, 3,13f);
	*(&iLocal_4 + 2136[23] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar3 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(0,011f, 1,419f, 3,13f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar3, &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[33]) = Vector(-1.0f, 0,9787322f, 3,297404f);
	*(&iLocal_4 + 2136[33] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar4 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-1.0f, 0,9787322f, 3,297404f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar4, &iLocal_4 + 2128);
	*(&iLocal_4 + 2136[43]) = Vector(1.0f, 0,9787322f, 3,297404f);
	*(&iLocal_4 + 2136[43] + 12) = Vector(0.0f, 0.0f, 0.0f);
	uVar5 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(1.0f, 0,9787322f, 3,297404f), Vector(0.0f, 0.0f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&uVar5, &iLocal_4 + 2128);
	*(&iLocal_4 + 2264) = CREATE_OBJECTSET_IN_LAYOUT("FlagStage01Set", &iLocal_4, 8, 0);
	*(&iLocal_4 + 2272[0]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2560.0f, 28,85841f, 4268f), Vector(0.0f, -118,0525f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[0], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[1]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2792,23f, 30,87127f, 4442,212f), Vector(0.0f, 34,33389f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[1], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[2]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2800,298f, 30,95926f, 4416,535f), Vector(0.0f, -13,74221f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[2], &iLocal_4 + 2264);
	*(&iLocal_4 + 2272[3]) = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), Vector(-2793,436f, 30,95926f, 4405,797f), Vector(0.0f, -14,49776f, 0.0f));
	ADD_OBJECT_TO_OBJECTSET(&iLocal_4 + 2272[3], &iLocal_4 + 2264);
	*(&iLocal_4 + 2312) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "jump_from_horse", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2320) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "jump_from_horse", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2328) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "jump_from_horse", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2336) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "jump_from_horse", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2344) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "train_lever", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2352) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "train_climb_left", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	*(&iLocal_4 + 2360) = CREATE_GRINGO_IN_LAYOUT(StackVal, StackVal, &iLocal_4, Function_55(), "train_climb_right", Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
	PushArrayP();
	*(&iLocal_4 + 2368) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_55());
	PushArrayP();
	*(&iLocal_4 + 2376) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_55());
	PushArrayP();
	*(&iLocal_4 + 2384) = CREATE_PATH_IN_LAYOUT_FROM_TABLE(StackVal, &iLocal_4, Function_55());
}

struct<276> Function_532(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173) //Position: 0x21661 / 136801
{
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
}

struct<8> ÍÍE)GÅ-'4B EÀÅ-@B E`,Ï:B	X°:¯R(.p  Å- B EÎ<Å,À B #EÀÅ+À AøøøE Å*ÎxAÿô¾E¸Å) Aøù E@ Å&À A÷ËêE` Å#ö»AòµSE3ñÅ#  Aç?ÙEÅ!lPAÞìE@Å2úAÀâE]ÅAo8Eÿ¾ÅÉúAHwE?ýÅ¿A(¬E}mÅ·$AøUEa\Åöª@þÎSEÀÅ@@ÕÚ:E@ ÅXÍ@ä³ïE¼Å(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87) //Position: 0x21769 / 137065
{
	int iVar41958;
	
	stradd((StackVal - StackVal), StackVal, 83);
	return StackVal * 248, 4.0f;
	return StackVal, StackVal * -30847;
	return StackVal >= StackVal, &iVar41958, 3 * -30873;
	PatchTrapB();
	Stack.Peek()->f_64 = StackVal != StackVal > (StackVal + StackVal < FloatToInt(StackVal > StackVal) * 208 * -30887) * 183 * -30912;
	Global_4556630 = StackVal;
	Global_15941849 = !6;
}

void Function_534(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x221F4 / 139764
{
	var uVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		SET_CRIPPLE_ENABLE(&uParam0, &uParam4);
		SET_ACTOR_ALLOW_DISARM(&uParam0, &uParam1);
		DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&uParam0), "CanBeLasso", &uParam3);
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

var Function_535(int iParam0, var uParam1) //Position: 0x22255 / 139861
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!Function_392(iParam0))
	{
		return "";
	}
	if (!IS_LAYOUTREF_VALID(&uParam1))
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
						Function_536(&uVar2, &uParam1);
						return &uVar2;
					}
				}
			}
		}
		bVar0++;
	}
	return "";
}

void Function_536(var uParam0, int iParam1) //Position: 0x222E3 / 140003
{
	Function_538(&uParam0);
	Function_537(&uParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &iParam1);
	return;
}

void Function_537(int iParam0) //Position: 0x2230F / 140047
{
	DEREFERENCE_ACTOR(&iParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref");
	return;
}

void Function_538(int iParam0) //Position: 0x22335 / 140085
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

var Function_539(int iParam0, var uParam1) //Position: 0x2240B / 140299
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
				if (GET_ACTOR_ENUM(&uVar2) == iParam0)
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

int Function_540() //Position: 0x224B1 / 140465
{
	Function_340(&iLocal_4 + 8, 380, 2, 0);
	Function_340(&iLocal_4 + 8, 381, 2, 0);
	Function_340(&iLocal_4 + 8, 976, 2, 0);
	Function_340(&iLocal_4 + 8, 977, 2, 0);
	Function_340(&iLocal_4 + 8, 980, 2, 0);
	Function_340(&iLocal_4 + 8, 1196, 2, 0);
	Function_300(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/jump_from_horse", 1, 0);
	Function_300(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/train_lever", 1, 0);
	Function_300(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/train_climb_left", 1, 0);
	Function_300(&iLocal_4 + 8, "$/content/scripting/gringo/simplegringo/train_climb_right", 1, 0);
	if (Function_295(&iLocal_4 + 8))
	{
		return 1;
	}
	return 0;
}

int Function_541(bool bParam0) //Position: 0x22621 / 140833
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

void Function_542() //Position: 0x22651 / 140881
{
	Function_340(&iLocal_884, 1166, 2, 0);
	Function_340(&iLocal_884, 1167, 2, 0);
	Function_340(&iLocal_884, 1164, 2, 0);
	Function_340(&iLocal_884, 1156, 2, 0);
	Function_340(&iLocal_884, 1160, 2, 0);
	Function_340(&iLocal_884, 1162, 2, 0);
	Function_300(&iLocal_884, "steamerExplodeMain01x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment01x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment02x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment03x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment04x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment05x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment06x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment07x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment08x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment09x", 0, 0);
	Function_300(&iLocal_884, "steamerExplodeFragment10x", 0, 0);
	Function_300(&iLocal_884, "p_gen_crateMultiplayerWeapon01x", 0, 0);
	Function_300(&iLocal_884, "p_gen_crate01x", 0, 0);
	Function_300(&iLocal_884, "nmexarmy02", 10, 0);
	return;
}

void Function_543(int iParam0, bool bParam1) //Position: 0x2288D / 141453
{
	char* cVar0;
	struct<4> Var1;
	char* cVar5[24];
	
	SET_IS_MISSION_SCRIPT(1);
	Function_549(0, 0);
	Global_42259 = 1;
	SET_TIME_ACCELERATION(Global_99471);
	if (!Function_246(&iParam0))
	{
		Global_53524.f_64 = 0;
		Global_53524.f_48 = 99;
		Function_98();
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
	if (!Function_246(&iParam0))
	{
		AUDIO_CLEAR_CONVERSATION_HISTORY();
		AUDIO_RESET_SCRIPTED_SPEECH_HISTORY();
	}
	SET_EXCLUSIVE_JOURNAL_ID(&Var1);
	Function_219();
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	Function_253();
	Function_240();
	Function_551("");
	Function_548(0);
	Function_547();
	Function_212();
	Function_211();
	ENABLE_JOURNAL_REPLAY(0);
	Function_546();
	SET_PLAYER_CONTROL(0, 0, 0, 0);
	AI_STOP_IGNORING_ACTOR(&Global_54076);
	AI_CLEAR_DONT_HARM_ACTOR(&Global_54076);
	SET_NPC_TO_ACTOR_DAMAGE_SCALE_FACTOR(&Global_54076, 0.0f);
	SET_FACTIONS_STATUS_TWO_WAY(20, 2, 0);
	AUDIO_ADD_TO_PLAYER_DISABLED_CONTEXT_LIST("PLAYER_BUMP");
	if (IS_ACTOR_VALID(Function_258(0, 0, 0, 0, 0, 0, 1, 0)))
	{
		Function_281(0, 0x40400000);
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
	Function_545(13);
	Function_545(14);
	Function_545(25);
	Function_545(24);
	Function_545(12);
	Function_545(27);
	Function_545(26);
	Function_545(15);
	Function_544();
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

void Function_544() //Position: 0x22CCD / 142541
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

void Function_545(int iParam0) //Position: 0x22D52 / 142674
{
	if (iParam0 >= 4294967295 || iParam0 <= 32)
	{
		return;
	}
	Global_47080[iParam0] = 0;
	Global_47147 = 1;
	return;
}

void Function_546() //Position: 0x22D72 / 142706
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

void Function_547() //Position: 0x22DB8 / 142776
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_548(int iParam0) //Position: 0x22DCE / 142798
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_215())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_549(int iParam0, int iParam1) //Position: 0x22E07 / 142855
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
			Function_550(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_550(struct<113> Param0) //Position: 0x22E8E / 142990
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

void Function_551(char* cParam0) //Position: 0x22EEC / 143084
{
	PRINTSTRING("SET_MISSION_FAIL_STRING - mission fail string = ");
	PRINTSTRING(&cParam0);
	PRINTNL();
	strcpy(&Global_10969, &cParam0, 32);
	UI_SET_STRING("MissionFailedBuffer", UI_GET_STRING(&Global_10969));
	return;
}

bool Function_552(int iParam0) //Position: 0x22F58 / 143192
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_553(struct<25> Param0) //Position: 0x22F76 / 143222
{
	switch (Param0.f_24)
	{
		case 0x00000004:
			switch (Param0.f_16)
			{
				case 0x00000000:
					Function_563();
					break;
				
				case 0x00000001:
					if (Param0)
					{
						Function_562();
					}
					else
					{
						Function_561();
					}
					break;
				
				case 0x00000005:
					if (Function_560(&Param0 + 8) == &iLocal_868 && Function_560(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_473();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_ShootsRandChup", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 0x00000008:
			switch (Param0.f_16)
			{
				case 0x00000000:
					Function_559();
					break;
				
				case 0x00000001:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_ShootsWagHorsNoKil", "MexArmy02_ShootsWagHorsNoKil", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						Function_558();
					}
					break;
				
				case 0x00000002:
					Function_557();
					break;
				
				case 0x00000003:
					break;
				
				case 0x00000005:
					if (Function_560(&Param0 + 8) == &iLocal_868 && Function_560(&Param0 + 8) == &iLocal_4)
					{
						if (!IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							Function_473();
						}
						else
						{
							SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_ShootsRandChup", "", 0, 1, 0, 3, 0, 0, 0, 1000, 0, 0);
						}
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
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_AssaultsSantaChup", "MexArmy02_AssaultsSantaChup", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						Function_556();
					}
					break;
				
				case 0x00000001:
					break;
				
				case 0x00000002:
					if (IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SAY_SINGLE_LINE_STRING_SCRIPTED_INTERRUPT(&iLocal_1023, "MexArmy02_AssaultOnSantaMenChu", "MexArmy02_AssaultOnSantaMenChu", 0, 1, 0, 0, 0, 0, 0, 1000, 0, 0);
					}
					else
					{
						Function_555();
					}
					break;
				
				case 0x00000003:
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
			Function_554(&Param0, 1);
			return 1;
		}
	}
	Function_554(&Param0, 0);
	return 0;
}

void Function_554(struct<25> Param0) //Position: 0x23268 / 143976
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

void Function_555() //Position: 0x23293 / 144019
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AssaultOnSantaMenChu", "MexArmy02_AssaultOnSantaMenChu", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_556() //Position: 0x232F8 / 144120
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_AssaultsSantaChup", "MexArmy02_AssaultsSantaChup", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_557() //Position: 0x23357 / 144215
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsSantaMenChu", "MexArmy02_ShootsSantaMenChu", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_558() //Position: 0x233B6 / 144310
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsWagHorsNoKil", "MexArmy02_ShootsWagHorsNoKil", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_559() //Position: 0x23417 / 144407
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_ShootsDeSantaChup", "MexArmy02_ShootsDeSantaChup", false, 1, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

int Function_560(var uParam0) //Position: 0x23476 / 144502
{
	var uVar0;
	
	if (IS_OBJECT_VALID(&uParam0))
	{
		if (GET_OBJECT_TYPE(&uParam0) == 1)
		{
			uVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
		}
		while (!IS_LAYOUTREF_VALID(&uVar0) && IS_OBJECT_VALID(&uParam0))
		{
			uParam0 = GET_OBJECT_OWNER(&uParam0);
			if (GET_OBJECT_TYPE(&uParam0) == 1)
			{
				uVar0 = GET_LAYOUT_FROM_OBJECT(&uParam0);
			}
		}
		if (IS_LAYOUTREF_VALID(&uVar0))
		{
			return &uVar0;
		}
	}
	return "";
}

void Function_561() //Position: 0x234DD / 144605
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_Kills1WagHors", "MexArmy02_Kills1WagHors", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_562() //Position: 0x23534 / 144692
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_KillsWagHorsFail", "MexArmy02_KillsWagHorsFail", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

void Function_563() //Position: 0x23591 / 144785
{
	ABORT_SCRIPTED_CONVERSATION(1);
	if (NEW_SCRIPTED_CONVERSATION())
	{
		ADD_LINE_TO_CONVERSATION(true, "MexArmy02_KillsSantaTrain", "MexArmy02_KillsSantaTrain", false, 2, 1, 0, 1);
		Function_318(3);
		START_SCRIPT_CONVERSATION(true, 1);
	}
	return;
}

bool Function_564(struct<15>[] Param0, struct<2>[] Param1, struct<21> Param2) //Position: 0x235EC / 144876
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
		Function_554(&Param2, 0);
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (IS_OBJECT_VALID(&(Param1[iVar02])))
		{
			if (EVENT_TRAP_SUCCESSFUL_TRAP(&(Param1[iVar02])))
			{
				Function_583(&uParam3);
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
											if ((iVar7 != 0 || (iVar7 != 1 && Function_582(&(Param0[iVar1615]), 2, 0))) || (iVar7 != 2 && Function_582(&(Param0[iVar1615]), 4, 0)))
											{
												bVar17 = Function_568(&(Param0[iVar1615]), &(Param1[iVar02]), &uVar3, iVar7, bParam4);
												if (bVar17 >= 0)
												{
													if (Function_14(bVar17, 1))
													{
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														Function_554(&Param2, 0);
														return 0;
													}
													if (Function_14(bVar17, 2))
													{
														Function_567(&bVar17);
														(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_566(&Param2, bVar17, Param1[iVar02].f_12);
														EVENT_TRAP_CLEAR_TRAP_FLAG(&(Param1[iVar02]));
														EVENT_TRAP_CLEAR_EVENTS(&(Param1[iVar02]));
														return 1;
													}
													if (Function_14(bVar17, 4))
													{
														Function_567(&bVar17);
														strcpy(&cVar18, "", 64);
														Function_565(StackVal, StackVal, StackVal, StackVal, StackVal, &cVar18, bVar17, *(&Param0[iVar1615] + 8));
														Function_551(&cVar18);
														Param2 = 1;
														*(&Param2 + 8) = &uVar3;
														Param2.f_16 = iVar16;
														Param2.f_20 = 0;
														Function_566(&Param2, bVar17, Param1[iVar02].f_12);
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
	Function_554(&Param2, 0);
	return 0;
}

void Function_565(char* cParam0) //Position: 0x23A02 / 145922
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

void Function_566(struct<25> Param0) //Position: 0x23AF6 / 146166
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
			Function_39(&iParam2, 4);
			break;
		
		case 0x00000010:
		case 0x00000020:
		case 0x00000100:
		case 0x00000200:
			Function_39(&iParam2, 2);
			break;
	}
	Function_39(&iParam2, 1);
	Param0.f_24 = iParam2;
	return;
}

void Function_567(bool bParam0) //Position: 0x23B6E / 146286
{
	int iVar0;
	
	iVar0 = bParam0;
	Function_39(&iVar0, 1);
	Function_39(&iVar0, 2);
	Function_39(&iVar0, 4);
	bParam0 = iVar0;
	return;
}

int Function_568(struct<57> Param0) //Position: 0x23B92 / 146322
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
			return Function_579(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			return Function_572(&Param0, &uParam1, &iParam2, bParam3, bParam4);
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
					bVar2 = Function_579(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
					if (bVar2 >= 1)
					{
						return Function_569(&Param0, bVar2);
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
						bVar2 = Function_579(&Param0, &uParam1, &iVar1, &iParam2, bParam3, bParam4);
						if (bVar2 >= 1)
						{
							return Function_569(&Param0, bVar2);
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

var Function_569(int iParam0, bool bParam1) //Position: 0x23D03 / 146691
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
				bParam1 = Function_571(32);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHuman", bVar0);
				bParam1 = Function_570(16);
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
				bParam1 = Function_571(512);
			}
			else
			{
				DECOR_SET_INT(&iParam0, "MFT_LimitHorse", bVar1);
				bParam1 = Function_570(256);
			}
		}
	}
	return bParam1;
}

bool Function_570(int iParam0) //Position: 0x23E3F / 147007
{
	return 2 | iParam0;
}

int Function_571(int iParam0) //Position: 0x23E49 / 147017
{
	return 4 | iParam0;
}

int Function_572(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4) //Position: 0x23E53 / 147027
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
				iParam3 = Function_578(&iParam0, &iParam1, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_78(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_570(16);
		}
	}
	if (IS_ACTOR_HORSE(&uParam2))
	{
		if (iParam3 == 0)
		{
			if (IS_ACTOR_ALIVE(&uParam2))
			{
				iParam3 = Function_573(&iParam0, &iParam1, 0, bParam4);
				if (Function_14(iParam3, 4))
				{
					Function_78(&iParam3, 2);
					Function_39(&iParam3, 4);
				}
				return iParam3;
			}
		}
		if (iParam3 == 2)
		{
			return Function_570(16);
		}
	}
	return 0;
}

int Function_573(int iParam0, vector3 vParam1) //Position: 0x23F0E / 147214
{
	int iVar0;
	
	if (((((vParam1.z != 9 || vParam1.z != 110) || vParam1.z != 49) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_577(&iParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_576(iVar0, 3, 1, bParam3))
			{
				if (!Function_582(&iParam0, 8, 1))
				{
					return Function_575(64, 1024, bParam2);
				}
			}
			return Function_574(64, 1024, bParam2);
			break;
		
		case 0x0000005B:
			if (Function_576(iVar0, 2, 1, bParam3))
			{
				if (!Function_582(&iParam0, 32, 1))
				{
					return Function_575(64, 1024, bParam2);
				}
			}
			return Function_574(64, 1024, bParam2);
			break;
		
		case 0x0000002F:
			if (Function_576(iVar0, 1, 1, bParam3))
			{
				if (!Function_582(&iParam0, 64, 1))
				{
					return Function_575(64, 1024, bParam2);
				}
			}
			return Function_574(64, 1024, bParam2);
			break;
		
		case 0x00000007:
			if (Function_576(iVar0, 3, 1, bParam3))
			{
				if (!Function_582(&iParam0, 128, 1))
				{
					return Function_575(64, 1024, bParam2);
				}
			}
			return Function_574(64, 1024, bParam2);
			break;
		
		case 0x00000057:
			if (Function_576(iVar0, 1, 1, bParam3))
			{
				if (!Function_582(&iParam0, 1024, 1))
				{
					return Function_575(64, 1024, bParam2);
				}
			}
			return Function_574(64, 1024, bParam2);
			break;
		
		case 0x00000058:
			if (Function_576(iVar0, 1, 1, bParam3))
			{
				if (!Function_582(&iParam0, 1024, 1))
				{
					return Function_575(64, 1024, bParam2);
				}
			}
			return Function_574(64, 1024, bParam2);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

var Function_574(int iParam0, int iParam1, bool bParam2) //Position: 0x240D7 / 147671
{
	if (!bParam2)
	{
		return 2 | iParam0;
	}
	return 2 | iParam1;
}

var Function_575(int iParam0, int iParam1, bool bParam2) //Position: 0x240EC / 147692
{
	if (!bParam2)
	{
		return 4 | iParam0;
	}
	return 4 | iParam1;
}

bool Function_576(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x24101 / 147713
{
	if (bParam3)
	{
		return iParam0 <= iParam1;
	}
	return iParam0 <= iParam2;
}

var Function_577(int iParam0) //Position: 0x2411E / 147742
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

int Function_578(var uParam0, vector3 vParam1) //Position: 0x24191 / 147857
{
	int iVar0;
	
	if (vParam1.z == 47)
	{
		return 1;
	}
	iVar0 = Function_577(&uParam0);
	switch (vParam1.z)
	{
		case 0x00000005:
			if (Function_576(iVar0, 3, 1, bParam2))
			{
				if (!Function_582(&uParam0, 8, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000009:
			if (Function_576(iVar0, 3, 1, bParam2))
			{
				if (!Function_582(&uParam0, 8, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x0000006E:
			if (Function_576(iVar0, 2, 1, bParam2))
			{
				if (!Function_582(&uParam0, 16, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x0000005B:
			if (Function_576(iVar0, 2, 1, bParam2))
			{
				if (!Function_582(&uParam0, 32, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000031:
			if (Function_576(iVar0, 1, 1, bParam2))
			{
				if (!Function_582(&uParam0, 64, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000007:
			if (Function_576(iVar0, 3, 1, bParam2))
			{
				if (!Function_582(&uParam0, 128, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000008:
			if (Function_576(iVar0, 2, 1, bParam2))
			{
				if (!Function_582(&uParam0, 256, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000014:
			if (Function_576(iVar0, 1, 1, bParam2))
			{
				if (!Function_582(&uParam0, 512, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000018:
			if (Function_576(iVar0, 1, 1, bParam2))
			{
				if (!Function_582(&uParam0, 512, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000057:
			if (Function_576(iVar0, 1, 1, bParam2))
			{
				if (!Function_582(&uParam0, 1024, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000058:
			if (Function_576(iVar0, 1, 1, bParam2))
			{
				if (!Function_582(&uParam0, 1024, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

int Function_579(struct<65> Param0) //Position: 0x243BA / 148410
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
						return Function_578(&Param0, &uParam1, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_582(&Param0, 2, 1))
					{
						return Function_571(8);
					}
					return Function_570(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_582(&Param0, 4, 1))
					{
						return Function_571(16);
					}
					return Function_570(16);
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
							return Function_573(&Param0, &uParam1, 1, bParam5);
						}
					}
					if (iParam4 == 1)
					{
						if (!Function_582(&Param0, 2, 1))
						{
							return Function_571(128);
						}
						return Function_570(128);
					}
					if (iParam4 == 2)
					{
						if (!Function_582(&Param0, 4, 1))
						{
							return Function_571(256);
						}
						return Function_570(256);
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
						return Function_573(&Param0, &uParam1, 0, bParam5);
					}
				}
				if (iParam4 == 1)
				{
					if (!Function_582(&Param0, 2, 1))
					{
						return Function_571(8);
					}
					return Function_570(8);
				}
				if (iParam4 == 2)
				{
					if (!Function_582(&Param0, 4, 1))
					{
						return Function_571(16);
					}
					return Function_570(16);
				}
			}
			break;
		
		case 0x00000003:
			if (bVar0)
			{
				if (iParam4 == 0)
				{
					return Function_581(&Param0, &uParam1, bParam5);
				}
				if (GET_ACTOR_IN_VEHICLE_SEAT(&iParam2, false) != &Global_54076)
				{
					if (!Function_582(&Param0, 2, 1))
					{
						return Function_571(8);
					}
					return Function_570(8);
				}
				if (!Function_582(&Param0, 4, 1))
				{
					return Function_571(16);
				}
				return Function_570(16);
			}
			if (Param0.f_64)
			{
				if (IS_ACTOR_HORSE(&iParam3))
				{
					if (GET_ACTOR_MOST_RECENT_VEHICLE(&iParam3) == &iParam2)
					{
						if (iParam4 == 0)
						{
							iParam4 = Function_573(&Param0, &uParam1, 1, bParam5);
							if (Function_14(iParam4, 4))
							{
								Function_78(&iParam4, 2);
								Function_39(&iParam4, 4);
							}
							return iParam4;
						}
						if (iParam4 == 1)
						{
							if (Function_580(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_570(128);
							}
							if (!Function_582(&Param0, 2, 1))
							{
								return Function_571(8);
							}
							return Function_570(8);
						}
						if (iParam4 == 2)
						{
							if (Function_580(&iParam2, 4294967295, 0, 4294967295))
							{
								return Function_570(256);
							}
							if (!Function_582(&Param0, 4, 1))
							{
								return Function_571(16);
							}
							return Function_570(16);
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

bool Function_580(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x246A0 / 149152
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

int Function_581(int iParam0, vector3 vParam1) //Position: 0x2476E / 149358
{
	int iVar0;
	
	if (((((((vParam1.z != 5 || vParam1.z != 9) || vParam1.z != 49) || vParam1.z != 47) || vParam1.z != 7) || vParam1.z != 8) || vParam1.z != 20) || vParam1.z != 24)
	{
		return 1;
	}
	iVar0 = Function_577(&iParam0);
	switch (vParam1.z)
	{
		case 0x0000006E:
			if (Function_576(iVar0, 2, 1, bParam2))
			{
				if (!Function_582(&iParam0, 16, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x0000005B:
			if (Function_576(iVar0, 2, 1, bParam2))
			{
				if (!Function_582(&iParam0, 32, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000057:
			if (Function_576(iVar0, 1, 1, bParam2))
			{
				if (!Function_582(&iParam0, 1024, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		case 0x00000058:
			if (Function_576(iVar0, 1, 1, bParam2))
			{
				if (!Function_582(&iParam0, 1024, 1))
				{
					return Function_571(64);
				}
			}
			return Function_570(64);
			break;
		
		default:
			return 1;
			break;
	}
	return 1;
}

bool Function_582(struct<69> Param0) //Position: 0x24890 / 149648
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

int Function_583(int iParam0) //Position: 0x248BA / 149690
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_55());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_55());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_584(int iParam0) //Position: 0x248F0 / 149744
{
	Function_354(&iParam0, 0.0f);
	return;
}

float Function_585(vector3 vParam0) //Position: 0x248FD / 149757
{
	if (Function_372(&vParam0))
	{
		if (Function_586(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_586(bool bParam0) //Position: 0x249CA / 149962
{
	return Function_14(bParam0, 2);
}

void Function_587(struct<6> Param0, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x249D8 / 149976
{
	Param0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Param0 };
	uParam7 = uParam7;
	if (((Global_6624 && Global_99146) && !HUD_IS_FADED()) && iParam6 != 99)
	{
		STREAMING_RELEASE_MAIN_POI();
	}
}

void Function_588(int iParam0, bool bParam1, bool bParam2, var uParam3, struct<2> Param4, int iParam6) //Position: 0x24A05 / 150021
{
	if ((!CUTSCENE_MANAGER_IS_CUTSCENE_FINISHED() || CUTSCENE_MANAGER_IS_CUTFILE_LOADED()) || CUTSCENE_MANAGER_IS_CUTSCENE_LOADED())
	{
		CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
	}
	if (bParam2 != 100)
	{
		Function_589(StackVal, Param4, uParam3, &iParam6);
		Function_230(iParam0);
		bParam1 = 1;
		bParam2 = 100;
	}
}

void Function_589(struct<2> Param0, var uParam2, var uParam3) //Position: 0x24A46 / 150086
{
	struct<65> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	*(&Var0 + 44) = Param0;
	Var0.f_56 = uParam2;
	Var0.f_60 = uParam3;
	strcpy(&cVar24, "Jump position: ", 64);
	stradd(&cVar24, VECTOR_TO_STRING(&Var0 + 44), 64);
	Var0.f_64 = Function_591(StackVal, Param0, 1);
	strcpy(&cVar24, "Jump region: ", 64);
	stradd(&cVar24, Function_590(Var0.f_64), 64);
	STORE_GAME_STATE(&Var0, 48, 1);
}

var Function_590(int iParam0) //Position: 0x24AC8 / 150216
{
	if (!Function_86(iParam0))
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

var Function_591(struct<2> Param0, bool bParam2) //Position: 0x24F76 / 151414
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

struct<8> Function_592(bool bParam0) //Position: 0x24FE2 / 151522
{
	Function_335(bParam0 + 1);
	return StackVal, Function_335(bParam0 + 1);
}

int Function_593(bool bParam0) //Position: 0x24FEF / 151535
{
	return Function_334(bParam0 + 1);
}

